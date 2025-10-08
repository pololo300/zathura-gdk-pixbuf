/* SPDX-License-Identifier: Zlib */

#include "plugin.h"
#include "utils.h"

zathura_error_t image_open(zathura_document_t* document) {
  if (document == NULL) {
    return ZATHURA_ERROR_INVALID_ARGUMENTS;
  }

  zathura_error_t error = ZATHURA_ERROR_OK;

  /* format path */
  GError* gerror        = NULL;
  const char* file_path = zathura_document_get_path(document);

  if (file_path == NULL) {
    error = ZATHURA_ERROR_UNKNOWN;
    goto error_free;
  }

  GdkPixbuf* pixbuf = gdk_pixbuf_new_from_file(file_path, &gerror);

  if (pixbuf == NULL) {
    error = ZATHURA_ERROR_UNKNOWN;
    goto error_free;
  }

  zathura_document_set_data(document, pixbuf);
  zathura_document_set_number_of_pages(document, 1);

  return ZATHURA_ERROR_OK;

error_free:

  if (gerror != NULL) {
    g_error_free(gerror);
  }

  return error;
}

zathura_error_t image_free(zathura_document_t* document, void* data) {
  if (document == NULL) {
    return ZATHURA_ERROR_INVALID_ARGUMENTS;
  }

  GdkPixbuf* pixbuf = data;
  if (pixbuf != NULL) {
    g_object_unref(pixbuf);
    zathura_document_set_data(document, NULL);
  }

  return ZATHURA_ERROR_OK;
}

zathura_error_t image_save_as(zathura_document_t* document, void* data, const char* path) {
  if (document == NULL || data == NULL || path == NULL) {
    return ZATHURA_ERROR_INVALID_ARGUMENTS;
  }

  /* format path */
  char* file_uri = g_filename_to_uri(path, NULL, NULL);
  if (file_uri == NULL) {
    return ZATHURA_ERROR_UNKNOWN;
  }

  GdkPixbuf* pixbuf = data;
  const char* type  = strrchr(file_uri, '.');
  if (!type)
    return ZATHURA_ERROR_NOT_IMPLEMENTED;
  type++; // skip the dot
  // TODO: kerror ?
  GError* gerror = NULL;
  gboolean ret   = gdk_pixbuf_save(pixbuf, file_uri, type, &gerror, NULL);

  g_free(file_uri);

  return (ret == TRUE ? ZATHURA_ERROR_OK : ZATHURA_ERROR_UNKNOWN);
}

/* SPDX-License-Identifier: Zlib */

#include "plugin.h"

zathura_error_t image_init(zathura_page_t* page) {
  if (page == NULL) {
    return ZATHURA_ERROR_INVALID_ARGUMENTS;
  }

  zathura_document_t* document = zathura_page_get_document(page);
  GdkPixbuf* pixbuf            = zathura_document_get_data(document);

  if (pixbuf == NULL) {
    return ZATHURA_ERROR_UNKNOWN;
  }

  zathura_page_set_data(page, pixbuf);

  // TODO: ERROR casting?
  double width  = (double)gdk_pixbuf_get_width(pixbuf);
  double height = (double)gdk_pixbuf_get_height(pixbuf);
  zathura_page_set_width(page, width);
  zathura_page_set_height(page, height);

  return ZATHURA_ERROR_OK;
}

zathura_error_t image_clear(zathura_page_t* page, void* data) {
  if (page == NULL) {
    return ZATHURA_ERROR_INVALID_ARGUMENTS;
  }

  GdkPixbuf* pixbuf = data;
  if (pixbuf != NULL) {
    g_object_unref(pixbuf);
  }

  return ZATHURA_ERROR_OK;
}

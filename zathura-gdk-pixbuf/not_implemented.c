/* SPDX-License-Identifier: Zlib */

#include "plugin.h"
#include <zathura/types.h>

girara_tree_node_t* image_index_generate(zathura_document_t* UNUSED(document), void* UNUSED(data),
                                         zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN girara_list_t* image_attachments_get(zathura_document_t* UNUSED(document), void* UNUSED(pixbuf),
                                                   zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN zathura_error_t image_attachment_save(zathura_document_t* UNUSED(document), void* UNUSED(pixbuf),
                                                    const char* UNUSED(attachment), const char* UNUSED(filename)) {
  return ZATHURA_ERROR_NOT_IMPLEMENTED;
}

GIRARA_HIDDEN girara_list_t* image_get_information(zathura_document_t* UNUSED(document), void* UNUSED(pixbuf),
                                                   zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN girara_list_t* image_search_text(zathura_page_t* UNUSED(page), void* UNUSED(data),
                                               const char* UNUSED(text), zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN girara_list_t* image_links_get(zathura_page_t* UNUSED(page), void* UNUSED(poppler_page),
                                             zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

girara_list_t* image_form_fields_get(zathura_page_t* UNUSED(page), void* UNUSED(poppler_page), zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN girara_list_t* image_page_images_get(zathura_page_t* UNUSED(page), void* UNUSED(poppler_page),
                                                   zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN char* image_get_text(zathura_page_t* UNUSED(page), void* UNUSED(poppler_page),
                                   zathura_rectangle_t UNUSED(rectangle), zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN girara_list_t* image_get_selection(zathura_page_t* UNUSED(page), void* UNUSED(data),
                                                 zathura_rectangle_t UNUSED(rectangle), zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN cairo_surface_t* image_page_image_get_cairo(zathura_page_t* UNUSED(page), void* UNUSED(poppler_page),
                                                          zathura_image_t* UNUSED(image), zathura_error_t* error) {
  *error = ZATHURA_ERROR_OK;
  return NULL;
}

zathura_error_t image_page_get_label(zathura_page_t* UNUSED(page), void* UNUSED(data), char** UNUSED(label)) {
  return ZATHURA_ERROR_OK;
}

GIRARA_HIDDEN girara_list_t* image_page_get_signatures(zathura_page_t* UNUSED(page), void* UNUSED(data),
                                                       zathura_error_t* error) {
  *error = ZATHURA_ERROR_OK;
  return NULL;
}

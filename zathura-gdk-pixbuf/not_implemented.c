/* SPDX-License-Identifier: Zlib */

#include "plugin.h"
#include <zathura/types.h>

girara_tree_node_t* picture_index_generate(zathura_document_t* UNUSED(document), void* UNUSED(data),
                                           zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN girara_list_t* picture_attachments_get(zathura_document_t* UNUSED(document),
                                                     void* UNUSED(poppler_document), zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN zathura_error_t picture_attachment_save(zathura_document_t* UNUSED(document),
                                                      void* UNUSED(poppler_document), const char* UNUSED(attachment),
                                                      const char* UNUSED(filename)) {
  return ZATHURA_ERROR_NOT_IMPLEMENTED;
}

GIRARA_HIDDEN girara_list_t* picture_get_information(zathura_document_t* UNUSED(document),
                                                     void* UNUSED(poppler_document), zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN girara_list_t* picture_search_text(zathura_page_t* UNUSED(page), void* UNUSED(data),
                                                 const char* UNUSED(text), zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN girara_list_t* picture_links_get(zathura_page_t* UNUSED(page), void* UNUSED(poppler_page),
                                               zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

girara_list_t* picture_form_fields_get(zathura_page_t* UNUSED(page), void* UNUSED(poppler_page),
                                       zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN girara_list_t* picture_page_images_get(zathura_page_t* UNUSED(page), void* UNUSED(poppler_page),
                                                     zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN char* picture_get_text(zathura_page_t* UNUSED(page), void* UNUSED(poppler_page),
                                     zathura_rectangle_t UNUSED(rectangle), zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

GIRARA_HIDDEN girara_list_t* picture_get_selection(zathura_page_t* UNUSED(page), void* UNUSED(data),
                                                   zathura_rectangle_t UNUSED(rectangle), zathura_error_t* error) {
  if (error != NULL) {
    *error = ZATHURA_ERROR_NOT_IMPLEMENTED;
  }
  return NULL;
}

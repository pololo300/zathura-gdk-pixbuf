/* SPDX-License-Identifier: Zlib */

#include "plugin.h"

GIRARA_HIDDEN zathura_error_t picture_page_render_cairo(zathura_page_t* page, void* data, cairo_t* cairo,
                                                        bool printing) {
  if (page == NULL || data == NULL || cairo == NULL) {
    return ZATHURA_ERROR_INVALID_ARGUMENTS;
  }

  if (printing) {
    // TODO: print support
    return ZATHURA_ERROR_NOT_IMPLEMENTED;
  }

  GdkPixbuf* pixbuf = data;
  // Get image dimensions
  int width  = gdk_pixbuf_get_width(pixbuf);
  int height = gdk_pixbuf_get_height(pixbuf);

  // Optionally scale to page size (if Zathura page size is different)
  double page_width  = zathura_page_get_width(page);
  double page_height = zathura_page_get_height(page);

  // TODO: repassa makina
  // Save Cairo state
  cairo_save(cairo);

  // Scale Pixbuf to fit page if needed
  cairo_scale(cairo, page_width / width, page_height / height);

  // Draw Pixbuf onto Cairo context
  gdk_cairo_set_source_pixbuf(cairo, pixbuf, 0, 0);
  cairo_paint(cairo);

  // Restore Cairo state
  cairo_restore(cairo);

  return ZATHURA_ERROR_OK;
}

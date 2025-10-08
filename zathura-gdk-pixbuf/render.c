/* SPDX-License-Identifier: Zlib */

#include "plugin.h"

GIRARA_HIDDEN zathura_error_t image_page_render_cairo(zathura_page_t* page, void* data, cairo_t* cairo, bool printing) {
  if (page == NULL || data == NULL || cairo == NULL) {
    return ZATHURA_ERROR_INVALID_ARGUMENTS;
  }

  if (printing) {
    return ZATHURA_ERROR_NOT_IMPLEMENTED;
  }

  if (!GDK_IS_PIXBUF(data)) {
    return ZATHURA_ERROR_INVALID_ARGUMENTS;
  }

  GdkPixbuf* pixbuf  = GDK_PIXBUF(data);
  int width          = gdk_pixbuf_get_width(pixbuf);
  int height         = gdk_pixbuf_get_height(pixbuf);
  double page_width  = zathura_page_get_width(page);
  double page_height = zathura_page_get_height(page);

  double scale_x  = page_width / width;
  double scale_y  = page_height / height;
  double scale    = fmin(scale_x, scale_y);
  double offset_x = (page_width - width * scale) / 2.0;
  double offset_y = (page_height - height * scale) / 2.0;

  cairo_save(cairo);
  cairo_translate(cairo, offset_x, offset_y);
  cairo_scale(cairo, scale, scale);
  gdk_cairo_set_source_pixbuf(cairo, pixbuf, 0, 0);
  cairo_paint(cairo);
  cairo_restore(cairo);

  return ZATHURA_ERROR_OK;
}

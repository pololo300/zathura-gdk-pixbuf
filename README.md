# Zathura GDK Pixbuf Plugin

A simple plugin for [Zathura](url) that adds support for image files using [GdkPixbuf – 2.0](https://docs.gtk.org/gdk-pixbuf/). It lets Zathura open image formats like PNG, JPEG, JPG or TIFF natively.

## Requirements
------------

The following dependencies are required:

* `zathura` (>= 0.5.3)
* `girara`
* `gdk-pixbuf-2.0'`

## Installation
------------

To build and install the plugin using meson's ninja backend:

    meson build
    cd build
    ninja
    ninja install

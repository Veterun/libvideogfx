/********************************************************************************
  libvideogfx.hh

    This is a meta include file which includes every other include file.
 ********************************************************************************
    Copyright (C) 1999  Dirk Farin

    This program is distributed under GNU Public License (GPL) as
    outlined in the COPYING file that comes with the source distribution.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 ********************************************************************************/

#ifndef LIBVIDEOGFX_LIBVIDEOGFX_HH
#define LIBVIDEOGFX_LIBVIDEOGFX_HH

#include <libvideogfx/types.hh>
#include <libvideogfx/init.hh>
#include <libvideogfx/error.hh>
#include <libvideogfx/arch/cpu.hh>
#include <libvideogfx/containers/array.hh>
#include <libvideogfx/containers/array2.hh>
#include <libvideogfx/containers/dynarray.hh>
#include <libvideogfx/containers/heap.hh>
#include <libvideogfx/containers/queue.hh>
#include <libvideogfx/graphics/color/colorspace.hh>
#include <libvideogfx/graphics/color/img2raw.hh>
#include <libvideogfx/graphics/datatypes/bitmap.hh>
#include <libvideogfx/graphics/datatypes/image.hh>
#include <libvideogfx/graphics/datatypes/primitives.hh>
#include <libvideogfx/graphics/draw/draw.hh>
#include <libvideogfx/graphics/draw/blit.hh>
#include <libvideogfx/graphics/draw/format.hh>
#include <libvideogfx/graphics/draw/pixelops.hh>
#include <libvideogfx/graphics/draw/scale.hh>
#include <libvideogfx/graphics/fileio/jpeg.hh>
#include <libvideogfx/graphics/fileio/mpeg.hh>
#include <libvideogfx/graphics/fileio/ppm.hh>
#include <libvideogfx/graphics/fileio/uyvy.hh>
#include <libvideogfx/graphics/fileio/yuv.hh>
#include <libvideogfx/graphics/fileio/yuv_vqeg.hh>
#include <libvideogfx/graphics/fileio/imagesink.hh>
#include <libvideogfx/graphics/filters/linear.hh>
#include <libvideogfx/graphics/measure/snr.hh>
#include <libvideogfx/utility/bitmanip.hh>
#include <libvideogfx/utility/math.hh>
#include <libvideogfx/utility/refcntr.hh>
#include <libvideogfx/utility/bitstream/bitbuffer.hh>
#include <libvideogfx/utility/bitstream/bitreader.hh>
#include <libvideogfx/utility/bitstream/bitreader_fast.hh>

#ifdef HAVE_X11
#include <libvideogfx/x11/dispimg.hh>
#include <libvideogfx/x11/imgwin.hh>
#include <libvideogfx/x11/server.hh>
#include <libvideogfx/x11/draw_x11.hh>
#endif

#endif

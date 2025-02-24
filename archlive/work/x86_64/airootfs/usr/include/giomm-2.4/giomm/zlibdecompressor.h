// -*- c++ -*-
// Generated by gmmproc 2.46.2 -- DO NOT MODIFY!
#ifndef _GIOMM_ZLIBDECOMPRESSOR_H
#define _GIOMM_ZLIBDECOMPRESSOR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The giomm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/object.h>
#include <giomm/converter.h>
#include <giomm/zlibcompressor.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GZlibDecompressor GZlibDecompressor;
typedef struct _GZlibDecompressorClass GZlibDecompressorClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class ZlibDecompressor_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

class FileInfo;

/** ZlibDecompressor - Zlib decompressor.
 * ZlibDecompressor is an implementation of Converter that decompresses data
 * compressed with zlib.
 * @newin{2,34}
 */

class ZlibDecompressor : public Glib::Object, public Converter
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef ZlibDecompressor CppObjectType;
  typedef ZlibDecompressor_Class CppClassType;
  typedef GZlibDecompressor BaseObjectType;
  typedef GZlibDecompressorClass BaseClassType;

  // noncopyable
  ZlibDecompressor(const ZlibDecompressor&) = delete;
  ZlibDecompressor& operator=(const ZlibDecompressor&) = delete;

private:  friend class ZlibDecompressor_Class;
  static CppClassType zlibdecompressor_class_;

protected:
  explicit ZlibDecompressor(const Glib::ConstructParams& construct_params);
  explicit ZlibDecompressor(GZlibDecompressor* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ZlibDecompressor(ZlibDecompressor&& src) noexcept;
  ZlibDecompressor& operator=(ZlibDecompressor&& src) noexcept;

  virtual ~ZlibDecompressor() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GZlibDecompressor*       gobj()       { return reinterpret_cast<GZlibDecompressor*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GZlibDecompressor* gobj() const { return reinterpret_cast<GZlibDecompressor*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GZlibDecompressor* gobj_copy();

private:

  
protected:
    explicit ZlibDecompressor(ZlibCompressorFormat format);


public:
  
  /** Creates a new ZlibDecompressor.
   * 
   * @newin{2,24}
   * 
   * @param format The format to use for the compressed data.
   * @return A new ZlibDecompressor.
   */

  
  static Glib::RefPtr<ZlibDecompressor> create(ZlibCompressorFormat format);


  /** Retrieves the FileInfo constructed from the GZIP header data
   * of compressed data processed by @a compressor, or <tt>0</tt> if @a decompressor's
   * ZlibDecompressor::property_format() property is not ZLIB_COMPRESSOR_FORMAT_GZIP,
   * or the header data was not fully processed yet, or it not present in the
   * data stream at all.
   * 
   * @newin{2,26}
   * 
   * @return A FileInfo, or <tt>0</tt>.
   */
  Glib::RefPtr<FileInfo> get_file_info();
  
  /** Retrieves the FileInfo constructed from the GZIP header data
   * of compressed data processed by @a compressor, or <tt>0</tt> if @a decompressor's
   * ZlibDecompressor::property_format() property is not ZLIB_COMPRESSOR_FORMAT_GZIP,
   * or the header data was not fully processed yet, or it not present in the
   * data stream at all.
   * 
   * @newin{2,26}
   * 
   * @return A FileInfo, or <tt>0</tt>.
   */
  Glib::RefPtr<const FileInfo> get_file_info() const;

  /** A FileInfo containing the information found in the GZIP header
   * of the data stream processed, or <tt>0</tt> if the header was not yet
   * fully processed, is not present at all, or the compressor's
   * ZlibDecompressor::property_format() property is not ZLIB_COMPRESSOR_FORMAT_GZIP.
   * 
   * @newin{2,26}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FileInfo> > property_file_info() const;


  /** The format of the compressed data.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ZlibCompressorFormat > property_format() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::ZlibDecompressor
   */
  Glib::RefPtr<Gio::ZlibDecompressor> wrap(GZlibDecompressor* object, bool take_copy = false);
}


#endif /* _GIOMM_ZLIBDECOMPRESSOR_H */


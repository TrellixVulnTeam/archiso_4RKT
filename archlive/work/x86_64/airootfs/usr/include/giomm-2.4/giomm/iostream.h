// -*- c++ -*-
// Generated by gmmproc 2.46.2 -- DO NOT MODIFY!
#ifndef _GIOMM_IOSTREAM_H
#define _GIOMM_IOSTREAM_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The giomm Development Team
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

#include <giomm/inputstream.h>
#include <giomm/outputstream.h>
#include <giomm/asyncresult.h>
#include <giomm/cancellable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GIOStream GIOStream;
typedef struct _GIOStreamClass GIOStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class IOStream_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** @addtogroup giommEnums giomm Enums and Flags */

/** 
 *  @var IOStreamSpliceFlags IO_STREAM_SPLICE_NONE
 * Do not close either stream.
 * 
 *  @var IOStreamSpliceFlags IO_STREAM_SPLICE_CLOSE_STREAM1
 * Close the first stream after
 * the splice.
 * 
 *  @var IOStreamSpliceFlags IO_STREAM_SPLICE_CLOSE_STREAM2
 * Close the second stream after
 * the splice.
 * 
 *  @var IOStreamSpliceFlags IO_STREAM_SPLICE_WAIT_FOR_BOTH
 * Wait for both splice operations to finish
 * before calling the callback.
 * 
 *  @enum IOStreamSpliceFlags
 * 
 * GIOStreamSpliceFlags determine how streams should be spliced.
 * 
 * @newin{2,28}
 *
 * @ingroup giommEnums
 * @par Bitwise operators:
 * <tt>%IOStreamSpliceFlags operator|(IOStreamSpliceFlags, IOStreamSpliceFlags)</tt><br>
 * <tt>%IOStreamSpliceFlags operator&(IOStreamSpliceFlags, IOStreamSpliceFlags)</tt><br>
 * <tt>%IOStreamSpliceFlags operator^(IOStreamSpliceFlags, IOStreamSpliceFlags)</tt><br>
 * <tt>%IOStreamSpliceFlags operator~(IOStreamSpliceFlags)</tt><br>
 * <tt>%IOStreamSpliceFlags& operator|=(IOStreamSpliceFlags&, IOStreamSpliceFlags)</tt><br>
 * <tt>%IOStreamSpliceFlags& operator&=(IOStreamSpliceFlags&, IOStreamSpliceFlags)</tt><br>
 * <tt>%IOStreamSpliceFlags& operator^=(IOStreamSpliceFlags&, IOStreamSpliceFlags)</tt><br>
 */
enum IOStreamSpliceFlags
{
  IO_STREAM_SPLICE_NONE = 0x0,
  IO_STREAM_SPLICE_CLOSE_STREAM1 = (1 << 0),
  IO_STREAM_SPLICE_CLOSE_STREAM2 = (1 << 1),
  IO_STREAM_SPLICE_WAIT_FOR_BOTH = (1 << 2)
};

/** @ingroup giommEnums */
inline IOStreamSpliceFlags operator|(IOStreamSpliceFlags lhs, IOStreamSpliceFlags rhs)
  { return static_cast<IOStreamSpliceFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline IOStreamSpliceFlags operator&(IOStreamSpliceFlags lhs, IOStreamSpliceFlags rhs)
  { return static_cast<IOStreamSpliceFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline IOStreamSpliceFlags operator^(IOStreamSpliceFlags lhs, IOStreamSpliceFlags rhs)
  { return static_cast<IOStreamSpliceFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline IOStreamSpliceFlags operator~(IOStreamSpliceFlags flags)
  { return static_cast<IOStreamSpliceFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup giommEnums */
inline IOStreamSpliceFlags& operator|=(IOStreamSpliceFlags& lhs, IOStreamSpliceFlags rhs)
  { return (lhs = static_cast<IOStreamSpliceFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline IOStreamSpliceFlags& operator&=(IOStreamSpliceFlags& lhs, IOStreamSpliceFlags rhs)
  { return (lhs = static_cast<IOStreamSpliceFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline IOStreamSpliceFlags& operator^=(IOStreamSpliceFlags& lhs, IOStreamSpliceFlags rhs)
  { return (lhs = static_cast<IOStreamSpliceFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }


/** IOStream - Base class for implementing read/write streams.
 * IOStream represents an object that has both read and write streams.
 * Generally the two streams acts as separate input and output streams, but
 * they share some common resources and state. For instance, for seekable
 * streams they may use the same position in both streams.
 *
 * Examples of IOStream objects are SocketConnection which represents a two-way
 * network connection, and FileIOStream which represent a file handle opened in
 * read-write mode.
 *
 * To do the actual reading and writing you need to get the substreams with
 * get_input_stream() and get_output_stream().
 *
 * The IOStream object owns the input and the output streams, not the other way
 * around, so keeping the substreams alive will not keep the IOStream object
 * alive. If the IOStream object is freed it will be closed, thus closing the
 * substream, so even if the substreams stay alive they will always just return
 * a Gio::IO_ERROR_CLOSED for all operations.
 *
 * To close a stream use close() which will close the common stream object and
 * also the individual substreams. You can also close the substreams
 * themselves. In most cases this only marks the substream as closed, so
 * further I/O on it fails. However, some streams may support "half-closed"
 * states where one direction of the stream is actually shut down.
 *
 * @ingroup Streams
 *
 * @newin{2,22}
 */

class IOStream : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef IOStream CppObjectType;
  typedef IOStream_Class CppClassType;
  typedef GIOStream BaseObjectType;
  typedef GIOStreamClass BaseClassType;

  // noncopyable
  IOStream(const IOStream&) = delete;
  IOStream& operator=(const IOStream&) = delete;

private:  friend class IOStream_Class;
  static CppClassType iostream_class_;

protected:
  explicit IOStream(const Glib::ConstructParams& construct_params);
  explicit IOStream(GIOStream* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  IOStream(IOStream&& src) noexcept;
  IOStream& operator=(IOStream&& src) noexcept;

  virtual ~IOStream() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GIOStream*       gobj()       { return reinterpret_cast<GIOStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GIOStream* gobj() const { return reinterpret_cast<GIOStream*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GIOStream* gobj_copy();

private:


public:

  /**  Asyncronously splice the output stream to the input stream of @a
   * stream2, and splice the output stream of @a stream2 to the input stream of
   * this stream.
   *
   * When the operation is finished @a slot will be called. You can then call
   * splice_finish() to get the result of the operation.
   *
   * @param stream2 The second IOStream.
   * @param slot A SlotAsyncReady slot.
   * @param cancellable A Cancellable object.
   * @param flags A set of IOStreamSpliceFlags.
   * @param io_priority The io priority of the request.
   *
   * @newin{2,34}
   */
  void splice_async(const Glib::RefPtr<IOStream>& stream2,
    const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable,
    IOStreamSpliceFlags flags = Gio::IO_STREAM_SPLICE_NONE,
    int io_priority = Glib::PRIORITY_DEFAULT);
  

  /// A non-cancellable version of splice_async().
  void splice_async(const Glib::RefPtr<IOStream>& stream2,
    const SlotAsyncReady& slot,
    IOStreamSpliceFlags flags = Gio::IO_STREAM_SPLICE_NONE,
    int io_priority = Glib::PRIORITY_DEFAULT);

  
  /** Finishes an asynchronous io stream splice operation.
   * 
   * @newin{2,28}
   * 
   * @param result A AsyncResult.
   * @return <tt>true</tt> on success, <tt>false</tt> otherwise.
   */
  static bool splice_finish(const Glib::RefPtr<AsyncResult>& result);

  
  /** Gets the input stream for this object. This is used
   * for reading.
   * 
   * @newin{2,22}
   * 
   * @return A InputStream, owned by the IOStream.
   * Do not free.
   */
  Glib::RefPtr<InputStream> get_input_stream();
  
  /** Gets the output stream for this object. This is used for
   * writing.
   * 
   * @newin{2,22}
   * 
   * @return A OutputStream, owned by the IOStream.
   * Do not free.
   */
  Glib::RefPtr<OutputStream> get_output_stream();
  
  /** Closes the stream, releasing resources related to it. This will also
   * closes the individual input and output streams, if they are not already
   * closed.
   * 
   * Once the stream is closed, all other operations will return
   * IO_ERROR_CLOSED. Closing a stream multiple times will not
   * return an error.
   * 
   * Closing a stream will automatically flush any outstanding buffers
   * in the stream.
   * 
   * Streams will be automatically closed when the last reference
   * is dropped, but you might want to call this function to make sure
   * resources are released as early as possible.
   * 
   * Some streams might keep the backing store of the stream (e.g. a file
   * descriptor) open after the stream is closed. See the documentation for
   * the individual stream for details.
   * 
   * On failure the first error that happened will be reported, but the
   * close operation will finish as much as possible. A stream that failed
   * to close will still return IO_ERROR_CLOSED for all operations.
   * Still, it is important to check and report the error to the user,
   * otherwise there might be a loss of data as all data might not be written.
   * 
   * If @a cancellable is not <tt>0</tt>, then the operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, the error IO_ERROR_CANCELLED will be returned.
   * Cancelling a close will still leave the stream closed, but some streams
   * can use a faster close that doesn't block to e.g. check errors.
   * 
   * The default implementation of this method just calls close on the
   * individual input/output streams.
   * 
   * @newin{2,22}
   * 
   * @param cancellable Optional Cancellable object, <tt>0</tt> to ignore.
   * @return <tt>true</tt> on success, <tt>false</tt> on failure.
   */
  bool close(const Glib::RefPtr<Cancellable>& cancellable);

  /// A close() convenience overload.
  bool close();

  void close_async(const SlotAsyncReady&slot, const Glib::RefPtr<Cancellable>& cancellable, int io_priority=Glib::PRIORITY_DEFAULT);
  void close_async(const SlotAsyncReady& slot, int io_priority = Glib::PRIORITY_DEFAULT);
  
  
  /** Closes a stream.
   * 
   * @newin{2,22}
   * 
   * @param result A AsyncResult.
   * @return <tt>true</tt> if stream was successfully closed, <tt>false</tt> otherwise.
   */
  bool close_finish(const Glib::RefPtr<AsyncResult>& result);
  
  /** Checks if a stream is closed.
   * 
   * @newin{2,22}
   * 
   * @return <tt>true</tt> if the stream is closed.
   */
  bool is_closed() const;
  
  /** Checks if a stream has pending actions.
   * 
   * @newin{2,22}
   * 
   * @return <tt>true</tt> if @a stream has pending actions.
   */
  bool has_pending() const;
  
  /** Sets @a stream to have actions pending. If the pending flag is
   * already set or @a stream is closed, it will return <tt>false</tt> and set
   *  @a error.
   * 
   * @newin{2,22}
   * 
   * @return <tt>true</tt> if pending was previously unset and is now set.
   */
  bool set_pending();
  
  /** Clears the pending flag on @a stream.
   * 
   * @newin{2,22}
   */
  void clear_pending();


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
   * @relates Gio::IOStream
   */
  Glib::RefPtr<Gio::IOStream> wrap(GIOStream* object, bool take_copy = false);
}


#endif /* _GIOMM_IOSTREAM_H */


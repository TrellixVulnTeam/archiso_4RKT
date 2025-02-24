// -*- c++ -*-
// Generated by gmmproc 2.46.2 -- DO NOT MODIFY!
#ifndef _GIOMM_ASYNCRESULT_H
#define _GIOMM_ASYNCRESULT_H


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

#include <glibmm/interface.h>
#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GAsyncResultIface GAsyncResultIface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GAsyncResult GAsyncResult;
typedef struct _GAsyncResultClass GAsyncResultClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class AsyncResult_Class; } // namespace Gio
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

class AsyncResult;

/** A function that will be called when an asynchronous operation within GIO has been completed.
 * @param result The asynchronous function's results.
 *
 * For instance,
 * @code
 * void on_async_ready(Glib::RefPtr<AsyncResult>& result);
 * @endcode
 *
 * @newin{2,16}
 */
typedef sigc::slot<void, Glib::RefPtr<AsyncResult>& > SlotAsyncReady;

/** Provides a base class for implementing asynchronous function results.
 * Asynchronous operations are broken up into two separate operations which are chained together by a SlotAsyncReady.
 * To begin an asynchronous operation, provide a SlotAsyncReady to the asynchronous function. This callback will be triggered
 * when the operation has completed, and will be passed an AsyncResult instance filled with the details of the operation's success or
 * failure, the object the asynchronous function was started for and any error codes returned. The asynchronous callback function is then
 * expected to call the corresponding "_finish()" function with the object the function was called for, and the AsyncResult instance.
 *
 * The purpose of the "_finish()" function is to take the generic result of type AsyncResult and return the specific result that the operation
 * in question yields (e.g. a FileEnumerator for an "enumerate children" operation). If the result or error status of the operation is not needed,
 * there is no need to call the "_finish()" function and GIO will take care of cleaning up the result and error information after the
 * SlotAsyncReady returns. You may also store the AsyncResult and call "_finish()" later.
 *
 * Example of a typical asynchronous operation flow:
 * @code
 * void _theoretical_frobnitz_async(const Glib::RefPtr<Theoretical>& t,
 *                                  const SlotAsyncReady& slot);
 *
 * gboolean _theoretical_frobnitz_finish(const Glib::RefPtr<Theoretical>& t,
 *                                       const Glib::RefPtr<AsyncResult>& result);
 *
 * static void
 * on_frobnitz_result(Glib::RefPtr<AsyncResult>& result)
 * {
 *
 *   Glib::RefPtr<Glib::Object> source_object = result->get_source_object();
 *   bool success = _theoretical_frobnitz_finish(source_object, res);
 *
 *   if (success)
 *     std::cout << "Hurray" << std::endl;
 *   else
 *     std::cout << "Uh oh!" << std::endl;
 *
 *   ...
 * }
 *
 * int main (int argc, void *argv[])
 * {
 *    ...
 *
 *    _theoretical_frobnitz_async (theoretical_data,
 *                                 sigc::ptr_fun(&on_frobnitz_result) );
 *
 *    ...
 * }
 * @endcode
 *
 * The async function could also take an optional Glib::Cancellable object, allowing the calling function to cancel the asynchronous operation.
 *
 * The callback for an asynchronous operation is called only once, and is always called, even in the case of a cancelled operation.
 * On cancellation the result is a ERROR_CANCELLED error.
 *
 * Some ascynchronous operations are implemented using synchronous calls. These are run in a separate GThread, but otherwise they are sent
 * to the Main Event Loop and processed in an idle function. So, if you truly need asynchronous operations, make sure to initialize GThread.
 *
 * @newin{2,16}
 */

class AsyncResult : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef AsyncResult CppObjectType;
  typedef AsyncResult_Class CppClassType;
  typedef GAsyncResult BaseObjectType;
  typedef GAsyncResultIface BaseClassType;

  // noncopyable
  AsyncResult(const AsyncResult&) = delete;
  AsyncResult& operator=(const AsyncResult&) = delete;

private:
  friend class AsyncResult_Class;
  static CppClassType asyncresult_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  AsyncResult();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit AsyncResult(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit AsyncResult(GAsyncResult* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  AsyncResult(AsyncResult&& src) noexcept;
  AsyncResult& operator=(AsyncResult&& src) noexcept;

  virtual ~AsyncResult() noexcept;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GAsyncResult*       gobj()       { return reinterpret_cast<GAsyncResult*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GAsyncResult* gobj() const { return reinterpret_cast<GAsyncResult*>(gobject_); }

private:


public:
  

  //Note that this returns a reference, unlike most GTK+ get_*() functions,
  //so we don't need to use refreturn.
  
#ifndef GIOMM_DISABLE_DEPRECATED

  /** Gets the source object from a AsyncResult.
   * 
   * @deprecated Use get_source_object_base()
   * 
   * @return A new reference to the source object for the @a res,
   * or <tt>0</tt> if there is none.
   */
  Glib::RefPtr<Glib::Object> get_source_object();
#endif // GIOMM_DISABLE_DEPRECATED


#ifndef GIOMM_DISABLE_DEPRECATED

  /** Gets the source object from a AsyncResult.
   * 
   * @deprecated Use get_source_object_base()
   * 
   * @return A new reference to the source object for the @a res,
   * or <tt>0</tt> if there is none.
   */
  Glib::RefPtr<const Glib::Object> get_source_object() const;
#endif // GIOMM_DISABLE_DEPRECATED


  //Note that this returns a reference, unlike most GTK+ get_*() functions,
  //so we don't need to use refreturn.
  Glib::RefPtr<Glib::ObjectBase> get_source_object_base();
  Glib::RefPtr<const Glib::ObjectBase> get_source_object_base() const;

  //TODO?: gboolean g_async_result_legacy_propagate_error (GAsyncResult  *res, GError **error);

  
  /** Checks if @a res has the given @a source_tag (generally a function
   * pointer indicating the function @a res was created by).
   * 
   * @newin{2,34}
   * 
   * @param source_tag An application-defined tag.
   * @return <tt>true</tt> if @a res has the indicated @a source_tag, <tt>false</tt> if
   * not.
   */
  bool is_tagged(gpointer source_tag) const;


  // TODO: For some reason, the compiler cannot find an unwrap() for ObjectBase.
  //#m4 __CONVERSION(`Glib::RefPtr<Glib::ObjectBase>',`GObject*',__CONVERT_REFPTR_TO_P)
 

    virtual Glib::RefPtr<Glib::ObjectBase> get_source_object_vfunc();


  //TODO: is_tagged() vfunc when we can break ABI.


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
   * @relates Gio::AsyncResult
   */
  Glib::RefPtr<Gio::AsyncResult> wrap(GAsyncResult* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_ASYNCRESULT_H */


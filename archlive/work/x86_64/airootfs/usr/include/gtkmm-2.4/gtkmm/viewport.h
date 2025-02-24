// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_VIEWPORT_H
#define _GTKMM_VIEWPORT_H


#include <glibmm.h>

/* $Id: viewport.hg,v 1.3 2006/04/12 11:11:25 murrayc Exp $ */

/* viewport.h
 *
 * Copyright (C) 2002 The gtkmm Development Team
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

#include <gtkmm/bin.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkViewport GtkViewport;
typedef struct _GtkViewportClass GtkViewportClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Viewport_Class; } // namespace Gtk
namespace Gtk {
class Adjustment;

/** An adapter which makes widgets scrollable.
 *
 * @ingroup Widgets
 * @ingroup Containers
 */

class Viewport : public Bin
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Viewport CppObjectType;
  typedef Viewport_Class CppClassType;
  typedef GtkViewport BaseObjectType;
  typedef GtkViewportClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Viewport();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Viewport_Class;
  static CppClassType viewport_class_;

  // noncopyable
  Viewport(const Viewport&);
  Viewport& operator=(const Viewport&);

protected:
  explicit Viewport(const Glib::ConstructParams& construct_params);
  explicit Viewport(GtkViewport* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkViewport*       gobj()       { return reinterpret_cast<GtkViewport*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkViewport* gobj() const { return reinterpret_cast<GtkViewport*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual void on_set_scroll_adjustments(Gtk::Adjustment* hadjustment, Gtk::Adjustment* vadjustment);


private:

public:

    explicit Viewport(Adjustment& hadjustment, Adjustment& vadjustment);


  /** Returns the horizontal adjustment of the viewport.
   * @return The horizontal adjustment of @a viewport.
   */
  Gtk::Adjustment* get_hadjustment();
  
  /** Returns the horizontal adjustment of the viewport.
   * @return The horizontal adjustment of @a viewport.
   */
  const Gtk::Adjustment* get_hadjustment() const;

  
  /** Returns the vertical adjustment of the viewport.
   * @return The vertical adjustment of @a viewport.
   */
  Gtk::Adjustment* get_vadjustment();
  
  /** Returns the vertical adjustment of the viewport.
   * @return The vertical adjustment of @a viewport.
   */
  const Gtk::Adjustment* get_vadjustment() const;

  
  /** Sets the horizontal adjustment of the viewport.
   * @param adjustment A Gtk::Adjustment.
   */
  void set_hadjustment(Gtk::Adjustment* adjustment = 0);
  
  /** Sets the horizontal adjustment of the viewport.
   * @param adjustment A Gtk::Adjustment.
   */
  void set_hadjustment(Gtk::Adjustment& adjustment);

  
  /** Sets the vertical adjustment of the viewport.
   * @param adjustment A Gtk::Adjustment.
   */
  void set_vadjustment(Gtk::Adjustment* adjustment = 0);
  
  /** Sets the vertical adjustment of the viewport.
   * @param adjustment A Gtk::Adjustment.
   */
  void set_vadjustment(Gtk::Adjustment& adjustment);

  
  /** Sets the shadow type of the viewport.
   * @param type The new shadow type.
   */
  void set_shadow_type(ShadowType type);

  
  /** Gets the shadow type of the Gtk::Viewport. See
   * set_shadow_type().
   * @return The shadow type.
   */
  ShadowType get_shadow_type() const;

  
  /** Gets the bin window of the Gtk::Viewport.
   * 
   * @newin{2,20}
   * @return A Gdk::Window.
   */
  Glib::RefPtr<Gdk::Window> get_bin_window();
  
  /** Gets the bin window of the Gtk::Viewport.
   * 
   * @newin{2,20}
   * @return A Gdk::Window.
   */
  Glib::RefPtr<const Gdk::Window> get_bin_window() const;

  
  /** Gets the view window of the Gtk::Viewport.
   * 
   * @newin{2,22}
   * @return A Gdk::Window.
   */
  Glib::RefPtr<Gdk::Window> get_view_window();
  
  /** Gets the view window of the Gtk::Viewport.
   * 
   * @newin{2,22}
   * @return A Gdk::Window.
   */
  Glib::RefPtr<const Gdk::Window> get_view_window() const;

  
  /**
   * @par Prototype:
   * <tt>void on_my_%set_scroll_adjustments(Gtk::Adjustment* hadjustment, Gtk::Adjustment* vadjustment)</tt>
   */

  Glib::SignalProxy2< void,Gtk::Adjustment*,Gtk::Adjustment* > signal_set_scroll_adjustments();


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The GtkAdjustment that determines the values of the horizontal position for this viewport.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Gtk::Adjustment*> property_hadjustment() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The GtkAdjustment that determines the values of the horizontal position for this viewport.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gtk::Adjustment*> property_hadjustment() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The GtkAdjustment that determines the values of the vertical position for this viewport.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Gtk::Adjustment*> property_vadjustment() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The GtkAdjustment that determines the values of the vertical position for this viewport.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gtk::Adjustment*> property_vadjustment() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Determines how the shadowed box around the viewport is drawn.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<ShadowType> property_shadow_type() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Determines how the shadowed box around the viewport is drawn.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<ShadowType> property_shadow_type() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

}  /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Viewport
   */
  Gtk::Viewport* wrap(GtkViewport* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_VIEWPORT_H */


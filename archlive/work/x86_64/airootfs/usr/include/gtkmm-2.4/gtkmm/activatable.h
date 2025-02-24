// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_ACTIVATABLE_H
#define _GTKMM_ACTIVATABLE_H


#include <glibmm.h>

/* $Id: activatable.hg,v 1.3 2006/05/18 17:53:15 murrayc Exp $ */

/* Copyright (C) 2009 The gtkmm Development Team
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

#include <gtkmm/action.h>
#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkActivatableIface GtkActivatableIface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkActivatable GtkActivatable;
typedef struct _GtkActivatableClass GtkActivatableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Activatable_Class; } // namespace Gtk
namespace Gtk
{

//TODO: Use this when we can add new base classes to existing classes.
/** Activatable widgets can be connected to a Gtk::Action and reflect the state 
 * of the action. An Activatable can also provide feedback through its action, 
 * as it is responsible for activating the related action.
 *
 * @newin{2,16}
 */

class Activatable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Activatable CppObjectType;
  typedef Activatable_Class CppClassType;
  typedef GtkActivatable BaseObjectType;
  typedef GtkActivatableIface BaseClassType;

private:
  friend class Activatable_Class;
  static CppClassType activatable_class_;

  // noncopyable
  Activatable(const Activatable&);
  Activatable& operator=(const Activatable&);

protected:
  Activatable(); // you must derive from this class

  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Activatable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Activatable(GtkActivatable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Activatable();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkActivatable*       gobj()       { return reinterpret_cast<GtkActivatable*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkActivatable* gobj() const { return reinterpret_cast<GtkActivatable*>(gobject_); }

private:


public:
  
  /** This is a utility function for Gtk::Activatable implementors.
   * 
   * When implementing Gtk::Activatable you must call this when
   * handling changes of the Gtk::Activatable:related-action, and
   * you must also use this to break references in Object->dispose().
   * 
   * This function adds a reference to the currently set related
   * action for you, it also makes sure the Gtk::Activatable->update()
   * method is called when the related Gtk::Action properties change
   * and registers to the action's proxy list.
   * 
   * <note>Be careful to call this before setting the local
   * copy of the Gtk::Action property, since this function uses 
   * gtk_activatable_get_action() to retrieve the previous action</note>
   * 
   * @newin{2,16}
   * @param action The Gtk::Action to set.
   */
  void do_set_related_action(const Glib::RefPtr<Action>& action);
  
  /** Gets the related Gtk::Action for @a activatable.
   * 
   * @newin{2,16}
   * @return The related Gtk::Action if one is set.
   */
  Glib::RefPtr<Action> get_related_action();
  
  /** Gets the related Gtk::Action for @a activatable.
   * 
   * @newin{2,16}
   * @return The related Gtk::Action if one is set.
   */
  Glib::RefPtr<const Action> get_related_action() const;
  
  /** Gets whether this activatable should reset its layout
   * and appearance when setting the related action or when
   * the action changes appearance.
   * 
   * @newin{2,16}
   * @return Whether @a activatable uses its actions appearance.
   */
  bool get_use_action_appearance() const;
  
  /** This is called to update the activatable completely, this is called
   * internally when the Gtk::Activatable::related-action property is set
   * or unset and by the implementing class when
   * Gtk::Activatable::use-action-appearance changes.
   * 
   * @newin{2,16}
   * @param action The related Gtk::Action or <tt>0</tt>.
   */
  void sync_action_properties(const Glib::RefPtr<Action>& action);
  
  /** Sets the related action on the @a activatable object.
   * 
   * <note>Gtk::Activatable implementors need to handle the Gtk::Activatable:related-action
   * property and call do_set_related_action() when it changes.</note>
   * 
   * @newin{2,16}
   * @param action The Gtk::Action to set.
   */
  void set_related_action(const Glib::RefPtr<Action>& action);
  
  /** Sets whether this activatable should reset its layout and appearance
   * when setting the related action or when the action changes appearance
   * 
   * <note>Gtk::Activatable implementors need to handle the
   * Gtk::Activatable:use-action-appearance property and call
   * sync_action_properties() to update @a activatable
   * if needed.</note>
   * 
   * @newin{2,16}
   * @param use_appearance Whether to use the actions appearance.
   */
  void set_use_action_appearance(bool use_appearance =  true);

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The action this activatable will activate and receive updates from.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Action> > property_related_action() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The action this activatable will activate and receive updates from.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Action> > property_related_action() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to use the related actions appearance properties.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_use_action_appearance() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to use the related actions appearance properties.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_use_action_appearance() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


    virtual void update_vfunc(const Glib::RefPtr<Action>& action, const Glib::ustring& property_name);

    virtual void sync_action_properties_vfunc(const Glib::RefPtr<Action>& action);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Activatable
   */
  Glib::RefPtr<Gtk::Activatable> wrap(GtkActivatable* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_ACTIVATABLE_H */


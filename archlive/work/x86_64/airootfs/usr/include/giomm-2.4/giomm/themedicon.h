// -*- c++ -*-
// Generated by gmmproc 2.46.2 -- DO NOT MODIFY!
#ifndef _GIOMM_THEMEDICON_H
#define _GIOMM_THEMEDICON_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2007 The gtkmm Development Team
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
#include <giomm/file.h>
#include <giomm/icon.h>
#include <giomm/loadableicon.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GThemedIcon GThemedIcon;
typedef struct _GThemedIconClass GThemedIconClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class ThemedIcon_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** Icon theming support.
 * ThemedIcon is an implementation of Gio::Icon that supports icon themes.
 * ThemedIcon contains a list of all of the icons present in an icon
 * theme, so that icons can be looked up quickly. ThemedIcon does
 * not provide actual pixmaps for icons, just the icon names.
 * Ideally something like Gtk::IconTheme::choose_icon() should be used to
 * resolve the list of names so that fallback icons work nicely with
 * themes that inherit other themes.
 *
 * @newin{2,16}
 */

class ThemedIcon
: public Glib::Object,
  public Icon
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef ThemedIcon CppObjectType;
  typedef ThemedIcon_Class CppClassType;
  typedef GThemedIcon BaseObjectType;
  typedef GThemedIconClass BaseClassType;

  // noncopyable
  ThemedIcon(const ThemedIcon&) = delete;
  ThemedIcon& operator=(const ThemedIcon&) = delete;

private:  friend class ThemedIcon_Class;
  static CppClassType themedicon_class_;

protected:
  explicit ThemedIcon(const Glib::ConstructParams& construct_params);
  explicit ThemedIcon(GThemedIcon* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ThemedIcon(ThemedIcon&& src) noexcept;
  ThemedIcon& operator=(ThemedIcon&& src) noexcept;

  virtual ~ThemedIcon() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GThemedIcon*       gobj()       { return reinterpret_cast<GThemedIcon*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GThemedIcon* gobj() const { return reinterpret_cast<GThemedIcon*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GThemedIcon* gobj_copy();

private:

  
protected:
  /** Creates a new themed icon for @a iconname, and optionally all the names that can be created by shortening @a iconname at '-' characters.
   *
   * @param iconname A string containing an icon name.
   * @param use_default_fallbacks Whether to use all the names that can be created by shortening @a iconname at '-' characters.
   */
  explicit ThemedIcon(const std::string& iconname, bool use_default_fallbacks = false);
  

public:
  /** Creates a new themed icon for @a iconname, and optionally all the names that can be created by shortening @a iconname at '-' characters.
   *
   * For example
   * @code
   * Glib::RefPtr<Gio::ThemedIcon> icon = Gio::ThemedIcon::create("gnome-dev-cdrom-audio", true);
   * @endcode
   * is equivalent to
   * @code
   * Glib::RefPtr<Gio::ThemedIcon> icon = Gio::ThemedIcon::create("gnome-dev-cdrom-audio", false);
   * icon->append_name("gnome-dev-cdrom");
   * icon->append_name("gnome-dev");
   * icon->append_name("gnome");
   * @endcode
   *
   * @param iconname A string containing an icon name.
   * @param use_default_fallbacks Whether to use all the names that can be created by shortening @a iconname at '-' characters.
   */
  
  static Glib::RefPtr<ThemedIcon> create(const std::string& iconname, bool use_default_fallbacks =  false);


  //TODO: GIcon *g_themed_icon_new_from_names (char **iconnames, int len);

  
  /** Prepend a name to the list of icons from within @a icon.
   * 
   * Note that doing so invalidates the hash computed by prior calls
   * to g_icon_hash().
   * 
   * @newin{2,18}
   * 
   * @param iconname Name of icon to prepend to list of icons from within @a icon.
   */
  void prepend_name(const std::string& iconname);
  
  /** Append a name to the list of icons from within @a icon.
   * 
   * Note that doing so invalidates the hash computed by prior calls
   * to g_icon_hash().
   * 
   * @param iconname Name of icon to append to list of icons from within @a icon.
   */
  void append_name(const std::string& iconname);

   
  /** Gets the names of icons from within @a icon.
   * 
   * @return A list of icon names.
   */
  Glib::StringArrayHandle get_names() const;

  //There are no signals.

  //The "name" property is write-only and construct-only so it should not be wrapped.
  /** A <tt>0</tt>-terminated array of icon names.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::vector<Glib::ustring> > property_names() const;


  /** Whether to use the default fallbacks found by shortening the icon name 
   * at '-' characters. If the "names" array has more than one element, 
   * ignores any past the first.
   * 
   * For example, if the icon name was "gnome-dev-cdrom-audio", the array 
   * would become
   * 
   * [C example ellipted]
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_default_fallbacks() const;


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
   * @relates Gio::ThemedIcon
   */
  Glib::RefPtr<Gio::ThemedIcon> wrap(GThemedIcon* object, bool take_copy = false);
}


#endif /* _GIOMM_THEMEDICON_H */


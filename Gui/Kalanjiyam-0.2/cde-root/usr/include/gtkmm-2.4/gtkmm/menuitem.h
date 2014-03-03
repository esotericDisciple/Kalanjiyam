// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_MENUITEM_H
#define _GTKMM_MENUITEM_H

#include <gtkmmconfig.h>


#include <glibmm.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
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

 
#include <gtkmm/item.h>
#include <gtkmm/accelkey.h>
#include <gtkmm/accellabel.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkMenuItem GtkMenuItem;
typedef struct _GtkMenuItemClass GtkMenuItemClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class MenuItem_Class; } // namespace Gtk
namespace Gtk
{

class Menu;
namespace Menu_Helpers { class Element; }

// TODO: Inherit/Implement Activatable when we can break ABI.

/** Child item for menus.
 * Handle highlighting, alignment, events and submenus.
 * As it derives from Gtk::Bin it can hold any valid child widget, altough only a few are really useful.
 * @ingroup Widgets
 * @ingroup Menus
 */

class MenuItem : public Item
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MenuItem CppObjectType;
  typedef MenuItem_Class CppClassType;
  typedef GtkMenuItem BaseObjectType;
  typedef GtkMenuItemClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~MenuItem();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class MenuItem_Class;
  static CppClassType menuitem_class_;

  // noncopyable
  MenuItem(const MenuItem&);
  MenuItem& operator=(const MenuItem&);

protected:
  explicit MenuItem(const Glib::ConstructParams& construct_params);
  explicit MenuItem(GtkMenuItem* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkMenuItem*       gobj()       { return reinterpret_cast<GtkMenuItem*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkMenuItem* gobj() const { return reinterpret_cast<GtkMenuItem*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual void on_activate();
  virtual void on_activate_item();
  virtual void on_toggle_size_request(int* requisition);
  virtual void on_toggle_size_allocate(int allocation);


private:

public:
  /// Create an empty menu item
  MenuItem();

  /// Create a menu item with widget
  explicit MenuItem(Widget& widget);

  /// Create a menu item with label
  explicit MenuItem(const Glib::ustring& label, bool mnemonic = false);

  
  /** Sets or replaces the menu item's submenu, or removes it when a <tt>0</tt>
   * submenu is passed.
   * @param submenu The submenu, or <tt>0</tt>.
   */
  void set_submenu(Menu& submenu);

  /** Remove the menu item's sub-menu.
   * @newin{2,22}
   */
  void unset_submenu();

  
  /** Gets the submenu underneath this menu item, if any.
   * See set_submenu().
   * @return Submenu for this menu item, or <tt>0</tt> if none.
   */
  Menu* get_submenu();
  
  /** Gets the submenu underneath this menu item, if any.
   * See set_submenu().
   * @return Submenu for this menu item, or <tt>0</tt> if none.
   */
  const Menu* get_submenu() const;
  bool has_submenu() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Removes the widget's submenu.
   * 
   * Deprecated: 2.12: remove_submenu() is deprecated and
   * should not be used in newly written code. Use
   * set_submenu() instead.
   */
  void remove_submenu();
#endif // GTKMM_DISABLE_DEPRECATED


  void select();
  
  void deselect();
  
  void activate();
  
  void toggle_size_request(int& requisition);
  
  void toggle_size_allocate(int allocation);
  
  /** Sets whether the menu item appears justified at the right
   * side of a menu bar. This was traditionally done for "Help" menu
   * items, but is now considered a bad idea. (If the widget
   * layout is reversed for a right-to-left language like Hebrew
   * or Arabic, right-justified-menu-items appear at the left.)
   * @param right_justified If <tt>true</tt> the menu item will appear at the 
   * far right if added to a menu bar.
   */
  void set_right_justified(bool right_justified =  true);
  
  /** Gets whether the menu item appears justified at the right
   * side of the menu bar.
   * @return <tt>true</tt> if the menu item will appear at the
   * far right if added to a menu bar.
   */
  bool get_right_justified() const;
  
  /** Set the accelerator path on @a menu_item, through which runtime changes of the
   * menu item's accelerator caused by the user can be identified and saved to
   * persistant storage (see Gtk::AccelMap::save() on this).
   * To setup a default accelerator for this menu item, call
   * Gtk::AccelMap::add_entry() with the same @a accel_path.
   * See also Gtk::AccelMap::add_entry() on the specifics of accelerator paths,
   * and set_accel_path() for a more convenient variant of this function.
   * 
   * This function is basically a convenience wrapper that handles calling
   * Gtk::Widget::set_accel_path() with the appropriate accelerator group for
   * the menu item.
   * 
   * Note that you do need to set an accelerator on the parent menu with
   * set_accel_group() for this to work.
   * @param accel_path Accelerator path, corresponding to this menu item's
   * functionality.
   */
  void set_accel_path(const Glib::ustring& accel_path);
  void unset_accel_path();
  
  /** Retrieve the accelerator path that was previously set on @a menu_item.
   * 
   * See set_accel_path() for details.
   * 
   * @newin{2,14}
   * @return The accelerator path corresponding to this menu item's
   * functionality, or <tt>0</tt> if not set.
   */
  Glib::ustring get_accel_path() const;
  
  /** Sets @a text on the @a menu_item label
   * 
   * @newin{2,16}
   * @param label The text you want to set.
   */
  void set_label(const Glib::ustring& label);
  
  /** Sets @a text on the @a menu_item label
   * 
   * @newin{2,16}
   * @return The text in the @a menu_item label. This is the internal
   * string used by the label, and must not be modified.
   */
  Glib::ustring get_label() const;
  
  /** If true, an underline in the text indicates the next character should be
   * used for the mnemonic accelerator key.
   * 
   * @newin{2,16}
   * @param setting <tt>true</tt> if underlines in the text indicate mnemonics.
   */
  void set_use_underline(bool setting =  true);
  
  /** Checks if an underline in the text indicates the next character should be
   * used for the mnemonic accelerator key.
   * 
   * @newin{2,16}
   * @return <tt>true</tt> if an embedded underline in the label indicates
   * the mnemonic accelerator key.
   */
  bool get_use_underline() const;

  
  /**
   * @par Prototype:
   * <tt>void on_my_%activate()</tt>
   */

  Glib::SignalProxy0< void > signal_activate();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%activate_item()</tt>
   */

  Glib::SignalProxy0< void > signal_activate_item();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%toggle_size_request(int* requisition)</tt>
   */

  Glib::SignalProxy1< void,int* > signal_toggle_size_request();

  
  /**
   * @par Prototype:
   * <tt>void on_my_%toggle_size_allocate(int allocation)</tt>
   */

  Glib::SignalProxy1< void,int > signal_toggle_size_allocate();


  void accelerate(Window& window);

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Sets whether the menu item appears justified at the right side of a menu bar.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_right_justified() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Sets whether the menu item appears justified at the right side of a menu bar.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_right_justified() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The submenu attached to the menu item, or NULL if it has none.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Gtk::Menu*> property_submenu() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The submenu attached to the menu item, or NULL if it has none.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gtk::Menu*> property_submenu() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Sets the accelerator path of the menu item.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_accel_path() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Sets the accelerator path of the menu item.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_accel_path() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The text for the child label.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_label() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The text for the child label.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_label() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** If set, an underline in the text indicates the next character should be used for the mnemonic accelerator key.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_use_underline() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** If set, an underline in the text indicates the next character should be used for the mnemonic accelerator key.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_use_underline() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


protected:
  void add_accel_label(const Glib::ustring& label, bool mnemonic = true);
  void set_accel_key(const AccelKey& accel_key);

private:
  friend class Menu_Helpers::Element;

  //This data is set by MenuElem, and will be used in on_realize(), in the call to add_accelerator().
  AccelKey accel_key_;


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
   * @relates Gtk::MenuItem
   */
  Gtk::MenuItem* wrap(GtkMenuItem* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_MENUITEM_H */

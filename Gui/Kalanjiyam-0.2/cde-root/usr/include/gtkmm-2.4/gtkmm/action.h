// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_ACTION_H
#define _GTKMM_ACTION_H

#include <gtkmmconfig.h>


#include <glibmm.h>

/* Copyright (C) 2003 The gtkmm Development Team
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

 
#include <gtkmm/widget.h>
#include <gtkmm/accelgroup.h>
#include <gtkmm/stockid.h>
#include <giomm/icon.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkAction GtkAction;
typedef struct _GtkActionClass GtkActionClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Action_Class; } // namespace Gtk
namespace Gtk
{

class ActionGroup;
class Menu;
class MenuItem;
class ToolItem;
class Image;

/** An action which can be triggered by a menu or toolbar item.
 *
 * Actions represent operations that the user can perform, along with
 * some information about how it should be presented in the user interface.
 * Each action provides methods to create icons, menu items and toolbar
 * items representing itself.
 *
 * As well as the callback that is called when the action is activated,
 * the following is also associated with the action:
 *
 *  - a name (not translated, for path lookup)
 *  - a label (translated, for display)
 *  - an accelerator
 *  - whether the label indicates a stock id
 *  - a tooltip (optional, translated)
 *  - a toolbar label (optional, shorter than label)
 *
 * The action will also have some state information:
 *
 *  - visible (shown/hidden)
 *  - sensitive (enabled/disabled)
 *
 * Apart from regular actions, there are toggle actions,
 * which can be toggled between two states and radio actions,
 * of which only one in a group can be in the "active" state.
 * Other actions can be implemented as Gtk::Action subclasses.
 *
 * Each action can have one or more proxy menu item, toolbar button or other proxy widgets.
 * Proxies mirror the state of the action (text label, tooltip, icon, visible, sensitive, etc), and should change when the action's state changes. When the proxy is activated, it should activate its action.
 */

class Action : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Action CppObjectType;
  typedef Action_Class CppClassType;
  typedef GtkAction BaseObjectType;
  typedef GtkActionClass BaseClassType;

private:  friend class Action_Class;
  static CppClassType action_class_;

private:
  // noncopyable
  Action(const Action&);
  Action& operator=(const Action&);

protected:
  explicit Action(const Glib::ConstructParams& construct_params);
  explicit Action(GtkAction* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Action();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkAction*       gobj()       { return reinterpret_cast<GtkAction*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkAction* gobj() const { return reinterpret_cast<GtkAction*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkAction* gobj_copy();

private:


protected:
  /** Creates an empty action. */
  Action();

  /** Creates an action with a stock ID.
   * The stock ID is used to set a default icon, text and accelerator for the
   * action.
   *
   * @param name     A unique name for the action.
   * @param stock_id The stock icon to display in widgets representing the
   *                 action.
   * @param label    The label displayed in menu items and on buttons.
   * @param tooltip  A tooltip for the action.
   */
  explicit Action(const Glib::ustring& name, const StockID& stock_id = StockID(), const Glib::ustring& label = Glib::ustring(), const Glib::ustring& tooltip = Glib::ustring());

  /** Creates an action with an icon name.
   * The action's icon will reflect the specified icon name in the user's
   * icon theme.
   *
   * @param name      A unique name for the action.
   * @param icon_name An IconTheme icon name used for widgets representing the
   *                  action.
   * @param label     The label displayed in menu items and on buttons.
   * @param tooltip   A tooltip for the action.
   */
  explicit Action(const Glib::ustring& name, const Glib::ustring& icon_name, const Glib::ustring& label = Glib::ustring(), const Glib::ustring& tooltip = Glib::ustring());

public:
  //Note that gtk_action_new() does not allow name to be NULL, which suggests that we should not have a default constructor,
  //but it's OK to set the name later:
  
  static Glib::RefPtr<Action> create();


  /** Creates an action.
   *
   * @param name    A unique name for the action.
   * @param label   The label displayed in menu items and on buttons.
   * @param tooltip A tooltip for the action.
   *
   * @return A new Action.
   */
  static Glib::RefPtr<Action> create(const Glib::ustring& name, const Glib::ustring& label = Glib::ustring(), const Glib::ustring& tooltip = Glib::ustring());

  /** Creates an action with a stock ID.
   * The stock ID is used to set a default icon, text and accelerator for the
   * action.
   *
   * @param name     A unique name for the action.
   * @param stock_id The stock icon to display in widgets representing the
   *                 action.
   * @param label    The label displayed in menu items and on buttons.
   * @param tooltip  A tooltip for the action.
   *
   * @return A new Action.
   */
  static Glib::RefPtr<Action> create(const Glib::ustring& name, const Gtk::StockID& stock_id, const Glib::ustring& label = Glib::ustring(), const Glib::ustring& tooltip = Glib::ustring());

  /** Create an action with an icon name.
   * The action's icon will reflect the specified icon name in the user's
   * icon theme.
   *
   * @param name      A unique name for the action.
   * @param icon_name An IconTheme icon name used for widgets representing the
   *                  action.
   * @param label     The label displayed in menu items and on buttons.
   * @param tooltip   A tooltip for the action.
   *
   * @return A new Action.
   */
  static Glib::RefPtr<Action> create_with_icon_name(const Glib::ustring& name, const Glib::ustring& icon_name, const Glib::ustring& label, const Glib::ustring& tooltip);

  
  /** Returns the name of the action.
   * 
   * @newin{2,4}
   * @return The name of the action. The string belongs to GTK+ and should not
   * be freed.
   */
  Glib::ustring get_name() const;

  
  /** Returns whether the action is effectively sensitive.
   * 
   * @newin{2,4}
   * @return <tt>true</tt> if the action and its associated action group 
   * are both sensitive.
   */
  bool is_sensitive() const;
  
  /** Returns whether the action itself is sensitive. Note that this doesn't 
   * necessarily mean effective sensitivity. See is_sensitive() 
   * for that.
   * 
   * @newin{2,4}
   * @return <tt>true</tt> if the action itself is sensitive.
   */
  bool get_sensitive() const;

  
  /** Sets the ::sensitive property of the action to @a sensitive. Note that 
   * this doesn't necessarily mean effective sensitivity. See 
   * is_sensitive() 
   * for that.
   * 
   * @newin{2,6}
   * @param sensitive <tt>true</tt> to make the action sensitive.
   */
  void set_sensitive(bool sensitive =  true);

  
  /** Returns whether the action is effectively visible.
   * 
   * @newin{2,4}
   * @return <tt>true</tt> if the action and its associated action group 
   * are both visible.
   */
  bool is_visible() const;
  
  /** Returns whether the action itself is visible. Note that this doesn't 
   * necessarily mean effective visibility. See is_sensitive() 
   * for that.
   * 
   * @newin{2,4}
   * @return <tt>true</tt> if the action itself is visible.
   */
  bool get_visible() const;
  
  /** Sets the ::visible property of the action to @a visible. Note that 
   * this doesn't necessarily mean effective visibility. See 
   * is_visible() 
   * for that.
   * 
   * @newin{2,6}
   * @param visible <tt>true</tt> to make the action visible.
   */
  void set_visible(bool visible =  true);

  
  /** Emits the "activate" signal on the specified action, if it isn't 
   * insensitive. This gets called by the proxy widgets when they get 
   * activated.
   * 
   * It can also be used to manually activate an action.
   * 
   * @newin{2,4}
   */
  void activate();
  
  /** This function is intended for use by action implementations to
   * create icons displayed in the proxy widgets.
   * 
   * @newin{2,4}
   * @param icon_size The size of the icon that should be created.
   * @return A widget that displays the icon for this action.
   */
  Image* create_icon(IconSize icon_size);
  
  /** Creates a menu item widget that proxies for the given action.
   * 
   * @newin{2,4}
   * @return A menu item connected to the action.
   */
  MenuItem* create_menu_item();
  
  /** Creates a toolbar item widget that proxies for the given action.
   * 
   * @newin{2,4}
   * @return A toolbar item connected to the action.
   */
  ToolItem* create_tool_item();
  
  /** If @a action provides a Gtk::Menu widget as a submenu for the menu
   * item or the toolbar item it creates, this function returns an
   * instance of that menu.
   * 
   * @newin{2,12}
   * @return The menu item provided by the
   * action, or <tt>0</tt>.
   */
  Menu* create_menu();

  //TODO: Deprecate these when we can derive the appropriate widgets from Activatable, when we can break ABI.
  
  /** Connects a widget to an action object as a proxy.  Synchronises 
   * various properties of the action with the widget (such as label 
   * text, icon, tooltip, etc), and attaches a callback so that the 
   * action gets activated when the proxy widget does.
   * 
   * If the widget is already connected to an action, it is disconnected
   * first.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 2.16: Use Gtk::Activatable::set_related_action() instead.
   * @param proxy The proxy widget.
   */
  void connect_proxy(Widget& proxy);
  
  /** Disconnects a proxy widget from an action.  
   * Does <em>not</em> destroy the widget, however.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 2.16: Use Gtk::Activatable::set_related_action() instead.
   * @param proxy The proxy widget.
   */
  void disconnect_proxy(Widget& proxy);

  
  /** Returns the proxy widgets for an action.
   * See also Gtk::Widget::get_action().
   * 
   * @newin{2,4}
   * @return A SList of proxy widgets. The list is owned by GTK+
   * and must not be modified.
   */
  Glib::SListHandle<Widget*> get_proxies();
  
  /** Returns the proxy widgets for an action.
   * See also Gtk::Widget::get_action().
   * 
   * @newin{2,4}
   * @return A SList of proxy widgets. The list is owned by GTK+
   * and must not be modified.
   */
  Glib::SListHandle<const Widget*> get_proxies() const;

  
  /** Installs the accelerator for @a action if @a action has an
   * accel path and group. See set_accel_path() and 
   * set_accel_group()
   * 
   * Since multiple proxies may independently trigger the installation
   * of the accelerator, the @a action counts the number of times this
   * function has been called and doesn't remove the accelerator until
   * disconnect_accelerator() has been called as many times.
   * 
   * @newin{2,4}
   */
  void connect_accelerator();
  
  /** Undoes the effect of one call to connect_accelerator().
   * 
   * @newin{2,4}
   */
  void disconnect_accelerator();

  
  /** Returns the accel path for this action.  
   * 
   * @newin{2,6}
   * @return The accel path for this action, or <tt>0</tt>
   * if none is set. The returned string is owned by GTK+ 
   * and must not be freed or modified.
   */
  Glib::ustring get_accel_path() const;

  /// For instance, void on_activate();
  typedef sigc::slot<void> SlotActivate;

  /** The "activate" signal is emitted when the action is activated.
   *
   * @par Prototype:
   * <tt>void on_my_%activate()</tt>
   */

  Glib::SignalProxy0< void > signal_activate();


  //Used by AccelGroup:
  
  /** Sets the accel path for this action.  All proxy widgets associated
   * with the action will have this accel path, so that their
   * accelerators are consistent.
   * 
   * Note that @a accel_path string will be stored in a Quark. Therefore, if you
   * pass a static string, you can save some memory by interning it first with 
   * Glib::intern_static_string().
   * 
   * @newin{2,4}
   * @param accel_path The accelerator path.
   */
  void set_accel_path(const Glib::ustring& accel_path);
  
  /** Sets the Gtk::AccelGroup in which the accelerator for this action
   * will be installed.
   * 
   * @newin{2,4}
   * @param accel_group A Gtk::AccelGroup or <tt>0</tt>.
   */
  void set_accel_group(const Glib::RefPtr<AccelGroup>& accel_group);

  
  /** Sets the label of @a action.
   * 
   * @newin{2,16}
   * @param label The label text to set.
   */
  void set_label(const Glib::ustring& label);
  
  /** Gets the label text of @a action.
   * 
   * @newin{2,16}
   * @return The label text.
   */
  Glib::ustring get_label() const;
  
  /** Sets a shorter label text on @a action.
   * 
   * @newin{2,16}
   * @param short_label The label text to set.
   */
  void set_short_label(const Glib::ustring& short_label);
  
  /** Gets the short label text of @a action.
   * 
   * @newin{2,16}
   * @return The short label text.
   */
  Glib::ustring get_short_label() const;
  
  /** Sets the tooltip text on @a action
   * 
   * @newin{2,16}
   * @param tooltip The tooltip text.
   */
  void set_tooltip(const Glib::ustring& tooltip);
  
  /** Gets the tooltip text of @a action.
   * 
   * @newin{2,16}
   * @return The tooltip text.
   */
  Glib::ustring get_tooltip() const;
  
  /** Sets the stock id on @a action
   * 
   * @newin{2,16}
   * @param stock_id The stock id.
   */
  void set_stock_id(const StockID& stock_id);
  
  /** Gets the stock id of @a action.
   * 
   * @newin{2,16}
   * @return The stock id.
   */
  StockID get_stock_id() const;
  
  /** Sets the icon of @a action.
   * 
   * @newin{2,16}
   * @param icon The Icon to set.
   */
  void set_gicon(const Glib::RefPtr<Gio::Icon>& icon);
  
  /** Gets the gicon of @a action.
   * 
   * @newin{2,16}
   * @return The action's Icon if one is set.
   */
  Glib::RefPtr<Gio::Icon> get_gicon();
  
  /** Gets the gicon of @a action.
   * 
   * @newin{2,16}
   * @return The action's Icon if one is set.
   */
  Glib::RefPtr<const Gio::Icon> get_gicon() const;
  
  /** Sets the icon name on @a action
   * 
   * @newin{2,16}
   * @param icon_name The icon name to set.
   */
  void set_icon_name(const Glib::ustring& icon_name);
  
  /** Gets the icon name of @a action.
   * 
   * @newin{2,16}
   * @return The icon name.
   */
  Glib::ustring get_icon_name() const;
  
  /** Sets whether @a action is visible when horizontal
   * 
   * @newin{2,16}
   * @param visible_horizontal Whether the action is visible horizontally.
   */
  void set_visible_horizontal(bool visible_horizontal =  true);
  
  /** Checks whether @a action is visible when horizontal
   * 
   * @newin{2,16}
   * @return Whether @a action is visible when horizontal.
   */
  bool get_visible_horizontal() const;
  
  /** Sets whether @a action is visible when vertical 
   * 
   * @newin{2,16}
   * @param visible_vertical Whether the action is visible vertically.
   */
  void set_visible_vertical(bool visible_vertical =  true);
  
  /** Checks whether @a action is visible when horizontal
   * 
   * @newin{2,16}
   * @return Whether @a action is visible when horizontal.
   */
  bool get_visible_vertical() const;
  
  /** Sets whether the action is important, this attribute is used
   * primarily by toolbar items to decide whether to show a label
   * or not.
   * 
   * @newin{2,16}
   * @param is_important <tt>true</tt> to make the action important.
   */
  void set_is_important(bool is_important =  true);
  
  /** Checks whether @a action is important or not
   * 
   * @newin{2,16}
   * @return Whether @a action is important.
   */
  bool get_is_important() const;

  
  /** Sets whether @a action<!-- -->'s menu item proxies will ignore the
   * Gtk::Settings:gtk-menu-images setting and always show their image, if available.
   * 
   * Use this if the menu item would be useless or hard to use
   * without their image.
   * 
   * @newin{2,20}
   * @param always_show <tt>true</tt> if menuitem proxies should always show their image.
   */
  void set_always_show_image(bool always_show =  true);
  
  /** Returns whether @a action<!-- -->'s menu item proxies will ignore the
   * Gtk::Settings:gtk-menu-images setting and always show their image,
   * if available.
   * 
   * @newin{2,20}
   * @return <tt>true</tt> if the menu item proxies will always show their image.
   */
  bool get_always_show_image() const;

  
  /** Disable activation signals from the action 
   * 
   * This is needed when updating the state of your proxy
   * Gtk::Activatable widget could result in calling activate(),
   * this is a convenience function to avoid recursing in those
   * cases (updating toggle state for instance).
   * 
   * @newin{2,16}
   */
  void block_activate();
  
  /** Reenable activation signals from the action 
   * 
   * @newin{2,16}
   */
  void unblock_activate();

  //gtk_action_get_accel_closure() is too C-specific:
  

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** A unique name for the action.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_name() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The label used for menu items and buttons that activate this action.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_label() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The label used for menu items and buttons that activate this action.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_label() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** A shorter label that may be used on toolbar buttons.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_short_label() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** A shorter label that may be used on toolbar buttons.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_short_label() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** A tooltip for this action.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_tooltip() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** A tooltip for this action.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_tooltip() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The stock icon displayed in widgets representing this action.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<StockID> property_stock_id() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The stock icon displayed in widgets representing this action.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<StockID> property_stock_id() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The GIcon being displayed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> > property_gicon() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The GIcon being displayed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> > property_gicon() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The name of the icon from the icon theme.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Glib::ustring> property_icon_name() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The name of the icon from the icon theme.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Glib::ustring> property_icon_name() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the toolbar item is visible when the toolbar is in a horizontal orientation.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_visible_horizontal() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the toolbar item is visible when the toolbar is in a horizontal orientation.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_visible_horizontal() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the toolbar item is visible when the toolbar is in a vertical orientation.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_visible_vertical() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the toolbar item is visible when the toolbar is in a vertical orientation.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_visible_vertical() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** When TRUE, toolitem proxies for this action are represented in the toolbar overflow menu.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_visible_overflown() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** When TRUE, toolitem proxies for this action are represented in the toolbar overflow menu.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_visible_overflown() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the action is considered important. When TRUE, toolitem proxies for this action show text in GTK_TOOLBAR_BOTH_HORIZ mode.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_is_important() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the action is considered important. When TRUE, toolitem proxies for this action show text in GTK_TOOLBAR_BOTH_HORIZ mode.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_is_important() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** When TRUE, empty menu proxies for this action are hidden.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_hide_if_empty() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** When TRUE, empty menu proxies for this action are hidden.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_hide_if_empty() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the action is enabled.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_sensitive() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the action is enabled.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_sensitive() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the action is visible.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_visible() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the action is visible.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_visible() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The GtkActionGroup this GtkAction is associated with, or NULL (for internal use).
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<ActionGroup> > property_action_group() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The GtkActionGroup this GtkAction is associated with, or NULL (for internal use).
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ActionGroup> > property_action_group() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the image will always be shown.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_always_show_image() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the image will always be shown.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_always_show_image() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


protected:
  //For use by child actions:
  //TODO: Deprecate these when we can derive the appropriate widgets from Activatable, when we can break ABI.
  
  /** Disables calls to the activate()
   * function by signals on the given proxy widget.  This is used to
   * break notification loops for things like check or radio actions.
   * 
   * This function is intended for use by action implementations.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 2.16: activatables are now responsible for activating the
   * action directly so this doesnt apply anymore.
   * @param proxy A proxy widget.
   */
  void block_activate_from(Widget& proxy);
  
  /** Re-enables calls to the activate()
   * function by signals on the given proxy widget.  This undoes the
   * blocking done by block_activate_from().
   * 
   * This function is intended for use by action implementations.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 2.16: activatables are now responsible for activating the
   * action directly so this doesnt apply anymore.
   * @param proxy A proxy widget.
   */
  void unblock_activate_from(Widget& proxy);

protected:
  //Widget-creation routines:
    virtual Widget* create_menu_item_vfunc();

    virtual Widget* create_tool_item_vfunc();

    virtual void connect_proxy_vfunc(Widget* proxy);

    virtual void disconnect_proxy_vfunc(Widget* proxy);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual void on_activate();


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
   * @relates Gtk::Action
   */
  Glib::RefPtr<Gtk::Action> wrap(GtkAction* object, bool take_copy = false);
}


#endif /* _GTKMM_ACTION_H */

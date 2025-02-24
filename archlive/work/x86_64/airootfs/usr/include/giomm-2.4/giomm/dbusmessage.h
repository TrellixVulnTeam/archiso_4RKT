// -*- c++ -*-
// Generated by gmmproc 2.46.2 -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSMESSAGE_H
#define _GIOMM_DBUSMESSAGE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2010 The giomm Development Team
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
#include <glibmm/variant.h>
#include <glibmm/utility.h>

#ifdef G_OS_UNIX
# include <giomm/unixfdlist.h>
#endif


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GDBusMessage GDBusMessage;
typedef struct _GDBusMessageClass GDBusMessageClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{

namespace DBus
{ class Message_Class; } // namespace DBus

} // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

namespace DBus
{

/** @addtogroup giommEnums giomm Enums and Flags */

/** 
 *  @var MessageType MESSAGE_TYPE_INVALID
 * Message is of invalid type.
 * 
 *  @var MessageType MESSAGE_TYPE_METHOD_CALL
 * Method call.
 * 
 *  @var MessageType MESSAGE_TYPE_METHOD_RETURN
 * Method reply.
 * 
 *  @var MessageType MESSAGE_TYPE_ERROR
 * Error reply.
 * 
 *  @var MessageType MESSAGE_TYPE_SIGNAL
 * Signal emission.
 * 
 *  @enum MessageType
 * 
 * Message types used in DBusMessage.
 * 
 * @newin{2,26}
 *
 * @ingroup giommEnums
 */
enum MessageType
{
  MESSAGE_TYPE_INVALID,
  MESSAGE_TYPE_METHOD_CALL,
  MESSAGE_TYPE_METHOD_RETURN,
  MESSAGE_TYPE_ERROR,
  MESSAGE_TYPE_SIGNAL
};


/** 
 *  @var MessageFlags MESSAGE_FLAGS_NONE
 * No flags set.
 * 
 *  @var MessageFlags MESSAGE_FLAGS_NO_REPLY_EXPECTED
 * A reply is not expected.
 * 
 *  @var MessageFlags MESSAGE_FLAGS_NO_AUTO_START
 * The bus must not launch an
 * owner for the destination name in response to this message.
 * 
 *  @var MessageFlags MESSAGE_FLAGS_ALLOW_INTERACTIVE_AUTHORIZATION
 * If set on a method
 * call, this flag means that the caller is prepared to wait for interactive
 * authorization. @newin{2,46}
 * 
 *  @enum MessageFlags
 * 
 * Message flags used in DBusMessage.
 * 
 * @newin{2,26}
 *
 * @ingroup giommEnums
 * @par Bitwise operators:
 * <tt>%MessageFlags operator|(MessageFlags, MessageFlags)</tt><br>
 * <tt>%MessageFlags operator&(MessageFlags, MessageFlags)</tt><br>
 * <tt>%MessageFlags operator^(MessageFlags, MessageFlags)</tt><br>
 * <tt>%MessageFlags operator~(MessageFlags)</tt><br>
 * <tt>%MessageFlags& operator|=(MessageFlags&, MessageFlags)</tt><br>
 * <tt>%MessageFlags& operator&=(MessageFlags&, MessageFlags)</tt><br>
 * <tt>%MessageFlags& operator^=(MessageFlags&, MessageFlags)</tt><br>
 */
enum MessageFlags
{
  MESSAGE_FLAGS_NONE = 0x0,
  MESSAGE_FLAGS_NO_REPLY_EXPECTED = (1<<0),
  MESSAGE_FLAGS_NO_AUTO_START = (1<<1),
  MESSAGE_FLAGS_ALLOW_INTERACTIVE_AUTHORIZATION = (1<<2)
};

/** @ingroup giommEnums */
inline MessageFlags operator|(MessageFlags lhs, MessageFlags rhs)
  { return static_cast<MessageFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline MessageFlags operator&(MessageFlags lhs, MessageFlags rhs)
  { return static_cast<MessageFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline MessageFlags operator^(MessageFlags lhs, MessageFlags rhs)
  { return static_cast<MessageFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline MessageFlags operator~(MessageFlags flags)
  { return static_cast<MessageFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup giommEnums */
inline MessageFlags& operator|=(MessageFlags& lhs, MessageFlags rhs)
  { return (lhs = static_cast<MessageFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline MessageFlags& operator&=(MessageFlags& lhs, MessageFlags rhs)
  { return (lhs = static_cast<MessageFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline MessageFlags& operator^=(MessageFlags& lhs, MessageFlags rhs)
  { return (lhs = static_cast<MessageFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }


/** 
 *  @var MessageHeaderField MESSAGE_HEADER_FIELD_INVALID
 * Not a valid header field.
 * 
 *  @var MessageHeaderField MESSAGE_HEADER_FIELD_PATH
 * The object path.
 * 
 *  @var MessageHeaderField MESSAGE_HEADER_FIELD_INTERFACE
 * The interface name.
 * 
 *  @var MessageHeaderField MESSAGE_HEADER_FIELD_MEMBER
 * The method or signal name.
 * 
 *  @var MessageHeaderField MESSAGE_HEADER_FIELD_ERROR_NAME
 * The name of the error that occurred.
 * 
 *  @var MessageHeaderField MESSAGE_HEADER_FIELD_REPLY_SERIAL
 * The serial number the message is a reply to.
 * 
 *  @var MessageHeaderField MESSAGE_HEADER_FIELD_DESTINATION
 * The name the message is intended for.
 * 
 *  @var MessageHeaderField MESSAGE_HEADER_FIELD_SENDER
 * Unique name of the sender of the message (filled in by the bus).
 * 
 *  @var MessageHeaderField MESSAGE_HEADER_FIELD_SIGNATURE
 * The signature of the message body.
 * 
 *  @var MessageHeaderField MESSAGE_HEADER_FIELD_NUM_UNIX_FDS
 * The number of UNIX file descriptors that accompany the message.
 * 
 *  @enum MessageHeaderField
 * 
 * Header fields used in DBusMessage.
 * 
 * @newin{2,26}
 *
 * @ingroup giommEnums
 */
enum MessageHeaderField
{
  MESSAGE_HEADER_FIELD_INVALID,
  MESSAGE_HEADER_FIELD_PATH,
  MESSAGE_HEADER_FIELD_INTERFACE,
  MESSAGE_HEADER_FIELD_MEMBER,
  MESSAGE_HEADER_FIELD_ERROR_NAME,
  MESSAGE_HEADER_FIELD_REPLY_SERIAL,
  MESSAGE_HEADER_FIELD_DESTINATION,
  MESSAGE_HEADER_FIELD_SENDER,
  MESSAGE_HEADER_FIELD_SIGNATURE,
  MESSAGE_HEADER_FIELD_NUM_UNIX_FDS
};


/** 
 *  @var CapabilityFlags CAPABILITY_FLAGS_NONE
 * No flags set.
 * 
 *  @var CapabilityFlags CAPABILITY_FLAGS_UNIX_FD_PASSING
 * The connection
 * supports exchanging UNIX file descriptors with the remote peer.
 * 
 *  @enum CapabilityFlags
 * 
 * Capabilities negotiated with the remote peer.
 * 
 * @newin{2,26}
 *
 * @ingroup giommEnums
 * @par Bitwise operators:
 * <tt>%CapabilityFlags operator|(CapabilityFlags, CapabilityFlags)</tt><br>
 * <tt>%CapabilityFlags operator&(CapabilityFlags, CapabilityFlags)</tt><br>
 * <tt>%CapabilityFlags operator^(CapabilityFlags, CapabilityFlags)</tt><br>
 * <tt>%CapabilityFlags operator~(CapabilityFlags)</tt><br>
 * <tt>%CapabilityFlags& operator|=(CapabilityFlags&, CapabilityFlags)</tt><br>
 * <tt>%CapabilityFlags& operator&=(CapabilityFlags&, CapabilityFlags)</tt><br>
 * <tt>%CapabilityFlags& operator^=(CapabilityFlags&, CapabilityFlags)</tt><br>
 */
enum CapabilityFlags
{
  CAPABILITY_FLAGS_NONE = 0x0,
  CAPABILITY_FLAGS_UNIX_FD_PASSING = (1<<0)
};

/** @ingroup giommEnums */
inline CapabilityFlags operator|(CapabilityFlags lhs, CapabilityFlags rhs)
  { return static_cast<CapabilityFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline CapabilityFlags operator&(CapabilityFlags lhs, CapabilityFlags rhs)
  { return static_cast<CapabilityFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline CapabilityFlags operator^(CapabilityFlags lhs, CapabilityFlags rhs)
  { return static_cast<CapabilityFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline CapabilityFlags operator~(CapabilityFlags flags)
  { return static_cast<CapabilityFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup giommEnums */
inline CapabilityFlags& operator|=(CapabilityFlags& lhs, CapabilityFlags rhs)
  { return (lhs = static_cast<CapabilityFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline CapabilityFlags& operator&=(CapabilityFlags& lhs, CapabilityFlags rhs)
  { return (lhs = static_cast<CapabilityFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline CapabilityFlags& operator^=(CapabilityFlags& lhs, CapabilityFlags rhs)
  { return (lhs = static_cast<CapabilityFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }


/** A type for representing D-Bus messages that can be sent or received on a
 * Connection.
 *
 * @newin{2,28}
 * @ingroup DBus
 */

class Message : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Message CppObjectType;
  typedef Message_Class CppClassType;
  typedef GDBusMessage BaseObjectType;
  typedef GDBusMessageClass BaseClassType;

  // noncopyable
  Message(const Message&) = delete;
  Message& operator=(const Message&) = delete;

private:  friend class Message_Class;
  static CppClassType message_class_;

protected:
  explicit Message(const Glib::ConstructParams& construct_params);
  explicit Message(GDBusMessage* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Message(Message&& src) noexcept;
  Message& operator=(Message&& src) noexcept;

  virtual ~Message() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GDBusMessage*       gobj()       { return reinterpret_cast<GDBusMessage*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GDBusMessage* gobj() const { return reinterpret_cast<GDBusMessage*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDBusMessage* gobj_copy();

private:


protected:
  Message();
  

public:
  
  /** Creates a new empty DBusMessage.
   * 
   * @newin{2,26}
   * 
   * @return A DBusMessage. Free with Glib::object_unref().
   */

  
  static Glib::RefPtr<Message> create();


  // Note that we can't use _WRAP_CTOR() and _WRAP_CREATE() because the C functions do more than just call g_object_new():
  // See http://bugzilla.gnome.org/show_bug.cgi?id=624977

  // See here about whether the parameters should be ustring or std::string:
  // http://dbus.freedesktop.org/doc/dbus-specification.html#message-protocol-names
  // They are generally UTF-8 that can only contain the ASCII subset,
  // so ustring still seems preferrable to std::string, which generally implies an unknown encoding for us.

  // The parameter name 'interface' can cause compilation errors with MinGW.
  // See https://bugzilla.gnome.org/show_bug.cgi?id=735137
  // The parameter name in glib is 'interface_'.
  
  /** Creates a new DBusMessage for a signal emission.
   * 
   * @newin{2,26}
   * 
   * @param path A valid object path.
   * @param interface A valid D-Bus interface name.
   * @param signal A valid signal name.
   * @return A DBusMessage. Free with Glib::object_unref().
   */
  static Glib::RefPtr<Message> create_signal(const Glib::ustring& path, const Glib::ustring& iface, const Glib::ustring& signal);
  
  /** Creates a new DBusMessage for a method call.
   * 
   * @newin{2,26}
   * 
   * @param name A valid D-Bus name or <tt>0</tt>.
   * @param path A valid object path.
   * @param interface A valid D-Bus interface name or <tt>0</tt>.
   * @param method A valid method name.
   * @return A DBusMessage. Free with Glib::object_unref().
   */
  static Glib::RefPtr<Message> create_method_call(const Glib::ustring& name, const Glib::ustring& path, const Glib::ustring& iface, const Glib::ustring& method);
  
  /** Creates a new DBusMessage that is a reply to @a method_call_message.
   * 
   * @newin{2,26}
   * 
   * @param method_call_message A message of type DBUS_MESSAGE_TYPE_METHOD_CALL to
   * create a reply message to.
   * @return DBusMessage. Free with Glib::object_unref().
   */
  static Glib::RefPtr<Message> create_method_reply(const Glib::RefPtr<Message>& method_call_message);
  
  /** Creates a new DBusMessage that is an error reply to @a method_call_message.
   * 
   * @newin{2,26}
   * 
   * @param method_call_message A message of type DBUS_MESSAGE_TYPE_METHOD_CALL to
   * create a reply message to.
   * @param error_name A valid D-Bus error name.
   * @param error_message The D-Bus error message.
   * @return A DBusMessage. Free with Glib::object_unref().
   */
  static Glib::RefPtr<Message> create_method_error_literal(const Glib::RefPtr<const Message>& method_call_message, const Glib::ustring& error_name, const Glib::ustring& error_message);

  // Ignore variable argument functions.
  

  /** Creates a new DBusMessage from the data stored at @a blob. The byte
   * order that the message was in can be retrieved using
   * g_dbus_message_get_byte_order().
   * 
   * @newin{2,26}
   * 
   * @param blob A blob represent a binary D-Bus message.
   * @param blob_len The length of @a blob.
   * @param capabilities A DBusCapabilityFlags describing what protocol features are supported.
   * @return A new DBusMessage or <tt>0</tt> if @a error is set. Free with
   * Glib::object_unref().
   */
  static Glib::RefPtr<Message> create_from_blob(const guchar* blob, gsize blob_len, CapabilityFlags capabilities =  CAPABILITY_FLAGS_NONE);


  /** Produces a human-readable multi-line description of @a message.
   * 
   * The contents of the description has no ABI guarantees, the contents
   * and formatting is subject to change at any time. Typical output
   * looks something like this:
   * 
   * [C example ellipted]
   * or
   * 
   * [C example ellipted]
   * 
   * @newin{2,26}
   * 
   * @param indent Indentation level.
   * @return A string that should be freed with Glib::free().
   */
  Glib::ustring print(guint indent);

  
  /** Checks whether @a message is locked. To monitor changes to this
   * value, conncet to the Object::signal_notify() signal to listen for changes
   * on the DBusMessage::property_locked() property.
   * 
   * @newin{2,26}
   * 
   * @return <tt>true</tt> if @a message is locked, <tt>false</tt> otherwise.
   */
  bool get_locked() const;
  
  /** If @a message is locked, does nothing. Otherwise locks the message.
   * 
   * @newin{2,26}
   */
  void lock();
  
  /** Copies @a message. The copy is a deep copy and the returned
   * DBusMessage is completely identical except that it is guaranteed
   * to not be locked.
   * 
   * This operation can fail if e.g. @a message contains file descriptors
   * and the per-process or system-wide open files limit is reached.
   * 
   * @newin{2,26}
   * 
   * @return A new DBusMessage or <tt>0</tt> if @a error is set.
   * Free with Glib::object_unref().
   */
  Glib::RefPtr<Message> copy() const;

  
  /** Gets the type of @a message.
   * 
   * @newin{2,26}
   * 
   * @return A 8-bit unsigned integer (typically a value from the DBusMessageType enumeration).
   */
  MessageType get_message_type() const;
  
  /** Sets @a message to be of @a type.
   * 
   * @newin{2,26}
   * 
   * @param type A 8-bit unsigned integer (typically a value from the DBusMessageType enumeration).
   */
  void set_message_type(MessageType type);

  //gmmproc can't handle the character literals, and this won't be expanded in future,
  //so we just wrap it by hand.
  enum ByteOrder
  {
    BYTE_ORDER_BIG_ENDIAN    = 'B',
    BYTE_ORDER_LITTLE_ENDIAN = 'l'
  };

   
  /** Gets the byte order of @a message.
   * 
   * @return The byte order.
   */
  ByteOrder get_byte_order() const;
  
  /** Sets the byte order of @a message.
   * 
   * @param byte_order The byte order.
   */
  void set_byte_order(ByteOrder byte_order);

  
  /** Gets the serial for @a message.
   * 
   * @newin{2,26}
   * 
   * @return A #guint32.
   */
  guint32 get_serial() const;
  
  /** Sets the serial for @a message.
   * 
   * @newin{2,26}
   * 
   * @param serial A #guint32.
   */
  void set_serial(guint32 serial);

  
  /** Gets the flags for @a message.
   * 
   * @newin{2,26}
   * 
   * @return Flags that are set (typically values from the DBusMessageFlags enumeration bitwise ORed together).
   */
  MessageFlags get_flags() const;
  
  /** Sets the flags to set on @a message.
   * 
   * @newin{2,26}
   * 
   * @param flags Flags for @a message that are set (typically values from the DBusMessageFlags
   * enumeration bitwise ORed together).
   */
  void set_flags(MessageFlags flags);

  /** Gets the body of a message.  The body is returned in @a value.
   * @param value Location in which to store the header.
   */
  void get_body(Glib::VariantBase& value) const;
  

  /** Sets the body @a message. As a side-effect the
   * DBUS_MESSAGE_HEADER_FIELD_SIGNATURE header field is set to the
   * type string of @a body (or cleared if @a body is <tt>0</tt>).
   * 
   * If @a body is floating, @a message assumes ownership of @a body.
   * 
   * @newin{2,26}
   * 
   * @param body Either <tt>0</tt> or a Variant that is a tuple.
   */
  void set_body(const Glib::VariantBase& body);

  
#ifdef  G_OS_UNIX

  /** Gets the UNIX file descriptors associated with @a message, if any.
   * 
   * This method is only available on UNIX.
   * 
   * @newin{2,26}
   * 
   * @return A UnixFDList or <tt>0</tt> if no file descriptors are
   * associated. Do not free, this object is owned by @a message.
   */
  Glib::RefPtr<UnixFDList> get_unix_fd_list();
#endif //  G_OS_UNIX

  
#ifdef  G_OS_UNIX

  /** Gets the UNIX file descriptors associated with @a message, if any.
   * 
   * This method is only available on UNIX.
   * 
   * @newin{2,26}
   * 
   * @return A UnixFDList or <tt>0</tt> if no file descriptors are
   * associated. Do not free, this object is owned by @a message.
   */
  Glib::RefPtr<const UnixFDList> get_unix_fd_list() const;
#endif //  G_OS_UNIX

  
#ifdef  G_OS_UNIX

  /** Sets the UNIX file descriptors associated with @a message. As a
   * side-effect the DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS header
   * field is set to the number of fds in @a fd_list (or cleared if
   *  @a fd_list is <tt>0</tt>).
   * 
   * This method is only available on UNIX.
   * 
   * @newin{2,26}
   * 
   * @param fd_list A UnixFDList or <tt>0</tt>.
   */
  void set_unix_fd_list(const Glib::RefPtr<UnixFDList>& fd_list);
#endif //  G_OS_UNIX


#ifdef G_OS_UNIX
  /** Clears the existing UNIX file descriptor list.
   */
  void unset_unix_fd_list();
#endif //G_OS_UNIX

  
  /** Convenience getter for the DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS header field.
   * 
   * @newin{2,26}
   * 
   * @return The value.
   */
  guint32 get_num_unix_fds() const;
  
  /** Convenience setter for the DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS header field.
   * 
   * @newin{2,26}
   * 
   * @param value The value to set.
   */
  void set_num_unix_fds(guint32 value);

  /** Gets a header field on the message.  The header is returned in @a value.
   * @param value Location in which to store the header.
   * @param header_field The header field type.
   */
  void get_header(Glib::VariantBase& value, MessageHeaderField header_field) const;
  

  /** Sets a header field on @a message.
   * 
   * If @a value is floating, @a message assumes ownership of @a value.
   * 
   * @newin{2,26}
   * 
   * @param header_field A 8-bit unsigned integer (typically a value from the DBusMessageHeaderField enumeration).
   * @param value A Variant to set the header field or <tt>0</tt> to clear the header field.
   */
  void set_header(MessageHeaderField header_field, const Glib::VariantBase& value);

   
  /** Gets an array of all header fields on @a message that are set.
   * 
   * @newin{2,26}
   * 
   * @return An array of header fields
   * terminated by DBUS_MESSAGE_HEADER_FIELD_INVALID.  Each element
   * is a #guchar. Free with Glib::free().
   */
  Glib::ArrayHandle<guchar> get_header_fields() const;

  
  /** Convenience getter for the DBUS_MESSAGE_HEADER_FIELD_DESTINATION header field.
   * 
   * @newin{2,26}
   * 
   * @return The value.
   */
  Glib::ustring get_destination() const;
  
  /** Convenience setter for the DBUS_MESSAGE_HEADER_FIELD_DESTINATION header field.
   * 
   * @newin{2,26}
   * 
   * @param value The value to set.
   */
  void set_destination(const Glib::ustring& value);

  
  /** Convenience getter for the DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME header field.
   * 
   * @newin{2,26}
   * 
   * @return The value.
   */
  Glib::ustring get_error_name() const;
  
  /** Convenience setter for the DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME header field.
   * 
   * @newin{2,26}
   * 
   * @param value The value to set.
   */
  void set_error_name(const Glib::ustring& value);

  
  /** Convenience getter for the DBUS_MESSAGE_HEADER_FIELD_INTERFACE header field.
   * 
   * @newin{2,26}
   * 
   * @return The value.
   */
  Glib::ustring get_interface() const;
  
  /** Convenience setter for the DBUS_MESSAGE_HEADER_FIELD_INTERFACE header field.
   * 
   * @newin{2,26}
   * 
   * @param value The value to set.
   */
  void set_interface(const Glib::ustring& value);

  
  /** Convenience getter for the DBUS_MESSAGE_HEADER_FIELD_MEMBER header field.
   * 
   * @newin{2,26}
   * 
   * @return The value.
   */
  Glib::ustring get_member() const;
  
  /** Convenience setter for the DBUS_MESSAGE_HEADER_FIELD_MEMBER header field.
   * 
   * @newin{2,26}
   * 
   * @param value The value to set.
   */
  void set_member(const Glib::ustring& value);

  
  /** Convenience getter for the DBUS_MESSAGE_HEADER_FIELD_PATH header field.
   * 
   * @newin{2,26}
   * 
   * @return The value.
   */
  Glib::ustring get_path() const;
  
  /** Convenience setter for the DBUS_MESSAGE_HEADER_FIELD_PATH header field.
   * 
   * @newin{2,26}
   * 
   * @param value The value to set.
   */
  void set_path(const Glib::ustring& value);

  
  /** Convenience getter for the DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL header field.
   * 
   * @newin{2,26}
   * 
   * @return The value.
   */
  guint32 get_reply_serial() const;
  
  /** Convenience setter for the DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL header field.
   * 
   * @newin{2,26}
   * 
   * @param value The value to set.
   */
  void set_reply_serial(guint32 value);

  
  /** Convenience getter for the DBUS_MESSAGE_HEADER_FIELD_SENDER header field.
   * 
   * @newin{2,26}
   * 
   * @return The value.
   */
  Glib::ustring get_sender() const;
  
  /** Convenience setter for the DBUS_MESSAGE_HEADER_FIELD_SENDER header field.
   * 
   * @newin{2,26}
   * 
   * @param value The value to set.
   */
  void set_sender(const Glib::ustring& value);

  
  /** Convenience getter for the DBUS_MESSAGE_HEADER_FIELD_SIGNATURE header field.
   * 
   * @newin{2,26}
   * 
   * @return The value.
   */
  Glib::ustring get_signature() const;
  
  /** Convenience setter for the DBUS_MESSAGE_HEADER_FIELD_SIGNATURE header field.
   * 
   * @newin{2,26}
   * 
   * @param value The value to set.
   */
  void set_signature(const Glib::ustring& value);

  
  /** Convenience to get the first item in the body of @a message.
   * 
   * @newin{2,26}
   * 
   * @return The string item or <tt>0</tt> if the first item in the body of
   *  @a message is not a string.
   */
  Glib::ustring get_arg0() const;

  
  /** Utility function to calculate how many bytes are needed to
   * completely deserialize the D-Bus message stored at @a blob.
   * 
   * @newin{2,26}
   * 
   * @param blob A blob represent a binary D-Bus message.
   * @param blob_len The length of @a blob (must be at least 16).
   * @return Number of bytes needed or -1 if @a error is set (e.g. if
   *  @a blob contains invalid data or not enough data is available to
   * determine the size).
   */
  static gssize bytes_needed(const guchar* blob, gsize blob_len);

  
  /** Serializes @a message to a blob. The byte order returned by
   * g_dbus_message_get_byte_order() will be used.
   * 
   * @newin{2,26}
   * 
   * @param out_size Return location for size of generated blob.
   * @param capabilities A DBusCapabilityFlags describing what protocol features are supported.
   * @return A pointer to a
   * valid binary D-Bus message of @a out_size bytes generated by @a message
   * or <tt>0</tt> if @a error is set. Free with Glib::free().
   */
  guchar* to_blob(gsize& out_size, CapabilityFlags capabilities =  CAPABILITY_FLAGS_NONE);

  
  /** If @a message is not of type DBUS_MESSAGE_TYPE_ERROR does
   * nothing and returns <tt>false</tt>.
   * 
   * Otherwise this method encodes the error in @a message as a Error
   * using g_dbus_error_set_dbus_error() using the information in the
   * DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME header field of @a message as
   * well as the first string item in @a message's body.
   * 
   * @newin{2,26}
   * 
   * @return <tt>true</tt> if @a error was set, <tt>false</tt> otherwise.
   */
  void to_exception();

  /** Whether the message is locked.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_locked() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} //namespace DBus

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::DBus::Message
   */
  Glib::RefPtr<Gio::DBus::Message> wrap(GDBusMessage* object, bool take_copy = false);
}


#endif /* _GIOMM_DBUSMESSAGE_H */


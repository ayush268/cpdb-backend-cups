/*
 * Generated by gdbus-codegen 2.50.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __MYDBUS_H__
#define __MYDBUS_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for com.Nilanjana.Calculator */

#define MY_DBUS_TYPE_CALCULATOR (my_dbus_calculator_get_type ())
#define MY_DBUS_CALCULATOR(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), MY_DBUS_TYPE_CALCULATOR, MyDBusCalculator))
#define MY_DBUS_IS_CALCULATOR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), MY_DBUS_TYPE_CALCULATOR))
#define MY_DBUS_CALCULATOR_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), MY_DBUS_TYPE_CALCULATOR, MyDBusCalculatorIface))

struct _MyDBusCalculator;
typedef struct _MyDBusCalculator MyDBusCalculator;
typedef struct _MyDBusCalculatorIface MyDBusCalculatorIface;

struct _MyDBusCalculatorIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_add) (
    MyDBusCalculator *object,
    GDBusMethodInvocation *invocation,
    gint arg_num1,
    gint arg_num2);

  gboolean (*handle_sub) (
    MyDBusCalculator *object,
    GDBusMethodInvocation *invocation,
    gint arg_num1,
    gint arg_num2);

};

GType my_dbus_calculator_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *my_dbus_calculator_interface_info (void);
guint my_dbus_calculator_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void my_dbus_calculator_complete_add (
    MyDBusCalculator *object,
    GDBusMethodInvocation *invocation,
    gint ans);

void my_dbus_calculator_complete_sub (
    MyDBusCalculator *object,
    GDBusMethodInvocation *invocation,
    gint ans);



/* D-Bus method calls: */
void my_dbus_calculator_call_add (
    MyDBusCalculator *proxy,
    gint arg_num1,
    gint arg_num2,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean my_dbus_calculator_call_add_finish (
    MyDBusCalculator *proxy,
    gint *out_ans,
    GAsyncResult *res,
    GError **error);

gboolean my_dbus_calculator_call_add_sync (
    MyDBusCalculator *proxy,
    gint arg_num1,
    gint arg_num2,
    gint *out_ans,
    GCancellable *cancellable,
    GError **error);

void my_dbus_calculator_call_sub (
    MyDBusCalculator *proxy,
    gint arg_num1,
    gint arg_num2,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean my_dbus_calculator_call_sub_finish (
    MyDBusCalculator *proxy,
    gint *out_ans,
    GAsyncResult *res,
    GError **error);

gboolean my_dbus_calculator_call_sub_sync (
    MyDBusCalculator *proxy,
    gint arg_num1,
    gint arg_num2,
    gint *out_ans,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define MY_DBUS_TYPE_CALCULATOR_PROXY (my_dbus_calculator_proxy_get_type ())
#define MY_DBUS_CALCULATOR_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), MY_DBUS_TYPE_CALCULATOR_PROXY, MyDBusCalculatorProxy))
#define MY_DBUS_CALCULATOR_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), MY_DBUS_TYPE_CALCULATOR_PROXY, MyDBusCalculatorProxyClass))
#define MY_DBUS_CALCULATOR_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), MY_DBUS_TYPE_CALCULATOR_PROXY, MyDBusCalculatorProxyClass))
#define MY_DBUS_IS_CALCULATOR_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), MY_DBUS_TYPE_CALCULATOR_PROXY))
#define MY_DBUS_IS_CALCULATOR_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), MY_DBUS_TYPE_CALCULATOR_PROXY))

typedef struct _MyDBusCalculatorProxy MyDBusCalculatorProxy;
typedef struct _MyDBusCalculatorProxyClass MyDBusCalculatorProxyClass;
typedef struct _MyDBusCalculatorProxyPrivate MyDBusCalculatorProxyPrivate;

struct _MyDBusCalculatorProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  MyDBusCalculatorProxyPrivate *priv;
};

struct _MyDBusCalculatorProxyClass
{
  GDBusProxyClass parent_class;
};

GType my_dbus_calculator_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MyDBusCalculatorProxy, g_object_unref)
#endif

void my_dbus_calculator_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
MyDBusCalculator *my_dbus_calculator_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
MyDBusCalculator *my_dbus_calculator_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void my_dbus_calculator_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
MyDBusCalculator *my_dbus_calculator_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
MyDBusCalculator *my_dbus_calculator_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define MY_DBUS_TYPE_CALCULATOR_SKELETON (my_dbus_calculator_skeleton_get_type ())
#define MY_DBUS_CALCULATOR_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), MY_DBUS_TYPE_CALCULATOR_SKELETON, MyDBusCalculatorSkeleton))
#define MY_DBUS_CALCULATOR_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), MY_DBUS_TYPE_CALCULATOR_SKELETON, MyDBusCalculatorSkeletonClass))
#define MY_DBUS_CALCULATOR_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), MY_DBUS_TYPE_CALCULATOR_SKELETON, MyDBusCalculatorSkeletonClass))
#define MY_DBUS_IS_CALCULATOR_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), MY_DBUS_TYPE_CALCULATOR_SKELETON))
#define MY_DBUS_IS_CALCULATOR_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), MY_DBUS_TYPE_CALCULATOR_SKELETON))

typedef struct _MyDBusCalculatorSkeleton MyDBusCalculatorSkeleton;
typedef struct _MyDBusCalculatorSkeletonClass MyDBusCalculatorSkeletonClass;
typedef struct _MyDBusCalculatorSkeletonPrivate MyDBusCalculatorSkeletonPrivate;

struct _MyDBusCalculatorSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  MyDBusCalculatorSkeletonPrivate *priv;
};

struct _MyDBusCalculatorSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType my_dbus_calculator_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MyDBusCalculatorSkeleton, g_object_unref)
#endif

MyDBusCalculator *my_dbus_calculator_skeleton_new (void);


G_END_DECLS

#endif /* __MYDBUS_H__ */

//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <awesome_notifications/awesome_notifications_plugin.h>
#include <desktop_webview_window/desktop_webview_window_plugin.h>
#include <dynamic_color/dynamic_color_plugin.h>
#include <flutter_secure_storage_linux/flutter_secure_storage_linux_plugin.h>
#include <gtk/gtk_plugin.h>
#include <screen_retriever_linux/screen_retriever_linux_plugin.h>
#include <url_launcher_linux/url_launcher_plugin.h>
#include <window_manager/window_manager_plugin.h>
#include <window_to_front/window_to_front_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) awesome_notifications_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "AwesomeNotificationsPlugin");
  awesome_notifications_plugin_register_with_registrar(awesome_notifications_registrar);
  g_autoptr(FlPluginRegistrar) desktop_webview_window_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "DesktopWebviewWindowPlugin");
  desktop_webview_window_plugin_register_with_registrar(desktop_webview_window_registrar);
  g_autoptr(FlPluginRegistrar) dynamic_color_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "DynamicColorPlugin");
  dynamic_color_plugin_register_with_registrar(dynamic_color_registrar);
  g_autoptr(FlPluginRegistrar) flutter_secure_storage_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlutterSecureStorageLinuxPlugin");
  flutter_secure_storage_linux_plugin_register_with_registrar(flutter_secure_storage_linux_registrar);
  g_autoptr(FlPluginRegistrar) gtk_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "GtkPlugin");
  gtk_plugin_register_with_registrar(gtk_registrar);
  g_autoptr(FlPluginRegistrar) screen_retriever_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "ScreenRetrieverLinuxPlugin");
  screen_retriever_linux_plugin_register_with_registrar(screen_retriever_linux_registrar);
  g_autoptr(FlPluginRegistrar) url_launcher_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "UrlLauncherPlugin");
  url_launcher_plugin_register_with_registrar(url_launcher_linux_registrar);
  g_autoptr(FlPluginRegistrar) window_manager_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "WindowManagerPlugin");
  window_manager_plugin_register_with_registrar(window_manager_registrar);
  g_autoptr(FlPluginRegistrar) window_to_front_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "WindowToFrontPlugin");
  window_to_front_plugin_register_with_registrar(window_to_front_registrar);
}

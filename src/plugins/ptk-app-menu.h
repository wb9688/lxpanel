#ifndef PTK_APP_MENU_H
#define PTK_APP_MENU_H

gboolean ptk_app_menu_item_has_data( GtkMenuItem* item );
void ptk_app_menu_insert_items( GtkMenu* menu, int position );
gboolean ptk_app_menu_need_reload();

#endif

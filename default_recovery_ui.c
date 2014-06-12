/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <linux/input.h>

#include "recovery_ui.h"
#include "common.h"
#include "extendedcommands.h"
#include "cutils/properties.h"
//char langurage[];
//int ret = property_get("sys.langurage.chinese", langurage, NULL);
char* MENU_HEADERS[] = { NULL };
/*extern void set_item_menu() {


if ( langurage== 1 ) {*/
char* MENU_ITEMS[] = { "reboot system now",
                       "install zip",
                       "wipe data/factory reset",
                       "wipe cache partition",
                       "backup and restore",
                       "mounts and storage",
                       "advanced",
		       "select langurage",
			NULL };

/*} else {
char* MENU_ITEMS[] = { "立即重启系统",
                       "刷入刷机包",
                       "清除数据/恢复出厂设置",
                       "清除缓存分区",
                       "备份和还原",
                       "挂载及 U 盘模式",
                       "高级功能",
		       "选择语言",

                       NULL };
	}
}*/
void device_ui_init(UIParameters* ui_parameters) {
}

int device_recovery_start() {
    return 0;
}

// add here any key combo check to reboot device
int device_reboot_now(volatile char* key_pressed, int key_code) {
    return 0;
}

int device_perform_action(int which) {
    return which;
}

int device_wipe_data() {
    return 0;
}

// For licensing and usage information, read docs/release/winui_license.txt
//****************************************************************************
//============================================================
//
//  newui.h - NEWUI
//
//============================================================

#ifndef WINUI_NEWUI_H
#define WINUI_NEWUI_H

///// INCLUDES /////

#include <windows.h>
#include <commdlg.h>
#include <tchar.h>
#include "emu.h"
#include "mame.h"
#include "emuopts.h"
#include "ui/ui.h"
#include "newuires.h"
#include "strconv.h"
#include "natkeyboard.h"
#include "imagedev/cassette.h"
#include "windows/window.h"
#include "winutf8.h"
#include "modules/lib/osdobj_common.h"



// These are called from src/osd/windows/windows.c and
//   provide the linkage between newui and the core.

LRESULT CALLBACK winwindow_video_window_proc_ui(HWND wnd, UINT message, WPARAM wparam, LPARAM lparam);

int win_create_menu(running_machine &machine, HMENU *menus);

#endif /* NEWUI_H */


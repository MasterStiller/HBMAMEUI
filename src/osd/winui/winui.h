// For licensing and usage information, read docs/release/winui_license.txt
//****************************************************************************

#ifndef WINUI_WINUI_H
#define WINUI_WINUI_H

#include <commctrl.h>
#include <commdlg.h>
#include "emu.h"
#include "screenshot.h"
#include "drivenum.h"
#include "romload.h"

#define MAMENAME "HBMAME"
#define MUI_INI_FILENAME MAMENAME "UI.ini"

#ifdef PTR64
#define MAMEUINAME MAMENAME "UI"
#else
#define MAMEUINAME MAMENAME "UI32"
#endif

#define SEARCH_PROMPT "<search here>"

enum
{
	UNKNOWN = -1,
	TAB_PICKER = 0,
	TAB_DISPLAY,
	TAB_MISC,
	NUM_TABS
};

enum
{
	FILETYPE_INPUT_FILES = 1,
	FILETYPE_SAVESTATE_FILES,
	FILETYPE_WAVE_FILES,
	FILETYPE_AVI_FILES,
	FILETYPE_MNG_FILES,
	FILETYPE_EFFECT_FILES,
	FILETYPE_SHADER_FILES,
	FILETYPE_BGFX_FILES,
	FILETYPE_LUASCRIPT_FILES
};


typedef struct
{
	INT resource;
	const char *icon_name;
} ICONDATA;

extern TCHAR last_directory[MAX_PATH];

typedef BOOL (WINAPI *common_file_dialog_proc)(LPOPENFILENAME lpofn);

typedef std::string string;

BOOL CommonFileDialog(common_file_dialog_proc cfd,char *filename, int filetype);

HWND GetMainWindow(void);
HWND GetTreeView(void);
HWND GetProgressBar();
void SetNumOptionFolders(int count);
void GetRealColumnOrder(int order[]);
HICON LoadIconFromFile(const char *iconname);
void UpdateScreenShot(void);
void ResizePickerControls(HWND hWnd);
void MamePlayGame(void);
int FindIconIndex(int nIconResource);
int FindIconIndexByName(const char *icon_name);
int GetSelectedPick(void);

void UpdateListView(void);

// Move The in "The Title (notes)" to "Title, The (notes)"
char * ModifyThe(const char *str);

// Convert Ampersand so it can display in a static control
char * ConvertAmpersandString(const char *s);

// globalized for painting tree control
HBITMAP GetBackgroundBitmap(void);
HPALETTE GetBackgroundPalette(void);
MYBITMAPINFO* GetBackgroundInfo(void);

int GetMinimumScreenShotWindowWidth(void);

// we maintain an array of drivers sorted by name, useful all around
int GetParentIndex(const game_driver *driver);
int GetParentRomSetIndex(const game_driver *driver);
int GetGameNameIndex(const char *name);

// sets text in part of the status bar on the main window
void SetStatusBarText(int part_index, const char *message);
void SetStatusBarTextF(int part_index, const char *fmt, ...) ATTR_PRINTF(2,3);

int MameUIMain(HINSTANCE hInstance, LPWSTR lpCmdLine, int nCmdShow);

BOOL MouseHasBeenMoved(void);

const char * GetSearchText(void);

#endif


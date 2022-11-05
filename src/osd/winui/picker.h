// For licensing and usage information, read docs/release/winui_license.txt
//****************************************************************************

#ifndef PICKER_H
#define PICKER_H

#include <stdint.h>

struct PickerCallbacks
{
	// Options retrieval
	void (*pfnSetSortColumn)(int column);
	int (*pfnGetSortColumn)(void);
	void (*pfnSetSortReverse)(BOOL reverse);
	BOOL (*pfnGetSortReverse)(void);
	void (*pfnSetViewMode)(int val);
	int (*pfnGetViewMode)(void);
	void (*pfnSetColumnWidths)(int widths[]);
	void (*pfnGetColumnWidths)(int widths[]);
	void (*pfnSetColumnOrder)(int order[]);
	void (*pfnGetColumnOrder)(int order[]);
	void (*pfnSetColumnShown)(int shown[]);
	void (*pfnGetColumnShown)(int shown[]);
	BOOL (*pfnGetOffsetChildren)(void);

	int (*pfnCompare)(HWND hwndPicker, int nIndex1, int nIndex2, int nSortSubItem);
	void (*pfnDoubleClick)(void);
	const TCHAR *(*pfnGetItemString)(HWND hwndPicker, int nItem, int nColumn, TCHAR *pszBuffer, UINT nBufferLength);
	int (*pfnGetItemImage)(HWND hwndPicker, int nItem);
	void (*pfnLeavingItem)(HWND hwndPicker, int nItem);
	void (*pfnEnteringItem)(HWND hwndPicker, int nItem);
	void (*pfnBeginListViewDrag)(NM_LISTVIEW *pnlv);
	int (*pfnFindItemParent)(HWND hwndPicker, int nItem);
	BOOL (*pfnOnIdle)(HWND hwndPicker);
	void (*pfnOnHeaderContextMenu)(POINT pt, int nColumn);
	void (*pfnOnBodyContextMenu)(POINT pt);
};

struct PickerOptions
{
	const struct PickerCallbacks *pCallbacks;
	BOOL bOldControl;
	BOOL bXPControl;
	int nColumnCount;
	const LPCTSTR *ppszColumnNames;
};

enum
{
	VIEW_LARGE_ICONS = 0,
	VIEW_SMALL_ICONS,
	VIEW_INLIST,
	VIEW_REPORT,
	VIEW_GROUPED,
	VIEW_MAX
};



BOOL SetupPicker(HWND hwndPicker, const struct PickerOptions *pOptions);

int Picker_GetViewID(HWND hwndPicker);
void Picker_SetViewID(HWND hwndPicker, int nViewID);
int Picker_GetRealColumnFromViewColumn(HWND hwndPicker, int nViewColumn);
int Picker_GetViewColumnFromRealColumn(HWND hwndPicker, int nRealColumn);
void Picker_Sort(HWND hwndPicker);
void Picker_ResetColumnDisplay(HWND hwndPicker);
int Picker_GetSelectedItem(HWND hwndPicker);
void Picker_SetSelectedItem(HWND hwndPicker, uint32_t nItem);
void Picker_SetSelectedPick(HWND hwndPicker, uint32_t nIndex);
int Picker_GetNumColumns(HWND hWnd);
void Picker_ClearIdle(HWND hwndPicker);
void Picker_ResetIdle(HWND hwndPicker);
BOOL Picker_IsIdling(HWND hwndPicker);
void Picker_SetHeaderImageList(HWND hwndPicker, HIMAGELIST hHeaderImages);
int Picker_InsertItemSorted(HWND hwndPicker, int nParam);
BOOL Picker_SaveColumnWidths(HWND hwndPicker);

// These are used to handle events received by the parent regarding
// picker controls
BOOL Picker_HandleNotify(LPNMHDR lpNmHdr);
void Picker_HandleDrawItem(HWND hwndPicker, LPDRAWITEMSTRUCT lpDrawItemStruct);

// Accessors
const struct PickerCallbacks *Picker_GetCallbacks(HWND hwndPicker);
int Picker_GetColumnCount(HWND hwndPicker);
const LPCTSTR *Picker_GetColumnNames(HWND hwndPicker);

#endif // PICKER_H

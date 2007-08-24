/*******************************************************************************
 * Copyright (c) 2000, 2007 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#include "swt.h"
#include "os_stats.h"

#ifdef NATIVE_STATS

int OS_nativeFunctionCount = 909;
int OS_nativeFunctionCallCount[909];
char * OS_nativeFunctionNames[] = {
	"ACCEL_1sizeof",
	"ACTCTX_1sizeof",
	"AbortDoc",
	"ActivateActCtx",
	"ActivateKeyboardLayout",
	"AddFontResourceExA",
	"AddFontResourceExW",
	"AdjustWindowRectEx",
	"AllowSetForegroundWindow",
	"AlphaBlend",
	"AnimateWindow",
	"Arc",
	"AssocQueryStringA",
	"AssocQueryStringW",
	"AttachThreadInput",
	"BITMAPINFOHEADER_1sizeof",
	"BITMAP_1sizeof",
	"BLENDFUNCTION_1sizeof",
	"BP_1PAINTPARAMS_1sizeof",
	"BROWSEINFO_1sizeof",
	"BUTTON_1IMAGELIST_1sizeof",
	"BeginBufferedPaint",
	"BeginDeferWindowPos",
	"BeginPaint",
	"BeginPath",
	"BitBlt",
	"BringWindowToTop",
	"BufferedPaintInit",
	"BufferedPaintSetAlpha",
	"BufferedPaintUnInit",
	"CANDIDATEFORM_1sizeof",
	"CHOOSECOLOR_1sizeof",
	"CHOOSEFONT_1sizeof",
	"COMBOBOXINFO_1sizeof",
	"COMPOSITIONFORM_1sizeof",
	"CREATESTRUCT_1sizeof",
	"Call",
	"CallNextHookEx",
	"CallWindowProcA",
	"CallWindowProcW",
	"CharLowerA",
	"CharLowerW",
	"CharUpperA",
	"CharUpperW",
	"CheckMenuItem",
	"ChooseColorA",
	"ChooseColorW",
	"ChooseFontA",
	"ChooseFontW",
	"ClientToScreen",
	"CloseClipboard",
	"CloseHandle",
	"CloseThemeData",
	"CoCreateInstance",
	"CoInternetIsFeatureEnabled",
	"CoInternetSetFeatureEnabled",
	"CombineRgn",
	"CommDlgExtendedError",
	"CommandBar_1AddAdornments",
	"CommandBar_1Create",
	"CommandBar_1Destroy",
	"CommandBar_1DrawMenuBar",
	"CommandBar_1Height",
	"CommandBar_1InsertMenubarEx",
	"CommandBar_1Show",
	"CopyImage",
	"CreateAcceleratorTableA",
	"CreateAcceleratorTableW",
	"CreateActCtxA",
	"CreateActCtxW",
	"CreateBitmap",
	"CreateCaret",
	"CreateCompatibleBitmap",
	"CreateCompatibleDC",
	"CreateCursor",
	"CreateDCA",
	"CreateDCW",
	"CreateDIBSection",
	"CreateFontIndirectA__I",
	"CreateFontIndirectA__Lorg_eclipse_swt_internal_win32_LOGFONTA_2",
	"CreateFontIndirectW__I",
	"CreateFontIndirectW__Lorg_eclipse_swt_internal_win32_LOGFONTW_2",
	"CreateIconIndirect",
	"CreateMenu",
	"CreatePalette",
	"CreatePatternBrush",
	"CreatePen",
	"CreatePolygonRgn",
	"CreatePopupMenu",
	"CreateProcessA",
	"CreateProcessW",
	"CreateRectRgn",
	"CreateSolidBrush",
	"CreateStreamOnHGlobal",
	"CreateWindowExA",
	"CreateWindowExW",
	"DIBSECTION_1sizeof",
	"DLLVERSIONINFO_1sizeof",
	"DOCHOSTUIINFO_1sizeof",
	"DOCINFO_1sizeof",
	"DRAWITEMSTRUCT_1sizeof",
	"DROPFILES_1sizeof",
	"DWM_1BLURBEHIND_1sizeof",
	"DefFrameProcA",
	"DefFrameProcW",
	"DefMDIChildProcA",
	"DefMDIChildProcW",
	"DefWindowProcA",
	"DefWindowProcW",
	"DeferWindowPos",
	"DeleteDC",
	"DeleteMenu",
	"DeleteObject",
	"DestroyAcceleratorTable",
	"DestroyCaret",
	"DestroyCursor",
	"DestroyIcon",
	"DestroyMenu",
	"DestroyWindow",
	"DispatchMessageA",
	"DispatchMessageW",
	"DragDetect",
	"DragFinish",
	"DragQueryFileA",
	"DragQueryFileW",
	"DrawAnimatedRects",
	"DrawEdge",
	"DrawFocusRect",
	"DrawFrameControl",
	"DrawIconEx",
	"DrawMenuBar",
	"DrawStateA",
	"DrawStateW",
	"DrawTextA",
	"DrawTextW",
	"DrawThemeBackground",
	"DrawThemeEdge",
	"DrawThemeIcon",
	"DrawThemeParentBackground",
	"DrawThemeText",
	"DwmEnableBlurBehindWindow",
	"DwmExtendFrameIntoClientArea",
	"EXTLOGPEN_1sizeof",
	"Ellipse",
	"EnableMenuItem",
	"EnableScrollBar",
	"EnableWindow",
	"EndBufferedPaint",
	"EndDeferWindowPos",
	"EndDoc",
	"EndPage",
	"EndPaint",
	"EndPath",
	"EnumDisplayMonitors",
	"EnumFontFamiliesA",
	"EnumFontFamiliesExA",
	"EnumFontFamiliesExW",
	"EnumFontFamiliesW",
	"EnumSystemLanguageGroupsA",
	"EnumSystemLanguageGroupsW",
	"EnumSystemLocalesA",
	"EnumSystemLocalesW",
	"EqualRect",
	"EqualRgn",
	"ExcludeClipRect",
	"ExpandEnvironmentStringsA",
	"ExpandEnvironmentStringsW",
	"ExtCreatePen",
	"ExtCreateRegion",
	"ExtTextOutA",
	"ExtTextOutW",
	"ExtractIconExA",
	"ExtractIconExW",
	"FILETIME_1sizeof",
	"FillPath",
	"FillRect",
	"FindWindowA",
	"FindWindowW",
	"FormatMessageA",
	"FormatMessageW",
	"FreeLibrary",
	"GCP_1RESULTS_1sizeof",
	"GET_1WHEEL_1DELTA_1WPARAM",
	"GET_1X_1LPARAM",
	"GET_1Y_1LPARAM",
	"GRADIENT_1RECT_1sizeof",
	"GUITHREADINFO_1sizeof",
	"GdiSetBatchLimit",
	"GetACP",
	"GetActiveWindow",
	"GetAsyncKeyState",
	"GetBkColor",
	"GetCapture",
	"GetCaretPos",
	"GetCharABCWidthsA",
	"GetCharABCWidthsW",
	"GetCharWidthA",
	"GetCharWidthW",
	"GetCharacterPlacementA",
	"GetCharacterPlacementW",
	"GetClassInfoA",
	"GetClassInfoW",
	"GetClassNameA",
	"GetClassNameW",
	"GetClientRect",
	"GetClipBox",
	"GetClipRgn",
	"GetClipboardData",
	"GetClipboardFormatNameA",
	"GetClipboardFormatNameW",
	"GetComboBoxInfo",
	"GetCurrentObject",
	"GetCurrentProcessId",
	"GetCurrentThreadId",
	"GetCursor",
	"GetCursorPos",
	"GetDC",
	"GetDCEx",
	"GetDIBColorTable",
	"GetDIBits",
	"GetDateFormatA",
	"GetDateFormatW",
	"GetDesktopWindow",
	"GetDeviceCaps",
	"GetDialogBaseUnits",
	"GetDlgItem",
	"GetDoubleClickTime",
	"GetFocus",
	"GetFontLanguageInfo",
	"GetForegroundWindow",
	"GetGUIThreadInfo",
	"GetIconInfo",
	"GetKeyNameTextA",
	"GetKeyNameTextW",
	"GetKeyState",
	"GetKeyboardLayout",
	"GetKeyboardLayoutList",
	"GetKeyboardState",
	"GetLastActivePopup",
	"GetLastError",
	"GetLayout",
	"GetLibraryHandle",
	"GetLocaleInfoA",
	"GetLocaleInfoW",
	"GetMapMode",
	"GetMenu",
	"GetMenuBarInfo",
	"GetMenuDefaultItem",
	"GetMenuInfo",
	"GetMenuItemCount",
	"GetMenuItemInfoA",
	"GetMenuItemInfoW",
	"GetMenuItemRect",
	"GetMessageA",
	"GetMessagePos",
	"GetMessageTime",
	"GetMessageW",
	"GetMetaRgn",
	"GetModuleFileNameA",
	"GetModuleFileNameW",
	"GetModuleHandleA",
	"GetModuleHandleW",
	"GetMonitorInfoA",
	"GetMonitorInfoW",
	"GetNearestPaletteIndex",
	"GetObjectA__III",
	"GetObjectA__IILorg_eclipse_swt_internal_win32_BITMAP_2",
	"GetObjectA__IILorg_eclipse_swt_internal_win32_DIBSECTION_2",
	"GetObjectA__IILorg_eclipse_swt_internal_win32_EXTLOGPEN_2",
	"GetObjectA__IILorg_eclipse_swt_internal_win32_LOGBRUSH_2",
	"GetObjectA__IILorg_eclipse_swt_internal_win32_LOGFONTA_2",
	"GetObjectA__IILorg_eclipse_swt_internal_win32_LOGPEN_2",
	"GetObjectW__III",
	"GetObjectW__IILorg_eclipse_swt_internal_win32_BITMAP_2",
	"GetObjectW__IILorg_eclipse_swt_internal_win32_DIBSECTION_2",
	"GetObjectW__IILorg_eclipse_swt_internal_win32_EXTLOGPEN_2",
	"GetObjectW__IILorg_eclipse_swt_internal_win32_LOGBRUSH_2",
	"GetObjectW__IILorg_eclipse_swt_internal_win32_LOGFONTW_2",
	"GetObjectW__IILorg_eclipse_swt_internal_win32_LOGPEN_2",
	"GetOpenFileNameA",
	"GetOpenFileNameW",
	"GetOutlineTextMetricsA",
	"GetOutlineTextMetricsW",
	"GetPaletteEntries",
	"GetParent",
	"GetPath",
	"GetPixel",
	"GetPolyFillMode",
	"GetProcAddress",
	"GetProcessHeap",
	"GetProcessHeaps",
	"GetProfileStringA",
	"GetProfileStringW",
	"GetPropA",
	"GetPropW",
	"GetROP2",
	"GetRandomRgn",
	"GetRegionData",
	"GetRgnBox",
	"GetSaveFileNameA",
	"GetSaveFileNameW",
	"GetScrollInfo",
	"GetStartupInfoA",
	"GetStartupInfoW",
	"GetStockObject",
	"GetSysColor",
	"GetSysColorBrush",
	"GetSystemDefaultUILanguage",
	"GetSystemMenu",
	"GetSystemMetrics",
	"GetSystemPaletteEntries",
	"GetTextCharset",
	"GetTextColor",
	"GetTextExtentPoint32A",
	"GetTextExtentPoint32W",
	"GetTextMetricsA",
	"GetTextMetricsW",
	"GetThemeBackgroundContentRect",
	"GetThemeBackgroundExtent",
	"GetThemeColor",
	"GetThemeInt",
	"GetThemeMargins",
	"GetThemeMetric",
	"GetThemePartSize",
	"GetThemeRect",
	"GetThemeSysSize",
	"GetThemeTextExtent",
	"GetTickCount",
	"GetTimeFormatA",
	"GetTimeFormatW",
	"GetUpdateRect",
	"GetUpdateRgn",
	"GetVersionExA__Lorg_eclipse_swt_internal_win32_OSVERSIONINFOA_2",
	"GetVersionExA__Lorg_eclipse_swt_internal_win32_OSVERSIONINFOEXA_2",
	"GetVersionExW__Lorg_eclipse_swt_internal_win32_OSVERSIONINFOEXW_2",
	"GetVersionExW__Lorg_eclipse_swt_internal_win32_OSVERSIONINFOW_2",
	"GetWindow",
	"GetWindowDC",
	"GetWindowLongA",
	"GetWindowLongPtrA",
	"GetWindowLongPtrW",
	"GetWindowLongW",
	"GetWindowOrgEx",
	"GetWindowPlacement",
	"GetWindowRect",
	"GetWindowRgn",
	"GetWindowTextA",
	"GetWindowTextLengthA",
	"GetWindowTextLengthW",
	"GetWindowTextW",
	"GetWindowTheme",
	"GetWindowThreadProcessId",
	"GetWorldTransform",
	"GlobalAddAtomA",
	"GlobalAddAtomW",
	"GlobalAlloc",
	"GlobalFree",
	"GlobalLock",
	"GlobalSize",
	"GlobalUnlock",
	"GradientFill",
	"HDHITTESTINFO_1sizeof",
	"HDITEM_1sizeof",
	"HDLAYOUT_1sizeof",
	"HELPINFO_1sizeof",
	"HIGHCONTRAST_1sizeof",
	"HIWORD",
	"HeapAlloc",
	"HeapFree",
	"HeapValidate",
	"HideCaret",
	"HitTestThemeBackground",
	"ICONINFO_1sizeof",
	"IIDFromString",
	"INITCOMMONCONTROLSEX_1sizeof",
	"INPUT_1sizeof",
	"ImageList_1Add",
	"ImageList_1AddMasked",
	"ImageList_1BeginDrag",
	"ImageList_1Create",
	"ImageList_1Destroy",
	"ImageList_1DragEnter",
	"ImageList_1DragLeave",
	"ImageList_1DragMove",
	"ImageList_1DragShowNolock",
	"ImageList_1Draw",
	"ImageList_1EndDrag",
	"ImageList_1GetDragImage",
	"ImageList_1GetIcon",
	"ImageList_1GetIconSize",
	"ImageList_1GetImageCount",
	"ImageList_1Remove",
	"ImageList_1Replace",
	"ImageList_1ReplaceIcon",
	"ImageList_1SetIconSize",
	"ImmAssociateContext",
	"ImmCreateContext",
	"ImmDestroyContext",
	"ImmDisableTextFrameService",
	"ImmGetCompositionFontA",
	"ImmGetCompositionFontW",
	"ImmGetCompositionStringA",
	"ImmGetCompositionStringW__II_3CI",
	"ImmGetCompositionStringW__II_3II",
	"ImmGetContext",
	"ImmGetConversionStatus",
	"ImmGetDefaultIMEWnd",
	"ImmGetOpenStatus",
	"ImmNotifyIME",
	"ImmReleaseContext",
	"ImmSetCandidateWindow",
	"ImmSetCompositionFontA",
	"ImmSetCompositionFontW",
	"ImmSetCompositionWindow",
	"ImmSetConversionStatus",
	"ImmSetOpenStatus",
	"InitCommonControls",
	"InitCommonControlsEx",
	"InsertMenuA",
	"InsertMenuItemA",
	"InsertMenuItemW",
	"InsertMenuW",
	"InternetSetOption",
	"IntersectClipRect",
	"IntersectRect",
	"InvalidateRect",
	"InvalidateRgn",
	"IsAppThemed",
	"IsBadReadPtr",
	"IsBadWritePtr",
	"IsDBCSLeadByte",
	"IsHungAppWindow",
	"IsIconic",
	"IsPPC",
	"IsSP",
	"IsWindowEnabled",
	"IsWindowVisible",
	"IsZoomed",
	"KEYBDINPUT_1sizeof",
	"KillTimer",
	"LITEM_1sizeof",
	"LOGBRUSH_1sizeof",
	"LOGFONTA_1sizeof",
	"LOGFONTW_1sizeof",
	"LOGPEN_1sizeof",
	"LOWORD",
	"LVCOLUMN_1sizeof",
	"LVHITTESTINFO_1sizeof",
	"LVITEM_1sizeof",
	"LineTo",
	"LoadBitmapA",
	"LoadBitmapW",
	"LoadCursorA",
	"LoadCursorW",
	"LoadIconA",
	"LoadIconW",
	"LoadImageA__IIIIII",
	"LoadImageA__I_3BIIII",
	"LoadImageW__IIIIII",
	"LoadImageW__I_3CIIII",
	"LoadLibraryA",
	"LoadLibraryW",
	"LoadStringA",
	"LoadStringW",
	"LocalFree",
	"LockWindowUpdate",
	"MAKELPARAM",
	"MAKELRESULT",
	"MAKEWPARAM",
	"MARGINS_1sizeof",
	"MCIWndRegisterClass",
	"MEASUREITEMSTRUCT_1sizeof",
	"MENUBARINFO_1sizeof",
	"MENUINFO_1sizeof",
	"MENUITEMINFO_1sizeof",
	"MINMAXINFO_1sizeof",
	"MONITORINFO_1sizeof",
	"MOUSEINPUT_1sizeof",
	"MSG_1sizeof",
	"MapVirtualKeyA",
	"MapVirtualKeyW",
	"MapWindowPoints__IILorg_eclipse_swt_internal_win32_POINT_2I",
	"MapWindowPoints__IILorg_eclipse_swt_internal_win32_RECT_2I",
	"MessageBeep",
	"MessageBoxA",
	"MessageBoxW",
	"MonitorFromWindow",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_DOCHOSTUIINFO_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_DROPFILES_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_GRADIENT_1RECT_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_KEYBDINPUT_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_LOGFONTA_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_LOGFONTW_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_MEASUREITEMSTRUCT_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_MINMAXINFO_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_MOUSEINPUT_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_MSG_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_NMLVCUSTOMDRAW_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_NMLVDISPINFO_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_NMTTDISPINFOA_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_NMTTDISPINFOW_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_NMTVCUSTOMDRAW_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_NMTVDISPINFO_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_OPENFILENAME_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_RECT_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_TRIVERTEX_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_UDACCEL_2I",
	"MoveMemory__ILorg_eclipse_swt_internal_win32_WINDOWPOS_2I",
	"MoveMemory__I_3BI",
	"MoveMemory__I_3CI",
	"MoveMemory__I_3DI",
	"MoveMemory__I_3FI",
	"MoveMemory__I_3II",
	"MoveMemory__I_3JI",
	"MoveMemory__I_3SI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_BITMAPINFOHEADER_2_3BI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_DOCHOSTUIINFO_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_DRAWITEMSTRUCT_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_EXTLOGPEN_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_HDITEM_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_HELPINFO_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_LOGFONTA_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_LOGFONTW_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_MEASUREITEMSTRUCT_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_MINMAXINFO_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_MSG_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMCUSTOMDRAW_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMHDR_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMHEADER_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLINK_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLISTVIEW_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLVCUSTOMDRAW_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLVDISPINFO_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLVFINDITEM_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLVODSTATECHANGE_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMREBARCHEVRON_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMREBARCHILDSIZE_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMRGINFO_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTBHOTITEM_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTOOLBAR_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTREEVIEW_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTTDISPINFOA_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTTDISPINFOW_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTVCUSTOMDRAW_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTVDISPINFO_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTVITEMCHANGE_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMUPDOWN_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_OFNOTIFY_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_OPENFILENAME_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_POINT_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_POINT_2_3JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_RECT_2_3II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_SCRIPT_1ITEM_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_SCRIPT_1LOGATTR_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_SCRIPT_1PROPERTIES_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_TEXTMETRICA_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_TEXTMETRICW_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_TVITEM_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_UDACCEL_2II",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_WINDOWPOS_2II",
	"MoveMemory___3BII",
	"MoveMemory___3BLorg_eclipse_swt_internal_win32_ACCEL_2I",
	"MoveMemory___3BLorg_eclipse_swt_internal_win32_BITMAPINFOHEADER_2I",
	"MoveMemory___3CII",
	"MoveMemory___3DII",
	"MoveMemory___3FII",
	"MoveMemory___3III",
	"MoveMemory___3JII",
	"MoveMemory___3SII",
	"MoveToEx",
	"MsgWaitForMultipleObjectsEx",
	"MultiByteToWideChar__IIII_3CI",
	"MultiByteToWideChar__II_3BI_3CI",
	"NMCUSTOMDRAW_1sizeof",
	"NMHDR_1sizeof",
	"NMHEADER_1sizeof",
	"NMLINK_1sizeof",
	"NMLISTVIEW_1sizeof",
	"NMLVCUSTOMDRAW_1sizeof",
	"NMLVDISPINFO_1sizeof",
	"NMLVFINDITEM_1sizeof",
	"NMLVODSTATECHANGE_1sizeof",
	"NMREBARCHEVRON_1sizeof",
	"NMREBARCHILDSIZE_1sizeof",
	"NMRGINFO_1sizeof",
	"NMTBHOTITEM_1sizeof",
	"NMTOOLBAR_1sizeof",
	"NMTREEVIEW_1sizeof",
	"NMTTDISPINFOA_1sizeof",
	"NMTTDISPINFOW_1sizeof",
	"NMTVCUSTOMDRAW_1sizeof",
	"NMTVDISPINFO_1sizeof",
	"NMTVITEMCHANGE_1sizeof",
	"NMUPDOWN_1sizeof",
	"NONCLIENTMETRICSA_1sizeof",
	"NONCLIENTMETRICSW_1sizeof",
	"NOTIFYICONDATAA_1V2_1SIZE",
	"NOTIFYICONDATAW_1V2_1SIZE",
	"NotifyWinEvent",
	"OFNOTIFY_1sizeof",
	"OPENFILENAME_1sizeof",
	"OSVERSIONINFOA_1sizeof",
	"OSVERSIONINFOEXA_1sizeof",
	"OSVERSIONINFOEXW_1sizeof",
	"OSVERSIONINFOW_1sizeof",
	"OUTLINETEXTMETRICA_1sizeof",
	"OUTLINETEXTMETRICW_1sizeof",
	"OffsetRect",
	"OffsetRgn",
	"OleInitialize",
	"OleUninitialize",
	"OpenClipboard",
	"OpenThemeData",
	"PAINTSTRUCT_1sizeof",
	"POINTSTOPOINT",
	"POINT_1sizeof",
	"PRIMARYLANGID",
	"PRINTDLG_1sizeof",
	"PROCESS_1INFORMATION_1sizeof",
	"PatBlt",
	"PeekMessageA",
	"PeekMessageW",
	"Pie",
	"Polygon",
	"Polyline",
	"PostMessageA",
	"PostMessageW",
	"PostThreadMessageA",
	"PostThreadMessageW",
	"PrintDlgA",
	"PrintDlgW",
	"PrintWindow",
	"PtInRect",
	"PtInRegion",
	"REBARBANDINFO_1sizeof",
	"RECT_1sizeof",
	"RealizePalette",
	"RectInRegion",
	"Rectangle",
	"RedrawWindow",
	"RegCloseKey",
	"RegEnumKeyExA",
	"RegEnumKeyExW",
	"RegOpenKeyExA",
	"RegOpenKeyExW",
	"RegQueryInfoKeyA",
	"RegQueryInfoKeyW",
	"RegQueryValueExA__I_3BI_3I_3B_3I",
	"RegQueryValueExA__I_3BI_3I_3I_3I",
	"RegQueryValueExW__I_3CI_3I_3C_3I",
	"RegQueryValueExW__I_3CI_3I_3I_3I",
	"RegisterClassA",
	"RegisterClassW",
	"RegisterClipboardFormatA",
	"RegisterClipboardFormatW",
	"RegisterWindowMessageA",
	"RegisterWindowMessageW",
	"ReleaseCapture",
	"ReleaseDC",
	"RemoveMenu",
	"RemovePropA",
	"RemovePropW",
	"RestoreDC",
	"RoundRect",
	"SCRIPT_1ANALYSIS_1sizeof",
	"SCRIPT_1CONTROL_1sizeof",
	"SCRIPT_1DIGITSUBSTITUTE_1sizeof",
	"SCRIPT_1FONTPROPERTIES_1sizeof",
	"SCRIPT_1ITEM_1sizeof",
	"SCRIPT_1LOGATTR_1sizeof",
	"SCRIPT_1PROPERTIES_1sizeof",
	"SCRIPT_1STATE_1sizeof",
	"SCROLLINFO_1sizeof",
	"SHACTIVATEINFO_1sizeof",
	"SHBrowseForFolderA",
	"SHBrowseForFolderW",
	"SHCreateMenuBar",
	"SHELLEXECUTEINFO_1sizeof",
	"SHFILEINFOA_1sizeof",
	"SHFILEINFOW_1sizeof",
	"SHGetFileInfoA",
	"SHGetFileInfoW",
	"SHGetMalloc",
	"SHGetPathFromIDListA",
	"SHGetPathFromIDListW",
	"SHHandleWMSettingChange",
	"SHMENUBARINFO_1sizeof",
	"SHRGINFO_1sizeof",
	"SHRecognizeGesture",
	"SHSendBackToFocusWindow",
	"SHSetAppKeyWndAssoc",
	"SHSipPreference",
	"SIPINFO_1sizeof",
	"SIZE_1sizeof",
	"STARTUPINFO_1sizeof",
	"SYSTEMTIME_1sizeof",
	"SaveDC",
	"ScreenToClient",
	"ScriptApplyDigitSubstitution",
	"ScriptBreak",
	"ScriptCPtoX",
	"ScriptCacheGetHeight",
	"ScriptFreeCache",
	"ScriptGetFontProperties",
	"ScriptGetLogicalWidths",
	"ScriptGetProperties",
	"ScriptItemize",
	"ScriptJustify",
	"ScriptLayout",
	"ScriptPlace",
	"ScriptRecordDigitSubstitution",
	"ScriptShape",
	"ScriptTextOut",
	"ScriptXtoCP",
	"ScrollWindowEx",
	"SelectClipRgn",
	"SelectObject",
	"SelectPalette",
	"SendInput",
	"SendMessageA__IIII",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_BUTTON_1IMAGELIST_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_HDHITTESTINFO_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_HDITEM_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_HDLAYOUT_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_LITEM_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_LVCOLUMN_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_LVHITTESTINFO_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_LVITEM_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_MARGINS_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_POINT_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_REBARBANDINFO_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_RECT_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_SIZE_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_SYSTEMTIME_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_TBBUTTONINFO_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_TBBUTTON_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_TCITEM_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_TOOLINFO_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_TVHITTESTINFO_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_TVINSERTSTRUCT_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_TVITEM_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_TVSORTCB_2",
	"SendMessageA__IIILorg_eclipse_swt_internal_win32_UDACCEL_2",
	"SendMessageA__III_3B",
	"SendMessageA__III_3C",
	"SendMessageA__III_3I",
	"SendMessageA__III_3S",
	"SendMessageA__II_3II",
	"SendMessageA__II_3I_3I",
	"SendMessageW__IIII",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_BUTTON_1IMAGELIST_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_HDHITTESTINFO_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_HDITEM_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_HDLAYOUT_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_LITEM_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_LVCOLUMN_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_LVHITTESTINFO_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_LVITEM_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_MARGINS_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_POINT_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_REBARBANDINFO_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_RECT_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_SIZE_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_SYSTEMTIME_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_TBBUTTONINFO_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_TBBUTTON_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_TCITEM_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_TOOLINFO_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_TVHITTESTINFO_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_TVINSERTSTRUCT_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_TVITEM_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_TVSORTCB_2",
	"SendMessageW__IIILorg_eclipse_swt_internal_win32_UDACCEL_2",
	"SendMessageW__III_3C",
	"SendMessageW__III_3I",
	"SendMessageW__III_3S",
	"SendMessageW__II_3II",
	"SendMessageW__II_3I_3I",
	"SetActiveWindow",
	"SetBkColor",
	"SetBkMode",
	"SetBrushOrgEx",
	"SetCapture",
	"SetCaretPos",
	"SetClipboardData",
	"SetCursor",
	"SetCursorPos",
	"SetDIBColorTable",
	"SetErrorMode",
	"SetFocus",
	"SetForegroundWindow",
	"SetGraphicsMode",
	"SetLayeredWindowAttributes",
	"SetLayout",
	"SetMenu",
	"SetMenuDefaultItem",
	"SetMenuInfo",
	"SetMenuItemInfoA",
	"SetMenuItemInfoW",
	"SetMetaRgn",
	"SetPaletteEntries",
	"SetParent",
	"SetPixel",
	"SetPolyFillMode",
	"SetProcessDPIAware",
	"SetPropA",
	"SetPropW",
	"SetROP2",
	"SetRect",
	"SetRectRgn",
	"SetScrollInfo",
	"SetStretchBltMode",
	"SetTextAlign",
	"SetTextColor",
	"SetTimer",
	"SetWindowLongA",
	"SetWindowLongPtrA",
	"SetWindowLongPtrW",
	"SetWindowLongW",
	"SetWindowOrgEx",
	"SetWindowPlacement",
	"SetWindowPos",
	"SetWindowRgn",
	"SetWindowTextA",
	"SetWindowTextW",
	"SetWindowTheme",
	"SetWindowsHookExA",
	"SetWindowsHookExW",
	"SetWorldTransform",
	"ShellExecuteExA",
	"ShellExecuteExW",
	"Shell_1NotifyIconA",
	"Shell_1NotifyIconW",
	"ShowCaret",
	"ShowOwnedPopups",
	"ShowScrollBar",
	"ShowWindow",
	"SipGetInfo",
	"StartDocA",
	"StartDocW",
	"StartPage",
	"StretchBlt",
	"StrokePath",
	"SystemParametersInfoA__IILorg_eclipse_swt_internal_win32_HIGHCONTRAST_2I",
	"SystemParametersInfoA__IILorg_eclipse_swt_internal_win32_NONCLIENTMETRICSA_2I",
	"SystemParametersInfoA__IILorg_eclipse_swt_internal_win32_RECT_2I",
	"SystemParametersInfoA__II_3II",
	"SystemParametersInfoW__IILorg_eclipse_swt_internal_win32_HIGHCONTRAST_2I",
	"SystemParametersInfoW__IILorg_eclipse_swt_internal_win32_NONCLIENTMETRICSW_2I",
	"SystemParametersInfoW__IILorg_eclipse_swt_internal_win32_RECT_2I",
	"SystemParametersInfoW__II_3II",
	"TBBUTTONINFO_1sizeof",
	"TBBUTTON_1sizeof",
	"TCITEM_1sizeof",
	"TEXTMETRICA_1sizeof",
	"TEXTMETRICW_1sizeof",
	"TF_1DA_1COLOR_1sizeof",
	"TF_1DISPLAYATTRIBUTE_1sizeof",
	"TOOLINFO_1sizeof",
	"TRACKMOUSEEVENT_1sizeof",
	"TRIVERTEX_1sizeof",
	"TVHITTESTINFO_1sizeof",
	"TVINSERTSTRUCT_1sizeof",
	"TVITEMEX_1sizeof",
	"TVITEM_1sizeof",
	"TVSORTCB_1sizeof",
	"ToAscii",
	"ToUnicode",
	"TrackMouseEvent",
	"TrackPopupMenu",
	"TranslateAcceleratorA",
	"TranslateAcceleratorW",
	"TranslateCharsetInfo",
	"TranslateMDISysAccel",
	"TranslateMessage",
	"TransparentBlt",
	"TransparentImage",
	"TreeView_1GetItemRect",
	"UDACCEL_1sizeof",
	"UnhookWindowsHookEx",
	"UnregisterClassA",
	"UnregisterClassW",
	"UpdateWindow",
	"ValidateRect",
	"VkKeyScanA",
	"VkKeyScanW",
	"VtblCall__II",
	"VtblCall__III",
	"VtblCall__IIIII_3I",
	"VtblCall__IIIJI_3J",
	"VtblCall__III_3I_3I",
	"VtblCall__IIJ",
	"VtblCall__IIJII_3J",
	"VtblCall__IIJJI_3J",
	"VtblCall__IILorg_eclipse_swt_internal_win32_TF_1DISPLAYATTRIBUTE_2",
	"VtblCall__IIS_3B_3B_3B",
	"VtblCall__II_3B_3I",
	"VtblCall__II_3CII_3I_3I",
	"VtblCall__II_3I",
	"VtblCall__II_3J",
	"WINDOWPLACEMENT_1sizeof",
	"WINDOWPOS_1sizeof",
	"WNDCLASS_1sizeof",
	"WaitMessage",
	"WideCharToMultiByte__II_3CIII_3B_3Z",
	"WideCharToMultiByte__II_3CI_3BI_3B_3Z",
	"WindowFromDC",
	"WindowFromPoint",
	"wcslen",
};

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return OS_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(OS_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, OS_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return OS_nativeFunctionCallCount[index];
}

#endif

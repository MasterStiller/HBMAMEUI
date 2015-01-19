// license:BSD-3-Clause
// copyright-holders:Aaron Giles
//============================================================
//
//  strconv.h - String conversion
//
//  Copyright (c) 1996-2007, Nicola Salmoria and the MAME Team.
//  Visit http://mamedev.org for licensing and usage restrictions.
//
//============================================================

#ifndef __OSD_STRCONV__
#define __OSD_STRCONV__

#include "osdcore.h"



//============================================================
//  FUNCTION PROTOTYPES
//============================================================

#if defined(SDLMAME_WIN32) || defined(OSD_WINDOWS)

// the result of these functions has to be released with osd_free()

CHAR *astring_from_utf8(const char *s);
char *utf8_from_astring(const CHAR *s);

WCHAR *wstring_from_utf8(const char *s);
char *utf8_from_wstring(const WCHAR *s);

#ifdef UNICODE
#define tstring_from_utf8   wstring_from_utf8
#define utf8_from_tstring   utf8_from_wstring
#else // !UNICODE
#define tstring_from_utf8   astring_from_utf8
#define utf8_from_tstring   utf8_from_astring
#endif // UNICODE

#endif //SDLMAME_WIN32


#endif // __OSD_STRCONV__

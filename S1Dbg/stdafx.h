// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>


#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

#define KDEXT_64BIT 
#include <wdbgexts.h>
#include <dbgeng.h>

#include "context.h"

#include "S1Dbg.h"
#include "util.h"




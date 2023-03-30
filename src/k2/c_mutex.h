// (C)2010 S2 Games
// c_mutex.h
//=============================================================================
#ifndef __C_MUTEX_H__
#define __C_MUTEX_H__

//=============================================================================
// Headers
//=============================================================================
#include <errno.h>

#ifdef _WIN32
# include "c_mutex_win32.h"
#else
# include "c_mutex_posix.h"
#endif
//=============================================================================

#endif // __C_MUTEX_H__

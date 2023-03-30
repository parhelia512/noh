// (C)2005 S2 Games
// editor_common.h
//
// Editor's precompiled header
//=============================================================================
#ifndef __EDITOR_COMMON_H__
#define __EDITOR_COMMON_H__

//=============================================================================
// Settings
//=============================================================================
#include "k2_settings.h"
//=============================================================================

//=============================================================================
// Compile Defines
//=============================================================================
//=============================================================================

//=============================================================================
// Unicode
//
// This comes before everything else, because it affects a lot of the other
// libraries initialization
//=============================================================================
#include "../k2/k2_secure_crt.h"
#include "../k2/k2_unicode.h"
//=============================================================================

//=============================================================================
// Standard headers
//=============================================================================
#include <float.h>
#include <cassert>
//=============================================================================

//=============================================================================
// Shared modules
//=============================================================================
#include "../k2/k2_api.h"
#include "../k2/k2_types.h"
#include "../k2/k2_strings.h"
#include "../k2/k2_stl.h"
#include "../k2/k2_endian.h"
#include "../k2/k2_mathlib.h"
#include "../k2/k2_constants.h"
#include "../k2/k2_singleton.h"
#include "../k2/k2_api.h"
#include "../k2/k2_utils.h"

#include "../k2/c_exception.h"
#include "../k2/c_memmanager.h"
#include "../k2/i_resourcecommon.h"
#include "../k2/c_system.h"
#include "../k2/stringutils.h"
#include "../k2/xtoa.h"
#include "../k2/c_cmd.h"
#include "../k2/c_cmdprecache.h"
#include "../k2/c_cvar.h"
#include "../k2/c_filemanager.h"
#include "../k2/c_console.h"
#include "../k2/c_exception.h"
#include "../k2/c_uicmd.h"
#include "../k2/c_host.h"
#include "../k2/c_buffer.h"

#include "../hon_shared/game_shared_types.h"
#include "../hon_shared/game_shared_constants.h"
#include "../hon_shared/game_shared_api.h"
#include "../hon_shared/game_shared_entities.h"
#include "../hon_shared/game_shared_protocol.h"
#include "../hon_shared/game_shared_cvars.h"
#include "../hon_shared/i_game.h"

#include "c_editor.h"
//=============================================================================

//=============================================================================
// Declarations
//=============================================================================
extern CEditor	Editor;
//=============================================================================
#endif //__EDITOR_COMMON_H__

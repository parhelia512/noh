// (C)2006 S2 Games
// c_playerlegionnaire.cpp
//
//=============================================================================

//=============================================================================
// Headers
//=============================================================================
#include "game_shared_common.h"

#include "c_playerlegionnaire.h"

#include "../k2/c_skeleton.h"
//=============================================================================

//=============================================================================
// Definitions
//=============================================================================
DEFINE_ENT_ALLOCATOR2(Player, Legionnaire);
//=============================================================================

/*====================
  CPlayerLegionnaire::CPlayerLegionnaire
  ====================*/
CPlayerLegionnaire::CPlayerLegionnaire() :
IPlayerEntity(GetEntityConfig())
{
}

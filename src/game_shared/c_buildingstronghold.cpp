// (C)2006 S2 Games
// c_buildingstronghold.cpp
//
//=============================================================================

//=============================================================================
// Headers
//=============================================================================
#include "game_shared_common.h"

#include "c_buildingstronghold.h"
//=============================================================================

//=============================================================================
// Definitions
//=============================================================================
DEFINE_ENT_ALLOCATOR2(Building, Stronghold);
//=============================================================================

/*====================
  CBuildingStronghold::CBuildingStronghold
  ====================*/
CBuildingStronghold::CBuildingStronghold() :
IBuildingEntity(GetEntityConfig())
{
}

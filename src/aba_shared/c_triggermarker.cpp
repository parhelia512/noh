// (C)2010 S2 Games
// c_triggermarker.cpp
//
//=============================================================================

//=============================================================================
// Headers
//=============================================================================
#include "game_shared_common.h"

#include "c_triggermarker.h"
//=============================================================================

//=============================================================================
// Definitions
//=============================================================================
DEFINE_ENT_ALLOCATOR2(Trigger, Marker)
//=============================================================================

/*====================
  CTriggerMarker::ApplyWorldEntity
  ====================*/
void    CTriggerMarker::ApplyWorldEntity(const CWorldEntity &ent)
{
    IVisualEntity::ApplyWorldEntity(ent);
}

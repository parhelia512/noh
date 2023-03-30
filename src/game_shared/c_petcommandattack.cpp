// (C)2007 S2 Games
// c_petcommandattack.cpp
//
//=============================================================================

//=============================================================================
// Headers
//=============================================================================
#include "game_shared_common.h"

#include "c_petcommandattack.h"
//=============================================================================

//=============================================================================
// Definitions
//=============================================================================
DEFINE_ENT_ALLOCATOR2(PetCommand, Attack);
//=============================================================================


/*====================
  CPetCommandAttack::ImpactEntity
  ====================*/
void    CPetCommandAttack::ImpactEntity(uint uiTargetIndex, CGameEvent &evImpact, bool bCheckTarget)
{
    ICombatEntity *pOwner(GetOwnerEnt());
    if (!pOwner)
        return;

    IVisualEntity *pTarget(Game.GetVisualEntity(uiTargetIndex));
    if (pTarget == NULL)
        return;
    if (bCheckTarget && !IsValidTarget(pTarget, false))
        return;

    if (pOwner->IsPlayer())
        pOwner->GetAsPlayerEnt()->PetCommand(PETCMD_ATTACK, uiTargetIndex, V3_ZERO);
    
    evImpact.SetSourcePosition(pTarget->GetPosition());
    evImpact.SetSourceAngles(pTarget->GetAngles());
}

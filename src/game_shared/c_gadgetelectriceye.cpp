// (C)2006 S2 Games
// c_gadgetelectriceye.cpp
//
//=============================================================================

//=============================================================================
// Headers
//=============================================================================
#include "game_shared_common.h"

#include "c_gadgetelectriceye.h"
//=============================================================================

//=============================================================================
// Definitions
//=============================================================================
DEFINE_ENT_ALLOCATOR2(Gadget, ElectricEye)

CCvarf  CGadgetElectricEye::s_cvarRadius(_T("Gadget_ElectricEye_Radius"), 1000.0f,  CVAR_GAMECONFIG | CVAR_TRANSMIT);
//=============================================================================

/*====================
  CGadgetElectricEye::ServerFrame
  ====================*/
bool    CGadgetElectricEye::ServerFrame()
{
    if (GetStatus() == ENTITY_STATUS_ACTIVE)
    {
        uivector vSetResult;
        Game.GetEntitiesInRadius(vSetResult, CSphere(m_v3Position, s_cvarRadius.GetValue()), 0);
        for (uivector_it it(vSetResult.begin()); it != vSetResult.end(); ++it)
        {
            IVisualEntity *pEnt(Game.GetEntityFromWorldIndex(*it));
            if (pEnt == NULL)
                continue;
                
            if (pEnt->GetStatus() == ENTITY_STATUS_ACTIVE && pEnt->IsPlayer() && pEnt->GetTeam() != m_iTeam)
                pEnt->SetNetFlags(ENT_NET_FLAG_EYED);
        }
    }

    return IGadgetEntity::ServerFrame();
}

// (C)2007 S2 Games
// c_statedash.h
//
//=============================================================================
#ifndef __C_STATEDASH_H__
#define __C_STATEDASH_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_entitystate.h"
//=============================================================================

//=============================================================================
// CStateDash
//=============================================================================
class CStateDash : public IEntityState
{
private:
    START_ENTITY_CONFIG(IEntityState)
    END_ENTITY_CONFIG

    CEntityConfig*  m_pEntityConfig;

    DECLARE_ENT_ALLOCATOR2(State, Dash);

public:
    ~CStateDash()   {}
    CStateDash();
};
//=============================================================================

#endif //__C_STATEDASH_H__

// (C)2007 S2 Games
// c_spellbeastheal.h
//
//=============================================================================
#ifndef __C_SPELLBEASTHEAL_H__
#define __C_SPELLBEASTHEAL_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_spellitem.h"
//=============================================================================

//=============================================================================
// CSpellBeastHeal
//=============================================================================
class CSpellBeastHeal : public ISpellItem
{
private:
    DECLARE_ENT_ALLOCATOR2(Spell, BeastHeal)

public:
    ~CSpellBeastHeal()  {}
    CSpellBeastHeal() :
    ISpellItem(GetEntityConfig())
    {}
};
//=============================================================================

#endif //__C_SPELLBEASTHEAL_H__
// (C)2007 S2 Games
// c_spellvenus.h
//
//=============================================================================
#ifndef __C_SPELLVENUS_H__
#define __C_SPELLVENUS_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_spellitem.h"
//=============================================================================

//=============================================================================
// CSpellVenus
//=============================================================================
class CSpellVenus : public ISpellItem
{
private:
    DECLARE_ENT_ALLOCATOR2(Spell, Venus);

public:
    ~CSpellVenus()  {}
    CSpellVenus() :
    ISpellItem(GetEntityConfig())
    {}
};
//=============================================================================

#endif //__C_SPELLVENUS_H__

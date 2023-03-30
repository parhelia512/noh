// (C)2006 S2 Games
// c_gunmortar.h
//
//=============================================================================
#ifndef __C_GUNMORTAR_H__
#define __C_GUNMORTAR_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_gunitem.h"
//=============================================================================

//=============================================================================
// CGunMortar
//=============================================================================
class CGunMortar : public IGunItem
{
private:
    DECLARE_ENT_ALLOCATOR2(Gun, Mortar);

public:
    ~CGunMortar()   {}
    CGunMortar() :
    IGunItem(GetEntityConfig())
    {}
};
//=============================================================================

#endif //__C_GUNMORTAR_H__

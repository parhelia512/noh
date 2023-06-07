// (C)2006 S2 Games
// c_gunholybolt.h
//
//=============================================================================
#ifndef __C_GUNHOLYBOLT_H__
#define __C_GUNHOLYBOLT_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_gunitem.h"
//=============================================================================

//=============================================================================
// CGunHolyBolt
//=============================================================================
class CGunHolyBolt : public IGunItem
{
private:
    DECLARE_ENT_ALLOCATOR2(Gun, HolyBolt);

public:
    ~CGunHolyBolt() {}
    CGunHolyBolt() :
    IGunItem(GetEntityConfig())
    {}
};
//=============================================================================

#endif //__C_GUNHOLYBOLT_H__

// (C)2006 S2 Games
// c_projectilesiegestone.h
//
//=============================================================================
#ifndef __C_PROJECTILESIEGESTONE_H__
#define __C_PROJECTILESIEGESTONE_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_projectile.h"
//=============================================================================

//=============================================================================
// CProjectileSiegeStone
//=============================================================================
class CProjectileSiegeStone : public IProjectile
{
private:
    DECLARE_ENT_ALLOCATOR2(Projectile, SiegeStone);

public:
    ~CProjectileSiegeStone()    {}
    CProjectileSiegeStone();

    int     GetDamageFlags() const  { return m_iDamageFlags | DAMAGE_FLAG_SIEGE | DAMAGE_FLAG_CRUSH; }
};
//=============================================================================

#endif //__C_PROJECTILEGRENADE_H__

// (C)2007 S2 Games
// c_skillenrage.h
//
//=============================================================================
#ifndef __C_SKILLENRAGE_H__
#define __C_SKILLENRAGE_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_skillselfbuff.h"
//=============================================================================

//=============================================================================
// CSkillEnrage
//=============================================================================
class CSkillEnrage : public ISkillSelfBuff
{
private:
    DECLARE_ENT_ALLOCATOR2(Skill, Enrage)

public:
    ~CSkillEnrage() {}
    CSkillEnrage() :
    ISkillSelfBuff(GetEntityConfig())
    {}
};
//=============================================================================

#endif //__C_SKILLENRAGE_H__

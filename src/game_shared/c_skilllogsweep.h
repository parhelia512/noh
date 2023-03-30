// (C)2006 S2 Games
// c_skilllogsweep.h
//
//=============================================================================
#ifndef __C_SKILLLOGSWEEP_H__
#define __C_SKILLLOGSWEEP_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_skillmelee.h"
//=============================================================================

//=============================================================================
// CSkillLogSweep
//=============================================================================
class CSkillLogSweep : public ISkillMelee
{
private:
	DECLARE_ENT_ALLOCATOR2(Skill, LogSweep);

public:
	~CSkillLogSweep()	{}
	CSkillLogSweep() :
	ISkillMelee(GetEntityConfig())
	{}
};
//=============================================================================

#endif //__C_SKILLLOGSWEEP_H__

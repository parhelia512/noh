// (C)2006 S2 Games
// c_skillheal.cpp
//
//=============================================================================

//=============================================================================
// Headers
//=============================================================================
#include "game_shared_common.h"

#include "c_skillheal.h"
//=============================================================================

//=============================================================================
// Definitions
//=============================================================================
DEFINE_ITEM_ALLOCATOR(Skill, Heal);
//=============================================================================

/*====================
  CSkillHeal::~CSkillHeal
  ====================*/
CSkillHeal::~CSkillHeal()
{
}


/*====================
  CSkillHeal::CSkillHeal
  ====================*/
CSkillHeal::CSkillHeal()
{
}


/*====================
  CSkillHeal::ActivatePrimary
  ====================*/
bool	CSkillHeal::ActivatePrimary(int iButtonStatus)
{
	if (!ISkillItem::ActivatePrimary(iButtonStatus))
		return false;

	return true;
}

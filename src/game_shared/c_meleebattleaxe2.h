// (C)2006 S2 Games
// c_meleebattleaxe2.h
//
//=============================================================================
#ifndef __C_MELEEBATTLEAXE2_H__
#define __C_MELEEBATTLEAXE2_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_meleeitem.h"
//=============================================================================

//=============================================================================
// CMeleeBattleAxe2
//=============================================================================
class CMeleeBattleAxe2 : public IMeleeItem
{
private:
	DECLARE_ENT_ALLOCATOR2(Melee, BattleAxe2);

public:
	~CMeleeBattleAxe2()	{}
	CMeleeBattleAxe2() :	IMeleeItem(GetEntityConfig()) {}
};
//=============================================================================

#endif //__C_MELEEBATTLEAXE2_H__

// (C)2007 S2 Games
// c_meleecleaver.h
//
//=============================================================================
#ifndef __C_MELEECLEAVER_H__
#define __C_MELEECLEAVER_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_meleeitem.h"
//=============================================================================

//=============================================================================
// CMeleePush
//=============================================================================
class CMeleeCleaver : public IMeleeItem
{
private:
	DECLARE_ENT_ALLOCATOR2(Melee, Cleaver)

public:
	~CMeleeCleaver()	{}
	CMeleeCleaver() :
	IMeleeItem(GetEntityConfig())
	{}
};
//=============================================================================

#endif //__C_MELEECLEAVER_H__

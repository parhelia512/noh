// (C)2007 S2 Games
// c_petsummoner.h
//
//=============================================================================
#ifndef __C_PETSUMMONER_H__
#define __C_PETSUMMONER_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_petentity.h"
//=============================================================================

//=============================================================================
// CPetSummoner
//=============================================================================
class CPetSummoner : public IPetEntity
{
private:
	DECLARE_ENT_ALLOCATOR2(Pet, Summoner);

public:
	~CPetSummoner()	{}
	CPetSummoner() : IPetEntity(GetEntityConfig()) {}
};
//=============================================================================

#endif //__C_PETSUMMONER_H__

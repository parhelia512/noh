// (C)2007 S2 Games
// c_petengineer.h
//
//=============================================================================
#ifndef __C_PETENGINEER_H__
#define __C_PETENGINEER_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_petentity.h"
//=============================================================================

//=============================================================================
// CPetEngineer
//=============================================================================
class CPetEngineer : public IPetEntity
{
private:
    DECLARE_ENT_ALLOCATOR2(Pet, Engineer);

public:
    ~CPetEngineer() {}
    CPetEngineer() : IPetEntity(GetEntityConfig()) {}
};
//=============================================================================

#endif //__C_PETENGINEER_H__

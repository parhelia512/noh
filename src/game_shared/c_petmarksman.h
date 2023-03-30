// (C)2007 S2 Games
// c_petmarksman.h
//
//=============================================================================
#ifndef __C_PETMARKSMAN_H__
#define __C_PETMARKSMAN_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_petentity.h"
//=============================================================================

//=============================================================================
// CPetMarksman
//=============================================================================
class CPetMarksman : public IPetEntity
{
private:
    DECLARE_ENT_ALLOCATOR2(Pet, Marksman);

public:
    ~CPetMarksman() {}
    CPetMarksman() : IPetEntity(GetEntityConfig()) {}
};
//=============================================================================

#endif //__C_PETMARKSMAN_H__

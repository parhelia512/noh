// (C)2007 S2 Games
// c_petdevourer.h
//
//=============================================================================
#ifndef __C_PETDEVOURER_H__
#define __C_PETDEVOURER_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_petentity.h"
//=============================================================================

//=============================================================================
// CPetDevourer
//=============================================================================
class CPetDevourer : public IPetEntity
{
private:
    DECLARE_ENT_ALLOCATOR2(Pet, Devourer);

public:
    ~CPetDevourer() {}
    CPetDevourer() : IPetEntity(GetEntityConfig()) {}
};
//=============================================================================

#endif //__C_PETDEVOURER_H__
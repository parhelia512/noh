// (C)2007 S2 Games
// c_petimp.h
//
//=============================================================================
#ifndef __C_PETIMP_H__
#define __C_PETIMP_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_petentity.h"
//=============================================================================

//=============================================================================
// CPetImp
//=============================================================================
class CPetImp : public IPetEntity
{
private:
    DECLARE_ENT_ALLOCATOR2(Pet, Imp);

public:
    ~CPetImp()  {}
    CPetImp() : IPetEntity(GetEntityConfig()) {}
};
//=============================================================================

#endif //__C_PETIMP_H__
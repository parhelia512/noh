// (C)2007 S2 Games
// c_persistantitem.h
//
//=============================================================================
#ifndef __C_PERSISTANTITEM_H__
#define __C_PERSISTANTITEM_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_persistantitem.h"
//=============================================================================

//=============================================================================
// CPersistantItem
//=============================================================================
class CPersistantItem : public IPersistantItem
{
private:
    DECLARE_ENT_ALLOCATOR(Persistant, Item);

public:
    ~CPersistantItem() {}
    CPersistantItem() {}
};
//=============================================================================

#endif //__C_PERSISTANTITEM_H__

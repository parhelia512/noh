// (C)2008 S2 Games
// c_gadgetdefinition.h
//
//=============================================================================
#ifndef __C_GADGETDEFINITION_H__
#define __C_GADGETDEFINITION_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_unitdefinition.h"

#include "../k2/i_xmlprocessor.h"
//=============================================================================

//=============================================================================
// Declarations
//=============================================================================
DECLARE_ENTITY_DEFINITION_XML_PROCESSOR(IGadgetEntity, Gadget, gadget)
//=============================================================================

//=============================================================================
// CGadgetDefinition
//=============================================================================
class CGadgetDefinition : public IUnitDefinition
{
	DECLARE_DEFINITION_TYPE_INFO

	ENT_DEF_ARRAY_PROPERTY(Lifetime, uint)
	ENT_DEF_ARRAY_PROPERTY(InitialCharges, uint)

public:
	~CGadgetDefinition()	{}
	CGadgetDefinition() :
	IUnitDefinition(&g_allocatorGadget)
	{}

	IEntityDefinition*	GetCopy() const	{ return K2_NEW(g_heapResources,    CGadgetDefinition)(*this); }

	virtual void	GetPrecacheList(EPrecacheScheme eScheme, HeroPrecacheList &deqPrecache)
	{
		IUnitDefinition::GetPrecacheList(eScheme, deqPrecache);

		PRECACHE_GUARD
			deqPrecache.push_back(SHeroPrecache(GetName(), eScheme));
		PRECACHE_GUARD_END
	}
};
//=============================================================================

#endif //__C_GADGETDEFINITION_H__

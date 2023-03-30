// (C)2005 S2 Games
// c_tilenormalmap.h
//
//=============================================================================
#ifndef __C_TILENORMALMAP_H__
#define __C_TILENORMALMAP_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_worldcomponent.h"
//=============================================================================

//=============================================================================
// Declarations
//=============================================================================
class CWorld;
class CArchive;
//=============================================================================

//=============================================================================
// CTileNormalMap
//=============================================================================
class CTileNormalMap : public IWorldComponent
{
private:
    CPlane          *m_pTileNormalMap[2];

    void    CalculateTileNormals(int iX, int iY);

public:
    ~CTileNormalMap();
    CTileNormalMap(EWorldComponent eComponent);

    bool    Save(CArchive &archive)     { return true; }
    bool    Load(CArchive &archive, const CWorld *pWorld);
    bool    Generate(const CWorld *pWorld);
    void    Release();
    void    Update(const CRecti &recArea);

    K2_API const CVec3f&    GetTileNormal(int iX, int iY, EGridTriangles tri) const;
    K2_API const CPlane&    GetTilePlane(int iX, int iY, EGridTriangles tri) const;
};
//=============================================================================
#endif

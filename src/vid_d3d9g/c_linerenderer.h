// (C)2006 S2 Games
// c_linerenderer.h
//
//=============================================================================
#ifndef __C_LINERENDERER_H__
#define __C_LINERENDERER_H__

//=============================================================================
// Headers
//=============================================================================
#include "i_debugrenderer.h"
//=============================================================================

//=============================================================================
// Definitions
//=============================================================================
//=============================================================================

//=============================================================================
// CLineRenderer
//=============================================================================
class CLineRenderer : public IDebugRenderer
{
private:
    int     m_iNumLines;

public:
    static CPool<CLineRenderer>     s_Pool;
    
    void*   operator new(size_t z); // Uses CPool of preallocated instances
    
    ~CLineRenderer();
    CLineRenderer(int iNumLines);

    void    Render(EMaterialPhase ePhase);
};
//=============================================================================
#endif //__C_LINERENDERER_H__
// (C)2005 S2 Games
// c_scriptthread.h
//
//=============================================================================
#ifndef __C_SCRIPTTHREAD_H__
#define __C_SCRIPTTHREAD_H__

//=============================================================================
// Headers
//=============================================================================
#include "k2_api.h"
//=============================================================================

//=============================================================================
// Definitions
//=============================================================================
class CScript;

typedef deque<CScript *> ScriptStack;
//=============================================================================

//=============================================================================
// Declarations
//=============================================================================
//=============================================================================

//=============================================================================
// CScriptThread
//=============================================================================
class CScriptThread
{
private:
    ScriptStack     m_qActiveScripts;
    bool            m_bFinished;

public:
    ~CScriptThread();
    CScriptThread();

    bool    IsFinished()    { return m_bFinished; }

    void    Frame();
    void    ExecuteScript(const tstring &sData, bool bFile = true, tsmapts *mapParams = NULL);

    void    GotoScriptLabel(const tstring &sLabel);
    void    PauseScript(dword dwMilliseconds);
};
//=============================================================================
#endif // __C_SCRIPTTHREAD_H__
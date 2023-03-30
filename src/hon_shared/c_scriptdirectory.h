// (C)2010 S2 Games
// c_scriptdirectory.h
//
//=============================================================================
#ifndef __C_SCRIPTDIRECTORY_H__
#define __C_SCRIPTDIRECTORY_H__

//=============================================================================
// Headers
//=============================================================================
//=============================================================================

//=============================================================================
// Declarations
//=============================================================================
class CScriptThread;
//=============================================================================

//=============================================================================
// Definitions
//=============================================================================
//=============================================================================

//=============================================================================
// CScriptDirectory
//=============================================================================
class CScriptDirectory
{
private:
    list<CScriptThread *>           m_lScripts;

public:
    GAME_SHARED_API ~CScriptDirectory();
    GAME_SHARED_API CScriptDirectory();

    GAME_SHARED_API CScriptThread*  SpawnThread(const tstring &sName, uint uiTime);

    GAME_SHARED_API void    Frame();
};
//=============================================================================

#endif //__C_SCRIPTDIRECTORY_H__

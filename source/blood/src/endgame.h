//-------------------------------------------------------------------------
/*
Copyright (C) 2010-2019 EDuke32 developers and contributors
Copyright (C) 2019 Nuke.YKT

This file is part of NBlood.

NBlood is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License version 2
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
//-------------------------------------------------------------------------
#pragma once
#include "build.h"
#include "common_game.h"

class CEndGameMgr {
public:
    char at0;
    char at1;
    CEndGameMgr();
    void Setup(void);
    void ProcessKeys(void);
    void Draw(void);
    void Finish(void);
};

class CKillMgr {
public:
    int at0, at4;
    CKillMgr();
    bool AllowedType(spritetype *pSprite);
    void SetCount(int);
    void AddCount(int);
    void AddCount(spritetype *pSprite);
    void AddKill(spritetype *pSprite);
    void RemoveKill(spritetype *pSprite);
    void CountTotalKills(void);
    void Clear(void);
    void Draw(void);
};

class CSecretMgr {
public:
    int nAllSecrets, nNormalSecretsFound, nSuperSecretsFound;
    CSecretMgr();
    void SetCount(int);
    void Found(int);
    void Clear(void);
    void Draw(void);
};

class CTimeMgr {
public:
    void DrawEp(void);
    void DrawRun(void);
    void DrawIL(void);
};

extern CEndGameMgr gEndGameMgr;
extern CSecretMgr gSecretMgr;
extern CKillMgr gKillMgr;
extern CTimeMgr gTimeMgr;
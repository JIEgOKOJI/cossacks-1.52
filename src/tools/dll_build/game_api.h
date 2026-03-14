/*
 * game_api.h - Cossacks game DLL API declarations
 *
 * This header declares all functions exported by dmcr.exe and imported
 * by Mission/History/Horizon DLLs. Signatures extracted from ActiveScenary.cpp.
 *
 * Usage: #include "game_api.h" in each recompiled DLL source.
 * Link with: libdmcr.a (import library for dmcr.exe)
 */
#ifndef GAME_API_H
#define GAME_API_H

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ---- Basic types ---- */
typedef unsigned char  byte;
typedef unsigned short word;

/* ---- Structures ---- */

/* Universal game object handle: units group, zone, unit type, upgrade, etc. */
typedef struct {
    word Index;
    word Serial;
    int  Type;
} GAMEOBJ;

/* Info about a single unit inside a units group */
typedef struct {
    word Index;
    word Serial;
    word Life;
    word MaxLife;
    byte AddDamage;
    byte AddShield;
    word Stage;
    word MaxStage;
    word Kills;
    word NIndex;
    byte Usage;
    byte Building;
    int  x, y;
    byte Reserved[16];
} OneUnit;

/* Extended unit capabilities */
typedef struct {
    int   Direction;
    int   DestX;
    int   DestY;
    int   Type;
    char* UnitID;
    int   NI;
    int   StandTime;
    int   OrderType;
} UnitExCaps;

/* ---- API function declarations (imported from dmcr.exe) ---- */

/* Registration */
__declspec(dllimport) BOOL RegisterUnits(...);
__declspec(dllimport) BOOL RegisterString(...);
__declspec(dllimport) void RegisterVar(...);
__declspec(dllimport) void RegisterZone(...);
__declspec(dllimport) void RegisterVisibleZone(...);
__declspec(dllimport) BOOL RegisterUnitType(...);
__declspec(dllimport) BOOL RegisterUpgrade(...);
__declspec(dllimport) BOOL RegisterFormation(...);
__declspec(dllimport) void RegisterDynGroup(...);

/* Upgrades */
__declspec(dllimport) void InitialUpgrade(...);
__declspec(dllimport) void DisableUpgrade(...);
__declspec(dllimport) void EnableUpgrade(...);
__declspec(dllimport) void EnableUnit(...);
__declspec(dllimport) BOOL IsUpgradeDone(...);

/* Counting units */
__declspec(dllimport) int GetUnitsAmount0(...);
__declspec(dllimport) int GetUnitsAmount1(...);
__declspec(dllimport) int GetUnitsAmount2(...);
__declspec(dllimport) int GetTotalAmount0(...);
__declspec(dllimport) int GetTotalAmount1(...);
__declspec(dllimport) int GetTotalAmount2(...);
__declspec(dllimport) int GetReadyAmount(...);
__declspec(dllimport) int GetAmountOfWarriors(...);
__declspec(dllimport) int GetNUnits(...);
__declspec(dllimport) int GetUnitsByNation(...);
__declspec(dllimport) int GetKilled(...);

/* Selection */
__declspec(dllimport) void ClearSelection(...);
__declspec(dllimport) void SelectUnits(...);
__declspec(dllimport) void SelectUnits1(...);
__declspec(dllimport) void SelectUnitsType(...);
__declspec(dllimport) void SelectUnitsInZone(...);
__declspec(dllimport) void SelectTypeOfUnitsInZone(...);
__declspec(dllimport) void SaveSelectedUnits(...);
__declspec(dllimport) BOOL SelDie(...);
__declspec(dllimport) void SelErase(...);
__declspec(dllimport) void SelAttackGroup(...);
__declspec(dllimport) BOOL SelOpenGates(...);
__declspec(dllimport) BOOL SelCloseGates(...);
__declspec(dllimport) BOOL SelSendTo(...);
__declspec(dllimport) BOOL SelSendAndKill(...);
__declspec(dllimport) void SelChangeNation(...);
__declspec(dllimport) void SelAutoKill(...);
__declspec(dllimport) BOOL SelCenter(...);

/* Movement & Patrol */
__declspec(dllimport) BOOL Patrol(...);
__declspec(dllimport) void SetDestPoint(...);

/* Combat */
__declspec(dllimport) void AttackZoneByArtillery(...);
__declspec(dllimport) void AttackBuildingsInZone(...);
__declspec(dllimport) void AttackEnemyInZone(...);
__declspec(dllimport) void AllowAttack(...);
__declspec(dllimport) void SetStandGround(...);
__declspec(dllimport) void ChangeFriends(...);
__declspec(dllimport) void ChangeUnitParam(...);

/* Production & Building */
__declspec(dllimport) BOOL CreateObject0(...);
__declspec(dllimport) BOOL CreateBuilding(...);
__declspec(dllimport) void ProduceUnit(...);
__declspec(dllimport) void ProduceUnitFast(...);
__declspec(dllimport) void ProduceOneUnit(...);
__declspec(dllimport) BOOL CheckProduction(...);
__declspec(dllimport) BOOL CheckBuildingsComplete(...);
__declspec(dllimport) void RepairBuildingsBySel(...);

/* Unit Info */
__declspec(dllimport) BOOL GetUnitInfo(...);
__declspec(dllimport) void SetUnitInfo(...);
__declspec(dllimport) BOOL GetUnitExCaps(...);
__declspec(dllimport) void SetReadyState(...);
__declspec(dllimport) int  InsertUnitToGroup(...);
__declspec(dllimport) void RemoveUnitFromGroup(...);
__declspec(dllimport) void RemoveGroup(...);

/* Resources */
__declspec(dllimport) int  GetResource(...);
__declspec(dllimport) void AddResource(...);
__declspec(dllimport) void SetResource(...);
__declspec(dllimport) int  GetUnitCost(...);
__declspec(dllimport) int  GetUpgradeCost(...);
__declspec(dllimport) void TakeFood(...);
__declspec(dllimport) void TakeWood(...);
__declspec(dllimport) void TakeStone(...);

/* Triggers & Timers */
__declspec(dllimport) byte Trigg(...);
__declspec(dllimport) void SetTrigg(...);
__declspec(dllimport) word WTrigg(...);
__declspec(dllimport) void SetWTrigg(...);
__declspec(dllimport) void RunTimer(...);
__declspec(dllimport) BOOL TimerDone(...);
__declspec(dllimport) BOOL TimerDoneFirst(...);
__declspec(dllimport) BOOL TimerIsEmpty(...);
__declspec(dllimport) void FreeTimer(...);
__declspec(dllimport) int  GetTime(...);
__declspec(dllimport) int  GetGlobalTime(...);

/* Zones */
__declspec(dllimport) BOOL UnitsCenter(...);
__declspec(dllimport) BOOL CreateZoneNearUnit(...);
__declspec(dllimport) BOOL CreateZoneNearGroup(...);
__declspec(dllimport) BOOL GetZoneCoor(...);
__declspec(dllimport) int  GetTopDst(...);
__declspec(dllimport) void SetStartPoint(...);
__declspec(dllimport) void ShowAlarm(...);

/* Light */
__declspec(dllimport) void SetLightSpot(...);
__declspec(dllimport) void ClearLightSpot(...);

/* Transport */
__declspec(dllimport) int  GetNInside(...);
__declspec(dllimport) int  GetMaxInside(...);
__declspec(dllimport) void PushUnitAway(...);
__declspec(dllimport) void PushAllUnitsAway(...);
__declspec(dllimport) void SendUnitsToTransport(...);
__declspec(dllimport) BOOL CheckLeaveAbility(...);

/* AI */
__declspec(dllimport) void RunAI(...);
__declspec(dllimport) void StartAI(...);
__declspec(dllimport) void DoNotUseSelInAI(...);
__declspec(dllimport) void SetAIProperty(...);

/* Nation */
__declspec(dllimport) void AssignNation(...);
__declspec(dllimport) int  GetMyNation(...);
__declspec(dllimport) BOOL NationIsErased(...);
__declspec(dllimport) void SetPlayerName(...);
__declspec(dllimport) int  GetDiff(...);

/* Mission flow */
__declspec(dllimport) void DisableMission(...);
__declspec(dllimport) void EnableMission(...);
__declspec(dllimport) void SetVictoryText(...);
__declspec(dllimport) void SetLooseText(...);
__declspec(dllimport) void ShowVictory(...);
__declspec(dllimport) void LooseGame(...);
__declspec(dllimport) void SetStandartVictory(...);
__declspec(dllimport) void SetTutorial(...);
__declspec(dllimport) BOOL GetQuestPressed(...);

/* UI */
__declspec(dllimport) void ShowCentralText(...);
__declspec(dllimport) void ShowPage(...);
__declspec(dllimport) void ShowPageParam(...);
__declspec(dllimport) BOOL AskQuestion(...);
__declspec(dllimport) int  AskComplexQuestion(...);
__declspec(dllimport) int  AskMultilineQuestion(...);
__declspec(dllimport) void HINT(...);
__declspec(dllimport) void DoMessagesBrief(...);
__declspec(dllimport) void RefreshScreen(...);
__declspec(dllimport) void SelectBuildingsInZone(...);
__declspec(dllimport) void PastePiece(...);

/* DLL entry points (exported by each DLL) */
/* void __cdecl OnInit(void);          */
/* void __cdecl ProcessScenary(void);  */

#ifdef __cplusplus
}
#endif

#endif /* GAME_API_H */

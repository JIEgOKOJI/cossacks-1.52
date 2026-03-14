#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_1001f400 = 0;
long long DAT_1001f408 = 0;
long long DAT_1001f410 = 0;
long long DAT_1001f418 = 0;
long long DAT_1001f420 = 0;
long long DAT_1001f428 = 0;
long long DAT_1001f430 = 0;
long long DAT_1001f438 = 0;
long long DAT_1001f440 = 0;
long long DAT_1001f448 = 0;
long long DAT_1001f450 = 0;
long long DAT_1001f458 = 0;
long long DAT_1001f460 = 0;
long long DAT_1001f468 = 0;
long long DAT_1001f470 = 0;
long long DAT_1001f478 = 0;
long long DAT_1001f480 = 0;
long long DAT_1001f488 = 0;

/* Forward declarations */
void FUN_10001260(int param_1,char param_2,char param_3,char param_4);
void FUN_100013d0(int param_1,char param_2,char param_3,char param_4);
void FUN_10001460(int param_1);
void FUN_10001520(int param_1,int param_2,char param_3);
void FUN_10001620(int param_1,int param_2,int param_3);
void FUN_100016c0(char param_1,char param_2);
void FUN_10001790(void);
void FUN_10001880(void);
void FUN_100018c0(void);
void FUN_10001ad0(void);
void FUN_10002030(int param_1);


void __cdecl FUN_10001260(int param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_78 [16];
  int local_38;
  char local_34 [8];
  char local_2c;
  int local_8;
SaveSelectedUnits((int)param_2,&DAT_1001f410,0);
  SelectUnitsInZone(param_1,param_2,0);
  SaveSelectedUnits(param_2,&DAT_1001f400,0);
  local_8 = GetNUnits(&DAT_1001f400);
  for (local_38 = 0; local_38 < local_8; local_38 = local_38 + 1) {
    GetUnitInfo(&DAT_1001f400,local_38,local_34);
    if (param_4 == '\0') {
      local_2c = param_3;
    }
    else {
      local_2c = local_2c + param_3;
    }
    SetUnitInfo(local_34);
  }
  SelectUnits1(param_2,&DAT_1001f410,0);
  return;
}





void __cdecl FUN_100013d0(int param_1,char param_2,char param_3,char param_4)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = UnitsCenter(&DAT_1001f488,param_1,0x4b0);
  if ((uVar1 & 0xff) != 0) {
    FUN_10001260(&DAT_1001f488,param_2,param_3,param_4);
  }
  uStack_8 = 0x10001437;
  return;
}





void __cdecl FUN_10001460(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_78 [16];
  int local_38;
  char local_34 [8];
  char local_2c;
  char local_2b;
  int local_8;
local_8 = GetNUnits(param_1);
  for (local_38 = 0; local_38 < local_8; local_38 = local_38 + 1) {
    GetUnitInfo(param_1,local_38,local_34);
    local_2c = 0;
    local_2b = 0;
    SetUnitInfo(local_34);
  }
  return;
}





void __cdecl FUN_10001520(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
for (local_8 = 0; (int)local_8 < 8; local_8 = local_8 + 1) {
    SaveSelectedUnits(local_8 & 0xff,&DAT_1001f410,local_8 != 0);
    SelectUnits1(local_8 & 0xff,param_1,0);
    SaveSelectedUnits(local_8 & 0xff,param_2,param_3);
    SelectUnits1(local_8 & 0xff,&DAT_1001f410,0);
  }
  return;
}





void __cdecl FUN_10001620(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = 0;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    iVar1 = GetUnitsAmount1(param_1 + local_c * 8,param_3);
    local_8 = local_8 + iVar1;
  }
  return;
}





void __cdecl FUN_100016c0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = 0;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    iVar1 = GetUnitsAmount0(&DAT_1001f438 + local_c * 8,param_1);
    if (0 < iVar1) {
      iVar1 = GetUnitsAmount0(&DAT_1001f438 + local_c * 8,param_2);
      if (iVar1 == 0) {
        local_8 = local_8 + 1;
      }
    }
  }
  return;
}





void FUN_10001790(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterVisibleZone(&DAT_1001f438,"Zone0");
  RegisterVisibleZone(&DAT_1001f440,"Zone1");
  RegisterVisibleZone(&DAT_1001f448,"Zone2");
  RegisterVisibleZone(&DAT_1001f450,"Zone3");
  RegisterVisibleZone(&DAT_1001f458,"Zone4");
  uStack_8 = 0x10001841;
  return;
}





void FUN_10001880(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
ProcessScenary();
  FUN_10001790();
  uStack_8 = 0x100018af;
  return;
}





void FUN_100018c0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001880();
  RegisterUnits(&DAT_1001f468,"S_Terz");
  RegisterUnits(&DAT_1001f480,"N_Fleet");
  RegisterUnits(&DAT_1001f418,"MainGate");
  RegisterUnits(&DAT_1001f420,"NewPort_Guard");
  RegisterZone(&DAT_1001f408,"Z_Gate");
  RegisterZone(&DAT_1001f428,"Z_NewPort");
  RegisterZone(&DAT_1001f430,"Z_Guard");
  RegisterUnitType(&DAT_1001f460,"Kavalerist_avstrii(au)");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(2,1);
  ChangeUnitParam(&DAT_1001f460,0,2,0,2);
  SetLightSpot(&DAT_1001f428,5,1);
  SetPlayerName(2,"NPT_NN_Guard");
  uStack_8 = 0x10001a5f;
  return;
}





void FUN_10001ad0(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *puVar4;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    SelectUnits(&DAT_1001f468,0);
    SelSendTo(0,&DAT_1001f440,0x32,0);
    ClearSelection(0);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(2,0);
    SaveSelectedUnits(1,&DAT_1001f410,0);
    SelectUnits(&DAT_1001f480,0);
    SelAttackGroup(1,&DAT_1001f468);
    SelectUnits(&DAT_1001f410,0);
  }
  iVar3 = GetUnitsAmount0(&DAT_1001f428,1);
  SetTrigg(0x1f,iVar3 == 0);
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1f);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x1e,0);
      SetTrigg(0x1f,0);
      AttackEnemyInZone(&DAT_1001f420,&DAT_1001f428,1);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1f);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_1001f420);
      iVar2 = GetUnitsAmount1(&DAT_1001f430,&DAT_1001f420);
      if (iVar3 != iVar2) {
        SetTrigg(0x1e,1);
        SelectUnits1(2,&DAT_1001f420,0);
        SelSendTo(2,&DAT_1001f430,0x78,0);
      }
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1001f408,0);
    if (iVar3 != 0) {
      SetTrigg(0x28,0);
      SelectUnits1(2,&DAT_1001f420,0);
      SelectUnits(&DAT_1001f418,1);
      SelChangeNation(2,0);
      RemoveGroup(&DAT_1001f420,&DAT_1001f470);
    }
  }
  FUN_100016c0(0,1);
  if (2 < iVar3) {
    OnInit(0,0x1001da30);
  }
  FUN_10002030(&DAT_1001f470);
  if (iVar3 < 0x14) {
    OnInit(1,0x1001da38);
  }
  FUN_10002030(&DAT_1001f478);
  if (iVar3 < 0x14) {
    OnInit(0,0x1001da30);
  }
  iVar3 = GetUnitsAmount0(&DAT_1001f428,1);
  if (0 < iVar3) {
    iVar3 = GetUnitsAmount0(&DAT_1001f428,2);
    if (iVar3 == 0) {
      iVar3 = GetUnitsAmount0(&DAT_1001f428,0);
      if (iVar3 == 0) {
        OnInit(1,0x1001da40);
      }
    }
  }
  uStack_8 = 0x10001f0d;
  return;
}





void __cdecl FUN_10002030(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount0(param_1);
  uStack_8 = 0x1000206b;
  return;
}





__declspec(dllexport) void OnInit()
{
  int param_1 = 0;
  int param_2 = 0;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = GetMyNation();
  if (local_8 == param_1) {
    ShowVictory();
  }
  else {
    LooseGame();
  }
  ShowPage(*(int *)(param_2 + local_8 * 4));
  return;
}





void ProcessScenary(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_1001f470,"Army0");
  RegisterUnits(&DAT_1001f478,"Army1");
  RegisterDynGroup(&DAT_1001f400);
  RegisterDynGroup(&DAT_1001f410);
  uStack_8 = 0x1000122b;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

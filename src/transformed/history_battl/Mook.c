#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1001a190[] = "Hall";
long long DAT_1001f3e0 = 0;
long long DAT_1001f3e8 = 0;
long long DAT_1001f3f0 = 0;
long long DAT_1001f3f8 = 0;
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
long long DAT_1001f490 = 0;
long long DAT_1001f498 = 0;
long long DAT_1001f4a0 = 0;
long long DAT_1001f4a8 = 0;
long long DAT_1001f4b0 = 0;
long long DAT_1001f4b8 = 0;
long long DAT_1001f4c0 = 0;
long long DAT_1001f4c8 = 0;
long long DAT_1001f4d0 = 0;
long long DAT_1001f4d8 = 0;

/* Forward declarations */
void FUN_10001340(int param_1,char param_2);
void FUN_10001540(int param_1);
void FUN_10001600(void);
void FUN_10001ae0(void);
void FUN_100024b0(int param_1);


void __cdecl FUN_10001340(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_7c [16];
  int local_3c;
  char local_38 [9];
  char local_2f;
  int local_c;
  unsigned int local_8;
UnitsCenter(&DAT_1001f4b0,param_1,0x5dc);
  for (local_8 = 0; (int)local_8 < 8; local_8 = local_8 + 1) {
    SaveSelectedUnits(local_8 & 0xff,&DAT_1001f3e8,local_8 != 0);
    ClearSelection(local_8 & 0xff);
    iVar1 = GetUnitsByNation(param_1,local_8 & 0xff);
    if (iVar1 != 0) {
      SelectUnitsInZone(&DAT_1001f4b0,local_8 & 0xff,0);
      SaveSelectedUnits(local_8 & 0xff,&DAT_1001f3e0,0);
      local_c = GetNUnits(&DAT_1001f3e0);
      for (local_3c = 0; local_3c < local_c; local_3c = local_3c + 1) {
        GetUnitInfo(&DAT_1001f3e0,local_3c,local_38);
        local_2f = param_2;
        SetUnitInfo(local_38);
      }
    }
    SelectUnits1(local_8 & 0xff,&DAT_1001f3e8,0);
  }
  return;
}





void __cdecl FUN_10001540(int param_1)

{
  int iVar1;
  int *puVar2;
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





void FUN_10001600(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_1001f470,"Army0");
  RegisterUnits(&DAT_1001f478,"Army1");
  RegisterUnits(&DAT_1001f428,"Ludovik");
  RegisterUnits(&DAT_1001f408,"Avila");
  RegisterUnits(&DAT_1001f4b8,DAT_1001a190);
  RegisterUnits(&DAT_1001f490,"FlagMan");
  RegisterUnits(&DAT_1001f498,"Staff");
  RegisterDynGroup(&DAT_1001f3e0);
  RegisterDynGroup(&DAT_1001f3e8);
  RegisterVisibleZone(&DAT_1001f460,"Z_Spain");
  RegisterVisibleZone(&DAT_1001f4d0,"Z_Netherlands");
  RegisterVisibleZone(&DAT_1001f420,"Z_Mook");
  RegisterVisibleZone(&DAT_1001f4a8,"Z_Bridge");
  RegisterVisibleZone(&DAT_1001f458,"Z_Esc");
  RegisterZone(&DAT_1001f4c0,"ZReinforcement");
  RegisterUnitType(&DAT_1001f440,"Krestian_Sved(HO)");
  RegisterUnitType(&DAT_1001f400,"Kiracir_Sacson(SA)");
  RegisterUnitType(&DAT_1001f4c8,"Dragun(sp)");
  RegisterUnitType(&DAT_1001f480,"Dragun(GE)");
  RegisterUnitType(&DAT_1001f418,"Pikiner_evro(HO)");
  RegisterUnitType(&DAT_1001f410,"Pikiner_evro(sp)");
  RegisterUnitType(&DAT_1001f430,"Pikiner_evro(BA)");
  RegisterUnitType(&DAT_1001f438,"Mushketer_niderland(HO)");
  RegisterUnitType(&DAT_1001f448,"Mushketer_ev(BA)");
  RegisterUnitType(&DAT_1001f4d8,"Strelec_Spain(sp)");
  RegisterUnitType(&DAT_1001f3f0,"Konni_Ricar(sp)");
  RegisterUnitType(&DAT_1001f3f8,"Konni_Ricar(BA)");
  RegisterUnitType(&DAT_1001f468,"Kavalerist_avstrii(au)");
  RegisterString(&DAT_1001f488,"MK_GOS");
  RegisterFormation(&DAT_1001f4a0,"#LINE100PUS");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(7,0x83);
  EnableUnit(1,&DAT_1001f440,0);
  EnableUnit(0,&DAT_1001f440,0);
  uStack_8 = 0x100019de;
  return;
}





void FUN_10001ae0(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
FUN_100024b0(&DAT_1001f428);
  if (iVar2 == 0) {
    iVar2 = GetMyNation();
    if (iVar2 == 0) {
      ShowPage("#Ludovik_Killed0");
    }
    else {
      ShowPage("#Ludovik_Killed1");
    }
    OnInit(0);
  }
  FUN_100024b0(&DAT_1001f478);
  if (iVar2 < 0x14) {
    iVar2 = GetMyNation();
    if (iVar2 == 0) {
      ShowPage("#DutchArmyLost_Victory");
    }
    else {
      ShowPage("#DutchArmyLost_Defeat");
    }
    OnInit(0);
  }
  iVar2 = GetUnitsAmount1(&DAT_1001f458,&DAT_1001f428);
  if (0 < iVar2) {
    iVar2 = GetMyNation();
    if (iVar2 == 0) {
      ShowPage("#Ludovik_Escaped0");
    }
    else {
      ShowPage("#Ludovik_Escaped1");
    }
    OnInit(1);
  }
  FUN_100024b0(&DAT_1001f470);
  if (iVar2 < 0x14) {
    iVar2 = GetMyNation();
    if (iVar2 == 0) {
      ShowPage("#Ludovik_Escaped0");
    }
    else {
      ShowPage("#Ludovik_Escaped1");
    }
    OnInit(1);
  }
  uVar1 = Trigg(0);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0,0);
    RunTimer(0,10000);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_1001f4a8,1);
      if (iVar2 == 0) {
        SetTrigg(1,0);
        ShowCentralText("MK_R_SpainCroat",100);
        CreateObject0(&DAT_1001f450,&DAT_1001f4a0,&DAT_1001f468,0,&DAT_1001f4c0,100);
        RemoveGroup(&DAT_1001f450,&DAT_1001f470);
      }
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    FUN_100024b0(&DAT_1001f498);
    if (iVar2 == 0) {
      SetTrigg(2,0);
      ShowCentralText("MK_R_Dutch",100);
      ChangeUnitParam(&DAT_1001f3f8,1,2,0,2);
      ChangeUnitParam(&DAT_1001f468,1,2,0,2);
      ChangeUnitParam(&DAT_1001f480,1,2,0,2);
      ChangeUnitParam(&DAT_1001f418,1,2,0,2);
      ChangeUnitParam(&DAT_1001f430,1,2,0,2);
      ChangeUnitParam(&DAT_1001f448,1,2,0,2);
      ChangeUnitParam(&DAT_1001f438,1,2,0,2);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    FUN_100024b0(&DAT_1001f4b8);
    if (iVar2 == 0) {
      SetTrigg(3,0);
      ShowCentralText("MK_R_Spain",100);
      ChangeUnitParam(&DAT_1001f400,0,2,0,2);
      ChangeUnitParam(&DAT_1001f480,0,2,0,2);
      ChangeUnitParam(&DAT_1001f410,0,2,0,2);
      ChangeUnitParam(&DAT_1001f4d8,0,2,0,2);
      ChangeUnitParam(&DAT_1001f4c8,0,2,0,2);
      ChangeUnitParam(&DAT_1001f3f0,0,2,0,2);
      ChangeUnitParam(&DAT_1001f468,0,2,0,2);
    }
  }
  iVar2 = GetResource(1,1);
  if (iVar2 == 0) {
    SetResource(1,1,10000000);
  }
  iVar2 = GetUnitsAmount1(&DAT_1001f4d0,&DAT_1001f428);
  if (iVar2 == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(4,0);
      RunTimer(4,500);
      SetResource(1,1,0);
      iVar2 = GetMyNation();
      if (iVar2 == 1) {
        HINT(&DAT_1001f488,100);
      }
    }
  }
  uVar1 = TimerDoneFirst(4);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(4,1);
  }
  iVar2 = GetResource(0,1);
  if (iVar2 == 0) {
    SetResource(0,1,10000000);
  }
  iVar2 = GetUnitsAmount1(&DAT_1001f460,&DAT_1001f408);
  if (iVar2 == 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(5,0);
      RunTimer(5,500);
      SetResource(1,1,0);
      iVar2 = GetMyNation();
      if (iVar2 == 0) {
        HINT(&DAT_1001f488,100);
      }
    }
  }
  uVar1 = TimerDoneFirst(5);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(5,1);
  }
  FUN_10001540(&DAT_1001f470);
  FUN_10001540(&DAT_1001f478);
  FUN_10001340(&DAT_1001f428,4);
  ProcessScenary(&DAT_1001f490,4);
  FUN_10001340(&DAT_1001f408,4);
  uStack_8 = 0x100022aa;
  return;
}





void __cdecl FUN_100024b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount0(param_1);
  uStack_8 = 0x100024eb;
  return;
}





__declspec(dllexport) void OnInit()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = GetMyNation();
  if (iVar1 == param_1) {
    ShowVictory();
  }
  else {
    LooseGame();
  }
  uStack_8 = 0x10001119;
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int param_2 = 0;
  int iVar1;
  int *puVar2;
  int local_7c [16];
  int local_3c;
  char local_38 [8];
  char local_30;
  int local_c;
  unsigned int local_8;
UnitsCenter(&DAT_1001f4b0,param_1,0x5dc);
  for (local_8 = 0; (int)local_8 < 8; local_8 = local_8 + 1) {
    SaveSelectedUnits(local_8 & 0xff,&DAT_1001f3e8,local_8 != 0);
    ClearSelection(local_8 & 0xff);
    iVar1 = GetUnitsByNation(param_1,local_8 & 0xff);
    if (iVar1 != 0) {
      SelectUnitsInZone(&DAT_1001f4b0,local_8 & 0xff,0);
      SaveSelectedUnits(local_8 & 0xff,&DAT_1001f3e0,0);
      local_c = GetNUnits(&DAT_1001f3e0);
      for (local_3c = 0; local_3c < local_c; local_3c = local_3c + 1) {
        GetUnitInfo(&DAT_1001f3e0,local_3c,local_38);
        local_30 = param_2;
        SetUnitInfo(local_38);
      }
    }
    SelectUnits1(local_8 & 0xff,&DAT_1001f3e8,0);
  }
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

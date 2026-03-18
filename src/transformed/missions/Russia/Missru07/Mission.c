#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_1002f3f0 = 0;
long long DAT_1002f3f8 = 0;
long long DAT_1002f400 = 0;
long long DAT_1002f408 = 0;
long long DAT_1002f410 = 0;
long long DAT_1002f418 = 0;
long long DAT_1002f420 = 0;
long long DAT_1002f428 = 0;
long long DAT_1002f430 = 0;
long long DAT_1002f438 = 0;
long long DAT_1002f440 = 0;
long long DAT_1002f448 = 0;
long long DAT_1002f450 = 0;
long long DAT_1002f458 = 0;
long long DAT_1002f460 = 0;
long long DAT_1002f468 = 0;
long long DAT_1002f470 = 0;
long long DAT_1002f478 = 0;
long long DAT_1002f480 = 0;
long long DAT_1002f488 = 0;
long long DAT_1002f490 = 0;
long long DAT_1002f4a0 = 0;
long long DAT_1002f4a8 = 0;
long long DAT_1002f4b0 = 0;
long long DAT_1002f4b8 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f470,"Zone1");
  RegisterZone(&DAT_1002f478,"Zone2");
  RegisterZone(&DAT_1002f458,"Zone2a");
  RegisterZone(&DAT_1002f468,"Zone2b");
  RegisterZone(&DAT_1002f460,"Zone2c");
  RegisterZone(&DAT_1002f480,"Zone3");
  RegisterZone(&DAT_1002f488,"Zone4");
  RegisterUnits(&DAT_1002f400,"Group1");
  RegisterUnits(&DAT_1002f410,"Group2");
  RegisterUnits(&DAT_1002f408,"Group3");
  RegisterUnits(&DAT_1002f420,"Group4");
  RegisterUnits(&DAT_1002f418,"Group5");
  RegisterUnits(&DAT_1002f430,"Group6");
  RegisterUnits(&DAT_1002f4b8,"Group6a");
  RegisterUnits(&DAT_1002f428,"Group7");
  RegisterUnits(&DAT_1002f440,"Group8");
  RegisterUnits(&DAT_1002f438,"Group9");
  RegisterUnitType(&DAT_1002f3f8,"Melnica_rus(UA)");
  RegisterUnitType(&DAT_1002f448,"Sclad3(UA)");
  RegisterUnitType(&DAT_1002f450,"Sclad1(SV)");
  RegisterUnitType(&DAT_1002f3f0,"Grenader(RU)");
  RegisterUnitType(&DAT_1002f4a0,"Kozak_loshad(UA)");
  RegisterFormation(&DAT_1002f490,"#SQUARE72");
  RegisterVar(&DAT_1002f4a8,8);
  RegisterVar(&DAT_1002f4b0,8);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(1,"ALLY_SVED");
  SetPlayerName(4,"ALLIES");
  uStack_8 = 0x100013d9;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    SetResource(0,3,5000);
    SetResource(0,1,2000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,5000);
    SetResource(0,4,3000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE1A");
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
    DisableMission(0x49);
    DisableMission(0x4a);
    DisableMission(0x4b);
    InitialUpgrade("Group9","Mushketer(SV)ATTACK");
    InitialUpgrade("Group9","Mushketer(SV)ATTACK3");
    InitialUpgrade("Group9","Mushketer(SV)ATTACK4");
    InitialUpgrade("Group9","Mushketer(SV)ATTACK5");
    InitialUpgrade("Group9","Mushketer(SV)ATTACK6");
    InitialUpgrade("Group9","Mushketer(SV)SHIELD");
    InitialUpgrade("Group9","Mushketer(SV)SHIELD3");
    InitialUpgrade("Group9","Mushketer(SV)SHIELD4");
    InitialUpgrade("Group9","Mushketer(SV)SHIELD5");
    InitialUpgrade("Group9","Mushketer(SV)SHIELD6");
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1002f3f8,0);
    if (iVar2 == 3) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      EnableMission(0x4b);
      AddResource(0,3,10000);
      SelectUnits(&DAT_1002f410,0);
      SelSendAndKill(1,&DAT_1002f478,0,0);
      SelSendAndKill(1,&DAT_1002f458,0,2);
      SelSendAndKill(1,&DAT_1002f468,0,2);
      SelSendAndKill(1,&DAT_1002f460,0,2);
      CreateObject0(&DAT_1002f4a8,&DAT_1002f490,&DAT_1002f3f0,4,&DAT_1002f470,0xb4);
      SelectUnits(&DAT_1002f4a8,0);
      SelSendTo(4,&DAT_1002f478,0xb4,0);
      RunTimer(1,2000);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    GetTotalAmount1(&DAT_1002f3f8,1);
    if (3 < iVar2) {
      ClearSelection(1);
      SelectUnits1(1,&DAT_1002f428,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      GetTotalAmount1(&DAT_1002f3f8,0);
      if (iVar2 == 0) {
        SetTrigg(3,0);
        ClearSelection(1);
        SelectUnits(&DAT_1002f428,0);
        SelDie(1);
        ShowPage("#PAGE3");
        LooseGame();
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f408,0);
    SelSendAndKill(1,&DAT_1002f478,0,0);
    SelSendAndKill(1,&DAT_1002f458,0,2);
    SelSendAndKill(1,&DAT_1002f468,0,2);
    SelSendAndKill(1,&DAT_1002f460,0,2);
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (40000 < iVar2) {
      SetTrigg(0x1e,0);
      SelectUnits(&DAT_1002f4b8,0);
      SelSendAndKill(1,&DAT_1002f478,0,0);
      RunTimer(10,300);
    }
  }
  uVar1 = TimerDone(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f478,0);
    if (iVar2 < 1) {
      SelectUnits(&DAT_1002f4b8,0);
      SelSendAndKill(1,&DAT_1002f458,0,0);
      SelSendAndKill(1,&DAT_1002f468,0,2);
      SelSendAndKill(1,&DAT_1002f460,0,2);
    }
    else {
      AttackEnemyInZone(&DAT_1002f4b8,&DAT_1002f478,0);
      RunTimer(10,100);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_1002f478,&DAT_1002f4a8);
      if (0 < iVar2) {
        iVar2 = GetUnitsAmount1(&DAT_1002f478,&DAT_1002f400);
        if (0 < iVar2) {
          SetTrigg(4,0);
          ShowPage("#PAGE4");
          ShowPage("#PAGE4A");
          DisableMission(0x42);
          EnableMission(0x43);
          EnableMission(0x44);
          SelectUnits(&DAT_1002f4a8,0);
          SelChangeNation(4,0);
        }
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1002f450,1);
    if (iVar2 == 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
      DisableMission(0x44);
      EnableMission(0x45);
      EnableMission(0x46);
      GetTotalAmount1(&DAT_1002f450,0);
      AddResource(0,5,iVar2 * 4000);
      GetTotalAmount1(&DAT_1002f450,0);
      AddResource(0,4,iVar2 * 4000);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) == 0) {
      GetTotalAmount1(&DAT_1002f448,1);
      if (iVar2 == 0) {
        SetTrigg(6,0);
        ShowPage("#PAGE6");
        DisableMission(0x46);
        EnableMission(0x47);
        EnableMission(0x48);
        GetTotalAmount1(&DAT_1002f448,0);
        AddResource(0,0,iVar2 * 10000);
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) == 0) {
      GetTotalAmount0(&DAT_1002f420);
      if (iVar2 == 0) {
        SetTrigg(7,0);
        ShowPage("#PAGE7");
        ShowPage("#PAGE7A");
        DisableMission(0x48);
        EnableMission(0x49);
        EnableMission(0x4a);
        CreateObject0(&DAT_1002f4b0,&DAT_1002f490,&DAT_1002f4a0,0,&DAT_1002f480,0xb4);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f430);
    if (iVar2 == 0) {
      uVar1 = Trigg(0x1e);
      if ((uVar1 & 0xff) != 0) {
        GetTotalAmount0(&DAT_1002f4b8);
        if (iVar2 != 0) goto LAB_10002172;
      }
      SetTrigg(8,0);
      ShowPage("#PAGE8");
      AddResource(0,3,5000);
    }
  }
LAB_10002172:
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f488,0);
    if (0 < iVar2) {
      SetTrigg(0x1f,0);
      SelectUnits(&DAT_1002f440,0);
      SelSendAndKill(1,&DAT_1002f488,0,0);
      RunTimer(2,500);
    }
  }
  uVar1 = TimerDone(2);
  if ((uVar1 & 0xff) != 0) {
    AttackEnemyInZone(&DAT_1002f438,&DAT_1002f488,0);
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) == 0) {
      GetTotalAmount0(&DAT_1002f418);
      if (iVar2 == 0) {
        SetTrigg(9,0);
        ShowPage("#PAGE9");
        ShowVictory();
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f400);
    if (iVar2 == 0) {
      SetTrigg(10,0);
      iVar2 = GetResource(0,3);
      if (iVar2 < 1) {
        ShowPage("#PAGE10A");
      }
      else {
        ShowPage("#PAGE10");
      }
      LooseGame();
    }
  }
  uStack_8 = 0x10002385;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

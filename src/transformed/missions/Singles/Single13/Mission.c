#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002a08c[] = "Gp6";
char DAT_1002a090[] = "Gp4";
char DAT_1002a094[] = "Gp3";
char DAT_1002a098[] = "Gp2";
char DAT_1002a09c[] = "Gp1";
char DAT_1002a0a0[] = "Zp8";
char DAT_1002a0a4[] = "Zp7";
char DAT_1002a0a8[] = "Zp6";
char DAT_1002a0ac[] = "Zp5";
char DAT_1002a0b0[] = "Zp4";
char DAT_1002a0b4[] = "Zp3";
char DAT_1002a0b8[] = "Zp2";
char DAT_1002a0bc[] = "Zp1";
char DAT_1002a0c0[] = "Z3";
char DAT_1002a0c4[] = "Z2";
char DAT_1002a0c8[] = "Z1";
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
int DAT_1002f450 = 0;
long long DAT_1002f458 = 0;
long long DAT_1002f460 = 0;
long long DAT_1002f468 = 0;
long long DAT_1002f470 = 0;
long long DAT_1002f478 = 0;
long long DAT_1002f480 = 0;
long long DAT_1002f488 = 0;
long long DAT_1002f490 = 0;
long long DAT_1002f498 = 0;
long long DAT_1002f4a0 = 0;
long long DAT_1002f4a8 = 0;
long long DAT_1002f4b0 = 0;
int DAT_1002f4c4 = 0;

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
SetPlayerName(1,"FRANCE");
  SetPlayerName(2,"TURKEY");
  SetPlayerName(5,"PIRATES");
  RegisterVar(&DAT_1002f450,4);
  RegisterVar(&DAT_1002f4c4,4);
  RegisterZone(&DAT_1002f3f8,DAT_1002a0c8);
  RegisterZone(&DAT_1002f400,DAT_1002a0c4);
  RegisterZone(&DAT_1002f408,DAT_1002a0c0);
  RegisterZone(&DAT_1002f478,DAT_1002a0bc);
  RegisterZone(&DAT_1002f480,DAT_1002a0b8);
  RegisterZone(&DAT_1002f488,DAT_1002a0b4);
  RegisterZone(&DAT_1002f490,DAT_1002a0b0);
  RegisterZone(&DAT_1002f498,DAT_1002a0ac);
  RegisterZone(&DAT_1002f4a0,DAT_1002a0a8);
  RegisterZone(&DAT_1002f4a8,DAT_1002a0a4);
  RegisterZone(&DAT_1002f4b0,DAT_1002a0a0);
  RegisterUnits(&DAT_1002f420,DAT_1002a09c);
  RegisterUnits(&DAT_1002f428,DAT_1002a098);
  RegisterUnits(&DAT_1002f430,DAT_1002a094);
  RegisterUnits(&DAT_1002f438,DAT_1002a090);
  RegisterUnits(&DAT_1002f440,DAT_1002a08c);
  SetLightSpot(&DAT_1002f3f8,1,1);
  RegisterFormation(&DAT_1002f410,"#ODIN");
  RegisterUnitType(&DAT_1002f418,"PERES_KOR(TU)");
  RegisterUnitType(&DAT_1002f448,"PERES_KOR(PO)");
  RegisterUnitType(&DAT_1002f460,"Shebeka(TU)");
  RegisterUnitType(&DAT_1002f468,"Pehota_turki_DIP(en)");
  RegisterUnitType(&DAT_1002f458,"Mushketer_ev(en)");
  RegisterFormation(&DAT_1002f470,"#LINE3");
  RegisterDynGroup(&DAT_1002f3f0);
  EnableUnit(0,&DAT_1002f448,0);
  uStack_8 = 0x10001403;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *puVar7;
  int local_c;
  int local_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    DAT_1002f450 = GetDiff(0);
    SetResource(0,3,DAT_1002f450 * -3000 + 10000);
    SetResource(0,1,DAT_1002f450 * -3000 + 10000);
    SetResource(0,0,DAT_1002f450 * -3000 + 10000);
    SetResource(0,2,DAT_1002f450 * -3000 + 10000);
    SetResource(0,5,DAT_1002f450 * -3000 + 10000);
    SetResource(0,4,DAT_1002f450 * -3000 + 10000);
    SetResource(1,3,3000);
    SetResource(1,1,3000);
    SetResource(1,0,3000);
    SetResource(1,2,3000);
    SetResource(1,5,3000);
    SetResource(1,4,3000);
    ChangeFriends(2,7);
    StartAI(1,"FRANCE.0",2,0,0,DAT_1002f450);
    SetTrigg(99,1);
    DisableMission(0x45);
    if (0 < DAT_1002f450) {
      InitialUpgrade(DAT_1002a09c,"AKA17EN");
    }
    if (1 < DAT_1002f450) {
      InitialUpgrade(DAT_1002a09c,"AKA28EN");
    }
    if (2 < DAT_1002f450) {
      InitialUpgrade(DAT_1002a09c,"AKA27EN");
    }
    SelectUnits(&DAT_1002f420,0);
    Patrol(5,&DAT_1002f488,0x80);
    SelectUnits(&DAT_1002f428,0);
    Patrol(5,&DAT_1002f490,0x80);
    SelectUnits(&DAT_1002f430,0);
    Patrol(5,&DAT_1002f480,0);
    SelectUnits(&DAT_1002f438,0);
    Patrol(5,&DAT_1002f478,0);
    SetTrigg(1,0);
    RunTimer(1,DAT_1002f450 * -300 + 1000);
    RunTimer(0x1e,100);
  }
  uVar1 = TimerDoneFirst(0x1e);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE0");
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f440,0);
    Patrol(5,&DAT_1002f4a0,0);
  }
  iVar6 = GetUnitsAmount0(&DAT_1002f3f8,0);
  if (0 < iVar6) {
    uVar1 = Trigg(99);
    if ((uVar1 & 0xff) != 0) {
      local_c = AskMultilineQuestion(7,"#PAGE1",0,"QIr_1|QIr_2|QIr_3");
      if (local_c == 0) {
        iVar6 = GetResource(0,4);
        if (iVar6 < 2000) {
          ShowPage("#PAGE3");
        }
        else {
          AddResource(0,4,0xfffff830);
          CreateObject0(&DAT_1002f3f0,&DAT_1002f410,&DAT_1002f418,2,&DAT_1002f400,0x6e);
          SelectUnits(&DAT_1002f3f0,0);
          SelSendTo(2,&DAT_1002f3f8,0x80,0);
          ShowPage("#PAGE2");
        }
      }
      else if (local_c == 1) {
        iVar6 = GetResource(0,4);
        if (iVar6 < 6000) {
          ShowPage("#PAGE3");
        }
        else {
          AddResource(0,4,0xffffe890);
          CreateObject0(&DAT_1002f3f0,&DAT_1002f410,&DAT_1002f460,2,&DAT_1002f400,0x6e);
          SelectUnits(&DAT_1002f3f0,0);
          SelSendTo(2,&DAT_1002f3f8,0x80,0);
          ShowPage("#PAGE2");
        }
      }
      else if (local_c == 2) {
        SetTrigg(99,0);
      }
    }
  }
  iVar6 = GetUnitsAmount0(&DAT_1002f3f8,0);
  if (iVar6 == 0) {
    uVar1 = Trigg(99);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(99,1);
    }
  }
  iVar6 = GetUnitsAmount0(&DAT_1002f408,2);
  if (0 < iVar6) {
    SelectUnitsInZone(&DAT_1002f408,2,0);
    SelChangeNation(2,0);
  }
  uVar1 = NationIsErased(1);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE4");
    ShowVictory();
  }
  uVar1 = NationIsErased(0);
  if ((uVar1 & 0xff) != 0) {
    LooseGame();
  }
  iVar6 = GetTotalAmount0(&DAT_1002f420);
  iVar2 = GetTotalAmount0(&DAT_1002f428);
  iVar3 = GetTotalAmount0(&DAT_1002f430);
  iVar4 = GetTotalAmount0(&DAT_1002f438);
  iVar5 = GetTotalAmount0(&DAT_1002f440);
  if (iVar6 + iVar2 + iVar3 + iVar4 + iVar5 < 1) {
    DisableMission(0x44);
    EnableMission(0x45);
  }
  iVar6 = GetUnitsAmount0(&DAT_1002f4a0,5);
  if (0 < iVar6) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(2,0);
      for (local_8 = 0; local_8 < DAT_1002f450 + 1 + DAT_1002f4c4; local_8 = local_8 + 1) {
        CreateObject0(&DAT_1002f3f0,&DAT_1002f470,&DAT_1002f458,5,&DAT_1002f4a8,0x80);
        CreateObject0(&DAT_1002f3f0,&DAT_1002f470,&DAT_1002f468,5,&DAT_1002f4a8,0x80);
      }
      DAT_1002f4c4 = DAT_1002f4c4 + 1;
    }
  }
  iVar6 = GetUnitsAmount0(&DAT_1002f4a0,5);
  if (iVar6 == 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(2,1);
      SelectUnitsInZone(&DAT_1002f4a8,5,0);
      SelSendAndKill(5,&DAT_1002f4b0,0x80,0);
    }
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

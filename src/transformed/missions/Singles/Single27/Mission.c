#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002a078[] = "Z15";
char DAT_1002a07c[] = "Z14";
char DAT_1002a080[] = "Z13";
char DAT_1002a084[] = "Z12";
char DAT_1002a088[] = "Z11";
char DAT_1002a08c[] = "Z10";
char DAT_1002a090[] = "Z9";
char DAT_1002a094[] = "Z8";
char DAT_1002a098[] = "Z7";
char DAT_1002a09c[] = "Z6";
char DAT_1002a0a0[] = "Z5";
char DAT_1002a0a4[] = "Z4";
char DAT_1002a0a8[] = "Z3";
char DAT_1002a0ac[] = "Z2";
char DAT_1002a0b0[] = "Z1";
char DAT_1002a0c0[] = "GK";
long long DAT_1002f3e0 = 0;
int DAT_1002f3e8 = 0;
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
long long DAT_1002f498 = 0;
long long DAT_1002f4a0 = 0;
long long DAT_1002f4a8 = 0;
int DAT_1002f4b0 = 0;
long long DAT_1002f4b8 = 0;
long long DAT_1002f4c0 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
SetPlayerName(0,"FRANCE");
  SetPlayerName(4,"FRANCE");
  SetPlayerName(2,"TURKEY");
  SetPlayerName(3,"ALJERIANS");
  SetPlayerName(5,"BANDITS");
  RegisterVar(&DAT_1002f4b0,4);
  RegisterUnits(&DAT_1002f3f0,"GGate1");
  RegisterUnits(&DAT_1002f418,DAT_1002a0c0);
  RegisterUnits(&DAT_1002f3f8,"GStable");
  RegisterZone(&DAT_1002f428,DAT_1002a0b0);
  RegisterZone(&DAT_1002f430,DAT_1002a0ac);
  RegisterZone(&DAT_1002f438,DAT_1002a0a8);
  RegisterZone(&DAT_1002f440,DAT_1002a0a4);
  RegisterZone(&DAT_1002f448,DAT_1002a0a0);
  RegisterZone(&DAT_1002f450,DAT_1002a09c);
  RegisterZone(&DAT_1002f458,DAT_1002a098);
  RegisterZone(&DAT_1002f460,DAT_1002a094);
  RegisterZone(&DAT_1002f468,DAT_1002a090);
  RegisterZone(&DAT_1002f480,DAT_1002a08c);
  RegisterZone(&DAT_1002f488,DAT_1002a088);
  RegisterZone(&DAT_1002f490,DAT_1002a084);
  RegisterZone(&DAT_1002f498,DAT_1002a080);
  RegisterZone(&DAT_1002f4a0,DAT_1002a07c);
  RegisterZone(&DAT_1002f4a8,DAT_1002a078);
  RegisterUnitType(&DAT_1002f420,"GRUZ(UN)");
  RegisterUnitType(&DAT_1002f3e0,"Korolrv_Mus(fr)");
  RegisterUnitType(&DAT_1002f4b8,"Tatarin(TU)");
  RegisterFormation(&DAT_1002f478,"#LINE3PUS");
  RegisterFormation(&DAT_1002f4c0,"#LINE24PUS");
  RegisterFormation(&DAT_1002f400,"#LINE36PUS");
  RegisterDynGroup(&DAT_1002f408);
  RegisterDynGroup(&DAT_1002f410);
  RegisterDynGroup(&DAT_1002f470);
  SetDestPoint(&DAT_1002f3f8,&DAT_1002f430);
  EnableUnit(0,&DAT_1002f3e0,0);
  uStack_8 = 0x10001467;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_1002f4b0 = GetDiff(0);
    SetResource(0,3,DAT_1002f4b0 * -3000 + 10000);
    SetResource(0,1,DAT_1002f4b0 * -3000 + 10000);
    SetResource(0,0,DAT_1002f4b0 * -3000 + 10000);
    SetResource(0,2,DAT_1002f4b0 * -3000 + 10000);
    SetResource(0,5,DAT_1002f4b0 * -3000 + 10000);
    SetResource(0,4,DAT_1002f4b0 * -3000 + 10000);
    SetResource(2,3,3000);
    SetResource(2,1,3000);
    SetResource(2,0,3000);
    SetResource(2,2,3000);
    SetResource(2,5,3000);
    SetResource(2,4,3000);
    SetResource(3,3,3000);
    SetResource(3,1,3000);
    SetResource(3,0,3000);
    SetResource(3,2,3000);
    SetResource(3,5,3000);
    SetResource(3,4,3000);
    ChangeFriends(0,0x11);
    ChangeFriends(2,0xc);
    ChangeFriends(5,0x21);
    StartAI(2,"TURKISH.0",0,0,0,DAT_1002f4b0);
    StartAI(3,"ALGIR.0",1,0,0,DAT_1002f4b0);
    ShowPage("#PAGE0");
    SetLightSpot(&DAT_1002f430,1,1);
    SelectUnits(&DAT_1002f418,0);
    SetTrigg(99,0);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f440,&DAT_1002f418);
    if (0 < iVar2) {
      uVar1 = AskQuestion("#PAGE1");
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetResource(0,3);
        if (iVar2 < 0x4e21) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,3,0xffffb1e0);
          SaveSelectedUnits(0,&DAT_1002f470,0);
          CreateObject0(&DAT_1002f408,&DAT_1002f478,&DAT_1002f420,0,&DAT_1002f440,0);
          SelectUnits(&DAT_1002f408,0);
          SelSendTo(0,&DAT_1002f450,0x80,0);
          SelSendTo(0,&DAT_1002f438,0x80,2);
          SelSendTo(0,&DAT_1002f428,0x80,2);
          SelSendTo(0,&DAT_1002f430,0x80,2);
          SelSendTo(0,&DAT_1002f448,0x80,2);
          CreateObject0(&DAT_1002f408,&DAT_1002f478,&DAT_1002f420,0,&DAT_1002f440,0);
          SelectUnits(&DAT_1002f408,0);
          SelSendTo(0,&DAT_1002f450,0x80,0);
          SelSendTo(0,&DAT_1002f438,0x80,2);
          SelSendTo(0,&DAT_1002f428,0x80,2);
          SelSendTo(0,&DAT_1002f430,0x80,2);
          SelSendTo(0,&DAT_1002f448,0x80,2);
          ShowPage("#PAGE3");
          SelectUnits(&DAT_1002f470,0);
          uVar1 = Trigg(5);
          if ((uVar1 & 0xff) != 0) {
            ChangeFriends(5,0x20);
            CreateObject0(&DAT_1002f410,&DAT_1002f4c0,&DAT_1002f4b8,5,&DAT_1002f458,0);
            SelectUnits(&DAT_1002f410,0);
            SelSendAndKill(5,&DAT_1002f460,0x40,0);
            SelSendAndKill(5,&DAT_1002f480,0x40,2);
            SelSendAndKill(5,&DAT_1002f438,0x40,2);
            RunTimer(1,5000);
          }
        }
      }
      SetTrigg(1,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f440,&DAT_1002f418);
    if (iVar2 == 0) {
      SetTrigg(1,1);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f428,0);
    if (iVar2 < 1) {
      iVar2 = GetUnitsAmount0(&DAT_1002f430,0);
      if (iVar2 < 1) goto LAB_10001daa;
    }
    SelectUnits(&DAT_1002f3f0,0);
    SelOpenGates(4);
    SetTrigg(2,0);
  }
LAB_10001daa:
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f428,0);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_1002f430,0);
      if (iVar2 == 0) {
        SelectUnits(&DAT_1002f3f0,0);
        SelCloseGates(4);
        SetTrigg(2,1);
      }
    }
  }
  DAT_1002f3e8 = GetUnitsAmount2(&DAT_1002f430,&DAT_1002f420,0);
  if (0 < DAT_1002f3e8) {
    SelectTypeOfUnitsInZone(&DAT_1002f430,&DAT_1002f420,0,0);
    SelChangeNation(0,4);
    for (local_8 = 0; local_8 < DAT_1002f3e8; local_8 = local_8 + 1) {
      ProduceUnitFast(&DAT_1002f3f8,&DAT_1002f3e0,&DAT_1002f408,0xb54);
    }
  }
  iVar2 = GetUnitsAmount2(&DAT_1002f448,&DAT_1002f420,4);
  if (0 < iVar2) {
    SelectTypeOfUnitsInZone(&DAT_1002f448,&DAT_1002f420,4,0);
    SelErase(4);
  }
  iVar2 = GetUnitsAmount0(&DAT_1002f430,4);
  if (5 < iVar2) {
    SelectTypeOfUnitsInZone(&DAT_1002f430,&DAT_1002f3e0,4,0);
    SelChangeNation(4,0);
    SaveSelectedUnits(0,&DAT_1002f470,0);
    SelectTypeOfUnitsInZone(&DAT_1002f430,&DAT_1002f3e0,0,0);
    SelSendAndKill(0,&DAT_1002f428,0,0);
    SelSendAndKill(0,&DAT_1002f438,0,2);
    SelSendAndKill(0,&DAT_1002f450,0,2);
    SelectUnits(&DAT_1002f470,0);
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    ChangeFriends(5,0x21);
    SelectUnits(&DAT_1002f410,0);
    SelSendTo(5,&DAT_1002f460,0,0);
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f460,0);
    if (1 < iVar2) {
      ChangeFriends(5,0x20);
      SetTrigg(3,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_1002f460,&DAT_1002f418);
      if (0 < iVar2) {
        uVar1 = AskQuestion("#PAGE4");
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetResource(0,1);
          if (1000 < iVar2) {
            AddResource(0,1,0xfffffc18);
            CreateObject0(&DAT_1002f410,&DAT_1002f400,&DAT_1002f4b8,5,&DAT_1002f458,0);
            SelectUnits(&DAT_1002f410,0);
            SelSendAndKill(5,&DAT_1002f488,0,0);
            SelSendAndKill(5,&DAT_1002f490,0,2);
            SelSendAndKill(5,&DAT_1002f498,0,2);
            SelSendAndKill(5,&DAT_1002f468,0,2);
            SelSendAndKill(5,&DAT_1002f4a0,0,2);
            SelSendAndKill(5,&DAT_1002f4a8,0,2);
            SelSendAndKill(5,&DAT_1002f460,0,2);
            CreateObject0(&DAT_1002f410,&DAT_1002f400,&DAT_1002f4b8,5,&DAT_1002f458,0);
            SelectUnits(&DAT_1002f410,0);
            SelSendAndKill(5,&DAT_1002f488,0,0);
            SelSendAndKill(5,&DAT_1002f490,0,2);
            SelSendAndKill(5,&DAT_1002f498,0,2);
            SelSendAndKill(5,&DAT_1002f468,0,2);
            SelSendAndKill(5,&DAT_1002f4a0,0,2);
            SelSendAndKill(5,&DAT_1002f4a8,0,2);
            SelSendAndKill(5,&DAT_1002f460,0,2);
          }
        }
        SetTrigg(4,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f460,&DAT_1002f418);
    if (iVar2 == 0) {
      SetTrigg(4,1);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f460,5);
    if (iVar2 < 1) {
      SetTrigg(5,0);
    }
  }
  uVar1 = NationIsErased(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      ShowVictory();
    }
  }
  uVar1 = NationIsErased(0);
  if ((uVar1 & 0xff) != 0) {
    LooseGame();
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

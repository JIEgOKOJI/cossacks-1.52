#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002a034[] = "Z3";
char DAT_1002a038[] = "Z2";
char DAT_1002a03c[] = "Z1";
char DAT_1002a040[] = "GKde";
long long DAT_1002f3e0 = 0;
long long DAT_1002f3e8 = 0;
long long DAT_1002f3f0 = 0;
long long DAT_1002f3f8 = 0;
long long DAT_1002f400 = 0;
long long DAT_1002f408 = 0;
long long DAT_1002f410 = 0;
long long DAT_1002f418 = 0;
long long DAT_1002f420 = 0;
int DAT_1002f428 = 0;
int DAT_1002f42c = 0;
int DAT_1002f430 = 0;

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetPlayerName(0,"DENMARK");
  SetPlayerName(1,"SPAIN");
  SetPlayerName(2,"PIEMOUNT");
  SetPlayerName(3,"PRUSSIA");
  SetPlayerName(5,"DENMARK");
  RegisterVar(&DAT_1002f428,4);
  RegisterVar(&DAT_1002f42c,4);
  RegisterUnits(&DAT_1002f3e8,"GGates1");
  RegisterUnits(&DAT_1002f3f0,DAT_1002a040);
  RegisterZone(&DAT_1002f400,DAT_1002a03c);
  RegisterZone(&DAT_1002f408,DAT_1002a038);
  RegisterZone(&DAT_1002f410,DAT_1002a034);
  RegisterUnitType(&DAT_1002f3f8,"GRUZ(UN)");
  RegisterFormation(&DAT_1002f420,"#LINE3PUS");
  RegisterDynGroup(&DAT_1002f3e0);
  RegisterDynGroup(&DAT_1002f418);
  uStack_8 = 0x10001256;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_1002f428 = GetDiff(0);
    DAT_1002f42c = 0;
    SetResource(0,3,DAT_1002f428 * -3000 + 10000);
    SetResource(0,1,DAT_1002f428 * -3000 + 10000);
    SetResource(0,0,DAT_1002f428 * -3000 + 10000);
    SetResource(0,2,DAT_1002f428 * -3000 + 10000);
    SetResource(0,5,DAT_1002f428 * -3000 + 10000);
    SetResource(0,4,DAT_1002f428 * -3000 + 10000);
    SetResource(1,3,3000);
    SetResource(1,1,3000);
    SetResource(1,0,3000);
    SetResource(1,2,3000);
    SetResource(1,5,3000);
    SetResource(1,4,3000);
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
    ChangeFriends(0,0x25);
    ChangeFriends(1,10);
    ChangeFriends(2,0x25);
    SelectUnitsInZone(&DAT_1002f400,2,0);
    DoNotUseSelInAI(2);
    StartAI(1,"SPAIN.0",0,0,0,DAT_1002f428);
    StartAI(2,"PIEMONT.0",0,0,0,DAT_1002f428);
    StartAI(3,"GERMAN.0",1,0,0,DAT_1002f428);
    SelectUnitsInZone(&DAT_1002f400,2,0);
    DoNotUseSelInAI(2);
    SelectUnits(&DAT_1002f3e8,0);
    SelOpenGates(5);
    ShowPage("#PAGE0");
    SetLightSpot(&DAT_1002f408,1,1);
    SelectUnits(&DAT_1002f3f0,0);
    RunTimer(1,(3 - DAT_1002f428) * 10000 + 80000);
    SetTrigg(99,0);
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    if (DAT_1002f42c == 0) {
      ShowPage("#PAGE4");
      RunTimer(2,(3 - DAT_1002f428) * 2000 + 20000);
    }
    else {
      RunTimer(1,DAT_1002f42c);
      DAT_1002f42c = 0;
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    if (DAT_1002f42c == 0) {
      ShowPage("#PAGE5");
      SetTrigg(2,0);
    }
    else {
      RunTimer(1,DAT_1002f42c);
      DAT_1002f42c = 0;
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    if (DAT_1002f42c == 0) {
      SetResource(2,3,0);
    }
    else {
      RunTimer(1,DAT_1002f42c);
      DAT_1002f42c = 0;
      SetTrigg(2,1);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f400,&DAT_1002f3f0);
    if (0 < iVar2) {
      uVar1 = AskQuestion("#PAGE1");
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetResource(0,3);
        if (iVar2 < 0x2711) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,3,0xffffd8f0);
          CreateObject0(&DAT_1002f3e0,&DAT_1002f420,&DAT_1002f3f8,0,&DAT_1002f400,0);
          CreateObject0(&DAT_1002f3e0,&DAT_1002f420,&DAT_1002f3f8,0,&DAT_1002f400,0);
          ShowPage("#PAGE3");
        }
      }
      SetTrigg(1,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f400,&DAT_1002f3f0);
    if (iVar2 == 0) {
      SetTrigg(1,1);
    }
  }
  DAT_1002f430 = GetUnitsAmount2(&DAT_1002f408,&DAT_1002f3f8,0);
  if (0 < DAT_1002f430) {
    AddResource(2,3,DAT_1002f430 * 0x682);
    SelectTypeOfUnitsInZone(&DAT_1002f408,&DAT_1002f3f8,0,0);
    SelChangeNation(0,2);
    DAT_1002f42c = DAT_1002f42c + DAT_1002f430 * 5000;
    if (DAT_1002f42c == 0) {
      ShowPage("#PAGE6");
    }
    SelectTypeOfUnitsInZone(&DAT_1002f408,&DAT_1002f3f8,2,0);
    SelSendTo(2,&DAT_1002f410,0x80,0);
  }
  iVar2 = GetUnitsAmount2(&DAT_1002f410,&DAT_1002f3f8,2);
  if (0 < iVar2) {
    SelectTypeOfUnitsInZone(&DAT_1002f410,&DAT_1002f3f8,2,0);
    SelErase(2);
  }
  uVar1 = NationIsErased(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      ShowVictory();
    }
  }
  uVar1 = NationIsErased(0);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) == 0) goto LAB_10001cd6;
  }
  LooseGame();
LAB_10001cd6:
  uStack_8 = 0x10001ce3;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

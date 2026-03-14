#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_1002f3e0 = 0;
long long DAT_1002f3e8 = 0;
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
long long DAT_1002f4b0 = 0;
long long DAT_1002f4b8 = 0;

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f428,"Zone1");
  RegisterZone(&DAT_1002f430,"Zone2");
  RegisterZone(&DAT_1002f438,"Zone3");
  RegisterZone(&DAT_1002f440,"Zone4");
  RegisterZone(&DAT_1002f448,"Zone5");
  RegisterUnits(&DAT_1002f3e0,"Group1");
  RegisterUnits(&DAT_1002f3f0,"Group2");
  RegisterUnits(&DAT_1002f3e8,"Group3");
  RegisterUnits(&DAT_1002f400,"Group4");
  RegisterUnits(&DAT_1002f3f8,"Group5");
  RegisterUnits(&DAT_1002f410,"Group6");
  RegisterUnits(&DAT_1002f408,"Group7");
  RegisterUnits(&DAT_1002f420,"Group8");
  RegisterUnits(&DAT_1002f418,"Group9");
  RegisterUnits(&DAT_1002f460,"Group10");
  RegisterUnits(&DAT_1002f4a8,"Group11");
  RegisterUnits(&DAT_1002f4b0,"Group12");
  RegisterUnits(&DAT_1002f490,"Group13");
  RegisterUnits(&DAT_1002f4a0,"Group14");
  RegisterUnits(&DAT_1002f480,"Group15");
  RegisterUnits(&DAT_1002f488,"Group16");
  RegisterUnits(&DAT_1002f468,"Group17");
  RegisterUnits(&DAT_1002f470,"Group18");
  RegisterUnits(&DAT_1002f4b8,"Group19");
  RegisterUnits(&DAT_1002f498,"Group20");
  RegisterUnits(&DAT_1002f478,"Group21");
  RegisterUnitType(&DAT_1002f450,"Poru(UA)");
  RegisterUnitType(&DAT_1002f458,"PorE(PL)");
  SetStandartVictory();
  SetPlayerName(1,"JA_ARMY");
  SetPlayerName(5,"UKRAINE");
  SetPlayerName(6,"JR_ARMY");
  uStack_8 = 0x1000141f;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(100,0);
    ChangeFriends(0,1);
    ChangeFriends(1,0x62);
    ChangeFriends(5,0x62);
    ChangeFriends(6,0x62);
    SetResource(0,3,0x1d4c);
    SetResource(0,1,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,5,0x1d4c);
    SetResource(0,4,0x1d4c);
    SetResource(1,3,30000);
    SetResource(1,1,30000);
    SetResource(1,0,30000);
    SetResource(1,2,30000);
    SetResource(1,5,30000);
    SetResource(1,4,30000);
    SetResource(6,3,10000);
    SetResource(6,1,10000);
    SetResource(6,0,10000);
    SetResource(6,2,10000);
    SetResource(6,5,10000);
    SetResource(6,4,10000);
    SelectUnits1(5,&DAT_1002f3e0,0);
    SelectUnits1(5,&DAT_1002f3e8,1);
    SelectUnits1(5,&DAT_1002f400,1);
    SelectUnits1(5,&DAT_1002f410,1);
    SelectUnits1(5,&DAT_1002f418,1);
    SelectUnits1(5,&DAT_1002f4a8,1);
    SelectUnits1(5,&DAT_1002f490,1);
    SelectUnits1(5,&DAT_1002f4a0,1);
    SelChangeNation(5,1);
    SelectUnits1(5,&DAT_1002f480,0);
    SelectUnits1(5,&DAT_1002f460,1);
    SelectUnits1(5,&DAT_1002f3f0,1);
    SelectUnits1(5,&DAT_1002f3f8,1);
    SelOpenGates(5);
    SelectUnits1(6,&DAT_1002f470,0);
    DoNotUseSelInAI(6);
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    ShowPage("#PAGE1");
    SelectUnits1(1,&DAT_1002f3e0,0);
    SelectUnits1(1,&DAT_1002f3e8,1);
    SelectUnits1(1,&DAT_1002f400,1);
    SelectUnits1(1,&DAT_1002f410,1);
    SelectUnits1(1,&DAT_1002f418,1);
    SelectUnits1(1,&DAT_1002f4a8,1);
    SelectUnits1(1,&DAT_1002f490,1);
    SelectUnits1(1,&DAT_1002f4a0,1);
    SelectUnits1(1,&DAT_1002f4b8,1);
    SelectUnits1(1,&DAT_1002f498,1);
    SelectUnits1(1,&DAT_1002f478,1);
    DoNotUseSelInAI(1);
    EnableUnit(0,&DAT_1002f450,0);
    EnableUnit(1,&DAT_1002f450,0);
    EnableUnit(6,&DAT_1002f450,0);
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x62,0);
    StartAI(1,"POLAND.0",0,1,2,0);
    SetAIProperty(1,0x1002,0);
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x61,0);
    StartAI(6,"POLAND.0",0,1,2,0);
    SetAIProperty(6,0x1002,0);
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f438,0);
    if (iVar2 < 1) {
      iVar2 = GetUnitsAmount0(&DAT_1002f440,0);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount0(&DAT_1002f448,0);
        if (iVar2 < 1) goto LAB_10001ce5;
      }
    }
    SetTrigg(0x60,0);
    ChangeFriends(5,99);
    ShowPage("#PAGE2");
    SetLightSpot(&DAT_1002f428,1,1);
    SetLightSpot(&DAT_1002f430,1,2);
  }
LAB_10001ce5:
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f428,0);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_1002f428,1);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_1002f428,6);
        if (iVar2 == 0) {
          SetTrigg(0x5f,0);
          ShowPage("#PAGE3");
          AddResource(0,1,5000);
          AddResource(0,5,5000);
          AddResource(0,4,5000);
          SelectUnits1(5,&DAT_1002f408,0);
          SelectUnits1(5,&DAT_1002f420,1);
          SelChangeNation(5,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f430,0);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_1002f430,1);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_1002f430,6);
        if (iVar2 == 0) {
          SetTrigg(0x5e,0);
          ShowPage("#PAGE3");
          AddResource(0,1,5000);
          AddResource(0,5,5000);
          AddResource(0,4,5000);
          SelectUnits1(5,&DAT_1002f468,0);
          SelectUnits1(5,&DAT_1002f488,1);
          SelectUnits1(5,&DAT_1002f4b0,1);
          SelChangeNation(5,0);
        }
      }
    }
  }
  uStack_8 = 0x10001fa9;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

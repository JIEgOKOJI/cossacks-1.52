#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

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
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f410,"Zone1");
  RegisterZone(&DAT_1002f418,"Zone2");
  RegisterZone(&DAT_1002f420,"Zone3");
  RegisterZone(&DAT_1002f428,"Zone4");
  RegisterUnits(&DAT_1002f3f0,"Group1");
  RegisterUnits(&DAT_1002f440,"Group1a");
  RegisterUnits(&DAT_1002f400,"Group2");
  RegisterUnits(&DAT_1002f438,"Group2a");
  RegisterUnits(&DAT_1002f3f8,"Group3");
  RegisterUnits(&DAT_1002f408,"Group4");
  RegisterUnitType(&DAT_1002f430,"Krestian_Sved(fr)");
  RegisterUnitType(&DAT_1002f3e0,"Kreposnoi_portugal(sp)");
  RegisterUnitType(&DAT_1002f3e8,"Kreposnoi_pruss(au)");
  ChangeFriends(0,0x89);
  ChangeFriends(1,6);
  ChangeFriends(2,6);
  ChangeFriends(3,9);
  SetPlayerName(1,"AUSTRIANS");
  SetPlayerName(2,"SPAIN");
  SetPlayerName(3,"DWELLERS");
  uStack_8 = 0x100012d7;
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
    SetResource(0,1,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    SetResource(1,3,5000);
    SetResource(1,1,10000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    SetResource(2,3,5000);
    SetResource(2,1,10000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    SetResource(3,3,5000000);
    StartAI(1,"AUSTRIA.0",0,1,1,1);
    StartAI(2,"SPAIN.0",0,1,1,1);
    ShowPage("#PAGE1");
    RunTimer(1,5000);
    RunTimer(2,100);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f410,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f440);
      if (0 < iVar2) {
        SetTrigg(2,0);
        ShowPage("#PAGE2");
        ClearSelection(3);
        SelectUnits1(3,&DAT_1002f3f0,0);
        SelectUnits1(3,&DAT_1002f440,1);
        SelChangeNation(3,0);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f418,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f438);
      if (0 < iVar2) {
        SetTrigg(3,0);
        ShowPage("#PAGE3");
        ClearSelection(3);
        SelectUnits1(3,&DAT_1002f400,0);
        SelectUnits1(3,&DAT_1002f438,1);
        SelChangeNation(3,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f420,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f3f8);
      if (0 < iVar2) {
        SetTrigg(4,0);
        ShowPage("#PAGE4");
        ClearSelection(3);
        SelectUnits1(3,&DAT_1002f3f8,0);
        SelChangeNation(3,0);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f428,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_1002f408);
      if (0 < iVar2) {
        SetTrigg(5,0);
        ShowPage("#PAGE5");
        ClearSelection(3);
        SelectUnits1(3,&DAT_1002f408,0);
        SelChangeNation(3,0);
      }
    }
  }
  uVar1 = TimerDone(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_1002f430,0);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount1(&DAT_1002f3e0,0);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount1(&DAT_1002f3e8,0);
          if (iVar2 == 0) {
            SetTrigg(6,0);
            ShowPage("#PAGE6");
            LooseGame();
          }
        }
      }
    }
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_1002f430,1);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount1(&DAT_1002f3e0,1);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount1(&DAT_1002f3e8,1);
          if (iVar2 == 0) {
            SetTrigg(7,0);
            ShowPage("#PAGE7");
          }
        }
      }
    }
    uVar1 = Trigg(8);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount1(&DAT_1002f430,2);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount1(&DAT_1002f3e0,2);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount1(&DAT_1002f3e8,2);
          if (iVar2 == 0) {
            SetTrigg(8,0);
            ShowPage("#PAGE8");
          }
        }
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(8);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(9,0);
        ShowPage("#PAGE9");
        ShowVictory();
      }
    }
  }
  uVar1 = TimerDone(1);
  if ((uVar1 & 0xff) != 0) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_1002f3f0,0);
    SelectUnits1(1,&DAT_1002f440,1);
    SelectUnits1(1,&DAT_1002f400,1);
    SelectUnits1(1,&DAT_1002f438,1);
    SelectUnits1(1,&DAT_1002f3f8,1);
    SelectUnits1(1,&DAT_1002f408,1);
    SelDie(1);
    ClearSelection(2);
    SelectUnits1(2,&DAT_1002f3f0,0);
    SelectUnits1(2,&DAT_1002f440,1);
    SelectUnits1(2,&DAT_1002f400,1);
    SelectUnits1(2,&DAT_1002f438,1);
    SelectUnits1(2,&DAT_1002f3f8,1);
    SelectUnits1(2,&DAT_1002f408,1);
    SelDie(2);
    RunTimer(1,100);
  }
  uStack_8 = 0x10001dbe;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

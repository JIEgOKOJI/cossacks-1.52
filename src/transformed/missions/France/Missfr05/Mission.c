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
long long DAT_1002f448 = 0;
long long DAT_1002f450 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f418,"Zone4");
  RegisterZone(&DAT_1002f420,"Zone5");
  RegisterZone(&DAT_1002f428,"Zone6");
  RegisterZone(&DAT_1002f430,"Zone7");
  RegisterUnits(&DAT_1002f3e0,"Group1");
  RegisterUnits(&DAT_1002f3f0,"Group2");
  RegisterUnits(&DAT_1002f3e8,"Group3");
  RegisterUnits(&DAT_1002f400,"Group4");
  RegisterUnits(&DAT_1002f3f8,"Group5");
  RegisterUnits(&DAT_1002f410,"Group6");
  RegisterUnits(&DAT_1002f408,"Group7");
  RegisterUnits(&DAT_1002f438,"Group4a");
  RegisterUnits(&DAT_1002f448,"Group5a");
  RegisterUnits(&DAT_1002f440,"Group6a");
  RegisterUnits(&DAT_1002f450,"Group7a");
  ChangeFriends(0,0x81);
  SetPlayerName(1,"SPAIN");
  SetPlayerName(5,"ROBBERS");
  uStack_8 = 0x100012a4;
  return;
}





void ProcessScenary(void)

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
    SetResource(0,3,50000);
    SetResource(0,1,2000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,10000);
    SetResource(0,4,10000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE1A");
    InitialUpgrade("Group1","KUZ03FR");
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3e0);
    if (iVar3 == 0) {
      SetTrigg(2,0);
      iVar3 = GetResource(0,3);
      if (iVar3 < 1) {
        ShowPage("#PAGE2A");
      }
      else {
        ShowPage("#PAGE2");
      }
      LooseGame();
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsByNation(&DAT_1002f3f0,1);
    if (iVar3 == 0) {
      SetTrigg(3,0);
      ShowPage("#PAGE3");
      ShowVictory();
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f418,0);
    if (3 < iVar3) {
      GetTotalAmount0(&DAT_1002f400);
      if (0 < iVar3) {
        GetTotalAmount0(&DAT_1002f438);
        if (0 < iVar3) {
          SetTrigg(4,0);
          SelectUnits(&DAT_1002f438,0);
          SelOpenGates(1);
          RunTimer(4,0x32);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(4);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f400,0);
    SelSendAndKill(1,&DAT_1002f418,0,0);
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f418,&DAT_1002f400);
    GetTotalAmount0(&DAT_1002f400);
    if (iVar3 == iVar2) {
      SelectUnits(&DAT_1002f438,0);
      SelCloseGates(1);
      SetTrigg(0x2c,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f420,0);
    if (3 < iVar3) {
      GetTotalAmount0(&DAT_1002f3f8);
      if (0 < iVar3) {
        GetTotalAmount0(&DAT_1002f448);
        if (0 < iVar3) {
          SetTrigg(5,0);
          SelectUnits(&DAT_1002f448,0);
          SelOpenGates(1);
          RunTimer(5,0x32);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(5);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f8,0);
    SelSendAndKill(1,&DAT_1002f420,0,0);
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f420,&DAT_1002f3f8);
    GetTotalAmount0(&DAT_1002f3f8);
    if (iVar3 == iVar2) {
      SelectUnits(&DAT_1002f448,0);
      SelCloseGates(1);
      SetTrigg(0x2d,0);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f428,0);
    if (3 < iVar3) {
      GetTotalAmount0(&DAT_1002f410);
      if (0 < iVar3) {
        GetTotalAmount0(&DAT_1002f440);
        if (0 < iVar3) {
          SetTrigg(6,0);
          SelectUnits(&DAT_1002f440,0);
          SelOpenGates(1);
          RunTimer(6,0x32);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f410,0);
    SelSendAndKill(1,&DAT_1002f428,0,0);
  }
  uVar1 = Trigg(0x2e);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f428,&DAT_1002f410);
    GetTotalAmount0(&DAT_1002f410);
    if (iVar3 == iVar2) {
      SelectUnits(&DAT_1002f440,0);
      SelCloseGates(1);
      SetTrigg(0x2e,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f430,0);
    if (3 < iVar3) {
      GetTotalAmount0(&DAT_1002f408);
      if (0 < iVar3) {
        GetTotalAmount0(&DAT_1002f450);
        if (0 < iVar3) {
          SetTrigg(7,0);
          SelectUnits(&DAT_1002f450,0);
          SelOpenGates(1);
          RunTimer(7,0x32);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(7);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f408,0);
    SelSendAndKill(1,&DAT_1002f430,0,0);
  }
  uVar1 = Trigg(0x2f);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f430,&DAT_1002f408);
    GetTotalAmount0(&DAT_1002f408);
    if (iVar3 == iVar2) {
      SelectUnits(&DAT_1002f450,0);
      SelCloseGates(1);
      SetTrigg(0x2f,0);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3e8);
    if (iVar3 == 0) {
      SetTrigg(8,0);
      ShowPage("#PAGE8");
      AddResource(0,1,8000);
      AddResource(0,5,20000);
      AddResource(0,4,20000);
    }
  }
  uStack_8 = 0x10001ca9;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

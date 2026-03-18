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
long long DAT_1002f458 = 0;
long long DAT_1002f460 = 0;
long long DAT_1002f468 = 0;
long long DAT_1002f470 = 0;
long long DAT_1002f478 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f438,"Zone1");
  RegisterZone(&DAT_1002f440,"Zone2");
  RegisterZone(&DAT_1002f448,"Zone3");
  RegisterZone(&DAT_1002f450,"Zone4");
  RegisterZone(&DAT_1002f458,"Zone5");
  RegisterZone(&DAT_1002f460,"Zone6");
  RegisterZone(&DAT_1002f428,"Zone6a");
  RegisterZone(&DAT_1002f468,"Zone7");
  RegisterZone(&DAT_1002f470,"Zone8");
  RegisterZone(&DAT_1002f478,"Zone9");
  RegisterUnits(&DAT_1002f3e0,"Group1");
  RegisterUnits(&DAT_1002f3f0,"Group2");
  RegisterUnits(&DAT_1002f3e8,"Group3");
  RegisterUnits(&DAT_1002f400,"Group4");
  RegisterUnits(&DAT_1002f3f8,"Group5");
  RegisterUnits(&DAT_1002f410,"Group6");
  RegisterUnits(&DAT_1002f408,"Group7");
  RegisterUnits(&DAT_1002f418,"Group8");
  RegisterUnitType(&DAT_1002f430,"Mortira(fr)");
  RegisterUnitType(&DAT_1002f420,"Mortira(au)");
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(1,"SPAIN");
  SetPlayerName(4,"ALLIES");
  uStack_8 = 0x10001353;
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
    ShowPage("#PAGE1");
    SelectUnits(&DAT_1002f3f0,0);
    SelSendAndKill(4,&DAT_1002f438,0x5a,0);
    SelectUnits(&DAT_1002f3e8,0);
    SelSendAndKill(4,&DAT_1002f448,0x5a,0);
    SelectUnits(&DAT_1002f400,0);
    SelSendAndKill(4,&DAT_1002f450,0x5a,0);
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f438,&DAT_1002f3f0);
    if (0 < iVar3) {
      SetTrigg(0x1f,0);
      SelectUnits(&DAT_1002f3f8,0);
      SelSendAndKill(1,&DAT_1002f440,0xa6,0);
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f438,&DAT_1002f3f0);
    if (100 < iVar3) {
      SetTrigg(0x20,0);
      SelectUnits(&DAT_1002f3f0,0);
      SelSendAndKill(4,&DAT_1002f440,0x5a,0);
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f450,&DAT_1002f400);
    if (iVar3 == 2) {
      SetTrigg(0x21,0);
      SelectUnits(&DAT_1002f400,0);
      SelectUnits(&DAT_1002f3e8,1);
      SelSendAndKill(4,&DAT_1002f458,0x5a,0);
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f458,&DAT_1002f3e8);
    if (0 < iVar3) {
      SetTrigg(0x22,0);
      SelectUnits(&DAT_1002f408,0);
      SelSendAndKill(1,&DAT_1002f458,0xa6,0);
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) == 0) {
    GetTotalAmount0(&DAT_1002f3f0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1002f3f0,&DAT_1002f440,4);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f460,0);
    if (0 < iVar3) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3f0);
    if (iVar3 == 0) {
      SetTrigg(3,0);
      ShowPage("#PAGE3");
      SelectUnits(&DAT_1002f3f8,0);
      SelSendAndKill(1,&DAT_1002f478,0,0);
      RunTimer(9,500);
    }
  }
  GetTotalAmount1(&DAT_1002f430,0);
  if (0 < iVar3) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_1002f400,0);
    SelDie(1);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3e8);
    if (iVar3 == 0) {
      SetTrigg(4,0);
      ShowPage("#PAGE4");
      RunTimer(7,400);
      SelectUnits(&DAT_1002f408,0);
      SelSendAndKill(1,&DAT_1002f478,0,0);
      RunTimer(8,1000);
    }
  }
  uVar1 = TimerDoneFirst(9);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f8,0);
    SelSendAndKill(1,&DAT_1002f460,0,0);
  }
  uVar1 = TimerDoneFirst(8);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f408,0);
    SelSendAndKill(1,&DAT_1002f460,0,0);
  }
  uVar1 = TimerDone(9);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f460,&DAT_1002f3f8);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_1002f460,0);
      if (iVar3 < 1) {
        iVar3 = GetUnitsAmount0(&DAT_1002f468,0);
        if (iVar3 < 1) {
          SelectUnits(&DAT_1002f3f8,0);
          SelSendAndKill(1,&DAT_1002f428,0,0);
        }
        else {
          SelectUnits(&DAT_1002f3f8,0);
          SelSendAndKill(1,&DAT_1002f468,0,0);
        }
      }
      else {
        AttackEnemyInZone(&DAT_1002f3f8,&DAT_1002f460,0);
      }
    }
  }
  uVar1 = TimerDone(8);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f460,&DAT_1002f408);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_1002f460,0);
      if (iVar3 < 1) {
        iVar3 = GetUnitsAmount0(&DAT_1002f468,0);
        if (iVar3 < 1) {
          SelectUnits(&DAT_1002f408,0);
          SelSendAndKill(1,&DAT_1002f428,0,0);
        }
        else {
          SelectUnits(&DAT_1002f408,0);
          SelSendAndKill(1,&DAT_1002f468,0,0);
        }
      }
      else {
        AttackEnemyInZone(&DAT_1002f408,&DAT_1002f460,0);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount0(&DAT_1002f460,0);
      if (iVar3 == 0) {
        iVar3 = GetUnitsAmount0(&DAT_1002f468,0);
        if (iVar3 == 0) {
          iVar3 = GetUnitsAmount0(&DAT_1002f428,0);
          if (iVar3 == 0) {
            uVar1 = Trigg(3);
            if ((uVar1 & 0xff) == 0) {
              uVar1 = Trigg(4);
              if ((uVar1 & 0xff) == 0) {
                SetTrigg(5,0);
                ShowPage("#PAGE5");
                LooseGame();
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3f8);
    if (iVar3 == 0) {
      GetTotalAmount0(&DAT_1002f408);
      GetTotalAmount0(&DAT_1002f418);
      if (iVar3 == iVar2) {
        GetTotalAmount1(&DAT_1002f420,1);
        if (iVar3 == 0) {
          SetTrigg(6,0);
          uVar1 = Trigg(7);
          if ((uVar1 & 0xff) == 0) {
            ShowPage("#PAGE7");
            ShowVictory();
          }
          else {
            ShowPage("#PAGE6");
          }
        }
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f410);
    if (iVar3 < 0x14) {
      SetTrigg(7,0);
      SelectUnits(&DAT_1002f410,0);
      SelSendTo(1,&DAT_1002f470,0,0);
      uVar1 = Trigg(6);
      if ((uVar1 & 0xff) == 0) {
        ShowPage("#PAGE7");
        ShowVictory();
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3e0);
    if (iVar3 == 0) {
      SetTrigg(8,0);
      ShowPage("#PAGE8");
      LooseGame();
    }
  }
  uStack_8 = 0x10001fdc;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

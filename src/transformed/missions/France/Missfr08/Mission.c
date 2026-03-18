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
long long DAT_1002f480 = 0;
long long DAT_1002f488 = 0;
long long DAT_1002f490 = 0;
long long DAT_1002f498 = 0;
long long DAT_1002f4a0 = 0;
long long DAT_1002f4a8 = 0;
long long DAT_1002f4b0 = 0;
long long DAT_1002f4b8 = 0;
long long DAT_1002f4c0 = 0;
long long DAT_1002f4c8 = 0;
long long DAT_1002f4d0 = 0;
long long DAT_1002f4d8 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f458,"Zone1");
  RegisterZone(&DAT_1002f460,"Zone2");
  RegisterZone(&DAT_1002f468,"Zone3");
  RegisterZone(&DAT_1002f470,"Zone4");
  RegisterZone(&DAT_1002f478,"Zone5");
  RegisterZone(&DAT_1002f480,"Zone6");
  RegisterZone(&DAT_1002f488,"Zone7");
  RegisterZone(&DAT_1002f450,"Zone7a");
  RegisterZone(&DAT_1002f490,"Zone8");
  RegisterZone(&DAT_1002f498,"Zone9");
  RegisterZone(&DAT_1002f430,"Zone10");
  RegisterZone(&DAT_1002f428,"Zone11");
  RegisterZone(&DAT_1002f440,"Zone12");
  RegisterZone(&DAT_1002f438,"Zone13");
  RegisterZone(&DAT_1002f448,"Zone14");
  RegisterUnits(&DAT_1002f3e0,"Group1");
  RegisterUnits(&DAT_1002f3f0,"Group2");
  RegisterUnits(&DAT_1002f4d0,"Group2a");
  RegisterUnits(&DAT_1002f3e8,"Group3");
  RegisterUnits(&DAT_1002f400,"Group4");
  RegisterUnits(&DAT_1002f3f8,"Group5");
  RegisterUnits(&DAT_1002f410,"Group6");
  RegisterUnits(&DAT_1002f408,"Group7");
  RegisterUnits(&DAT_1002f420,"Group8");
  RegisterUnits(&DAT_1002f418,"Group9");
  RegisterUnits(&DAT_1002f4a8,"Group10");
  RegisterUnits(&DAT_1002f4c0,"Group11");
  RegisterUnits(&DAT_1002f4c8,"Group12");
  RegisterUnits(&DAT_1002f4b0,"Group13");
  RegisterUnits(&DAT_1002f4b8,"Group14");
  RegisterUnitType(&DAT_1002f4d8,"Sclad1(au)");
  RegisterUnitType(&DAT_1002f4a0,"Pushka(GE)");
  ChangeFriends(0,0x91);
  SetPlayerName(1,"EMPIRE");
  SetPlayerName(4,"ALLIES");
  uStack_8 = 0x10001490;
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
    SetResource(0,3,20000);
    SetResource(0,1,5000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,10000);
    SetResource(0,4,10000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE1A");
    SelectUnits(&DAT_1002f4b0,0);
    Patrol(1,&DAT_1002f438,0);
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (0x5dc < iVar3) {
      SetTrigg(0x1e,0);
      SelectUnits(&DAT_1002f3f0,0);
      SelectUnits(&DAT_1002f4d0,1);
      SelSendAndKill(1,&DAT_1002f458,0xb4,0);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f458,&DAT_1002f3f0);
    GetTotalAmount0(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      iVar3 = GetUnitsAmount1(&DAT_1002f458,&DAT_1002f4d0);
      GetTotalAmount0(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        GetTotalAmount0(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x1f,0);
          RunTimer(1,200);
          SelectUnits(&DAT_1002f4d0,0);
          SelSendAndKill(1,&DAT_1002f460,0xb4,0);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    SelSendAndKill(1,&DAT_1002f460,0xb4,0);
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f460,&DAT_1002f3f0);
    GetTotalAmount0(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      iVar3 = GetUnitsAmount1(&DAT_1002f460,&DAT_1002f4d0);
      GetTotalAmount0(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        GetTotalAmount0(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x20,0);
          RunTimer(2,600);
          SelectUnits(&DAT_1002f4d0,0);
          SelSendAndKill(1,&DAT_1002f468,0xb4,0);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    SelSendAndKill(1,&DAT_1002f468,0xb4,0);
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f468,&DAT_1002f3f0);
    GetTotalAmount0(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      iVar3 = GetUnitsAmount1(&DAT_1002f468,&DAT_1002f4d0);
      GetTotalAmount0(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        GetTotalAmount0(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x21,0);
          RunTimer(3,700);
          SelectUnits(&DAT_1002f4d0,0);
          SelSendAndKill(1,&DAT_1002f470,0xb4,0);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(3);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    SelSendAndKill(1,&DAT_1002f470,0xb4,0);
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f470,&DAT_1002f3f0);
    GetTotalAmount0(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      iVar3 = GetUnitsAmount1(&DAT_1002f470,&DAT_1002f4d0);
      GetTotalAmount0(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        GetTotalAmount0(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x22,0);
          RunTimer(4,800);
          SelectUnits(&DAT_1002f4d0,0);
          SelSendAndKill(1,&DAT_1002f478,0xb4,0);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(4);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    SelSendAndKill(1,&DAT_1002f478,0xb4,0);
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f478,&DAT_1002f3f0);
    GetTotalAmount0(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      iVar3 = GetUnitsAmount1(&DAT_1002f478,&DAT_1002f4d0);
      GetTotalAmount0(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        GetTotalAmount0(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x23,0);
          RunTimer(5,600);
          SelectUnits(&DAT_1002f4d0,0);
          SelSendAndKill(1,&DAT_1002f480,0xb4,0);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(5);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    SelSendAndKill(1,&DAT_1002f480,0xb4,0);
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f480,&DAT_1002f3f0);
    GetTotalAmount0(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      iVar3 = GetUnitsAmount1(&DAT_1002f480,&DAT_1002f4d0);
      GetTotalAmount0(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        GetTotalAmount0(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x24,0);
          RunTimer(6,700);
          SelectUnits(&DAT_1002f4d0,0);
          SelSendAndKill(1,&DAT_1002f450,0,0);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    SelSendAndKill(1,&DAT_1002f488,0,0);
  }
  iVar3 = GetGlobalTime();
  if (1000 < iVar3) {
    GetTotalAmount0(&DAT_1002f3e8);
    if (0 < iVar3) {
      GetTotalAmount0(&DAT_1002f3f8);
      if (0 < iVar3) {
        SelectUnits(&DAT_1002f3e8,0);
        SelAttackGroup(1,&DAT_1002f3f8);
      }
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3e8);
    if (0 < iVar3) {
      GetTotalAmount0(&DAT_1002f3f8);
      if (iVar3 == 0) {
        SelectUnits(&DAT_1002f3e8,0);
        Patrol(1,&DAT_1002f440,0);
      }
    }
  }
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f410);
    if (iVar3 < 2) {
      SetTrigg(0x25,0);
      ClearSelection(1);
      SelectUnits1(1,&DAT_1002f408,0);
      SelDie(1);
      ClearSelection(0);
      SelectUnits1(0,&DAT_1002f408,0);
      SelDie(0);
    }
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f490,0);
    if (3 < iVar3) {
      SetTrigg(0x26,0);
      SelectUnits(&DAT_1002f420,0);
      SelSendAndKill(1,&DAT_1002f490,0,0);
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_1002f498,0);
  if (0 < iVar3) {
    GetTotalAmount0(&DAT_1002f418);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1002f418,&DAT_1002f498,0);
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_1002f430,0);
  if (0 < iVar3) {
    GetTotalAmount0(&DAT_1002f4a8);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1002f4a8,&DAT_1002f430,0);
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_1002f428,0);
  if (0 < iVar3) {
    GetTotalAmount0(&DAT_1002f4c0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1002f4c0,&DAT_1002f428,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x25);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount1(&DAT_1002f4a0,0);
      GetTotalAmount0(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        GetTotalAmount1(&DAT_1002f4a0,0);
        if (0 < iVar3) {
          SetTrigg(2,0);
          ShowPage("#PAGE2");
        }
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1002f4d8,0);
    if (0 < iVar3) {
      SetTrigg(3,0);
      ShowPage("#PAGE3");
      AddResource(0,3,20000);
      AddResource(0,1,2000);
      AddResource(0,5,5000);
      AddResource(0,4,5000);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f4c8);
    if (iVar3 == 0) {
      SetTrigg(4,0);
      ShowPage("#PAGE4");
      ShowVictory();
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3e0);
    if (iVar3 == 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
      LooseGame();
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_1002f448,&DAT_1002f3e0);
    if (0 < iVar3) {
      GetTotalAmount0(&DAT_1002f4b8);
      if (0 < iVar3) {
        SetTrigg(6,0);
        ShowPage("#PAGE6");
        SelectUnits(&DAT_1002f4b8,0);
        SelChangeNation(4,0);
      }
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount0(&DAT_1002f458,0);
      if (iVar3 < 1) {
        iVar3 = GetUnitsAmount0(&DAT_1002f460,0);
        if (iVar3 < 1) {
          iVar3 = GetUnitsAmount0(&DAT_1002f460,0);
          if (iVar3 < 1) {
            iVar3 = GetUnitsAmount0(&DAT_1002f468,0);
            if (iVar3 < 1) {
              iVar3 = GetUnitsAmount0(&DAT_1002f470,0);
              if (iVar3 < 1) {
                iVar3 = GetUnitsAmount0(&DAT_1002f478,0);
                if (iVar3 < 1) {
                  iVar3 = GetUnitsAmount0(&DAT_1002f480,0);
                  if (iVar3 < 1) {
                    iVar3 = GetUnitsAmount0(&DAT_1002f488,0);
                    if (iVar3 < 1) goto LAB_100026e1;
                  }
                }
              }
            }
          }
        }
      }
      SetTrigg(0x32,0);
      ShowPage("#PAGE2A");
    }
  }
LAB_100026e1:
  uStack_8 = 0x100026ee;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

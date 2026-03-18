#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_100303e0 = 0;
long long DAT_100303e8 = 0;
long long DAT_100303f0 = 0;
long long DAT_100303f8 = 0;
long long DAT_10030400 = 0;
long long DAT_10030408 = 0;
long long DAT_10030410 = 0;
long long DAT_10030418 = 0;
long long DAT_10030420 = 0;
long long DAT_10030428 = 0;
long long DAT_10030430 = 0;
long long DAT_10030438 = 0;
long long DAT_10030440 = 0;
long long DAT_10030448 = 0;
long long DAT_10030450 = 0;
long long DAT_10030458 = 0;
long long DAT_10030460 = 0;
long long DAT_10030468 = 0;
long long DAT_10030470 = 0;
long long DAT_10030478 = 0;
long long DAT_10030480 = 0;
long long DAT_10030488 = 0;
long long DAT_10030490 = 0;
long long DAT_10030498 = 0;
long long DAT_100304a0 = 0;
long long DAT_100304a8 = 0;
long long DAT_100304b0 = 0;
long long DAT_100304b8 = 0;
long long DAT_100304c0 = 0;
long long DAT_100304c8 = 0;
long long DAT_100304d0 = 0;
long long DAT_100304d8 = 0;
long long DAT_100304e0 = 0;
long long DAT_100304e8 = 0;
long long DAT_100304f0 = 0;
long long DAT_100304f8 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10030458,"Zone1");
  RegisterZone(&DAT_10030460,"Zone2");
  RegisterZone(&DAT_10030468,"Zone3");
  RegisterZone(&DAT_10030470,"Zone4");
  RegisterZone(&DAT_10030478,"Zone5");
  RegisterZone(&DAT_10030488,"Zone6");
  RegisterZone(&DAT_10030490,"Zone7");
  RegisterZone(&DAT_10030498,"Zone8");
  RegisterZone(&DAT_100304a0,"Zone9");
  RegisterZone(&DAT_10030438,"Zone10");
  RegisterZone(&DAT_10030430,"Zone11");
  RegisterZone(&DAT_10030448,"Zone12");
  RegisterZone(&DAT_10030440,"Zone13");
  RegisterZone(&DAT_10030450,"Zone14");
  RegisterUnits(&DAT_100303e8,"Group1");
  RegisterUnits(&DAT_100303f8,"Group2");
  RegisterUnits(&DAT_100304e0,"Group2a");
  RegisterUnits(&DAT_100303f0,"Group3");
  RegisterUnits(&DAT_10030408,"Group4");
  RegisterUnits(&DAT_100304e8,"Group4a");
  RegisterUnits(&DAT_10030400,"Group5");
  RegisterUnits(&DAT_100304f0,"Group5a");
  RegisterUnits(&DAT_10030418,"Group6");
  RegisterUnits(&DAT_10030410,"Group7");
  RegisterUnits(&DAT_10030428,"Group8");
  RegisterUnits(&DAT_10030420,"Group9");
  RegisterUnits(&DAT_100304a8,"Group10");
  RegisterUnits(&DAT_100304d0,"Group11");
  RegisterUnits(&DAT_100304d8,"Group12");
  RegisterUnits(&DAT_100304c0,"Group13");
  RegisterUnits(&DAT_100304c8,"Group14");
  RegisterUnits(&DAT_100304b8,"Group16");
  RegisterVar(&DAT_100304b0,8);
  RegisterUnitType(&DAT_100304f8,"Sclad2(fr)");
  RegisterUnitType(&DAT_100303e0,"Konni_Ricar(fr)");
  RegisterFormation(&DAT_10030480,"#LINEMORB15");
  SetPlayerName(1,"SPAIN");
  SetPlayerName(4,"ALLIES");
  uStack_8 = 0x100014e4;
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
    ChangeFriends(0,0x11);
    ChangeFriends(4,0x11);
    SetResource(0,3,5000);
    SetResource(0,1,5000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,15000);
    SetResource(0,4,15000);
    ShowPage("#PAGE1");
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
    DisableMission(0x4a);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4d);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030458,&DAT_100303e8);
    if (0 < iVar3) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      EnableMission(0x43);
      EnableMission(0x42);
      SelectUnits(&DAT_100303f8,0);
      SelChangeNation(4,0);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10030438,0);
    if (0 < iVar3) {
      SetTrigg(0x28,0);
      SelectUnits(&DAT_100304a8,0);
      SelOpenGates(5);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount0(&DAT_10030438,0);
    if (iVar3 == 0) {
      SetTrigg(0x28,0);
      SelectUnits(&DAT_100304a8,0);
      SelCloseGates(5);
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10030430,0);
    if (0 < iVar3) {
      SetTrigg(0x29,0);
      SelectUnits(&DAT_100304d0,0);
      SelOpenGates(5);
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount0(&DAT_10030430,0);
    if (iVar3 == 0) {
      SetTrigg(0x29,0);
      SelectUnits(&DAT_100304d0,0);
      SelCloseGates(5);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10030448,0);
    if (0 < iVar3) {
      SetTrigg(0x2a,0);
      SelectUnits(&DAT_100304d8,0);
      SelOpenGates(5);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount0(&DAT_10030448,0);
    if (iVar3 == 0) {
      SetTrigg(0x2a,0);
      SelectUnits(&DAT_100304d8,0);
      SelCloseGates(5);
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_10030468,0);
  if ((0 < iVar3) && (GetTotalAmount0(&DAT_100303f0), 0 < iVar3)) {
    AttackEnemyInZone(&DAT_100303f0,&DAT_10030468,0);
  }
  uVar1 = Trigg(3);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100303f0), iVar3 == 0)) {
    SetTrigg(3,0);
    ShowPage("#PAGE3");
    DisableMission(0x43);
    EnableMission(0x45);
    AddResource(0,3,20000);
  }
  iVar3 = GetUnitsAmount0(&DAT_10030470,0);
  if ((0 < iVar3) && (GetTotalAmount0(&DAT_10030408), 0 < iVar3)) {
    AttackEnemyInZone(&DAT_10030408,&DAT_10030470,0);
  }
  uVar1 = Trigg(0x32);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10030408), iVar3 < 7)) {
    SetTrigg(0x32,0);
    ClearSelection(1);
    SelectUnits1(1,&DAT_100304e8,0);
    SelDie(1);
    ClearSelection(0);
    SelectUnits1(0,&DAT_100304e8,0);
    SelDie(0);
  }
  uVar1 = Trigg(4);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10030408), iVar3 == 0)) {
    SetTrigg(4,0);
    ShowPage("#PAGE4");
    DisableMission(0x46);
    EnableMission(0x47);
  }
  iVar3 = GetUnitsAmount0(&DAT_10030478,0);
  if ((0 < iVar3) && (GetTotalAmount0(&DAT_10030400), 0 < iVar3)) {
    AttackEnemyInZone(&DAT_10030400,&DAT_10030478,0);
  }
  uVar1 = Trigg(5);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10030400), iVar3 == 0)) {
    SetTrigg(5,0);
    ShowPage("#PAGE5");
    DisableMission(0x42);
    EnableMission(0x44);
    GetTotalAmount0(&DAT_100304f0);
    if (0 < iVar3) {
      SelectUnits(&DAT_100304f0,0);
      SelChangeNation(1,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(5);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(2);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0x14,0);
          ShowPage("#PAGE20");
        }
      }
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_10030488,0);
  if ((0 < iVar3) && (GetTotalAmount0(&DAT_10030418), 0 < iVar3)) {
    AttackEnemyInZone(&DAT_10030418,&DAT_10030488,0);
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10030490,0);
    if (0 < iVar3) {
      SetTrigg(6,0);
      ShowPage("#PAGE6");
      ClearSelection(1);
      SelectUnits1(1,&DAT_10030410,0);
      SelChangeNation(1,0);
      SelectUnits(&DAT_10030428,0);
      SelSendAndKill(1,&DAT_10030488,0,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030440,&DAT_10030410);
    GetTotalAmount0(&DAT_10030410);
    if ((iVar2 / 2 < iVar3) && (GetTotalAmount0(&DAT_10030410), 8 < iVar3)) {
      SetTrigg(7,0);
      ShowPage("#PAGE7");
      DisableMission(0x4b);
      EnableMission(0x4c);
      ClearSelection(0);
      SelectUnits1(0,&DAT_10030410,0);
      SelChangeNation(0,4);
      SelectUnits(&DAT_100304c0,0);
      SelChangeNation(4,0);
    }
  }
  uVar1 = Trigg(8);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10030410), iVar3 < 9)) {
    SetTrigg(8,0);
    ShowPage("#PAGE8");
    LooseGame();
  }
  iVar3 = GetUnitsAmount0(&DAT_100304a0,0);
  if ((0 < iVar3) && (GetTotalAmount0(&DAT_10030420), 0 < iVar3)) {
    AttackEnemyInZone(&DAT_10030420,&DAT_100304a0,0);
  }
  uVar1 = Trigg(9);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10030420), iVar3 < 4)) {
    SetTrigg(9,0);
    ShowPage("#PAGE9");
  }
  uVar1 = Trigg(10);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100303e8), iVar3 == 0)) {
    SetTrigg(10,0);
    iVar3 = GetResource(0,3);
    if (iVar3 < 1) {
      ShowPage("#PAGE10A");
    }
    else {
      ShowPage("#PAGE10");
    }
    LooseGame();
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(5);
      if ((uVar1 & 0xff) == 0) {
        iVar3 = GetUnitsAmount1(&DAT_10030458,&DAT_100303e8);
        if (0 < iVar3) {
          SetTrigg(0xb,0);
          ShowPage("#PAGE11");
          SelectUnits(&DAT_100304e0,0);
          SelChangeNation(4,0);
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    CreateObject0(&DAT_100304b0,&DAT_10030480,&DAT_100303e0,4,&DAT_10030460,0);
    SelectUnits(&DAT_100304b0,0);
    SelSendTo(4,&DAT_10030498,0,0);
  }
  uVar1 = TimerDone(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_10030498,&DAT_100304b0);
      if (0 < iVar3) {
        SetTrigg(0xc,0);
        ShowPage("#PAGE12");
        RunTimer(2,1000);
      }
    }
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_10030498,&DAT_100304b0);
      if (0 < iVar3) {
        iVar3 = GetUnitsAmount1(&DAT_10030498,&DAT_100303e8);
        if (0 < iVar3) {
          SetTrigg(0xd,0);
          ShowPage("#PAGE13");
          SelectUnits(&DAT_100304b0,0);
          SelChangeNation(4,0);
        }
      }
    }
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits(&DAT_100304b0,0);
        SelSendAndKill(4,&DAT_10030498,0,0);
      }
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_10030450,0);
  if ((0 < iVar3) && (GetTotalAmount0(&DAT_100304c8), 0 < iVar3)) {
    AttackEnemyInZone(&DAT_100304c8,&DAT_10030450,0);
  }
  uVar1 = Trigg(0xe);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount1(&DAT_100304f8,0), 0 < iVar3)) {
    SetTrigg(0xe,0);
    ShowPage("#PAGE14");
    DisableMission(0x48);
    EnableMission(0x4a);
    RunTimer(1,5000);
    AddResource(0,4,15000);
    AddResource(0,5,15000);
    AddResource(0,1,5000);
    AddResource(0,3,20000);
  }
  uVar1 = Trigg(0xe);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100304b8), iVar3 == 0)) {
    SetTrigg(0xe,0);
    ShowPage("#PAGE14A");
    DisableMission(0x48);
    EnableMission(0x4a);
    RunTimer(1,5000);
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(5);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(7);
          if ((uVar1 & 0xff) == 0) {
            uVar1 = Trigg(9);
            if ((uVar1 & 0xff) == 0) {
              uVar1 = Trigg(0xe);
              if ((uVar1 & 0xff) == 0) {
                SetTrigg(0xf,0);
                ShowPage("#PAGE15");
                ShowVictory();
              }
            }
          }
        }
      }
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_10030458,&DAT_100303e8);
  if (0 < iVar3) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(3);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(5);
          if ((uVar1 & 0xff) == 0) {
            uVar1 = Trigg(0x10);
            if ((uVar1 & 0xff) != 0) {
              SetTrigg(0x10,0);
              ShowPage("#PAGE16");
              EnableMission(0x46);
            }
            goto LAB_10002e73;
          }
        }
      }
      uVar1 = Trigg(0xe);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(3);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(2);
          if ((uVar1 & 0xff) == 0) {
            uVar1 = Trigg(4);
            if ((uVar1 & 0xff) == 0) {
              uVar1 = Trigg(0x11);
              if ((uVar1 & 0xff) != 0) {
                SetTrigg(0x11,0);
                ShowPage("#PAGE17");
                EnableMission(0x48);
              }
              goto LAB_10002e73;
            }
          }
        }
      }
      uVar1 = Trigg(7);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0xe);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(3);
          if ((uVar1 & 0xff) == 0) {
            uVar1 = Trigg(2);
            if ((uVar1 & 0xff) == 0) {
              uVar1 = Trigg(4);
              if ((uVar1 & 0xff) == 0) {
                uVar1 = Trigg(0x12);
                if ((uVar1 & 0xff) != 0) {
                  SetTrigg(0x12,0);
                  ShowPage("#PAGE18");
                  EnableMission(0x4b);
                }
                goto LAB_10002e73;
              }
            }
          }
        }
      }
      uVar1 = Trigg(9);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(7);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(0xe);
          if ((uVar1 & 0xff) == 0) {
            uVar1 = Trigg(3);
            if ((uVar1 & 0xff) == 0) {
              uVar1 = Trigg(2);
              if ((uVar1 & 0xff) == 0) {
                uVar1 = Trigg(4);
                if ((uVar1 & 0xff) == 0) {
                  uVar1 = Trigg(0x13);
                  if ((uVar1 & 0xff) != 0) {
                    SetTrigg(0x13,0);
                    ShowPage("#PAGE19");
                    EnableMission(0x4d);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10002e73:
  uStack_8 = 0x10002e80;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

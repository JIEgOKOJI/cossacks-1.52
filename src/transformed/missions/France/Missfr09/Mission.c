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
int DAT_10030490 = 0;
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
long long DAT_10030500 = 0;
long long DAT_10030508 = 0;
long long DAT_10030510 = 0;
long long DAT_10030518 = 0;
long long DAT_10030520 = 0;
long long DAT_10030528 = 0;
long long DAT_10030530 = 0;
long long DAT_10030538 = 0;
long long DAT_10030540 = 0;
long long DAT_10030548 = 0;
long long DAT_10030550 = 0;
long long DAT_10030558 = 0;
long long DAT_10030560 = 0;
long long DAT_10030568 = 0;
long long DAT_10030570 = 0;
long long DAT_10030578 = 0;
long long DAT_10030580 = 0;
long long DAT_10030588 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10030498,"Zone1");
  RegisterZone(&DAT_100304a0,"Zone2");
  RegisterZone(&DAT_100304a8,"Zone3");
  RegisterZone(&DAT_100304b0,"Zone4");
  RegisterZone(&DAT_100304b8,"Zone5");
  RegisterZone(&DAT_100304c0,"Zone6");
  RegisterZone(&DAT_10030480,"Zone6a");
  RegisterZone(&DAT_100304c8,"Zone7");
  RegisterZone(&DAT_100304d0,"Zone8");
  RegisterZone(&DAT_100304d8,"Zone9");
  RegisterZone(&DAT_10030438,"Zone10");
  RegisterZone(&DAT_10030430,"Zone11");
  RegisterZone(&DAT_10030448,"Zone12");
  RegisterZone(&DAT_10030440,"Zone13");
  RegisterZone(&DAT_10030458,"Zone14");
  RegisterZone(&DAT_10030450,"Zone15");
  RegisterZone(&DAT_10030468,"Zone16");
  RegisterZone(&DAT_10030460,"Zone17");
  RegisterZone(&DAT_10030478,"Zone18");
  RegisterZone(&DAT_10030470,"Zone19");
  RegisterUnits(&DAT_100303e8,"Group1");
  RegisterUnits(&DAT_100303f8,"Group2");
  RegisterUnits(&DAT_100303f0,"Group3");
  RegisterUnits(&DAT_10030408,"Group4");
  RegisterUnits(&DAT_10030400,"Group5");
  RegisterUnits(&DAT_10030418,"Group6");
  RegisterUnits(&DAT_10030410,"Group7");
  RegisterUnits(&DAT_10030428,"Group8");
  RegisterUnits(&DAT_10030420,"Group9");
  RegisterUnits(&DAT_100304e0,"Group10");
  RegisterUnits(&DAT_10030548,"Group11");
  RegisterUnits(&DAT_10030550,"Group12");
  RegisterUnits(&DAT_10030530,"Group13");
  RegisterUnits(&DAT_100303e0,"Group13a");
  RegisterUnits(&DAT_10030540,"Group14");
  RegisterUnits(&DAT_10030518,"Group15");
  RegisterUnits(&DAT_10030528,"Group16");
  RegisterUnits(&DAT_100304f0,"Group17");
  RegisterUnits(&DAT_10030508,"Group18");
  RegisterUnits(&DAT_10030578,"Group19");
  RegisterUnits(&DAT_10030538,"Group20");
  RegisterUnits(&DAT_10030510,"Group21");
  RegisterUnits(&DAT_10030520,"Group22");
  RegisterUnits(&DAT_100304e8,"Group23");
  RegisterUnits(&DAT_10030500,"Group24");
  RegisterUnits(&DAT_10030570,"Group25");
  RegisterUnits(&DAT_10030580,"Group26");
  RegisterUnits(&DAT_10030560,"Group27");
  RegisterUnits(&DAT_10030568,"Group28");
  RegisterUnits(&DAT_10030558,"Group29");
  RegisterUnits(&DAT_100304f8,"Group30");
  RegisterVar(&DAT_10030490,4);
  RegisterUnitType(&DAT_10030588,"Sclad2(fr)");
  RegisterUnitType(&DAT_10030488,"artileri_depo_FR(fr)");
  ChangeFriends(0,0x19);
  ChangeFriends(3,1);
  SetPlayerName(1,"REBELS");
  SetPlayerName(3,"DWELLERS");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"ROBBERS");
  uStack_8 = 0x1000173a;
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
    SetResource(0,3,20000);
    SetResource(0,1,2000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,10000);
    SetResource(0,4,10000);
    ShowPage("#PAGE1");
    SelectUnits(&DAT_10030538,0);
    SelectUnits(&DAT_10030510,1);
    Patrol(1,&DAT_10030458,0);
    DAT_10030490 = 0;
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
  }
  uVar1 = Trigg(0x46);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030498,0);
    if (0 < iVar2) {
      SetTrigg(0x46,0);
      SelectUnits(&DAT_100303f8,0);
      SelSendAndKill(1,&DAT_10030498,0,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_100303f8);
    if (iVar2 == 3) {
      iVar2 = GetUnitsAmount1(&DAT_10030498,&DAT_100303f8);
      if (0 < iVar2) {
        SetTrigg(2,0);
        ShowPage("#PAGE2");
      }
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    GetTotalAmount0(&DAT_100303f8);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_10030498,0);
      if (0 < iVar2) {
        AttackEnemyInZone(&DAT_100303f8,&DAT_10030498,0);
      }
    }
  }
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (1000 < iVar2) {
      SetTrigg(0x47,0);
      SelectUnits(&DAT_10030410,0);
      SelSendAndKill(1,&DAT_10030480,0,0);
    }
  }
  GetTotalAmount0(&DAT_10030400);
  if (0 < iVar2) {
    iVar2 = GetUnitsAmount1(&DAT_10030480,&DAT_10030410);
    if (0 < iVar2) {
      SelectUnits(&DAT_10030410,0);
      SelAttackGroup(1,&DAT_10030400);
    }
  }
  uVar1 = Trigg(0x48);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030400);
    if (iVar2 == 0) {
      GetTotalAmount0(&DAT_10030410);
      if (0 < iVar2) {
        SetTrigg(0x48,0);
        SelectUnits(&DAT_10030410,0);
        SelSendAndKill(1,&DAT_10030440,0,0);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100304a8,&DAT_100303e8);
    if (0 < iVar2) {
      SetTrigg(3,0);
      ShowPage("#PAGE3");
      SelectUnits(&DAT_10030418,0);
      SelSendTo(4,&DAT_100304d8,0xb4,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x2b);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_100304a8,0);
      if (0 < iVar2) {
        SetTrigg(0x2b,0);
        SelectUnits(&DAT_100303f0,0);
        SelOpenGates(4);
      }
    }
    uVar1 = Trigg(0x2b);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_100304a8,0);
      if (iVar2 == 0) {
        SetTrigg(0x2b,1);
        SelectUnits(&DAT_100303f0,0);
        SelCloseGates(4);
      }
    }
    uVar1 = Trigg(0x2c);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_100304b0,0);
      if (0 < iVar2) {
        SetTrigg(0x2c,0);
        SelectUnits(&DAT_10030408,0);
        SelOpenGates(4);
      }
    }
    uVar1 = Trigg(0x2c);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_100304b0,0);
      if (iVar2 == 0) {
        SetTrigg(0x2c,1);
        SelectUnits(&DAT_10030408,0);
        SelCloseGates(4);
      }
    }
    uVar1 = Trigg(0x2d);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_100304b8,0);
      if (0 < iVar2) {
        SetTrigg(0x2d,0);
        SelectUnits(&DAT_10030400,0);
        SelOpenGates(4);
      }
    }
    uVar1 = Trigg(0x2d);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_100304b8,0);
      if (iVar2 == 0) {
        SetTrigg(0x2d,1);
        SelectUnits(&DAT_10030400,0);
        SelCloseGates(4);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100304d8,&DAT_100303e8);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount1(&DAT_100304d8,&DAT_10030418);
      if (0 < iVar2) {
        SetTrigg(4,0);
        ShowPage("#PAGE4");
        ShowPage("#PAGE4A");
        ShowPage("#PAGE4B");
        EnableMission(0x42);
      }
    }
  }
  iVar2 = GetUnitsAmount0(&DAT_100304d0,0);
  if (0 < iVar2) {
    GetTotalAmount0(&DAT_100304e0);
    if (1 < iVar2) {
      AttackEnemyInZone(&DAT_100304e0,&DAT_100304d0,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030420);
    if (iVar2 == 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
      DisableMission(0x42);
      EnableMission(0x43);
      GetTotalAmount0(&DAT_10030428);
      if (0 < iVar2) {
        SelectUnits(&DAT_10030428,0);
        SelDie(1);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030578);
    if (iVar2 == 0) {
      SetTrigg(6,0);
      ShowPage("#PAGE6");
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030418);
    if (iVar2 == 0) {
      SetTrigg(7,0);
      ShowPage("#PAGE7");
      uVar1 = Trigg(8);
      if ((uVar1 & 0xff) == 0) {
        ClearSelection(0);
        SelectUnits(&DAT_10030530,0);
        SelChangeNation(0,5);
        ClearSelection(4);
        SelectUnits1(4,&DAT_100303e0,0);
        SelChangeNation(4,5);
      }
      else {
        ClearSelection(4);
        SelectUnits(&DAT_100303e0,0);
        SelChangeNation(4,5);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(5);
      if ((uVar1 & 0xff) == 0) {
        iVar2 = GetUnitsAmount1(&DAT_100304d8,&DAT_100303e8);
        if (0 < iVar2) {
          SetTrigg(8,0);
          ShowPage("#PAGE8");
          RunTimer(2,0x32);
        }
      }
    }
  }
  uVar1 = TimerDone(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100304d8,&DAT_100303e8);
    if (0 < iVar2) {
      ShowPage("#PAGE8A");
      FreeTimer(2);
      ClearSelection(4);
      SelectUnits(&DAT_10030530,0);
      SelectUnits(&DAT_10030550,1);
      SelChangeNation(4,0);
      RunTimer(3,1000);
    }
  }
  uVar1 = TimerDoneFirst(3);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_10030488,0);
    if (iVar2 == 0) {
      ShowPage("#PAGE8B");
      EnableMission(0x44);
    }
  }
  uVar1 = Trigg(0x35);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_10030488,0);
    if (0 < iVar2) {
      SetTrigg(0x35,0);
      DisableMission(0x44);
      EnableMission(0x45);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_100303e8);
    if (iVar2 == 0) {
      SetTrigg(9,0);
      iVar2 = GetResource(0,3);
      if (iVar2 < 1) {
        ShowPage("#PAGE9A");
      }
      else {
        ShowPage("#PAGE9");
      }
      LooseGame();
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030430,0);
    if (3 < iVar2) {
      GetTotalAmount0(&DAT_100304f0);
      if (0 < iVar2) {
        SetTrigg(10,0);
        ShowPage("#PAGE10");
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030430,0);
    if (0 < iVar2) {
      GetTotalAmount0(&DAT_100304f0);
      if (0 < iVar2) {
        AttackEnemyInZone(&DAT_100304f0,&DAT_10030430,0);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030448,0);
    if (0 < iVar2) {
      GetTotalAmount0(&DAT_100304f0);
      if (iVar2 == 0) {
        SetTrigg(0xb,0);
        ShowPage("#PAGE11");
        AddResource(0,1,300);
        AddResource(0,3,2000);
        AddResource(0,4,500);
        AddResource(0,5,500);
      }
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030548);
    if (iVar2 == 0) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE12");
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030438,&DAT_100303e8);
      if (0 < iVar2) {
        SetTrigg(0xd,0);
        ShowPage("#PAGE13");
        AddResource(0,3,20000);
        ClearSelection(3);
        SelectUnits(&DAT_10030528,0);
        SelChangeNation(3,0);
      }
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030540);
    if (iVar2 == 0) {
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0xe,0);
        ShowPage("#PAGE14");
        ClearSelection(1);
        SelectUnits(&DAT_10030518,0);
        SelDie(1);
      }
    }
  }
  GetTotalAmount1(&DAT_10030588,0);
  if (iVar2 < DAT_10030490) {
    GetTotalAmount1(&DAT_10030588,0);
  }
  GetTotalAmount1(&DAT_10030588,0);
  if (DAT_10030490 < iVar2) {
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x10);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x11);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x11,0);
          ShowPage("#PAGE17");
          AddResource(0,1,5000);
          AddResource(0,4,6000);
          AddResource(0,5,6000);
          AddResource(0,0,40000);
        }
      }
      else {
        SetTrigg(0x10,0);
        ShowPage("#PAGE16");
        AddResource(0,1,5000);
        AddResource(0,3,20000);
      }
    }
    else {
      SetTrigg(0xf,0);
      ShowPage("#PAGE15");
      AddResource(0,1,3000);
      AddResource(0,4,5000);
      AddResource(0,5,5000);
    }
    GetTotalAmount1(&DAT_10030588,0);
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030570);
    if (iVar2 == 0) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE18");
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030580);
    if (iVar2 == 0) {
      SetTrigg(0x13,0);
      ShowPage("#PAGE19");
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030560);
    if (iVar2 == 0) {
      SetTrigg(0x14,0);
      ShowPage("#PAGE20");
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030568);
    if (iVar2 == 0) {
      SetTrigg(0x15,0);
      ShowPage("#PAGE21");
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030450,&DAT_100303e8);
      if (0 < iVar2) {
        SetTrigg(0x16,0);
        ShowPage("#PAGE22");
        AddResource(0,3,30000);
        ClearSelection(3);
        SelectUnits(&DAT_10030520,0);
        SelChangeNation(3,0);
      }
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030468,&DAT_100303e8);
      if (0 < iVar2) {
        GetTotalAmount0(&DAT_100304e8);
        if (0 < iVar2) {
          SetTrigg(0x17,0);
          ShowPage("#PAGE23");
          ClearSelection(3);
          SelectUnits(&DAT_100304e8,0);
          SelChangeNation(3,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030460,0);
    if (3 < iVar2) {
      GetTotalAmount0(&DAT_10030500);
      if (0 < iVar2) {
        SetTrigg(0x18,0);
        ShowPage("#PAGE24");
      }
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030460,0);
    if (0 < iVar2) {
      GetTotalAmount0(&DAT_10030500);
      if (0 < iVar2) {
        AttackEnemyInZone(&DAT_10030500,&DAT_10030460,0);
      }
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10030500);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030478,0);
      if (0 < iVar2) {
        SetTrigg(0x19,0);
        ShowPage("#PAGE25");
        AddResource(0,1,0x5dc);
      }
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_100304f8);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030470,0);
      if (0 < iVar2) {
        GetTotalAmount0(&DAT_10030558);
        if (0 < iVar2) {
          SetTrigg(0x1a,0);
          ShowPage("#PAGE26");
          SelectUnits(&DAT_10030558,0);
          SelChangeNation(1,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x12);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(0x13);
          if ((uVar1 & 0xff) == 0) {
            uVar1 = Trigg(0x14);
            if ((uVar1 & 0xff) == 0) {
              uVar1 = Trigg(0x15);
              if ((uVar1 & 0xff) == 0) {
                SetTrigg(0x1b,0);
                ShowPage("#PAGE27");
                ShowVictory();
              }
            }
          }
        }
      }
    }
  }
  uStack_8 = 0x10003486;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

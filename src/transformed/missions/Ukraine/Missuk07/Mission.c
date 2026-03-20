#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

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
unsigned char DAT_10030428[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_10030430 (*(long long *)((char *)DAT_10030428 + 0x8))
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
long long DAT_10030500 = 0;
long long DAT_10030508 = 0;
long long DAT_10030510 = 0;
long long DAT_10030518 = 0;
long long DAT_10030520 = 0;
long long DAT_10030528 = 0;
long long DAT_10030530 = 0;
long long DAT_10030538 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10030430,"Zone1");
  RegisterZone(&DAT_10030438,"Zone2");
  RegisterZone(&DAT_10030440,"Zone3");
  RegisterZone(&DAT_10030448,"Zone4");
  RegisterZone(&DAT_10030450,"Zone5");
  RegisterZone(&DAT_10030458,"Zone6");
  RegisterZone(&DAT_10030460,"Zone7");
  RegisterZone(&DAT_10030468,"Zone8");
  RegisterUnits(&DAT_100303e0,"Group1");
  RegisterUnits(&DAT_100303f0,"Group2");
  RegisterUnits(&DAT_100303e8,"Group3");
  RegisterUnits(&DAT_10030400,"Group4");
  RegisterUnits(&DAT_100303f8,"Group5");
  RegisterUnits(&DAT_10030410,"Group6");
  RegisterUnits(&DAT_10030408,"Group7");
  RegisterUnits(&DAT_10030420,"Group8");
  RegisterUnits(&DAT_10030418,"Group9");
  RegisterUnits(&DAT_100304c0,"Group10");
  RegisterUnits(&DAT_10030520,"Group11");
  RegisterUnits(&DAT_10030528,"Group12");
  RegisterUnits(&DAT_10030508,"Group13");
  RegisterUnits(&DAT_10030518,"Group14");
  RegisterUnits(&DAT_100304f0,"Group15");
  RegisterUnits(&DAT_10030500,"Group16");
  RegisterUnits(&DAT_100304d0,"Group17");
  RegisterUnits(&DAT_100304e0,"Group18");
  RegisterUnits(&DAT_10030538,"Group19");
  RegisterUnits(&DAT_10030510,"Group20");
  RegisterUnits(&DAT_100304e8,"Group21");
  RegisterUnits(&DAT_100304f8,"Group22");
  RegisterUnits(&DAT_100304c8,"Group23");
  RegisterUnits(&DAT_100304d8,"Group24");
  RegisterUnits(&DAT_10030530,"Group25");
  RegisterUnitType(&DAT_10030478,"Linkor(PL)");
  RegisterUnitType(&DAT_10030480,"Kozacki_Strelec(UA)");
  RegisterUnitType(&DAT_10030488,"Kreposnoi_evro(PL)");
  RegisterUnitType(&DAT_10030470,"Kres_ukranian(UA)");
  RegisterVar(&DAT_10030428,0xc);
  RegisterUpgrade(&DAT_10030490,"Bashnia(PL)PAUSE");
  RegisterUpgrade(&DAT_10030498,"Bashnia(PL)PAUSE3");
  RegisterUpgrade(&DAT_100304a0,"Bashnia(PL)PAUSE4");
  RegisterUpgrade(&DAT_100304a8,"Bashnia(PL)PAUSE5");
  RegisterUpgrade(&DAT_100304b0,"Bashnia(PL)PAUSE6");
  RegisterUpgrade(&DAT_100304b8,"Bashnia(PL)PAUSE7");
  InitialUpgrade("Group13","Bashnia(PL)PAUSE");
  InitialUpgrade("Group13","Bashnia(PL)PAUSE3");
  InitialUpgrade("Group13","Bashnia(PL)PAUSE4");
  InitialUpgrade("Group13","Bashnia(PL)PAUSE5");
  InitialUpgrade("Group13","Bashnia(PL)PAUSE6");
  InitialUpgrade("Group13","Bashnia(PL)PAUSE7");
  InitialUpgrade("Group14","Bashnia(PL)PAUSE");
  InitialUpgrade("Group14","Bashnia(PL)PAUSE3");
  InitialUpgrade("Group14","Bashnia(PL)PAUSE4");
  InitialUpgrade("Group14","Bashnia(PL)PAUSE5");
  InitialUpgrade("Group14","Bashnia(PL)PAUSE6");
  InitialUpgrade("Group14","Bashnia(PL)PAUSE7");
  InitialUpgrade("Group15","Bashnia(PL)PAUSE");
  InitialUpgrade("Group15","Bashnia(PL)PAUSE3");
  InitialUpgrade("Group15","Bashnia(PL)PAUSE4");
  InitialUpgrade("Group15","Bashnia(PL)PAUSE5");
  InitialUpgrade("Group15","Bashnia(PL)PAUSE6");
  InitialUpgrade("Group15","Bashnia(PL)PAUSE7");
  InitialUpgrade("Group16","Bashnia(PL)PAUSE");
  InitialUpgrade("Group16","Bashnia(PL)PAUSE3");
  InitialUpgrade("Group16","Bashnia(PL)PAUSE4");
  InitialUpgrade("Group16","Bashnia(PL)PAUSE5");
  InitialUpgrade("Group16","Bashnia(PL)PAUSE6");
  InitialUpgrade("Group16","Bashnia(PL)PAUSE7");
  SetPlayerName(4,"EAST_BAR");
  SetPlayerName(1,"WEST_BAR");
  SetPlayerName(5,"RUSSIA");
  SetStandartVictory();
  uStack_8 = 0x1000188c;
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
    ChangeFriends(1,0x32);
    ChangeFriends(4,0x32);
    ChangeFriends(5,0x33);
    SetResource(0,3,10000);
    SetResource(0,1,10000);
    SetResource(0,0,10000);
    SetResource(0,2,10000);
    SetResource(0,5,10000);
    SetResource(0,4,10000);
    SetResource(1,3,300000);
    SetResource(1,1,30000);
    SetResource(1,0,30000);
    SetResource(1,2,30000);
    SetResource(1,5,30000);
    SetResource(1,4,30000);
    SetResource(4,3,300000);
    SetResource(4,1,10000);
    SetResource(4,0,10000);
    SetResource(4,2,10000);
    SetResource(4,5,10000);
    SetResource(4,4,10000);
    SetResource(5,3,1000000);
    SetResource(5,1,1000000);
    SetResource(5,0,1000000);
    SetResource(5,2,1000000);
    SetResource(5,5,1000000);
    SetResource(5,4,1000000);
    SelectUnits1(4,&DAT_100304d0,0);
    SelectUnits1(4,&DAT_100304e0,1);
    SelChangeNation(4,5);
    SelectUnits1(4,&DAT_10030538,0);
    SelectUnits1(4,&DAT_10030510,1);
    SelectUnits1(4,&DAT_100304e8,1);
    SelectUnits1(4,&DAT_100304f8,1);
    SelectUnits1(4,&DAT_100304c8,1);
    SelectUnits1(4,&DAT_100304d8,1);
    SelectUnits1(4,&DAT_10030530,1);
    DoNotUseSelInAI(4);
    EnableUnit(1,&DAT_10030478,0);
    EnableUnit(4,&DAT_10030478,0);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE4");
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x62,0);
    StartAI(1,"POLAND.0",2,1,2,1);
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x61,0);
    StartAI(4,"POLAND.0",2,1,2,0);
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030450,0);
      if (0 < iVar2) {
        SetTrigg(0x5d,0);
        ShowPage("#PAGE2");
        SetLightSpot(&DAT_10030448,1,1);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030458,0);
    if (0 < iVar2) {
      SetTrigg(0x5b,0);
      SelectUnits1(4,&DAT_100304d8,0);
      SelSendAndKill(4,&DAT_10030458,0,0);
    }
  }
  uVar1 = Trigg(0x5c);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030448,0);
    if (0 < iVar2) {
      SetTrigg(0x5c,0);
      ShowPage("#PAGE3");
      SelectUnits1(5,&DAT_100304d0,0);
      SelectUnits1(5,&DAT_100304e0,1);
      SelChangeNation(5,0);
      DisableMission(0x45);
      EnableMission(0x46);
      EnableMission(0x47);
    }
  }
  uVar1 = Trigg(0x59);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x59,0);
      SelectUnits1(4,&DAT_10030538,0);
      SelectUnits1(4,&DAT_10030510,1);
      SelectUnits1(4,&DAT_100304e8,1);
      SelectUnits1(4,&DAT_100304f8,1);
      SelectUnits1(4,&DAT_10030530,1);
      SelSendAndKill(4,&DAT_10030448,0,0);
      RunTimer(2,600);
    }
  }
  uVar1 = Trigg(0x58);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x58,0);
      SelectUnits1(4,&DAT_100304c8,0);
      SelAttackGroup(4,&DAT_100304e0);
    }
  }
  uVar1 = Trigg(0x57);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x58);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetTotalAmount0(&DAT_100304e0);
      if (iVar2 == 0) {
        SetTrigg(0x57,0);
        SelectUnits1(4,&DAT_100304c8,0);
        SelAttackGroup(4,&DAT_100304d0);
      }
    }
  }
  uVar1 = Trigg(0x56);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030450,&DAT_100304d0);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_10030450,1);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_10030450,4);
        if (iVar2 == 0) {
          SetTrigg(0x56,0);
          ShowPage("#PAGE5");
          SelectUnits1(0,&DAT_100304d0,0);
          SelectUnits1(0,&DAT_100304e0,1);
          SelChangeNation(0,5);
          SelectUnits1(5,&DAT_100304d0,0);
          SelectUnits1(5,&DAT_100304e0,1);
          SelSendTo(5,&DAT_10030450,0x3c,0);
          AddResource(0,1,50000);
          SetLightSpot(&DAT_10030460,1,2);
          SetLightSpot(&DAT_10030468,1,3);
          ShowPage("#PAGE6");
          DisableMission(0x47);
          EnableMission(0x48);
        }
      }
    }
  }
  uVar1 = Trigg(0x68);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100304d0);
    if (iVar2 == 0) {
      SetTrigg(0x68,0);
      DisableMission(0x45);
      DisableMission(0x46);
      DisableMission(0x47);
      DisableMission(0x48);
    }
  }
  uVar1 = Trigg(0x55);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x56);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetTotalAmount1(&DAT_10030488,4);
      if (iVar2 == 0) {
        iVar2 = GetAmountOfWarriors(4);
        if (iVar2 == 0) {
          SetTrigg(0x55,0);
          ShowPage("#PAGE11");
        }
      }
    }
  }
  uVar1 = Trigg(0x54);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x55);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030450,0);
      if (0 < iVar2) {
        SetTrigg(0x54,0);
        ShowPage("#PAGE12");
        SelectUnits1(5,&DAT_100303f8,0);
        SelectUnits1(5,&DAT_100304c0,1);
        SelOpenGates(5);
      }
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030430,0);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030430,1);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount0(&DAT_10030430,4);
        if (iVar2 < 1) goto LAB_100029a1;
      }
      SetTrigg(0x60,0);
      SelectUnits1(0,&DAT_100303e0,0);
      SelChangeNation(0,1);
      ShowPage("#PAGE13");
      RunTimer(1,300);
    }
  }
LAB_100029a1:
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030438,0);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030438,1);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount0(&DAT_10030438,4);
        if (iVar2 < 1) goto LAB_10002a94;
      }
      SetTrigg(0x5f,0);
      SelectUnits1(0,&DAT_100303f0,0);
      SelChangeNation(0,1);
      ShowPage("#PAGE13");
      RunTimer(1,300);
    }
  }
LAB_10002a94:
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030440,0);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030440,1);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount0(&DAT_10030440,4);
        if (iVar2 < 1) goto LAB_10002b87;
      }
      SetTrigg(0x5e,0);
      SelectUnits1(0,&DAT_100303e8,0);
      SelChangeNation(0,1);
      ShowPage("#PAGE13");
      RunTimer(1,300);
    }
  }
LAB_10002b87:
  uVar1 = Trigg(0x65);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x65,0);
      LooseGame();
    }
  }
  uVar1 = Trigg(0x66);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10030470,0);
    if (iVar2 == 0) {
      iVar2 = GetAmountOfWarriors(0);
      if (iVar2 == 0) {
        SetTrigg(0x66,0);
        ShowPage("#PAGE10");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(0x67);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10030470,1);
    if (iVar2 == 0) {
      iVar2 = GetAmountOfWarriors(1);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount1(&DAT_10030470,4);
        if (iVar2 == 0) {
          iVar2 = GetAmountOfWarriors(4);
          if (iVar2 == 0) {
            SetTrigg(0x67,0);
            ShowPage("#PAGE14");
            ShowVictory();
          }
        }
      }
    }
  }
  uStack_8 = 0x10002d2a;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

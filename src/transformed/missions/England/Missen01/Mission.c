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
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_100304f0,"Zone1");
  RegisterZone(&DAT_100304f8,"Zone2");
  RegisterZone(&DAT_10030500,"Zone3");
  RegisterZone(&DAT_10030508,"Zone4");
  RegisterZone(&DAT_10030510,"Zone5");
  RegisterZone(&DAT_10030518,"Zone6");
  RegisterZone(&DAT_10030520,"Zone7");
  RegisterZone(&DAT_10030528,"Zone8");
  RegisterZone(&DAT_10030530,"Zone9");
  RegisterZone(&DAT_10030498,"Zone10");
  RegisterZone(&DAT_10030490,"Zone11");
  RegisterZone(&DAT_100304a8,"Zone12");
  RegisterZone(&DAT_100304a0,"Zone13");
  RegisterZone(&DAT_10030578,"Zone13a");
  RegisterZone(&DAT_100304b8,"Zone14");
  RegisterZone(&DAT_100304b0,"Zone15");
  RegisterZone(&DAT_100304c8,"Zone16");
  RegisterZone(&DAT_100304c0,"Zone17");
  RegisterZone(&DAT_100304d8,"Zone18");
  RegisterZone(&DAT_100304d0,"Zone19");
  RegisterZone(&DAT_10030450,"Isle1");
  RegisterZone(&DAT_10030458,"Isle2");
  RegisterZone(&DAT_10030460,"Isle3");
  RegisterZone(&DAT_10030468,"Isle4");
  RegisterZone(&DAT_10030470,"Isle5");
  RegisterZone(&DAT_10030478,"Isle6");
  RegisterUnits(&DAT_10030400,"Group0");
  RegisterUnits(&DAT_100303f8,"Group1");
  RegisterUnits(&DAT_10030410,"Group2");
  RegisterUnits(&DAT_10030408,"Group3");
  RegisterUnits(&DAT_10030420,"Group4");
  RegisterUnits(&DAT_10030418,"Group5");
  RegisterUnits(&DAT_10030430,"Group6");
  RegisterUnits(&DAT_10030428,"Group7");
  RegisterUnits(&DAT_10030440,"Group8");
  RegisterUnits(&DAT_10030438,"Group9");
  RegisterUnits(&DAT_10030548,"Group10");
  RegisterUnits(&DAT_10030568,"Group11");
  RegisterUnits(&DAT_10030570,"Group12");
  RegisterUnits(&DAT_10030558,"Group13");
  RegisterUnits(&DAT_10030560,"Group14");
  RegisterUnits(&DAT_10030550,"Group15");
  RegisterUpgrade(&DAT_100303f0,"MAINEN");
  RegisterUnitType(&DAT_10030448,"Fregat(en)");
  RegisterUnitType(&DAT_10030480,"Center_British(en)");
  RegisterUnitType(&DAT_100303e0,"Melnica(en)");
  RegisterUnitType(&DAT_10030538,"PorE(en)");
  RegisterUnitType(&DAT_10030540,"Krestian_Sved(en)");
  RegisterUnitType(&DAT_100303e8,"Rinok(en)");
  RegisterVar(&DAT_100304e8,8);
  RegisterVar(&DAT_10030488,8);
  RegisterVar(&DAT_100304e0,8);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  ChangeFriends(1,0x22);
  ChangeFriends(5,0x22);
  DisableUpgrade(0,&DAT_100303f0);
  SetPlayerName(1,"HOLLAND");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"PIRATES");
  uStack_8 = 0x10001728;
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
uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(100,0);
    SetTrigg(99,0);
    SetResource(0,3,5000);
    SetResource(0,1,1000);
    SetResource(0,0,1000);
    SetResource(0,2,0);
    SetResource(0,5,20000);
    SetResource(0,4,20000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE1A");
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
  }
  iVar3 = GetTotalAmount1(&DAT_10030540,0);
  if (0 < iVar3) {
    uVar1 = Trigg(99);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(99,0);
    }
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x16);
      if (((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount1(&DAT_10030540,0), iVar3 == 0)) {
        iVar3 = GetReadyAmount(&DAT_10030480,0);
        if (iVar3 == 0) {
LAB_10001b67:
          SetTrigg(0x16,0);
          SetTrigg(0xe,0);
          ShowPage("#PAGE22");
          LooseGame();
        }
        else {
          iVar3 = GetResource(3,0);
          if (iVar3 < 100) {
            iVar3 = GetReadyAmount(&DAT_100303e8,0);
            if (iVar3 == 0) goto LAB_10001b67;
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x15);
      if (((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_100303f8), iVar3 == 0)) {
        iVar3 = GetUnitsAmount1(&DAT_10030450,&DAT_10030400);
        if (iVar3 == 0) {
          iVar3 = GetUnitsAmount1(&DAT_10030458,&DAT_10030400);
          if (iVar3 == 0) {
            iVar3 = GetUnitsAmount1(&DAT_10030460,&DAT_10030400);
            if (iVar3 == 0) {
              iVar3 = GetUnitsAmount1(&DAT_10030468,&DAT_10030400);
              if (iVar3 == 0) {
                iVar3 = GetUnitsAmount1(&DAT_10030470,&DAT_10030400);
                if (iVar3 == 0) {
                  iVar3 = GetUnitsAmount1(&DAT_10030478,&DAT_10030400);
                  if (iVar3 == 0) {
                    SetTrigg(0xf,0);
                    ShowPage("#PAGE14");
                    SetTrigg(0xe,0);
                    LooseGame();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x15);
    if (((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_10030410), iVar3 == 1)) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE15");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x18);
  if ((((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_10030420), iVar3 == 0)) &&
     (iVar3 = GetTotalAmount0(&DAT_10030418), iVar3 == 0)) {
    SetTrigg(0x18,0);
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      ShowPage("#PAGE24");
      ShowVictory();
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetReadyAmount(&DAT_10030538,0);
    if (0 < iVar3) {
      SetTrigg(0x14,0);
      ShowPage("#PAGE20");
      uVar1 = Trigg(0x18);
      if ((uVar1 & 0xff) == 0) {
        ShowVictory();
      }
      else {
        ShowPage("#PAGE20A");
        AddResource(0,1,5000);
        DisableMission(0x46);
        EnableMission(0x47);
        EnableMission(0x48);
        uVar1 = Trigg(9);
        if (((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_10030568), 0 < iVar3)) {
          SelectUnits(&DAT_10030568,0);
          SelErase(4);
        }
      }
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_100304d8,0);
  if (0 < iVar3) {
    AttackZoneByArtillery(&DAT_10030560,&DAT_100304d8,0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10030508,&DAT_10030418);
  if (0 < iVar3) {
    SelectUnits(&DAT_10030418,0);
    SelSendAndKill(1,&DAT_10030510,0,0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10030508,&DAT_10030420);
  if (0 < iVar3) {
    SelectUnits(&DAT_10030420,0);
    SelSendAndKill(1,&DAT_10030510,0,0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10030510,&DAT_10030418);
  if (0 < iVar3) {
    SelectUnits(&DAT_10030418,0);
    SelSendAndKill(1,&DAT_10030508,0,0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10030510,&DAT_10030420);
  if (0 < iVar3) {
    SelectUnits(&DAT_10030420,0);
    SelSendAndKill(1,&DAT_10030508,0,0);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100304f0,&DAT_10030410);
    if (iVar3 < 4) {
      SetTrigg(1,0);
      ShowPage("#PAGE2");
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030500,&DAT_10030410);
    if ((0 < iVar3) && (iVar3 = GetTotalAmount0(&DAT_10030430), 0 < iVar3)) {
      uVar1 = Trigg(0x14);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(2,0);
        SelectUnits(&DAT_10030430,0);
        SelSendTo(1,&DAT_10030518,0x5a,2);
        SelSendTo(1,&DAT_10030520,0xb4,2);
        ShowPage("#PAGE3");
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030520,&DAT_10030430);
    if (0 < iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_10030428,0);
      SelSendAndKill(1,&DAT_10030518,0,2);
      SelSendAndKill(1,&DAT_10030500,0xa6,2);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100304f8,&DAT_10030410);
    if (0 < iVar3) {
      SetTrigg(4,0);
      SelectUnits(&DAT_10030408,0);
      SelSendAndKill(5,&DAT_100304f8,0,0);
      ShowPage("#PAGE4");
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100304a8,&DAT_10030410);
    if (0 < iVar3) {
      uVar1 = Trigg(3);
      if (((uVar1 & 0xff) == 0) && (iVar3 = GetTotalAmount0(&DAT_10030430), 0 < iVar3)) {
        SetTrigg(5,0);
        ShowPage("#PAGE5");
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030530,&DAT_10030410);
    if (0 < iVar3) {
      SetTrigg(6,0);
      iVar3 = GetTotalAmount1(&DAT_10030448,0);
      if (0 < iVar3) {
        CreateZoneNearUnit(&DAT_100304e8,&DAT_10030530,&DAT_10030448,0,0x82);
        SetTrigg(0x33,0);
      }
      SelectUnits(&DAT_10030438,0);
      SetStandGround(5,0);
      uVar1 = Trigg(0x33);
      if ((uVar1 & 0xff) == 0) {
        SelSendAndKill(5,&DAT_100304e8,0,0);
      }
      ShowPage("#PAGE6");
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100304a0,&DAT_10030410);
    if (iVar3 < 1) {
      iVar3 = GetUnitsAmount1(&DAT_10030578,&DAT_10030410);
      if (iVar3 < 1) goto LAB_10002699;
    }
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(7,0);
      ShowPage("#PAGE7");
    }
  }
LAB_10002699:
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030498,&DAT_10030410);
    if (0 < iVar3) {
      SetTrigg(8,0);
      ShowPage("#PAGE8");
      SelectUnits(&DAT_10030568,0);
      SelSendTo(4,&DAT_10030498,0,0);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030498,&DAT_10030568);
    if (0 < iVar3) {
      SetTrigg(9,0);
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) == 0) {
        ShowPage("#PAGE12A");
        AddResource(0,1,500);
        SelectUnits(&DAT_10030568,0);
        SelChangeNation(4,0);
      }
      else {
        uVar1 = AskQuestion("#PAGE9");
        if ((uVar1 & 0xff) == 0) {
          ShowPage("#PAGE9B");
          SetTrigg(0xc,0);
          SetTrigg(0x13,0);
        }
        else {
          ShowPage("#PAGE9A");
        }
        SelectUnits(&DAT_10030568,0);
        SelSendAndKill(4,&DAT_10030490,0x5a,0);
      }
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_10030490,&DAT_10030568);
  if (iVar3 < 1) {
    iVar3 = GetUnitsAmount1(&DAT_10030490,&DAT_10030410);
    if (0 < iVar3) goto LAB_1000290e;
  }
  else {
LAB_1000290e:
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xf,0);
      SelectUnits(&DAT_10030548,0);
      SelSendAndKill(5,&DAT_10030490,0xa6,0);
    }
  }
  uVar1 = Trigg(10);
  if (((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_10030408), iVar3 == 0)) {
    SetTrigg(10,0);
    ShowPage("#PAGE10");
    AddResource(0,1,1000);
  }
  uVar1 = Trigg(0xb);
  if (((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_10030438), iVar3 == 0)) {
    SetTrigg(0xb,0);
    ShowPage("#PAGE11");
    AddResource(0,1,2000);
  }
  uVar1 = Trigg(0xc);
  if ((((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_10030548), iVar3 == 0)) &&
     (iVar3 = GetTotalAmount0(&DAT_10030568), 0 < iVar3)) {
    SetTrigg(0xc,0);
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) == 0) {
      ShowPage("#PAGE12");
      ShowPage("#PAGE18");
      AddResource(0,1,500);
      SelectUnits(&DAT_10030568,0);
      SelChangeNation(4,0);
    }
    else {
      ShowPage("#PAGE18A");
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_10030528,0);
  if ((0 < iVar3) && (iVar3 = GetTotalAmount0(&DAT_10030440), 0 < iVar3)) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xd,0);
      uVar1 = Trigg(0x14);
      if ((uVar1 & 0xff) != 0) {
        ShowPage("#PAGE13");
      }
      iVar3 = GetTotalAmount1(&DAT_10030448,0);
      if (0 < iVar3) {
        CreateZoneNearUnit(&DAT_10030488,&DAT_10030528,&DAT_10030448,0,0x82);
        SetTrigg(0x34,0);
      }
      SelectUnits(&DAT_10030440,0);
      uVar1 = Trigg(0x34);
      if ((uVar1 & 0xff) == 0) {
        SelSendAndKill(1,&DAT_10030488,0xa6,0);
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetResource(0,5);
    if (0x22 < iVar3) {
      iVar3 = GetResource(0,4);
      if (0x18 < iVar3) goto LAB_10002d3d;
    }
    SetTrigg(0x10,0);
    ShowPage("#PAGE16");
  }
LAB_10002d3d:
  iVar3 = GetResource(0,5);
  if (0x24 < iVar3) {
    iVar3 = GetResource(0,4);
    if (0x1a < iVar3) {
      SetTrigg(0x10,0);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetResource(0,1);
    if (iVar3 == 0) {
      SetTrigg(0x11,0);
      ShowPage("#PAGE17");
    }
  }
  iVar3 = GetResource(0,1);
  if (5 < iVar3) {
    SetTrigg(0x11,0);
  }
  iVar3 = GetUnitsAmount0(&DAT_100304b8,0);
  if (iVar3 != 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0x13,0);
        ShowPage("#PAGE19");
        AddResource(0,1,10000);
      }
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetReadyAmount(&DAT_100303e0,0);
    if (0 < iVar3) {
      iVar3 = GetReadyAmount(&DAT_10030480,0);
      if (0 < iVar3) {
        SetTrigg(0x15,0);
        ShowPage("#PAGE21");
        DisableMission(0x42);
        DisableMission(0x44);
        EnableMission(0x45);
        EnableMission(0x46);
      }
    }
  }
  uVar1 = Trigg(0x12);
  if (((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount1(&DAT_100303e8,0), 0 < iVar3)) {
    SetTrigg(0x12,0);
    SelectUnits(&DAT_10030558,0);
    SelOpenGates(1);
    RunTimer(1,0x14);
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10030570,0);
    SelSendAndKill(1,&DAT_100304b0,0xb4,0);
  }
  uVar1 = Trigg(0x5c);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_100304b0,&DAT_10030570);
    iVar2 = GetTotalAmount0(&DAT_10030570);
    if (iVar3 == iVar2) {
      SetTrigg(0x5c,0);
      SelectUnits(&DAT_10030570,0);
      Patrol(1,&DAT_100304c0,0);
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(6);
      if ((uVar1 & 0xff) != 0) {
        iVar3 = GetUnitsAmount0(&DAT_100304c8,0);
        if (0 < iVar3) {
          uVar1 = Trigg(0x14);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0x17,0);
            ShowPage("#PAGE23");
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_100304d0,0);
    if (0 < iVar3) {
      SetTrigg(0x21,0);
      ShowPage("#PAGE25");
      iVar3 = GetTotalAmount1(&DAT_10030448,0);
      if (0 < iVar3) {
        CreateZoneNearUnit(&DAT_100304e0,&DAT_100304d0,&DAT_10030448,0,0x82);
        SetTrigg(0x35,0);
      }
      SelectUnits(&DAT_10030550,0);
      uVar1 = Trigg(0x35);
      if ((uVar1 & 0xff) == 0) {
        SelSendAndKill(1,&DAT_100304e0,0,0xa6);
      }
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10030460,&DAT_10030400);
    if (iVar3 < 1) {
      iVar3 = GetUnitsAmount1(&DAT_10030478,&DAT_10030400);
      if (iVar3 < 1) goto LAB_10003397;
    }
    SetTrigg(0x1a,0);
    AddResource(0,2,1000);
    ShowPage("#PAGE26");
  }
LAB_10003397:
  uStack_8 = 0x100033a4;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

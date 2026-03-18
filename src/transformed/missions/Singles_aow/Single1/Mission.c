#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002b12c[] = "Z9";
char DAT_1002b130[] = "Z8";
char DAT_1002b134[] = "Z63";
char DAT_1002b138[] = "Z62";
char DAT_1002b13c[] = "Z61";
char DAT_1002b140[] = "Z7";
char DAT_1002b144[] = "Z5";
char DAT_1002b148[] = "Z4";
char DAT_1002b14c[] = "Z3";
char DAT_1002b150[] = "Z2";
char DAT_1002b154[] = "Z1";
char DAT_1002b158[] = "G12";
char DAT_1002b15c[] = "G11";
char DAT_1002b160[] = "G10";
char DAT_1002b164[] = "G9";
char DAT_1002b168[] = "G8";
char DAT_1002b16c[] = "G7";
char DAT_1002b170[] = "G6";
char DAT_1002b174[] = "G5";
char DAT_1002b178[] = "G4";
char DAT_1002b17c[] = "G3";
char DAT_1002b180[] = "G2";
char DAT_1002b184[] = "G1";
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_10030440,DAT_1002b184);
  RegisterUnits(&DAT_10030448,DAT_1002b180);
  RegisterUnits(&DAT_10030450,DAT_1002b17c);
  RegisterUnits(&DAT_10030458,DAT_1002b178);
  RegisterUnits(&DAT_10030460,DAT_1002b174);
  RegisterUnits(&DAT_10030468,DAT_1002b170);
  RegisterUnits(&DAT_10030470,DAT_1002b16c);
  RegisterUnits(&DAT_10030478,DAT_1002b168);
  RegisterUnits(&DAT_10030480,DAT_1002b164);
  RegisterUnits(&DAT_10030498,DAT_1002b160);
  RegisterUnits(&DAT_100304a8,DAT_1002b15c);
  RegisterUnits(&DAT_100304b0,DAT_1002b158);
  RegisterZone(&DAT_100304c0,DAT_1002b154);
  RegisterZone(&DAT_100304c8,DAT_1002b150);
  RegisterZone(&DAT_100304d0,DAT_1002b14c);
  RegisterZone(&DAT_100304d8,DAT_1002b148);
  RegisterZone(&DAT_100304e0,DAT_1002b144);
  RegisterZone(&DAT_100304e8,DAT_1002b140);
  RegisterZone(&DAT_10030508,DAT_1002b13c);
  RegisterZone(&DAT_10030510,DAT_1002b138);
  RegisterZone(&DAT_10030518,DAT_1002b134);
  RegisterZone(&DAT_100304f0,DAT_1002b130);
  RegisterZone(&DAT_100304f8,DAT_1002b12c);
  RegisterUnitType(&DAT_100303f0,"Russki_Center(RU)");
  RegisterUnitType(&DAT_100303f8,"ruskaia_izba(RU)");
  RegisterUnitType(&DAT_10030400,"Kuznica(RU)");
  RegisterUnitType(&DAT_10030408,"konushnia(RU)");
  RegisterUnitType(&DAT_10030410,"akademia_RU(RU)");
  RegisterUnitType(&DAT_10030418,"Dip_korpus_RU(RU)");
  RegisterUnitType(&DAT_10030420,"Kazarma(RU)");
  RegisterUnitType(&DAT_10030428,"artileri_depo(RU)");
  RegisterUnitType(&DAT_10030430,"Rinok(RU)");
  RegisterUnitType(&DAT_100303e0,"PorR(RU)");
  RegisterUnitType(&DAT_100303e8,"Melnica_tu(TU)");
  RegisterUnitType(&DAT_100304a0,"Ianithar(TU)");
  RegisterUnitType(&DAT_100304b8,"TUrkey_pikiner(TU)");
  RegisterVar(&DAT_10030520,8);
  RegisterVar(&DAT_10030528,8);
  RegisterVar(&DAT_10030530,8);
  RegisterVar(&DAT_10030538,8);
  RegisterVar(&DAT_10030540,8);
  RegisterVar(&DAT_10030548,8);
  RegisterVar(&DAT_10030550,8);
  RegisterVar(&DAT_10030500,8);
  RegisterVar(&DAT_10030438,8);
  RegisterDynGroup(&DAT_10030520);
  RegisterDynGroup(&DAT_10030530);
  RegisterDynGroup(&DAT_10030528);
  RegisterDynGroup(&DAT_10030538);
  RegisterDynGroup(&DAT_10030540);
  RegisterDynGroup(&DAT_10030548);
  RegisterDynGroup(&DAT_10030550);
  RegisterDynGroup(&DAT_10030500);
  RegisterDynGroup(&DAT_10030438);
  RegisterFormation(&DAT_10030490,"#ODIN");
  SetPlayerName(3,"RUSSIA");
  SetPlayerName(1,"RUSSIA");
  SetPlayerName(2,"DWELLERS");
  EnableUnit(0,&DAT_100303f0,0);
  EnableUnit(0,&DAT_100303f8,0);
  EnableUnit(0,&DAT_10030400,0);
  EnableUnit(0,&DAT_10030408,0);
  EnableUnit(0,&DAT_10030410,0);
  EnableUnit(0,&DAT_10030418,0);
  EnableUnit(0,&DAT_10030420,0);
  EnableUnit(0,&DAT_10030428,0);
  EnableUnit(0,&DAT_10030430,0);
  EnableUnit(0,&DAT_100303e0,0);
  EnableUnit(0,&DAT_100303e8,0);
  uStack_8 = 0x100017e5;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x32,0);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,iVar2 * -0x5dc + 10000);
    iVar2 = GetDiff(0);
    SetResource(0,1,iVar2 * -1000 + 6000);
    iVar2 = GetDiff(0);
    SetResource(0,4,iVar2 * -0x514 + 7000);
    iVar2 = GetDiff(0);
    SetResource(0,2,iVar2 * -500 + 6000);
    iVar2 = GetDiff(0);
    SetResource(0,0,iVar2 * -500 + 6000);
    iVar2 = GetDiff(0);
    SetResource(0,5,iVar2 * -0x514 + 7000);
    SetResource(1,3,10000);
    SetResource(1,1,10000);
    SetResource(1,4,10000);
    SetResource(1,2,10000);
    SetResource(1,0,10000);
    SetResource(1,5,10000);
    SetResource(2,3,5000000);
    SetResource(2,1,5000000);
    SetResource(2,4,5000000);
    SetResource(2,2,5000000);
    SetResource(2,0,5000000);
    SetResource(2,5,5000000);
    SetResource(3,3,10000);
    SetResource(3,1,10000);
    SetResource(3,4,10000);
    SetResource(3,2,10000);
    SetResource(3,0,10000);
    SetResource(3,5,10000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    ChangeFriends(0,5);
    ChangeFriends(1,10);
    ChangeFriends(2,5);
    ChangeFriends(3,10);
    InitialUpgrade(DAT_1002b158,"AKA04TU");
    SetLightSpot(&DAT_10030508,1,1);
    SetLightSpot(&DAT_10030510,1,2);
    SetLightSpot(&DAT_10030518,1,3);
    SetLightSpot(&DAT_100304d8,1,5);
    SetStartPoint(&DAT_100304d8);
    RunTimer(1,100);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(2,0);
      SetStartPoint(&DAT_100304f0);
      StartAI(1,"RUSSIA.0",1,0,1,-1);
      StartAI(3,"RUSSIA.0",1,0,1,-1);
      RunTimer(2,20000);
      RunTimer(3,100000);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030508,3);
    if (iVar2 < 1) {
      iVar2 = GetUnitsAmount0(&DAT_10030510,3);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount0(&DAT_10030518,3);
        if (iVar2 < 1) goto LAB_10002081;
      }
    }
    SetTrigg(3,0);
    ShowPage("#PAGE3");
    SelectUnits(&DAT_10030450,0);
    ShowPage("#PAGE7");
    SelChangeNation(2,0);
  }
LAB_10002081:
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030508,1);
    if (iVar2 < 1) {
      iVar2 = GetUnitsAmount0(&DAT_10030510,1);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount0(&DAT_10030518,1);
        if (iVar2 < 1) goto LAB_10002186;
      }
    }
    SetTrigg(3,0);
    ShowPage("#PAGE3");
    SelectUnits(&DAT_10030450,0);
    ShowPage("#PAGE7");
    SelChangeNation(2,0);
    RunTimer(6,0x28);
  }
LAB_10002186:
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x17,0);
      SaveSelectedUnits(0,&DAT_10030438,0);
      SelectUnits(&DAT_100304a8,0);
      ShowPage("#PAGE21");
      SelectUnits(&DAT_100304a8,0);
      SelChangeNation(2,0);
      SelectUnits(&DAT_10030438,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(5);
      if ((uVar1 & 0xff) != 0) {
        SetDestPoint(&DAT_10030468,&DAT_100304e8);
        ProduceUnit(&DAT_10030468,&DAT_100304a0,&DAT_10030520);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030520);
    if (0x19 < iVar2) {
      SetTrigg(5,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(6);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(10);
        if ((uVar1 & 0xff) == 0) {
          SetDestPoint(&DAT_10030470,&DAT_100304e8);
          ProduceUnit(&DAT_10030470,&DAT_100304b8,&DAT_10030530);
        }
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030530);
    if (10 < iVar2) {
      SetTrigg(6,0);
    }
  }
  uVar1 = TimerDone(3);
  if ((uVar1 & 0xff) == 0) goto LAB_10002793;
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0xf,0);
    ShowPage("#PAGE10");
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xb,0);
        SaveSelectedUnits(0,&DAT_10030500,0);
        CreateObject0(&DAT_10030540,&DAT_10030490,&DAT_100304b8,2,&DAT_100304f8,0xf0);
        SelectUnits(&DAT_10030540,0);
        SelSendAndKill(2,&DAT_100304e8,200,0);
        ClearSelection(0);
        RemoveGroup(&DAT_10030540,&DAT_10030548);
        SelectUnits(&DAT_10030500,0);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) == 0) goto LAB_100026f9;
    iVar2 = GetUnitsByNation(&DAT_10030548,2);
    if (iVar2 < 0x65) goto LAB_100026f9;
    SelectUnits(&DAT_10030548,0);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10030548,&DAT_10030550);
    SetTrigg(0xb,0);
    SetTrigg(0xd,0);
    SetTrigg(0xe,0);
  }
  else {
LAB_100026f9:
    SetTrigg(0xb,0);
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsByNation(&DAT_10030550,0);
      if (iVar2 < 0x3c) {
        SetTrigg(0xd,0);
        SetTrigg(0xb,0);
      }
    }
  }
LAB_10002793:
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(6);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(4);
        if ((uVar1 & 0xff) != 0) {
          ShowPage("#PAGE4");
          SetTrigg(4,0);
        }
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(4);
        if ((uVar1 & 0xff) != 0) {
          ShowPage("#PAGE4");
          SetTrigg(4,0);
        }
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_100304c8,&DAT_10030478);
      if (0 < iVar2) {
        SetTrigg(7,0);
        ShowPage("#PAGE5");
        SetLightSpot(&DAT_100304c0,1,4);
        AddResource(0,3,-2000);
        AddResource(0,0,-1000);
        AddResource(0,4,-300);
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(8);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_100304c0,&DAT_10030478);
      if (0 < iVar2) {
        SaveSelectedUnits(0,&DAT_10030438,0);
        SetTrigg(8,0);
        SetTrigg(4,0);
        ShowPage("#PAGE8");
        ShowPage("#PAGE6");
        SelectUnits(&DAT_10030530,0);
        SelChangeNation(2,0);
        RemoveGroup(&DAT_10030530,&DAT_10030538);
        ClearSelection(0);
        SelectUnits(&DAT_10030520,0);
        SelChangeNation(2,0);
        RemoveGroup(&DAT_10030520,&DAT_10030528);
        ClearSelection(0);
        SetTrigg(7,0);
        SetTrigg(9,0);
        SetTrigg(5,0);
        SetTrigg(6,0);
        AddResource(2,3,2000);
        AddResource(2,0,1000);
        AddResource(2,4,300);
        ClearLightSpot(4);
        SelectUnits(&DAT_10030438,0);
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100304c0,&DAT_10030478);
    if (iVar2 == 0) {
      SetTrigg(9,0);
      SetTrigg(8,0);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_10030438,0);
      iVar2 = GetTotalAmount0(&DAT_10030438);
      if (iVar2 < 1) {
        SetLightSpot(&DAT_100304e0,3,9);
        ShowPage("#PAGE9");
        SetTrigg(10,0);
        SelectUnits(&DAT_10030498,0);
        SelChangeNation(2,0);
        ClearSelection(0);
      }
      else {
        CreateZoneNearGroup(&DAT_10030488,&DAT_100304c0,&DAT_10030438,800);
        SetStartPoint(&DAT_100304e0);
        ShowPage("#PAGE9");
        SetTrigg(10,0);
        SelectUnits(&DAT_10030498,0);
        SelChangeNation(2,0);
        ClearSelection(0);
        RunTimer(5,0x28);
        SetTrigg(0x16,0);
      }
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x16);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = TimerDone(5);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x18,0);
          SetStartPoint(&DAT_10030488);
        }
      }
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030460);
    if (iVar2 == 0) {
      SetTrigg(0x1e,0);
      ShowPage("#PAGE19");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1f,0);
      ShowPage("#PAGE22");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = NationIsErased(3);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x1d,0);
        ShowPage("#PAGE20");
        ShowVictory();
      }
    }
  }
  uStack_8 = 0x100030c8;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

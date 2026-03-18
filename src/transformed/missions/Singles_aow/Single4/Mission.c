#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002b1fc[] = "G3";
char DAT_1002b200[] = "G2";
char DAT_1002b204[] = "G1";
char DAT_1002b208[] = "Z12";
char DAT_1002b20c[] = "Z11";
char DAT_1002b210[] = "Z10";
char DAT_1002b214[] = "Z9";
char DAT_1002b218[] = "Z8";
char DAT_1002b21c[] = "Z7";
char DAT_1002b220[] = "Z6";
char DAT_1002b224[] = "Z5";
char DAT_1002b228[] = "Z4";
char DAT_1002b22c[] = "Z3";
char DAT_1002b230[] = "Z2";
char DAT_1002b234[] = "Z1";
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
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterZone(&DAT_100304c8,DAT_1002b234);
  RegisterZone(&DAT_100304d0,DAT_1002b230);
  RegisterZone(&DAT_100304d8,DAT_1002b22c);
  RegisterZone(&DAT_100304e0,DAT_1002b228);
  RegisterZone(&DAT_100304f0,DAT_1002b224);
  RegisterZone(&DAT_100304f8,DAT_1002b220);
  RegisterZone(&DAT_10030508,DAT_1002b21c);
  RegisterZone(&DAT_10030510,DAT_1002b218);
  RegisterZone(&DAT_10030518,DAT_1002b214);
  RegisterZone(&DAT_10030540,DAT_1002b210);
  RegisterZone(&DAT_10030548,DAT_1002b20c);
  RegisterZone(&DAT_10030550,DAT_1002b208);
  RegisterVar(&DAT_10030458,8);
  RegisterVar(&DAT_10030468,8);
  RegisterVar(&DAT_10030470,8);
  RegisterVar(&DAT_10030478,8);
  RegisterVar(&DAT_10030480,8);
  RegisterVar(&DAT_10030488,8);
  RegisterVar(&DAT_10030490,8);
  RegisterDynGroup(&DAT_10030458);
  RegisterDynGroup(&DAT_10030468);
  RegisterDynGroup(&DAT_10030470);
  RegisterDynGroup(&DAT_10030478);
  RegisterDynGroup(&DAT_10030480);
  RegisterDynGroup(&DAT_10030488);
  RegisterDynGroup(&DAT_10030490);
  RegisterUnits(&DAT_10030498,DAT_1002b204);
  RegisterUnits(&DAT_100304a0,DAT_1002b200);
  RegisterUnits(&DAT_100304a8,DAT_1002b1fc);
  RegisterUpgrade(&DAT_100304b8,"MAINPL");
  RegisterUpgrade(&DAT_100304c0,"AKA25PL");
  RegisterUnitType(&DAT_10030418,"Center_Turki(TU)");
  RegisterUnitType(&DAT_10030420,"Dom_Turki(TU)");
  RegisterUnitType(&DAT_10030428,"Rinok_Turki(TU)");
  RegisterUnitType(&DAT_10030430,"Kuznia_Turki(TU)");
  RegisterUnitType(&DAT_10030438,"Mechet_Turki(TU)");
  RegisterUnitType(&DAT_10030440,"Minaret(TU)");
  RegisterUnitType(&DAT_10030448,"Diplomatic_Turki(TU)");
  RegisterUnitType(&DAT_10030450,"Barack_Turki(TU)");
  RegisterUnitType(&DAT_10030460,"Konushnia_Turki(TU)");
  RegisterUnitType(&DAT_100303e0,"Art_Depo_Turki(TU)");
  RegisterUnitType(&DAT_100303e8,"Melnica_tu(TU)");
  RegisterUnitType(&DAT_100303f0,"shahta(TU)");
  RegisterUnitType(&DAT_100303f8,"PorE(PL)");
  RegisterUnitType(&DAT_10030400,"Port(TU)");
  RegisterUnitType(&DAT_10030408,"Pushka_mnogostvolka(PL)");
  RegisterUnitType(&DAT_10030410,"Melnica(PL)");
  RegisterUnitType(&DAT_10030528,"TUrkey_pikiner(TU)");
  RegisterUnitType(&DAT_10030530,"Pehota_turki(TU)");
  RegisterUnitType(&DAT_10030538,"PERES_KOR(TU)");
  RegisterUnitType(&DAT_100304b0,"Mullan(TU)");
  RegisterUnitType(&DAT_10030558,"Shebeka(TU)");
  RegisterFormation(&DAT_10030500,"#ALONE");
  RegisterFormation(&DAT_100304e8,"#LINE8");
  RegisterFormation(&DAT_10030520,"#SQUARE72");
  SetPlayerName(1,"TURKEY");
  SetPlayerName(2,"TURKEY");
  SetPlayerName(3,"ALLIES");
  SetPlayerName(4,"M_ALLIES");
  EnableUnit(0,&DAT_10030418,0);
  EnableUnit(0,&DAT_10030420,0);
  EnableUnit(0,&DAT_10030428,0);
  EnableUnit(0,&DAT_10030430,0);
  EnableUnit(0,&DAT_10030438,0);
  EnableUnit(0,&DAT_10030440,0);
  EnableUnit(0,&DAT_10030448,0);
  EnableUnit(0,&DAT_10030450,0);
  EnableUnit(0,&DAT_10030460,0);
  EnableUnit(0,&DAT_100303e0,0);
  EnableUnit(0,&DAT_100303e8,0);
  EnableUnit(0,&DAT_100303f0,0);
  EnableUnit(0,&DAT_100303f8,0);
  EnableUnit(0,&DAT_10030410,0);
  EnableUnit(1,&DAT_10030400,0);
  EnableUnit(1,&DAT_100303e8,0);
  ChangeFriends(0,9);
  ChangeFriends(1,6);
  ChangeFriends(2,6);
  ChangeFriends(3,0x11);
  ChangeFriends(4,0x11);
  uStack_8 = 0x10001903;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_c;
  int local_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,iVar2 * -0x1194 + 20000);
    iVar2 = GetDiff(0);
    SetResource(0,1,iVar2 * -500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(0,4,iVar2 * -700 + 6000);
    iVar2 = GetDiff(0);
    SetResource(0,2,iVar2 * -900 + 5000);
    iVar2 = GetDiff(0);
    SetResource(0,0,iVar2 * -900 + 5000);
    iVar2 = GetDiff(0);
    SetResource(0,5,iVar2 * -700 + 6000);
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
    SetResource(3,3,5000000);
    SetResource(3,1,5000000);
    SetResource(3,4,5000000);
    SetResource(3,2,5000000);
    SetResource(3,0,5000000);
    SetResource(3,5,5000000);
    SetResource(4,3,5000000);
    SetResource(4,1,5000000);
    SetResource(4,4,5000000);
    SetResource(4,2,5000000);
    SetResource(4,0,5000000);
    SetResource(4,5,5000000);
    InitialUpgrade(DAT_1002b200,"AKA04TU");
    InitialUpgrade(DAT_1002b1fc,"AKA04PL");
    InitialUpgrade(DAT_1002b1fc,"AKA19PL");
    DisableUpgrade(0,&DAT_100304b8);
    DisableUpgrade(0,&DAT_100304c0);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    SetTrigg(9,0);
    SetTrigg(0x10,0);
    SetStartPoint(&DAT_100304c8);
    SetTrigg(0x13,0);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(2,0);
    StartAI(1,"TURKISH.0",0,0,2,-1);
    RunTimer(1,500);
    RunTimer(5,20000);
    RunTimer(6,15000);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(4,0);
      CreateObject0(&DAT_10030468,&DAT_100304e8,&DAT_10030528,2,&DAT_100304d0,0xe6);
      CreateObject0(&DAT_10030470,&DAT_10030520,&DAT_10030530,2,&DAT_100304d0,0xe6);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_10030480,0);
      SetTrigg(3,0);
      CreateObject0(&DAT_10030458,&DAT_10030500,&DAT_10030538,2,&DAT_100304d8,0x62);
      SelectUnits1(2,&DAT_10030458,0);
      SelSendTo(2,&DAT_100304e0,0x62,0);
      SelectUnits1(0,&DAT_10030480,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_10030480,0);
      SelectUnits1(2,&DAT_10030458,0);
      uVar1 = CheckLeaveAbility(2);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits1(2,&DAT_10030468,1);
        SelectUnits1(2,&DAT_10030470,1);
        SendUnitsToTransport(2);
        SetTrigg(6,0);
        SetTrigg(7,0);
        SetTrigg(5,0);
        SelectUnits1(0,&DAT_10030480,0);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_10030480,0);
    ClearSelection(0);
    SelectUnits1(2,&DAT_10030458,0);
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetNInside(2);
      if (0x4f < iVar2) {
        SelSendTo(2,&DAT_10030518,0x21,0);
        SetTrigg(6,0);
        SetTrigg(7,0);
        RunTimer(2,8000);
        SetTrigg(0x10,0);
        SetTrigg(8,0);
      }
    }
    SelectUnits1(0,&DAT_10030480,0);
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_10030480,0);
      ClearSelection(0);
      SelectUnits1(2,&DAT_10030458,0);
      uVar1 = CheckLeaveAbility(2);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits1(2,&DAT_10030458,0);
        PushAllUnitsAway(2);
        SetTrigg(9,0);
      }
      SelectUnits1(0,&DAT_10030480,0);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_10030480,0);
    ClearSelection(0);
    SelectUnits1(2,&DAT_10030458,0);
    iVar2 = GetNInside(2);
    if (iVar2 < 1) {
      SetTrigg(0x10,0);
      SelectUnits1(2,&DAT_10030468,0);
      SelectUnits1(2,&DAT_10030470,1);
      SelSendAndKill(2,&DAT_100304c8,0,0);
      SetTrigg(8,0);
    }
    SelectUnits1(0,&DAT_10030480,0);
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) == 0) {
LAB_10002797:
    iVar2 = GetTotalAmount0(&DAT_10030458);
    if (iVar2 != 0) goto LAB_10002887;
  }
  else {
    iVar2 = GetTotalAmount0(&DAT_10030470);
    if (9 < iVar2) goto LAB_10002797;
  }
  SaveSelectedUnits(0,&DAT_10030480,0);
  ClearSelection(0);
  SetTrigg(4,0);
  SetTrigg(3,0);
  SetTrigg(5,0);
  SetTrigg(9,0);
  SelectUnits1(2,&DAT_10030458,0);
  SelDie(2);
  SelectUnits1(0,&DAT_10030480,0);
LAB_10002887:
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_10030480,0);
      ClearSelection(0);
      SetTrigg(10,0);
      CreateObject0(&DAT_10030488,&DAT_10030500,&DAT_10030558,2,&DAT_100304f0,0);
      SelectUnits1(2,&DAT_10030488,0);
      SelSendAndKill(2,&DAT_100304f8,0,0);
      SetTrigg(0xb,0);
      SetTrigg(0xc,0);
      SelectUnits1(0,&DAT_10030480,0);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100304f8,2);
    if (iVar2 != 0) {
      SaveSelectedUnits(0,&DAT_10030480,0);
      ClearSelection(0);
      SelectUnits1(2,&DAT_10030488,0);
      Patrol(2,&DAT_10030540,0x82);
      SetTrigg(0xb,0);
      SelectUnits1(0,&DAT_10030480,0);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030488);
    if (iVar2 < 1) {
      SetTrigg(0xc,0);
      SetTrigg(10,0);
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      SaveSelectedUnits(0,&DAT_10030480,0);
      ClearSelection(0);
      SetTrigg(0xd,0);
      CreateObject0(&DAT_10030490,&DAT_10030500,&DAT_10030558,2,&DAT_100304f0,0);
      SelectUnits1(2,&DAT_10030490,0);
      SelSendAndKill(2,&DAT_10030548,0,0);
      SetTrigg(0xf,0);
      SetTrigg(0xe,0);
      SelectUnits1(0,&DAT_10030480,0);
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030548,2);
    if (iVar2 != 0) {
      SaveSelectedUnits(0,&DAT_10030480,0);
      ClearSelection(0);
      SelectUnits1(2,&DAT_10030490,0);
      Patrol(2,&DAT_10030550,0x82);
      SetTrigg(0xe,0);
      SelectUnits1(0,&DAT_10030480,0);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030490);
    if (iVar2 < 1) {
      SetTrigg(0xf,0);
      SetTrigg(0xd,0);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_10030458);
      if (iVar2 == 0) {
        SaveSelectedUnits(0,&DAT_10030480,0);
        SelectUnits1(2,&DAT_10030488,0);
        SelSendAndKill(2,&DAT_100304f8,0,0);
        SetTrigg(0xb,0);
        SelectUnits1(2,&DAT_10030490,0);
        Patrol(2,&DAT_10030550,0x82);
        SetTrigg(0xe,0);
      }
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10030408,0);
    if (3 < iVar2) {
      ShowPage("#PAGE3");
      EnableUnit(0,&DAT_10030408,0);
      SetTrigg(0x11,0);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetTotalAmount1(&DAT_10030408,0);
    if (iVar2 < 4) {
      SetTrigg(0x11,0);
      EnableUnit(0,&DAT_10030408,1);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x12);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030508,0);
      if (0 < iVar2) {
        ShowPage("#PAGE4");
        ShowPage("#PAGE5");
        SetTrigg(0x12,0);
        local_8 = AskMultilineQuestion(9,"#PAGE6",0,"Qs6_1|Qs6_2|Qs6_3");
        if (local_8 == 0) {
          ShowPage("#PAGE7");
          ChangeFriends(0,1);
          ChangeFriends(4,0x10);
          SetTrigg(0x16,0);
        }
        else if (local_8 == 1) {
          iVar2 = GetResource(0,1);
          if (iVar2 < 0x2711) {
            ShowPage("#PAGE11");
            ShowPage("#PAGE12");
          }
          else {
            AddResource(0,1,-10000);
            SaveSelectedUnits(0,&DAT_10030480,0);
            SelectUnits1(4,&DAT_10030498,0);
            SelChangeNation(4,3);
            SelSendTo(3,&DAT_100304d0,0,0);
            SelectUnits1(0,&DAT_10030480,0);
            SetTrigg(0x16,0);
          }
        }
        else if (local_8 == 2) {
          ShowPage("#PAGE8");
        }
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030508,0);
    if (iVar2 == 0) {
      SetTrigg(0x13,0);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030508,0);
      if (0 < iVar2) {
        SetTrigg(0x13,0);
        local_c = AskMultilineQuestion(9,"#PAGE9",0,"Qs9_1|Qs9_2|Qs9_3");
        if (local_c == 0) {
          ShowPage("#PAGE10");
          ChangeFriends(0,1);
          ChangeFriends(4,0x10);
          SetTrigg(0x16,0);
        }
        else if (local_c == 1) {
          iVar2 = GetResource(0,1);
          if (iVar2 < 0x2711) {
            ShowPage("#PAGE11");
            ShowPage("#PAGE12");
          }
          else {
            AddResource(0,1,-10000);
            SaveSelectedUnits(0,&DAT_10030480,0);
            SelectUnits1(4,&DAT_10030498,0);
            SelChangeNation(4,3);
            SelSendTo(3,&DAT_100304d0,0,0);
            SetTrigg(0x16,0);
            SelectUnits1(0,&DAT_10030480,0);
          }
        }
        else if (local_c == 2) {
          ShowPage("#PAGE8");
        }
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030508,4);
    if (iVar2 == 0) {
      SetTrigg(0x14,0);
      ShowPage("#PAGE13");
      SetStartPoint(&DAT_10030510);
      CreateObject0(&DAT_10030478,&DAT_10030500,&DAT_100304b0,3,&DAT_10030510,0x96);
      InitialUpgrade(DAT_1002b1fc,"MAINPL");
      ClearSelection(3);
      SelectUnits1(0,&DAT_10030480,0);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(8,0);
      ShowPage("#PAGE19");
      LooseGame();
    }
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(99,0);
      ShowPage("#PAGE20");
      ShowVictory();
    }
  }
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

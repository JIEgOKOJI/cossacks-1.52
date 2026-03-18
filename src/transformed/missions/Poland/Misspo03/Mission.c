#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002b0dc[] = "Z10";
char DAT_1002b0e0[] = "Z9";
char DAT_1002b0e4[] = "Z8";
char DAT_1002b0e8[] = "Z7";
char DAT_1002b0ec[] = "Z6";
char DAT_1002b0f0[] = "Z5";
char DAT_1002b0f4[] = "Z4";
char DAT_1002b0f8[] = "Z3";
char DAT_1002b0fc[] = "Z2";
char DAT_1002b100[] = "Z1";
char DAT_1002b104[] = "G17";
char DAT_1002b108[] = "G15";
char DAT_1002b10c[] = "G14";
char DAT_1002b110[] = "G13";
char DAT_1002b114[] = "G12";
char DAT_1002b118[] = "G11";
char DAT_1002b11c[] = "G10";
char DAT_1002b120[] = "G9";
char DAT_1002b124[] = "G8A";
char DAT_1002b128[] = "G8";
char DAT_1002b12c[] = "G7A";
char DAT_1002b130[] = "G7";
char DAT_1002b134[] = "G6";
char DAT_1002b138[] = "G5";
char DAT_1002b13c[] = "G4";
char DAT_1002b140[] = "G3A";
char DAT_1002b144[] = "G3";
char DAT_1002b148[] = "G2";
char DAT_1002b14c[] = "G1";
char DAT_1002b1e4[] = "G16";
long long DAT_100303e0 = 0;
long long DAT_100303e8 = 0;
long long DAT_100303f8 = 0;
int DAT_10030400 = 0;
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
long long DAT_100304f8 = 0;
long long DAT_10030500 = 0;
long long DAT_10030510 = 0;
int DAT_10030520 = 0;
long long DAT_10030528 = 0;
long long DAT_10030530 = 0;
long long DAT_10030538 = 0;
long long DAT_10030540 = 0;
long long DAT_10030548 = 0;
OneUnit DAT_10030558 = {0};
int DAT_10030560 = 0;
int DAT_10030561 = 0;
long long DAT_10030588 = 0;
long long DAT_10030590 = 0;
long long DAT_10030598 = 0;
long long DAT_100305a0 = 0;
long long DAT_100305a8 = 0;
long long DAT_100305b0 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_10030420,DAT_1002b14c);
  RegisterUnits(&DAT_10030428,DAT_1002b148);
  RegisterUnits(&DAT_10030430,DAT_1002b144);
  RegisterUnits(&DAT_100304c8,DAT_1002b140);
  RegisterUnits(&DAT_10030438,DAT_1002b13c);
  RegisterUnits(&DAT_10030440,DAT_1002b138);
  RegisterUnits(&DAT_10030448,DAT_1002b134);
  RegisterUnits(&DAT_10030450,DAT_1002b130);
  RegisterUnits(&DAT_100304f8,DAT_1002b12c);
  RegisterUnits(&DAT_10030458,DAT_1002b128);
  RegisterUnits(&DAT_10030500,DAT_1002b124);
  RegisterUnits(&DAT_10030460,DAT_1002b120);
  RegisterUnits(&DAT_10030468,DAT_1002b11c);
  RegisterUnits(&DAT_10030470,DAT_1002b118);
  RegisterUnits(&DAT_10030478,DAT_1002b114);
  RegisterUnits(&DAT_10030480,DAT_1002b110);
  RegisterUnits(&DAT_10030488,DAT_1002b10c);
  RegisterUnits(&DAT_10030490,DAT_1002b108);
  RegisterUnits(&DAT_10030498,DAT_1002b104);
  RegisterZone(&DAT_100304a0,DAT_1002b100);
  RegisterZone(&DAT_100304a8,DAT_1002b0fc);
  RegisterZone(&DAT_100304b0,DAT_1002b0f8);
  RegisterZone(&DAT_100304b8,DAT_1002b0f4);
  RegisterZone(&DAT_100304c0,DAT_1002b0f0);
  RegisterZone(&DAT_100304d0,DAT_1002b0ec);
  RegisterZone(&DAT_100304d8,DAT_1002b0e8);
  RegisterZone(&DAT_100304e0,DAT_1002b0e4);
  RegisterZone(&DAT_100304e8,DAT_1002b0e0);
  RegisterZone(&DAT_10030538,DAT_1002b0dc);
  RegisterUnitType(&DAT_100305b0,"Strelcovaia_Izba(UA)");
  RegisterUnitType(&DAT_10030588,"konushnia_ua(UA)");
  RegisterUnitType(&DAT_10030548,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_100303f8,"SUNDUK1O(UN)");
  RegisterUnitType(&DAT_100303e8,"Tatarin(TU)");
  RegisterUnitType(&DAT_10030510,"TUrkey_pikiner(TU)");
  RegisterUnitType(&DAT_10030540,"Kozak_loshad(UA)");
  RegisterFormation(&DAT_10030530,"#ALONE");
  RegisterFormation(&DAT_10030528,"#PACK20");
  RegisterFormation(&DAT_100303e0,"#LINE13PUS");
  SetPlayerName(3,"OSMANS");
  SetPlayerName(5,"REBELS");
  EnableUnit(0,&DAT_100305b0,0);
  EnableUnit(0,&DAT_10030588,0);
  RegisterVar(&DAT_10030400,4);
  RegisterVar(&DAT_10030520,4);
  RegisterVar(&DAT_10030408,8);
  RegisterVar(&DAT_10030410,8);
  RegisterVar(&DAT_10030418,8);
  RegisterVar(&DAT_10030598,8);
  RegisterVar(&DAT_10030590,8);
  RegisterVar(&DAT_100305a8,8);
  RegisterVar(&DAT_100305a0,8);
  uStack_8 = 0x10001642;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *puVar7;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10030420,0);
    DAT_10030400 = 10;
    DAT_10030520 = 4;
    SetTrigg(99,0);
    iVar6 = GetDiff(1);
    SetResource(0,3,iVar6 * -5000 + 30000);
    iVar6 = GetDiff(1);
    SetResource(0,1,iVar6 * -1000 + 6000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar6 = GetDiff(1);
    SetResource(0,5,iVar6 * -1000 + 6000);
    iVar6 = GetDiff(1);
    SetResource(0,4,iVar6 * -1000 + 6000);
    ShowPage("#PAGE0");
    iVar6 = GetDiff(0);
    if (iVar6 == 0) {
      SetResource(0,3,500000);
      SetResource(0,1,20000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      ShowPage("#OTST1");
    }
    DisableMission(0x43);
    DisableMission(0x44);
    CreateObject0(&DAT_10030598,&DAT_10030530,&DAT_10030548,5,&DAT_100304b0,0);
    CreateObject0(&DAT_100305a8,&DAT_10030530,&DAT_10030548,3,&DAT_100304e0,0);
    TakeFood(&DAT_10030480);
    TakeWood(&DAT_10030488);
    TakeStone(&DAT_10030490);
    InitialUpgrade(DAT_1002b1e4,"AKA04UA");
    InitialUpgrade(DAT_1002b1e4,"KUZ01UA");
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetTotalAmount0(&DAT_10030420);
    if (iVar6 == 0) {
      SetTrigg(0x62,0);
      iVar6 = GetResource(0,3);
      if (iVar6 < 1) {
        ShowPage("#PAGE12A");
      }
      else {
        ShowPage("#PAGE12");
      }
      LooseGame();
    }
  }
  iVar6 = GetKilled(&DAT_10030420);
  if (DAT_10030400 <= iVar6) {
    DAT_10030400 = DAT_10030400 + 10 + DAT_10030400 / 5;
    ShowPage("#AWARD");
    GetUnitInfo(&DAT_10030420,0,&DAT_10030558);
    DAT_10030560 = DAT_10030560 + '\x01';
    DAT_10030561 = DAT_10030561 + '\x01';
    SetUnitInfo(&DAT_10030558);
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetTotalAmount0(&DAT_10030468);
    if (iVar6 == 0) {
      SetTrigg(6,0);
      ShowPage("#PAGE6");
      ShowVictory();
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetTotalAmount0(&DAT_10030428);
    if (iVar6 == 0) {
      iVar6 = GetTotalAmount0(&DAT_10030430);
      if (0 < iVar6) {
        SetTrigg(1,0);
        ClearSelection(5);
        SelectUnits(&DAT_10030430,0);
        uVar1 = AskQuestion("#PAGE1");
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0x5a,0);
          SelDie(5);
        }
        else {
          SelChangeNation(5,0);
        }
        iVar6 = GetDiff(0);
        if ((iVar6 == 0) && (0 < DAT_10030520)) {
          ShowPageParam("#OTST2",DAT_10030520);
          DAT_10030520 = DAT_10030520 + -1;
        }
      }
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetTotalAmount0(&DAT_10030438);
    if (iVar6 == 0) {
      iVar6 = GetTotalAmount0(&DAT_10030440);
      if (0 < iVar6) {
        SetTrigg(2,0);
        ClearSelection(5);
        SelectUnits(&DAT_10030440,0);
        uVar1 = AskQuestion("#PAGE2");
        if ((uVar1 & 0xff) == 0) {
          SelDie(5);
        }
        else {
          SelChangeNation(5,0);
        }
        iVar6 = GetDiff(0);
        if ((iVar6 == 0) && (0 < DAT_10030520)) {
          ShowPageParam("#OTST2",DAT_10030520);
          DAT_10030520 = DAT_10030520 + -1;
        }
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetTotalAmount0(&DAT_10030448);
    if (iVar6 == 0) {
      iVar6 = GetTotalAmount0(&DAT_10030450);
      if (0 < iVar6) {
        SetTrigg(3,0);
        ClearSelection(5);
        SelectUnits(&DAT_10030450,0);
        uVar1 = AskQuestion("#PAGE3");
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0x5a,0);
          SelDie(5);
        }
        else {
          SelChangeNation(5,0);
        }
        iVar6 = GetDiff(0);
        if ((iVar6 == 0) && (0 < DAT_10030520)) {
          ShowPageParam("#OTST2",DAT_10030520);
          DAT_10030520 = DAT_10030520 + -1;
        }
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetTotalAmount0(&DAT_10030458);
    if (iVar6 == 0) {
      iVar6 = GetTotalAmount0(&DAT_10030460);
      if (0 < iVar6) {
        SetTrigg(4,0);
        ClearSelection(5);
        SelectUnits(&DAT_10030460,0);
        uVar1 = AskQuestion("#PAGE4");
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(0x5a,0);
          SelDie(5);
        }
        else {
          SelChangeNation(5,0);
        }
        iVar6 = GetDiff(0);
        if ((iVar6 == 0) && (0 < DAT_10030520)) {
          ShowPageParam("#OTST2",DAT_10030520);
          DAT_10030520 = DAT_10030520 + -1;
        }
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetTotalAmount0(&DAT_10030470);
    if (iVar6 == 0) {
      iVar6 = GetTotalAmount0(&DAT_10030478);
      if (0 < iVar6) {
        SetTrigg(5,0);
        ClearSelection(5);
        SelectUnits(&DAT_10030478,0);
        uVar1 = AskQuestion("#PAGE5");
        if ((uVar1 & 0xff) == 0) {
          SelDie(5);
        }
        else {
          SelChangeNation(5,0);
        }
        iVar6 = GetDiff(0);
        if ((iVar6 == 0) && (0 < DAT_10030520)) {
          ShowPageParam("#OTST2",DAT_10030520);
          DAT_10030520 = DAT_10030520 + -1;
        }
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetTotalAmount0(&DAT_10030428);
    if (iVar6 == 0) {
      iVar6 = GetTotalAmount0(&DAT_10030438);
      if (iVar6 == 0) {
        iVar6 = GetTotalAmount0(&DAT_10030448);
        if (iVar6 == 0) {
          iVar6 = GetTotalAmount0(&DAT_10030458);
          if (iVar6 == 0) {
            iVar6 = GetTotalAmount0(&DAT_10030470);
            if (iVar6 == 0) {
              SetTrigg(7,0);
              ShowPage("#PAGE7");
              DisableMission(0x42);
              EnableMission(0x43);
              EnableMission(0x44);
              RunTimer(4,2000);
              iVar6 = GetDiff(0);
              if (iVar6 == 0) {
                SetLightSpot(&DAT_10030538,3,1);
              }
              uVar1 = Trigg(0x5a);
              if ((uVar1 & 0xff) != 0) {
                RunTimer(1,3000);
              }
            }
          }
        }
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetTotalAmount0(&DAT_10030430);
    iVar2 = GetTotalAmount0(&DAT_10030440);
    iVar3 = GetTotalAmount0(&DAT_10030450);
    iVar4 = GetTotalAmount0(&DAT_10030460);
    iVar5 = GetTotalAmount0(&DAT_10030478);
    if (0 < iVar6 + iVar2 + iVar3 + iVar4 + iVar5) {
      ShowPage("#PAGE8");
      ClearSelection(0);
      SelectUnits(&DAT_10030430,0);
      SelectUnits(&DAT_10030440,1);
      SelectUnits(&DAT_10030450,1);
      SelectUnits(&DAT_10030460,1);
      SelectUnits(&DAT_10030478,1);
      SelChangeNation(0,5);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetUnitsAmount0(&DAT_100304b0,0);
    if (0 < iVar6) {
      iVar6 = GetTotalAmount0(&DAT_100304c8);
      if (iVar6 == 0) {
        SetTrigg(9,0);
        ShowPage("#PAGE9");
        iVar6 = GetDiff(1);
        AddResource(0,1,iVar6 * -200 + 0x4b0);
        ClearSelection(5);
        SelectUnits(&DAT_10030598,0);
        SelErase(5);
        CreateObject0(&DAT_10030590,&DAT_10030530,&DAT_100303f8,5,&DAT_100304b0,0);
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetUnitsAmount0(&DAT_100304e0,0);
    if (0 < iVar6) {
      iVar6 = GetTotalAmount0(&DAT_10030500);
      if (iVar6 == 0) {
        SetTrigg(10,0);
        ShowPage("#PAGE10");
        iVar6 = GetDiff(1);
        AddResource(0,1,iVar6 * -200 + 0x4b0);
        ClearSelection(3);
        SelectUnits(&DAT_100305a8,0);
        SelErase(3);
        CreateObject0(&DAT_100305a0,&DAT_10030530,&DAT_100303f8,3,&DAT_100304e0,0);
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetUnitsAmount0(&DAT_100304d8,0);
    if (0 < iVar6) {
      iVar6 = GetTotalAmount0(&DAT_100304f8);
      if (iVar6 == 0) {
        SetTrigg(0xb,0);
        ShowPage("#PAGE11");
        iVar6 = GetDiff(1);
        AddResource(0,3,iVar6 * -2000 + 10000);
      }
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetGlobalTime();
    iVar2 = GetDiff(1);
    if (iVar2 * -20000 + 120000 < iVar6) {
      SetTrigg(0x32,0);
      CreateObject0(&DAT_10030408,&DAT_10030528,&DAT_100303e8,3,&DAT_100304a8,0xc4);
      CreateObject0(&DAT_10030410,&DAT_100303e0,&DAT_10030510,3,&DAT_100304a8,0xc4);
      SelectUnits(&DAT_10030408,0);
      SelectUnits(&DAT_10030410,1);
      SelSendAndKill(3,&DAT_100304d0,0xc4,0);
      SelSendAndKill(3,&DAT_100304c0,0xc4,2);
      SelSendAndKill(3,&DAT_100304e8,0x80,2);
      SelSendAndKill(3,&DAT_100304c0,0x40,2);
    }
  }
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) != 0) {
    iVar6 = GetGlobalTime();
    iVar2 = GetDiff(1);
    if (iVar2 * -20000 + 150000 < iVar6) {
      SetTrigg(0x33,0);
      CreateObject0(&DAT_10030418,&DAT_10030528,&DAT_10030540,5,&DAT_100304a0,0x80);
      SelectUnits(&DAT_10030418,0);
      SelSendAndKill(5,&DAT_100304b8,0x80,0);
      SelSendAndKill(5,&DAT_100304c0,0x40,2);
      SelSendAndKill(5,&DAT_100304d0,0x40,2);
      SelSendAndKill(5,&DAT_100304c0,0xc4,2);
    }
  }
  iVar6 = GetDiff(1);
  if (1 < iVar6) {
    iVar6 = GetUnitsByNation(&DAT_10030498,3);
    if (0 < iVar6) {
      ClearSelection(3);
      SelectUnits1(3,&DAT_10030498,0);
      SelDie(3);
    }
  }
  iVar6 = GetDiff(1);
  if (1 < iVar6) {
    iVar6 = GetUnitsByNation(&DAT_10030498,5);
    if (0 < iVar6) {
      uVar1 = TimerDone(4);
      if ((uVar1 & 0xff) != 0) {
        ClearSelection(5);
        SelectUnits1(5,&DAT_10030498,0);
        SelDie(5);
      }
    }
  }
  uStack_8 = 0x10002c23;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

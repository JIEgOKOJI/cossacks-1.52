#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002e098[] = "Z34";
char DAT_1002e09c[] = "Z33";
char DAT_1002e0a0[] = "Z32";
char DAT_1002e0a4[] = "Z31";
char DAT_1002e0a8[] = "Z30";
char DAT_1002e0ac[] = "Z29";
char DAT_1002e0b0[] = "Z28";
char DAT_1002e0b4[] = "Z27";
char DAT_1002e0b8[] = "Z26";
char DAT_1002e0bc[] = "Z25";
char DAT_1002e0c0[] = "Z24";
char DAT_1002e0c4[] = "Z23";
char DAT_1002e0c8[] = "Z22";
char DAT_1002e0cc[] = "Z21";
char DAT_1002e0d0[] = "Z20";
char DAT_1002e0d4[] = "Z19";
char DAT_1002e0d8[] = "Z18";
char DAT_1002e0dc[] = "Z17";
char DAT_1002e0e0[] = "Z16";
char DAT_1002e0e4[] = "Z15";
char DAT_1002e0e8[] = "Z14";
char DAT_1002e0ec[] = "Z13";
char DAT_1002e0f0[] = "Z12";
char DAT_1002e0f4[] = "Z11";
char DAT_1002e0f8[] = "Z10";
char DAT_1002e0fc[] = "Z9";
char DAT_1002e100[] = "Z8";
char DAT_1002e104[] = "Z7";
char DAT_1002e108[] = "Z6";
char DAT_1002e10c[] = "Z5";
char DAT_1002e110[] = "Z4";
char DAT_1002e114[] = "Z3";
char DAT_1002e118[] = "Z2";
char DAT_1002e11c[] = "Z1";
char DAT_1002e120[] = "G5";
char DAT_1002e124[] = "G4";
char DAT_1002e128[] = "G2";
char DAT_1002e12c[] = "G3";
char DAT_1002e130[] = "G1";
long long DAT_100333e0 = 0;
long long DAT_100333e8 = 0;
long long DAT_100333f0 = 0;
long long DAT_100333f8 = 0;
long long DAT_10033400 = 0;
long long DAT_10033408 = 0;
long long DAT_10033410 = 0;
long long DAT_10033418 = 0;
long long DAT_10033420 = 0;
long long DAT_10033428 = 0;
long long DAT_10033430 = 0;
long long DAT_10033438 = 0;
long long DAT_10033440 = 0;
long long DAT_10033448 = 0;
long long DAT_10033450 = 0;
long long DAT_10033458 = 0;
long long DAT_10033460 = 0;
long long DAT_10033468 = 0;
int DAT_10033470 = 0;
int DAT_10033474 = 0;
int DAT_10033478 = 0;
int DAT_1003347c = 0;
int DAT_10033480 = 0;
int DAT_10033484 = 0;
int DAT_10033488 = 0;
int DAT_1003348c = 0;
int DAT_10033490 = 0;
long long DAT_10033498 = 0;
long long DAT_100334a0 = 0;
long long DAT_100334a8 = 0;
long long DAT_100334b0 = 0;
long long DAT_100334b8 = 0;
long long DAT_100334c0 = 0;
long long DAT_100334c8 = 0;
long long DAT_100334d0 = 0;
long long DAT_100334d8 = 0;
long long DAT_100334e0 = 0;
long long DAT_100334e8 = 0;
long long DAT_100334f0 = 0;
long long DAT_100334f8 = 0;
long long DAT_10033500 = 0;
long long DAT_10033508 = 0;
long long DAT_10033510 = 0;
long long DAT_10033518 = 0;
long long DAT_10033520 = 0;
long long DAT_10033528 = 0;
long long DAT_10033530 = 0;
long long DAT_10033538 = 0;
long long DAT_10033540 = 0;
long long DAT_10033548 = 0;
long long DAT_10033550 = 0;
long long DAT_10033558 = 0;
long long DAT_10033560 = 0;
long long DAT_10033570 = 0;
long long DAT_10033578 = 0;
long long DAT_10033580 = 0;
long long DAT_10033588 = 0;
long long DAT_10033590 = 0;
long long DAT_10033598 = 0;
long long DAT_100335a0 = 0;
long long DAT_100335a8 = 0;
long long DAT_100335b0 = 0;
long long DAT_100335b8 = 0;
long long DAT_100335c0 = 0;
long long DAT_100335c8 = 0;
long long DAT_100335d0 = 0;
long long DAT_100335d8 = 0;
long long DAT_100335e0 = 0;
long long DAT_100335e8 = 0;
long long DAT_100335f0 = 0;
long long DAT_100335f8 = 0;
long long DAT_10033600 = 0;
long long DAT_10033608 = 0;
long long DAT_10033610 = 0;
long long DAT_10033618 = 0;
long long DAT_10033620 = 0;
long long DAT_10033628 = 0;
long long DAT_10033630 = 0;
long long DAT_10033638 = 0;
int DAT_10033640 = 0;
int DAT_10033644 = 0;
int DAT_10033648 = 0;
int DAT_1003364c = 0;
int DAT_10033650 = 0;
int DAT_10033654 = 0;
int DAT_10033658 = 0;
int DAT_1003365c = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_100333e0,DAT_1002e130);
  RegisterUnits(&DAT_100333f0,DAT_1002e12c);
  RegisterUnits(&DAT_100333e8,DAT_1002e128);
  RegisterUnits(&DAT_100333f8,DAT_1002e124);
  RegisterUnits(&DAT_10033400,DAT_1002e120);
  RegisterZone(&DAT_10033428,DAT_1002e11c);
  RegisterZone(&DAT_10033430,DAT_1002e118);
  RegisterZone(&DAT_10033438,DAT_1002e114);
  RegisterZone(&DAT_10033440,DAT_1002e110);
  RegisterZone(&DAT_10033448,DAT_1002e10c);
  RegisterZone(&DAT_10033450,DAT_1002e108);
  RegisterZone(&DAT_10033458,DAT_1002e104);
  RegisterZone(&DAT_10033460,DAT_1002e100);
  RegisterZone(&DAT_10033468,DAT_1002e0fc);
  RegisterZone(&DAT_10033570,DAT_1002e0f8);
  RegisterZone(&DAT_10033578,DAT_1002e0f4);
  RegisterZone(&DAT_10033580,DAT_1002e0f0);
  RegisterZone(&DAT_10033588,DAT_1002e0ec);
  RegisterZone(&DAT_10033598,DAT_1002e0e8);
  RegisterZone(&DAT_100335a8,DAT_1002e0e4);
  RegisterZone(&DAT_100335b8,DAT_1002e0e0);
  RegisterZone(&DAT_100335c8,DAT_1002e0dc);
  RegisterZone(&DAT_100335d8,DAT_1002e0d8);
  RegisterZone(&DAT_100335f0,DAT_1002e0d4);
  RegisterZone(&DAT_10033590,DAT_1002e0d0);
  RegisterZone(&DAT_100335a0,DAT_1002e0cc);
  RegisterZone(&DAT_100335b0,DAT_1002e0c8);
  RegisterZone(&DAT_100335c0,DAT_1002e0c4);
  RegisterZone(&DAT_100335d0,DAT_1002e0c0);
  RegisterZone(&DAT_100335e8,DAT_1002e0bc);
  RegisterZone(&DAT_10033600,DAT_1002e0b8);
  RegisterZone(&DAT_10033610,DAT_1002e0b4);
  RegisterZone(&DAT_10033620,DAT_1002e0b0);
  RegisterZone(&DAT_10033630,DAT_1002e0ac);
  RegisterZone(&DAT_100335e0,DAT_1002e0a8);
  RegisterZone(&DAT_100335f8,DAT_1002e0a4);
  RegisterZone(&DAT_10033608,DAT_1002e0a0);
  RegisterZone(&DAT_10033618,DAT_1002e09c);
  RegisterZone(&DAT_10033628,DAT_1002e098);
  RegisterUnitType(&DAT_10033550,"Fregat(en)");
  RegisterUnitType(&DAT_10033638,"FregatNEW(en)");
  RegisterUnitType(&DAT_10033558,"Fregat(HO)");
  RegisterUnitType(&DAT_10033420,"Victoria(HO)");
  RegisterUnitType(&DAT_10033560,"FregatNEW(HO)");
  RegisterUnitType(&DAT_10033410,"Linkor(HO)");
  RegisterVar(&DAT_10033470,4);
  RegisterVar(&DAT_10033474,4);
  RegisterVar(&DAT_10033478,4);
  RegisterVar(&DAT_1003347c,4);
  RegisterVar(&DAT_10033480,4);
  RegisterVar(&DAT_10033484,4);
  RegisterVar(&DAT_10033488,4);
  RegisterVar(&DAT_1003348c,4);
  RegisterVar(&DAT_10033490,4);
  RegisterVar(&DAT_10033640,4);
  RegisterVar(&DAT_10033644,4);
  RegisterVar(&DAT_10033648,4);
  RegisterVar(&DAT_1003364c,4);
  RegisterVar(&DAT_10033650,4);
  RegisterVar(&DAT_10033654,4);
  RegisterVar(&DAT_10033658,4);
  RegisterVar(&DAT_1003365c,4);
  RegisterVar(&DAT_100334c8,8);
  RegisterVar(&DAT_100334d0,8);
  RegisterVar(&DAT_100334d8,8);
  RegisterVar(&DAT_100334e0,8);
  RegisterVar(&DAT_100334e8,8);
  RegisterVar(&DAT_100334f0,8);
  RegisterVar(&DAT_100334f8,8);
  RegisterVar(&DAT_10033500,8);
  RegisterVar(&DAT_10033408,8);
  RegisterVar(&DAT_10033508,8);
  RegisterVar(&DAT_10033510,8);
  RegisterVar(&DAT_10033518,8);
  RegisterVar(&DAT_10033520,8);
  RegisterVar(&DAT_10033528,8);
  RegisterVar(&DAT_10033530,8);
  RegisterVar(&DAT_10033538,8);
  RegisterVar(&DAT_10033540,8);
  RegisterVar(&DAT_10033548,8);
  RegisterVar(&DAT_10033498,8);
  RegisterVar(&DAT_100334a0,8);
  RegisterVar(&DAT_100334a8,8);
  RegisterVar(&DAT_100334b0,8);
  RegisterVar(&DAT_100334b8,8);
  RegisterVar(&DAT_100334c0,8);
  RegisterDynGroup(&DAT_100334c8);
  RegisterDynGroup(&DAT_100334d0);
  RegisterDynGroup(&DAT_100334d8);
  RegisterDynGroup(&DAT_100334e0);
  RegisterDynGroup(&DAT_100334e8);
  RegisterDynGroup(&DAT_100334f0);
  RegisterDynGroup(&DAT_100334f8);
  RegisterDynGroup(&DAT_10033500);
  RegisterDynGroup(&DAT_10033408);
  RegisterDynGroup(&DAT_10033508);
  RegisterDynGroup(&DAT_10033510);
  RegisterDynGroup(&DAT_10033518);
  RegisterDynGroup(&DAT_10033520);
  RegisterDynGroup(&DAT_10033528);
  RegisterDynGroup(&DAT_10033530);
  RegisterDynGroup(&DAT_10033538);
  RegisterDynGroup(&DAT_10033540);
  RegisterDynGroup(&DAT_10033548);
  RegisterDynGroup(&DAT_10033498);
  RegisterDynGroup(&DAT_100334a0);
  RegisterDynGroup(&DAT_100334a8);
  RegisterDynGroup(&DAT_100334b0);
  RegisterDynGroup(&DAT_100334b8);
  RegisterDynGroup(&DAT_100334c0);
  RegisterFormation(&DAT_10033418,"#ODIN");
  SetPlayerName(3,"HOLLAND");
  SetPlayerName(1,"HOLLAND");
  SetPlayerName(2,"ALLIES");
  ChangeFriends(0,5);
  ChangeFriends(1,10);
  ChangeFriends(2,5);
  ChangeFriends(3,10);
  uStack_8 = 0x10001c89;
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
    iVar2 = GetDiff(3);
    SetResource(0,3,(3 - iVar2) * 10000 + 5000);
    iVar2 = GetDiff(3);
    SetResource(0,1,(3 - iVar2) * 500 + 4000);
    iVar2 = GetDiff(3);
    SetResource(0,4,(3 - iVar2) * 800 + 5000);
    iVar2 = GetDiff(3);
    SetResource(0,2,(3 - iVar2) * 600 + 5000);
    iVar2 = GetDiff(3);
    SetResource(0,0,(3 - iVar2) * 800 + 5000);
    iVar2 = GetDiff(3);
    SetResource(0,5,(3 - iVar2) * 600 + 5000);
    SetResource(1,3,999999999);
    SetResource(1,1,999999999);
    SetResource(1,4,999999999);
    SetResource(1,2,999999999);
    SetResource(1,0,999999999);
    SetResource(1,5,999999999);
    SetResource(2,3,999999999);
    SetResource(2,1,999999999);
    SetResource(2,4,999999999);
    SetResource(2,2,999999999);
    SetResource(2,0,999999999);
    SetResource(2,5,999999999);
    iVar2 = GetDiff(3);
    SetResource(3,3,iVar2 * -500 + 10000);
    iVar2 = GetDiff(3);
    SetResource(3,1,iVar2 * -500 + 10000);
    iVar2 = GetDiff(3);
    SetResource(3,4,iVar2 * -500 + 10000);
    iVar2 = GetDiff(3);
    SetResource(3,2,iVar2 * -500 + 10000);
    iVar2 = GetDiff(3);
    SetResource(3,0,iVar2 * -500 + 10000);
    iVar2 = GetDiff(3);
    SetResource(3,5,iVar2 * -500 + 10000);
    InitialUpgrade(DAT_1002e128,"AKA16EN");
    InitialUpgrade(DAT_1002e128,"AKA17EN");
    InitialUpgrade(DAT_1002e128,"AKA20EN");
    InitialUpgrade(DAT_1002e128,"AKA27EN");
    InitialUpgrade(DAT_1002e128,"AKA28EN");
    InitialUpgrade(DAT_1002e12c,"AKA20HO");
    InitialUpgrade(DAT_1002e12c,"AKA27HO");
    SetStartPoint(&DAT_10033458);
    RunTimer(3,10);
    RunTimer(7,10);
    RunTimer(0xe,100);
    SetTrigg(0x18,0);
    SetTrigg(0x19,0);
    SetTrigg(0x1a,0);
    SetTrigg(0x23,0);
    DisableMission(0x42);
    DisableMission(0x44);
    SetTrigg(0x14,0);
    DAT_10033470 = 0;
    DAT_10033474 = 0;
    DAT_10033478 = 0;
    DAT_1003347c = 0;
    DAT_10033480 = 0;
    DAT_10033484 = 0;
    DAT_10033488 = 0;
    DAT_1003348c = 0;
    DAT_10033490 = 0;
    DAT_10033640 = 0;
  }
  uVar1 = Trigg(0x39);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xe);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x39,0);
      ShowPage("#PAGE1");
      ShowPage("#PAGE2");
      SetLightSpot(&DAT_10033618,2,1);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(2,0);
      RunTimer(0xb,1000);
      RunTimer(0xc,0x32);
      RunTimer(0xd,10000);
      StartAI(3,"HOLLAND.0",2,0,1,-1);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(3,0);
    SelectUnits1(2,&DAT_100333e8,0);
    SelectUnits1(2,&DAT_100333e0,1);
    SelSendAndKill(2,&DAT_10033428,0x8c,0);
    ClearSelection(2);
    RunTimer(1,1000);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(4,0);
      SelectUnits1(2,&DAT_100333e8,0);
      SelSendAndKill(2,&DAT_10033430,0xb4,0);
      ClearSelection(2);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(5,0);
      SelectUnits1(2,&DAT_100333e0,0);
      SelSendAndKill(2,&DAT_10033438,0xb4,0);
      ClearSelection(2);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100333f0);
    if (iVar2 == 0) {
      SetTrigg(6,0);
      SelectUnits1(2,&DAT_100333e8,0);
      SelSendTo(2,&DAT_10033430,0xb4,0);
      RunTimer(2,2000);
      ClearSelection(2);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100333f8);
    if (iVar2 == 0) {
      SetTrigg(7,0);
      SelectUnits1(2,&DAT_100333e0,0);
      SelSendTo(2,&DAT_10033438,0xb4,0);
      ClearSelection(2);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(8,0);
      SelectUnits1(2,&DAT_100333e0,0);
      SelectUnits1(2,&DAT_100333e8,1);
      SelSendAndKill(2,&DAT_10033440,0xb4,0);
      ClearSelection(2);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10033400);
    if (iVar2 < 6) {
      SetTrigg(0xf,0);
      ShowPage("#PAGE3");
      ShowPage("#PAGE4");
      DisableMission(0x41);
      EnableMission(0x44);
      EnableMission(0x42);
      SetTrigg(0x14,0);
      SetLightSpot(&DAT_10033628,1,2);
    }
  }
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(7);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_10033508);
          if ((iVar2 == 0) && (DAT_10033470 < 4)) {
            CreateObject0(&DAT_10033508,&DAT_10033418,&DAT_10033560,1,&DAT_10033448,0);
            SelectUnits1(1,&DAT_10033508,0);
            SelSendAndKill(1,&DAT_100335c8,0,0);
            SetTrigg(0x24,0);
            DAT_10033470 = DAT_10033470 + 1;
            RunTimer(5,2000);
          }
        }
      }
    }
    uVar1 = Trigg(0x24);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10033508), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_100335c8,&DAT_10033508);
      if (0 < iVar2) {
        SetTrigg(0x24,0);
        SelectUnits1(1,&DAT_10033508,0);
        Patrol(1,&DAT_100335d8,0);
      }
    }
    iVar2 = GetDiff(0);
    if (2 < iVar2) {
      uVar1 = Trigg(0x2e);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(1);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_100334b8);
          if ((iVar2 == 0) && (DAT_10033474 < 4)) {
            CreateObject0(&DAT_100334b8,&DAT_10033418,&DAT_10033560,1,&DAT_10033448,0);
            SelectUnits1(1,&DAT_100334b8,0);
            SelSendAndKill(1,&DAT_100335c8,0,0);
            SetTrigg(0x2f,0);
            RunTimer(5,2000);
            DAT_10033474 = DAT_10033474 + 1;
          }
        }
      }
      uVar1 = Trigg(0x2f);
      if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100334b8), 0 < iVar2)) {
        iVar2 = GetUnitsAmount1(&DAT_100335c8,&DAT_100334b8);
        if (0 < iVar2) {
          SetTrigg(0x2f,0);
          SelectUnits1(1,&DAT_100334b8,0);
          Patrol(1,&DAT_100335d8,0);
        }
      }
    }
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(5);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_10033510);
          if ((iVar2 == 0) && (DAT_10033478 < 5)) {
            CreateObject0(&DAT_10033510,&DAT_10033418,&DAT_10033558,1,&DAT_10033448,0);
            SelectUnits1(1,&DAT_10033510,0);
            SelSendAndKill(1,&DAT_100335a8,0,0);
            RunTimer(6,2000);
            SetTrigg(0x18,0);
            DAT_10033478 = DAT_10033478 + 1;
          }
        }
      }
    }
    iVar2 = GetTotalAmount0(&DAT_10033510);
    if (0 < iVar2) {
      uVar1 = Trigg(0x18);
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetUnitsAmount1(&DAT_100335a8,&DAT_10033510);
        if (0 < iVar2) {
          SetTrigg(0x18,0);
          SelectUnits1(1,&DAT_10033510,0);
          Patrol(1,&DAT_10033598,0);
        }
      }
    }
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(6);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_10033518);
          if ((iVar2 == 0) && (DAT_1003347c = DAT_1003347c + 1, DAT_1003347c != 0)) {
            CreateObject0(&DAT_10033518,&DAT_10033418,&DAT_10033558,1,&DAT_10033448,0);
            SelectUnits1(1,&DAT_10033518,0);
            SelSendAndKill(1,&DAT_100335b8,0,0);
            SetTrigg(0x1a,0);
            DAT_1003347c = DAT_1003347c + 1;
          }
        }
      }
    }
    iVar2 = GetTotalAmount0(&DAT_10033518);
    if (0 < iVar2) {
      uVar1 = Trigg(0x1a);
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetUnitsAmount1(&DAT_100335b8,&DAT_10033518);
        if (0 < iVar2) {
          SetTrigg(0x1a,0);
          SelectUnits1(1,&DAT_10033518,0);
          Patrol(1,&DAT_10033588,0);
        }
      }
    }
    iVar2 = GetDiff(0);
    if (0 < iVar2) {
      uVar1 = Trigg(0x26);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(3);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(6);
          if ((uVar1 & 0xff) != 0) {
            iVar2 = GetTotalAmount0(&DAT_10033498);
            if ((iVar2 == 0) && (DAT_10033480 < 4)) {
              CreateObject0(&DAT_10033498,&DAT_10033418,&DAT_10033560,1,&DAT_10033448,0);
              SelectUnits1(1,&DAT_10033498,0);
              SelSendAndKill(1,&DAT_100335e8,0,0);
              RunTimer(7,2000);
              SetTrigg(0x27,0);
              DAT_10033480 = DAT_10033480 + 1;
            }
          }
        }
      }
      iVar2 = GetTotalAmount0(&DAT_10033498);
      if (0 < iVar2) {
        uVar1 = Trigg(0x27);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetUnitsAmount1(&DAT_100335e8,&DAT_10033498);
          if (0 < iVar2) {
            SetTrigg(0x27,0);
            SelectUnits1(1,&DAT_10033498,0);
            Patrol(1,&DAT_10033600,0);
          }
        }
      }
    }
    iVar2 = GetDiff(0);
    if (1 < iVar2) {
      uVar1 = Trigg(0x10);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(0xc);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_10033538);
          if ((iVar2 == 0) && (DAT_10033484 < 3)) {
            CreateObject0(&DAT_10033538,&DAT_10033418,&DAT_10033410,1,&DAT_10033448,0);
            SelectUnits1(1,&DAT_10033538,0);
            SelSendAndKill(1,&DAT_10033468,0,0);
            SetTrigg(0x10,0);
            SetTrigg(0x11,0);
            DAT_10033484 = DAT_10033484 + 1;
          }
        }
      }
      iVar2 = GetTotalAmount0(&DAT_10033538);
      if (0 < iVar2) {
        uVar1 = Trigg(0x11);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetUnitsAmount1(&DAT_10033468,&DAT_10033538);
          if (0 < iVar2) {
            SetTrigg(0x11,0);
            SelectUnits1(1,&DAT_10033538,0);
            SetTrigg(0x10,0);
            Patrol(1,&DAT_10033570,0);
          }
        }
      }
    }
    iVar2 = GetDiff(0);
    if (1 < iVar2) {
      uVar1 = Trigg(0x28);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(0xc);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_100334a0);
          if ((iVar2 == 0) && (DAT_10033488 < 3)) {
            CreateObject0(&DAT_100334a0,&DAT_10033418,&DAT_10033410,1,&DAT_10033448,0);
            SelectUnits1(1,&DAT_100334a0,0);
            SelSendAndKill(1,&DAT_10033610,0,0);
            SetTrigg(0x28,0);
            SetTrigg(0x29,0);
            DAT_10033488 = DAT_10033488 + 1;
          }
        }
      }
      iVar2 = GetTotalAmount0(&DAT_100334a0);
      if (0 < iVar2) {
        uVar1 = Trigg(0x29);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetUnitsAmount1(&DAT_10033610,&DAT_100334a0);
          if (0 < iVar2) {
            SelectUnits1(1,&DAT_100334a0,0);
            Patrol(1,&DAT_10033620,0);
            SetTrigg(0x29,0);
            SetTrigg(0x28,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(7);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_10033520);
          if ((iVar2 == 0) && (DAT_1003348c < 4)) {
            CreateObject0(&DAT_10033520,&DAT_10033418,&DAT_10033560,1,&DAT_10033450,0);
            SelectUnits1(1,&DAT_10033520,0);
            SelSendAndKill(1,&DAT_100335c8,0,0);
            SetTrigg(0x25,0);
            RunTimer(5,2000);
            DAT_1003348c = DAT_1003348c + 1;
          }
        }
      }
    }
    uVar1 = Trigg(0x25);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_10033520), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_100335c8,&DAT_10033520);
      if (0 < iVar2) {
        SetTrigg(0x25,0);
        SelectUnits1(1,&DAT_10033520,0);
        Patrol(1,&DAT_100335d8,0);
      }
    }
    iVar2 = GetDiff(0);
    if (2 < iVar2) {
      uVar1 = Trigg(0x30);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(1);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_100334c0);
          if ((iVar2 == 0) && (DAT_10033490 < 4)) {
            CreateObject0(&DAT_100334c0,&DAT_10033418,&DAT_10033560,1,&DAT_10033450,0);
            SelectUnits1(1,&DAT_100334c0,0);
            SelSendAndKill(1,&DAT_100335d8,0,0);
            SetTrigg(0x31,0);
            RunTimer(5,2000);
            DAT_10033490 = DAT_10033490 + 1;
          }
        }
      }
      uVar1 = Trigg(0x31);
      if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_100334c0), 0 < iVar2)) {
        iVar2 = GetUnitsAmount1(&DAT_100335d8,&DAT_100334c0);
        if (0 < iVar2) {
          SetTrigg(0x31,0);
          SelectUnits1(1,&DAT_100334c0,0);
          Patrol(1,&DAT_100335c8,0);
        }
      }
    }
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(5);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_10033528);
          if ((iVar2 == 0) && (DAT_10033640 < 5)) {
            CreateObject0(&DAT_10033528,&DAT_10033418,&DAT_10033558,1,&DAT_10033450,0);
            SelectUnits1(1,&DAT_10033528,0);
            SelSendAndKill(1,&DAT_10033598,0,0);
            RunTimer(6,3000);
            SetTrigg(0x19,0);
            DAT_10033640 = DAT_10033640 + 1;
          }
        }
      }
    }
    iVar2 = GetTotalAmount0(&DAT_10033528);
    if (0 < iVar2) {
      uVar1 = Trigg(0x19);
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetUnitsAmount1(&DAT_10033598,&DAT_10033528);
        if (0 < iVar2) {
          SetTrigg(0x19,0);
          SelectUnits1(1,&DAT_10033528,0);
          Patrol(1,&DAT_100335a8,0);
        }
      }
    }
    iVar2 = GetDiff(0);
    if (0 < iVar2) {
      uVar1 = Trigg(0x2a);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(3);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(5);
          if ((uVar1 & 0xff) != 0) {
            iVar2 = GetTotalAmount0(&DAT_100334a8);
            if ((iVar2 == 0) && (DAT_10033644 < 4)) {
              CreateObject0(&DAT_100334a8,&DAT_10033418,&DAT_10033560,1,&DAT_10033450,0);
              SelectUnits1(1,&DAT_100334a8,0);
              SelSendAndKill(1,&DAT_100335c0,0,0);
              SetTrigg(0x2b,0);
              DAT_10033644 = DAT_10033644 + 1;
            }
          }
        }
      }
      iVar2 = GetTotalAmount0(&DAT_100334a8);
      if (0 < iVar2) {
        uVar1 = Trigg(0x2b);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetUnitsAmount1(&DAT_100335c0,&DAT_100334a8);
          if (0 < iVar2) {
            SetTrigg(0x2b,0);
            SelectUnits1(1,&DAT_100334a8,0);
            Patrol(1,&DAT_100335d0,0);
          }
        }
      }
    }
    uVar1 = Trigg(0xe);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(3);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(6);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_10033530);
          if ((iVar2 == 0) && (DAT_10033648 < 5)) {
            CreateObject0(&DAT_10033530,&DAT_10033418,&DAT_10033558,1,&DAT_10033450,0);
            SelectUnits1(1,&DAT_10033530,0);
            SelSendAndKill(1,&DAT_10033580,0,0);
            RunTimer(7,3000);
            DAT_10033648 = 0xd;
          }
        }
      }
    }
    iVar2 = GetDiff(0);
    if (1 < iVar2) {
      uVar1 = Trigg(0x12);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(0xc);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_10033540);
          if ((iVar2 == 0) && (DAT_1003364c < 3)) {
            CreateObject0(&DAT_10033540,&DAT_10033418,&DAT_10033410,1,&DAT_10033450,0);
            SelectUnits1(1,&DAT_10033540,0);
            SelSendAndKill(1,&DAT_10033460,0,0);
            SetTrigg(0x12,0);
            SetTrigg(0x13,0);
            DAT_1003364c = DAT_1003364c + 1;
          }
        }
      }
      iVar2 = GetTotalAmount0(&DAT_10033540);
      if (0 < iVar2) {
        uVar1 = Trigg(0x13);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetUnitsAmount1(&DAT_10033460,&DAT_10033540);
          if (0 < iVar2) {
            SelectUnits1(1,&DAT_10033540,0);
            Patrol(1,&DAT_10033578,0);
            SetTrigg(0x12,0);
            SetTrigg(0x13,0);
          }
        }
      }
    }
    iVar2 = GetDiff(0);
    if (1 < iVar2) {
      uVar1 = Trigg(0x2c);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(6);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = TimerDone(3);
          if ((uVar1 & 0xff) != 0) {
            iVar2 = GetTotalAmount0(&DAT_100334b0);
            if ((iVar2 == 0) && (DAT_10033650 < 3)) {
              CreateObject0(&DAT_100334b0,&DAT_10033418,&DAT_10033410,1,&DAT_10033450,0);
              SelectUnits1(1,&DAT_100334b0,0);
              SelSendAndKill(1,&DAT_10033630,0,0);
              SetTrigg(0x2c,0);
              SetTrigg(0x2d,0);
              DAT_10033650 = DAT_10033650 + 1;
            }
          }
        }
      }
      iVar2 = GetTotalAmount0(&DAT_100334b0);
      if (0 < iVar2) {
        uVar1 = Trigg(0x2d);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetUnitsAmount1(&DAT_10033630,&DAT_100334b0);
          if (0 < iVar2) {
            SelectUnits1(1,&DAT_100334b0,0);
            Patrol(1,&DAT_100335e0,0);
            SetTrigg(0x2c,0);
            SetTrigg(0x2d,0);
          }
        }
      }
    }
    iVar2 = GetDiff(0);
    if (2 < iVar2) {
      uVar1 = Trigg(0x22);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(0xb);
        if ((uVar1 & 0xff) != 0) {
          iVar2 = GetTotalAmount0(&DAT_10033548);
          if ((iVar2 == 0) && (DAT_10033654 < 2)) {
            CreateObject0(&DAT_10033548,&DAT_10033418,&DAT_10033420,1,&DAT_10033450,0);
            SelectUnits1(1,&DAT_10033548,0);
            SelSendAndKill(1,&DAT_100335a0,0,0);
            SetTrigg(0x23,0);
            SetTrigg(0x22,0);
            DAT_10033654 = DAT_10033654 + 1;
          }
        }
      }
      uVar1 = Trigg(0x23);
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetTotalAmount0(&DAT_10033548);
        if (0 < iVar2) {
          iVar2 = GetUnitsAmount1(&DAT_100335a0,&DAT_10033548);
          if (0 < iVar2) {
            SelectUnits1(1,&DAT_10033548,0);
            Patrol(1,&DAT_100335b0,0);
            SetTrigg(0x23,0);
            SetTrigg(0x22,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100333e0);
    if (iVar2 == 0) {
      SetTrigg(0x15,0);
      RunTimer(8,2000);
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_100333e8);
    if (iVar2 == 0) {
      SetTrigg(0x17,0);
      RunTimer(9,2000);
    }
  }
  iVar2 = GetDiff(0);
  if (iVar2 < 2) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetTotalAmount0(&DAT_100334c8);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount0(&DAT_100334d0);
        if (iVar2 == 0) {
          SetTrigg(0x14,0);
          RunTimer(8,4000);
        }
      }
    }
  }
  else {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetTotalAmount0(&DAT_100334c8);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount0(&DAT_100334d0);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount0(&DAT_100334e8);
          if (iVar2 == 0) {
            iVar2 = GetTotalAmount0(&DAT_100334f0);
            if (iVar2 == 0) {
              SetTrigg(0x14,0);
              RunTimer(8,6000);
            }
          }
        }
      }
    }
  }
  iVar2 = GetDiff(0);
  if (1 < iVar2) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetTotalAmount0(&DAT_100334d8);
      if (iVar2 == 0) {
        iVar2 = GetTotalAmount0(&DAT_100334e0);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount0(&DAT_100334f8);
          if (iVar2 == 0) {
            iVar2 = GetTotalAmount0(&DAT_10033500);
            if (iVar2 == 0) {
              SetTrigg(0x16,0);
              RunTimer(9,6000);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetTotalAmount0(&DAT_100334d8);
    if (iVar2 == 0) {
      iVar2 = GetTotalAmount0(&DAT_100334e0);
      if (iVar2 == 0) {
        SetTrigg(0x16,0);
        RunTimer(9,4000);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if (((uVar1 & 0xff) != 0) && (DAT_10033658 < 0xf)) {
      SetTrigg(0x14,0);
      CreateObject0(&DAT_100334c8,&DAT_10033418,&DAT_10033550,2,&DAT_10033438,0xb4);
      CreateObject0(&DAT_100334d0,&DAT_10033418,&DAT_10033550,2,&DAT_10033438,0xb4);
      iVar2 = GetDiff(0);
      if (1 < iVar2) {
        CreateObject0(&DAT_100334e8,&DAT_10033418,&DAT_10033638,2,&DAT_10033438,0xb4);
        CreateObject0(&DAT_100334f0,&DAT_10033418,&DAT_10033638,2,&DAT_10033438,0xb4);
      }
      SelectUnits1(2,&DAT_100334c8,0);
      SelectUnits1(2,&DAT_100334d0,1);
      iVar2 = GetDiff(0);
      if (1 < iVar2) {
        SelectUnits1(2,&DAT_100334e8,1);
        SelectUnits1(2,&DAT_100334f0,1);
      }
      SelSendAndKill(2,&DAT_10033440,0,0);
      DAT_10033658 = DAT_10033658 + 1;
      SetTrigg(0x1b,0);
      ClearSelection(2);
    }
  }
  iVar2 = GetDiff(0);
  if (iVar2 < 2) {
    uVar1 = Trigg(0x1b);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_100334c8);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_100334d0);
        if (iVar2 < 1) goto LAB_10004ff4;
      }
      SetTrigg(0x1b,0);
      SelectUnits1(2,&DAT_100334c8,0);
      SelectUnits1(2,&DAT_100334d0,1);
      Patrol(2,&DAT_10033448,0);
      ClearSelection(2);
    }
  }
  else {
    uVar1 = Trigg(0x1b);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_100334e8);
      if (0 < iVar2) {
        iVar2 = GetTotalAmount0(&DAT_100334f0);
        if (0 < iVar2) {
          iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_100334c8);
          if (iVar2 < 1) {
            iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_100334d0);
            if (iVar2 < 1) {
              iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_100334e8);
              if (iVar2 < 1) {
                iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_100334f0);
                if (iVar2 < 1) goto LAB_10004ee4;
              }
            }
          }
          SetTrigg(0x1b,0);
          SelectUnits1(2,&DAT_100334c8,0);
          SelectUnits1(2,&DAT_100334d0,1);
          SelectUnits1(2,&DAT_100334e8,1);
          SelectUnits1(2,&DAT_100334f0,1);
        }
      }
    }
LAB_10004ee4:
    Patrol(2,&DAT_10033448,0);
    ClearSelection(2);
  }
LAB_10004ff4:
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(9);
    if (((uVar1 & 0xff) != 0) && (DAT_1003365c < 0xf)) {
      SetTrigg(0x16,0);
      CreateObject0(&DAT_100334d8,&DAT_10033418,&DAT_10033550,2,&DAT_10033430,0xb4);
      CreateObject0(&DAT_100334e0,&DAT_10033418,&DAT_10033550,2,&DAT_10033430,0xb4);
      iVar2 = GetDiff(0);
      if (1 < iVar2) {
        CreateObject0(&DAT_100334f8,&DAT_10033418,&DAT_10033638,2,&DAT_10033430,0xb4);
        CreateObject0(&DAT_10033500,&DAT_10033418,&DAT_10033638,2,&DAT_10033430,0xb4);
      }
      SelectUnits1(2,&DAT_100334d8,0);
      SelectUnits1(2,&DAT_100334e0,1);
      iVar2 = GetDiff(0);
      if (1 < iVar2) {
        SelectUnits1(2,&DAT_100334f8,1);
        SelectUnits1(2,&DAT_10033500,1);
      }
      SelSendAndKill(2,&DAT_10033440,0,0);
      DAT_1003365c = DAT_1003365c + 1;
      SetTrigg(0x1c,0);
      ClearSelection(2);
    }
  }
  iVar2 = GetDiff(0);
  if (iVar2 < 2) {
    uVar1 = Trigg(0x1c);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_100334d8);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_100334e0);
        if (iVar2 < 1) goto LAB_10005473;
      }
      SetTrigg(0x1c,0);
      SelectUnits1(2,&DAT_100334d8,0);
      SelectUnits1(2,&DAT_100334e0,1);
      Patrol(2,&DAT_10033450,0);
      ClearSelection(2);
    }
  }
  else {
    uVar1 = Trigg(0x1c);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_100334f8);
      if (0 < iVar2) {
        iVar2 = GetTotalAmount0(&DAT_10033500);
        if (0 < iVar2) {
          iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_100334d8);
          if (iVar2 < 1) {
            iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_100334f8);
            if (iVar2 < 1) {
              iVar2 = GetUnitsAmount1(&DAT_10033440,&DAT_10033500);
              if (iVar2 < 1) goto LAB_10005473;
            }
          }
          SetTrigg(0x1c,0);
          SelectUnits1(2,&DAT_100334d8,0);
          SelectUnits1(2,&DAT_100334e0,1);
          SelectUnits1(2,&DAT_100334f8,1);
          SelectUnits1(2,&DAT_10033500,1);
          Patrol(2,&DAT_10033450,0);
          ClearSelection(2);
        }
      }
    }
  }
LAB_10005473:
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_100335f0,0);
      if (0 < iVar2) {
        SetTrigg(0x1d,0);
        SetTrigg(0x33,0);
        SetTrigg(0x34,0);
      }
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_100335f0,0);
      if (iVar2 == 0) {
        SetTrigg(0x1d,0);
        SetTrigg(0x33,0);
        SetTrigg(0x34,0);
      }
    }
  }
  uVar1 = Trigg(0x35);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_10033590,0);
      if (0 < iVar2) {
        SetTrigg(0x1e,0);
        SetTrigg(0x35,0);
        SetTrigg(0x36,0);
      }
    }
  }
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_10033590,0);
      if (iVar2 == 0) {
        SetTrigg(0x1e,0);
        SetTrigg(0x36,0);
        SetTrigg(0x35,0);
      }
    }
  }
  uVar1 = Trigg(0x37);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x37,0);
    RunTimer(10,800);
    SetTrigg(0x38,0);
  }
  uVar1 = Trigg(0x38);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x37,0);
      SetTrigg(0x38,0);
    }
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(99,0);
      ShowPage("#PAGE19");
      LooseGame();
    }
  }
  uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(100,0);
      ShowPage("#PAGE20");
      ShowVictory();
    }
  }
  uStack_8 = 0x10005898;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

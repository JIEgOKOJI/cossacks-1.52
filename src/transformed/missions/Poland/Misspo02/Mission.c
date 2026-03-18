#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002c0c4[] = "Z9";
char DAT_1002c0c8[] = "Z8";
char DAT_1002c0cc[] = "Z7";
char DAT_1002c0d0[] = "Z6";
char DAT_1002c0d4[] = "Z5";
char DAT_1002c0d8[] = "Z4";
char DAT_1002c0dc[] = "Z3";
char DAT_1002c0e0[] = "Z2";
char DAT_1002c0e4[] = "Z1";
char DAT_1002c0e8[] = "G8B";
char DAT_1002c0ec[] = "G8A";
char DAT_1002c0f0[] = "G8";
char DAT_1002c0f4[] = "G7B";
char DAT_1002c0f8[] = "G7A";
char DAT_1002c0fc[] = "G7";
char DAT_1002c100[] = "G6A";
char DAT_1002c104[] = "G6";
char DAT_1002c108[] = "G5";
char DAT_1002c10c[] = "G4A";
char DAT_1002c110[] = "G4";
char DAT_1002c114[] = "G3";
char DAT_1002c118[] = "G2";
char DAT_1002c11c[] = "G1";
long long DAT_100313e0 = 0;
int DAT_100313e8 = 0;
long long DAT_100313f0 = 0;
long long DAT_100313f8 = 0;
long long DAT_10031400 = 0;
long long DAT_10031408 = 0;
long long DAT_10031410 = 0;
long long DAT_10031418 = 0;
long long DAT_10031420 = 0;
long long DAT_10031428 = 0;
long long DAT_10031430 = 0;
long long DAT_10031438 = 0;
long long DAT_10031440 = 0;
long long DAT_10031448 = 0;
long long DAT_10031450 = 0;
long long DAT_10031458 = 0;
long long DAT_10031460 = 0;
long long DAT_10031468 = 0;
long long DAT_10031470 = 0;
long long DAT_10031478 = 0;
long long DAT_10031480 = 0;
long long DAT_10031490 = 0;
long long DAT_10031498 = 0;
long long DAT_100314a0 = 0;
long long DAT_100314a8 = 0;
long long DAT_100314b0 = 0;
int DAT_100314b8 = 0;
long long DAT_100314d0 = 0;
OneUnit DAT_100314d8 = {0};
int DAT_100314e0 = 0;
int DAT_100314e1 = 0;
long long DAT_10031508 = 0;
long long DAT_10031510 = 0;
long long DAT_10031518 = 0;
long long DAT_10031520 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_100313f0,DAT_1002c11c);
  RegisterUnits(&DAT_100313f8,DAT_1002c118);
  RegisterUnits(&DAT_10031400,DAT_1002c114);
  RegisterUnits(&DAT_10031408,DAT_1002c110);
  RegisterUnits(&DAT_10031480,DAT_1002c10c);
  RegisterUnits(&DAT_10031410,DAT_1002c108);
  RegisterUnits(&DAT_10031418,DAT_1002c104);
  RegisterUnits(&DAT_10031490,DAT_1002c100);
  RegisterUnits(&DAT_10031420,DAT_1002c0fc);
  RegisterUnits(&DAT_10031498,DAT_1002c0f8);
  RegisterUnits(&DAT_100314a0,DAT_1002c0f4);
  RegisterUnits(&DAT_10031428,DAT_1002c0f0);
  RegisterUnits(&DAT_100314a8,DAT_1002c0ec);
  RegisterUnits(&DAT_100314b0,DAT_1002c0e8);
  RegisterZone(&DAT_10031438,DAT_1002c0e4);
  RegisterZone(&DAT_10031440,DAT_1002c0e0);
  RegisterZone(&DAT_10031448,DAT_1002c0dc);
  RegisterZone(&DAT_10031450,DAT_1002c0d8);
  RegisterZone(&DAT_10031458,DAT_1002c0d4);
  RegisterZone(&DAT_10031460,DAT_1002c0d0);
  RegisterZone(&DAT_10031468,DAT_1002c0cc);
  RegisterZone(&DAT_10031470,DAT_1002c0c8);
  RegisterZone(&DAT_10031478,DAT_1002c0c4);
  RegisterUpgrade(&DAT_10031510,"Kozak_loshad(UA)SHIELD");
  RegisterUpgrade(&DAT_10031518,"Kozak_loshad(UA)ATTACK");
  RegisterVar(&DAT_100314b8,4);
  RegisterVar(&DAT_100313e8,4);
  RegisterUnitType(&DAT_10031508,"Konushnia_Swesair(PL)");
  RegisterUnitType(&DAT_100313e0,"Mortira_b(TU)");
  RegisterUnitType(&DAT_100314d0,"Kozak_loshad(UA)");
  RegisterUnitType(&DAT_10031520,"Barack_Turki(TU)");
  RegisterDynGroup(&DAT_10031430);
  SetPlayerName(1,"M_ALLIES");
  SetPlayerName(3,"OSMAN");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"OSMAN");
  EnableUnit(0,&DAT_10031508,0);
  EnableUnit(0,&DAT_10031520,0);
  EnableUnit(0,&DAT_100314d0,0);
  EnableUnit(5,&DAT_100313e0,0);
  DisableUpgrade(0,&DAT_10031510);
  DisableUpgrade(0,&DAT_10031518);
  uStack_8 = 0x1000152c;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    ChangeFriends(0,0x13);
    ChangeFriends(1,0x12);
    ChangeFriends(3,0x28);
    ChangeFriends(4,0x12);
    ChangeFriends(5,0x28);
    SelectUnits(&DAT_100313f0,0);
    DAT_100313e8 = 10;
    DAT_100314b8 = 0;
    SetTrigg(99,0);
    SetResource(0,3,4000);
    SetResource(0,1,4000);
    SetResource(0,0,4000);
    SetResource(0,2,4000);
    SetResource(0,5,4000);
    SetResource(0,4,4000);
    SetResource(5,3,5000);
    SetResource(5,1,5000);
    SetResource(5,0,5000);
    SetResource(5,2,5000);
    SetResource(5,5,5000);
    SetResource(5,4,5000);
    SetStartPoint(&DAT_10031438);
    ShowPage("#PAGE0");
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      ShowPage("#OTST1");
      SetResource(0,3,200000);
      SetResource(0,1,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
    }
    SelectUnits(&DAT_10031420,0);
    DoNotUseSelInAI(5);
    SelSendAndKill(5,&DAT_10031460,0x96,0);
    TakeWood(&DAT_10031418);
    SetLightSpot(&DAT_10031470,3,1);
    uVar2 = GetDiff(1);
    StartAI(5,"TURKISH.0",0,1,0,uVar2);
    SelectUnits(&DAT_10031420,0);
    DoNotUseSelInAI(5);
  }
  uVar1 = Trigg(0x62);
  if (((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_100313f0), iVar3 == 0)) {
    SetTrigg(0x62,0);
    iVar3 = GetResource(0,3);
    if (iVar3 < 1) {
      ShowPage("#PAGE10A");
    }
    else {
      ShowPage("#PAGE10");
    }
    LooseGame();
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x61,0);
      ShowPage("#PAGE21");
      ShowVictory();
    }
  }
  iVar3 = GetKilled(&DAT_100313f0);
  if (DAT_100313e8 <= iVar3) {
    DAT_100313e8 = DAT_100313e8 + 10 + DAT_100313e8 / 5;
    ShowPage("#AWARD");
    GetUnitInfo(&DAT_100313f0,0,&DAT_100314d8);
    DAT_100314e0 = DAT_100314e0 + '\x01';
    DAT_100314e1 = DAT_100314e1 + '\x01';
    SetUnitInfo(&DAT_100314d8);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10031440,0);
    if ((0 < iVar3) && (iVar3 = GetTotalAmount0(&DAT_100313f8), 0 < iVar3)) {
      SetTrigg(1,0);
      ShowPage("#PAGE1");
      SelectUnits(&DAT_100313f8,0);
      SelSendTo(1,&DAT_10031450,0x1e,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031450,&DAT_100313f0);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount1(&DAT_10031450,&DAT_100313f8);
      if (0 < iVar3) {
        SetTrigg(2,0);
        uVar1 = Trigg(0x21);
        if ((uVar1 & 0xff) == 0) {
          iVar3 = GetResource(0,1);
          if (iVar3 < 3000) {
            local_10 = AskMultilineQuestion(9,"#PAGE2E",0,"Q9_1|Q9_2|Q9_4");
            if (local_10 == 0) {
              ShowPage("#PAGE2A");
              SetTrigg(0x21,0);
            }
            else if (local_10 == 1) {
              ShowPage("#PAGE2B");
              SelectUnits(&DAT_10031410,0);
              SelChangeNation(1,2);
              SetTrigg(0x21,0);
            }
            else if (local_10 == 2) {
              ShowPage("#PAGE2C");
              SetTrigg(0x21,0);
            }
          }
          else {
            local_14 = AskMultilineQuestion(9,"#PAGE2E",0,"Q9_1|Q9_2|Q9_3|Q9_4");
            switch(local_14) {
            case 0:
              ShowPage("#PAGE2A");
              SetTrigg(0x21,0);
              break;
            case 1:
              ShowPage("#PAGE2B");
              SelectUnits(&DAT_10031410,0);
              SelChangeNation(1,2);
              SetTrigg(0x21,0);
              break;
            case 2:
              ShowPage("#PAGE2D");
              AddResource(0,1,-3000);
              SelectUnits(&DAT_10031480,0);
              SelOpenGates(1);
              SelectUnits(&DAT_10031408,0);
              SelChangeNation(1,0);
              SetTrigg(0x21,0);
              break;
            case 3:
              ShowPage("#PAGE2C");
              SetTrigg(0x21,0);
            }
          }
        }
        else {
          iVar3 = GetResource(0,1);
          if (iVar3 < 3000) {
            local_8 = AskMultilineQuestion(9,"#PAGE2",0,"Q9_1|Q9_2|Q9_4");
            if (local_8 == 0) {
              ShowPage("#PAGE2A");
            }
            else if (local_8 == 1) {
              ShowPage("#PAGE2B");
              SelectUnits(&DAT_10031410,0);
              SelChangeNation(1,2);
            }
            else if (local_8 == 2) {
              ShowPage("#PAGE2C");
              SetTrigg(0x21,0);
            }
          }
          else {
            local_c = AskMultilineQuestion(9,"#PAGE2",0,"Q9_1|Q9_2|Q9_3|Q9_4");
            switch(local_c) {
            case 0:
              ShowPage("#PAGE2A");
              break;
            case 1:
              ShowPage("#PAGE2B");
              SelectUnits(&DAT_10031410,0);
              SelChangeNation(1,2);
              break;
            case 2:
              ShowPage("#PAGE2D");
              AddResource(0,1,-3000);
              SelectUnits(&DAT_10031480,0);
              SelOpenGates(1);
              SelectUnits(&DAT_10031408,0);
              SelChangeNation(1,0);
              break;
            case 3:
              ShowPage("#PAGE2C");
              SetTrigg(0x21,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      iVar3 = GetUnitsAmount1(&DAT_10031450,&DAT_100313f0);
      if (iVar3 == 0) {
        SetTrigg(2,0);
      }
    }
  }
  uVar1 = Trigg(3);
  if (((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_10031418), 0 < iVar3)) {
    iVar3 = GetUnitsAmount1(&DAT_10031460,&DAT_10031420);
    if (0 < iVar3) {
      SetTrigg(3,0);
      SelectUnits(&DAT_10031420,0);
      SelAttackGroup(5,&DAT_10031418);
      ShowPage("#PAGE3");
    }
  }
  uVar1 = Trigg(3);
  if (((uVar1 & 0xff) == 0) && (iVar3 = GetTotalAmount0(&DAT_10031418), 0 < iVar3)) {
    SelectUnits(&DAT_10031420,0);
    SelAttackGroup(5,&DAT_10031418);
  }
  iVar3 = GetUnitsByNation(&DAT_10031418,5);
  if (0 < iVar3) {
    ClearSelection(5);
    SelectUnits1(5,&DAT_10031418,0);
    SelDie(5);
  }
  iVar3 = GetUnitsByNation(&DAT_10031490,5);
  if (0 < iVar3) {
    ClearSelection(5);
    SelectUnits1(5,&DAT_10031490,0);
    SelDie(5);
  }
  uVar1 = Trigg(0x31);
  if (((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_10031418), iVar3 == 0)) {
    SetTrigg(0x31,0);
    SelectUnits(&DAT_10031420,0);
    SelSendAndKill(5,&DAT_10031470,0,0);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031470,&DAT_10031420);
    if (0 < iVar3) {
      SetTrigg(4,0);
      ShowPage("#PAGE4");
      SelectUnits(&DAT_10031498,0);
      SelAttackGroup(5,&DAT_100314a8);
      SelectUnits(&DAT_100314a0,0);
      SelAttackGroup(5,&DAT_10031428);
    }
  }
  iVar3 = GetUnitsByNation(&DAT_100314b0,5);
  if (0 < iVar3) {
    ClearSelection(5);
    SelectUnits1(5,&DAT_100314b0,0);
    SelDie(5);
  }
  uVar1 = Trigg(0x22);
  if ((((uVar1 & 0xff) != 0) && (iVar3 = GetTotalAmount0(&DAT_100314a8), iVar3 == 0)) &&
     (iVar3 = GetTotalAmount0(&DAT_10031428), iVar3 == 0)) {
    SetTrigg(0x22,0);
    ChangeFriends(5,0x29);
    ClearLightSpot(1);
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      RunTimer(7,0x5dc);
    }
    else {
      SelectUnits(&DAT_10031420,0);
      SelSendTo(5,&DAT_10031458,0,0);
      SelSendTo(5,&DAT_10031438,0xc4,2);
    }
  }
  uVar1 = TimerDoneFirst(7);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10031420,0);
    SelSendTo(5,&DAT_10031458,0,0);
    SelSendTo(5,&DAT_10031438,0xc4,2);
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031438,&DAT_10031420);
    if (0 < iVar3) {
      SetTrigg(5,0);
      local_18 = AskMultilineQuestion(9,"#PAGE5",0,"Q10_1|Q10_2|Q10_3|Q10_4");
      if (local_18 == 2) {
        iVar3 = GetResource(0,1);
        if (iVar3 < 1000) {
          ShowPage("#PAGE5B");
          uVar2 = GetResource(0,1);
          AddResource(5,1,uVar2);
          iVar3 = GetResource(0,1);
          DAT_100314b8 = 1000 - iVar3;
          SetResource(0,1,0);
        }
        else {
          ShowPage("#PAGE5A");
          AddResource(0,1,-1000);
          AddResource(5,1,1000);
        }
        iVar3 = GetDiff(1);
        RunTimer(1,iVar3 * -3000 + 20000);
        SelectUnits(&DAT_10031420,0);
        SelSendTo(5,&DAT_10031458,0xc4,0);
      }
      else if (local_18 == 3) {
        iVar3 = GetResource(0,1);
        if (iVar3 < 1000) {
          ShowPage("#PAGE5B");
          uVar2 = GetResource(0,1);
          AddResource(5,1,uVar2);
          iVar3 = GetResource(0,1);
          DAT_100314b8 = 1000 - iVar3;
          SetResource(0,1,0);
          SelectUnits(&DAT_10031420,0);
          SelSendTo(5,&DAT_10031458,0xc4,0);
          iVar3 = GetDiff(1);
          RunTimer(1,iVar3 * -5000 + 30000);
        }
        else {
          ShowPage("#PAGE5C");
          ChangeFriends(5,0x28);
          SelectUnits(&DAT_10031420,0);
          SelSendAndKill(5,&DAT_10031438,0,0);
          SetTrigg(0x32,0);
        }
      }
      else {
        ShowPage("#PAGE5D");
        ChangeFriends(5,0x28);
        SelectUnits(&DAT_10031420,0);
        SelSendAndKill(5,&DAT_10031438,0,0);
        SetTrigg(0x32,0);
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10031420,0);
    SelSendTo(5,&DAT_10031438,0xc4,0);
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_10031438,&DAT_10031420);
      if (0 < iVar3) {
        if (DAT_100314b8 == 0) {
          local_1c = AskMultilineQuestion(9,"#PAGE6",0,"Q10_5|Q10_6|Q10_7|Q10_8");
          switch(local_1c) {
          case 0:
            ShowPage("#PAGE5E");
            SelectUnits(&DAT_10031420,0);
            SelSendTo(5,&DAT_10031458,0x40,0);
            SelSendTo(5,&DAT_10031468,0,2);
            SetTrigg(0x32,0);
            break;
          case 1:
            ShowPage("#PAGE5F");
            ChangeFriends(5,0x28);
            SelectUnits(&DAT_10031420,0);
            SelSendAndKill(5,&DAT_10031438,0,0);
            SetTrigg(0x32,0);
            break;
          case 2:
            iVar3 = GetResource(0,1);
            if (iVar3 < 1000) {
              ShowPage("#PAGE5B");
              uVar2 = GetResource(0,1);
              AddResource(5,1,uVar2);
              iVar3 = GetResource(0,1);
              DAT_100314b8 = 1000 - iVar3;
              SetResource(0,1,0);
            }
            else {
              ShowPage("#PAGE5G");
              AddResource(0,1,-1000);
              AddResource(5,1,1000);
            }
            SelectUnits(&DAT_10031420,0);
            SelSendTo(5,&DAT_10031458,0xc4,0);
            iVar3 = GetDiff(1);
            RunTimer(1,iVar3 * -5000 + 30000);
            break;
          case 3:
            iVar3 = GetResource(0,1);
            if (iVar3 < 1000) {
              ShowPage("#PAGE5B");
              uVar2 = GetResource(0,1);
              AddResource(5,1,uVar2);
              iVar3 = GetResource(0,1);
              DAT_100314b8 = 1000 - iVar3;
              SetResource(0,1,0);
              SelectUnits(&DAT_10031420,0);
              SelSendTo(5,&DAT_10031458,0xc4,0);
              iVar3 = GetDiff(1);
              RunTimer(1,iVar3 * -5000 + 30000);
            }
            else {
              ShowPage("#PAGE5C");
              ChangeFriends(5,0x28);
              SelectUnits(&DAT_10031420,0);
              SelSendAndKill(5,&DAT_10031438,0,0);
              SetTrigg(0x32,0);
            }
          }
        }
        else {
          local_20 = AskMultilineQuestion(9,"#PAGE6A",0,"Q10_5|Q10_6|Q10_7|Q10_8");
          switch(local_20) {
          case 0:
            ShowPage("#PAGE5E");
            SelectUnits(&DAT_10031420,0);
            SelSendTo(5,&DAT_10031458,0x40,0);
            SelSendTo(5,&DAT_10031468,0,2);
            SetTrigg(0x32,0);
            break;
          case 1:
            ShowPage("#PAGE5F");
            ChangeFriends(5,0x28);
            SelectUnits(&DAT_10031420,0);
            SelSendAndKill(5,&DAT_10031438,0,0);
            SetTrigg(0x32,0);
            break;
          case 2:
            iVar3 = GetResource(0,1);
            if (iVar3 < DAT_100314b8 + 1000) {
              uVar1 = Trigg(0x33);
              if ((uVar1 & 0xff) == 0) {
                ShowPage("#PAGE5J");
                SelectUnits(&DAT_10031420,0);
                SelSendTo(5,&DAT_10031458,0x40,0);
                SelSendTo(5,&DAT_10031468,0,2);
                SetTrigg(0x32,0);
              }
              else {
                SetTrigg(0x33,0);
                ShowPage("#PAGE5H");
                uVar2 = GetResource(0,1);
                AddResource(5,1,uVar2);
                iVar4 = DAT_100314b8 + 1000;
                iVar3 = GetResource(0,1);
                DAT_100314b8 = iVar4 - iVar3;
                SetResource(0,1,0);
                SelectUnits(&DAT_10031420,0);
                SelSendTo(5,&DAT_10031458,0xc4,0);
                iVar3 = GetDiff(1);
                RunTimer(1,iVar3 * -5000 + 30000);
              }
            }
            else {
              ShowPage("#PAGE5G");
              AddResource(0,1,-1000 - DAT_100314b8);
              AddResource(5,1,DAT_100314b8 + 1000);
              DAT_100314b8 = 0;
              SelectUnits(&DAT_10031420,0);
              SelSendTo(5,&DAT_10031458,0xc4,0);
              iVar3 = GetDiff(1);
              RunTimer(1,iVar3 * -5000 + 30000);
            }
            break;
          case 3:
            iVar3 = GetResource(0,1);
            if (iVar3 < 1000) {
              uVar1 = Trigg(0x33);
              if ((uVar1 & 0xff) == 0) {
                ShowPage("#PAGE5J");
                SelectUnits(&DAT_10031420,0);
                SelSendTo(5,&DAT_10031458,0x40,0);
                SelSendTo(5,&DAT_10031468,0,2);
                SetTrigg(0x32,0);
              }
              else {
                SetTrigg(0x33,0);
                ShowPage("#PAGE5H");
                uVar2 = GetResource(0,1);
                AddResource(5,1,uVar2);
                iVar4 = DAT_100314b8 + 1000;
                iVar3 = GetResource(0,1);
                DAT_100314b8 = iVar4 - iVar3;
                SetResource(0,1,0);
                SelectUnits(&DAT_10031420,0);
                SelSendTo(5,&DAT_10031458,0xc4,0);
                iVar3 = GetDiff(1);
                RunTimer(1,iVar3 * -5000 + 30000);
              }
            }
            else {
              ShowPage("#PAGE5C");
              ChangeFriends(5,0x28);
              SelectUnits(&DAT_10031420,0);
              SelSendAndKill(5,&DAT_10031438,0,0);
              SetTrigg(0x32,0);
            }
          }
        }
      }
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_10031468,&DAT_10031420);
  if (0 < iVar3) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x32);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(6,0);
        ShowPage("#PAGE6B");
        ChangeFriends(5,0x28);
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10031478,0);
    if (0 < iVar3) {
      SetTrigg(7,0);
      ShowPage("#PAGE7");
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031448,&DAT_100313f0);
    if ((0 < iVar3) && (iVar3 = GetTotalAmount0(&DAT_10031400), 0 < iVar3)) {
      uVar1 = Trigg(0x34);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x34,0);
        local_24 = AskMultilineQuestion(9,"#PAGE8",0,"Q11_1|Q11_2");
        if (local_24 == 0) {
          ShowPage("#PAGE8A");
          SaveSelectedUnits(0,&DAT_10031430,0);
          ClearSelection(0);
          SelectUnits1(0,&DAT_10031408,0);
          SelSendAndKill(0,&DAT_10031468,0,0);
          SelectUnits(&DAT_10031430,0);
          RunTimer(2,0x32);
          RunTimer(3,2000);
        }
        else if (local_24 == 1) {
          local_28 = AskMultilineQuestion(9,"#PAGE8B",0,"Q11_3|Q11_4|Q11_5");
          if (local_28 == 0) {
            ShowPage("#PAGE8A");
            SaveSelectedUnits(0,&DAT_10031430,0);
            ClearSelection(0);
            SelectUnits1(0,&DAT_10031408,0);
            SelSendAndKill(0,&DAT_10031468,0,0);
            SelectUnits(&DAT_10031430,0);
            RunTimer(2,0x32);
            RunTimer(3,2000);
          }
          else if (local_28 == 1) {
            ShowPage("#PAGE8C");
            ChangeFriends(0,3);
            SelectUnits(&DAT_10031400,0);
            SelAttackGroup(4,&DAT_100313f0);
            SetTrigg(8,0);
          }
          else if (local_28 == 2) {
            iVar3 = GetResource(0,1);
            if (iVar3 < 500) {
              local_2c = AskMultilineQuestion(9,"#PAGE8D",0,"Q11_6|Q11_8|Q11_9");
              if (local_2c == 0) {
                ShowPage("#PAGE8E");
                SetTrigg(8,0);
              }
              else if (local_2c == 1) {
                ShowPage("#PAGE8G");
              }
              else if (local_2c == 2) {
                ShowPage("#PAGE8H");
                SelectUnits(&DAT_10031400,0);
                SelChangeNation(4,0);
                SetTrigg(8,0);
              }
            }
            else {
              local_30 = AskMultilineQuestion(9,"#PAGE8D",0,"Q11_6|Q11_7|Q11_8|Q11_9");
              switch(local_30) {
              case 0:
                ShowPage("#PAGE8E");
                SetTrigg(8,0);
                break;
              case 1:
                ShowPage("#PAGE8F");
                AddResource(0,1,-500);
                SelectUnits(&DAT_10031400,0);
                SelChangeNation(4,0);
                SetTrigg(8,0);
                break;
              case 2:
                ShowPage("#PAGE8G");
                break;
              case 3:
                ShowPage("#PAGE8H");
                SelectUnits(&DAT_10031400,0);
                SelChangeNation(4,0);
                SetTrigg(8,0);
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031448,&DAT_100313f0);
    if (iVar3 == 0) {
      SetTrigg(0x34,0);
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_10031430,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10031408,0);
    SelSendAndKill(0,&DAT_10031468,0,0);
    SelectUnits(&DAT_10031430,0);
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) == 0) {
      RunTimer(2,0x32);
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

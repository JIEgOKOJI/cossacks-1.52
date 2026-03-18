#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_1002b0e0[] = "Z10";
char DAT_1002b0e4[] = "Z9A";
char DAT_1002b0e8[] = "Z9";
char DAT_1002b0ec[] = "Z8A";
char DAT_1002b0f0[] = "Z8";
char DAT_1002b0f4[] = "Z7A";
char DAT_1002b0f8[] = "Z7";
char DAT_1002b0fc[] = "Z6";
char DAT_1002b100[] = "Z5";
char DAT_1002b104[] = "Z4";
char DAT_1002b108[] = "Z3";
char DAT_1002b10c[] = "Z2";
char DAT_1002b110[] = "Z1";
char DAT_1002b114[] = "G9";
char DAT_1002b118[] = "G8";
char DAT_1002b11c[] = "G7";
char DAT_1002b120[] = "G6";
char DAT_1002b124[] = "G5";
char DAT_1002b128[] = "G4A";
char DAT_1002b12c[] = "G4";
char DAT_1002b130[] = "G3";
char DAT_1002b134[] = "G2";
char DAT_1002b138[] = "G1B";
char DAT_1002b13c[] = "G1A";
char DAT_1002b140[] = "G1";
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
int DAT_100304f0 = 0;
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
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10030408,DAT_1002b140);
  RegisterUnits(&DAT_10030490,DAT_1002b13c);
  RegisterUnits(&DAT_10030498,DAT_1002b138);
  RegisterUnits(&DAT_10030410,DAT_1002b134);
  RegisterUnits(&DAT_10030418,DAT_1002b130);
  RegisterUnits(&DAT_10030420,DAT_1002b12c);
  RegisterUnits(&DAT_100304e8,DAT_1002b128);
  RegisterUnits(&DAT_10030428,DAT_1002b124);
  RegisterUnits(&DAT_10030430,DAT_1002b120);
  RegisterUnits(&DAT_10030438,DAT_1002b11c);
  RegisterUnits(&DAT_10030440,DAT_1002b118);
  RegisterUnits(&DAT_10030448,DAT_1002b114);
  RegisterZone(&DAT_100304a0,DAT_1002b110);
  RegisterZone(&DAT_100304a8,DAT_1002b10c);
  RegisterZone(&DAT_100304b0,DAT_1002b108);
  RegisterZone(&DAT_100304b8,DAT_1002b104);
  RegisterZone(&DAT_100304c0,DAT_1002b100);
  RegisterZone(&DAT_100304c8,DAT_1002b0fc);
  RegisterZone(&DAT_100304d0,DAT_1002b0f8);
  RegisterZone(&DAT_10030530,DAT_1002b0f4);
  RegisterZone(&DAT_100304d8,DAT_1002b0f0);
  RegisterZone(&DAT_10030538,DAT_1002b0ec);
  RegisterZone(&DAT_100304e0,DAT_1002b0e8);
  RegisterZone(&DAT_10030540,DAT_1002b0e4);
  RegisterZone(&DAT_10030528,DAT_1002b0e0);
  ChangeFriends(0,1);
  ChangeFriends(1,0x16);
  ChangeFriends(2,0x16);
  ChangeFriends(4,0x11);
  RegisterUnitType(&DAT_10030518,"Pikiner_polan(PL)");
  RegisterUnitType(&DAT_10030548,"Reitor_Polsha(PL)");
  RegisterUnitType(&DAT_100304f8,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_10030520,"SUNDUK1O(UN)");
  RegisterUnitType(&DAT_10030508,"SUNDUK2Z(UN)");
  RegisterUnitType(&DAT_10030510,"SUNDUK2O(UN)");
  RegisterFormation(&DAT_100303e0,"#LINE8");
  RegisterFormation(&DAT_100303e8,"#LINE13PUS");
  RegisterFormation(&DAT_100303f0,"#LINE22PUS");
  RegisterFormation(&DAT_100303f8,"#LINEMORB14");
  RegisterFormation(&DAT_10030500,"#ALONE");
  RegisterVar(&DAT_10030400,8);
  RegisterVar(&DAT_10030478,8);
  RegisterDynGroup(&DAT_10030468);
  RegisterVar(&DAT_10030450,8);
  RegisterVar(&DAT_10030458,8);
  RegisterVar(&DAT_10030460,8);
  RegisterVar(&DAT_10030470,8);
  RegisterVar(&DAT_10030480,8);
  RegisterVar(&DAT_10030488,8);
  SetPlayerName(1,"RUSSIANS");
  SetPlayerName(2,"RUSSIANS");
  SetPlayerName(4,"ALLIES");
  uStack_8 = 0x10001627;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10030418,0);
    SetTrigg(99,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,iVar2 * -500 + 6000);
    iVar2 = GetDiff(0);
    SetResource(0,1,iVar2 * -500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(0,0,iVar2 * -500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(0,2,iVar2 * -500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(0,5,iVar2 * -500 + 5000);
    iVar2 = GetDiff(0);
    SetResource(0,4,iVar2 * -500 + 5000);
    SetResource(1,3,4000);
    SetResource(1,1,4000);
    SetResource(1,0,4000);
    SetResource(1,2,4000);
    SetResource(1,5,4000);
    SetResource(1,4,4000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,50000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      CreateObject0(&DAT_10030478,&DAT_100303f8,&DAT_10030548,0,&DAT_10030528,0x40);
    }
    ShowPage("#PAGE0");
    iVar2 = GetDiff(0);
    RunTimer(1,iVar2 * -1000 + 6000);
    DisableMission(0x43);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    CreateObject0(&DAT_10030450,&DAT_10030500,&DAT_100304f8,4,&DAT_100304d0,0);
    CreateObject0(&DAT_10030458,&DAT_10030500,&DAT_100304f8,4,&DAT_100304d8,0);
    CreateObject0(&DAT_10030460,&DAT_10030500,&DAT_10030508,4,&DAT_100304e0,0);
    TakeFood(&DAT_10030498);
    TakeWood(&DAT_10030490);
    SelectUnits(&DAT_10030430,0);
    SelOpenGates(2);
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetDiff(1);
    if (iVar2 < 3) {
      iVar2 = GetDiff(0);
      StartAI(1,"RUSSIA.0",1,1,0,iVar2 + 1);
    }
    else {
      StartAI(1,"RUSSIA.0",1,1,0,3);
    }
  }
  iVar2 = GetUnitsAmount0(&DAT_100304a0,0);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10030408);
    if (0 < iVar2) {
      uVar1 = Trigg(1);
      if ((uVar1 & 0xff) != 0) {
        ShowPage("#PAGE1");
        SetTrigg(1,0);
        local_8 = GetDiff(0);
        if (local_8 == 2) {
          CreateObject0(&DAT_10030400,&DAT_100303e8,&DAT_10030518,4,&DAT_100304b8,200);
        }
        else if (local_8 == 3) {
          CreateObject0(&DAT_10030400,&DAT_100303e0,&DAT_10030518,4,&DAT_100304b8,200);
        }
        else {
          CreateObject0(&DAT_10030400,&DAT_100303f0,&DAT_10030518,4,&DAT_100304b8,200);
        }
        SelectUnits(&DAT_10030400,0);
        SelSendTo(4,&DAT_100304c0,0x8c,0);
      }
      AttackEnemyInZone(&DAT_10030408,&DAT_100304a0,0);
    }
  }
  iVar2 = GetUnitsByNation(&DAT_10030408,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10030468,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10030408,0);
    SelDie(0);
    SelectUnits(&DAT_10030468,0);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100304a8,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_10030410);
      if (0 < iVar2) {
        SetTrigg(2,0);
        ShowPage("#PAGE2");
        ClearSelection(4);
        SelectUnits(&DAT_10030410,0);
        SelChangeNation(4,0);
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetTotalAmount0(&DAT_10030418);
      if (iVar2 == 0) {
        DAT_100304f0 = '\x01';
        uVar1 = Trigg(1);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(7);
          if ((uVar1 & 0xff) == 0) {
            iVar2 = GetTotalAmount0(&DAT_10030400);
            if (0 < iVar2) {
              DAT_100304f0 = '\0';
            }
          }
        }
        iVar2 = GetDiff(0);
        if (iVar2 == 0) {
          iVar2 = GetTotalAmount0(&DAT_10030478);
          if (0 < iVar2) {
            DAT_100304f0 = '\0';
          }
        }
        if (DAT_100304f0 != '\0') {
          SetTrigg(3,0);
          ShowPage("#PAGE3");
          LooseGame();
        }
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100304b0,0);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_10030420);
      if (0 < iVar2) {
        SetTrigg(4,0);
        ShowPage("#PAGE4");
        iVar2 = GetDiff(0);
        if (iVar2 == 0) {
          ShowPage("#OTST1");
          RunTimer(7,3000);
        }
        ClearSelection(4);
        SelectUnits(&DAT_10030420,0);
        SelChangeNation(4,0);
        DisableMission(0x44);
        DisableMission(0x42);
        DisableMission(0x45);
        EnableMission(0x46);
        EnableMission(0x47);
        EnableMission(0x43);
      }
    }
  }
  uVar1 = TimerDoneFirst(7);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#OTST2");
  }
  iVar2 = GetUnitsByNation(&DAT_10030420,4);
  if (0 < iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10030428);
    if (0 < iVar2) {
      iVar2 = GetTotalAmount0(&DAT_100304e8);
      if (iVar2 == 0) {
        ChangeFriends(2,6);
        SelectUnits1(4,&DAT_10030420,0);
        SelAttackGroup(4,&DAT_10030428);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = NationIsErased(0);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(5,0);
        ShowPage("#PAGE5");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(6,0);
      ShowPage("#PAGE6");
      ShowVictory();
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(1);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_100304c0,0);
      if (0 < iVar2) {
        iVar2 = GetUnitsAmount1(&DAT_100304c0,&DAT_10030400);
        if (0 < iVar2) {
          SetTrigg(7,0);
          ShowPage("#PAGE7");
          SelectUnits(&DAT_10030400,0);
          SelChangeNation(4,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030430);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_100304c8,0);
      if (0 < iVar2) {
        iVar2 = GetUnitsAmount0(&DAT_100304c8,1);
        if (iVar2 == 0) {
          iVar2 = GetUnitsAmount0(&DAT_100304c8,2);
          if (iVar2 == 0) {
            SetTrigg(0x32,0);
            SelectUnits(&DAT_10030430,0);
            SelCloseGates(2);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetTotalAmount0(&DAT_10030430);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(&DAT_100304c8,0);
      if (iVar2 == 0) {
        SetTrigg(0x32,0);
        SelectUnits(&DAT_10030430,0);
        SelOpenGates(2);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030530,&DAT_10030438);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_100304d0,0);
      if (0 < iVar2) {
        SetTrigg(8,0);
        iVar2 = GetDiff(1);
        ShowPageParam("#PAGE8",iVar2 * -500 + 3000);
        iVar2 = GetDiff(1);
        AddResource(0,1,iVar2 * -500 + 3000);
        ClearSelection(4);
        SelectUnits(&DAT_10030450,0);
        SelErase(4);
        CreateObject0(&DAT_10030470,&DAT_10030500,&DAT_10030520,4,&DAT_100304d0,0);
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030538,&DAT_10030440);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_100304d8,0);
      if (0 < iVar2) {
        SetTrigg(9,0);
        iVar2 = GetDiff(1);
        ShowPageParam("#PAGE9",iVar2 * -500 + 4000);
        iVar2 = GetDiff(1);
        AddResource(0,1,iVar2 * -500 + 4000);
        ClearSelection(4);
        SelectUnits(&DAT_10030458,0);
        SelErase(4);
        CreateObject0(&DAT_10030480,&DAT_10030500,&DAT_10030520,4,&DAT_100304d8,0);
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030540,&DAT_10030448);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_100304e0,0);
      if (0 < iVar2) {
        SetTrigg(10,0);
        iVar2 = GetDiff(1);
        ShowPageParam("#PAGE10",iVar2 * -500 + 2000);
        iVar2 = GetDiff(1);
        AddResource(0,1,iVar2 * -500 + 2000);
        ClearSelection(4);
        SelectUnits(&DAT_10030460,0);
        SelErase(4);
        CreateObject0(&DAT_10030488,&DAT_10030500,&DAT_10030510,4,&DAT_100304e0,0);
      }
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

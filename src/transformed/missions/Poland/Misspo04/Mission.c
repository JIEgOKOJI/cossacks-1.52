#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002a090[] = "Z8";
char DAT_1002a094[] = "Z7";
char DAT_1002a098[] = "Z6";
char DAT_1002a09c[] = "Z5";
char DAT_1002a0a0[] = "Z4";
char DAT_1002a0a4[] = "Z3";
char DAT_1002a0a8[] = "Z2";
char DAT_1002a0ac[] = "Z1";
char DAT_1002a0b0[] = "G11";
char DAT_1002a0b4[] = "G10";
char DAT_1002a0b8[] = "G9";
char DAT_1002a0bc[] = "G8";
char DAT_1002a0c0[] = "G7";
char DAT_1002a0c4[] = "G6";
char DAT_1002a0c8[] = "G5";
char DAT_1002a0cc[] = "G4";
char DAT_1002a0d0[] = "G3";
char DAT_1002a0d4[] = "G2";
char DAT_1002a0d8[] = "G1";
long long DAT_1002f3e0 = 0;
long long DAT_1002f3e8 = 0;
long long DAT_1002f3f0 = 0;
long long DAT_1002f3f8 = 0;
int DAT_1002f400 = 0;
int DAT_1002f404 = 0;
long long DAT_1002f408 = 0;
long long DAT_1002f410 = 0;
unsigned char DAT_1002f418[80] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1002f468 = 0;
long long DAT_1002f470 = 0;
long long DAT_1002f478 = 0;
long long DAT_1002f480 = 0;
long long DAT_1002f488 = 0;
long long DAT_1002f490 = 0;
long long DAT_1002f498 = 0;
long long DAT_1002f4a0 = 0;
long long DAT_1002f4a8 = 0;
long long DAT_1002f4b0 = 0;
long long DAT_1002f4b8 = 0;
long long DAT_1002f4c0 = 0;
long long DAT_1002f4c8 = 0;
long long DAT_1002f4d0 = 0;
long long DAT_1002f4d8 = 0;
long long DAT_1002f4e0 = 0;
long long DAT_1002f4e8 = 0;
long long DAT_1002f4f0 = 0;
long long DAT_1002f4f8 = 0;
long long DAT_1002f500 = 0;
long long DAT_1002f508 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_1002f468,DAT_1002a0d8);
  RegisterUnits(&DAT_1002f470,DAT_1002a0d4);
  RegisterUnits(&DAT_1002f478,DAT_1002a0d0);
  RegisterUnits(&DAT_1002f480,DAT_1002a0cc);
  RegisterUnits(&DAT_1002f488,DAT_1002a0c8);
  RegisterUnits(&DAT_1002f490,DAT_1002a0c4);
  RegisterUnits(&DAT_1002f498,DAT_1002a0c0);
  RegisterUnits(&DAT_1002f4a0,DAT_1002a0bc);
  RegisterUnits(&DAT_1002f4a8,DAT_1002a0b8);
  RegisterUnits(&DAT_1002f4b0,DAT_1002a0b4);
  RegisterUnits(&DAT_1002f4b8,DAT_1002a0b0);
  RegisterZone(&DAT_1002f4c0,DAT_1002a0ac);
  RegisterZone(&DAT_1002f4c8,DAT_1002a0a8);
  RegisterZone(&DAT_1002f4d0,DAT_1002a0a4);
  RegisterZone(&DAT_1002f4d8,DAT_1002a0a0);
  RegisterZone(&DAT_1002f4e0,DAT_1002a09c);
  RegisterZone(&DAT_1002f4e8,DAT_1002a098);
  RegisterZone(&DAT_1002f4f0,DAT_1002a094);
  RegisterZone(&DAT_1002f4f8,DAT_1002a090);
  for (DAT_1002f400 = 0; DAT_1002f400 < 10; DAT_1002f400 = DAT_1002f400 + 1) {
    RegisterVar(((unsigned char *)&DAT_1002f418) + DAT_1002f400 * 8,8);
  }
  RegisterUnitType(&DAT_1002f500,"Poland_pikiner(PL)");
  RegisterUnitType(&DAT_1002f508,"Kozak_loshad(UA)");
  RegisterFormation(&DAT_1002f3e0,"#LINE36PUS");
  RegisterFormation(&DAT_1002f3e8,"#LINE22PUS");
  RegisterFormation(&DAT_1002f3f0,"#LINE14PUS");
  RegisterFormation(&DAT_1002f3f8,"#LINE5PUS");
  RegisterVar(&DAT_1002f404,4);
  RegisterVar(&DAT_1002f408,8);
  RegisterVar(&DAT_1002f410,8);
  SetPlayerName(1,"COSSACKS");
  uStack_8 = 0x1000141b;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int local_c;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    DAT_1002f404 = 0;
    SetResource(0,3,1000000);
    SetResource(0,1,1000000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,1000000);
    SetResource(0,4,1000000);
    SetResource(1,3,1000000);
    SetResource(1,1,1000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,1000000);
    SetResource(1,4,1000000);
    ShowPage("#PAGE0");
    SelectUnits(&DAT_1002f478,0);
    SelSendAndKill(1,&DAT_1002f4d0,0,0);
    SelSendAndKill(1,&DAT_1002f4c0,0,2);
    SelectUnits(&DAT_1002f480,0);
    SelSendAndKill(1,&DAT_1002f4d8,0,0);
    SelSendAndKill(1,&DAT_1002f4c0,0,2);
    iVar4 = GetDiff(0);
    if (iVar4 == 0) {
      SelectUnits(&DAT_1002f4b8,0);
      SelErase(1);
    }
    DisableMission(0x43);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetGlobalTime();
    iVar2 = GetDiff(1);
    if (iVar2 * -300 + 2000 < iVar4) {
      SetTrigg(5,0);
      SelectUnits(&DAT_1002f488,0);
      SelSendAndKill(1,&DAT_1002f4e0,0,0);
      SelSendAndKill(1,&DAT_1002f4c0,0,2);
    }
  }
  iVar4 = GetUnitsAmount1(&DAT_1002f4c0,&DAT_1002f488);
  if (0 < iVar4) {
    iVar4 = GetUnitsAmount0(&DAT_1002f4c0,0);
    if (0 < iVar4) {
      AttackEnemyInZone(&DAT_1002f488,&DAT_1002f4c0,0);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetGlobalTime();
    iVar2 = GetDiff(1);
    if (iVar2 * -500 + 5000 < iVar4) {
      SetTrigg(6,0);
      SelectUnits(&DAT_1002f490,0);
      SelSendAndKill(1,&DAT_1002f4d0,0,0);
      SelSendAndKill(1,&DAT_1002f4c0,0,2);
    }
  }
  iVar4 = GetUnitsAmount1(&DAT_1002f4c0,&DAT_1002f490);
  if (0 < iVar4) {
    iVar4 = GetUnitsAmount0(&DAT_1002f4c0,0);
    if (0 < iVar4) {
      AttackEnemyInZone(&DAT_1002f490,&DAT_1002f4c0,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetGlobalTime();
    iVar2 = GetDiff(1);
    if (iVar2 * -600 + 0x1d4c < iVar4) {
      SetTrigg(7,0);
      SelectUnits(&DAT_1002f498,0);
      SelSendAndKill(1,&DAT_1002f4e0,0,0);
      SelSendAndKill(1,&DAT_1002f4c0,0,2);
    }
  }
  uVar1 = TimerDone(1);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f498,0);
    SelAttackGroup(1,&DAT_1002f470);
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetDiff(1);
    if (iVar4 < 3) {
      iVar4 = GetGlobalTime();
      if (5000 < iVar4) {
        SetTrigg(8,0);
        ShowPage("#PAGE7");
        local_8 = GetDiff(1);
        if (local_8 == 0) {
          CreateObject0(&DAT_1002f408,&DAT_1002f3e0,&DAT_1002f500,0,&DAT_1002f4e8,0x80);
        }
        else if (local_8 == 1) {
          CreateObject0(&DAT_1002f408,&DAT_1002f3e8,&DAT_1002f500,0,&DAT_1002f4e8,0x80);
        }
        else if (local_8 == 2) {
          CreateObject0(&DAT_1002f408,&DAT_1002f3f0,&DAT_1002f500,0,&DAT_1002f4e8,0x80);
        }
      }
    }
  }
  iVar4 = GetUnitsByNation(&DAT_1002f4b0,1);
  if (0 < iVar4) {
    SelectUnits1(1,&DAT_1002f4b0,0);
    SelAttackGroup(1,&DAT_1002f468);
  }
  iVar4 = GetUnitsByNation(&DAT_1002f468,1);
  if (0 < iVar4) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_1002f468,0);
    SelDie(1);
  }
  iVar4 = GetUnitsByNation(&DAT_1002f470,1);
  if (0 < iVar4) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_1002f470,0);
    SelDie(1);
  }
  uVar1 = Trigg(2);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_1002f470), iVar4 < 3)) {
    SetTrigg(2,0);
    ShowPage("#PAGE4");
    LooseGame();
  }
  uVar1 = Trigg(2);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_1002f468), iVar4 < 3)) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(2,0);
      ShowPage("#PAGE5");
      LooseGame();
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_1002f4c0,&DAT_1002f470);
    if (iVar4 == 3) {
      SetTrigg(1,0);
      ShowPage("#PAGE1");
      DisableMission(0x44);
      EnableMission(0x45);
      EnableMission(0x46);
      RunTimer(1,1000);
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE2");
    iVar4 = GetDiff(0);
    if (iVar4 == 0) {
      ShowPage("#PAGE7");
      CreateObject0(&DAT_1002f410,&DAT_1002f3e8,&DAT_1002f500,0,&DAT_1002f4e8,0x80);
    }
    DisableMission(0x46);
    EnableMission(0x47);
    EnableMission(0x48);
    DisableMission(0x42);
    EnableMission(0x43);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount1(&DAT_1002f4c0,&DAT_1002f470);
      if (iVar4 < 3) {
        uVar1 = TimerDone(1);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(1,0);
          ShowPage("#PAGE3");
          DisableMission(0x46);
          DisableMission(0x45);
          EnableMission(0x44);
          FreeTimer(1);
        }
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_1002f4f8,&DAT_1002f470);
    if (0 < iVar4) {
      uVar1 = TimerDone(1);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetDiff(1);
        if (1 < iVar4) {
          SetTrigg(3,0);
          SelectUnits(&DAT_1002f4a0,0);
          SelSendAndKill(1,&DAT_1002f4c8,0,0);
          SelectUnits(&DAT_1002f4a8,0);
          SelSendAndKill(1,&DAT_1002f4f8,0,0);
        }
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_1002f4c8,&DAT_1002f470);
    if (iVar4 == 3) {
      uVar1 = TimerDone(1);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(4,0);
        ShowPage("#PAGE6");
        ShowVictory();
      }
    }
  }
  iVar4 = GetGlobalTime();
  iVar2 = GetDiff(1);
  iVar3 = GetDiff(1);
  if ((iVar2 * -600 + 8000 + DAT_1002f404 * (iVar3 * -500 + 0x9c4) < iVar4) && (DAT_1002f404 < 10))
  {
    local_c = GetDiff(1);
    if (local_c == 0) {
      CreateObject0(((unsigned char *)&DAT_1002f418) + DAT_1002f404 * 8,&DAT_1002f3f8,&DAT_1002f508,1,&DAT_1002f4f0,
                    0x80);
    }
    else if (local_c == 1) {
      CreateObject0(((unsigned char *)&DAT_1002f418) + DAT_1002f404 * 8,&DAT_1002f3e8,&DAT_1002f508,1,&DAT_1002f4f0,
                    0x80);
    }
    else {
      CreateObject0(((unsigned char *)&DAT_1002f418) + DAT_1002f404 * 8,&DAT_1002f3e0,&DAT_1002f508,1,&DAT_1002f4f0,
                    0x80);
    }
    SelectUnits(((unsigned char *)&DAT_1002f418) + DAT_1002f404 * 8,0);
    SelSendAndKill(1,&DAT_1002f4c0,0,0);
    DAT_1002f404 = DAT_1002f404 + 1;
  }
  for (DAT_1002f400 = 0; DAT_1002f400 < DAT_1002f404; DAT_1002f400 = DAT_1002f400 + 1) {
    GetTotalAmount0(((unsigned char *)&DAT_1002f418) + DAT_1002f400 * 8);
    if (0 < iVar4) {
      SelectUnits(((unsigned char *)&DAT_1002f418) + DAT_1002f400 * 8,0);
      SelAttackGroup(1,&DAT_1002f470);
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

#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10029048[] = "G3";
char DAT_1002904c[] = "Z4";
char DAT_10029050[] = "Z3";
char DAT_10029054[] = "Z2";
char DAT_10029058[] = "Z1";
char DAT_10029078[] = "SUXX";
int DAT_1002ca30 = 1;
long long DAT_1002e3f0 = 0;
long long DAT_1002e3f8 = 0;
long long DAT_1002e400 = 0;
long long DAT_1002e408 = 0;
long long DAT_1002e410 = 0;
long long DAT_1002e418 = 0;
long long DAT_1002e420 = 0;
long long DAT_1002e428 = 0;
int DAT_1002e430 = 0;
long long DAT_1002e438 = 0;
long long DAT_1002e440 = 0;
int DAT_1002e44c = 0;

/* Forward declarations */
void FUN_100014a0(void);


void FUN_100014a0(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_1002e430 = GetDiff(0);
    SetResource(0,3,3000);
    SetResource(0,1,3000);
    SetResource(0,0,3000);
    SetResource(0,2,3000);
    SetResource(0,5,3000);
    SetResource(0,4,3000);
    SetResource(1,3,3000);
    SetResource(1,1,3000);
    SetResource(1,0,3000);
    SetResource(1,2,3000);
    SetResource(1,5,3000);
    SetResource(1,4,3000);
    uVar2 = GetDiff(0);
    StartAI(1,"SAKSINIA.0",0,0,0,uVar2);
    DisableMission(0x43);
    DisableMission(0x44);
    SetTrigg(99,0);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(1);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount0(&DAT_1002e408,2);
      if (10 < iVar3) {
        ProcessScenary(DAT_1002ca30);
        RunTimer(1,10000);
        if (DAT_1002ca30 == 1) {
          ShowPage("#PAGE2");
          EnableMission(0x43);
          if (DAT_1002e430 < 0) {
            SetLightSpot(&DAT_1002e408,2,1);
          }
        }
        DAT_1002ca30 = DAT_1002ca30 + 1;
      }
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_1002e410,2);
  if (9 < iVar3) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      RunTimer(2,700);
      SetTrigg(2,0);
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002e410,2);
    if (9 < iVar3) {
      iVar3 = GetResource(0,1);
      if (0 < iVar3) {
        iVar3 = GetResource(0,1);
        DAT_1002e44c = DAT_1002e44c + iVar3;
        SetResource(0,1,0);
        ShowPage("#PAGE1");
      }
      SelectUnitsInZone(&DAT_1002e410,2,0);
      SelSendTo(2,&DAT_1002e408,0,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002e408,2);
    if (iVar3 < 1) {
      ShowPage("#PAGE0");
      SetTrigg(1,0);
      EnableMission(0x44);
      DisableMission(0x43);
      if (0 < DAT_1002e44c) {
        ShowPage("#PAGE3");
        AddResource(0,1,DAT_1002e44c);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002e420,0);
    if (10 < iVar3) {
      SelectUnits(&DAT_1002e400,0);
      SelSendAndKill(2,&DAT_1002e408,0,0);
      SetResource(2,3,1000);
    }
  }
  uStack_8 = 0x10001a59;
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetPlayerName(0,"SVEDES");
  SetPlayerName(1,DAT_10029078);
  SetPlayerName(2,"BANDITS");
  SetStandartVictory();
  RegisterUnitType(&DAT_1002e438,"shahta(SV)");
  RegisterZone(&DAT_1002e408,DAT_10029058);
  RegisterZone(&DAT_1002e410,DAT_10029054);
  RegisterZone(&DAT_1002e418,DAT_10029050);
  RegisterZone(&DAT_1002e420,DAT_1002904c);
  RegisterUnits(&DAT_1002e400,DAT_10029048);
  RegisterFormation(&DAT_1002e440,"#LINEMORB15");
  RegisterUnitType(&DAT_1002e428,"Pehota_turki_DIP(VE)");
  RegisterDynGroup(&DAT_1002e3f0);
  RegisterDynGroup(&DAT_1002e3f8);
  RunTimer(1,5000);
  RegisterVar(&DAT_1002ca30,4);
  RegisterVar(&DAT_1002e44c,4);
  SetTrigg(1,1);
  SetTrigg(2,1);
  SetTrigg(3,1);
  SetTrigg(4,1);
  RegisterVar(&DAT_1002e430,4);
  uStack_8 = 0x100012d9;
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_8;
iVar1 = GetTotalAmount1(&DAT_1002e438,0);
  if (0 < iVar1) {
    for (local_8 = 1; local_8 < param_1 + 1; local_8 = local_8 + 1) {
      CreateObject0(&DAT_1002e3f0,&DAT_1002e440,&DAT_1002e428,2,&DAT_1002e408,0);
      SelectUnits(&DAT_1002e3f0,0);
      SelSendAndKill(2,&DAT_1002e410,0,0);
    }
  }
  SetTrigg(2,1);
  SetTrigg(3,1);
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

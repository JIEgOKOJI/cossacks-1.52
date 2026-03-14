#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int DAT_1002e3e0 = 0;
long long DAT_1002e3e4 = 0;
long long DAT_1002e3f8 = 0;
long long DAT_1002e410 = 0;
long long DAT_1002e418 = 0;
long long DAT_1002e420 = 0;
long long DAT_1002e428 = 0;
long long DAT_1002e430 = 0;
long long DAT_1002e438 = 0;
long long DAT_1002e440 = 0;
long long DAT_1002e448 = 0;
int DAT_1002e450 = 0;
int DAT_1002e454 = 0;

/* Forward declarations */
void FUN_100011c0(void);
void FUN_10001230(void);
void FUN_100012a0(void);
void FUN_100014a0(void);
void FUN_10001a00(int param_1);
void FUN_10001a50(int param_1,char param_2);


void FUN_100011c0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetResource(0,5,0);
  ShowCentralText("TEXT1",100);
  uStack_8 = 0x10001216;
  return;
}





void FUN_10001230(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetResource(1,5,0);
  ShowCentralText("TEXT2",100);
  uStack_8 = 0x10001286;
  return;
}





void FUN_100012a0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterVisibleZone(&DAT_1002e428,"Zone1");
  RegisterVisibleZone(&DAT_1002e430,"Zone2");
  RegisterVisibleZone(&DAT_1002e438,"Zone3");
  RegisterVisibleZone(&DAT_1002e440,"Zone4");
  RegisterVisibleZone(&DAT_1002e448,"Zone5");
  RegisterUnitType(&DAT_1002e420,"GRUZ_Z(UN)");
  RegisterUnits(&DAT_1002e410,"Group1");
  RegisterUnits(&DAT_1002e418,"Group2");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(7,0x83);
  for (DAT_1002e3e0 = 0; DAT_1002e3e0 < 5; DAT_1002e3e0 = DAT_1002e3e0 + 1) {
    (&DAT_1002e3e4)[DAT_1002e3e0] = 0;
    (&DAT_1002e3f8)[DAT_1002e3e0] = 0;
  }
  uStack_8 = 0x10001430;
  return;
}





void FUN_100014a0(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(0xff);
  if ((uVar1 & 0xff) != 0) {
    RunTimer(0,100);
    SetTrigg(0xff,0);
  }
  uVar1 = TimerDone(0);
  if ((uVar1 & 0xff) != 0) {
    for (DAT_1002e3e0 = 0; DAT_1002e3e0 < 5; DAT_1002e3e0 = DAT_1002e3e0 + 1) {
      iVar2 = GetUnitsAmount0(&DAT_1002e428 + DAT_1002e3e0 * 8,0);
      if (0 < iVar2) {
        iVar2 = GetUnitsAmount0(&DAT_1002e428 + DAT_1002e3e0 * 8,1);
        if (iVar2 == 0) {
          (&DAT_1002e3e4)[DAT_1002e3e0] = 1;
          (&DAT_1002e3f8)[DAT_1002e3e0] = 0;
        }
      }
      iVar2 = GetUnitsAmount0(&DAT_1002e428 + DAT_1002e3e0 * 8,1);
      if (0 < iVar2) {
        iVar2 = GetUnitsAmount0(&DAT_1002e428 + DAT_1002e3e0 * 8,0);
        if (iVar2 == 0) {
          (&DAT_1002e3e4)[DAT_1002e3e0] = 0;
          (&DAT_1002e3f8)[DAT_1002e3e0] = 1;
        }
      }
    }
    DAT_1002e450 = 0;
    DAT_1002e454 = 0;
    for (DAT_1002e3e0 = 0; DAT_1002e3e0 < 5; DAT_1002e3e0 = DAT_1002e3e0 + 1) {
      DAT_1002e450 = DAT_1002e450 + (&DAT_1002e3e4)[DAT_1002e3e0];
      DAT_1002e454 = DAT_1002e454 + (&DAT_1002e3f8)[DAT_1002e3e0];
    }
    if ((DAT_1002e450 < 3) && (2 < DAT_1002e454)) {
      ProcessScenary();
    }
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetGlobalTime();
      if (48000 < iVar2) {
        SetTrigg(10,0);
        ShowCentralText("TEXT7",0x96);
      }
    }
    iVar2 = GetGlobalTime();
    if (50000 < iVar2) {
      OnInit();
    }
    uVar1 = Trigg(0xf);
    if (((uVar1 & 0xff) != 0) && (FUN_10001a00(&DAT_1002e410), iVar2 < 0x14)) {
      SetTrigg(0xf,0);
      iVar2 = GetMyNation();
      if (iVar2 == 1) {
        ShowCentralText("TEXT8",100);
      }
    }
    uVar1 = Trigg(0x10);
    if (((uVar1 & 0xff) != 0) && (FUN_10001a00(&DAT_1002e418), iVar2 < 0x14)) {
      SetTrigg(0x10,0);
      iVar2 = GetMyNation();
      if (iVar2 == 0) {
        ShowCentralText("TEXT8",100);
      }
    }
    FUN_10001a00(&DAT_1002e410);
    if (iVar2 == 0) {
      ProcessScenary();
    }
    FUN_10001a00(&DAT_1002e418);
    if (iVar2 == 0) {
      OnInit();
    }
    uVar1 = Trigg(0xb);
    if (((uVar1 & 0xff) != 0) && (FUN_10001a50(&DAT_1002e420,0), iVar2 == 0)) {
      SetTrigg(0xb,0);
      FUN_100011c0();
    }
    uVar1 = Trigg(0xc);
    if (((uVar1 & 0xff) != 0) && (FUN_10001a50(&DAT_1002e420,1), iVar2 == 0)) {
      SetTrigg(0xc,0);
      FUN_10001230();
    }
  }
  uStack_8 = 0x100018e1;
  return;
}





void __cdecl FUN_10001a00(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount0(param_1);
  uStack_8 = 0x10001a3b;
  return;
}





void __cdecl FUN_10001a50(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount1(param_1,(int)param_2);
  uStack_8 = 0x10001a8f;
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = GetMyNation();
  if (iVar1 == 0) {
    ShowVictory();
  }
  else {
    LooseGame();
  }
  uStack_8 = 0x10001118;
  return;
}





void ProcessScenary(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = GetMyNation();
  if (iVar1 == 1) {
    ShowVictory();
  }
  else {
    LooseGame();
  }
  uStack_8 = 0x10001199;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

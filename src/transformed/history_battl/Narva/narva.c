#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

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
int DAT_1002e448 = 0;
int DAT_1002e44c = 0;

/* Forward declarations */
void FUN_100010b0(void);
void FUN_10001130(void);

void OnInit();
void ProcessScenary();


void FUN_100010b0(void)

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
  uStack_8 = 0x10001108;
  return;
}





void FUN_10001130(void)

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
  uStack_8 = 0x10001189;
  return;
}






void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterVisibleZone(&DAT_1002e420,"Zone1");
  RegisterVisibleZone(&DAT_1002e428,"Zone2");
  RegisterVisibleZone(&DAT_1002e430,"Zone3");
  RegisterVisibleZone(&DAT_1002e438,"Zone4");
  RegisterVisibleZone(&DAT_1002e440,"Zone5");
  RegisterUnits(&DAT_1002e410,"Group1");
  RegisterUnits(&DAT_1002e418,"Group2");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(7,0x83);
  for (DAT_1002e3e0 = 0; DAT_1002e3e0 < 5; DAT_1002e3e0 = DAT_1002e3e0 + 1) {
    ((long long *)&DAT_1002e3e4)[DAT_1002e3e0] = 0;
    ((long long *)&DAT_1002e3f8)[DAT_1002e3e0] = 0;
  }
  uStack_8 = 0x10001324;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
for (DAT_1002e3e0 = 0; DAT_1002e3e0 < 5; DAT_1002e3e0 = DAT_1002e3e0 + 1) {
    iVar2 = GetUnitsAmount0(((unsigned char *)&DAT_1002e420) + DAT_1002e3e0 * 8,0);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(((unsigned char *)&DAT_1002e420) + DAT_1002e3e0 * 8,1);
      if (iVar2 == 0) {
        ((long long *)&DAT_1002e3e4)[DAT_1002e3e0] = 1;
        ((long long *)&DAT_1002e3f8)[DAT_1002e3e0] = 0;
      }
    }
    iVar2 = GetUnitsAmount0(((unsigned char *)&DAT_1002e420) + DAT_1002e3e0 * 8,1);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount0(((unsigned char *)&DAT_1002e420) + DAT_1002e3e0 * 8,0);
      if (iVar2 == 0) {
        ((long long *)&DAT_1002e3e4)[DAT_1002e3e0] = 0;
        ((long long *)&DAT_1002e3f8)[DAT_1002e3e0] = 1;
      }
    }
  }
  DAT_1002e448 = 0;
  DAT_1002e44c = 0;
  for (DAT_1002e3e0 = 0; DAT_1002e3e0 < 5; DAT_1002e3e0 = DAT_1002e3e0 + 1) {
    DAT_1002e448 = DAT_1002e448 + ((long long *)&DAT_1002e3e4)[DAT_1002e3e0];
    DAT_1002e44c = DAT_1002e44c + ((long long *)&DAT_1002e3f8)[DAT_1002e3e0];
  }
  if (2 < DAT_1002e448) {
    FUN_100010b0();
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (68000 < iVar2) {
      SetTrigg(10,0);
      ShowCentralText("TEXT7",0x96);
    }
  }
  iVar2 = GetGlobalTime();
  if (70000 < iVar2) {
    FUN_10001130();
  }
  iVar2 = GetTotalAmount0(&DAT_1002e410);
  if (iVar2 == 0) {
    FUN_10001130();
  }
  iVar2 = GetTotalAmount0(&DAT_1002e418);
  if (iVar2 == 0) {
    FUN_100010b0();
  }
  uStack_8 = 0x100015dc;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

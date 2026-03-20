#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_1001e400 = 0;
long long DAT_1001e408 = 0;
long long DAT_1001e410 = 0;
long long DAT_1001e418 = 0;
long long DAT_1001e420 = 0;
long long DAT_1001e428 = 0;
long long DAT_1001e430 = 0;

/* Forward declarations */
int FUN_100010b0(char param_1,char param_2);
void FUN_10001180(int param_1,int param_2);
void FUN_10001220(void);

void OnInit();
void ProcessScenary();


int __cdecl FUN_100010b0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_c;
  int local_8;
local_8 = 0;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    iVar1 = GetUnitsAmount0(((unsigned char *)&DAT_1001e400) + local_c * 8,param_1);
    if (0 < iVar1) {
      iVar1 = GetUnitsAmount0(((unsigned char *)&DAT_1001e400) + local_c * 8,param_2);
      if (iVar1 == 0) {
        local_8 = local_8 + 1;
      }
    }
  }
  return 0;
}





void __cdecl FUN_10001180(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_8;
local_8 = GetMyNation();
  ShowPage(*(int *)(param_2 + local_8 * 4));
  if (local_8 == param_1) {
    ShowVictory();
  }
  else {
    LooseGame();
  }
  return;
}





void FUN_10001220(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_1001e428,"Army0");
  RegisterUnits(&DAT_1001e430,"Army1");
  RegisterVisibleZone(&DAT_1001e400,"Zone0");
  RegisterVisibleZone(&DAT_1001e408,"Zone1");
  RegisterVisibleZone(&DAT_1001e410,"Zone2");
  RegisterVisibleZone(&DAT_1001e418,"Zone3");
  RegisterVisibleZone(&DAT_1001e420,"Zone4");
  uStack_8 = 0x10001309;
  return;
}






void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001220();
  uStack_8 = 0x1000137a;
  return;
}





void ProcessScenary(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = FUN_100010b0(0,1);
  if (2 < iVar1) {
    FUN_10001180(0,0x1001ca40);
  }
  iVar1 = GetTotalAmount0(&DAT_1001e428);
  if (iVar1 < 0x14) {
    FUN_10001180(1,0x1001ca30);
  }
  iVar1 = GetTotalAmount0(&DAT_1001e430);
  if (iVar1 < 0x14) {
    FUN_10001180(0,0x1001ca38);
  }
  uStack_8 = 0x10001417;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

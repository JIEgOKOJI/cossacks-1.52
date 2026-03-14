#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_1001e400 = 0;
long long DAT_1001e408 = 0;
long long DAT_1001e410 = 0;
long long DAT_1001e418 = 0;
long long DAT_1001e420 = 0;
long long DAT_1001e428 = 0;
long long DAT_1001e430 = 0;

/* Forward declarations */
void FUN_10001220(void);
void FUN_10001350(void);
void FUN_10001390(void);
void FUN_10001440(int param_1);


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





void FUN_10001350(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001220();
  uStack_8 = 0x1000137a;
  return;
}





void FUN_10001390(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
OnInit(0,1);
  if (2 < iVar1) {
    ProcessScenary(0,0x1001ca40);
  }
  FUN_10001440(&DAT_1001e428);
  if (iVar1 < 0x14) {
    ProcessScenary(1,0x1001ca30);
  }
  FUN_10001440(&DAT_1001e430);
  if (iVar1 < 0x14) {
    ProcessScenary(0,0x1001ca38);
  }
  uStack_8 = 0x10001417;
  return;
}





void __cdecl FUN_10001440(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount0(param_1);
  uStack_8 = 0x1000147b;
  return;
}





__declspec(dllexport) void OnInit()
{
  int param_1 = 0;
  int param_2 = 0;
  int iVar1;
  int *puVar2;
  int local_c;
  int local_8;
local_8 = 0;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    iVar1 = GetUnitsAmount0(&DAT_1001e400 + local_c * 8,param_1);
    if (0 < iVar1) {
      iVar1 = GetUnitsAmount0(&DAT_1001e400 + local_c * 8,param_2);
      if (iVar1 == 0) {
        local_8 = local_8 + 1;
      }
    }
  }
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int param_2 = 0;
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





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

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
RegisterUnits(&DAT_1002e410,"Group1");
  RegisterUnits(&DAT_1002e418,"Group2");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(3,7);
  for (DAT_1002e3e0 = 0; DAT_1002e3e0 < 5; DAT_1002e3e0 = DAT_1002e3e0 + 1) {
    ((long long *)&DAT_1002e3e4)[DAT_1002e3e0] = 0;
    ((long long *)&DAT_1002e3f8)[DAT_1002e3e0] = 0;
  }
  uStack_8 = 0x10001295;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002e410);
    if (iVar2 < 0x173) {
      SetTrigg(0x15,0);
      ShowCentralText("TEXT3",0x96);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002e418);
    if (iVar2 < 0x227) {
      SetTrigg(0x15,0);
      ShowCentralText("TEXT4",0x96);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if (38000 < iVar2) {
      SetTrigg(10,0);
      ShowCentralText("TEXT7",0x96);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetGlobalTime();
    if ((20000 < iVar2) && ((void*)&GetMyNation == (void *)0x0)) {
      SetTrigg(0x14,0);
      ShowCentralText("TEXT9",0x96);
    }
  }
  iVar2 = GetGlobalTime();
  if (40000 < iVar2) {
    FUN_10001130();
  }
  GetTotalAmount0(&DAT_1002e410);
  if (iVar2 < 0xc9) {
    FUN_10001130();
  }
  GetTotalAmount0(&DAT_1002e418);
  if (iVar2 < 0x173) {
    FUN_100010b0();
  }
  uStack_8 = 0x100014eb;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

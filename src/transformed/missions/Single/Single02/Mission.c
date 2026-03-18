#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */

void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetStandartVictory();
  SetPlayerName(1,"PRUSSIA");
  SetPlayerName(2,"TURKEY");
  SetPlayerName(3,"UKRAINE");
  uStack_8 = 0x1000110f;
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
    SetResource(0,3,10000);
    SetResource(0,1,10000);
    SetResource(0,0,10000);
    SetResource(0,2,10000);
    SetResource(0,5,10000);
    SetResource(0,4,10000);
    SetResource(1,3,10000);
    SetResource(1,1,10000);
    SetResource(1,0,10000);
    SetResource(1,2,10000);
    SetResource(1,5,10000);
    SetResource(1,4,10000);
    SetResource(2,3,10000);
    SetResource(2,1,10000);
    SetResource(2,0,10000);
    SetResource(2,2,10000);
    SetResource(2,5,10000);
    SetResource(2,4,10000);
    SetResource(3,3,10000);
    SetResource(3,1,10000);
    SetResource(3,0,10000);
    SetResource(3,2,10000);
    SetResource(3,5,10000);
    SetResource(3,4,10000);
    StartAI(1,"GERMAN.0",1,1,1,0xffffffff);
    StartAI(2,"TURKISH.0",1,1,1,0xffffffff);
    StartAI(3,"UKRAINE.0",1,1,1,0xffffffff);
  }
  uStack_8 = 0x10001487;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

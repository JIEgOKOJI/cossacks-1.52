#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_1002e3e0 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnitType(&DAT_1002e3e0,"Krestian_Turki(AL)");
  SetStandartVictory();
  SetPlayerName(1,"VENET");
  SetPlayerName(4,"PIRATES");
  SetPlayerName(5,"PIRATES");
  uStack_8 = 0x1000112b;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(100,0);
    SetResource(0,3,5000);
    SetResource(0,1,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    SetResource(1,3,10000);
    SetResource(1,1,1000000);
    SetResource(1,0,10000);
    SetResource(1,2,10000);
    SetResource(1,5,10000);
    SetResource(1,4,50000);
    SetResource(4,3,50000);
    SetResource(4,1,50000);
    SetResource(4,0,50000);
    SetResource(4,2,50000);
    SetResource(4,5,50000);
    SetResource(4,4,50000);
    SetResource(5,3,50000);
    SetResource(5,1,50000);
    SetResource(5,0,50000);
    SetResource(5,2,50000);
    SetResource(5,5,50000);
    SetResource(5,4,50000);
    StartAI(1,"VENECIA.0",2,0,1,-1);
    StartAI(4,"ALGIR.0",2,1,1,1);
    StartAI(5,"ALGIR.0",2,1,1,0);
    ShowPage("#PAGE1");
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetAmountOfWarriors(4);
    if (iVar2 == 0) {
      GetTotalAmount1(&DAT_1002e3e0,4);
      if (iVar2 == 0) {
        SetTrigg(99,0);
        ShowPage("#PAGE2");
        AddResource(0,1,35000);
        AddResource(0,5,50000);
      }
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetAmountOfWarriors(5);
    if (iVar2 == 0) {
      GetTotalAmount1(&DAT_1002e3e0,5);
      if (iVar2 == 0) {
        SetTrigg(0x62,0);
        ShowPage("#PAGE3");
        AddResource(0,1,15000);
        AddResource(0,4,50000);
      }
    }
  }
  uStack_8 = 0x1000161c;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
char DAT_10005038[] = "G1";
long long DAT_100053a0 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_100053a0,DAT_10005038);
  SetPlayerName(1,"PRUSSIA");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,(8 - iVar2) * 5000);
    iVar2 = GetDiff(0);
    SetResource(0,1,(8 - iVar2) * 1000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar2 = GetDiff(0);
    SetResource(0,5,(6 - iVar2) * 3000);
    iVar2 = GetDiff(0);
    SetResource(0,4,(6 - iVar2) * 3000);
    SetResource(1,3,300000);
    SetResource(1,1,250000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,5,15000000);
    SetResource(1,4,15000000);
    iVar2 = GetDiff(0);
    if (iVar2 < 2) {
      StartAI(1,"GERMAN.0",0,1,0,1);
    }
    else {
      uVar3 = GetDiff(0);
      StartAI(1,"GERMAN.0",0,1,0,uVar3);
    }
    ShowPage("#PAGE0");
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,500000);
      SetResource(0,1,150000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      SetResource(0,5,150000);
      SetResource(0,4,150000);
      ShowPage("#OTST1");
    }
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    cVar1 = NationIsErased(1);
    if (cVar1 != '\0') {
      SetTrigg(1,0);
      ShowPage("#PAGE1");
      ShowVictory();
    }
  }
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    cVar1 = NationIsErased(0);
    if (cVar1 != '\0') {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      LooseGame();
    }
  }
  cVar1 = Trigg(3);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_100053a0);
    if (iVar2 < 0x32) {
      iVar2 = GetDiff(0);
      if (iVar2 == 0) {
        SetTrigg(3,0);
        ShowPage("#OTST2");
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

#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002a078[] = "Z7";
char DAT_1002a07c[] = "Z6";
char DAT_1002a080[] = "Z5";
char DAT_1002a084[] = "Z4";
char DAT_1002a088[] = "Z3";
char DAT_1002a08c[] = "Z2";
char DAT_1002a090[] = "Z1";
long long DAT_1002f3e0 = 0;
long long DAT_1002f3e8 = 0;
long long DAT_1002f3f0 = 0;
long long DAT_1002f3f8 = 0;
long long DAT_1002f400 = 0;
long long DAT_1002f408 = 0;
long long DAT_1002f410 = 0;
long long DAT_1002f418 = 0;
long long DAT_1002f420 = 0;
long long DAT_1002f428 = 0;
long long DAT_1002f430 = 0;
long long DAT_1002f438 = 0;
long long DAT_1002f440 = 0;
long long DAT_1002f448 = 0;
long long DAT_1002f450 = 0;
long long DAT_1002f458 = 0;
long long DAT_1002f460 = 0;
long long DAT_1002f468 = 0;
long long DAT_1002f470 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f418,DAT_1002a090);
  RegisterZone(&DAT_1002f420,DAT_1002a08c);
  RegisterZone(&DAT_1002f428,DAT_1002a088);
  RegisterZone(&DAT_1002f430,DAT_1002a084);
  RegisterZone(&DAT_1002f438,DAT_1002a080);
  RegisterZone(&DAT_1002f440,DAT_1002a07c);
  RegisterZone(&DAT_1002f448,DAT_1002a078);
  RegisterVar(&DAT_1002f3e0,8);
  RegisterVar(&DAT_1002f3f8,8);
  RegisterVar(&DAT_1002f3e8,8);
  RegisterVar(&DAT_1002f400,8);
  RegisterVar(&DAT_1002f3f0,8);
  RegisterVar(&DAT_1002f408,8);
  RegisterVar(&DAT_1002f410,8);
  RegisterUnitType(&DAT_1002f450,"SUNDUK1Z(UN)");
  RegisterUnitType(&DAT_1002f470,"SUNDUK1O(UN)");
  RegisterUnitType(&DAT_1002f460,"SUNDUK2Z(UN)");
  RegisterUnitType(&DAT_1002f468,"SUNDUK2O(UN)");
  RegisterFormation(&DAT_1002f458,"#ALONE");
  SetPlayerName(1,"SVEDES");
  SetPlayerName(2,"BANDITS");
  SetPlayerName(3,"SVEDES");
  ChangeFriends(0,1);
  ChangeFriends(1,0x1a);
  ChangeFriends(3,10);
  ChangeFriends(4,0x11);
  uStack_8 = 0x10001357;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    SetResource(0,3,5000);
    SetResource(0,1,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    SetResource(1,3,5000);
    SetResource(1,1,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    SetResource(2,3,2000000);
    SetResource(2,1,2000000);
    SetResource(2,0,0);
    SetResource(2,2,0);
    SetResource(2,5,5000000);
    SetResource(2,4,5000000);
    SetResource(3,3,2000000);
    SetResource(3,1,2000000);
    SetResource(3,0,0);
    SetResource(3,2,0);
    SetResource(3,5,5000000);
    SetResource(3,4,5000000);
    CreateObject0(&DAT_1002f3e0,&DAT_1002f458,&DAT_1002f450,4,&DAT_1002f418,0);
    CreateObject0(&DAT_1002f3e8,&DAT_1002f458,&DAT_1002f460,4,&DAT_1002f428,0);
    CreateObject0(&DAT_1002f3f0,&DAT_1002f458,&DAT_1002f460,4,&DAT_1002f438,0);
    CreateObject0(&DAT_1002f410,&DAT_1002f458,&DAT_1002f470,4,&DAT_1002f448,0);
    uVar2 = GetDiff(0);
    StartAI(1,"SVEDEN.0",1,1,0,uVar2);
    ShowPage("#PAGE0");
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(1,0);
      ShowPage("#PAGE1");
      ShowVictory();
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      LooseGame();
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f418,0);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_1002f420,2);
      if (iVar3 == 0) {
        SetTrigg(3,0);
        iVar3 = GetDiff(0);
        ShowPageParam("#PAGE3",iVar3 * -500 + 3000);
        iVar3 = GetDiff(0);
        AddResource(0,1,iVar3 * -500 + 3000);
        ClearSelection(4);
        SelectUnits(&DAT_1002f3e0,0);
        SelErase(4);
        CreateObject0(&DAT_1002f3f8,&DAT_1002f458,&DAT_1002f470,4,&DAT_1002f418,0);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f418,1);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_1002f420,2);
      if (iVar3 == 0) {
        SetTrigg(3,0);
        iVar3 = GetDiff(0);
        AddResource(1,1,iVar3 * -500 + 3000);
        ClearSelection(4);
        SelectUnits(&DAT_1002f3e0,0);
        SelErase(4);
        CreateObject0(&DAT_1002f3f8,&DAT_1002f458,&DAT_1002f470,4,&DAT_1002f418,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f428,0);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_1002f430,2);
      if (iVar3 == 0) {
        SetTrigg(4,0);
        iVar3 = GetDiff(0);
        ShowPageParam("#PAGE4",iVar3 * -400 + 2000);
        iVar3 = GetDiff(0);
        AddResource(0,1,iVar3 * -400 + 2000);
        ClearSelection(4);
        SelectUnits(&DAT_1002f3e8,0);
        SelErase(4);
        CreateObject0(&DAT_1002f400,&DAT_1002f458,&DAT_1002f468,4,&DAT_1002f428,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f428,1);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_1002f430,2);
      if (iVar3 == 0) {
        SetTrigg(4,0);
        iVar3 = GetDiff(0);
        AddResource(1,1,iVar3 * -400 + 2000);
        ClearSelection(4);
        SelectUnits(&DAT_1002f3e8,0);
        SelErase(4);
        CreateObject0(&DAT_1002f400,&DAT_1002f458,&DAT_1002f468,4,&DAT_1002f428,0);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f438,0);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_1002f440,2);
      if (iVar3 == 0) {
        SetTrigg(5,0);
        iVar3 = GetDiff(0);
        ShowPageParam("#PAGE5",iVar3 * -500 + 4000);
        iVar3 = GetDiff(0);
        AddResource(0,1,iVar3 * -500 + 4000);
        ClearSelection(4);
        SelectUnits(&DAT_1002f3f0,0);
        SelErase(4);
        CreateObject0(&DAT_1002f408,&DAT_1002f458,&DAT_1002f468,4,&DAT_1002f438,0);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f438,1);
    if (0 < iVar3) {
      iVar3 = GetUnitsAmount0(&DAT_1002f440,2);
      if (iVar3 == 0) {
        SetTrigg(5,0);
        iVar3 = GetDiff(0);
        AddResource(1,1,iVar3 * -500 + 4000);
        ClearSelection(4);
        SelectUnits(&DAT_1002f3f0,0);
        SelErase(4);
        CreateObject0(&DAT_1002f408,&DAT_1002f458,&DAT_1002f468,4,&DAT_1002f438,0);
      }
    }
  }
  uStack_8 = 0x1000201a;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002a01c[] = "GKpo";
char DAT_1002a024[] = "GKua";
char DAT_1002a034[] = "ZKua";
long long DAT_1002f3e0 = 0;
long long DAT_1002f3e8 = 0;
long long DAT_1002f3f0 = 0;
long long DAT_1002f3f8 = 0;
long long DAT_1002f400 = 0;
long long DAT_1002f408 = 0;
int DAT_1002f410 = 0;
long long DAT_1002f418 = 0;
long long DAT_1002f420 = 0;
int DAT_1002f3f8_ovl = 0;

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetPlayerName(1,"UKRAINE");
  SetPlayerName(2,"RUSSIA");
  SetPlayerName(3,"SVEDES");
  RegisterVar(&DAT_1002f410,4);
  RegisterVar(&DAT_1002f3f8,4);
  RegisterUnitType(&DAT_1002f418,"WALL_UKR(PL)");
  RegisterUnitType(&DAT_1002f420,"WALL_EV(PL)");
  RegisterZone(&DAT_1002f400,"ZGate1");
  RegisterZone(&DAT_1002f408,DAT_1002a034);
  RegisterUnits(&DAT_1002f3e0,"GGates");
  RegisterUnits(&DAT_1002f3f0,DAT_1002a024);
  RegisterUnits(&DAT_1002f3e8,DAT_1002a01c);
  uStack_8 = 0x100011f6;
  return;
}







void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_1002f410 = GetDiff(0);
    DAT_1002f3f8_ovl = (DAT_1002f410 + 1) * 500;
    SetResource(0,3,DAT_1002f410 * -3000 + 10000);
    SetResource(0,1,DAT_1002f410 * -3000 + 10000);
    SetResource(0,0,DAT_1002f410 * -3000 + 10000);
    SetResource(0,2,DAT_1002f410 * -3000 + 10000);
    SetResource(0,5,DAT_1002f410 * -3000 + 10000);
    SetResource(0,4,DAT_1002f410 * -3000 + 10000);
    SetResource(1,3,3000);
    SetResource(1,1,3000);
    SetResource(1,0,3000);
    SetResource(1,2,3000);
    SetResource(1,5,3000);
    SetResource(1,4,3000);
    SetResource(2,3,3000);
    SetResource(2,1,3000);
    SetResource(2,0,3000);
    SetResource(2,2,3000);
    SetResource(2,5,3000);
    SetResource(2,4,3000);
    SetResource(3,3,3000);
    SetResource(3,1,3000);
    SetResource(3,0,3000);
    SetResource(3,2,3000);
    SetResource(3,5,3000);
    SetResource(3,4,3000);
    EnableUnit(0,&DAT_1002f418,0);
    EnableUnit(0,&DAT_1002f420,0);
    ChangeFriends(1,0xf);
    ChangeFriends(5,0xe);
    ChangeFriends(2,0xf);
    SelectUnits(&DAT_1002f3f0,0);
    DoNotUseSelInAI(1);
    StartAI(1,"UKRAINE.0",0,0,0,DAT_1002f410);
    StartAI(2,"RUSSIA.0",0,0,0,DAT_1002f410);
    StartAI(3,"SVEDEN.0",0,0,0,DAT_1002f410);
    SetTrigg(1,0);
    SetTrigg(2,0);
    SelectUnits(&DAT_1002f3f0,0);
    DoNotUseSelInAI(1);
    ChangeFriends(1,0xf);
    ChangeFriends(5,0xe);
    SelectUnits(&DAT_1002f3e0,0);
    SelOpenGates(5);
    ShowPage("#PAGE0");
    RunTimer(1,DAT_1002f410 * -700 + 3000);
    SetTrigg(99,0);
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    SelSendTo(1,&DAT_1002f400,0,0);
    ShowPage("#PAGE1");
    SetTrigg(1,1);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f400,&DAT_1002f3f0);
    if (0 < iVar2) {
      ShowPage("#PAGE6");
      SetLightSpot(&DAT_1002f400,1,1);
      RunTimer(2,3000);
      SetTrigg(1,0);
      SetTrigg(2,1);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_1002f400,&DAT_1002f3e8);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount1(&DAT_1002f400,&DAT_1002f3f0);
      if (0 < iVar2) {
        FreeTimer(2);
        uVar1 = AskQuestion("#PAGE2");
        if ((uVar1 & 0xff) == 0) {
          ShowPage("#PAGE5");
          RunTimer(2,1000);
          ChangeFriends(2,0xe);
        }
        else {
          iVar2 = GetResource(0,1);
          if (iVar2 < 1000) {
            uVar1 = Trigg(3);
            if ((uVar1 & 0xff) == 0) {
              ShowPage("#PAGE8");
              RunTimer(2,1000);
              ChangeFriends(2,0xe);
            }
            else {
              ShowPage("#PAGE7");
              SetTrigg(3,0);
              RunTimer(1,DAT_1002f410 * -700 + 5000);
            }
          }
          else {
            AddResource(0,1,0xfffffc18);
            AddResource(1,1,1000);
            iVar2 = GetResource(0,1);
            if (iVar2 < 1000) {
              ChangeFriends(2,0xe);
            }
            else {
              uVar1 = AskQuestion("#PAGE3");
              if ((uVar1 & 0xff) == 0) {
                ChangeFriends(2,0xe);
              }
              else {
                AddResource(0,1,0xfffffc18);
                AddResource(2,1,1000);
                ChangeFriends(2,0xf);
              }
            }
            ShowPage("#PAGE4");
            RunTimer(1,DAT_1002f410 * -1000 + 15000);
          }
        }
        SetTrigg(2,0);
        SelectUnits(&DAT_1002f3f0,0);
        SelSendTo(1,&DAT_1002f408,0,0);
        ClearLightSpot(1);
      }
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    SelSendTo(1,&DAT_1002f408,0,0);
    ChangeFriends(1,0xe);
    ChangeFriends(2,0xe);
  }
  uVar1 = NationIsErased(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = NationIsErased(1);
      if ((uVar1 & 0xff) != 0) {
        FreeTimer(1);
        FreeTimer(2);
        ShowPage("#PAGE9");
        ShowVictory();
      }
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      FreeTimer(1);
      FreeTimer(2);
      SetTrigg(0x62,0);
      LooseGame();
    }
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_1002f3f0);
    if (iVar2 < 1) {
      ChangeFriends(1,0xe);
      SetTrigg(0x61,0);
    }
  }
  uStack_8 = 0x10001e75;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

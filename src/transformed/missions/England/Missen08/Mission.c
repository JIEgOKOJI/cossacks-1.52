#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
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
long long DAT_1002f478 = 0;
long long DAT_1002f480 = 0;
long long DAT_1002f488 = 0;
long long DAT_1002f490 = 0;
long long DAT_1002f498 = 0;
long long DAT_1002f4a0 = 0;
long long DAT_1002f4a8 = 0;
long long DAT_1002f4b0 = 0;
long long DAT_1002f4b8 = 0;
long long DAT_1002f4c0 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f458,"Zone1");
  RegisterZone(&DAT_1002f460,"Zone2");
  RegisterZone(&DAT_1002f468,"Zone3");
  RegisterZone(&DAT_1002f470,"Zone4");
  RegisterZone(&DAT_1002f448,"Zone4a");
  RegisterZone(&DAT_1002f478,"Zone5");
  RegisterZone(&DAT_1002f480,"Zone6");
  RegisterZone(&DAT_1002f488,"Zone7");
  RegisterZone(&DAT_1002f490,"Zone8");
  RegisterUnits(&DAT_1002f3e8,"Group1");
  RegisterUnits(&DAT_1002f3f8,"Group2");
  RegisterUnits(&DAT_1002f3f0,"Group3");
  RegisterUnits(&DAT_1002f408,"Group4");
  RegisterUnits(&DAT_1002f400,"Group5");
  RegisterUnits(&DAT_1002f418,"Group6");
  RegisterUnits(&DAT_1002f410,"Group7");
  RegisterUnits(&DAT_1002f428,"Group8");
  RegisterUnits(&DAT_1002f420,"Group9");
  RegisterUnits(&DAT_1002f4a0,"Group10");
  RegisterUnits(&DAT_1002f4b0,"Group11");
  RegisterUnits(&DAT_1002f4b8,"Group12");
  RegisterUnits(&DAT_1002f4a8,"Group13");
  RegisterUnitType(&DAT_1002f438,"Kuznica_SP(sp)");
  RegisterUnitType(&DAT_1002f498,"Center_Spain(sp)");
  RegisterUnitType(&DAT_1002f430,"akademia_SP(sp)");
  RegisterUnitType(&DAT_1002f4c0,"Sclad2(sp)");
  RegisterUnitType(&DAT_1002f440,"Rinok(sp)");
  RegisterUnitType(&DAT_1002f3e0,"Melnica(sp)");
  RegisterUnitType(&DAT_1002f450,"Kreposnoi_portugal(sp)");
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(1,"SPAIN");
  SetPlayerName(4,"M_ALLIES");
  SetPlayerName(5,"BANDITS");
  uStack_8 = 0x10001468;
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
    SetResource(0,3,3000);
    SetResource(0,1,2000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,2000);
    SetResource(0,4,2000);
    SetResource(1,3,10000000);
    SetResource(1,1,1000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,1000000);
    SetResource(1,4,1000000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE1A");
    ShowPage("#PAGE1B");
    SelectUnits(&DAT_1002f3f8,0);
    Patrol(1,&DAT_1002f458,0);
  }
  uVar1 = Trigg(2);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount1(&DAT_1002f438,0), 0 < iVar2)) {
    SetTrigg(2,0);
    ShowPage("#PAGE2");
    AddResource(0,1,10000);
  }
  uVar1 = Trigg(3);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount1(&DAT_1002f498,0), 0 < iVar2)) {
    SetTrigg(3,0);
    ShowPage("#PAGE3");
    AddResource(0,1,100000);
    ShowVictory();
  }
  uVar1 = Trigg(4);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount1(&DAT_1002f430,0), 0 < iVar2)) {
    SetTrigg(4,0);
    ShowPage("#PAGE4");
    AddResource(0,1,20000);
  }
  uVar1 = Trigg(5);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount1(&DAT_1002f4c0,0), 0 < iVar2)) {
    SetTrigg(5,0);
    ShowPage("#PAGE5");
    AddResource(0,4,5000);
    AddResource(0,5,10000);
  }
  uVar1 = Trigg(6);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount1(&DAT_1002f440,0), 0 < iVar2)) {
    SetTrigg(6,0);
    ShowPage("#PAGE6");
    AddResource(0,1,10000);
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_1002f4b0), iVar2 == 0)) {
      SetTrigg(7,0);
      ShowPage("#PAGE7");
      LooseGame();
    }
  }
  uVar1 = Trigg(8);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount1(&DAT_1002f3e0,0), 0 < iVar2)) {
    SetTrigg(8,0);
    ShowPage("#PAGE8");
    AddResource(0,3,30000);
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1e);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x1f);
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetUnitsAmount1(&DAT_1002f488,&DAT_1002f3e8);
        if (0 < iVar2) {
          SetTrigg(9,0);
          SetTrigg(0x1f,0);
          uVar1 = AskQuestion("#PAGE9");
          if ((uVar1 & 0xff) == 0) {
            ShowPage("#PAGE9C");
          }
          else {
            iVar2 = GetResource(0,1);
            if (iVar2 < 3000) {
              ShowPage("#PAGE9B");
            }
            else {
              SetTrigg(0x1e,0);
              ShowPage("#PAGE9A");
              AddResource(0,1,0xfffff448);
              SelectUnits(&DAT_1002f4a0,0);
              SelChangeNation(4,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1e);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x1f);
      if ((uVar1 & 0xff) == 0) {
        iVar2 = GetUnitsAmount1(&DAT_1002f488,&DAT_1002f3e8);
        if (0 < iVar2) {
          SetTrigg(9,0);
          uVar1 = AskQuestion("#PAGE9D");
          if ((uVar1 & 0xff) == 0) {
            ShowPage("#PAGE9C");
          }
          else {
            iVar2 = GetResource(0,1);
            if (iVar2 < 3000) {
              ShowPage("#PAGE9B");
            }
            else {
              SetTrigg(0x1e,0);
              ShowPage("#PAGE9A");
              AddResource(0,1,0xfffff448);
              SelectUnits(&DAT_1002f4a0,0);
              SelChangeNation(4,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_1002f488,&DAT_1002f3e8);
      if (iVar2 == 0) {
        SetTrigg(9,1);
      }
    }
  }
  uVar1 = Trigg(10);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_1002f3e8), iVar2 == 0)) {
    SetTrigg(10,0);
    ShowPage("#PAGE10");
    LooseGame();
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f490,0);
    if (0 < iVar2) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE11");
      ShowPage("#PAGE11A");
      SelectUnits(&DAT_1002f4b8,0);
      SelChangeNation(4,5);
    }
  }
  uVar1 = Trigg(0xc);
  if (((uVar1 & 0xff) != 0) && (GetTotalAmount0(&DAT_1002f4a8), iVar2 == 0)) {
    SetTrigg(0xc,0);
    ShowPage("#PAGE12");
    AddResource(0,1,5000);
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f460,0);
    if (0 < iVar2) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_1002f3f0,0);
      SelSendAndKill(1,&DAT_1002f468,0,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f470,0);
    if (iVar2 < 1) {
      iVar2 = GetUnitsAmount0(&DAT_1002f448,0);
      if (iVar2 < 1) goto LAB_10002160;
    }
    SetTrigg(0x15,0);
    SelectUnits(&DAT_1002f400,0);
    SelOpenGates(1);
    SelectUnits(&DAT_1002f408,0);
    SelSendAndKill(1,&DAT_1002f470,0,0);
  }
LAB_10002160:
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f478,0);
    if (0 < iVar2) {
      SetTrigg(0x16,0);
      SelectUnits(&DAT_1002f410,0);
      SelOpenGates(1);
      SelectUnits(&DAT_1002f418,0);
      SelSendAndKill(1,&DAT_1002f478,0,0);
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_1002f480,0);
    if (0 < iVar2) {
      SetTrigg(0x17,0);
      SelectUnits(&DAT_1002f420,0);
      SelOpenGates(1);
      SelectUnits(&DAT_1002f428,0);
      SelSendAndKill(1,&DAT_1002f480,0,0);
    }
  }
  GetTotalAmount1(&DAT_1002f450,0);
  if (0 < iVar2) {
    ClearSelection(0);
    SelectUnitsType(&DAT_1002f450,0,0);
    SelDie(0);
  }
  uStack_8 = 0x10002331;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

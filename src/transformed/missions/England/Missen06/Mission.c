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
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f448,"Zone1");
  RegisterZone(&DAT_1002f450,"Zone2");
  RegisterZone(&DAT_1002f458,"Zone9");
  RegisterZone(&DAT_1002f440,"Zone10");
  RegisterZone(&DAT_1002f438,"Zone11");
  RegisterUnits(&DAT_1002f3e0,"Group1");
  RegisterUnits(&DAT_1002f3f0,"Group2");
  RegisterUnits(&DAT_1002f3e8,"Group3");
  RegisterUnits(&DAT_1002f400,"Group4");
  RegisterUnits(&DAT_1002f3f8,"Group5");
  RegisterUnits(&DAT_1002f410,"Group6");
  RegisterUnits(&DAT_1002f408,"Group7");
  RegisterUnits(&DAT_1002f420,"Group8");
  RegisterUnits(&DAT_1002f418,"Group9");
  RegisterUnits(&DAT_1002f468,"Group10");
  RegisterUnits(&DAT_1002f470,"Group11");
  RegisterUnitType(&DAT_1002f430,"Kuznica_SP(sp)");
  RegisterUnitType(&DAT_1002f460,"Center_Spain(sp)");
  RegisterUnitType(&DAT_1002f428,"akademia_SP(sp)");
  RegisterUnitType(&DAT_1002f478,"Sclad2(sp)");
  SetPlayerName(1,"SPAIN");
  uStack_8 = 0x1000130e;
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
    SetResource(0,3,10000000);
    SetResource(0,1,50000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,50000);
    SetResource(0,4,50000);
    SetResource(1,3,10000000);
    SetResource(1,1,1000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,1000000);
    SetResource(1,4,1000000);
    ShowPage("#PAGE1");
    ShowPage("#PAGE1A");
    SelectUnits(&DAT_1002f408,0);
    Patrol(1,&DAT_1002f448,0);
    SelectUnits(&DAT_1002f420,0);
    Patrol(1,&DAT_1002f450,0);
    SelectUnits(&DAT_1002f418,0);
    SelSendAndKill(1,&DAT_1002f458,0,0);
    SelectUnits(&DAT_1002f468,0);
    SelSendAndKill(1,&DAT_1002f440,0,0);
    SelectUnits(&DAT_1002f470,0);
    SelSendAndKill(1,&DAT_1002f438,0,0);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1002f430,0);
    if (0 < iVar2) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      AddResource(0,1,5000);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_1002f3e8);
      if (iVar2 == 0) {
        SetTrigg(6,0);
        ShowPage("#PAGE6");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1002f460,0);
    if (0 < iVar2) {
      SetTrigg(3,0);
      ShowPage("#PAGE3");
      AddResource(0,1,30000);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_1002f400);
      if (iVar2 == 0) {
        SetTrigg(6,0);
        ShowPage("#PAGE7");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1002f428,0);
    if (0 < iVar2) {
      SetTrigg(4,0);
      ShowPage("#PAGE4");
      AddResource(0,1,10000);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_1002f3f8);
      if (iVar2 == 0) {
        SetTrigg(6,0);
        ShowPage("#PAGE8");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1002f478,0);
    if (0 < iVar2) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
      AddResource(0,4,10000);
      AddResource(0,5,15000);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_1002f410);
      if (iVar2 == 0) {
        SetTrigg(6,0);
        ShowPage("#PAGE9");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(3);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(4);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(5);
          if ((uVar1 & 0xff) == 0) {
            SetTrigg(7,0);
            ShowPage("#PAGE11");
            ShowVictory();
          }
        }
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3e0);
    if (iVar2 == 0) {
      GetTotalAmount0(&DAT_1002f3f0);
      if (iVar2 == 0) {
        SetTrigg(8,0);
        ShowPage("#PAGE10");
        LooseGame();
      }
    }
  }
  uStack_8 = 0x10001be3;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

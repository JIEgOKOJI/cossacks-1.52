#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

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
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_1002f450,"Zone1");
  RegisterZone(&DAT_1002f458,"Zone2");
  RegisterZone(&DAT_1002f460,"Zone3");
  RegisterZone(&DAT_1002f468,"Zone4");
  RegisterZone(&DAT_1002f470,"Zone5");
  RegisterZone(&DAT_1002f478,"Zone6");
  RegisterZone(&DAT_1002f480,"Zone7");
  RegisterZone(&DAT_1002f488,"Zone8");
  RegisterZone(&DAT_1002f490,"Zone9");
  RegisterZone(&DAT_1002f430,"Zone10");
  RegisterZone(&DAT_1002f428,"Zone11");
  RegisterZone(&DAT_1002f440,"Zone12");
  RegisterZone(&DAT_1002f438,"Zone13");
  RegisterZone(&DAT_1002f448,"Zone14");
  RegisterUnits(&DAT_1002f3e8,"Group1");
  RegisterUnits(&DAT_1002f3f8,"Group2");
  RegisterUnits(&DAT_1002f3f0,"Group3");
  RegisterUnits(&DAT_1002f408,"Group4");
  RegisterUnits(&DAT_1002f400,"Group5");
  RegisterUnits(&DAT_1002f418,"Group6");
  RegisterUnits(&DAT_1002f410,"Group7");
  RegisterUnits(&DAT_1002f420,"Group8");
  RegisterUnits(&DAT_1002f498,"Group10");
  RegisterUnits(&DAT_1002f4a0,"Group11");
  RegisterUnits(&DAT_1002f4a8,"Group12");
  RegisterUnitType(&DAT_1002f4b0,"Sclad2(fr)");
  RegisterUnitType(&DAT_1002f3e0,"GRUZ_Z(UN)");
  SetPlayerName(1,"SPAIN");
  SetPlayerName(4,"ALLIES");
  uStack_8 = 0x100013eb;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *puVar4;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    ChangeFriends(0,0x11);
    ChangeFriends(4,0x11);
    SetResource(0,3,5000);
    SetResource(0,1,5000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    ShowPage("#PAGE1");
    SelectUnits(&DAT_1002f3f0,0);
    SelSendAndKill(1,&DAT_1002f450,0,0);
    SelectUnits(&DAT_1002f408,0);
    SelSendAndKill(1,&DAT_1002f458,0,0);
    RunTimer(5,100);
    SelectUnits(&DAT_1002f420,0);
    Patrol(1,&DAT_1002f488,0);
  }
  uVar1 = Trigg(0x42);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetGlobalTime();
    if (200 < iVar3) {
      SetTrigg(0x42,0);
      SelectUnits(&DAT_1002f3f8,0);
      SelSendTo(4,&DAT_1002f458,0,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3f8);
    if (iVar3 < 0xd) {
      SetTrigg(2,0);
      ShowPage("#PAGE2");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x43);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x28);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_1002f458,&DAT_1002f3f8);
      if (0 < iVar3) {
        SetTrigg(0x43,0);
        SetTrigg(0x28,0);
        SelectUnits(&DAT_1002f498,0);
        SelOpenGates(5);
        RunTimer(1,200);
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f8,0);
    SelSendTo(4,&DAT_1002f470,0,0);
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      ClearSelection(1);
      SelectUnits1(1,&DAT_1002f3f8,0);
      SelDie(1);
      RunTimer(5,100);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount1(&DAT_1002f470,&DAT_1002f3f8);
      GetTotalAmount0(&DAT_1002f3f8);
      if (iVar3 == iVar2) {
        SetTrigg(3,0);
        SetTrigg(0x43,0);
        ClearSelection(0);
        SelectUnits1(0,&DAT_1002f3f8,0);
        SelChangeNation(0,4);
        ShowPage("#PAGE3");
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f460,0);
    if (0 < iVar3) {
      SetTrigg(4,0);
      ShowPage("#PAGE4");
      RunTimer(2,2000);
    }
  }
  uVar1 = TimerDoneFirst(2);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f400,0);
    SelSendAndKill(1,&DAT_1002f478,0,0);
    SelSendAndKill(1,&DAT_1002f478,0,2);
    SelectUnits(&DAT_1002f420,0);
    SelSendTo(1,&DAT_1002f488,0,0);
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1002f3e0,1);
    if (iVar3 == 0) {
      SetTrigg(5,0);
      ShowPage("#PAGE5");
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f468,0);
    if (0 < iVar3) {
      SetTrigg(6,0);
      ShowPage("#PAGE6");
    }
  }
  iVar3 = GetUnitsByNation(&DAT_1002f418,0);
  if (0 < iVar3) {
    ClearSelection(0);
    SelectUnits1(0,&DAT_1002f418,0);
    SelDie(0);
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f418);
    if (iVar3 == 0) {
      SetTrigg(7,0);
      ShowPage("#PAGE7");
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(5);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(7);
        if ((uVar1 & 0xff) == 0) {
          SetTrigg(8,0);
          ShowPage("#PAGE8");
          ShowVictory();
        }
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f490,0);
    if (0 < iVar3) {
      SetTrigg(9,0);
      ShowPage("#PAGE9");
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1002f3e8);
    if (iVar3 == 0) {
      SetTrigg(10,0);
      iVar3 = GetResource(0,3);
      if (iVar3 < 1) {
        ShowPage("#PAGE10A");
      }
      else {
        ShowPage("#PAGE10");
      }
      LooseGame();
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f438,0);
    if (0 < iVar3) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE11");
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f448,0);
    if (0 < iVar3) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE12");
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1002f4b0,0);
    if (0 < iVar3) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE13");
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f430,0);
    if (0 < iVar3) {
      SetTrigg(0x28,0);
      SelectUnits(&DAT_1002f498,0);
      SelOpenGates(5);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x43);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetUnitsAmount0(&DAT_1002f430,0);
      if (iVar3 == 0) {
        SetTrigg(0x28,0);
        SelectUnits(&DAT_1002f498,0);
        SelCloseGates(5);
      }
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f428,0);
    if (0 < iVar3) {
      SetTrigg(0x29,0);
      SelectUnits(&DAT_1002f4a0,0);
      SelOpenGates(5);
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f428,0);
    if (iVar3 == 0) {
      SetTrigg(0x29,0);
      SelectUnits(&DAT_1002f4a0,0);
      SelCloseGates(5);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f440,0);
    if (0 < iVar3) {
      SetTrigg(0x2a,0);
      SelectUnits(&DAT_1002f4a8,0);
      SelOpenGates(5);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount0(&DAT_1002f440,0);
    if (iVar3 == 0) {
      SetTrigg(0x2a,0);
      SelectUnits(&DAT_1002f4a8,0);
      SelCloseGates(5);
    }
  }
  uStack_8 = 0x100022fd;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

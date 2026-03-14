#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_100303e0 = 0;
long long DAT_100303e8 = 0;
long long DAT_100303f0 = 0;
long long DAT_100303f8 = 0;
long long DAT_10030400 = 0;
long long DAT_10030408 = 0;
long long DAT_10030410 = 0;
int DAT_10030418 = 0;
long long DAT_10030420 = 0;
long long DAT_10030428 = 0;
long long DAT_10030430 = 0;
long long DAT_10030438 = 0;
long long DAT_10030440 = 0;
long long DAT_10030448 = 0;
long long DAT_10030450 = 0;
long long DAT_10030458 = 0;
long long DAT_10030460 = 0;
long long DAT_10030468 = 0;
int DAT_1003046c = 0;
long long DAT_10030470 = 0;
long long DAT_10030478 = 0;
long long DAT_10030480 = 0;
long long DAT_10030488 = 0;
long long DAT_10030490 = 0;
long long DAT_10030498 = 0;
long long DAT_100304a0 = 0;
long long DAT_100304a8 = 0;
long long DAT_100304b0 = 0;
long long DAT_100304b8 = 0;
long long DAT_100304c0 = 0;
long long DAT_100304c8 = 0;
long long DAT_100304d0 = 0;
long long DAT_100304d8 = 0;
long long DAT_100304e0 = 0;
long long DAT_100304e8 = 0;
long long DAT_100304f0 = 0;
long long DAT_100304f8 = 0;
long long DAT_10030500 = 0;
long long DAT_10030508 = 0;
long long DAT_10030510 = 0;
long long DAT_10030518 = 0;
long long DAT_10030520 = 0;
long long DAT_10030528 = 0;
long long DAT_10030530 = 0;
long long DAT_10030538 = 0;
long long DAT_10030540 = 0;
long long DAT_10030548 = 0;
long long DAT_1003054c = 0;
long long DAT_10030550 = 0;
long long DAT_10030558 = 0;
long long DAT_10030560 = 0;
long long DAT_10030568 = 0;
long long DAT_10030570 = 0;
long long DAT_10030578 = 0;
long long DAT_10030580 = 0;
long long DAT_10030588 = 0;
long long DAT_10030590 = 0;
long long DAT_10030598 = 0;
long long DAT_100305a0 = 0;
long long DAT_100305a8 = 0;
long long DAT_100305b0 = 0;
int DAT_100305b8 = 0;
long long DAT_100305c0 = 0;
long long DAT_100305c8 = 0;
long long DAT_100305d0 = 0;
int DAT_100305d0_ovl = 0;

void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10030450,"Gholop1");
  RegisterUnits(&DAT_100305c8,"Gpresent1");
  RegisterUnits(&DAT_100305c0,"Gpresent2");
  RegisterUnits(&DAT_10030530,"Gmush1");
  RegisterUnits(&DAT_10030528,"Gmush2");
  RegisterUnits(&DAT_10030540,"Gmush3");
  RegisterUnits(&DAT_10030538,"Gmush4");
  RegisterUnits(&DAT_100304f0,"Gpike1");
  RegisterUnits(&DAT_100304e0,"Gpike2");
  RegisterUnits(&DAT_10030500,"Gpike3");
  RegisterUnits(&DAT_100304f8,"Gpike4");
  RegisterUnits(&DAT_10030498,"Gpush1");
  RegisterUnits(&DAT_100304c0,"Gpush2");
  RegisterZone(&DAT_10030570,"Zattack1");
  RegisterZone(&DAT_10030578,"Zattack2");
  RegisterZone(&DAT_10030560,"Zattack3");
  RegisterZone(&DAT_10030568,"Zattack4");
  RegisterZone(&DAT_10030590,"Zattack5");
  RegisterZone(&DAT_10030598,"Zattack6");
  RegisterZone(&DAT_10030580,"Zattack7");
  RegisterZone(&DAT_10030588,"Zattack8");
  RegisterUnitType(&DAT_10030448,"WALL_EV(fr)");
  RegisterUnitType(&DAT_10030520,"WALL_UKR(fr)");
  RegisterUpgrade(&DAT_10030558,"MAINFR");
  RegisterVar(&DAT_10030428,8);
  RegisterVar(&DAT_10030420,8);
  RegisterVar(&DAT_10030438,8);
  RegisterVar(&DAT_10030430,8);
  RegisterVar(&DAT_100303f8,8);
  RegisterVar(&DAT_100303f0,8);
  RegisterVar(&DAT_10030408,8);
  RegisterVar(&DAT_10030400,8);
  RegisterVar(&DAT_10030410,8);
  RegisterVar(&DAT_10030460,8);
  RegisterVar(&DAT_10030458,8);
  RegisterVar(&DAT_100304a0,8);
  RegisterVar(&DAT_10030490,8);
  RegisterVar(&DAT_100304b8,8);
  RegisterVar(&DAT_100304a8,8);
  RegisterVar(&DAT_10030478,8);
  RegisterVar(&DAT_10030470,8);
  RegisterVar(&DAT_10030488,8);
  RegisterVar(&DAT_10030480,8);
  RegisterVar(&DAT_100304b0,8);
  RegisterVar(&DAT_10030468,4);
  RegisterVar(&DAT_100304c8,4);
  RegisterVar(&DAT_10030518,4);
  RegisterVar(&DAT_10030548,4);
  RegisterVar(&DAT_1003054c,4);
  RegisterVar(&DAT_10030550,4);
  RegisterVar(&DAT_100305b8,4);
  RegisterVar(&DAT_100305d0,4);
  RegisterVar(&DAT_1003046c,4);
  RegisterVar(&DAT_10030418,4);
  RegisterFormation(&DAT_100305b0,"#LINE5");
  RegisterFormation(&DAT_100304d8,"#LINE20PUS");
  RegisterFormation(&DAT_10030508,"#LINE30PUS");
  RegisterFormation(&DAT_10030510,"#LINE40PUS");
  RegisterFormation(&DAT_100304e8,"#LINE15PUS");
  RegisterFormation(&DAT_100304d0,"#LINE10PUS");
  RegisterFormation(&DAT_100305a8,"#LINE3");
  RegisterFormation(&DAT_100303e0,"#SHIPS3");
  RegisterFormation(&DAT_100303e8,"#SHIPS5");
  RegisterFormation(&DAT_10030440,"#ALONE");
  RegisterDynGroup(&DAT_10030428);
  RegisterDynGroup(&DAT_10030420);
  RegisterDynGroup(&DAT_10030438);
  RegisterDynGroup(&DAT_10030430);
  RegisterDynGroup(&DAT_100303f8);
  RegisterDynGroup(&DAT_100303f0);
  RegisterDynGroup(&DAT_10030408);
  RegisterDynGroup(&DAT_10030400);
  RegisterDynGroup(&DAT_10030410);
  RegisterDynGroup(&DAT_10030460);
  RegisterDynGroup(&DAT_10030458);
  RegisterDynGroup(&DAT_100304a0);
  RegisterDynGroup(&DAT_10030490);
  RegisterDynGroup(&DAT_100304b8);
  RegisterDynGroup(&DAT_100304a8);
  RegisterDynGroup(&DAT_10030478);
  RegisterDynGroup(&DAT_10030470);
  RegisterDynGroup(&DAT_10030488);
  RegisterDynGroup(&DAT_10030480);
  RegisterDynGroup(&DAT_100304b0);
  RegisterDynGroup(&DAT_100305a0);
  SetPlayerName(1,"BAVARIA");
  SetPlayerName(2,"ENGLAND");
  SetPlayerName(3,"SVEDES");
  SetPlayerName(4,"RUSSIANS");
  SetPlayerName(5,"POLAND");
  ChangeFriends(0,3);
  ChangeFriends(1,0x3f);
  ChangeFriends(2,0x3c);
  ChangeFriends(3,0x3c);
  ChangeFriends(4,0x3c);
  ChangeFriends(5,0x3c);
  EnableUnit(0,&DAT_10030448,0);
  EnableUnit(0,&DAT_10030520,0);
  uStack_8 = 0x10001a15;
  return;
}







void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    EnableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    local_8 = GetDiff(0);
    switch(local_8) {
    case 0:
      SetResource(0,3,65000);
      SetResource(0,0,15000);
      SetResource(0,2,15000);
      SetResource(0,1,15000);
      SetResource(0,5,15000);
      SetResource(0,4,15000);
      InitialUpgrade("Gpresent1","KUZ02BA");
      InitialUpgrade("Gpresent1","AKA09BA");
      InitialUpgrade("Gpresent1","AKA11BA");
      InitialUpgrade("Gholop1","KUZ02BA");
      InitialUpgrade("Gholop1","AKA09BA");
      InitialUpgrade("Gholop1","AKA11BA");
      break;
    case 1:
      SetResource(0,3,30000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10030498,0);
      SelErase(1);
      break;
    case 2:
      SetResource(0,3,15000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      SetResource(0,1,7000);
      SetResource(0,5,7000);
      SetResource(0,4,7000);
      SelectUnits(&DAT_10030498,0);
      SelectUnits(&DAT_100304c0,1);
      SelErase(1);
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      SelectUnits(&DAT_10030498,0);
      SelectUnits(&DAT_100304c0,1);
      SelectUnits(&DAT_10030530,1);
      SelectUnits(&DAT_10030528,1);
      SelectUnits(&DAT_10030540,1);
      SelectUnits(&DAT_10030538,1);
      SelErase(1);
    }
    ClearSelection(1);
    RunTimer(1,300);
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    uVar2 = GetDiff(0);
    StartAI(2,"ENGLAND.0",0,1,2,uVar2);
    SetResource(3,3,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,5,5000);
    SetResource(3,4,5000);
    uVar2 = GetDiff(0);
    StartAI(3,"SVEDEN.0",0,1,2,uVar2);
    SetResource(4,3,5000);
    SetResource(4,0,5000);
    SetResource(4,2,5000);
    SetResource(4,1,5000);
    SetResource(4,5,5000);
    SetResource(4,4,5000);
    uVar2 = GetDiff(0);
    StartAI(4,"RUSSIA.0",0,1,2,uVar2);
    SetResource(5,3,5000);
    SetResource(5,0,5000);
    SetResource(5,2,5000);
    SetResource(5,1,5000);
    SetResource(5,5,5000);
    SetResource(5,4,5000);
    uVar2 = GetDiff(0);
    StartAI(5,"POLAND.0",0,1,2,uVar2);
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0A");
      EnableMission(0x44);
      RunTimer(2,25000);
      DAT_100305d0_ovl = GetGlobalTime();
      RunTimer(3,0x30d4);
      DAT_100305b8 = 4;
    }
  }
  uVar1 = TimerDoneFirst(4);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_100304f0,0);
    SelectUnits(&DAT_10030530,1);
    SelSendTo(1,&DAT_10030570,0xdc,0);
    SelSendTo(1,&DAT_10030578,0xc3,2);
    SelectUnits(&DAT_100304e0,0);
    SelectUnits(&DAT_10030528,1);
    SelSendTo(1,&DAT_10030560,0xdc,0);
    SelSendTo(1,&DAT_10030568,0xc3,2);
    SelectUnits(&DAT_10030500,0);
    SelectUnits(&DAT_10030540,1);
    SelSendTo(1,&DAT_10030590,100,0);
    SelSendTo(1,&DAT_10030598,0x41,2);
    SelectUnits(&DAT_100304f8,0);
    SelectUnits(&DAT_10030538,1);
    SelSendTo(1,&DAT_10030580,0x5a,0);
    SelSendTo(1,&DAT_10030588,0x41,2);
    ClearSelection(1);
  }
  uVar1 = TimerDone(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE1B");
      SelectUnits(&DAT_100305c8,0);
      SelectUnits(&DAT_10030498,1);
      SelectUnits(&DAT_100304c0,1);
      SelDie(1);
      SelDie(1);
      RunTimer(4,100);
    }
  }
  iVar3 = GetUnitsAmount0(&DAT_10030578,1);
  if (0 < iVar3) {
    SelectUnitsInZone(&DAT_10030578,1,0);
    SelErase(1);
    ClearSelection(1);
  }
  iVar3 = GetUnitsAmount0(&DAT_10030568,1);
  if (0 < iVar3) {
    SelectUnitsInZone(&DAT_10030568,1,0);
    SelErase(1);
    ClearSelection(1);
  }
  iVar3 = GetUnitsAmount0(&DAT_10030598,1);
  if (0 < iVar3) {
    SelectUnitsInZone(&DAT_10030598,1,0);
    SelErase(1);
    ClearSelection(1);
  }
  iVar3 = GetUnitsAmount0(&DAT_10030588,1);
  if (0 < iVar3) {
    SelectUnitsInZone(&DAT_10030588,1,0);
    SelErase(1);
    ClearSelection(1);
  }
  uVar1 = TimerDoneFirst(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x60);
      if ((uVar1 & 0xff) != 0) {
        DAT_100305b8 = DAT_100305b8 + 1;
        ShowPageParam("#PAGE0B",DAT_100305b8);
        RunTimer(3,0x9c4);
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = IsUpgradeDone(&DAT_10030558,0);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x60);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x60,0);
        ShowPage("#PAGE0");
        DisableMission(0x42);
        EnableMission(0x43);
      }
    }
  }
  uVar1 = IsUpgradeDone(&DAT_10030558,0);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x60,0);
      SetTrigg(0x5f,0);
      iVar3 = GetGlobalTime();
      DAT_1003046c = (((iVar3 - DAT_100305d0_ovl) % 0x9c4) * 0x3c) / 0x9c4;
      iVar3 = GetGlobalTime();
      DAT_10030418 = (25000 - (iVar3 - DAT_100305d0_ovl)) * 10;
      ShowPageParam("#PAGE0C",DAT_100305b8,DAT_1003046c,DAT_10030418);
      AddResource(0,1,DAT_10030418);
      DisableMission(0x42);
      EnableMission(0x43);
      SelectUnits(&DAT_100305c8,0);
      SelectUnits(&DAT_100305c0,1);
      SelChangeNation(1,0);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x62,0);
      iVar3 = GetResource(0,3);
      if (iVar3 < 1) {
        ShowPage("#PAGE1A");
      }
      else {
        ShowPage("#PAGE1");
      }
      LooseGame();
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x61);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x61,0);
        ShowPage("#PAGE9");
        ShowVictory();
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE8A");
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE8B");
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE8C");
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE8D");
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0xd);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(0xe);
          if ((uVar1 & 0xff) == 0) {
            SetTrigg(0xf,0);
            ShowPage("#PAGE8");
            DisableMission(0x44);
            EnableMission(0x45);
          }
        }
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

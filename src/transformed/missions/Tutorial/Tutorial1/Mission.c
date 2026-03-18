#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int DAT_100303e0 = 0;
int DAT_100303e4 = 0;
int DAT_100303e8 = 0;
long long DAT_100303f0 = 0;
long long DAT_100303f8 = 0;
long long DAT_10030400 = 0;
long long DAT_10030408 = 0;
long long DAT_10030410 = 0;
long long DAT_10030418 = 0;
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
long long DAT_10030470 = 0;
long long DAT_10030478 = 0;
long long DAT_10030480 = 0;
long long DAT_10030488 = 0;
long long DAT_10030490 = 0;
long long DAT_10030498 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterVar(&DAT_100303e8,4);
  RegisterVar(&DAT_100303e4,4);
  RegisterVar(&DAT_100303e0,4);
  RegisterUnitType(&DAT_10030428,"Russki_Center(RU)");
  RegisterUnitType(&DAT_10030438,"ruskaia_izba(RU)");
  RegisterUnitType(&DAT_10030448,"Melnica_rus(RU)");
  RegisterUnitType(&DAT_10030458,"Sclad3(RU)");
  RegisterUnitType(&DAT_10030460,"shahta(RU)");
  RegisterUnitType(&DAT_10030468,"Kuznica(RU)");
  RegisterUnitType(&DAT_10030470,"konushnia(RU)");
  RegisterUnitType(&DAT_10030478,"Cerkov_RU(RU)");
  RegisterUnitType(&DAT_10030488,"akademia_RU(RU)");
  RegisterUnitType(&DAT_100303f0,"Dip_korpus_RU(RU)");
  RegisterUnitType(&DAT_100303f8,"Rus_Strel_Dom(RU)");
  RegisterUnitType(&DAT_10030400,"Kazarma(RU)");
  RegisterUnitType(&DAT_10030408,"artileri_depo(RU)");
  RegisterUnitType(&DAT_10030410,"Rinok(RU)");
  RegisterUnitType(&DAT_10030418,"PorR(RU)");
  RegisterUnitType(&DAT_10030420,"Kreposnoi(RU)");
  RegisterUnitType(&DAT_10030430,"WALL_UKR(RU)");
  RegisterUnitType(&DAT_10030440,"WALL_KR(RU)");
  RegisterUnitType(&DAT_10030450,"Bashnia_2(RU)");
  RegisterDynGroup(&DAT_10030480);
  RegisterVar(&DAT_10030480,8);
  RegisterUpgrade(&DAT_10030490,"MAINRU");
  RegisterUpgrade(&DAT_10030498,"MAINRU");
  ChangeFriends(0,7);
  ChangeFriends(1,0xff);
  ChangeFriends(2,0xff);
  uStack_8 = 0x100013c4;
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
    DisableUpgrade(0,&DAT_10030490);
    EnableUnit(0,&DAT_10030428,0);
    EnableUnit(0,&DAT_10030438,0);
    EnableUnit(0,&DAT_10030448,0);
    EnableUnit(0,&DAT_10030458,0);
    EnableUnit(0,&DAT_10030460,0);
    EnableUnit(0,&DAT_10030468,0);
    EnableUnit(0,&DAT_10030470,0);
    EnableUnit(0,&DAT_10030478,0);
    EnableUnit(0,&DAT_10030488,0);
    EnableUnit(0,&DAT_100303f0,0);
    EnableUnit(0,&DAT_100303f8,0);
    EnableUnit(0,&DAT_10030400,0);
    EnableUnit(0,&DAT_10030408,0);
    EnableUnit(0,&DAT_10030410,0);
    EnableUnit(0,&DAT_10030418,0);
    EnableUnit(0,&DAT_10030430,0);
    EnableUnit(0,&DAT_10030440,0);
    EnableUnit(0,&DAT_10030450,0);
    SetResource(0,3,3000);
    SetResource(0,1,0x15e);
    SetResource(0,4,10);
    SetResource(0,2,1000);
    SetResource(0,0,1000);
    SetResource(0,5,10);
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x48);
    DisableMission(0x49);
    DisableMission(0x47);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4d);
    DisableMission(0x4e);
    DisableMission(0x4f);
    DisableMission(0x50);
    SetTrigg(2,0);
    SetTrigg(5,0);
    SetTrigg(6,0);
    SetTrigg(7,0);
    SetTrigg(8,0);
    SetTrigg(9,0);
    SetTrigg(10,0);
    SetTrigg(0xb,0);
    SetTrigg(0xc,0);
    SetTrigg(0xd,0);
    SetTrigg(0xe,0);
    SetTrigg(0xf,0);
    SetTrigg(0x10,0);
    SetTrigg(0x11,0);
    SetTrigg(0x12,0);
    SetTrigg(0x13,0);
    SetTrigg(0x14,0);
    SetTrigg(0x15,0);
    SetTrigg(0x16,0);
    SetTrigg(0x17,0);
    SetTrigg(0x18,0);
    SetTrigg(0x19,0);
    SetTrigg(0x1a,0);
    SetTrigg(0x1b,0);
    SetTrigg(0x1c,0);
    RunTimer(1,0x50);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(4,0);
      ShowPage("#PAGE1");
      ShowPage("#PAGE2");
      ClearSelection(0);
      SetTrigg(2,0);
      RunTimer(4,300);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_10030480,0);
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030480);
    if (0 < iVar2) {
      uVar1 = TimerDone(4);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits1(0,&DAT_10030480,0);
        SetTrigg(2,0);
        SetTrigg(3,0);
        SetTrigg(5,0);
        SetTrigg(6,0);
        ShowPage("#PAGE3");
        ClearSelection(0);
      }
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_10030480,0);
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount0(&DAT_10030480);
    if (9 < iVar2) {
      DisableMission(0x41);
      EnableMission(0x42);
      SetTrigg(6,0);
      SetTrigg(5,0);
      ShowPage("#PAGE4");
      RunTimer(2,0x15e);
      SetTrigg(7,0);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(7,0);
      ShowPage("#PAGE5");
      ShowPage("#PAGE6");
      ClearSelection(0);
      EnableUnit(0,&DAT_10030448,1);
      SetTrigg(8,0);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount1(&DAT_10030448,0);
    if (0 < iVar2) {
      SetTrigg(8,0);
      ShowPage("#PAGE7");
      SetTrigg(9,0);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10030448,0);
    if (0 < iVar2) {
      SetTrigg(9,0);
      EnableMission(0x43);
      EnableMission(0x42);
      DisableMission(0x42);
      ShowPage("#PAGE8");
      RunTimer(3,400);
      SetTrigg(10,0);
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(10,0);
      ShowPage("#PAGE9");
      DisableUpgrade(0,&DAT_10030498);
      RunTimer(5,500);
      SetTrigg(0xb,0);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE10");
      ShowPage("#PAGE11");
      ClearSelection(0);
      EnableUnit(0,&DAT_10030428,1);
      SetTrigg(0xc,0);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10030428,0);
    if (0 < iVar2) {
      SetTrigg(0xc,0);
      ShowPage("#PAGE12");
      EnableMission(0x44);
      EnableMission(0x4c);
      DisableMission(0x43);
      RunTimer(6,400);
      EnableUnit(0,&DAT_10030458,1);
      SetTrigg(0xd,0);
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xd,0);
      ShowPage("#PAGE13");
      SetTrigg(0xe,0);
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10030458,0);
    if (0 < iVar2) {
      SetTrigg(0xe,0);
      SetTrigg(0xf,0);
      EnableMission(0x45);
      EnableMission(0x4d);
      DisableMission(0x44);
      ShowPage("#PAGE14");
      RunTimer(7,600);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xf,0);
      ShowPage("#PAGE15");
      DAT_100303e8 = GetResource(0,0);
      DAT_100303e4 = GetResource(0,2);
      DAT_100303e0 = GetResource(0,3);
      SetTrigg(0x10,0);
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetResource(0,0);
    if (iVar2 <= DAT_100303e8) {
      iVar2 = GetResource(0,2);
      if (iVar2 <= DAT_100303e4) {
        iVar2 = GetResource(0,3);
        if (iVar2 <= DAT_100303e0) goto LAB_1000258a;
      }
    }
    SetTrigg(0x10,0);
    ShowPage("#PAGE16");
    RunTimer(8,300);
    SetTrigg(0x11,0);
  }
LAB_1000258a:
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetResource(0,0);
      if (0x7f7 < iVar2) {
        iVar2 = GetResource(0,2);
        if (0x833 < iVar2) goto LAB_10002645;
      }
      SetTrigg(0x11,0);
      ShowPage("#PAGE17");
      SetTrigg(0x12,0);
    }
  }
LAB_10002645:
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetResource(0,0);
    if (0x7f8 < iVar2) {
      iVar2 = GetResource(0,2);
      if (0x834 < iVar2) {
        SetTrigg(0x12,0);
        ShowPage("#PAGE18");
        SetTrigg(0x13,0);
      }
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10030428,0);
    if (1 < iVar2) {
      SetTrigg(0x13,0);
      ShowPage("#PAGE19");
      EnableMission(0x46);
      EnableMission(0x4e);
      DisableMission(0x45);
      SetTrigg(0x14,0);
      SetTrigg(0x15,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_10030480,0);
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetTotalAmount2(&DAT_10030480,&DAT_10030428,0);
    if (0 < iVar2) {
      SetTrigg(0x15,0);
      ShowPage("#PAGE20");
      SetTrigg(0x16,0);
      EnableMission(0x48);
      DisableMission(0x46);
      RunTimer(9,0x96);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x16,0);
      ShowPage("#PAGE21");
      SetTrigg(0x17,0);
      RunTimer(10,500);
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetResource(0,0);
      if (0x1c2 < iVar2) {
        SetTrigg(0x17,0);
        ClearSelection(0);
        EnableUnit(0,&DAT_10030410,1);
        EnableMission(0x47);
        EnableMission(0x4f);
        DisableMission(0x48);
        SetTrigg(0x1c,0);
        ShowPage("#PAGE22");
      }
    }
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10030410,0);
    if (0 < iVar2) {
      SetTrigg(0x1c,0);
      ShowPage("#PAGE23");
      SetTrigg(0x18,0);
      RunTimer(0xb,500);
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xb);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x18,0);
      ShowPage("#PAGE24");
      SetTrigg(0x19,0);
      RunTimer(0xc,400);
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xc);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x19,0);
      ShowPage("#PAGE25");
      ClearSelection(0);
      EnableUnit(0,&DAT_10030460,1);
      EnableMission(0x49);
      DisableMission(0x47);
      SetTrigg(0x1a,0);
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetReadyAmount(&DAT_10030460,0);
    if (0 < iVar2) {
      SetTrigg(0x1a,0);
      ShowPage("#PAGE26");
      ShowPage("#PAGE28");
      EnableMission(0x50);
      DisableMission(0x49);
      SetTrigg(0x1b,0);
      RunTimer(0xd,500);
    }
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xd);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1b,0);
      ShowPage("#PAGE27");
      SetTrigg(99,0);
    }
  }
  uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(100,0);
      ShowPage("#PAGE100");
    }
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) == 0) {
    SetTrigg(99,0);
    ShowPage("#PAGE99");
    ShowVictory();
  }
  uStack_8 = 0x10002e90;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_100303e0 = 0;
long long DAT_100303e8 = 0;
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
long long DAT_100304a0 = 0;
long long DAT_100304a8 = 0;
long long DAT_100304b0 = 0;
void OnInit();
void ProcessScenary();



void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10030428,"Zone1");
  RegisterZone(&DAT_10030430,"Zone2");
  RegisterZone(&DAT_10030438,"Zone3");
  RegisterZone(&DAT_10030440,"Zone4");
  RegisterZone(&DAT_10030448,"Zone5");
  RegisterZone(&DAT_10030450,"Zone6");
  RegisterZone(&DAT_10030458,"Zone7");
  RegisterZone(&DAT_10030460,"Zone8");
  RegisterUnits(&DAT_100303e0,"Group1");
  RegisterUnits(&DAT_100303f0,"Group2");
  RegisterUnits(&DAT_100303e8,"Group3");
  RegisterUnits(&DAT_10030400,"Group4");
  RegisterUnits(&DAT_100303f8,"Group5");
  RegisterUnits(&DAT_10030410,"Group6");
  RegisterUnits(&DAT_10030408,"Group7");
  RegisterUnits(&DAT_10030420,"Group8");
  RegisterUnits(&DAT_10030418,"Group9");
  RegisterUnits(&DAT_10030488,"Group10");
  RegisterUnits(&DAT_100304a8,"Group11");
  RegisterUnits(&DAT_100304b0,"Group12");
  RegisterUnits(&DAT_10030498,"Group13");
  RegisterUnits(&DAT_100304a0,"Group14");
  RegisterUnits(&DAT_10030490,"Group15");
  RegisterUnitType(&DAT_10030478,"Fregat(HO)");
  RegisterUnitType(&DAT_10030480,"Linkor(HO)");
  RegisterUpgrade(&DAT_10030468,"AKA06HO");
  RegisterUpgrade(&DAT_10030470,"AKA29HO");
  SetStandartVictory();
  SetPlayerName(1,"ENGLAND");
  SetPlayerName(5,"MERCH");
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(5,0x23);
  InitialUpgrade("Group6","AKA06HO");
  InitialUpgrade("Group6","AKA29HO");
  uStack_8 = 0x10001464;
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
    SetResource(1,1,10000000);
    SetResource(1,0,10000);
    SetResource(1,2,10000);
    SetResource(1,5,100000);
    SetResource(1,4,100000);
    SetResource(5,3,1000000);
    SetResource(5,1,1000000);
    SetResource(5,0,1000000);
    SetResource(5,2,100000);
    SetResource(5,5,1000000);
    SetResource(5,4,1000000);
    StartAI(1,"ENGLAND.0",2,1,0,-1);
    ShowPage("#PAGE1");
    ShowPage("#PAGE16");
    RunTimer(1,5000);
    SetLightSpot(&DAT_10030428,1,1);
    EnableUnit(0,&DAT_10030478,0);
    EnableUnit(0,&DAT_10030480,0);
    SelectUnits1(1,&DAT_100303e0,0);
    SelChangeNation(1,5);
    SetTrigg(99,0);
    SetTrigg(0x5e,0);
    SetTrigg(0x57,0);
    SetTrigg(0x51,0);
    SelectUnits1(1,&DAT_100303f0,0);
    SelectUnits1(1,&DAT_10030488,1);
    SelectUnits1(1,&DAT_10030420,1);
    SelectUnits1(1,&DAT_10030418,1);
    SelectUnits1(1,&DAT_10030400,1);
    SelectUnits1(1,&DAT_10030408,1);
    SelectUnits1(1,&DAT_100304a8,1);
    SelectUnits1(1,&DAT_100303f8,1);
    DoNotUseSelInAI(1);
    SetTrigg(0x4a,0);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x62);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(99);
      SetTrigg(99,0);
      SetTrigg(0x62,0);
      SelectUnits1(5,&DAT_100304b0,0);
      SelSendTo(5,&DAT_10030438,0xd3,0);
      SetTrigg(0x61,0);
    }
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x62);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030438,&DAT_100304b0);
      if (0 < iVar2) {
        SetTrigg(0x61,0);
        RunTimer(3,300);
        SetTrigg(0x49,0);
        SetTrigg(0x60,0);
      }
    }
  }
  uVar1 = Trigg(0x49);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x61);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x4a);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x49,0);
        ShowPage("#PAGE5");
        AddResource(0,1,3000);
        AddResource(0,3,5000);
      }
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x60,0);
      SelectUnits1(5,&DAT_100304b0,0);
      SelSendTo(5,&DAT_10030448,0x87,0);
      SetTrigg(0x5a,0);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030448,&DAT_100304b0);
      if (0 < iVar2) {
        SetTrigg(0x5a,0);
        RunTimer(4,300);
        SetTrigg(0x5f,0);
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      SetTrigg(0x62,0);
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5d);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x5e);
      SetTrigg(0x5e,0);
      SetTrigg(0x5d,0);
      SelectUnits1(5,&DAT_10030498,0);
      SelSendTo(5,&DAT_10030448,0x87,0);
      SetTrigg(0x5c,0);
    }
  }
  uVar1 = Trigg(0x5c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5d);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030448,&DAT_10030498);
      if (0 < iVar2) {
        SetTrigg(0x5c,0);
        RunTimer(5,300);
        SetTrigg(0x5b,0);
      }
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5b,0);
      SelectUnits1(5,&DAT_10030498,0);
      SelSendTo(5,&DAT_10030438,0xd3,0);
      SetTrigg(0x59,0);
    }
  }
  uVar1 = Trigg(0x59);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5b);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030438,&DAT_10030498);
      if (0 < iVar2) {
        SetTrigg(0x59,0);
        RunTimer(6,300);
        SetTrigg(0x48,0);
        SetTrigg(0x58,0);
      }
    }
  }
  uVar1 = Trigg(0x48);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x59);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x4a);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x48,0);
        ShowPage("#PAGE6");
        AddResource(0,4,3000);
        AddResource(0,0,5000);
      }
    }
  }
  uVar1 = Trigg(0x58);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x58,0);
      SetTrigg(0x5d,0);
    }
  }
  uVar1 = Trigg(0x57);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x56);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x57);
      SetTrigg(0x57,0);
      SetTrigg(0x56,0);
      SelectUnits1(5,&DAT_100304a0,0);
      SelSendTo(5,&DAT_10030450,0x2d,0);
      SetTrigg(0x55,0);
    }
  }
  uVar1 = Trigg(0x55);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x56);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030450,&DAT_100304a0);
      if (0 < iVar2) {
        SetTrigg(0x55,0);
        RunTimer(7,300);
        SetTrigg(0x54,0);
      }
    }
  }
  uVar1 = Trigg(0x54);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x54,0);
      SelectUnits1(5,&DAT_100304a0,0);
      SelSendTo(5,&DAT_10030440,0x87,0);
      SetTrigg(0x53,0);
    }
  }
  uVar1 = Trigg(0x53);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x54);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030440,&DAT_100304a0);
      if (0 < iVar2) {
        SetTrigg(0x53,0);
        RunTimer(8,300);
        SetTrigg(0x47,0);
        SetTrigg(0x52,0);
      }
    }
  }
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x53);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x4a);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x47,0);
        ShowPage("#PAGE7");
        AddResource(0,5,3000);
        AddResource(0,2,5000);
      }
    }
  }
  uVar1 = Trigg(0x52);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x52,0);
      SetTrigg(0x56,0);
    }
  }
  uVar1 = Trigg(0x51);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x50);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x51);
      SetTrigg(0x51,0);
      SetTrigg(0x50,0);
      SelectUnits1(5,&DAT_10030490,0);
      SelSendTo(5,&DAT_10030440,0x87,0);
      SetTrigg(0x4f,0);
    }
  }
  uVar1 = Trigg(0x4f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x50);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030440,&DAT_10030490);
      if (0 < iVar2) {
        SetTrigg(0x4f,0);
        RunTimer(9,300);
        SetTrigg(0x46,0);
        SetTrigg(0x4e,0);
      }
    }
  }
  uVar1 = Trigg(0x46);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x4f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x4a);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x46,0);
        ShowPage("#PAGE9");
        AddResource(0,1,1000);
        AddResource(0,4,1000);
        AddResource(0,5,1000);
      }
    }
  }
  uVar1 = Trigg(0x4e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x4e,0);
      SelectUnits1(5,&DAT_10030490,0);
      SelSendTo(5,&DAT_10030450,0x87,0);
      SetTrigg(0x4d,0);
    }
  }
  uVar1 = Trigg(0x4d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x4e);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount1(&DAT_10030450,&DAT_10030490);
      if (0 < iVar2) {
        SetTrigg(0x4d,0);
        RunTimer(10,300);
        SetTrigg(0x4c,0);
      }
    }
  }
  uVar1 = Trigg(0x4c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x4c,0);
      SetTrigg(0x50,0);
    }
  }
  uVar1 = Trigg(0x4b);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030458,1);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030458,0);
      if (0 < iVar2) {
        SetTrigg(0x4b,0);
        ShowPage("#PAGE3");
        SetTrigg(0x4a,0);
      }
    }
  }
  uVar1 = Trigg(0x4a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x4b);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030458,0);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_10030458,1);
        if (0 < iVar2) {
          SetTrigg(0x4a,0);
          ShowPage("#PAGE4");
          SetTrigg(0x4b,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x45);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10030428,1);
    if (iVar2 == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10030428,0);
      if (0 < iVar2) {
        SetTrigg(0x45,0);
        ShowPage("#PAGE11");
        ShowPage("#PAGE15");
        SelectUnits1(5,&DAT_100303e0,0);
        SelChangeNation(5,0);
        SetLightSpot(&DAT_10030460,1,4);
        DisableMission(0x45);
        EnableMission(0x46);
        EnableMission(0x47);
      }
    }
  }
  uVar1 = Trigg(0x45);
  if ((uVar1 & 0xff) == 0) {
    AttackEnemyInZone(&DAT_10030488,&DAT_10030458,0);
    AttackEnemyInZone(&DAT_100303f0,&DAT_10030458,0);
    AttackEnemyInZone(&DAT_10030420,&DAT_10030458,0);
    AttackEnemyInZone(&DAT_10030418,&DAT_10030458,0);
    AttackEnemyInZone(&DAT_10030400,&DAT_10030458,0);
    AttackEnemyInZone(&DAT_10030408,&DAT_10030458,0);
    AttackEnemyInZone(&DAT_100304a8,&DAT_10030458,0);
    AttackEnemyInZone(&DAT_100303f8,&DAT_10030458,0);
  }
  uVar1 = Trigg(0x44);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10030460,&DAT_100303e0);
    if (0 < iVar2) {
      SetTrigg(0x44,0);
      ShowPage("#PAGE12");
      EnableUnit(0,&DAT_10030478,1);
      EnableUnit(0,&DAT_10030480,1);
      DisableMission(0x47);
      DisableMission(0x44);
      EnableMission(0x48);
    }
  }
  uVar1 = Trigg(0x43);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_100303e0);
    if (iVar2 == 0) {
      SetTrigg(0x43,0);
      ShowPage("#PAGE13");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x41);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x41,0);
      ShowPage("#PAGE14");
      SetLightSpot(&DAT_10030458,3,2);
    }
  }
  uStack_8 = 0x10002fab;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

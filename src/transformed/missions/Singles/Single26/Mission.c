#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002d200[] = "Ggal";
char DAT_1002d210[] = "Glin";
char DAT_1002d28c[] = "Gkep";
long long DAT_100323e0 = 0;
long long DAT_100323e8 = 0;
long long DAT_100323f0 = 0;
long long DAT_100323f8 = 0;
long long DAT_10032408 = 0;
long long DAT_10032410 = 0;
long long DAT_10032418 = 0;
long long DAT_10032420 = 0;
long long DAT_10032428 = 0;
long long DAT_10032430 = 0;
long long DAT_10032438 = 0;
long long DAT_10032440 = 0;
long long DAT_10032448 = 0;
long long DAT_10032450 = 0;
long long DAT_10032458 = 0;
long long DAT_10032460 = 0;
long long DAT_10032468 = 0;
long long DAT_10032470 = 0;
long long DAT_10032478 = 0;
long long DAT_10032480 = 0;
long long DAT_10032488 = 0;
long long DAT_10032490 = 0;
long long DAT_10032498 = 0;
long long DAT_100324a0 = 0;
long long DAT_100324a8 = 0;
long long DAT_100324b0 = 0;
long long DAT_100324b8 = 0;
long long DAT_100324c0 = 0;
long long DAT_100324c8 = 0;
long long DAT_100324d0 = 0;
long long DAT_100324d8 = 0;
long long DAT_100324e0 = 0;
long long DAT_100324e8 = 0;
long long DAT_100324f0 = 0;
long long DAT_100324f8 = 0;
long long DAT_10032500 = 0;
long long DAT_10032508 = 0;
long long DAT_10032510 = 0;
long long DAT_10032518 = 0;
long long DAT_10032520 = 0;
long long DAT_10032528 = 0;
long long DAT_10032540 = 0;
long long DAT_10032550 = 0;
long long DAT_10032558 = 0;
long long DAT_10032560 = 0;
long long DAT_10032568 = 0;
long long DAT_10032570 = 0;
long long DAT_10032578 = 0;
long long DAT_10032580 = 0;
long long DAT_10032588 = 0;
long long DAT_10032598 = 0;
long long DAT_100325a0 = 0;
long long DAT_100325a8 = 0;
long long DAT_100325b0 = 0;
long long DAT_100325b8 = 0;
long long DAT_100325c0 = 0;
long long DAT_100325c8 = 0;
long long DAT_100325d0 = 0;
long long DAT_100325d8 = 0;
long long DAT_100325e0 = 0;
long long DAT_100325e8 = 0;
long long DAT_100325f0 = 0;
long long DAT_100325f8 = 0;
long long DAT_10032600 = 0;
long long DAT_10032608 = 0;
long long DAT_10032610 = 0;
long long DAT_10032618 = 0;
long long DAT_10032620 = 0;
long long DAT_10032628 = 0;
long long DAT_10032630 = 0;
long long DAT_10032638 = 0;
long long DAT_10032640 = 0;
long long DAT_10032648 = 0;
long long DAT_10032650 = 0;
long long DAT_10032658 = 0;
long long DAT_10032668 = 0;
long long DAT_10032670 = 0;

/* Stubs for missing internal functions */
int FUN_100050c0() { return 0; }
int FUN_10005d60() { return 0; }


/* Forward declarations */
void FUN_10005070(DWORD param_1);


void __cdecl FUN_10005070(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10005d60();
  pDVar1[5] = param_1;
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int uStack_8;
RegisterUnits(&DAT_10032468,"Ghetman");
  RegisterUnits(&DAT_100324a8,"Gband1");
  RegisterUnits(&DAT_100324a0,"Gband2");
  RegisterUnits(&DAT_100324e0,"Gholop1");
  RegisterUnits(&DAT_100324d8,"Gholop2");
  RegisterUnits(&DAT_100324d0,"Gholop3");
  RegisterUnits(&DAT_100324c8,"Gholop4");
  RegisterUnits(&DAT_100324c0,"Gholop5");
  RegisterUnits(&DAT_100324e8,"Gholop6");
  RegisterUnits(&DAT_100325b8,"Gholopdan1");
  RegisterUnits(&DAT_10032498,"Gholopav1");
  RegisterUnits(&DAT_100325c0,"Gholopdan2");
  RegisterUnits(&DAT_10032490,"Gholopav2");
  RegisterUnits(&DAT_10032620,DAT_1002d28c);
  RegisterUnits(&DAT_10032540,"Gpresent");
  RegisterUnits(&DAT_10032560,"Gbos1");
  RegisterUnits(&DAT_10032568,"Gbos2");
  RegisterUnits(&DAT_10032570,"Gbos3");
  RegisterUnits(&DAT_10032578,"Gbos4");
  RegisterUnits(&DAT_10032580,"Gbos5");
  RegisterUnits(&DAT_10032588,"Gbos6");
  RegisterUnits(&DAT_10032668,"Gport1");
  RegisterUnits(&DAT_100323e0,"Gport2");
  RegisterUnits(&DAT_10032480,"Gobj1");
  RegisterUnits(&DAT_10032630,"Ggates1");
  RegisterUnits(&DAT_10032628,"Ggates2");
  RegisterUnits(&DAT_100324b0,"Goboz");
  RegisterUnits(&DAT_10032638,DAT_1002d210);
  RegisterUnits(&DAT_10032618,"Gyaht");
  RegisterUnits(&DAT_10032610,DAT_1002d200);
  RegisterUnits(&DAT_10032460,"Gparom");
  RegisterZone(&DAT_10032598,"Zband1");
  RegisterZone(&DAT_100324f8,"Zband");
  RegisterZone(&DAT_10032640,"Zband1a");
  RegisterZone(&DAT_10032648,"Zband1b");
  RegisterZone(&DAT_100325a0,"Zband2");
  RegisterZone(&DAT_10032650,"Zband2a");
  RegisterZone(&DAT_10032658,"Zband2b");
  RegisterZone(&DAT_10032550,"Ztalk1");
  RegisterZone(&DAT_10032558,"Ztalk2");
  RegisterZone(&DAT_100325d8,"Zgen1");
  RegisterZone(&DAT_100325e0,"Zgen2");
  RegisterZone(&DAT_100325e8,"Zgen3");
  RegisterZone(&DAT_100325f0,"Zgen4");
  RegisterZone(&DAT_100325b0,"Zostrov1");
  RegisterZone(&DAT_100325a8,"Zostrov2");
  RegisterZone(&DAT_100325c8,"Zattack1");
  RegisterZone(&DAT_100325d0,"Zattack2");
  RegisterZone(&DAT_100324b8,"Zoboz1");
  RegisterZone(&DAT_10032450,"Zgates1");
  RegisterZone(&DAT_10032458,"Zgates2");
  RegisterUnitType(&DAT_10032470,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_10032508,"Strelec_Algir(AL)");
  RegisterUnitType(&DAT_10032670,"Yahta(en)");
  RegisterUnitType(&DAT_10032478,"GALERA(en)");
  RegisterUnitType(&DAT_100323f8,"Fregat(SA)");
  RegisterVar(&DAT_10032438,8);
  RegisterVar(&DAT_10032430,8);
  RegisterVar(&DAT_10032448,8);
  RegisterVar(&DAT_10032440,8);
  RegisterVar(&DAT_10032410,8);
  RegisterVar(&DAT_10032408,8);
  RegisterVar(&DAT_10032420,8);
  RegisterVar(&DAT_10032418,8);
  RegisterVar(&DAT_10032428,8);
  RegisterVar(&DAT_100324f0,8);
  RegisterFormation(&DAT_10032608,"#LINE5");
  RegisterFormation(&DAT_10032510,"#LINE20PUS");
  RegisterFormation(&DAT_10032520,"#LINE30PUS");
  RegisterFormation(&DAT_10032528,"#LINE40PUS");
  RegisterFormation(&DAT_10032518,"#LINE15PUS");
  RegisterFormation(&DAT_10032500,"#LINE10PUS");
  RegisterFormation(&DAT_10032600,"#LINE3");
  RegisterFormation(&DAT_100323e8,"#SHIPS3");
  RegisterFormation(&DAT_100323f0,"#SHIPS5");
  RegisterFormation(&DAT_10032488,"#ALONE");
  RegisterDynGroup(&DAT_10032438);
  RegisterDynGroup(&DAT_10032430);
  RegisterDynGroup(&DAT_10032448);
  RegisterDynGroup(&DAT_10032440);
  RegisterDynGroup(&DAT_10032410);
  RegisterDynGroup(&DAT_10032408);
  RegisterDynGroup(&DAT_10032420);
  RegisterDynGroup(&DAT_10032418);
  RegisterDynGroup(&DAT_10032428);
  RegisterDynGroup(&DAT_100324f0);
  RegisterDynGroup(&DAT_100325f8);
  SetPlayerName(1,"ALLIES");
  SetPlayerName(2,"AUSTRIANS");
  SetPlayerName(3,"DUTCH");
  SetPlayerName(4,"ENGLAND");
  SetPlayerName(5,"BANDITS");
  SetPlayerName(6,"SPAIN");
  ChangeFriends(1,0x43);
  ChangeFriends(2,0x3c);
  ChangeFriends(3,0x3c);
  ChangeFriends(4,0x3c);
  ChangeFriends(5,0x3c);
  ChangeFriends(6,0x43);
  uStack_8 = 0x10001a9e;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  DWORD DVar2;
  int uVar3;
  int iVar4;
  int iVar5;
  int *puVar6;
  int local_10;
  int local_c;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    EnableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4d);
    DisableMission(0x4e);
    DisableMission(0x4f);
    TakeFood(&DAT_100324e0);
    TakeFood(&DAT_100324c0);
    TakeStone(&DAT_100324d8);
    TakeStone(&DAT_100324c8);
    TakeWood(&DAT_100324e8);
    TakeWood(&DAT_100324d0);
    SelectUnits(&DAT_10032620,0);
    SelectUnits(&DAT_10032540,1);
    SetStandGround(1,1);
    local_8 = GetDiff(0);
    switch(local_8) {
    case 0:
      SetResource(0,3,15000);
      SetResource(0,0,15000);
      SetResource(0,2,15000);
      SetResource(0,1,15000);
      SetResource(0,5,25000);
      SetResource(0,4,25000);
      SelectUnits(&DAT_10032560,0);
      SelectUnits(&DAT_10032568,1);
      SelectUnits(&DAT_10032570,1);
      SelectUnits(&DAT_10032578,1);
      SelectUnits(&DAT_10032580,1);
      SelectUnits(&DAT_10032588,1);
      SelErase(5);
      SelectUnits(&DAT_10032638,0);
      SelectUnits(&DAT_10032610,1);
      SelErase(4);
      break;
    case 1:
      SetResource(0,3,12000);
      SetResource(0,0,12000);
      SetResource(0,2,12000);
      SetResource(0,1,12000);
      SetResource(0,5,20000);
      SetResource(0,4,20000);
      SelectUnits(&DAT_10032560,0);
      SelectUnits(&DAT_10032570,1);
      SelectUnits(&DAT_10032580,1);
      SelectUnits(&DAT_10032578,1);
      SelErase(5);
      SelectUnits(&DAT_10032638,0);
      SelErase(4);
      break;
    case 2:
      SetResource(0,3,8000);
      SetResource(0,0,8000);
      SetResource(0,2,8000);
      SetResource(0,1,8000);
      SetResource(0,5,14000);
      SetResource(0,4,14000);
      SelectUnits(&DAT_10032560,0);
      SelectUnits(&DAT_10032588,1);
      SelErase(5);
      SelectUnits(&DAT_10032618,0);
      SelErase(4);
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,12000);
      SetResource(0,4,12000);
    }
    RunTimer(6,300);
    RunTimer(7,15000);
    RunTimer(1,4000);
    InitialUpgrade("Gobj1","AKA04SA");
    InitialUpgrade("Gobj1","KUZ01SA");
    InitialUpgrade("Ghetman","AKA16SA");
    InitialUpgrade("Ghetman","AKA17SA");
    InitialUpgrade("Ghetman","AKA20SA");
    InitialUpgrade("Ghetman","AKA27SA");
    InitialUpgrade("Ghetman","AKA28SA");
    InitialUpgrade("Gport1","AKA04EN");
    InitialUpgrade("Gport1","KUZ01EN");
    DVar2 = FUN_100050c0((int *)0x0);
    FUN_10005070(DVar2);
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      SelectUnits(&DAT_100325c0,0);
      SelErase(3);
      SelectUnits(&DAT_10032498,0);
      SelErase(2);
    }
    else {
      SelectUnits(&DAT_100325b8,0);
      SelErase(3);
      SelectUnits(&DAT_10032490,0);
      SelErase(2);
    }
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    uVar3 = GetDiff(0);
    StartAI(2,"AUSTRIA.0",2,1,2,uVar3);
    SetResource(3,3,5000);
    SetResource(3,0,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,5,5000);
    SetResource(3,4,5000);
    uVar3 = GetDiff(0);
    StartAI(3,"DENMARK.0",2,1,2,uVar3);
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5e);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0AA");
      EnableMission(0x44);
      SetLightSpot(&DAT_100325b0,1,1);
      SetLightSpot(&DAT_100325a8,1,2);
      SetLightSpot(&DAT_10032550,1,3);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_100324f8,0);
    if (iVar5 < 1) {
      uVar1 = TimerDoneFirst(7);
      if ((uVar1 & 0xff) == 0) goto LAB_100029b3;
    }
    SetTrigg(3,0);
    ShowPage("#PAGE2");
    EnableMission(0x46);
    EnableMission(0x4b);
  }
LAB_100029b3:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar5 = GetUnitsAmount1(&DAT_10032598,&DAT_100324a8);
    iVar4 = GetTotalAmount0(&DAT_100324a8);
    if (iVar5 < iVar4) {
      SetTrigg(1,1);
      SelectUnits(&DAT_100324a8,0);
      SelSendTo(5,&DAT_10032648,0x41,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount1(&DAT_10032598,&DAT_100324a8);
    iVar4 = GetTotalAmount0(&DAT_100324a8);
    if (iVar5 == iVar4) {
      SetTrigg(1,0);
      SelectUnits(&DAT_100324a8,0);
      Patrol(5,&DAT_10032640,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_100324a8);
    if (iVar5 == 0) {
      iVar5 = GetUnitsAmount0(&DAT_10032598,0);
      if (0 < iVar5) {
        SetTrigg(2,0);
        iVar5 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar5 * -1000 + 6000);
        iVar5 = GetDiff(0);
        AddResource(0,1,iVar5 * -1000 + 6000);
        DisableMission(0x46);
        EnableMission(0x47);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    iVar5 = GetUnitsAmount1(&DAT_100325a0,&DAT_100324a0);
    iVar4 = GetTotalAmount0(&DAT_100324a0);
    if (iVar5 < iVar4) {
      SetTrigg(0x14,1);
      SelectUnits(&DAT_100324a0,0);
      SelSendTo(5,&DAT_10032658,0x1e,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount1(&DAT_100325a0,&DAT_100324a0);
    iVar4 = GetTotalAmount0(&DAT_100324a0);
    if (iVar5 == iVar4) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_100324a0,0);
      Patrol(5,&DAT_10032650,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_100324a0);
    if (iVar5 == 0) {
      iVar5 = GetUnitsAmount0(&DAT_100325a0,0);
      if (0 < iVar5) {
        SetTrigg(0x15,0);
        iVar5 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar5 * -1000 + 4000);
        iVar5 = GetDiff(0);
        AddResource(0,1,iVar5 * -1000 + 4000);
        DisableMission(0x4b);
        EnableMission(0x4c);
      }
    }
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0A");
      EnableMission(0x4d);
      EnableMission(0x4e);
      SetLightSpot(&DAT_10032558,1,4);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032468);
    if (iVar5 == 0) {
      SetTrigg(0x62,0);
      iVar5 = GetResource(0,3);
      if (iVar5 < 1) {
        ShowPage("#PAGE1A");
      }
      else {
        ShowPage("#PAGE1");
      }
      LooseGame();
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      ShowPage("#PAGE11");
      LooseGame();
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xf);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0xc);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(0x61);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0x61,0);
            ShowPage("#PAGE9");
            ShowVictory();
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10032458,0);
    if (0 < iVar5) {
      SetTrigg(0x60,0);
      SelectUnits(&DAT_10032628,0);
      SelOpenGates(1);
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) == 0) {
    iVar5 = GetUnitsAmount0(&DAT_10032458,0);
    if (iVar5 == 0) {
      SetTrigg(0x60,1);
      SelectUnits(&DAT_10032628,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10032450,0);
    if (0 < iVar5) {
      SetTrigg(0x5a,0);
      SelectUnits(&DAT_10032630,0);
      SelOpenGates(1);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) == 0) {
    iVar5 = GetUnitsAmount0(&DAT_10032450,0);
    if (iVar5 == 0) {
      SetTrigg(0x5a,1);
      SelectUnits(&DAT_10032630,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) != 0) {
      iVar5 = GetUnitsAmount1(&DAT_10032550,&DAT_10032468);
      if (0 < iVar5) {
        SetTrigg(4,0);
        ShowPage("#PAGE3");
        ShowPage("#PAGE4");
        CreateObject0(&DAT_10032410,&DAT_100323e8,&DAT_100323f8,1,&DAT_100325d8,0x41);
        CreateObject0(&DAT_10032408,&DAT_100323e8,&DAT_100323f8,1,&DAT_100325e0,0x41);
        SelectUnits(&DAT_10032408,0);
        SelectUnits(&DAT_10032410,1);
        SelChangeNation(1,0);
        SelectUnits(&DAT_10032540,0);
        SelectUnits(&DAT_10032460,1);
        SelChangeNation(1,0);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(8);
    if ((uVar1 & 0xff) != 0) {
      iVar5 = GetTotalAmount0(&DAT_10032410);
      if (iVar5 < 3) {
        CreateObject0(&DAT_10032428,&DAT_10032488,&DAT_100323f8,1,&DAT_100325d8,0x41);
        SelectUnits(&DAT_10032428,0);
        SelSendAndKill(1,&DAT_100325c8,0,0);
        SelectUnits(&DAT_10032428,0);
        SelChangeNation(1,0);
        RemoveGroup(&DAT_10032428,&DAT_10032410);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      iVar5 = GetTotalAmount0(&DAT_10032408);
      if (iVar5 < 3) {
        CreateObject0(&DAT_100324f0,&DAT_10032488,&DAT_100323f8,1,&DAT_100325e0,0x41);
        SelectUnits(&DAT_100324f0,0);
        SelSendAndKill(1,&DAT_100325d0,0,0);
        SelectUnits(&DAT_100324f0,0);
        SelChangeNation(1,0);
        RemoveGroup(&DAT_100324f0,&DAT_10032408);
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(5,0);
      RunTimer(2,13000);
      local_c = GetDiff(0);
      switch(local_c) {
      case 0:
        CreateObject0(&DAT_10032438,&DAT_10032488,&DAT_10032670,4,&DAT_100325e8,100);
        CreateObject0(&DAT_10032430,&DAT_10032488,&DAT_10032478,4,&DAT_100325e8,100);
        break;
      case 1:
        CreateObject0(&DAT_10032438,&DAT_100323e8,&DAT_10032670,4,&DAT_100325e8,100);
        CreateObject0(&DAT_10032430,&DAT_10032488,&DAT_10032478,4,&DAT_100325e8,100);
        break;
      case 2:
        CreateObject0(&DAT_10032438,&DAT_100323e8,&DAT_10032670,4,&DAT_100325e8,100);
        CreateObject0(&DAT_10032430,&DAT_100323e8,&DAT_10032478,4,&DAT_100325e8,100);
        break;
      case 3:
        CreateObject0(&DAT_10032438,&DAT_100323f0,&DAT_10032670,4,&DAT_100325e8,100);
        CreateObject0(&DAT_10032430,&DAT_100323e8,&DAT_10032478,4,&DAT_100325e8,100);
      }
      SelectUnits(&DAT_10032430,0);
      SelectUnits(&DAT_10032438,1);
      SelSendAndKill(4,&DAT_100325c8,100,0);
      ClearSelection(4);
    }
  }
  uVar1 = TimerIsEmpty(3);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032438);
    if (iVar5 == 0) {
      iVar5 = GetTotalAmount0(&DAT_10032430);
      if (iVar5 != 0) goto LAB_10003955;
    }
    else {
LAB_10003955:
      uVar1 = TimerDoneFirst(2);
      if ((uVar1 & 0xff) == 0) goto LAB_1000398b;
    }
    RunTimer(3,600);
  }
LAB_1000398b:
  uVar1 = TimerDone(3);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(3);
    FreeTimer(2);
    SetTrigg(5,1);
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(7,0);
      RunTimer(4,10000);
      local_10 = GetDiff(0);
      switch(local_10) {
      case 0:
        CreateObject0(&DAT_10032448,&DAT_10032488,&DAT_10032670,4,&DAT_100325f0,0x82);
        CreateObject0(&DAT_10032440,&DAT_10032488,&DAT_10032478,4,&DAT_100325f0,0x82);
        break;
      case 1:
        CreateObject0(&DAT_10032448,&DAT_100323e8,&DAT_10032670,4,&DAT_100325f0,0x82);
        CreateObject0(&DAT_10032440,&DAT_10032488,&DAT_10032478,4,&DAT_100325f0,0x82);
        break;
      case 2:
        CreateObject0(&DAT_10032448,&DAT_100323e8,&DAT_10032670,4,&DAT_100325f0,0x82);
        CreateObject0(&DAT_10032440,&DAT_100323e8,&DAT_10032478,4,&DAT_100325f0,0x82);
        break;
      case 3:
        CreateObject0(&DAT_10032448,&DAT_100323f0,&DAT_10032670,4,&DAT_100325f0,0x82);
        CreateObject0(&DAT_10032440,&DAT_100323e8,&DAT_10032478,4,&DAT_100325f0,0x82);
      }
      SelectUnits(&DAT_10032448,0);
      SelectUnits(&DAT_10032440,1);
      SelSendAndKill(4,&DAT_100325d0,0x82,0);
      ClearSelection(4);
    }
  }
  uVar1 = TimerIsEmpty(5);
  if ((uVar1 & 0xff) == 0) goto LAB_10003ce5;
  iVar5 = GetTotalAmount0(&DAT_10032448);
  if (iVar5 == 0) {
    iVar5 = GetTotalAmount0(&DAT_10032440);
    if (iVar5 != 0) goto LAB_10003caf;
  }
  else {
LAB_10003caf:
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) == 0) goto LAB_10003ce5;
  }
  RunTimer(5,600);
LAB_10003ce5:
  uVar1 = TimerDone(5);
  if ((uVar1 & 0xff) != 0) {
    FreeTimer(5);
    FreeTimer(4);
    SetTrigg(7,1);
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032668);
    if (iVar5 == 0) {
      SetTrigg(8,0);
      ShowPage("#PAGE7A");
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_100323e0);
    if (iVar5 == 0) {
      SetTrigg(0xb,0);
      ShowPage("#PAGE7B");
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xc);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xc,0);
        ShowPage("#PAGE7");
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) != 0) {
      iVar5 = GetResource(0,1);
      if (0x13ec < iVar5) {
        iVar5 = GetResource(0,0);
        if (5000 < iVar5) {
          iVar5 = GetResource(0,2);
          if (5000 < iVar5) {
            iVar5 = GetResource(0,5);
            if (0x13ec < iVar5) {
              iVar5 = GetResource(0,4);
              if (0x13ec < iVar5) {
                iVar5 = GetResource(0,3);
                if (0x13ec < iVar5) {
                  SetTrigg(0x10,0);
                  ShowPage("#PAGE10");
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x11);
    if ((uVar1 & 0xff) != 0) {
      iVar5 = GetResource(0,1);
      if (0x13ec < iVar5) {
        iVar5 = GetResource(0,0);
        if (5000 < iVar5) {
          iVar5 = GetResource(0,2);
          if (5000 < iVar5) {
            iVar5 = GetResource(0,5);
            if (0x13ec < iVar5) {
              iVar5 = GetResource(0,4);
              if (0x13ec < iVar5) {
                iVar5 = GetResource(0,3);
                if (0x13ec < iVar5) {
                  iVar5 = GetUnitsAmount1(&DAT_100324b8,&DAT_100324b0);
                  if (iVar5 == 5) {
                    SetTrigg(0x11,0);
                    ShowPage("#PAGE10A");
                    AddResource(0,1,0xffffec78);
                    AddResource(0,0,0xffffec78);
                    AddResource(0,2,0xffffec78);
                    AddResource(0,5,0xffffec78);
                    AddResource(0,4,0xffffec78);
                    AddResource(0,3,0xffffec78);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsByNation(&DAT_100324b0,0);
    if (iVar5 < 5) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE12");
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x12);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x13);
      if ((uVar1 & 0xff) != 0) {
        iVar5 = GetUnitsAmount1(&DAT_10032558,&DAT_100324b0);
        if (iVar5 == 5) {
          SetTrigg(0x13,0);
          SetTrigg(0x12,0);
          ShowPage("#PAGE13");
          DisableMission(0x4e);
          EnableMission(0x4f);
          SelectUnits(&DAT_100324b0,0);
          SelChangeNation(0,6);
          ClearSelection(6);
          SetResource(6,3,10000);
          SetResource(6,0,10000);
          SetResource(6,2,10000);
          SetResource(6,1,10000);
          SetResource(6,5,10000);
          SetResource(6,4,10000);
          uVar3 = GetDiff(0);
          StartAI(6,"SPAIN.0",2,1,2,uVar3);
        }
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xf,0);
      ShowPage("#PAGE8A");
      DisableMission(0x42);
      EnableMission(0x43);
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

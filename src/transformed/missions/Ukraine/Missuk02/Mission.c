#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_100343e0 = 0;
long long DAT_100343f0 = 0;
long long DAT_100343f8 = 0;
long long DAT_10034400 = 0;
long long DAT_10034408 = 0;
long long DAT_10034410 = 0;
long long DAT_10034418 = 0;
long long DAT_10034420 = 0;
long long DAT_10034428 = 0;
long long DAT_10034430 = 0;
long long DAT_10034438 = 0;
long long DAT_10034440 = 0;
long long DAT_10034448 = 0;
long long DAT_10034450 = 0;
long long DAT_10034458 = 0;
long long DAT_10034460 = 0;
long long DAT_10034468 = 0;
long long DAT_10034470 = 0;
long long DAT_10034478 = 0;
long long DAT_10034480 = 0;
long long DAT_10034488 = 0;
long long DAT_10034490 = 0;
long long DAT_10034498 = 0;
long long DAT_100344a0 = 0;
long long DAT_100344a8 = 0;
long long DAT_100344b0 = 0;
long long DAT_100344b8 = 0;
long long DAT_100344c0 = 0;
long long DAT_100344c8 = 0;
long long DAT_100344d0 = 0;
long long DAT_100344d8 = 0;
long long DAT_100344e0 = 0;
long long DAT_100344e8 = 0;
long long DAT_100344f0 = 0;
long long DAT_100344f8 = 0;
long long DAT_10034500 = 0;
long long DAT_10034508 = 0;
long long DAT_10034510 = 0;
long long DAT_10034518 = 0;
long long DAT_10034520 = 0;
long long DAT_10034528 = 0;
long long DAT_10034530 = 0;
long long DAT_10034538 = 0;
long long DAT_10034540 = 0;
long long DAT_10034548 = 0;
long long DAT_10034550 = 0;
long long DAT_10034558 = 0;
long long DAT_10034560 = 0;
long long DAT_10034568 = 0;
long long DAT_10034570 = 0;
long long DAT_10034578 = 0;
long long DAT_10034580 = 0;
long long DAT_10034588 = 0;
long long DAT_10034590 = 0;
long long DAT_10034598 = 0;
long long DAT_100345a0 = 0;
long long DAT_100345a8 = 0;
long long DAT_100345b0 = 0;
long long DAT_100345b8 = 0;
long long DAT_100345c0 = 0;
long long DAT_100345c8 = 0;
long long DAT_100345d0 = 0;
long long DAT_100345d8 = 0;
long long DAT_100345e0 = 0;
long long DAT_100345e8 = 0;
long long DAT_100345f0 = 0;
long long DAT_100345f8 = 0;
long long DAT_10034600 = 0;
long long DAT_10034608 = 0;
long long DAT_10034610 = 0;
long long DAT_10034618 = 0;
long long DAT_10034620 = 0;
long long DAT_10034628 = 0;
long long DAT_10034630 = 0;
long long DAT_10034638 = 0;
long long DAT_10034640 = 0;
long long DAT_10034648 = 0;
long long DAT_10034650 = 0;
long long DAT_10034658 = 0;
long long DAT_10034660 = 0;
long long DAT_10034668 = 0;
long long DAT_10034670 = 0;
long long DAT_10034678 = 0;
long long DAT_10034680 = 0;
long long DAT_10034688 = 0;
long long DAT_10034690 = 0;
long long DAT_10034698 = 0;
long long DAT_100346a0 = 0;
long long DAT_100346a8 = 0;
long long DAT_100346b0 = 0;
long long DAT_100346b8 = 0;
long long DAT_100346c0 = 0;
long long DAT_100346c8 = 0;
long long DAT_100346d0 = 0;
long long DAT_100346d8 = 0;
long long DAT_100346e0 = 0;
long long DAT_100346e8 = 0;
long long DAT_100346f0 = 0;
long long DAT_100346f8 = 0;
long long DAT_10034700 = 0;
long long DAT_10034708 = 0;
long long DAT_10034710 = 0;
long long DAT_10034718 = 0;
long long DAT_10034720 = 0;
long long DAT_10034728 = 0;
long long DAT_10034730 = 0;
long long DAT_10034738 = 0;
long long DAT_10034740 = 0;
long long DAT_10034748 = 0;
long long DAT_10034750 = 0;
long long DAT_10034758 = 0;
long long DAT_10034760 = 0;
long long DAT_10034768 = 0;
long long DAT_10034770 = 0;
long long DAT_10034778 = 0;
long long DAT_10034780 = 0;
long long DAT_10034788 = 0;
long long DAT_10034790 = 0;
long long DAT_10034798 = 0;
long long DAT_100347a0 = 0;
long long DAT_100347a8 = 0;
long long DAT_100347b0 = 0;
long long DAT_100347b8 = 0;
long long DAT_100347c0 = 0;
long long DAT_100347c8 = 0;
long long DAT_100347d0 = 0;
long long DAT_100347d8 = 0;
long long DAT_100347e0 = 0;
long long DAT_100347e8 = 0;
long long DAT_100347f0 = 0;
long long DAT_100347f8 = 0;
long long DAT_10034800 = 0;
long long DAT_10034808 = 0;
long long DAT_10034810 = 0;
long long DAT_10034818 = 0;
long long DAT_10034820 = 0;
long long DAT_10034828 = 0;
long long DAT_10034830 = 0;
long long DAT_10034838 = 0;
long long DAT_10034840 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_10034418,"Group1");
  RegisterUnits(&DAT_10034420,"Group3");
  RegisterUnits(&DAT_10034430,"Group4");
  RegisterUnits(&DAT_10034428,"Group5");
  RegisterUnits(&DAT_10034440,"Group6");
  RegisterUnits(&DAT_10034438,"Group7");
  RegisterUnits(&DAT_10034450,"Group8");
  RegisterUnits(&DAT_10034448,"Group9");
  RegisterUnits(&DAT_10034640,"Group10");
  RegisterUnits(&DAT_100346a8,"Group11");
  RegisterUnits(&DAT_100346b0,"Group12");
  RegisterUnits(&DAT_10034690,"Group13");
  RegisterUnits(&DAT_100346a0,"Group14");
  RegisterUnits(&DAT_10034678,"Group15");
  RegisterUnits(&DAT_10034688,"Group16");
  RegisterUnits(&DAT_10034650,"Group17");
  RegisterUnits(&DAT_10034668,"Group18");
  RegisterUnits(&DAT_10034730,"Group19");
  RegisterUnits(&DAT_10034698,"Group20");
  RegisterUnits(&DAT_10034670,"Group21");
  RegisterUnits(&DAT_10034680,"Group22");
  RegisterUnits(&DAT_10034648,"Group23");
  RegisterUnits(&DAT_10034660,"Group24");
  RegisterUnits(&DAT_10034728,"Group25");
  RegisterUnits(&DAT_10034740,"Group26");
  RegisterUnits(&DAT_10034708,"Group27");
  RegisterUnits(&DAT_10034718,"Group28");
  RegisterUnits(&DAT_100346e8,"Group29");
  RegisterUnits(&DAT_10034658,"Group30");
  RegisterUnits(&DAT_10034720,"Group31");
  RegisterUnits(&DAT_10034738,"Group32");
  RegisterUnits(&DAT_10034700,"Group33");
  RegisterUnits(&DAT_100346f8,"Group36");
  RegisterUnits(&DAT_100346c0,"Group37");
  RegisterUnits(&DAT_100346d8,"Group38");
  RegisterUnits(&DAT_100347b8,"Group39");
  RegisterUnits(&DAT_10034710,"Group40");
  RegisterUnits(&DAT_100346e0,"Group41");
  RegisterUnits(&DAT_100346f0,"Group42");
  RegisterUnits(&DAT_100346b8,"Group43");
  RegisterUnits(&DAT_100346d0,"Group44");
  RegisterUnits(&DAT_100347b0,"Group45");
  RegisterUnits(&DAT_100347c8,"Group46");
  RegisterUnits(&DAT_10034788,"Group47");
  RegisterUnits(&DAT_100347a0,"Group48");
  RegisterUnits(&DAT_10034770,"Group49");
  RegisterUnits(&DAT_100346c8,"Group50");
  RegisterUnits(&DAT_100347a8,"Group51");
  RegisterUnits(&DAT_100347c0,"Group52");
  RegisterUnits(&DAT_10034780,"Group53");
  RegisterUnits(&DAT_10034798,"Group54");
  RegisterUnits(&DAT_10034768,"Group55");
  RegisterUnits(&DAT_10034790,"Group60");
  RegisterUnits(&DAT_10034760,"Group61");
  RegisterUnits(&DAT_10034778,"Group62");
  RegisterUnits(&DAT_10034748,"Group63");
  RegisterUnits(&DAT_10034758,"Group64");
  RegisterUnits(&DAT_10034830,"Group65");
  RegisterUnits(&DAT_10034838,"Group66");
  RegisterUnits(&DAT_10034808,"Group67");
  RegisterUnits(&DAT_10034820,"Group68");
  RegisterUnits(&DAT_100347f0,"Group69");
  RegisterUnits(&DAT_10034750,"Group70");
  RegisterUnits(&DAT_10034828,"Group71");
  RegisterUnits(&DAT_10034800,"Group73");
  RegisterUnits(&DAT_10034818,"Group74");
  RegisterUnits(&DAT_100347e8,"Group75");
  RegisterUnits(&DAT_10034810,"Group80");
  RegisterUnits(&DAT_100347e0,"Group81");
  RegisterUnits(&DAT_100347f8,"Group82");
  RegisterUnits(&DAT_100347d0,"Group83");
  RegisterUnits(&DAT_100347d8,"Group84");
  RegisterUnits(&DAT_10034840,"Group85");
  RegisterZone(&DAT_100345b0,"Zone1");
  RegisterZone(&DAT_100345b8,"Zone2");
  RegisterZone(&DAT_100345c0,"Zone3");
  RegisterZone(&DAT_100345c8,"Zone4");
  RegisterZone(&DAT_100345d0,"Zone5");
  RegisterZone(&DAT_100345d8,"Zone6");
  RegisterZone(&DAT_100345e0,"Zone7");
  RegisterZone(&DAT_100345e8,"Zone8");
  RegisterZone(&DAT_100345f0,"Zone9");
  RegisterZone(&DAT_10034460,"Zone10");
  RegisterZone(&DAT_10034458,"Zone11");
  RegisterZone(&DAT_10034470,"Zone12");
  RegisterZone(&DAT_10034468,"Zone13");
  RegisterZone(&DAT_10034490,"Zone14");
  RegisterZone(&DAT_10034480,"Zone15");
  RegisterZone(&DAT_100344b0,"Zone16");
  RegisterZone(&DAT_100344a0,"Zone17");
  RegisterZone(&DAT_100344e0,"Zone18");
  RegisterZone(&DAT_100344c8,"Zone19");
  RegisterZone(&DAT_10034488,"Zone20");
  RegisterZone(&DAT_10034478,"Zone21");
  RegisterZone(&DAT_100344a8,"Zone22");
  RegisterZone(&DAT_10034498,"Zone23");
  RegisterZone(&DAT_100344d8,"Zone24");
  RegisterZone(&DAT_100344c0,"Zone25");
  RegisterZone(&DAT_100344f8,"Zone26");
  RegisterZone(&DAT_100344f0,"Zone27");
  RegisterZone(&DAT_10034530,"Zone28");
  RegisterZone(&DAT_10034510,"Zone29");
  RegisterZone(&DAT_100344b8,"Zone31");
  RegisterZone(&DAT_100344e8,"Zone33");
  RegisterZone(&DAT_10034528,"Zone34");
  RegisterZone(&DAT_10034508,"Zone35");
  RegisterZone(&DAT_10034550,"Zone36");
  RegisterZone(&DAT_10034540,"Zone37");
  RegisterZone(&DAT_10034580,"Zone38");
  RegisterZone(&DAT_10034568,"Zone39");
  RegisterZone(&DAT_10034520,"Zone40");
  RegisterZone(&DAT_10034500,"Zone41");
  RegisterZone(&DAT_10034548,"Zone42");
  RegisterZone(&DAT_10034538,"Zone43");
  RegisterZone(&DAT_10034578,"Zone44");
  RegisterZone(&DAT_10034560,"Zone45");
  RegisterZone(&DAT_10034598,"Zone46");
  RegisterZone(&DAT_10034588,"Zone47");
  RegisterZone(&DAT_100345a8,"Zone48");
  RegisterZone(&DAT_100345a0,"Zone49");
  RegisterZone(&DAT_10034570,"Zone50");
  RegisterZone(&DAT_10034558,"Zone51");
  RegisterZone(&DAT_10034590,"Zone52");
  RegisterUnitType(&DAT_10034628,"Strelec(RU)");
  RegisterUnitType(&DAT_10034630,"Kozacki_Strelec(UA)");
  RegisterUnitType(&DAT_10034638,"Pushka(UA)");
  RegisterUnitType(&DAT_10034608,"Pik_rus(RU)");
  RegisterUnitType(&DAT_10034610,"Mortira(RU)");
  RegisterUnitType(&DAT_10034618,"Pushka(RU)");
  RegisterUnitType(&DAT_10034620,"Kozak_pikiner(UA)");
  RegisterUnitType(&DAT_100345f8,"Mortira(UA)");
  RegisterUnitType(&DAT_10034600,"Pushka_mnogostvolka(RU)");
  RegisterVar(&DAT_10034410,0xc);
  RegisterFormation(&DAT_10034518,"#LINE5PUS");
  RegisterFormation(&DAT_100344d0,"#LINE36");
  InitialUpgrade("Group1","AKA27UA");
  InitialUpgrade("Group1","AKA20UA");
  SetPlayerName(1,"Russia");
  SetPlayerName(5,"Poland");
  SetPlayerName(7,"Ukrain");
  uStack_8 = 0x10002009;
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
    ChangeFriends(0,1);
    ChangeFriends(1,2);
    ChangeFriends(6,0x43);
    ChangeFriends(0,0x21);
    ChangeFriends(5,0x21);
    SelectUnits(&DAT_10034648,0);
    SelectUnits(&DAT_10034660,1);
    SelectUnits(&DAT_10034728,1);
    SelectUnits(&DAT_10034760,1);
    SelectUnits(&DAT_10034778,1);
    SelChangeNation(1,6);
    SelectUnits(&DAT_10034438,0);
    SelectUnits(&DAT_100346a8,1);
    SelectUnits(&DAT_100346b0,1);
    SelectUnits(&DAT_10034670,1);
    SelectUnits(&DAT_10034698,1);
    SelectUnits(&DAT_10034680,1);
    SelectUnits(&DAT_10034678,1);
    SelectUnits(&DAT_10034650,1);
    SelectUnits(&DAT_100346e8,1);
    SelectUnits(&DAT_10034718,1);
    SelectUnits(&DAT_10034690,1);
    SelectUnits(&DAT_10034668,1);
    SelectUnits(&DAT_10034730,1);
    SelectUnits(&DAT_10034438,1);
    SetStandGround(1,1);
    ClearSelection(1);
    SelectUnits1(5,&DAT_10034780,0);
    SelDie(5);
    ClearSelection(0);
    SetResource(0,3,50000);
    SetResource(0,1,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,0,5000000);
    SetResource(1,2,5000000);
    SetResource(1,5,5000000);
    SetResource(1,4,5000000);
    SetResource(7,3,5000000);
    SetResource(7,1,5000000);
    SetResource(7,0,5000000);
    SetResource(7,2,5000000);
    SetResource(7,5,5000000);
    SetResource(7,4,5000000);
    SelectUnits1(1,&DAT_100346d0,0);
    SelectUnits1(1,&DAT_10034770,1);
    SetStandGround(1,1);
    RunTimer(0x10,100);
    SelectUnits1(1,&DAT_10034640,0);
    SetStandGround(1,0);
    DisableMission(0x4c);
    DisableMission(0x4d);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x49);
    DisableMission(0x4a);
    DisableMission(0x4e);
    DisableMission(0x4f);
    DisableMission(0x50);
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100345b0,&DAT_10034418);
    if (0 < iVar2) {
      SetTrigg(99,0);
      SelectUnits(&DAT_100347a8,0);
      SelSendTo(5,&DAT_100345b8,0xd3,0);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100345b8,&DAT_100347a8);
    if (0 < iVar2) {
      SetTrigg(0x62,0);
      ShowPage("#PAGE1");
      ShowPage("#PAGE2");
      SetLightSpot(&DAT_100345c0,1,1);
      SetLightSpot(&DAT_100345c8,1,2);
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x62);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x1e,0);
      SelectUnits(&DAT_100347a8,0);
      SelSendTo(5,&DAT_100344f8,0,0);
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100345e0,0);
    if (0 < iVar2) {
      SetTrigg(0x60,0);
      ShowPage("#PAGE21");
      SelectUnits(&DAT_10034648,0);
      SelectUnits(&DAT_10034660,1);
      SelChangeNation(6,0);
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100345d8,0);
    if (0 < iVar2) {
      SetTrigg(0x5f,0);
      SelectUnits(&DAT_10034728,0);
      ShowPage("#PAGE22");
      SelChangeNation(6,0);
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x5f);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0x17,0);
        ClearLightSpot(1);
        ClearLightSpot(2);
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100345e8,0);
    if (0 < iVar2) {
      SelectUnits(&DAT_10034708,0);
      SelAttackGroup(1,&DAT_10034418);
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10034418);
    if (iVar2 == 0) {
      SetTrigg(0x5e,0);
      SetTrigg(0x5f,0);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10034468,0);
    if (0 < iVar2) {
      uVar1 = Trigg(9);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(8,0);
        ShowPage("#PAGE4");
        SetLightSpot(&DAT_10034480,1,3);
        SetLightSpot(&DAT_100344b0,1,4);
      }
    }
  }
  uVar1 = Trigg(0x42);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10034468,0);
    if (0 < iVar2) {
      GetTotalAmount1(&DAT_10034638,0);
      if (iVar2 == 0) {
        SetTrigg(0x42,0);
        ShowPage("#PAGE8");
        SelectUnits(&DAT_10034798,0);
        SelCloseGates(5);
      }
    }
  }
  uVar1 = Trigg(0x58);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10034468,0);
    if (0 < iVar2) {
      GetTotalAmount1(&DAT_10034638,0);
      if (0 < iVar2) {
        SetTrigg(0x58,0);
        ShowPage("#PAGE3");
        SelectUnits(&DAT_100347c0,0);
        SetLightSpot(&DAT_100344a0,1,5);
        SelectUnits(&DAT_10034798,0);
        SelOpenGates(5);
        SelChangeNation(5,0);
      }
    }
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_10034618,0);
    if (0 < iVar2) {
      SetTrigg(0xd,0);
      SetTrigg(0xb,0);
      SelectUnitsType(&DAT_10034618,0,0);
      SelDie(0);
      RunTimer(0xc,100);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_10034610,0);
    if (0 < iVar2) {
      SetTrigg(0xc,0);
      SetTrigg(0xb,0);
      SelectUnitsType(&DAT_10034610,0,0);
      SelDie(0);
      RunTimer(0xd,100);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xc);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0xd);
      if ((uVar1 & 0xff) == 0) goto LAB_100032f6;
    }
    SetTrigg(0xb,0);
    SetTrigg(0xd,0);
    SetTrigg(0xc,0);
  }
LAB_100032f6:
  uVar1 = Trigg(0x57);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100344c8,0);
    if (0 < iVar2) {
      SetTrigg(0x57,0);
      SelectUnits(&DAT_10034690,0);
      SetStandGround(1,0);
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x57);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_100344c8,0);
      if (0 < iVar2) {
        SetTrigg(0x56,0);
        AttackEnemyInZone(&DAT_10034690,&DAT_100344c8,0);
      }
    }
  }
  uVar1 = Trigg(0x55);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x56);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_100344c8,0);
      if (iVar2 == 0) {
        SetTrigg(0x56,0);
        SelectUnits(&DAT_10034690,0);
        SelSendTo(1,&DAT_100344e0,0x3c,0);
      }
    }
  }
  uVar1 = Trigg(0x54);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount2(&DAT_100344d8,&DAT_10034630,0);
    if (0 < iVar2) {
      SetTrigg(0x53,0);
      AttackEnemyInZone(&DAT_10034668,&DAT_100344d8,0);
    }
  }
  uVar1 = Trigg(0x52);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x53);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount2(&DAT_100344d8,&DAT_10034630,0);
      if (iVar2 == 0) {
        SetTrigg(0x53,0);
        SelectUnits(&DAT_10034668,0);
        SelSendTo(1,&DAT_10034488,0xb4,0);
      }
    }
  }
  uVar1 = Trigg(0x51);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount2(&DAT_10034498,&DAT_10034630,0);
    if (0 < iVar2) {
      SetTrigg(0x50,0);
      SelectUnits(&DAT_10034668,0);
      SetStandGround(1,0);
      AttackEnemyInZone(&DAT_10034668,&DAT_10034498,0);
    }
  }
  uVar1 = Trigg(0x4f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x50);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount2(&DAT_10034498,&DAT_10034630,0);
      if (iVar2 == 0) {
        SetTrigg(0x50,0);
        SelectUnits(&DAT_10034668,0);
        SelSendTo(1,&DAT_10034488,0xb4,0);
      }
    }
  }
  uVar1 = Trigg(0x4e);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount2(&DAT_100344c0,&DAT_10034630,0);
    if (0 < iVar2) {
      SetTrigg(0x4d,0);
      AttackEnemyInZone(&DAT_10034730,&DAT_100344c0,0);
    }
  }
  uVar1 = Trigg(0x4c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x4d);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount2(&DAT_100344c0,&DAT_10034630,0);
      if (iVar2 == 0) {
        SetTrigg(0x4d,0);
        SelectUnits(&DAT_10034730,0);
        SelSendTo(1,&DAT_10034478,0x5a,0);
      }
    }
  }
  uVar1 = Trigg(0x4b);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount2(&DAT_100344a8,&DAT_10034630,0);
    if (0 < iVar2) {
      SetTrigg(0x4a,0);
      AttackEnemyInZone(&DAT_10034730,&DAT_100344a8,0);
    }
  }
  uVar1 = Trigg(0x49);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x4a);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount2(&DAT_100344a8,&DAT_10034630,0);
      if (iVar2 == 0) {
        SetTrigg(0x4a,0);
        SelectUnits(&DAT_10034730,0);
        SelSendTo(1,&DAT_10034478,0x5a,0);
      }
    }
  }
  uVar1 = Trigg(0x48);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount2(&DAT_100344f0,&DAT_10034630,0);
    if (0 < iVar2) {
      SetTrigg(0x47,0);
      AttackEnemyInZone(&DAT_10034450,&DAT_100344f0,0);
    }
  }
  uVar1 = Trigg(0x46);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x47);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount2(&DAT_100344f0,&DAT_10034630,0);
      if (iVar2 == 0) {
        SetTrigg(0x47,0);
        SelectUnits(&DAT_10034450,0);
        SelSendTo(1,&DAT_100344f8,0xb4,0);
      }
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_10034638,0);
    if (0 < iVar2) {
      SetTrigg(0x34,0);
      CreateZoneNearUnit(&DAT_10034410,&DAT_10034550,&DAT_10034638,0,200);
      SelectUnits(&DAT_10034830,0);
      SelectUnits(&DAT_10034838,1);
      SelOpenGates(1);
      RunTimer(3,200);
      RunTimer(7,0x96);
    }
  }
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x25,0);
      SelectUnits(&DAT_10034438,0);
      SetStandGround(1,0);
      SelSendAndKill(1,&DAT_10034550,0x5a,0);
    }
  }
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x33,0);
      SelectUnits(&DAT_10034690,0);
      SetStandGround(1,0);
      SelSendAndKill(1,&DAT_10034568,0,0);
      RunTimer(4,600);
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10034568,&DAT_10034690);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_10034690,&DAT_10034410,0);
    }
  }
  uVar1 = Trigg(0x32);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x32,0);
      SelectUnits(&DAT_10034450,0);
      SetStandGround(1,0);
      SelSendAndKill(1,&DAT_10034568,0,0);
      RunTimer(5,600);
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10034568,&DAT_10034450);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_10034450,&DAT_10034410,0);
    }
  }
  uVar1 = Trigg(0x31);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x31,0);
      SelectUnits(&DAT_10034730,0);
      SetStandGround(1,0);
      SelSendAndKill(1,&DAT_10034568,0,0);
      RunTimer(6,600);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10034568,&DAT_10034730);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_10034730,&DAT_10034410,0);
    }
  }
  uVar1 = Trigg(0x30);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x30,0);
      SelectUnits(&DAT_10034668,0);
      SetStandGround(1,0);
      SelSendAndKill(1,&DAT_10034568,0,0);
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_10034568,&DAT_10034668);
    if (0 < iVar2) {
      AttackEnemyInZone(&DAT_10034668,&DAT_10034410,0);
    }
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x34);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10034550,0);
      if (iVar2 < 3) {
        SetTrigg(0x26,0);
        SetTrigg(0x2a,0);
        SetTrigg(0x29,0);
        SetTrigg(0x28,0);
        SetTrigg(0x27,0);
        SelectUnits(&DAT_10034690,0);
        SelectUnits(&DAT_10034450,1);
        SelectUnits(&DAT_10034730,1);
        SelectUnits(&DAT_10034668,1);
        SelectUnits(&DAT_10034438,1);
        SelSendAndKill(1,&DAT_10034410,0,1);
      }
    }
  }
  uVar1 = Trigg(0x45);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10034530,0);
    if (0 < iVar2) {
      SetTrigg(0x45,0);
      uVar1 = AskQuestion("#PAGE5");
      if ((uVar1 & 0xff) == 0) {
        SelectUnits(&DAT_10034768,0);
        SelChangeNation(6,1);
        AttackEnemyInZone(&DAT_10034768,&DAT_10034530,0);
      }
      else {
        SetResource(0,1,0x32);
        SetResource(0,4,0x96);
        SetResource(0,5,0x96);
        SelectUnits(&DAT_10034768,0);
        SelChangeNation(6,1);
        SetStandGround(1,1);
      }
    }
  }
  uVar1 = Trigg(0x44);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10034768);
    if (iVar2 == 0) {
      SetTrigg(0x44,0);
      ShowPage("#PAGE6");
      AddResource(0,1,5000);
      AddResource(0,4,5000);
      AddResource(0,5,5000);
    }
  }
  uVar1 = Trigg(0x43);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(10);
      if ((uVar1 & 0xff) != 0) {
        iVar2 = GetResource(0,1);
        if (iVar2 != 0) {
          iVar2 = GetResource(0,5);
          if (iVar2 != 0) {
            iVar2 = GetResource(0,4);
            if (iVar2 != 0) goto LAB_1000448f;
          }
        }
        SetTrigg(0x43,0);
        ShowPage("#PAGE7");
      }
    }
  }
LAB_1000448f:
  uVar1 = Trigg(0x40);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10034510,0);
    if (iVar2 < 1) {
      GetTotalAmount0(&DAT_10034790);
      if (0x28 < iVar2) goto LAB_10004538;
    }
    SetTrigg(0x40,0);
    SelectUnits(&DAT_10034748,0);
    SelOpenGates(1);
    RunTimer(1,0x32);
  }
LAB_10004538:
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x36,0);
      SelectUnits(&DAT_10034790,0);
      SelSendAndKill(1,&DAT_100344b8,0xb4,0);
      SelectUnits(&DAT_10034760,0);
      SelectUnits(&DAT_10034778,1);
      SelSendAndKill(6,&DAT_100344b8,0xb4,0);
    }
  }
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount1(&DAT_100344b8,&DAT_10034760);
    if (iVar2 < 1) {
      iVar2 = GetUnitsAmount1(&DAT_100344b8,&DAT_10034778);
      if (iVar2 < 1) goto LAB_100046a7;
    }
    SetTrigg(0x16,0);
    RunTimer(0xf,1000);
  }
LAB_100046a7:
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0xf);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x15,0);
      SelectUnits1(6,&DAT_10034760,0);
      SelectUnits1(6,&DAT_10034778,1);
      SelErase(6);
    }
  }
  uVar1 = Trigg(0x37);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10034790);
    if (iVar2 == 0) {
      SetTrigg(0x37,0);
      SelectUnits(&DAT_10034760,0);
      SelectUnits(&DAT_10034778,1);
      SetStandGround(6,1);
      AddResource(0,1,5000);
      AddResource(0,4,5000);
      AddResource(0,5,5000);
      SelectUnits(&DAT_10034778,0);
      SelChangeNation(6,0);
      ShowPage("#PAGE9");
    }
  }
  uVar1 = Trigg(0x3f);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10034790);
    if (iVar2 != 0) {
      iVar2 = GetUnitsAmount0(&DAT_100344b0,0);
      if (iVar2 < 1) goto LAB_100048fa;
    }
    SetTrigg(0x3f,0);
    SelectUnits(&DAT_10034748,0);
    SelCloseGates(1);
  }
LAB_100048fa:
  uVar1 = Trigg(0x3a);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10034528,0);
    if (0x13 < iVar2) {
      SetTrigg(0x3a,0);
      SelectUnits1(1,&DAT_10034668,0);
      SelectUnits1(1,&DAT_10034670,1);
      SelAttackGroup(1,&DAT_10034418);
    }
  }
  uVar1 = Trigg(0x39);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100344a8,0);
    if (0x13 < iVar2) {
      SetTrigg(0x39,0);
      SelectUnits1(1,&DAT_10034668,0);
      SelectUnits1(1,&DAT_10034670,1);
      SelAttackGroup(1,&DAT_10034418);
    }
  }
  uVar1 = Trigg(0x2f);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10034808);
    if (iVar2 < 0x2c) {
      iVar2 = GetUnitsAmount0(&DAT_10034540,0);
      if (0 < iVar2) {
        SetTrigg(0x2e,0);
        AttackEnemyInZone(&DAT_10034720,&DAT_10034540,0);
        AttackEnemyInZone(&DAT_10034738,&DAT_10034540,0);
      }
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2e);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10034540,0);
      if (iVar2 == 0) {
        SetTrigg(0x2d,0);
        SetTrigg(0x2f,0);
        SelectUnits(&DAT_10034720,0);
        SelectUnits(&DAT_10034738,1);
        SelSendTo(1,&DAT_10034580,0x3c,0);
      }
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2e);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_10034540,0);
      if (0 < iVar2) {
        SetTrigg(0x2d,0);
        AttackEnemyInZone(&DAT_10034720,&DAT_10034540,0);
        AttackEnemyInZone(&DAT_10034738,&DAT_10034540,0);
      }
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_10034638,0);
    if (2 < iVar2) {
      SetTrigg(0x24,0);
      SelectUnits1(1,&DAT_10034738,0);
      SelDie(1);
      SelectUnits1(0,&DAT_10034738,0);
      SelDie(0);
    }
  }
  uVar1 = Trigg(0x6e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x23);
    if ((uVar1 & 0xff) != 0) {
      iVar2 = GetUnitsAmount0(&DAT_100344a0,0);
      if (0 < iVar2) {
        GetTotalAmount1(&DAT_10034638,0);
        if (iVar2 == 0) {
          SetTrigg(0x6e,0);
          ShowPage("#PAGE24");
        }
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100344a0,0);
    if (0 < iVar2) {
      GetTotalAmount1(&DAT_10034638,0);
      if (0 < iVar2) {
        SetTrigg(0x23,0);
        ShowPage("#PAGE10");
        ShowPage("#PAGE20");
        RunTimer(8,15000);
        SelectUnitsType(&DAT_100345f8,0,0);
        SelectUnitsType(&DAT_10034638,0,1);
        AllowAttack(0,1);
        SetResource(0,5,50000);
        RunTimer(0xe,3000);
        DisableMission(0x46);
        EnableMission(0x49);
        EnableMission(0x4a);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x23);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(4,0);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    AttackZoneByArtillery(&DAT_100347e0,&DAT_10034590,0);
    AttackZoneByArtillery(&DAT_10034710,&DAT_10034558,0);
    AttackZoneByArtillery(&DAT_10034770,&DAT_10034570,0);
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0xe);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(5,0);
        SelectUnits1(1,&DAT_100347d0,0);
        SelAttackGroup(1,&DAT_10034418);
        RunTimer(0x13,3000);
      }
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x13);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(2,0);
      SelectUnits1(1,&DAT_100347d0,0);
      SelAttackGroup(1,&DAT_10034418);
      RunTimer(0x11,4000);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x11);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(3,0);
      SelectUnits1(1,&DAT_100347d8,0);
      SelAttackGroup(1,&DAT_10034418);
      RunTimer(0x12,3000);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x12);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(1,0);
      SelectUnits1(1,&DAT_10034840,0);
      SelAttackGroup(1,&DAT_10034418);
    }
  }
  uVar1 = Trigg(0x65);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x23);
    if ((uVar1 & 0xff) == 0) {
      SelectUnitsType(&DAT_10034638,1,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(0x66);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_10034600,0);
    if (0 < iVar2) {
      SelectUnitsType(&DAT_10034600,0,0);
      SelDie(0);
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100344a0,0);
    if (0 < iVar2) {
      GetTotalAmount0(&DAT_10034720);
      if (10 < iVar2) {
        SetTrigg(0x22,0);
        CreateObject0(&DAT_100343f8,&DAT_100344d0,&DAT_10034608,1,&DAT_10034578,0xb4);
        CreateObject0(&DAT_100343f0,&DAT_100344d0,&DAT_10034608,1,&DAT_10034560,0xb4);
        CreateObject0(&DAT_100343e0,&DAT_100344d0,&DAT_10034608,1,&DAT_10034548,0xb4);
        CreateObject0(&DAT_10034408,&DAT_100344d0,&DAT_10034608,1,&DAT_10034538,0xb4);
        CreateObject0(&DAT_10034400,&DAT_10034518,&DAT_10034610,1,&DAT_10034500,0xb4);
      }
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(8);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x21,0);
      ShowPage("#PAGE23");
      SelectUnits1(5,&DAT_10034820,0);
      SelectUnits1(5,&DAT_10034800,1);
      SelSendTo(5,&DAT_10034500,0,0);
      SelectUnits1(5,&DAT_10034750,0);
      SelectUnits1(5,&DAT_10034828,1);
      SelectUnits1(5,&DAT_100347f0,1);
      SelSendTo(5,&DAT_10034598,0,0);
      SelSendTo(5,&DAT_10034520,0,2);
      RunTimer(9,300);
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10034800);
    if (iVar2 == 0) {
      uVar1 = TimerDoneFirst(9);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x20,0);
        ShowPage("#PAGE11");
        SelectUnits1(5,&DAT_10034820,0);
        SelectUnits1(5,&DAT_10034828,1);
        SelectUnits1(5,&DAT_100347f0,1);
        SelectUnits1(5,&DAT_10034750,1);
        SelChangeNation(5,0);
      }
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10034588,0);
    if (0 < iVar2) {
      SetTrigg(0x1f,0);
      RunTimer(10,30000);
      ShowPage("#PAGE12");
      DisableMission(0x4a);
      EnableMission(0x4e);
      EnableMission(0x4f);
    }
  }
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1f);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = GetUnitsAmount0(&DAT_100345a8,1);
      if (iVar2 == 0) {
        iVar2 = GetUnitsAmount0(&DAT_100345a8,0);
        if (0 < iVar2) {
          SetTrigg(0x1d,0);
          ShowPage("#PAGE13");
          SelectUnits1(1,&DAT_10034818,0);
          SelChangeNation(1,0);
          RunTimer(0xb,5000);
          ShowVictory();
        }
      }
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xf,0);
      ShowPage("#PAGE14");
      SelectUnits1(1,&DAT_10034788,0);
      SelectUnits1(1,&DAT_100347a0,1);
      SelectUnits1(1,&DAT_100347c8,1);
      SelectUnits1(1,&DAT_10034770,1);
      SelectUnits1(1,&DAT_100347b0,1);
      SelectUnits1(1,&DAT_100346b8,1);
      SelectUnits1(1,&DAT_100346d0,1);
      SelectUnits1(1,&DAT_100346f0,1);
      SelectUnits1(1,&DAT_100346e0,1);
      SelectUnits1(1,&DAT_100347b8,1);
      SelectUnits1(1,&DAT_10034710,1);
      SelectUnits1(1,&DAT_100346d8,1);
      SelectUnits1(1,&DAT_100346c0,1);
      SelectUnits1(1,&DAT_100347f8,1);
      SetStandGround(1,0);
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xf);
    if ((uVar1 & 0xff) == 0) {
      AttackEnemyInZone(&DAT_10034788,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100347a0,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100347c8,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_10034770,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100347b0,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100346b8,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100346d0,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100346f0,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100346e0,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100347b8,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_10034710,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100346d8,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100346c0,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_100347f8,&DAT_10034588,0);
      AttackEnemyInZone(&DAT_10034788,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100347a0,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100347c8,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_10034770,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100347b0,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100346b8,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100346d0,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100346f0,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100346e0,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100347b8,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_10034710,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100346d8,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100346c0,&DAT_100345a8,0);
      AttackEnemyInZone(&DAT_100347f8,&DAT_100345a8,0);
    }
  }
  uVar1 = Trigg(0x41);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1d);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_10034640);
      if (iVar2 == 0) {
        SetTrigg(0x41,0);
        ShowPage("#PAGE16");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x10);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount1(&DAT_10034630,0);
      if (iVar2 == 0) {
        GetTotalAmount1(&DAT_10034638,0);
        if (iVar2 == 0) {
          GetTotalAmount1(&DAT_10034620,0);
          if (iVar2 == 0) {
            GetTotalAmount1(&DAT_100345f8,0);
            if (iVar2 == 0) {
              SetTrigg(0xe,0);
              ShowPage("#PAGE17");
              LooseGame();
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_100345a0,0);
    if (0 < iVar2) {
      SetTrigg(10,0);
      ShowPage("#PAGE18");
      SetResource(0,5,0);
    }
  }
  uVar1 = Trigg(0x70);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x23);
      if ((uVar1 & 0xff) != 0) {
        SetResource(0,5,0);
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(&DAT_10034540,1);
    if (iVar2 < 5) {
      iVar2 = GetUnitsAmount0(&DAT_10034540,0);
      if (0 < iVar2) {
        SetTrigg(9,0);
        ShowPage("#PAGE19");
        SelectUnits1(1,&DAT_10034700,0);
        SelDie(1);
        SelectUnits1(1,&DAT_10034810,0);
        SelectUnits1(1,&DAT_10034808,1);
        SelChangeNation(1,0);
      }
    }
  }
  uVar1 = Trigg(0x6f);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_10034638,0);
    if (0 < iVar2) {
      SetTrigg(0x6f,0);
      DisableMission(0x44);
      EnableMission(0x45);
      EnableMission(0x46);
      EnableMission(0x4c);
    }
  }
  uStack_8 = 0x10006234;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

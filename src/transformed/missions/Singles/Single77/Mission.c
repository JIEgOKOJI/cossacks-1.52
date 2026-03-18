#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006118[] = "GE2";
char DAT_10006124[] = "GP";
char DAT_10006128[] = "Gr";
char DAT_1000613c[] = "ZH16";
char DAT_10006144[] = "ZH15";
char DAT_1000614c[] = "ZH14";
char DAT_10006154[] = "ZH13";
char DAT_1000615c[] = "ZH12";
char DAT_10006164[] = "ZH11";
char DAT_1000616c[] = "ZH10";
char DAT_10006174[] = "ZH9";
char DAT_10006178[] = "ZH8";
char DAT_1000617c[] = "ZH7";
char DAT_10006180[] = "ZH6";
char DAT_10006184[] = "ZH5";
char DAT_10006188[] = "ZH4";
char DAT_1000618c[] = "ZH3";
char DAT_10006190[] = "ZH2";
char DAT_10006194[] = "ZH1";
char DAT_10006198[] = "Z12";
char DAT_1000619c[] = "Z11";
char DAT_100061a0[] = "Z10";
char DAT_100061a4[] = "Z9";
char DAT_100061a8[] = "Z8";
char DAT_100061ac[] = "Z7";
char DAT_100061b0[] = "Z6";
char DAT_100061b4[] = "Z5";
char DAT_100061b8[] = "Z4";
char DAT_100061bc[] = "Z3";
char DAT_100061c0[] = "Z2";
char DAT_100061c4[] = "Z1";
char DAT_100061c8[] = "Z0";
char DAT_100061cc[] = "Z02";
char DAT_100061d0[] = "Z01";
long long DAT_10006680 = 0;
long long DAT_10006688 = 0;
long long DAT_10006690 = 0;
long long DAT_10006698 = 0;
long long DAT_100066a0 = 0;
long long DAT_100066a8 = 0;
long long DAT_100066b0 = 0;
long long DAT_100066b8 = 0;
long long DAT_100066c0 = 0;
long long DAT_100066c8 = 0;
int DAT_100066d0 = 0;
long long DAT_100066d8 = 0;
long long DAT_100066e0 = 0;
long long DAT_100066e8 = 0;
long long DAT_100066f0 = 0;
long long DAT_100066f8 = 0;
long long DAT_10006700 = 0;
long long DAT_10006708 = 0;
long long DAT_10006710 = 0;
long long DAT_10006718 = 0;
long long DAT_10006720 = 0;
long long DAT_10006728 = 0;
long long DAT_10006730 = 0;
long long DAT_10006738 = 0;
long long DAT_10006740 = 0;
long long DAT_10006748 = 0;
long long DAT_10006750 = 0;
long long DAT_10006758 = 0;
long long DAT_10006760 = 0;
long long DAT_10006768 = 0;
long long DAT_10006770 = 0;
long long DAT_10006778 = 0;
long long DAT_10006780 = 0;
long long DAT_10006788 = 0;
long long DAT_10006790 = 0;
long long DAT_10006798 = 0;
long long DAT_100067a0 = 0;
long long DAT_100067a8 = 0;
long long DAT_100067b0 = 0;
long long DAT_100067b8 = 0;
long long DAT_100067c0 = 0;
long long DAT_100067c8 = 0;
long long DAT_100067d0 = 0;
long long DAT_100067d8 = 0;
long long DAT_100067e0 = 0;
long long DAT_100067e8 = 0;
long long DAT_100067f0 = 0;
long long DAT_100067f8 = 0;
long long DAT_10006800 = 0;
long long DAT_10006808 = 0;
long long DAT_10006810 = 0;
long long DAT_10006818 = 0;
long long DAT_10006820 = 0;
long long DAT_10006828 = 0;
long long DAT_10006830 = 0;
long long DAT_10006838 = 0;
long long DAT_10006840 = 0;
long long DAT_10006848 = 0;
long long DAT_10006850 = 0;
long long DAT_10006858 = 0;
int DAT_10006868 = 0;
long long DAT_10006870 = 0;
long long DAT_10006878 = 0;
long long DAT_10006880 = 0;
long long DAT_10006888 = 0;
long long DAT_10006890 = 0;
long long DAT_10006898 = 0;
long long DAT_100068a0 = 0;
long long DAT_100068a8 = 0;
long long DAT_100068b0 = 0;
long long DAT_100068b8 = 0;
long long DAT_100068c0 = 0;
long long DAT_100068c8 = 0;
long long DAT_100068d0 = 0;
long long DAT_100068d8 = 0;
long long DAT_100068e0 = 0;
long long DAT_100068e8 = 0;
long long DAT_100068f0 = 0;
int DAT_100068f8 = 0;

/* Forward declarations */
int FUN_10001012(int param_1);
int FUN_10001030(int param_1,int param_2,int param_3,int param_4);
void FUN_1000106a(int param_1,int param_2);
void FUN_10001082(int param_1,int param_2,int param_3);
int FUN_100010c0(int param_1,int param_2,int param_3);
BOOL FUN_1000110a(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);

void OnInit();
void ProcessScenary();


int __cdecl FUN_10001012(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = GetUnitsByNation(param_1,iVar2);
    if (0 < iVar1) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return iVar2;
}





int __cdecl
FUN_10001030(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_10001012(param_1);
  SelectUnits(param_1,0);
  SetStandGround(iVar1,0);
  SelSendAndKill(iVar1,param_2,param_3,param_4);
  return iVar1;
}





void __cdecl FUN_1000106a(int param_1,int param_2)

{
  FUN_10001030(param_1,param_2,200,0);
  return;
}





void __cdecl FUN_10001082(int param_1,int param_2,int param_3)

{
  FUN_10001030(param_1,param_2,param_3,0);
  return;
}






int __cdecl FUN_100010c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10001012(param_1);
  iVar2 = 0;
  if (0 < DAT_10006868) {
    do {
      CreateObject0(&DAT_10006740,param_2,param_3,iVar1);
      RemoveGroup(&DAT_10006740,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_10006868);
  }
  return iVar1;
}





BOOL __cdecl
FUN_1000110a(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10001012(param_1);
  iVar2 = GetResource(iVar1,0);
  if (iVar2 < 10000) {
    SetResource(iVar1,0,1000000);
  }
  iVar2 = GetResource(iVar1,3);
  if (iVar2 < 10000) {
    SetResource(iVar1,3,1000000);
  }
  iVar2 = GetResource(iVar1,2);
  if (iVar2 < 10000) {
    SetResource(iVar1,2,1000000);
  }
  iVar2 = GetResource(iVar1,1);
  if (iVar2 < 10000) {
    SetResource(iVar1,1,1000000);
  }
  iVar2 = GetResource(iVar1,4);
  if (iVar2 < 10000) {
    SetResource(iVar1,4,1000000);
  }
  iVar2 = GetResource(iVar1,5);
  if (iVar2 < 10000) {
    SetResource(iVar1,5,1000000);
  }
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 < param_6) {
    ProduceUnitFast(param_2,param_3,param_1,0);
    FUN_10001082(param_1,param_4,param_5);
  }
  return iVar1 < param_6;
}





void OnInit(void)

{
                    
  RegisterVar(&DAT_100066d0,4);
  RegisterVar(&DAT_10006868,4);
  RegisterVar(&DAT_100068f8,4);
  SetPlayerName(1,"ENEMY");
  SetPlayerName(2,"ENEMY");
  SetPlayerName(4,"DWELLERS");
  SetPlayerName(5,"ENEMY");
  RegisterZone(&DAT_100068f0,"ZAttack");
  RegisterZone(&DAT_10006870,DAT_100061d0);
  RegisterZone(&DAT_10006878,DAT_100061cc);
  RegisterZone(&DAT_10006778,DAT_100061c8);
  RegisterZone(&DAT_10006780,DAT_100061c4);
  RegisterZone(&DAT_10006788,DAT_100061c0);
  RegisterZone(&DAT_10006798,DAT_100061bc);
  RegisterZone(&DAT_100067a0,DAT_100061b8);
  RegisterZone(&DAT_100067a8,DAT_100061b4);
  RegisterZone(&DAT_100067b0,DAT_100061b0);
  RegisterZone(&DAT_100067b8,DAT_100061ac);
  RegisterZone(&DAT_100067c0,DAT_100061a8);
  RegisterZone(&DAT_100067c8,DAT_100061a4);
  RegisterZone(&DAT_10006880,DAT_100061a0);
  RegisterZone(&DAT_10006888,DAT_1000619c);
  RegisterZone(&DAT_10006890,DAT_10006198);
  RegisterZone(&DAT_10006898,DAT_10006194);
  RegisterZone(&DAT_100068a0,DAT_10006190);
  RegisterZone(&DAT_100068a8,DAT_1000618c);
  RegisterZone(&DAT_100068b0,DAT_10006188);
  RegisterZone(&DAT_100068b8,DAT_10006184);
  RegisterZone(&DAT_100068c0,DAT_10006180);
  RegisterZone(&DAT_100068c8,DAT_1000617c);
  RegisterZone(&DAT_100068d0,DAT_10006178);
  RegisterZone(&DAT_100068d8,DAT_10006174);
  RegisterZone(&DAT_10006708,DAT_1000616c);
  RegisterZone(&DAT_10006710,DAT_10006164);
  RegisterZone(&DAT_10006718,DAT_1000615c);
  RegisterZone(&DAT_10006720,DAT_10006154);
  RegisterZone(&DAT_10006728,DAT_1000614c);
  RegisterZone(&DAT_10006730,DAT_10006144);
  RegisterZone(&DAT_10006738,DAT_1000613c);
  RegisterZone(&DAT_100066c8,"ZTown1");
  RegisterZone(&DAT_100066c0,"ZTown2");
  RegisterUnits(&DAT_10006770,DAT_10006128);
  RegisterUnits(&DAT_10006768,DAT_10006124);
  RegisterUnits(&DAT_10006838,"GErase");
  RegisterUnits(&DAT_100067e0,DAT_10006118);
  RegisterUnits(&DAT_100066e0,"GGate1");
  RegisterUnits(&DAT_100066d8,"GGate2");
  RegisterUnits(&DAT_100066f8,"GBar1");
  RegisterUnits(&DAT_10006700,"GBar2");
  RegisterUnitType(&DAT_100068e0,"Strelec_eng(en)");
  RegisterUnitType(&DAT_100066a8,"Pik_evro_rus(en)");
  RegisterUnitType(&DAT_10006840,"Grenader_DIP(en)");
  RegisterUnitType(&DAT_10006830,"Strelec_Algir_DIP(en)");
  RegisterUnitType(&DAT_100068e8,"Mushketer_ev(VE)");
  RegisterDynGroup(&DAT_100067e8);
  RegisterDynGroup(&DAT_100067f0);
  RegisterDynGroup(&DAT_100067f8);
  RegisterDynGroup(&DAT_10006800);
  RegisterDynGroup(&DAT_10006808);
  RegisterDynGroup(&DAT_10006810);
  RegisterDynGroup(&DAT_10006818);
  RegisterDynGroup(&DAT_10006820);
  RegisterDynGroup(&DAT_10006828);
  RegisterDynGroup(&DAT_10006680);
  RegisterDynGroup(&DAT_10006688);
  RegisterDynGroup(&DAT_10006690);
  RegisterDynGroup(&DAT_10006698);
  RegisterDynGroup(&DAT_100066a0);
  RegisterDynGroup(&DAT_100066b0);
  RegisterDynGroup(&DAT_100066b8);
  RegisterVar(&DAT_100067e8,8);
  RegisterVar(&DAT_100067f0,8);
  RegisterVar(&DAT_100067f8,8);
  RegisterVar(&DAT_10006800,8);
  RegisterVar(&DAT_10006808,8);
  RegisterVar(&DAT_10006810,8);
  RegisterVar(&DAT_10006818,8);
  RegisterVar(&DAT_10006820,8);
  RegisterVar(&DAT_10006828,8);
  RegisterVar(&DAT_10006680,8);
  RegisterVar(&DAT_10006688,8);
  RegisterVar(&DAT_10006690,8);
  RegisterVar(&DAT_10006698,8);
  RegisterVar(&DAT_100066a0,8);
  RegisterVar(&DAT_100066b0,8);
  RegisterVar(&DAT_100066b8,8);
  RegisterUnitType(&DAT_100066e8,"Center_France(fr)");
  RegisterUnitType(&DAT_100067d8,"Center_Austria(au)");
  RegisterUnitType(&DAT_10006848,"Center_Piemont(PI)");
  RegisterUnitType(&DAT_10006858,"Kazarma_BR(en)");
  RegisterUnitType(&DAT_10006850,"akademia_E(PI)");
  RegisterDynGroup(&DAT_10006740);
  RegisterDynGroup(&DAT_10006748);
  RegisterDynGroup(&DAT_10006750);
  RegisterDynGroup(&DAT_10006758);
  RegisterDynGroup(&DAT_10006760);
  RegisterDynGroup(&DAT_100067d0);
  RegisterDynGroup(&DAT_100066f0);
  RegisterVar(&DAT_10006740,8);
  RegisterVar(&DAT_10006748,8);
  RegisterVar(&DAT_10006750,8);
  RegisterVar(&DAT_10006758,8);
  RegisterVar(&DAT_10006760,8);
  RegisterVar(&DAT_100066f0,8);
  RegisterFormation(&DAT_10006790,"#ALONE");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  int iVar4;
  void *pcVar5;
  void *pcVar6;
  void *pcVar7;
  int iStack_4;
  
                    
  cVar1 = TimerDone(10);
  if (cVar1 != '\0') {
    iVar2 = GetResource(1,3);
    if (iVar2 < 1000) {
      AddResource(1,3,1000);
    }
    iVar2 = GetResource(1,1);
    if (iVar2 < 1000) {
      AddResource(1,1,1000);
    }
    iVar2 = GetResource(1,4);
    if (iVar2 < 1000) {
      AddResource(1,4,1000);
    }
    iVar2 = GetResource(1,5);
    if (iVar2 < 1000) {
      AddResource(1,5,1000);
    }
    iVar2 = GetResource(4,3);
    if (iVar2 < 1000) {
      AddResource(4,3,1000);
    }
    iVar2 = GetResource(4,1);
    if (iVar2 < 1000) {
      AddResource(4,1,1000000);
    }
    iVar2 = GetResource(4,4);
    if (iVar2 < 1000) {
      AddResource(4,4,1000000);
    }
    iVar2 = GetResource(4,5);
    if (iVar2 < 1000) {
      AddResource(4,5,1000000);
    }
    iVar2 = GetResource(5,3);
    if (iVar2 < 1000) {
      AddResource(5,3,1000);
    }
    iVar2 = GetResource(5,1);
    if (iVar2 < 1000) {
      AddResource(5,1,1000000);
    }
    iVar2 = GetResource(5,4);
    if (iVar2 < 1000) {
      AddResource(5,4,1000000);
    }
    iVar2 = GetResource(5,5);
    if (iVar2 < 1000) {
      AddResource(5,5,1000000);
    }
    iVar2 = GetResource(7,1);
    if (iVar2 < 1000) {
      AddResource(7,1,1000000);
    }
    iVar2 = GetResource(7,4);
    if (iVar2 < 1000) {
      AddResource(7,4,1000000);
    }
    iVar2 = GetResource(7,5);
    if (iVar2 < 1000) {
      AddResource(7,5,1000000);
    }
    RunTimer(10,1000);
  }
  cVar1 = Trigg(99);
  if (cVar1 == '\0') goto LAB_10001b55;
  DAT_100066d0 = GetDiff(0);
  DAT_100068f8 = 0;
  DAT_10006868 = DAT_100066d0 * 2 + 5;
  ChangeFriends(1,0xe);
  ChangeFriends(2,0xe);
  ChangeFriends(4,0x7f);
  ChangeFriends(5,0x3e);
  SetResource(0,0,(5 - DAT_100066d0) * 1000);
  uVar3 = GetResource(0,0);
  SetResource(0,2,uVar3);
  uVar3 = GetResource(0,0);
  SetResource(0,3,uVar3);
  uVar3 = GetResource(0,0);
  SetResource(0,1,uVar3);
  uVar3 = GetResource(0,0);
  SetResource(0,4,uVar3);
  uVar3 = GetResource(0,0);
  SetResource(0,5,uVar3);
  iVar2 = GetResource(0,0);
  SetResource(1,0,iVar2 << 1);
  uVar3 = GetResource(1,0);
  SetResource(1,2,uVar3);
  iVar2 = GetResource(1,0);
  SetResource(1,3,iVar2 << 1);
  uVar3 = GetResource(1,0);
  SetResource(1,1,uVar3);
  uVar3 = GetResource(1,0);
  SetResource(1,4,uVar3);
  uVar3 = GetResource(1,0);
  SetResource(1,5,uVar3);
  iVar2 = GetResource(0,0);
  SetResource(2,0,iVar2 << 1);
  uVar3 = GetResource(2,0);
  SetResource(2,2,uVar3);
  uVar3 = GetResource(2,0);
  SetResource(2,3,uVar3);
  uVar3 = GetResource(2,0);
  SetResource(2,1,uVar3);
  uVar3 = GetResource(2,0);
  SetResource(2,4,uVar3);
  uVar3 = GetResource(2,0);
  SetResource(2,5,uVar3);
  if (DAT_100066d0 == 1) {
LAB_10001a59:
    InitialUpgrade("GBar1","AKA14EN");
    InitialUpgrade("GBar1","Strelec_eng(en)ATTACK");
    InitialUpgrade("GBar1","Strelec_eng(en)SHIELD");
  }
  else {
    if (DAT_100066d0 == 2) {
LAB_100019eb:
      InitialUpgrade("GBar1","AKA09EN");
      InitialUpgrade("GBar1","AKA11EN");
      InitialUpgrade("GBar1","AKA12EN");
      InitialUpgrade("GBar1","AKA13EN");
      InitialUpgrade("GBar1","AKA17EN");
      InitialUpgrade("GBar1","AKA20EN");
      InitialUpgrade("GBar1","AKA31EN");
      InitialUpgrade("GBar1","KUZ05EN");
      InitialUpgrade("GBar1","KUZ06EN");
      InitialUpgrade("GBar1","Strelec_eng(en)ATTACK");
      InitialUpgrade("GBar1","Strelec_eng(en)ATTACK4");
      InitialUpgrade("GBar1","Strelec_eng(en)SHIELD");
      InitialUpgrade("GBar1","Strelec_eng(en)SHIELD4");
      goto LAB_10001a59;
    }
    if (DAT_100066d0 == 3) {
      InitialUpgrade("GBar1","AKA12EN");
      InitialUpgrade("GBar1","AKA13EN");
      InitialUpgrade("GBar1","AKA15EN");
      InitialUpgrade("GBar1","AKA16EN");
      InitialUpgrade("GBar1","AKA17EN");
      InitialUpgrade("GBar1","AKA20EN");
      InitialUpgrade("GBar1","AKA31EN");
      InitialUpgrade("GBar1","AKA33EN");
      InitialUpgrade("GBar1","AKA34EN");
      InitialUpgrade("GBar1","KUZ02EN");
      InitialUpgrade("GBar1","KUZ04EN");
      InitialUpgrade("GBar1","Strelec_eng(en)ATTACK4");
      InitialUpgrade("GBar1","Strelec_eng(en)SHIELD");
      InitialUpgrade("GBar1","Strelec_eng(en)SHIELD4");
      InitialUpgrade("GBar1","Strelec_eng(en)SHIELD4");
      goto LAB_100019eb;
    }
  }
  if (DAT_100066d0 < 2) {
    ClearSelection(1);
    SelectUnits(&DAT_10006838,0);
    SelDie(1);
    ClearSelection(1);
  }
  SelectUnits(&DAT_100066e0,0);
  SelectUnits(&DAT_100066d8,1);
  SelOpenGates(5);
  ClearSelection(5);
  SetLightSpot(&DAT_10006778,4,1);
  StartAI(2,"AUSTRIA.0",1,0,1,DAT_100066d0);
  EnableMission(0x42);
  DisableMission(0x43);
  EnableMission(0x44);
  ShowPage("#PAGE0");
  RunTimer(1,5000);
  RunTimer(5,0);
  RunTimer(6,100);
  RunTimer(10,0);
  SetTrigg(99,0);
LAB_10001b55:
  if ((0 < DAT_100066d0) && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    iStack_4 = 0;
    DAT_10006868 = DAT_10006868 + 1 + DAT_100066d0;
    if (0 < DAT_100066d0) {
      do {
        InitialUpgrade("GBar1","AKA26EN");
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < DAT_100066d0);
    }
    RunTimer(1,5000);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006870,0), 0 < iVar2)) {
    ShowPage("#PAGE01");
    SetTrigg(8,0);
  }
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_10006878,0);
    iVar4 = GetUnitsAmount0(&DAT_10006780,0);
    if (0 < iVar2 + iVar4) {
      FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_10006778);
      FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_10006778);
      FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_10006788);
      FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_10006798);
      FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_100067a0);
      FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_100067a8);
      FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_100067b0);
      FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_100067b8);
      FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_100067c0);
      FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_100067c8);
      iStack_4 = 0;
      if (0 < DAT_100066d0) {
        do {
          FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_10006778);
          FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_10006880);
          FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_10006888);
          FUN_100010c0(&DAT_100066f0,&DAT_100068e8,&DAT_10006890);
          iStack_4 = iStack_4 + 1;
        } while (iStack_4 < DAT_100066d0);
      }
      FUN_1000106a(&DAT_10006770,&DAT_10006778);
      FUN_1000106a(&DAT_100066f0,&DAT_10006778);
      ShowPage("#PAGE02");
      SetTrigg(2,0);
    }
  }
  cVar1 = Trigg(3);
  if (cVar1 != '\0') {
    EnableUnit(0,&DAT_10006850,0);
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), cVar1 != '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006780,0), 0 < iVar2)) {
    ShowPage("#PAGE2");
    SetTrigg(4,0);
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006780,0), iVar2 == 0)) {
    ShowPage("#PAGE3");
    SetTrigg(4,1);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = Trigg(4), cVar1 == '\0')) {
    DAT_100068f8 = DAT_100068f8 + 1;
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), cVar1 == '\0')) &&
     ((DAT_100066d0 * 5 + 10) * 2 < DAT_100068f8)) {
    EnableUnit(0,&DAT_10006850,1);
    uVar3 = GetResource(1,0);
    SetResource(1,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,1,uVar3);
    StartAI(1,"FRANCE.0",1,0,1,DAT_100066d0);
    ClearLightSpot(1);
    DisableMission(0x42);
    EnableMission(0x43);
    ShowPage("#PAGE4");
    SetTrigg(3,0);
  }
  cVar1 = Trigg(7);
  if (((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10006870,0), iVar2 == 0)) {
    iVar2 = GetUnitsAmount0(&DAT_10006870,2);
    iVar4 = GetUnitsAmount0(&DAT_10006870,1);
    if (0 < iVar2 + iVar4) {
      SetResource(7,3,0);
      SetTrigg(7,0);
    }
  }
  cVar1 = Trigg(0x33);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    FUN_1000110a(&DAT_100067f0,&DAT_100066f8,&DAT_100068e0,&DAT_100068a0,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_10006818,&DAT_100066f8,&DAT_100068e0,&DAT_100068c8,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_10006680,&DAT_100066f8,&DAT_100068e0,&DAT_10006708,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_100067f8,&DAT_100066f8,&DAT_100068e0,&DAT_100068a8,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_10006810,&DAT_100066f8,&DAT_100068e0,&DAT_100068c0,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_10006688,&DAT_100066f8,&DAT_100068e0,&DAT_10006710,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_100066b8,&DAT_100066f8,&DAT_100068e0,&DAT_10006738,0xc4,DAT_10006868);
    iVar2 = GetUnitsAmount0(&DAT_100066c8,0);
    if (0 < iVar2) {
      FUN_1000110a(&DAT_100067f8,&DAT_100066f8,&DAT_100068e0,&DAT_100066c8,0x80,DAT_10006868 * 2);
    }
    RunTimer(5,0xb4);
  }
  cVar1 = Trigg(0x34);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(6), cVar1 != '\0')) {
    FUN_1000110a(&DAT_100067e8,&DAT_10006700,&DAT_100068e0,&DAT_10006898,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_10006800,&DAT_10006700,&DAT_100068e0,&DAT_100068b0,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_10006808,&DAT_10006700,&DAT_100068e0,&DAT_100068b8,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_10006820,&DAT_10006700,&DAT_100068e0,&DAT_100068d0,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_10006828,&DAT_10006700,&DAT_100068e0,&DAT_100068d8,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_10006690,&DAT_10006700,&DAT_100068e0,&DAT_10006718,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_10006698,&DAT_10006700,&DAT_100068e0,&DAT_10006720,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_100066a0,&DAT_10006700,&DAT_100068e0,&DAT_10006728,0xc4,DAT_10006868);
    FUN_1000110a(&DAT_100066b0,&DAT_10006700,&DAT_100068e0,&DAT_10006730,0xc4,DAT_10006868);
    iVar2 = GetUnitsAmount0(&DAT_100066c0,0);
    if (0 < iVar2) {
      FUN_1000110a(&DAT_10006800,&DAT_10006700,&DAT_100068e0,&DAT_100066c0,0,DAT_10006868 * 2);
    }
    RunTimer(6,0xb4);
  }
  cVar1 = Trigg(0x33);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100066c8,5), iVar2 < 3)) &&
      (iVar2 = GetUnitsAmount0(&DAT_100066c8,0), 3 < iVar2)) &&
     ((iVar2 = GetTotalAmount1(&DAT_10006858,5), iVar2 < 2 ||
      ((cVar1 = Trigg(0x34), cVar1 == '\0' &&
       (iVar2 = GetTotalAmount1(&DAT_10006858,5), iVar2 == 0)))))) {
    ShowPage("#PAGE5");
    SetTrigg(0x33,0);
  }
  cVar1 = Trigg(0x34);
  if ((((cVar1 != '\0') &&
       (iVar2 = GetUnitsAmount0(&DAT_100066c0,5), pcVar5 = (void*)&SetTrigg, iVar2 < 3)) &&
      (iVar2 = GetUnitsAmount0(&DAT_100066c0,0), pcVar5 = (void*)&SetTrigg, 3 < iVar2)) &&
     ((iVar2 = GetTotalAmount1(&DAT_10006858,5), iVar2 < 2 ||
      ((cVar1 = Trigg(0x33), pcVar5 = (void*)&SetTrigg, cVar1 == '\0' &&
       (iVar2 = GetTotalAmount1(&DAT_10006858,5), pcVar5 = (void*)&SetTrigg, iVar2 == 0)))))) {
    ShowPage("#PAGE5");
    SetTrigg(0x34,0);
  }
  cVar1 = Trigg(0x5d);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0x33), pcVar6 = (void*)&ShowPage, cVar1 == '\0')) &&
      (cVar1 = Trigg(0x34), pcVar6 = (void*)&ShowPage, cVar1 == '\0')) &&
     (iVar2 = GetTotalAmount1(&DAT_100068e0,5), pcVar6 = (void*)&ShowPage, iVar2 == 0)) {
    ShowPage("#PAGE15");
    SetTrigg(0x5d,0);
  }
  cVar1 = Trigg(0x5b);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    ShowPage("#PAGE11");
    SetTrigg(0x5b,0);
  }
  cVar1 = Trigg(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE12");
    SetTrigg(0x5c,0);
  }
  cVar1 = Trigg(0x5a);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    iVar2 = 1;
    do {
      cVar1 = TimerDone(iVar2);
      if (cVar1 == '\0') {
        RunTimer(iVar2,1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    ShowPage("#PAGE10");
    LooseGame();
    SetTrigg(0x5a,0);
  }
  cVar1 = Trigg(0x5b);
  if ((cVar1 == '\0') && (cVar1 = Trigg(0x5c), cVar1 == '\0')) {
    iVar2 = 1;
    do {
      cVar1 = TimerDone(iVar2);
      if (cVar1 == '\0') {
        FreeTimer(iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    ShowPage("#PAGE20");
    ShowVictory();
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

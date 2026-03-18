#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_10037778 = 0;
long long DAT_10037780 = 0;
long long DAT_10037788 = 0;
long long DAT_10037790 = 0;
long long DAT_10037798 = 0;
long long DAT_100377a0 = 0;
long long DAT_100377a8 = 0;
long long DAT_100377b0 = 0;
long long DAT_100377b8 = 0;
long long DAT_100377c0 = 0;
long long DAT_100377c8 = 0;
long long DAT_100377d0 = 0;
long long DAT_100377d8 = 0;
long long DAT_100377e0 = 0;
long long DAT_100377e8 = 0;
long long DAT_100377f0 = 0;
long long DAT_100377f8 = 0;
long long DAT_10037800 = 0;
long long DAT_10037808 = 0;
long long DAT_10037810 = 0;
long long DAT_10037818 = 0;
long long DAT_10037820 = 0;
long long DAT_10037828 = 0;
long long DAT_10037830 = 0;
long long DAT_10037838 = 0;
long long DAT_10037840 = 0;
long long DAT_10037848 = 0;
long long DAT_10037850 = 0;
long long DAT_10037858 = 0;
long long DAT_10037860 = 0;
long long DAT_10037868 = 0;
long long DAT_10037870 = 0;
long long DAT_10037878 = 0;
long long DAT_10037880 = 0;
int DAT_10037888 = 0;
long long DAT_10037890 = 0;
long long DAT_10037898 = 0;
long long DAT_100378a0 = 0;
long long DAT_100378a8 = 0;
long long DAT_100378b0 = 0;
long long DAT_100378b8 = 0;
long long DAT_100378c0 = 0;
long long DAT_100378c8 = 0;
long long DAT_100378d0 = 0;
int DAT_100378d8 = 0;
int DAT_100378dc = 0;
long long DAT_100378e0 = 0;
long long DAT_100378e8 = 0;
long long DAT_100378f0 = 0;
long long DAT_100378f8 = 0;
long long DAT_10037900 = 0;
int DAT_10037908 = 0;
long long DAT_10037910 = 0;
long long DAT_10037918 = 0;
long long DAT_10037920 = 0;
long long DAT_10037928 = 0;
long long DAT_10037930 = 0;
int DAT_10037938 = 0;
int DAT_1003793c = 0;
long long DAT_10037940 = 0;
long long DAT_10037948 = 0;
long long DAT_10037950 = 0;
long long DAT_10037958 = 0;
long long DAT_10037960 = 0;
int DAT_10037968 = 0;
long long DAT_10037970 = 0;
long long DAT_10037978 = 0;
long long DAT_10037980 = 0;
long long DAT_10037988 = 0;
long long DAT_10037990 = 0;
long long DAT_10037998 = 0;
long long DAT_100379a0 = 0;
long long DAT_100379a8 = 0;
long long DAT_100379b0 = 0;
long long DAT_100379b8 = 0;
long long DAT_100379c0 = 0;
long long DAT_100379c8 = 0;
long long DAT_100379d0 = 0;
long long DAT_100379d8 = 0;
long long DAT_100379e0 = 0;
long long DAT_100379e8 = 0;
long long DAT_100379f0 = 0;
long long DAT_100379f8 = 0;
long long DAT_10037a00 = 0;
long long DAT_10037a08 = 0;
long long DAT_10037a10 = 0;
long long DAT_10037a18 = 0;
long long DAT_10037a20 = 0;
long long DAT_10037a28 = 0;
long long DAT_10037a30 = 0;
long long DAT_10037a38 = 0;
int DAT_10037af0 = 0;
long long DAT_10037af4 = 0;

/* Forward declarations */
void FUN_10006040(void);
void FUN_10006070(void);
void FUN_10006080(void);
int FUN_100060d0(int param_1);

void OnInit();
void ProcessScenary();




void FUN_10006040(void)

{
  FUN_10006080();
  return;
}





void FUN_10006070(void)

{
  return;
}





void FUN_10006080(void)

{
  return;
}





int __cdecl FUN_100060d0(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_10037af0;
  DAT_10037af0 = param_1;
  return uVar1;
}





void OnInit(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
RegisterUnits(&DAT_10037828,"Gband1");
  RegisterUnits(&DAT_10037820,"Gband2");
  RegisterUnits(&DAT_10037858,"Gholop1");
  RegisterUnits(&DAT_10037850,"Gholop2");
  RegisterUnits(&DAT_10037848,"Gholop3");
  RegisterUnits(&DAT_10037840,"Gholop4");
  RegisterUnits(&DAT_10037838,"Gholop5");
  RegisterUnits(&DAT_10037948,"Ggrin1");
  RegisterUnits(&DAT_10037940,"Ggrin2");
  RegisterUnits(&DAT_10037870,"Gbash1");
  RegisterUnits(&DAT_10037a30,"Ggus1");
  RegisterUnits(&DAT_10037a38,"Ggus2");
  RegisterUnits(&DAT_100377f0,"Gkon1");
  RegisterUnits(&DAT_100377f8,"Gkon2");
  RegisterZone(&DAT_10037960,"Zband0");
  RegisterZone(&DAT_100379f0,"Zband00");
  RegisterZone(&DAT_10037950,"Zband1");
  RegisterZone(&DAT_100379f8,"Zband1a");
  RegisterZone(&DAT_10037a00,"Zband1b");
  RegisterZone(&DAT_10037958,"Zband2");
  RegisterZone(&DAT_10037a08,"Zband2a");
  RegisterZone(&DAT_10037a10,"Zband2b");
  RegisterZone(&DAT_10037910,"Ztalk1");
  RegisterZone(&DAT_100379b8,"Zgen1");
  RegisterZone(&DAT_100379c0,"Zgen2");
  RegisterZone(&DAT_100379c8,"Zgen3");
  RegisterZone(&DAT_100379d0,"Zgen4");
  RegisterZone(&DAT_10037980,"Zattack1");
  RegisterZone(&DAT_10037988,"Zattack2");
  RegisterZone(&DAT_10037970,"Zattack3");
  RegisterZone(&DAT_10037978,"Zattack4");
  RegisterZone(&DAT_100379a0,"Zattack5");
  RegisterZone(&DAT_100379a8,"Zattack6");
  RegisterZone(&DAT_10037990,"Zattack7");
  RegisterZone(&DAT_10037998,"Zattack8");
  RegisterZone(&DAT_100379b0,"Zattack9");
  RegisterZone(&DAT_10037a28,"Zattack10");
  RegisterZone(&DAT_10037a20,"Zattack11");
  RegisterZone(&DAT_10037a18,"Zattack12");
  RegisterZone(&DAT_100377b0,"Zotxod1");
  RegisterZone(&DAT_100377b8,"Zotxod2");
  RegisterUnitType(&DAT_10037830,"Dragun_18_DIP(en)");
  RegisterUnitType(&DAT_10037930,"Mortira_b(en)");
  RegisterUnitType(&DAT_100377d8,"Krestian_Sved(en)");
  RegisterUnitType(&DAT_100377e8,"Krestian_Sved(fr)");
  RegisterUnitType(&DAT_10037808,"WALL_EV(DA)");
  RegisterUnitType(&DAT_10037920,"WALL_UKR(DA)");
  RegisterUnitType(&DAT_10037810,"WALL_EV(en)");
  RegisterUnitType(&DAT_10037928,"WALL_UKR(en)");
  RegisterUnitType(&DAT_10037818,"WALL_EV(fr)");
  RegisterUnitType(&DAT_10037918,"WALL_UKR(fr)");
  RegisterUnitType(&DAT_10037860,"Center_British(en)");
  RegisterUnitType(&DAT_10037868,"Center_France(fr)");
  RegisterVar(&DAT_100377c8,8);
  RegisterVar(&DAT_100377c0,8);
  RegisterVar(&DAT_100377e0,8);
  RegisterVar(&DAT_100377d0,8);
  RegisterVar(&DAT_10037790,8);
  RegisterVar(&DAT_10037788,8);
  RegisterVar(&DAT_100377a0,8);
  RegisterVar(&DAT_10037798,8);
  RegisterVar(&DAT_100377a8,8);
  RegisterVar(&DAT_10037880,8);
  RegisterVar(&DAT_10037878,8);
  RegisterVar(&DAT_100378b8,8);
  RegisterVar(&DAT_100378b0,8);
  RegisterVar(&DAT_100378d0,8);
  RegisterVar(&DAT_100378c0,8);
  RegisterVar(&DAT_10037898,8);
  RegisterVar(&DAT_10037890,8);
  RegisterVar(&DAT_100378a8,8);
  RegisterVar(&DAT_100378a0,8);
  RegisterVar(&DAT_100378c8,8);
  RegisterVar(&DAT_10037888,4);
  RegisterVar(&DAT_100378d8,4);
  RegisterVar(&DAT_10037908,4);
  RegisterVar(&DAT_10037938,4);
  RegisterVar(&DAT_1003793c,4);
  RegisterVar(&DAT_10037968,4);
  RegisterVar(&DAT_100378dc,4);
  RegisterFormation(&DAT_100379e8,"#LINE5");
  RegisterFormation(&DAT_100378e8,"#LINE20PUS");
  RegisterFormation(&DAT_100378f8,"#LINE30PUS");
  RegisterFormation(&DAT_10037900,"#LINE40PUS");
  RegisterFormation(&DAT_100378f0,"#LINE15PUS");
  RegisterFormation(&DAT_100378e0,"#LINE10PUS");
  RegisterFormation(&DAT_100379e0,"#LINE3");
  RegisterFormation(&DAT_10037778,"#SHIPS3");
  RegisterFormation(&DAT_10037780,"#SHIPS5");
  RegisterFormation(&DAT_10037800,"#ALONE");
  RegisterDynGroup(&DAT_100377c8);
  RegisterDynGroup(&DAT_100377c0);
  RegisterDynGroup(&DAT_100377e0);
  RegisterDynGroup(&DAT_100377d0);
  RegisterDynGroup(&DAT_10037790);
  RegisterDynGroup(&DAT_10037788);
  RegisterDynGroup(&DAT_100377a0);
  RegisterDynGroup(&DAT_10037798);
  RegisterDynGroup(&DAT_100377a8);
  RegisterDynGroup(&DAT_10037880);
  RegisterDynGroup(&DAT_10037878);
  RegisterDynGroup(&DAT_100378b8);
  RegisterDynGroup(&DAT_100378b0);
  RegisterDynGroup(&DAT_100378d0);
  RegisterDynGroup(&DAT_100378c0);
  RegisterDynGroup(&DAT_10037898);
  RegisterDynGroup(&DAT_10037890);
  RegisterDynGroup(&DAT_100378a8);
  RegisterDynGroup(&DAT_100378a0);
  RegisterDynGroup(&DAT_100378c8);
  RegisterDynGroup(&DAT_100379d8);
  SetPlayerName(1,"ENGLAND");
  SetPlayerName(2,"FRANCE");
  SetPlayerName(5,"BANDITS");
  ChangeFriends(1,0x66);
  ChangeFriends(2,0x66);
  ChangeFriends(5,0x66);
  EnableUnit(0,&DAT_10037808,0);
  EnableUnit(0,&DAT_10037920,0);
  EnableUnit(0,&DAT_10037810,0);
  EnableUnit(0,&DAT_10037928,0);
  EnableUnit(0,&DAT_10037818,0);
  EnableUnit(0,&DAT_10037918,0);
  EnableUnit(0,&DAT_100377d8,0);
  EnableUnit(0,&DAT_100377e8,0);
  EnableUnit(0,&DAT_10037860,0);
  EnableUnit(0,&DAT_10037868,0);
  DVar1 = time(NULL);
  srand(DVar1);
  uStack_8 = 0x10001d6d;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  long long lVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  unsigned int local_14;
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
    SetDestPoint(&DAT_100377f0,&DAT_100377b0);
    SetDestPoint(&DAT_100377f8,&DAT_100377b8);
    local_10 = GetDiff(0);
    switch(local_10) {
    case 0:
      SetResource(0,3,15000);
      SetResource(0,0,15000);
      SetResource(0,2,15000);
      SetResource(0,1,15000);
      SetResource(0,5,15000);
      SetResource(0,4,15000);
      SelectUnits(&DAT_10037870,0);
      SelectUnits(&DAT_10037948,1);
      SelectUnits(&DAT_10037940,1);
      SelectUnits(&DAT_10037a30,1);
      SelectUnits(&DAT_10037a38,1);
      SelErase(5);
      DAT_10037888 = 1;
      DAT_100378d8 = 1;
      DAT_10037908 = 1;
      DAT_10037938 = 1;
      DAT_1003793c = 1;
      DAT_10037968 = 1;
      break;
    case 1:
      SetResource(0,3,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      SetResource(0,1,10000);
      SetResource(0,5,10000);
      SetResource(0,4,10000);
      SelectUnits(&DAT_10037948,0);
      SelectUnits(&DAT_10037940,1);
      SelectUnits(&DAT_10037a30,1);
      SelectUnits(&DAT_10037a38,1);
      SelErase(5);
      DAT_10037888 = 2;
      DAT_100378d8 = 2;
      DAT_10037908 = 1;
      DAT_10037938 = 1;
      DAT_1003793c = 1;
      DAT_10037968 = 1;
      break;
    case 2:
      SetResource(0,3,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      SetResource(0,1,7000);
      SetResource(0,5,7000);
      SetResource(0,4,7000);
      SelectUnits(&DAT_10037a30,0);
      SelectUnits(&DAT_10037a38,1);
      SelErase(5);
      DAT_10037888 = 3;
      DAT_100378d8 = 3;
      DAT_10037908 = 5;
      DAT_10037938 = 3;
      DAT_1003793c = 2;
      DAT_10037968 = 1;
      break;
    case 3:
      SetResource(0,3,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      SetResource(0,1,5000);
      SetResource(0,5,5000);
      SetResource(0,4,5000);
      DAT_10037888 = 4;
      DAT_100378d8 = 4;
      DAT_10037908 = 6;
      DAT_10037938 = 4;
      DAT_1003793c = 2;
      DAT_10037968 = 2;
    }
    RunTimer(1,500);
    RunTimer(2,6000);
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 5000);
    InitialUpgrade("Gholop1","Melnica(DA)GETRES");
    InitialUpgrade("Gholop1","MAINDA");
    InitialUpgrade("Gholop1","Melnica(DA)GETRES2");
    InitialUpgrade("Gholop1","KUZ01DA");
    InitialUpgrade("Gholop1","AKA01DA");
    InitialUpgrade("Gholop1","AKA02DA");
    InitialUpgrade("Gholop1","AKA03DA");
    InitialUpgrade("Gholop1","AKA04DA");
    InitialUpgrade("Gholop1","AKA10DA");
    InitialUpgrade("Gholop2","Melnica(en)GETRES");
    InitialUpgrade("Gholop2","MAINEN");
    InitialUpgrade("Gholop2","Melnica(en)GETRES2");
    InitialUpgrade("Gholop2","KUZ01EN");
    InitialUpgrade("Gholop2","AKA01EN");
    InitialUpgrade("Gholop2","AKA02EN");
    InitialUpgrade("Gholop2","AKA03EN");
    InitialUpgrade("Gholop2","AKA04EN");
    InitialUpgrade("Gholop2","AKA10EN");
    InitialUpgrade("Gholop4","Melnica(fr)GETRES");
    InitialUpgrade("Gholop4","MAINFR");
    InitialUpgrade("Gholop4","Melnica(fr)GETRES2");
    InitialUpgrade("Gholop4","KUZ01FR");
    InitialUpgrade("Gholop4","AKA01FR");
    InitialUpgrade("Gholop4","AKA02FR");
    InitialUpgrade("Gholop4","AKA03FR");
    InitialUpgrade("Gholop4","AKA04FR");
    InitialUpgrade("Gholop4","AKA10FR");
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      SelectUnits(&DAT_10037850,0);
      SelErase(1);
    }
    else {
      SelectUnits(&DAT_10037848,0);
      SelErase(1);
    }
    ClearSelection(1);
    uVar1 = rand();
    if ((uVar1 & 1) == 0) {
      SelectUnits(&DAT_10037840,0);
      SelErase(2);
    }
    else {
      SelectUnits(&DAT_10037838,0);
      SelErase(2);
    }
    iVar4 = rand();
    RunTimer(6,iVar4 % 8000 + 4000);
    ClearSelection(2);
    SetResource(1,3,5000);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    SetResource(1,1,5000);
    SetResource(1,5,5000);
    SetResource(1,4,5000);
    uVar2 = GetDiff(0);
    StartAI(1,"ENGLAND.0",0,1,2,uVar2);
    SetResource(2,3,5000);
    SetResource(2,0,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,5,5000);
    SetResource(2,4,5000);
    uVar2 = GetDiff(0);
    StartAI(2,"FRANCE.0",0,1,2,uVar2);
  }
  SaveSelectedUnits(0,&DAT_100379d8,0);
  ClearSelection(0);
  uVar1 = TimerDone(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(6);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x10);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x11);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(6,0);
          SetTrigg(8,0);
          SetTrigg(0xd,0);
          local_14 = rand();
          local_14 = local_14 & -2147483645;
          if ((intptr_t)local_14 < 0) {
            local_14 = (local_14 - 1 | -4) + 1;
          }
          switch(local_14) {
          case 0:
            CreateObject0(&DAT_10037790,&DAT_10037800,&DAT_10037830,0,&DAT_100379b8,0xc3);
            iVar4 = GetTotalAmount0(&DAT_10037850);
            if (iVar4 < 1) {
              SelectUnits(&DAT_10037790,0);
              SelSendTo(0,&DAT_100379a0,0,0);
            }
            else {
              SelectUnits(&DAT_10037790,0);
              SelSendTo(0,&DAT_10037970,0x82,0);
            }
            break;
          case 1:
            CreateObject0(&DAT_10037790,&DAT_10037800,&DAT_10037830,0,&DAT_100379c0,0xc3);
            iVar4 = GetTotalAmount0(&DAT_10037840);
            if (iVar4 < 1) {
              SelectUnits(&DAT_10037790,0);
              SelSendTo(0,&DAT_100379b0,0x1e,0);
            }
            else {
              SelectUnits(&DAT_10037790,0);
              SelSendTo(0,&DAT_10037990,100,0);
            }
            break;
          case 2:
            CreateObject0(&DAT_10037790,&DAT_10037800,&DAT_10037830,0,&DAT_100379c8,0xc3);
            iVar4 = GetTotalAmount0(&DAT_10037840);
            if (iVar4 < 1) {
              SelectUnits(&DAT_10037790,0);
              SelSendTo(0,&DAT_100379b0,0x1e,0);
            }
            else {
              SelectUnits(&DAT_10037790,0);
              SelSendTo(0,&DAT_10037990,100,0);
            }
            break;
          case 3:
            CreateObject0(&DAT_10037790,&DAT_10037800,&DAT_10037830,0,&DAT_100379d0,0xc3);
            iVar4 = GetTotalAmount0(&DAT_10037850);
            if (iVar4 < 1) {
              SelectUnits(&DAT_10037790,0);
              SelSendTo(0,&DAT_100379a0,0,0);
            }
            else {
              SelectUnits(&DAT_10037790,0);
              SelSendTo(0,&DAT_10037970,0x82,0);
            }
          }
          DAT_100378dc = GetResource(0,1);
          iVar4 = GetDiff(0);
          local_18 = DAT_100378dc * (iVar4 + 1);
          lVar6 = 0;
          AddResource(0,1,(int)lVar6);
          RunTimer(7,0x44c);
        }
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(7);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDoneFirst(7);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetTotalAmount0(&DAT_10037790);
        if (iVar4 != 0) goto LAB_1000337b;
      }
      iVar4 = GetDiff(0);
      local_1c = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      ShowPageParam("#PAGE4",(int)lVar6);
      iVar4 = GetTotalAmount0(&DAT_10037790);
      if (0 < iVar4) {
        SelectUnits(&DAT_10037790,0);
        SelDie(0);
      }
      iVar4 = GetDiff(0);
      local_20 = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      AddResource(0,1,(int)lVar6);
      SetTrigg(6,0);
      iVar4 = rand();
      RunTimer(6,iVar4 % 8000 + 4000);
    }
  }
LAB_1000337b:
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10037970,&DAT_10037790);
    if (0 < iVar4) {
      SetTrigg(7,0);
      iVar4 = GetUnitsByNation(&DAT_10037790,7);
      if (iVar4 < 1) {
        SelectUnits(&DAT_10037790,0);
        SelChangeNation(0,6);
      }
      else {
        SelectUnits(&DAT_10037790,0);
        SelChangeNation(7,6);
      }
      SelectUnits(&DAT_10037790,0);
      SelSendTo(6,&DAT_10037a20,0x8c,0);
      SelSendTo(6,&DAT_10037978,0,2);
      iVar4 = GetDiff(0);
      local_24 = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      ShowPageParam("#PAGE5",(int)lVar6);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100379a0,&DAT_10037790);
    if (0 < iVar4) {
      SetTrigg(7,0);
      iVar4 = GetUnitsByNation(&DAT_10037790,7);
      if (iVar4 < 1) {
        SelectUnits(&DAT_10037790,0);
        SelChangeNation(0,6);
      }
      else {
        SelectUnits(&DAT_10037790,0);
        SelChangeNation(7,6);
      }
      SelectUnits(&DAT_10037790,0);
      SelSendTo(6,&DAT_10037a18,0xdc,0);
      SelSendTo(6,&DAT_100379a8,0,2);
      iVar4 = GetDiff(0);
      local_28 = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      ShowPageParam("#PAGE5",(int)lVar6);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10037990,&DAT_10037790);
    if (0 < iVar4) {
      SetTrigg(7,0);
      iVar4 = GetUnitsByNation(&DAT_10037790,7);
      if (iVar4 < 1) {
        SelectUnits(&DAT_10037790,0);
        SelChangeNation(0,6);
      }
      else {
        SelectUnits(&DAT_10037790,0);
        SelChangeNation(7,6);
      }
      SelectUnits(&DAT_10037790,0);
      SelSendTo(6,&DAT_10037998,0,0);
      iVar4 = GetDiff(0);
      local_2c = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      ShowPageParam("#PAGE5",(int)lVar6);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100379b0,&DAT_10037790);
    if (0 < iVar4) {
      SetTrigg(7,0);
      iVar4 = GetUnitsByNation(&DAT_10037790,7);
      if (iVar4 < 1) {
        SelectUnits(&DAT_10037790,0);
        SelChangeNation(0,6);
      }
      else {
        SelectUnits(&DAT_10037790,0);
        SelChangeNation(7,6);
      }
      SelectUnits(&DAT_10037790,0);
      SelSendTo(6,&DAT_10037a28,0,0);
      iVar4 = GetDiff(0);
      local_30 = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      ShowPageParam("#PAGE5",(int)lVar6);
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetTotalAmount0(&DAT_10037790);
    if (iVar4 == 0) {
      ShowPage("#PAGE6");
      iVar4 = GetDiff(0);
      local_34 = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      AddResource(0,1,(int)lVar6);
      SetTrigg(6,0);
      SetTrigg(7,0);
      iVar4 = rand();
      RunTimer(6,iVar4 % 8000 + 4000);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10037978,&DAT_10037790);
    if (0 < iVar4) {
      SetTrigg(8,0);
      ShowPage("#PAGE7");
      iVar4 = GetDiff(0);
      local_38 = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      AddResource(1,1,(int)lVar6);
      SelectUnits(&DAT_10037790,0);
      SelChangeNation(6,1);
      SetTrigg(6,0);
      SetTrigg(7,0);
      iVar4 = rand();
      RunTimer(6,iVar4 % 8000 + 4000);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_100379a8,&DAT_10037790);
    if (0 < iVar4) {
      SetTrigg(8,0);
      ShowPage("#PAGE7");
      iVar4 = GetDiff(0);
      local_3c = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      AddResource(1,1,(int)lVar6);
      SelectUnits(&DAT_10037790,0);
      SelChangeNation(6,1);
      SetTrigg(6,0);
      SetTrigg(7,0);
      iVar4 = rand();
      RunTimer(6,iVar4 % 8000 + 4000);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10037998,&DAT_10037790);
    if (0 < iVar4) {
      SetTrigg(8,0);
      ShowPage("#PAGE7");
      iVar4 = GetDiff(0);
      local_40 = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      AddResource(2,1,(int)lVar6);
      SelectUnits(&DAT_10037790,0);
      SelChangeNation(6,2);
      SetTrigg(6,0);
      SetTrigg(7,0);
      iVar4 = rand();
      RunTimer(6,iVar4 % 8000 + 4000);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10037a28,&DAT_10037790);
    if (0 < iVar4) {
      SetTrigg(8,0);
      ShowPage("#PAGE7");
      iVar4 = GetDiff(0);
      local_44 = DAT_100378dc * (iVar4 + 1);
      lVar6 = 0;
      AddResource(2,1,(int)lVar6);
      SelectUnits(&DAT_10037790,0);
      SelChangeNation(6,2);
      SetTrigg(6,0);
      SetTrigg(7,0);
      iVar4 = rand();
      RunTimer(6,iVar4 % 8000 + 4000);
    }
  }
  ClearSelection(0);
  iVar4 = GetTotalAmount0(&DAT_100379d8);
  if (0 < iVar4) {
    SelectUnits(&DAT_100379d8,0);
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x60,0);
      ShowPage("#PAGE0A");
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10037960,0);
      if (iVar4 < 1) {
        iVar4 = GetUnitsAmount0(&DAT_100379f0,0);
        if (iVar4 < 1) goto LAB_100040b4;
      }
    }
    SetTrigg(0x5f,0);
    ShowPage("#PAGE2");
    EnableMission(0x44);
    EnableMission(0x46);
    SetLightSpot(&DAT_10037950,3,1);
    SetLightSpot(&DAT_10037958,3,2);
  }
LAB_100040b4:
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10037950,&DAT_10037828);
    iVar3 = GetTotalAmount0(&DAT_10037828);
    if (iVar4 < iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10037828,0);
      SelSendTo(5,&DAT_10037a00,0x41,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10037950,&DAT_10037828);
    iVar3 = GetTotalAmount0(&DAT_10037828);
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      SelectUnits(&DAT_10037828,0);
      Patrol(5,&DAT_100379f8,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10037828);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10037950,0);
      if (0 < iVar4) {
        SetTrigg(2,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -1000 + 10000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -1000 + 10000);
        DisableMission(0x46);
        EnableMission(0x47);
      }
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_10037958,&DAT_10037820);
    iVar3 = GetTotalAmount0(&DAT_10037820);
    if (iVar4 < iVar3) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_10037820,0);
      SelSendTo(5,&DAT_10037a10,0xaa,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount1(&DAT_10037958,&DAT_10037820);
    iVar3 = GetTotalAmount0(&DAT_10037820);
    if (iVar4 == iVar3) {
      SetTrigg(0x14,0);
      SelectUnits(&DAT_10037820,0);
      Patrol(5,&DAT_10037a08,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10037820);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10037958,0);
      if (0 < iVar4) {
        SetTrigg(0x15,0);
        iVar4 = GetDiff(0);
        ShowPageParam("#PAGE0",iVar4 * -1000 + 12000);
        iVar4 = GetDiff(0);
        AddResource(0,1,iVar4 * -1000 + 12000);
        DisableMission(0x44);
        EnableMission(0x45);
      }
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x62,0);
      iVar4 = GetResource(0,3);
      if (iVar4 < 1) {
        ShowPage("#PAGE1A");
      }
      else {
        ShowPage("#PAGE1");
      }
      LooseGame();
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10037910,0);
    if (iVar4 < 5) {
      SetTrigg(0x62,0);
      ShowPage("#PAGE1B");
      LooseGame();
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x15);
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
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      for (local_8 = 0; local_8 < DAT_10037888; local_8 = local_8 + 1) {
        ProduceUnitFast(&DAT_100377f0,&DAT_10037930,&DAT_100377c8,1);
      }
    }
    uVar1 = Trigg(10);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_100377f0);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(3,500);
        SetTrigg(10,0);
      }
    }
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(3);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(4,0);
          SetTrigg(10,0);
          SetTrigg(9,0);
          FreeTimer(3);
          RunTimer(8,10000);
          RemoveGroup(&DAT_100377c8,&DAT_100377e0);
          SelectUnits(&DAT_100377e0,0);
          SetStandGround(5,1);
          ClearSelection(5);
        }
      }
    }
    AttackBuildingsInZone(&DAT_100377e0,&DAT_10037980,0);
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetTotalAmount0(&DAT_100377e0);
        if (iVar4 != 0) {
          uVar1 = TimerDoneFirst(8);
          if ((uVar1 & 0xff) == 0) goto LAB_10004a30;
        }
        FreeTimer(8);
        SetTrigg(4,0);
      }
    }
  }
LAB_10004a30:
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      for (local_c = 0; local_c < DAT_100378d8; local_c = local_c + 1) {
        ProduceUnitFast(&DAT_100377f8,&DAT_10037930,&DAT_100377c0,1);
      }
    }
    uVar1 = Trigg(0xc);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = CheckProduction(&DAT_100377f8);
      if ((uVar1 & 0xff) != 0) {
        RunTimer(4,500);
        SetTrigg(0xc,0);
      }
    }
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(5);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(4);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(5,0);
          SetTrigg(0xc,0);
          SetTrigg(0xb,0);
          FreeTimer(4);
          RunTimer(5,10000);
          RemoveGroup(&DAT_100377c0,&DAT_100377d0);
          SelectUnits(&DAT_100377d0,0);
          SetStandGround(5,1);
          ClearSelection(5);
        }
      }
    }
    AttackBuildingsInZone(&DAT_100377d0,&DAT_10037988,0);
    uVar1 = Trigg(0x5f);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(5);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetTotalAmount0(&DAT_100377d0);
        if (iVar4 != 0) {
          uVar1 = TimerDoneFirst(5);
          if ((uVar1 & 0xff) == 0) goto LAB_10004d1d;
        }
        FreeTimer(5);
        SetTrigg(5,0);
      }
    }
  }
LAB_10004d1d:
  uVar1 = TimerDoneFirst(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x15);
      if ((uVar1 & 0xff) == 0) goto LAB_10004f41;
    }
    local_48 = GetDiff(0);
    switch(local_48) {
    case 0:
      DAT_10037888 = DAT_10037888 + 1;
      DAT_100378d8 = DAT_100378d8 + 1;
      DAT_10037908 = DAT_10037908 + 1;
      DAT_10037938 = DAT_10037938 + 1;
      DAT_1003793c = DAT_1003793c + 1;
      DAT_10037968 = DAT_10037968 + 1;
      break;
    case 1:
      DAT_10037888 = DAT_10037888 + 1;
      DAT_100378d8 = DAT_100378d8 + 1;
      DAT_10037908 = DAT_10037908 + 3;
      DAT_10037938 = DAT_10037938 + 2;
      DAT_1003793c = DAT_1003793c + 1;
      DAT_10037968 = DAT_10037968 + 2;
      break;
    case 2:
      DAT_10037888 = DAT_10037888 + 1;
      DAT_100378d8 = DAT_100378d8 + 1;
      DAT_10037908 = DAT_10037908 + 4;
      DAT_10037938 = DAT_10037938 + 4;
      DAT_1003793c = DAT_1003793c + 2;
      DAT_10037968 = DAT_10037968 + 1;
      break;
    case 3:
      DAT_10037888 = DAT_10037888 + 2;
      DAT_100378d8 = DAT_100378d8 + 2;
      DAT_10037908 = DAT_10037908 + 5;
      DAT_10037938 = DAT_10037938 + 5;
      DAT_1003793c = DAT_1003793c + 3;
      DAT_10037968 = DAT_10037968 + 2;
    }
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 5000);
  }
LAB_10004f41:
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x10,0);
      ShowPage("#PAGE8A");
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x11,0);
      ShowPage("#PAGE8B");
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x11);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0xf,0);
        ShowPage("#PAGE8");
        DisableMission(0x42);
        EnableMission(0x43);
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

#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_10008030 = 0;
long long DAT_1000adf8 = 0;
long long DAT_1000ae00 = 0;
long long DAT_1000ae08 = 0;
long long DAT_1000ae10 = 0;
long long DAT_1000ae18 = 0;
long long DAT_1000ae20 = 0;
long long DAT_1000ae28 = 0;
long long DAT_1000ae30 = 0;
long long DAT_1000ae38 = 0;
long long DAT_1000ae40 = 0;
long long DAT_1000ae48 = 0;
long long DAT_1000ae50 = 0;
long long DAT_1000ae58 = 0;
long long DAT_1000ae60 = 0;
long long DAT_1000ae68 = 0;
long long DAT_1000ae70 = 0;
long long DAT_1000ae78 = 0;
long long DAT_1000ae80 = 0;
long long DAT_1000ae88 = 0;
long long DAT_1000ae90 = 0;
long long DAT_1000ae98 = 0;
long long DAT_1000aea0 = 0;
long long DAT_1000aea8 = 0;
long long DAT_1000aeb0 = 0;
int DAT_1000aeb8 = 0;
int DAT_1000aebc = 0;
long long DAT_1000aec0 = 0;
long long DAT_1000aec8 = 0;
long long DAT_1000aed0 = 0;
long long DAT_1000aed8 = 0;
long long DAT_1000aee0 = 0;
long long DAT_1000aee8 = 0;
long long DAT_1000aef0 = 0;
long long DAT_1000aef8 = 0;
long long DAT_1000af00 = 0;
long long DAT_1000af08 = 0;
long long DAT_1000af10 = 0;
long long DAT_1000af18 = 0;
long long DAT_1000af20 = 0;
long long DAT_1000af28 = 0;
long long DAT_1000af30 = 0;
int DAT_1000af38 = 0;
long long DAT_1000af40 = 0;
long long DAT_1000af48 = 0;
long long DAT_1000af50 = 0;
long long DAT_1000af58 = 0;
long long DAT_1000af60 = 0;
int DAT_1000af68 = 0;
long long DAT_1000af70 = 0;
long long DAT_1000af78 = 0;
long long DAT_1000af80 = 0;
long long DAT_1000af88 = 0;
long long DAT_1000af90 = 0;
long long DAT_1000af98 = 0;
long long DAT_1000afa0 = 0;
long long DAT_1000afa8 = 0;
long long DAT_1000afb0 = 0;
long long DAT_1000afb8 = 0;
long long DAT_1000afc0 = 0;
long long DAT_1000afc8 = 0;
long long DAT_1000afd0 = 0;
long long DAT_1000afd8 = 0;
long long DAT_1000afe0 = 0;
long long DAT_1000afe8 = 0;
long long DAT_1000aff0 = 0;
long long DAT_1000aff8 = 0;
long long DAT_1000b000 = 0;
long long DAT_1000b008 = 0;
long long DAT_1000b010 = 0;
long long DAT_1000b018 = 0;
long long DAT_1000b020 = 0;
long long DAT_1000b028 = 0;
long long DAT_1000b030 = 0;
long long DAT_1000b038 = 0;
long long DAT_1000b040 = 0;
long long DAT_1000b048 = 0;
int DAT_1000b054 = 0;

/* Forward declarations */
BOOL FUN_10001fb0(int param_1);
int FUN_10001ff0(int param_1,int param_2,int param_3,int param_4);
int FUN_10002150(int param_1,int param_2,int param_3,int param_4,int param_5);
BOOL FUN_100021c0(int param_1);
void FUN_10002230(int param_1,int param_2,int param_3);
void FUN_10002290(int param_1,int param_2,int param_3,int param_4,unsigned int param_5);

void OnInit();
void ProcessScenary();


BOOL __cdecl FUN_10001fb0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1);
  while (iVar1 != 0) {
    RemoveUnitFromGroup(param_1,0);
    iVar1 = GetTotalAmount0(param_1);
  }
  iVar1 = GetTotalAmount0(param_1);
  return (BOOL)('\x01' - (iVar1 != 0));
}





int __cdecl FUN_10001ff0(int param_1,int param_2,int param_3,int param_4)

{
  int extraout_var;
  int uVar1;
  int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  char local_3d;
  int local_3c;
  int local_38;
  short uStack_34;
  short uStack_32;
  unsigned int auStack_2c [5];
  short uStack_18;
  short uStack_14;
  
  uVar3 = 0;
  local_38 = 0xffff;
  local_3d = '\0';
  local_3c = 0;
  do {
    if (((long long *)&DAT_10008030)[local_3c] == '\x01') {
      ClearSelection(local_3c);
      iVar4 = param_3;
      iVar5 = param_2;
      if (0 < param_3) {
        do {
          SelectUnitsType(iVar5,local_3c,1);
          iVar4 = iVar4 + -1;
          iVar5 = iVar5 + 8;
        } while (iVar4 != 0);
      }
      FUN_10001fb0(param_1);
      SaveSelectedUnits(local_3c,param_1,0);
      ClearSelection(local_3c);
      iVar4 = GetTotalAmount0(param_1);
      if (iVar4 != 0) {
        CreateZoneNearGroup(&uStack_34,param_4,param_1,100);
      }
      iVar5 = 0;
      iVar4 = GetTotalAmount0(param_1);
      if (0 < iVar4) {
        do {
          GetUnitInfo(param_1,iVar5,auStack_2c);
          uStack_34 = uStack_18;
          uStack_32 = uStack_14;
          iVar4 = GetTopDst(param_4,&uStack_34);
          if (iVar4 < local_38) {
            local_38 = GetTopDst(param_4,&uStack_34);
            uVar3 = auStack_2c[0] & 0xffff;
            local_3d = '\x01';
          }
          iVar5 = iVar5 + 1;
          iVar4 = GetTotalAmount0(param_1);
        } while (iVar5 < iVar4);
      }
    }
    local_3c = local_3c + 1;
  } while (local_3c < 8);
  FUN_10001fb0(param_1);
  uVar2 = extraout_var;
  if (local_3d != '\0') {
    uVar1 = InsertUnitToGroup(0,param_1,uVar3);
    uVar2 = (int)((unsigned int)uVar1 >> 8);
  }
  return (int)local_3d;
}





int __cdecl
FUN_10002150(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
  int uVar3;
  char auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    UnitsCenter(auStack_8,param_4,100);
    uVar2 = FUN_10001ff0(param_1,param_2,param_3,auStack_8);
    if ((char)uVar2 != '\0') {
      SelectUnits(param_4,0);
      SelAttackGroup(param_5,param_1);
      return (int)1;
    }
  }
  return uVar2 & 0xffffff00;
}





BOOL __cdecl FUN_100021c0(int param_1)

{
  BOOL bVar1;
  int iVar2;
  int iVar3;
  char auStack_8 [8];
  
  bVar1 = 0;
  iVar2 = GetTotalAmount0(param_1);
  if (iVar2 != 0) {
    UnitsCenter(auStack_8,param_1,500);
    iVar2 = 0;
    do {
      if ((((long long *)&DAT_10008030)[iVar2] == '\x01') &&
         ((bVar1 || (iVar3 = GetUnitsAmount0(auStack_8,iVar2), iVar3 != 0)))) {
        bVar1 = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  return !bVar1;
}





void __cdecl FUN_10002230(int param_1,int param_2,int param_3)

{
  int iVar1;
  char auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    iVar1 = GetTotalAmount0(param_2);
    if (iVar1 != 0) {
      UnitsCenter(auStack_8,param_1,500);
      SelectUnits(param_1,0);
      SelSendAndKill(param_3,auStack_8,0,0);
    }
  }
  return;
}





void __cdecl
FUN_10002290(int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int local_3c [5];
  int local_28;
  int local_24;
  unsigned short local_10;
  unsigned short uStack_e;
  unsigned int local_8;
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    SelectUnitsType(param_5,param_4,0);
    FUN_10001fb0(param_3);
    SaveSelectedUnits(param_4,param_3,0);
    ClearSelection(param_4);
    iVar1 = GetTotalAmount0(param_3);
    if (iVar1 != 0) {
      uVar5 = 0xffff;
      param_5 = 0xffff;
      UnitsCenter(&local_10,param_1,0x32);
      param_4 = 0;
      iVar1 = GetTotalAmount0(param_3);
      if (0 < iVar1) {
        do {
          GetUnitInfo(param_3,param_4,local_3c);
          local_8 = local_28 - (unsigned int)local_10;
          uVar2 = local_24 - (unsigned int)uStack_e;
          uVar3 = local_8;
          if ((int)local_8 < 0) {
            uVar3 = -local_8;
          }
          if ((int)uVar2 < 0) {
            uVar2 = -uVar2;
          }
          uVar4 = uVar3;
          if (uVar3 <= uVar2) {
            uVar4 = uVar2;
          }
          uVar3 = uVar4 + uVar3 + uVar2 >> 1;
          if (uVar3 < param_5) {
            uVar5 = local_3c[0] & 0xffff;
            param_5 = uVar3;
          }
          param_4 = param_4 + 1;
          iVar1 = GetTotalAmount0(param_3);
        } while (param_4 < iVar1);
      }
      FUN_10001fb0(param_3);
      if (uVar5 < 0xffff) {
        InsertUnitToGroup(0,param_3,uVar5);
      }
      SelectUnits(param_1,0);
      SelAttackGroup(param_2,param_3);
    }
  }
  return;
}





void OnInit(void)

{
  int uVar1;
  
                    
  RegisterVar(&DAT_10008030,8);
  RegisterUnits(&DAT_1000afa0,"GFortN1Easy");
  RegisterUnits(&DAT_1000af48,"GFortN2Easy");
  RegisterUnits(&DAT_1000af40,"GFortN1Normal");
  RegisterUnits(&DAT_1000af88,"GFortN2Normal");
  RegisterUnits(&DAT_1000af08,"GFortN1Hard");
  RegisterUnits(&DAT_1000ae98,"GFortN2Hard");
  RegisterUnits(&DAT_1000aef0,"GMyFortS");
  RegisterUnits(&DAT_1000aed8,"GMySquard1");
  RegisterUnits(&DAT_1000aec8,"GMySquard2");
  RegisterUnits(&DAT_1000aed0,"GMySquard3");
  RegisterUnits(&DAT_1000aec0,"GMySquard4");
  RegisterUnits(&DAT_1000af00,"GDrur1");
  RegisterUnits(&DAT_1000aef8,"GDrur2");
  RegisterUnits(&DAT_1000b038,"GMyPisant");
  RegisterUnitType(&DAT_1000ae68,"WALL_EV(HO)");
  RegisterUnitType(&DAT_1000ae60,"Kazarma_1_HO(HO)");
  RegisterUnitType(&DAT_1000ae08,"Konushnia_HO(HO)");
  RegisterUnitType(&DAT_1000af30,"Center_Holland(HO)");
  RegisterUnitType(&DAT_1000b030,"Euro_dom(HO)");
  RegisterUnits(&DAT_1000ae70,"GGateF1");
  RegisterUnits(&DAT_1000ae78,"GGateF2");
  RegisterVar(&DAT_1000aeb8,8);
  RegisterVar(&DAT_1000b054,4);
  RegisterDynGroup(&DAT_1000ae20);
  RegisterDynGroup(&DAT_1000ae28);
  RegisterDynGroup(&DAT_1000ae30);
  RegisterDynGroup(&DAT_1000ae38);
  RegisterDynGroup(&DAT_1000ae40);
  RegisterDynGroup(&DAT_1000ae48);
  RegisterDynGroup(&DAT_1000ae50);
  RegisterDynGroup(&DAT_1000ae58);
  RegisterVar(&DAT_1000ae20,0x40);
  RegisterZone(&DAT_1000ae10,"ZCreateF1");
  RegisterZone(&DAT_1000af18,"ZSborF1");
  RegisterUnits(&DAT_1000af50,"GDipF1");
  RegisterDynGroup(&DAT_1000adf8);
  RegisterVar(&DAT_1000adf8,8);
  RegisterUnits(&DAT_1000ae88,"GKuz1");
  RegisterUnits(&DAT_1000ae90,"GKuz2");
  RegisterZone(&DAT_1000ae18,"ZCreateF2");
  RegisterZone(&DAT_1000af20,"ZSborF2");
  RegisterUnits(&DAT_1000af58,"GDipF2");
  RegisterDynGroup(&DAT_1000ae00);
  RegisterVar(&DAT_1000ae00,8);
  RegisterUnitType(&DAT_1000af60,"Grenader(en)");
  RegisterVar(&DAT_1000afb0,0x80);
  RegisterUnitType(&DAT_1000afb0,"Center_Holland(HO)");
  RegisterUnitType(&DAT_1000afb8,"Euro_dom(HO)");
  RegisterUnitType(&DAT_1000afc0,"Melnica(HO)");
  RegisterUnitType(&DAT_1000afc8,"Sclad1(HO)");
  RegisterUnitType(&DAT_1000afd0,"Kuznica_HO(HO)");
  RegisterUnitType(&DAT_1000afd8,"Cercov_HO(HO)");
  RegisterUnitType(&DAT_1000afe0,"Rinok(HO)");
  RegisterUnitType(&DAT_1000afe8,"Bashnia(HO)");
  RegisterUnitType(&DAT_1000aff0,"shahta(HO)");
  RegisterUnitType(&DAT_1000aff8,"shahta_FE(HO)");
  RegisterUnitType(&DAT_1000b000,"shahta_UG(HO)");
  RegisterUnitType(&DAT_1000b008,"Konushnia_HO(HO)");
  RegisterUnitType(&DAT_1000b010,"akademia_HO(HO)");
  RegisterUnitType(&DAT_1000b018,"Dip_korpus_HO(HO)");
  RegisterUnitType(&DAT_1000b020,"Kazarma_1_HO(HO)");
  RegisterUnitType(&DAT_1000b028,"artileri_depo_HO(HO)");
  RegisterVar(&DAT_1000af90,0x10);
  RegisterUnitType(&DAT_1000af90,"WALL_UKR(HO)");
  RegisterUnitType(&DAT_1000af98,"WALL_EV(HO)");
  RegisterDynGroup(&DAT_1000aee0);
  RegisterVar(&DAT_1000aee0,8);
  RegisterDynGroup(&DAT_1000afa8);
  RegisterVar(&DAT_1000afa8,8);
  RegisterVar(&DAT_1000af38,4);
  RegisterVar(&DAT_1000af68,4);
  RegisterUnits(&DAT_1000af80,"GStorage");
  RegisterZone(&DAT_1000aea0,"ZMyW1");
  RegisterZone(&DAT_1000aea8,"ZMyW2");
  RegisterZone(&DAT_1000aeb0,"ZMyW3");
  RegisterZone(&DAT_1000af78,"ZCreateOboz");
  RegisterUnitType(&DAT_1000aee8,"GRUZ(UN)");
  RegisterDynGroup(&DAT_1000af70);
  RegisterVar(&DAT_1000af70,8);
  RegisterFormation(&DAT_1000ae80,"#ALONE");
  RegisterZone(&DAT_1000b048,"ZStartAI2");
  RegisterZone(&DAT_1000b040,"ZStartAI3");
  uVar1 = GetDiff(0);
  switch(uVar1) {
  case 0:
    SelectUnits(&DAT_1000afa0,0);
    SelectUnits(&DAT_1000af48,1);
    SelErase(4);
    ClearSelection(4);
    DAT_1000af38 = 30000;
    DAT_1000aeb8 = 3000;
    DAT_1000aebc = 0x14;
    break;
  case 1:
    SelectUnits(&DAT_1000aec8,0);
    SelectUnits(&DAT_1000af00,1);
    SelErase(1);
    ClearSelection(1);
    SelectUnits(&DAT_1000af40,0);
    SelectUnits(&DAT_1000af88,1);
    SelErase(4);
    ClearSelection(4);
    DAT_1000af38 = 40000;
    DAT_1000aeb8 = 2000;
    DAT_1000aebc = 0x19;
    break;
  case 2:
    SelectUnits(&DAT_1000aed8,0);
    SelectUnits(&DAT_1000aed0,1);
    SelectUnits(&DAT_1000af00,1);
    SelectUnits(&DAT_1000aef8,1);
    SelErase(1);
    ClearSelection(1);
    SelectUnits(&DAT_1000af08,0);
    SelectUnits(&DAT_1000ae98,1);
    SelErase(4);
    ClearSelection(4);
    DAT_1000af38 = 55000;
    DAT_1000aeb8 = 0x5dc;
    DAT_1000aebc = 0x1e;
    break;
  case 3:
    SelectUnits(&DAT_1000aed8,0);
    SelectUnits(&DAT_1000aed0,1);
    SelectUnits(&DAT_1000aec0,1);
    SelectUnits(&DAT_1000af00,1);
    SelectUnits(&DAT_1000aef8,1);
    SelErase(1);
    ClearSelection(1);
    DAT_1000af38 = 70000;
    DAT_1000aeb8 = 1000;
    DAT_1000aebc = 0x23;
  }
  ChangeFriends(0,3);
  ChangeFriends(1,3);
  ChangeFriends(2,0x1c);
  ChangeFriends(3,0x1c);
  ChangeFriends(4,0x1c);
  RegisterUnitType(&DAT_1000af28,"Kozak_loshad_DIP(HO)");
  RegisterUnitType(&DAT_1000af10,"Dragun_18_DIP(HO)");
  SetPlayerName(1,"ALLIES");
  SetPlayerName(2,"SPAIN");
  SetPlayerName(3,"VINECIA");
  SetPlayerName(4,"MECENARY");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  BOOL bVar2;
  int iVar3;
  int uVar4;
  void *pcVar5;
  int iVar6;
  int *puVar7;
  void *pcVar8;
  void *pcVar9;
  int iStack_30;
  unsigned int auStack_2c [11];
  
                    
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    SetTrigg(2,0);
    iVar6 = 0;
    do {
      iVar3 = GetDiff(0);
      SetResource(0,iVar6,(6 - iVar3) * 1000);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    SelectUnits(&DAT_1000aed8,0);
    SelectUnits(&DAT_1000aec8,1);
    SelectUnits(&DAT_1000aed0,1);
    SelectUnits(&DAT_1000aec0,1);
    SelChangeNation(1,0);
    TakeFood(&DAT_1000b038);
    EnableUnit(0,&DAT_1000ae68,0);
    EnableUnit(0,&DAT_1000ae60,0);
    EnableUnit(0,&DAT_1000ae08,0);
    EnableUnit(0,&DAT_1000af30,0);
    EnableUnit(0,&DAT_1000b030,0);
    SelectUnits(&DAT_1000ae70,0);
    SelectUnits(&DAT_1000ae78,1);
    SelOpenGates(4);
    ClearSelection(4);
    RunTimer(1,100);
    RunTimer(2,500);
    SetDestPoint(&DAT_1000af50,&DAT_1000af18);
    SetDestPoint(&DAT_1000af58,&DAT_1000af20);
    GetUnitInfo(&DAT_1000af80,0,auStack_2c);
    DAT_1000af68 = auStack_2c[0] & 0xffff;
    RunTimer(3,700);
    ShowPage("#PAGE2102");
    RunTimer(4,10000);
    EnableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x43);
    EnableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    uVar4 = GetDiff(0);
    switch(uVar4) {
    case 3:
      InitialUpgrade("GKuz1","Grenader(en)ATTACK7");
      InitialUpgrade("GKuz1","Grenader(en)ATTACK6");
    case 2:
      InitialUpgrade("GKuz1","Grenader(en)ATTACK5");
    case 1:
      InitialUpgrade("GKuz1","Grenader(en)ATTACK4");
    case 0:
      InitialUpgrade("GKuz1","Grenader(en)ATTACK3");
    default:
      EnableUnit(0,&DAT_1000af28,0);
      EnableUnit(0,&DAT_1000af10,0);
    }
  }
  cVar1 = TimerDoneFirst(4);
  if (cVar1 != '\0') {
    ShowPage("#PAGE2109");
  }
  iVar6 = GetTotalAmount0(&DAT_1000af50);
  if ((iVar6 != 0) || (iVar6 = GetTotalAmount0(&DAT_1000af58), iVar6 != 0)) {
    cVar1 = TimerDone(2);
    if (cVar1 != '\0') {
      iStack_30 = 0;
      puVar7 = &DAT_1000ae28;
      do {
        if (DAT_1000b054 != 0x14) break;
        iVar6 = GetTotalAmount0(puVar7 + -8);
        if ((iVar6 == 0) && (iVar6 = GetTotalAmount0(puVar7), iVar6 == 0)) {
          DAT_1000b054 = iStack_30;
        }
        puVar7 = puVar7 + 0x10;
        iStack_30 = iStack_30 + 2;
      } while ((int)puVar7 < 0x1000ae68);
      cVar1 = CheckProduction(&DAT_1000af50);
      if ((cVar1 != '\0') && (DAT_1000b054 != 0x14)) {
        ProduceUnit(&DAT_1000af50,&DAT_1000af60,&DAT_1000adf8);
      }
      cVar1 = CheckProduction(&DAT_1000af58);
      if ((cVar1 != '\0') && (DAT_1000b054 != 0x14)) {
        ProduceUnit(&DAT_1000af58,&DAT_1000af60,&DAT_1000ae00);
      }
    }
    iVar6 = GetTotalAmount0(&DAT_1000adf8);
    if ((iVar6 == DAT_1000aebc) || (iVar6 = GetTotalAmount0(&DAT_1000ae00), iVar6 == DAT_1000aebc))
    {
      RemoveGroup(&DAT_1000adf8,((unsigned char *)&DAT_1000ae20) + DAT_1000b054 * 8);
      RemoveGroup(&DAT_1000ae00,((unsigned char *)&DAT_1000ae28) + DAT_1000b054 * 8);
      DAT_1000b054 = 0x14;
      RunTimer(2,DAT_1000aeb8);
    }
    SaveSelectedUnits(0,&DAT_1000afa8,0);
    puVar7 = &DAT_1000ae20;
    do {
      bVar2 = FUN_100021c0(puVar7);
      if (bVar2) {
        uVar4 = FUN_10002150(&DAT_1000aee0,0x1000afb0,0x10,puVar7,4);
        if ((char)uVar4 == '\0') {
          FUN_10002290(puVar7,4,&DAT_1000aee0,0,0x1000af90);
        }
        SetTrigg(4,1);
      }
      else {
        cVar1 = Trigg();
        if (cVar1 != '\0') {
          FUN_10002230(puVar7,&DAT_1000aee0,4);
          SetTrigg(4,0);
        }
      }
      puVar7 = puVar7 + 8;
    } while ((int)puVar7 < 0x1000ae60);
    SelectUnits(&DAT_1000afa8,0);
  }
  iVar6 = GetTotalAmount0(&DAT_1000af80);
  if (iVar6 != 0) {
    SaveSelectedUnits(0,&DAT_1000afa8,0);
    iVar6 = GetTotalAmount0(&DAT_1000afa8);
    if ((iVar6 == 1) &&
       (GetUnitInfo(&DAT_1000afa8,0,auStack_2c), (auStack_2c[0] & 0xffff) == DAT_1000af68)) {
      ClearSelection(0);
      ShowPageParam("#PAGE2101",DAT_1000af38);
    }
    if ((2000 < DAT_1000af38) && (cVar1 = TimerDone(3), cVar1 != '\0')) {
      RunTimer(3,0xfa);
      CreateObject0(&DAT_1000af70,&DAT_1000ae80,&DAT_1000aee8,1,&DAT_1000af78,0x80);
      SelectUnits(&DAT_1000af70,0);
      SelSendTo(1,&DAT_1000aea8,0,0);
      SelSendTo(1,&DAT_1000aea0,0,2);
      SelSendTo(1,&DAT_1000aeb0,0,2);
      ClearSelection(1);
    }
    iVar6 = GetUnitsAmount2(&DAT_1000aeb0,&DAT_1000aee8,1);
    if (iVar6 != 0) {
      SelectTypeOfUnitsInZone(&DAT_1000aeb0,&DAT_1000aee8,1,0);
      SelErase(1);
      ClearSelection(1);
      if (999 < DAT_1000af38) {
        DAT_1000af38 = DAT_1000af38 + -1000;
      }
    }
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') &&
     (((iVar6 = GetUnitsAmount0(&DAT_1000b048,0), iVar6 != 0 ||
       (iVar6 = GetTotalAmount0(&DAT_1000af58), iVar6 == 0)) ||
      (iVar6 = GetTotalAmount0(&DAT_1000ae90), pcVar9 = (void*)&GetDiff, iVar6 == 0)))) {
    SetTrigg(5,0);
    iVar6 = 0;
    do {
      SetResource(2,iVar6,5000);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    uVar4 = GetDiff(0);
    StartAI(2,"SPAIN.0",0,1,1,uVar4);
    EnableUnit(0,&DAT_1000af28,1);
    EnableUnit(0,&DAT_1000af10,1);
    ShowPage("#PAGE2103");
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') &&
     (((iVar6 = GetUnitsAmount0(&DAT_1000b040,0), iVar6 != 0 ||
       (iVar6 = GetTotalAmount0(&DAT_1000af50), iVar6 == 0)) ||
      (iVar6 = GetTotalAmount0(&DAT_1000ae88), iVar6 == 0)))) {
    SetTrigg(6,0);
    iVar6 = 0;
    do {
      SetResource(3,iVar6,5000);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    uVar4 = GetDiff(0);
    StartAI(3,"VENECIA.0",0,1,1,uVar4);
    EnableUnit(0,&DAT_1000af28,1);
    EnableUnit(0,&DAT_1000af10,1);
    ShowPage("#PAGE2104");
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (DAT_1000af38 < 1000)) {
    SetTrigg(7,0);
    ShowPage("#PAGE2105");
    EnableUnit(0,&DAT_1000ae60,1);
    EnableUnit(0,&DAT_1000ae08,1);
    EnableUnit(0,&DAT_1000af30,1);
    EnableUnit(0,&DAT_1000b030,1);
    EnableMission(0x41);
    EnableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    EnableMission(0x45);
    EnableMission(0x46);
    EnableMission(0x47);
    iVar6 = 0;
    do {
      iVar3 = GetDiff(0);
      AddResource(0,iVar6,(4 - iVar3) * 1000);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    cVar1 = Trigg(5);
    if (cVar1 != '\0') {
      SetTrigg(5,0);
      iVar6 = 0;
      do {
        SetResource(2,iVar6,5000);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 6);
      uVar4 = GetDiff(0);
      StartAI(2,"SPAIN.0",0,1,1,uVar4);
      ShowPage("#PAGE2103");
    }
    cVar1 = Trigg(6);
    if (cVar1 != '\0') {
      SetTrigg(6,0);
      iVar6 = 0;
      do {
        SetResource(3,iVar6,5000);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 6);
      uVar4 = GetDiff(0);
      StartAI(3,"VENECIA.0",0,1,1,uVar4);
      ShowPage("#PAGE2104");
    }
  }
  cVar1 = NationIsErased(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage("#PAGE2108");
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PAGE2106");
    LooseGame();
  }
  iVar6 = GetTotalAmount0(&DAT_1000af80);
  if ((iVar6 == 0) && (1999 < DAT_1000af38)) {
    ShowPage("#PAGE2107");
    LooseGame();
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

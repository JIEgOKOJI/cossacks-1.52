#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_100071f8[] = "GT4";
char DAT_100071fc[] = "GT3";
char DAT_10007200[] = "GT2";
char DAT_10007204[] = "GT1";
char DAT_10007208[] = "GP04";
char DAT_10007210[] = "GP03";
char DAT_10007218[] = "GP02";
char DAT_10007220[] = "GP01";
char DAT_10007238[] = "GA2";
char DAT_1000723c[] = "GA1";
char DAT_10007240[] = "GCld";
char DAT_10007248[] = "GCom";
char DAT_10007258[] = "ZV4";
char DAT_1000725c[] = "ZT4";
char DAT_10007260[] = "ZV3";
char DAT_10007264[] = "ZT3";
char DAT_10007268[] = "ZV2";
char DAT_1000726c[] = "ZT2";
char DAT_10007270[] = "ZV1";
char DAT_10007274[] = "ZT1";
char DAT_10007278[] = "Z04";
char DAT_1000727c[] = "Z02";
char DAT_10007280[] = "Z01";
char DAT_10007284[] = "Z0";
char DAT_10007288[] = "ZM1";
long long DAT_10007a80 = 0;
long long DAT_10007a88 = 0;
long long DAT_10007a90 = 0;
int DAT_10007a98 = 0;
long long DAT_10007aa0 = 0;
long long DAT_10007aa8 = 0;
long long DAT_10007ab0 = 0;
long long DAT_10007ab8 = 0;
long long DAT_10007ac0 = 0;
long long DAT_10007ac8 = 0;
long long DAT_10007ad0 = 0;
long long DAT_10007ad8 = 0;
long long DAT_10007ae0 = 0;
long long DAT_10007ae8 = 0;
long long DAT_10007af0 = 0;
long long DAT_10007af8 = 0;
long long DAT_10007b00 = 0;
long long DAT_10007b08 = 0;
long long DAT_10007b10 = 0;
long long DAT_10007b18 = 0;
long long DAT_10007b20 = 0;
long long DAT_10007b28 = 0;
long long DAT_10007b30 = 0;
long long DAT_10007b38 = 0;
long long DAT_10007b40 = 0;
long long DAT_10007b48 = 0;
long long DAT_10007b50 = 0;
long long DAT_10007b58 = 0;
long long DAT_10007b60 = 0;
long long DAT_10007b68 = 0;
long long DAT_10007b70 = 0;
long long DAT_10007b78 = 0;
long long DAT_10007b80 = 0;
long long DAT_10007b88 = 0;
long long DAT_10007b90 = 0;
long long DAT_10007b98 = 0;
long long DAT_10007ba0 = 0;
long long DAT_10007ba8 = 0;
long long DAT_10007bb0 = 0;
long long DAT_10007bb8 = 0;
long long DAT_10007bc0 = 0;
long long DAT_10007bc8 = 0;
long long DAT_10007bd0 = 0;
long long DAT_10007bd8 = 0;
long long DAT_10007be0 = 0;
long long DAT_10007be8 = 0;
long long DAT_10007bf0 = 0;
long long DAT_10007bf8 = 0;
long long DAT_10007c00 = 0;
long long DAT_10007c08 = 0;
long long DAT_10007c10 = 0;
long long DAT_10007c18 = 0;
int DAT_10007c20 = 0;
long long DAT_10007c28 = 0;
long long DAT_10007c30 = 0;
long long DAT_10007c38 = 0;
long long DAT_10007c40 = 0;
long long DAT_10007c48 = 0;
long long DAT_10007c50 = 0;
long long DAT_10007c58 = 0;
long long DAT_10007c60 = 0;
long long DAT_10007c68 = 0;
long long DAT_10007c70 = 0;
long long DAT_10007c78 = 0;
long long DAT_10007c80 = 0;
long long DAT_10007c88 = 0;
long long DAT_10007c90 = 0;
long long DAT_10007c98 = 0;
long long DAT_10007ca0 = 0;
long long DAT_10007ca8 = 0;
long long DAT_10007cb0 = 0;
long long DAT_10007cb8 = 0;
long long DAT_10007cc0 = 0;

/* Forward declarations */
int FUN_10001012(int param_1);
int FUN_10001030(int param_1,int param_2,int param_3,int param_4);
void FUN_100010c3(int param_1,int param_2);
void FUN_100010db(int param_1,int param_2,int param_3);
BOOL FUN_100010f2(int param_1);
BOOL FUN_10001172(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
int FUN_1000124b(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
void FUN_1000136a(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);


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
  } while (iVar2 < 8);
  return iVar2;
}





int __cdecl
FUN_10001030(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_10001012(param_1);
  SelectUnits1(1,param_1,0);
  SelectUnits1(2,param_1,1);
  if (1 < DAT_10007a98) {
    SelectUnitsType(&DAT_10007c50,1,1);
    SelectUnitsType(&DAT_10007ac0,2,1);
  }
  ClearSelection(0);
  SetStandGround(1,0);
  SetStandGround(2,0);
  SelSendAndKill(1,param_2,param_3,param_4);
  SelSendAndKill(2,param_2,param_3,param_4);
  return iVar1;
}





void __cdecl FUN_100010c3(int param_1,int param_2)

{
  FUN_10001030(param_1,param_2,200,0);
  return;
}





void __cdecl FUN_100010db(int param_1,int param_2,int param_3)

{
  FUN_10001030(param_1,param_2,param_3,0);
  return;
}





BOOL __cdecl FUN_100010f2(int param_1)

{
  int iVar1;
  
  CreateZoneNearGroup(&DAT_10007cb0,param_1,&DAT_10007b10,100);
  iVar1 = GetUnitsAmount0(param_1,0);
  if (iVar1 != 0) {
    SaveSelectedUnits(0,&DAT_10007b98,0);
    ClearSelection(0);
    FUN_100010c3(&DAT_10007ba8,&DAT_10007cb0);
    FUN_100010c3(&DAT_10007bb0,&DAT_10007cb0);
    ClearSelection(1);
    ClearSelection(2);
    SetTrigg(2,0);
    SelectUnits(&DAT_10007b98,0);
  }
  return iVar1 != 0;
}





BOOL __cdecl
FUN_10001172(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10001012(param_1);
  iVar2 = GetResource(iVar1,3);
  if (iVar2 < 1000) {
    SetResource(iVar1,3,1000000);
  }
  iVar2 = GetResource(iVar1,2);
  if (iVar2 < 1000) {
    SetResource(iVar1,2,1000000);
  }
  iVar2 = GetResource(iVar1,1);
  if (iVar2 < 1000) {
    SetResource(iVar1,1,1000000);
  }
  iVar2 = GetResource(iVar1,4);
  if (iVar2 < 1000) {
    SetResource(iVar1,4,1000000);
  }
  iVar2 = GetResource(iVar1,5);
  if (iVar2 < 1000) {
    SetResource(iVar1,5,1000000);
  }
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 < param_6) {
    ProduceUnitFast(param_2,param_3,param_1,0);
    FUN_100010db(param_1,param_4,param_5);
  }
  return iVar1 < param_6;
}





int __cdecl
FUN_1000124b(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  
  iVar1 = FUN_10001012(param_1);
  iVar2 = GetResource(iVar1,3);
  if (iVar2 < 1000) {
    SetResource(iVar1,3,1000000);
  }
  iVar2 = GetResource(iVar1,2);
  if (iVar2 < 1000) {
    SetResource(iVar1,2,1000000);
  }
  iVar2 = GetResource(iVar1,1);
  if (iVar2 < 1000) {
    SetResource(iVar1,1,1000000);
  }
  iVar2 = GetResource(iVar1,4);
  if (iVar2 < 1000) {
    SetResource(iVar1,4,1000000);
  }
  iVar2 = GetResource(iVar1,5);
  if (iVar2 < 1000) {
    SetResource(iVar1,5,1000000);
  }
  puVar3 = &DAT_10007c60;
  iVar1 = GetTotalAmount1(&DAT_10007c60,0);
  if (iVar1 < 1) {
    puVar3 = &DAT_10007c40;
    iVar1 = GetTotalAmount1(&DAT_10007c40,0);
    if (iVar1 < 1) {
      puVar3 = &DAT_10007bb8;
      iVar1 = GetTotalAmount1(&DAT_10007bb8,0);
      if (iVar1 < 1) goto LAB_10001330;
    }
  }
  CreateZoneNearUnit(&DAT_10007cb0,param_4,puVar3,0,100);
LAB_10001330:
  if (0 < param_6) {
    do {
      ProduceUnitFast(param_2,param_3,param_1,0);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  FUN_100010db(param_1,&DAT_10007cb0,param_5);
  return 1;
}





void __cdecl
FUN_1000136a(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  int iVar1;
  
  SaveSelectedUnits(0,&DAT_10007b98,0);
  ClearSelection(0);
  if (DAT_10007a98 == 0) {
    SelectUnits(&DAT_10007ba8,0);
    SelectUnits(&DAT_10007b38,1);
    ClearSelection(0);
    SelDie(1);
    SelectUnits(&DAT_10007bb0,0);
    SelectUnits(&DAT_10007b40,1);
    ClearSelection(0);
    SelDie(2);
    ClearSelection(2);
  }
  if (DAT_10007a98 == 1) {
    SelectUnitsType(&DAT_10007c50,1,0);
    SelErase(1);
    ClearSelection(1);
    SelectUnitsType(&DAT_10007ac0,2,0);
    SelErase(2);
    ClearSelection(2);
    SelectUnits(&DAT_10007ba8,0);
    ClearSelection(0);
    SelDie(1);
    SelectUnits(&DAT_10007b40,0);
    ClearSelection(0);
    SelDie(2);
    ClearSelection(1);
    ClearSelection(2);
  }
  ClearSelection(1);
  ClearSelection(2);
  SelectUnits(&DAT_10007b98,0);
  ClearLightSpot(1);
  ClearLightSpot(2);
  ClearLightSpot(3);
  ClearLightSpot(4);
  DisableMission(0x44);
  EnableMission(0x45);
  EnableMission(0x48);
  SetResource(0,0,(10 - DAT_10007a98) * 1000);
  iVar1 = GetResource(0,0);
  SetResource(0,2,iVar1 * 10);
  iVar1 = GetResource(0,0);
  SetResource(0,1,iVar1 * 10);
  SelectUnits(&DAT_10007ac8,0);
  SelChangeNation(4,1);
  SelectUnits(&DAT_10007ad0,0);
  SelChangeNation(4,2);
  SelectUnits(&DAT_10007ad8,0);
  SelChangeNation(4,2);
  SelectUnits(&DAT_10007ae8,0);
  SelChangeNation(4,1);
  SelectUnits(param_2,0);
  SelChangeNation(5,0);
  SelectUnits(param_1,0);
  SelChangeNation(1,0);
  SelChangeNation(2,0);
  SetTrigg(0xb,0);
  SetTrigg(0xc,0);
  SetTrigg(0xd,0);
  SetTrigg(0xe,0);
  RemoveGroup(param_7,param_6);
  SelectUnits(param_6,0);
  SelChangeNation(1,3);
  SelChangeNation(2,3);
  SelectUnits(param_5,0);
  SelChangeNation(1,3);
  SelChangeNation(2,3);
  SelectUnits(&DAT_10007aa8,0);
  SelectUnits(&DAT_10007aa0,1);
  SelectUnits(&DAT_10007ab8,1);
  SelectUnits(&DAT_10007ab0,1);
  SelOpenGates(5);
  SelOpenGates(3);
  param_6 = 0x14;
  do {
    CreateObject0(&DAT_10007b48,&DAT_10007b90,&DAT_10007a80,1,param_3,0x80);
    CreateObject0(&DAT_10007b48,&DAT_10007b90,&DAT_10007a88,2,param_4,0x80);
    param_6 = param_6 + -1;
  } while (param_6 != 0);
  StartAI(1,"PORTUGALIA.0",0,2,1,DAT_10007a98);
  StartAI(2,"SPAIN.0",0,2,1,DAT_10007a98);
  SetTrigg(0x15,0);
  ShowPage("#PAGE2");
  return;
}





void OnInit(void)

{
                    
  RegisterVar(&DAT_10007a98,4);
  RegisterVar(&DAT_10007c20,4);
  SetPlayerName(1,"ENEMY");
  SetPlayerName(2,"ENEMY");
  SetPlayerName(3,"ENEMY");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"ENEMY");
  RegisterZone(&DAT_10007cb0,"ZAttack");
  RegisterZone(&DAT_10007c68,DAT_10007288);
  RegisterZone(&DAT_10007b88,DAT_10007284);
  RegisterZone(&DAT_10007c28,DAT_10007280);
  RegisterZone(&DAT_10007c30,DAT_1000727c);
  RegisterZone(&DAT_10007c38,DAT_10007278);
  RegisterZone(&DAT_10007c70,DAT_10007274);
  RegisterZone(&DAT_10007c90,DAT_10007270);
  RegisterZone(&DAT_10007c78,DAT_1000726c);
  RegisterZone(&DAT_10007c98,DAT_10007268);
  RegisterZone(&DAT_10007c80,DAT_10007264);
  RegisterZone(&DAT_10007ca0,DAT_10007260);
  RegisterZone(&DAT_10007c88,DAT_1000725c);
  RegisterZone(&DAT_10007ca8,DAT_10007258);
  RegisterUnits(&DAT_10007bc0,"GErase");
  RegisterDynGroup(&DAT_10007b98);
  RegisterUnits(&DAT_10007b10,DAT_10007248);
  RegisterUnits(&DAT_10007b08,DAT_10007240);
  RegisterUnits(&DAT_10007ba8,DAT_1000723c);
  RegisterUnits(&DAT_10007bb0,DAT_10007238);
  RegisterUnits(&DAT_10007b38,"GCan1");
  RegisterUnits(&DAT_10007b40,"GCan2");
  RegisterUnits(&DAT_10007ac8,DAT_10007220);
  RegisterUnits(&DAT_10007ad0,DAT_10007218);
  RegisterUnits(&DAT_10007ad8,DAT_10007210);
  RegisterUnits(&DAT_10007ae8,DAT_10007208);
  RegisterUnits(&DAT_10007bc8,DAT_10007204);
  RegisterUnits(&DAT_10007bd0,DAT_10007200);
  RegisterUnits(&DAT_10007bd8,DAT_100071fc);
  RegisterUnits(&DAT_10007be0,DAT_100071f8);
  RegisterUnits(&DAT_10007b20,"GWall1");
  RegisterUnits(&DAT_10007b18,"GWall2");
  RegisterUnits(&DAT_10007b30,"GWall3");
  RegisterUnits(&DAT_10007b28,"GWall4");
  RegisterUnits(&DAT_10007aa8,"GGate1");
  RegisterUnits(&DAT_10007aa0,"GGate2");
  RegisterUnits(&DAT_10007ab8,"GGate3");
  RegisterUnits(&DAT_10007ab0,"GGate4");
  RegisterUnits(&DAT_10007b50,"GTower1");
  RegisterUnits(&DAT_10007b58,"GTower2");
  RegisterUnits(&DAT_10007be8,"GGar1");
  RegisterUnits(&DAT_10007bf0,"GGar2");
  RegisterUnits(&DAT_10007bf8,"GGar3");
  RegisterUnits(&DAT_10007c00,"GGar4");
  RegisterUnits(&DAT_10007af0,"GBar1");
  RegisterDynGroup(&DAT_10007b68);
  RegisterVar(&DAT_10007b68,8);
  RegisterUnitType(&DAT_10007cb8,"Grenader(PO)");
  RegisterUnitType(&DAT_10007ba0,"Mushketer(PO)");
  RegisterUnitType(&DAT_10007ae0,"Pik_evro_rus(PO)");
  RegisterUnits(&DAT_10007c10,"GStb2");
  RegisterDynGroup(&DAT_10007b70);
  RegisterVar(&DAT_10007b70,8);
  RegisterUnitType(&DAT_10007c58,"Kirasir(sp)");
  RegisterUnits(&DAT_10007af8,"GBar3");
  RegisterDynGroup(&DAT_10007b78);
  RegisterVar(&DAT_10007b78,8);
  RegisterUnitType(&DAT_10007c48,"Grenader(sp)");
  RegisterUnits(&DAT_10007b00,"GBar4");
  RegisterUnits(&DAT_10007c18,"GStb4");
  RegisterDynGroup(&DAT_10007b80);
  RegisterVar(&DAT_10007b80,8);
  RegisterUnitType(&DAT_10007cc0,"Kirasir(PO)");
  RegisterUnitType(&DAT_10007a90,"Grenader_DIP(PO)");
  RegisterUnitType(&DAT_10007c50,"Dragun_18(PO)");
  RegisterUnitType(&DAT_10007ac0,"Dragun_18(sp)");
  RegisterUnitType(&DAT_10007a80,"Kreposnoi_portugal(PO)");
  RegisterUnitType(&DAT_10007a88,"Kreposnoi_portugal(sp)");
  RegisterUnitType(&DAT_10007c08,"Melnica(sp)");
  RegisterUnitType(&DAT_10007c60,"Center_Holland(HO)");
  RegisterUnitType(&DAT_10007c40,"Center_Portugal(PO)");
  RegisterUnitType(&DAT_10007bb8,"Center_Spain(sp)");
  RegisterDynGroup(&DAT_10007b60);
  RegisterVar(&DAT_10007b60,8);
  RegisterFormation(&DAT_10007b90,"#ALONE");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  void *pcVar5;
  void *pcVar6;
  char *pcVar7;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 == '\0') goto LAB_1000214c;
  DAT_10007a98 = GetDiff(0);
  DAT_10007c20 = 0;
  ChangeFriends(1,0xe);
  ChangeFriends(2,0xe);
  ChangeFriends(3,0xe);
  ChangeFriends(4,0xff);
  ChangeFriends(5,0x3e);
  if (DAT_10007a98 == 0) {
    SelectUnitsType(&DAT_10007c50,1,0);
    SelErase(1);
    SelectUnitsType(&DAT_10007ac0,2,0);
    SelErase(2);
    ClearSelection(1);
    ClearSelection(2);
  }
  if (DAT_10007a98 < 2) {
    SelectUnits(&DAT_10007b50,0);
    AllowAttack(1,0);
    SelectUnits(&DAT_10007b58,0);
    AllowAttack(2,0);
    ClearSelection(1);
    ClearSelection(2);
  }
  InitialUpgrade(DAT_10007248,"MAINHO");
  if (DAT_10007a98 == 0) {
    InitialUpgrade(DAT_10007248,"AKA15HO");
    InitialUpgrade(DAT_10007248,"AKA31HO");
LAB_10001b1a:
    InitialUpgrade(DAT_10007248,"KUZ04HO");
    InitialUpgrade(DAT_10007248,"KUZ05HO");
    InitialUpgrade(DAT_10007248,"KUZ06HO");
    InitialUpgrade(DAT_10007248,"AKA34HO");
    InitialUpgrade(DAT_10007248,"AKA35HO");
    InitialUpgrade(DAT_10007248,"AKA36HO");
    InitialUpgrade(DAT_10007248,"AKA14HO");
LAB_10001b55:
    InitialUpgrade(DAT_10007248,"AKA13HO");
    InitialUpgrade(DAT_10007248,"AKA33HO");
LAB_10001b68:
    InitialUpgrade(DAT_10007248,"AKA12HO");
    InitialUpgrade(DAT_10007248,"Barabanshik(HO)SHIELD");
    InitialUpgrade(DAT_10007248,"Oficer_rusevr2(HO)ATTACK");
    InitialUpgrade(DAT_10007248,"Oficer_rusevr2(HO)SHIELD");
  }
  else {
    if (DAT_10007a98 == 1) goto LAB_10001b1a;
    if (DAT_10007a98 == 2) goto LAB_10001b55;
    if (DAT_10007a98 == 3) goto LAB_10001b68;
  }
  if (DAT_10007a98 == 0) {
    InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK");
    InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK3");
    InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK4");
    InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK5");
    InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK6");
    InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK7");
    InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD");
    InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD3");
    InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD4");
    InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD5");
    InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD6");
    InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD7");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK3");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK4");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK5");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK6");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK7");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD3");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD4");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD5");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD6");
    pcVar7 = "Kirasir(HO)SHIELD7";
LAB_10001d67:
    InitialUpgrade(DAT_10007248,pcVar7);
  }
  else if (DAT_10007a98 == 1) {
    InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK");
    InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK3");
    InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK4");
    InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK5");
    InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD");
    InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD3");
    InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD4");
    InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD5");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK3");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK4");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK5");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD3");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD4");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD5");
    InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD5");
  }
  else {
    if (DAT_10007a98 == 2) {
      InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK");
      InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK3");
      InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD");
      InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD3");
      InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK");
      InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK3");
      InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD");
      pcVar7 = "Kirasir(HO)SHIELD3";
      goto LAB_10001d67;
    }
    if (DAT_10007a98 == 3) {
      InitialUpgrade(DAT_10007248,"Grenader(HO)ATTACK");
      InitialUpgrade(DAT_10007248,"Grenader(HO)SHIELD");
      InitialUpgrade(DAT_10007248,"Kirasir(HO)ATTACK");
      InitialUpgrade(DAT_10007248,"Kirasir(HO)SHIELD");
    }
  }
  InitialUpgrade("GErase","MAINPO");
  InitialUpgrade("GErase","MAINSP");
  InitialUpgrade(DAT_1000723c,"MAINPO");
  InitialUpgrade(DAT_10007238,"MAINSP");
  if (DAT_10007a98 == 1) {
LAB_10001edb:
    InitialUpgrade(DAT_1000723c,"Pik_evro_rus(PO)ATTACK");
    InitialUpgrade(DAT_1000723c,"Pik_evro_rus(PO)SHIELD");
    InitialUpgrade(DAT_1000723c,"AKA31PO");
    InitialUpgrade(DAT_10007238,"Pik_evro_rus(sp)ATTACK");
    InitialUpgrade(DAT_10007238,"Pik_evro_rus(sp)SHIELD");
    InitialUpgrade(DAT_10007238,"AKA31SP");
  }
  else {
    if (DAT_10007a98 == 2) {
LAB_10001e1e:
      InitialUpgrade(DAT_1000723c,"Pik_evro_rus(PO)ATTACK3");
      InitialUpgrade(DAT_1000723c,"Pik_evro_rus(PO)SHIELD3");
      InitialUpgrade(DAT_1000723c,"KUZ02PO");
      InitialUpgrade(DAT_1000723c,"KUZ03PO");
      InitialUpgrade(DAT_1000723c,"KUZ04PO");
      InitialUpgrade(DAT_1000723c,"KUZ05PO");
      InitialUpgrade(DAT_1000723c,"AKA15PO");
      InitialUpgrade(DAT_1000723c,"AKA27PO");
      InitialUpgrade(DAT_1000723c,"AKA34PO");
      InitialUpgrade(DAT_10007238,"Pik_evro_rus(sp)ATTACK3");
      InitialUpgrade(DAT_10007238,"Pik_evro_rus(sp)SHIELD3");
      InitialUpgrade(DAT_10007238,"KUZ02SP");
      InitialUpgrade(DAT_10007238,"KUZ03SP");
      InitialUpgrade(DAT_10007238,"KUZ04SP");
      InitialUpgrade(DAT_10007238,"KUZ05SP");
      InitialUpgrade(DAT_10007238,"AKA15SP");
      InitialUpgrade(DAT_10007238,"AKA27SP");
      InitialUpgrade(DAT_10007238,"AKA34SP");
      goto LAB_10001edb;
    }
    if (DAT_10007a98 == 3) {
      InitialUpgrade(DAT_1000723c,"Pik_evro_rus(PO)ATTACK4");
      InitialUpgrade(DAT_1000723c,"Pik_evro_rus(PO)SHIELD4");
      InitialUpgrade(DAT_1000723c,"KUZ06PO");
      InitialUpgrade(DAT_1000723c,"AKA20PO");
      InitialUpgrade(DAT_1000723c,"AKA33PO");
      InitialUpgrade(DAT_10007238,"Pik_evro_rus(sp)ATTACK4");
      InitialUpgrade(DAT_10007238,"Pik_evro_rus(sp)SHIELD4");
      InitialUpgrade(DAT_10007238,"KUZ06SP");
      InitialUpgrade(DAT_10007238,"AKA20SP");
      InitialUpgrade(DAT_10007238,"AKA33SP");
      goto LAB_10001e1e;
    }
  }
  SetResource(0,3,(5 - DAT_10007a98) * 10000);
  uVar2 = GetResource(0,3);
  SetResource(0,1,uVar2);
  uVar2 = GetResource(0,3);
  SetResource(0,4,uVar2);
  uVar2 = GetResource(0,3);
  SetResource(0,5,uVar2);
  SetResource(0,0,0);
  SetResource(0,2,0);
  iVar3 = GetResource(0,3);
  SetResource(1,0,iVar3 * 3);
  uVar2 = GetResource(1,0);
  SetResource(1,3,uVar2);
  uVar2 = GetResource(1,0);
  SetResource(1,2,uVar2);
  uVar2 = GetResource(1,0);
  SetResource(1,1,uVar2);
  uVar2 = GetResource(1,0);
  SetResource(1,4,uVar2);
  uVar2 = GetResource(1,0);
  SetResource(1,5,uVar2);
  uVar2 = GetResource(1,0);
  SetResource(2,0,uVar2);
  uVar2 = GetResource(2,0);
  SetResource(2,3,uVar2);
  uVar2 = GetResource(2,0);
  SetResource(2,2,uVar2);
  uVar2 = GetResource(2,0);
  SetResource(2,1,uVar2);
  uVar2 = GetResource(2,0);
  SetResource(2,4,uVar2);
  uVar2 = GetResource(2,0);
  SetResource(2,5,uVar2);
  SetResource(3,0,100000000);
  uVar2 = GetResource(3,0);
  SetResource(3,3,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,2,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,1,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,4,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,5,uVar2);
  RemoveGroup(&DAT_10007be8,&DAT_10007b68);
  RemoveGroup(&DAT_10007bf0,&DAT_10007b70);
  RemoveGroup(&DAT_10007bf8,&DAT_10007b78);
  RemoveGroup(&DAT_10007c00,&DAT_10007b80);
  SelectUnits(&DAT_10007ac8,0);
  SelectUnits(&DAT_10007ad0,1);
  SelectUnits(&DAT_10007ad8,1);
  SelectUnits(&DAT_10007ae8,1);
  SelChangeNation(1,4);
  SelChangeNation(2,4);
  SelectUnits(&DAT_10007bc0,0);
  SelErase(3);
  SetLightSpot(&DAT_10007c90,4,1);
  SetLightSpot(&DAT_10007c98,4,2);
  SetLightSpot(&DAT_10007ca0,4,3);
  SetLightSpot(&DAT_10007ca8,4,4);
  EnableMission(0x42);
  DisableMission(0x43);
  DisableMission(0x44);
  DisableMission(0x45);
  DisableMission(0x48);
  ShowPage("#PAGE0");
  RunTimer(1,0);
  RunTimer(2,0);
  SetTrigg(99,0);
LAB_1000214c:
  cVar1 = TimerDone(1);
  if (cVar1 != '\0') {
    DAT_10007c20 = DAT_10007c20 + DAT_10007a98;
    RunTimer(1,DAT_10007a98 * -2000 + 7000);
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    FUN_100010f2(&DAT_10007c30);
    FUN_100010f2(&DAT_10007c38);
    FUN_100010f2(&DAT_10007c28);
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10007b10), iVar3 != 0)) {
    iVar3 = GetUnitsAmount0(&DAT_10007b88,0);
    iVar4 = GetTotalAmount0(&DAT_10007b10);
    if ((iVar3 < iVar4 / 2) && (iVar3 = GetUnitsAmount0(&DAT_10007b88,0), iVar3 < 10)) {
      DisableMission(0x42);
      EnableMission(0x43);
      EnableMission(0x44);
      ShowPage("#PAGE1");
      SetTrigg(1,0);
    }
  }
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    AttackZoneByArtillery(&DAT_10007b38,&DAT_10007cb0,0);
    AttackZoneByArtillery(&DAT_10007b40,&DAT_10007cb0,0);
  }
  cVar1 = Trigg(0xb);
  if (cVar1 != '\0') {
    FUN_10001172(&DAT_10007b68,&DAT_10007af0,&DAT_10007ba0,&DAT_10007c90,0x20,DAT_10007c20 / 2);
    FUN_10001172(&DAT_10007b68,&DAT_10007af0,&DAT_10007ae0,&DAT_10007c90,0x20,DAT_10007c20 / 2);
  }
  cVar1 = Trigg(0xc);
  if (cVar1 != '\0') {
    FUN_10001172(&DAT_10007b70,&DAT_10007c10,&DAT_10007c58,&DAT_10007c98,0x60,DAT_10007c20 / 3);
  }
  cVar1 = Trigg(0xd);
  if (cVar1 != '\0') {
    FUN_10001172(&DAT_10007b78,&DAT_10007af8,&DAT_10007c48,&DAT_10007ca0,100,DAT_10007c20 / 2);
  }
  cVar1 = Trigg(0xe);
  if (cVar1 != '\0') {
    FUN_10001172(&DAT_10007b80,&DAT_10007c18,&DAT_10007cc0,&DAT_10007ca8,100,DAT_10007c20 / 3);
    FUN_10001172(&DAT_10007b80,&DAT_10007b00,&DAT_10007a90,&DAT_10007ca8,100,DAT_10007c20);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0xb), cVar1 != '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007c70,1), iVar3 < DAT_10007a98 + 1)) {
    FUN_1000136a(&DAT_10007ac8,&DAT_10007b20,&DAT_10007c88,&DAT_10007c78,&DAT_10007bd8,0x10007b78,
                 &DAT_10007bf8);
    SetTrigg(0xd,1);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007c78,2), iVar3 < DAT_10007a98 + 1)) {
    FUN_1000136a(&DAT_10007ad0,&DAT_10007b18,&DAT_10007c70,&DAT_10007c80,&DAT_10007be0,0x10007b80,
                 &DAT_10007c00);
    SetTrigg(0xe,1);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0xd), cVar1 != '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007c80,2), iVar3 < DAT_10007a98 + 1)) {
    FUN_1000136a(&DAT_10007ad8,&DAT_10007b30,&DAT_10007c88,&DAT_10007c78,&DAT_10007bc8,0x10007b68,
                 &DAT_10007be8);
    SetTrigg(0xb,1);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0xe), cVar1 != '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007c88,1), iVar3 < DAT_10007a98 + 1)) {
    FUN_1000136a(&DAT_10007ae8,&DAT_10007b28,&DAT_10007c70,&DAT_10007c80,&DAT_10007bd0,0x10007b70,
                 &DAT_10007bf0);
    SetTrigg(0xc,1);
  }
  cVar1 = Trigg(0xd);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x15), cVar1 == '\0')) &&
     (cVar1 = TimerDone(2), cVar1 != '\0')) {
    FUN_1000124b(&DAT_10007b60,&DAT_10007af8,&DAT_10007c48,&DAT_10007c70,100,DAT_10007c20);
    RunTimer(2,(4 - DAT_10007a98) * 1000);
  }
  cVar1 = Trigg(0xe);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x15), cVar1 == '\0')) &&
     (cVar1 = TimerDone(2), cVar1 != '\0')) {
    FUN_1000124b(&DAT_10007b60,&DAT_10007c18,&DAT_10007cc0,&DAT_10007c78,100,DAT_10007c20 / 3);
    FUN_1000124b(&DAT_10007b60,&DAT_10007b00,&DAT_10007a90,&DAT_10007c78,100,DAT_10007c20);
    RunTimer(2,(4 - DAT_10007a98) * 1000);
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x15), cVar1 == '\0')) &&
     (cVar1 = TimerDone(2), cVar1 != '\0')) {
    FUN_1000124b(&DAT_10007b60,&DAT_10007af0,&DAT_10007ba0,&DAT_10007c80,100,DAT_10007c20);
    FUN_1000124b(&DAT_10007b60,&DAT_10007af0,&DAT_10007ae0,&DAT_10007c80,100,DAT_10007c20);
    RunTimer(2,(4 - DAT_10007a98) * 1000);
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x15), cVar1 == '\0')) &&
     (cVar1 = TimerDone(2), cVar1 != '\0')) {
    FUN_1000124b(&DAT_10007b60,&DAT_10007c10,&DAT_10007c58,&DAT_10007c88,100,DAT_10007c20 / 2);
    RunTimer(2,(4 - DAT_10007a98) * 1000);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5b), pcVar5 = (void*)&ShowPage, cVar1 != '\0')) &&
     (cVar1 = NationIsErased(1), pcVar5 = (void*)&ShowPage, cVar1 != '\0')) {
    ShowPage("#PAGE11");
    SetTrigg(0x5b,0);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5c), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE12");
    SetTrigg(0x5c,0);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5d), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage("#PAGE13");
    SetTrigg(0x5d,0);
  }
  cVar1 = NationIsErased(0);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10007b10), iVar3 == 0)) {
    iVar3 = 1;
    do {
      cVar1 = TimerDone(iVar3);
      if (cVar1 == '\0') {
        RunTimer(iVar3,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1e);
    ShowPage("#PAGE10");
    LooseGame();
  }
  cVar1 = Trigg(0x5b);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5c), cVar1 == '\0')) &&
     (cVar1 = Trigg(0x5d), cVar1 == '\0')) {
    iVar3 = 1;
    do {
      cVar1 = TimerDone(iVar3);
      if (cVar1 == '\0') {
        FreeTimer(iVar3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1e);
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

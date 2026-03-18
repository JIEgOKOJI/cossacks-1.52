#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int DAT_10007030 = 1000;
char DAT_10007034[] = "ZC34";
char DAT_1000703c[] = "ZC33";
char DAT_10007044[] = "ZC32";
char DAT_1000704c[] = "ZC31";
char DAT_10007054[] = "ZC2";
char DAT_10007058[] = "ZC3";
char DAT_100070a4[] = "ZC44";
char DAT_100070ac[] = "ZC43";
char DAT_100070b4[] = "ZC42";
char DAT_100070bc[] = "ZC41";
char DAT_100070c4[] = "ZC5";
char DAT_100070c8[] = "ZC4";
char DAT_100071c4[] = "GDe5";
char DAT_100072d8[] = "GDe2";
char DAT_100072e0[] = "GGe1";
char DAT_100072e8[] = "GSa0";
char DAT_100072f8[] = "GE3";
char DAT_100072fc[] = "GE2";
char DAT_10007308[] = "Z12";
char DAT_1000730c[] = "Z11";
char DAT_10007310[] = "Z10";
char DAT_10007314[] = "Z9";
char DAT_10007318[] = "Z8";
char DAT_1000731c[] = "Z7";
char DAT_10007320[] = "Z6";
char DAT_10007324[] = "Z5";
char DAT_10007328[] = "Z4";
char DAT_1000732c[] = "Z3";
char DAT_10007330[] = "Z2";
char DAT_10007334[] = "Z1";
char DAT_10007338[] = "Z0";
char DAT_1000733c[] = "Z02";
char DAT_10007340[] = "Z01";
long long DAT_100077b0 = 0;
long long DAT_100077b8 = 0;
long long DAT_100077c8 = 0;
int DAT_100077d0 = 0;
long long DAT_100077d8 = 0;
long long DAT_100077e0 = 0;
long long DAT_100077e8 = 0;
long long DAT_100077f0 = 0;
long long DAT_100077f8 = 0;
long long DAT_10007800 = 0;
long long DAT_10007808 = 0;
long long DAT_10007810 = 0;
long long DAT_10007818 = 0;
long long DAT_10007820 = 0;
long long DAT_10007828 = 0;
long long DAT_10007830 = 0;
long long DAT_10007838 = 0;
long long DAT_10007840 = 0;
long long DAT_10007848 = 0;
long long DAT_10007850 = 0;
long long DAT_10007858 = 0;
long long DAT_10007860 = 0;
long long DAT_10007868 = 0;
long long DAT_10007870 = 0;
long long DAT_10007878 = 0;
long long DAT_10007880 = 0;
long long DAT_10007888 = 0;
long long DAT_10007890 = 0;
long long DAT_10007898 = 0;
long long DAT_100078a0 = 0;
long long DAT_100078a8 = 0;
long long DAT_100078b0 = 0;
long long DAT_100078b8 = 0;
long long DAT_100078c0 = 0;
long long DAT_100078c8 = 0;
long long DAT_100078d0 = 0;
long long DAT_100078d8 = 0;
long long DAT_100078e0 = 0;
long long DAT_100078e8 = 0;
long long DAT_100078f0 = 0;
long long DAT_100078f8 = 0;
long long DAT_10007900 = 0;
long long DAT_10007908 = 0;
long long DAT_10007910 = 0;
long long DAT_10007918 = 0;
long long DAT_10007920 = 0;
long long DAT_10007928 = 0;
long long DAT_10007930 = 0;
long long DAT_10007938 = 0;
long long DAT_10007940 = 0;
long long DAT_10007948 = 0;
long long DAT_10007950 = 0;
long long DAT_10007958 = 0;
long long DAT_10007960 = 0;
long long DAT_10007968 = 0;
long long DAT_10007970 = 0;
long long DAT_10007978 = 0;
long long DAT_10007980 = 0;
long long DAT_10007988 = 0;
long long DAT_10007990 = 0;
long long DAT_10007998 = 0;
long long DAT_100079a0 = 0;
long long DAT_100079a8 = 0;
long long DAT_100079b0 = 0;
long long DAT_100079b8 = 0;
long long DAT_100079c0 = 0;
long long DAT_100079c8 = 0;
long long DAT_100079d0 = 0;
long long DAT_100079d8 = 0;
long long DAT_100079e0 = 0;
long long DAT_100079e8 = 0;
long long DAT_100079f0 = 0;
long long DAT_100079f8 = 0;
long long DAT_10007a00 = 0;
long long DAT_10007a08 = 0;
long long DAT_10007a10 = 0;
long long DAT_10007a18 = 0;
long long DAT_10007a20 = 0;
long long DAT_10007a28 = 0;
long long DAT_10007a30 = 0;
long long DAT_10007a38 = 0;
long long DAT_10007a40 = 0;
long long DAT_10007a48 = 0;
int DAT_10007a50 = 0;
long long DAT_10007a58 = 0;
long long DAT_10007a60 = 0;
long long DAT_10007a68 = 0;
long long DAT_10007a70 = 0;
long long DAT_10007a78 = 0;
long long DAT_10007a80 = 0;
long long DAT_10007a88 = 0;
long long DAT_10007a90 = 0;
long long DAT_10007a98 = 0;
long long DAT_10007aa0 = 0;
long long DAT_10007aa8 = 0;
long long DAT_10007ab0 = 0;
int DAT_10007ab8 = 0;
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

/* Forward declarations */
void FUN_10001012(int param_1);
void FUN_10001043(int param_1,int param_2);
void FUN_10001071(int param_1);
int FUN_10001088(int param_1);
int FUN_100010a6(int param_1,int param_2);
int FUN_10001103(int param_1,int param_2,int param_3,int param_4);
void FUN_1000113d(int param_1,int param_2,int param_3);
int FUN_10001154(int param_1,int param_2,int param_3,int param_4);
int FUN_1000118a(int param_1,int param_2,int param_3,int param_4);

void OnInit();
void ProcessScenary();


void __cdecl FUN_10001012(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = GetResource(param_1,iVar2);
    if (iVar1 < DAT_10007030) {
      AddResource(param_1,iVar2,DAT_10007030);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return;
}





void __cdecl FUN_10001043(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetResource(param_1,param_2);
  if (iVar1 < 100000) {
    SetResource(param_1,param_2,10000000);
  }
  return;
}





void __cdecl FUN_10001071(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_10001043(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}





int __cdecl FUN_10001088(int param_1)

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





int __cdecl FUN_100010a6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = GetUnitsAmount2(param_1,&DAT_10007ab0,param_2);
  iVar2 = GetUnitsAmount0(param_1,param_2);
  iVar3 = GetUnitsAmount2(param_1,&DAT_100078b0,param_2);
  iVar4 = GetUnitsAmount2(param_1,&DAT_10007b10,param_2);
  iVar5 = GetUnitsAmount2(param_1,&DAT_100077c8,param_2);
  return (((iVar2 - iVar1) - iVar3) - iVar4) - iVar5;
}





int __cdecl
FUN_10001103(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_10001088(param_1);
  SelectUnits(param_1,0);
  SetStandGround(iVar1,0);
  SelSendAndKill(iVar1,param_2,param_3,param_4);
  return iVar1;
}





void __cdecl FUN_1000113d(int param_1,int param_2,int param_3)

{
  FUN_10001103(param_1,param_2,param_3,0);
  return;
}





int __cdecl
FUN_10001154(int param_1,int param_2,int param_3,int param_4)

{
  CreateObject0(&DAT_100078d8,&DAT_10007958,param_2,param_4,param_3,0x80);
  RemoveGroup(&DAT_100078d8,param_1);
  return param_4;
}





int __cdecl
FUN_1000118a(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10001088(param_1);
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
  if (iVar1 < param_4) {
    ProduceUnitFast(param_2,param_3,param_1,0);
    return 1;
  }
  return 0;
}





void OnInit(void)

{
                    
  RegisterVar(&DAT_100077d0,4);
  RegisterVar(&DAT_10007a50,4);
  RegisterVar(&DAT_10007ab8,4);
  SetPlayerName(1,"PRUSSIA");
  SetPlayerName(2,"DUTCH");
  SetPlayerName(5,"DUTCH");
  SetPlayerName(3,"ALLIES");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(6,"ALLIES");
  RegisterZone(&DAT_10007ad8,"ZAttack");
  RegisterZone(&DAT_10007a58,DAT_10007340);
  RegisterZone(&DAT_10007a60,DAT_1000733c);
  RegisterZone(&DAT_10007930,DAT_10007338);
  RegisterZone(&DAT_10007940,DAT_10007334);
  RegisterZone(&DAT_10007950,DAT_10007330);
  RegisterZone(&DAT_10007960,DAT_1000732c);
  RegisterZone(&DAT_10007968,DAT_10007328);
  RegisterZone(&DAT_10007978,DAT_10007324);
  RegisterZone(&DAT_10007980,DAT_10007320);
  RegisterZone(&DAT_10007988,DAT_1000731c);
  RegisterZone(&DAT_10007998,DAT_10007318);
  RegisterZone(&DAT_100079a0,DAT_10007314);
  RegisterZone(&DAT_10007a68,DAT_10007310);
  RegisterZone(&DAT_10007a70,DAT_1000730c);
  RegisterZone(&DAT_10007a78,DAT_10007308);
  RegisterUnits(&DAT_10007a10,"GErase");
  RegisterUnits(&DAT_100079e0,DAT_100072fc);
  RegisterUnits(&DAT_100079e8,DAT_100072f8);
  RegisterDynGroup(&DAT_100078d8);
  RegisterDynGroup(&DAT_100078e0);
  RegisterDynGroup(&DAT_100078e8);
  RegisterDynGroup(&DAT_100078f0);
  RegisterDynGroup(&DAT_100078f8);
  RegisterDynGroup(&DAT_100079a8);
  RegisterVar(&DAT_100078d8,8);
  RegisterVar(&DAT_100078e0,8);
  RegisterVar(&DAT_100078e8,8);
  RegisterVar(&DAT_100078f0,8);
  RegisterVar(&DAT_100078f8,8);
  RegisterFormation(&DAT_10007958,"#ALONE");
  RegisterUnits(&DAT_10007990,DAT_100072e8);
  RegisterUnits(&DAT_10007898,DAT_100072e0);
  RegisterUnits(&DAT_10007848,DAT_100072d8);
  RegisterUnitType(&DAT_10007aa8,"Lodka(SA)");
  RegisterUnitType(&DAT_10007a08,"PERES_KOR(SA)");
  RegisterUnitType(&DAT_100079c0,"Melnica(SA)");
  RegisterUnitType(&DAT_100079d0,"shahta(SA)");
  RegisterUnitType(&DAT_10007af0,"Sclad1(SA)");
  RegisterUnitType(&DAT_10007b18,"Dom_Saksona(SA)");
  RegisterUnitType(&DAT_10007ac8,"Konushnia_Swesair(SA)");
  RegisterUnitType(&DAT_10007840,"Kazarma_evro(SA)");
  RegisterUnitType(&DAT_10007b20,"Center_Sacson(SA)");
  RegisterUnitType(&DAT_10007a30,"Kazarma(SA)");
  RegisterUnitType(&DAT_10007ae0,"Melnica(GE)");
  RegisterUnitType(&DAT_10007ae8,"shahta(GE)");
  RegisterUnitType(&DAT_10007a00,"Europ(GE)");
  RegisterUnitType(&DAT_100079b8,"Melnica(DA)");
  RegisterUnitType(&DAT_100079b0,"shahta(DA)");
  RegisterUnitType(&DAT_10007af8,"Europ(DA)");
  RegisterDynGroup(&DAT_10007a80);
  RegisterVar(&DAT_10007a80,8);
  RegisterUnitType(&DAT_100078b8,"Fregat(SA)");
  RegisterDynGroup(&DAT_100078d0);
  RegisterVar(&DAT_100078d0,8);
  RegisterUnitType(&DAT_100077b8,"Fregat(DA)");
  RegisterUnitType(&DAT_10007800,"FregatNEW(DA)");
  RegisterDynGroup(&DAT_10007828);
  RegisterVar(&DAT_10007828,8);
  RegisterUnits(&DAT_10007850,DAT_100071c4);
  RegisterUnitType(&DAT_10007b08,"Yahta(SA)");
  RegisterUnitType(&DAT_100079f8,"Linkor(SA)");
  RegisterUnitType(&DAT_100079d8,"GALERA(SA)");
  RegisterUnitType(&DAT_10007ad0,"Victoria(SA)");
  RegisterUnitType(&DAT_10007ac0,"FregatNEW(SA)");
  RegisterUnitType(&DAT_10007910,"KECH(SA)");
  RegisterUnitType(&DAT_100077b0,"KUTTER(SA)");
  RegisterZone(&DAT_10007918,"Zone1");
  RegisterZone(&DAT_10007920,"Zone2");
  RegisterZone(&DAT_10007a38,"Zone10");
  RegisterZone(&DAT_10007a48,"Zone12");
  RegisterZone(&DAT_10007a40,"Zone20");
  RegisterUnits(&DAT_100078a8,"GBar4");
  RegisterUnits(&DAT_10007a28,"GSta4");
  RegisterUnitType(&DAT_100077f8,"Pik_evro_rus(SA)");
  RegisterUnitType(&DAT_100078c0,"Mushketer_sakson(SA)");
  RegisterUnitType(&DAT_100079c8,"Grenader_Sacson(SA)");
  RegisterUnitType(&DAT_10007a18,"Kiracir_Sacson(SA)");
  RegisterUnitType(&DAT_100079f0,"Dragun_18(SA)");
  RegisterDynGroup(&DAT_10007830);
  RegisterVar(&DAT_10007830,8);
  RegisterDynGroup(&DAT_10007900);
  RegisterVar(&DAT_10007900,8);
  RegisterDynGroup(&DAT_10007928);
  RegisterVar(&DAT_10007928,8);
  RegisterDynGroup(&DAT_100077e0);
  RegisterVar(&DAT_100077e0,8);
  RegisterDynGroup(&DAT_10007938);
  RegisterVar(&DAT_10007938,8);
  RegisterDynGroup(&DAT_100077d8);
  RegisterVar(&DAT_100077d8,8);
  RegisterUnitType(&DAT_100078c8,"PERES_KOR(SA)");
  RegisterDynGroup(&DAT_10007808);
  RegisterVar(&DAT_10007808,8);
  RegisterDynGroup(&DAT_10007810);
  RegisterVar(&DAT_10007810,8);
  RegisterZone(&DAT_10007a98,DAT_100070c8);
  RegisterZone(&DAT_10007aa0,DAT_100070c4);
  RegisterZone(&DAT_10007878,DAT_100070bc);
  RegisterZone(&DAT_10007880,DAT_100070b4);
  RegisterZone(&DAT_10007888,DAT_100070ac);
  RegisterZone(&DAT_10007890,DAT_100070a4);
  RegisterUnitType(&DAT_10007ab0,"Lodka(DA)");
  RegisterUnitType(&DAT_100078b0,"Lodka(GE)");
  RegisterUnitType(&DAT_10007b10,"PERES_KOR(DA)");
  RegisterUnitType(&DAT_100077c8,"PERES_KOR(GE)");
  RegisterUnits(&DAT_100078a0,"GBar3");
  RegisterUnits(&DAT_10007a20,"GSta3");
  RegisterDynGroup(&DAT_10007838);
  RegisterVar(&DAT_10007838,8);
  RegisterDynGroup(&DAT_10007908);
  RegisterVar(&DAT_10007908,8);
  RegisterDynGroup(&DAT_10007948);
  RegisterVar(&DAT_10007948,8);
  RegisterDynGroup(&DAT_100077e8);
  RegisterVar(&DAT_100077e8,8);
  RegisterDynGroup(&DAT_10007970);
  RegisterVar(&DAT_10007970,8);
  RegisterDynGroup(&DAT_100077f0);
  RegisterVar(&DAT_100077f0,8);
  RegisterDynGroup(&DAT_10007818);
  RegisterVar(&DAT_10007808,8);
  RegisterDynGroup(&DAT_10007820);
  RegisterVar(&DAT_10007810,8);
  RegisterZone(&DAT_10007a90,DAT_10007058);
  RegisterZone(&DAT_10007a88,DAT_10007054);
  RegisterZone(&DAT_10007858,DAT_1000704c);
  RegisterZone(&DAT_10007860,DAT_10007044);
  RegisterZone(&DAT_10007868,DAT_1000703c);
  RegisterZone(&DAT_10007870,DAT_10007034);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pcVar10;
  void *pcVar11;
  int *puVar12;
  int *puVar13;
  int uVar14;
  int iStack_4;
  
                    
  cVar1 = Trigg(0x5d);
  if (cVar1 != '\0') {
    cVar1 = Trigg(0x15);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0xc);
      if (cVar1 != '\0') {
        FUN_1000118a(&DAT_10007948,&DAT_100078a0,&DAT_100079c8,0xf);
      }
      cVar1 = Trigg(0xd);
      if (cVar1 != '\0') {
        FUN_1000118a(&DAT_100077e8,&DAT_10007a20,&DAT_10007a18,0xf);
      }
      FUN_1000118a(&DAT_10007838,&DAT_100078a0,&DAT_100079c8,3);
      FUN_1000118a(&DAT_10007838,&DAT_100078a0,&DAT_100078c0,3);
      FUN_1000118a(&DAT_10007908,&DAT_10007a20,&DAT_10007a18,3);
      FUN_1000118a(&DAT_10007908,&DAT_10007a20,&DAT_100079f0,3);
    }
    cVar1 = TimerDone(0x11);
    if (cVar1 != '\0') {
      ClearSelection(3);
      SelectUnits(&DAT_10007818,0);
      SelDie(3);
      SelectUnits(&DAT_10007820,0);
      SelDie(3);
      FreeTimer(0x11);
    }
    cVar1 = TimerDone(0xe);
    if (cVar1 != '\0') {
      cVar1 = Trigg(0xc);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10007818), iVar2 == 0)) {
        FUN_10001154(&DAT_10007818,&DAT_10007a08,&DAT_10007a88,3);
        SelectUnits(&DAT_10007818,0);
        SelSendTo(3,&DAT_10007858,0x40,0);
      }
      cVar1 = Trigg(0xd);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10007820), iVar2 == 0)) {
        FUN_10001154(&DAT_10007820,&DAT_10007a08,&DAT_10007a90,3);
        SelectUnits(&DAT_10007820,0);
        SelSendTo(3,&DAT_10007860,0x40,0);
      }
      iVar2 = GetTotalAmount0(&DAT_100077e8);
      iVar3 = GetTotalAmount0(&DAT_10007948);
      if (iVar2 + iVar3 < 10) {
        cVar1 = Trigg(0x16);
        if (cVar1 == '\0') {
          RemoveGroup(&DAT_10007948,&DAT_10007970);
        }
        cVar1 = Trigg(0x17);
        if (cVar1 == '\0') {
          RemoveGroup(&DAT_100077e8,&DAT_100077f0);
        }
        iStack_4 = 0x14;
        do {
          ProduceUnitFast(&DAT_100078a0,&DAT_100078c0,&DAT_10007948,0);
          ProduceUnitFast(&DAT_100078a0,&DAT_100079c8,&DAT_10007948,0);
          ProduceUnitFast(&DAT_10007a20,&DAT_10007a18,&DAT_100077e8,0);
          ProduceUnitFast(&DAT_10007a20,&DAT_100079f0,&DAT_100077e8,0);
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
        SetTrigg(0xc,1);
        SetTrigg(0xd,1);
      }
      RunTimer(0xe,1000);
    }
    cVar1 = Trigg(0x15);
    if ((((cVar1 != '\0') && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
        (iVar2 = GetTotalAmount0(&DAT_10007818), 0 < iVar2)) &&
       (iVar2 = GetTotalAmount0(&DAT_10007948), iVar2 != 0)) {
      SelectUnits(&DAT_10007818,0);
      iVar2 = GetTotalAmount0(&DAT_10007948);
      iVar3 = GetNInside(3);
      if ((iVar3 == iVar2) || (iVar2 = GetNInside(3), iVar2 == 0x50)) {
        SelSendTo(3,&DAT_10007868,0xc4,0);
        SetTrigg(0x16,1);
        cVar1 = CheckLeaveAbility(3);
        if (cVar1 == '\0') {
          SetTrigg(0xc,0);
        }
      }
      cVar1 = CheckLeaveAbility(3);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_10007948,1);
        SendUnitsToTransport(3);
      }
    }
    cVar1 = Trigg(0x15);
    if (((cVar1 != '\0') && (cVar1 = Trigg(0xd), cVar1 != '\0')) &&
       ((iVar2 = GetTotalAmount0(&DAT_10007820), 0 < iVar2 &&
        (iVar2 = GetTotalAmount0(&DAT_100077e8), iVar2 != 0)))) {
      SelectUnits(&DAT_10007820,0);
      iVar2 = GetTotalAmount0(&DAT_100077e8);
      iVar3 = GetNInside(3);
      if ((iVar3 == iVar2) || (iVar2 = GetNInside(3), iVar2 == 0x50)) {
        SelSendTo(3,&DAT_10007870,0xc4,0);
        SetTrigg(0x17,1);
        cVar1 = CheckLeaveAbility(3);
        if (cVar1 == '\0') {
          SetTrigg(0xd,0);
        }
      }
      cVar1 = CheckLeaveAbility(3);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_100077e8,1);
        SendUnitsToTransport(3);
      }
    }
    cVar1 = Trigg(0xc);
    if ((cVar1 == '\0') && (cVar1 = Trigg(0x16), cVar1 != '\0')) {
      SelectUnits(&DAT_10007818,0);
      cVar1 = CheckLeaveAbility(3);
      if ((cVar1 != '\0') && (iVar2 = GetNInside(3), 0 < iVar2)) {
        PushAllUnitsAway(3);
        cVar1 = Trigg(0x17);
        if (cVar1 == '\0') {
          RunTimer(0x11,2000);
        }
        SetTrigg(0x16,0);
      }
    }
    cVar1 = Trigg(0xd);
    if ((cVar1 == '\0') && (cVar1 = Trigg(0x17), cVar1 != '\0')) {
      SelectUnits(&DAT_10007820,0);
      cVar1 = CheckLeaveAbility(3);
      if ((cVar1 != '\0') && (iVar2 = GetNInside(3), 0 < iVar2)) {
        PushAllUnitsAway(3);
        cVar1 = Trigg(0x16);
        if (cVar1 == '\0') {
          RunTimer(0x11,2000);
        }
        SetTrigg(0x17,0);
      }
    }
    cVar1 = Trigg(0x16);
    if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10007948), 0 < iVar2)) {
      iVar2 = FUN_100010a6(&DAT_10007a40,2);
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,2);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,1);
          if (0 < iVar2) {
            uVar14 = 1;
            goto LAB_10001e1c;
          }
          iVar2 = FUN_100010a6(&DAT_10007a38,2);
          if (iVar2 < 1) {
            iVar2 = FUN_100010a6(&DAT_10007a38,1);
            if (iVar2 < 1) goto LAB_10001db8;
            uVar14 = 1;
            puVar13 = &DAT_10007a38;
            goto LAB_10001e5c;
          }
          uVar14 = 2;
          puVar13 = &DAT_10007a38;
          puVar12 = &DAT_10007928;
        }
        else {
          uVar14 = 2;
LAB_10001e1c:
          puVar13 = &DAT_10007a48;
LAB_10001e5c:
          puVar12 = &DAT_10007948;
        }
        AttackEnemyInZone(puVar12,puVar13,uVar14);
      }
      else {
        AttackEnemyInZone(&DAT_10007948,&DAT_10007a40);
      }
    }
LAB_10001db8:
    puVar13 = &DAT_10007a48;
    cVar1 = Trigg(0x17);
    if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_100077e8), 0 < iVar2)) {
      iVar2 = FUN_100010a6(&DAT_10007a40,2);
      uVar14 = 2;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,2);
        if (0 < iVar2) {
          uVar14 = 2;
          goto LAB_10001eb7;
        }
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (0 < iVar2) {
LAB_10001eb4:
          uVar14 = 1;
          goto LAB_10001eb7;
        }
        puVar13 = &DAT_10007a38;
        iVar2 = FUN_100010a6(&DAT_10007a38,2);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a38,1);
          if (iVar2 < 1) goto LAB_10001ec1;
          goto LAB_10001eb4;
        }
        uVar14 = 2;
        puVar13 = &DAT_10007a38;
        puVar12 = &DAT_10007928;
      }
      else {
        puVar13 = &DAT_10007a40;
LAB_10001eb7:
        puVar12 = &DAT_100077e8;
      }
      AttackEnemyInZone(puVar12,puVar13,uVar14);
    }
LAB_10001ec1:
    iVar2 = GetTotalAmount0(&DAT_10007970);
    if (0 < iVar2) {
      iVar2 = FUN_100010a6(&DAT_10007a40,2);
      uVar14 = 2;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,2);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,1);
          if (iVar2 < 1) {
            iVar2 = FUN_100010a6(&DAT_10007a38,2);
            if (iVar2 < 1) {
              iVar2 = FUN_100010a6(&DAT_10007a38,1);
              if (iVar2 < 1) goto LAB_10001f51;
              uVar14 = 1;
            }
            else {
              uVar14 = 2;
            }
            puVar13 = &DAT_10007a38;
            goto LAB_10001f4b;
          }
          uVar14 = 1;
        }
        else {
          uVar14 = 2;
        }
        puVar13 = &DAT_10007a48;
      }
      else {
        puVar13 = &DAT_10007a40;
      }
LAB_10001f4b:
      AttackEnemyInZone(&DAT_10007970,puVar13,uVar14);
    }
LAB_10001f51:
    iVar2 = GetTotalAmount0(&DAT_100077f0);
    if (0 < iVar2) {
      iVar2 = FUN_100010a6(&DAT_10007a40,2);
      uVar14 = 2;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,2);
        if (0 < iVar2) {
          uVar14 = 2;
LAB_10001fa9:
          puVar13 = &DAT_10007a48;
          goto LAB_10001fe9;
        }
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (0 < iVar2) {
          uVar14 = 1;
          goto LAB_10001fa9;
        }
        iVar2 = FUN_100010a6(&DAT_10007a38,2);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a38,1);
          if (iVar2 < 1) goto LAB_10001fef;
          uVar14 = 1;
          puVar13 = &DAT_10007a38;
          goto LAB_10001fe9;
        }
        uVar14 = 2;
        puVar13 = &DAT_10007a38;
        puVar12 = &DAT_10007928;
      }
      else {
        puVar13 = &DAT_10007a40;
LAB_10001fe9:
        puVar12 = &DAT_100077f0;
      }
      AttackEnemyInZone(puVar12,puVar13,uVar14);
    }
LAB_10001fef:
    iVar2 = FUN_100010a6(&DAT_10007920,2);
    iVar3 = FUN_100010a6(&DAT_10007920,1);
    if (iVar2 + iVar3 < 1) {
      cVar1 = Trigg(0x15);
      if (cVar1 == '\0') {
        FUN_1000113d(&DAT_10007838,&DAT_10007920,0xa1);
        FUN_1000113d(&DAT_10007908,&DAT_10007920,0xa1);
        SetTrigg(0x15,1);
      }
    }
    else {
      iVar2 = FUN_100010a6(&DAT_10007920,1);
      if (iVar2 < 1) {
        AttackEnemyInZone(&DAT_10007838,&DAT_10007920,2);
        AttackEnemyInZone(&DAT_10007908,&DAT_10007920,2);
        cVar1 = Trigg(0xc);
        if (cVar1 != '\0') {
          AttackEnemyInZone(&DAT_10007948,&DAT_10007920,2);
        }
        cVar1 = Trigg(0xd);
        if (cVar1 != '\0') {
          uVar14 = 2;
          goto LAB_10002099;
        }
      }
      else {
        AttackEnemyInZone(&DAT_10007838,&DAT_10007920,1);
        AttackEnemyInZone(&DAT_10007908,&DAT_10007920,1);
        cVar1 = Trigg(0xc);
        if (cVar1 != '\0') {
          AttackEnemyInZone(&DAT_10007948,&DAT_10007920,1);
        }
        cVar1 = Trigg(0xd);
        if (cVar1 != '\0') {
          uVar14 = 1;
LAB_10002099:
          AttackEnemyInZone(&DAT_100077e8,&DAT_10007920,uVar14);
        }
      }
      cVar1 = Trigg(0x15);
      if (cVar1 != '\0') {
        cVar1 = Trigg(0xc);
        if (cVar1 != '\0') {
          SelectUnits(&DAT_10007818,0);
          PushAllUnitsAway(3);
          FUN_1000113d(&DAT_10007948,&DAT_10007920,0xc4);
        }
        cVar1 = Trigg(0xd);
        if (cVar1 != '\0') {
          SelectUnits(&DAT_10007820,0);
          PushAllUnitsAway(3);
          FUN_1000113d(&DAT_100077e8,&DAT_10007920,0xc4);
        }
        SetTrigg(0x15,0);
      }
    }
  }
  cVar1 = Trigg(0x5e);
  if (cVar1 != '\0') {
    cVar1 = Trigg(0x1a);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0xf);
      if (cVar1 != '\0') {
        FUN_1000118a(&DAT_10007928,&DAT_100078a8,&DAT_100079c8,0xf);
      }
      cVar1 = Trigg(0xe);
      if (cVar1 != '\0') {
        FUN_1000118a(&DAT_100077e0,&DAT_10007a28,&DAT_10007a18,0xf);
      }
      FUN_1000118a(&DAT_10007830,&DAT_100078a8,&DAT_100079c8,3);
      FUN_1000118a(&DAT_10007830,&DAT_100078a8,&DAT_100078c0,3);
      FUN_1000118a(&DAT_10007900,&DAT_10007a28,&DAT_10007a18,3);
      FUN_1000118a(&DAT_10007900,&DAT_10007a28,&DAT_100079f0,3);
    }
    cVar1 = TimerDone(0x10);
    if (cVar1 != '\0') {
      ClearSelection(4);
      SelectUnits(&DAT_10007808,0);
      SelDie(4);
      SelectUnits(&DAT_10007810,0);
      SelDie(4);
      FreeTimer(0x10);
    }
    cVar1 = TimerDone(0xf);
    if (cVar1 != '\0') {
      cVar1 = Trigg(0xe);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10007808), iVar2 == 0)) {
        FUN_10001154(&DAT_10007808,&DAT_10007a08,&DAT_10007a98,4);
        SelectUnits(&DAT_10007808,0);
        SelSendTo(4,&DAT_10007878,0x40,0);
      }
      cVar1 = Trigg(0xf);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10007810), iVar2 == 0)) {
        FUN_10001154(&DAT_10007810,&DAT_10007a08,&DAT_10007aa0,4);
        SelectUnits(&DAT_10007810,0);
        SelSendTo(4,&DAT_10007880,0x40,0);
      }
      iVar2 = GetTotalAmount0(&DAT_100077e0);
      iVar3 = GetTotalAmount0(&DAT_10007928);
      if (iVar2 + iVar3 < 10) {
        cVar1 = Trigg(0x18);
        if (cVar1 == '\0') {
          RemoveGroup(&DAT_10007928,&DAT_10007938);
        }
        cVar1 = Trigg(0x19);
        if (cVar1 == '\0') {
          RemoveGroup(&DAT_100077e0,&DAT_100077d8);
        }
        iStack_4 = 0x14;
        do {
          ProduceUnitFast(&DAT_100078a8,&DAT_100078c0,&DAT_10007928,0);
          ProduceUnitFast(&DAT_100078a8,&DAT_100079c8,&DAT_10007928,0);
          ProduceUnitFast(&DAT_10007a28,&DAT_10007a18,&DAT_100077e0,0);
          ProduceUnitFast(&DAT_10007a28,&DAT_100079f0,&DAT_100077e0,0);
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
        SetTrigg(0xe,1);
        SetTrigg(0xf,1);
      }
      RunTimer(0xf,1000);
    }
    cVar1 = Trigg(0x1a);
    if ((((cVar1 != '\0') && (cVar1 = Trigg(0xe), cVar1 != '\0')) &&
        (iVar2 = GetTotalAmount0(&DAT_10007808), 0 < iVar2)) &&
       (iVar2 = GetTotalAmount0(&DAT_10007928), iVar2 != 0)) {
      SelectUnits(&DAT_10007808,0);
      iVar2 = GetTotalAmount0(&DAT_10007928);
      iVar3 = GetNInside(4);
      if ((iVar3 == iVar2) || (iVar2 = GetNInside(4), iVar2 == 0x50)) {
        SelSendTo(4,&DAT_10007888,0xc4,0);
        SetTrigg(0x18,1);
        cVar1 = CheckLeaveAbility(4);
        if (cVar1 == '\0') {
          SetTrigg(0xe,0);
        }
      }
      cVar1 = CheckLeaveAbility(4);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_10007928,1);
        SendUnitsToTransport(4);
      }
    }
    cVar1 = Trigg(0x1a);
    if (((cVar1 != '\0') && (cVar1 = Trigg(0xf), cVar1 != '\0')) &&
       ((iVar2 = GetTotalAmount0(&DAT_10007810), 0 < iVar2 &&
        (iVar2 = GetTotalAmount0(&DAT_100077e0), iVar2 != 0)))) {
      SelectUnits(&DAT_10007810,0);
      iVar2 = GetTotalAmount0(&DAT_100077e0);
      iVar3 = GetNInside(4);
      if ((iVar3 == iVar2) || (iVar2 = GetNInside(4), iVar2 == 0x50)) {
        SelSendTo(4,&DAT_10007890,0xc4,0);
        SetTrigg(0x19,1);
        cVar1 = CheckLeaveAbility(4);
        if (cVar1 == '\0') {
          SetTrigg(0xf,0);
        }
      }
      cVar1 = CheckLeaveAbility(4);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_100077e0,1);
        SendUnitsToTransport(4);
      }
    }
    cVar1 = Trigg(0xe);
    if ((cVar1 == '\0') && (cVar1 = Trigg(0x18), cVar1 != '\0')) {
      SelectUnits(&DAT_10007808,0);
      cVar1 = CheckLeaveAbility(4);
      if ((cVar1 != '\0') && (iVar2 = GetNInside(4), 0 < iVar2)) {
        PushAllUnitsAway(4);
        cVar1 = Trigg(0x19);
        if (cVar1 == '\0') {
          RunTimer(0x10,2000);
        }
        SetTrigg(0x18,0);
      }
    }
    cVar1 = Trigg(0xf);
    if ((cVar1 == '\0') && (cVar1 = Trigg(0x19), cVar1 != '\0')) {
      SelectUnits(&DAT_10007810,0);
      cVar1 = CheckLeaveAbility(4);
      if ((cVar1 != '\0') && (iVar2 = GetNInside(4), 0 < iVar2)) {
        PushAllUnitsAway(4);
        cVar1 = Trigg(0x18);
        if (cVar1 == '\0') {
          RunTimer(0x10,2000);
        }
        SetTrigg(0x19,0);
      }
    }
    cVar1 = Trigg(0x18);
    if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10007928), 0 < iVar2)) {
      iVar2 = FUN_100010a6(&DAT_10007a38,1);
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,2);
          if (0 < iVar2) {
            uVar14 = 2;
            goto LAB_1000270c;
          }
          iVar2 = FUN_100010a6(&DAT_10007a40,1);
          if (iVar2 < 1) {
            iVar2 = FUN_100010a6(&DAT_10007a40,2);
            if (iVar2 < 1) goto LAB_100026a8;
            uVar14 = 2;
          }
          else {
            uVar14 = 1;
          }
          puVar13 = &DAT_10007a40;
        }
        else {
          uVar14 = 1;
LAB_1000270c:
          puVar13 = &DAT_10007a48;
        }
        AttackEnemyInZone(&DAT_10007928,puVar13,uVar14);
      }
      else {
        AttackEnemyInZone(&DAT_10007928,&DAT_10007a38);
      }
    }
LAB_100026a8:
    puVar13 = &DAT_10007a48;
    cVar1 = Trigg(0x19);
    if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_100077e0), 0 < iVar2)) {
      iVar2 = FUN_100010a6(&DAT_10007a38,1);
      uVar14 = 1;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,2);
          if (iVar2 < 1) {
            iVar2 = FUN_100010a6(&DAT_10007a40,1);
            if (iVar2 < 1) {
              iVar2 = FUN_100010a6(&DAT_10007a40,2);
              if (iVar2 < 1) goto LAB_100027ad;
              uVar14 = 2;
            }
            else {
              uVar14 = 1;
            }
            puVar12 = &DAT_10007a40;
            goto LAB_100027a3;
          }
          uVar14 = 2;
        }
        else {
          uVar14 = 1;
        }
        puVar12 = &DAT_10007a48;
      }
      else {
        puVar12 = &DAT_10007a38;
      }
LAB_100027a3:
      AttackEnemyInZone(&DAT_100077e0,puVar12,uVar14);
    }
LAB_100027ad:
    iVar2 = GetTotalAmount0(&DAT_10007938);
    if (0 < iVar2) {
      iVar2 = FUN_100010a6(&DAT_10007a38,1);
      uVar14 = 1;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,2);
          if (iVar2 < 1) {
            puVar13 = &DAT_10007a40;
            iVar2 = FUN_100010a6(&DAT_10007a40,1);
            if (0 < iVar2) goto LAB_10002805;
            iVar2 = FUN_100010a6(&DAT_10007a40,2);
            if (iVar2 < 1) goto LAB_10002824;
          }
          uVar14 = 2;
        }
        else {
LAB_10002805:
          uVar14 = 1;
        }
      }
      else {
        puVar13 = &DAT_10007a38;
      }
      AttackEnemyInZone(&DAT_10007938,puVar13,uVar14);
    }
LAB_10002824:
    iVar2 = GetTotalAmount0(&DAT_100077d8);
    if (0 < iVar2) {
      iVar2 = FUN_100010a6(&DAT_10007a38,1);
      uVar14 = 1;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,2);
          if (iVar2 < 1) {
            iVar2 = FUN_100010a6(&DAT_10007a40,1);
            if (iVar2 < 1) {
              iVar2 = FUN_100010a6(&DAT_10007a40,2);
              if (iVar2 < 1) goto LAB_100028b4;
              uVar14 = 2;
            }
            else {
              uVar14 = 1;
            }
            puVar13 = &DAT_10007a40;
            goto LAB_100028ae;
          }
          uVar14 = 2;
        }
        else {
          uVar14 = 1;
        }
        puVar13 = &DAT_10007a48;
      }
      else {
        puVar13 = &DAT_10007a38;
      }
LAB_100028ae:
      AttackEnemyInZone(&DAT_100077d8,puVar13,uVar14);
    }
LAB_100028b4:
    iVar2 = FUN_100010a6(&DAT_10007918,2);
    iVar3 = FUN_100010a6(&DAT_10007918,1);
    if (iVar2 + iVar3 < 1) {
      cVar1 = Trigg(0x1a);
      if (cVar1 == '\0') {
        FUN_1000113d(&DAT_10007830,&DAT_10007918,0xa0);
        FUN_1000113d(&DAT_10007900,&DAT_10007918,0xa0);
        SetTrigg(0x1a,1);
      }
    }
    else {
      iVar2 = FUN_100010a6(&DAT_10007918,1);
      if (iVar2 < 1) {
        AttackEnemyInZone(&DAT_10007830,&DAT_10007918,2);
        AttackEnemyInZone(&DAT_10007900,&DAT_10007918,2);
        cVar1 = Trigg(0xe);
        if (cVar1 != '\0') {
          AttackEnemyInZone(&DAT_10007928,&DAT_10007918,2);
        }
        cVar1 = Trigg(0xf);
        if (cVar1 != '\0') {
          uVar14 = 2;
          goto LAB_1000295e;
        }
      }
      else {
        AttackEnemyInZone(&DAT_10007830,&DAT_10007918,1);
        AttackEnemyInZone(&DAT_10007900,&DAT_10007918,1);
        cVar1 = Trigg(0xe);
        if (cVar1 != '\0') {
          AttackEnemyInZone(&DAT_10007928,&DAT_10007918,1);
        }
        cVar1 = Trigg(0xf);
        if (cVar1 != '\0') {
          uVar14 = 1;
LAB_1000295e:
          AttackEnemyInZone(&DAT_100077e0,&DAT_10007918,uVar14);
        }
      }
      cVar1 = Trigg(0x1a);
      if (cVar1 != '\0') {
        cVar1 = Trigg(0xe);
        if (cVar1 != '\0') {
          SelectUnits(&DAT_10007808,0);
          PushAllUnitsAway(4);
          FUN_1000113d(&DAT_10007928,&DAT_10007918,0xc4);
        }
        cVar1 = Trigg(0xf);
        if (cVar1 != '\0') {
          SelectUnits(&DAT_10007810,0);
          PushAllUnitsAway(4);
          FUN_1000113d(&DAT_100077e0,&DAT_10007918,0xc4);
        }
        SetTrigg(0x1a,0);
      }
    }
  }
  cVar1 = TimerDone(10);
  if (cVar1 != '\0') {
    FUN_10001012(1);
    FUN_10001012(2);
    FUN_10001071(3);
    FUN_10001071(4);
    FUN_10001071(5);
    FUN_10001071(6);
    RunTimer(10,1000);
  }
  cVar1 = Trigg(0);
  if (cVar1 != '\0') {
    DAT_100077d0 = GetDiff(0);
    DAT_10007a50 = DAT_100077d0 + 1;
    DAT_10007ab8 = 0;
    ChangeFriends(1,0x26);
    ChangeFriends(2,0x26);
    ChangeFriends(5,0x26);
    ChangeFriends(3,0x59);
    ChangeFriends(4,0x59);
    ChangeFriends(6,0x59);
    SetResource(0,2,0);
    if (DAT_100077d0 == 0) {
      ClearSelection(1);
      SelectUnits(&DAT_100079e0,0);
      SelDie(1);
      ClearSelection(2);
      SelectUnits(&DAT_100079e8,0);
      SelDie(2);
      ClearSelection(1);
      ClearSelection(2);
    }
    if (DAT_100077d0 == 1) {
      ClearSelection(2);
      SelectUnits(&DAT_100079e8,0);
      SelDie(2);
      ClearSelection(2);
    }
    EnableUnit(0,&DAT_10007aa8,0);
    EnableUnit(0,&DAT_10007a08,0);
    EnableUnit(0,&DAT_100079d0,0);
    EnableUnit(0,&DAT_10007af0,0);
    EnableUnit(0,&DAT_100079c0,0);
    EnableUnit(0,&DAT_10007b18,0);
    EnableUnit(0,&DAT_10007840,0);
    EnableUnit(0,&DAT_10007ac8,0);
    EnableUnit(0,&DAT_10007b20,0);
    EnableUnit(0,&DAT_10007a30,0);
    EnableUnit(0,&DAT_10007ae8,0);
    EnableUnit(0,&DAT_10007ae0,0);
    EnableUnit(0,&DAT_10007a00,0);
    EnableUnit(0,&DAT_100079b0,0);
    EnableUnit(0,&DAT_100079b8,0);
    EnableUnit(0,&DAT_10007af8,0);
    InitialUpgrade(DAT_100072e8,"MAINSA");
    InitialUpgrade(DAT_100072e8,"AKA30SA");
    InitialUpgrade(DAT_100072e8,"AKA06SA");
    InitialUpgrade(DAT_100072e8,"AKA29SA");
    InitialUpgrade(DAT_100072e0,"MAINGE");
    InitialUpgrade(DAT_100072d8,"MAINDA");
    InitialUpgrade("GBar3","MAINSA");
    InitialUpgrade("GBar4","MAINSA");
    if (DAT_100077d0 == 0) {
      InitialUpgrade(DAT_100072e8,"AKA16SA");
      InitialUpgrade(DAT_100072e8,"AKA20SA");
      InitialUpgrade(DAT_100072e8,"AKA12SA");
      InitialUpgrade(DAT_100072e8,"AKA13SA");
      InitialUpgrade(DAT_100072e8,"AKA32SA");
LAB_10002c69:
      InitialUpgrade(DAT_100072e8,"AKA17SA");
      InitialUpgrade(DAT_100072e8,"AKA27SA");
      InitialUpgrade(DAT_100072e8,"AKA28SA");
      InitialUpgrade(DAT_100072e8,"AKA14SA");
      InitialUpgrade(DAT_100072e8,"AKA15SA");
      InitialUpgrade(DAT_100072e8,"AKA33SA");
    }
    else if (DAT_100077d0 == 1) goto LAB_10002c69;
    if (DAT_100077d0 == 1) {
LAB_10002cef:
      InitialUpgrade(DAT_100071c4,"AKA27DA");
    }
    else {
      if (DAT_100077d0 == 2) {
LAB_10002cc4:
        InitialUpgrade(DAT_100071c4,"AKA16DA");
        InitialUpgrade(DAT_100071c4,"AKA28DA");
        InitialUpgrade(DAT_100072e0,"KUZ04GE");
        InitialUpgrade(DAT_100072d8,"KUZ04DA");
        goto LAB_10002cef;
      }
      if (DAT_100077d0 == 3) {
        InitialUpgrade(DAT_100071c4,"AKA17DA");
        InitialUpgrade(DAT_100071c4,"AKA20DA");
        goto LAB_10002cc4;
      }
    }
    iVar2 = 0;
    if (DAT_100077d0 * 3 != -5 && -1 < DAT_100077d0 * 3 + 5) {
      do {
        FUN_10001154(&DAT_10007828,&DAT_100077b8,&DAT_10007a68,5);
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_100077d0 * 3 + 5);
    }
    if (1 < DAT_100077d0) {
      FUN_10001154(&DAT_10007828,&DAT_10007800,&DAT_10007a70,5);
    }
    if (2 < DAT_100077d0) {
      FUN_10001154(&DAT_10007828,&DAT_10007800,&DAT_10007a70,5);
    }
    FUN_1000113d(&DAT_10007828,&DAT_10007a68,0x40);
    StartAI(1,"GERMAN.0",2,1,1,DAT_100077d0);
    StartAI(2,"DENMARK.0",2,1,1,DAT_100077d0);
    RunTimer(3,0x96);
    RunTimer(5,1);
    RunTimer(6,300);
    RunTimer(7,30000);
    RunTimer(8,500);
    RunTimer(10,0);
    RunTimer(0xe,100);
    RunTimer(0xf,100);
    iStack_4 = 5;
    do {
      ProduceUnitFast(&DAT_100078a8,&DAT_100078c0,&DAT_10007830,0);
      ProduceUnitFast(&DAT_100078a8,&DAT_100079c8,&DAT_10007830,0);
      ProduceUnitFast(&DAT_10007a28,&DAT_10007a18,&DAT_10007900,0);
      ProduceUnitFast(&DAT_10007a28,&DAT_100079f0,&DAT_10007900,0);
      ProduceUnitFast(&DAT_100078a0,&DAT_100078c0,&DAT_10007838,0);
      ProduceUnitFast(&DAT_100078a0,&DAT_100079c8,&DAT_10007838,0);
      ProduceUnitFast(&DAT_10007a20,&DAT_10007a18,&DAT_10007908,0);
      ProduceUnitFast(&DAT_10007a20,&DAT_100079f0,&DAT_10007908,0);
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
    iVar2 = 1;
    do {
      iStack_4 = 0;
      if (0 < DAT_100077d0) {
        do {
          iVar3 = 0;
          do {
            AddResource(iVar2,iVar3,15000);
            iVar3 = iVar3 + 1;
          } while (iVar3 < 6);
          iStack_4 = iStack_4 + 1;
        } while (iStack_4 < DAT_100077d0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    SetLightSpot(&DAT_10007918,4,1);
    SetLightSpot(&DAT_10007920,4,2);
    ShowPage("#PAGE1");
    ShowPage("#PAGE2");
    SetTrigg(0,0);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(8), pcVar11 = (void*)&SetTrigg, cVar1 != '\0')) {
    FUN_1000113d(&DAT_10007828,&DAT_10007960,0x40);
    SetTrigg(8,0);
  }
  iVar2 = GetTotalAmount1(&DAT_10007b20,0);
  EnableUnit(0,&DAT_10007b20,iVar2 == 0);
  iVar2 = GetTotalAmount1(&DAT_10007a30,0);
  EnableUnit(0,&DAT_10007a30,iVar2 == 0);
  cVar1 = TimerDone(3);
  if ((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 != '\0')) {
    FUN_10001154(&DAT_10007a80,&DAT_100078b8,&DAT_10007940,6);
    FUN_1000113d(&DAT_10007a80,&DAT_10007968,0x40);
    RunTimer(3,500);
    SetTrigg(3,0);
    SetTrigg(4,0);
  }
  cVar1 = Trigg(3);
  if (cVar1 == '\0') {
    SelectUnits(&DAT_10007a80,0);
    SelCenter(&DAT_10007b00,6,1000);
    ClearLightSpot(3);
    SetLightSpot(&DAT_10007b00,1,3);
  }
  cVar1 = TimerDone(3);
  if (((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount1(&DAT_10007940,&DAT_10007a80), 0 < iVar2)) {
    SelectUnits(&DAT_10007a80,0);
    SelErase(6);
    RunTimer(3,1000);
    SetTrigg(3,1);
  }
  iVar2 = GetUnitsAmount1(&DAT_10007968,&DAT_10007a80);
  if (0 < iVar2) {
    cVar1 = Trigg(4);
    if (cVar1 == '\0') {
      uVar14 = 0x40;
      puVar13 = &DAT_10007950;
    }
    else {
      uVar14 = 0;
      puVar13 = &DAT_10007940;
    }
    FUN_1000113d(&DAT_10007a80,puVar13,uVar14);
  }
  cVar1 = Trigg(4);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007950,&DAT_10007a80), 0 < iVar2)) {
    RunTimer(4,500);
    SetTrigg(4,1);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
    AddResource(0,0,20000);
    AddResource(0,3,20000);
    AddResource(0,1,20000);
    AddResource(0,4,20000);
    AddResource(0,5,20000);
    FUN_1000113d(&DAT_10007a80,&DAT_10007968,0);
    FreeTimer(4);
  }
  cVar1 = Trigg(3);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10007a80), iVar2 == 0)) {
    cVar1 = Trigg(4);
    if (cVar1 == '\0') {
      uVar14 = 500;
    }
    else {
      uVar14 = 4000;
    }
    RunTimer(3,uVar14);
    SetTrigg(3,1);
  }
  cVar1 = TimerDone(5);
  if (cVar1 == '\0') goto LAB_10003274;
  if (DAT_10007a50 <= DAT_10007ab8) {
    DAT_10007ab8 = 0;
    RunTimer(5,(7 - DAT_100077d0) * 1000);
    goto LAB_10003274;
  }
  cVar1 = Trigg(5);
  if (cVar1 == '\0') {
    cVar1 = Trigg(6);
    if (cVar1 == '\0') {
      if (DAT_100077d0 < 2) {
        puVar13 = &DAT_10007978;
        goto LAB_10003200;
      }
      puVar13 = &DAT_10007980;
      puVar12 = &DAT_10007800;
    }
    else {
      puVar13 = &DAT_10007980;
LAB_10003200:
      puVar12 = &DAT_100077b8;
    }
    FUN_10001154(&DAT_100078d0,puVar12,puVar13,5);
    cVar1 = Trigg(6);
    SetTrigg(6,'\x01' - (cVar1 != '\0'));
  }
  else {
    FUN_10001154(&DAT_100078d0,&DAT_100077b8,&DAT_10007978,5);
  }
  cVar1 = Trigg(5);
  SetTrigg(5,'\x01' - (cVar1 != '\0'));
  FUN_1000113d(&DAT_100078d0,&DAT_10007b00,0x40);
  RunTimer(5,0x96);
  DAT_10007ab8 = DAT_10007ab8 + 1;
LAB_10003274:
  cVar1 = TimerDone(6);
  if (cVar1 != '\0') {
    FUN_1000113d(&DAT_100078d0,&DAT_10007b00,0x40);
    RunTimer(6,300);
  }
  if ((DAT_100077d0 != 0) && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    DAT_10007a50 = DAT_10007a50 + 1;
    RunTimer(7,(4 - DAT_100077d0) * 15000);
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
  cVar1 = Trigg(0x5d);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10007a20);
    iVar3 = GetTotalAmount0(&DAT_100078a0);
    if (iVar2 + iVar3 == 0) {
      ShowPage("#PAGE13");
      cVar1 = Trigg(0x5e);
      if (cVar1 != '\0') {
        ShowPage("#PAGE4");
      }
      SetTrigg(0x5d,0);
    }
  }
  cVar1 = Trigg(0x5e);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(4), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10007a28);
    iVar3 = GetTotalAmount0(&DAT_100078a8);
    if (iVar2 + iVar3 == 0) {
      ShowPage("#PAGE14");
      cVar1 = Trigg(0x5d);
      if (cVar1 != '\0') {
        ShowPage("#PAGE4");
      }
      SetTrigg(0x5e,0);
    }
  }
  cVar1 = Trigg(0x5a);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    iVar2 = GetTotalAmount1(&DAT_10007ad0,0);
    iVar3 = GetTotalAmount1(&DAT_10007ac0,0);
    iVar4 = GetTotalAmount1(&DAT_10007910,0);
    iVar5 = GetTotalAmount1(&DAT_100077b0,0);
    iVar6 = GetTotalAmount1(&DAT_100079f8,0);
    iVar7 = GetTotalAmount1(&DAT_100079d8,0);
    iVar8 = GetTotalAmount1(&DAT_10007b08,0);
    iVar9 = GetTotalAmount1(&DAT_100078b8,0);
    if (iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 == 0) {
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

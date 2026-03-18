#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10007390[] = "GE2";
char DAT_1000739c[] = "GP";
char DAT_100073a0[] = "ZP6";
char DAT_100073a4[] = "ZP5";
char DAT_100073a8[] = "ZP4";
char DAT_100073bc[] = "ZP3";
char DAT_100073c0[] = "ZP2";
char DAT_100073c4[] = "ZP1";
char DAT_100073d8[] = "ZP23";
char DAT_100073e0[] = "ZK23";
char DAT_100073e8[] = "ZP22";
char DAT_100073f0[] = "ZK22";
char DAT_10007408[] = "ZP21";
char DAT_10007410[] = "ZM21";
char DAT_10007418[] = "ZK21";
char DAT_10007420[] = "ZD21";
char DAT_10007428[] = "ZP12";
char DAT_10007430[] = "ZM12";
char DAT_10007438[] = "ZK12";
char DAT_10007440[] = "ZD12";
char DAT_10007458[] = "ZP11";
char DAT_10007460[] = "ZM11";
char DAT_10007468[] = "ZK11";
char DAT_10007470[] = "ZD11";
char DAT_100074c0[] = "Z03";
char DAT_100074c4[] = "Z4";
char DAT_100074c8[] = "Z3";
char DAT_100074cc[] = "Z2";
char DAT_100074d0[] = "Z1";
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
int DAT_10007b68 = 0;
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
long long DAT_10007c20 = 0;
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
long long DAT_10007cc8 = 0;
long long DAT_10007cd0 = 0;
long long DAT_10007cd8 = 0;
long long DAT_10007ce0 = 0;
long long DAT_10007ce8 = 0;
long long DAT_10007cf0 = 0;
long long DAT_10007cf8 = 0;
long long DAT_10007d00 = 0;
long long DAT_10007d08 = 0;
long long DAT_10007d10 = 0;
long long DAT_10007d18 = 0;
long long DAT_10007d20 = 0;
long long DAT_10007d28 = 0;
long long DAT_10007d30 = 0;
long long DAT_10007d38 = 0;
long long DAT_10007d40 = 0;
long long DAT_10007d48 = 0;
long long DAT_10007d50 = 0;
long long DAT_10007d58 = 0;
long long DAT_10007d60 = 0;
long long DAT_10007d68 = 0;
long long DAT_10007d70 = 0;
long long DAT_10007d78 = 0;
long long DAT_10007d80 = 0;
long long DAT_10007d88 = 0;
long long DAT_10007d90 = 0;
long long DAT_10007d98 = 0;
long long DAT_10007da0 = 0;
long long DAT_10007da8 = 0;
long long DAT_10007db0 = 0;
long long DAT_10007db8 = 0;
long long DAT_10007dc0 = 0;
long long DAT_10007dc8 = 0;
long long DAT_10007dd0 = 0;
long long DAT_10007dd8 = 0;
long long DAT_10007de0 = 0;
long long DAT_10007de8 = 0;
long long DAT_10007df0 = 0;
long long DAT_10007df8 = 0;
long long DAT_10007e00 = 0;
long long DAT_10007e08 = 0;
long long DAT_10007e10 = 0;
long long DAT_10007e18 = 0;
long long DAT_10007e20 = 0;
long long DAT_10007e28 = 0;
long long DAT_10007e30 = 0;
long long DAT_10007e38 = 0;
long long DAT_10007e40 = 0;
long long DAT_10007e48 = 0;
long long DAT_10007e50 = 0;
long long DAT_10007e58 = 0;
long long DAT_10007e60 = 0;
long long DAT_10007e68 = 0;
int DAT_10007e70 = 0;
long long DAT_10007e78 = 0;
long long DAT_10007e80 = 0;
long long DAT_10007e88 = 0;
long long DAT_10007e90 = 0;
long long DAT_10007e98 = 0;
long long DAT_10007ea0 = 0;
long long DAT_10007ea8 = 0;
long long DAT_10007eb0 = 0;
long long DAT_10007eb8 = 0;
long long DAT_10007ec0 = 0;
long long DAT_10007ec8 = 0;
long long DAT_10007ed0 = 0;
long long DAT_10007ed8 = 0;
long long DAT_10007ee0 = 0;
long long DAT_10007ee8 = 0;
long long DAT_10007ef0 = 0;
long long DAT_10007ef8 = 0;
long long DAT_10007f00 = 0;
long long DAT_10007f08 = 0;
long long DAT_10007f10 = 0;
long long DAT_10007f18 = 0;
long long DAT_10007f20 = 0;
long long DAT_10007f28 = 0;
long long DAT_10007f30 = 0;
long long DAT_10007f38 = 0;
long long DAT_10007f40 = 0;
long long DAT_10007f48 = 0;
long long DAT_10007f50 = 0;
long long DAT_10007f58 = 0;
long long DAT_10007f60 = 0;
long long DAT_10007f68 = 0;
long long DAT_10007f70 = 0;

/* Forward declarations */
int FUN_10001012(int param_1);
int FUN_10001030(int param_1,int param_2,int param_3,int param_4);
void FUN_10001072(int param_1,int param_2);
void FUN_1000108a(int param_1,int param_2,int param_3);
BOOL FUN_100010c8(int param_1,int param_2,int param_3,int param_4,
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
  } while (iVar2 < 8);
  return iVar2;
}





int __cdecl
FUN_10001030(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_10001012(param_1);
  SelectUnits(param_1,0);
  ClearSelection(0);
  SetStandGround(iVar1,0);
  SelSendAndKill(iVar1,param_2,param_3,param_4);
  return iVar1;
}





void __cdecl FUN_10001072(int param_1,int param_2)

{
  FUN_10001030(param_1,param_2,200,0);
  return;
}





void __cdecl FUN_1000108a(int param_1,int param_2,int param_3)

{
  FUN_10001030(param_1,param_2,param_3,0);
  return;
}






BOOL __cdecl
FUN_100010c8(int param_1,int param_2,int param_3,int param_4,
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
    SaveSelectedUnits(0,&DAT_10007d48,0);
    ClearSelection(0);
    FUN_1000108a(param_1,param_4,param_5);
    SelectUnits(&DAT_10007d48,0);
  }
  return iVar1 < param_6;
}





void OnInit(void)

{
                    
  RegisterVar(&DAT_10007b68,4);
  RegisterVar(&DAT_10007e70,4);
  SetPlayerName(1,"ENEMY");
  SetPlayerName(2,"ENEMY");
  SetPlayerName(3,"ENEMY");
  SetPlayerName(5,"ENEMY");
  RegisterZone(&DAT_10007f38,"ZAttack");
  RegisterZone(&DAT_10007cf8,DAT_100074d0);
  RegisterZone(&DAT_10007d00,DAT_100074cc);
  RegisterZone(&DAT_10007d10,DAT_100074c8);
  RegisterZone(&DAT_10007d18,DAT_100074c4);
  RegisterZone(&DAT_10007ea0,DAT_100074c0);
  RegisterZone(&DAT_10007af8,"ZTown1");
  RegisterZone(&DAT_10007af0,"ZTown2");
  RegisterZone(&DAT_10007e30,"ZGate1");
  RegisterZone(&DAT_10007e40,"ZGate2");
  RegisterZone(&DAT_10007e38,"ZGate3");
  RegisterZone(&DAT_10007e50,"ZGate4");
  RegisterZone(&DAT_10007e48,"ZGate5");
  RegisterZone(&DAT_10007e60,"ZGate6");
  RegisterZone(&DAT_10007e58,"ZGate7");
  RegisterZone(&DAT_10007bf8,DAT_10007470);
  RegisterZone(&DAT_10007c88,DAT_10007468);
  RegisterZone(&DAT_10007cd0,DAT_10007460);
  RegisterZone(&DAT_10007d20,DAT_10007458);
  RegisterZone(&DAT_10007f20,"ZArt11");
  RegisterZone(&DAT_10007f18,"ZArt12");
  RegisterZone(&DAT_10007c00,DAT_10007440);
  RegisterZone(&DAT_10007c98,DAT_10007438);
  RegisterZone(&DAT_10007cd8,DAT_10007430);
  RegisterZone(&DAT_10007d28,DAT_10007428);
  RegisterZone(&DAT_10007c08,DAT_10007420);
  RegisterZone(&DAT_10007cb0,DAT_10007418);
  RegisterZone(&DAT_10007ce8,DAT_10007410);
  RegisterZone(&DAT_10007d30,DAT_10007408);
  RegisterZone(&DAT_10007f30,"ZArt21");
  RegisterZone(&DAT_10007f28,"ZArt22");
  RegisterZone(&DAT_10007cb0,DAT_10007418);
  RegisterZone(&DAT_10007d30,DAT_10007408);
  RegisterZone(&DAT_10007cb8,DAT_100073f0);
  RegisterZone(&DAT_10007d38,DAT_100073e8);
  RegisterZone(&DAT_10007cc0,DAT_100073e0);
  RegisterZone(&DAT_10007d40,DAT_100073d8);
  RegisterZone(&DAT_10007db0,"ZPrt1");
  RegisterZone(&DAT_10007c68,"ZRaid1");
  RegisterZone(&DAT_10007ed8,DAT_100073c4);
  RegisterZone(&DAT_10007ee0,DAT_100073c0);
  RegisterZone(&DAT_10007ee8,DAT_100073bc);
  RegisterZone(&DAT_10007db8,"ZPrt2");
  RegisterZone(&DAT_10007c60,"ZRaid2");
  RegisterZone(&DAT_10007ef8,DAT_100073a8);
  RegisterZone(&DAT_10007f00,DAT_100073a4);
  RegisterZone(&DAT_10007f08,DAT_100073a0);
  RegisterUnits(&DAT_10007cc8,DAT_1000739c);
  RegisterUnits(&DAT_10007de0,"GErase");
  RegisterUnits(&DAT_10007da8,DAT_10007390);
  RegisterUnits(&DAT_10007c78,"GTower1");
  RegisterUnits(&DAT_10007c90,"GTower2");
  RegisterUnits(&DAT_10007e80,"GShip0");
  RegisterUnits(&DAT_10007e90,"GShip1");
  RegisterUnits(&DAT_10007e88,"GShip2");
  RegisterUnits(&DAT_10007b78,"GGate1");
  RegisterUnits(&DAT_10007b70,"GGate2");
  RegisterUnits(&DAT_10007b88,"GGate3");
  RegisterUnits(&DAT_10007b80,"GGate4");
  RegisterUnits(&DAT_10007b98,"GGate5");
  RegisterUnits(&DAT_10007b90,"GGate6");
  RegisterUnits(&DAT_10007ba0,"GGate7");
  RegisterDynGroup(&DAT_10007d68);
  RegisterVar(&DAT_10007d68,8);
  RegisterDynGroup(&DAT_10007f60);
  RegisterVar(&DAT_10007f60,8);
  RegisterDynGroup(&DAT_10007b08);
  RegisterVar(&DAT_10007b08,8);
  RegisterDynGroup(&DAT_10007b50);
  RegisterVar(&DAT_10007b50,8);
  RegisterDynGroup(&DAT_10007bc0);
  RegisterVar(&DAT_10007bc0,8);
  RegisterDynGroup(&DAT_10007c40);
  RegisterVar(&DAT_10007c40,8);
  RegisterDynGroup(&DAT_10007c48);
  RegisterVar(&DAT_10007c48,8);
  RegisterDynGroup(&DAT_10007f68);
  RegisterVar(&DAT_10007f68,8);
  RegisterDynGroup(&DAT_10007b18);
  RegisterVar(&DAT_10007b18,8);
  RegisterDynGroup(&DAT_10007b58);
  RegisterVar(&DAT_10007b58,8);
  RegisterDynGroup(&DAT_10007bc8);
  RegisterVar(&DAT_10007bc8,8);
  RegisterDynGroup(&DAT_10007d70);
  RegisterVar(&DAT_10007d70,8);
  RegisterDynGroup(&DAT_10007f70);
  RegisterVar(&DAT_10007f70,8);
  RegisterDynGroup(&DAT_10007b28);
  RegisterVar(&DAT_10007b28,8);
  RegisterDynGroup(&DAT_10007b60);
  RegisterVar(&DAT_10007b60,8);
  RegisterDynGroup(&DAT_10007bd0);
  RegisterVar(&DAT_10007bd0,8);
  RegisterDynGroup(&DAT_10007c50);
  RegisterVar(&DAT_10007c50,8);
  RegisterDynGroup(&DAT_10007c58);
  RegisterVar(&DAT_10007c58,8);
  RegisterDynGroup(&DAT_10007b30);
  RegisterVar(&DAT_10007b30,8);
  RegisterDynGroup(&DAT_10007bd8);
  RegisterVar(&DAT_10007bd8,8);
  RegisterDynGroup(&DAT_10007b40);
  RegisterVar(&DAT_10007b40,8);
  RegisterDynGroup(&DAT_10007be8);
  RegisterVar(&DAT_10007be8,8);
  RegisterUnits(&DAT_10007d98,"GArt1");
  RegisterUnitType(&DAT_10007ef0,"Pushka(sp)");
  RegisterUnits(&DAT_10007c10,"GBar1");
  RegisterUnitType(&DAT_10007f58,"Pikiner_evro(sp)");
  RegisterUnitType(&DAT_10007ce0,"Strelec_Spain(sp)");
  RegisterUnits(&DAT_10007dd0,"GDip1");
  RegisterUnitType(&DAT_10007f40,"Grenader_DIP(sp)");
  RegisterUnitType(&DAT_10007e98,"Strelec_Algir_DIP(sp)");
  RegisterUnitType(&DAT_10007b00,"Rundashir_Avstria_DIP(sp)");
  RegisterUnits(&DAT_10007e08,"GStb1");
  RegisterUnitType(&DAT_10007ed0,"Konni_Ricar(sp)");
  RegisterUnitType(&DAT_10007bb0,"Dragun(sp)");
  RegisterUnits(&DAT_10007d80,"GPrt1");
  RegisterUnitType(&DAT_10007f50,"Lodka(sp)");
  RegisterUnitType(&DAT_10007de8,"Fregat(sp)");
  RegisterUnits(&DAT_10007b38,"GCath1");
  RegisterUnitType(&DAT_10007e78,"Sveshenik_evro(sp)");
  RegisterUnits(&DAT_10007da0,"GArt2");
  RegisterUnitType(&DAT_10007ae8,"Pushka(fr)");
  RegisterUnits(&DAT_10007c18,"GBar2");
  RegisterUnitType(&DAT_10007d60,"Pik_evro_rus(fr)");
  RegisterUnitType(&DAT_10007eb0,"Strelec_France(fr)");
  RegisterUnits(&DAT_10007dd8,"GDip2");
  RegisterUnitType(&DAT_10007c28,"Grenader_DIP(fr)");
  RegisterUnitType(&DAT_10007b48,"Strelec_Algir_DIP(fr)");
  RegisterUnitType(&DAT_10007cf0,"Rundashir_Avstria_DIP(fr)");
  RegisterUnits(&DAT_10007e10,"GStb2");
  RegisterUnitType(&DAT_10007f10,"Kirasir(fr)");
  RegisterUnitType(&DAT_10007e00,"Korolrv_Mus(fr)");
  RegisterUnitType(&DAT_10007ae0,"Gusar_evro(fr)");
  RegisterUnits(&DAT_10007d90,"GPrt2");
  RegisterUnitType(&DAT_10007e18,"Lodka(fr)");
  RegisterUnitType(&DAT_10007bf0,"Fregat(fr)");
  RegisterUnits(&DAT_10007b20,"GCath2");
  RegisterUnitType(&DAT_10007be0,"Sveshenik_evro(fr)");
  RegisterUnitType(&DAT_10007dc8,"Krestian_Sved(fr)");
  RegisterUnitType(&DAT_10007df0,"Kreposnoi_portugal(sp)");
  RegisterUnitType(&DAT_10007b10,"Kreposnoi_portugal(PO)");
  RegisterUnitType(&DAT_10007ba8,"Center_France(fr)");
  RegisterUnitType(&DAT_10007dc0,"Center_Spain(sp)");
  RegisterUnitType(&DAT_10007ea8,"Center_Portugal(PO)");
  RegisterUnitType(&DAT_10007ec8,"Center_Holland(HO)");
  RegisterDynGroup(&DAT_10007e28);
  RegisterVar(&DAT_10007e28,8);
  RegisterDynGroup(&DAT_10007c30);
  RegisterVar(&DAT_10007c30,8);
  RegisterDynGroup(&DAT_10007e20);
  RegisterVar(&DAT_10007e20,8);
  RegisterDynGroup(&DAT_10007c38);
  RegisterVar(&DAT_10007c38,8);
  RegisterDynGroup(&DAT_10007d50);
  RegisterVar(&DAT_10007d50,8);
  RegisterDynGroup(&DAT_10007c70);
  RegisterDynGroup(&DAT_10007c80);
  RegisterDynGroup(&DAT_10007ca0);
  RegisterDynGroup(&DAT_10007ca8);
  RegisterDynGroup(&DAT_10007d58);
  RegisterDynGroup(&DAT_10007d78);
  RegisterDynGroup(&DAT_10007d48);
  RegisterVar(&DAT_10007c70,8);
  RegisterVar(&DAT_10007c80,8);
  RegisterVar(&DAT_10007ca0,8);
  RegisterVar(&DAT_10007ca8,8);
  RegisterVar(&DAT_10007d58,8);
  RegisterVar(&DAT_10007d78,8);
  RegisterUnitType(&DAT_10007bb8,"Pikiner_evro(PO)");
  RegisterUnitType(&DAT_10007d88,"Mushketer_ev(PO)");
  RegisterUnitType(&DAT_10007e68,"Konni_Ricar(PO)");
  RegisterUnitType(&DAT_10007eb8,"Dragun_18_DIP(PO)");
  RegisterUpgrade(&DAT_10007c20,"MAINFR");
  RegisterUpgrade(&DAT_10007df8,"MAINHO");
  RegisterUpgrade(&DAT_10007ec0,"MAINSP");
  RegisterUpgrade(&DAT_10007f48,"MAINPO");
  RegisterFormation(&DAT_10007d08,"#ALONE");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pcVar8;
  void *pcVar9;
  void *pcVar10;
  void *pcVar11;
  int *puVar12;
  int iStack_4;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    DAT_10007b68 = GetDiff(0);
    DAT_10007e70 = 0;
    ChangeFriends(1,0xe);
    ChangeFriends(2,0xe);
    ChangeFriends(3,0xe);
    ChangeFriends(5,0x3e);
    if (DAT_10007b68 == 0) {
      InitialUpgrade(DAT_1000739c,"AKA12HO");
      InitialUpgrade(DAT_1000739c,"AKA13HO");
      InitialUpgrade(DAT_1000739c,"AKA31HO");
LAB_10001d57:
      InitialUpgrade(DAT_1000739c,"AKA14HO");
      InitialUpgrade(DAT_1000739c,"AKA15HO");
      InitialUpgrade(DAT_1000739c,"AKA33HO");
      InitialUpgrade("GErase","AKA14PO");
      InitialUpgrade("GErase","AKA15PO");
      InitialUpgrade("GErase","AKA33PO");
    }
    else {
      if (DAT_10007b68 == 1) goto LAB_10001d57;
      if (DAT_10007b68 == 2) {
LAB_10001bf6:
        InitialUpgrade("GGate1","AKA09SP");
        InitialUpgrade("GGate1","AKA11SP");
        InitialUpgrade("GGate1","AKA12SP");
        InitialUpgrade("GGate1","AKA13SP");
        InitialUpgrade("GGate1","AKA16SP");
        InitialUpgrade("GGate1","AKA20SP");
        InitialUpgrade("GGate1","AKA31SP");
        InitialUpgrade("GGate1","KUZ05SP");
        InitialUpgrade("GGate1","KUZ06SP");
        InitialUpgrade("GGate4","AKA09FR");
        InitialUpgrade("GGate4","AKA11FR");
        InitialUpgrade("GGate4","AKA12FR");
        InitialUpgrade("GGate4","AKA13FR");
        InitialUpgrade("GGate4","AKA16FR");
        InitialUpgrade("GGate4","AKA20FR");
        InitialUpgrade("GGate4","AKA31FR");
        InitialUpgrade("GGate4","KUZ05FR");
        InitialUpgrade("GGate4","KUZ06FR");
        InitialUpgrade("GErase","AKA09PO");
        InitialUpgrade("GErase","AKA12PO");
        InitialUpgrade("GErase","AKA13PO");
        InitialUpgrade("GErase","AKA31PO");
        InitialUpgrade("GErase","KUZ05PO");
        InitialUpgrade("GErase","KUZ06PO");
        InitialUpgrade("GErase","Dragun(PO)SHIELD3");
        InitialUpgrade("GErase","Dragun(PO)ATTACK3");
        InitialUpgrade("GErase","Mushketer_ev(PO)ATTACK3");
        InitialUpgrade("GErase","Mushketer_ev(PO)SHIELD3");
      }
      else if (DAT_10007b68 == 3) {
        InitialUpgrade("GGate1","AKA11SP");
        InitialUpgrade("GGate1","AKA12SP");
        InitialUpgrade("GGate1","AKA13SP");
        InitialUpgrade("GGate1","AKA14SP");
        InitialUpgrade("GGate1","AKA15SP");
        InitialUpgrade("GGate1","AKA16SP");
        InitialUpgrade("GGate1","AKA17SP");
        InitialUpgrade("GGate1","AKA28SP");
        InitialUpgrade("GGate1","AKA31SP");
        InitialUpgrade("GGate1","AKA33SP");
        InitialUpgrade("GGate1","AKA34SP");
        InitialUpgrade("GGate1","KUZ02SP");
        InitialUpgrade("GGate1","KUZ04SP");
        InitialUpgrade("GGate1","KUZ05SP");
        InitialUpgrade("GGate1","KUZ06SP");
        InitialUpgrade("GGate4","AKA11FR");
        InitialUpgrade("GGate4","AKA12FR");
        InitialUpgrade("GGate4","AKA13FR");
        InitialUpgrade("GGate4","AKA14FR");
        InitialUpgrade("GGate4","AKA15FR");
        InitialUpgrade("GGate4","AKA16FR");
        InitialUpgrade("GGate4","AKA17FR");
        InitialUpgrade("GGate4","AKA28FR");
        InitialUpgrade("GGate4","AKA33FR");
        InitialUpgrade("GGate4","AKA34FR");
        InitialUpgrade("GGate4","KUZ02FR");
        InitialUpgrade("GGate4","KUZ04FR");
        InitialUpgrade("GGate4","KUZ05FR");
        InitialUpgrade("GGate4","KUZ06FR");
        InitialUpgrade("GErase","AKA14PO");
        InitialUpgrade("GErase","AKA15PO");
        InitialUpgrade("GErase","AKA33PO");
        InitialUpgrade("GErase","AKA34PO");
        InitialUpgrade("GErase","KUZ02PO");
        InitialUpgrade("GErase","KUZ05PO");
        InitialUpgrade("GErase","KUZ06PO");
        InitialUpgrade("GErase","Dragun(PO)ATTACK");
        InitialUpgrade("GErase","Dragun(PO)SHIELD");
        InitialUpgrade("GErase","Mushketer_ev(PO)ATTACK");
        InitialUpgrade("GErase","Mushketer_ev(PO)SHIELD");
        goto LAB_10001bf6;
      }
    }
    InitialUpgrade("GGate1","AKA06SP");
    InitialUpgrade("GGate4","AKA06FR");
    InitialUpgrade("GGate4","MAINFR");
    SetResource(0,3,(5 - DAT_10007b68) * 2000);
    uVar2 = GetResource(0,3);
    SetResource(0,1,uVar2);
    uVar2 = GetResource(0,3);
    SetResource(0,4,uVar2);
    uVar2 = GetResource(0,3);
    SetResource(0,5,uVar2);
    uVar2 = GetResource(0,3);
    SetResource(0,0,uVar2);
    uVar2 = GetResource(0,3);
    SetResource(0,2,uVar2);
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
    iVar3 = GetResource(0,3);
    SetResource(2,0,iVar3 * 3);
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
    SetResource(3,0,(DAT_10007b68 + 1) * 50000);
    SetResource(3,3,(DAT_10007b68 + 1) * 0x1e848);
    SetResource(3,1,(DAT_10007b68 + 1) * 0x1e848);
    uVar2 = GetResource(3,0);
    SetResource(3,2,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(3,4,uVar2);
    uVar2 = GetResource(3,0);
    SetResource(3,5,uVar2);
    SetResource(5,0,100000000);
    uVar2 = GetResource(5,0);
    SetResource(5,3,uVar2);
    uVar2 = GetResource(5,0);
    SetResource(5,2,uVar2);
    uVar2 = GetResource(5,0);
    SetResource(5,1,uVar2);
    uVar2 = GetResource(5,0);
    SetResource(5,4,uVar2);
    uVar2 = GetResource(5,0);
    SetResource(5,5,uVar2);
    iStack_4 = 0;
    if (0 < DAT_10007b68) {
      do {
        ProduceUnitFast(&DAT_10007d80,&DAT_10007de8,&DAT_10007e28,200);
        ProduceUnitFast(&DAT_10007d90,&DAT_10007bf0,&DAT_10007e20,200);
        FUN_100010c8(&DAT_10007c40,&DAT_10007d98,&DAT_10007ef0,&DAT_10007f20,0x3a,10);
        FUN_100010c8(&DAT_10007c48,&DAT_10007d98,&DAT_10007ef0,&DAT_10007f18,0x46,10);
        FUN_100010c8(&DAT_10007c40,&DAT_10007d98,&DAT_10007ef0,&DAT_10007f20,0x3a,10);
        FUN_100010c8(&DAT_10007c48,&DAT_10007d98,&DAT_10007ef0,&DAT_10007f18,0x46,10);
        FUN_100010c8(&DAT_10007c50,&DAT_10007da0,&DAT_10007ae8,&DAT_10007f30,0x3a,10);
        FUN_100010c8(&DAT_10007c58,&DAT_10007da0,&DAT_10007ae8,&DAT_10007f28,0x46,10);
        FUN_100010c8(&DAT_10007c50,&DAT_10007da0,&DAT_10007ae8,&DAT_10007f30,0x3a,10);
        FUN_100010c8(&DAT_10007c58,&DAT_10007da0,&DAT_10007ae8,&DAT_10007f28,0x46,10);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < DAT_10007b68);
    }
    if (DAT_10007b68 < 2) {
      SelectUnits(&DAT_10007c78,0);
      SelectUnits(&DAT_10007c90,1);
      AllowAttack(5,0);
    }
    SelectUnits(&DAT_10007e90,0);
    uVar2 = 0;
    puVar12 = &DAT_10007ef8;
    iVar3 = FUN_10001012(&DAT_10007e90);
    Patrol(iVar3,puVar12,uVar2);
    SelectUnits(&DAT_10007e88,0);
    uVar2 = 0;
    puVar12 = &DAT_10007f00;
    iVar3 = FUN_10001012(&DAT_10007e88);
    Patrol(iVar3,puVar12,uVar2);
    ClearSelection(5);
    if (DAT_10007b68 == 0) {
      ClearSelection(5);
      SelectUnits(&DAT_10007e80,0);
LAB_10002147:
      SelectUnits(&DAT_10007e90,1);
LAB_10002152:
      SelectUnits(&DAT_10007e88,1);
      SelDie(5);
    }
    else {
      if (DAT_10007b68 == 1) goto LAB_10002147;
      if (DAT_10007b68 == 2) goto LAB_10002152;
    }
    SelectUnits(&DAT_10007de0,0);
    SelDie(3);
    StartAI(2,"SPAIN.0",1,0,1,DAT_10007b68);
    ShowPage("#PAGE0");
    RunTimer(1,(4 - DAT_10007b68) * 5000);
    RunTimer(2,0);
    RunTimer(3,DAT_10007b68 * -11000 + 48000);
    RunTimer(5,0);
    RunTimer(10,0);
    SetTrigg(99,0);
  }
  cVar1 = TimerDone(10);
  if (cVar1 != '\0') {
    iVar3 = GetResource(1,3);
    if (iVar3 < 1000) {
      AddResource(1,3,1000);
    }
    iVar3 = GetResource(1,1);
    if (iVar3 < 1000) {
      AddResource(1,1,1000);
    }
    iVar3 = GetResource(1,4);
    if (iVar3 < 1000) {
      AddResource(1,4,1000);
    }
    iVar3 = GetResource(1,5);
    if (iVar3 < 1000) {
      AddResource(1,5,1000);
    }
    iVar3 = GetResource(2,1);
    if (iVar3 < 1000) {
      AddResource(2,1,1000);
    }
    iVar3 = GetResource(2,4);
    if (iVar3 < 1000) {
      AddResource(2,4,1000);
    }
    iVar3 = GetResource(2,5);
    if (iVar3 < 1000) {
      AddResource(2,5,1000);
    }
    iVar3 = GetResource(3,1);
    if (iVar3 < 1000) {
      AddResource(3,1,1000);
    }
    iVar3 = GetResource(3,4);
    if (iVar3 < 1000) {
      AddResource(3,4,1000);
    }
    iVar3 = GetResource(3,5);
    if (iVar3 < 1000) {
      AddResource(3,5,1000);
    }
    RunTimer(10,500);
  }
  cVar1 = TimerDone(2);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10007b78,0);
    cVar1 = Trigg(0x33);
    if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e30,0), iVar3 < 1)) {
      SelOpenGates(5);
    }
    else {
      SelCloseGates(5);
    }
    SelectUnits(&DAT_10007b70,0);
    cVar1 = Trigg(0x33);
    if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e40,0), iVar3 < 1)) {
      SelOpenGates(5);
    }
    else {
      SelCloseGates(5);
    }
    SelectUnits(&DAT_10007b88,0);
    cVar1 = Trigg(0x34);
    if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e38,0), iVar3 < 1)) {
      SelOpenGates(5);
    }
    else {
      SelCloseGates(5);
    }
    SelectUnits(&DAT_10007b80,0);
    cVar1 = Trigg(0x34);
    if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e50,0), iVar3 < 1)) {
      SelOpenGates(5);
    }
    else {
      SelCloseGates(5);
    }
    cVar1 = Trigg(3);
    if (cVar1 == '\0') {
      SelectUnits(&DAT_10007b98,0);
      cVar1 = Trigg(0x34);
      if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e48,0), iVar3 < 1)) {
        SelOpenGates(5);
      }
      else {
        SelCloseGates(5);
      }
      SelectUnits(&DAT_10007b90,0);
      cVar1 = Trigg(0x34);
      if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e60,0), iVar3 < 1)) {
        SelOpenGates(5);
      }
      else {
        SelCloseGates(5);
      }
      SelectUnits(&DAT_10007ba0,0);
      cVar1 = Trigg(0x34);
      if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e58,0), iVar3 < 1)) {
        SelOpenGates(5);
      }
      else {
        SelCloseGates(5);
      }
    }
    ClearSelection(5);
    RunTimer(2,DAT_10007b68 * -0x96 + 500);
  }
  if (DAT_10007b68 != 0) {
    cVar1 = TimerDone(1);
    if (cVar1 != '\0') {
      DAT_10007e70 = DAT_10007e70 + DAT_10007b68 * 2;
      if (1 < DAT_10007b68) {
        InitialUpgrade("GGate4","AKA26FR");
        InitialUpgrade("GGate4","AKA26FR");
      }
      iVar3 = GetTotalAmount1(&DAT_10007ec8,0);
      if (iVar3 < 1) {
        iVar3 = GetTotalAmount1(&DAT_10007ba8,0);
        if (0 < iVar3) {
          puVar12 = &DAT_10007ba8;
          goto LAB_1000260d;
        }
        iVar3 = GetTotalAmount1(&DAT_10007dc0,0);
        if (0 < iVar3) {
          puVar12 = &DAT_10007dc0;
          goto LAB_1000260d;
        }
        iVar3 = GetTotalAmount1(&DAT_10007ea8,0);
        if (0 < iVar3) {
          puVar12 = &DAT_10007ea8;
          goto LAB_1000260d;
        }
      }
      else {
        puVar12 = &DAT_10007ec8;
LAB_1000260d:
        CreateZoneNearUnit(&DAT_10007f38,&DAT_10007e40,puVar12,0,4000);
      }
      ProduceUnitFast(&DAT_10007d98,&DAT_10007ef0,&DAT_10007c70,0);
      cVar1 = Trigg(3);
      if (cVar1 == '\0') {
        ProduceUnitFast(&DAT_10007da0,&DAT_10007ae8,&DAT_10007c70,0);
      }
      iStack_4 = 0;
      if (0 < DAT_10007e70 * 2) {
        do {
          ProduceUnitFast(&DAT_10007dd0,&DAT_10007e98,&DAT_10007d58,0);
          ProduceUnitFast(&DAT_10007dd0,&DAT_10007f40,&DAT_10007d58,0);
          cVar1 = Trigg(3);
          if (cVar1 == '\0') {
            ProduceUnitFast(&DAT_10007e10,&DAT_10007ae0,&DAT_10007d50,0);
            ProduceUnitFast(&DAT_10007dd8,&DAT_10007b48,&DAT_10007d78,0);
            ProduceUnitFast(&DAT_10007dd8,&DAT_10007c28,&DAT_10007d78,0);
          }
          iStack_4 = iStack_4 + 1;
        } while (iStack_4 < DAT_10007e70 * 2);
      }
      FUN_1000108a(&DAT_10007d58,&DAT_10007f38,0);
      FUN_1000108a(&DAT_10007d78,&DAT_10007f38,0);
      iVar3 = GetTotalAmount0(&DAT_10007d50);
      if ((iVar3 == 0) && (iVar3 = GetTotalAmount0(&DAT_10007b28), iVar3 != 0)) {
        RemoveGroup(&DAT_10007b28,&DAT_10007d50);
        RemoveGroup(&DAT_10007b30,&DAT_10007d50);
        RemoveGroup(&DAT_10007b40,&DAT_10007d50);
      }
      FUN_1000108a(&DAT_10007d50,&DAT_10007f38,0x1e);
      RunTimer(1,(4 - DAT_10007b68) * 5000);
    }
    cVar1 = Trigg(1);
    if ((cVar1 != '\0') && (cVar1 = TimerDone(3), pcVar10 = (void*)&SetTrigg, cVar1 != '\0')) {
      FUN_1000108a(&DAT_10007e28,&DAT_10007db0,0x37);
      RemoveGroup(&DAT_10007c30,&DAT_10007c70);
      ProduceUnitFast(&DAT_10007d80,&DAT_10007de8,&DAT_10007c30,100);
      iStack_4 = 0;
      if (0 < DAT_10007b68 * 2) {
        do {
          ProduceUnitFast(&DAT_10007d80,&DAT_10007f50,&DAT_10007c70,10);
          iStack_4 = iStack_4 + 1;
        } while (iStack_4 < DAT_10007b68 * 2);
      }
      cVar1 = Trigg(3);
      if (cVar1 == '\0') {
        FUN_1000108a(&DAT_10007e20,&DAT_10007db8,100);
        RemoveGroup(&DAT_10007c38,&DAT_10007c70);
        ProduceUnitFast(&DAT_10007d90,&DAT_10007bf0,&DAT_10007c38,100);
        iStack_4 = 0;
        if (0 < DAT_10007b68 * 2) {
          do {
            ProduceUnitFast(&DAT_10007d90,&DAT_10007e18,&DAT_10007c70,10);
            iStack_4 = iStack_4 + 1;
          } while (iStack_4 < DAT_10007b68 * 2);
        }
      }
      RunTimer(4,700);
      SetTrigg(1,0);
    }
    cVar1 = Trigg(1);
    if ((cVar1 == '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
      FUN_10001072(&DAT_10007c30,&DAT_10007c68);
      cVar1 = Trigg(2);
      uVar2 = 2;
      if (cVar1 == '\0') {
        puVar12 = &DAT_10007ee0;
        iVar3 = FUN_10001012(&DAT_10007c30);
        Patrol(iVar3,puVar12,uVar2);
        uVar2 = 2;
        puVar12 = &DAT_10007ee8;
        iVar3 = FUN_10001012(&DAT_10007c30);
        Patrol(iVar3,puVar12,uVar2);
      }
      else {
        puVar12 = &DAT_10007ed8;
        iVar3 = FUN_10001012(&DAT_10007c30);
        Patrol(iVar3,puVar12,uVar2);
      }
      SetTrigg(2,0);
      cVar1 = Trigg(3);
      if (cVar1 == '\0') {
        FUN_10001072(&DAT_10007c38,&DAT_10007c60);
        cVar1 = Trigg(4);
        uVar2 = 2;
        if (cVar1 == '\0') {
          puVar12 = &DAT_10007f08;
          iVar3 = FUN_10001012(&DAT_10007c38);
          Patrol(iVar3,puVar12,uVar2);
        }
        else {
          puVar12 = &DAT_10007ef8;
          iVar3 = FUN_10001012(&DAT_10007c38);
          Patrol(iVar3,puVar12,uVar2);
        }
        SetTrigg(4,0);
      }
      RunTimer(3,DAT_10007b68 * -11000 + 48000);
      SetTrigg(1,0);
    }
    cVar1 = TimerDone(5);
    if (cVar1 != '\0') {
      cVar1 = Trigg(0x33);
      if (cVar1 != '\0') {
        FUN_100010c8(&DAT_10007b08,&DAT_10007e08,&DAT_10007ed0,&DAT_10007c88,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b08,&DAT_10007e08,&DAT_10007bb0,&DAT_10007c88,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007f60,&DAT_10007e08,&DAT_10007bb0,&DAT_10007bf8,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007bc0,&DAT_10007c10,&DAT_10007f58,&DAT_10007d20,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b50,&DAT_10007c10,&DAT_10007ce0,&DAT_10007cd0,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b50,&DAT_10007b38,&DAT_10007e78,&DAT_10007cd0,0x40,DAT_10007e70 / 2);
        FUN_100010c8(&DAT_10007c40,&DAT_10007d98,&DAT_10007ef0,&DAT_10007f20,0x3a,DAT_10007e70 / 2);
        FUN_100010c8(&DAT_10007c40,&DAT_10007d98,&DAT_10007ef0,&DAT_10007f20,0x3a,DAT_10007e70 / 2);
        FUN_100010c8(&DAT_10007c48,&DAT_10007d98,&DAT_10007ef0,&DAT_10007f18,0x46,DAT_10007e70 / 2);
        FUN_100010c8(&DAT_10007c48,&DAT_10007d98,&DAT_10007ef0,&DAT_10007f18,0x46,DAT_10007e70 / 2);
        FUN_100010c8(&DAT_10007b18,&DAT_10007e08,&DAT_10007ed0,&DAT_10007c98,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007f68,&DAT_10007e08,&DAT_10007bb0,&DAT_10007c00,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b58,&DAT_10007c10,&DAT_10007ce0,&DAT_10007cd8,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007bc8,&DAT_10007c10,&DAT_10007f58,&DAT_10007d28,0x40,DAT_10007e70);
      }
      cVar1 = Trigg(3);
      if ((cVar1 == '\0') && (cVar1 = Trigg(0x34), cVar1 != '\0')) {
        FUN_100010c8(&DAT_10007c50,&DAT_10007da0,&DAT_10007ae8,&DAT_10007f30,0x3a,DAT_10007e70 / 2);
        FUN_100010c8(&DAT_10007c50,&DAT_10007da0,&DAT_10007ae8,&DAT_10007f30,0x3a,DAT_10007e70 / 2);
        FUN_100010c8(&DAT_10007c58,&DAT_10007da0,&DAT_10007ae8,&DAT_10007f28,0x46,DAT_10007e70 / 2);
        FUN_100010c8(&DAT_10007c58,&DAT_10007da0,&DAT_10007ae8,&DAT_10007f28,0x46,DAT_10007e70 / 2);
        FUN_100010c8(&DAT_10007b28,&DAT_10007e10,&DAT_10007f10,&DAT_10007cb0,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b28,&DAT_10007e10,&DAT_10007ae0,&DAT_10007cb0,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b28,&DAT_10007e10,&DAT_10007e00,&DAT_10007cb0,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007f70,&DAT_10007e10,&DAT_10007e00,&DAT_10007c08,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007bd0,&DAT_10007c18,&DAT_10007d60,&DAT_10007d30,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b60,&DAT_10007c18,&DAT_10007eb0,&DAT_10007ce8,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b60,&DAT_10007b20,&DAT_10007be0,&DAT_10007ce8,0x40,DAT_10007e70 / 2);
        FUN_100010c8(&DAT_10007b30,&DAT_10007e10,&DAT_10007f10,&DAT_10007cb8,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b30,&DAT_10007e10,&DAT_10007e00,&DAT_10007cb8,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b30,&DAT_10007e10,&DAT_10007ae0,&DAT_10007cb8,0x40,DAT_10007e70 * 2);
        FUN_100010c8(&DAT_10007bd8,&DAT_10007c18,&DAT_10007d60,&DAT_10007d38,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b40,&DAT_10007e10,&DAT_10007f10,&DAT_10007cc0,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b40,&DAT_10007e10,&DAT_10007e00,&DAT_10007cc0,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007b40,&DAT_10007e10,&DAT_10007e00,&DAT_10007cc0,0x40,DAT_10007e70);
        FUN_100010c8(&DAT_10007be8,&DAT_10007c18,&DAT_10007d60,&DAT_10007d40,0x40,DAT_10007e70);
      }
      RunTimer(5,0x96);
    }
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') &&
     ((((cVar1 = IsUpgradeDone(&DAT_10007df8,0), cVar1 != '\0' ||
        (cVar1 = IsUpgradeDone(&DAT_10007ec0,0), cVar1 != '\0')) ||
       (cVar1 = IsUpgradeDone(&DAT_10007c20,0), cVar1 != '\0')) ||
      (cVar1 = IsUpgradeDone(&DAT_10007f48,0), cVar1 != '\0')))) {
    SetTrigg(0x12,0);
  }
  cVar1 = Trigg(3);
  if (cVar1 != '\0') {
    cVar1 = Trigg(0x12);
    if (cVar1 != '\0') {
      iVar3 = GetUnitsAmount0(&DAT_10007af8,0);
      iVar4 = GetUnitsAmount0(&DAT_10007d18,0);
      iVar5 = GetUnitsAmount0(&DAT_10007d10,0);
      iVar6 = GetUnitsAmount0(&DAT_10007d00,0);
      iVar7 = GetUnitsAmount0(&DAT_10007cf8,0);
      if (iVar3 + iVar4 + iVar5 + iVar6 + iVar7 < 0x33) goto LAB_10002f76;
    }
    SetResource(1,3,(DAT_10007b68 + 1) * 0x1e848);
    SetResource(1,1,(DAT_10007b68 + 1) * 0x1e848);
    StartAI(1,"FRANCE.0",1,0,1,DAT_10007b68);
    ShowPage("#PAGE3");
    SetTrigg(3,0);
  }
LAB_10002f76:
  cVar1 = Trigg(0x1e);
  if (cVar1 != '\0') {
    cVar1 = Trigg(0x12);
    if (cVar1 != '\0') {
      iVar3 = GetUnitsAmount0(&DAT_10007d18,0);
      iVar4 = GetUnitsAmount0(&DAT_10007d10,0);
      iVar5 = GetUnitsAmount0(&DAT_10007d00,0);
      iVar6 = GetUnitsAmount0(&DAT_10007cf8,0);
      if (iVar3 + iVar4 + iVar5 + iVar6 < 0x33) goto LAB_10003142;
    }
    iStack_4 = 0;
    if (DAT_10007b68 * 5 != -0x19 && -1 < DAT_10007b68 * 5 + 0x19) {
      do {
        CreateObject0(&DAT_10007c70,&DAT_10007b10,&DAT_10007ea0,3,0,0);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < DAT_10007b68 * 5 + 0x19);
    }
    iStack_4 = 0;
    if (0 < (DAT_10007b68 + 1) * 0x1e) {
      do {
        CreateObject0(&DAT_10007c80,&DAT_10007bb8,&DAT_10007ea0,3,0,0);
        FUN_1000108a(&DAT_10007c80,&DAT_10007e48,0x40);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < (DAT_10007b68 + 1) * 0x1e);
    }
    iStack_4 = 0;
    if (0 < (DAT_10007b68 + 1) * 0x1e) {
      do {
        CreateObject0(&DAT_10007c70,&DAT_10007e68,&DAT_10007ea0,3,0,0);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < (DAT_10007b68 + 1) * 0x1e);
    }
    iStack_4 = 0;
    if (0 < (DAT_10007b68 * 5 + 5) * 4) {
      do {
        CreateObject0(&DAT_10007c70,&DAT_10007eb8,&DAT_10007ea0,3,0,0);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < (DAT_10007b68 * 5 + 5) * 4);
    }
    iStack_4 = 0;
    if (0 < (DAT_10007b68 * 5 + 5) * 4) {
      do {
        CreateObject0(&DAT_10007c70,&DAT_10007d88,&DAT_10007ea0,3,0,0);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < (DAT_10007b68 * 5 + 5) * 4);
    }
    StartAI(3,"PORTUGALIA.0",1,3,1,DAT_10007b68);
    ShowPage("#PAGE4");
    RunTimer(0x1e,1000);
    SetTrigg(0x1e,0);
  }
LAB_10003142:
  cVar1 = Trigg(0x1f);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x1e), cVar1 == '\0')) &&
     (cVar1 = TimerDone(0x1e), cVar1 != '\0')) {
    SetTrigg(0x1f,0);
  }
  cVar1 = Trigg(0x33);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007af8,5), iVar3 < 10)) {
    ShowPage("#PAGE1");
    SetTrigg(0x33,0);
  }
  cVar1 = Trigg(0x34);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007af0,5), iVar3 < 10)) {
    ShowPage("#PAGE2");
    SetTrigg(0x34,0);
  }
  cVar1 = Trigg(3);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5b), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    ShowPage("#PAGE11");
    SetTrigg(0x5b,0);
  }
  cVar1 = Trigg(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE12");
    SetTrigg(0x5c,0);
  }
  cVar1 = Trigg(0x1f);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5d), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage("#PAGE13");
    SetTrigg(0x5d,0);
  }
  cVar1 = Trigg(0x5a);
  if (((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) &&
     (iVar3 = GetTotalAmount0(&DAT_10007c70), iVar3 == 0)) {
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
    SetTrigg(0x5a,0);
  }
  cVar1 = Trigg(0x5b);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5c), cVar1 == '\0')) &&
     ((cVar1 = Trigg(0x5d), cVar1 == '\0' &&
      ((cVar1 = Trigg(0x33), cVar1 == '\0' && (cVar1 = Trigg(0x34), cVar1 == '\0')))))) {
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

#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_1000b1b0 = 0;
long long DAT_1000b1b8 = 0;
long long DAT_1000b1c0 = 0;
int DAT_1000d030 = 2000;
long long DAT_1000d034 = 0;
int DAT_1000d038 = 5;
char DAT_1000d4c8[] = "ZS_A";
char DAT_1000d6d0[] = "GSpy";
char DAT_1000d8bc[] = "GP_T";
char DAT_1000d8c4[] = "GP_S";
long long DAT_10010b38 = 0;
long long DAT_10010b40 = 0;
long long DAT_10010b48 = 0;
long long DAT_10010b50 = 0;
long long DAT_10010b58 = 0;
long long DAT_10010b60 = 0;
long long DAT_10010b68 = 0;
long long DAT_10010b70 = 0;
long long DAT_10010b78 = 0;
long long DAT_10010b80 = 0;
long long DAT_10010b88 = 0;
long long DAT_10010b90 = 0;
long long DAT_10010b98 = 0;
long long DAT_10010ba0 = 0;
long long DAT_10010ba8 = 0;
long long DAT_10010bb0 = 0;
long long DAT_10010bb8 = 0;
long long DAT_10010bc0 = 0;
long long DAT_10010bc8 = 0;
long long DAT_10010bd0 = 0;
long long DAT_10010bd8 = 0;
long long DAT_10010be0 = 0;
long long DAT_10010be8 = 0;
long long DAT_10010bf0 = 0;
long long DAT_10010bf8 = 0;
long long DAT_10010c00 = 0;
long long DAT_10010c08 = 0;
long long DAT_10010c10 = 0;
long long DAT_10010c18 = 0;
long long DAT_10010c20 = 0;
long long DAT_10010c28 = 0;
long long DAT_10010c30 = 0;
long long DAT_10010c38 = 0;
long long DAT_10010c40 = 0;
long long DAT_10010c48 = 0;
long long DAT_10010c50 = 0;
long long DAT_10010c58 = 0;
long long DAT_10010c60 = 0;
long long DAT_10010c68 = 0;
long long DAT_10010c70 = 0;
long long DAT_10010c78 = 0;
long long DAT_10010c80 = 0;
long long DAT_10010c88 = 0;
long long DAT_10010c90 = 0;
long long DAT_10010c98 = 0;
long long DAT_10010ca0 = 0;
long long DAT_10010ca8 = 0;
long long DAT_10010cb0 = 0;
long long DAT_10010cb8 = 0;
long long DAT_10010cc0 = 0;
long long DAT_10010cc8 = 0;
long long DAT_10010cd0 = 0;
long long DAT_10010cd8 = 0;
long long DAT_10010ce0 = 0;
long long DAT_10010ce8 = 0;
long long DAT_10010cf0 = 0;
long long DAT_10010cf8 = 0;
long long DAT_10010d00 = 0;
long long DAT_10010d08 = 0;
long long DAT_10010d10 = 0;
long long DAT_10010d18 = 0;
long long DAT_10010d20 = 0;
long long DAT_10010d28 = 0;
long long DAT_10010d30 = 0;
long long DAT_10010d38 = 0;
long long DAT_10010d40 = 0;
long long DAT_10010d48 = 0;
long long DAT_10010d50 = 0;
long long DAT_10010d58 = 0;
long long DAT_10010d60 = 0;
long long DAT_10010d68 = 0;
long long DAT_10010d70 = 0;
long long DAT_10010d78 = 0;
long long DAT_10010d80 = 0;
long long DAT_10010d88 = 0;
long long DAT_10010d90 = 0;
long long DAT_10010d98 = 0;
long long DAT_10010da0 = 0;
long long DAT_10010da8 = 0;
long long DAT_10010db0 = 0;
long long DAT_10010db8 = 0;
long long DAT_10010dc0 = 0;
long long DAT_10010dc8 = 0;
long long DAT_10010dd0 = 0;
long long DAT_10010dd8 = 0;
long long DAT_10010de0 = 0;
long long DAT_10010de8 = 0;
long long DAT_10010df0 = 0;
long long DAT_10010df8 = 0;
long long DAT_10010e00 = 0;
long long DAT_10010e08 = 0;
long long DAT_10010e10 = 0;
long long DAT_10010e18 = 0;
long long DAT_10010e20 = 0;
long long DAT_10010e28 = 0;
long long DAT_10010e30 = 0;
long long DAT_10010e38 = 0;
long long DAT_10010e40 = 0;
long long DAT_10010e48 = 0;
long long DAT_10010e50 = 0;
long long DAT_10010e58 = 0;
long long DAT_10010e60 = 0;
long long DAT_10010e68 = 0;
long long DAT_10010e70 = 0;
long long DAT_10010e78 = 0;
long long DAT_10010e80 = 0;
long long DAT_10010e88 = 0;
long long DAT_10010e90 = 0;
long long DAT_10010e98 = 0;
long long DAT_10010ea0 = 0;
long long DAT_10010ea8 = 0;
long long DAT_10010eb0 = 0;
long long DAT_10010eb8 = 0;
long long DAT_10010ec0 = 0;
long long DAT_10010ec8 = 0;
long long DAT_10010ed0 = 0;
long long DAT_10010ed8 = 0;
long long DAT_10010ee0 = 0;
long long DAT_10010ee8 = 0;
long long DAT_10010ef0 = 0;
long long DAT_10010ef8 = 0;
long long DAT_10010f00 = 0;
long long DAT_10010f08 = 0;
long long DAT_10010f10 = 0;
long long DAT_10010f18 = 0;
long long DAT_10010f20 = 0;
long long DAT_10010f28 = 0;
long long DAT_10010f30 = 0;
long long DAT_10010f38 = 0;
long long DAT_10010f40 = 0;
long long DAT_10010f48 = 0;
long long DAT_10010f50 = 0;
long long DAT_10010f58 = 0;
long long DAT_10010f60 = 0;
long long DAT_10010f68 = 0;
long long DAT_10010f70 = 0;
long long DAT_10010f78 = 0;
long long DAT_10010f80 = 0;
long long DAT_10010f88 = 0;
long long DAT_10010f90 = 0;
long long DAT_10010f98 = 0;
long long DAT_10010fa0 = 0;
long long DAT_10010fa8 = 0;
long long DAT_10010fb0 = 0;
long long DAT_10010fb8 = 0;
long long DAT_10010fc0 = 0;
long long DAT_10010fc8 = 0;
long long DAT_10010fd0 = 0;
long long DAT_10010fd8 = 0;
long long DAT_10010fe0 = 0;
long long DAT_10010fe8 = 0;
long long DAT_10010ff0 = 0;
long long DAT_10010ff8 = 0;
long long DAT_10011000 = 0;
long long DAT_10011008 = 0;
long long DAT_10011010 = 0;
long long DAT_10011018 = 0;
long long DAT_10011020 = 0;
long long DAT_10011028 = 0;
long long DAT_10011030 = 0;
long long DAT_10011038 = 0;
long long DAT_10011040 = 0;
long long DAT_10011048 = 0;
long long DAT_10011050 = 0;
long long DAT_10011058 = 0;
long long DAT_10011060 = 0;
long long DAT_10011068 = 0;
long long DAT_10011070 = 0;
long long DAT_10011078 = 0;
long long DAT_10011080 = 0;
long long DAT_10011088 = 0;
long long DAT_10011090 = 0;
long long DAT_10011098 = 0;
long long DAT_100110a0 = 0;
long long DAT_100110a8 = 0;
long long DAT_100110b0 = 0;
long long DAT_100110b8 = 0;
long long DAT_100110c0 = 0;
long long DAT_100110c8 = 0;
long long DAT_100110d0 = 0;
long long DAT_100110d8 = 0;
long long DAT_100110e0 = 0;
long long DAT_100110e8 = 0;
long long DAT_100110f0 = 0;
long long DAT_100110f8 = 0;
long long DAT_10011100 = 0;
long long DAT_10011108 = 0;
long long DAT_10011110 = 0;
long long DAT_10011118 = 0;
long long DAT_10011120 = 0;
long long DAT_10011128 = 0;
long long DAT_10011130 = 0;
long long DAT_10011138 = 0;
long long DAT_10011140 = 0;
long long DAT_10011148 = 0;
long long DAT_10011150 = 0;
long long DAT_10011158 = 0;
long long DAT_10011160 = 0;
long long DAT_10011168 = 0;
long long DAT_10011170 = 0;
long long DAT_10011178 = 0;
long long DAT_10011180 = 0;
long long DAT_10011188 = 0;
long long DAT_10011190 = 0;
long long DAT_10011198 = 0;
long long DAT_100111a0 = 0;
long long DAT_100111a8 = 0;
long long DAT_100111b0 = 0;
long long DAT_100111b8 = 0;
long long DAT_100111c0 = 0;
long long DAT_100111c8 = 0;
long long DAT_100111d0 = 0;
long long DAT_100111d8 = 0;
long long DAT_100111e0 = 0;
long long DAT_100111e8 = 0;
long long DAT_100111f0 = 0;
long long DAT_100111f8 = 0;
long long DAT_10011200 = 0;
long long DAT_10011208 = 0;
long long DAT_10011210 = 0;
long long DAT_10011218 = 0;
long long DAT_10011220 = 0;
long long DAT_10011228 = 0;
long long DAT_10011230 = 0;
long long DAT_10011238 = 0;
long long DAT_10011240 = 0;
long long DAT_10011248 = 0;
long long DAT_10011250 = 0;
long long DAT_10011258 = 0;
long long DAT_10011260 = 0;
long long DAT_10011268 = 0;
long long DAT_10011270 = 0;
long long DAT_10011278 = 0;
long long DAT_10011280 = 0;
long long DAT_10011288 = 0;
long long DAT_10011290 = 0;
long long DAT_10011298 = 0;
int DAT_100112a4 = 0;
long long DAT_100112a8 = 0;
long long DAT_100112ac = 0;
long long DAT_100112b0 = 0;
int DAT_100112b4 = 0;
long long DAT_100112b8 = 0;
int DAT_100112c0 = 0;
int DAT_100112c4 = 0;
int DAT_100112c8 = 0;
long long DAT_100112d0 = 0;
int DAT_1000b1b0_ovl = 0;
int DAT_1000b1b8_ovl = 1717986918;
int DAT_1000b1c0_ovl = -1717986918;
int DAT_100112b8_ovl = 0;
int DAT_100112d0_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10005357() { return 0; }
int FUN_100053a7() { return 0; }


/* Forward declarations */
int FUN_10004e90(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,
            int param_9,int param_10);
void FUN_10004f90(int param_1,int param_2);
void FUN_10004fd2(void);
void FUN_10004fea(void);

void OnInit();
void ProcessScenary();


int __cdecl
FUN_10004e90(int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,
            int param_9,int param_10)

{
  char cVar1;
  int iVar2;
  BOOL bVar3;
  
  iVar2 = GetUnitsAmount0(param_2,1);
  if (iVar2 == 0) {
    iVar2 = GetUnitsAmount0(param_1,0);
    if (iVar2 != 0) {
      iVar2 = GetTotalAmount0(param_3);
      if (iVar2 == 0) {
        ShowPage(param_4);
        AddResource(0,1,param_8);
        AddResource(0,3,param_6);
        AddResource(0,0,param_5);
        AddResource(0,2,param_7);
        AddResource(0,4,param_9);
        AddResource(0,5,param_10);
        cVar1 = Trigg(0x3a);
        if (cVar1 == '\0') {
          iVar2 = DAT_100112b4 + -1;
          if (DAT_100112b4 == 2) {
            DAT_100112b4 = iVar2;
            ShowPage("#PAGE71");
          }
          else {
            if (DAT_100112b4 == 3) {
              DAT_100112b4 = iVar2;
              ShowPage("#PAGE72");
              return 0;
            }
            bVar3 = DAT_100112b4 == 4;
            DAT_100112b4 = iVar2;
            if (bVar3) {
              ShowPage("#PAGE73");
              return 0;
            }
          }
        }
        return 0;
      }
    }
  }
  return 1;
}





void __cdecl FUN_10004f90(int param_1,int param_2)

{
  SelectUnits(param_1,0);
  Patrol(1,param_2,0x41);
  return;
}







void FUN_10004fd2(void)

{
  void *extraout_ECX;
  
  FUN_10004fea();
  DAT_100112d0_ovl = FUN_100053a7();
  FUN_10005357(extraout_ECX);
  return;
}





void FUN_10004fea(void)

{
  return;
}





void OnInit(void)

{
                    
  RegisterUnits(&DAT_100110b0,"GKomandir1");
  RegisterUnits(&DAT_10010f20,"GRazbLag1");
  RegisterUnits(&DAT_10010f30,"GRazbLag2");
  RegisterUnits(&DAT_10010f38,"GRazbLag3");
  RegisterUnits(&DAT_10010f48,"GRazbLag4");
  RegisterUnits(&DAT_10011220,"GRazbGard1");
  RegisterUnits(&DAT_10010f00,"GHelp1");
  RegisterUnits(&DAT_10010db0,"GPop1");
  RegisterUnits(&DAT_10010c10,"GRazbCom1");
  RegisterUnits(&DAT_10010e20,"GRazbGlav1");
  RegisterUnits(&DAT_10010e18,"GRazbGlav");
  RegisterUnits(&DAT_10010bc0,"GRazbTransp1");
  RegisterUnits(&DAT_10011120,"GFortGarnizon1");
  RegisterUnits(&DAT_10010ff0,"GWorotaTown1");
  RegisterUnits(&DAT_100111c8,"GWorotaFort1");
  RegisterUnits(&DAT_100111d0,"GWorotaFort2");
  RegisterUnits(&DAT_10011068,"GFort_BH");
  RegisterUnits(&DAT_10010c08,"GFortBarack1");
  RegisterUnits(&DAT_10010c40,"GPodmoga2");
  RegisterUnits(&DAT_10010e28,"GRazbGlav2");
  RegisterUnits(&DAT_100111b8,"GPackhorse1");
  RegisterUnits(&DAT_10010d48,"GTrader1");
  RegisterUnits(&DAT_100110d0,"GUkr_D1");
  RegisterUnits(&DAT_10011128,"GFortGarnizon2");
  RegisterUnits(&DAT_10010bf8,"GTown_Ship");
  RegisterUnits(&DAT_10011100,"GRazb_Shipyard");
  RegisterUnits(&DAT_10010bc8,"GRazb_Fort");
  RegisterUnits(&DAT_10011010,"GRazb_Fort_Tur");
  RegisterUnits(&DAT_10010c38,"GLord_B");
  RegisterUnits(&DAT_10010c48,"GLord_G");
  RegisterUnits(&DAT_10010b58,"GRazb_Tent1");
  RegisterUnits(&DAT_10010dc8,DAT_1000d8c4);
  RegisterUnits(&DAT_10010dd8,DAT_1000d8bc);
  RegisterUnits(&DAT_10010bd8,"GZabor_S");
  RegisterUnits(&DAT_10010be8,"GZabor_T");
  RegisterUnits(&DAT_10010f58,"GRazb_B");
  RegisterUnits(&DAT_10010f78,"GRazb_G");
  RegisterUnits(&DAT_10011240,"GRzb_Worota");
  RegisterUnits(&DAT_10010fd0,"GP_A_W");
  RegisterUnits(&DAT_10010fb8,"GP_A_S");
  RegisterUnits(&DAT_10010f80,"GP_A_F");
  RegisterUnits(&DAT_10011060,"GGiv_B");
  RegisterUnits(&DAT_10011078,"GGiv_G");
  RegisterUnits(&DAT_100110c8,"GGiv_p");
  RegisterUnits(&DAT_100110a8,"GGiv_f");
  RegisterUnits(&DAT_10010b70,"GRazb_Fort_G");
  RegisterUnits(&DAT_10010b50,"GShipyard_AL");
  RegisterUnits(&DAT_10010b48,"GRazb_Fort3");
  RegisterUnits(&DAT_10010fc8,"GGeneral1");
  RegisterUnits(&DAT_10011268,"GKon_1");
  RegisterUnits(&DAT_10011280,"GKon_2");
  RegisterUnits(&DAT_10011270,"GKon_3");
  RegisterUnits(&DAT_10011290,"GKon_4");
  RegisterUnits(&DAT_10011070,"GRazb_Tur");
  RegisterUnits(&DAT_10010d88,"GGiv_Ac");
  RegisterUnits(&DAT_10010e80,"GRazb_Ship");
  RegisterUnits(&DAT_10010ed0,"GRazb_Bitch_P");
  RegisterUnits(&DAT_10010df8,"GRazb_Bitch_P_G");
  RegisterUnits(&DAT_100111a0,"GTent1");
  RegisterUnits(&DAT_10011198,"GTent2");
  RegisterUnits(&DAT_100110f0,"GSelo_P_W");
  RegisterUnits(&DAT_10011130,"GSelo_P_F");
  RegisterUnits(&DAT_10010bd0,"GRazbFort1");
  RegisterUnits(&DAT_10011230,"GFortKom1");
  RegisterUnits(&DAT_10010cb8,"GHomeTrader");
  RegisterUnits(&DAT_10011260,"GHomeTrader2");
  RegisterUnits(&DAT_10010f90,"GGHomeTur1");
  RegisterUnits(&DAT_10010fe0,"GGHomeTur2");
  RegisterUnits(&DAT_10010fe8,"GGHomeTur3");
  RegisterUnits(&DAT_10010cf0,"GHome_W1");
  RegisterUnits(&DAT_10010ce8,"GHome_W2");
  RegisterUnits(&DAT_10010d98,"GPGards1");
  RegisterUnits(&DAT_10010dd0,"GTentLand");
  RegisterUnits(&DAT_10010d30,"GTent_L");
  RegisterUnits(&DAT_10010cd8,"GTent_H");
  RegisterUnits(&DAT_10010fd8,"GTownComAndBar");
  RegisterUnits(&DAT_100110a0,"GTownWorotaAdd");
  RegisterUnits(&DAT_10010ee8,DAT_1000d6d0);
  RegisterUnits(&DAT_10010d80,"GTownAD");
  RegisterZone(&DAT_10011178,"ZRazbLag1");
  RegisterZone(&DAT_10011170,"ZRazbLag2");
  RegisterZone(&DAT_10011188,"ZRazbLag3");
  RegisterZone(&DAT_10011180,"ZRazbLag4");
  RegisterZone(&DAT_10010d28,"ZRazbLagN1");
  RegisterZone(&DAT_10010d20,"ZRazbLagN2");
  RegisterZone(&DAT_10010d10,"ZRazbLagN3");
  RegisterZone(&DAT_10010cf8,"ZRazbLagN4");
  RegisterZone(&DAT_10010f50,"ZGard1");
  RegisterZone(&DAT_10010d08,"ZGardL1");
  RegisterZone(&DAT_10011048,"ZSpy1");
  RegisterZone(&DAT_10010b80,"ZHelp1");
  RegisterZone(&DAT_10010de8,"ZPop1");
  RegisterZone(&DAT_10010c30,"ZRazbVisible1");
  RegisterZone(&DAT_10010c20,"ZRazbVisible2");
  RegisterZone(&DAT_100111d8,"ZRazbGenAtack1");
  RegisterZone(&DAT_100111e0,"ZRazbGenAtack2");
  RegisterZone(&DAT_100111e8,"ZRazbGenAtack3");
  RegisterZone(&DAT_10010eb0,"ZSecondA1");
  RegisterZone(&DAT_10010e38,"ZRazbAddW1");
  RegisterZone(&DAT_10010e30,"ZRazbAddW2");
  RegisterZone(&DAT_10010eb8,"ZRazbAddW4");
  RegisterZone(&DAT_10011278,"ZComForta1");
  RegisterZone(&DAT_10010e00,"ZSee1");
  RegisterZone(&DAT_10010e08,"ZSee2");
  RegisterZone(&DAT_10011020,"ZRazbGlav2");
  RegisterZone(&DAT_10010e78,"ZPodmoga2");
  RegisterZone(&DAT_100111f0,"ZPred1");
  RegisterZone(&DAT_10011228,"ZTrader_1");
  RegisterZone(&DAT_10011288,"ZUkr_N1");
  RegisterZone(&DAT_10011148,"ZOboz1");
  RegisterZone(&DAT_100110c0,"ZGeneral_1");
  RegisterZone(&DAT_10010e58,"ZKon_1");
  RegisterZone(&DAT_10010e50,"ZKon_2");
  RegisterZone(&DAT_10010e70,"ZKon_3");
  RegisterZone(&DAT_10010e68,"ZKon_4");
  RegisterZone(&DAT_10010e88,"ZZbor_12");
  RegisterZone(&DAT_10010e98,"ZZbor_34");
  RegisterZone(&DAT_10010d58,"ZZbor_12_Final");
  RegisterZone(&DAT_10011298,"ZZbor_34_Final");
  RegisterZone(&DAT_10010e90,"ZRazvilka");
  RegisterZone(&DAT_100110f8,"ZSelo_W1");
  RegisterZone(&DAT_10011110,"ZSelo_W2");
  RegisterZone(&DAT_10010be0,"ZS_Op1");
  RegisterZone(&DAT_10010c00,"ZS_Op2");
  RegisterZone(&DAT_10011038,DAT_1000d4c8);
  RegisterZone(&DAT_10010c58,"ZS_A1");
  RegisterZone(&DAT_10010e48,"ZRazb_Help1");
  RegisterZone(&DAT_10011158,"ZRazb_S1");
  RegisterZone(&DAT_10011258,"ZFort_H1");
  RegisterZone(&DAT_10010da8,"ZGusar_1");
  RegisterZone(&DAT_10011108,"ZRazb_F1");
  RegisterZone(&DAT_10011118,"ZRazb_F2");
  RegisterZone(&DAT_10010ec0,"ZRazbAddW3");
  RegisterZone(&DAT_10011138,"ZHomeTrade");
  RegisterZone(&DAT_10011028,"ZTownTrade1");
  RegisterZone(&DAT_10010ff8,"ZTownTrade2");
  RegisterZone(&DAT_10011000,"ZTownTrade3");
  RegisterZone(&DAT_10011058,"ZHomeA1");
  RegisterZone(&DAT_10011050,"ZHomeA2");
  RegisterZone(&DAT_100111b0,"ZHomeCanon1");
  RegisterZone(&DAT_100111a8,"ZHomeCanon2");
  RegisterZone(&DAT_100111c0,"ZHomeCanon3");
  RegisterUnits(&DAT_10010f90,"GHomeTur1");
  RegisterUnits(&DAT_10010fe0,"GHomeTur2");
  RegisterUnitType(&DAT_10010fc0,"Center_Spain(sp)");
  RegisterUnitType(&DAT_10010c28,"shahta(sp)");
  RegisterUnitType(&DAT_10011168,"Rinok(sp)");
  RegisterUnitType(&DAT_10011210,"Dom_Algir(AL)");
  RegisterUnitType(&DAT_10010c78,"Melnica_tu(AL)");
  RegisterUnitType(&DAT_10010db8,"Sclad4(AL)");
  RegisterUnitType(&DAT_10010d90,"shahta(AL)");
  RegisterUnitType(&DAT_10010c18,"Mechet_Turki(AL)");
  RegisterUnitType(&DAT_10011218,"Port(AL)");
  RegisterUnitType(&DAT_10010ba8,"Rinok_Turki(AL)");
  RegisterUnitType(&DAT_10010da0,"Barack_Turki(AL)");
  RegisterUnitType(&DAT_10011190,"Kuznia_Turki(AL)");
  RegisterUnitType(&DAT_10010b78,"Konushnia_Turki(AL)");
  RegisterUnitType(&DAT_10010e60,"Art_Depo_Turki(AL)");
  RegisterUnitType(&DAT_10010b98,"Minaret(AL)");
  RegisterUnitType(&DAT_10010ee0,"Center_Algir(AL)");
  RegisterUnitType(&DAT_10010ea8,"Diplomatic_Turki(AL)");
  RegisterUnitType(&DAT_10011250,"Dom_Swisair(SV)");
  RegisterUnitType(&DAT_10010d50,"Melnica(SV)");
  RegisterUnitType(&DAT_10010e40,"Sclad1(SV)");
  RegisterUnitType(&DAT_10011018,"shahta(SV)");
  RegisterUnitType(&DAT_10010ca0,"Kostel(SV)");
  RegisterUnitType(&DAT_10010b60,"PorE(SV)");
  RegisterUnitType(&DAT_10010b68,"Rinok(SV)");
  RegisterUnitType(&DAT_10010e10,"Kazarma(SV)");
  RegisterUnitType(&DAT_10011200,"Kuznica(SV)");
  RegisterUnitType(&DAT_10010bb8,"Konushnia_Swesair(SV)");
  RegisterUnitType(&DAT_10010ed8,"artileri_depo(SV)");
  RegisterUnitType(&DAT_10010bf0,"akademia_E(SV)");
  RegisterUnitType(&DAT_10010fa0,"Center_Swesair(SV)");
  RegisterUnitType(&DAT_10011008,"Kazarma_evro(SV)");
  RegisterUnitType(&DAT_10010ba0,"PERES_KOR(AL)");
  RegisterUnitType(&DAT_10011030,"Krestian_Turki(AL)");
  RegisterUnitType(&DAT_10011248,"Linkor(AL)");
  RegisterUnitType(&DAT_10010c60,"WALL_EV(SV)");
  RegisterUnitType(&DAT_10010c50,"WALL_UKR(SV)");
  RegisterUnitType(&DAT_10010c68,"Bashnia(SV)");
  RegisterUnitType(&DAT_10011040,"Pushka(SV)");
  RegisterUnitType(&DAT_10010d40,"Reitar_Shwec(SV)");
  RegisterUnitType(&DAT_10010ec8,"Lodka(SV)");
  RegisterUnitType(&DAT_10010fb0,"Strelec_Algir(AL)");
  RegisterFormation(&DAT_10010b40,"#LINE72");
  RegisterUnitType(&DAT_10010fa8,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_10010f98,"Mameluk(AL)");
  RegisterFormation(&DAT_10011238,"#LINE15");
  RegisterFormation(&DAT_10010f60,"#LINE40PUS");
  RegisterFormation(&DAT_10010f88,"#LINE30PUS");
  RegisterFormation(&DAT_10010f70,"#LINE20PUS");
  RegisterFormation(&DAT_10010f68,"#LINE15PUS");
  RegisterFormation(&DAT_10010cb0,"#SHIPS8");
  RegisterDynGroup(&DAT_10010d18);
  RegisterDynGroup(&DAT_10010d00);
  RegisterVar(&DAT_10010d18,8);
  RegisterVar(&DAT_10010d00,8);
  RegisterDynGroup(&DAT_10010b90);
  RegisterDynGroup(&DAT_10010b88);
  RegisterVar(&DAT_10010b90,8);
  RegisterVar(&DAT_10010b88,8);
  RegisterVar(&DAT_1000d030,4);
  RegisterVar(&DAT_100112a4,4);
  RegisterVar(&DAT_100112a8,4);
  RegisterVar(&DAT_100112ac,4);
  RegisterVar(&DAT_100112b0,4);
  RegisterVar(&DAT_10011080,8);
  RegisterZone(&DAT_10010bb0,"ZRazbAdd2");
  RegisterZone(&DAT_100111f8,"ZRazbYahta");
  RegisterZone(&DAT_10011098,"ZRazb_L1");
  RegisterZone(&DAT_100110b8,"ZRazb_P1");
  RegisterZone(&DAT_10010f28,"ZRazb_T");
  RegisterZone(&DAT_10011090,"ZHomeD1");
  RegisterZone(&DAT_10011088,"ZHomeD2");
  RegisterZone(&DAT_100110d8,"ZRazb_D1");
  RegisterZone(&DAT_100110e0,"ZRazb_D2");
  RegisterZone(&DAT_100110e8,"ZRazb_D3");
  RegisterZone(&DAT_10010df0,"ZTemp_D");
  RegisterDynGroup(&DAT_10010ef8);
  RegisterDynGroup(&DAT_10010c98);
  RegisterDynGroup(&DAT_10010c90);
  RegisterDynGroup(&DAT_10010c88);
  RegisterDynGroup(&DAT_10010c80);
  RegisterDynGroup(&DAT_10010de0);
  RegisterDynGroup(&DAT_10010dc0);
  RegisterVar(&DAT_10010ef8,8);
  RegisterVar(&DAT_10010c98,8);
  RegisterVar(&DAT_10010c90,8);
  RegisterVar(&DAT_10010c88,8);
  RegisterVar(&DAT_10010c80,8);
  RegisterVar(&DAT_10010de0,8);
  RegisterVar(&DAT_10010dc0,8);
  RegisterDynGroup(&DAT_10010ea0);
  RegisterVar(&DAT_10010ea0,8);
  RegisterVar(&DAT_1000d034,4);
  RegisterVar(&DAT_100112b4,4);
  RegisterVar(&DAT_100112b8,8);
  RegisterDynGroup(&DAT_10010d38);
  RegisterDynGroup(&DAT_10010cc8);
  RegisterDynGroup(&DAT_10010cc0);
  RegisterDynGroup(&DAT_10010cd0);
  RegisterVar(&DAT_10010d38,8);
  RegisterVar(&DAT_10010cc8,8);
  RegisterVar(&DAT_10010cc0,8);
  RegisterVar(&DAT_10010cd0,8);
  RegisterUnitType(&DAT_10011208,"YahtaTU(TU)");
  RegisterDynGroup(&DAT_10010d60);
  RegisterVar(&DAT_10010d60,8);
  RegisterDynGroup(&DAT_10010d70);
  RegisterVar(&DAT_10010d70,8);
  RegisterDynGroup(&DAT_10010ef0);
  RegisterVar(&DAT_10010ef0,8);
  RegisterFormation(&DAT_10010d68,"#ALONE");
  RegisterUnitType(&DAT_10011150,"SUNDUK1O(UN)");
  RegisterUnitType(&DAT_10011140,"SUNDUK1Z(UN)");
  RegisterDynGroup(&DAT_10010d78);
  RegisterVar(&DAT_10010d78,8);
  RegisterDynGroup(&DAT_10010c70);
  RegisterVar(&DAT_10010c70,8);
  RegisterDynGroup(&DAT_10010ca8);
  RegisterVar(&DAT_10010ca8,8);
  RegisterDynGroup(&DAT_10010f08);
  RegisterVar(&DAT_10010f08,8);
  RegisterDynGroup(&DAT_10011160);
  RegisterVar(&DAT_10011160,8);
  RegisterVar(&DAT_100112c0,4);
  RegisterVar(&DAT_1000d038,4);
  RegisterDynGroup(&DAT_10010f10);
  RegisterVar(&DAT_10010f10,8);
  RegisterDynGroup(&DAT_10010f18);
  RegisterVar(&DAT_10010f18,8);
  RegisterDynGroup(&DAT_10010f40);
  RegisterVar(&DAT_10010f40,8);
  RegisterVar(&DAT_100112c4,4);
  RegisterDynGroup(&DAT_10010ce0);
  RegisterVar(&DAT_10010ce0,8);
  RegisterVar(&DAT_100112c8,4);
  RegisterDynGroup(&DAT_10010b38);
  RegisterVar(&DAT_10010b38,8);
  SetPlayerName(1,"ROBBERS");
  SetPlayerName(2,"ALLIES");
  SetPlayerName(3,"DWELLERS");
  ChangeFriends(0,0xd);
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int uVar7;
  char *pcVar8;
  void *pcVar9;
  void *pcVar10;
  int *puVar11;
  char *pcStack_30;
  char auStack_2c [44];
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ChangeFriends(0,0xd);
    iVar3 = GetDiff(0);
    DAT_100112b8_ovl = ((double)iVar3 * DAT_1000b1c0_ovl + DAT_1000b1b8_ovl) * DAT_1000b1b0_ovl;
    EnableUnit(0,&DAT_10010fc0,0);
    EnableUnit(0,&DAT_10010c28,0);
    EnableUnit(0,&DAT_10011168,0);
    EnableUnit(0,&DAT_10011008,0);
    EnableUnit(0,&DAT_10011030,0);
    EnableUnit(0,&DAT_10011250,0);
    EnableUnit(0,&DAT_10011210,0);
    EnableUnit(0,&DAT_10010d50,0);
    EnableUnit(0,&DAT_10010c78,0);
    EnableUnit(0,&DAT_10010e40,0);
    EnableUnit(0,&DAT_10010db8,0);
    EnableUnit(0,&DAT_10011018,0);
    EnableUnit(0,&DAT_10010d90,0);
    EnableUnit(0,&DAT_10010ca0,0);
    EnableUnit(0,&DAT_10010c18,0);
    EnableUnit(0,&DAT_10010b60,0);
    EnableUnit(0,&DAT_10011218,0);
    EnableUnit(0,&DAT_10010b68,0);
    EnableUnit(0,&DAT_10010ba8,0);
    EnableUnit(0,&DAT_10010e10,0);
    EnableUnit(0,&DAT_10010da0,0);
    EnableUnit(0,&DAT_10011200,0);
    EnableUnit(0,&DAT_10011190,0);
    EnableUnit(0,&DAT_10010bb8,0);
    EnableUnit(0,&DAT_10010b78,0);
    EnableUnit(0,&DAT_10010ed8,0);
    EnableUnit(0,&DAT_10010e60,0);
    EnableUnit(0,&DAT_10010bf0,0);
    EnableUnit(0,&DAT_10010b98,0);
    EnableUnit(0,&DAT_10010fa0,0);
    EnableUnit(0,&DAT_10010ee0,0);
    EnableUnit(0,&DAT_10010c60,0);
    EnableUnit(0,&DAT_10010c68,0);
    EnableUnit(0,&DAT_10010c50,0);
    EnableUnit(0,&DAT_10010ec8,0);
    DisableMission(0x42);
    DisableMission(0x51);
    DisableMission(0x43);
    DisableMission(0x52);
    DisableMission(0x44);
    DisableMission(0x53);
    DisableMission(0x45);
    DisableMission(0x54);
    DisableMission(0x46);
    DisableMission(0x55);
    DisableMission(0x47);
    DisableMission(0x56);
    DisableMission(0x48);
    DisableMission(0x57);
    DisableMission(0x4c);
    DisableMission(0x4f);
    DisableMission(0x4d);
    DisableMission(0x50);
    DisableMission(0x4e);
    InitialUpgrade("GRazb_Tur","Bashnia_3(AL)PAUSE");
    InitialUpgrade("GRazb_Tur","Bashnia_3(AL)PAUSE3");
    InitialUpgrade("GRazb_Tur","Bashnia_3(AL)PAUSE4");
    InitialUpgrade("GRazb_Tur","Bashnia_3(AL)PAUSE5");
    InitialUpgrade("GRazb_Tur","Bashnia_3(AL)PAUSE6");
    InitialUpgrade("GRazb_Tur","Bashnia_3(AL)PAUSE7");
    InitialUpgrade("GGiv_Ac","AKA04SV");
    InitialUpgrade("GKuz1","KUZ01SV");
    InitialUpgrade("GRazbA","AKA04AL");
    CreateObject0(&DAT_10010ef0,&DAT_10010d68,&DAT_10011140,1,&DAT_10011158,0);
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      SetResource(0,3,50000);
      SetResource(0,1,3000);
      SetResource(0,0,10000);
      SetResource(0,2,0);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      CreateObject0(&DAT_10010f10,&DAT_10010d68,&DAT_10011040,0,&DAT_100111b0,0xa0);
      CreateObject0(&DAT_10010f18,&DAT_10010d68,&DAT_10011040,0,&DAT_100111a8,0xa0);
      CreateObject0(&DAT_10010f40,&DAT_10010d68,&DAT_10011040,0,&DAT_100111c0,0xa0);
      CreateObject0(&DAT_10010b38,&DAT_10010f60,&DAT_10010d40,2,&DAT_10010da8,0x41);
      DAT_1000d030 = 5000;
      DAT_100112c4 = 5;
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 1) {
      SetResource(0,3,20000);
      SetResource(0,1,0x5dc);
      SetResource(0,0,5000);
      SetResource(0,2,0);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      InitialUpgrade("GRazb_S","Pehota_turki(AL)ATTACK");
      InitialUpgrade("GRazb_S","Pehota_turki(AL)SHIELD");
      InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK");
      InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD");
      CreateObject0(&DAT_10010f10,&DAT_10010d68,&DAT_10011040,0,&DAT_100111b0,0xa0);
      CreateObject0(&DAT_10010f18,&DAT_10010d68,&DAT_10011040,0,&DAT_100111a8,0xa0);
      CreateObject0(&DAT_10010b38,&DAT_10010f88,&DAT_10010d40,2,&DAT_10010da8,0x41);
      DAT_1000d030 = 4000;
      DAT_100112c4 = 4;
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 2) {
      SetResource(0,3,3000);
      SetResource(0,1,600);
      SetResource(0,0,0);
      SetResource(0,2,0);
      SetResource(0,4,0x578);
      SetResource(0,5,0x578);
      InitialUpgrade("GRazb_S","Pehota_turki(AL)ATTACK");
      InitialUpgrade("GRazb_S","Pehota_turki(AL)SHIELD");
      InitialUpgrade("GRazb_S","Pehota_turki(AL)ATTACK3");
      InitialUpgrade("GRazb_S","Pehota_turki(AL)SHIELD3");
      InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK");
      InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD");
      InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK3");
      InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD3");
      CreateObject0(&DAT_10010f18,&DAT_10010d68,&DAT_10011040,0,&DAT_100111b0,0xa0);
      CreateObject0(&DAT_10010b38,&DAT_10010f70,&DAT_10010d40,2,&DAT_10010da8,0x41);
      DAT_1000d030 = 3000;
      DAT_100112c4 = 2;
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 3) {
      SetResource(0,3,2000);
      SetResource(0,1,400);
      SetResource(0,0,0);
      SetResource(0,2,0);
      SetResource(0,4,1000);
      SetResource(0,5,1000);
      InitialUpgrade("GRazb_S","Pehota_turki(AL)ATTACK");
      InitialUpgrade("GRazb_S","Pehota_turki(AL)SHIELD");
      InitialUpgrade("GRazb_S","Pehota_turki(AL)ATTACK3");
      InitialUpgrade("GRazb_S","Pehota_turki(AL)SHIELD3");
      InitialUpgrade("GRazb_S","Pehota_turki(AL)ATTACK4");
      InitialUpgrade("GRazb_S","Pehota_turki(AL)SHIELD4");
      InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK");
      InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD");
      InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK3");
      InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD3");
      InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK4");
      InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD4");
      InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK5");
      InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD5");
      CreateObject0(&DAT_10010b38,&DAT_10010f68,&DAT_10010d40,2,&DAT_10010da8,0x41);
      DAT_1000d030 = 2000;
      DAT_100112c4 = 1;
    }
    ShowPage("#PAGE1");
    SetLightSpot(&DAT_10011048,1,1);
    SelectUnits(&DAT_10010db0,0);
    SetStandGround(2,1);
    SelectUnits(&DAT_10010e20,0);
    SetStandGround(1,1);
    SelectUnits(&DAT_10010c10,0);
    SetStandGround(1,1);
    ClearSelection(1);
    SelectUnits(&DAT_10010bf8,0);
    AllowAttack(2,0);
    SelectUnits(&DAT_10011230,0);
    SetStandGround(2,1);
    SelectUnits(&DAT_10010ff0,0);
    SelectUnits(&DAT_100111c8,1);
    SelectUnits(&DAT_100111d0,1);
    SelectUnits(&DAT_100110a0,1);
    SelOpenGates(2);
    SelectUnits(&DAT_10011240,0);
    SelOpenGates(1);
    TakeWood(&DAT_10010dd8);
    TakeStone(&DAT_10010dc8);
    TakeWood(&DAT_10010fd0);
    TakeStone(&DAT_10010fb8);
    TakeFood(&DAT_10010f80);
    TakeWood(&DAT_100110f0);
    TakeFood(&DAT_10011130);
    RunTimer(1,1000);
    RunTimer(2,100);
    RunTimer(4,1000);
    RunTimer(5,100);
    RunTimer(6,1000);
    RunTimer(0xd,100);
    RunTimer(0xe,100);
    RunTimer(7,1000);
    SetTrigg(0x3b,0);
    SetTrigg(0x3c,0);
    SetTrigg(0x3d,0);
    SetTrigg(0x41,0);
    DAT_100112c8 = 0;
    if (0 < DAT_100112c4) {
      do {
        ProduceUnitFast(&DAT_10010d80,&DAT_10011040,&DAT_10010ce0,5);
        DAT_100112c8 = DAT_100112c8 + 1;
      } while (DAT_100112c8 < DAT_100112c4);
    }
  }
  cVar1 = Trigg(0x27);
  if (cVar1 != '\0') {
    cVar1 = TimerDoneFirst(6);
    if (cVar1 != '\0') {
      ShowPage("#PAGE76");
      SetLightSpot(&DAT_10010ff8,1,0xc);
    }
    cVar1 = Trigg(0x3e);
    if ((cVar1 != '\0') &&
       (((iVar3 = GetUnitsAmount1(&DAT_10011028,&DAT_10010cb8), iVar3 != 0 ||
         (iVar3 = GetUnitsAmount1(&DAT_10010ff8,&DAT_10010cb8), iVar3 != 0)) ||
        (iVar3 = GetUnitsAmount1(&DAT_10011000,&DAT_10010cb8), iVar3 != 0)))) {
      SetTrigg(0x3b,0);
      SetTrigg(0x3e,0);
      RunTimer(0xd,500);
      ShowPage("#PAGE77");
    }
    cVar1 = TimerDone(0xd);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0x3b), cVar1 != '\0')) {
      SetTrigg(0x3b,0);
      SetTrigg(0x3d,0);
      ShowPage("#PAGE78");
    }
    cVar1 = Trigg(0x3d);
    if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10011138,&DAT_10010cb8), iVar3 != 0)) {
      SetTrigg(0x3d,0);
      SetTrigg(0x3c,0);
      RunTimer(0xe,500);
      ShowPage("#PAGE79");
    }
    cVar1 = Trigg(0x3c);
    if ((cVar1 != '\0') && (cVar1 = TimerDone(0xe), cVar1 != '\0')) {
      SetTrigg(0x3c,0);
      SetTrigg(0x3e,0);
      ShowPage("#PAGE80");
      iVar3 = GetDiff(0);
      AddResource(0,5,(10 - iVar3) * 100);
      iVar3 = GetDiff(0);
      AddResource(0,4,(10 - iVar3) * 100);
    }
    cVar1 = Trigg(0x3b);
    if ((((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10011028,&DAT_10010cb8), iVar3 == 0)) &&
        (iVar3 = GetUnitsAmount1(&DAT_10010ff8,&DAT_10010cb8), iVar3 == 0)) &&
       (iVar3 = GetUnitsAmount1(&DAT_10011000,&DAT_10010cb8), iVar3 == 0)) {
      SetTrigg(0x3b,0);
      SetTrigg(0x3e,0);
      ShowPage("#PAGE81");
    }
    cVar1 = Trigg(0x3c);
    if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10011138,&DAT_10010cb8), iVar3 == 0)) {
      SetTrigg(0x3c,0);
      SetTrigg(0x3d,0);
      ShowPage("#PAGE82");
    }
    cVar1 = Trigg(0x44);
    if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10010cb8), iVar3 == 0)) &&
       (iVar3 = GetTotalAmount0(&DAT_10011260), iVar3 != 0)) {
      SetTrigg(0x44,0);
      ShowPage("#PAGE83");
      RemoveGroup(&DAT_10011260,&DAT_10010cb8);
    }
  }
  cVar1 = Trigg(0x27);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10010dd0), iVar3 != 0)) {
    cVar1 = TimerDone(7);
    if (cVar1 != '\0') {
      iVar3 = GetTotalAmount0(&DAT_10010cd0);
      iVar4 = GetTotalAmount0(&DAT_10010cc0);
      iVar5 = GetTotalAmount0(&DAT_10010cc8);
      if (iVar3 + iVar4 + iVar5 < 3) {
        iVar3 = GetDiff(0);
        RunTimer(7,(5 - iVar3) * 1000);
        CreateObject0(&DAT_10010d38,&DAT_10010d68,&DAT_10011208,1,&DAT_100111f8,0x3c);
        iVar3 = GetTotalAmount0(&DAT_10010cc8);
        if (iVar3 == 0) {
          RemoveGroup(&DAT_10010d38,&DAT_10010cc8);
          puVar11 = &DAT_10010cc8;
LAB_10002a7d:
          SelectUnits(puVar11,0);
          puVar11 = &DAT_10011058;
        }
        else {
          iVar3 = GetTotalAmount0(&DAT_10010cc0);
          if (iVar3 != 0) {
            iVar3 = GetTotalAmount0(&DAT_10010cd0);
            if (iVar3 != 0) goto LAB_10002a99;
            RemoveGroup(&DAT_10010d38,&DAT_10010cd0);
            puVar11 = &DAT_10010cd0;
            goto LAB_10002a7d;
          }
          RemoveGroup(&DAT_10010d38,&DAT_10010cc0);
          SelectUnits(&DAT_10010cc0,0);
          puVar11 = &DAT_10011050;
        }
        SelSendTo(1,puVar11,0,0);
      }
    }
LAB_10002a99:
    SelectUnits(&DAT_10010cc8,0);
    iVar3 = GetUnitsAmount1(&DAT_10011088,&DAT_10010cc8);
    if ((iVar3 != 0) || (iVar3 = GetUnitsAmount1(&DAT_10011090,&DAT_10010cc8), iVar3 != 0)) {
      iVar3 = GetTotalAmount0(&DAT_10010f90);
      if (iVar3 == 0) {
        iVar3 = GetTotalAmount0(&DAT_10010fe0);
        if (iVar3 == 0) {
          iVar3 = GetTotalAmount0(&DAT_10010fe8);
          if (iVar3 == 0) goto LAB_10002b24;
          puVar11 = &DAT_10010fe8;
        }
        else {
          puVar11 = &DAT_10010fe0;
        }
      }
      else {
        puVar11 = &DAT_10010f90;
      }
      SelAttackGroup(1,puVar11);
    }
LAB_10002b24:
    SelectUnits(&DAT_10010cc0,0);
    iVar3 = GetUnitsAmount1(&DAT_10011088,&DAT_10010cc0);
    if ((iVar3 != 0) || (iVar3 = GetUnitsAmount1(&DAT_10011090,&DAT_10010cc0), iVar3 != 0)) {
      iVar3 = GetTotalAmount0(&DAT_10010fe0);
      if (iVar3 == 0) {
        iVar3 = GetTotalAmount0(&DAT_10010fe8);
        if (iVar3 == 0) {
          iVar3 = GetTotalAmount0(&DAT_10010f90);
          if (iVar3 == 0) goto LAB_10002baf;
          puVar11 = &DAT_10010f90;
        }
        else {
          puVar11 = &DAT_10010fe8;
        }
      }
      else {
        puVar11 = &DAT_10010fe0;
      }
      SelAttackGroup(1,puVar11);
    }
LAB_10002baf:
    SelectUnits(&DAT_10010cd0,0);
    iVar3 = GetUnitsAmount1(&DAT_10011088,&DAT_10010cd0);
    if ((iVar3 != 0) || (iVar3 = GetUnitsAmount1(&DAT_10011090,&DAT_10010cd0), iVar3 != 0)) {
      iVar3 = GetTotalAmount0(&DAT_10010fe8);
      if (iVar3 == 0) {
        iVar3 = GetTotalAmount0(&DAT_10010f90);
        if (iVar3 == 0) {
          iVar3 = GetTotalAmount0(&DAT_10010fe0);
          if (iVar3 == 0) goto LAB_10002c3a;
          puVar11 = &DAT_10010fe0;
        }
        else {
          puVar11 = &DAT_10010f90;
        }
      }
      else {
        puVar11 = &DAT_10010fe8;
      }
      SelAttackGroup(1,puVar11);
    }
LAB_10002c3a:
    cVar1 = Trigg(0x40);
    if ((((cVar1 != '\0') || (iVar3 = GetTotalAmount0(&DAT_10010d78), iVar3 == 0)) &&
        (iVar3 = GetTotalAmount0(&DAT_10010f08), iVar3 == 0)) &&
       (iVar3 = GetTotalAmount0(&DAT_10011160), iVar3 == 0)) {
      SetTrigg(0x40,0);
      SelectUnits(&DAT_10010d78,0);
      SelDie(1);
      CreateObject0(&DAT_10010d78,&DAT_10010d68,&DAT_10010ba0,1,&DAT_10010f28,200);
      SelectUnits(&DAT_10010d78,0);
      SelSendTo(1,&DAT_100110b8,0xb4,0);
      RunTimer(0xf,100);
      SetTrigg(0x42,0);
      DAT_100112c0 = 0;
    }
    SelectUnits(&DAT_10010d78,0);
    iVar3 = GetUnitsAmount1(&DAT_10010f28,&DAT_10010d78);
    if ((iVar3 != 0) && (cVar1 = CheckLeaveAbility(1), cVar1 != '\0')) {
      if ((DAT_100112c0 < 0x1e) && (cVar1 = TimerDone(0xf), cVar1 != '\0')) {
        DAT_100112c0 = DAT_100112c0 + 1;
        RunTimer(0xf,0x14);
        cVar1 = GetUnitInfo(&DAT_10010dd0,0,auStack_2c);
        cVar2 = GetUnitInfo(&DAT_10010dd0,1,auStack_2c);
        if (cVar2 != '\0') {
          CreateObject0(&DAT_10010ca8,&DAT_10010d68,&DAT_10010fa8,1,&DAT_100110b8,0x3c);
        }
        if (cVar1 != '\0') {
          CreateObject0(&DAT_10010c70,&DAT_10010d68,&DAT_10010fb0,1,&DAT_10011098,0x3c);
        }
        SelectUnits(&DAT_10010ca8,1);
        SelectUnits(&DAT_10010c70,1);
        SendUnitsToTransport(1);
        RemoveGroup(&DAT_10010ca8,&DAT_10011160);
        RemoveGroup(&DAT_10010c70,&DAT_10010f08);
      }
      SelectUnits(&DAT_10010d78,0);
      if (DAT_100112c0 == 0x1e) {
        iVar3 = GetTotalAmount0(&DAT_10011160);
        iVar4 = GetTotalAmount0(&DAT_10010f08);
        iVar5 = GetNInside(1);
        if (iVar3 + iVar4 == iVar5) {
          SetTrigg(0x41,0);
        }
      }
    }
    cVar1 = Trigg(0x41);
    if (cVar1 != '\0') {
      SetTrigg(0x41,0);
      SelectUnits(&DAT_10010d78,0);
      uVar6 = rand();
      DAT_1000d038 = uVar6 & -2147483647;
      if ((int)DAT_1000d038 < 0) {
        DAT_1000d038 = (DAT_1000d038 - 1 | -2) + 1;
      }
      if (DAT_1000d038 == 0) {
        SelSendTo(1,&DAT_10010f28,0x3c,0);
        SelSendTo(1,&DAT_10010df0,0,2);
        SelSendTo(1,&DAT_10011090,0x3c,2);
      }
      else if (DAT_1000d038 != 1) goto LAB_10002f24;
      SelSendTo(1,&DAT_10010f28,0x3c,0);
      SelSendTo(1,&DAT_10010df0,0,2);
      SelSendTo(1,&DAT_10011088,0x1e,2);
    }
LAB_10002f24:
    cVar1 = Trigg(0x42);
    if ((cVar1 != '\0') &&
       ((iVar3 = GetUnitsAmount1(&DAT_10011090,&DAT_10010d78), iVar3 != 0 ||
        (iVar3 = GetUnitsAmount1(&DAT_10011088,&DAT_10010d78), iVar3 != 0)))) {
      SelectUnits(&DAT_10010d78,0);
      cVar1 = CheckLeaveAbility(1);
      if (cVar1 != '\0') {
        SetTrigg(0x42,0);
        SetTrigg(0x40,0);
        PushAllUnitsAway(1);
      }
    }
    SelectUnits(&DAT_10010d78,0);
    cVar1 = Trigg(0x42);
    if (((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10010ce8), iVar3 != 0)) &&
       (DAT_1000d038 == 0)) {
      SelectUnits(&DAT_10010f08,0);
      SelectUnits(&DAT_10011160,1);
      SelAttackGroup(1,&DAT_10010ce8);
    }
    else {
      cVar1 = Trigg(0x42);
      if (((cVar1 == '\0') && (DAT_1000d038 == 0)) && (iVar3 = GetNInside(1), iVar3 == 0)) {
        RunTimer(0x10,300);
        DAT_1000d038 = 3;
      }
    }
    cVar1 = Trigg(0x42);
    if (((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10010cf0), iVar3 != 0)) &&
       (DAT_1000d038 == 1)) {
      SelectUnits(&DAT_10010f08,0);
      SelectUnits(&DAT_10011160,1);
      SelAttackGroup(1,&DAT_10010cf0);
    }
    else {
      cVar1 = Trigg(0x42);
      if (((cVar1 == '\0') && (DAT_1000d038 == 1)) && (iVar3 = GetNInside(1), iVar3 == 0)) {
        RunTimer(0x10,300);
        DAT_1000d038 = 3;
      }
    }
    cVar1 = TimerDone(0x10);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0x41), cVar1 == '\0')) {
      RunTimer(0x10,4000);
      SelectUnits(&DAT_10010f08,0);
      SelectUnits(&DAT_10011160,1);
      SelSendAndKill(1,&DAT_100110d8,0x78,0);
      SelSendAndKill(1,&DAT_100110e0,0x28,2);
      SelSendAndKill(1,&DAT_100110e8,0x28,2);
    }
  }
  pcStack_30 = (char *)GetKilled(&DAT_100110b0);
  if (DAT_100112b8_ovl < (double)(int)pcStack_30) {
    pcStack_30 = (char *)GetDiff(0);
    DAT_100112b8_ovl = ((double)(int)pcStack_30 * DAT_1000b1c0_ovl + DAT_1000b1b8_ovl) * DAT_100112b8_ovl;
    ShowPage("#PAGE75");
    InitialUpgrade("GKomandir1","Kirasir(sp)SHIELD");
    InitialUpgrade("GKomandir1","Kirasir(sp)ATTACK3");
    InitialUpgrade("GKomandir1","Kirasir(sp)ATTACK3");
    InitialUpgrade("GKomandir1","Kirasir(sp)ATTACK3");
  }
  cVar1 = Trigg(2);
  if (((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10011048,&DAT_100110b0), iVar3 != 0)) &&
     (iVar3 = GetTotalAmount0(&DAT_10010ee8), iVar3 != 0)) {
    SetTrigg(2,0);
    SetTrigg(0x39,0);
    ClearLightSpot(1);
    ShowPage("#PAGE2");
    SetLightSpot(&DAT_10010de8,1,2);
    SelectUnits(&DAT_10010ee8,0);
    SelChangeNation(2,0);
    DisableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x43);
  }
  cVar1 = Trigg(0x38);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0x39), cVar1 == '\0')) &&
      (iVar3 = GetUnitsAmount0(&DAT_10010da8,0), iVar3 != 0)) && (cVar1 = Trigg(2), cVar1 == '\0'))
  {
    SetTrigg(0x38,0);
    ShowPage("#PAGE60");
    SelectUnits(&DAT_10010b38,0);
    SelChangeNation(2,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') &&
     ((iVar3 = GetUnitsAmount0(&DAT_10010c30,0), iVar3 != 0 ||
      (iVar3 = GetUnitsAmount0(&DAT_10010c20,0), iVar3 != 0)))) {
    SetTrigg(3,0);
    SelectUnits(&DAT_10010c10,0);
    Patrol(1,&DAT_10010c20,0x41);
    SelectUnits(&DAT_10010d98,0);
    SetStandGround(1,0);
    Patrol(1,&DAT_10010c20,0x41);
    ShowPage("#PAGE25");
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10010d28,0), iVar3 != 0)) {
    SetTrigg(4,0);
    FUN_10004f90(&DAT_10010f20,&DAT_10011178);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10010d20,0), iVar3 != 0)) {
    SetTrigg(5,0);
    FUN_10004f90(&DAT_10010f30,&DAT_10011170);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10010d10,0), iVar3 != 0)) {
    SetTrigg(6,0);
    FUN_10004f90(&DAT_10010f38,&DAT_10011188);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10010cf8,0), iVar3 != 0)) {
    SetTrigg(7,0);
    FUN_10004f90(&DAT_10010f48,&DAT_10011180);
  }
  cVar1 = Trigg(8);
  if (cVar1 != '\0') {
    uVar7 = FUN_10004e90(&DAT_10011178,&DAT_10010d28,&DAT_10010f20,"#PAGE11",0,2000,0,200,0
                         ,0);
    SetTrigg(8,0);
  }
  cVar1 = Trigg(9);
  if (cVar1 != '\0') {
    uVar7 = FUN_10004e90(&DAT_10011170,&DAT_10010d20,&DAT_10010f30,"#PAGE12",0,1000,0,100,
                         200,0);
    SetTrigg(9,0);
  }
  cVar1 = Trigg(10);
  if (cVar1 != '\0') {
    uVar7 = FUN_10004e90(&DAT_10011188,&DAT_10010d10,&DAT_10010f38,"#PAGE12",0,1000,0,100,0
                         ,200);
    SetTrigg(10,0);
  }
  cVar1 = Trigg(0xb);
  if (cVar1 != '\0') {
    uVar7 = FUN_10004e90(&DAT_10011180,&DAT_10010cf8,&DAT_10010f48,"#PAGE12",0,500,0,200,
                         100,100);
    SetTrigg(0xb,0);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10010f50,0), iVar3 != 0)) {
    SetTrigg(0xc,0);
    ShowPage("#PAGE31");
    FUN_10004f90(&DAT_10011220,&DAT_10010f50);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10011220), iVar3 == 0)) {
    SetTrigg(0xd,0);
    ShowPage("#PAGE32");
    SetLightSpot(&DAT_10010b80,1,4);
    SelectUnits(&DAT_10010f00,0);
    SelSendTo(2,&DAT_10010b80,0x41,1);
    SetTrigg(2,0);
    SetTrigg(0x3a,0);
    cVar1 = Trigg(8);
    if (cVar1 != '\0') {
      DAT_100112b4 = DAT_100112b4 + 1;
      SetLightSpot(&DAT_10011178,1,0x15);
    }
    cVar1 = Trigg(9);
    if (cVar1 != '\0') {
      DAT_100112b4 = DAT_100112b4 + 1;
      SetLightSpot(&DAT_10011170,1,0x16);
    }
    cVar1 = Trigg(10);
    if (cVar1 != '\0') {
      DAT_100112b4 = DAT_100112b4 + 1;
      SetLightSpot(&DAT_10011188,1,0x17);
    }
    cVar1 = Trigg(0xb);
    if (cVar1 != '\0') {
      DAT_100112b4 = DAT_100112b4 + 1;
      SetLightSpot(&DAT_10011180,1,0x18);
    }
    switch(DAT_100112b4) {
    case 0:
      pcVar8 = "#PAGE70";
      break;
    case 1:
      pcVar8 = "#PAGE71";
      break;
    case 2:
      pcVar8 = "#PAGE72";
      break;
    case 3:
      pcVar8 = "#PAGE73";
      break;
    default:
      goto switchD_100036bf_default;
    }
    ShowPage(pcVar8);
switchD_100036bf_default:
    DisableMission(0x43);
    EnableMission(0x44);
    DisableMission(0x41);
    EnableMission(0x42);
  }
  cVar1 = Trigg(0xe);
  if (cVar1 != '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10010b80,&DAT_10010f00);
    iVar4 = GetTotalAmount0(&DAT_10010f00);
    if ((iVar4 == iVar3) &&
       (iVar3 = GetTotalAmount0(&DAT_10010f00), pcVar9 = (void*)&InitialUpgrade, iVar3 != 0)) {
      SetTrigg(0xe,0);
      ShowPage("#PAGE33");
      SelectUnits(&DAT_10010f00,0);
      SelChangeNation(2,0);
      ClearLightSpot(4);
      EnableMission(0x45);
    }
  }
  cVar1 = Trigg(0x3a);
  if ((cVar1 == '\0') &&
     ((((cVar1 = Trigg(8), cVar1 != '\0' || (cVar1 = Trigg(9), cVar1 != '\0')) ||
       (cVar1 = Trigg(10), cVar1 != '\0')) || (cVar1 = Trigg(0xb), cVar1 != '\0')))) {
    cVar1 = Trigg(8);
    if (cVar1 == '\0') {
      ClearLightSpot(0x15);
    }
    cVar1 = Trigg(9);
    if (cVar1 == '\0') {
      ClearLightSpot(0x16);
    }
    cVar1 = Trigg(10);
    if (cVar1 == '\0') {
      ClearLightSpot(0x17);
    }
    cVar1 = Trigg(0xb);
    if (cVar1 == '\0') {
      ClearLightSpot(0x18);
    }
  }
  cVar1 = Trigg(0xf);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0xd), cVar1 == '\0')) &&
      ((iVar3 = GetTotalAmount0(&DAT_10010f20), iVar3 == 0 &&
       ((iVar3 = GetTotalAmount0(&DAT_10010f30), iVar3 == 0 &&
        (iVar3 = GetTotalAmount0(&DAT_10010f38), iVar3 == 0)))))) &&
     (iVar3 = GetTotalAmount0(&DAT_10010f48), iVar3 == 0)) {
    SetTrigg(0xf,0);
    ShowPage("#PAGE34");
    SetTrigg(0x10,0);
    DisableMission(0x45);
    EnableMission(0x46);
    EnableMission(0x47);
    ClearLightSpot(0x15);
    ClearLightSpot(0x16);
    ClearLightSpot(0x17);
    ClearLightSpot(0x18);
  }
  cVar1 = Trigg(0x10);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x13), cVar1 != '\0')) &&
     (iVar3 = GetUnitsAmount1(&DAT_10010de8,&DAT_100110b0), iVar3 != 0)) {
    SetTrigg(0x10,0);
    ShowPage("#PAGE35");
    SetLightSpot(&DAT_10010c30,1,5);
    SelectUnits(&DAT_10011120,0);
    SelSendTo(2,&DAT_10010b80,0x41,1);
    SetLightSpot(&DAT_10010b80,1,3);
    SetLightSpot(&DAT_10011258,1,0xb);
    DisableMission(0x47);
    EnableMission(0x48);
    EnableMission(0x4c);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10010b80,&DAT_10011120), 0x18 < iVar3)) {
    SetTrigg(0x11,0);
    ShowPage("#PAGE36");
    SelectUnits(&DAT_10011120,0);
    ClearLightSpot(0xb);
    SelChangeNation(2,0);
  }
  cVar1 = Trigg(0x12);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10010c10), iVar3 != 0)) &&
     ((iVar3 = GetUnitsAmount0(&DAT_100111d8,0), iVar3 != 0 ||
      ((iVar3 = GetUnitsAmount0(&DAT_100111e8,0), iVar3 != 0 ||
       (iVar3 = GetUnitsAmount0(&DAT_100111e0,0), iVar3 != 0)))))) {
    SetTrigg(0x12,0);
    SetTrigg(3,0);
    ShowPage("#PAGE30");
    SelectUnits(&DAT_10010c10,0);
    SelSendAndKill(1,&DAT_100111e8,0x78,0);
    SelSendAndKill(1,&DAT_10010c30,0x78,2);
    RunTimer(0x13,1000);
  }
  iVar3 = GetTotalAmount0(&DAT_10010c10);
  if ((((iVar3 != 0) && (cVar1 = TimerDone(0x13), cVar1 != '\0')) &&
      (cVar1 = Trigg(0x37), cVar1 != '\0')) &&
     (((iVar3 = GetUnitsAmount0(&DAT_100111d8,0), iVar3 != 0 ||
       (iVar3 = GetUnitsAmount0(&DAT_100111e8,0), iVar3 != 0)) ||
      (iVar3 = GetUnitsAmount0(&DAT_100111e0,0), iVar3 != 0)))) {
    SelectUnits(&DAT_10010c10,0);
    SelSendAndKill(1,&DAT_100111e8,0x78,0);
    SelSendAndKill(1,&DAT_10010c30,0x78,2);
    RunTimer(0x13,1000);
  }
  cVar1 = Trigg(0x13);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10010c10), iVar3 < 0xb)) &&
     ((iVar3 = GetTotalAmount0(&DAT_10010e18), iVar3 != 0 &&
      (iVar3 = GetUnitsAmount0(&DAT_10010c30,0), iVar3 != 0)))) {
    SetTrigg(0x13,0);
    cVar1 = AskQuestion("#PAGE50");
    if (cVar1 == '\0') {
      ShowPage("#PAGE53");
      SelectUnits(&DAT_10010e20,0);
      SetStandGround(1,0);
    }
    else {
      SetTrigg(0x14,0);
      SetTrigg(0x37,0);
      AddResource(0,1,2000);
      ChangeFriends(0,0xff);
      ShowPage("#PAGE52");
      SetTrigg(0x15,0);
      SelectUnits(&DAT_10010bc0,0);
      SelSendTo(1,&DAT_10010eb0,0xa0,0);
      SetTrigg(0x1f,0);
      SetTrigg(0x2d,0);
    }
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10010e18), iVar3 == 0)) {
    SetTrigg(0x14,0);
    ClearLightSpot(5);
    ShowPage("#PAGE51");
    SetLightSpot(&DAT_10011278,1,7);
    SetTrigg(0x20,0);
    SelectUnits(&DAT_100111a0,0);
    SelDie(1);
    SelectUnits(&DAT_10010c10,0);
    SelectUnits(&DAT_10010e20,1);
    SelSendAndKill(1,&DAT_10010f50,0x3c,0);
    SelSendAndKill(1,&DAT_10010de8,0x3c,2);
    DisableMission(0x4c);
    EnableMission(0x4d);
    EnableMission(0x4e);
    DisableMission(0x47);
    EnableMission(0x48);
  }
  cVar1 = Trigg(0x15);
  if (cVar1 == '\0') {
    SelectUnits(&DAT_10010bc0,0);
  }
  cVar1 = CheckLeaveAbility(1);
  if (cVar1 != '\0') {
    SetTrigg(0x15,0);
    SelectUnits(&DAT_10010bc0,0);
    SelectUnits(&DAT_10010e20,1);
    SelectUnits(&DAT_10010c10,1);
    SendUnitsToTransport(1);
    SetTrigg(0x16,0);
    SetTrigg(0x15,0);
  }
  cVar1 = Trigg(0x16);
  if (cVar1 == '\0') {
    SelectUnits(&DAT_10010bc0,0);
    cVar1 = Trigg(0x43);
    if (cVar1 != '\0') {
      pcStack_30 = (char *)GetTotalAmount0(&DAT_10010c10);
      iVar3 = GetTotalAmount0(&DAT_10010e20);
      pcVar8 = (char *)GetNInside(1);
      if ((pcStack_30 + iVar3 == pcVar8) &&
         (iVar3 = GetNInside(1), pcVar9 = (void*)&InitialUpgrade, iVar3 != 0)) {
        SetTrigg(0x43,0);
        SelSendTo(1,&DAT_10010e00,200,0);
        SelectUnits(&DAT_100111a0,0);
        SelDie(1);
        ClearLightSpot(5);
        ChangeFriends(0,0xd);
        SetTrigg(0x16,0);
        ShowPage("#PAGE51");
        SetLightSpot(&DAT_10011278,1,7);
        SetTrigg(0x20,0);
        DisableMission(0x4c);
        EnableMission(0x4d);
        EnableMission(0x4e);
        DisableMission(0x47);
        EnableMission(0x48);
      }
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_10010e00,&DAT_10010bc0);
  if (iVar3 != 0) {
    SelectUnits(&DAT_10010bc0,0);
    SelErase(1);
  }
  cVar1 = Trigg(0x24);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10011288,0), iVar3 != 0)) {
    SetTrigg(0x24,0);
    ShowPage("#PAGE4");
  }
  cVar1 = Trigg(0x23);
  if (cVar1 != '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10011148,&DAT_100111b8);
    iVar4 = GetTotalAmount0(&DAT_100111b8);
    if ((iVar4 == iVar3) &&
       (iVar3 = GetTotalAmount0(&DAT_100111b8), pcVar9 = (void*)&InitialUpgrade, iVar3 != 0)) {
      SetTrigg(0x23,0);
      ShowPage("#PAGE5");
      ClearLightSpot(0x15);
      SelectUnits(&DAT_100110d0,0);
      SelChangeNation(3,0);
      SelectUnits(&DAT_100111b8,0);
      SelChangeNation(0,3);
    }
  }
  iVar3 = GetTotalAmount0(&DAT_100110b0);
  if (iVar3 == 0) {
    ShowPage("#PAGE9");
    LooseGame();
  }
  cVar1 = Trigg(0x20);
  if ((cVar1 == '\0') && (cVar1 = Trigg(0x26), pcVar10 = (void*)&SelSendAndKill, cVar1 != '\0')) {
    cVar1 = Trigg(0x17);
    if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10011278,&DAT_100110b0), iVar3 != 0)) {
      SetTrigg(0x17,0);
      SetTrigg(0x2a,0);
      ShowPage("#PAGE54");
      SetLightSpot(&DAT_10011020,1,0x17);
      SelectUnits(&DAT_10010c08,0);
      SelectUnits(&DAT_100111c8,1);
      SelectUnits(&DAT_100111d0,1);
      SelChangeNation(2,0);
      SelectUnits(&DAT_10010c40,0);
      SelSendTo(2,&DAT_100111f0,0x7d,0);
      SelSendTo(2,&DAT_10010e78,0x7d,2);
      iVar3 = GetDiff(0);
      AddResource(0,4,(5 - iVar3) * 500);
      iVar3 = GetDiff(0);
      AddResource(0,5,(2 - iVar3) * 500);
      uVar7 = GetDiff(0);
      switch(uVar7) {
      case 0:
        InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK");
        InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD");
        break;
      case 1:
        InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK3");
        InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD3");
        break;
      case 2:
        InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK4");
        InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD4");
        InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK5");
        InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD5");
        break;
      case 3:
        InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK5");
        InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD5");
        InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK6");
        InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD6");
        InitialUpgrade("GRazb_K","Mameluk(AL)ATTACK7");
        InitialUpgrade("GRazb_K","Mameluk(AL)SHIELD7");
      }
      DisableMission(0x4e);
      EnableMission(0x4f);
      EnableMission(0x50);
      EnableMission(0x56);
    }
    cVar1 = Trigg(0x2a);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0x18);
      if (cVar1 != '\0') {
        iVar3 = GetUnitsAmount1(&DAT_10010e78,&DAT_10010c40);
        iVar4 = GetTotalAmount0(&DAT_10010c40);
        if (iVar4 == iVar3) {
          SetTrigg(0x18,0);
          SelectUnits(&DAT_10010c40,0);
          ShowPage("#PAGE55");
          SelChangeNation(2,0);
        }
      }
      cVar1 = Trigg(0x19);
      if ((cVar1 != '\0') && (cVar1 = Trigg(0x17), cVar1 == '\0')) {
        RunTimer(0xf,DAT_1000d030);
        SetTrigg(0x19,0);
      }
      cVar1 = TimerDoneFirst(0xf);
      if (cVar1 != '\0') {
        SetTrigg(0x19,0);
      }
      iVar3 = GetTotalAmount0(&DAT_10010e28);
      if (iVar3 != 0) {
        cVar1 = TimerDone(1);
        if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100111d0), iVar3 == 0)) {
          iVar3 = GetTotalAmount0(&DAT_10010d18);
          while (((iVar3 < 10 && (cVar1 = TimerDone(2), cVar1 != '\0')) &&
                 (iVar3 = GetTotalAmount0(&DAT_10010cd8), iVar3 != 0))) {
            CreateObject0(&DAT_10010d60,&DAT_10010d68,&DAT_10010f98,1,&DAT_10011108,0x3c);
            RunTimer(2,100);
            SelectUnits(&DAT_10010d60,0);
            SelSendAndKill(1,&DAT_10010bb0,0x3c,0);
            SelSendAndKill(1,&DAT_100110f8,0,2);
            RemoveGroup(&DAT_10010d60,&DAT_10010d18);
            iVar3 = GetTotalAmount0(&DAT_10010d18);
          }
          iVar3 = GetTotalAmount0(&DAT_10010d18);
          if (iVar3 == 10) {
            RunTimer(1,DAT_1000d030);
          }
        }
        iVar3 = GetUnitsAmount2(&DAT_100110f8,&DAT_10010f98,1);
        if (iVar3 == 8) {
          RemoveGroup(&DAT_10010d18,&DAT_10010b90);
          SelectUnits(&DAT_10010b90,0);
          SelSendAndKill(1,&DAT_10010e38,0xe6,0);
          SelSendAndKill(1,&DAT_10010eb8,0xe6,2);
          SelSendAndKill(1,&DAT_10010ec0,0xe6,2);
        }
        cVar1 = TimerDone(4);
        if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10011068), iVar3 != 0)) {
          iVar3 = GetTotalAmount0(&DAT_10010d00);
          while (((iVar3 < 0x32 && (cVar1 = TimerDone(5), cVar1 != '\0')) &&
                 (iVar3 = GetTotalAmount0(&DAT_10010d30), iVar3 != 0))) {
            CreateObject0(&DAT_10010d70,&DAT_10010d68,&DAT_10010fb0,1,&DAT_10011118,0x3c);
            RunTimer(5,0x14);
            SelectUnits(&DAT_10010d70,0);
            SelSendAndKill(1,&DAT_10010bb0,0x3c,0);
            SelSendAndKill(1,&DAT_100110f8,0,2);
            RemoveGroup(&DAT_10010d70,&DAT_10010d00);
            iVar3 = GetTotalAmount0(&DAT_10010d00);
          }
          iVar3 = GetTotalAmount0(&DAT_10010d00);
          if (iVar3 == 0x32) {
            RunTimer(4,DAT_1000d030);
          }
        }
        iVar3 = GetUnitsAmount2(&DAT_100110f8,&DAT_10010fb0,1);
        if (iVar3 == 0x14) {
          RemoveGroup(&DAT_10010d00,&DAT_10010b88);
        }
        SelectUnits(&DAT_10010b88,0);
        iVar3 = GetTotalAmount0(&DAT_100111d0);
        if (iVar3 == 0) {
          SelAttackGroup(1,&DAT_10011068);
        }
        else {
          SelAttackGroup(1,&DAT_100111d0);
        }
      }
    }
    iVar3 = GetTotalAmount0(&DAT_10010e28);
    if ((iVar3 != 0) && (iVar3 = GetTotalAmount0(&DAT_10011128), iVar3 < 8)) {
      ShowPage("#PAGE8");
      LooseGame();
    }
    cVar1 = Trigg(0x1c);
    if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10010e28), iVar3 == 0)) {
      SetTrigg(0x1c,0);
      ShowPage("#PAGE56");
      AddResource(0,1,3000);
      SetLightSpot(&DAT_100110c0,1,6);
      SetTrigg(0x26,0);
      SetTrigg(0x27,0);
      SelectUnits(&DAT_10011198,0);
      SelDie(1);
      SelectUnits(&DAT_10010ef0,0);
      SelErase(1);
      CreateObject0(&DAT_10010ef0,&DAT_10010d68,&DAT_10011150,1,&DAT_10011158,0);
      SelectUnits(&DAT_10010bd0,0);
      SelSendAndKill(1,&DAT_10010bb0,0x41,0);
      SelSendAndKill(1,&DAT_100110f8,0x14,2);
      SelSendAndKill(1,&DAT_10011110,0x55,2);
      SelSendAndKill(1,&DAT_10010de8,0x55,2);
      DisableMission(0x4e);
      EnableMission(0x4f);
      DisableMission(0x50);
      EnableMission(0x51);
      DisableMission(0x56);
      EnableMission(0x4f);
      EnableMission(0x52);
      ClearLightSpot(0x17);
    }
  }
  cVar1 = Trigg(0x27);
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = Trigg(0x21);
  if (((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10011228,&DAT_100110b0), iVar3 != 0)) &&
     (cVar1 = Trigg(0x22), cVar1 != '\0')) {
    uVar7 = GetDiff(0);
    switch(uVar7) {
    case 0:
      pcStack_30 = "#PAGE86";
      break;
    case 1:
      pcStack_30 = "#PAGE87";
      break;
    case 2:
      pcStack_30 = "#PAGE88";
      break;
    case 3:
      pcStack_30 = "#PAGE89";
    }
    cVar1 = AskQuestion(pcStack_30);
    if (cVar1 == '\0') {
      SetTrigg(0x22,0);
    }
    else {
      iVar3 = GetDiff(0);
      iVar4 = GetResource(0,1);
      if (iVar4 < (iVar3 + 1) * 5000) {
        ShowPage("#PAGE85");
      }
      else {
        SetTrigg(0x21,0);
        SetLightSpot(&DAT_10011148,1,0x15);
        SelectUnits(&DAT_100111b8,0);
        SelChangeNation(2,0);
        iVar3 = GetDiff(0);
        iVar4 = GetResource(0,1);
        SetResource(0,1,iVar4 + (iVar3 + 1) * -5000);
      }
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_10011228,&DAT_100110b0);
  if (iVar3 == 0) {
    SetTrigg(0x22,0);
  }
  cVar1 = Trigg(0x28);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_100110c0,&DAT_100110b0), iVar3 != 0)) {
    SetTrigg(0x28,0);
    ShowPage("#PAGE15");
    SelectUnits(&DAT_10011060,0);
    SelectUnits(&DAT_10011078,1);
    SelectUnits(&DAT_100110c8,1);
    SelectUnits(&DAT_100110a8,1);
    SelectUnits(&DAT_10010d88,1);
    SelectUnits(&DAT_10010fd8,1);
    SelectUnits(&DAT_10010ce0,1);
    SelChangeNation(2,0);
    EnableUnit(0,&DAT_10010bb8,1);
    SetLightSpot(&DAT_10010be0,1,0xf);
    SetLightSpot(&DAT_10010c00,1,0x10);
    SetLightSpot(&DAT_10011038,1,0x11);
    SetLightSpot(&DAT_10010c58,1,0x12);
    SelectUnits(&DAT_10010bf8,0);
    AllowAttack(2,1);
    SelSendAndKill(2,&DAT_10011038,200,0);
    RunTimer(0x11,2000);
    DisableMission(0x52);
    EnableMission(0x53);
    EnableMission(0x54);
    EnableMission(0x57);
    SetTrigg(0x2b,0);
  }
  cVar1 = Trigg(0x2b);
  if (cVar1 != '\0') goto LAB_10004da0;
  cVar1 = Trigg(0x39);
  if ((cVar1 == '\0') || (iVar3 = GetTotalAmount0(&DAT_10010e80), iVar3 == 0)) {
    cVar1 = Trigg(0x39);
    if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10010ed0), iVar3 != 0)) {
      SelectUnits(&DAT_10010bf8,0);
      puVar11 = &DAT_10010ed0;
      goto LAB_100049cc;
    }
  }
  else {
    SelectUnits(&DAT_10010bf8,0);
    puVar11 = &DAT_10010e80;
LAB_100049cc:
    SelAttackGroup(2,puVar11);
  }
  cVar1 = Trigg(0x2d);
  if (cVar1 == '\0') {
    cVar1 = Trigg(0x2e);
    if ((cVar1 != '\0') && (cVar1 = TimerDoneFirst(0x11), cVar1 != '\0')) {
      SetTrigg(0x2e,0);
      ShowPage("#PAGE22");
      SelectUnits(&DAT_10010bf8,0);
      SelChangeNation(2,0);
      iVar3 = GetDiff(0);
      AddResource(0,5,(5 - iVar3) * 10000);
      iVar3 = GetDiff(0);
      AddResource(0,4,(5 - iVar3) * 10000);
      SetTrigg(0x39,0);
      CreateObject0(&DAT_10010ea0,&DAT_10010cb0,&DAT_10011248,1,&DAT_10010e48,200);
    }
    iVar3 = GetTotalAmount0(&DAT_10010bf8);
    if (iVar3 != 0) {
      SelectUnits(&DAT_10010ea0,1);
      SelAttackGroup(1,&DAT_10010bf8);
    }
  }
  cVar1 = Trigg(0x32);
  if (cVar1 != '\0') {
    SetTrigg(0x32,0);
    ClearSelection(1);
    RunTimer(3,300);
  }
  cVar1 = Trigg(0x29);
  if ((cVar1 != '\0') && (cVar1 = TimerDoneFirst(3), cVar1 != '\0')) {
    SetTrigg(0x29,0);
    SetResource(0,5,10000);
    DAT_100112a4 = 0;
    do {
      ProduceUnitFast(&DAT_10011268,&DAT_10010f98,&DAT_10010c98,3);
      ProduceUnitFast(&DAT_10011280,&DAT_10010f98,&DAT_10010c90,3);
      ProduceUnitFast(&DAT_10011270,&DAT_10010f98,&DAT_10010c88,3);
      ProduceUnitFast(&DAT_10011290,&DAT_10010f98,&DAT_10010c80,3);
      DAT_100112a4 = DAT_100112a4 + 1;
    } while (DAT_100112a4 < 10);
  }
  iVar3 = GetUnitsAmount1(&DAT_10010e58,&DAT_10010c98);
  if (0 < iVar3) {
    SelectUnits(&DAT_10010c98,0);
    SelSendAndKill(1,&DAT_10010e88,0x46,0);
    SelSendAndKill(1,&DAT_10010d58,0x41,2);
    RemoveGroup(&DAT_10010c98,&DAT_10010de0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10010e50,&DAT_10010c90);
  if (0 < iVar3) {
    SelectUnits(&DAT_10010c90,0);
    SelSendAndKill(1,&DAT_10010e88,0x46,0);
    SelSendAndKill(1,&DAT_10010d58,0x41,2);
    RemoveGroup(&DAT_10010c90,&DAT_10010de0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10010e70,&DAT_10010c88);
  if (0 < iVar3) {
    SelectUnits(&DAT_10010c88,0);
    SelSendAndKill(1,&DAT_10010e98,0x46,0);
    SelSendAndKill(1,&DAT_10011298,0x41,2);
    RemoveGroup(&DAT_10010c88,&DAT_10010dc0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10010e68,&DAT_10010c80);
  if (0 < iVar3) {
    SelectUnits(&DAT_10010c80,0);
    SelSendAndKill(1,&DAT_10010e98,0x46,0);
    SelSendAndKill(1,&DAT_10011298,0x41,2);
    RemoveGroup(&DAT_10010c80,&DAT_10010dc0);
  }
  if (DAT_100112a4 == 10) {
    DAT_100112a4 = 0;
    SetTrigg(0x29,0);
    iVar3 = GetDiff(0);
    RunTimer(3,(6 - iVar3) * 2000);
    SelectUnits(&DAT_10010de0,0);
    SelSendAndKill(1,&DAT_10010e90,0x46,0);
    SelSendAndKill(1,&DAT_100110f8,0x46,2);
    SelSendAndKill(1,&DAT_10011110,0x78,2);
    SelSendAndKill(1,&DAT_10010de8,0x46,2);
    RemoveGroup(&DAT_10010c98,&DAT_10011080);
    SelectUnits(&DAT_10010dc0,0);
    SelSendAndKill(1,&DAT_10010e90,0x46,0);
    SelSendAndKill(1,&DAT_100110c0,0,2);
    RemoveGroup(&DAT_10010c98,&DAT_10011080);
  }
LAB_10004da0:
  cVar1 = Trigg(0x2f);
  if ((cVar1 != '\0') &&
     (iVar3 = GetTotalAmount0(&DAT_10010b50), pcVar9 = (void*)&ShowPage, iVar3 == 0)) {
    SetTrigg(0x2f,0);
    SelectUnits(&DAT_10011070,0);
    AllowAttack(1,0);
    ShowPage("#PAGE37");
  }
  iVar3 = GetTotalAmount0(&DAT_10010b70);
  if ((iVar3 == 0) && (iVar3 = GetTotalAmount0(&DAT_10010b48), iVar3 < 8)) {
    ShowPage("#PAGE14");
    ShowVictory();
  }
  iVar3 = GetTotalAmount0(&DAT_10010fc8);
  if ((iVar3 == 0) || (iVar3 = GetTotalAmount0(&DAT_10010db0), iVar3 == 0)) {
    ShowPage("#PAGE13");
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

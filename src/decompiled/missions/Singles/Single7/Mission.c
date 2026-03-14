// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

undefined4 FUN_10001000(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: OnInit @ 0x10001020

void OnInit(void)

{
                    /* 0x1020  1  OnInit */
  RegisterUnits(&DAT_100110b0,s_GKomandir1_1000da44);
  RegisterUnits(&DAT_10010f20,s_GRazbLag1_1000da38);
  RegisterUnits(&DAT_10010f30,s_GRazbLag2_1000da2c);
  RegisterUnits(&DAT_10010f38,s_GRazbLag3_1000da20);
  RegisterUnits(&DAT_10010f48,s_GRazbLag4_1000da14);
  RegisterUnits(&DAT_10011220,s_GRazbGard1_1000da08);
  RegisterUnits(&DAT_10010f00,s_GHelp1_1000da00);
  RegisterUnits(&DAT_10010db0,s_GPop1_1000d9f8);
  RegisterUnits(&DAT_10010c10,s_GRazbCom1_1000d9ec);
  RegisterUnits(&DAT_10010e20,s_GRazbGlav1_1000d9e0);
  RegisterUnits(&DAT_10010e18,s_GRazbGlav_1000d9d4);
  RegisterUnits(&DAT_10010bc0,s_GRazbTransp1_1000d9c4);
  RegisterUnits(&DAT_10011120,s_GFortGarnizon1_1000d9b4);
  RegisterUnits(&DAT_10010ff0,s_GWorotaTown1_1000d9a4);
  RegisterUnits(&DAT_100111c8,s_GWorotaFort1_1000d994);
  RegisterUnits(&DAT_100111d0,s_GWorotaFort2_1000d984);
  RegisterUnits(&DAT_10011068,s_GFort_BH_1000d978);
  RegisterUnits(&DAT_10010c08,s_GFortBarack1_1000d968);
  RegisterUnits(&DAT_10010c40,s_GPodmoga2_1000d95c);
  RegisterUnits(&DAT_10010e28,s_GRazbGlav2_1000d950);
  RegisterUnits(&DAT_100111b8,s_GPackhorse1_1000d944);
  RegisterUnits(&DAT_10010d48,s_GTrader1_1000d938);
  RegisterUnits(&DAT_100110d0,s_GUkr_D1_1000d930);
  RegisterUnits(&DAT_10011128,s_GFortGarnizon2_1000d920);
  RegisterUnits(&DAT_10010bf8,s_GTown_Ship_1000d914);
  RegisterUnits(&DAT_10011100,s_GRazb_Shipyard_1000d904);
  RegisterUnits(&DAT_10010bc8,s_GRazb_Fort_1000d8f8);
  RegisterUnits(&DAT_10011010,s_GRazb_Fort_Tur_1000d8e8);
  RegisterUnits(&DAT_10010c38,s_GLord_B_1000d8e0);
  RegisterUnits(&DAT_10010c48,s_GLord_G_1000d8d8);
  RegisterUnits(&DAT_10010b58,s_GRazb_Tent1_1000d8cc);
  RegisterUnits(&DAT_10010dc8,&DAT_1000d8c4);
  RegisterUnits(&DAT_10010dd8,&DAT_1000d8bc);
  RegisterUnits(&DAT_10010bd8,s_GZabor_S_1000d8b0);
  RegisterUnits(&DAT_10010be8,s_GZabor_T_1000d8a4);
  RegisterUnits(&DAT_10010f58,s_GRazb_B_1000d89c);
  RegisterUnits(&DAT_10010f78,s_GRazb_G_1000d894);
  RegisterUnits(&DAT_10011240,s_GRzb_Worota_1000d888);
  RegisterUnits(&DAT_10010fd0,s_GP_A_W_1000d880);
  RegisterUnits(&DAT_10010fb8,s_GP_A_S_1000d878);
  RegisterUnits(&DAT_10010f80,s_GP_A_F_1000d870);
  RegisterUnits(&DAT_10011060,s_GGiv_B_1000d868);
  RegisterUnits(&DAT_10011078,s_GGiv_G_1000d860);
  RegisterUnits(&DAT_100110c8,s_GGiv_p_1000d858);
  RegisterUnits(&DAT_100110a8,s_GGiv_f_1000d850);
  RegisterUnits(&DAT_10010b70,s_GRazb_Fort_G_1000d840);
  RegisterUnits(&DAT_10010b50,s_GShipyard_AL_1000d830);
  RegisterUnits(&DAT_10010b48,s_GRazb_Fort3_1000d824);
  RegisterUnits(&DAT_10010fc8,s_GGeneral1_1000d818);
  RegisterUnits(&DAT_10011268,s_GKon_1_1000d810);
  RegisterUnits(&DAT_10011280,s_GKon_2_1000d808);
  RegisterUnits(&DAT_10011270,s_GKon_3_1000d800);
  RegisterUnits(&DAT_10011290,s_GKon_4_1000d7f8);
  RegisterUnits(&DAT_10011070,s_GRazb_Tur_1000d7ec);
  RegisterUnits(&DAT_10010d88,s_GGiv_Ac_1000d7e4);
  RegisterUnits(&DAT_10010e80,s_GRazb_Ship_1000d7d8);
  RegisterUnits(&DAT_10010ed0,s_GRazb_Bitch_P_1000d7c8);
  RegisterUnits(&DAT_10010df8,s_GRazb_Bitch_P_G_1000d7b8);
  RegisterUnits(&DAT_100111a0,s_GTent1_1000d7b0);
  RegisterUnits(&DAT_10011198,s_GTent2_1000d7a8);
  RegisterUnits(&DAT_100110f0,s_GSelo_P_W_1000d79c);
  RegisterUnits(&DAT_10011130,s_GSelo_P_F_1000d790);
  RegisterUnits(&DAT_10010bd0,s_GRazbFort1_1000d784);
  RegisterUnits(&DAT_10011230,s_GFortKom1_1000d778);
  RegisterUnits(&DAT_10010cb8,s_GHomeTrader_1000d76c);
  RegisterUnits(&DAT_10011260,s_GHomeTrader2_1000d75c);
  RegisterUnits(&DAT_10010f90,s_GGHomeTur1_1000d750);
  RegisterUnits(&DAT_10010fe0,s_GGHomeTur2_1000d744);
  RegisterUnits(&DAT_10010fe8,s_GGHomeTur3_1000d738);
  RegisterUnits(&DAT_10010cf0,s_GHome_W1_1000d72c);
  RegisterUnits(&DAT_10010ce8,s_GHome_W2_1000d720);
  RegisterUnits(&DAT_10010d98,s_GPGards1_1000d714);
  RegisterUnits(&DAT_10010dd0,s_GTentLand_1000d708);
  RegisterUnits(&DAT_10010d30,s_GTent_L_1000d700);
  RegisterUnits(&DAT_10010cd8,s_GTent_H_1000d6f8);
  RegisterUnits(&DAT_10010fd8,s_GTownComAndBar_1000d6e8);
  RegisterUnits(&DAT_100110a0,s_GTownWorotaAdd_1000d6d8);
  RegisterUnits(&DAT_10010ee8,&DAT_1000d6d0);
  RegisterUnits(&DAT_10010d80,s_GTownAD_1000d6c8);
  RegisterZone(&DAT_10011178,s_ZRazbLag1_1000d6bc);
  RegisterZone(&DAT_10011170,s_ZRazbLag2_1000d6b0);
  RegisterZone(&DAT_10011188,s_ZRazbLag3_1000d6a4);
  RegisterZone(&DAT_10011180,s_ZRazbLag4_1000d698);
  RegisterZone(&DAT_10010d28,s_ZRazbLagN1_1000d68c);
  RegisterZone(&DAT_10010d20,s_ZRazbLagN2_1000d680);
  RegisterZone(&DAT_10010d10,s_ZRazbLagN3_1000d674);
  RegisterZone(&DAT_10010cf8,s_ZRazbLagN4_1000d668);
  RegisterZone(&DAT_10010f50,s_ZGard1_1000d660);
  RegisterZone(&DAT_10010d08,s_ZGardL1_1000d658);
  RegisterZone(&DAT_10011048,s_ZSpy1_1000d650);
  RegisterZone(&DAT_10010b80,s_ZHelp1_1000d648);
  RegisterZone(&DAT_10010de8,s_ZPop1_1000d640);
  RegisterZone(&DAT_10010c30,s_ZRazbVisible1_1000d630);
  RegisterZone(&DAT_10010c20,s_ZRazbVisible2_1000d620);
  RegisterZone(&DAT_100111d8,s_ZRazbGenAtack1_1000d610);
  RegisterZone(&DAT_100111e0,s_ZRazbGenAtack2_1000d600);
  RegisterZone(&DAT_100111e8,s_ZRazbGenAtack3_1000d5f0);
  RegisterZone(&DAT_10010eb0,s_ZSecondA1_1000d5e4);
  RegisterZone(&DAT_10010e38,s_ZRazbAddW1_1000d5d8);
  RegisterZone(&DAT_10010e30,s_ZRazbAddW2_1000d5cc);
  RegisterZone(&DAT_10010eb8,s_ZRazbAddW4_1000d5c0);
  RegisterZone(&DAT_10011278,s_ZComForta1_1000d5b4);
  RegisterZone(&DAT_10010e00,s_ZSee1_1000d5ac);
  RegisterZone(&DAT_10010e08,s_ZSee2_1000d5a4);
  RegisterZone(&DAT_10011020,s_ZRazbGlav2_1000d598);
  RegisterZone(&DAT_10010e78,s_ZPodmoga2_1000d58c);
  RegisterZone(&DAT_100111f0,s_ZPred1_1000d584);
  RegisterZone(&DAT_10011228,s_ZTrader_1_1000d578);
  RegisterZone(&DAT_10011288,s_ZUkr_N1_1000d570);
  RegisterZone(&DAT_10011148,s_ZOboz1_1000d568);
  RegisterZone(&DAT_100110c0,s_ZGeneral_1_1000d55c);
  RegisterZone(&DAT_10010e58,s_ZKon_1_1000d554);
  RegisterZone(&DAT_10010e50,s_ZKon_2_1000d54c);
  RegisterZone(&DAT_10010e70,s_ZKon_3_1000d544);
  RegisterZone(&DAT_10010e68,s_ZKon_4_1000d53c);
  RegisterZone(&DAT_10010e88,s_ZZbor_12_1000d530);
  RegisterZone(&DAT_10010e98,s_ZZbor_34_1000d524);
  RegisterZone(&DAT_10010d58,s_ZZbor_12_Final_1000d514);
  RegisterZone(&DAT_10011298,s_ZZbor_34_Final_1000d504);
  RegisterZone(&DAT_10010e90,s_ZRazvilka_1000d4f8);
  RegisterZone(&DAT_100110f8,s_ZSelo_W1_1000d4ec);
  RegisterZone(&DAT_10011110,s_ZSelo_W2_1000d4e0);
  RegisterZone(&DAT_10010be0,s_ZS_Op1_1000d4d8);
  RegisterZone(&DAT_10010c00,s_ZS_Op2_1000d4d0);
  RegisterZone(&DAT_10011038,&DAT_1000d4c8);
  RegisterZone(&DAT_10010c58,s_ZS_A1_1000d4c0);
  RegisterZone(&DAT_10010e48,s_ZRazb_Help1_1000d4b4);
  RegisterZone(&DAT_10011158,s_ZRazb_S1_1000d4a8);
  RegisterZone(&DAT_10011258,s_ZFort_H1_1000d49c);
  RegisterZone(&DAT_10010da8,s_ZGusar_1_1000d490);
  RegisterZone(&DAT_10011108,s_ZRazb_F1_1000d484);
  RegisterZone(&DAT_10011118,s_ZRazb_F2_1000d478);
  RegisterZone(&DAT_10010ec0,s_ZRazbAddW3_1000d46c);
  RegisterZone(&DAT_10011138,s_ZHomeTrade_1000d460);
  RegisterZone(&DAT_10011028,s_ZTownTrade1_1000d454);
  RegisterZone(&DAT_10010ff8,s_ZTownTrade2_1000d448);
  RegisterZone(&DAT_10011000,s_ZTownTrade3_1000d43c);
  RegisterZone(&DAT_10011058,s_ZHomeA1_1000d434);
  RegisterZone(&DAT_10011050,s_ZHomeA2_1000d42c);
  RegisterZone(&DAT_100111b0,s_ZHomeCanon1_1000d420);
  RegisterZone(&DAT_100111a8,s_ZHomeCanon2_1000d414);
  RegisterZone(&DAT_100111c0,s_ZHomeCanon3_1000d408);
  RegisterUnits(&DAT_10010f90,s_GHomeTur1_1000d3fc);
  RegisterUnits(&DAT_10010fe0,s_GHomeTur2_1000d3f0);
  RegisterUnitType(&DAT_10010fc0,s_Center_Spain_sp__1000d3dc);
  RegisterUnitType(&DAT_10010c28,s_shahta_sp__1000d3d0);
  RegisterUnitType(&DAT_10011168,s_Rinok_sp__1000d3c4);
  RegisterUnitType(&DAT_10011210,s_Dom_Algir_AL__1000d3b4);
  RegisterUnitType(&DAT_10010c78,s_Melnica_tu_AL__1000d3a4);
  RegisterUnitType(&DAT_10010db8,s_Sclad4_AL__1000d398);
  RegisterUnitType(&DAT_10010d90,s_shahta_AL__1000d38c);
  RegisterUnitType(&DAT_10010c18,s_Mechet_Turki_AL__1000d378);
  RegisterUnitType(&DAT_10011218,s_Port_AL__1000d36c);
  RegisterUnitType(&DAT_10010ba8,s_Rinok_Turki_AL__1000d35c);
  RegisterUnitType(&DAT_10010da0,s_Barack_Turki_AL__1000d348);
  RegisterUnitType(&DAT_10011190,s_Kuznia_Turki_AL__1000d334);
  RegisterUnitType(&DAT_10010b78,s_Konushnia_Turki_AL__1000d320);
  RegisterUnitType(&DAT_10010e60,s_Art_Depo_Turki_AL__1000d30c);
  RegisterUnitType(&DAT_10010b98,s_Minaret_AL__1000d300);
  RegisterUnitType(&DAT_10010ee0,s_Center_Algir_AL__1000d2ec);
  RegisterUnitType(&DAT_10010ea8,s_Diplomatic_Turki_AL__1000d2d4);
  RegisterUnitType(&DAT_10011250,s_Dom_Swisair_SV__1000d2c4);
  RegisterUnitType(&DAT_10010d50,s_Melnica_SV__1000d2b8);
  RegisterUnitType(&DAT_10010e40,s_Sclad1_SV__1000d2ac);
  RegisterUnitType(&DAT_10011018,s_shahta_SV__1000d2a0);
  RegisterUnitType(&DAT_10010ca0,s_Kostel_SV__1000d294);
  RegisterUnitType(&DAT_10010b60,s_PorE_SV__1000d288);
  RegisterUnitType(&DAT_10010b68,s_Rinok_SV__1000d27c);
  RegisterUnitType(&DAT_10010e10,s_Kazarma_SV__1000d270);
  RegisterUnitType(&DAT_10011200,s_Kuznica_SV__1000d264);
  RegisterUnitType(&DAT_10010bb8,s_Konushnia_Swesair_SV__1000d24c);
  RegisterUnitType(&DAT_10010ed8,s_artileri_depo_SV__1000d238);
  RegisterUnitType(&DAT_10010bf0,s_akademia_E_SV__1000d228);
  RegisterUnitType(&DAT_10010fa0,s_Center_Swesair_SV__1000d214);
  RegisterUnitType(&DAT_10011008,s_Kazarma_evro_SV__1000d200);
  RegisterUnitType(&DAT_10010ba0,s_PERES_KOR_AL__1000d1f0);
  RegisterUnitType(&DAT_10011030,s_Krestian_Turki_AL__1000d1dc);
  RegisterUnitType(&DAT_10011248,s_Linkor_AL__1000d1d0);
  RegisterUnitType(&DAT_10010c60,s_WALL_EV_SV__1000d1c4);
  RegisterUnitType(&DAT_10010c50,s_WALL_UKR_SV__1000d1b4);
  RegisterUnitType(&DAT_10010c68,s_Bashnia_SV__1000d1a8);
  RegisterUnitType(&DAT_10011040,s_Pushka_SV__1000d19c);
  RegisterUnitType(&DAT_10010d40,s_Reitar_Shwec_SV__1000d188);
  RegisterUnitType(&DAT_10010ec8,s_Lodka_SV__1000d17c);
  RegisterUnitType(&DAT_10010fb0,s_Strelec_Algir_AL__1000d168);
  RegisterFormation(&DAT_10010b40,s__LINE72_1000d160);
  RegisterUnitType(&DAT_10010fa8,s_Pehota_turki_AL__1000d14c);
  RegisterUnitType(&DAT_10010f98,s_Mameluk_AL__1000d140);
  RegisterFormation(&DAT_10011238,s__LINE15_1000d138);
  RegisterFormation(&DAT_10010f60,s__LINE40PUS_1000d12c);
  RegisterFormation(&DAT_10010f88,s__LINE30PUS_1000d120);
  RegisterFormation(&DAT_10010f70,s__LINE20PUS_1000d114);
  RegisterFormation(&DAT_10010f68,s__LINE15PUS_1000d108);
  RegisterFormation(&DAT_10010cb0,s__SHIPS8_1000d100);
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
  RegisterZone(&DAT_10010bb0,s_ZRazbAdd2_1000d0f4);
  RegisterZone(&DAT_100111f8,s_ZRazbYahta_1000d0e8);
  RegisterZone(&DAT_10011098,s_ZRazb_L1_1000d0dc);
  RegisterZone(&DAT_100110b8,s_ZRazb_P1_1000d0d0);
  RegisterZone(&DAT_10010f28,s_ZRazb_T_1000d0c8);
  RegisterZone(&DAT_10011090,s_ZHomeD1_1000d0c0);
  RegisterZone(&DAT_10011088,s_ZHomeD2_1000d0b8);
  RegisterZone(&DAT_100110d8,s_ZRazb_D1_1000d0ac);
  RegisterZone(&DAT_100110e0,s_ZRazb_D2_1000d0a0);
  RegisterZone(&DAT_100110e8,s_ZRazb_D3_1000d094);
  RegisterZone(&DAT_10010df0,s_ZTemp_D_1000d08c);
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
  RegisterUnitType(&DAT_10011208,s_YahtaTU_TU__1000d080);
  RegisterDynGroup(&DAT_10010d60);
  RegisterVar(&DAT_10010d60,8);
  RegisterDynGroup(&DAT_10010d70);
  RegisterVar(&DAT_10010d70,8);
  RegisterDynGroup(&DAT_10010ef0);
  RegisterVar(&DAT_10010ef0,8);
  RegisterFormation(&DAT_10010d68,s__ALONE_1000d078);
  RegisterUnitType(&DAT_10011150,s_SUNDUK1O_UN__1000d068);
  RegisterUnitType(&DAT_10011140,s_SUNDUK1Z_UN__1000d058);
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
  SetPlayerName(1,s_ROBBERS_1000d050);
  SetPlayerName(2,s_ALLIES_1000d048);
  SetPlayerName(3,s_DWELLERS_1000d03c);
  ChangeFriends(0,0xd);
  return;
}



// Function: ProcessScenary @ 0x10001d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProcessScenary(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  code *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  char *pcStack_30;
  undefined1 auStack_2c [44];
  
                    /* 0x1d00  2  ProcessScenary */
  cVar1 = Trigg(1);
  pcVar9 = InitialUpgrade_exref;
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ChangeFriends(0,0xd);
    iVar3 = GetDiff(0);
    _DAT_100112b8 = ((double)iVar3 * _DAT_1000b1c0 + _DAT_1000b1b8) * _DAT_1000b1b0;
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
    InitialUpgrade(s_GRazb_Tur_1000d7ec,s_Bashnia_3_AL_PAUSE_1000de0c);
    InitialUpgrade(s_GRazb_Tur_1000d7ec,s_Bashnia_3_AL_PAUSE3_1000ddf8);
    InitialUpgrade(s_GRazb_Tur_1000d7ec,s_Bashnia_3_AL_PAUSE4_1000dde4);
    InitialUpgrade(s_GRazb_Tur_1000d7ec,s_Bashnia_3_AL_PAUSE5_1000ddd0);
    InitialUpgrade(s_GRazb_Tur_1000d7ec,s_Bashnia_3_AL_PAUSE6_1000ddbc);
    InitialUpgrade(s_GRazb_Tur_1000d7ec,s_Bashnia_3_AL_PAUSE7_1000dda8);
    InitialUpgrade(s_GGiv_Ac_1000d7e4,s_AKA04SV_1000dda0);
    InitialUpgrade(s_GKuz1_1000dd90,s_KUZ01SV_1000dd98);
    InitialUpgrade(s_GRazbA_1000dd80,s_AKA04AL_1000dd88);
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
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_ATTACK_1000dd68);
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_SHIELD_1000dd48);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK_1000dd34);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD_1000dd18);
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
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_ATTACK_1000dd68);
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_SHIELD_1000dd48);
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_ATTACK3_1000dd00);
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_SHIELD3_1000dce8);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK_1000dd34);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD_1000dd18);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK3_1000dcd4);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD3_1000dcc0);
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
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_ATTACK_1000dd68);
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_SHIELD_1000dd48);
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_ATTACK3_1000dd00);
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_SHIELD3_1000dce8);
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_ATTACK4_1000dca8);
      InitialUpgrade(s_GRazb_S_1000dd60,s_Pehota_turki_AL_SHIELD4_1000dc90);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK_1000dd34);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD_1000dd18);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK3_1000dcd4);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD3_1000dcc0);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK4_1000dc7c);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD4_1000dc68);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK5_1000dc54);
      InitialUpgrade(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD5_1000dc40);
      CreateObject0(&DAT_10010b38,&DAT_10010f68,&DAT_10010d40,2,&DAT_10010da8,0x41);
      DAT_1000d030 = 2000;
      DAT_100112c4 = 1;
    }
    ShowPage(s__PAGE1_1000dc38);
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
      ShowPage(s__PAGE76_1000dc30);
      SetLightSpot(&DAT_10010ff8,1,0xc);
    }
    cVar1 = Trigg(0x3e);
    if ((cVar1 != '\0') &&
       (((iVar3 = GetUnitsAmount1(&DAT_10011028,&DAT_10010cb8), iVar3 != 0 ||
         (iVar3 = GetUnitsAmount1(&DAT_10010ff8,&DAT_10010cb8), iVar3 != 0)) ||
        (iVar3 = GetUnitsAmount1(&DAT_10011000,&DAT_10010cb8), iVar3 != 0)))) {
      SetTrigg(0x3b,1);
      SetTrigg(0x3e,0);
      RunTimer(0xd,500);
      ShowPage(s__PAGE77_1000dc28);
    }
    cVar1 = TimerDone(0xd);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0x3b), cVar1 != '\0')) {
      SetTrigg(0x3b,0);
      SetTrigg(0x3d,1);
      ShowPage(s__PAGE78_1000dc20);
    }
    cVar1 = Trigg(0x3d);
    if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10011138,&DAT_10010cb8), iVar3 != 0)) {
      SetTrigg(0x3d,0);
      SetTrigg(0x3c,1);
      RunTimer(0xe,500);
      ShowPage(s__PAGE79_1000dc18);
    }
    cVar1 = Trigg(0x3c);
    if ((cVar1 != '\0') && (cVar1 = TimerDone(0xe), cVar1 != '\0')) {
      SetTrigg(0x3c,0);
      SetTrigg(0x3e,1);
      ShowPage(s__PAGE80_1000dc10);
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
      SetTrigg(0x3e,1);
      ShowPage(s__PAGE81_1000dc08);
    }
    cVar1 = Trigg(0x3c);
    if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10011138,&DAT_10010cb8), iVar3 == 0)) {
      SetTrigg(0x3c,0);
      SetTrigg(0x3d,1);
      ShowPage(s__PAGE82_1000dc00);
    }
    cVar1 = Trigg(0x44);
    if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10010cb8), iVar3 == 0)) &&
       (iVar3 = GetTotalAmount0(&DAT_10011260), iVar3 != 0)) {
      SetTrigg(0x44,0);
      ShowPage(s__PAGE83_1000dbf8);
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
      pcVar9 = InitialUpgrade_exref;
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
            pcVar9 = InitialUpgrade_exref;
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
        pcVar9 = InitialUpgrade_exref;
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
      SetTrigg(0x42,1);
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
        pcVar9 = InitialUpgrade_exref;
        if (iVar3 + iVar4 == iVar5) {
          SetTrigg(0x41,1);
          pcVar9 = InitialUpgrade_exref;
        }
      }
    }
    cVar1 = Trigg(0x41);
    if (cVar1 != '\0') {
      SetTrigg(0x41,0);
      SelectUnits(&DAT_10010d78,0);
      uVar6 = _rand();
      DAT_1000d038 = uVar6 & 0x80000001;
      if ((int)DAT_1000d038 < 0) {
        DAT_1000d038 = (DAT_1000d038 - 1 | 0xfffffffe) + 1;
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
        SetTrigg(0x40,1);
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
  if (_DAT_100112b8 < (double)(int)pcStack_30) {
    pcStack_30 = (char *)GetDiff(0);
    _DAT_100112b8 = ((double)(int)pcStack_30 * _DAT_1000b1c0 + _DAT_1000b1b8) * _DAT_100112b8;
    ShowPage(s__PAGE75_1000dbf0);
    (*pcVar9)(s_GKomandir1_1000da44,s_Kirasir_sp_SHIELD_1000dbdc);
    (*pcVar9)(s_GKomandir1_1000da44,s_Kirasir_sp_ATTACK3_1000dbc8);
    (*pcVar9)(s_GKomandir1_1000da44,s_Kirasir_sp_ATTACK3_1000dbc8);
    (*pcVar9)(s_GKomandir1_1000da44,s_Kirasir_sp_ATTACK3_1000dbc8);
  }
  cVar1 = Trigg(2);
  if (((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10011048,&DAT_100110b0), iVar3 != 0)) &&
     (iVar3 = GetTotalAmount0(&DAT_10010ee8), iVar3 != 0)) {
    SetTrigg(2,0);
    SetTrigg(0x39,0);
    ClearLightSpot(1);
    ShowPage(s__PAGE2_1000dbc0);
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
    ShowPage(s__PAGE60_1000dbb8);
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
    ShowPage(s__PAGE25_1000dbb0);
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
    uVar7 = FUN_10004e90(&DAT_10011178,&DAT_10010d28,&DAT_10010f20,s__PAGE11_1000dba8,0,2000,0,200,0
                         ,0);
    SetTrigg(8,uVar7);
  }
  cVar1 = Trigg(9);
  if (cVar1 != '\0') {
    uVar7 = FUN_10004e90(&DAT_10011170,&DAT_10010d20,&DAT_10010f30,s__PAGE12_1000dba0,0,1000,0,100,
                         200,0);
    SetTrigg(9,uVar7);
  }
  cVar1 = Trigg(10);
  if (cVar1 != '\0') {
    uVar7 = FUN_10004e90(&DAT_10011188,&DAT_10010d10,&DAT_10010f38,s__PAGE12_1000dba0,0,1000,0,100,0
                         ,200);
    SetTrigg(10,uVar7);
  }
  cVar1 = Trigg(0xb);
  if (cVar1 != '\0') {
    uVar7 = FUN_10004e90(&DAT_10011180,&DAT_10010cf8,&DAT_10010f48,s__PAGE12_1000dba0,0,500,0,200,
                         100,100);
    SetTrigg(0xb,uVar7);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10010f50,0), iVar3 != 0)) {
    SetTrigg(0xc,0);
    ShowPage(s__PAGE31_1000db98);
    FUN_10004f90(&DAT_10011220,&DAT_10010f50);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10011220), iVar3 == 0)) {
    SetTrigg(0xd,0);
    ShowPage(s__PAGE32_1000db90);
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
      pcVar8 = s__PAGE70_1000db88;
      break;
    case 1:
      pcVar8 = s__PAGE71_1000db80;
      break;
    case 2:
      pcVar8 = s__PAGE72_1000db78;
      break;
    case 3:
      pcVar8 = s__PAGE73_1000db70;
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
    pcVar9 = InitialUpgrade_exref;
    if ((iVar4 == iVar3) &&
       (iVar3 = GetTotalAmount0(&DAT_10010f00), pcVar9 = InitialUpgrade_exref, iVar3 != 0)) {
      SetTrigg(0xe,0);
      ShowPage(s__PAGE33_1000db68);
      SelectUnits(&DAT_10010f00,0);
      SelChangeNation(2,0);
      ClearLightSpot(4);
      EnableMission(0x45);
      pcVar9 = InitialUpgrade_exref;
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
    ShowPage(s__PAGE34_1000db60);
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
    SetTrigg(0x10,1);
    ShowPage(s__PAGE35_1000db58);
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
    ShowPage(s__PAGE36_1000db50);
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
    ShowPage(s__PAGE30_1000db48);
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
    cVar1 = AskQuestion(s__PAGE50_1000db40);
    if (cVar1 == '\0') {
      ShowPage(s__PAGE53_1000db30);
      SelectUnits(&DAT_10010e20,0);
      SetStandGround(1,0);
    }
    else {
      SetTrigg(0x14,0);
      SetTrigg(0x37,0);
      AddResource(0,1,2000);
      ChangeFriends(0,0xff);
      ShowPage(s__PAGE52_1000db38);
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
    ShowPage(s__PAGE51_1000db28);
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
    SetTrigg(0x15,1);
    SelectUnits(&DAT_10010bc0,0);
    SelectUnits(&DAT_10010e20,1);
    SelectUnits(&DAT_10010c10,1);
    SendUnitsToTransport(1);
    SetTrigg(0x16,0);
    SetTrigg(0x15,1);
  }
  cVar1 = Trigg(0x16);
  if (cVar1 == '\0') {
    SelectUnits(&DAT_10010bc0,0);
    cVar1 = Trigg(0x43);
    if (cVar1 != '\0') {
      pcStack_30 = (char *)GetTotalAmount0(&DAT_10010c10);
      iVar3 = GetTotalAmount0(&DAT_10010e20);
      pcVar8 = (char *)GetNInside(1);
      pcVar9 = InitialUpgrade_exref;
      if ((pcStack_30 + iVar3 == pcVar8) &&
         (iVar3 = GetNInside(1), pcVar9 = InitialUpgrade_exref, iVar3 != 0)) {
        SetTrigg(0x43,0);
        SelSendTo(1,&DAT_10010e00,200,0);
        SelectUnits(&DAT_100111a0,0);
        SelDie(1);
        ClearLightSpot(5);
        ChangeFriends(0,0xd);
        SetTrigg(0x16,1);
        ShowPage(s__PAGE51_1000db28);
        SetLightSpot(&DAT_10011278,1,7);
        SetTrigg(0x20,0);
        DisableMission(0x4c);
        EnableMission(0x4d);
        EnableMission(0x4e);
        DisableMission(0x47);
        EnableMission(0x48);
        pcVar9 = InitialUpgrade_exref;
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
    ShowPage(s__PAGE4_1000db20);
  }
  cVar1 = Trigg(0x23);
  if (cVar1 != '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10011148,&DAT_100111b8);
    iVar4 = GetTotalAmount0(&DAT_100111b8);
    pcVar9 = InitialUpgrade_exref;
    if ((iVar4 == iVar3) &&
       (iVar3 = GetTotalAmount0(&DAT_100111b8), pcVar9 = InitialUpgrade_exref, iVar3 != 0)) {
      SetTrigg(0x23,0);
      ShowPage(s__PAGE5_1000db18);
      ClearLightSpot(0x15);
      SelectUnits(&DAT_100110d0,0);
      SelChangeNation(3,0);
      SelectUnits(&DAT_100111b8,0);
      SelChangeNation(0,3);
      pcVar9 = InitialUpgrade_exref;
    }
  }
  iVar3 = GetTotalAmount0(&DAT_100110b0);
  if (iVar3 == 0) {
    ShowPage(s__PAGE9_1000db10);
    LooseGame();
  }
  cVar1 = Trigg(0x20);
  pcVar10 = SelSendAndKill_exref;
  if ((cVar1 == '\0') && (cVar1 = Trigg(0x26), pcVar10 = SelSendAndKill_exref, cVar1 != '\0')) {
    cVar1 = Trigg(0x17);
    if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10011278,&DAT_100110b0), iVar3 != 0)) {
      SetTrigg(0x17,0);
      SetTrigg(0x2a,0);
      ShowPage(s__PAGE54_1000db08);
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
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK_1000dd34);
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD_1000dd18);
        break;
      case 1:
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK3_1000dcd4);
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD3_1000dcc0);
        break;
      case 2:
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK4_1000dc7c);
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD4_1000dc68);
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK5_1000dc54);
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD5_1000dc40);
        break;
      case 3:
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK5_1000dc54);
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD5_1000dc40);
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK6_1000daf4);
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD6_1000dae0);
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_ATTACK7_1000dacc);
        (*pcVar9)(s_GRazb_K_1000dd2c,s_Mameluk_AL_SHIELD7_1000dab8);
      }
      DisableMission(0x4e);
      EnableMission(0x4f);
      EnableMission(0x50);
      EnableMission(0x56);
    }
    cVar1 = Trigg(0x2a);
    pcVar10 = SelSendAndKill_exref;
    if (cVar1 == '\0') {
      cVar1 = Trigg(0x18);
      if (cVar1 != '\0') {
        iVar3 = GetUnitsAmount1(&DAT_10010e78,&DAT_10010c40);
        iVar4 = GetTotalAmount0(&DAT_10010c40);
        if (iVar4 == iVar3) {
          SetTrigg(0x18,0);
          SelectUnits(&DAT_10010c40,0);
          ShowPage(s__PAGE55_1000dab0);
          SelChangeNation(2,0);
        }
      }
      pcVar10 = SelSendAndKill_exref;
      cVar1 = Trigg(0x19);
      if ((cVar1 != '\0') && (cVar1 = Trigg(0x17), cVar1 == '\0')) {
        RunTimer(0xf,DAT_1000d030);
        SetTrigg(0x19,0);
      }
      cVar1 = TimerDoneFirst(0xf);
      if (cVar1 != '\0') {
        SetTrigg(0x19,1);
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
      ShowPage(s__PAGE8_1000daa8);
      LooseGame();
    }
    cVar1 = Trigg(0x1c);
    if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10010e28), iVar3 == 0)) {
      SetTrigg(0x1c,0);
      ShowPage(s__PAGE56_1000daa0);
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
      (*pcVar10)(1,&DAT_10010bb0,0x41,0);
      (*pcVar10)(1,&DAT_100110f8,0x14,2);
      (*pcVar10)(1,&DAT_10011110,0x55,2);
      (*pcVar10)(1,&DAT_10010de8,0x55,2);
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
      pcStack_30 = s__PAGE86_1000da98;
      break;
    case 1:
      pcStack_30 = s__PAGE87_1000da90;
      break;
    case 2:
      pcStack_30 = s__PAGE88_1000da88;
      break;
    case 3:
      pcStack_30 = s__PAGE89_1000da80;
    }
    cVar1 = AskQuestion(pcStack_30);
    if (cVar1 == '\0') {
      SetTrigg(0x22,0);
    }
    else {
      iVar3 = GetDiff();
      iVar4 = GetResource(0,1);
      if (iVar4 < (iVar3 + 1) * 5000) {
        ShowPage(s__PAGE85_1000da78);
        pcVar10 = SelSendAndKill_exref;
      }
      else {
        SetTrigg(0x21,0);
        SetLightSpot(&DAT_10011148,1,0x15);
        SelectUnits(&DAT_100111b8,0);
        SelChangeNation(2,0);
        iVar3 = GetDiff(0);
        iVar4 = GetResource(0,1);
        SetResource(0,1,iVar4 + (iVar3 + 1) * -5000);
        pcVar10 = SelSendAndKill_exref;
      }
    }
  }
  iVar3 = GetUnitsAmount1(&DAT_10011228,&DAT_100110b0);
  if (iVar3 == 0) {
    SetTrigg(0x22,1);
  }
  cVar1 = Trigg(0x28);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_100110c0,&DAT_100110b0), iVar3 != 0)) {
    SetTrigg(0x28,0);
    ShowPage(s__PAGE15_1000da70);
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
    (*pcVar10)(2,&DAT_10011038,200,0);
    RunTimer(0x11,2000);
    DisableMission(0x52);
    EnableMission(0x53);
    EnableMission(0x54);
    EnableMission(0x57);
    SetTrigg(0x2b,0);
  }
  pcVar9 = Trigg_exref;
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
      ShowPage(s__PAGE22_1000da68);
      SelectUnits(&DAT_10010bf8,0);
      SelChangeNation(2,0);
      iVar3 = GetDiff(0);
      AddResource(0,5,(5 - iVar3) * 10000);
      iVar3 = GetDiff(0);
      AddResource(0,4,(5 - iVar3) * 10000);
      SetTrigg(0x39,0);
      CreateObject0(&DAT_10010ea0,&DAT_10010cb0,&DAT_10011248,1,&DAT_10010e48,200);
      pcVar9 = Trigg_exref;
    }
    iVar3 = GetTotalAmount0(&DAT_10010bf8);
    if (iVar3 != 0) {
      SelectUnits(&DAT_10010ea0,1);
      SelAttackGroup(1,&DAT_10010bf8);
    }
  }
  cVar1 = (*pcVar9)(0x32);
  if (cVar1 != '\0') {
    SetTrigg(0x32,0);
    ClearSelection(1);
    RunTimer(3,300);
  }
  cVar1 = (*pcVar9)(0x29);
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
  pcVar9 = RemoveGroup_exref;
  if (0 < iVar3) {
    SelectUnits(&DAT_10010c98,0);
    (*pcVar10)(1,&DAT_10010e88,0x46,0);
    (*pcVar10)(1,&DAT_10010d58,0x41,2);
    pcVar9 = RemoveGroup_exref;
    RemoveGroup(&DAT_10010c98,&DAT_10010de0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10010e50,&DAT_10010c90);
  if (0 < iVar3) {
    SelectUnits(&DAT_10010c90,0);
    (*pcVar10)(1,&DAT_10010e88,0x46,0);
    (*pcVar10)(1,&DAT_10010d58,0x41,2);
    (*pcVar9)(&DAT_10010c90,&DAT_10010de0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10010e70,&DAT_10010c88);
  if (0 < iVar3) {
    SelectUnits(&DAT_10010c88,0);
    (*pcVar10)(1,&DAT_10010e98,0x46,0);
    (*pcVar10)(1,&DAT_10011298,0x41,2);
    (*pcVar9)(&DAT_10010c88,&DAT_10010dc0);
  }
  iVar3 = GetUnitsAmount1(&DAT_10010e68,&DAT_10010c80);
  if (0 < iVar3) {
    SelectUnits(&DAT_10010c80,0);
    (*pcVar10)(1,&DAT_10010e98,0x46,0);
    (*pcVar10)(1,&DAT_10011298,0x41,2);
    (*pcVar9)(&DAT_10010c80,&DAT_10010dc0);
  }
  if (DAT_100112a4 == 10) {
    DAT_100112a4 = 0;
    SetTrigg(0x29,1);
    iVar3 = GetDiff(0);
    RunTimer(3,(6 - iVar3) * 2000);
    SelectUnits(&DAT_10010de0,0);
    (*pcVar10)(1,&DAT_10010e90,0x46,0);
    (*pcVar10)(1,&DAT_100110f8,0x46,2);
    (*pcVar10)(1,&DAT_10011110,0x78,2);
    (*pcVar10)(1,&DAT_10010de8,0x46,2);
    (*pcVar9)(&DAT_10010c98,&DAT_10011080);
    SelectUnits(&DAT_10010dc0,0);
    (*pcVar10)(1,&DAT_10010e90,0x46,0);
    (*pcVar10)(1,&DAT_100110c0,0,2);
    (*pcVar9)(&DAT_10010c98,&DAT_10011080);
  }
LAB_10004da0:
  cVar1 = Trigg(0x2f);
  pcVar9 = ShowPage_exref;
  if ((cVar1 != '\0') &&
     (iVar3 = GetTotalAmount0(&DAT_10010b50), pcVar9 = ShowPage_exref, iVar3 == 0)) {
    SetTrigg(0x2f,0);
    SelectUnits(&DAT_10011070,0);
    AllowAttack(1,0);
    pcVar9 = ShowPage_exref;
    ShowPage(s__PAGE37_1000da60);
  }
  iVar3 = GetTotalAmount0(&DAT_10010b70);
  if ((iVar3 == 0) && (iVar3 = GetTotalAmount0(&DAT_10010b48), iVar3 < 8)) {
    (*pcVar9)(s__PAGE14_1000da58);
    ShowVictory();
  }
  iVar3 = GetTotalAmount0(&DAT_10010fc8);
  if ((iVar3 == 0) || (iVar3 = GetTotalAmount0(&DAT_10010db0), iVar3 == 0)) {
    (*pcVar9)(s__PAGE13_1000da50);
    LooseGame();
  }
  return;
}



// Function: FUN_10004e90 @ 0x10004e90

undefined4 __cdecl
FUN_10004e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
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
            ShowPage(s__PAGE71_1000db80);
          }
          else {
            if (DAT_100112b4 == 3) {
              DAT_100112b4 = iVar2;
              ShowPage(s__PAGE72_1000db78);
              return 0;
            }
            bVar3 = DAT_100112b4 == 4;
            DAT_100112b4 = iVar2;
            if (bVar3) {
              ShowPage(s__PAGE73_1000db70);
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



// Function: FUN_10004f90 @ 0x10004f90

void __cdecl FUN_10004f90(undefined4 param_1,undefined4 param_2)

{
  SelectUnits(param_1,0);
  Patrol(1,param_2,0x41);
  return;
}



// Function: _rand @ 0x10004fb0

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_10005250();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



// Function: FUN_10004fd2 @ 0x10004fd2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004fd2(void)

{
  void *extraout_ECX;
  
  FUN_10004fea();
  _DAT_100112d0 = FUN_100053a7();
  FUN_10005357(extraout_ECX);
  return;
}



// Function: FUN_10004fea @ 0x10004fea

void FUN_10004fea(void)

{
  PTR_LAB_1000de40 = &LAB_1000542a;
  PTR_LAB_1000de3c = __cfltcvt;
  PTR_LAB_1000de44 = __fassign;
  PTR_LAB_1000de48 = FUN_100053d0;
  PTR_LAB_1000de4c = &LAB_10005478;
  PTR_LAB_1000de50 = __cfltcvt;
  return;
}



// Function: FUN_10005022 @ 0x10005022

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10005022(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100112ec = GetVersion();
    iVar1 = FUN_100060d1(1);
    if (iVar1 != 0) {
      _DAT_100112f8 = DAT_100112ec >> 8 & 0xff;
      _DAT_100112f4 = DAT_100112ec & 0xff;
      DAT_100112ec = DAT_100112ec >> 0x10;
      _DAT_100112f0 = _DAT_100112f4 * 0x100 + _DAT_100112f8;
      iVar1 = FUN_100051cb();
      if (iVar1 != 0) {
        DAT_100119b4 = GetCommandLineA();
        DAT_100112d8 = FUN_10005e2a();
        FUN_10005914();
        FUN_10005bdd();
        FUN_10005b24();
        FUN_100057f6();
        DAT_100112d4 = DAT_100112d4 + 1;
        goto LAB_100050f5;
      }
      FUN_1000612e();
    }
LAB_10005082:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100112d4 < 1) goto LAB_10005082;
      DAT_100112d4 = DAT_100112d4 + -1;
      if (DAT_10011324 == 0) {
        FUN_10005834();
      }
      FUN_10005ad0();
      FUN_1000521f();
      FUN_1000612e();
    }
    else if (param_2 == 3) {
      FUN_100052b7((undefined *)0x0);
    }
LAB_100050f5:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100050fb

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100112d4;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10005143;
    if ((DAT_100119b8 != (code *)0x0) &&
       (iVar2 = (*DAT_100119b8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10005022(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10005143:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10005022(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10005022(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_100119b8 != (code *)0x0) {
      iVar2 = (*DAT_100119b8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10005198

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100112e0 == 1) || ((DAT_100112e0 == 0 && (DAT_100112e4 == 1)))) {
    FUN_100061d6();
  }
  FUN_1000620f(param_1);
  (*(code *)PTR___exit_1000de34)(0xff);
  return;
}



// Function: FUN_100051cb @ 0x100051cb

undefined4 FUN_100051cb(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000649f();
  DAT_1000de38 = TlsAlloc();
  if (DAT_1000de38 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10006362(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000de38,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000523d((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_1000521f @ 0x1000521f

void FUN_1000521f(void)

{
  FUN_100064c8();
  if (DAT_1000de38 != 0xffffffff) {
    TlsFree(DAT_1000de38);
    DAT_1000de38 = 0xffffffff;
  }
  return;
}



// Function: FUN_1000523d @ 0x1000523d

void __cdecl FUN_1000523d(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000dfd0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10005250 @ 0x10005250

DWORD * FUN_10005250(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000de38);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10006362(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000de38,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000523d((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_100052ab;
      }
    }
    __amsg_exit(0x10);
  }
LAB_100052ab:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_100052b7 @ 0x100052b7

void __cdecl FUN_100052b7(undefined *param_1)

{
  if (DAT_1000de38 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1000de38), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_100065aa(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_100065aa(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_100065aa(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_100065aa(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_100065aa(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_100065aa(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1000dfd0) {
        FUN_100065aa(*(undefined **)(param_1 + 0x50));
      }
      FUN_100065aa(param_1);
    }
    TlsSetValue(DAT_1000de38,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10005357 @ 0x10005357

void __fastcall FUN_10005357(void *param_1)

{
  FUN_100066c8(param_1,0x10000,0x30000);
  return;
}



// Function: FUN_10005369 @ 0x10005369

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10005369(void)

{
  if (_DAT_1000b1c8 < _DAT_1000b1d0 - (_DAT_1000b1d0 / _DAT_1000b1d8) * _DAT_1000b1d8) {
    return 1;
  }
  return 0;
}



// Function: FUN_100053a7 @ 0x100053a7

void FUN_100053a7(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_10005369();
  return;
}



// Function: FUN_100053d0 @ 0x100053d0

void __cdecl FUN_100053d0(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_1000686e((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1000e058 < 2) {
        uVar3 = (byte)PTR_DAT_1000e064[*param_1 * 2] & 4;
        this = PTR_DAT_1000e064;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_100067f9(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1000e05c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __fassign @ 0x10005490

/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_10006d3a(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_10006d67(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// Function: FUN_100054ce @ 0x100054ce

undefined1 * __cdecl FUN_100054ce(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10006e0b((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10006d94(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_1000552f(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// Function: FUN_1000552f @ 0x1000552f

undefined1 * __cdecl
FUN_1000552f(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_100057d1(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[1];
    *puVar2 = DAT_1000e05c;
  }
  puVar3 = FUN_10006f20((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar4 = param_4[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    if (9 < iVar4) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    *(char *)(puVar3 + 1) = (char)puVar3[1] + (char)iVar4;
  }
  return param_1;
}



// Function: FUN_100055f1 @ 0x100055f1

char * __cdecl FUN_100055f1(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10006e0b((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10006d94(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10005646(param_2,param_3,&local_14,'\0');
  return param_2;
}



// Function: FUN_10005646 @ 0x10005646

char * __cdecl FUN_10005646(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
  }
  pcVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_100057d1(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_100057d1(pcVar3,1);
    *pcVar3 = DAT_1000e05c;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_100057d1(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_100056ed @ 0x100056ed

void __cdecl FUN_100056ed(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10006e0b((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10006d94(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_1000552f(param_2,param_3,param_4,&local_14,'\x01');
  }
  else {
    pcVar2 = param_2 + (local_14 == 0x2d);
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_10005646(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x10005780

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_100054ce(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_100055f1(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_100056ed(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// Function: FUN_100057d1 @ 0x100057d1

void __cdecl FUN_100057d1(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10007070((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_100057f6 @ 0x100057f6

void FUN_100057f6(void)

{
  if (PTR_FUN_1000de28 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1000de28)();
  }
  FUN_100058fa((undefined4 *)&DAT_1000d008,(undefined4 *)&DAT_1000d010);
  FUN_100058fa((undefined4 *)&DAT_1000d000,(undefined4 *)&DAT_1000d004);
  return;
}



// Function: __exit @ 0x10005823

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10005843(_Code,1,0);
  return;
}



// Function: FUN_10005834 @ 0x10005834

void FUN_10005834(void)

{
  FUN_10005843(0,0,1);
  return;
}



// Function: FUN_10005843 @ 0x10005843

void __cdecl FUN_10005843(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100058e8();
  if (DAT_10011328 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10011324 = 1;
  DAT_10011320 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_100119b0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_100119ac - 4), DAT_100119b0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_100119b0 <= puVar1);
    }
    FUN_100058fa((undefined4 *)&DAT_1000d014,(undefined4 *)&DAT_1000d018);
  }
  FUN_100058fa((undefined4 *)&DAT_1000d01c,(undefined4 *)&DAT_1000d020);
  if (param_3 == 0) {
    DAT_10011328 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100058f1();
  return;
}



// Function: FUN_100058e8 @ 0x100058e8

void FUN_100058e8(void)

{
  FUN_10006534(0xd);
  return;
}



// Function: FUN_100058f1 @ 0x100058f1

void FUN_100058f1(void)

{
  FUN_10006595(0xd);
  return;
}



// Function: FUN_100058fa @ 0x100058fa

void __cdecl FUN_100058fa(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10005914 @ 0x10005914

void FUN_10005914(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  UINT *pUVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  UINT UVar9;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  puVar2 = _malloc(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_100119a0 = 0x20;
  DAT_100118a0 = puVar2;
  for (; puVar2 < DAT_100118a0 + 0x120; puVar2 = puVar2 + 9) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_4c.lpReserved2;
    pUVar5 = (UINT *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)pUVar5 + UVar8);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_100119a0 < (int)UVar8) {
      puVar2 = &DAT_100118a4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_100119a0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_100119a0 = DAT_100119a0 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          puVar3[2] = 0;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_100119a0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_100118a0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)local_8;
          *(byte *)(puVar2 + 1) = (byte)*pUVar5;
        }
        local_8 = local_8 + 4;
        uVar7 = uVar7 + 1;
        pUVar5 = (UINT *)((int)pUVar5 + 1);
      } while ((int)uVar7 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_100118a0 + iVar6 * 9;
    if (DAT_100118a0[iVar6 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_10005ab9;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10005ab9:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_100119a0);
      return;
    }
  } while( true );
}



// Function: FUN_10005ad0 @ 0x10005ad0

void FUN_10005ad0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_100118a0;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_100065aa((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x100119a0);
  return;
}



// Function: FUN_10005b24 @ 0x10005b24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005b24(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_100119a8 == 0) {
    FUN_10007946();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100112d8; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10011308 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100112d8;
  puVar6 = DAT_100112d8;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10006f20((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100065aa((undefined *)DAT_100112d8);
  DAT_100112d8 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_100119a4 = 1;
  return;
}



// Function: FUN_10005bdd @ 0x10005bdd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005bdd(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_100119a8 == 0) {
    FUN_10007946();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1001132c,0x104);
  _DAT_10011318 = &DAT_1001132c;
  pbVar2 = &DAT_1001132c;
  if (*DAT_100119b4 != 0) {
    pbVar2 = DAT_100119b4;
  }
  FUN_10005c76(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10005c76(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10011300 = puVar1;
  _DAT_100112fc = local_8 + -1;
  return;
}



// Function: FUN_10005c76 @ 0x10005c76

void __cdecl FUN_10005c76(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_10011780 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_10011780 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10005d21;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10005d21:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10011780 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10011780 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



// Function: FUN_10005e2a @ 0x10005e2a

LPSTR FUN_10005e2a(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_10011430 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10011430 = 1;
LAB_10005e81:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_100065aa(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10011430 = 2;
  }
  else {
    if (DAT_10011430 == 1) goto LAB_10005e81;
    if (DAT_10011430 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_10007970((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10005f5c @ 0x10005f5c

void __cdecl FUN_10005f5c(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}



// Function: FUN_10005f89 @ 0x10005f89

int FUN_10005f89(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *this;
  byte unaff_BL;
  char local_1230 [4240];
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_10008060();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x1d;
    aCStackY_18[1] = '_';
    aCStackY_18[2] = '\0';
    aCStackY_18[3] = '\x10';
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_1230,0x1090);
    if (DVar4 != 0) {
      pcVar7 = local_1230;
      while (local_1230[0] != '\0') {
        cVar1 = *pcVar7;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar7 = cVar1 + -0x20;
        }
        pcVar7 = pcVar7 + 1;
        local_1230[0] = *pcVar7;
      }
      aCStackY_18[0] = '!';
      aCStackY_18[1] = '`';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = 'C';
        aCStackY_18[1] = '`';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar7 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar7;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar7 = cVar1 + -0x20;
          }
          pcVar7 = pcVar7 + 1;
          local_1a0[0] = *pcVar7;
        }
        pcVar7 = _strstr(local_1230,local_1a0);
      }
      if ((pcVar7 != (char *)0x0) && (pcVar7 = _strchr(pcVar7,0x2c), pcVar7 != (char *)0x0)) {
        pbVar6 = (byte *)(pcVar7 + 1);
        bVar2 = *pbVar6;
        this = pbVar6;
        while (bVar2 != 0) {
          if (*this == 0x3b) {
            *this = 0;
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = -0x57;
        aCStackY_18[1] = '`';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10007ca5(this,pbVar6,(int *)0x0,(void *)0xa);
        if (iVar5 == 2) {
          return 2;
        }
        if (iVar5 == 3) {
          return 3;
        }
        if (iVar5 == 1) {
          return 1;
        }
      }
    }
    FUN_10005f5c((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_100060d1 @ 0x100060d1

undefined4 __cdecl FUN_100060d1(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10011888 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10011888 != (HANDLE)0x0) {
    DAT_1001188c = FUN_10005f89();
    if (DAT_1001188c == 3) {
      ppuVar1 = (undefined **)FUN_1000808f(0x3f8);
    }
    else {
      if (DAT_1001188c != 2) {
        return 1;
      }
      ppuVar1 = FUN_100088e0();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10011888);
  }
  return 0;
}



// Function: FUN_1000612e @ 0x1000612e

void FUN_1000612e(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1001188c == 3) {
    iVar1 = 0;
    if (0 < DAT_10011650) {
      puVar2 = (undefined4 *)((int)DAT_10011654 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10011888,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10011650);
    }
    HeapFree(DAT_10011888,0,DAT_10011654);
  }
  else if (DAT_1001188c == 2) {
    ppuVar3 = &PTR_LOOP_1000e3a0;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000e3a0);
  }
  HeapDestroy(DAT_10011888);
  return;
}



// Function: FUN_100061d6 @ 0x100061d6

void FUN_100061d6(void)

{
  if ((DAT_100112e0 == 1) || ((DAT_100112e0 == 0 && (DAT_100112e4 == 1)))) {
    FUN_1000620f(0xfc);
    if (DAT_10011434 != (code *)0x0) {
      (*DAT_10011434)();
    }
    FUN_1000620f(0xff);
  }
  return;
}



// Function: FUN_1000620f @ 0x1000620f

void __cdecl FUN_1000620f(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_1000de80;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000df10);
  if (param_1 == (&DAT_1000de80)[iVar5 * 2]) {
    if ((DAT_100112e0 == 1) || ((DAT_100112e0 == 0 && (DAT_100112e4 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000de84);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10006f20(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10006f20(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10006f30(local_a4,_Dest);
      FUN_10006f30(local_a4,(uint *)&DAT_1000b4fc);
      FUN_10006f30(local_a4,*(uint **)(iVar5 * 8 + 0x1000de84));
      auStackY_1e3._3_4_ = 0x10006333;
      FUN_10008f04(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10006362 @ 0x10006362

int * __cdecl FUN_10006362(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b538;
  puStack_10 = &LAB_100091a4;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_1001188c == 3) {
        if (puVar2 <= DAT_10011658) {
          FUN_10006534(9);
          local_8 = 0;
          local_24 = FUN_1000842b(puVar2);
          local_8 = 0xffffffff;
          FUN_100063fb();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1000644f;
LAB_1000643e:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1000644a:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1001188c != 2) || (DAT_100103c4 < puVar3)) goto LAB_1000644a;
        FUN_10006534(9);
        local_8 = 1;
        local_24 = FUN_10008bd8((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10006484();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1000643e;
      }
LAB_1000644f:
      local_24 = HeapAlloc(DAT_10011888,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100114b0 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1000908e(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_100063fb @ 0x100063fb

void FUN_100063fb(void)

{
  FUN_10006595(9);
  return;
}



// Function: FUN_10006484 @ 0x10006484

void FUN_10006484(void)

{
  FUN_10006595(9);
  return;
}



// Function: FUN_1000649f @ 0x1000649f

void FUN_1000649f(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000df54);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000df44);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000df34);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000df14);
  return;
}



// Function: FUN_100064c8 @ 0x100064c8

void FUN_100064c8(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000df10;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000df54)) && (ppuVar1 != &PTR_DAT_1000df44)) &&
       ((ppuVar1 != &PTR_DAT_1000df34 && (ppuVar1 != &PTR_DAT_1000df14)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100065aa(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000dfd0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000df34);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000df44);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000df54);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000df14);
  return;
}



// Function: FUN_10006534 @ 0x10006534

void __cdecl FUN_10006534(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000df10 + param_1;
  if ((&DAT_1000df10)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10006534(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100065aa((undefined *)lpCriticalSection);
    }
    FUN_10006595(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10006595 @ 0x10006595

void __cdecl FUN_10006595(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000df10)[param_1]);
  return;
}



// Function: FUN_100065aa @ 0x100065aa

void __cdecl FUN_100065aa(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b550;
  puStack_10 = &LAB_100091a4;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1001188c == 3) {
    ExceptionList = &local_14;
    FUN_10006534(9);
    local_8 = 0;
    local_20 = (uint *)FUN_100080d7((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10008102(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10006614();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1001188c != 2) goto LAB_10006676;
    ExceptionList = &local_14;
    FUN_10006534(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10008b3c(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10008b93(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000666c();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10006676:
  HeapFree(DAT_10011888,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10006614 @ 0x10006614

void FUN_10006614(void)

{
  FUN_10006595(9);
  return;
}



// Function: FUN_1000666c @ 0x1000666c

void FUN_1000666c(void)

{
  FUN_10006595(9);
  return;
}



// Function: FUN_10006693 @ 0x10006693

uint __thiscall FUN_10006693(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_100066de(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10006770(uVar1);
  return uVar1;
}



// Function: FUN_100066c8 @ 0x100066c8

void __thiscall FUN_100066c8(void *this,uint param_1,uint param_2)

{
  FUN_10006693(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// Function: FUN_100066de @ 0x100066de

uint __cdecl FUN_100066de(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



// Function: FUN_10006770 @ 0x10006770

uint __cdecl FUN_10006770(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



// Function: FUN_100067f9 @ 0x100067f9

uint __thiscall FUN_100067f9(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000e064 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000e064[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000927c(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_1000686e @ 0x1000686e

uint __cdecl FUN_1000686e(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100114e0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1001163c);
    bVar1 = DAT_10011638 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1001163c);
      this = (void *)0x13;
      FUN_10006534(0x13);
    }
    param_1 = FUN_100068dd(this,param_1);
    if (bVar1) {
      FUN_10006595(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1001163c);
    }
  }
  return param_1;
}



// Function: FUN_100068dd @ 0x100068dd

uint __thiscall FUN_100068dd(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100114e0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000e058 < 2) {
        uVar2 = (byte)PTR_DAT_1000e064[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_100067f9(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000e064[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100093c5(DAT_100114e0,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}



// Function: FUN_100069a8 @ 0x100069a8

undefined4 __cdecl FUN_100069a8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f)))
      != 0) {
    return 0;
  }
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    piVar1 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}



// Function: FUN_100069f1 @ 0x100069f1

void __cdecl FUN_100069f1(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_10009614(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_10009614(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Function: FUN_10006a47 @ 0x10006a47

undefined4 __cdecl FUN_10006a47(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) &&
     (iVar2 = FUN_100069a8(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_100069f1(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar4 = 3 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}



// Function: FUN_10006ad3 @ 0x10006ad3

void __cdecl FUN_10006ad3(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// Function: FUN_10006aee @ 0x10006aee

void __cdecl FUN_10006aee(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_10006afa @ 0x10006afa

undefined4 __cdecl FUN_10006afa(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}



// Function: FUN_10006b15 @ 0x10006b15

void __cdecl FUN_10006b15(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  local_8 = 3;
  iVar2 = (int)param_2 / 0x20;
  iVar5 = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)iVar5;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    *puVar6 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar6 = puVar6 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  iVar4 = 8;
  do {
    if (iVar5 < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}



// Function: FUN_10006ba2 @ 0x10006ba2

undefined4 __cdecl FUN_10006ba2(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_10006afa((int *)&local_10);
    if (iVar2 != 0) {
LAB_10006cce:
      uVar5 = 0;
      goto LAB_10006cd0;
    }
    FUN_10006aee(&local_10);
  }
  else {
    FUN_10006ad3((int)local_1c,&local_10);
    iVar2 = FUN_10006a47((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10006aee(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10006aee(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10006b15(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10006cd0;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10006b15(&local_10,param_3[3]);
        goto LAB_10006cce;
      }
      FUN_10006ad3((int)&local_10,local_1c);
      FUN_10006b15(&local_10,iVar2 - iVar4);
      FUN_10006a47((int)&local_10,param_3[2]);
      FUN_10006b15(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10006cd0:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}



// Function: FUN_10006d0e @ 0x10006d0e

void __cdecl FUN_10006d0e(ushort *param_1,uint *param_2)

{
  FUN_10006ba2(param_1,param_2,(int *)&DAT_1000e270);
  return;
}



// Function: FUN_10006d24 @ 0x10006d24

void __cdecl FUN_10006d24(ushort *param_1,uint *param_2)

{
  FUN_10006ba2(param_1,param_2,(int *)&DAT_1000e288);
  return;
}



// Function: FUN_10006d3a @ 0x10006d3a

void __thiscall FUN_10006d3a(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_100097b5(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10006d0e(local_10,param_1);
  return;
}



// Function: FUN_10006d67 @ 0x10006d67

void __thiscall FUN_10006d67(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_100097b5(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10006d24(local_10,param_1);
  return;
}



// Function: FUN_10006d94 @ 0x10006d94

void __cdecl FUN_10006d94(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar1 = param_1;
  pcVar4 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        cVar5 = '0';
      }
      else {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar2 = cVar5;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar4)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Str);
    FUN_10007070((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// Function: FUN_10006e0b @ 0x10006e0b

int * __cdecl FUN_10006e0b(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined2 uVar4;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffbc >> 0x10);
  FUN_10006e67(&local_10,&param_1);
  iVar3 = FUN_10009c86(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10006f20(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// Function: FUN_10006e67 @ 0x10006e67

void __cdecl FUN_10006e67(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}



// Function: FUN_10006f20 @ 0x10006f20

uint * __cdecl FUN_10006f20(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10007008;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10007008:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}



// Function: FUN_10006f30 @ 0x10006f30

uint * __cdecl FUN_10006f30(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10006f4c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10006f7f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10006f9b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10006f4c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10006f9b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10006f9b;
    }
  }
LAB_10006f7f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10006f9b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10007008:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10007008;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _memset @ 0x10007010

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



// Function: FUN_10007070 @ 0x10007070

undefined4 * __cdecl FUN_10007070(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10007227_caseD_2;
        case 3:
          goto switchD_10007227_caseD_3;
        }
        goto switchD_10007227_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10007227_caseD_0;
      case 1:
        goto switchD_10007227_caseD_1;
      case 2:
        goto switchD_10007227_caseD_2;
      case 3:
        goto switchD_10007227_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10007227_caseD_2;
            case 3:
              goto switchD_10007227_caseD_3;
            }
            goto switchD_10007227_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10007227_caseD_2;
            case 3:
              goto switchD_10007227_caseD_3;
            }
            goto switchD_10007227_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10007227_caseD_2;
            case 3:
              goto switchD_10007227_caseD_3;
            }
            goto switchD_10007227_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10007227_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10007227_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10007227_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10007227_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_100070a5_caseD_2;
      case 3:
        goto switchD_100070a5_caseD_3;
      }
      goto switchD_100070a5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100070a5_caseD_0;
    case 1:
      goto switchD_100070a5_caseD_1;
    case 2:
      goto switchD_100070a5_caseD_2;
    case 3:
      goto switchD_100070a5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100070a5_caseD_2;
          case 3:
            goto switchD_100070a5_caseD_3;
          }
          goto switchD_100070a5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100070a5_caseD_2;
          case 3:
            goto switchD_100070a5_caseD_3;
          }
          goto switchD_100070a5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100070a5_caseD_2;
          case 3:
            goto switchD_100070a5_caseD_3;
          }
          goto switchD_100070a5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_100070a5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100070a5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100070a5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100070a5_caseD_0:
  return param_1;
}



// Function: _strlen @ 0x100073b0

/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_100073d0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10007403:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100073d0:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_10007403;
}



// Function: _malloc @ 0x10007434

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_100114b0);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10007446

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10007472((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1000908e(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10007472 @ 0x10007472

void __cdecl FUN_10007472(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b568;
  puStack_10 = &LAB_100091a4;
  local_14 = ExceptionList;
  if (DAT_1001188c == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10011658) {
      ExceptionList = &local_14;
      FUN_10006534(9);
      local_8 = 0;
      piVar1 = FUN_1000842b(param_1);
      local_8 = 0xffffffff;
      FUN_100074d9();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1001188c == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_100103c4) {
        ExceptionList = &local_14;
        FUN_10006534(9);
        local_8 = 1;
        piVar1 = FUN_10008bd8(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10007538();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10007551;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10007551:
  HeapAlloc(DAT_10011888,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_100074d9 @ 0x100074d9

void FUN_100074d9(void)

{
  FUN_10006595(9);
  return;
}



// Function: FUN_10007538 @ 0x10007538

void FUN_10007538(void)

{
  FUN_10006595(9);
  return;
}



// Function: FUN_1000756e @ 0x1000756e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000756e(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_10006534(0x19);
  CodePage = FUN_1000771b(param_1);
  if (CodePage != DAT_1001165c) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000e2a8;
LAB_100075ab:
      if (*pUVar5 != CodePage) goto code_r0x100075af;
      local_8 = 0;
      puVar15 = &DAT_10011780;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000e2b8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000e2a0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10011780 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      _DAT_1001166c = 1;
      DAT_1001165c = CodePage;
      DAT_10011884 = FUN_10007765(CodePage);
      DAT_10011660 = *(undefined4 *)(iVar12 + 0x1000e2ac);
      DAT_10011664 = *(undefined4 *)(iVar12 + 0x1000e2b0);
      DAT_10011668 = *(undefined4 *)(iVar12 + 0x1000e2b4);
      goto LAB_100076ff;
    }
    goto LAB_100076fa;
  }
  goto LAB_10007595;
code_r0x100075af:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1000e397 < (int)pUVar5) goto code_r0x100075ba;
  goto LAB_100075ab;
code_r0x100075ba:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10011884 = 0;
    puVar15 = &DAT_10011780;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1001166c = 0;
      DAT_1001165c = CodePage;
    }
    else {
      DAT_1001165c = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10011780 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10011780 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10011884 = FUN_10007765(CodePage);
      _DAT_1001166c = 1;
    }
    DAT_10011660 = 0;
    DAT_10011664 = 0;
    DAT_10011668 = 0;
  }
  else {
    if (DAT_10011498 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1000770c;
    }
LAB_100076fa:
    FUN_10007798();
  }
LAB_100076ff:
  FUN_100077c1();
LAB_10007595:
  uVar14 = 0;
LAB_1000770c:
  FUN_10006595(0x19);
  return uVar14;
}



// Function: FUN_1000771b @ 0x1000771b

int __cdecl FUN_1000771b(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10011498 = 1;
                    /* WARNING: Could not recover jumptable at 0x10007735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10011498 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000774a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100114f0;
  }
  DAT_10011498 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10007765 @ 0x10007765

undefined4 __cdecl FUN_10007765(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}



// Function: FUN_10007798 @ 0x10007798

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007798(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10011780;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1001165c = 0;
  _DAT_1001166c = 0;
  DAT_10011884 = 0;
  DAT_10011660 = 0;
  DAT_10011664 = 0;
  DAT_10011668 = 0;
  return;
}



// Function: FUN_100077c1 @ 0x100077c1

void FUN_100077c1(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_1001165c,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_1000927c(1,local_118,0x100,local_518,DAT_1001165c,DAT_10011884,0);
    FUN_100093c5(DAT_10011884,0x100,local_118,0x100,local_218,0x100,DAT_1001165c,0);
    FUN_100093c5(DAT_10011884,0x200,local_118,0x100,local_318,0x100,DAT_1001165c,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10011780 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_100078cd;
        }
        (&DAT_10011680)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10011780 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_100078cd:
        (&DAT_10011680)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_10011780 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10007917;
        }
        (&DAT_10011680)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10011780 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10007917:
        (&DAT_10011680)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10007946 @ 0x10007946

void FUN_10007946(void)

{
  if (DAT_100119a8 == 0) {
    FUN_1000756e(-3);
    DAT_100119a8 = 1;
  }
  return;
}



// Function: FUN_10007970 @ 0x10007970

undefined4 * __cdecl FUN_10007970(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10007b27_caseD_2;
        case 3:
          goto switchD_10007b27_caseD_3;
        }
        goto switchD_10007b27_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10007b27_caseD_0;
      case 1:
        goto switchD_10007b27_caseD_1;
      case 2:
        goto switchD_10007b27_caseD_2;
      case 3:
        goto switchD_10007b27_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10007b27_caseD_2;
            case 3:
              goto switchD_10007b27_caseD_3;
            }
            goto switchD_10007b27_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10007b27_caseD_2;
            case 3:
              goto switchD_10007b27_caseD_3;
            }
            goto switchD_10007b27_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10007b27_caseD_2;
            case 3:
              goto switchD_10007b27_caseD_3;
            }
            goto switchD_10007b27_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10007b27_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10007b27_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10007b27_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10007b27_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_100079a5_caseD_2;
      case 3:
        goto switchD_100079a5_caseD_3;
      }
      goto switchD_100079a5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100079a5_caseD_0;
    case 1:
      goto switchD_100079a5_caseD_1;
    case 2:
      goto switchD_100079a5_caseD_2;
    case 3:
      goto switchD_100079a5_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100079a5_caseD_2;
          case 3:
            goto switchD_100079a5_caseD_3;
          }
          goto switchD_100079a5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100079a5_caseD_2;
          case 3:
            goto switchD_100079a5_caseD_3;
          }
          goto switchD_100079a5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_100079a5_caseD_2;
          case 3:
            goto switchD_100079a5_caseD_3;
          }
          goto switchD_100079a5_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_100079a5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100079a5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100079a5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100079a5_caseD_0:
  return param_1;
}



// Function: FUN_10007ca5 @ 0x10007ca5

void __thiscall FUN_10007ca5(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10007cbc(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_10007cbc @ 0x10007cbc

void * __thiscall FUN_10007cbc(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  DWORD *pDVar6;
  void *this_00;
  byte bVar7;
  undefined *puVar8;
  void *local_c;
  byte *local_8;
  
  local_c = (void *)0x0;
  bVar7 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_1000e058 < 2) {
      uVar3 = (byte)PTR_DAT_1000e064[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000e064;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_100067f9(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10007d17:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10007d17;
  if ((((int)param_3 < 0) || (param_3 == (void *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (void *)0x0;
  }
  this_00 = (void *)0x10;
  if (param_3 == (void *)0x0) {
    if (bVar7 != 0x30) {
      param_3 = (void *)0xa;
      goto LAB_10007d81;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10007d81;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10007d81:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000e058 < 2) {
      uVar5 = (byte)PTR_DAT_1000e064[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_100067f9(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000e058 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000e064 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_100067f9(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10007e2d:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (void *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && ((void *)0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && ((void *)0x7fffffff < local_c)))))))) {
          pDVar6 = FUN_10009f19();
          *pDVar6 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (void *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (void *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return (void *)-(int)local_c;
      }
      uVar3 = FUN_10009f22((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10007e2d;
    if ((local_c < pvVar4) ||
       ((local_c == pvVar4 && (this_00 <= (void *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = (void *)((int)local_c * (int)param_3 + (int)this_00);
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar7 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}



// Function: _strchr @ 0x10007ee0

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



// Function: _strstr @ 0x10007fa0

/* Library Function - Single Match
    _strstr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  
  cVar3 = *_SubStr;
  if (cVar3 == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    while (((uint)_Str & 3) != 0) {
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      _Str = (char *)((int)_Str + 1);
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar4 = *(uint *)_Str;
        uVar7 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar6 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar9 = (uint *)((int)_Str + 4);
        if (((uVar7 ^ 0xffffffff ^ uVar7 + 0x7efefeff) & 0x81010100) != 0) break;
        _Str = (char *)puVar9;
        if ((uVar6 & 0x81010100) != 0) {
          if ((uVar6 & 0x1010100) != 0) {
            return (char *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (char *)0x0;
          }
        }
      }
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 8);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 1);
      }
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 0x10);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 2);
      }
      if (cVar5 == '\0') break;
      cVar5 = (char)(uVar4 >> 0x18);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 3);
      }
      _Str = (char *)puVar9;
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
    }
    return (char *)0x0;
  }
  do {
    cVar5 = *_Str;
    do {
      while (_Str = _Str + 1, cVar5 != cVar3) {
        if (cVar5 == '\0') {
          return (char *)0x0;
        }
        cVar5 = *_Str;
      }
      cVar5 = *_Str;
      pcVar10 = _Str + 1;
      pcVar8 = _SubStr;
    } while (cVar5 != _SubStr[1]);
    do {
      if (pcVar8[2] == '\0') {
LAB_10008013:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10008013;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x10008020

/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}



// Function: FUN_10008060 @ 0x10008060

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10008060(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



// Function: FUN_1000808f @ 0x1000808f

undefined4 __cdecl FUN_1000808f(undefined4 param_1)

{
  DAT_10011654 = HeapAlloc(DAT_10011888,0,0x140);
  if (DAT_10011654 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1001164c = 0;
  DAT_10011650 = 0;
  DAT_10011648 = DAT_10011654;
  DAT_10011658 = param_1;
  DAT_10011640 = 0x10;
  return 1;
}



// Function: FUN_100080d7 @ 0x100080d7

uint __cdecl FUN_100080d7(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10011654;
  while( true ) {
    if (DAT_10011654 + DAT_10011650 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_10008102 @ 0x10008102

void __cdecl FUN_10008102(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar5 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar3 = (int *)(uVar14 * 0x204 + 0x144 + uVar5);
  uVar13 = *puVar12;
  local_8 = uVar13 - 1;
  if ((local_8 & 1) == 0) {
    uVar6 = *(uint *)(local_8 + (int)puVar12);
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar6 & 1) == 0) {
      uVar9 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (*(int *)((int)puVar12 + uVar13 + 3) == *(int *)((int)puVar12 + uVar13 + 7)) {
        if (uVar9 < 0x20) {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar6;
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 7) + 4) =
           *(undefined4 *)((int)puVar12 + uVar13 + 3);
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 3) + 8) =
           *(undefined4 *)((int)puVar12 + uVar13 + 7);
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      puVar12[1] = piVar3[(int)puVar10 * 2 + 1];
      puVar12[2] = (uint)(piVar3 + (int)puVar10 * 2);
      (piVar3 + (int)puVar10 * 2)[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar4 = *(char *)((int)puVar10 + uVar5 + 4);
        *(char *)((int)puVar10 + uVar5 + 4) = cVar4 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (DAT_1001164c != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10011644 * 0x8000 + DAT_1001164c[3]),0x8000,0x4000);
        DAT_1001164c[2] = DAT_1001164c[2] | 0x80000000U >> ((byte)DAT_10011644 & 0x1f);
        *(undefined4 *)(DAT_1001164c[4] + 0xc4 + DAT_10011644 * 4) = 0;
        *(char *)(DAT_1001164c[4] + 0x43) = *(char *)(DAT_1001164c[4] + 0x43) + -1;
        if (*(char *)(DAT_1001164c[4] + 0x43) == '\0') {
          DAT_1001164c[1] = DAT_1001164c[1] & 0xfffffffe;
        }
        if (DAT_1001164c[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1001164c[3],0,0x8000);
          HeapFree(DAT_10011888,0,(LPVOID)DAT_1001164c[4]);
          FUN_10007070(DAT_1001164c,DAT_1001164c + 5,
                       (DAT_10011650 * 0x14 - (int)DAT_1001164c) + -0x14 + DAT_10011654);
          DAT_10011650 = DAT_10011650 + -1;
          if (DAT_1001164c < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10011648 = DAT_10011654;
        }
      }
      DAT_1001164c = param_1;
      DAT_10011644 = uVar14;
    }
  }
  return;
}



// Function: FUN_1000842b @ 0x1000842b

int * __cdecl FUN_1000842b(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_10011654 + DAT_10011650 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10011648;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_10011654;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10011648 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10011648) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10011654;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10011648 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10011648) && (param_1 = FUN_10008734(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100087e5((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_10011648 = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_100086f1;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_100086f1:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1001164c)) && (local_8 == DAT_10011644)) {
    DAT_1001164c = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10008734 @ 0x10008734

undefined4 * FUN_10008734(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10011650 == DAT_10011640) {
    pvVar2 = HeapReAlloc(DAT_10011888,0,DAT_10011654,(DAT_10011640 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10011640 = DAT_10011640 + 0x10;
    DAT_10011654 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10011654 + DAT_10011650 * 0x14);
  pvVar2 = HeapAlloc(DAT_10011888,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10011650 = DAT_10011650 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10011888,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100087e5 @ 0x100087e5

int __cdecl FUN_100087e5(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}



// Function: FUN_100088e0 @ 0x100088e0

undefined ** FUN_100088e0(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000e3b0 == -1) {
    lpMem = &PTR_LOOP_1000e3a0;
  }
  else {
    lpMem = HeapAlloc(DAT_10011888,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000e3a0) {
        if (PTR_LOOP_1000e3a0 == (undefined *)0x0) {
          PTR_LOOP_1000e3a0 = (undefined *)&PTR_LOOP_1000e3a0;
        }
        if (PTR_LOOP_1000e3a4 == (undefined *)0x0) {
          PTR_LOOP_1000e3a4 = (undefined *)&PTR_LOOP_1000e3a0;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000e3a0;
        lpMem[1] = PTR_LOOP_1000e3a4;
        PTR_LOOP_1000e3a4 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      ppuVar3 = lpMem + 6;
      lpMem[3] = (undefined *)(lpMem + 0x26);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)ppuVar3;
      iVar4 = 0;
      do {
        bVar1 = 0xf < iVar4;
        iVar4 = iVar4 + 1;
        *ppuVar3 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar3[1] = (undefined *)0xf1;
        ppuVar3 = ppuVar3 + 2;
      } while (iVar4 < 0x400);
      _memset(lpAddress,0,0x10000);
      for (; lpAddress < lpMem[4] + 0x10000; lpAddress = lpAddress + 0x400) {
        *(undefined1 *)(lpAddress + 0x3e) = 0xff;
        *lpAddress = (int)(lpAddress + 2);
        lpAddress[1] = 0xf0;
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_1000e3a0) {
    HeapFree(DAT_10011888,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_10008a24 @ 0x10008a24

void __cdecl FUN_10008a24(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_100103c0 == param_1) {
    PTR_LOOP_100103c0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000e3a0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10011888,0,param_1);
    return;
  }
  DAT_1000e3b0 = 0xffffffff;
  return;
}



// Function: FUN_10008a7a @ 0x10008a7a

void __cdecl FUN_10008a7a(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000e3a4;
  do {
    ppuVar5 = ppuVar4;
    if (ppuVar4[4] != (undefined *)0xffffffff) {
      local_8 = 0;
      ppuVar5 = ppuVar4 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar4[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_1001149c = DAT_1001149c + -1;
            if (((undefined **)ppuVar4[3] == (undefined **)0x0) || (ppuVar5 < ppuVar4[3])) {
              ppuVar4[3] = (undefined *)ppuVar5;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar4[1];
      if ((local_8 != 0) && (ppuVar4[6] == (undefined *)0xffffffff)) {
        ppuVar2 = ppuVar4 + 8;
        iVar3 = 1;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_10008a24(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000e3a4) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_10008b3c @ 0x10008b3c

int __cdecl FUN_10008b3c(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000e3a0;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000e3a0) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



// Function: FUN_10008b93 @ 0x10008b93

void __cdecl FUN_10008b93(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1001149c = DAT_1001149c + 1, DAT_1001149c == 0x20)) {
    FUN_10008a7a(0x10);
  }
  return;
}



// Function: FUN_10008bd8 @ 0x10008bd8

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10008bd8(uint param_1)

{
  uint *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar7 = (int *)PTR_LOOP_100103c0;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10008de0(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10008ca3;
            puVar8[1] = param_1;
          }
          puVar8 = puVar8 + 2;
          piVar4 = piVar4 + 0x400;
        } while (puVar8 < piVar7 + 0x806);
      }
      puVar1 = (uint *)piVar7[2];
      piVar4 = (int *)piVar7[4];
      for (puVar8 = (uint *)(piVar7 + 6); puVar8 < puVar1; puVar8 = puVar8 + 2) {
        if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
          piVar5 = (int *)FUN_10008de0(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10008ca3:
            PTR_LOOP_100103c0 = (undefined *)piVar7;
            *puVar8 = *puVar8 - param_1;
            piVar7[2] = (int)puVar8;
            return piVar5;
          }
          puVar8[1] = param_1;
        }
        piVar4 = piVar4 + 0x400;
      }
    }
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)PTR_LOOP_100103c0) {
      ppuVar9 = &PTR_LOOP_1000e3a0;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000e3a0) {
          ppuVar9 = FUN_100088e0();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_100103c0 = (undefined *)ppuVar9;
          *piVar7 = (int)piVar7 + param_1 + 8;
          piVar7[1] = 0xf0 - param_1;
          ppuVar9[6] = ppuVar9[6] + -(param_1 & 0xff);
          return piVar7 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar7 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar3 = *ppuVar2;
      ppuVar6 = ppuVar2;
      for (; (puVar3 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar6 = ppuVar6 + 2;
        puVar3 = *ppuVar6;
      }
      piVar4 = VirtualAlloc(piVar7,local_8 << 0xc,0x1000,4);
      if (piVar4 != piVar7) {
        return (int *)0x0;
      }
      _memset(piVar7,local_8 << 0xc,0);
      ppuVar6 = ppuVar2;
      if (0 < local_8) {
        piVar4 = piVar7 + 1;
        do {
          *(undefined1 *)(piVar4 + 0x3d) = 0xff;
          piVar4[-1] = (int)(piVar4 + 1);
          *piVar4 = 0xf0;
          *ppuVar6 = (undefined *)0xf0;
          ppuVar6[1] = (undefined *)0xf1;
          piVar4 = piVar4 + 0x400;
          ppuVar6 = ppuVar6 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar6 < ppuVar9 + 0x806 && (*ppuVar6 != (undefined *)0xffffffff));
          ppuVar6 = ppuVar6 + 2) {
      }
      PTR_LOOP_100103c0 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar6 < ppuVar9 + 0x806) & (uint)ppuVar6);
      *(char *)(piVar7 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar7[1] = piVar7[1] - param_1;
      *piVar7 = (int)piVar7 + param_1 + 8;
      return piVar7 + 0x40;
    }
  } while( true );
}



// Function: FUN_10008de0 @ 0x10008de0

int __cdecl FUN_10008de0(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)(param_1 + 0x3e);
  bVar3 = (byte)param_3;
  if ((uint)param_1[1] < param_3) {
    pbVar6 = pbVar2;
    if (pbVar2[param_1[1]] != 0) {
      pbVar6 = pbVar2 + param_1[1];
    }
    while( true ) {
      while( true ) {
        if (pbVar1 <= pbVar6 + param_3) {
          pbVar6 = (byte *)(param_1 + 2);
          while( true ) {
            while( true ) {
              if (pbVar2 <= pbVar6) {
                return 0;
              }
              if (pbVar1 <= pbVar6 + param_3) {
                return 0;
              }
              if (*pbVar6 == 0) break;
              pbVar6 = pbVar6 + *pbVar6;
            }
            uVar5 = 1;
            pbVar4 = pbVar6;
            while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
              uVar5 = uVar5 + 1;
            }
            if (param_3 <= uVar5) break;
            param_2 = param_2 - uVar5;
            pbVar6 = pbVar4;
            if (param_2 < param_3) {
              return 0;
            }
          }
          if (pbVar6 + param_3 < pbVar1) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            param_1[1] = 0;
            *param_1 = (int)(param_1 + 2);
          }
          *pbVar6 = bVar3;
          pbVar2 = pbVar6 + 8;
          goto LAB_10008ef3;
        }
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + *pbVar6;
      }
      uVar5 = 1;
      pbVar4 = pbVar6;
      while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
        uVar5 = uVar5 + 1;
      }
      if (param_3 <= uVar5) break;
      if (pbVar6 == pbVar2) {
        param_1[1] = uVar5;
        pbVar6 = pbVar4;
      }
      else {
        param_2 = param_2 - uVar5;
        pbVar6 = pbVar4;
        if (param_2 < param_3) {
          return 0;
        }
      }
    }
    if (pbVar6 + param_3 < pbVar1) {
      *param_1 = (int)(pbVar6 + param_3);
      param_1[1] = uVar5 - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    *pbVar6 = bVar3;
    pbVar2 = pbVar6 + 8;
  }
  else {
    *pbVar2 = bVar3;
    if (pbVar2 + param_3 < pbVar1) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    pbVar2 = pbVar2 + 8;
  }
LAB_10008ef3:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_10008f04 @ 0x10008f04

int __cdecl FUN_10008f04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100114a0 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100114a0 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100114a0 != (FARPROC)0x0) {
        DAT_100114a4 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100114a8 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10008f53;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10008f53:
    if (DAT_100114a4 != (FARPROC)0x0) {
      iVar1 = (*DAT_100114a4)();
      if ((iVar1 != 0) && (DAT_100114a8 != (FARPROC)0x0)) {
        iVar1 = (*DAT_100114a8)(iVar1);
      }
    }
    iVar1 = (*DAT_100114a0)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10008f90

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x10008fce;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000900b;
        goto LAB_10009079;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x10009075:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10009079:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000900b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10009075;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10009075;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10009075;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10008fce:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1000900b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_1000908e @ 0x1000908e

undefined4 __cdecl FUN_1000908e(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100114ac != (code *)0x0) {
    iVar1 = (*DAT_100114ac)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: __global_unwind2 @ 0x100090ac

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100090c4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x100090ee

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_100090cc;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10009182();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_10009182 @ 0x10009182

void FUN_10009182(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100103d8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100103d4 = in_EAX;
  DAT_100103dc = unaff_EBP;
  return;
}



// Function: FUN_10009261 @ 0x10009261

void FUN_10009261(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_1000927c @ 0x1000927c

BOOL __cdecl
FUN_1000927c(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b5c8;
  puStack_10 = &LAB_100091a4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_100114c8;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_100114c8 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_100114c8 = iVar3;
  if (DAT_100114c8 != 2) {
    if (DAT_100114c8 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_100114f0;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10008060();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_100114e0;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_100093c5 @ 0x100093c5

int __cdecl
FUN_100093c5(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b5d8;
  puStack_10 = &LAB_100091a4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_100114f8 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100114f8 = 2;
    }
    else {
      DAT_100114f8 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100095e9(param_3,param_4);
  }
  if (DAT_100114f8 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_100114f8 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100114f0;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10008060();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10008060();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}



// Function: FUN_100095e9 @ 0x100095e9

int __cdecl FUN_100095e9(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}



// Function: FUN_10009614 @ 0x10009614

undefined4 __cdecl FUN_10009614(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}



// Function: ___add_12 @ 0x10009635

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10009614(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_10009614(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_10009614(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_10009614(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: FUN_10009693 @ 0x10009693

void __cdecl FUN_10009693(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}



// Function: FUN_100096c1 @ 0x100096c1

void __cdecl FUN_100096c1(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Function: FUN_100096ee @ 0x100096ee

void __cdecl FUN_100096ee(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_10009693(puVar1);
      FUN_10009693(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_10009693(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_10009693(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// Function: FUN_100097b5 @ 0x100097b5

undefined4 __thiscall
FUN_100097b5(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_18 = 0;
  pbVar8 = param_3;
  while( true ) {
    bVar6 = *pbVar8;
    this = (void *)CONCAT31((int3)((uint)this >> 8),bVar6);
    if ((((bVar6 != 0x20) && (bVar6 != 9)) && (bVar6 != 10)) && (bVar6 != 0xd)) break;
    pbVar8 = pbVar8 + 1;
  }
  iVar1 = 4;
  iVar9 = 0;
  iVar5 = local_14;
LAB_1000980c:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_10009829:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_10009a4e;
    }
    if (bVar6 == DAT_1000e05c) goto LAB_10009838;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_10009b28;
    }
    goto LAB_1000980c;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_10009829;
    iVar9 = iVar1;
    if (bVar6 != DAT_1000e05c) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_100098bd;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_10009896;
    }
    goto LAB_1000980c;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_10009829;
    if (bVar6 == DAT_1000e05c) {
LAB_10009838:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_10009b2d;
    }
    goto LAB_1000980c;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_1000e058 < 2) {
        uVar3 = (byte)PTR_DAT_1000e064[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1000e064;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_100067f9(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar9 = iVar1;
    iVar5 = local_14;
    if (bVar6 != DAT_1000e05c) goto LAB_100099aa;
    goto LAB_1000980c;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar9 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar9 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar9;
      local_28 = iVar5;
      if (DAT_1000e058 < 2) {
        uVar3 = (byte)PTR_DAT_1000e064[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1000e064;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_100067f9(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar9 = local_14;
    }
LAB_100099aa:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_100098bd:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_10009896:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_10009b28;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1000980c;
  case 5:
    local_28 = iVar5;
    if (DAT_1000e058 < 2) {
      uVar3 = (byte)PTR_DAT_1000e064[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1000e064;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_100067f9(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_10009a4e;
    goto LAB_10009b2d;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_10009a83;
      if (bVar6 == 0x2d) goto LAB_10009a77;
      if (bVar6 != 0x30) goto LAB_10009b2d;
LAB_10009a1c:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1000980c;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_10009a1c;
      goto LAB_10009b2d;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_10009b28;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_10009aae;
  default:
    goto switchD_10009818_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_10009a83:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_10009b2d;
LAB_10009a77:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1000980c;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_10009818_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1000980c;
    goto LAB_10009b2d;
  }
  iVar9 = 9;
LAB_10009a4e:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1000980c;
LAB_10009aae:
  if (DAT_1000e058 < 2) {
    uVar3 = (byte)PTR_DAT_1000e064[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_1000e064;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_100067f9(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_10009af8;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_10009af0;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_10009aae;
LAB_10009af0:
  pbVar7 = (byte *)0x1451;
LAB_10009af8:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_1000e058 < 2) {
      uVar3 = (byte)PTR_DAT_1000e064[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1000e064;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_100067f9(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_10009b28:
  pbVar7 = pbVar8 + -1;
LAB_10009b2d:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_10009c3b;
  }
  pcVar4 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar4 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar4 = pcVar4 + -1, *pcVar4 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_100096ee(local_60,local_8,(uint *)&local_44);
    pbVar8 = local_20;
    if (local_1c < 0) {
      pbVar8 = (byte *)-(int)local_20;
    }
    pbVar8 = pbVar8 + local_c;
    if (local_24 == 0) {
      pbVar8 = pbVar8 + param_5;
    }
    if (local_28 == 0) {
      pbVar8 = pbVar8 + -param_6;
    }
    if ((int)pbVar8 < 0x1451) {
      if (-0x1451 < (int)pbVar8) {
        FUN_1000a38a((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_10009bc0;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_10009bc0:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_10009c3b:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// Function: FUN_10009c86 @ 0x10009c86

undefined4 __cdecl
FUN_10009c86(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar3 = param_6;
  uVar5 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar5 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_10009d7b;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_10009d7b:
            pcVar11 = "1#QNAN";
            goto LAB_10009d80;
          }
          pcVar11 = "1#IND";
        }
        FUN_10006f20((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_10009d80:
        FUN_10006f20((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar5;
    cStack_9 = (char)(uVar5 >> 8);
    sVar8 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                   0x10);
    local_e = param_2;
    local_12 = param_1;
    FUN_1000a38a((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000a16a((int *)&local_14,(int *)&local_20);
    }
    *psVar3 = sVar8;
    iVar10 = param_4;
    if (((param_5 & 1) == 0) || (iVar10 = param_4 + sVar8, 0 < param_4 + sVar8)) {
      if (0x15 < iVar10) {
        iVar10 = 0x15;
      }
      iVar9 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_10009693((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_100096c1((uint *)&local_14);
        }
      }
      param_4 = iVar10 + 1;
      psVar6 = psVar3 + 2;
      param_6 = psVar6;
      uVar5 = local_12;
      uVar2 = local_e;
      if (0 < param_4) {
        do {
          local_e._2_2_ = (undefined2)(uVar2 >> 0x10);
          local_e._0_2_ = (undefined2)uVar2;
          local_12._2_2_ = (undefined2)(uVar5 >> 0x10);
          local_12._0_2_ = (undefined2)uVar5;
          param_1 = CONCAT22((undefined2)local_12,local_14);
          param_2 = CONCAT22((undefined2)local_e,local_12._2_2_);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
          local_12 = uVar5;
          local_e = uVar2;
          FUN_10009693((uint *)&local_14);
          FUN_10009693((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_10009693((uint *)&local_14);
          cVar4 = cStack_9;
          cStack_9 = '\0';
          psVar6 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar4 + '0';
          param_6 = psVar6;
          uVar5 = local_12;
          uVar2 = local_e;
        } while (param_4 != 0);
      }
      psVar7 = psVar6 + -1;
      psVar1 = psVar3 + 2;
      if ('4' < *(char *)((int)psVar6 + -1)) {
        for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
          if ((char)*psVar7 != '9') {
            if (psVar1 <= psVar7) goto LAB_10009ed8;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_10009ed8:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_10009eda:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_10009eda;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_10009f10;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_10009f10:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// Function: FUN_10009f19 @ 0x10009f19

DWORD * FUN_10009f19(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10005250();
  return pDVar1 + 2;
}



// Function: FUN_10009f22 @ 0x10009f22

uint __cdecl FUN_10009f22(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100114e0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1001163c);
    bVar1 = DAT_10011638 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1001163c);
      this = (void *)0x13;
      FUN_10006534(0x13);
    }
    param_1 = FUN_10009f91(this,param_1);
    if (bVar1) {
      FUN_10006595(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1001163c);
    }
  }
  return param_1;
}



// Function: FUN_10009f91 @ 0x10009f91

uint __thiscall FUN_10009f91(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100114e0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000e058 < 2) {
        uVar2 = (byte)PTR_DAT_1000e064[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_100067f9(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000e064[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100093c5(DAT_100114e0,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}



// Function: FUN_1000a0f0 @ 0x1000a0f0

int __cdecl FUN_1000a0f0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}



// Function: FUN_1000a130 @ 0x1000a130

byte * __cdecl FUN_1000a130(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}



// Function: FUN_1000a16a @ 0x1000a16a

void __cdecl FUN_1000a16a(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int *local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_1000a20d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000a20d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_10009614(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                                 (uint *)(local_8 + -2));
            if (iVar8 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_1000a2c1:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_100096c1((uint *)&local_28);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_10009693((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000a2c1;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar2 = CONCAT11(bStack_1d,uStack_1e), iVar3 = CONCAT22(local_20,uStack_22),
         iVar8 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_1d,uStack_1e);
            iVar3 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_24,uStack_26) + 1;
          sVar2 = CONCAT11(bStack_1d,uStack_1e);
          iVar3 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar8 >> 0x10);
      uStack_26 = (undefined2)iVar8;
      local_20 = (undefined2)((uint)iVar3 >> 0x10);
      uStack_22 = (undefined2)iVar3;
      bStack_1d = (byte)((ushort)sVar2 >> 8);
      uStack_1e = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_1000a36a;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000a36a:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// Function: FUN_1000a38a @ 0x1000a38a

void __cdecl FUN_1000a38a(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_10010700;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10010860;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        ppuVar4 = ppuVar3 + uVar2 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar2 * 3)) {
          local_10 = SUB42(*ppuVar4,0);
          local_e._0_2_ = (undefined2)((uint)*ppuVar4 >> 0x10);
          local_e._2_2_ = SUB42(ppuVar4[1],0);
          uStack_a = (undefined2)((uint)ppuVar4[1] >> 0x10);
          puStack_8 = ppuVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          ppuVar4 = (undefined **)&local_10;
        }
        FUN_1000a16a(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



// Function: FUN_1000a410 @ 0x1000a410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000a410(void *this,byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = _DAT_1001163c;
  if (DAT_100114e0 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000a45e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1000a45e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1001163c = _DAT_1001163c + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10011638;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1001163c = iVar2;
      FUN_10006534(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000a4bf;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_100068dd(this,uVar8);
      uVar7 = FUN_100068dd(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000a4bf:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1001163c = _DAT_1001163c + -1;
      UNLOCK();
    }
    else {
      FUN_10006595(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_1000a4e0 @ 0x1000a4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000a4e0(byte *param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_1001163c;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_100114e0 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_1000a53f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000a53f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1001163c = _DAT_1001163c + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10011638;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1001163c = iVar2;
        FUN_10006534(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_100068dd(param_3,uVar7);
        uVar5 = FUN_100068dd(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000a5b5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000a5b5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1001163c = _DAT_1001163c + -1;
        UNLOCK();
      }
      else {
        FUN_10006595(0x13);
      }
    }
  }
  return uVar6;
}




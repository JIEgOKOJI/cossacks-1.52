// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

undefined4 FUN_10001000(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: OnInit @ 0x10001012

void OnInit(void)

{
                    /* 0x1012  1  OnInit */
  RegisterVar(&DAT_1000b168,4);
  RegisterVar(&DAT_1000b344,4);
  RegisterVar(&DAT_1000b118,4);
  RegisterVar(&DAT_1000b320,4);
  RegisterVar(&DAT_1000b340,4);
  RegisterVar(&DAT_1000b2f8,4);
  SetPlayerName(1,s_ENEMY_1000a2a4);
  SetPlayerName(2,s_ENEMY_1000a2a4);
  SetPlayerName(3,s_ALLIES_1000a29c);
  SetPlayerName(4,s_ALLIES_1000a29c);
  SetPlayerName(5,s_ENEMY_1000a2a4);
  SetPlayerName(6,s_NEUTRALS_1000a290);
  RegisterZone(&DAT_1000b450,&DAT_1000a28c);
  RegisterZone(&DAT_1000b458,&DAT_1000a288);
  RegisterZone(&DAT_1000b460,&DAT_1000a284);
  RegisterZone(&DAT_1000b368,&DAT_1000a27c);
  RegisterZone(&DAT_1000b328,&DAT_1000a274);
  RegisterZone(&DAT_1000b370,&DAT_1000a26c);
  RegisterZone(&DAT_1000b330,&DAT_1000a264);
  RegisterZone(&DAT_1000b378,&DAT_1000a25c);
  RegisterZone(&DAT_1000b550,&DAT_1000a258);
  RegisterZone(&DAT_1000b520,&DAT_1000a254);
  RegisterZone(&DAT_1000b528,&DAT_1000a250);
  RegisterZone(&DAT_1000b380,&DAT_1000a248);
  RegisterZone(&DAT_1000b560,&DAT_1000a244);
  RegisterZone(&DAT_1000b530,&DAT_1000a240);
  RegisterZone(&DAT_1000b538,&DAT_1000a23c);
  RegisterZone(&DAT_1000b248,&DAT_1000a238);
  RegisterZone(&DAT_1000b258,&DAT_1000a234);
  RegisterZone(&DAT_1000b270,&DAT_1000a230);
  RegisterZone(&DAT_1000b288,&DAT_1000a22c);
  RegisterZone(&DAT_1000b448,&DAT_1000a228);
  RegisterZone(&DAT_1000b290,&DAT_1000a224);
  RegisterZone(&DAT_1000b298,&DAT_1000a220);
  RegisterZone(&DAT_1000b2a0,&DAT_1000a21c);
  RegisterZone(&DAT_1000b478,&DAT_1000a218);
  RegisterZone(&DAT_1000b4c8,&DAT_1000a214);
  RegisterZone(&DAT_1000b4d0,&DAT_1000a210);
  RegisterZone(&DAT_1000b4d8,&DAT_1000a20c);
  RegisterZone(&DAT_1000b480,&DAT_1000a208);
  RegisterZone(&DAT_1000b488,&DAT_1000a204);
  RegisterZone(&DAT_1000b490,&DAT_1000a200);
  RegisterZone(&DAT_1000b498,&DAT_1000a1fc);
  RegisterZone(&DAT_1000b4a0,&DAT_1000a1f8);
  RegisterZone(&DAT_1000b4a8,&DAT_1000a1f4);
  RegisterZone(&DAT_1000b4b0,&DAT_1000a1f0);
  RegisterZone(&DAT_1000b4b8,&DAT_1000a1ec);
  RegisterZone(&DAT_1000b4c0,&DAT_1000a1e8);
  RegisterZone(&DAT_1000b2a8,&DAT_1000a1e4);
  RegisterZone(&DAT_1000b3d0,&DAT_1000a1e0);
  RegisterZone(&DAT_1000b5b0,&DAT_1000a1d8);
  RegisterZone(&DAT_1000b2b0,&DAT_1000a1d4);
  RegisterZone(&DAT_1000b4e8,&DAT_1000a1d0);
  RegisterZone(&DAT_1000b3d8,&DAT_1000a1cc);
  RegisterZone(&DAT_1000b3e8,&DAT_1000a1c8);
  RegisterZone(&DAT_1000b3f0,&DAT_1000a1c4);
  RegisterZone(&DAT_1000b410,&DAT_1000a1c0);
  RegisterZone(&DAT_1000b418,&DAT_1000a1bc);
  RegisterZone(&DAT_1000b5d0,&DAT_1000a1b4);
  RegisterZone(&DAT_1000b388,&DAT_1000a1ac);
  RegisterZone(&DAT_1000b3c8,&DAT_1000a1a8);
  RegisterZone(&DAT_1000b3e0,&DAT_1000a1a4);
  RegisterZone(&DAT_1000b3f8,&DAT_1000a1a0);
  RegisterZone(&DAT_1000b5a8,&DAT_1000a198);
  RegisterZone(&DAT_1000b408,&DAT_1000a194);
  RegisterZone(&DAT_1000b608,&DAT_1000a18c);
  RegisterZone(&DAT_1000b420,&DAT_1000a188);
  RegisterZone(&DAT_1000b400,&DAT_1000a184);
  RegisterZone(&DAT_1000b428,&DAT_1000a180);
  RegisterZone(&DAT_1000b5d8,&DAT_1000a178);
  RegisterZone(&DAT_1000b430,&DAT_1000a174);
  RegisterZone(&DAT_1000b5e8,&DAT_1000a16c);
  RegisterZone(&DAT_1000b5f8,&DAT_1000a164);
  RegisterZone(&DAT_1000b610,&DAT_1000a15c);
  RegisterZone(&DAT_1000b620,&DAT_1000a154);
  RegisterZone(&DAT_1000b630,&DAT_1000a14c);
  RegisterZone(&DAT_1000b640,&DAT_1000a144);
  RegisterZone(&DAT_1000b218,s_Z31B2_1000a13c);
  RegisterZone(&DAT_1000b220,s_Z31B3_1000a134);
  RegisterZone(&DAT_1000b228,s_Z31B4_1000a12c);
  RegisterZone(&DAT_1000b438,&DAT_1000a128);
  RegisterZone(&DAT_1000b628,&DAT_1000a120);
  RegisterZone(&DAT_1000b638,&DAT_1000a118);
  RegisterZone(&DAT_1000b648,&DAT_1000a110);
  RegisterZone(&DAT_1000b440,&DAT_1000a10c);
  RegisterZone(&DAT_1000b650,&DAT_1000a104);
  RegisterZone(&DAT_1000b120,s_ZTownPlayer_1000a0f8);
  RegisterZone(&DAT_1000b518,&DAT_1000a0f4);
  RegisterZone(&DAT_1000b238,&DAT_1000a0ec);
  RegisterZone(&DAT_1000b470,&DAT_1000a0e8);
  RegisterZone(&DAT_1000b4f0,&DAT_1000a0e4);
  RegisterZone(&DAT_1000b4f8,&DAT_1000a0e0);
  RegisterUnits(&DAT_1000b348,s_GErase_1000a0d8);
  RegisterUnits(&DAT_1000b300,&DAT_1000a0d4);
  RegisterUnits(&DAT_1000b350,&DAT_1000a0d0);
  RegisterUnits(&DAT_1000b210,&DAT_1000a0cc);
  RegisterUnits(&DAT_1000b250,&DAT_1000a0c8);
  RegisterUnits(&DAT_1000b260,&DAT_1000a0c4);
  RegisterUnits(&DAT_1000b278,&DAT_1000a0c0);
  RegisterUnits(&DAT_1000b1b8,s_GBar1_1000a0b8);
  RegisterUnits(&DAT_1000b1c0,s_GBar2_1000a0b0);
  RegisterUnits(&DAT_1000b318,&DAT_1000a0a8);
  RegisterUnits(&DAT_1000b338,&DAT_1000a0a4);
  RegisterDynGroup(&DAT_1000b2b8);
  RegisterDynGroup(&DAT_1000b3a0);
  RegisterDynGroup(&DAT_1000b1a0);
  RegisterDynGroup(&DAT_1000b160);
  RegisterVar(&DAT_1000b160,8);
  RegisterDynGroup(&DAT_1000b2c0);
  RegisterVar(&DAT_1000b2c0,8);
  RegisterDynGroup(&DAT_1000b2d0);
  RegisterVar(&DAT_1000b2d0,8);
  RegisterDynGroup(&DAT_1000b2c8);
  RegisterVar(&DAT_1000b2c8,8);
  RegisterDynGroup(&DAT_1000b2d8);
  RegisterVar(&DAT_1000b2d8,8);
  RegisterDynGroup(&DAT_1000b108);
  RegisterVar(&DAT_1000b108,8);
  RegisterDynGroup(&DAT_1000b130);
  RegisterVar(&DAT_1000b130,8);
  RegisterDynGroup(&DAT_1000b1f0);
  RegisterVar(&DAT_1000b1f0,8);
  RegisterDynGroup(&DAT_1000b1f8);
  RegisterVar(&DAT_1000b1f8,8);
  RegisterDynGroup(&DAT_1000b200);
  RegisterVar(&DAT_1000b200,8);
  RegisterDynGroup(&DAT_1000b208);
  RegisterVar(&DAT_1000b208,8);
  RegisterDynGroup(&DAT_1000b110);
  RegisterVar(&DAT_1000b110,8);
  RegisterDynGroup(&DAT_1000b2f0);
  RegisterVar(&DAT_1000b2f0,8);
  RegisterDynGroup(&DAT_1000b590);
  RegisterVar(&DAT_1000b590,8);
  RegisterDynGroup(&DAT_1000b1e0);
  RegisterVar(&DAT_1000b1e0,8);
  RegisterDynGroup(&DAT_1000b128);
  RegisterVar(&DAT_1000b128,8);
  RegisterDynGroup(&DAT_1000b668);
  RegisterVar(&DAT_1000b668,8);
  RegisterDynGroup(&DAT_1000b310);
  RegisterVar(&DAT_1000b310,8);
  RegisterDynGroup(&DAT_1000b188);
  RegisterVar(&DAT_1000b188,8);
  RegisterDynGroup(&DAT_1000b670);
  RegisterVar(&DAT_1000b670,8);
  RegisterDynGroup(&DAT_1000b5f0);
  RegisterVar(&DAT_1000b5f0,8);
  RegisterDynGroup(&DAT_1000b170);
  RegisterVar(&DAT_1000b170,8);
  RegisterDynGroup(&DAT_1000b5e0);
  RegisterVar(&DAT_1000b5e0,8);
  RegisterDynGroup(&DAT_1000b180);
  RegisterVar(&DAT_1000b180,8);
  RegisterDynGroup(&DAT_1000b618);
  RegisterVar(&DAT_1000b618,8);
  RegisterDynGroup(&DAT_1000b178);
  RegisterVar(&DAT_1000b178,8);
  RegisterDynGroup(&DAT_1000b600);
  RegisterVar(&DAT_1000b600,8);
  RegisterDynGroup(&DAT_1000b190);
  RegisterVar(&DAT_1000b190,8);
  RegisterUnitType(&DAT_1000b1e8,s_GRUZ_Z_UN__1000a098);
  RegisterUnitType(&DAT_1000b390,s_KUPEC_UN__1000a08c);
  RegisterUnitType(&DAT_1000b5b8,s_Gusar_NEW_GE__1000a07c);
  RegisterUnitType(&DAT_1000b3c0,s_Grenader_GE__1000a06c);
  RegisterUnitType(&DAT_1000b100,s_Mushketer_PR_GE__1000a058);
  RegisterFormation(&DAT_1000b268,s__ALONE_1000a050);
  RegisterUnitType(&DAT_1000b280,s_TUrkey_pikiner_TU__1000a03c);
  RegisterUnitType(&DAT_1000b658,s_Tatarin_TU__1000a030);
  RegisterVar(&DAT_1000b548,8);
  RegisterVar(&DAT_1000b150,8);
  RegisterVar(&DAT_1000b158,8);
  RegisterVar(&DAT_1000b358,8);
  RegisterVar(&DAT_1000b1d8,8);
  RegisterVar(&DAT_1000b4e0,8);
  RegisterDynGroup(&DAT_1000b558);
  return;
}



// Function: ProcessScenary @ 0x10001721

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined4 uVar17;
  
                    /* 0x1721  2  ProcessScenary */
  cVar1 = Trigg(99);
  pcVar12 = SelectUnits_exref;
  pcVar13 = CreateObject0_exref;
  pcVar14 = SetTrigg_exref;
  if (cVar1 != '\0') {
    RunTimer(1,0);
    RunTimer(0xb,0);
    RunTimer(2,30000);
    RunTimer(3,3000);
    DAT_1000b168 = GetDiff(0);
    DAT_1000b344 = 10;
    DAT_1000b340 = DAT_1000b168 * -3 + 10;
    DAT_1000b320 = 1000;
    DAT_1000b2f8 = 0x14;
    TakeFood(&DAT_1000b350);
    RemoveGroup(&DAT_1000b210,&DAT_1000b2c0);
    SelectUnits(&DAT_1000b2c0,0);
    DoNotUseSelInAI(5);
    ClearSelection(5);
    RemoveGroup(&DAT_1000b250,&DAT_1000b108);
    RemoveGroup(&DAT_1000b260,&DAT_1000b108);
    RemoveGroup(&DAT_1000b278,&DAT_1000b130);
    InitialUpgrade(&DAT_1000a0d0,s_MAINGE_1000adc0);
    InitialUpgrade(&DAT_1000a0d0,s_AKA01GE_1000adb8);
    InitialUpgrade(&DAT_1000a0d0,s_AKA02GE_1000adb0);
    InitialUpgrade(&DAT_1000a0d0,s_AKA03GE_1000ada8);
    InitialUpgrade(&DAT_1000a0d0,s_AKA04GE_1000ada0);
    if (1 < DAT_1000b168) {
      InitialUpgrade(&DAT_1000a0d0,s_KUZ02GE_1000ad98);
      InitialUpgrade(&DAT_1000a0d0,s_KUZ03GE_1000ad90);
      InitialUpgrade(&DAT_1000a0d0,s_KUZ04GE_1000ad88);
      InitialUpgrade(&DAT_1000a0d0,s_KUZ05GE_1000ad80);
    }
    ChangeFriends(1,6);
    ChangeFriends(2,6);
    ChangeFriends(3,0x79);
    ChangeFriends(4,0x79);
    ChangeFriends(5,0xfe);
    ChangeFriends(6,0xff);
    SetResource(0,0,0);
    SetResource(0,2,0);
    if (DAT_1000b168 < 1) {
      SetResource(0,1,5000);
      iVar2 = GetResource(0,1);
      SetResource(0,3,iVar2 << 1);
      uVar3 = GetResource(0,1);
      SetResource(0,5,uVar3);
      uVar3 = GetResource(0,1);
      SetResource(0,4,uVar3);
      DAT_1000b320 = 2000;
    }
    else {
      SetResource(0,1,DAT_1000b168 * -200 + 0x5dc);
      iVar2 = GetResource(0,1);
      SetResource(0,3,iVar2 + DAT_1000b168 * -300 + 1000);
      SetResource(0,5,(6 - DAT_1000b168) * 200);
      iVar2 = GetResource(0,5);
      SetResource(0,4,iVar2 + DAT_1000b168 * -0x4b + 0xfa);
      iVar2 = GetResource(0,1);
      AddResource(0,1,iVar2 + (2 - DAT_1000b168) * 0x4b);
    }
    SetResource(1,0,(DAT_1000b168 + 1) * 10000);
    uVar3 = GetResource(1,0);
    SetResource(1,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,2,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,1,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,4,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,5,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,0,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,2,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,1,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,4,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,5,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,0,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,2,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,1,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,4,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,5,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,0,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,2,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,1,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,4,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,5,uVar3);
    iVar2 = AskMultilineQuestion(9,s__PAGE21_1000ad54,0,s_Qn1_0_Qn1_1_Qn1_4_Qn1_5_Qn1_6_Qn_1000ad5c)
    ;
    if (iVar2 == 0) {
      RegisterUnitType(&DAT_1000b1b0,s_Mortira_b_GE__1000ab2c);
      EnableUnit(1,&DAT_1000b1b0,0);
      EnableUnit(2,&DAT_1000b1b0,0);
      EnableUnit(3,&DAT_1000b1b0,0);
      EnableUnit(4,&DAT_1000b1b0,0);
      RegisterUnitType(&DAT_1000b1a8,s_Mortira_b_SV__1000ad24);
      EnableUnit(1,&DAT_1000b1a8,0);
      EnableUnit(2,&DAT_1000b1a8,0);
      EnableUnit(3,&DAT_1000b1a8,0);
      EnableUnit(4,&DAT_1000b1a8,0);
      RegisterUnitType(&DAT_1000b198,s_Mortira_b_AU__1000ad44);
      EnableUnit(1,&DAT_1000b198,0);
      EnableUnit(2,&DAT_1000b198,0);
      EnableUnit(3,&DAT_1000b198,0);
      EnableUnit(4,&DAT_1000b198,0);
      DAT_1000b398 = s_AUSTRIA_0_1000acf8;
      DAT_1000b230 = (uint *)&DAT_1000a4b4;
      DAT_1000b30c = s_GERMAN_0_1000ab0c;
      DAT_1000b308 = s_SVEDEN_0_1000ad08;
      RegisterUnitType(&DAT_1000b540,s_Gusar_evro_au__1000a4b8);
      RegisterUnitType(&DAT_1000b5c8,s_Dragun_18_au__1000a4a4);
      RegisterUnitType(&DAT_1000b1d0,s_Kirasir_au__1000a498);
      RegisterUpgrade(&DAT_1000b5a0,s_Gusar_evro_au_ATTACK_1000a480);
      RegisterUpgrade(&DAT_1000b580,s_Gusar_evro_au_SHIELD_1000a468);
      RegisterUpgrade(&DAT_1000b510,s_Dragun_18_au_ATTACK_1000a454);
      RegisterUpgrade(&DAT_1000b578,s_Dragun_18_au_SHIELD_1000a440);
      RegisterUpgrade(&DAT_1000b240,s_Kirasir_au_ATTACK_1000a42c);
      RegisterUpgrade(&DAT_1000b2e8,s_Kirasir_au_SHIELD_1000a418);
      EnableUnit(0,&DAT_1000b540,0);
      EnableUnit(0,&DAT_1000b5c8,0);
      EnableUnit(0,&DAT_1000b1d0,0);
      DisableUpgrade(0,&DAT_1000b5a0);
      DisableUpgrade(0,&DAT_1000b580);
      DisableUpgrade(0,&DAT_1000b510);
      DisableUpgrade(0,&DAT_1000b578);
      DisableUpgrade(0,&DAT_1000b240);
      DisableUpgrade(0,&DAT_1000b2e8);
      RegisterUnitType(&DAT_1000b3a8,s_Kuznica_au__1000a40c);
      RegisterUnitType(&DAT_1000b660,s_Konushnia_Swesair_au__1000a3f4);
      RegisterUnitType(&DAT_1000b568,s_Konushnia_Swesair_au__1000a3f4);
      RegisterUnitType(&DAT_1000b360,s_Cercov_Poland_au__1000a3e0);
      RegisterUnitType(&DAT_1000b2e0,s_Dip_korpus_au__1000a3d0);
      RegisterUnitType(&DAT_1000b598,s_Dom_Austria_au__1000a3c0);
      RegisterUnitType(&DAT_1000b3b8,s_Rinok_au__1000a3b4);
      RegisterUnitType(&DAT_1000b358,s_Kavalerist_avstrii_au__1000a39c);
      RegisterUnitType(&DAT_1000b1d8,s_Dragun_au__1000a390);
      RegisterUnitType(&DAT_1000b4e0,s_Konni_Ricar_au__1000a380);
      RegisterUnitType(&DAT_1000b548,s_Center_Austria_au__1000aba0);
      RegisterUnitType(&DAT_1000b3b0,s_Kreposnoi_pruss_au__1000ab8c);
      RegisterUnitType(&DAT_1000b1c8,s_Pikiner_evro_au__1000ab78);
      RegisterUnitType(&DAT_1000b508,s_Sveshenik_evro_au__1000a36c);
      RegisterUnitType(&DAT_1000b150,s_Europ_GE__1000a9bc);
      RegisterUnitType(&DAT_1000b138,s_Kreposnoi_pruss_GE__1000a9a8);
      RegisterUnitType(&DAT_1000b588,s_Pikiner_evro_GE__1000a994);
      RegisterUnitType(&DAT_1000b158,s_Center_Swesair_SV__1000abf0);
      RegisterUnitType(&DAT_1000b140,s_Krestian_Sved_SV__1000abdc);
      pcVar15 = s_Pikiner_evro_SV__1000abc8;
LAB_10002bb0:
      RegisterUnitType(&DAT_1000b570,pcVar15);
      pcVar12 = SelectUnits_exref;
      pcVar13 = CreateObject0_exref;
    }
    else {
      if (iVar2 == 1) {
        RegisterUnitType(&DAT_1000b1b0,s_Mortira_b_sp__1000a6bc);
        EnableUnit(1,&DAT_1000b1b0,0);
        EnableUnit(2,&DAT_1000b1b0,0);
        EnableUnit(3,&DAT_1000b1b0,0);
        EnableUnit(4,&DAT_1000b1b0,0);
        RegisterUnitType(&DAT_1000b1a8,s_Mortira_b_AU__1000ad44);
        EnableUnit(1,&DAT_1000b1a8,0);
        EnableUnit(2,&DAT_1000b1a8,0);
        EnableUnit(3,&DAT_1000b1a8,0);
        EnableUnit(4,&DAT_1000b1a8,0);
        RegisterUnitType(&DAT_1000b198,s_Mortira_b_fr__1000a6ac);
        EnableUnit(1,&DAT_1000b198,0);
        EnableUnit(2,&DAT_1000b198,0);
        EnableUnit(3,&DAT_1000b198,0);
        EnableUnit(4,&DAT_1000b198,0);
        DAT_1000b398 = s_FRANCE_0_1000a690;
        DAT_1000b230 = (uint *)&DAT_1000a68c;
        DAT_1000b30c = s_SPAIN_0_1000a684;
        DAT_1000b308 = s_AUSTRIA_0_1000acf8;
        RegisterUnitType(&DAT_1000b540,s_Gusar_evro_fr__1000a69c);
        RegisterUnitType(&DAT_1000b5c0,s_Dragun_fr__1000a678);
        RegisterUnitType(&DAT_1000b5c8,s_Dragun_France_fr__1000a664);
        RegisterUnitType(&DAT_1000b1d0,s_Kirasir_fr__1000a658);
        RegisterUpgrade(&DAT_1000b468,s_Dragun_fr_ATTACK_1000a644);
        RegisterUpgrade(&DAT_1000b500,s_Dragun_fr_SHIELD_1000a630);
        RegisterUpgrade(&DAT_1000b510,s_Dragun_France_fr_ATTACK_1000a618);
        RegisterUpgrade(&DAT_1000b578,s_Dragun_France_fr_SHIELD_1000a600);
        RegisterUpgrade(&DAT_1000b240,s_Kirasir_fr_ATTACK_1000a5ec);
        RegisterUpgrade(&DAT_1000b2e8,s_Kirasir_fr_SHIELD_1000a5d8);
        EnableUnit(0,&DAT_1000b5c0,0);
        EnableUnit(0,&DAT_1000b5c8,0);
        EnableUnit(0,&DAT_1000b1d0,0);
        DisableUpgrade(0,&DAT_1000b468);
        DisableUpgrade(0,&DAT_1000b500);
        DisableUpgrade(0,&DAT_1000b510);
        DisableUpgrade(0,&DAT_1000b578);
        DisableUpgrade(0,&DAT_1000b240);
        DisableUpgrade(0,&DAT_1000b2e8);
        RegisterUnitType(&DAT_1000b3a8,s_Kuznica_FR_fr__1000a5c8);
        RegisterUnitType(&DAT_1000b660,s_Konushnia_FR_fr__1000a5b4);
        RegisterUnitType(&DAT_1000b568,s_Konushnia_FR_fr__1000a5b4);
        RegisterUnitType(&DAT_1000b360,s_NotrDam_fr__1000a5a8);
        RegisterUnitType(&DAT_1000b2e0,s_Dip_korpus_FR_fr__1000a594);
        RegisterUnitType(&DAT_1000b598,s_Dom_France_fr__1000a584);
        RegisterUnitType(&DAT_1000b3b8,s_Rinok_fr__1000a578);
        RegisterUnitType(&DAT_1000b358,s_Gusar_evro_fr__1000a69c);
        RegisterUnitType(&DAT_1000b1d8,s_Korolrv_Mus_fr__1000a568);
        RegisterUnitType(&DAT_1000b4e0,s_Konni_Ricar_fr__1000a558);
        RegisterUnitType(&DAT_1000b548,s_Center_France_fr__1000a544);
        RegisterUnitType(&DAT_1000b3b0,s_Krestian_Sved_fr__1000a530);
        RegisterUnitType(&DAT_1000b1c8,s_Pikiner_evro_fr__1000a51c);
        RegisterUnitType(&DAT_1000b508,s_Sveshenik_evro_fr__1000a508);
        RegisterUnitType(&DAT_1000b150,s_Center_Spain_sp__1000a4f4);
        RegisterUnitType(&DAT_1000b138,s_Kreposnoi_portugal_sp__1000a4dc);
        RegisterUnitType(&DAT_1000b588,s_Pikiner_evro_sp__1000a4c8);
        RegisterUnitType(&DAT_1000b158,s_Center_Austria_au__1000aba0);
        RegisterUnitType(&DAT_1000b140,s_Kreposnoi_pruss_au__1000ab8c);
        pcVar15 = s_Pikiner_evro_au__1000ab78;
        goto LAB_10002bb0;
      }
      if (iVar2 == 2) {
        RegisterUnitType(&DAT_1000b1b0,s_Mortira_b_AU__1000ad44);
        EnableUnit(1,&DAT_1000b1b0,0);
        EnableUnit(2,&DAT_1000b1b0,0);
        EnableUnit(3,&DAT_1000b1b0,0);
        EnableUnit(4,&DAT_1000b1b0,0);
        RegisterUnitType(&DAT_1000b1a8,s_Mortira_b_RU__1000a974);
        EnableUnit(1,&DAT_1000b1a8,0);
        EnableUnit(2,&DAT_1000b1a8,0);
        EnableUnit(3,&DAT_1000b1a8,0);
        EnableUnit(4,&DAT_1000b1a8,0);
        RegisterUnitType(&DAT_1000b198,s_Mortira_b_GE__1000ab2c);
        EnableUnit(1,&DAT_1000b198,0);
        EnableUnit(2,&DAT_1000b198,0);
        EnableUnit(3,&DAT_1000b198,0);
        EnableUnit(4,&DAT_1000b198,0);
        pcVar14 = RegisterUnitType_exref;
        DAT_1000b398 = s_GERMAN_0_1000ab0c;
        DAT_1000b230 = (uint *)&DAT_1000a7bc;
        DAT_1000b30c = s_AUSTRIA_0_1000acf8;
        DAT_1000b308 = s_RUSSIA_0_1000a958;
        RegisterUnitType(&DAT_1000b5c8,s_Dragun_18_GE__1000a7c0);
        RegisterUnitType(&DAT_1000b1d0,s_Kirasir_GE__1000a7b0);
        RegisterUpgrade(&DAT_1000b510,s_Dragun_18_GE_ATTACK_1000a79c);
        RegisterUpgrade(&DAT_1000b578,s_Dragun_18_GE_SHIELD_1000a788);
        RegisterUpgrade(&DAT_1000b240,s_Kirasir_GE_ATTACK_1000a774);
        RegisterUpgrade(&DAT_1000b2e8,s_Kirasir_GE_SHIELD_1000a760);
        EnableUnit(0,&DAT_1000b5c8,0);
        EnableUnit(0,&DAT_1000b1d0,0);
        DisableUpgrade(0,&DAT_1000b510);
        DisableUpgrade(0,&DAT_1000b578);
        DisableUpgrade(0,&DAT_1000b240);
        DisableUpgrade(0,&DAT_1000b2e8);
        RegisterUnitType(&DAT_1000b3a8,s_Kuznica_GE__1000a754);
        RegisterUnitType(&DAT_1000b660,s_Konushnia_Swesair_GE__1000a73c);
        RegisterUnitType(&DAT_1000b568,s_Konushnia_Swesair_GE__1000a73c);
        RegisterUnitType(&DAT_1000b360,s_Cercov_Poland_GE__1000a728);
        RegisterUnitType(&DAT_1000b2e0,s_Dip_korpus_GE__1000a718);
        RegisterUnitType(&DAT_1000b598,s_Dom_Prussia_GE__1000a708);
        RegisterUnitType(&DAT_1000b3b8,s_Rinok_GE__1000a6fc);
        RegisterUnitType(&DAT_1000b358,s_Gusar_NEW_GE__1000a07c);
        RegisterUnitType(&DAT_1000b1d8,s_Dragun_GE__1000a6f0);
        RegisterUnitType(&DAT_1000b4e0,s_Konni_Ricar_GE__1000a6e0);
        RegisterUnitType(&DAT_1000b508,s_Sveshenik_evro_GE__1000a6cc);
        RegisterUnitType(&DAT_1000b548,s_Europ_GE__1000a9bc);
        RegisterUnitType(&DAT_1000b3b0,s_Kreposnoi_pruss_GE__1000a9a8);
        RegisterUnitType(&DAT_1000b1c8,s_Pikiner_evro_GE__1000a994);
        RegisterUnitType(&DAT_1000b150,s_Center_Austria_au__1000aba0);
        RegisterUnitType(&DAT_1000b138,s_Kreposnoi_pruss_au__1000ab8c);
        RegisterUnitType(&DAT_1000b588,s_Pikiner_evro_au__1000ab78);
        RegisterUnitType(&DAT_1000b158,s_Russki_Center_RU__1000a83c);
        RegisterUnitType(&DAT_1000b140,s_Kreposnoi_RU__1000a82c);
        pcVar15 = s_Pik_rus_RU__1000a820;
LAB_10002652:
        (*pcVar14)(&DAT_1000b570,pcVar15);
        pcVar13 = CreateObject0_exref;
      }
      else {
        if (iVar2 == 3) {
          RegisterUnitType(&DAT_1000b1b0,s_Mortira_b_PL__1000a984);
          EnableUnit(1,&DAT_1000b1b0,0);
          EnableUnit(2,&DAT_1000b1b0,0);
          EnableUnit(3,&DAT_1000b1b0,0);
          EnableUnit(4,&DAT_1000b1b0,0);
          RegisterUnitType(&DAT_1000b1a8,s_Mortira_b_AU__1000ad44);
          EnableUnit(1,&DAT_1000b1a8,0);
          EnableUnit(2,&DAT_1000b1a8,0);
          EnableUnit(3,&DAT_1000b1a8,0);
          EnableUnit(4,&DAT_1000b1a8,0);
          RegisterUnitType(&DAT_1000b198,s_Mortira_b_RU__1000a974);
          EnableUnit(1,&DAT_1000b198,0);
          EnableUnit(2,&DAT_1000b198,0);
          EnableUnit(3,&DAT_1000b198,0);
          EnableUnit(4,&DAT_1000b198,0);
          pcVar14 = RegisterUnitType_exref;
          DAT_1000b398 = s_RUSSIA_0_1000a958;
          DAT_1000b230 = (uint *)&DAT_1000a954;
          DAT_1000b30c = s_POLAND_0_1000a948;
          DAT_1000b308 = s_AUSTRIA_0_1000acf8;
          RegisterUnitType(&DAT_1000b5c8,s_Dragun_18_RU__1000a964);
          RegisterUnitType(&DAT_1000b1d0,s_Kirasir_RU__1000a93c);
          RegisterUpgrade(&DAT_1000b510,s_Dragun_18_RU_ATTACK_1000a928);
          RegisterUpgrade(&DAT_1000b578,s_Dragun_18_RU_SHIELD_1000a914);
          RegisterUpgrade(&DAT_1000b240,s_Kirasir_RU_ATTACK_1000a900);
          RegisterUpgrade(&DAT_1000b2e8,s_Kirasir_RU_SHIELD_1000a8ec);
          EnableUnit(0,&DAT_1000b5c8,0);
          EnableUnit(0,&DAT_1000b1d0,0);
          DisableUpgrade(0,&DAT_1000b510);
          DisableUpgrade(0,&DAT_1000b578);
          DisableUpgrade(0,&DAT_1000b240);
          DisableUpgrade(0,&DAT_1000b2e8);
          RegisterUnitType(&DAT_1000b3a8,s_Kuznica_RU__1000a8e0);
          RegisterUnitType(&DAT_1000b660,s_konushnia_RU__1000a8d0);
          RegisterUnitType(&DAT_1000b568,s_konushnia_RU__1000a8d0);
          RegisterUnitType(&DAT_1000b360,s_Cerkov_RU_RU__1000a8c0);
          RegisterUnitType(&DAT_1000b2e0,s_Dip_korpus_RU_RU__1000a8ac);
          RegisterUnitType(&DAT_1000b598,s_ruskaia_izba_RU__1000a898);
          RegisterUnitType(&DAT_1000b3b8,s_Rinok_RU__1000a88c);
          RegisterUnitType(&DAT_1000b358,s_Gusar_evro_RU__1000a87c);
          RegisterUnitType(&DAT_1000b1d8,s_Tiagoli_kozak_RU__1000a868);
          RegisterUnitType(&DAT_1000b4e0,s_Tiagoli_koval_rus_RU__1000a850);
          RegisterUnitType(&DAT_1000b548,s_Russki_Center_RU__1000a83c);
          RegisterUnitType(&DAT_1000b3b0,s_Kreposnoi_RU__1000a82c);
          RegisterUnitType(&DAT_1000b1c8,s_Pik_rus_RU__1000a820);
          RegisterUnitType(&DAT_1000b508,s_Sveshenik_ukr_RU__1000a80c);
          RegisterUnitType(&DAT_1000b150,s_Center_Poland_PL__1000a7f8);
          RegisterUnitType(&DAT_1000b138,s_Kreposnoi_evro_PL__1000a7e4);
          RegisterUnitType(&DAT_1000b588,s_Pikiner_polan_PL__1000a7d0);
          RegisterUnitType(&DAT_1000b158,s_Center_Austria_au__1000aba0);
          RegisterUnitType(&DAT_1000b140,s_Kreposnoi_pruss_au__1000ab8c);
          pcVar15 = s_Pikiner_evro_au__1000ab78;
          goto LAB_10002652;
        }
        if (iVar2 == 4) {
          RegisterUnitType(&DAT_1000b1b0,s_Mortira_b_AU__1000ad44);
          EnableUnit(1,&DAT_1000b1b0,0);
          EnableUnit(2,&DAT_1000b1b0,0);
          EnableUnit(3,&DAT_1000b1b0,0);
          EnableUnit(4,&DAT_1000b1b0,0);
          RegisterUnitType(&DAT_1000b1a8,s_Mortira_b_GE__1000ab2c);
          EnableUnit(1,&DAT_1000b1a8,0);
          EnableUnit(2,&DAT_1000b1a8,0);
          EnableUnit(3,&DAT_1000b1a8,0);
          EnableUnit(4,&DAT_1000b1a8,0);
          RegisterUnitType(&DAT_1000b198,s_Mortira_b_SA__1000ad34);
          EnableUnit(1,&DAT_1000b198,0);
          EnableUnit(2,&DAT_1000b198,0);
          EnableUnit(3,&DAT_1000b198,0);
          EnableUnit(4,&DAT_1000b198,0);
          DAT_1000b398 = s_SAKSINIA_0_1000acec;
          DAT_1000b230 = (uint *)&DAT_1000ab18;
          DAT_1000b30c = s_AUSTRIA_0_1000acf8;
          DAT_1000b308 = s_GERMAN_0_1000ab0c;
          RegisterUnitType(&DAT_1000b540,s_Gusar_evro_SA__1000ab1c);
          RegisterUnitType(&DAT_1000b5c8,s_Dragun_18_SA__1000aafc);
          RegisterUnitType(&DAT_1000b1d0,s_Kirasir_SA__1000aaf0);
          RegisterUpgrade(&DAT_1000b5a0,s_Gusar_evro_SA_ATTACK_1000aad8);
          RegisterUpgrade(&DAT_1000b580,s_Gusar_evro_SA_SHIELD_1000aac0);
          RegisterUpgrade(&DAT_1000b510,s_Dragun_18_SA_ATTACK_1000aaac);
          RegisterUpgrade(&DAT_1000b578,s_Dragun_18_SA_SHIELD_1000aa98);
          RegisterUpgrade(&DAT_1000b240,s_Kirasir_SA_ATTACK_1000aa84);
          RegisterUpgrade(&DAT_1000b2e8,s_Kirasir_SA_SHIELD_1000aa70);
          EnableUnit(0,&DAT_1000b540,0);
          EnableUnit(0,&DAT_1000b5c8,0);
          EnableUnit(0,&DAT_1000b1d0,0);
          DisableUpgrade(0,&DAT_1000b5a0);
          DisableUpgrade(0,&DAT_1000b580);
          DisableUpgrade(0,&DAT_1000b510);
          DisableUpgrade(0,&DAT_1000b578);
          DisableUpgrade(0,&DAT_1000b240);
          DisableUpgrade(0,&DAT_1000b2e8);
          RegisterUnitType(&DAT_1000b3a8,s_Kuznica_SA__1000aa64);
          RegisterUnitType(&DAT_1000b660,s_Konushnia_Swesair_SA__1000aa4c);
          RegisterUnitType(&DAT_1000b568,s_Konushnia_Swesair_SA__1000aa4c);
          RegisterUnitType(&DAT_1000b360,s_Cercov_Poland_SA__1000aa38);
          RegisterUnitType(&DAT_1000b2e0,s_Dip_korpus_SA__1000aa28);
          RegisterUnitType(&DAT_1000b598,s_Dom_Saksona_SA__1000aa18);
          RegisterUnitType(&DAT_1000b3b8,s_Rinok_SA__1000aa0c);
          RegisterUnitType(&DAT_1000b358,s_Kiracir_Sacson_SA__1000a9f8);
          RegisterUnitType(&DAT_1000b1d8,s_Dragun_SA__1000a9ec);
          RegisterUnitType(&DAT_1000b4e0,s_Konni_Ricar_SA__1000a9dc);
          RegisterUnitType(&DAT_1000b548,s_Center_Sacson_SA__1000ab64);
          RegisterUnitType(&DAT_1000b3b0,s_Kreposnoi_pruss_SA__1000ab50);
          RegisterUnitType(&DAT_1000b1c8,s_Pikiner_evro_SA__1000ab3c);
          RegisterUnitType(&DAT_1000b508,s_Sveshenik_evro_SA__1000a9c8);
          RegisterUnitType(&DAT_1000b150,s_Center_Austria_au__1000aba0);
          RegisterUnitType(&DAT_1000b138,s_Kreposnoi_pruss_au__1000ab8c);
          RegisterUnitType(&DAT_1000b588,s_Pikiner_evro_au__1000ab78);
          RegisterUnitType(&DAT_1000b158,s_Europ_GE__1000a9bc);
          RegisterUnitType(&DAT_1000b140,s_Kreposnoi_pruss_GE__1000a9a8);
          pcVar15 = s_Pikiner_evro_GE__1000a994;
          goto LAB_10002bb0;
        }
        if (iVar2 == 5) {
          RegisterUnitType(&DAT_1000b1b0,s_Mortira_b_AU__1000ad44);
          EnableUnit(1,&DAT_1000b1b0,0);
          EnableUnit(2,&DAT_1000b1b0,0);
          EnableUnit(3,&DAT_1000b1b0,0);
          EnableUnit(4,&DAT_1000b1b0,0);
          RegisterUnitType(&DAT_1000b1a8,s_Mortira_b_SA__1000ad34);
          EnableUnit(1,&DAT_1000b1a8,0);
          EnableUnit(2,&DAT_1000b1a8,0);
          EnableUnit(3,&DAT_1000b1a8,0);
          EnableUnit(4,&DAT_1000b1a8,0);
          RegisterUnitType(&DAT_1000b198,s_Mortira_b_SV__1000ad24);
          EnableUnit(1,&DAT_1000b198,0);
          EnableUnit(2,&DAT_1000b198,0);
          EnableUnit(3,&DAT_1000b198,0);
          EnableUnit(4,&DAT_1000b198,0);
          pcVar14 = RegisterUnitType_exref;
          DAT_1000b398 = s_SVEDEN_0_1000ad08;
          DAT_1000b230 = (uint *)&DAT_1000ad04;
          DAT_1000b30c = s_AUSTRIA_0_1000acf8;
          DAT_1000b308 = s_SAKSINIA_0_1000acec;
          RegisterUnitType(&DAT_1000b5c8,s_Dragun_18_SV__1000ad14);
          RegisterUnitType(&DAT_1000b1d0,s_Kirasir_SV__1000ace0);
          RegisterUpgrade(&DAT_1000b510,s_Dragun_18_SV_ATTACK_1000accc);
          RegisterUpgrade(&DAT_1000b578,s_Dragun_18_SV_SHIELD_1000acb8);
          RegisterUpgrade(&DAT_1000b240,s_Kirasir_SV_ATTACK_1000aca4);
          RegisterUpgrade(&DAT_1000b2e8,s_Kirasir_SV_SHIELD_1000ac90);
          EnableUnit(0,&DAT_1000b5c8,0);
          EnableUnit(0,&DAT_1000b1d0,0);
          DisableUpgrade(0,&DAT_1000b510);
          DisableUpgrade(0,&DAT_1000b578);
          DisableUpgrade(0,&DAT_1000b240);
          DisableUpgrade(0,&DAT_1000b2e8);
          RegisterUnitType(&DAT_1000b3a8,s_Kuznica_SV__1000ac84);
          RegisterUnitType(&DAT_1000b660,s_Konushnia_Swesair_SV__1000ac6c);
          RegisterUnitType(&DAT_1000b568,s_Konushnia_Swesair_SV__1000ac6c);
          RegisterUnitType(&DAT_1000b360,s_Kostel_SV__1000ac60);
          RegisterUnitType(&DAT_1000b2e0,s_Dip_korpus_SV__1000ac50);
          RegisterUnitType(&DAT_1000b598,s_Dom_Swisair_SV__1000ac40);
          RegisterUnitType(&DAT_1000b3b8,s_Rinok_SV__1000ac34);
          RegisterUnitType(&DAT_1000b358,s_Gusar_evro_SV__1000ac24);
          RegisterUnitType(&DAT_1000b1d8,s_Dragun_SV__1000ac18);
          RegisterUnitType(&DAT_1000b4e0,s_Reitar_Shwec_SV__1000ac04);
          RegisterUnitType(&DAT_1000b548,s_Center_Swesair_SV__1000abf0);
          RegisterUnitType(&DAT_1000b3b0,s_Krestian_Sved_SV__1000abdc);
          RegisterUnitType(&DAT_1000b1c8,s_Pikiner_evro_SV__1000abc8);
          RegisterUnitType(&DAT_1000b508,s_Sveshenik_evro_SV__1000abb4);
          RegisterUnitType(&DAT_1000b150,s_Center_Austria_au__1000aba0);
          RegisterUnitType(&DAT_1000b138,s_Kreposnoi_pruss_au__1000ab8c);
          RegisterUnitType(&DAT_1000b588,s_Pikiner_evro_au__1000ab78);
          RegisterUnitType(&DAT_1000b158,s_Center_Sacson_SA__1000ab64);
          RegisterUnitType(&DAT_1000b140,s_Kreposnoi_pruss_SA__1000ab50);
          pcVar15 = s_Pikiner_evro_SA__1000ab3c;
          goto LAB_10002652;
        }
      }
    }
    puVar4 = FUN_10005a00((uint *)&DAT_1000a364,DAT_1000b230);
    InitialUpgrade(s_GErase_1000a0d8,puVar4);
    puVar4 = FUN_10005a00((uint *)s_KUZ03_1000a35c,DAT_1000b230);
    InitialUpgrade(s_GErase_1000a0d8,puVar4);
    puVar4 = FUN_10005a00((uint *)s_KUZ04_1000a354,DAT_1000b230);
    InitialUpgrade(s_GErase_1000a0d8,puVar4);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b548,4,&DAT_1000b378,0);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b548,3,&DAT_1000b380,0);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b150,1,&DAT_1000b368,0);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b158,2,&DAT_1000b370,0);
    DAT_1000b148 = 0;
    if (0 < DAT_1000b2f8 + DAT_1000b168 * 10) {
      do {
        (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b1c8,4,&DAT_1000b2a8,0);
        (*pcVar12)(&DAT_1000b1f0,0);
        SelSendAndKill(4,&DAT_1000b378,0,0);
        (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b1c8,3,&DAT_1000b420,0);
        (*pcVar12)(&DAT_1000b1f0,0);
        SelSendAndKill(3,&DAT_1000b380,0,0);
        (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b588,1,&DAT_1000b328,0);
        (*pcVar12)(&DAT_1000b1f0,0);
        SelSendAndKill(1,&DAT_1000b368,0,0);
        (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b570,2,&DAT_1000b330,0);
        (*pcVar12)(&DAT_1000b1f0,0);
        SelSendAndKill(2,&DAT_1000b370,0,0);
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b2f8 + DAT_1000b168 * 10);
    }
    DAT_1000b148 = 0;
    if (0 < DAT_1000b2f8) {
      do {
        (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3b0,4,&DAT_1000b2a8,0);
        (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3b0,3,&DAT_1000b420,0);
        (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b138,1,&DAT_1000b328,0);
        (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b140,2,&DAT_1000b330,0);
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b2f8);
    }
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3a8,6,&DAT_1000b3c8,0);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3a8,6,&DAT_1000b248,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3a8,6,&DAT_1000b3d8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b660,6,&DAT_1000b258,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b660,6,&DAT_1000b3e8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b568,6,&DAT_1000b270,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b568,6,&DAT_1000b3f0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b360,6,&DAT_1000b288,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b3a0);
    DAT_1000b148 = 0;
    if (0 < DAT_1000b340) {
      do {
        ProduceUnitFast(&DAT_1000b3a0,&DAT_1000b508,&DAT_1000b110,0);
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b340);
    }
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b360,6,&DAT_1000b3f8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b1a0);
    DAT_1000b148 = 0;
    if (0 < DAT_1000b340) {
      do {
        ProduceUnitFast(&DAT_1000b1a0,&DAT_1000b508,&DAT_1000b2f0,0);
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b340);
    }
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b2e0,6,&DAT_1000b408,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3b8,6,&DAT_1000b298,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3b8,6,&DAT_1000b410,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3b8,6,&DAT_1000b3e0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b548,6,&DAT_1000b388,0);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b2a0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4c8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4d0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4d8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b480,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b488,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b490,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b498,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4a0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4a8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4b0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4b8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4c0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b478,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b418,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b5d0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    DAT_1000b148 = 0;
    do {
      (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b4e0,0,&DAT_1000b450,0);
      RemoveGroup(&DAT_1000b1f0,&DAT_1000b1f8);
      DAT_1000b148 = DAT_1000b148 + 1;
    } while (DAT_1000b148 < 5);
    (*pcVar12)(&DAT_1000b1f8,0);
    SelSendTo(0,&DAT_1000b450,0x53,0);
    DAT_1000b148 = 0;
    do {
      (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b1d8,0,&DAT_1000b458,0);
      RemoveGroup(&DAT_1000b1f0,&DAT_1000b200);
      DAT_1000b148 = DAT_1000b148 + 1;
    } while (DAT_1000b148 < 5);
    (*pcVar12)(&DAT_1000b200,0);
    SelSendTo(0,&DAT_1000b458,0x40,0);
    DAT_1000b148 = 0;
    do {
      (*pcVar13)(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b358,0,&DAT_1000b460,0);
      RemoveGroup(&DAT_1000b1f0,&DAT_1000b208);
      DAT_1000b148 = DAT_1000b148 + 1;
    } while (DAT_1000b148 < 5);
    (*pcVar12)(&DAT_1000b208,0);
    SelSendTo(0,&DAT_1000b460,0x2d,0);
    SetResource(6,4,0);
    SetResource(6,1,0);
    StartAI(1,DAT_1000b30c,1,0,1,DAT_1000b168);
    StartAI(2,DAT_1000b308,1,0,1,DAT_1000b168);
    StartAI(3,DAT_1000b398,1,0,1,DAT_1000b168);
    StartAI(4,DAT_1000b398,1,0,1,DAT_1000b168);
    SetLightSpot(&DAT_1000b378,1,3);
    SetLightSpot(&DAT_1000b380,1,4);
    (*pcVar12)(&DAT_1000b348,0);
    DoNotUseSelInAI(0);
    SelErase(0);
    (*pcVar12)(&DAT_1000b300,0);
    DoNotUseSelInAI(0);
    SelErase(0);
    ShowPage(s__PAGE0_1000a34c);
    pcVar14 = SetTrigg_exref;
    SetTrigg(99,0);
  }
  cVar1 = TimerDone(2);
  if (cVar1 != '\0') {
    DAT_1000b344 = DAT_1000b344 + DAT_1000b168;
    if (DAT_1000b168 < 1) {
      DAT_1000b320 = DAT_1000b320 + 1000;
    }
    else {
      DAT_1000b320 = DAT_1000b344 * 100;
    }
    (*pcVar14)(0x1a,1);
    iVar2 = GetResource(5,3);
    if (iVar2 < 10000) {
      SetResource(5,3,1000000);
    }
    iVar2 = GetResource(5,1);
    if (iVar2 < 10000) {
      SetResource(5,1,1000000);
    }
    iVar2 = GetResource(6,3);
    if (iVar2 < 10000) {
      SetResource(6,3,1000000);
    }
    iVar2 = GetResource(6,1);
    if (iVar2 < 10000) {
      SetResource(6,1,1000000);
    }
    RunTimer(2,30000);
  }
  cVar1 = Trigg(0x14);
  if (cVar1 == '\0') {
    cVar1 = Trigg(0x15);
    if (cVar1 != '\0') {
      DAT_1000b118 = (DAT_1000b344 / 2) * 5;
      (*pcVar14)(0x15,0);
      uVar3 = 0x16;
      goto LAB_1000351a;
    }
    cVar1 = Trigg(0x16);
    if (cVar1 != '\0') {
      DAT_1000b118 = (DAT_1000b344 / 3) * 10;
      (*pcVar14)(0x16,0);
      uVar3 = 0x17;
      goto LAB_1000351a;
    }
    cVar1 = Trigg(0x17);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0x18);
      if (cVar1 != '\0') {
        uVar17 = 1;
        uVar3 = 0x14;
        DAT_1000b118 = (DAT_1000b344 / 3) * 0x14;
        goto LAB_100035c8;
      }
    }
    else {
      uVar17 = 0;
      uVar3 = 0x17;
      DAT_1000b118 = (DAT_1000b344 / 2) * 10;
LAB_100035c8:
      (*pcVar14)(uVar3,uVar17);
    }
  }
  else {
    DAT_1000b118 = DAT_1000b344 % 10 + 5;
    (*pcVar14)(0x14,0);
    uVar3 = 0x15;
LAB_1000351a:
    (*pcVar14)(uVar3,1);
  }
  iVar2 = GetUnitsAmount1(&DAT_1000b288,&DAT_1000b110);
  iVar5 = GetTotalAmount0(&DAT_1000b110);
  if (iVar2 < iVar5) {
    (*pcVar12)(&DAT_1000b110,0);
    SelSendTo(6,&DAT_1000b448,0x30,0);
  }
  iVar2 = GetUnitsAmount1(&DAT_1000b3f8,&DAT_1000b2f0);
  iVar5 = GetTotalAmount0(&DAT_1000b2f0);
  if (iVar2 < iVar5) {
    (*pcVar12)(&DAT_1000b2f0,0);
    SelSendTo(6,&DAT_1000b5a8,0x30,0);
  }
  cVar1 = TimerDone(1);
  pcVar14 = SetTrigg_exref;
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), pcVar14 = SetTrigg_exref, cVar1 != '\0')) &&
     (cVar1 = Trigg(5), pcVar14 = SetTrigg_exref, cVar1 != '\0')) {
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b390,6,&DAT_1000b2a8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b1e0);
    (*pcVar12)(&DAT_1000b1e0,0);
    SelSendTo(6,&DAT_1000b520,0x40,0);
    DAT_1000b148 = 0;
    do {
      CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b1e8,6,&DAT_1000b2a8,0);
      RemoveGroup(&DAT_1000b1f0,&DAT_1000b128);
      DAT_1000b148 = DAT_1000b148 + 1;
    } while (DAT_1000b148 < 5);
    (*pcVar12)(&DAT_1000b128,0);
    SelSendTo(6,&DAT_1000b528,0x40,0);
    pcVar14 = SetTrigg_exref;
    SetTrigg(2,1);
    SetTrigg(5,0);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 != '\0')) {
    DAT_1000b148 = 0;
    if (0 < DAT_1000b344) {
      do {
        iVar2 = GetTotalAmount0(&DAT_1000b5f0);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b280,5,&DAT_1000b430,0x80);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b5f0);
        }
        iVar2 = GetTotalAmount0(&DAT_1000b170);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b658,5,&DAT_1000b430,0x80);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b170);
        }
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b344);
    }
    (*pcVar12)(&DAT_1000b5f0,0);
    SelSendTo(5,&DAT_1000b5f8,
              CONCAT31((int3)((uint)(DAT_1000b344 / 2) >> 8),(char)(DAT_1000b344 / 2) + '@'),0);
    (*pcVar12)(&DAT_1000b170,0);
    SelSendTo(5,&DAT_1000b5f8,
              CONCAT31((int3)((uint)(DAT_1000b344 / 3) >> 8),(char)(DAT_1000b344 / 3) + '@'),0);
    cVar1 = Trigg(8);
    if (cVar1 != '\0') {
      (*pcVar12)(&DAT_1000b5f0,0);
      SelSendAndKill(5,&DAT_1000b5f8,
                     CONCAT31((int3)((uint)(DAT_1000b344 / 2) >> 8),(char)(DAT_1000b344 / 2) + '@'),
                     0);
      (*pcVar12)(&DAT_1000b170,0);
      SelSendAndKill(5,&DAT_1000b5f8,
                     CONCAT31((int3)((uint)(DAT_1000b344 / 3) >> 8),(char)(DAT_1000b344 / 3) + '@'),
                     0);
    }
    cVar1 = TimerDone(3);
    if (cVar1 != '\0') {
      DAT_1000b344 = DAT_1000b344 + DAT_1000b168;
    }
    FreeTimer(3);
    RunTimer(3,1000);
    RunTimer(4,0xfa);
    (*pcVar14)(7,0);
    (*pcVar14)(8,1);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) {
    DAT_1000b148 = 0;
    if (0 < DAT_1000b344) {
      do {
        iVar2 = GetTotalAmount0(&DAT_1000b5e0);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b280,5,&DAT_1000b430,0x80);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b5e0);
        }
        iVar2 = GetTotalAmount0(&DAT_1000b180);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b658,5,&DAT_1000b430,0x80);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b180);
        }
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b344);
    }
    (*pcVar12)(&DAT_1000b5e0,0);
    SelSendTo(5,&DAT_1000b5f8,0x20,0);
    SelSendTo(5,&DAT_1000b220,0x40,2);
    SelSendTo(5,&DAT_1000b228,0x80,2);
    SelSendTo(5,&DAT_1000b218,200,2);
    (*pcVar12)(&DAT_1000b180,0);
    SelSendTo(5,&DAT_1000b5f8,0x20,0);
    SelSendTo(5,&DAT_1000b220,0x40,2);
    SelSendTo(5,&DAT_1000b228,0x80,2);
    SelSendTo(5,&DAT_1000b218,200,2);
    cVar1 = Trigg(8);
    if (cVar1 != '\0') {
      (*pcVar12)(&DAT_1000b5e0,0);
      SelSendAndKill(5,&DAT_1000b5f8,0x20,0);
      SelSendAndKill(5,&DAT_1000b220,0x40,2);
      SelSendAndKill(5,&DAT_1000b228,0x80,2);
      SelSendAndKill(5,&DAT_1000b218,200,2);
      (*pcVar12)(&DAT_1000b180,0);
      SelSendAndKill(5,&DAT_1000b5f8,0x20,0);
      SelSendAndKill(5,&DAT_1000b220,0x40,2);
      SelSendAndKill(5,&DAT_1000b228,0x80,2);
      SelSendAndKill(5,&DAT_1000b218,200,2);
    }
    cVar1 = TimerDone(3);
    if (cVar1 != '\0') {
      DAT_1000b344 = DAT_1000b344 + DAT_1000b168;
    }
    FreeTimer(3);
    RunTimer(3,1000);
    RunTimer(4,0xfa);
    (*pcVar14)(9,0);
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b550,0), 0 < iVar2)) {
    cVar1 = Trigg(0x33);
    if (cVar1 != '\0') {
      RunTimer(5,0x32);
    }
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    (*pcVar12)(&DAT_1000b590,0);
    SelChangeNation(6,0);
    (*pcVar12)(&DAT_1000b2b8,0);
    (*pcVar14)(1,0);
  }
  cVar1 = Trigg(0x33);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    ShowPage(s__PAGE01_1000a344);
    (*pcVar14)(0x33,0);
  }
  cVar1 = Trigg(1);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b550,0), iVar2 == 0)) {
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    (*pcVar12)(&DAT_1000b590,0);
    SelChangeNation(0,6);
    (*pcVar12)(&DAT_1000b2b8,0);
    (*pcVar14)(1,1);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b298,0), 0 < iVar2)) {
    ShowPageParam(s__PAGE1_1000a33c,DAT_1000b320);
    (*pcVar14)(0x1a,0);
  }
  cVar1 = Trigg(2);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
      (iVar2 = GetUnitsAmount1(&DAT_1000b298,&DAT_1000b1e0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_1000b298,0), 0 < iVar2)) {
    cVar1 = AskQuestion(s__PAGE2_1000a334);
    if (cVar1 != '\0') {
      (*pcVar12)(&DAT_1000b128,0);
      (*pcVar12)(&DAT_1000b1e0,1);
      SelChangeNation(6,0);
      SetLightSpot(&DAT_1000b3d0,1,1);
      (*pcVar14)(3,0);
      (*pcVar14)(4,0);
      (*pcVar14)(5,1);
    }
    (*pcVar14)(2,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b298,0), iVar2 == 0)) {
    (*pcVar14)(2,1);
  }
  cVar1 = Trigg(3);
  if (cVar1 == '\0') {
    iVar2 = GetUnitsAmount1(&DAT_1000b5b0,&DAT_1000b1e0);
    iVar5 = GetUnitsAmount1(&DAT_1000b3d0,&DAT_1000b1e0);
    pcVar14 = SetTrigg_exref;
    if (0 < iVar2 + iVar5) {
      SaveSelectedUnits(0,&DAT_1000b2b8,0);
      ClearSelection(0);
      (*pcVar12)(&DAT_1000b128,0);
      (*pcVar12)(&DAT_1000b1e0,1);
      SelChangeNation(0,6);
      (*pcVar12)(&DAT_1000b2b8,0);
      ClearLightSpot(1);
      AddResource(0,1,DAT_1000b320);
      ShowPage(s__PAGE3_1000a32c);
      pcVar14 = SetTrigg_exref;
      SetTrigg(3,1);
    }
  }
  cVar1 = Trigg(4);
  if ((cVar1 == '\0') && (cVar1 = Trigg(3), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_1000b128);
    iVar5 = GetTotalAmount0(&DAT_1000b1e0);
    if (iVar2 + iVar5 == 0) {
      RunTimer(1,DAT_1000b168 * 1000);
      pcVar14 = SetTrigg_exref;
      SetTrigg(3,1);
      SetTrigg(4,1);
    }
    else {
      cVar1 = Trigg(3);
      pcVar14 = SetTrigg_exref;
      if (cVar1 != '\0') {
        (*pcVar12)(&DAT_1000b128,0);
        (*pcVar12)(&DAT_1000b1e0,1);
        SelSendTo(6,&DAT_1000b2b0,0,0);
        cVar1 = Trigg(8);
        pcVar14 = SetTrigg_exref;
        if (cVar1 == '\0') {
          SetTrigg(7,1);
        }
      }
    }
  }
  cVar1 = Trigg(4);
  if (((cVar1 == '\0') && (cVar1 = Trigg(3), cVar1 == '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_1000b1e0), iVar2 == 0)) {
    RunTimer(1,DAT_1000b168 * 2000 + 5000);
    iVar2 = GetTotalAmount0(&DAT_1000b128);
    if (iVar2 < 1) {
      ShowPage(s__PAGE4B_1000a31c);
    }
    else {
      iVar2 = GetTotalAmount0(&DAT_1000b128);
      AddResource(0,3,iVar2 * 200);
      iVar2 = GetTotalAmount0(&DAT_1000b128);
      ShowPageParam(s__PAGE4_1000a324,iVar2 * 200);
    }
    ClearLightSpot(1);
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    ClearSelection(5);
    (*pcVar12)(&DAT_1000b128,0);
    SelErase(0);
    (*pcVar12)(&DAT_1000b128,0);
    SelErase(5);
    RemoveGroup(&DAT_1000b128,&DAT_1000b1f8);
    (*pcVar12)(&DAT_1000b2b8,0);
    (*pcVar14)(3,1);
    (*pcVar14)(4,1);
    (*pcVar14)(7,1);
  }
  cVar1 = Trigg(4);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount2(&DAT_1000b4e8,&DAT_1000b1e8,6), 0 < iVar2)) {
    SelectUnitsInZone(&DAT_1000b4e8,6,0);
    SelErase(6);
    (*pcVar12)(&DAT_1000b128,0);
    (*pcVar12)(&DAT_1000b1e0,1);
    SelSendTo(6,&DAT_1000b2b0,0,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount2(&DAT_1000b4e8,&DAT_1000b390,6), 0 < iVar2)) {
    SelectUnitsInZone(&DAT_1000b4e8,6,0);
    SelErase(6);
    (*pcVar12)(&DAT_1000b128,0);
    SelSendTo(6,&DAT_1000b2b0,0,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 == '\0') && (cVar1 = Trigg(8), cVar1 != '\0')) {
    iVar2 = GetUnitsAmount1(&DAT_1000b640,&DAT_1000b128);
    iVar5 = GetUnitsAmount1(&DAT_1000b630,&DAT_1000b128);
    iVar6 = GetUnitsAmount1(&DAT_1000b620,&DAT_1000b128);
    iVar7 = GetUnitsAmount1(&DAT_1000b610,&DAT_1000b128);
    iVar8 = GetUnitsAmount1(&DAT_1000b640,&DAT_1000b1e0);
    iVar9 = GetUnitsAmount1(&DAT_1000b630,&DAT_1000b1e0);
    iVar10 = GetUnitsAmount1(&DAT_1000b620,&DAT_1000b1e0);
    iVar11 = GetUnitsAmount1(&DAT_1000b610,&DAT_1000b1e0);
    pcVar14 = SetTrigg_exref;
    if (0 < iVar2 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11) {
      RemoveGroup(&DAT_1000b5e0,&DAT_1000b5f0);
      RemoveGroup(&DAT_1000b180,&DAT_1000b170);
      pcVar14 = SetTrigg_exref;
      SetTrigg(8,0);
    }
  }
  cVar1 = Trigg(8);
  if (((cVar1 == '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) &&
     (cVar1 = TimerDone(4), cVar1 != '\0')) {
    CreateZoneNearGroup(&DAT_1000b5e8,&DAT_1000b450,&DAT_1000b1e0,100);
    (*pcVar12)(&DAT_1000b5f0,0);
    (*pcVar12)(&DAT_1000b170,1);
    SelSendAndKill(5,&DAT_1000b5e8,0x80,0);
    (*pcVar14)(9,1);
    RunTimer(4,0xfa);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_1000b170);
    iVar5 = GetTotalAmount0(&DAT_1000b5f0);
    pcVar14 = SetTrigg_exref;
    if (iVar2 + iVar5 == 0) {
      if (DAT_1000b118 == 0) {
        DAT_1000b118 = 5;
      }
      ShowPageParam(s__PAGE5_1000a314,DAT_1000b118);
      AddResource(0,1,DAT_1000b118);
      cVar1 = Trigg(8);
      if (cVar1 != '\0') {
        ShowPageParam(s__PAGE6_1000a30c,(DAT_1000b320 / 0x14) * 10);
        AddResource(0,1,(DAT_1000b320 / 0x14) * 10);
      }
      pcVar14 = SetTrigg_exref;
      SetTrigg(7,1);
    }
  }
  cVar1 = Trigg(0x37);
  if (((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 != '\0')) &&
     ((cVar1 = Trigg(8), cVar1 != '\0' && (cVar1 = Trigg(9), cVar1 == '\0')))) {
    iVar2 = GetTotalAmount0(&DAT_1000b180);
    iVar5 = GetTotalAmount0(&DAT_1000b5e0);
    pcVar14 = SetTrigg_exref;
    if (iVar2 + iVar5 == 0) {
      if (DAT_1000b118 == 0) {
        DAT_1000b118 = 5;
      }
      ShowPageParam(s__PAGE5_1000a314,DAT_1000b118);
      AddResource(0,1,DAT_1000b118);
      cVar1 = Trigg(8);
      if (cVar1 != '\0') {
        ShowPageParam(s__PAGE6_1000a30c,(DAT_1000b320 / 0x14) * 10);
        AddResource(0,1,(DAT_1000b320 / 0x14) * 10);
      }
      pcVar14 = SetTrigg_exref;
      SetTrigg(9,1);
    }
  }
  cVar1 = TimerDone(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0xe), cVar1 != '\0')) &&
     (cVar1 = Trigg(0xf), cVar1 != '\0')) {
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b390,6,&DAT_1000b420,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b310);
    (*pcVar12)(&DAT_1000b310,0);
    SelSendTo(6,&DAT_1000b530,0x40,0);
    DAT_1000b148 = 0;
    do {
      CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b1e8,6,&DAT_1000b420,0);
      RemoveGroup(&DAT_1000b1f0,&DAT_1000b188);
      DAT_1000b148 = DAT_1000b148 + 1;
    } while (DAT_1000b148 < 5);
    (*pcVar12)(&DAT_1000b188,0);
    SelSendTo(6,&DAT_1000b538,0x40,0);
    (*pcVar14)(0xf,0);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x11), cVar1 != '\0')) {
    DAT_1000b148 = 0;
    if (0 < DAT_1000b344) {
      do {
        iVar2 = GetTotalAmount0(&DAT_1000b618);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b280,5,&DAT_1000b438,0x40);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b618);
        }
        iVar2 = GetTotalAmount0(&DAT_1000b178);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b658,5,&DAT_1000b438,0x40);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b178);
        }
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b344);
    }
    (*pcVar12)(&DAT_1000b618,0);
    SelSendTo(5,&DAT_1000b638,
              CONCAT31((int3)((uint)(DAT_1000b344 / 2) >> 8),(char)(DAT_1000b344 / 2) + '@'),0);
    (*pcVar12)(&DAT_1000b178,0);
    SelSendTo(5,&DAT_1000b638,
              CONCAT31((int3)((uint)(DAT_1000b344 / 3) >> 8),(char)(DAT_1000b344 / 3) + '@'),0);
    cVar1 = Trigg(0x12);
    if (cVar1 != '\0') {
      (*pcVar12)(&DAT_1000b618,0);
      SelSendAndKill(5,&DAT_1000b638,
                     CONCAT31((int3)((uint)(DAT_1000b344 / 2) >> 8),(char)(DAT_1000b344 / 2) + '@'),
                     0);
      (*pcVar12)(&DAT_1000b178,0);
      SelSendAndKill(5,&DAT_1000b638,
                     CONCAT31((int3)((uint)(DAT_1000b344 / 3) >> 8),(char)(DAT_1000b344 / 3) + '@'),
                     0);
    }
    cVar1 = TimerDone(3);
    if (cVar1 != '\0') {
      DAT_1000b344 = DAT_1000b344 + DAT_1000b168;
    }
    FreeTimer(3);
    RunTimer(3,1000);
    RunTimer(0xe,0xfa);
    (*pcVar14)(0x11,0);
    (*pcVar14)(0x12,1);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x13), cVar1 != '\0')) {
    iVar2 = GetUnitsAmount0(&DAT_1000b650,0);
    iVar5 = GetUnitsAmount0(&DAT_1000b440,0);
    pcVar14 = SetTrigg_exref;
    if (iVar2 + iVar5 < DAT_1000b344 * 2 + 10) {
      DAT_1000b148 = 0;
      if (0 < DAT_1000b344) {
        do {
          iVar2 = GetTotalAmount0(&DAT_1000b600);
          if (iVar2 < DAT_1000b344) {
            CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b280,5,&DAT_1000b440,0xc0);
            RemoveGroup(&DAT_1000b1f0,&DAT_1000b600);
          }
          iVar2 = GetTotalAmount0(&DAT_1000b190);
          if (iVar2 < DAT_1000b344) {
            CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b658,5,&DAT_1000b440,0xc0);
            RemoveGroup(&DAT_1000b1f0,&DAT_1000b190);
          }
          DAT_1000b148 = DAT_1000b148 + 1;
        } while (DAT_1000b148 < DAT_1000b344);
      }
      (*pcVar12)(&DAT_1000b600,0);
      SelSendTo(5,&DAT_1000b650,0x80,0);
      (*pcVar12)(&DAT_1000b190,0);
      SelSendTo(5,&DAT_1000b650,0x80,0);
      cVar1 = Trigg(0x12);
      if (cVar1 != '\0') {
        (*pcVar12)(&DAT_1000b600,0);
        SelSendAndKill(5,&DAT_1000b650,0x80,0);
        (*pcVar12)(&DAT_1000b190,0);
        SelSendAndKill(5,&DAT_1000b650,0x80,0);
      }
      cVar1 = TimerDone(3);
      if (cVar1 != '\0') {
        DAT_1000b344 = DAT_1000b344 + DAT_1000b168;
      }
      FreeTimer(3);
      RunTimer(3,1000);
      RunTimer(0xe,0xfa);
      pcVar14 = SetTrigg_exref;
      SetTrigg(0x13,0);
    }
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b560,0), 0 < iVar2)) {
    cVar1 = Trigg(0x34);
    if (cVar1 != '\0') {
      RunTimer(6,0x32);
    }
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    (*pcVar12)(&DAT_1000b668,0);
    SelChangeNation(6,0);
    (*pcVar12)(&DAT_1000b2b8,0);
    (*pcVar14)(0xb,0);
  }
  cVar1 = Trigg(0x34);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(6), cVar1 != '\0')) {
    ShowPage(s__PAGE02_1000a304);
    (*pcVar14)(0x34,0);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b560,0), iVar2 == 0)) {
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    (*pcVar12)(&DAT_1000b668,0);
    SelChangeNation(0,6);
    (*pcVar12)(&DAT_1000b2b8,0);
    (*pcVar14)(0xb,1);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b410,0), 0 < iVar2)) {
    ShowPageParam(s__PAGE1_1000a33c,DAT_1000b320);
    (*pcVar14)(0x1a,0);
  }
  cVar1 = Trigg(0xf);
  if ((((cVar1 == '\0') && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
      (iVar2 = GetUnitsAmount1(&DAT_1000b410,&DAT_1000b310), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_1000b410,0), 0 < iVar2)) {
    cVar1 = AskQuestion(s__PAGE7_1000a2fc);
    if (cVar1 != '\0') {
      (*pcVar12)(&DAT_1000b188,0);
      (*pcVar12)(&DAT_1000b310,1);
      SelChangeNation(6,0);
      SetLightSpot(&DAT_1000b400,1,2);
      (*pcVar14)(0xd,0);
      (*pcVar14)(0xe,0);
      (*pcVar14)(0xf,1);
    }
    (*pcVar14)(0xc,0);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b410,0), iVar2 == 0)) {
    (*pcVar14)(0xc,1);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_1000b400,&DAT_1000b310), 0 < iVar2)) {
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    (*pcVar12)(&DAT_1000b188,0);
    (*pcVar12)(&DAT_1000b310,1);
    SelChangeNation(0,6);
    (*pcVar12)(&DAT_1000b2b8,0);
    ClearLightSpot(2);
    AddResource(0,1,DAT_1000b320);
    ShowPage(s__PAGE8_1000a2f4);
    (*pcVar14)(0xd,1);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (cVar1 = Trigg(0xd), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_1000b188);
    iVar5 = GetTotalAmount0(&DAT_1000b310);
    if (iVar2 + iVar5 == 0) {
      RunTimer(0xb,DAT_1000b168 * 1000);
      pcVar14 = SetTrigg_exref;
      SetTrigg(0xd,1);
      SetTrigg(0xe,1);
    }
    else {
      cVar1 = Trigg(0xd);
      pcVar14 = SetTrigg_exref;
      if (cVar1 != '\0') {
        (*pcVar12)(&DAT_1000b188,0);
        (*pcVar12)(&DAT_1000b310,1);
        SelSendTo(6,&DAT_1000b428,0,0);
        cVar1 = Trigg(0x12);
        pcVar14 = SetTrigg_exref;
        if (cVar1 == '\0') {
          SetTrigg(0x11,1);
        }
      }
    }
  }
  cVar1 = Trigg(0xe);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0xd), cVar1 == '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_1000b310), iVar2 == 0)) {
    RunTimer(0xb,DAT_1000b168 * 2000 + 5000);
    iVar2 = GetTotalAmount0(&DAT_1000b188);
    if (iVar2 < 1) {
      ShowPage(s__PAGE4B_1000a31c);
    }
    else {
      iVar2 = GetTotalAmount0(&DAT_1000b188);
      AddResource(0,3,iVar2 * 200);
      iVar2 = GetTotalAmount0(&DAT_1000b188);
      ShowPageParam(s__PAGE4_1000a324,iVar2 * 200);
    }
    ClearLightSpot(2);
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    ClearSelection(5);
    (*pcVar12)(&DAT_1000b188,0);
    SelErase(0);
    (*pcVar12)(&DAT_1000b188,0);
    SelErase(5);
    RemoveGroup(&DAT_1000b188,&DAT_1000b1f8);
    (*pcVar12)(&DAT_1000b2b8,0);
    (*pcVar14)(0xd,1);
    (*pcVar14)(0xe,1);
    (*pcVar14)(0x11,1);
  }
  cVar1 = Trigg(0xe);
  if (cVar1 == '\0') {
    iVar2 = GetUnitsAmount2(&DAT_1000b5d8,&DAT_1000b1e8,6);
    iVar5 = GetUnitsAmount2(&DAT_1000b5d8,&DAT_1000b390,6);
    pcVar14 = SetTrigg_exref;
    if (0 < iVar2 + iVar5) {
      SelectUnitsInZone(&DAT_1000b5d8,6,0);
      SelErase(6);
      (*pcVar12)(&DAT_1000b188,0);
      (*pcVar12)(&DAT_1000b310,1);
      SelSendTo(6,&DAT_1000b428,0,0);
      pcVar14 = SetTrigg_exref;
    }
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 == '\0') && (cVar1 = Trigg(0x12), cVar1 != '\0')) {
    iVar2 = GetUnitsAmount1(&DAT_1000b648,&DAT_1000b188);
    iVar5 = GetUnitsAmount1(&DAT_1000b648,&DAT_1000b310);
    pcVar14 = SetTrigg_exref;
    if (0 < iVar2 + iVar5) {
      RemoveGroup(&DAT_1000b600,&DAT_1000b618);
      RemoveGroup(&DAT_1000b190,&DAT_1000b178);
      pcVar14 = SetTrigg_exref;
      SetTrigg(0x12,0);
    }
  }
  cVar1 = Trigg(0x12);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x11), cVar1 == '\0')) &&
     (cVar1 = TimerDone(0xe), cVar1 != '\0')) {
    CreateZoneNearGroup(&DAT_1000b628,&DAT_1000b610,&DAT_1000b310,100);
    (*pcVar12)(&DAT_1000b618,0);
    (*pcVar12)(&DAT_1000b178,1);
    SelSendAndKill(5,&DAT_1000b628,0x80,0);
    (*pcVar14)(0x13,1);
    RunTimer(0xe,0xfa);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x11), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_1000b178);
    iVar5 = GetTotalAmount0(&DAT_1000b618);
    pcVar14 = SetTrigg_exref;
    if (iVar2 + iVar5 == 0) {
      if (DAT_1000b118 == 0) {
        DAT_1000b118 = 5;
      }
      ShowPageParam(s__PAGE5_1000a314,DAT_1000b118);
      AddResource(0,1,DAT_1000b118);
      cVar1 = Trigg(0x12);
      if (cVar1 != '\0') {
        ShowPageParam(s__PAGE6_1000a30c,(DAT_1000b320 / 0x14) * 10);
        AddResource(0,1,(DAT_1000b320 / 0x14) * 10);
      }
      pcVar14 = SetTrigg_exref;
      SetTrigg(0x11,1);
    }
  }
  cVar1 = Trigg(0x37);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0xd), cVar1 != '\0')) &&
      (cVar1 = Trigg(0x12), cVar1 != '\0')) && (cVar1 = Trigg(0x13), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_1000b190);
    iVar5 = GetTotalAmount0(&DAT_1000b600);
    pcVar14 = SetTrigg_exref;
    if (iVar2 + iVar5 == 0) {
      if (DAT_1000b118 == 0) {
        DAT_1000b118 = 5;
      }
      ShowPageParam(s__PAGE5_1000a314,DAT_1000b118);
      AddResource(0,1,DAT_1000b118);
      cVar1 = Trigg(0x12);
      if (cVar1 != '\0') {
        ShowPageParam(s__PAGE6_1000a30c,(DAT_1000b320 / 0x14) * 10);
        AddResource(0,1,(DAT_1000b320 / 0x14) * 10);
      }
      pcVar14 = SetTrigg_exref;
      SetTrigg(0x13,1);
    }
  }
  cVar1 = Trigg(0x1f);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b408,0), 0 < iVar2)) {
    cVar1 = Trigg(0x35);
    if (cVar1 != '\0') {
      RunTimer(7,0x32);
    }
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    (*pcVar12)(&DAT_1000b670,0);
    SelChangeNation(6,0);
    (*pcVar12)(&DAT_1000b2b8,0);
    (*pcVar14)(0x1f,0);
  }
  cVar1 = Trigg(0x35);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    ShowPage(s__PAGE03_1000a2ec);
    (*pcVar14)(0x35,0);
  }
  cVar1 = Trigg(0x1f);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b408,0), iVar2 == 0)) {
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    (*pcVar12)(&DAT_1000b670,0);
    SelChangeNation(0,6);
    (*pcVar12)(&DAT_1000b2b8,0);
    (*pcVar14)(0x1f,1);
  }
  cVar1 = Trigg(0x5f);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x37), cVar1 != '\0')) {
    iVar2 = GetTotalAmount1(&DAT_1000b158,0);
    iVar5 = GetTotalAmount1(&DAT_1000b150,0);
    iVar6 = GetTotalAmount1(&DAT_1000b548,0);
    pcVar14 = SetTrigg_exref;
    if (0 < iVar2 + iVar5 + iVar6) {
      SaveSelectedUnits(0,&DAT_1000b2b8,0);
      ClearSelection(0);
      iVar2 = GetTotalAmount1(&DAT_1000b548,0);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount1(&DAT_1000b150,0);
        if (0 < iVar2) {
          puVar16 = &DAT_1000b150;
          goto LAB_10005139;
        }
        iVar2 = GetTotalAmount1(&DAT_1000b158,0);
        if (0 < iVar2) {
          puVar16 = &DAT_1000b158;
          goto LAB_10005139;
        }
      }
      else {
        puVar16 = &DAT_1000b548;
LAB_10005139:
        CreateZoneNearUnit(&DAT_1000b120,&DAT_1000b450,puVar16,0,100);
      }
      pcVar14 = SetTrigg_exref;
      SetTrigg(7,1);
      SetTrigg(9,1);
      SetTrigg(0x11,1);
      SetTrigg(0x13,1);
      (*pcVar12)(&DAT_1000b5f0,0);
      (*pcVar12)(&DAT_1000b170,1);
      (*pcVar12)(&DAT_1000b5e0,1);
      (*pcVar12)(&DAT_1000b180,1);
      (*pcVar12)(&DAT_1000b618,1);
      (*pcVar12)(&DAT_1000b178,1);
      (*pcVar12)(&DAT_1000b600,1);
      (*pcVar12)(&DAT_1000b190,1);
      DoNotUseSelInAI(5);
      RemoveGroup(&DAT_1000b5f0,&DAT_1000b2d0);
      RemoveGroup(&DAT_1000b170,&DAT_1000b2d8);
      RemoveGroup(&DAT_1000b5e0,&DAT_1000b2d0);
      RemoveGroup(&DAT_1000b180,&DAT_1000b2d8);
      RemoveGroup(&DAT_1000b618,&DAT_1000b2d0);
      RemoveGroup(&DAT_1000b178,&DAT_1000b2d8);
      RemoveGroup(&DAT_1000b600,&DAT_1000b2d0);
      RemoveGroup(&DAT_1000b190,&DAT_1000b2d8);
      DAT_1000b148 = 0;
      if (0 < DAT_1000b2f8 << 2) {
        do {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b5b8,5,&DAT_1000b518,0);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b2c8);
          DAT_1000b148 = DAT_1000b148 + 1;
        } while (DAT_1000b148 < DAT_1000b2f8 * 4);
      }
      (*pcVar12)(&DAT_1000b2c8,0);
      SelSendAndKill(5,&DAT_1000b400,0x2d,0);
      DoNotUseSelInAI(5);
      (*pcVar12)(&DAT_1000b2c0,0);
      SelSendAndKill(5,&DAT_1000b400,0x2d,0);
      SelSendAndKill(5,&DAT_1000b120,0x2d,2);
      DoNotUseSelInAI(5);
      (*pcVar12)(&DAT_1000b2d0,0);
      SelSendAndKill(5,&DAT_1000b120,0x2d,0);
      ClearSelection(5);
      ShowPage(s__PAGE16_1000a2e4);
      SetResource(5,0,500000);
      uVar3 = GetResource(5,0);
      SetResource(5,3,uVar3);
      uVar3 = GetResource(5,0);
      SetResource(5,2,uVar3);
      uVar3 = GetResource(5,0);
      SetResource(5,1,uVar3);
      uVar3 = GetResource(5,0);
      SetResource(5,4,uVar3);
      uVar3 = GetResource(5,0);
      SetResource(5,5,uVar3);
      RunTimer(0x14,(6 - DAT_1000b168) * 1000);
      StartAI(5,s_GERMAN_0_1000ab0c,0,0,1,DAT_1000b168);
      (*pcVar12)(&DAT_1000b2b8,0);
      SetTrigg(0x37,0);
      SetTrigg(0x38,0);
    }
  }
  cVar1 = Trigg(0x38);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_1000b2d8), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_1000b2d8,&DAT_1000b120,0);
  }
  cVar1 = Trigg(0x38);
  if ((cVar1 != '\0') || (cVar1 = TimerDone(0x14), cVar1 == '\0')) goto LAB_100055c6;
  iVar2 = GetTotalAmount0(&DAT_1000b2c8);
  iVar5 = GetTotalAmount0(&DAT_1000b2d8);
  iVar6 = GetTotalAmount0(&DAT_1000b2d0);
  iVar7 = GetTotalAmount0(&DAT_1000b2c0);
  if (iVar2 + iVar5 + iVar6 + iVar7 < 1) {
    (*pcVar14)(0x38,1);
    goto LAB_100055c6;
  }
  SaveSelectedUnits(0,&DAT_1000b2b8,0);
  ClearSelection(0);
  iVar2 = GetTotalAmount1(&DAT_1000b548,0);
  if (iVar2 < 1) {
    iVar2 = GetTotalAmount1(&DAT_1000b150,0);
    if (0 < iVar2) {
      puVar16 = &DAT_1000b150;
      goto LAB_1000548f;
    }
    iVar2 = GetTotalAmount1(&DAT_1000b158,0);
    if (0 < iVar2) {
      puVar16 = &DAT_1000b158;
      goto LAB_1000548f;
    }
    iVar2 = GetTotalAmount0(&DAT_1000b2c0);
    if (iVar2 < 1) {
      _DAT_1000b120 = DAT_1000b450;
      _DAT_1000b124 = DAT_1000b454;
    }
    else {
      CreateZoneNearGroup(&DAT_1000b120,&DAT_1000b450,&DAT_1000b2c0,100);
    }
  }
  else {
    puVar16 = &DAT_1000b548;
LAB_1000548f:
    CreateZoneNearUnit(&DAT_1000b120,&DAT_1000b450,puVar16,0,100);
  }
  (*pcVar12)(&DAT_1000b2c0,0);
  (*pcVar12)(&DAT_1000b2d0,1);
  (*pcVar12)(&DAT_1000b2c8,1);
  SelSendAndKill(5,&DAT_1000b120,0x91,0);
  SelSendAndKill(5,&DAT_1000b560,0x91,2);
  SelSendAndKill(5,&DAT_1000b550,200,2);
  SelSendAndKill(5,&DAT_1000b400,0x2d,2);
  ClearSelection(5);
  cVar1 = Trigg(0x3a);
  if (cVar1 != '\0') {
    ChangeFriends(5,6);
    (*pcVar14)(0x3a,0);
  }
  (*pcVar12)(&DAT_1000b2b8,0);
  RunTimer(0x14,(6 - DAT_1000b168) * 1000);
LAB_100055c6:
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') || (cVar1 = Trigg(0xb), cVar1 != '\0')) {
    iVar2 = GetTotalAmount1(&DAT_1000b4e0,6);
    iVar5 = GetTotalAmount1(&DAT_1000b1d8,6);
    iVar6 = GetTotalAmount1(&DAT_1000b358,6);
    if (0 < iVar2 + iVar5 + iVar6) {
      SelectUnitsType(&DAT_1000b358,6,0);
      SelectUnitsType(&DAT_1000b1d8,6,1);
      SelectUnitsType(&DAT_1000b4e0,6,1);
      SelChangeNation(6,0);
    }
  }
  cVar1 = Trigg(0x1f);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b608,6), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount1(&DAT_1000b608,&DAT_1000b2f0), iVar2 == 0)) {
    SelectUnitsInZone(&DAT_1000b608,6,0);
    SelErase(6);
  }
  cVar1 = Trigg(0x37);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x39), cVar1 != '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_1000b238,0), 0 < iVar2)) {
    (*pcVar12)(&DAT_1000b338,0);
    SelSendAndKill(5,&DAT_1000b238,0x20,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f0,&DAT_1000b3c0,5,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f8,&DAT_1000b100,5,1);
    SelSendAndKill(5,&DAT_1000b470,0x20,0);
    (*pcVar14)(0x39,0);
  }
  cVar1 = Trigg(0x37);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x39), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_1000b238,0), iVar2 == 0)) {
    (*pcVar12)(&DAT_1000b338,0);
    SelSendAndKill(5,&DAT_1000b518,0x20,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f0,&DAT_1000b3c0,5,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f8,&DAT_1000b100,5,1);
    SelSendAndKill(5,&DAT_1000b470,0x20,0);
    (*pcVar14)(0x39,1);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_1000b108), iVar2 < 0x48)) {
    ProduceUnitFast(&DAT_1000b1b8,&DAT_1000b3c0,&DAT_1000b108,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f0,&DAT_1000b3c0,5,0);
    SelSendAndKill(5,&DAT_1000b470,0x20,0);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_1000b130), iVar2 < 0x24)) {
    ProduceUnitFast(&DAT_1000b1c0,&DAT_1000b100,&DAT_1000b130,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f8,&DAT_1000b100,5,0);
    SelSendAndKill(5,&DAT_1000b470,0x20,0);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_1000b338), iVar2 < 0x3c)) {
    ProduceUnitFast(&DAT_1000b318,&DAT_1000b5b8,&DAT_1000b338,0);
  }
  cVar1 = Trigg(0x5b);
  pcVar13 = ShowPage_exref;
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), pcVar13 = ShowPage_exref, cVar1 != '\0')) {
    ShowPage(s__PAGE11_1000a2dc);
    (*pcVar14)(0x5b,0);
  }
  cVar1 = Trigg(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    (*pcVar13)(s__PAGE12_1000a2d4);
    (*pcVar14)(0x5c,0);
  }
  cVar1 = Trigg(0x5d);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    (*pcVar13)(s__PAGE13_1000a2cc);
    (*pcVar14)(0x5d,0);
  }
  cVar1 = Trigg(0x5e);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(4), cVar1 != '\0')) {
    (*pcVar13)(s__PAGE14_1000a2c4);
    (*pcVar14)(0x5e,0);
  }
  cVar1 = Trigg(0x5f);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(5), cVar1 != '\0')) {
    (*pcVar13)(s__PAGE15_1000a2bc);
    (*pcVar14)(0x5f,0);
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount1(&DAT_1000b4e0,0);
    iVar5 = GetTotalAmount1(&DAT_1000b1d8,0);
    iVar6 = GetTotalAmount1(&DAT_1000b358,0);
    if (iVar2 + iVar5 + iVar6 == 0) {
      iVar2 = 1;
      do {
        cVar1 = TimerDone(iVar2);
        if (cVar1 == '\0') {
          FreeTimer(iVar2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x1e);
      (*pcVar13)(s__PAGE10_1000a2b4);
      LooseGame();
    }
  }
  cVar1 = Trigg(0x5b);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5c), cVar1 == '\0')) &&
     (cVar1 = Trigg(0x5f), cVar1 == '\0')) {
    iVar2 = 1;
    do {
      cVar1 = TimerDone(iVar2);
      if (cVar1 == '\0') {
        FreeTimer(iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    (*pcVar13)(s__PAGE20_1000a2ac);
    ShowVictory();
  }
  return;
}



// Function: FUN_100059f0 @ 0x100059f0

uint * __cdecl FUN_100059f0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10005ad8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10005ad8:
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



// Function: FUN_10005a00 @ 0x10005a00

uint * __cdecl FUN_10005a00(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10005a1c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10005a4f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10005a6b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10005a1c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10005a6b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10005a6b;
    }
  }
LAB_10005a4f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10005a6b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10005ad8:
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
    if (bVar1 == 0) goto LAB_10005ad8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: FUN_10005ae0 @ 0x10005ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10005ae0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000b694 = GetVersion();
    iVar1 = FUN_10006514(1);
    if (iVar1 != 0) {
      _DAT_1000b6a0 = DAT_1000b694 >> 8 & 0xff;
      _DAT_1000b69c = DAT_1000b694 & 0xff;
      DAT_1000b694 = DAT_1000b694 >> 0x10;
      _DAT_1000b698 = _DAT_1000b69c * 0x100 + _DAT_1000b6a0;
      iVar1 = FUN_10005da7();
      if (iVar1 != 0) {
        DAT_1000bbf8 = GetCommandLineA();
        DAT_1000b680 = FUN_100063e2();
        FUN_10005ecc();
        FUN_10006195();
        FUN_100060dc();
        FUN_10005c89();
        DAT_1000b67c = DAT_1000b67c + 1;
        goto LAB_10005bb3;
      }
      FUN_10006550();
    }
LAB_10005b40:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000b67c < 1) goto LAB_10005b40;
      DAT_1000b67c = DAT_1000b67c + -1;
      if (DAT_1000b6cc == 0) {
        FUN_10005cc7();
      }
      FUN_10006088();
      FUN_10005dfb();
      FUN_10006550();
    }
    else if (param_2 == 3) {
      FUN_10005e2c((LPVOID)0x0);
    }
LAB_10005bb3:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10005bb9

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000b67c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10005c01;
    if ((DAT_1000bbfc != (code *)0x0) &&
       (iVar2 = (*DAT_1000bbfc)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10005ae0(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10005c01:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10005ae0(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10005ae0(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000bbfc != (code *)0x0) {
      iVar2 = (*DAT_1000bbfc)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10005c56

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000b688 == 1) || ((DAT_1000b688 == 0 && (DAT_1000b68c == 1)))) {
    FUN_100065c5();
  }
  FUN_100065fe(param_1);
  (*(code *)PTR___exit_1000add0)(0xff);
  return;
}



// Function: FUN_10005c89 @ 0x10005c89

void FUN_10005c89(void)

{
  if (DAT_1000bbf4 != (code *)0x0) {
    (*DAT_1000bbf4)();
  }
  FUN_10005d8d((undefined4 *)&DAT_1000a008,(undefined4 *)&DAT_1000a010);
  FUN_10005d8d((undefined4 *)&DAT_1000a000,(undefined4 *)&DAT_1000a004);
  return;
}



// Function: __exit @ 0x10005cb6

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10005cd6(_Code,1,0);
  return;
}



// Function: FUN_10005cc7 @ 0x10005cc7

void FUN_10005cc7(void)

{
  FUN_10005cd6(0,0,1);
  return;
}



// Function: FUN_10005cd6 @ 0x10005cd6

void __cdecl FUN_10005cd6(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10005d7b();
  if (DAT_1000b6d0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000b6cc = 1;
  DAT_1000b6c8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000bbf0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000bbec - 4), DAT_1000bbf0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000bbf0 <= puVar1);
    }
    FUN_10005d8d((undefined4 *)&DAT_1000a014,(undefined4 *)&DAT_1000a018);
  }
  FUN_10005d8d((undefined4 *)&DAT_1000a01c,(undefined4 *)&DAT_1000a020);
  if (param_3 == 0) {
    DAT_1000b6d0 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10005d84();
  return;
}



// Function: FUN_10005d7b @ 0x10005d7b

void FUN_10005d7b(void)

{
  FUN_100067e6(0xd);
  return;
}



// Function: FUN_10005d84 @ 0x10005d84

void FUN_10005d84(void)

{
  FUN_10006847(0xd);
  return;
}



// Function: FUN_10005d8d @ 0x10005d8d

void __cdecl FUN_10005d8d(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10005da7 @ 0x10005da7

undefined4 FUN_10005da7(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10006751();
  DAT_1000add4 = TlsAlloc();
  if (DAT_1000add4 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000685c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000add4,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10005e19((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10005dfb @ 0x10005dfb

void FUN_10005dfb(void)

{
  FUN_1000677a();
  if (DAT_1000add4 != 0xffffffff) {
    TlsFree(DAT_1000add4);
    DAT_1000add4 = 0xffffffff;
  }
  return;
}



// Function: FUN_10005e19 @ 0x10005e19

void __cdecl FUN_10005e19(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000af50;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10005e2c @ 0x10005e2c

void __cdecl FUN_10005e2c(LPVOID param_1)

{
  if (DAT_1000add4 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_1000add4), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_100068e9(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_100068e9(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_100068e9(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_100068e9(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_100068e9(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_100068e9(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_1000af50) {
        FUN_100068e9(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_100068e9(param_1);
    }
    TlsSetValue(DAT_1000add4,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10005ecc @ 0x10005ecc

void FUN_10005ecc(void)

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
  DAT_1000bbe0 = 0x20;
  DAT_1000bae0 = puVar2;
  for (; puVar2 < DAT_1000bae0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000bbe0 < (int)UVar8) {
      puVar2 = &DAT_1000bae4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000bbe0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000bbe0 = DAT_1000bbe0 + 0x20;
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
      } while ((int)DAT_1000bbe0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000bae0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000bae0 + iVar6 * 9;
    if (DAT_1000bae0[iVar6 * 9] == -1) {
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
          goto LAB_10006071;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10006071:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000bbe0);
      return;
    }
  } while( true );
}



// Function: FUN_10006088 @ 0x10006088

void FUN_10006088(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000bae0;
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
      FUN_100068e9((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000bbe0);
  return;
}



// Function: FUN_100060dc @ 0x100060dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100060dc(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000bbe8 == 0) {
    FUN_10006e13();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000b680; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1000b6b0 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000b680;
  puVar6 = DAT_1000b680;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100059f0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100068e9(DAT_1000b680);
  DAT_1000b680 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1000bbe4 = 1;
  return;
}



// Function: FUN_10006195 @ 0x10006195

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006195(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000bbe8 == 0) {
    FUN_10006e13();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000b6d4,0x104);
  _DAT_1000b6c0 = &DAT_1000b6d4;
  pbVar2 = &DAT_1000b6d4;
  if (*DAT_1000bbf8 != 0) {
    pbVar2 = DAT_1000bbf8;
  }
  FUN_1000622e(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000622e(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000b6a8 = puVar1;
  _DAT_1000b6a4 = local_8 + -1;
  return;
}



// Function: FUN_1000622e @ 0x1000622e

void __cdecl FUN_1000622e(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000b9c0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000b9c0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_100062d9;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_100062d9:
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
          if ((*(byte *)((int)&DAT_1000b9c0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000b9c0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_100063e2 @ 0x100063e2

LPSTR FUN_100063e2(void)

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
  if (DAT_1000b7d8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000b7d8 = 1;
LAB_10006439:
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
        FUN_100068e9(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000b7d8 = 2;
  }
  else {
    if (DAT_1000b7d8 == 1) goto LAB_10006439;
    if (DAT_1000b7d8 != 2) {
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
    FUN_10006e30((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10006514 @ 0x10006514

undefined4 __cdecl FUN_10006514(int param_1)

{
  int iVar1;
  
  DAT_1000bac8 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000bac8 != (HANDLE)0x0) {
    iVar1 = FUN_10007165();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_1000bac8);
  }
  return 0;
}



// Function: FUN_10006550 @ 0x10006550

void FUN_10006550(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_1000b890) {
    puVar2 = (undefined4 *)((int)DAT_1000b894 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_1000bac8,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_1000b890);
  }
  HeapFree(DAT_1000bac8,0,DAT_1000b894);
  HeapDestroy(DAT_1000bac8);
  return;
}



// Function: FUN_100065c5 @ 0x100065c5

void FUN_100065c5(void)

{
  if ((DAT_1000b688 == 1) || ((DAT_1000b688 == 0 && (DAT_1000b68c == 1)))) {
    FUN_100065fe(0xfc);
    if (DAT_1000b7dc != (code *)0x0) {
      (*DAT_1000b7dc)();
    }
    FUN_100065fe(0xff);
  }
  return;
}



// Function: FUN_100065fe @ 0x100065fe

void __cdecl FUN_100065fe(DWORD param_1)

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
  pDVar2 = &DAT_1000ae00;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000ae90);
  if (param_1 == (&DAT_1000ae00)[iVar5 * 2]) {
    if ((DAT_1000b688 == 1) || ((DAT_1000b688 == 0 && (DAT_1000b68c == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000ae04);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100059f0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100059f0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10005a00(local_a4,_Dest);
      FUN_10005a00(local_a4,(uint *)&DAT_10009444);
      FUN_10005a00(local_a4,*(uint **)(iVar5 * 8 + 0x1000ae04));
      auStackY_1e3._3_4_ = 0x10006722;
      FUN_100079ae(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10006751 @ 0x10006751

void FUN_10006751(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000aed4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000aec4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000aeb4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000ae94);
  return;
}



// Function: FUN_1000677a @ 0x1000677a

void FUN_1000677a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000ae90;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000aed4)) && (ppuVar1 != &PTR_DAT_1000aec4)) &&
       ((ppuVar1 != &PTR_DAT_1000aeb4 && (ppuVar1 != &PTR_DAT_1000ae94)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100068e9(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000af50);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000aeb4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000aec4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000aed4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000ae94);
  return;
}



// Function: FUN_100067e6 @ 0x100067e6

void __cdecl FUN_100067e6(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000ae90 + param_1;
  if ((&DAT_1000ae90)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100067e6(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100068e9(lpCriticalSection);
    }
    FUN_10006847(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10006847 @ 0x10006847

void __cdecl FUN_10006847(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000ae90)[param_1]);
  return;
}



// Function: FUN_1000685c @ 0x1000685c

int * __cdecl FUN_1000685c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *puVar3;
  
  _Size = (uint *)(param_1 * param_2);
  puVar3 = _Size;
  if (_Size < (uint *)0xffffffe1) {
    if (_Size == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar3 < (uint *)0xffffffe1) {
      if (_Size < DAT_1000b0e0 || (int)_Size - (int)DAT_1000b0e0 == 0) {
        FUN_100067e6(9);
        piVar1 = FUN_100074f9(_Size);
        FUN_10006847(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_1000bac8,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_1000b854 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10007b98(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_100068e9 @ 0x100068e9

void __cdecl FUN_100068e9(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_100067e6(9);
    puVar1 = (uint *)FUN_100071a3((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_100071ce(puVar1,(uint)param_1);
      FUN_10006847(9);
      return;
    }
    FUN_10006847(9);
    HeapFree(DAT_1000bac8,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x10006931

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000b854);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10006943

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_1000696f((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10007b98(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_1000696f @ 0x1000696f

int * __cdecl FUN_1000696f(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_1000b0e0) {
    FUN_100067e6(9);
    piVar1 = FUN_100074f9(param_1);
    FUN_10006847(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_1000bac8,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: _strlen @ 0x100069c0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_100069e0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10006a13:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100069e0:
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
  goto LAB_10006a13;
}



// Function: FUN_10006a3b @ 0x10006a3b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10006a3b(int param_1)

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
  
  FUN_100067e6(0x19);
  CodePage = FUN_10006be8(param_1);
  if (CodePage != DAT_1000b898) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000afe8;
LAB_10006a78:
      if (*pUVar5 != CodePage) goto code_r0x10006a7c;
      local_8 = 0;
      puVar15 = &DAT_1000b9c0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000aff8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000afe0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000b9c0 + uVar8 + 1);
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
      _DAT_1000b8ac = 1;
      DAT_1000b898 = CodePage;
      DAT_1000bac4 = FUN_10006c32(CodePage);
      DAT_1000b8a0 = *(undefined4 *)(iVar12 + 0x1000afec);
      DAT_1000b8a4 = *(undefined4 *)(iVar12 + 0x1000aff0);
      DAT_1000b8a8 = *(undefined4 *)(iVar12 + 0x1000aff4);
      goto LAB_10006bcc;
    }
    goto LAB_10006bc7;
  }
  goto LAB_10006a62;
code_r0x10006a7c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1000b0d7 < (int)pUVar5) goto code_r0x10006a87;
  goto LAB_10006a78;
code_r0x10006a87:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000bac4 = 0;
    puVar15 = &DAT_1000b9c0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000b8ac = 0;
      DAT_1000b898 = CodePage;
    }
    else {
      DAT_1000b898 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000b9c0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000b9c0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000bac4 = FUN_10006c32(CodePage);
      _DAT_1000b8ac = 1;
    }
    DAT_1000b8a0 = 0;
    DAT_1000b8a4 = 0;
    DAT_1000b8a8 = 0;
  }
  else {
    if (DAT_1000b840 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10006bd9;
    }
LAB_10006bc7:
    FUN_10006c65();
  }
LAB_10006bcc:
  FUN_10006c8e();
LAB_10006a62:
  uVar14 = 0;
LAB_10006bd9:
  FUN_10006847(0x19);
  return uVar14;
}



// Function: FUN_10006be8 @ 0x10006be8

int __cdecl FUN_10006be8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000b840 = 1;
                    /* WARNING: Could not recover jumptable at 0x10006c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000b840 = 1;
                    /* WARNING: Could not recover jumptable at 0x10006c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000b870;
  }
  DAT_1000b840 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10006c32 @ 0x10006c32

undefined4 __cdecl FUN_10006c32(int param_1)

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



// Function: FUN_10006c65 @ 0x10006c65

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006c65(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000b9c0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000b898 = 0;
  _DAT_1000b8ac = 0;
  DAT_1000bac4 = 0;
  DAT_1000b8a0 = 0;
  DAT_1000b8a4 = 0;
  DAT_1000b8a8 = 0;
  return;
}



// Function: FUN_10006c8e @ 0x10006c8e

void FUN_10006c8e(void)

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
  
  BVar2 = GetCPInfo(DAT_1000b898,&local_18);
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
    FUN_10007e02(1,local_118,0x100,local_518,DAT_1000b898,DAT_1000bac4,0);
    FUN_10007bb3(DAT_1000bac4,0x100,local_118,0x100,local_218,0x100,DAT_1000b898,0);
    FUN_10007bb3(DAT_1000bac4,0x200,local_118,0x100,local_318,0x100,DAT_1000b898,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000b9c0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10006d9a;
        }
        (&DAT_1000b8c0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000b9c0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10006d9a:
        (&DAT_1000b8c0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000b9c0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10006de4;
        }
        (&DAT_1000b8c0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000b9c0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10006de4:
        (&DAT_1000b8c0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10006e13 @ 0x10006e13

void FUN_10006e13(void)

{
  if (DAT_1000bbe8 == 0) {
    FUN_10006a3b(-3);
    DAT_1000bbe8 = 1;
  }
  return;
}



// Function: FUN_10006e30 @ 0x10006e30

undefined4 * __cdecl FUN_10006e30(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10006fe7_caseD_2;
        case 3:
          goto switchD_10006fe7_caseD_3;
        }
        goto switchD_10006fe7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006fe7_caseD_0;
      case 1:
        goto switchD_10006fe7_caseD_1;
      case 2:
        goto switchD_10006fe7_caseD_2;
      case 3:
        goto switchD_10006fe7_caseD_3;
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
              goto switchD_10006fe7_caseD_2;
            case 3:
              goto switchD_10006fe7_caseD_3;
            }
            goto switchD_10006fe7_caseD_1;
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
              goto switchD_10006fe7_caseD_2;
            case 3:
              goto switchD_10006fe7_caseD_3;
            }
            goto switchD_10006fe7_caseD_1;
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
              goto switchD_10006fe7_caseD_2;
            case 3:
              goto switchD_10006fe7_caseD_3;
            }
            goto switchD_10006fe7_caseD_1;
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
switchD_10006fe7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10006fe7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10006fe7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10006fe7_caseD_0:
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
        goto switchD_10006e65_caseD_2;
      case 3:
        goto switchD_10006e65_caseD_3;
      }
      goto switchD_10006e65_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10006e65_caseD_0;
    case 1:
      goto switchD_10006e65_caseD_1;
    case 2:
      goto switchD_10006e65_caseD_2;
    case 3:
      goto switchD_10006e65_caseD_3;
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
            goto switchD_10006e65_caseD_2;
          case 3:
            goto switchD_10006e65_caseD_3;
          }
          goto switchD_10006e65_caseD_1;
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
            goto switchD_10006e65_caseD_2;
          case 3:
            goto switchD_10006e65_caseD_3;
          }
          goto switchD_10006e65_caseD_1;
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
            goto switchD_10006e65_caseD_2;
          case 3:
            goto switchD_10006e65_caseD_3;
          }
          goto switchD_10006e65_caseD_1;
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
switchD_10006e65_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10006e65_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10006e65_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10006e65_caseD_0:
  return param_1;
}



// Function: FUN_10007165 @ 0x10007165

undefined4 FUN_10007165(void)

{
  DAT_1000b894 = HeapAlloc(DAT_1000bac8,0,0x140);
  if (DAT_1000b894 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000b88c = 0;
  DAT_1000b890 = 0;
  DAT_1000b888 = DAT_1000b894;
  DAT_1000b880 = 0x10;
  return 1;
}



// Function: FUN_100071a3 @ 0x100071a3

uint __cdecl FUN_100071a3(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000b894;
  while( true ) {
    if (DAT_1000b894 + DAT_1000b890 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_100071ce @ 0x100071ce

void __cdecl FUN_100071ce(uint *param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  
  uVar5 = param_1[4];
  iVar6 = *(int *)(param_2 - 4);
  piVar9 = (int *)(param_2 - 4);
  uVar10 = param_2 - param_1[3] >> 0xf;
  uVar7 = *(uint *)(param_2 - 8);
  local_10 = iVar6 + -1;
  piVar3 = (int *)(uVar10 * 0x204 + 0x144 + uVar5);
  uVar12 = *(uint *)(local_10 + (int)piVar9);
  if ((uVar12 & 1) == 0) {
    param_2 = ((int)uVar12 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (*(int *)(iVar6 + 3 + (int)piVar9) == *(int *)(iVar6 + 7 + (int)piVar9)) {
      if (param_2 < 0x20) {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 7 + (int)piVar9) + 4) =
         *(undefined4 *)(iVar6 + 3 + (int)piVar9);
    local_10 = local_10 + uVar12;
    *(undefined4 *)(*(int *)(iVar6 + 3 + (int)piVar9) + 8) =
         *(undefined4 *)(iVar6 + 7 + (int)piVar9);
  }
  uVar12 = (local_10 >> 4) - 1;
  if (0x3f < uVar12) {
    uVar12 = 0x3f;
  }
  if ((uVar7 & 1) == 0) {
    piVar9 = (int *)((int)piVar9 - uVar7);
    param_2 = ((int)uVar7 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    local_10 = local_10 + uVar7;
    uVar12 = (local_10 >> 4) - 1;
    if (0x3f < uVar12) {
      uVar12 = 0x3f;
    }
    if (param_2 != uVar12) {
      if (piVar9[1] == piVar9[2]) {
        if (param_2 < 0x20) {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(int *)(piVar9[2] + 4) = piVar9[1];
      *(int *)(piVar9[1] + 8) = piVar9[2];
    }
  }
  if (((uVar7 & 1) != 0) || (param_2 != uVar12)) {
    piVar9[1] = piVar3[uVar12 * 2 + 1];
    piVar9[2] = (int)(piVar3 + uVar12 * 2);
    (piVar3 + uVar12 * 2)[1] = (int)piVar9;
    *(int **)(piVar9[1] + 8) = piVar9;
    if (piVar9[1] == piVar9[2]) {
      cVar4 = *(char *)(uVar12 + 4 + uVar5);
      *(char *)(uVar12 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar12;
      if (uVar12 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
      }
    }
  }
  *piVar9 = local_10;
  *(int *)(local_10 + -4 + (int)piVar9) = local_10;
  *piVar3 = *piVar3 + -1;
  uVar5 = DAT_1000b884;
  puVar2 = DAT_1000b88c;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_1000b88c != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_1000b884 * 0x8000 + DAT_1000b88c[3]),0x8000,0x4000);
    DAT_1000b88c[2] = DAT_1000b88c[2] | 0x80000000U >> ((byte)DAT_1000b884 & 0x1f);
    *(undefined4 *)(DAT_1000b88c[4] + 0xc4 + DAT_1000b884 * 4) = 0;
    *(char *)(DAT_1000b88c[4] + 0x43) = *(char *)(DAT_1000b88c[4] + 0x43) + -1;
    if (*(char *)(DAT_1000b88c[4] + 0x43) == '\0') {
      DAT_1000b88c[1] = DAT_1000b88c[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_1000b88c[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_1000b88c[3],0,0x8000);
      HeapFree(DAT_1000bac8,0,(LPVOID)DAT_1000b88c[4]);
      FUN_10007f50(DAT_1000b88c,DAT_1000b88c + 5,
                   (DAT_1000b890 * 0x14 - (int)DAT_1000b88c) + -0x14 + DAT_1000b894);
      DAT_1000b890 = DAT_1000b890 + -1;
      if (DAT_1000b88c < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_1000b888 = DAT_1000b894;
      puVar2 = param_1;
    }
  }
  DAT_1000b88c = puVar2;
  DAT_1000b884 = uVar5;
  return;
}



// Function: FUN_100074f9 @ 0x100074f9

int * __cdecl FUN_100074f9(uint *param_1)

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
  
  puVar8 = DAT_1000b894 + DAT_1000b890 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000b888;
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
  puVar11 = DAT_1000b894;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000b888 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000b888) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000b894;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000b888 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000b888) && (param_1 = FUN_10007802(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100078b3((int)param_1);
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
  DAT_1000b888 = param_1;
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
    if (iVar9 == 0) goto LAB_100077bf;
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
LAB_100077bf:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000b88c)) && (local_8 == DAT_1000b884)) {
    DAT_1000b88c = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10007802 @ 0x10007802

undefined4 * FUN_10007802(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000b890 == DAT_1000b880) {
    pvVar2 = HeapReAlloc(DAT_1000bac8,0,DAT_1000b894,(DAT_1000b880 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000b880 = DAT_1000b880 + 0x10;
    DAT_1000b894 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000b894 + DAT_1000b890 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000bac8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000b890 = DAT_1000b890 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000bac8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100078b3 @ 0x100078b3

int __cdecl FUN_100078b3(int param_1)

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



// Function: FUN_100079ae @ 0x100079ae

int __cdecl FUN_100079ae(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000b844 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000b844 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000b844 != (FARPROC)0x0) {
        DAT_1000b848 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000b84c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100079fd;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100079fd:
    if (DAT_1000b848 != (FARPROC)0x0) {
      iVar1 = (*DAT_1000b848)();
      if ((iVar1 != 0) && (DAT_1000b84c != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000b84c)(iVar1);
      }
    }
    iVar1 = (*DAT_1000b844)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10007a40

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
        goto joined_r0x10007a7e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10007abb;
        goto LAB_10007b29;
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
joined_r0x10007b25:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10007b29:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10007abb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10007b25;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10007b25;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10007b25;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10007a7e:
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
LAB_10007abb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: _memset @ 0x10007b40

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



// Function: FUN_10007b98 @ 0x10007b98

undefined4 __cdecl FUN_10007b98(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000b850 != (code *)0x0) {
    iVar1 = (*DAT_1000b850)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10007bb3 @ 0x10007bb3

int __cdecl
FUN_10007bb3(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100094c8;
  puStack_10 = &LAB_10008380;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000b878 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000b878 = 2;
    }
    else {
      DAT_1000b878 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10007dd7(param_3,param_4);
  }
  if (DAT_1000b878 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000b878 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000b870;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10008460();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10008460();
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



// Function: FUN_10007dd7 @ 0x10007dd7

int __cdecl FUN_10007dd7(char *param_1,int param_2)

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



// Function: FUN_10007e02 @ 0x10007e02

BOOL __cdecl
FUN_10007e02(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100094e0;
  puStack_10 = &LAB_10008380;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000b87c;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000b87c == 0) {
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
  DAT_1000b87c = iVar3;
  if (DAT_1000b87c != 2) {
    if (DAT_1000b87c == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000b870;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10008460();
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
    param_6 = DAT_1000b860;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10007f50 @ 0x10007f50

undefined4 * __cdecl FUN_10007f50(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10008107_caseD_2;
        case 3:
          goto switchD_10008107_caseD_3;
        }
        goto switchD_10008107_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10008107_caseD_0;
      case 1:
        goto switchD_10008107_caseD_1;
      case 2:
        goto switchD_10008107_caseD_2;
      case 3:
        goto switchD_10008107_caseD_3;
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
              goto switchD_10008107_caseD_2;
            case 3:
              goto switchD_10008107_caseD_3;
            }
            goto switchD_10008107_caseD_1;
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
              goto switchD_10008107_caseD_2;
            case 3:
              goto switchD_10008107_caseD_3;
            }
            goto switchD_10008107_caseD_1;
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
              goto switchD_10008107_caseD_2;
            case 3:
              goto switchD_10008107_caseD_3;
            }
            goto switchD_10008107_caseD_1;
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
switchD_10008107_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10008107_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10008107_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10008107_caseD_0:
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
        goto switchD_10007f85_caseD_2;
      case 3:
        goto switchD_10007f85_caseD_3;
      }
      goto switchD_10007f85_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10007f85_caseD_0;
    case 1:
      goto switchD_10007f85_caseD_1;
    case 2:
      goto switchD_10007f85_caseD_2;
    case 3:
      goto switchD_10007f85_caseD_3;
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
            goto switchD_10007f85_caseD_2;
          case 3:
            goto switchD_10007f85_caseD_3;
          }
          goto switchD_10007f85_caseD_1;
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
            goto switchD_10007f85_caseD_2;
          case 3:
            goto switchD_10007f85_caseD_3;
          }
          goto switchD_10007f85_caseD_1;
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
            goto switchD_10007f85_caseD_2;
          case 3:
            goto switchD_10007f85_caseD_3;
          }
          goto switchD_10007f85_caseD_1;
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
switchD_10007f85_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10007f85_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10007f85_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10007f85_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x10008288

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100082a0,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x100082ca

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
  puStack_18 = &LAB_100082a8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000835e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_1000835e @ 0x1000835e

void FUN_1000835e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000b0f8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000b0f4 = in_EAX;
  DAT_1000b0fc = unaff_EBP;
  return;
}



// Function: FUN_1000843d @ 0x1000843d

void FUN_1000843d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10008460 @ 0x10008460

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10008460(void)

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




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
  RegisterUnits(&DAT_10009c20,&DAT_100095d0);
  RegisterUnits(&DAT_10009c28,&DAT_100095cc);
  RegisterUnits(&DAT_10009c38,&DAT_100095c8);
  RegisterUnits(&DAT_10009c40,&DAT_100095c4);
  RegisterUnits(&DAT_10009c48,&DAT_100095c0);
  RegisterUnits(&DAT_10009c50,&DAT_100095bc);
  RegisterUnits(&DAT_10009c58,&DAT_100095b8);
  RegisterUnits(&DAT_10009c60,&DAT_100095b4);
  RegisterUnits(&DAT_10009c68,&DAT_100095b0);
  RegisterUnits(&DAT_10009d18,&DAT_100095ac);
  RegisterUnits(&DAT_10009d20,&DAT_100095a8);
  RegisterUnits(&DAT_10009d30,&DAT_100095a4);
  RegisterUnits(&DAT_10009d38,&DAT_100095a0);
  RegisterUnits(&DAT_10009d48,&DAT_1000959c);
  RegisterUnits(&DAT_10009d58,&DAT_10009598);
  RegisterUnits(&DAT_10009d68,&DAT_10009594);
  RegisterUnits(&DAT_10009d78,&DAT_10009590);
  RegisterUnits(&DAT_10009d90,&DAT_1000958c);
  RegisterUnits(&DAT_10009da8,&DAT_10009588);
  RegisterUnits(&DAT_10009d40,&DAT_10009584);
  RegisterUnits(&DAT_10009d50,&DAT_10009580);
  RegisterUnits(&DAT_10009d60,&DAT_1000957c);
  RegisterUnits(&DAT_10009d70,&DAT_10009578);
  RegisterUnits(&DAT_10009da0,&DAT_10009574);
  RegisterUnits(&DAT_1000a000,&DAT_1000956c);
  RegisterUnits(&DAT_1000a008,&DAT_10009564);
  RegisterUnits(&DAT_1000a010,&DAT_1000955c);
  RegisterUnits(&DAT_1000a018,&DAT_10009554);
  RegisterUnits(&DAT_10009db8,&DAT_10009550);
  RegisterUnits(&DAT_1000a020,&DAT_10009548);
  RegisterUnits(&DAT_1000a028,&DAT_10009540);
  RegisterUnits(&DAT_1000a030,&DAT_10009538);
  RegisterUnits(&DAT_10009dc8,&DAT_10009534);
  RegisterUnits(&DAT_1000a040,&DAT_1000952c);
  RegisterUnits(&DAT_1000a048,&DAT_10009524);
  RegisterUnits(&DAT_1000a050,&DAT_1000951c);
  RegisterUnits(&DAT_1000a058,&DAT_10009514);
  RegisterUnits(&DAT_10009dd8,&DAT_10009510);
  RegisterUnits(&DAT_1000a060,&DAT_10009508);
  RegisterUnits(&DAT_10009de8,&DAT_10009504);
  RegisterUnits(&DAT_1000a068,&DAT_100094fc);
  RegisterUnits(&DAT_10009d80,&DAT_100094f8);
  RegisterUnits(&DAT_10009d98,&DAT_100094f4);
  RegisterUnits(&DAT_10009db0,&DAT_100094f0);
  RegisterUnits(&DAT_10009dc0,&DAT_100094ec);
  RegisterUnits(&DAT_10009dd0,&DAT_100094e8);
  RegisterUnits(&DAT_10009de0,&DAT_100094e4);
  RegisterUnits(&DAT_10009df0,&DAT_100094e0);
  RegisterZone(&DAT_10009df8,&DAT_100094dc);
  RegisterZone(&DAT_10009e00,&DAT_100094d8);
  RegisterZone(&DAT_10009e08,&DAT_100094d4);
  RegisterZone(&DAT_10009e10,&DAT_100094d0);
  RegisterZone(&DAT_10009e18,&DAT_100094cc);
  RegisterZone(&DAT_10009e20,&DAT_100094c8);
  RegisterZone(&DAT_10009e28,&DAT_100094c4);
  RegisterZone(&DAT_10009e30,&DAT_100094c0);
  RegisterZone(&DAT_10009e38,&DAT_100094bc);
  RegisterZone(&DAT_10009ef8,&DAT_100094b8);
  RegisterZone(&DAT_10009f00,&DAT_100094b4);
  RegisterZone(&DAT_10009f08,&DAT_100094b0);
  RegisterZone(&DAT_10009f10,&DAT_100094ac);
  RegisterZone(&DAT_10009f20,&DAT_100094a8);
  RegisterZone(&DAT_10009f30,&DAT_100094a4);
  RegisterZone(&DAT_10009f40,&DAT_100094a0);
  RegisterZone(&DAT_10009f50,&DAT_1000949c);
  RegisterZone(&DAT_10009fb0,&DAT_10009498);
  RegisterZone(&DAT_10009fc8,&DAT_10009494);
  RegisterZone(&DAT_10009f18,&DAT_10009490);
  RegisterZone(&DAT_10009f28,&DAT_1000948c);
  RegisterZone(&DAT_10009f38,&DAT_10009488);
  RegisterZone(&DAT_10009f48,&DAT_10009484);
  RegisterZone(&DAT_10009fa8,&DAT_10009480);
  RegisterZone(&DAT_10009fc0,&DAT_1000947c);
  RegisterZone(&DAT_1000a0a0,&DAT_10009474);
  RegisterZone(&DAT_10009fd8,&DAT_10009470);
  RegisterZone(&DAT_1000a0a8,&DAT_10009468);
  RegisterZone(&DAT_10009fe8,&DAT_10009464);
  RegisterZone(&DAT_1000a0b0,&DAT_1000945c);
  RegisterZone(&DAT_1000a0b8,&DAT_10009454);
  RegisterZone(&DAT_10009ff0,&DAT_10009450);
  RegisterZone(&DAT_10009ff8,&DAT_1000944c);
  RegisterZone(&DAT_10009fb8,&DAT_10009448);
  RegisterZone(&DAT_10009fd0,&DAT_10009444);
  RegisterZone(&DAT_10009fe0,&DAT_10009440);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  RegisterDynGroup(&DAT_10009c00);
  RegisterDynGroup(&DAT_10009c08);
  RegisterDynGroup(&DAT_10009c10);
  RegisterDynGroup(&DAT_10009c18);
  RegisterVar(&DAT_10009ed0,4);
  RegisterVar(&DAT_10009ed4,4);
  RegisterVar(&DAT_10009d28,4);
  RegisterVar(&DAT_1000a078,4);
  RegisterVar(&DAT_1000a074,4);
  RegisterVar(&DAT_10009ed8,4);
  RegisterVar(&DAT_1000a070,4);
  RegisterVar(&DAT_10009a80,4);
  RegisterVar(&DAT_10009c30,4);
  RegisterVar(&DAT_1000a0c0,4);
  RegisterVar(&DAT_1000a090,4);
  RegisterVar(&DAT_1000a07c,4);
  RegisterVar(&DAT_1000a038,4);
  RegisterVar(&DAT_10009c78,4);
  RegisterVar(&DAT_1000a080,8);
  RegisterVar(&DAT_1000a088,8);
  RegisterDynGroup(&DAT_10009ce0);
  DAT_10009a90 = 0;
  do {
    RegisterDynGroup(&DAT_10009ce8 + DAT_10009a90 * 8);
    RegisterDynGroup(&DAT_10009c80 + DAT_10009a90 * 8);
    RegisterVar(&DAT_10009cb0 + DAT_10009a90 * 8,8);
    DAT_10009a90 = DAT_10009a90 + 1;
  } while (DAT_10009a90 < 6);
  DAT_10009a90 = 0;
  do {
    RegisterVar(&DAT_10009f58 + DAT_10009a90,4);
    DAT_10009a90 = DAT_10009a90 + 1;
  } while (DAT_10009a90 < 0x14);
  RegisterUnitType(&DAT_10009c70,s_Mortira_GE__10009434);
  RegisterUnitType(&DAT_10009ef0,s_Pik_evro_rus_GE__10009420);
  RegisterUnitType(&DAT_10009a88,s_Mushketer_PR_GE__1000940c);
  RegisterUnitType(&DAT_1000a0c8,s_Kirasir_GE__10009400);
  RegisterUnitType(&DAT_10009b50,s_Grenader_GE__100093f0);
  RegisterUnitType(&DAT_10009b58,s_GRUZ_Z_UN__100093e4);
  RegisterFormation(&DAT_1000a098,s__LINEMORB6_100093d8);
  RegisterUnitType(&DAT_10009ba0,s_Europ_GE__100093cc);
  RegisterUnitType(&DAT_10009bb0,s_Dom_Prussia_GE__100093bc);
  RegisterUnitType(&DAT_10009bc0,s_Melnica_GE__100093b0);
  RegisterUnitType(&DAT_10009bd0,s_Sclad1_GE__100093a4);
  RegisterUnitType(&DAT_10009bd8,s_shahta_GE__10009398);
  RegisterUnitType(&DAT_10009be0,s_shahta_FE_GE__10009388);
  RegisterUnitType(&DAT_10009be8,s_shahta_UG_GE__10009378);
  RegisterUnitType(&DAT_10009bf0,s_Kuznica_GE__1000936c);
  RegisterUnitType(&DAT_10009bf8,s_Konushnia_Swesair_GE__10009354);
  RegisterUnitType(&DAT_10009b60,s_Cercov_Poland_GE__10009340);
  RegisterUnitType(&DAT_10009b68,s_akademia_E_GE__10009330);
  RegisterUnitType(&DAT_10009b70,s_Dip_korpus_GE__10009320);
  RegisterUnitType(&DAT_10009b78,s_Kazarma_evro_GE__1000930c);
  RegisterUnitType(&DAT_10009b88,s_Kazarma_GE__10009300);
  RegisterUnitType(&DAT_10009b90,s_artileri_depo_GE__100092ec);
  RegisterUnitType(&DAT_10009b98,s_Rinok_GE__100092e0);
  RegisterUnitType(&DAT_10009ba8,s_WALL_UKR_GE__100092d0);
  RegisterUnitType(&DAT_10009bb8,s_WALL_EV_GE__100092c4);
  RegisterUnitType(&DAT_10009bc8,s_Bashnia_GE__100092b8);
  RegisterUnitType(&DAT_10009b80,s_PorE_GE__100092ac);
  RegisterUnitType(&DAT_10009e40,s_Center_France_fr__10009298);
  RegisterUnitType(&DAT_10009e48,s_Dom_France_fr__10009288);
  RegisterUnitType(&DAT_10009e50,s_Melnica_fr__1000927c);
  RegisterUnitType(&DAT_10009e58,s_Sclad2_fr__10009270);
  RegisterUnitType(&DAT_10009e68,s_shahta_fr__10009264);
  RegisterUnitType(&DAT_10009e78,s_shahta_FE_fr__10009254);
  RegisterUnitType(&DAT_10009e88,s_shahta_UG_fr__10009244);
  RegisterUnitType(&DAT_10009e98,s_Kuznica_FR_fr__10009234);
  RegisterUnitType(&DAT_10009ea8,s_Konushnia_FR_fr__10009220);
  RegisterUnitType(&DAT_10009a98,s_NotrDam_fr__10009214);
  RegisterUnitType(&DAT_10009aa0,s_akademia_FR_fr__10009204);
  RegisterUnitType(&DAT_10009aa8,s_Dip_korpus_FR_fr__100091f0);
  RegisterUnitType(&DAT_10009ab0,s_Kazarma_1_FR_fr__100091dc);
  RegisterUnitType(&DAT_10009ac0,s_Kazarma_FR_fr__100091cc);
  RegisterUnitType(&DAT_10009ac8,s_artileri_depo_FR_fr__100091b4);
  RegisterUnitType(&DAT_10009ad0,s_Rinok_fr__100091a8);
  RegisterUnitType(&DAT_10009ad8,s_WALL_UKR_fr__10009198);
  RegisterUnitType(&DAT_10009ae0,s_WALL_EV_fr__1000918c);
  RegisterUnitType(&DAT_10009ae8,s_Bashnia_fr__10009180);
  RegisterUnitType(&DAT_10009ab8,s_PorE_fr__10009174);
  RegisterUnitType(&DAT_10009e60,s_Center_Sacson_SA__10009160);
  RegisterUnitType(&DAT_10009e70,s_Dom_Saksona_SA__10009150);
  RegisterUnitType(&DAT_10009e80,s_Melnica_SA__10009144);
  RegisterUnitType(&DAT_10009e90,s_Sclad1_SA__10009138);
  RegisterUnitType(&DAT_10009ea0,s_shahta_SA__1000912c);
  RegisterUnitType(&DAT_10009eb0,s_shahta_FE_SA__1000911c);
  RegisterUnitType(&DAT_10009eb8,s_shahta_UG_SA__1000910c);
  RegisterUnitType(&DAT_10009ec0,s_Kuznica_SA__10009100);
  RegisterUnitType(&DAT_10009ec8,s_Konushnia_Swesair_SA__100090e8);
  RegisterUnitType(&DAT_10009af0,s_Cercov_Poland_SA__100090d4);
  RegisterUnitType(&DAT_10009af8,s_akademia_E_SA__100090c4);
  RegisterUnitType(&DAT_10009b00,s_Dip_korpus_SA__100090b4);
  RegisterUnitType(&DAT_10009b08,s_Kazarma_evro_SA__100090a0);
  RegisterUnitType(&DAT_10009b10,s_Kazarma_SA__10009094);
  RegisterUnitType(&DAT_10009b20,s_artileri_depo_SA__10009080);
  RegisterUnitType(&DAT_10009b28,s_Rinok_SA__10009074);
  RegisterUnitType(&DAT_10009b30,s_WALL_UKR_SA__10009064);
  RegisterUnitType(&DAT_10009b38,s_WALL_EV_SA__10009058);
  RegisterUnitType(&DAT_10009b40,s_Bashnia_SA__1000904c);
  RegisterUnitType(&DAT_10009b18,s_PorE_SA__10009040);
  EnableUnit(0,&DAT_10009ba0,0);
  EnableUnit(0,&DAT_10009bb0,0);
  EnableUnit(0,&DAT_10009bc0,0);
  EnableUnit(0,&DAT_10009bd0,0);
  EnableUnit(0,&DAT_10009bd8,0);
  EnableUnit(0,&DAT_10009be0,0);
  EnableUnit(0,&DAT_10009be8,0);
  EnableUnit(0,&DAT_10009bf0,0);
  EnableUnit(0,&DAT_10009bf8,0);
  EnableUnit(0,&DAT_10009b60,0);
  EnableUnit(0,&DAT_10009b68,0);
  EnableUnit(0,&DAT_10009b70,0);
  EnableUnit(0,&DAT_10009b78,0);
  EnableUnit(0,&DAT_10009b88,0);
  EnableUnit(0,&DAT_10009b90,0);
  EnableUnit(0,&DAT_10009b98,0);
  EnableUnit(0,&DAT_10009ba8,0);
  EnableUnit(0,&DAT_10009bb8,0);
  EnableUnit(0,&DAT_10009bc8,0);
  EnableUnit(0,&DAT_10009b80,0);
  EnableUnit(0,&DAT_10009e40,0);
  EnableUnit(0,&DAT_10009e48,0);
  EnableUnit(0,&DAT_10009e50,0);
  EnableUnit(0,&DAT_10009e58,0);
  EnableUnit(0,&DAT_10009e68,0);
  EnableUnit(0,&DAT_10009e78,0);
  EnableUnit(0,&DAT_10009e88,0);
  EnableUnit(0,&DAT_10009e98,0);
  EnableUnit(0,&DAT_10009ea8,0);
  EnableUnit(0,&DAT_10009a98,0);
  EnableUnit(0,&DAT_10009aa0,0);
  EnableUnit(0,&DAT_10009aa8,0);
  EnableUnit(0,&DAT_10009ab0,0);
  EnableUnit(0,&DAT_10009ac0,0);
  EnableUnit(0,&DAT_10009ac8,0);
  EnableUnit(0,&DAT_10009ad0,0);
  EnableUnit(0,&DAT_10009ad8,0);
  EnableUnit(0,&DAT_10009ae0,0);
  EnableUnit(0,&DAT_10009ae8,0);
  EnableUnit(0,&DAT_10009ab8,0);
  EnableUnit(0,&DAT_10009e60,0);
  EnableUnit(0,&DAT_10009e70,0);
  EnableUnit(0,&DAT_10009e80,0);
  EnableUnit(0,&DAT_10009e90,0);
  EnableUnit(0,&DAT_10009ea0,0);
  EnableUnit(0,&DAT_10009eb0,0);
  EnableUnit(0,&DAT_10009eb8,0);
  EnableUnit(0,&DAT_10009ec0,0);
  EnableUnit(0,&DAT_10009ec8,0);
  EnableUnit(0,&DAT_10009af0,0);
  EnableUnit(0,&DAT_10009af8,0);
  EnableUnit(0,&DAT_10009b00,0);
  EnableUnit(0,&DAT_10009b08,0);
  EnableUnit(0,&DAT_10009b10,0);
  EnableUnit(0,&DAT_10009b20,0);
  EnableUnit(0,&DAT_10009b28,0);
  EnableUnit(0,&DAT_10009b30,0);
  EnableUnit(0,&DAT_10009b38,0);
  EnableUnit(0,&DAT_10009b40,0);
  EnableUnit(0,&DAT_10009b18,0);
  SetPlayerName(1,s_PRUSSIA_10009038);
  SetPlayerName(5,s_ROBBERS_10009030);
  return;
}



// Function: FUN_10001ba0 @ 0x10001ba0

void __cdecl FUN_10001ba0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_1;
  DAT_10009b48 = param_3;
  return;
}



// Function: ProcessScenary @ 0x10001bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  
                    /* 0x1bc0  2  ProcessScenary */
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    puVar8 = &DAT_10009f58;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    DAT_10009d28 = 0;
    DAT_10009a90 = 0x14;
    _DAT_1000a078 = 0;
    _DAT_1000a074 = 0;
    DAT_10009ed8 = 0;
    DAT_10009a80 = 0;
    DAT_10009c30 = 0;
    DAT_1000a070 = 0;
    DAT_1000a090 = 0;
    DAT_10009ed0 = 0;
    DAT_10009ed4 = 0;
    DAT_1000a038 = 0;
    DAT_1000a07c = 0x13;
    DAT_10009c78 = 0x13;
    SetTrigg(99,0);
    iVar3 = GetDiff(0);
    SetResource(0,3,(4 - iVar3) * 1000);
    iVar3 = GetDiff(0);
    SetResource(0,1,(6 - iVar3) * 500);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar3 = GetDiff(0);
    SetResource(0,5,(6 - iVar3) * 500);
    iVar3 = GetDiff(0);
    SetResource(0,4,(6 - iVar3) * 500);
    SetResource(1,3,90000000);
    SetResource(1,1,90000000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,90000000);
    SetResource(1,4,90000000);
    SetResource(5,3,9000000);
    SetResource(5,1,9000000);
    SetResource(5,0,0);
    SetResource(5,2,0);
    SetResource(5,5,9000000);
    SetResource(5,4,9000000);
    InitialUpgrade(&DAT_100095a8,s_Mortira_GE_BUILD_10009738);
    InitialUpgrade(&DAT_100095a8,s_Mortira_GE_BUILD3_10009724);
    InitialUpgrade(&DAT_100095a8,s_Mortira_GE_BUILD4_10009710);
    InitialUpgrade(&DAT_100095a8,s_Mortira_GE_BUILD5_100096fc);
    InitialUpgrade(&DAT_100095a8,s_Mortira_GE_BUILD6_100096e8);
    InitialUpgrade(&DAT_100095a8,s_Mortira_GE_BUILD7_100096d4);
    InitialUpgrade(&DAT_100095a0,s_KUZ03GE_100096cc);
    InitialUpgrade(&DAT_100095b4,s_MAINGE_100096c4);
    InitialUpgrade(&DAT_1000952c,s_AKA04FR_100096bc);
    InitialUpgrade(&DAT_1000952c,s_KUZ01FR_100096b4);
    ShowPage(s__PAGE0_100096ac);
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      SetResource(0,3,20000);
      SelectUnits(&DAT_10009dd0,0);
      SelDie(1);
      SelectUnits(&DAT_10009de0,0);
      SelDie(1);
    }
    SelectUnits(&DAT_10009df0,0);
    AllowAttack(1,0);
    SelectUnits(&DAT_10009d48,0);
    SelOpenGates(1);
    SelectUnits(&DAT_10009d58,0);
    SelOpenGates(1);
    SelectUnits(&DAT_10009d68,0);
    SelOpenGates(1);
    SelectUnits(&DAT_10009d78,0);
    SelOpenGates(1);
    SelectUnits(&DAT_10009c40,0);
    SelSendTo(1,&DAT_10009e08,0x14,0);
    SelSendTo(1,&DAT_10009e10,0xf0,2);
    SelSendTo(1,&DAT_10009e18,0,2);
    SelSendTo(1,&DAT_10009e20,0,2);
    SelSendTo(1,&DAT_10009e28,0x1e,2);
    SelSendTo(1,&DAT_10009e30,0x19,2);
    SelSendTo(1,&DAT_10009e38,0xe1,2);
    SelSendTo(1,&DAT_10009ef8,0,2);
    SelSendTo(1,&DAT_10009f00,0xf0,2);
    SelSendTo(1,&DAT_10009f08,0xe1,2);
    SelSendTo(1,&DAT_10009f10,0xe1,2);
    SelectUnits(&DAT_10009d40,0);
    Patrol(1,&DAT_10009f18,0x40);
    SelectUnits(&DAT_10009d50,0);
    Patrol(1,&DAT_10009f28,0x40);
    SelectUnits(&DAT_1000a018,0);
    Patrol(1,&DAT_1000a0a0,0x46);
    SelectUnits(&DAT_1000a030,0);
    Patrol(1,&DAT_1000a0a8,0);
    SelectUnits(&DAT_1000a050,0);
    Patrol(1,&DAT_1000a0b0,0xe6);
    SelectUnits(&DAT_1000a058,0);
    Patrol(1,&DAT_1000a0b8,200);
    TakeFood(&DAT_10009dc8);
    TakeWood(&DAT_10009da0);
    TakeWood(&DAT_1000a000);
    TakeStone(&DAT_10009db8);
    RunTimer(1,0x32);
  }
  if (((((&DAT_10009f58)[DAT_10009d28] == 1) && (DAT_1000a070 == 0)) && (DAT_10009a80 == 0)) &&
     (((((DAT_10009c30 == 0 && (DAT_10009ed8 == 0)) &&
        ((cVar1 = CheckProduction(&DAT_10009c50), cVar1 != '\0' &&
         ((cVar1 = CheckProduction(&DAT_10009c58), cVar1 != '\0' &&
          (cVar1 = CheckProduction(&DAT_10009c60), cVar1 != '\0')))))) &&
       (cVar1 = CheckProduction(&DAT_10009c68), cVar1 != '\0')) &&
      ((cVar1 = CheckProduction(&DAT_10009d18), cVar1 != '\0' &&
       (cVar1 = CheckProduction(&DAT_10009d20), cVar1 != '\0')))))) {
    (&DAT_10009f58)[DAT_10009d28] = 2;
    RunTimer(7,100);
  }
  if ((((&DAT_10009f58)[DAT_10009d28] == 1) && (cVar1 = Trigg(0x1c), cVar1 != '\0')) &&
     (cVar1 = Trigg(0x1d), cVar1 != '\0')) {
    if (0 < DAT_10009a80) {
      cVar1 = CheckProduction(&DAT_10009c50);
      if (cVar1 != '\0') {
        DAT_10009a80 = DAT_10009a80 + -1;
        ProduceUnit(&DAT_10009c50,&DAT_10009ef0,DAT_10009b48);
      }
      if ((0 < DAT_10009a80) && (cVar1 = CheckProduction(&DAT_10009c58), cVar1 != '\0')) {
        DAT_10009a80 = DAT_10009a80 + -1;
        ProduceUnit(&DAT_10009c58,&DAT_10009ef0,DAT_10009b48);
      }
    }
    if (0 < DAT_10009c30) {
      cVar1 = CheckProduction(&DAT_10009c50);
      if (cVar1 != '\0') {
        DAT_10009c30 = DAT_10009c30 + -1;
        ProduceUnit(&DAT_10009c50,&DAT_10009a88,DAT_10009b48);
      }
      if ((0 < DAT_10009c30) && (cVar1 = CheckProduction(&DAT_10009c58), cVar1 != '\0')) {
        DAT_10009c30 = DAT_10009c30 + -1;
        ProduceUnit(&DAT_10009c58,&DAT_10009a88,DAT_10009b48);
      }
    }
    if (0 < DAT_1000a0c0) {
      cVar1 = CheckProduction(&DAT_10009c50);
      if (cVar1 != '\0') {
        DAT_1000a0c0 = DAT_1000a0c0 + -1;
        ProduceUnit(&DAT_10009c50,&DAT_10009b50,DAT_10009b48);
      }
      if ((0 < DAT_1000a0c0) && (cVar1 = CheckProduction(&DAT_10009c58), cVar1 != '\0')) {
        DAT_1000a0c0 = DAT_1000a0c0 + -1;
        ProduceUnit(&DAT_10009c58,&DAT_10009b50,DAT_10009b48);
      }
    }
    if (0 < DAT_1000a070) {
      cVar1 = CheckProduction(&DAT_10009c60);
      if (cVar1 != '\0') {
        DAT_1000a070 = DAT_1000a070 + -1;
        ProduceUnit(&DAT_10009c60,&DAT_1000a0c8,DAT_10009b48);
      }
      if (0 < DAT_1000a070) {
        cVar1 = CheckProduction(&DAT_10009c68);
        if (cVar1 != '\0') {
          DAT_1000a070 = DAT_1000a070 + -1;
          ProduceUnit(&DAT_10009c68,&DAT_1000a0c8,DAT_10009b48);
        }
        if ((0 < DAT_1000a070) && (cVar1 = CheckProduction(&DAT_10009d18), cVar1 != '\0')) {
          DAT_1000a070 = DAT_1000a070 + -1;
          ProduceUnit(&DAT_10009d18,&DAT_1000a0c8,DAT_10009b48);
        }
      }
    }
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount1(&DAT_10009b58,0), 0 < iVar3)) {
    SetTrigg(1,0);
    ShowPage(s__PAGE1_100096a4);
  }
  iVar3 = GetUnitsAmount1(&DAT_10009df8,&DAT_10009c40);
  iVar2 = GetUnitsByNation(&DAT_10009c40,0);
  if ((iVar2 == iVar3) && (iVar3 = GetUnitsByNation(&DAT_10009c40,0), 0 < iVar3)) {
    iVar3 = GetDiff(0);
    iVar2 = GetUnitsByNation(&DAT_10009c40,0);
    AddResource(0,3,(iVar3 * -200 + 0x9c4) * iVar2);
    iVar3 = GetDiff(0);
    iVar2 = GetUnitsByNation(&DAT_10009c40,0);
    AddResource(0,1,(6 - iVar3) * iVar2 * 0x32);
    iVar3 = GetDiff(0);
    iVar2 = GetUnitsByNation(&DAT_10009c40,0);
    AddResource(0,4,(7 - iVar3) * iVar2 * 100);
    iVar3 = GetDiff(0);
    iVar2 = GetUnitsByNation(&DAT_10009c40,0);
    AddResource(0,5,(7 - iVar3) * iVar2 * 100);
    ShowPage(s__PAGE2_1000969c);
    SaveSelectedUnits(0,&DAT_10009ce0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10009c40,0);
    SelErase(0);
    SelectUnits(&DAT_10009ce0,0);
  }
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10009f10,&DAT_10009c40);
    iVar2 = GetUnitsByNation(&DAT_10009c40,1);
    if (iVar3 == iVar2) {
      SetTrigg(2,0);
      cVar1 = Trigg(0xe);
      if (cVar1 == '\0') {
        SetTrigg(0xe,1);
        SelectUnits(&DAT_10009d48,0);
        SelOpenGates(1);
        RunTimer(2,0x14);
      }
      else {
        RunTimer(2);
      }
      SetTrigg(3,0);
    }
  }
  cVar1 = TimerDoneFirst(2);
  if (cVar1 != '\0') {
    SelectUnits1(1,&DAT_10009c40,0);
    SelSendTo(1,&DAT_10009fc8,0,0);
  }
  cVar1 = Trigg(3);
  if (cVar1 == '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10009fc8,&DAT_10009c40);
    iVar2 = GetUnitsByNation(&DAT_10009c40,1);
    if ((iVar3 == iVar2) && (iVar3 = GetUnitsAmount1(&DAT_10009fc8,&DAT_10009c40), 0 < iVar3)) {
      SetTrigg(3,1);
      iVar3 = GetUnitsByNation(&DAT_10009c40,0);
      AddResource(1,3,iVar3 * 2000);
      iVar3 = GetUnitsByNation(&DAT_10009c40,0);
      AddResource(1,1,iVar3 * 200);
      iVar3 = GetUnitsByNation(&DAT_10009c40,0);
      AddResource(1,4,iVar3 * 500);
      iVar3 = GetUnitsByNation(&DAT_10009c40,0);
      AddResource(1,5,iVar3 * 500);
      ClearSelection(1);
      iVar3 = GetUnitsByNation(&DAT_10009c40,1);
      if (iVar3 == 6) {
        SetTrigg(4,0);
      }
      SelectUnits1(1,&DAT_10009c40,0);
      SelErase(1);
    }
  }
  iVar3 = GetTotalAmount0(&DAT_10009c40);
  if (((0 < iVar3) && (iVar3 = GetTotalAmount0(&DAT_10009c48), 0 < iVar3)) &&
     (cVar1 = TimerDone(1), cVar1 != '\0')) {
    CreateZoneNearGroup(&DAT_1000a080,&DAT_10009f10,&DAT_10009c40,500);
    SelectUnits(&DAT_10009c48,0);
    SelSendAndKill(1,&DAT_1000a080,0x40,0);
    RunTimer(1,0x32);
  }
  cVar1 = Trigg(4);
  pcVar7 = SetTrigg_exref;
  if ((cVar1 != '\0') &&
     (iVar3 = GetTotalAmount0(&DAT_10009c40), pcVar7 = SetTrigg_exref, iVar3 == 0)) {
    SetTrigg(4,0);
    ShowPage(s__PAGE3_10009694);
    cVar1 = Trigg(0xe);
    if (cVar1 == '\0') {
      SetTrigg(0xe,1);
      SelectUnits(&DAT_10009d48,0);
      SelOpenGates(1);
      RunTimer(3,0x14);
      SetTrigg(6,0);
    }
    else {
      RunTimer(3);
      SetTrigg(6,0);
    }
  }
  cVar1 = TimerDoneFirst(3);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10009d60,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
    SelectUnits(&DAT_10009c48,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
  }
  cVar1 = Trigg(6);
  if (cVar1 == '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009d60);
    iVar2 = GetUnitsAmount1(&DAT_10009f38,&DAT_10009d60);
    if (iVar2 == iVar3) {
      iVar3 = GetTotalAmount0(&DAT_10009c48);
      iVar2 = GetUnitsAmount1(&DAT_10009f38,&DAT_10009c48);
      if (iVar2 == iVar3) {
        (*pcVar7)(6,1);
        SelectUnits(&DAT_10009d60,0);
        SelectUnits(&DAT_10009c48,1);
        SelSendAndKill(1,&DAT_10009f08,0x5a,0);
        SelSendAndKill(1,&DAT_10009f00,0x6e,2);
        SelSendAndKill(1,&DAT_10009ef8,0x80,2);
        SelSendAndKill(1,&DAT_10009e38,100,2);
        SelSendAndKill(1,&DAT_10009e30,0x96,2);
        SelSendAndKill(1,&DAT_10009e28,0x96,2);
        SelSendAndKill(1,&DAT_10009e20,0x78,2);
        SelSendAndKill(1,&DAT_10009e18,0x40,2);
        SelSendAndKill(1,&DAT_10009df8,0x40,2);
      }
    }
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10009f48,&DAT_10009d60), 0 < iVar3)) {
    (*pcVar7)(5,0);
    ShowPage(s__PAGE4_1000968c);
  }
  cVar1 = Trigg(0x1b);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d60), iVar3 == 0)) {
    (*pcVar7)(0x1b,0);
    ShowPage(s__PAGE14_10009684);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) {
    iVar3 = GetDiff(0);
    iVar2 = GetTotalAmount0(&DAT_10009d60);
    pcVar7 = SetTrigg_exref;
    if (iVar2 < iVar3 + 7) {
      SetTrigg(7,0);
      SelectUnits(&DAT_10009d60,0);
      SelSendTo(1,&DAT_10009e18,0,0);
      SelSendTo(1,&DAT_10009e20,0,2);
      SelSendTo(1,&DAT_10009e28,0x1e,2);
      SelSendTo(1,&DAT_10009e30,0x19,2);
      SelSendTo(1,&DAT_10009e38,0xe1,2);
      SelSendTo(1,&DAT_10009ef8,0,2);
      SelSendTo(1,&DAT_10009f00,0xf0,2);
      SelSendTo(1,&DAT_10009f08,0xe1,2);
      SelSendTo(1,&DAT_10009f10,0xe1,2);
    }
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount1(&DAT_10009f10,&DAT_10009d60), 0 < iVar3)) {
    (*pcVar7)(8,0);
    ShowPage(s__PAGE15_1000967c);
    cVar1 = Trigg(0xe);
    if (cVar1 == '\0') {
      (*pcVar7)(0xe,1);
      SelectUnits(&DAT_10009d48,0);
      SelOpenGates(1);
      RunTimer(4,0x14);
    }
    else {
      RunTimer(4);
    }
    (*pcVar7)(9,0);
  }
  cVar1 = TimerDoneFirst(4);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10009d70,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
  }
  cVar1 = Trigg(9);
  if (cVar1 == '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009d70);
    iVar2 = GetUnitsAmount1(&DAT_10009f38,&DAT_10009d70);
    if (iVar2 == iVar3) {
      (*pcVar7)(9,1);
      SelectUnits(&DAT_10009d70,0);
      SelSendAndKill(1,&DAT_10009f08,0x5a,0);
      SelSendAndKill(1,&DAT_10009f00,0x6e,2);
      SelSendAndKill(1,&DAT_10009ef8,0x80,2);
      SelSendAndKill(1,&DAT_10009e38,100,2);
      SelSendAndKill(1,&DAT_10009e30,0x96,2);
      SelSendAndKill(1,&DAT_10009e28,0x96,2);
      SelSendAndKill(1,&DAT_10009e20,0x78,2);
      SelSendAndKill(1,&DAT_10009e18,0x40,2);
      SelSendAndKill(1,&DAT_10009df8,0x40,2);
    }
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar3 = GetGlobalTime(), 6000 < iVar3)) {
    (*pcVar7)(0xd,0);
    ShowPage(s__PAGE5_10009674);
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      ShowPage(s__OTST1_1000966c);
      SetLightSpot(&DAT_10009fe8,3,3);
    }
  }
  iVar3 = GetDiff(0);
  iVar4 = DAT_1000a090 * 8;
  iVar2 = GetGlobalTime();
  if ((((iVar4 - iVar3) * 3000 + 8000 < iVar2) && ((&DAT_10009f58)[DAT_10009d28] == 0)) &&
     (DAT_1000a090 < 6)) {
    cVar1 = Trigg(8);
    if (cVar1 == '\0') {
      iVar3 = GetDiff(0);
      if (iVar3 < 1) {
        FUN_10001ba0(DAT_1000a090 * 7 + 10,&DAT_1000a070,&DAT_10009ce8 + DAT_1000a090 * 8);
        FUN_10001ba0(DAT_1000a090 * 0xe + 0x14,&DAT_1000a0c0,&DAT_10009ce8 + DAT_1000a090 * 8);
      }
      else {
        puVar9 = &DAT_10009ce8 + DAT_1000a090 * 8;
        puVar8 = &DAT_1000a070;
        iVar3 = GetDiff(0);
        FUN_10001ba0((iVar3 + 3 + DAT_1000a090) * 0xc,puVar8,puVar9);
        puVar9 = &DAT_10009ce8 + DAT_1000a090 * 8;
        puVar8 = &DAT_1000a0c0;
        iVar3 = GetDiff(0);
        FUN_10001ba0((iVar3 + 3 + DAT_1000a090) * 0x18,puVar8,puVar9);
      }
    }
    else {
      iVar3 = GetDiff(0);
      if (iVar3 < 1) {
        FUN_10001ba0(DAT_1000a090 * 4 + 10,&DAT_1000a070,&DAT_10009ce8 + DAT_1000a090 * 8);
      }
      else {
        puVar9 = &DAT_10009ce8 + DAT_1000a090 * 8;
        puVar8 = &DAT_1000a070;
        iVar3 = GetDiff(0);
        FUN_10001ba0((iVar3 + DAT_1000a090) * 6 + 0x15,puVar8,puVar9);
      }
    }
    DAT_1000a07c = DAT_10009d28;
    (&DAT_10009f58)[DAT_10009d28] = 1;
    DAT_1000a090 = DAT_1000a090 + 1;
  }
  pcVar7 = SetTrigg_exref;
  if (((&DAT_10009f58)[DAT_1000a07c] == 2) &&
     (cVar1 = TimerDone(7), pcVar7 = SetTrigg_exref, cVar1 != '\0')) {
    DAT_10009d28 = DAT_10009d28 + 1;
    SetTrigg(CONCAT31((int3)((uint)DAT_10009d28 >> 8),(char)DAT_1000a090 + '\''),0);
    DAT_1000a07c = 0x13;
    SelectUnits(&DAT_10009ce0 + DAT_1000a090 * 8,0);
    SelSendAndKill(1,&DAT_10009fe0,0x5a,0);
    RunTimer(8,10000);
  }
  cVar1 = Trigg((char)DAT_1000a090 + '\'');
  if (cVar1 == '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009ce0 + DAT_1000a090 * 8);
    iVar2 = GetUnitsAmount1(&DAT_10009fe0,&DAT_10009ce0 + DAT_1000a090 * 8);
    if ((iVar2 == iVar3) && (cVar1 = TimerDone(8), cVar1 == '\0')) {
      SelectUnits(&DAT_10009ce0 + DAT_1000a090 * 8,0);
      SelSendAndKill(1,&DAT_10009f28,0x80,2);
      SelSendAndKill(1,&DAT_10009df8,0x80,2);
    }
  }
  cVar1 = Trigg((char)DAT_1000a090 + '1');
  if (cVar1 != '\0') {
    cVar1 = Trigg((char)DAT_1000a090 + '\'');
    if ((cVar1 == '\0') && (cVar1 = Trigg(8), cVar1 != '\0')) {
      iVar3 = GetUnitsAmount1(&DAT_10009f48,&DAT_10009ce0 + DAT_1000a090 * 8);
      if (0 < iVar3) {
        (*pcVar7)((char)DAT_1000a090 + '1',0);
        ShowPage(s__PAGE4_1000968c);
      }
    }
  }
  cVar1 = Trigg((char)DAT_1000a090 + ';');
  if (cVar1 != '\0') {
    cVar1 = Trigg((char)DAT_1000a090 + '1');
    if ((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10009ce0 + DAT_1000a090 * 8), iVar3 < 10))
    {
      (*pcVar7)((char)DAT_1000a090 + ';',0);
      SelectUnits(&DAT_10009ce0 + DAT_1000a090 * 8,0);
      SelSendTo(1,&DAT_10009e18,0,0);
      SelSendTo(1,&DAT_10009e20,0,2);
      SelSendTo(1,&DAT_10009e28,0x1e,2);
      SelSendTo(1,&DAT_10009e30,0x19,2);
      SelSendTo(1,&DAT_10009e38,0xe1,2);
      SelSendTo(1,&DAT_10009ef8,0,2);
      SelSendTo(1,&DAT_10009f00,0xf0,2);
      SelSendTo(1,&DAT_10009f08,0xe1,2);
      SelSendTo(1,&DAT_10009f10,0xe1,2);
    }
  }
  cVar1 = Trigg(8);
  if (cVar1 != '\0') {
    cVar1 = Trigg((char)DAT_1000a090 + ';');
    if ((cVar1 == '\0') &&
       (iVar3 = GetUnitsAmount1(&DAT_10009f10,&DAT_10009ce0 + DAT_1000a090 * 8), 0 < iVar3)) {
      (*pcVar7)(8,0);
      ShowPage(s__PAGE15_1000967c);
      cVar1 = Trigg(0xe);
      if (cVar1 == '\0') {
        (*pcVar7)(0xe,1);
        SelectUnits(&DAT_10009d48,0);
        SelOpenGates(1);
        RunTimer(4,0x14);
      }
      else {
        RunTimer(4);
      }
      (*pcVar7)(9,0);
    }
  }
  cVar1 = TimerDoneFirst(4);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10009d70,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
  }
  cVar1 = Trigg(9);
  if (cVar1 == '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009d70);
    iVar2 = GetUnitsAmount1(&DAT_10009f38,&DAT_10009d70);
    if (iVar2 == iVar3) {
      (*pcVar7)(9,1);
      SelectUnits(&DAT_10009d70,0);
      SelSendAndKill(1,&DAT_10009f08,0x5a,0);
      SelSendAndKill(1,&DAT_10009f00,0x6e,2);
      SelSendAndKill(1,&DAT_10009ef8,0x80,2);
      SelSendAndKill(1,&DAT_10009e38,100,2);
      SelSendAndKill(1,&DAT_10009e30,0x96,2);
      SelSendAndKill(1,&DAT_10009e28,0x96,2);
      SelSendAndKill(1,&DAT_10009e20,0x78,2);
      SelSendAndKill(1,&DAT_10009e18,0x40,2);
      SelSendAndKill(1,&DAT_10009df8,0x40,2);
    }
  }
  iVar3 = GetGlobalTime();
  if (((DAT_1000a038 * 22000 + 10000 < iVar3) && ((&DAT_10009f58)[DAT_10009d28] == 0)) &&
     (DAT_1000a038 < 6)) {
    FUN_10001ba0(DAT_1000a038 * 6 + 0x15,&DAT_10009c30,&DAT_10009c80 + DAT_1000a038 * 8);
    DAT_10009c78 = DAT_10009d28;
    DAT_1000a038 = DAT_1000a038 + 1;
    (&DAT_10009f58)[DAT_10009d28] = 1;
  }
  if (((&DAT_10009f58)[DAT_10009c78] == 2) && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    DAT_10009d28 = DAT_10009d28 + 1;
    (*pcVar7)((char)DAT_1000a038 + 'O',0);
    DAT_10009c78 = 0x13;
    SelectUnits(&DAT_10009c78 + DAT_1000a038 * 2,0);
    SelSendAndKill(1,&DAT_10009f08,0x5a,0);
    SelSendAndKill(1,&DAT_10009f00,0x6e,2);
    SelSendAndKill(1,&DAT_10009ef8,0x80,2);
    SelSendAndKill(1,&DAT_10009e38,100,2);
    SelSendAndKill(1,&DAT_10009e30,0x96,2);
    SelSendAndKill(1,&DAT_10009e28,0x96,2);
    SelSendAndKill(1,&DAT_10009e20,0x78,2);
    SelSendAndKill(1,&DAT_10009e18,0x80,2);
    SelSendAndKill(1,&DAT_10009e10,0x78,2);
    SelSendAndKill(1,&DAT_10009e08,0x96,2);
    SelSendAndKill(1,&DAT_10009e00,0x80,2);
  }
  cVar1 = Trigg((char)DAT_1000a038 + 'E');
  if (cVar1 != '\0') {
    cVar1 = Trigg((char)DAT_1000a038 + 'O');
    if (cVar1 == '\0') {
      iVar3 = DAT_1000a038 * 2;
      iVar2 = GetUnitsAmount1(&DAT_10009e00,&DAT_10009c78 + iVar3);
      iVar3 = GetTotalAmount0(&DAT_10009c78 + iVar3);
      pcVar7 = SetTrigg_exref;
      if (iVar3 == iVar2) {
        SetTrigg((char)DAT_1000a038 + 'E',0);
        CreateObject0(&DAT_10009ca8 + DAT_1000a038 * 8,&DAT_1000a098,&DAT_10009b58,1,&DAT_10009fb0,0
                     );
        SelectUnits(&DAT_10009ca8 + DAT_1000a038 * 8,0);
        SelSendTo(1,&DAT_10009e08,0x14,0);
        SelSendTo(1,&DAT_10009e10,0xf0,2);
        SelSendTo(1,&DAT_10009e18,0,2);
        SelSendTo(1,&DAT_10009e20,0,2);
        SelSendTo(1,&DAT_10009e28,0x1e,2);
        SelSendTo(1,&DAT_10009e30,0x19,2);
        SelSendTo(1,&DAT_10009e38,0xe1,2);
        SelSendTo(1,&DAT_10009ef8,0,2);
        SelSendTo(1,&DAT_10009f00,0xf0,2);
        SelSendTo(1,&DAT_10009f08,0xe1,2);
        SelSendTo(1,&DAT_10009f10,0xe1,2);
        SelSendTo(1,&DAT_10009fc8,0,2);
        RunTimer((char)DAT_1000a038 + '\t',1);
      }
    }
  }
  cVar1 = TimerDone((char)DAT_1000a038 + '\t');
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009ca8 + DAT_1000a038 * 8);
    if (0 < iVar3) {
      iVar3 = GetTotalAmount0(&DAT_10009c78 + DAT_1000a038 * 2);
      if (0 < iVar3) {
        CreateZoneNearGroup(&DAT_1000a080,&DAT_10009f10,&DAT_10009ca8 + DAT_1000a038 * 8,500);
        SelectUnits(&DAT_10009c78 + DAT_1000a038 * 2,0);
        SelSendAndKill(1,&DAT_1000a080,0x40,0);
        RunTimer((char)DAT_1000a038 + '\t',0x32);
      }
    }
  }
  cVar1 = Trigg((char)DAT_1000a038 + 'E');
  if (cVar1 == '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10009df8,&DAT_10009ca8 + DAT_1000a038 * 8);
    iVar2 = GetUnitsByNation(&DAT_10009ca8 + DAT_1000a038 * 8,0);
    if (iVar2 == iVar3) {
      iVar3 = GetUnitsByNation(&DAT_10009ca8 + DAT_1000a038 * 8,0);
      if (0 < iVar3) {
        iVar3 = GetUnitsByNation(&DAT_10009ca8 + DAT_1000a038 * 8,0);
        iVar2 = GetDiff(0);
        AddResource(0,3,iVar3 * (iVar2 * -200 + 0x9c4));
        iVar3 = GetUnitsByNation(&DAT_10009ca8 + DAT_1000a038 * 8,0);
        iVar2 = GetDiff(0);
        AddResource(0,1,iVar3 * (6 - iVar2) * 0x32);
        iVar3 = GetUnitsByNation(&DAT_10009ca8 + DAT_1000a038 * 8,0);
        iVar2 = GetDiff(0);
        AddResource(0,4,iVar3 * (7 - iVar2) * 100);
        iVar3 = GetUnitsByNation(&DAT_10009ca8 + DAT_1000a038 * 8,0);
        iVar2 = GetDiff(0);
        AddResource(0,5,iVar3 * (7 - iVar2) * 100);
        ShowPage(s__PAGE2_1000969c);
        SaveSelectedUnits(0,&DAT_10009ce0,0);
        ClearSelection(0);
        SelectUnits1(0,&DAT_10009ca8 + DAT_1000a038 * 8,0);
        SelErase(0);
        SelectUnits(&DAT_10009ce0,0);
      }
    }
  }
  cVar1 = Trigg((char)DAT_1000a038 + 'E');
  if (cVar1 == '\0') {
    iVar3 = GetUnitsAmount1(&DAT_10009fc8,&DAT_10009ca8 + DAT_1000a038 * 8);
    iVar2 = GetUnitsByNation(&DAT_10009ca8 + DAT_1000a038 * 8,1);
    if ((iVar3 == iVar2) &&
       (iVar3 = GetUnitsAmount1(&DAT_10009fc8,&DAT_10009ca8 + DAT_1000a038 * 8), 0 < iVar3)) {
      ClearSelection(1);
      SelectUnits1(1,&DAT_10009ca8 + DAT_1000a038 * 8,0);
      SelErase(1);
    }
  }
  cVar1 = Trigg(10);
  pcVar5 = GetDiff_exref;
  if (((cVar1 != '\0') && (iVar3 = GetGlobalTime(), pcVar5 = GetDiff_exref, 83000 < iVar3)) &&
     ((&DAT_10009f58)[DAT_10009d28] == 0)) {
    (*pcVar7)(10,0);
    (*pcVar7)(0xb,0);
    pcVar5 = GetDiff_exref;
    DAT_10009ed8 = 4;
    puVar9 = &DAT_10009c08;
    puVar8 = &DAT_10009a80;
    iVar3 = GetDiff(0);
    FUN_10001ba0(iVar3 * 8 + 0x18,puVar8,puVar9);
    puVar9 = &DAT_10009c08;
    puVar8 = &DAT_10009c30;
    iVar3 = GetDiff(0);
    FUN_10001ba0(iVar3 * 4 + 0xc,puVar8,puVar9);
    puVar9 = &DAT_10009c08;
    puVar8 = &DAT_1000a070;
    iVar3 = GetDiff(0);
    FUN_10001ba0((iVar3 + 3) * 3,puVar8,puVar9);
    (&DAT_10009f58)[DAT_10009d28] = 1;
  }
  if ((0 < DAT_10009ed8) && (cVar1 = CheckProduction(&DAT_10009d20), cVar1 != '\0')) {
    DAT_10009ed8 = DAT_10009ed8 + -1;
    ProduceUnit(&DAT_10009d20,&DAT_10009c70,&DAT_10009c00);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 == '\0') && ((&DAT_10009f58)[DAT_10009d28] == 2)) {
    (*pcVar7)(0xb,1);
    DAT_10009d28 = DAT_10009d28 + 1;
    ShowPage(s__PAGE6_10009664);
    cVar1 = Trigg(0xe);
    if (cVar1 == '\0') {
      (*pcVar7)(0xe,1);
      SelectUnits(&DAT_10009d48,0);
      SelOpenGates(1);
      RunTimer(5,0x14);
    }
    else {
      RunTimer(5);
    }
    (*pcVar7)(0xc,0);
  }
  cVar1 = TimerDoneFirst(5);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10009c00,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
    SelectUnits(&DAT_10009c08,0);
    SelSendAndKill(1,&DAT_10009f38,0x5a,0);
    RunTimer(6,1);
  }
  cVar1 = Trigg(0xc);
  if (cVar1 == '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009c00);
    iVar2 = GetUnitsAmount1(&DAT_10009f38,&DAT_10009c00);
    if (iVar2 == iVar3) {
      (*pcVar7)(0xc,1);
      SelectUnits(&DAT_10009c00,0);
      SelSendAndKill(1,&DAT_10009f08,0x5a,0);
      SelSendAndKill(1,&DAT_10009f00,0x6e,2);
      SelSendAndKill(1,&DAT_10009ef8,0x80,2);
      SelSendAndKill(1,&DAT_10009e38,100,2);
      SelSendAndKill(1,&DAT_10009e30,0x96,2);
      SelSendAndKill(1,&DAT_10009e28,0x96,2);
      SelSendAndKill(1,&DAT_10009e20,0x78,2);
      SelSendAndKill(1,&DAT_10009e18,0x80,2);
      SelSendAndKill(1,&DAT_10009e10,0x78,2);
      SelSendAndKill(1,&DAT_10009e08,0x96,2);
      SelSendAndKill(1,&DAT_10009e00,0x80,2);
      SelSendAndKill(1,&DAT_10009fd0,0,2);
    }
  }
  iVar3 = GetTotalAmount0(&DAT_10009c00);
  if (((0 < iVar3) && (iVar3 = GetTotalAmount0(&DAT_10009c08), 0 < iVar3)) &&
     (cVar1 = TimerDone(6), cVar1 != '\0')) {
    CreateZoneNearGroup(&DAT_1000a088,&DAT_10009e00,&DAT_10009c00,500);
    SelectUnits(&DAT_10009c08,0);
    SelSendAndKill(1,&DAT_1000a088,0x80,0);
    RunTimer(6,0x32);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009c00), 0 < iVar3)) {
    iVar3 = GetTotalAmount0(&DAT_10009c00);
    iVar2 = GetUnitsByNation(&DAT_10009c00,0);
    if (iVar2 == iVar3) {
      (*pcVar7)(0x12,0);
      ShowPage(s__PAGE7_1000965c);
    }
  }
  cVar1 = Trigg(0xe);
  if (((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 != '\0')) &&
     ((cVar1 = Trigg(6), cVar1 != '\0' &&
      ((((cVar1 = Trigg(9), cVar1 != '\0' && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
        (iVar3 = GetTotalAmount0(&DAT_10009d48), 0 < iVar3)) &&
       ((iVar3 = GetUnitsAmount0(&DAT_10009f20,0), 0 < iVar3 &&
        (iVar3 = GetUnitsAmount0(&DAT_10009f20,1), iVar3 == 0)))))))) {
    (*pcVar7)(0xe,0);
    SelectUnits(&DAT_10009d48,0);
    SelCloseGates(1);
  }
  cVar1 = Trigg(0xe);
  if (((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d48), 0 < iVar3)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009f20,0), iVar3 == 0)) {
    (*pcVar7)(0xe,1);
    SelectUnits(&DAT_10009d48,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0xf);
  if ((((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d58), 0 < iVar3)) &&
      (iVar3 = GetUnitsAmount0(&DAT_10009f30,0), 0 < iVar3)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009f30,1), iVar3 == 0)) {
    (*pcVar7)(0xf,0);
    SelectUnits(&DAT_10009d58,0);
    SelCloseGates(1);
  }
  cVar1 = Trigg(0xf);
  if (((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d58), 0 < iVar3)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009f30,0), iVar3 == 0)) {
    (*pcVar7)(0xf,1);
    SelectUnits(&DAT_10009d58,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0x10);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d68), 0 < iVar3)) &&
     ((iVar3 = GetUnitsAmount0(&DAT_10009f40,0), 0 < iVar3 &&
      (iVar3 = GetUnitsAmount0(&DAT_10009f40,1), iVar3 == 0)))) {
    (*pcVar7)(0x10,0);
    SelectUnits(&DAT_10009d68,0);
    SelCloseGates(1);
  }
  cVar1 = Trigg(0x10);
  if (((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d68), 0 < iVar3)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009f40,0), iVar3 == 0)) {
    (*pcVar7)(0x10,1);
    SelectUnits(&DAT_10009d68,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0x11);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d78), 0 < iVar3)) &&
     ((iVar3 = GetUnitsAmount0(&DAT_10009f50,0), 0 < iVar3 &&
      (iVar3 = GetUnitsAmount0(&DAT_10009f50,1), iVar3 == 0)))) {
    (*pcVar7)(0x11,0);
    SelectUnits(&DAT_10009d78,0);
    SelCloseGates(1);
  }
  cVar1 = Trigg(0x11);
  if (((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10009d78), 0 < iVar3)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009f50,0), iVar3 == 0)) {
    (*pcVar7)(0x11,1);
    SelectUnits(&DAT_10009d78,0);
    SelOpenGates(1);
  }
  iVar3 = GetUnitsByNation(&DAT_10009d80,1);
  if ((0 < iVar3) && (iVar3 = GetUnitsAmount0(&DAT_10009fa8,0), 0 < iVar3)) {
    AttackEnemyInZone(&DAT_10009d80,&DAT_10009fa8,0);
  }
  iVar3 = GetUnitsByNation(&DAT_10009d98,1);
  if ((0 < iVar3) && (iVar3 = GetUnitsAmount0(&DAT_10009fc0,0), 0 < iVar3)) {
    AttackEnemyInZone(&DAT_10009d98,&DAT_10009fc0,0);
  }
  iVar3 = GetResource(0,5);
  if ((((0 < iVar3) || (iVar3 = GetResource(0,4), 0 < iVar3)) &&
      (iVar3 = GetUnitsByNation(&DAT_10009c28,1), 0 < iVar3)) &&
     (cVar1 = Trigg(0x15), cVar1 != '\0')) {
    (*pcVar7)(0x15,0);
    ShowPage(s__PAGE8_10009654);
    SetResource(0,5,0);
    SetResource(0,4,0);
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009c28,0);
    SelDie(1);
    pcVar5 = GetDiff_exref;
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 == '\0') && (iVar3 = GetUnitsByNation(&DAT_10009c28,0), 0 < iVar3)) {
    (*pcVar7)(0x15,1);
  }
  iVar3 = GetUnitsByNation(&DAT_10009c20,1);
  if (0 < iVar3) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009c20,0);
    SelDie(1);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009c20), iVar3 == 0)) {
    (*pcVar7)(0x16,0);
    ShowPage(s__PAGE9_1000964c);
    LooseGame();
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009c38), iVar3 == 0)) {
    (*pcVar7)(0x16,0);
    ShowPage(s__PAGE10_10009644);
    LooseGame();
  }
  iVar3 = (*pcVar5)(0);
  if (iVar3 < 2) {
    iVar3 = GetUnitsAmount0(&DAT_10009ff0,0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1000a010,&DAT_10009ff0,0);
    }
    iVar3 = GetUnitsAmount0(&DAT_10009fd8,0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1000a028,&DAT_10009fd8,0);
    }
    iVar3 = GetUnitsAmount0(&DAT_10009fe8,0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1000a048,&DAT_10009fe8,0);
    }
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_1000a048), iVar3 == 0)) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009dc8,0);
    SelChangeNation(1,0);
    SelectUnits1(1,&DAT_1000a040,0);
    SelChangeNation(1,0);
  }
  cVar1 = Trigg(0x18);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009dc8);
    iVar2 = GetUnitsByNation(&DAT_10009dc8,0);
    if (iVar2 == iVar3) {
      iVar3 = GetTotalAmount0(&DAT_1000a040);
      iVar2 = GetUnitsByNation(&DAT_1000a040,0);
      if (iVar2 == iVar3) {
        (*pcVar7)(0x18,0);
        ShowPage(s__PAGE11_1000963c);
      }
    }
  }
  if ((((DAT_10009ed0 == 0) && (cVar1 = Trigg(0x18), cVar1 == '\0')) &&
      ((&DAT_10009f58)[DAT_10009d28] == 0)) && (iVar3 = (*pcVar5)(0), 0 < iVar3)) {
    DAT_10009ed0 = 1;
    (&DAT_10009f58)[DAT_10009d28] = 1;
    FUN_10001ba0(0x21,&DAT_1000a070,&DAT_10009c10);
    FUN_10001ba0(0x28,&DAT_10009c30,&DAT_10009c10);
  }
  if (((DAT_10009ed0 == 1) && ((&DAT_10009f58)[DAT_10009d28] == 2)) &&
     (cVar1 = TimerDone(7), cVar1 != '\0')) {
    DAT_10009d28 = DAT_10009d28 + 1;
    DAT_10009ed0 = 2;
    SelectUnits(&DAT_10009c10,0);
    SelSendAndKill(1,&DAT_10009f08,0x5a,0);
    SelSendAndKill(1,&DAT_10009f00,0x6e,2);
    SelSendAndKill(1,&DAT_10009ef8,0x80,2);
    SelSendAndKill(1,&DAT_10009e38,100,2);
    SelSendAndKill(1,&DAT_10009e30,0x96,2);
    SelSendAndKill(1,&DAT_10009e28,0x96,2);
    SelSendAndKill(1,&DAT_10009e20,0x78,2);
    SelSendAndKill(1,&DAT_10009e18,0x80,2);
    SelSendAndKill(1,&DAT_10009e10,0x78,2);
    SelSendAndKill(1,&DAT_10009e08,0x46,2);
    SelSendAndKill(1,&DAT_10009fe8,0x46,2);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_1000a010), iVar3 == 0)) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009da0,0);
    SelChangeNation(1,0);
    SelectUnits1(1,&DAT_1000a000,0);
    SelChangeNation(1,0);
    SelectUnits1(1,&DAT_1000a008,0);
    SelChangeNation(1,0);
  }
  cVar1 = Trigg(0x19);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009da0);
    iVar2 = GetUnitsByNation(&DAT_10009da0,0);
    if (iVar2 == iVar3) {
      iVar3 = GetTotalAmount0(&DAT_1000a000);
      iVar2 = GetUnitsByNation(&DAT_1000a000,0);
      if (iVar2 == iVar3) {
        iVar3 = GetTotalAmount0(&DAT_1000a008);
        iVar2 = GetUnitsByNation(&DAT_1000a008,0);
        if (iVar2 == iVar3) {
          (*pcVar7)(0x19,0);
          ShowPage(s__PAGE12_10009634);
        }
      }
    }
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_1000a028), iVar3 == 0)) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009db8,0);
    SelChangeNation(1,0);
    SelectUnits1(1,&DAT_1000a020,0);
    SelChangeNation(1,0);
  }
  cVar1 = Trigg(0x1a);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount0(&DAT_10009db8);
    iVar2 = GetUnitsByNation(&DAT_10009db8,0);
    if (iVar2 == iVar3) {
      iVar3 = GetTotalAmount0(&DAT_1000a020);
      iVar2 = GetUnitsByNation(&DAT_1000a020,0);
      if (iVar2 == iVar3) {
        (*pcVar7)(0x1a,0);
        ShowPage(s__PAGE13_1000962c);
      }
    }
  }
  if ((((DAT_10009ed4 == 0) && (cVar1 = Trigg(0x1a), cVar1 == '\0')) &&
      ((&DAT_10009f58)[DAT_10009d28] == 0)) && (iVar3 = (*pcVar5)(0), 0 < iVar3)) {
    puVar9 = &DAT_10009c18;
    puVar8 = &DAT_1000a070;
    DAT_10009ed4 = 1;
    (&DAT_10009f58)[DAT_10009d28] = 1;
    iVar3 = (*pcVar5)(0);
    FUN_10001ba0(iVar3 * 10 + 0x2d,puVar8,puVar9);
    puVar9 = &DAT_10009c18;
    puVar8 = &DAT_10009c30;
    iVar3 = (*pcVar5)(0);
    FUN_10001ba0(iVar3 * 7 + 0x19,puVar8,puVar9);
  }
  if (((DAT_10009ed4 == 1) && ((&DAT_10009f58)[DAT_10009d28] == 2)) &&
     (cVar1 = TimerDone(7), cVar1 != '\0')) {
    DAT_10009d28 = DAT_10009d28 + 1;
    DAT_10009ed4 = 2;
    SelectUnits(&DAT_10009c18,0);
    SelSendAndKill(1,&DAT_10009fa8,0x40,0);
    SelSendAndKill(1,&DAT_10009ff0,0x40,2);
    SelSendAndKill(1,&DAT_10009fd8,100,2);
  }
  cVar1 = Trigg(0x1c);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009dd8), iVar3 == 0)) &&
     (iVar3 = GetTotalAmount0(&DAT_1000a060), iVar3 == 0)) {
    (*pcVar7)(0x1c,0);
    ShowPage(s__PAGE16_10009624);
  }
  cVar1 = Trigg(0x1d);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009de8), iVar3 == 0)) &&
     (iVar3 = GetTotalAmount0(&DAT_1000a068), iVar3 == 0)) {
    (*pcVar7)(0x1d,0);
    ShowPage(s__PAGE17_1000961c);
  }
  cVar1 = Trigg(0x1e);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x1c), cVar1 == '\0')) &&
     (cVar1 = Trigg(0x1d), cVar1 == '\0')) {
    (*pcVar7)(0x1e,0);
    ShowPage(s__PAGE18_10009614);
    ShowVictory();
  }
  cVar1 = Trigg(0x1f);
  pcVar6 = AddResource_exref;
  if (((cVar1 != '\0') &&
      (iVar3 = GetTotalAmount0(&DAT_10009db0), pcVar6 = AddResource_exref, iVar3 == 0)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009ff8,0), pcVar6 = AddResource_exref, 0 < iVar3)) {
    (*pcVar7)(0x1f,0);
    iVar3 = (*pcVar5)(0);
    ShowPageParam(s__PAGE19_1000960c,(6 - iVar3) * 0x32);
    iVar3 = (*pcVar5)(0);
    pcVar6 = AddResource_exref;
    AddResource(0,1,(6 - iVar3) * 0x32);
    iVar3 = (*pcVar5)(0);
    AddResource(0,5,(7 - iVar3) * 100);
    iVar3 = (*pcVar5)(0);
    AddResource(0,4,(7 - iVar3) * 100);
  }
  cVar1 = Trigg(0x20);
  if (((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10009dc0), iVar3 == 0)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10009fb8,0), 0 < iVar3)) {
    (*pcVar7)(0x20,0);
    iVar3 = (*pcVar5)(0);
    ShowPageParam(s__PAGE20_10009604,(0xc - iVar3) * 0x32);
    iVar3 = (*pcVar5)(0);
    (*pcVar6)(0,1,(0xc - iVar3) * 0x32);
    iVar3 = (*pcVar5)(0);
    (*pcVar6)(0,5,(10 - iVar3) * 100);
    iVar3 = (*pcVar5)(0);
    (*pcVar6)(0,4,(10 - iVar3) * 100);
  }
  iVar3 = GetResource(0,0);
  if (4999 < iVar3) {
    iVar3 = (*pcVar5)(0);
    ShowPageParam(s__PAGE21_100095fc,(10 - iVar3) * 100);
    (*pcVar6)(0,0,0xffffec78);
    iVar3 = (*pcVar5)(0);
    (*pcVar6)(0,1,(10 - iVar3) * 100);
  }
  iVar3 = GetResource(0,2);
  if (4999 < iVar3) {
    iVar3 = (*pcVar5)(0);
    iVar3 = (*pcVar5)(0,(10 - iVar3) * 100);
    ShowPageParam(s__PAGE22_100095f4,(10 - iVar3) * 100);
    (*pcVar6)(0,2,0xffffec78);
    iVar3 = (*pcVar5)(0);
    (*pcVar6)(0,4,(10 - iVar3) * 100);
    iVar3 = (*pcVar5)(0);
    (*pcVar6)(0,5,(10 - iVar3) * 100);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') && (iVar3 = GetGlobalTime(), 0x5ba0 < iVar3)) {
    (*pcVar7)(0x21,0);
    cVar1 = AskQuestion(s__PAGE23_100095ec);
    if (cVar1 != '\0') {
      iVar3 = GetResource(0,1);
      if (iVar3 < 500) {
        ShowPage(s__PAGE23A_100095e0);
        return;
      }
      (*pcVar6)(0,1,0xfffffe0c);
      ShowPage(s__PAGE23B_100095d4);
      SetLightSpot(&DAT_10009fc8,4,1);
      SetLightSpot(&DAT_10009fd0,4,2);
    }
  }
  return;
}



// Function: FUN_100049b0 @ 0x100049b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100049b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000a0ec = GetVersion();
    iVar1 = FUN_100053e4(1);
    if (iVar1 != 0) {
      _DAT_1000a0f8 = DAT_1000a0ec >> 8 & 0xff;
      _DAT_1000a0f4 = DAT_1000a0ec & 0xff;
      DAT_1000a0ec = DAT_1000a0ec >> 0x10;
      _DAT_1000a0f0 = _DAT_1000a0f4 * 0x100 + _DAT_1000a0f8;
      iVar1 = FUN_10004c77();
      if (iVar1 != 0) {
        DAT_1000a658 = GetCommandLineA();
        DAT_1000a0d8 = FUN_100052b2();
        FUN_10004d9c();
        FUN_10005065();
        FUN_10004fac();
        FUN_10004b59();
        DAT_1000a0d4 = DAT_1000a0d4 + 1;
        goto LAB_10004a83;
      }
      FUN_10005420();
    }
LAB_10004a10:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000a0d4 < 1) goto LAB_10004a10;
      DAT_1000a0d4 = DAT_1000a0d4 + -1;
      if (DAT_1000a124 == 0) {
        FUN_10004b97();
      }
      FUN_10004f58();
      FUN_10004ccb();
      FUN_10005420();
    }
    else if (param_2 == 3) {
      FUN_10004cfc((LPVOID)0x0);
    }
LAB_10004a83:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10004a89

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000a0d4;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10004ad1;
    if ((DAT_1000a65c != (code *)0x0) &&
       (iVar2 = (*DAT_1000a65c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100049b0(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10004ad1:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100049b0(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100049b0(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000a65c != (code *)0x0) {
      iVar2 = (*DAT_1000a65c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10004b26

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000a0e0 == 1) || ((DAT_1000a0e0 == 0 && (DAT_1000a0e4 == 1)))) {
    FUN_10005495();
  }
  FUN_100054ce(param_1);
  (*(code *)PTR___exit_1000974c)(0xff);
  return;
}



// Function: FUN_10004b59 @ 0x10004b59

void FUN_10004b59(void)

{
  if (DAT_1000a654 != (code *)0x0) {
    (*DAT_1000a654)();
  }
  FUN_10004c5d((undefined4 *)&DAT_10009008,(undefined4 *)&DAT_10009010);
  FUN_10004c5d((undefined4 *)&DAT_10009000,(undefined4 *)&DAT_10009004);
  return;
}



// Function: __exit @ 0x10004b86

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10004ba6(_Code,1,0);
  return;
}



// Function: FUN_10004b97 @ 0x10004b97

void FUN_10004b97(void)

{
  FUN_10004ba6(0,0,1);
  return;
}



// Function: FUN_10004ba6 @ 0x10004ba6

void __cdecl FUN_10004ba6(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10004c4b();
  if (DAT_1000a128 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000a124 = 1;
  DAT_1000a120 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000a650 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000a64c - 4), DAT_1000a650 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000a650 <= puVar1);
    }
    FUN_10004c5d((undefined4 *)&DAT_10009014,(undefined4 *)&DAT_10009018);
  }
  FUN_10004c5d((undefined4 *)&DAT_1000901c,(undefined4 *)&DAT_10009020);
  if (param_3 == 0) {
    DAT_1000a128 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10004c54();
  return;
}



// Function: FUN_10004c4b @ 0x10004c4b

void FUN_10004c4b(void)

{
  FUN_100056b6(0xd);
  return;
}



// Function: FUN_10004c54 @ 0x10004c54

void FUN_10004c54(void)

{
  FUN_10005717(0xd);
  return;
}



// Function: FUN_10004c5d @ 0x10004c5d

void __cdecl FUN_10004c5d(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10004c77 @ 0x10004c77

undefined4 FUN_10004c77(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10005621();
  DAT_10009750 = TlsAlloc();
  if (DAT_10009750 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000572c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10009750,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10004ce9((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10004ccb @ 0x10004ccb

void FUN_10004ccb(void)

{
  FUN_1000564a();
  if (DAT_10009750 != 0xffffffff) {
    TlsFree(DAT_10009750);
    DAT_10009750 = 0xffffffff;
  }
  return;
}



// Function: FUN_10004ce9 @ 0x10004ce9

void __cdecl FUN_10004ce9(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100098d0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10004cfc @ 0x10004cfc

void __cdecl FUN_10004cfc(LPVOID param_1)

{
  if (DAT_10009750 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_10009750), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_100057b9(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_100057b9(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_100057b9(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_100057b9(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_100057b9(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_100057b9(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_100098d0) {
        FUN_100057b9(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_100057b9(param_1);
    }
    TlsSetValue(DAT_10009750,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10004d9c @ 0x10004d9c

void FUN_10004d9c(void)

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
  DAT_1000a640 = 0x20;
  DAT_1000a540 = puVar2;
  for (; puVar2 < DAT_1000a540 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000a640 < (int)UVar8) {
      puVar2 = &DAT_1000a544;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000a640;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000a640 = DAT_1000a640 + 0x20;
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
      } while ((int)DAT_1000a640 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000a540)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000a540 + iVar6 * 9;
    if (DAT_1000a540[iVar6 * 9] == -1) {
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
          goto LAB_10004f41;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10004f41:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000a640);
      return;
    }
  } while( true );
}



// Function: FUN_10004f58 @ 0x10004f58

void FUN_10004f58(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000a540;
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
      FUN_100057b9((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000a640);
  return;
}



// Function: FUN_10004fac @ 0x10004fac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004fac(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000a648 == 0) {
    FUN_10005dd3();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000a0d8; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1000a108 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000a0d8;
  puVar6 = DAT_1000a0d8;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10005890((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100057b9(DAT_1000a0d8);
  DAT_1000a0d8 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1000a644 = 1;
  return;
}



// Function: FUN_10005065 @ 0x10005065

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005065(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000a648 == 0) {
    FUN_10005dd3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000a12c,0x104);
  _DAT_1000a118 = &DAT_1000a12c;
  pbVar2 = &DAT_1000a12c;
  if (*DAT_1000a658 != 0) {
    pbVar2 = DAT_1000a658;
  }
  FUN_100050fe(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100050fe(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000a100 = puVar1;
  _DAT_1000a0fc = local_8 + -1;
  return;
}



// Function: FUN_100050fe @ 0x100050fe

void __cdecl FUN_100050fe(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000a420 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000a420 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_100051a9;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_100051a9:
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
          if ((*(byte *)((int)&DAT_1000a420 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000a420 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_100052b2 @ 0x100052b2

LPSTR FUN_100052b2(void)

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
  if (DAT_1000a230 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000a230 = 1;
LAB_10005309:
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
        FUN_100057b9(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000a230 = 2;
  }
  else {
    if (DAT_1000a230 == 1) goto LAB_10005309;
    if (DAT_1000a230 != 2) {
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
    FUN_10005df0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_100053e4 @ 0x100053e4

undefined4 __cdecl FUN_100053e4(int param_1)

{
  int iVar1;
  
  DAT_1000a528 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000a528 != (HANDLE)0x0) {
    iVar1 = FUN_10006125();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_1000a528);
  }
  return 0;
}



// Function: FUN_10005420 @ 0x10005420

void FUN_10005420(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_1000a2e8) {
    puVar2 = (undefined4 *)((int)DAT_1000a2ec + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_1000a528,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_1000a2e8);
  }
  HeapFree(DAT_1000a528,0,DAT_1000a2ec);
  HeapDestroy(DAT_1000a528);
  return;
}



// Function: FUN_10005495 @ 0x10005495

void FUN_10005495(void)

{
  if ((DAT_1000a0e0 == 1) || ((DAT_1000a0e0 == 0 && (DAT_1000a0e4 == 1)))) {
    FUN_100054ce(0xfc);
    if (DAT_1000a234 != (code *)0x0) {
      (*DAT_1000a234)();
    }
    FUN_100054ce(0xff);
  }
  return;
}



// Function: FUN_100054ce @ 0x100054ce

void __cdecl FUN_100054ce(DWORD param_1)

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
  pDVar2 = &DAT_10009780;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10009810);
  if (param_1 == (&DAT_10009780)[iVar5 * 2]) {
    if ((DAT_1000a0e0 == 1) || ((DAT_1000a0e0 == 0 && (DAT_1000a0e4 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10009784);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10005890(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10005890(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100058a0(local_a4,_Dest);
      FUN_100058a0(local_a4,(uint *)&DAT_1000843c);
      FUN_100058a0(local_a4,*(uint **)(iVar5 * 8 + 0x10009784));
      auStackY_1e3._3_4_ = 0x100055f2;
      FUN_1000696e(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10005621 @ 0x10005621

void FUN_10005621(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10009854);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10009844);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10009834);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10009814);
  return;
}



// Function: FUN_1000564a @ 0x1000564a

void FUN_1000564a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10009810;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10009854)) && (ppuVar1 != &PTR_DAT_10009844)) &&
       ((ppuVar1 != &PTR_DAT_10009834 && (ppuVar1 != &PTR_DAT_10009814)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100057b9(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100098d0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10009834);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10009844);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10009854);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10009814);
  return;
}



// Function: FUN_100056b6 @ 0x100056b6

void __cdecl FUN_100056b6(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10009810 + param_1;
  if ((&DAT_10009810)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100056b6(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100057b9(lpCriticalSection);
    }
    FUN_10005717(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10005717 @ 0x10005717

void __cdecl FUN_10005717(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10009810)[param_1]);
  return;
}



// Function: FUN_1000572c @ 0x1000572c

int * __cdecl FUN_1000572c(int param_1,int param_2)

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
      if (_Size < DAT_10009a60 || (int)_Size - (int)DAT_10009a60 == 0) {
        FUN_100056b6(9);
        piVar1 = FUN_100064b9(_Size);
        FUN_10005717(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_1000a528,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_1000a2ac == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10006b58(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_100057b9 @ 0x100057b9

void __cdecl FUN_100057b9(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_100056b6(9);
    puVar1 = (uint *)FUN_10006163((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_1000618e(puVar1,(uint)param_1);
      FUN_10005717(9);
      return;
    }
    FUN_10005717(9);
    HeapFree(DAT_1000a528,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x10005801

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000a2ac);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10005813

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_1000583f((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10006b58(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_1000583f @ 0x1000583f

int * __cdecl FUN_1000583f(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10009a60) {
    FUN_100056b6(9);
    piVar1 = FUN_100064b9(param_1);
    FUN_10005717(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_1000a528,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_10005890 @ 0x10005890

uint * __cdecl FUN_10005890(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10005978;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10005978:
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



// Function: FUN_100058a0 @ 0x100058a0

uint * __cdecl FUN_100058a0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100058bc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100058ef;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000590b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100058bc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000590b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000590b;
    }
  }
LAB_100058ef:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000590b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10005978:
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
    if (bVar1 == 0) goto LAB_10005978;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x10005980

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
    if (((uint)puVar2 & 3) == 0) goto LAB_100059a0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100059d3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100059a0:
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
  goto LAB_100059d3;
}



// Function: FUN_100059fb @ 0x100059fb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100059fb(int param_1)

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
  
  FUN_100056b6(0x19);
  CodePage = FUN_10005ba8(param_1);
  if (CodePage != DAT_1000a2f0) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10009968;
LAB_10005a38:
      if (*pUVar5 != CodePage) goto code_r0x10005a3c;
      local_8 = 0;
      puVar15 = &DAT_1000a420;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10009978);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10009960)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000a420 + uVar8 + 1);
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
      _DAT_1000a30c = 1;
      DAT_1000a2f0 = CodePage;
      DAT_1000a524 = FUN_10005bf2(CodePage);
      DAT_1000a300 = *(undefined4 *)(iVar12 + 0x1000996c);
      DAT_1000a304 = *(undefined4 *)(iVar12 + 0x10009970);
      DAT_1000a308 = *(undefined4 *)(iVar12 + 0x10009974);
      goto LAB_10005b8c;
    }
    goto LAB_10005b87;
  }
  goto LAB_10005a22;
code_r0x10005a3c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10009a57 < (int)pUVar5) goto code_r0x10005a47;
  goto LAB_10005a38;
code_r0x10005a47:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000a524 = 0;
    puVar15 = &DAT_1000a420;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000a30c = 0;
      DAT_1000a2f0 = CodePage;
    }
    else {
      DAT_1000a2f0 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000a420 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000a420 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000a524 = FUN_10005bf2(CodePage);
      _DAT_1000a30c = 1;
    }
    DAT_1000a300 = 0;
    DAT_1000a304 = 0;
    DAT_1000a308 = 0;
  }
  else {
    if (DAT_1000a298 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10005b99;
    }
LAB_10005b87:
    FUN_10005c25();
  }
LAB_10005b8c:
  FUN_10005c4e();
LAB_10005a22:
  uVar14 = 0;
LAB_10005b99:
  FUN_10005717(0x19);
  return uVar14;
}



// Function: FUN_10005ba8 @ 0x10005ba8

int __cdecl FUN_10005ba8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000a298 = 1;
                    /* WARNING: Could not recover jumptable at 0x10005bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000a298 = 1;
                    /* WARNING: Could not recover jumptable at 0x10005bd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000a2c8;
  }
  DAT_1000a298 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10005bf2 @ 0x10005bf2

undefined4 __cdecl FUN_10005bf2(int param_1)

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



// Function: FUN_10005c25 @ 0x10005c25

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005c25(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000a420;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000a2f0 = 0;
  _DAT_1000a30c = 0;
  DAT_1000a524 = 0;
  DAT_1000a300 = 0;
  DAT_1000a304 = 0;
  DAT_1000a308 = 0;
  return;
}



// Function: FUN_10005c4e @ 0x10005c4e

void FUN_10005c4e(void)

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
  
  BVar2 = GetCPInfo(DAT_1000a2f0,&local_18);
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
    FUN_10006dc2(1,local_118,0x100,local_518,DAT_1000a2f0,DAT_1000a524,0);
    FUN_10006b73(DAT_1000a524,0x100,local_118,0x100,local_218,0x100,DAT_1000a2f0,0);
    FUN_10006b73(DAT_1000a524,0x200,local_118,0x100,local_318,0x100,DAT_1000a2f0,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000a420 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10005d5a;
        }
        (&DAT_1000a320)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000a420 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10005d5a:
        (&DAT_1000a320)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000a420 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10005da4;
        }
        (&DAT_1000a320)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000a420 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10005da4:
        (&DAT_1000a320)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10005dd3 @ 0x10005dd3

void FUN_10005dd3(void)

{
  if (DAT_1000a648 == 0) {
    FUN_100059fb(-3);
    DAT_1000a648 = 1;
  }
  return;
}



// Function: FUN_10005df0 @ 0x10005df0

undefined4 * __cdecl FUN_10005df0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10005fa7_caseD_2;
        case 3:
          goto switchD_10005fa7_caseD_3;
        }
        goto switchD_10005fa7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10005fa7_caseD_0;
      case 1:
        goto switchD_10005fa7_caseD_1;
      case 2:
        goto switchD_10005fa7_caseD_2;
      case 3:
        goto switchD_10005fa7_caseD_3;
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
              goto switchD_10005fa7_caseD_2;
            case 3:
              goto switchD_10005fa7_caseD_3;
            }
            goto switchD_10005fa7_caseD_1;
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
              goto switchD_10005fa7_caseD_2;
            case 3:
              goto switchD_10005fa7_caseD_3;
            }
            goto switchD_10005fa7_caseD_1;
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
              goto switchD_10005fa7_caseD_2;
            case 3:
              goto switchD_10005fa7_caseD_3;
            }
            goto switchD_10005fa7_caseD_1;
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
switchD_10005fa7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10005fa7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10005fa7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10005fa7_caseD_0:
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
        goto switchD_10005e25_caseD_2;
      case 3:
        goto switchD_10005e25_caseD_3;
      }
      goto switchD_10005e25_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005e25_caseD_0;
    case 1:
      goto switchD_10005e25_caseD_1;
    case 2:
      goto switchD_10005e25_caseD_2;
    case 3:
      goto switchD_10005e25_caseD_3;
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
            goto switchD_10005e25_caseD_2;
          case 3:
            goto switchD_10005e25_caseD_3;
          }
          goto switchD_10005e25_caseD_1;
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
            goto switchD_10005e25_caseD_2;
          case 3:
            goto switchD_10005e25_caseD_3;
          }
          goto switchD_10005e25_caseD_1;
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
            goto switchD_10005e25_caseD_2;
          case 3:
            goto switchD_10005e25_caseD_3;
          }
          goto switchD_10005e25_caseD_1;
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
switchD_10005e25_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005e25_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005e25_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005e25_caseD_0:
  return param_1;
}



// Function: FUN_10006125 @ 0x10006125

undefined4 FUN_10006125(void)

{
  DAT_1000a2ec = HeapAlloc(DAT_1000a528,0,0x140);
  if (DAT_1000a2ec == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000a2e4 = 0;
  DAT_1000a2e8 = 0;
  DAT_1000a2e0 = DAT_1000a2ec;
  DAT_1000a2d8 = 0x10;
  return 1;
}



// Function: FUN_10006163 @ 0x10006163

uint __cdecl FUN_10006163(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000a2ec;
  while( true ) {
    if (DAT_1000a2ec + DAT_1000a2e8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_1000618e @ 0x1000618e

void __cdecl FUN_1000618e(uint *param_1,uint param_2)

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
  uVar5 = DAT_1000a2dc;
  puVar2 = DAT_1000a2e4;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_1000a2e4 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_1000a2dc * 0x8000 + DAT_1000a2e4[3]),0x8000,0x4000);
    DAT_1000a2e4[2] = DAT_1000a2e4[2] | 0x80000000U >> ((byte)DAT_1000a2dc & 0x1f);
    *(undefined4 *)(DAT_1000a2e4[4] + 0xc4 + DAT_1000a2dc * 4) = 0;
    *(char *)(DAT_1000a2e4[4] + 0x43) = *(char *)(DAT_1000a2e4[4] + 0x43) + -1;
    if (*(char *)(DAT_1000a2e4[4] + 0x43) == '\0') {
      DAT_1000a2e4[1] = DAT_1000a2e4[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_1000a2e4[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_1000a2e4[3],0,0x8000);
      HeapFree(DAT_1000a528,0,(LPVOID)DAT_1000a2e4[4]);
      FUN_10006f10(DAT_1000a2e4,DAT_1000a2e4 + 5,
                   (DAT_1000a2e8 * 0x14 - (int)DAT_1000a2e4) + -0x14 + DAT_1000a2ec);
      DAT_1000a2e8 = DAT_1000a2e8 + -1;
      if (DAT_1000a2e4 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_1000a2e0 = DAT_1000a2ec;
      puVar2 = param_1;
    }
  }
  DAT_1000a2e4 = puVar2;
  DAT_1000a2dc = uVar5;
  return;
}



// Function: FUN_100064b9 @ 0x100064b9

int * __cdecl FUN_100064b9(uint *param_1)

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
  
  puVar8 = DAT_1000a2ec + DAT_1000a2e8 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000a2e0;
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
  puVar11 = DAT_1000a2ec;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000a2e0 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000a2e0) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000a2ec;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000a2e0 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000a2e0) && (param_1 = FUN_100067c2(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10006873((int)param_1);
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
  DAT_1000a2e0 = param_1;
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
    if (iVar9 == 0) goto LAB_1000677f;
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
LAB_1000677f:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000a2e4)) && (local_8 == DAT_1000a2dc)) {
    DAT_1000a2e4 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_100067c2 @ 0x100067c2

undefined4 * FUN_100067c2(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000a2e8 == DAT_1000a2d8) {
    pvVar2 = HeapReAlloc(DAT_1000a528,0,DAT_1000a2ec,(DAT_1000a2d8 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000a2d8 = DAT_1000a2d8 + 0x10;
    DAT_1000a2ec = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000a2ec + DAT_1000a2e8 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000a528,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000a2e8 = DAT_1000a2e8 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000a528,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10006873 @ 0x10006873

int __cdecl FUN_10006873(int param_1)

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



// Function: FUN_1000696e @ 0x1000696e

int __cdecl FUN_1000696e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000a29c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000a29c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000a29c != (FARPROC)0x0) {
        DAT_1000a2a0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000a2a4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100069bd;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100069bd:
    if (DAT_1000a2a0 != (FARPROC)0x0) {
      iVar1 = (*DAT_1000a2a0)();
      if ((iVar1 != 0) && (DAT_1000a2a4 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000a2a4)(iVar1);
      }
    }
    iVar1 = (*DAT_1000a29c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10006a00

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
        goto joined_r0x10006a3e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10006a7b;
        goto LAB_10006ae9;
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
joined_r0x10006ae5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10006ae9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10006a7b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10006ae5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10006ae5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10006ae5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10006a3e:
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
LAB_10006a7b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: _memset @ 0x10006b00

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



// Function: FUN_10006b58 @ 0x10006b58

undefined4 __cdecl FUN_10006b58(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000a2a8 != (code *)0x0) {
    iVar1 = (*DAT_1000a2a8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10006b73 @ 0x10006b73

int __cdecl
FUN_10006b73(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100084c0;
  puStack_10 = &LAB_10007340;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000a2d0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000a2d0 = 2;
    }
    else {
      DAT_1000a2d0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10006d97(param_3,param_4);
  }
  if (DAT_1000a2d0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000a2d0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000a2c8;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10007420();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10007420();
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



// Function: FUN_10006d97 @ 0x10006d97

int __cdecl FUN_10006d97(char *param_1,int param_2)

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



// Function: FUN_10006dc2 @ 0x10006dc2

BOOL __cdecl
FUN_10006dc2(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100084d8;
  puStack_10 = &LAB_10007340;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000a2d4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000a2d4 == 0) {
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
  DAT_1000a2d4 = iVar3;
  if (DAT_1000a2d4 != 2) {
    if (DAT_1000a2d4 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000a2c8;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10007420();
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
    param_6 = DAT_1000a2b8;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10006f10 @ 0x10006f10

undefined4 * __cdecl FUN_10006f10(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100070c7_caseD_2;
        case 3:
          goto switchD_100070c7_caseD_3;
        }
        goto switchD_100070c7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100070c7_caseD_0;
      case 1:
        goto switchD_100070c7_caseD_1;
      case 2:
        goto switchD_100070c7_caseD_2;
      case 3:
        goto switchD_100070c7_caseD_3;
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
              goto switchD_100070c7_caseD_2;
            case 3:
              goto switchD_100070c7_caseD_3;
            }
            goto switchD_100070c7_caseD_1;
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
              goto switchD_100070c7_caseD_2;
            case 3:
              goto switchD_100070c7_caseD_3;
            }
            goto switchD_100070c7_caseD_1;
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
              goto switchD_100070c7_caseD_2;
            case 3:
              goto switchD_100070c7_caseD_3;
            }
            goto switchD_100070c7_caseD_1;
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
switchD_100070c7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100070c7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100070c7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100070c7_caseD_0:
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
        goto switchD_10006f45_caseD_2;
      case 3:
        goto switchD_10006f45_caseD_3;
      }
      goto switchD_10006f45_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10006f45_caseD_0;
    case 1:
      goto switchD_10006f45_caseD_1;
    case 2:
      goto switchD_10006f45_caseD_2;
    case 3:
      goto switchD_10006f45_caseD_3;
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
            goto switchD_10006f45_caseD_2;
          case 3:
            goto switchD_10006f45_caseD_3;
          }
          goto switchD_10006f45_caseD_1;
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
            goto switchD_10006f45_caseD_2;
          case 3:
            goto switchD_10006f45_caseD_3;
          }
          goto switchD_10006f45_caseD_1;
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
            goto switchD_10006f45_caseD_2;
          case 3:
            goto switchD_10006f45_caseD_3;
          }
          goto switchD_10006f45_caseD_1;
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
switchD_10006f45_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10006f45_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10006f45_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10006f45_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x10007248

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10007260,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000728a

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
  puStack_18 = &LAB_10007268;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000731e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_1000731e @ 0x1000731e

void FUN_1000731e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10009a78 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10009a74 = in_EAX;
  DAT_10009a7c = unaff_EBP;
  return;
}



// Function: FUN_100073fd @ 0x100073fd

void FUN_100073fd(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10007420 @ 0x10007420

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10007420(void)

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




// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

undefined4 FUN_10001000(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: FUN_10001012 @ 0x10001012

int __cdecl FUN_10001012(undefined4 param_1)

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



// Function: FUN_10001030 @ 0x10001030

int __cdecl
FUN_10001030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_10001012(param_1);
  SelectUnits(param_1,0);
  ClearSelection(0);
  SetStandGround(iVar1,0);
  SelSendAndKill(iVar1,param_2,param_3,param_4);
  return iVar1;
}



// Function: FUN_10001072 @ 0x10001072

void __cdecl FUN_10001072(undefined4 param_1,undefined4 param_2)

{
  FUN_10001030(param_1,param_2,200,0);
  return;
}



// Function: FUN_1000108a @ 0x1000108a

void __cdecl FUN_1000108a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10001030(param_1,param_2,param_3,0);
  return;
}



// Function: FUN_100010a1 @ 0x100010a1

undefined4 __cdecl
FUN_100010a1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CreateObject0(param_1,&DAT_10007d08,param_2,param_4,param_3,0x80);
  return param_4;
}



// Function: FUN_100010c8 @ 0x100010c8

bool __cdecl
FUN_100010c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

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



// Function: OnInit @ 0x100011d7

void OnInit(void)

{
                    /* 0x11d7  1  OnInit */
  RegisterVar(&DAT_10007b68,4);
  RegisterVar(&DAT_10007e70,4);
  SetPlayerName(1,s_ENEMY_100074dc);
  SetPlayerName(2,s_ENEMY_100074dc);
  SetPlayerName(3,s_ENEMY_100074dc);
  SetPlayerName(5,s_ENEMY_100074dc);
  RegisterZone(&DAT_10007f38,s_ZAttack_100074d4);
  RegisterZone(&DAT_10007cf8,&DAT_100074d0);
  RegisterZone(&DAT_10007d00,&DAT_100074cc);
  RegisterZone(&DAT_10007d10,&DAT_100074c8);
  RegisterZone(&DAT_10007d18,&DAT_100074c4);
  RegisterZone(&DAT_10007ea0,&DAT_100074c0);
  RegisterZone(&DAT_10007af8,s_ZTown1_100074b8);
  RegisterZone(&DAT_10007af0,s_ZTown2_100074b0);
  RegisterZone(&DAT_10007e30,s_ZGate1_100074a8);
  RegisterZone(&DAT_10007e40,s_ZGate2_100074a0);
  RegisterZone(&DAT_10007e38,s_ZGate3_10007498);
  RegisterZone(&DAT_10007e50,s_ZGate4_10007490);
  RegisterZone(&DAT_10007e48,s_ZGate5_10007488);
  RegisterZone(&DAT_10007e60,s_ZGate6_10007480);
  RegisterZone(&DAT_10007e58,s_ZGate7_10007478);
  RegisterZone(&DAT_10007bf8,&DAT_10007470);
  RegisterZone(&DAT_10007c88,&DAT_10007468);
  RegisterZone(&DAT_10007cd0,&DAT_10007460);
  RegisterZone(&DAT_10007d20,&DAT_10007458);
  RegisterZone(&DAT_10007f20,s_ZArt11_10007450);
  RegisterZone(&DAT_10007f18,s_ZArt12_10007448);
  RegisterZone(&DAT_10007c00,&DAT_10007440);
  RegisterZone(&DAT_10007c98,&DAT_10007438);
  RegisterZone(&DAT_10007cd8,&DAT_10007430);
  RegisterZone(&DAT_10007d28,&DAT_10007428);
  RegisterZone(&DAT_10007c08,&DAT_10007420);
  RegisterZone(&DAT_10007cb0,&DAT_10007418);
  RegisterZone(&DAT_10007ce8,&DAT_10007410);
  RegisterZone(&DAT_10007d30,&DAT_10007408);
  RegisterZone(&DAT_10007f30,s_ZArt21_10007400);
  RegisterZone(&DAT_10007f28,s_ZArt22_100073f8);
  RegisterZone(&DAT_10007cb0,&DAT_10007418);
  RegisterZone(&DAT_10007d30,&DAT_10007408);
  RegisterZone(&DAT_10007cb8,&DAT_100073f0);
  RegisterZone(&DAT_10007d38,&DAT_100073e8);
  RegisterZone(&DAT_10007cc0,&DAT_100073e0);
  RegisterZone(&DAT_10007d40,&DAT_100073d8);
  RegisterZone(&DAT_10007db0,s_ZPrt1_100073d0);
  RegisterZone(&DAT_10007c68,s_ZRaid1_100073c8);
  RegisterZone(&DAT_10007ed8,&DAT_100073c4);
  RegisterZone(&DAT_10007ee0,&DAT_100073c0);
  RegisterZone(&DAT_10007ee8,&DAT_100073bc);
  RegisterZone(&DAT_10007db8,s_ZPrt2_100073b4);
  RegisterZone(&DAT_10007c60,s_ZRaid2_100073ac);
  RegisterZone(&DAT_10007ef8,&DAT_100073a8);
  RegisterZone(&DAT_10007f00,&DAT_100073a4);
  RegisterZone(&DAT_10007f08,&DAT_100073a0);
  RegisterUnits(&DAT_10007cc8,&DAT_1000739c);
  RegisterUnits(&DAT_10007de0,s_GErase_10007394);
  RegisterUnits(&DAT_10007da8,&DAT_10007390);
  RegisterUnits(&DAT_10007c78,s_GTower1_10007388);
  RegisterUnits(&DAT_10007c90,s_GTower2_10007380);
  RegisterUnits(&DAT_10007e80,s_GShip0_10007378);
  RegisterUnits(&DAT_10007e90,s_GShip1_10007370);
  RegisterUnits(&DAT_10007e88,s_GShip2_10007368);
  RegisterUnits(&DAT_10007b78,s_GGate1_10007360);
  RegisterUnits(&DAT_10007b70,s_GGate2_10007358);
  RegisterUnits(&DAT_10007b88,s_GGate3_10007350);
  RegisterUnits(&DAT_10007b80,s_GGate4_10007348);
  RegisterUnits(&DAT_10007b98,s_GGate5_10007340);
  RegisterUnits(&DAT_10007b90,s_GGate6_10007338);
  RegisterUnits(&DAT_10007ba0,s_GGate7_10007330);
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
  RegisterUnits(&DAT_10007d98,s_GArt1_10007328);
  RegisterUnitType(&DAT_10007ef0,s_Pushka_sp__1000731c);
  RegisterUnits(&DAT_10007c10,s_GBar1_10007314);
  RegisterUnitType(&DAT_10007f58,s_Pikiner_evro_sp__10007300);
  RegisterUnitType(&DAT_10007ce0,s_Strelec_Spain_sp__100072ec);
  RegisterUnits(&DAT_10007dd0,s_GDip1_100072e4);
  RegisterUnitType(&DAT_10007f40,s_Grenader_DIP_sp__100072d0);
  RegisterUnitType(&DAT_10007e98,s_Strelec_Algir_DIP_sp__100072b8);
  RegisterUnitType(&DAT_10007b00,s_Rundashir_Avstria_DIP_sp__1000729c);
  RegisterUnits(&DAT_10007e08,s_GStb1_10007294);
  RegisterUnitType(&DAT_10007ed0,s_Konni_Ricar_sp__10007284);
  RegisterUnitType(&DAT_10007bb0,s_Dragun_sp__10007278);
  RegisterUnits(&DAT_10007d80,s_GPrt1_10007270);
  RegisterUnitType(&DAT_10007f50,s_Lodka_sp__10007264);
  RegisterUnitType(&DAT_10007de8,s_Fregat_sp__10007258);
  RegisterUnits(&DAT_10007b38,s_GCath1_10007250);
  RegisterUnitType(&DAT_10007e78,s_Sveshenik_evro_sp__1000723c);
  RegisterUnits(&DAT_10007da0,s_GArt2_10007234);
  RegisterUnitType(&DAT_10007ae8,s_Pushka_fr__10007228);
  RegisterUnits(&DAT_10007c18,s_GBar2_10007220);
  RegisterUnitType(&DAT_10007d60,s_Pik_evro_rus_fr__1000720c);
  RegisterUnitType(&DAT_10007eb0,s_Strelec_France_fr__100071f8);
  RegisterUnits(&DAT_10007dd8,s_GDip2_100071f0);
  RegisterUnitType(&DAT_10007c28,s_Grenader_DIP_fr__100071dc);
  RegisterUnitType(&DAT_10007b48,s_Strelec_Algir_DIP_fr__100071c4);
  RegisterUnitType(&DAT_10007cf0,s_Rundashir_Avstria_DIP_fr__100071a8);
  RegisterUnits(&DAT_10007e10,s_GStb2_100071a0);
  RegisterUnitType(&DAT_10007f10,s_Kirasir_fr__10007194);
  RegisterUnitType(&DAT_10007e00,s_Korolrv_Mus_fr__10007184);
  RegisterUnitType(&DAT_10007ae0,s_Gusar_evro_fr__10007174);
  RegisterUnits(&DAT_10007d90,s_GPrt2_1000716c);
  RegisterUnitType(&DAT_10007e18,s_Lodka_fr__10007160);
  RegisterUnitType(&DAT_10007bf0,s_Fregat_fr__10007154);
  RegisterUnits(&DAT_10007b20,s_GCath2_1000714c);
  RegisterUnitType(&DAT_10007be0,s_Sveshenik_evro_fr__10007138);
  RegisterUnitType(&DAT_10007dc8,s_Krestian_Sved_fr__10007124);
  RegisterUnitType(&DAT_10007df0,s_Kreposnoi_portugal_sp__1000710c);
  RegisterUnitType(&DAT_10007b10,s_Kreposnoi_portugal_PO__100070f4);
  RegisterUnitType(&DAT_10007ba8,s_Center_France_fr__100070e0);
  RegisterUnitType(&DAT_10007dc0,s_Center_Spain_sp__100070cc);
  RegisterUnitType(&DAT_10007ea8,s_Center_Portugal_PO__100070b8);
  RegisterUnitType(&DAT_10007ec8,s_Center_Holland_HO__100070a4);
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
  RegisterUnitType(&DAT_10007bb8,s_Pikiner_evro_PO__10007090);
  RegisterUnitType(&DAT_10007d88,s_Mushketer_ev_PO__1000707c);
  RegisterUnitType(&DAT_10007e68,s_Konni_Ricar_PO__1000706c);
  RegisterUnitType(&DAT_10007eb8,s_Dragun_18_DIP_PO__10007058);
  RegisterUpgrade(&DAT_10007c20,s_MAINFR_10007050);
  RegisterUpgrade(&DAT_10007df8,s_MAINHO_10007048);
  RegisterUpgrade(&DAT_10007ec0,s_MAINSP_10007040);
  RegisterUpgrade(&DAT_10007f48,s_MAINPO_10007038);
  RegisterFormation(&DAT_10007d08,s__ALONE_10007030);
  return;
}



// Function: ProcessScenary @ 0x100019bc

void ProcessScenary(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  undefined *puVar12;
  int iStack_4;
  
                    /* 0x19bc  2  ProcessScenary */
  pcVar11 = Trigg_exref;
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    DAT_10007b68 = GetDiff(0);
    DAT_10007e70 = 0;
    ChangeFriends(1,0xe);
    ChangeFriends(2,0xe);
    ChangeFriends(3,0xe);
    ChangeFriends(5,0x3e);
    if (DAT_10007b68 == 0) {
      InitialUpgrade(&DAT_1000739c,s_AKA12HO_10007598);
      InitialUpgrade(&DAT_1000739c,s_AKA13HO_10007590);
      InitialUpgrade(&DAT_1000739c,s_AKA31HO_10007588);
LAB_10001d57:
      InitialUpgrade(&DAT_1000739c,s_AKA14HO_10007580);
      InitialUpgrade(&DAT_1000739c,s_AKA15HO_10007578);
      InitialUpgrade(&DAT_1000739c,s_AKA33HO_10007570);
      InitialUpgrade(s_GErase_10007394,s_AKA14PO_100076c8);
      InitialUpgrade(s_GErase_10007394,s_AKA15PO_100076c0);
      InitialUpgrade(s_GErase_10007394,s_AKA33PO_100076b8);
    }
    else {
      if (DAT_10007b68 == 1) goto LAB_10001d57;
      if (DAT_10007b68 == 2) {
LAB_10001bf6:
        InitialUpgrade(s_GGate1_10007360,s_AKA09SP_10007638);
        InitialUpgrade(s_GGate1_10007360,s_AKA11SP_100077b0);
        InitialUpgrade(s_GGate1_10007360,s_AKA12SP_100077a8);
        InitialUpgrade(s_GGate1_10007360,s_AKA13SP_100077a0);
        InitialUpgrade(s_GGate1_10007360,s_AKA16SP_10007788);
        InitialUpgrade(s_GGate1_10007360,s_AKA20SP_10007630);
        InitialUpgrade(s_GGate1_10007360,s_AKA31SP_10007770);
        InitialUpgrade(s_GGate1_10007360,s_KUZ05SP_10007748);
        InitialUpgrade(s_GGate1_10007360,s_KUZ06SP_10007740);
        InitialUpgrade(s_GGate4_10007348,s_AKA09FR_10007628);
        InitialUpgrade(s_GGate4_10007348,s_AKA11FR_10007738);
        InitialUpgrade(s_GGate4_10007348,s_AKA12FR_10007730);
        InitialUpgrade(s_GGate4_10007348,s_AKA13FR_10007728);
        InitialUpgrade(s_GGate4_10007348,s_AKA16FR_10007710);
        InitialUpgrade(s_GGate4_10007348,s_AKA20FR_10007620);
        InitialUpgrade(s_GGate4_10007348,s_AKA31FR_10007618);
        InitialUpgrade(s_GGate4_10007348,s_KUZ05FR_100076d8);
        InitialUpgrade(s_GGate4_10007348,s_KUZ06FR_100076d0);
        InitialUpgrade(s_GErase_10007394,s_AKA09PO_10007610);
        InitialUpgrade(s_GErase_10007394,s_AKA12PO_10007608);
        InitialUpgrade(s_GErase_10007394,s_AKA13PO_10007600);
        InitialUpgrade(s_GErase_10007394,s_AKA31PO_100075f8);
        InitialUpgrade(s_GErase_10007394,s_KUZ05PO_100076a0);
        InitialUpgrade(s_GErase_10007394,s_KUZ06PO_10007698);
        InitialUpgrade(s_GErase_10007394,s_Dragun_PO_SHIELD3_100075e4);
        InitialUpgrade(s_GErase_10007394,s_Dragun_PO_ATTACK3_100075d0);
        InitialUpgrade(s_GErase_10007394,s_Mushketer_ev_PO_ATTACK3_100075b8);
        InitialUpgrade(s_GErase_10007394,s_Mushketer_ev_PO_SHIELD3_100075a0);
      }
      else if (DAT_10007b68 == 3) {
        InitialUpgrade(s_GGate1_10007360,s_AKA11SP_100077b0);
        InitialUpgrade(s_GGate1_10007360,s_AKA12SP_100077a8);
        InitialUpgrade(s_GGate1_10007360,s_AKA13SP_100077a0);
        InitialUpgrade(s_GGate1_10007360,s_AKA14SP_10007798);
        InitialUpgrade(s_GGate1_10007360,s_AKA15SP_10007790);
        InitialUpgrade(s_GGate1_10007360,s_AKA16SP_10007788);
        InitialUpgrade(s_GGate1_10007360,s_AKA17SP_10007780);
        InitialUpgrade(s_GGate1_10007360,s_AKA28SP_10007778);
        InitialUpgrade(s_GGate1_10007360,s_AKA31SP_10007770);
        InitialUpgrade(s_GGate1_10007360,s_AKA33SP_10007768);
        InitialUpgrade(s_GGate1_10007360,s_AKA34SP_10007760);
        InitialUpgrade(s_GGate1_10007360,s_KUZ02SP_10007758);
        InitialUpgrade(s_GGate1_10007360,s_KUZ04SP_10007750);
        InitialUpgrade(s_GGate1_10007360,s_KUZ05SP_10007748);
        InitialUpgrade(s_GGate1_10007360,s_KUZ06SP_10007740);
        InitialUpgrade(s_GGate4_10007348,s_AKA11FR_10007738);
        InitialUpgrade(s_GGate4_10007348,s_AKA12FR_10007730);
        InitialUpgrade(s_GGate4_10007348,s_AKA13FR_10007728);
        InitialUpgrade(s_GGate4_10007348,s_AKA14FR_10007720);
        InitialUpgrade(s_GGate4_10007348,s_AKA15FR_10007718);
        InitialUpgrade(s_GGate4_10007348,s_AKA16FR_10007710);
        InitialUpgrade(s_GGate4_10007348,s_AKA17FR_10007708);
        InitialUpgrade(s_GGate4_10007348,s_AKA28FR_10007700);
        InitialUpgrade(s_GGate4_10007348,s_AKA33FR_100076f8);
        InitialUpgrade(s_GGate4_10007348,s_AKA34FR_100076f0);
        InitialUpgrade(s_GGate4_10007348,s_KUZ02FR_100076e8);
        InitialUpgrade(s_GGate4_10007348,s_KUZ04FR_100076e0);
        InitialUpgrade(s_GGate4_10007348,s_KUZ05FR_100076d8);
        InitialUpgrade(s_GGate4_10007348,s_KUZ06FR_100076d0);
        InitialUpgrade(s_GErase_10007394,s_AKA14PO_100076c8);
        InitialUpgrade(s_GErase_10007394,s_AKA15PO_100076c0);
        InitialUpgrade(s_GErase_10007394,s_AKA33PO_100076b8);
        InitialUpgrade(s_GErase_10007394,s_AKA34PO_100076b0);
        InitialUpgrade(s_GErase_10007394,s_KUZ02PO_100076a8);
        InitialUpgrade(s_GErase_10007394,s_KUZ05PO_100076a0);
        InitialUpgrade(s_GErase_10007394,s_KUZ06PO_10007698);
        InitialUpgrade(s_GErase_10007394,s_Dragun_PO_ATTACK_10007684);
        InitialUpgrade(s_GErase_10007394,s_Dragun_PO_SHIELD_10007670);
        InitialUpgrade(s_GErase_10007394,s_Mushketer_ev_PO_ATTACK_10007658);
        InitialUpgrade(s_GErase_10007394,s_Mushketer_ev_PO_SHIELD_10007640);
        goto LAB_10001bf6;
      }
    }
    InitialUpgrade(s_GGate1_10007360,s_AKA06SP_10007568);
    InitialUpgrade(s_GGate4_10007348,s_AKA06FR_10007560);
    InitialUpgrade(s_GGate4_10007348,s_MAINFR_10007050);
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
    StartAI(2,s_SPAIN_0_10007558,1,0,1,DAT_10007b68);
    ShowPage(s__PAGE0_10007550);
    RunTimer(1,(4 - DAT_10007b68) * 5000);
    RunTimer(2,0);
    RunTimer(3,DAT_10007b68 * -11000 + 48000);
    RunTimer(5,0);
    RunTimer(10,0);
    SetTrigg(99,0);
    pcVar11 = Trigg_exref;
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
    cVar1 = (*pcVar11)(0x33);
    if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e30,0), iVar3 < 1)) {
      SelOpenGates(5);
    }
    else {
      SelCloseGates(5);
    }
    SelectUnits(&DAT_10007b70,0);
    cVar1 = (*pcVar11)(0x33);
    if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e40,0), iVar3 < 1)) {
      SelOpenGates(5);
    }
    else {
      SelCloseGates(5);
    }
    SelectUnits(&DAT_10007b88,0);
    cVar1 = (*pcVar11)(0x34);
    if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e38,0), iVar3 < 1)) {
      SelOpenGates(5);
    }
    else {
      SelCloseGates(5);
    }
    SelectUnits(&DAT_10007b80,0);
    cVar1 = (*pcVar11)(0x34);
    if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e50,0), iVar3 < 1)) {
      SelOpenGates(5);
    }
    else {
      SelCloseGates(5);
    }
    cVar1 = (*pcVar11)(3);
    if (cVar1 == '\0') {
      SelectUnits(&DAT_10007b98,0);
      cVar1 = (*pcVar11)(0x34);
      if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e48,0), iVar3 < 1)) {
        SelOpenGates(5);
      }
      else {
        SelCloseGates(5);
      }
      SelectUnits(&DAT_10007b90,0);
      cVar1 = (*pcVar11)(0x34);
      if ((cVar1 == '\0') || (iVar3 = GetUnitsAmount0(&DAT_10007e60,0), iVar3 < 1)) {
        SelOpenGates(5);
      }
      else {
        SelCloseGates(5);
      }
      SelectUnits(&DAT_10007ba0,0);
      cVar1 = (*pcVar11)(0x34);
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
  pcVar10 = SetTrigg_exref;
  if (DAT_10007b68 != 0) {
    cVar1 = TimerDone(1);
    pcVar9 = ProduceUnitFast_exref;
    if (cVar1 != '\0') {
      DAT_10007e70 = DAT_10007e70 + DAT_10007b68 * 2;
      if (1 < DAT_10007b68) {
        InitialUpgrade(s_GGate4_10007348,s_AKA26FR_10007548);
        InitialUpgrade(s_GGate4_10007348,s_AKA26FR_10007548);
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
      pcVar9 = ProduceUnitFast_exref;
      ProduceUnitFast(&DAT_10007d98,&DAT_10007ef0,&DAT_10007c70,0);
      cVar1 = (*pcVar11)(3);
      if (cVar1 == '\0') {
        ProduceUnitFast(&DAT_10007da0,&DAT_10007ae8,&DAT_10007c70,0);
      }
      iStack_4 = 0;
      if (0 < DAT_10007e70 * 2) {
        do {
          ProduceUnitFast(&DAT_10007dd0,&DAT_10007e98,&DAT_10007d58,0);
          ProduceUnitFast(&DAT_10007dd0,&DAT_10007f40,&DAT_10007d58,0);
          cVar1 = (*pcVar11)(3);
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
    cVar1 = (*pcVar11)(1);
    pcVar10 = SetTrigg_exref;
    if ((cVar1 != '\0') && (cVar1 = TimerDone(3), pcVar10 = SetTrigg_exref, cVar1 != '\0')) {
      FUN_1000108a(&DAT_10007e28,&DAT_10007db0,0x37);
      RemoveGroup(&DAT_10007c30,&DAT_10007c70);
      (*pcVar9)(&DAT_10007d80,&DAT_10007de8,&DAT_10007c30,100);
      iStack_4 = 0;
      if (0 < DAT_10007b68 * 2) {
        do {
          (*pcVar9)(&DAT_10007d80,&DAT_10007f50,&DAT_10007c70,10);
          iStack_4 = iStack_4 + 1;
        } while (iStack_4 < DAT_10007b68 * 2);
      }
      cVar1 = (*pcVar11)(3);
      if (cVar1 == '\0') {
        FUN_1000108a(&DAT_10007e20,&DAT_10007db8,100);
        RemoveGroup(&DAT_10007c38,&DAT_10007c70);
        (*pcVar9)(&DAT_10007d90,&DAT_10007bf0,&DAT_10007c38,100);
        iStack_4 = 0;
        if (0 < DAT_10007b68 * 2) {
          do {
            (*pcVar9)(&DAT_10007d90,&DAT_10007e18,&DAT_10007c70,10);
            iStack_4 = iStack_4 + 1;
          } while (iStack_4 < DAT_10007b68 * 2);
        }
      }
      RunTimer(4,700);
      pcVar10 = SetTrigg_exref;
      SetTrigg(1,0);
    }
    cVar1 = (*pcVar11)(1);
    if ((cVar1 == '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
      FUN_10001072(&DAT_10007c30,&DAT_10007c68);
      cVar1 = (*pcVar11)(2);
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
      (*pcVar10)(2,cVar1 == '\0');
      cVar1 = (*pcVar11)(3);
      if (cVar1 == '\0') {
        FUN_10001072(&DAT_10007c38,&DAT_10007c60);
        cVar1 = (*pcVar11)(4);
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
        (*pcVar10)(4,cVar1 == '\0');
      }
      RunTimer(3,DAT_10007b68 * -11000 + 48000);
      (*pcVar10)(1,1);
    }
    cVar1 = TimerDone(5);
    if (cVar1 != '\0') {
      cVar1 = (*pcVar11)(0x33);
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
        pcVar10 = SetTrigg_exref;
        pcVar11 = Trigg_exref;
      }
      cVar1 = (*pcVar11)(3);
      if ((cVar1 == '\0') && (cVar1 = (*pcVar11)(0x34), cVar1 != '\0')) {
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
        pcVar10 = SetTrigg_exref;
        pcVar11 = Trigg_exref;
      }
      RunTimer(5,0x96);
    }
  }
  cVar1 = (*pcVar11)(0x12);
  if ((cVar1 != '\0') &&
     ((((cVar1 = IsUpgradeDone(&DAT_10007df8,0), cVar1 != '\0' ||
        (cVar1 = IsUpgradeDone(&DAT_10007ec0,0), cVar1 != '\0')) ||
       (cVar1 = IsUpgradeDone(&DAT_10007c20,0), cVar1 != '\0')) ||
      (cVar1 = IsUpgradeDone(&DAT_10007f48,0), cVar1 != '\0')))) {
    (*pcVar10)(0x12,0);
  }
  cVar1 = (*pcVar11)(3);
  pcVar8 = GetUnitsAmount0_exref;
  pcVar9 = ShowPage_exref;
  if (cVar1 != '\0') {
    cVar1 = (*pcVar11)(0x12);
    pcVar8 = GetUnitsAmount0_exref;
    if (cVar1 != '\0') {
      iVar3 = GetUnitsAmount0(&DAT_10007af8,0);
      iVar4 = GetUnitsAmount0(&DAT_10007d18,0);
      iVar5 = GetUnitsAmount0(&DAT_10007d10,0);
      iVar6 = GetUnitsAmount0(&DAT_10007d00,0);
      iVar7 = GetUnitsAmount0(&DAT_10007cf8,0);
      pcVar9 = ShowPage_exref;
      pcVar10 = SetTrigg_exref;
      if (iVar3 + iVar4 + iVar5 + iVar6 + iVar7 < 0x33) goto LAB_10002f76;
    }
    SetResource(1,3,(DAT_10007b68 + 1) * 0x1e848);
    SetResource(1,1,(DAT_10007b68 + 1) * 0x1e848);
    StartAI(1,s_FRANCE_0_1000753c,1,0,1,DAT_10007b68);
    pcVar9 = ShowPage_exref;
    ShowPage(s__PAGE3_10007534);
    (*pcVar10)(3,0);
  }
LAB_10002f76:
  cVar1 = (*pcVar11)(0x1e);
  if (cVar1 != '\0') {
    cVar1 = (*pcVar11)(0x12);
    if (cVar1 != '\0') {
      iVar3 = (*pcVar8)(&DAT_10007d18,0);
      iVar4 = (*pcVar8)(&DAT_10007d10,0);
      iVar5 = (*pcVar8)(&DAT_10007d00,0);
      iVar6 = (*pcVar8)(&DAT_10007cf8,0);
      pcVar9 = ShowPage_exref;
      if (iVar3 + iVar4 + iVar5 + iVar6 < 0x33) goto LAB_10003142;
    }
    iStack_4 = 0;
    if (DAT_10007b68 * 5 != -0x19 && -1 < DAT_10007b68 * 5 + 0x19) {
      do {
        FUN_100010a1(&DAT_10007c70,&DAT_10007b10,&DAT_10007ea0,3);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < DAT_10007b68 * 5 + 0x19);
    }
    iStack_4 = 0;
    if (0 < (DAT_10007b68 + 1) * 0x1e) {
      do {
        FUN_100010a1(&DAT_10007c80,&DAT_10007bb8,&DAT_10007ea0,3);
        FUN_1000108a(&DAT_10007c80,&DAT_10007e48,0x40);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < (DAT_10007b68 + 1) * 0x1e);
    }
    iStack_4 = 0;
    if (0 < (DAT_10007b68 + 1) * 0x1e) {
      do {
        FUN_100010a1(&DAT_10007c70,&DAT_10007e68,&DAT_10007ea0,3);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < (DAT_10007b68 + 1) * 0x1e);
    }
    iStack_4 = 0;
    if (0 < (DAT_10007b68 * 5 + 5) * 4) {
      do {
        FUN_100010a1(&DAT_10007c70,&DAT_10007eb8,&DAT_10007ea0,3);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < (DAT_10007b68 * 5 + 5) * 4);
    }
    iStack_4 = 0;
    if (0 < (DAT_10007b68 * 5 + 5) * 4) {
      do {
        FUN_100010a1(&DAT_10007c70,&DAT_10007d88,&DAT_10007ea0,3);
        iStack_4 = iStack_4 + 1;
      } while (iStack_4 < (DAT_10007b68 * 5 + 5) * 4);
    }
    StartAI(3,s_PORTUGALIA_0_10007524,1,3,1,DAT_10007b68);
    (*pcVar9)(s__PAGE4_1000751c);
    RunTimer(0x1e,1000);
    (*pcVar10)(0x1e,0);
  }
LAB_10003142:
  cVar1 = (*pcVar11)(0x1f);
  if (((cVar1 != '\0') && (cVar1 = (*pcVar11)(0x1e), cVar1 == '\0')) &&
     (cVar1 = TimerDone(0x1e), cVar1 != '\0')) {
    (*pcVar10)(0x1f,0);
  }
  cVar1 = (*pcVar11)(0x33);
  if ((cVar1 != '\0') && (iVar3 = (*pcVar8)(&DAT_10007af8,5), iVar3 < 10)) {
    (*pcVar9)(s__PAGE1_10007514);
    (*pcVar10)(0x33,0);
  }
  cVar1 = (*pcVar11)(0x34);
  if ((cVar1 != '\0') && (iVar3 = (*pcVar8)(&DAT_10007af0,5), iVar3 < 10)) {
    (*pcVar9)(s__PAGE2_1000750c);
    (*pcVar10)(0x34,0);
  }
  cVar1 = (*pcVar11)(3);
  if (((cVar1 == '\0') && (cVar1 = (*pcVar11)(0x5b), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    (*pcVar9)(s__PAGE11_10007504);
    (*pcVar10)(0x5b,0);
  }
  cVar1 = (*pcVar11)(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    (*pcVar9)(s__PAGE12_100074fc);
    (*pcVar10)(0x5c,0);
  }
  cVar1 = (*pcVar11)(0x1f);
  if (((cVar1 == '\0') && (cVar1 = (*pcVar11)(0x5d), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    (*pcVar9)(s__PAGE13_100074f4);
    (*pcVar10)(0x5d,0);
  }
  cVar1 = (*pcVar11)(0x5a);
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
    (*pcVar9)(s__PAGE10_100074ec);
    LooseGame();
    (*pcVar10)(0x5a,0);
  }
  cVar1 = (*pcVar11)(0x5b);
  if (((cVar1 == '\0') && (cVar1 = (*pcVar11)(0x5c), cVar1 == '\0')) &&
     ((cVar1 = (*pcVar11)(0x5d), cVar1 == '\0' &&
      ((cVar1 = (*pcVar11)(0x33), cVar1 == '\0' && (cVar1 = (*pcVar11)(0x34), cVar1 == '\0')))))) {
    iVar3 = 1;
    do {
      cVar1 = TimerDone(iVar3);
      if (cVar1 == '\0') {
        FreeTimer(iVar3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x1e);
    (*pcVar9)(s__PAGE20_100074e4);
    ShowVictory();
  }
  return;
}



// Function: FUN_100032ef @ 0x100032ef

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100032ef(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10007f94 = GetVersion();
    iVar1 = FUN_10003d23(1);
    if (iVar1 != 0) {
      _DAT_10007fa0 = DAT_10007f94 >> 8 & 0xff;
      _DAT_10007f9c = DAT_10007f94 & 0xff;
      DAT_10007f94 = DAT_10007f94 >> 0x10;
      _DAT_10007f98 = _DAT_10007f9c * 0x100 + _DAT_10007fa0;
      iVar1 = FUN_100035b6();
      if (iVar1 != 0) {
        DAT_100084f8 = GetCommandLineA();
        DAT_10007f80 = FUN_10003bf1();
        FUN_100036db();
        FUN_100039a4();
        FUN_100038eb();
        FUN_10003498();
        DAT_10007f7c = DAT_10007f7c + 1;
        goto LAB_100033c2;
      }
      FUN_10003d5f();
    }
LAB_1000334f:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10007f7c < 1) goto LAB_1000334f;
      DAT_10007f7c = DAT_10007f7c + -1;
      if (DAT_10007fcc == 0) {
        FUN_100034d6();
      }
      FUN_10003897();
      FUN_1000360a();
      FUN_10003d5f();
    }
    else if (param_2 == 3) {
      FUN_1000363b((LPVOID)0x0);
    }
LAB_100033c2:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100033c8

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10007f7c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10003410;
    if ((DAT_100084fc != (code *)0x0) &&
       (iVar2 = (*DAT_100084fc)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100032ef(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10003410:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100032ef(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100032ef(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_100084fc != (code *)0x0) {
      iVar2 = (*DAT_100084fc)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10003465

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10007f88 == 1) || ((DAT_10007f88 == 0 && (DAT_10007f8c == 1)))) {
    FUN_10003dd4();
  }
  FUN_10003e0d(param_1);
  (*(code *)PTR___exit_100077b8)(0xff);
  return;
}



// Function: FUN_10003498 @ 0x10003498

void FUN_10003498(void)

{
  if (DAT_100084f4 != (code *)0x0) {
    (*DAT_100084f4)();
  }
  FUN_1000359c((undefined4 *)&DAT_10007008,(undefined4 *)&DAT_10007010);
  FUN_1000359c((undefined4 *)&DAT_10007000,(undefined4 *)&DAT_10007004);
  return;
}



// Function: __exit @ 0x100034c5

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_100034e5(_Code,1,0);
  return;
}



// Function: FUN_100034d6 @ 0x100034d6

void FUN_100034d6(void)

{
  FUN_100034e5(0,0,1);
  return;
}



// Function: FUN_100034e5 @ 0x100034e5

void __cdecl FUN_100034e5(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1000358a();
  if (DAT_10007fd0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10007fcc = 1;
  DAT_10007fc8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_100084f0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_100084ec - 4), DAT_100084f0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_100084f0 <= puVar1);
    }
    FUN_1000359c((undefined4 *)&DAT_10007014,(undefined4 *)&DAT_10007018);
  }
  FUN_1000359c((undefined4 *)&DAT_1000701c,(undefined4 *)&DAT_10007020);
  if (param_3 == 0) {
    DAT_10007fd0 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10003593();
  return;
}



// Function: FUN_1000358a @ 0x1000358a

void FUN_1000358a(void)

{
  FUN_10003ff5(0xd);
  return;
}



// Function: FUN_10003593 @ 0x10003593

void FUN_10003593(void)

{
  FUN_10004056(0xd);
  return;
}



// Function: FUN_1000359c @ 0x1000359c

void __cdecl FUN_1000359c(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_100035b6 @ 0x100035b6

undefined4 FUN_100035b6(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10003f60();
  DAT_100077bc = TlsAlloc();
  if (DAT_100077bc != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000406b(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100077bc,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10003628((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_1000360a @ 0x1000360a

void FUN_1000360a(void)

{
  FUN_10003f89();
  if (DAT_100077bc != 0xffffffff) {
    TlsFree(DAT_100077bc);
    DAT_100077bc = 0xffffffff;
  }
  return;
}



// Function: FUN_10003628 @ 0x10003628

void __cdecl FUN_10003628(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10007938;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_1000363b @ 0x1000363b

void __cdecl FUN_1000363b(LPVOID param_1)

{
  if (DAT_100077bc != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_100077bc), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_100040f8(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_100040f8(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_100040f8(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_100040f8(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_100040f8(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_100040f8(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10007938) {
        FUN_100040f8(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_100040f8(param_1);
    }
    TlsSetValue(DAT_100077bc,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_100036db @ 0x100036db

void FUN_100036db(void)

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
  DAT_100084e0 = 0x20;
  DAT_100083e0 = puVar2;
  for (; puVar2 < DAT_100083e0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_100084e0 < (int)UVar8) {
      puVar2 = &DAT_100083e4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_100084e0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_100084e0 = DAT_100084e0 + 0x20;
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
      } while ((int)DAT_100084e0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_100083e0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_100083e0 + iVar6 * 9;
    if (DAT_100083e0[iVar6 * 9] == -1) {
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
          goto LAB_10003880;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10003880:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_100084e0);
      return;
    }
  } while( true );
}



// Function: FUN_10003897 @ 0x10003897

void FUN_10003897(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_100083e0;
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
      FUN_100040f8((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x100084e0);
  return;
}



// Function: FUN_100038eb @ 0x100038eb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100038eb(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_100084e8 == 0) {
    FUN_10004713();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10007f80; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10007fb0 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10007f80;
  puVar6 = DAT_10007f80;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100041d0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100040f8(DAT_10007f80);
  DAT_10007f80 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_100084e4 = 1;
  return;
}



// Function: FUN_100039a4 @ 0x100039a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100039a4(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_100084e8 == 0) {
    FUN_10004713();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10007fd4,0x104);
  _DAT_10007fc0 = &DAT_10007fd4;
  pbVar2 = &DAT_10007fd4;
  if (*DAT_100084f8 != 0) {
    pbVar2 = DAT_100084f8;
  }
  FUN_10003a3d(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10003a3d(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10007fa8 = puVar1;
  _DAT_10007fa4 = local_8 + -1;
  return;
}



// Function: FUN_10003a3d @ 0x10003a3d

void __cdecl FUN_10003a3d(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_100082c0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_100082c0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10003ae8;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10003ae8:
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
          if ((*(byte *)((int)&DAT_100082c0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_100082c0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10003bf1 @ 0x10003bf1

LPSTR FUN_10003bf1(void)

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
  if (DAT_100080d8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_100080d8 = 1;
LAB_10003c48:
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
        FUN_100040f8(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_100080d8 = 2;
  }
  else {
    if (DAT_100080d8 == 1) goto LAB_10003c48;
    if (DAT_100080d8 != 2) {
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
    FUN_10004730((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10003d23 @ 0x10003d23

undefined4 __cdecl FUN_10003d23(int param_1)

{
  int iVar1;
  
  DAT_100083c8 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_100083c8 != (HANDLE)0x0) {
    iVar1 = FUN_10004a65();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_100083c8);
  }
  return 0;
}



// Function: FUN_10003d5f @ 0x10003d5f

void FUN_10003d5f(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_10008190) {
    puVar2 = (undefined4 *)((int)DAT_10008194 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_100083c8,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10008190);
  }
  HeapFree(DAT_100083c8,0,DAT_10008194);
  HeapDestroy(DAT_100083c8);
  return;
}



// Function: FUN_10003dd4 @ 0x10003dd4

void FUN_10003dd4(void)

{
  if ((DAT_10007f88 == 1) || ((DAT_10007f88 == 0 && (DAT_10007f8c == 1)))) {
    FUN_10003e0d(0xfc);
    if (DAT_100080dc != (code *)0x0) {
      (*DAT_100080dc)();
    }
    FUN_10003e0d(0xff);
  }
  return;
}



// Function: FUN_10003e0d @ 0x10003e0d

void __cdecl FUN_10003e0d(DWORD param_1)

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
  pDVar2 = &DAT_100077e8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10007878);
  if (param_1 == (&DAT_100077e8)[iVar5 * 2]) {
    if ((DAT_10007f88 == 1) || ((DAT_10007f88 == 0 && (DAT_10007f8c == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100077ec);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100041d0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100041d0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100041e0(local_a4,_Dest);
      FUN_100041e0(local_a4,(uint *)&DAT_10006414);
      FUN_100041e0(local_a4,*(uint **)(iVar5 * 8 + 0x100077ec));
      auStackY_1e3._3_4_ = 0x10003f31;
      FUN_100052ae(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10003f60 @ 0x10003f60

void FUN_10003f60(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100078bc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100078ac);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000789c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000787c);
  return;
}



// Function: FUN_10003f89 @ 0x10003f89

void FUN_10003f89(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10007878;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100078bc)) && (ppuVar1 != &PTR_DAT_100078ac)) &&
       ((ppuVar1 != &PTR_DAT_1000789c && (ppuVar1 != &PTR_DAT_1000787c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100040f8(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10007938);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000789c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100078ac);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100078bc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000787c);
  return;
}



// Function: FUN_10003ff5 @ 0x10003ff5

void __cdecl FUN_10003ff5(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10007878 + param_1;
  if ((&DAT_10007878)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10003ff5(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100040f8(lpCriticalSection);
    }
    FUN_10004056(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10004056 @ 0x10004056

void __cdecl FUN_10004056(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10007878)[param_1]);
  return;
}



// Function: FUN_1000406b @ 0x1000406b

int * __cdecl FUN_1000406b(int param_1,int param_2)

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
      if (_Size < DAT_10007ac0 || (int)_Size - (int)DAT_10007ac0 == 0) {
        FUN_10003ff5(9);
        piVar1 = FUN_10004df9(_Size);
        FUN_10004056(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_100083c8,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_10008154 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10005498(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_100040f8 @ 0x100040f8

void __cdecl FUN_100040f8(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_10003ff5(9);
    puVar1 = (uint *)FUN_10004aa3((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_10004ace(puVar1,(uint)param_1);
      FUN_10004056(9);
      return;
    }
    FUN_10004056(9);
    HeapFree(DAT_100083c8,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x10004140

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10008154);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10004152

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_1000417e((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10005498(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_1000417e @ 0x1000417e

int * __cdecl FUN_1000417e(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10007ac0) {
    FUN_10003ff5(9);
    piVar1 = FUN_10004df9(param_1);
    FUN_10004056(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_100083c8,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_100041d0 @ 0x100041d0

uint * __cdecl FUN_100041d0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_100042b8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100042b8:
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



// Function: FUN_100041e0 @ 0x100041e0

uint * __cdecl FUN_100041e0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100041fc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000422f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000424b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100041fc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000424b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000424b;
    }
  }
LAB_1000422f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000424b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100042b8:
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
    if (bVar1 == 0) goto LAB_100042b8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x100042c0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_100042e0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10004313:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100042e0:
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
  goto LAB_10004313;
}



// Function: FUN_1000433b @ 0x1000433b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000433b(int param_1)

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
  
  FUN_10003ff5(0x19);
  CodePage = FUN_100044e8(param_1);
  if (CodePage != DAT_10008198) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100079c8;
LAB_10004378:
      if (*pUVar5 != CodePage) goto code_r0x1000437c;
      local_8 = 0;
      puVar15 = &DAT_100082c0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100079d8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100079c0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_100082c0 + uVar8 + 1);
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
      _DAT_100081ac = 1;
      DAT_10008198 = CodePage;
      DAT_100083c4 = FUN_10004532(CodePage);
      DAT_100081a0 = *(undefined4 *)(iVar12 + 0x100079cc);
      DAT_100081a4 = *(undefined4 *)(iVar12 + 0x100079d0);
      DAT_100081a8 = *(undefined4 *)(iVar12 + 0x100079d4);
      goto LAB_100044cc;
    }
    goto LAB_100044c7;
  }
  goto LAB_10004362;
code_r0x1000437c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10007ab7 < (int)pUVar5) goto code_r0x10004387;
  goto LAB_10004378;
code_r0x10004387:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_100083c4 = 0;
    puVar15 = &DAT_100082c0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_100081ac = 0;
      DAT_10008198 = CodePage;
    }
    else {
      DAT_10008198 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_100082c0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_100082c0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_100083c4 = FUN_10004532(CodePage);
      _DAT_100081ac = 1;
    }
    DAT_100081a0 = 0;
    DAT_100081a4 = 0;
    DAT_100081a8 = 0;
  }
  else {
    if (DAT_10008140 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100044d9;
    }
LAB_100044c7:
    FUN_10004565();
  }
LAB_100044cc:
  FUN_1000458e();
LAB_10004362:
  uVar14 = 0;
LAB_100044d9:
  FUN_10004056(0x19);
  return uVar14;
}



// Function: FUN_100044e8 @ 0x100044e8

int __cdecl FUN_100044e8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10008140 = 1;
                    /* WARNING: Could not recover jumptable at 0x10004502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10008140 = 1;
                    /* WARNING: Could not recover jumptable at 0x10004517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10008170;
  }
  DAT_10008140 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10004532 @ 0x10004532

undefined4 __cdecl FUN_10004532(int param_1)

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



// Function: FUN_10004565 @ 0x10004565

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004565(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100082c0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10008198 = 0;
  _DAT_100081ac = 0;
  DAT_100083c4 = 0;
  DAT_100081a0 = 0;
  DAT_100081a4 = 0;
  DAT_100081a8 = 0;
  return;
}



// Function: FUN_1000458e @ 0x1000458e

void FUN_1000458e(void)

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
  
  BVar2 = GetCPInfo(DAT_10008198,&local_18);
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
    FUN_10005702(1,local_118,0x100,local_518,DAT_10008198,DAT_100083c4,0);
    FUN_100054b3(DAT_100083c4,0x100,local_118,0x100,local_218,0x100,DAT_10008198,0);
    FUN_100054b3(DAT_100083c4,0x200,local_118,0x100,local_318,0x100,DAT_10008198,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_100082c0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000469a;
        }
        (&DAT_100081c0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100082c0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000469a:
        (&DAT_100081c0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_100082c0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_100046e4;
        }
        (&DAT_100081c0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100082c0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_100046e4:
        (&DAT_100081c0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10004713 @ 0x10004713

void FUN_10004713(void)

{
  if (DAT_100084e8 == 0) {
    FUN_1000433b(-3);
    DAT_100084e8 = 1;
  }
  return;
}



// Function: FUN_10004730 @ 0x10004730

undefined4 * __cdecl FUN_10004730(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100048e7_caseD_2;
        case 3:
          goto switchD_100048e7_caseD_3;
        }
        goto switchD_100048e7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100048e7_caseD_0;
      case 1:
        goto switchD_100048e7_caseD_1;
      case 2:
        goto switchD_100048e7_caseD_2;
      case 3:
        goto switchD_100048e7_caseD_3;
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
              goto switchD_100048e7_caseD_2;
            case 3:
              goto switchD_100048e7_caseD_3;
            }
            goto switchD_100048e7_caseD_1;
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
              goto switchD_100048e7_caseD_2;
            case 3:
              goto switchD_100048e7_caseD_3;
            }
            goto switchD_100048e7_caseD_1;
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
              goto switchD_100048e7_caseD_2;
            case 3:
              goto switchD_100048e7_caseD_3;
            }
            goto switchD_100048e7_caseD_1;
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
switchD_100048e7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100048e7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100048e7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100048e7_caseD_0:
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
        goto switchD_10004765_caseD_2;
      case 3:
        goto switchD_10004765_caseD_3;
      }
      goto switchD_10004765_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004765_caseD_0;
    case 1:
      goto switchD_10004765_caseD_1;
    case 2:
      goto switchD_10004765_caseD_2;
    case 3:
      goto switchD_10004765_caseD_3;
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
            goto switchD_10004765_caseD_2;
          case 3:
            goto switchD_10004765_caseD_3;
          }
          goto switchD_10004765_caseD_1;
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
            goto switchD_10004765_caseD_2;
          case 3:
            goto switchD_10004765_caseD_3;
          }
          goto switchD_10004765_caseD_1;
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
            goto switchD_10004765_caseD_2;
          case 3:
            goto switchD_10004765_caseD_3;
          }
          goto switchD_10004765_caseD_1;
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
switchD_10004765_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004765_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004765_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004765_caseD_0:
  return param_1;
}



// Function: FUN_10004a65 @ 0x10004a65

undefined4 FUN_10004a65(void)

{
  DAT_10008194 = HeapAlloc(DAT_100083c8,0,0x140);
  if (DAT_10008194 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000818c = 0;
  DAT_10008190 = 0;
  DAT_10008188 = DAT_10008194;
  DAT_10008180 = 0x10;
  return 1;
}



// Function: FUN_10004aa3 @ 0x10004aa3

uint __cdecl FUN_10004aa3(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10008194;
  while( true ) {
    if (DAT_10008194 + DAT_10008190 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_10004ace @ 0x10004ace

void __cdecl FUN_10004ace(uint *param_1,uint param_2)

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
  uVar5 = DAT_10008184;
  puVar2 = DAT_1000818c;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_1000818c != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_10008184 * 0x8000 + DAT_1000818c[3]),0x8000,0x4000);
    DAT_1000818c[2] = DAT_1000818c[2] | 0x80000000U >> ((byte)DAT_10008184 & 0x1f);
    *(undefined4 *)(DAT_1000818c[4] + 0xc4 + DAT_10008184 * 4) = 0;
    *(char *)(DAT_1000818c[4] + 0x43) = *(char *)(DAT_1000818c[4] + 0x43) + -1;
    if (*(char *)(DAT_1000818c[4] + 0x43) == '\0') {
      DAT_1000818c[1] = DAT_1000818c[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_1000818c[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_1000818c[3],0,0x8000);
      HeapFree(DAT_100083c8,0,(LPVOID)DAT_1000818c[4]);
      FUN_10005850(DAT_1000818c,DAT_1000818c + 5,
                   (DAT_10008190 * 0x14 - (int)DAT_1000818c) + -0x14 + DAT_10008194);
      DAT_10008190 = DAT_10008190 + -1;
      if (DAT_1000818c < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_10008188 = DAT_10008194;
      puVar2 = param_1;
    }
  }
  DAT_1000818c = puVar2;
  DAT_10008184 = uVar5;
  return;
}



// Function: FUN_10004df9 @ 0x10004df9

int * __cdecl FUN_10004df9(uint *param_1)

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
  
  puVar8 = DAT_10008194 + DAT_10008190 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10008188;
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
  puVar11 = DAT_10008194;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10008188 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10008188) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10008194;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10008188 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10008188) && (param_1 = FUN_10005102(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100051b3((int)param_1);
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
  DAT_10008188 = param_1;
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
    if (iVar9 == 0) goto LAB_100050bf;
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
LAB_100050bf:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000818c)) && (local_8 == DAT_10008184)) {
    DAT_1000818c = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10005102 @ 0x10005102

undefined4 * FUN_10005102(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10008190 == DAT_10008180) {
    pvVar2 = HeapReAlloc(DAT_100083c8,0,DAT_10008194,(DAT_10008180 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10008180 = DAT_10008180 + 0x10;
    DAT_10008194 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10008194 + DAT_10008190 * 0x14);
  pvVar2 = HeapAlloc(DAT_100083c8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10008190 = DAT_10008190 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_100083c8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100051b3 @ 0x100051b3

int __cdecl FUN_100051b3(int param_1)

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



// Function: FUN_100052ae @ 0x100052ae

int __cdecl FUN_100052ae(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10008144 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10008144 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10008144 != (FARPROC)0x0) {
        DAT_10008148 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000814c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100052fd;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100052fd:
    if (DAT_10008148 != (FARPROC)0x0) {
      iVar1 = (*DAT_10008148)();
      if ((iVar1 != 0) && (DAT_1000814c != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000814c)(iVar1);
      }
    }
    iVar1 = (*DAT_10008144)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10005340

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
        goto joined_r0x1000537e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100053bb;
        goto LAB_10005429;
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
joined_r0x10005425:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10005429:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100053bb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10005425;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10005425;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10005425;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000537e:
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
LAB_100053bb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: _memset @ 0x10005440

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



// Function: FUN_10005498 @ 0x10005498

undefined4 __cdecl FUN_10005498(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10008150 != (code *)0x0) {
    iVar1 = (*DAT_10008150)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_100054b3 @ 0x100054b3

int __cdecl
FUN_100054b3(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10006498;
  puStack_10 = &LAB_10005c80;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10008178 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10008178 = 2;
    }
    else {
      DAT_10008178 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100056d7(param_3,param_4);
  }
  if (DAT_10008178 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10008178 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10008170;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10005d60();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10005d60();
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



// Function: FUN_100056d7 @ 0x100056d7

int __cdecl FUN_100056d7(char *param_1,int param_2)

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



// Function: FUN_10005702 @ 0x10005702

BOOL __cdecl
FUN_10005702(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100064b0;
  puStack_10 = &LAB_10005c80;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000817c;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000817c == 0) {
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
  DAT_1000817c = iVar3;
  if (DAT_1000817c != 2) {
    if (DAT_1000817c == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10008170;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10005d60();
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
    param_6 = DAT_10008160;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10005850 @ 0x10005850

undefined4 * __cdecl FUN_10005850(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10005a07_caseD_2;
        case 3:
          goto switchD_10005a07_caseD_3;
        }
        goto switchD_10005a07_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10005a07_caseD_0;
      case 1:
        goto switchD_10005a07_caseD_1;
      case 2:
        goto switchD_10005a07_caseD_2;
      case 3:
        goto switchD_10005a07_caseD_3;
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
              goto switchD_10005a07_caseD_2;
            case 3:
              goto switchD_10005a07_caseD_3;
            }
            goto switchD_10005a07_caseD_1;
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
              goto switchD_10005a07_caseD_2;
            case 3:
              goto switchD_10005a07_caseD_3;
            }
            goto switchD_10005a07_caseD_1;
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
              goto switchD_10005a07_caseD_2;
            case 3:
              goto switchD_10005a07_caseD_3;
            }
            goto switchD_10005a07_caseD_1;
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
switchD_10005a07_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10005a07_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10005a07_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10005a07_caseD_0:
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
        goto switchD_10005885_caseD_2;
      case 3:
        goto switchD_10005885_caseD_3;
      }
      goto switchD_10005885_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005885_caseD_0;
    case 1:
      goto switchD_10005885_caseD_1;
    case 2:
      goto switchD_10005885_caseD_2;
    case 3:
      goto switchD_10005885_caseD_3;
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
            goto switchD_10005885_caseD_2;
          case 3:
            goto switchD_10005885_caseD_3;
          }
          goto switchD_10005885_caseD_1;
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
            goto switchD_10005885_caseD_2;
          case 3:
            goto switchD_10005885_caseD_3;
          }
          goto switchD_10005885_caseD_1;
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
            goto switchD_10005885_caseD_2;
          case 3:
            goto switchD_10005885_caseD_3;
          }
          goto switchD_10005885_caseD_1;
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
switchD_10005885_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005885_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005885_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005885_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x10005b88

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10005ba0,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10005bca

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
  puStack_18 = &LAB_10005ba8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10005c5e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_10005c5e @ 0x10005c5e

void FUN_10005c5e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10007ad8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10007ad4 = in_EAX;
  DAT_10007adc = unaff_EBP;
  return;
}



// Function: FUN_10005d3d @ 0x10005d3d

void FUN_10005d3d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10005d60 @ 0x10005d60

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10005d60(void)

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




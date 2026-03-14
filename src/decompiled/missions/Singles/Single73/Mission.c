// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

int __cdecl FUN_10001000(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = GetUnitsAmount1(param_2,param_1);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 8;
    } while (iVar2 < param_3);
  }
  return iVar2;
}



// Function: OnInit @ 0x10001090

void OnInit(void)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
                    /* 0x1090  1  OnInit */
  DVar1 = FUN_10003586((int *)0x0);
  FUN_10003557(DVar1);
  RegisterZone(&DAT_10012d40,s_z_treasure0_1000f51c);
  RegisterZone(&DAT_10012d48,s_z_treasure1_1000f510);
  RegisterZone(&DAT_10012d50,s_z_treasure2_1000f504);
  RegisterZone(&DAT_10012d58,s_z_treasure3_1000f4f8);
  RegisterZone(&DAT_10012d60,s_z_treasure4_1000f4ec);
  uVar2 = _rand();
  DAT_1002295a = ((uVar2 & 0xff) * 6) / 0xff;
  RegisterUnitType(&DAT_10012d98,s_Sclad2_sp__1000f4e0);
  RegisterFormation(&DAT_100266e8,s__ALONE_1000f4d8);
  RegisterVar(&DAT_10022528,8);
  RegisterDynGroup(&DAT_10022528);
  RegisterUnitType(&DAT_100266a0,s_Lodka_sp__1000f4cc);
  RegisterUnits(&DAT_10013090,s_port0_1000f4c4);
  RegisterUnits(&DAT_10013098,s_port1_1000f4bc);
  RegisterUnits(&DAT_100130a0,s_port2_1000f4b4);
  RegisterZone(&DAT_10022758,s_z_port0_1000f4ac);
  RegisterZone(&DAT_10022760,s_z_port1_1000f4a4);
  RegisterZone(&DAT_10022768,s_z_port2_1000f49c);
  RegisterUnits(&DAT_10012d70,s_courier_1000f494);
  RegisterZone(&DAT_10022770,s_z_courier_1000f488);
  RegisterUnitType(&DAT_10022548,s_KUTTER_PO__1000f47c);
  RegisterUnitType(&DAT_100227a8,s_KUTTER_en__1000f470);
  RegisterUnitType(&DAT_10022550,s_KUTTER_sp__1000f464);
  RegisterUnitType(&DAT_10012d80,s_KECH_PO__1000f458);
  RegisterUnitType(&DAT_10012da0,s_KECH_en__1000f44c);
  RegisterUnitType(&DAT_10012d68,s_KECH_sp__1000f440);
  EnableUnit(5,&DAT_10022548,1);
  EnableUnit(5,&DAT_100227a8,1);
  EnableUnit(5,&DAT_10022550,1);
  EnableUnit(5,&DAT_10012d80,1);
  RegisterVar(&DAT_10022850,0x74);
  RegisterVar(&DAT_100227d8,0x74);
  RegisterVar(&DAT_100228c8,0x74);
  FUN_10002ad0(&DAT_10022850,5,s_band0_port_1000f434,0,100);
  FUN_10002b90(&DAT_10022850,1);
  FUN_10002ba0(&DAT_10022850,0);
  FUN_10002b80(&DAT_10022850,0);
  FUN_10002bb0(&DAT_10022850,10000);
  FUN_10002ad0(&DAT_100227d8,5,s_band2_port_1000f428,0,100);
  FUN_10002b90(&DAT_100227d8,1);
  FUN_10002ba0(&DAT_100227d8,0);
  FUN_10002b80(&DAT_100227d8,0);
  FUN_10002bb0(&DAT_100227d8,10000);
  FUN_10002ad0(&DAT_100228c8,5,s_band3_port_1000f41c,0,100);
  FUN_10002b90(&DAT_100228c8,1);
  FUN_10002ba0(&DAT_100228c8,0);
  FUN_10002b80(&DAT_100228c8,0);
  FUN_10002bb0(&DAT_100228c8,10000);
  RegisterZone(&DAT_100130c0,s_z_raid0_0_1000f410);
  RegisterZone(&DAT_100130c8,s_z_raid0_1_1000f404);
  RegisterZone(&DAT_100130b0,s_z_raid0_2_1000f3f8);
  RegisterZone(&DAT_100130b8,s_z_raid0_3_1000f3ec);
  RegisterZone(&DAT_100130a8,s_z_raid0_4_1000f3e0);
  RegisterZone(&DAT_10022510,s_z_raid1_0_1000f3d4);
  RegisterZone(&DAT_10022518,s_z_raid1_1_1000f3c8);
  RegisterZone(&DAT_10022500,s_z_raid1_2_1000f3bc);
  RegisterZone(&DAT_10022508,s_z_raid1_3_1000f3b0);
  RegisterZone(&DAT_100224f8,s_z_raid1_4_1000f3a4);
  RegisterZone(&DAT_10013088,s_z_raid2_0_1000f398);
  RegisterZone(&DAT_10013078,s_z_raid2_1_1000f38c);
  RegisterZone(&DAT_10013080,s_z_raid2_2_1000f380);
  RegisterZone(&DAT_10013060,s_z_raid2_3_1000f374);
  RegisterZone(&DAT_10013070,s_z_raid2_4_1000f368);
  RegisterVar(&DAT_10022570,0x74);
  RegisterVar(&DAT_100225e8,0x74);
  RegisterVar(&DAT_10022660,0x74);
  RegisterVar(&DAT_100226d8,0x74);
  RegisterZone(&DAT_10012d78,s_z_gold0_1000f360);
  RegisterZone(&DAT_10012d88,s_z_gold1_1000f358);
  RegisterZone(&DAT_10012d90,s_z_gold2_1000f350);
  RegisterZone(&DAT_100229a0,s_z_coal0_1000f348);
  RegisterZone(&DAT_10022538,s_z_stone0_1000f33c);
  RegisterZone(&DAT_100227b0,s_z_milkyway0_1000f330);
  RegisterZone(&DAT_10022798,s_z_milkyway1_1000f324);
  RegisterZone(&DAT_10022778,s_z_harbour0_1000f318);
  RegisterZone(&DAT_10022788,s_z_harbour2_1000f30c);
  RegisterZone(&DAT_10022780,s_z_harbour3_1000f300);
  FUN_10002ad0(&DAT_10022570,5,s_band0_barrack_1000f2f0,0,100);
  uVar4 = 200;
  iVar3 = GetDiff(0);
  FUN_10002be0(&DAT_10022570,s_Pehota_turki_DIP_PO__1000f2d8,(4 - iVar3) * 0x32,uVar4);
  uVar4 = 0xaa;
  iVar3 = GetDiff(0);
  FUN_10002c10(&DAT_10022570,s_Strelec_Algir_DIP_PO__1000f2c0,(4 - iVar3) * 0x19,uVar4);
  iVar3 = GetDiff(0);
  FUN_10002b90(&DAT_10022570,iVar3 + 4);
  iVar3 = GetDiff(0);
  FUN_10002ba0(&DAT_10022570,iVar3 + 2);
  FUN_10002bb0(&DAT_10022570,10000);
  FUN_10002ad0(&DAT_100225e8,5,s_band1_barrack_1000f2b0,0,100);
  uVar4 = 200;
  iVar3 = GetDiff(0);
  FUN_10002be0(&DAT_100225e8,s_Rundashir_Avstria_DIP_fr__1000f294,(4 - iVar3) * 0x32,uVar4);
  uVar4 = 0xaa;
  iVar3 = GetDiff(0);
  FUN_10002c10(&DAT_100225e8,s_Strelec_Algir_DIP_fr__1000f27c,(4 - iVar3) * 0x19,uVar4);
  iVar3 = GetDiff(0);
  FUN_10002b90(&DAT_100225e8,iVar3 + 6);
  iVar3 = GetDiff(0);
  FUN_10002ba0(&DAT_100225e8,iVar3 + 2);
  FUN_10002bb0(&DAT_100225e8,80000);
  FUN_10002ad0(&DAT_10022660,5,s_band2_barrack_1000f26c,0,100);
  uVar4 = 200;
  iVar3 = GetDiff(0);
  FUN_10002be0(&DAT_10022660,s_Pehota_turki_DIP_en__1000f254,(4 - iVar3) * 0x32,uVar4);
  uVar4 = 0xaa;
  iVar3 = GetDiff(0);
  FUN_10002c10(&DAT_10022660,s_Strelec_Algir_DIP_en__1000f23c,(4 - iVar3) * 0x19,uVar4);
  iVar3 = GetDiff(0);
  FUN_10002b90(&DAT_10022660,iVar3 + 4);
  iVar3 = GetDiff(0);
  FUN_10002ba0(&DAT_10022660,iVar3 + 2);
  FUN_10002bb0(&DAT_10022660,9000);
  FUN_10002ad0(&DAT_100226d8,5,s_band3_barrack_1000f22c,0,100);
  uVar4 = 200;
  iVar3 = GetDiff(0);
  FUN_10002be0(&DAT_100226d8,s_Pehota_turki_DIP_sp__1000f214,(4 - iVar3) * 0x32,uVar4);
  uVar4 = 0xaa;
  iVar3 = GetDiff(0);
  FUN_10002c10(&DAT_100226d8,s_Strelec_Algir_DIP_sp__1000f1fc,(4 - iVar3) * 0x19,uVar4);
  iVar3 = GetDiff(0);
  FUN_10002b90(&DAT_100226d8,iVar3 + 4);
  iVar3 = GetDiff(0);
  FUN_10002ba0(&DAT_100226d8,iVar3 + 2);
  FUN_10002bb0(&DAT_100226d8,0x2134);
  RegisterUnits(&DAT_10026698,s_blocks_1000f1f4);
  RegisterUnitType(&DAT_10022750,s_konushnia_BR_en__1000f1e0);
  RegisterUnitType(&DAT_10022568,s_Center_British_en__1000f1cc);
  RegisterUnitType(&DAT_100227c8,s_Krestian_Sved_en__1000f1b8);
  RegisterUnitType(&DAT_10022558,s_Pikiner_evro_en__1000f1a4);
  RegisterUnitType(&DAT_100266a8,s_Kazarma_1_BR_en__1000f190);
  RegisterUnitType(&DAT_10012d38,s_Bashnia_en__1000f184);
  RegisterUnitType(&DAT_10022540,s_Dip_korpus_BR_en__1000f170);
  RegisterUnitType(&DAT_10022530,s_akademia_BR_en__1000f160);
  RegisterUpgrade(&DAT_10022790,s_Melnica_sp_GETRES_1000f14c);
  RegisterUpgrade(&DAT_100227a0,s_Melnica_sp_GETRES2_1000f138);
  RegisterUpgrade(&DAT_10022978,s_AKA01SP_1000f130);
  RegisterUpgrade(&DAT_10022980,s_AKA02SP_1000f128);
  RegisterUpgrade(&DAT_10022988,s_AKA03SP_1000f120);
  RegisterUpgrade(&DAT_10012da8,s_AKA08SP_1000f118);
  RegisterUpgrade(&DAT_100227b8,s_AKA23SP_1000f110);
  RegisterUpgrade(&DAT_100227c0,s_AKA24SP_1000f108);
  RegisterUpgrade(&DAT_10012db8,s_AKA04SP_1000f100);
  RegisterUpgrade(&DAT_10022998,s_AKA24EN_1000f0f8);
  RegisterUnitType(&DAT_10022560,s_Dip_korpus_SP_sp__1000f0e4);
  RegisterUnitType(&DAT_10013068,s_Rinok_sp__1000f0d8);
  RegisterUnitType(&DAT_10012c88,s_Kazarma_1_SP_sp__1000f0c4);
  RegisterUnitType(&DAT_10022990,s_akademia_SP_sp__1000f0b4);
  RegisterUnitType(&DAT_100227d0,s_PorE_sp__1000f0a8);
  SetPlayerName(3,s_vn_englishman_1000f098);
  SetPlayerName(6,s_ALLIES_1000f090);
  SetPlayerName(2,s_SPAIN_1000f088);
  SetPlayerName(4,s_vn_englishman_1000f098);
  SetPlayerName(1,s_ALLIES_1000f090);
  SetPlayerName(5,s_ROBBERS_1000f080);
  ChangeFriends(3,0xfe);
  ChangeFriends(2,0xfe);
  ChangeFriends(4,0xfe);
  ChangeFriends(1,0xff);
  ChangeFriends(6,1);
  SetTrigg(2,0);
  SetTrigg(5,0);
  SetTrigg(6,0);
  SetTrigg(8,0);
  SetTrigg(9,0);
  SetTrigg(0xb,0);
  SetTrigg(0xc,0);
  return;
}



// Function: FUN_10001910 @ 0x10001910

void __cdecl FUN_10001910(int param_1)

{
  if (*(int *)(&DAT_10012cfc + param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(&DAT_10012cf8 + param_1 * 8);
  }
  SaveSelectedUnits(param_1,&DAT_10012cf8 + param_1 * 8,0);
  ClearSelection(param_1);
  return;
}



// Function: FUN_10001950 @ 0x10001950

void __cdecl FUN_10001950(int param_1)

{
  ClearSelection(param_1);
  SelectUnits(&DAT_10012cf8 + param_1 * 8,0);
  return;
}



// Function: FUN_10001980 @ 0x10001980

void __cdecl FUN_10001980(void *param_1)

{
  FUN_10002e10(param_1,&DAT_100130c0,0);
  FUN_10002e10(param_1,&DAT_100130c8,2);
  FUN_10002e10(param_1,&DAT_100130b0,2);
  FUN_10002e10(param_1,&DAT_100130b8,2);
  FUN_10002e10(param_1,&DAT_100130a8,2);
  return;
}



// Function: FUN_100019d0 @ 0x100019d0

void __cdecl FUN_100019d0(void *param_1)

{
  FUN_10002e10(param_1,&DAT_10022510,0);
  FUN_10002e10(param_1,&DAT_10022518,2);
  FUN_10002e10(param_1,&DAT_10022500,2);
  FUN_10002e10(param_1,&DAT_10022508,2);
  FUN_10002ec0(param_1,&DAT_100224f8,2);
  return;
}



// Function: FUN_10001a20 @ 0x10001a20

void __cdecl FUN_10001a20(void *param_1)

{
  FUN_10002e10(param_1,&DAT_10013088,0);
  FUN_10002e10(param_1,&DAT_10013078,2);
  FUN_10002e10(param_1,&DAT_10013080,2);
  FUN_10002e10(param_1,&DAT_10013060,2);
  FUN_10002e10(param_1,&DAT_10013070,2);
  return;
}



// Function: ProcessScenary @ 0x10001a70

void ProcessScenary(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
                    /* 0x1a70  2  ProcessScenary */
  cVar1 = Trigg(0);
  if (cVar1 != '\0') {
    SetTrigg(0,0);
    iVar3 = GetDiff(0);
    if (iVar3 < 2) {
      SelectUnits(&DAT_10026698,0);
      SelDie(5);
    }
    DisableUpgrade(0,&DAT_10022790);
    DisableUpgrade(0,&DAT_100227a0);
    DisableUpgrade(0,&DAT_10022978);
    DisableUpgrade(0,&DAT_10022980);
    DisableUpgrade(0,&DAT_10022988);
    DisableUpgrade(0,&DAT_10012da8);
    DisableUpgrade(0,&DAT_100227b8);
    DisableUpgrade(0,&DAT_100227c0);
    DisableUpgrade(0,&DAT_10012db8);
    DisableUpgrade(0,&DAT_10022998);
    EnableUnit(0,&DAT_10022560,0);
    EnableUnit(0,&DAT_10013068,0);
    EnableUnit(3,&DAT_10022750,0);
    DisableMission(0x49);
    DisableMission(0x41);
    SetResource(0,3,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,1,5000);
    SetResource(0,4,5000);
    SetResource(0,5,5000);
    SetResource(3,3,2000);
    SetResource(3,0,2000);
    SetResource(3,2,2000);
    SetResource(3,1,2000);
    SetResource(3,4,2000);
    SetResource(3,5,2000);
    SetResource(2,3,4000);
    SetResource(2,0,4000);
    SetResource(2,2,4000);
    SetResource(2,1,4000);
    SetResource(2,4,4000);
    SetResource(2,5,4000);
    SetResource(4,3,4000);
    SetResource(4,0,4000);
    SetResource(4,2,4000);
    SetResource(4,1,4000);
    SetResource(4,4,4000);
    SetResource(4,5,4000);
    iVar3 = GetDiff(0);
    StartAI(3,s_ENGLAND_0_1000f5f8,0,0,0,(iVar3 + 1) / 2);
    uVar4 = GetDiff(0);
    StartAI(2,s_SPAIN_0_1000f5f0,0,0,0,uVar4);
    uVar4 = GetDiff(0);
    StartAI(4,s_ENGLAND_0_1000f5f8,3,0,0,uVar4);
  }
  cVar1 = Trigg(1);
  if (((cVar1 != '\0') && (iVar3 = GetDiff(0), iVar3 < 2)) &&
     (iVar3 = GetTotalAmount1(&DAT_10022558,3), iVar3 < 10)) {
    SetTrigg(1,0);
    ShowPage(s__ai0_surrender_1000f5e0);
    ClearSelection(3);
    SelectUnitsType(&DAT_100227c8,3,0);
    SelectUnitsType(&DAT_10022558,3,1);
    SelectUnitsType(&DAT_10022568,3,1);
    SelChangeNation(3,0);
    ClearSelection(3);
    SelectUnitsType(&DAT_100266a8,3,0);
    SelectUnitsType(&DAT_10022540,3,1);
    SelectUnitsType(&DAT_10012d38,3,1);
    SelDie(3);
  }
  iVar3 = GetTotalAmount1(&DAT_100227c8,0);
  if ((iVar3 == 0) && (iVar3 = GetTotalAmount1(&DAT_10022568,0), iVar3 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar1 = Trigg(2);
  if ((cVar1 == '\0') && (bVar2)) {
    SetTrigg(2,1);
    DisableMission(0x57);
    EnableMission(0x49);
    EnableMission(0x41);
    ShowPage(s__eng_capture_1000f5d0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (!bVar2)) {
    SetTrigg(2,0);
    DisableMission(0x49);
    EnableMission(0x57);
    ShowPage(s__eng_lost_1000f5c4);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') &&
     ((iVar3 = GetReadyAmount(&DAT_10012c88,0), iVar3 != 0 ||
      (iVar3 = GetReadyAmount(&DAT_100266a8,0), iVar3 != 0)))) {
    SetTrigg(7,0);
    iVar3 = GetGlobalTime();
    FUN_10002bb0(&DAT_10022570,iVar3 + 2000);
    uVar4 = GetGlobalTime();
    FUN_10002bb0(&DAT_100225e8,uVar4);
    iVar3 = GetGlobalTime();
    FUN_10002bb0(&DAT_10022660,iVar3 + 5000);
    iVar3 = GetGlobalTime();
    FUN_10002bb0(&DAT_100226d8,iVar3 + 5000);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') &&
     ((iVar3 = GetReadyAmount(&DAT_10012c88,0), 1 < iVar3 ||
      (iVar3 = GetReadyAmount(&DAT_100266a8,0), 1 < iVar3)))) {
    SetTrigg(5,0);
    FUN_10002c70(&DAT_10022570,2);
    FUN_10002c90(&DAT_10022570,2);
    FUN_10002c70(&DAT_100225e8,2);
    FUN_10002c90(&DAT_100225e8,2);
    FUN_10002c70(&DAT_10022660,3);
    FUN_10002c90(&DAT_10022660,3);
  }
  cVar1 = Trigg(5);
  if (((cVar1 == '\0') && (iVar3 = GetReadyAmount(&DAT_10012c88,0), iVar3 < 2)) &&
     (iVar3 = GetReadyAmount(&DAT_100266a8,0), iVar3 < 2)) {
    SetTrigg(5,1);
    FUN_10002c60(&DAT_10022570,2);
    FUN_10002c80(&DAT_10022570,2);
    FUN_10002c60(&DAT_100225e8,2);
    FUN_10002c80(&DAT_100225e8,2);
    FUN_10002c60(&DAT_10022660,3);
    FUN_10002c80(&DAT_10022660,3);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') &&
     ((iVar3 = GetReadyAmount(&DAT_10022990,0), iVar3 != 0 ||
      (iVar3 = GetReadyAmount(&DAT_10022530,0), iVar3 != 0)))) {
    SetTrigg(6,0);
    FUN_10002c70(&DAT_10022570,2);
    FUN_10002c90(&DAT_10022570,2);
    FUN_10002c70(&DAT_100225e8,2);
    FUN_10002c90(&DAT_100225e8,2);
  }
  cVar1 = Trigg(6);
  if (((cVar1 == '\0') && (iVar3 = GetReadyAmount(&DAT_10022990,0), iVar3 == 0)) &&
     (iVar3 = GetReadyAmount(&DAT_10022530,0), iVar3 == 0)) {
    SetTrigg(6,1);
    FUN_10002c60(&DAT_10022570,2);
    FUN_10002c80(&DAT_10022570,2);
    FUN_10002c60(&DAT_100225e8,2);
    FUN_10002c80(&DAT_100225e8,2);
  }
  FUN_10002b80(&DAT_10022570,0);
  FUN_10002b80(&DAT_100225e8,0);
  FUN_10002b80(&DAT_10022660,0);
  FUN_10002b80(&DAT_100226d8,0);
  iVar3 = FUN_10002dd0(0x10022570);
  if (iVar3 < 0x23) {
    FUN_10002b80(&DAT_10022570,2);
  }
  iVar3 = FUN_10002dd0(0x100225e8);
  if (iVar3 < 0x2d) {
    FUN_10002b80(&DAT_100225e8,3);
  }
  iVar3 = FUN_10002dd0(0x10022660);
  if (iVar3 < 0x3c) {
    FUN_10002b80(&DAT_10022660,3);
  }
  iVar3 = FUN_10002dd0(0x100226d8);
  if (iVar3 < 0x50) {
    FUN_10002b80(&DAT_100226d8,3);
  }
  cVar1 = Trigg(2);
  if (cVar1 == '\0') {
    FUN_10003160(&DAT_10022570,(undefined4 *)&DAT_10012d78);
    FUN_10003160(&DAT_100225e8,(undefined4 *)&DAT_10012d78);
    FUN_10003160(&DAT_10022660,(undefined4 *)&DAT_10012d88);
    FUN_10003160(&DAT_100226d8,(undefined4 *)&DAT_10012d90);
  }
  else {
    iVar3 = GetUnitsAmount0(&DAT_10022798,5);
    if (iVar3 == 0) {
      puVar9 = (undefined4 *)&DAT_10022798;
    }
    else {
      puVar9 = (undefined4 *)&DAT_10022538;
    }
    FUN_10003180(&DAT_10022570,(undefined4 *)&DAT_10012d78,puVar9);
    iVar3 = GetUnitsAmount0(&DAT_10022798,5);
    if (iVar3 == 0) {
      puVar9 = (undefined4 *)&DAT_100227b0;
    }
    else {
      puVar9 = (undefined4 *)&DAT_10022538;
    }
    FUN_10003180(&DAT_100225e8,(undefined4 *)&DAT_10012d78,puVar9);
    iVar3 = GetUnitsAmount0(&DAT_10022768,5);
    if (iVar3 == 0) {
      puVar9 = (undefined4 *)&DAT_10022768;
    }
    else {
      puVar9 = (undefined4 *)&DAT_10012d88;
    }
    FUN_10003180(&DAT_10022660,puVar9,(undefined4 *)&DAT_10012d90);
    iVar3 = GetUnitsAmount0(&DAT_10022758,5);
    if ((iVar3 == 0) || (iVar3 = GetUnitsAmount0(&DAT_10022760,5), iVar3 == 0)) {
      puVar10 = (undefined4 *)&DAT_10022760;
      puVar9 = (undefined4 *)&DAT_10022758;
    }
    else {
      puVar10 = (undefined4 *)&DAT_100229a0;
      puVar9 = (undefined4 *)&DAT_10012d88;
    }
    FUN_10003180(&DAT_100226d8,puVar9,puVar10);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 == '\0') && (cVar1 = Trigg(8), cVar1 != '\0')) {
    SetTrigg(0xb,1);
    uVar4 = GetGlobalTime();
    FUN_10002bb0(&DAT_10022850,uVar4);
    uVar4 = GetGlobalTime();
    FUN_10002bb0(&DAT_100227d8,uVar4);
    uVar4 = GetGlobalTime();
    FUN_10002bb0(&DAT_100228c8,uVar4);
  }
  iVar3 = GetTotalAmount1(&DAT_10022548,5);
  if (((iVar3 < 10) && (iVar3 = GetTotalAmount1(&DAT_10022550,5), iVar3 < 10)) &&
     (iVar3 = GetTotalAmount1(&DAT_100227a8,5), iVar3 < 10)) {
    FUN_10002c40(&DAT_10022850,(undefined4 *)&DAT_10022548,4000,200);
    FUN_10002bc0(&DAT_10022850,(undefined4 *)&DAT_100227a8,4000,0x28);
    FUN_10002ce0(0x10022850);
    FUN_10002c40(&DAT_100227d8,(undefined4 *)&DAT_100227a8,4000,200);
    FUN_10002bc0(&DAT_100227d8,(undefined4 *)&DAT_10022550,4000,0x28);
    FUN_10002ce0(0x100227d8);
    FUN_10002c40(&DAT_100228c8,(undefined4 *)&DAT_10022550,4000,200);
    FUN_10002bc0(&DAT_100228c8,(undefined4 *)&DAT_10022548,4000,0x28);
    FUN_10002ce0(0x100228c8);
  }
  uVar4 = FUN_10002de0(0x10022850);
  if ((char)uVar4 != '\0') {
    uVar5 = _rand();
    if ((uVar5 & 0xff) < 0x80) {
      FUN_10001980(&DAT_10022850);
      FUN_10003020(&DAT_10022850,&DAT_10022770,0);
    }
    else {
      FUN_100019d0(&DAT_10022850);
      FUN_10002f70(&DAT_10022850,&DAT_10022780,0);
    }
    FUN_100030d0(0x10022850);
  }
  uVar4 = FUN_10002de0(0x100227d8);
  if ((char)uVar4 != '\0') {
    uVar5 = _rand();
    if ((uVar5 & 0xff) < 0x80) {
      FUN_10001980(&DAT_100227d8);
      puVar8 = &DAT_10022778;
    }
    else {
      FUN_10001a20(&DAT_100227d8);
      puVar8 = &DAT_10022780;
    }
    FUN_10002f70(&DAT_100227d8,puVar8,0);
    FUN_100030d0(0x100227d8);
  }
  uVar4 = FUN_10002de0(0x100228c8);
  if ((char)uVar4 != '\0') {
    uVar5 = _rand();
    if ((uVar5 & 0xff) < 0x80) {
      FUN_100019d0(&DAT_100228c8);
      FUN_10002f70(&DAT_100228c8,&DAT_10022778,0);
    }
    else {
      FUN_10001a20(&DAT_100228c8);
      FUN_10003020(&DAT_100228c8,&DAT_10022770,0);
    }
    FUN_100030d0(0x100228c8);
  }
  cVar1 = Trigg(10);
  if (cVar1 != '\0') {
    SetTrigg(10,0);
    iVar3 = 0x50;
    do {
      ProduceUnitFast(&DAT_10013090,&DAT_100266a0,&DAT_10022528,6);
      ProduceUnitFast(&DAT_10013098,&DAT_100266a0,&DAT_10022528,6);
      ProduceUnitFast(&DAT_100130a0,&DAT_100266a0,&DAT_10022528,6);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  cVar1 = Trigg(9);
  pcVar7 = SelectUnits_exref;
  if ((cVar1 == '\0') &&
     (((iVar3 = GetUnitsAmount0(&DAT_10022758,5), iVar3 != 0 ||
       (iVar3 = GetUnitsAmount0(&DAT_10022760,5), iVar3 != 0)) ||
      (iVar3 = GetUnitsAmount0(&DAT_10022768,5), pcVar7 = SelectUnits_exref, iVar3 != 0)))) {
    SetTrigg(9,1);
    FUN_10001910(6);
    pcVar7 = SelectUnits_exref;
    SelectUnits(&DAT_10012d70,0);
    SelSendTo(6,&DAT_10022770,100,0);
    FUN_10001950(6);
  }
  cVar1 = Trigg(8);
  if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount1(&DAT_10022770,&DAT_10012d70), iVar3 != 0)) {
    SetTrigg(8,1);
    SetStartPoint(&DAT_10022770);
    RefreshScreen();
    ShowPage(s__fishers_help_1000f5b4);
    FUN_10001910(6);
    (*pcVar7)(&DAT_10012d70,0);
    SelSendAndKill(6,&DAT_10022780,0x28,0);
    FUN_10001950(6);
  }
  cVar1 = Trigg(0xc);
  if ((((cVar1 == '\0') && (bVar2 = FUN_10002cc0(0x100226d8), !bVar2)) &&
      (iVar3 = GetUnitsAmount0(&DAT_10022758,5), iVar3 == 0)) &&
     ((iVar3 = GetUnitsAmount0(&DAT_10022760,5), iVar3 == 0 &&
      (iVar3 = GetUnitsAmount0(&DAT_10022768,5), iVar3 == 0)))) {
    SetTrigg(0xc,1);
    FUN_10001910(6);
    (*pcVar7)(&DAT_10013090,0);
    (*pcVar7)(&DAT_10013098,1);
    (*pcVar7)(&DAT_100130a0,1);
    (*pcVar7)(&DAT_10022528,1);
    SelChangeNation(6,0);
    ShowPage(s__fishers_happy_1000f5a4);
    FUN_10001950(6);
  }
  iVar3 = FUN_10001000(&DAT_100266bc,0x10012d40,5);
  if (DAT_10022962 == 0) {
    if ((iVar3 < 5) && ((&DAT_10022950)[iVar3] == '\0')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    uVar4 = FUN_100033e0(&DAT_100266b0,cVar1);
    pcVar7 = ShowPage_exref;
    if (((char)uVar4 != '\0') &&
       (cVar1 = AskQuestion(s__search_treasure_1000f570), pcVar7 = ShowPage_exref, cVar1 != '\0')) {
      FUN_10001910(0);
      UnitsCenter(&DAT_100266c4,&DAT_100266bc,400);
      SelectTypeOfUnitsInZone(&DAT_100266c4,&DAT_10022940,0,0);
      SaveSelectedUnits(0,&DAT_10022948,0);
      iVar6 = GetTotalAmount0(&DAT_10022948);
      pcVar7 = ShowPage_exref;
      if (iVar6 == 0) {
        ShowPage(s__no_diggers_1000f564);
        FUN_10001950(0);
      }
      else if ((iVar6 < 0x14) && (cVar1 = AskQuestion(s__little_diggers_1000f554), cVar1 == '\0')) {
        FUN_10001950(0);
        pcVar7 = ShowPage_exref;
      }
      else {
        DAT_10022962 = 1;
        if (0x13 < iVar6) {
          iVar6 = 0x14;
        }
        DAT_1002295e = iVar3;
        iVar3 = GetGlobalTime();
        DAT_10022966 = iVar3 + (int)(80000 / (longlong)iVar6);
        DAT_1002296a = GetGlobalTime();
        DAT_1002296e = DAT_1002296a + 2000;
        DAT_10022972 = DAT_1002296e;
        SelChangeNation(0,6);
        FUN_10001950(0);
        pcVar7 = ShowPage_exref;
      }
    }
  }
  else {
    pcVar7 = ShowPage_exref;
    if (DAT_10022962 == 1) {
      iVar3 = GetGlobalTime();
      if (DAT_1002296a < iVar3) {
        TakeStone(&DAT_10022948);
        iVar3 = GetGlobalTime();
        DAT_1002296a = iVar3 + 2000;
        iVar3 = GetGlobalTime();
        DAT_1002296e = iVar3 + 0x4b;
      }
      iVar3 = GetGlobalTime();
      if (DAT_1002296e < iVar3) {
        FUN_10001910(6);
        SelectUnits(&DAT_10022948,0);
        uVar4 = 0;
        iVar3 = _rand();
        SelSendTo(6,&DAT_10012d40 + DAT_1002295e * 8,iVar3,uVar4);
        FUN_10001950(6);
        iVar3 = GetGlobalTime();
        DAT_1002296e = iVar3 + 2000;
        iVar3 = GetGlobalTime();
        DAT_10022972 = iVar3 + 0x19;
      }
      iVar3 = GetGlobalTime();
      if (DAT_10022972 < iVar3) {
        TakeWood(&DAT_10022948);
        iVar3 = GetGlobalTime();
        DAT_10022972 = iVar3 + 2000;
        iVar3 = GetGlobalTime();
        DAT_1002296a = iVar3 + 0x4b;
      }
      iVar3 = GetGlobalTime();
      if (DAT_10022966 < iVar3) {
        TakeWood(&DAT_10022948);
      }
      iVar3 = GetGlobalTime();
      pcVar7 = ShowPage_exref;
      if (DAT_10022966 + 0x32 < iVar3) {
        UnitsCenter(&DAT_100266c4,&DAT_100266bc,500);
        FUN_10001910(6);
        SelectUnits(&DAT_10022948,0);
        uVar4 = 0;
        iVar3 = _rand();
        SelSendTo(6,&DAT_100266c4,iVar3,uVar4);
        SelChangeNation(6,0);
        FUN_10001950(6);
        DAT_10022962 = 0;
        (&DAT_10022950)[DAT_1002295e] = 1;
        pcVar7 = ShowPage_exref;
        if (DAT_1002295e == DAT_1002295a) {
          ShowPage(s__find_treasure_1000f594);
          ShowVictory();
        }
        else {
          ShowPage(s__search_false_1000f584);
        }
      }
    }
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    SetTrigg(3,0);
    cVar1 = Trigg(4);
    if (cVar1 == '\0') {
      (*pcVar7)(s__victory_1000f53c);
      ShowVictory();
    }
    else {
      (*pcVar7)(s__ai2_death_1000f548);
    }
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(4), cVar1 != '\0')) {
    SetTrigg(4,0);
    cVar1 = Trigg(3);
    if (cVar1 == '\0') {
      (*pcVar7)(s__victory_1000f53c);
      ShowVictory();
    }
    else {
      (*pcVar7)(s__ai3_death_1000f530);
    }
  }
  cVar1 = NationIsErased(0);
  if ((cVar1 != '\0') || (bVar2 = FUN_100032f0(0x100266b0), !bVar2)) {
    (*pcVar7)(s__defeat_1000f528);
    LooseGame();
  }
  return;
}



// Function: FUN_10002a30 @ 0x10002a30

void FUN_10002a30(void)

{
  FUN_1000aefc();
  return;
}



// Function: FUN_10002a40 @ 0x10002a40

void FUN_10002a40(void)

{
  FUN_100036e0(&LAB_10002a50);
  return;
}



// Function: FUN_10002a70 @ 0x10002a70

undefined4 FUN_10002a70(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: FUN_10002ab0 @ 0x10002ab0

undefined4 __fastcall FUN_10002ab0(undefined4 param_1)

{
  RegisterFormation(param_1,s__ALONE_1000f4d8);
  return param_1;
}



// Function: FUN_10002ad0 @ 0x10002ad0

void __thiscall
FUN_10002ad0(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  RegisterVar(this,0x74);
  *(undefined4 *)this = param_1;
  RegisterUnits((int)this + 4,param_2);
  if (param_3 != 0) {
    RegisterZone((int)this + 0xc,param_3);
    SetDestPoint((int)this + 4,(int)this + 0xc);
  }
  RegisterDynGroup((int)this + 0x14);
  RegisterDynGroup((int)this + 0x1c);
  RegisterDynGroup((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x3c;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x78;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = 1;
  *(undefined4 *)((int)this + 0x58) = 10;
  *(undefined4 *)((int)this + 0x5c) = 1;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x24) = param_4;
  return;
}



// Function: FUN_10002b80 @ 0x10002b80

void __thiscall FUN_10002b80(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x50) = param_1;
  return;
}



// Function: FUN_10002b90 @ 0x10002b90

void __thiscall FUN_10002b90(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x58) = param_1;
  return;
}



// Function: FUN_10002ba0 @ 0x10002ba0

void __thiscall FUN_10002ba0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x5c) = param_1;
  return;
}



// Function: FUN_10002bb0 @ 0x10002bb0

void __thiscall FUN_10002bb0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x60) = param_1;
  return;
}



// Function: FUN_10002bc0 @ 0x10002bc0

void __thiscall FUN_10002bc0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x3c) = *param_1;
  *(undefined4 *)((int)this + 0x40) = param_1[1];
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = param_3;
  return;
}



// Function: FUN_10002be0 @ 0x10002be0

void __thiscall FUN_10002be0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RegisterUnitType((int)this + 0x28,param_1);
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x34) = param_3;
  return;
}



// Function: FUN_10002c10 @ 0x10002c10

void __thiscall FUN_10002c10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RegisterUnitType((int)this + 0x3c,param_1);
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = param_3;
  return;
}



// Function: FUN_10002c40 @ 0x10002c40

void __thiscall FUN_10002c40(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x28) = *param_1;
  *(undefined4 *)((int)this + 0x2c) = param_1[1];
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x34) = param_3;
  return;
}



// Function: FUN_10002c60 @ 0x10002c60

void __thiscall FUN_10002c60(void *this,int param_1)

{
  *(int *)((int)this + 0x30) = param_1 * *(int *)((int)this + 0x30);
  return;
}



// Function: FUN_10002c70 @ 0x10002c70

void __thiscall FUN_10002c70(void *this,int param_1)

{
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) / param_1;
  return;
}



// Function: FUN_10002c80 @ 0x10002c80

void __thiscall FUN_10002c80(void *this,int param_1)

{
  *(int *)((int)this + 0x44) = param_1 * *(int *)((int)this + 0x44);
  return;
}



// Function: FUN_10002c90 @ 0x10002c90

void __thiscall FUN_10002c90(void *this,int param_1)

{
  *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) / param_1;
  return;
}



// Function: FUN_10002ca0 @ 0x10002ca0

void __thiscall FUN_10002ca0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 100) = *param_1;
  *(undefined4 *)((int)this + 0x68) = param_1[1];
  return;
}



// Function: FUN_10002cc0 @ 0x10002cc0

bool __fastcall FUN_10002cc0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 4);
  return iVar1 != 0;
}



// Function: FUN_10002ce0 @ 0x10002ce0

undefined4 __fastcall FUN_10002ce0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = GetTotalAmount0(param_1 + 0x1c);
  iVar7 = param_1 + 0x14;
  iVar4 = GetTotalAmount0(iVar7);
  if (*(int *)(param_1 + 0x24) < iVar4 + iVar3) {
    return 0xffffffff;
  }
  bVar1 = FUN_10002cc0(param_1);
  if (bVar1) {
    iVar3 = param_1 + 4;
    cVar2 = CheckProduction(iVar3);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x50)) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0;
        iVar7 = param_1 + 0x1c;
      }
      iVar4 = GetGlobalTime();
      if (*(int *)(param_1 + 0x60) < iVar4) {
        uVar5 = GetGlobalTime();
        *(undefined4 *)(param_1 + 0x60) = uVar5;
        uVar6 = _rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x34)) {
          ProduceUnitFast(iVar3,param_1 + 0x28,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x30);
        }
        uVar6 = _rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x48)) {
          ProduceUnitFast(iVar3,param_1 + 0x3c,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x44);
        }
      }
    }
  }
  return 0;
}



// Function: FUN_10002dd0 @ 0x10002dd0

void __fastcall FUN_10002dd0(int param_1)

{
  GetTotalAmount0(param_1 + 0x14);
  return;
}



// Function: FUN_10002de0 @ 0x10002de0

undefined4 __fastcall FUN_10002de0(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_10002cc0(param_1);
  if (bVar1) {
    iVar2 = GetTotalAmount0(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x58) <= iVar2) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10002e10 @ 0x10002e10

void __thiscall FUN_10002e10(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_10002de0((int)this);
  if ((char)uVar1 != '\0') {
    FUN_10001910(*(int *)this);
    SelectUnits((int)this + 0x1c,0);
    SelChangeNation(*(undefined1 *)this,7);
    FUN_10001910(7);
    SelectUnitsType((int)this + 0x28,7,0);
    SaveSelectedUnits(7,(int)this + 0x6c,0);
    SelectUnits((int)this + 0x1c,0);
    SelChangeNation(7,*(undefined1 *)this);
    FUN_10001950(7);
    SelectUnits((int)this + 0x6c,0);
    iVar2 = _rand();
    SelSendTo(*(undefined1 *)this,param_1,iVar2,param_2);
    FUN_10001950(*(int *)this);
  }
  return;
}



// Function: FUN_10002ec0 @ 0x10002ec0

void __thiscall FUN_10002ec0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_10002de0((int)this);
  if ((char)uVar1 != '\0') {
    FUN_10001910(*(int *)this);
    SelectUnits((int)this + 0x1c,0);
    SelChangeNation(*(undefined1 *)this,7);
    FUN_10001910(7);
    SelectUnitsType((int)this + 0x28,7,0);
    SaveSelectedUnits(7,(int)this + 0x6c,0);
    SelectUnits((int)this + 0x1c,0);
    SelChangeNation(7,*(undefined1 *)this);
    FUN_10001950(7);
    SelectUnits((int)this + 0x6c,0);
    iVar2 = _rand();
    SelSendAndKill(*(undefined1 *)this,param_1,iVar2,param_2);
    FUN_10001950(*(int *)this);
  }
  return;
}



// Function: FUN_10002f70 @ 0x10002f70

void __thiscall FUN_10002f70(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_10002de0((int)this);
  if ((char)uVar1 != '\0') {
    FUN_10001910(*(int *)this);
    SelectUnits((int)this + 0x1c,0);
    SelChangeNation(*(undefined1 *)this,7);
    FUN_10001910(7);
    SelectUnitsType((int)this + 0x3c,7,0);
    SaveSelectedUnits(7,(int)this + 0x6c,0);
    SelectUnits((int)this + 0x1c,0);
    SelChangeNation(7,*(undefined1 *)this);
    FUN_10001950(7);
    SelectUnits((int)this + 0x6c,0);
    iVar2 = _rand();
    SelSendTo(*(undefined1 *)this,param_1,iVar2,param_2);
    FUN_10001950(*(int *)this);
  }
  return;
}



// Function: FUN_10003020 @ 0x10003020

void __thiscall FUN_10003020(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_10002de0((int)this);
  if ((char)uVar1 != '\0') {
    FUN_10001910(*(int *)this);
    SelectUnits((int)this + 0x1c,0);
    SelChangeNation(*(undefined1 *)this,7);
    FUN_10001910(7);
    SelectUnitsType((int)this + 0x3c,7,0);
    SaveSelectedUnits(7,(int)this + 0x6c,0);
    SelectUnits((int)this + 0x1c,0);
    SelChangeNation(7,*(undefined1 *)this);
    FUN_10001950(7);
    SelectUnits((int)this + 0x6c,0);
    iVar2 = _rand();
    SelSendAndKill(*(undefined1 *)this,param_1,iVar2,param_2);
    FUN_10001950(*(int *)this);
  }
  return;
}



// Function: FUN_100030d0 @ 0x100030d0

void __fastcall FUN_100030d0(int param_1)

{
  GetNUnits(param_1 + 0x1c);
  RemoveGroup(param_1 + 0x1c,param_1 + 0x6c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
  return;
}



// Function: FUN_10003100 @ 0x10003100

void __fastcall FUN_10003100(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = FUN_10002cc0((int)param_1);
  if (bVar1) {
    FUN_10002ce0((int)param_1);
    uVar2 = FUN_10002de0((int)param_1);
    if ((char)uVar2 != '\0') {
      FUN_10001910(*param_1);
      SelectUnits(param_1 + 7,0);
      uVar2 = 0;
      iVar3 = _rand();
      SelSendAndKill((char)*param_1,param_1 + 0x19,iVar3,uVar2);
      FUN_10001950(*param_1);
      FUN_100030d0((int)param_1);
    }
  }
  return;
}



// Function: FUN_10003160 @ 0x10003160

void __thiscall FUN_10003160(void *this,undefined4 *param_1)

{
  FUN_10002ca0(this,param_1);
  FUN_10003100(this);
  return;
}



// Function: FUN_10003180 @ 0x10003180

void __thiscall FUN_10003180(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_10002de0((int)this);
  if ((char)uVar1 != '\0') {
    uVar2 = _rand();
    if ((uVar2 & 0xff) < 0xa0) {
      FUN_10002ca0(this,param_1);
      FUN_10003100(this);
      return;
    }
    FUN_10002ca0(this,param_2);
  }
  FUN_10003100(this);
  return;
}



// Function: FUN_100031d0 @ 0x100031d0

int __thiscall FUN_100031d0(void *this,undefined4 param_1)

{
  RegisterVar(this,0x36);
  RegisterUnitType(this,param_1);
  RegisterDynGroup((int)this + 8);
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  return (int)this;
}



// Function: FUN_10003220 @ 0x10003220

void __fastcall FUN_10003220(int param_1)

{
  *(undefined4 *)(param_1 + 800) = 0;
  return;
}



// Function: FUN_100032c0 @ 0x100032c0

undefined4 * __fastcall FUN_100032c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  RegisterDynGroup(param_1 + 3);
  puVar2 = param_1 + 7;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



// Function: FUN_100032f0 @ 0x100032f0

bool __fastcall FUN_100032f0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 0xc);
  return 0 < iVar1;
}



// Function: FUN_10003310 @ 0x10003310

undefined4 __fastcall FUN_10003310(int *param_1)

{
  undefined *puVar1;
  uint uVar2;
  short asStack_58 [22];
  short asStack_2c [22];
  
  puVar1 = &DAT_10012cf8 + *param_1 * 8;
  if (*(int *)(&DAT_10012cfc + *param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(puVar1);
  }
  SaveSelectedUnits((char)*param_1,puVar1,0);
  uVar2 = GetTotalAmount0(puVar1);
  if (uVar2 == 1) {
    GetUnitInfo(param_1 + 3,0,asStack_58);
    uVar2 = GetUnitInfo(puVar1,0,asStack_2c);
    if (asStack_58[0] == asStack_2c[0]) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}



// Function: FUN_10003390 @ 0x10003390

undefined4 * __fastcall FUN_10003390(undefined4 *param_1)

{
  FUN_100032c0(param_1);
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1;
}



// Function: FUN_100033a0 @ 0x100033a0

undefined4 * __thiscall FUN_100033a0(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_100032c0(this);
  RegisterVar(this,0x35);
  RegisterUnits((int)this + 0xc,param_1);
  *(undefined4 *)this = param_2;
  *(undefined1 *)((int)this + 0x34) = 1;
  return this;
}



// Function: FUN_100033e0 @ 0x100033e0

undefined4 __thiscall FUN_100033e0(void *this,char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  undefined3 uVar3;
  
  bVar1 = FUN_100032f0((int)this);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    uVar2 = FUN_10003310(this);
    if ((char)uVar2 != '\0') {
      uVar3 = (undefined3)(uVar2 >> 8);
      uVar2 = CONCAT31(uVar3,param_1);
      if (param_1 != '\0') {
        uVar2 = CONCAT31(uVar3,*(char *)((int)this + 0x34));
        if (*(char *)((int)this + 0x34) != '\0') {
          *(undefined1 *)((int)this + 0x34) = 0;
          return CONCAT31(uVar3,1);
        }
        goto LAB_10003414;
      }
    }
    *(undefined1 *)((int)this + 0x34) = 1;
  }
LAB_10003414:
  return uVar2 & 0xffffff00;
}



// Function: FUN_10003420 @ 0x10003420

undefined4 * __fastcall FUN_10003420(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10003390(param_1);
  FUN_100032c0((undefined4 *)((int)param_1 + 0x3d));
  FUN_100034c0((int)param_1 + 0xa9);
  puVar2 = (undefined4 *)((int)param_1 + 0x3e5);
  iVar1 = 100;
  do {
    FUN_100032c0(puVar2);
    puVar2 = puVar2 + 0xd;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)((int)param_1 + 0x185a) = 5;
  *(undefined4 *)((int)param_1 + 0x1835) = 0;
  *(undefined1 *)((int)param_1 + 0x184d) = 0;
  *(undefined4 *)((int)param_1 + 0x184e) = 0;
  *(undefined4 *)((int)param_1 + 0x1852) = 0;
  *(undefined4 *)((int)param_1 + 0x1856) = 0;
  *(undefined4 *)((int)param_1 + 0x185e) = 10;
  RegisterDynGroup((int)param_1 + 0x1862);
  return param_1;
}



// Function: FUN_100034a0 @ 0x100034a0

undefined4 * __fastcall FUN_100034a0(undefined4 *param_1)

{
  FUN_10003390(param_1);
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1;
}



// Function: FUN_100034c0 @ 0x100034c0

int __fastcall FUN_100034c0(int param_1)

{
  FUN_10003220(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x334) = 0;
  return param_1;
}



// Function: FUN_100034e0 @ 0x100034e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100034e0(void)

{
  void *extraout_ECX;
  
  FUN_100034f8();
  _DAT_100266f8 = FUN_1000391a();
  FUN_100038ca(extraout_ECX);
  return;
}



// Function: FUN_100034f8 @ 0x100034f8

void FUN_100034f8(void)

{
  PTR_LAB_1000f620 = &LAB_1000399d;
  PTR_LAB_1000f61c = __cfltcvt;
  PTR_LAB_1000f624 = __fassign;
  PTR_LAB_1000f628 = FUN_10003943;
  PTR_LAB_1000f62c = &LAB_100039eb;
  PTR_LAB_1000f630 = __cfltcvt;
  return;
}



// Function: __ftol @ 0x10003530

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Function: FUN_10003557 @ 0x10003557

void __cdecl FUN_10003557(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10003dee();
  pDVar1[5] = param_1;
  return;
}



// Function: _rand @ 0x10003564

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_10003dee();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



// Function: FUN_10003586 @ 0x10003586

void __cdecl FUN_10003586(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_10026710._2_2_) {
    if (local_24.wHour == (WORD)DAT_10026710) {
      if (local_24.wDay == DAT_1002670c._2_2_) {
        if (local_24.wMonth == DAT_10026708._2_2_) {
          if (local_24.wYear == (WORD)DAT_10026708) goto LAB_10003630;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_10026700 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_10026700 = 1;
  }
  else {
    DAT_10026700 = 0;
  }
  DAT_10026708._0_2_ = local_24.wYear;
  DAT_10026708._2_2_ = local_24.wMonth;
  DAT_1002670c._0_2_ = local_24.wDayOfWeek;
  DAT_1002670c._2_2_ = local_24.wDay;
  DAT_10026710._0_2_ = local_24.wHour;
  DAT_10026710._2_2_ = local_24.wMinute;
  DAT_10026714._0_2_ = local_24.wSecond;
  DAT_10026714._2_2_ = local_24.wMilliseconds;
LAB_10003630:
  iVar2 = FUN_10003ef5((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_10026700);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}



// Function: FUN_10003662 @ 0x10003662

undefined4 __cdecl FUN_10003662(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_100040a9();
  pbVar1 = (byte *)FUN_10004404(DAT_10027e70);
  if (pbVar1 < DAT_10027e6c + (4 - (int)DAT_10027e70)) {
    SVar2 = FUN_10004404(DAT_10027e70);
    pbVar1 = FUN_100040d5(DAT_10027e70,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_100036d7;
    }
    DAT_10027e6c = pbVar1 + ((int)DAT_10027e6c - (int)DAT_10027e70 >> 2) * 4;
    DAT_10027e70 = pbVar1;
  }
  *(undefined4 *)DAT_10027e6c = param_1;
  DAT_10027e6c = DAT_10027e6c + 4;
LAB_100036d7:
  FUN_100040b2();
  return param_1;
}



// Function: FUN_100036e0 @ 0x100036e0

int __cdecl FUN_100036e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_10003662(param_1);
  return (iVar1 != 0) - 1;
}



// Function: FUN_10003721 @ 0x10003721

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10003721(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10026730 = GetVersion();
    iVar1 = FUN_10004de9(1);
    if (iVar1 != 0) {
      _DAT_1002673c = DAT_10026730 >> 8 & 0xff;
      _DAT_10026738 = DAT_10026730 & 0xff;
      DAT_10026730 = DAT_10026730 >> 0x10;
      _DAT_10026734 = _DAT_10026738 * 0x100 + _DAT_1002673c;
      iVar1 = FUN_10003d69();
      if (iVar1 != 0) {
        DAT_10027e74 = GetCommandLineA();
        DAT_1002671c = FUN_10004b42();
        FUN_1000462c();
        FUN_100048f5();
        FUN_1000483c();
        FUN_10003fb7();
        DAT_10026718 = DAT_10026718 + 1;
        goto LAB_100037f4;
      }
      FUN_10004e46();
    }
LAB_10003781:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10026718 < 1) goto LAB_10003781;
      DAT_10026718 = DAT_10026718 + -1;
      if (DAT_10026768 == 0) {
        FUN_10003ff5();
      }
      FUN_100047e8();
      FUN_10003dbd();
      FUN_10004e46();
    }
    else if (param_2 == 3) {
      FUN_10003e55((undefined *)0x0);
    }
LAB_100037f4:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100037fa

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10026718;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10003842;
    if ((DAT_10027e78 != (code *)0x0) &&
       (iVar2 = (*DAT_10027e78)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10003721(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10003842:
  iVar2 = FUN_10002a70(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10003721(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10003721(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10027e78 != (code *)0x0) {
      iVar2 = (*DAT_10027e78)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10003897

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10026724 == 1) || ((DAT_10026724 == 0 && (DAT_10026728 == 1)))) {
    FUN_10004eee();
  }
  FUN_10004f27(param_1);
  (*(code *)PTR___exit_1000f618)(0xff);
  return;
}



// Function: FUN_100038ca @ 0x100038ca

void __fastcall FUN_100038ca(void *param_1)

{
  FUN_100050af(param_1,0x10000,0x30000);
  return;
}



// Function: FUN_100038dc @ 0x100038dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100038dc(void)

{
  if (_DAT_1000d1d8 < _DAT_1000d1e0 - (_DAT_1000d1e0 / _DAT_1000d1e8) * _DAT_1000d1e8) {
    return 1;
  }
  return 0;
}



// Function: FUN_1000391a @ 0x1000391a

void FUN_1000391a(void)

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
  FUN_100038dc();
  return;
}



// Function: FUN_10003943 @ 0x10003943

void __cdecl FUN_10003943(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_10005255((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1000f6f8 < 2) {
        uVar3 = (byte)PTR_DAT_1000f704[*param_1 * 2] & 4;
        this = PTR_DAT_1000f704;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_100051e0(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1000f6fc;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __fassign @ 0x10003a03

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
    FUN_10005721(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_1000574e(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// Function: FUN_10003a41 @ 0x10003a41

undefined1 * __cdecl FUN_10003a41(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_100057f2((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_1000577b(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10003aa2(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// Function: FUN_10003aa2 @ 0x10003aa2

undefined1 * __cdecl
FUN_10003aa2(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_10003d44(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_1000f6fc;
  }
  puVar3 = FUN_10005910((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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



// Function: FUN_10003b64 @ 0x10003b64

char * __cdecl FUN_10003b64(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_100057f2((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_1000577b(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10003bb9(param_2,param_3,&local_14,'\0');
  return param_2;
}



// Function: FUN_10003bb9 @ 0x10003bb9

char * __cdecl FUN_10003bb9(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_10003d44(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_10003d44(pcVar3,1);
    *pcVar3 = DAT_1000f6fc;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_10003d44(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_10003c60 @ 0x10003c60

void __cdecl FUN_10003c60(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_100057f2((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_1000577b(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10003aa2(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_10003bb9(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x10003cf3

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_10003a41(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10003b64(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_10003c60(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// Function: FUN_10003d44 @ 0x10003d44

void __cdecl FUN_10003d44(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10005a60((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_10003d69 @ 0x10003d69

undefined4 FUN_10003d69(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10005f61();
  DAT_1000f634 = TlsAlloc();
  if (DAT_1000f634 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10005e24(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000f634,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10003ddb((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10003dbd @ 0x10003dbd

void FUN_10003dbd(void)

{
  FUN_10005f8a();
  if (DAT_1000f634 != 0xffffffff) {
    TlsFree(DAT_1000f634);
    DAT_1000f634 = 0xffffffff;
  }
  return;
}



// Function: FUN_10003ddb @ 0x10003ddb

void __cdecl FUN_10003ddb(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000fa00;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10003dee @ 0x10003dee

DWORD * FUN_10003dee(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000f634);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10005e24(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000f634,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10003ddb((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10003e49;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10003e49:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_10003e55 @ 0x10003e55

void __cdecl FUN_10003e55(undefined *param_1)

{
  if (DAT_1000f634 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1000f634), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1000606c(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1000606c(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1000606c(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1000606c(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1000606c(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1000606c(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1000fa00) {
        FUN_1000606c(*(undefined **)(param_1 + 0x50));
      }
      FUN_1000606c(param_1);
    }
    TlsSetValue(DAT_1000f634,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10003ef5 @ 0x10003ef5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_10003ef5(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_28 [2];
  int local_20;
  int local_18;
  uint local_14;
  int local_c;
  
  uVar3 = param_1 - 0x76c;
  if (((int)uVar3 < 0x46) || (0x8a < (int)uVar3)) {
    iVar2 = -1;
  }
  else {
    iVar4 = *(int *)(&DAT_1000fb6c + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_10006155();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5)
            * 0x3c + DAT_1000fa88 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_1000fa8c != 0)) &&
        (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_1000640a(local_28),
        CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + _DAT_1000fa90;
    }
  }
  return iVar2;
}



// Function: FUN_10003fb7 @ 0x10003fb7

void FUN_10003fb7(void)

{
  if (PTR_FUN_1000f60c != (undefined *)0x0) {
    (*(code *)PTR_FUN_1000f60c)();
  }
  FUN_100040bb((undefined4 *)&DAT_1000f024,(undefined4 *)&DAT_1000f038);
  FUN_100040bb((undefined4 *)&DAT_1000f000,(undefined4 *)&DAT_1000f020);
  return;
}



// Function: __exit @ 0x10003fe4

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10004004(_Code,1,0);
  return;
}



// Function: FUN_10003ff5 @ 0x10003ff5

void FUN_10003ff5(void)

{
  FUN_10004004(0,0,1);
  return;
}



// Function: FUN_10004004 @ 0x10004004

void __cdecl FUN_10004004(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100040a9();
  if (DAT_1002676c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10026768 = 1;
  DAT_10026764 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10027e70 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10027e6c - 4), DAT_10027e70 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10027e70 <= puVar1);
    }
    FUN_100040bb((undefined4 *)&DAT_1000f03c,(undefined4 *)&DAT_1000f044);
  }
  FUN_100040bb((undefined4 *)&DAT_1000f048,(undefined4 *)&DAT_1000f050);
  if (param_3 == 0) {
    DAT_1002676c = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100040b2();
  return;
}



// Function: FUN_100040a9 @ 0x100040a9

void FUN_100040a9(void)

{
  FUN_10005ff6(0xd);
  return;
}



// Function: FUN_100040b2 @ 0x100040b2

void FUN_100040b2(void)

{
  FUN_10006057(0xd);
  return;
}



// Function: FUN_100040bb @ 0x100040bb

void __cdecl FUN_100040bb(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_100040d5 @ 0x100040d5

byte * __cdecl FUN_100040d5(byte *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  int local_3c;
  uint *local_38;
  byte *local_34;
  int *local_30;
  uint *local_2c;
  byte *local_28;
  uint *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000d228;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_1000606c(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_10027d44 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10005ff6(9);
            local_8 = 0;
            local_2c = (uint *)FUN_1000675f((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_10027d3c) {
                iVar1 = FUN_10006f68(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_10006ab3(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_10007950((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_1000675f((int)param_1);
                    FUN_1000678a(local_2c,(int)param_1);
                  }
                }
                else {
                  local_28 = param_1;
                }
              }
              if (local_28 == (byte *)0x0) {
                if (param_2 == (uint *)0x0) {
                  param_2 = (uint *)0x1;
                }
                param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
                local_28 = HeapAlloc(DAT_10027d40,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_10007950((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_1000678a(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_10004260();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_10027d40,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_100269a4 == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_1000792b(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_10027d44 == 2) {
          ExceptionList = &local_14;
          if (param_2 < (uint *)0xffffffe1) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x10;
              ExceptionList = &local_14;
            }
            else {
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              ExceptionList = &local_14;
            }
          }
          do {
            local_28 = pbVar3;
            if (param_2 < (uint *)0xffffffe1) {
              FUN_10005ff6(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_100074ba(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_10027d40,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_10011bcc) {
                  iVar1 = FUN_10007882(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_10007556((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_10007950((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_10007511(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_10027d40,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_10007950((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10007511(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_100043ae();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_100269a4 == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_1000792b(param_2);
          } while (iVar1 != 0);
        }
        else {
          do {
            pbVar3 = (byte *)0x0;
            if (param_2 < (uint *)0xffffffe1) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              pbVar3 = HeapReAlloc(DAT_10027d40,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_100269a4 == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_1000792b(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



// Function: FUN_10004260 @ 0x10004260

void FUN_10004260(void)

{
  FUN_10006057(9);
  return;
}



// Function: FUN_100043ae @ 0x100043ae

void FUN_100043ae(void)

{
  FUN_10006057(9);
  return;
}



// Function: FUN_10004404 @ 0x10004404

SIZE_T __cdecl FUN_10004404(undefined *param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined4 local_30;
  byte *local_2c;
  uint local_28;
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000d240;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  if (DAT_10027d44 == 3) {
    ExceptionList = &local_14;
    FUN_10005ff6(9);
    local_8 = 0;
    local_20 = (byte *)FUN_1000675f((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_1000446e();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10027d44 != 2) goto LAB_100044c2;
    ExceptionList = &local_14;
    FUN_10005ff6(9);
    local_8 = 1;
    local_2c = (byte *)FUN_100074ba(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_100044e9();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_100044c2:
  SVar2 = HeapSize(DAT_10027d40,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}



// Function: FUN_1000446e @ 0x1000446e

void FUN_1000446e(void)

{
  FUN_10006057(9);
  return;
}



// Function: FUN_100044e9 @ 0x100044e9

void FUN_100044e9(void)

{
  FUN_10006057(9);
  return;
}



// Function: _malloc @ 0x100044f2

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_100269a4);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10004504

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10004530((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1000792b(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10004530 @ 0x10004530

void __cdecl FUN_10004530(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000d258;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  if (DAT_10027d44 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10027d3c) {
      ExceptionList = &local_14;
      FUN_10005ff6(9);
      local_8 = 0;
      piVar1 = FUN_10006ab3(param_1);
      local_8 = 0xffffffff;
      FUN_10004597();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10027d44 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10011bcc) {
        ExceptionList = &local_14;
        FUN_10005ff6(9);
        local_8 = 1;
        piVar1 = FUN_10007556(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_100045f6();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_1000460f;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_1000460f:
  HeapAlloc(DAT_10027d40,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10004597 @ 0x10004597

void FUN_10004597(void)

{
  FUN_10006057(9);
  return;
}



// Function: FUN_100045f6 @ 0x100045f6

void FUN_100045f6(void)

{
  FUN_10006057(9);
  return;
}



// Function: FUN_1000462c @ 0x1000462c

void FUN_1000462c(void)

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
  DAT_10027e60 = 0x20;
  DAT_10027d60 = puVar2;
  for (; puVar2 < DAT_10027d60 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10027e60 < (int)UVar8) {
      puVar2 = &DAT_10027d64;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10027e60;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10027e60 = DAT_10027e60 + 0x20;
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
      } while ((int)DAT_10027e60 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10027d60)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10027d60 + iVar6 * 9;
    if (DAT_10027d60[iVar6 * 9] == -1) {
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
          goto LAB_100047d1;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_100047d1:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10027e60);
      return;
    }
  } while( true );
}



// Function: FUN_100047e8 @ 0x100047e8

void FUN_100047e8(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10027d60;
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
      FUN_1000606c((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10027e60);
  return;
}



// Function: FUN_1000483c @ 0x1000483c

void FUN_1000483c(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10027e68 == 0) {
    FUN_1000873d();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1002671c; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_1002674c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1002671c;
  puVar6 = DAT_1002671c;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10005910((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1000606c((undefined *)DAT_1002671c);
  DAT_1002671c = (uint *)0x0;
  *puVar3 = 0;
  DAT_10027e64 = 1;
  return;
}



// Function: FUN_100048f5 @ 0x100048f5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100048f5(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10027e68 == 0) {
    FUN_1000873d();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10026770,0x104);
  _DAT_1002675c = &DAT_10026770;
  pbVar2 = &DAT_10026770;
  if (*DAT_10027e74 != 0) {
    pbVar2 = DAT_10027e74;
  }
  FUN_1000498e(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000498e(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10026744 = puVar1;
  _DAT_10026740 = local_8 + -1;
  return;
}



// Function: FUN_1000498e @ 0x1000498e

void __cdecl FUN_1000498e(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10026c00 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10026c00 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10004a39;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10004a39:
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
          if ((*(byte *)((int)&DAT_10026c00 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10026c00 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10004b42 @ 0x10004b42

LPSTR FUN_10004b42(void)

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
  if (DAT_10026874 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10026874 = 1;
LAB_10004b99:
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
        FUN_1000606c(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10026874 = 2;
  }
  else {
    if (DAT_10026874 == 1) goto LAB_10004b99;
    if (DAT_10026874 != 2) {
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
    FUN_10007950((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10004c74 @ 0x10004c74

void __cdecl FUN_10004c74(undefined4 *param_1)

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



// Function: FUN_10004ca1 @ 0x10004ca1

int FUN_10004ca1(void)

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
  
  FUN_10008b10();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -5;
    aCStackY_18[1] = 'L';
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
      aCStackY_18[0] = '9';
      aCStackY_18[1] = 'M';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = '[';
        aCStackY_18[1] = 'M';
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
        aCStackY_18[0] = -0x3f;
        aCStackY_18[1] = 'M';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10008759(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10004c74((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_10004de9 @ 0x10004de9

undefined4 __cdecl FUN_10004de9(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10027d40 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10027d40 != (HANDLE)0x0) {
    DAT_10027d44 = FUN_10004ca1();
    if (DAT_10027d44 == 3) {
      ppuVar1 = (undefined **)FUN_10006717(0x3f8);
    }
    else {
      if (DAT_10027d44 != 2) {
        return 1;
      }
      ppuVar1 = FUN_1000725e();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10027d40);
  }
  return 0;
}



// Function: FUN_10004e46 @ 0x10004e46

void FUN_10004e46(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10027d44 == 3) {
    iVar1 = 0;
    if (0 < DAT_10027d34) {
      puVar2 = (undefined4 *)((int)DAT_10027d38 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10027d40,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10027d34);
    }
    HeapFree(DAT_10027d40,0,DAT_10027d38);
  }
  else if (DAT_10027d44 == 2) {
    ppuVar3 = &PTR_LOOP_1000fba8;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000fba8);
  }
  HeapDestroy(DAT_10027d40);
  return;
}



// Function: FUN_10004eee @ 0x10004eee

void FUN_10004eee(void)

{
  if ((DAT_10026724 == 1) || ((DAT_10026724 == 0 && (DAT_10026728 == 1)))) {
    FUN_10004f27(0xfc);
    if (DAT_10026878 != (code *)0x0) {
      (*DAT_10026878)();
    }
    FUN_10004f27(0xff);
  }
  return;
}



// Function: FUN_10004f27 @ 0x10004f27

void __cdecl FUN_10004f27(DWORD param_1)

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
  pDVar2 = &DAT_1000f668;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000f6f8);
  if (param_1 == (&DAT_1000f668)[iVar5 * 2]) {
    if ((DAT_10026724 == 1) || ((DAT_10026724 == 0 && (DAT_10026728 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000f66c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10005910(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10005910(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10005920(local_a4,_Dest);
      FUN_10005920(local_a4,(uint *)&DAT_1000d5c8);
      FUN_10005920(local_a4,*(uint **)(iVar5 * 8 + 0x1000f66c));
      auStackY_1e3._3_4_ = 0x1000504b;
      FUN_10008b3f(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_1000507a @ 0x1000507a

uint __thiscall FUN_1000507a(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_100050c5(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10005157(uVar1);
  return uVar1;
}



// Function: FUN_100050af @ 0x100050af

void __thiscall FUN_100050af(void *this,uint param_1,uint param_2)

{
  FUN_1000507a(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// Function: FUN_100050c5 @ 0x100050c5

uint __cdecl FUN_100050c5(uint param_1)

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



// Function: FUN_10005157 @ 0x10005157

uint __cdecl FUN_10005157(uint param_1)

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



// Function: FUN_100051e0 @ 0x100051e0

uint __thiscall FUN_100051e0(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000f704 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000f704[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10008e8d(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10005255 @ 0x10005255

uint __cdecl FUN_10005255(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100269e8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10026ad0);
    bVar1 = DAT_10026acc != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10026ad0);
      this = (void *)0x13;
      FUN_10005ff6(0x13);
    }
    param_1 = FUN_100052c4(this,param_1);
    if (bVar1) {
      FUN_10006057(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10026ad0);
    }
  }
  return param_1;
}



// Function: FUN_100052c4 @ 0x100052c4

uint __thiscall FUN_100052c4(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100269e8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000f6f8 < 2) {
        uVar2 = (byte)PTR_DAT_1000f704[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_100051e0(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000f704[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10008fd6(DAT_100269e8,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_1000538f @ 0x1000538f

undefined4 __cdecl FUN_1000538f(int param_1,int param_2)

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



// Function: FUN_100053d8 @ 0x100053d8

void __cdecl FUN_100053d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_100091fa(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_100091fa(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Function: FUN_1000542e @ 0x1000542e

undefined4 __cdecl FUN_1000542e(int param_1,int param_2)

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
     (iVar2 = FUN_1000538f(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_100053d8(param_1,param_2 + -1);
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



// Function: FUN_100054ba @ 0x100054ba

void __cdecl FUN_100054ba(int param_1,undefined4 *param_2)

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



// Function: FUN_100054d5 @ 0x100054d5

void __cdecl FUN_100054d5(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_100054e1 @ 0x100054e1

undefined4 __cdecl FUN_100054e1(int *param_1)

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



// Function: FUN_100054fc @ 0x100054fc

void __cdecl FUN_100054fc(uint *param_1,uint param_2)

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



// Function: FUN_10005589 @ 0x10005589

undefined4 __cdecl FUN_10005589(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_100054e1((int *)&local_10);
    if (iVar2 != 0) {
LAB_100056b5:
      uVar5 = 0;
      goto LAB_100056b7;
    }
    FUN_100054d5(&local_10);
  }
  else {
    FUN_100054ba((int)local_1c,&local_10);
    iVar2 = FUN_1000542e((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_100054d5(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_100054d5(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_100054fc(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_100056b7;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_100054fc(&local_10,param_3[3]);
        goto LAB_100056b5;
      }
      FUN_100054ba((int)&local_10,local_1c);
      FUN_100054fc(&local_10,iVar2 - iVar4);
      FUN_1000542e((int)&local_10,param_3[2]);
      FUN_100054fc(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_100056b7:
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



// Function: FUN_100056f5 @ 0x100056f5

void __cdecl FUN_100056f5(ushort *param_1,uint *param_2)

{
  FUN_10005589(param_1,param_2,(int *)&DAT_1000f910);
  return;
}



// Function: FUN_1000570b @ 0x1000570b

void __cdecl FUN_1000570b(ushort *param_1,uint *param_2)

{
  FUN_10005589(param_1,param_2,(int *)&DAT_1000f928);
  return;
}



// Function: FUN_10005721 @ 0x10005721

void __thiscall FUN_10005721(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000939b(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_100056f5(local_10,param_1);
  return;
}



// Function: FUN_1000574e @ 0x1000574e

void __thiscall FUN_1000574e(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000939b(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1000570b(local_10,param_1);
  return;
}



// Function: FUN_1000577b @ 0x1000577b

void __cdecl FUN_1000577b(char *param_1,int param_2,int param_3)

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
    FUN_10005a60((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// Function: FUN_100057f2 @ 0x100057f2

int * __cdecl FUN_100057f2(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_1000584e(&local_10,&param_1);
  iVar3 = FUN_1000986c(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10005910(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// Function: FUN_1000584e @ 0x1000584e

void __cdecl FUN_1000584e(uint *param_1,uint *param_2)

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



// Function: FUN_10005910 @ 0x10005910

uint * __cdecl FUN_10005910(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_100059f8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100059f8:
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



// Function: FUN_10005920 @ 0x10005920

uint * __cdecl FUN_10005920(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000593c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000596f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000598b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000593c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000598b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000598b;
    }
  }
LAB_1000596f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000598b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100059f8:
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
    if (bVar1 == 0) goto LAB_100059f8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _memset @ 0x10005a00

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



// Function: FUN_10005a60 @ 0x10005a60

undefined4 * __cdecl FUN_10005a60(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10005c17_caseD_2;
        case 3:
          goto switchD_10005c17_caseD_3;
        }
        goto switchD_10005c17_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10005c17_caseD_0;
      case 1:
        goto switchD_10005c17_caseD_1;
      case 2:
        goto switchD_10005c17_caseD_2;
      case 3:
        goto switchD_10005c17_caseD_3;
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
              goto switchD_10005c17_caseD_2;
            case 3:
              goto switchD_10005c17_caseD_3;
            }
            goto switchD_10005c17_caseD_1;
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
              goto switchD_10005c17_caseD_2;
            case 3:
              goto switchD_10005c17_caseD_3;
            }
            goto switchD_10005c17_caseD_1;
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
              goto switchD_10005c17_caseD_2;
            case 3:
              goto switchD_10005c17_caseD_3;
            }
            goto switchD_10005c17_caseD_1;
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
switchD_10005c17_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10005c17_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10005c17_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10005c17_caseD_0:
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
        goto switchD_10005a95_caseD_2;
      case 3:
        goto switchD_10005a95_caseD_3;
      }
      goto switchD_10005a95_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005a95_caseD_0;
    case 1:
      goto switchD_10005a95_caseD_1;
    case 2:
      goto switchD_10005a95_caseD_2;
    case 3:
      goto switchD_10005a95_caseD_3;
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
            goto switchD_10005a95_caseD_2;
          case 3:
            goto switchD_10005a95_caseD_3;
          }
          goto switchD_10005a95_caseD_1;
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
            goto switchD_10005a95_caseD_2;
          case 3:
            goto switchD_10005a95_caseD_3;
          }
          goto switchD_10005a95_caseD_1;
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
            goto switchD_10005a95_caseD_2;
          case 3:
            goto switchD_10005a95_caseD_3;
          }
          goto switchD_10005a95_caseD_1;
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
switchD_10005a95_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005a95_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005a95_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005a95_caseD_0:
  return param_1;
}



// Function: _strlen @ 0x10005da0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10005dc0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10005df3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10005dc0:
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
  goto LAB_10005df3;
}



// Function: FUN_10005e24 @ 0x10005e24

int * __cdecl FUN_10005e24(int param_1,int param_2)

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
  puStack_c = &DAT_1000d608;
  puStack_10 = &LAB_10007d80;
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
      if (DAT_10027d44 == 3) {
        if (puVar2 <= DAT_10027d3c) {
          FUN_10005ff6(9);
          local_8 = 0;
          local_24 = FUN_10006ab3(puVar2);
          local_8 = 0xffffffff;
          FUN_10005ebd();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10005f11;
LAB_10005f00:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10005f0c:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10027d44 != 2) || (DAT_10011bcc < puVar3)) goto LAB_10005f0c;
        FUN_10005ff6(9);
        local_8 = 1;
        local_24 = FUN_10007556((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10005f46();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10005f00;
      }
LAB_10005f11:
      local_24 = HeapAlloc(DAT_10027d40,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100269a4 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1000792b(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_10005ebd @ 0x10005ebd

void FUN_10005ebd(void)

{
  FUN_10006057(9);
  return;
}



// Function: FUN_10005f46 @ 0x10005f46

void FUN_10005f46(void)

{
  FUN_10006057(9);
  return;
}



// Function: FUN_10005f61 @ 0x10005f61

void FUN_10005f61(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000f984);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000f974);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000f964);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000f944);
  return;
}



// Function: FUN_10005f8a @ 0x10005f8a

void FUN_10005f8a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000f940;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000f984)) && (ppuVar1 != &PTR_DAT_1000f974)) &&
       ((ppuVar1 != &PTR_DAT_1000f964 && (ppuVar1 != &PTR_DAT_1000f944)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000606c(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000fa00);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000f964);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000f974);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000f984);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000f944);
  return;
}



// Function: FUN_10005ff6 @ 0x10005ff6

void __cdecl FUN_10005ff6(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000f940 + param_1;
  if ((&DAT_1000f940)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10005ff6(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1000606c((undefined *)lpCriticalSection);
    }
    FUN_10006057(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10006057 @ 0x10006057

void __cdecl FUN_10006057(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000f940)[param_1]);
  return;
}



// Function: FUN_1000606c @ 0x1000606c

void __cdecl FUN_1000606c(undefined *param_1)

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
  puStack_c = &DAT_1000d620;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10027d44 == 3) {
    ExceptionList = &local_14;
    FUN_10005ff6(9);
    local_8 = 0;
    local_20 = (uint *)FUN_1000675f((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_1000678a(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_100060d6();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10027d44 != 2) goto LAB_10006138;
    ExceptionList = &local_14;
    FUN_10005ff6(9);
    local_8 = 1;
    local_28 = (uint *)FUN_100074ba(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10007511(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000612e();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10006138:
  HeapFree(DAT_10027d40,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_100060d6 @ 0x100060d6

void FUN_100060d6(void)

{
  FUN_10006057(9);
  return;
}



// Function: FUN_1000612e @ 0x1000612e

void FUN_1000612e(void)

{
  FUN_10006057(9);
  return;
}



// Function: FUN_10006155 @ 0x10006155

void FUN_10006155(void)

{
  if (DAT_10026998 == 0) {
    FUN_10005ff6(0xb);
    if (DAT_10026998 == 0) {
      FUN_10006183();
      DAT_10026998 = DAT_10026998 + 1;
    }
    FUN_10006057(0xb);
  }
  return;
}



// Function: FUN_10006183 @ 0x10006183

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006183(void)

{
  char cVar1;
  char cVar2;
  uint *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  void *this;
  uint *_Source;
  int local_8;
  
  FUN_10005ff6(0xc);
  DAT_1000fb30 = 0xffffffff;
  DAT_1000fb20 = 0xffffffff;
  DAT_100268e0 = 0;
  _Str1 = (uint *)FUN_10009c14("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10006057(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_100268e8);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_1000fa88 = (void *)(DAT_100268e8 * 0x3c);
    DAT_100268e0 = 1;
    if (DAT_1002692e != 0) {
      DAT_1000fa88 = (void *)((int)DAT_1000fa88 + DAT_1002693c * 0x3c);
    }
    if ((DAT_10026982 == 0) || (DAT_10026990 == 0)) {
      DAT_1000fa8c = 0;
      _DAT_1000fa90 = 0;
    }
    else {
      DAT_1000fa8c = 1;
      _DAT_1000fa90 = (DAT_10026990 - DAT_1002693c) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_100269f8,0x220,(LPCWSTR)&DAT_100268ec,-1,PTR_DAT_1000fb14,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_1000fb14 = 0;
    }
    else {
      PTR_DAT_1000fb14[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_100269f8,0x220,(LPCWSTR)&DAT_10026940,-1,PTR_DAT_1000fb18,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_1000fb18[0x3f] = 0;
      return;
    }
LAB_100063f4:
    *PTR_DAT_1000fb18 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_10026994 == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_10026994), iVar4 != 0)))) {
      FUN_1000606c((undefined *)DAT_10026994);
      sVar5 = _strlen((char *)_Str1);
      DAT_10026994 = _malloc(sVar5 + 1);
      if (DAT_10026994 != (uint *)0x0) {
        FUN_10005910(DAT_10026994,_Str1);
        FUN_10006057(0xc);
        _strncpy(PTR_DAT_1000fb14,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_1000fb14[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_10009aff(this,(byte *)_Source);
        DAT_1000fa88 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_10009aff(DAT_1000fa88,(byte *)_Source);
          DAT_1000fa88 = (void *)((int)DAT_1000fa88 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_10009aff(DAT_1000fa88,(byte *)_Source);
            DAT_1000fa88 = (void *)((int)DAT_1000fa88 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_1000fa88 = (void *)-(int)DAT_1000fa88;
        }
        DAT_1000fa8c = (int)(char)*_Source;
        if (DAT_1000fa8c != 0) {
          _strncpy(PTR_DAT_1000fb18,(char *)_Source,3);
          PTR_DAT_1000fb18[3] = 0;
          return;
        }
        goto LAB_100063f4;
      }
    }
    FUN_10006057(0xc);
  }
  return;
}



// Function: FUN_1000640a @ 0x1000640a

bool __cdecl FUN_1000640a(int *param_1)

{
  bool bVar1;
  
  FUN_10005ff6(0xb);
  bVar1 = FUN_1000642b(param_1);
  FUN_10006057(0xb);
  return bVar1;
}



// Function: FUN_1000642b @ 0x1000642b

bool __cdecl FUN_1000642b(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_1000fa8c != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_1000fb20) || (uVar5 != DAT_1000fb30)) {
      if (DAT_100268e0 == 0) {
        FUN_100065d7(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_100065d7(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_10026980 != 0) {
          uVar6 = (uint)DAT_10026986;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_10026984;
          uVar6 = 0;
          uVar4 = (uint)DAT_10026986;
        }
        FUN_100065d7(1,(uint)(DAT_10026980 == 0),uVar5,(uint)DAT_10026982,uVar4,uVar3,uVar6,
                     (uint)DAT_10026988,(uint)DAT_1002698a,(uint)DAT_1002698c,(uint)DAT_1002698e);
        if (DAT_1002692c != 0) {
          uVar6 = (uint)DAT_10026932;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_10026930;
          uVar6 = 0;
          uVar4 = (uint)DAT_10026932;
          uVar5 = param_1[5];
        }
        FUN_100065d7(0,(uint)(DAT_1002692c == 0),uVar5,(uint)DAT_1002692e,uVar4,uVar3,uVar6,
                     (uint)DAT_10026934,(uint)DAT_10026936,(uint)DAT_10026938,(uint)DAT_1002693a);
      }
    }
    iVar1 = param_1[7];
    if (DAT_1000fb24 < DAT_1000fb34) {
      if ((DAT_1000fb24 <= iVar1) && (iVar1 <= DAT_1000fb34)) {
        if ((DAT_1000fb24 < iVar1) && (iVar1 < DAT_1000fb34)) {
          return true;
        }
LAB_100065a3:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_1000fb24) {
          return DAT_1000fb28 <= iVar2;
        }
        return iVar2 < DAT_1000fb38;
      }
    }
    else {
      if (iVar1 < DAT_1000fb34) {
        return true;
      }
      if (DAT_1000fb24 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_1000fb34) || (DAT_1000fb24 <= iVar1)) goto LAB_100065a3;
    }
  }
  return false;
}



// Function: FUN_100065d7 @ 0x100065d7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100065d7(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_1000fb38)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_1000fb6c + param_4 * 4);
    }
    iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar2) {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_1000fb3c + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_1000fb70 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_1000fb38)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_1000fb6c + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_1000fb20 = param_3;
    DAT_1000fb28 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_1000fb24 = iVar1;
  }
  else {
    DAT_1000fb38 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_1000fa90 + param_10) * 1000 + param_11;
    if (DAT_1000fb38 < 0) {
      DAT_1000fb38 = DAT_1000fb38 + 86400000;
      DAT_1000fb34 = iVar1 + -1;
    }
    else {
      DAT_1000fb34 = iVar1;
      if (86399999 < DAT_1000fb38) {
        DAT_1000fb38 = DAT_1000fb38 + -86400000;
        DAT_1000fb34 = iVar1 + 1;
      }
    }
    DAT_1000fb30 = param_3;
  }
  return;
}



// Function: FUN_10006717 @ 0x10006717

undefined4 __cdecl FUN_10006717(undefined4 param_1)

{
  DAT_10027d38 = HeapAlloc(DAT_10027d40,0,0x140);
  if (DAT_10027d38 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10027d30 = 0;
  DAT_10027d34 = 0;
  DAT_10027d2c = DAT_10027d38;
  DAT_10027d3c = param_1;
  DAT_10027d24 = 0x10;
  return 1;
}



// Function: FUN_1000675f @ 0x1000675f

uint __cdecl FUN_1000675f(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10027d38;
  while( true ) {
    if (DAT_10027d38 + DAT_10027d34 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_1000678a @ 0x1000678a

void __cdecl FUN_1000678a(uint *param_1,int param_2)

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
      if (DAT_10027d30 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10027d28 * 0x8000 + DAT_10027d30[3]),0x8000,0x4000);
        DAT_10027d30[2] = DAT_10027d30[2] | 0x80000000U >> ((byte)DAT_10027d28 & 0x1f);
        *(undefined4 *)(DAT_10027d30[4] + 0xc4 + DAT_10027d28 * 4) = 0;
        *(char *)(DAT_10027d30[4] + 0x43) = *(char *)(DAT_10027d30[4] + 0x43) + -1;
        if (*(char *)(DAT_10027d30[4] + 0x43) == '\0') {
          DAT_10027d30[1] = DAT_10027d30[1] & 0xfffffffe;
        }
        if (DAT_10027d30[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10027d30[3],0,0x8000);
          HeapFree(DAT_10027d40,0,(LPVOID)DAT_10027d30[4]);
          FUN_10005a60(DAT_10027d30,DAT_10027d30 + 5,
                       (DAT_10027d34 * 0x14 - (int)DAT_10027d30) + -0x14 + DAT_10027d38);
          DAT_10027d34 = DAT_10027d34 + -1;
          if (DAT_10027d30 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10027d2c = DAT_10027d38;
        }
      }
      DAT_10027d30 = param_1;
      DAT_10027d28 = uVar14;
    }
  }
  return;
}



// Function: FUN_10006ab3 @ 0x10006ab3

int * __cdecl FUN_10006ab3(uint *param_1)

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
  
  puVar8 = DAT_10027d38 + DAT_10027d34 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10027d2c;
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
  puVar11 = DAT_10027d38;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10027d2c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10027d2c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10027d38;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10027d2c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10027d2c) && (param_1 = FUN_10006dbc(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10006e6d((int)param_1);
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
  DAT_10027d2c = param_1;
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
    if (iVar9 == 0) goto LAB_10006d79;
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
LAB_10006d79:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10027d30)) && (local_8 == DAT_10027d28)) {
    DAT_10027d30 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10006dbc @ 0x10006dbc

undefined4 * FUN_10006dbc(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10027d34 == DAT_10027d24) {
    pvVar2 = HeapReAlloc(DAT_10027d40,0,DAT_10027d38,(DAT_10027d24 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10027d24 = DAT_10027d24 + 0x10;
    DAT_10027d38 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10027d38 + DAT_10027d34 * 0x14);
  pvVar2 = HeapAlloc(DAT_10027d40,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10027d34 = DAT_10027d34 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10027d40,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10006e6d @ 0x10006e6d

int __cdecl FUN_10006e6d(int param_1)

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



// Function: FUN_10006f68 @ 0x10006f68

undefined4 __cdecl FUN_10006f68(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar5 = param_1[4];
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar3 = uVar10 * 0x204 + 0x144 + uVar5;
  iVar6 = *(int *)(param_2 + -4);
  iVar9 = iVar6 + -1;
  uVar13 = *(uint *)(iVar6 + -5 + param_2);
  iVar6 = iVar6 + -5 + param_2;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
    iVar6 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar6) {
      uVar13 = (iVar6 >> 4) - 1;
      iVar9 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar3 = iVar3 + uVar13 * 8;
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar3 + 4);
      *(int *)(iVar9 + 8) = iVar3;
      *(int *)(iVar3 + 4) = iVar9;
      *(int *)(*(int *)(iVar9 + 4) + 8) = iVar9;
      if (*(int *)(iVar9 + 4) == *(int *)(iVar9 + 8)) {
        cVar4 = *(char *)(uVar13 + 4 + uVar5);
        *(char *)(uVar13 + 4 + uVar5) = cVar4 + '\x01';
        bVar8 = (byte)uVar13;
        if (uVar13 < 0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          bVar8 = bVar8 - 0x20;
        }
        *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
      }
      piVar2 = (int *)(param_2 + -4 + uVar12);
      *piVar2 = iVar6;
      *(int *)(iVar6 + -4 + (int)piVar2) = iVar6;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar2 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar2[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar5);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar5);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar6 = iVar3 + uVar11 * 8;
    piVar2[1] = *(int *)(iVar3 + 4 + uVar11 * 8);
    piVar2[2] = iVar6;
    *(int **)(iVar6 + 4) = piVar2;
    *(int **)(piVar2[1] + 8) = piVar2;
    if (piVar2[1] == piVar2[2]) {
      cVar4 = *(char *)(uVar11 + 4 + uVar5);
      *(char *)(uVar11 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar11;
      if (uVar11 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        bVar8 = bVar8 - 0x20;
      }
      *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
    }
    *piVar2 = param_3;
    *(int *)(param_3 + -4 + (int)piVar2) = param_3;
  }
  return 1;
}



// Function: FUN_1000725e @ 0x1000725e

undefined ** FUN_1000725e(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000fbb8 == -1) {
    lpMem = &PTR_LOOP_1000fba8;
  }
  else {
    lpMem = HeapAlloc(DAT_10027d40,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000fba8) {
        if (PTR_LOOP_1000fba8 == (undefined *)0x0) {
          PTR_LOOP_1000fba8 = (undefined *)&PTR_LOOP_1000fba8;
        }
        if (PTR_LOOP_1000fbac == (undefined *)0x0) {
          PTR_LOOP_1000fbac = (undefined *)&PTR_LOOP_1000fba8;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000fba8;
        lpMem[1] = PTR_LOOP_1000fbac;
        PTR_LOOP_1000fbac = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1000fba8) {
    HeapFree(DAT_10027d40,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_100073a2 @ 0x100073a2

void __cdecl FUN_100073a2(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10011bc8 == param_1) {
    PTR_LOOP_10011bc8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000fba8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10027d40,0,param_1);
    return;
  }
  DAT_1000fbb8 = 0xffffffff;
  return;
}



// Function: FUN_100073f8 @ 0x100073f8

void __cdecl FUN_100073f8(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000fbac;
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
            DAT_1002699c = DAT_1002699c + -1;
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
          FUN_100073a2(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000fbac) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_100074ba @ 0x100074ba

int __cdecl FUN_100074ba(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000fba8;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000fba8) {
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



// Function: FUN_10007511 @ 0x10007511

void __cdecl FUN_10007511(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1002699c = DAT_1002699c + 1, DAT_1002699c == 0x20)) {
    FUN_100073f8(0x10);
  }
  return;
}



// Function: FUN_10007556 @ 0x10007556

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10007556(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_10011bc8;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_1000775e(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10007621;
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
          piVar5 = (int *)FUN_1000775e(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10007621:
            PTR_LOOP_10011bc8 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_10011bc8) {
      ppuVar9 = &PTR_LOOP_1000fba8;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000fba8) {
          ppuVar9 = FUN_1000725e();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10011bc8 = (undefined *)ppuVar9;
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
      PTR_LOOP_10011bc8 = (undefined *)ppuVar9;
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



// Function: FUN_1000775e @ 0x1000775e

int __cdecl FUN_1000775e(int *param_1,uint param_2,uint param_3)

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
          goto LAB_10007871;
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
LAB_10007871:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_10007882 @ 0x10007882

undefined4 __cdecl FUN_10007882(int param_1,int *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*param_3;
  piVar2 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  if (param_4 < uVar6) {
    *param_3 = (byte)param_4;
    *piVar2 = *piVar2 + (uVar6 - param_4);
    piVar2[1] = 0xf1;
  }
  else {
    if (param_4 <= uVar6) {
      return 0;
    }
    pbVar1 = param_3 + param_4;
    if (param_2 + 0x3e < pbVar1) {
      return 0;
    }
    for (pbVar4 = param_3 + uVar6; (pbVar4 < pbVar1 && (*pbVar4 == 0)); pbVar4 = pbVar4 + 1) {
    }
    if (pbVar4 != pbVar1) {
      return 0;
    }
    *param_3 = (byte)param_4;
    if ((param_3 <= (byte *)*param_2) && ((byte *)*param_2 < pbVar1)) {
      if (pbVar1 < param_2 + 0x3e) {
        iVar5 = 0;
        *param_2 = (int)pbVar1;
        bVar3 = *pbVar1;
        while (bVar3 == 0) {
          iVar5 = iVar5 + 1;
          bVar3 = pbVar1[iVar5];
        }
        param_2[1] = iVar5;
      }
      else {
        param_2[1] = 0;
        *param_2 = (int)(param_2 + 2);
      }
    }
    *piVar2 = *piVar2 + (uVar6 - param_4);
  }
  return 1;
}



// Function: FUN_1000792b @ 0x1000792b

undefined4 __cdecl FUN_1000792b(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100269a0 != (code *)0x0) {
    iVar1 = (*DAT_100269a0)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10007950 @ 0x10007950

undefined4 * __cdecl FUN_10007950(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10007b07_caseD_2;
        case 3:
          goto switchD_10007b07_caseD_3;
        }
        goto switchD_10007b07_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10007b07_caseD_0;
      case 1:
        goto switchD_10007b07_caseD_1;
      case 2:
        goto switchD_10007b07_caseD_2;
      case 3:
        goto switchD_10007b07_caseD_3;
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
              goto switchD_10007b07_caseD_2;
            case 3:
              goto switchD_10007b07_caseD_3;
            }
            goto switchD_10007b07_caseD_1;
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
              goto switchD_10007b07_caseD_2;
            case 3:
              goto switchD_10007b07_caseD_3;
            }
            goto switchD_10007b07_caseD_1;
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
              goto switchD_10007b07_caseD_2;
            case 3:
              goto switchD_10007b07_caseD_3;
            }
            goto switchD_10007b07_caseD_1;
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
switchD_10007b07_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10007b07_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10007b07_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10007b07_caseD_0:
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
        goto switchD_10007985_caseD_2;
      case 3:
        goto switchD_10007985_caseD_3;
      }
      goto switchD_10007985_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10007985_caseD_0;
    case 1:
      goto switchD_10007985_caseD_1;
    case 2:
      goto switchD_10007985_caseD_2;
    case 3:
      goto switchD_10007985_caseD_3;
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
            goto switchD_10007985_caseD_2;
          case 3:
            goto switchD_10007985_caseD_3;
          }
          goto switchD_10007985_caseD_1;
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
            goto switchD_10007985_caseD_2;
          case 3:
            goto switchD_10007985_caseD_3;
          }
          goto switchD_10007985_caseD_1;
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
            goto switchD_10007985_caseD_2;
          case 3:
            goto switchD_10007985_caseD_3;
          }
          goto switchD_10007985_caseD_1;
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
switchD_10007985_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10007985_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10007985_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10007985_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x10007c88

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10007ca0,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10007cca

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
  puStack_18 = &LAB_10007ca8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10007d5e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: __abnormal_termination @ 0x10007d32

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10007ca8) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// Function: __NLG_Notify1 @ 0x10007d55

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10011bd8 = param_1;
  DAT_10011bd4 = in_EAX;
  DAT_10011bdc = unaff_EBP;
  return;
}



// Function: FUN_10007d5e @ 0x10007d5e

void FUN_10007d5e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10011bd8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10011bd4 = in_EAX;
  DAT_10011bdc = unaff_EBP;
  return;
}



// Function: FUN_10007e3d @ 0x10007e3d

void FUN_10007e3d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10007e58 @ 0x10007e58

DWORD __cdecl FUN_10007e58(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10027e60) &&
     ((*(byte *)((&DAT_10027d60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009dd7(param_1);
    DVar1 = FUN_10007ebd(param_1,param_2,param_3);
    FUN_10009e36(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10009d04();
  *pDVar2 = 9;
  pDVar2 = FUN_10009d0d();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10007ebd @ 0x10007ebd

DWORD __cdecl FUN_10007ebd(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_10009d95(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10009d04();
    *pDVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      uVar4 = GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = (byte *)((&DAT_10027d60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10009c91(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_10007f30 @ 0x10007f30

int __cdecl FUN_10007f30(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10027e60) &&
     ((*(byte *)((&DAT_10027d60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009dd7(param_1);
    iVar1 = FUN_10007f95(param_1,param_2,param_3);
    FUN_10009e36(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10009d04();
  *pDVar2 = 9;
  pDVar2 = FUN_10009d0d();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10007f95 @ 0x10007f95

int __cdecl FUN_10007f95(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  DWORD *pDVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  local_c = 0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_10007fae:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10027d60 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10007ebd(param_1,0,2);
    }
    if ((*(byte *)((undefined4 *)(*piVar1 + iVar4) + 1) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        param_1 = GetLastError();
      }
      else {
        local_c = local_10;
        param_1 = 0;
      }
LAB_1000807d:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_100080ef;
      if (param_1 == 5) {
        pDVar7 = FUN_10009d04();
        *pDVar7 = 9;
        pDVar7 = FUN_10009d0d();
        *pDVar7 = 5;
      }
      else {
        FUN_10009c91(param_1);
      }
    }
    else {
      local_8 = param_2;
      param_1 = 0;
      if (param_3 != 0) {
        do {
          pcVar5 = local_418;
          do {
            if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
            pcVar2 = local_8 + 1;
            cVar3 = *local_8;
            local_8 = pcVar2;
            if (cVar3 == '\n') {
              local_14 = local_14 + 1;
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
          } while ((int)pcVar5 - (int)local_418 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),local_418,(int)pcVar5 - (int)local_418,
                            &local_10,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            param_1 = GetLastError();
            goto LAB_1000807d;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1000807d;
        } while( true );
      }
LAB_100080ef:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10007fae;
      pDVar7 = FUN_10009d04();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10009d0d();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_100081dc @ 0x100081dc

void __cdecl FUN_100081dc(uint param_1)

{
  if ((0x10011bdf < param_1) && (param_1 < 0x10011e41)) {
    FUN_10005ff6(((int)(param_1 + 0xeffee420) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_1000820b @ 0x1000820b

void __cdecl FUN_1000820b(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10005ff6(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_1000822e @ 0x1000822e

void __cdecl FUN_1000822e(uint param_1)

{
  if ((0x10011bdf < param_1) && (param_1 < 0x10011e41)) {
    FUN_10006057(((int)(param_1 + 0xeffee420) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_1000825d @ 0x1000825d

void __cdecl FUN_1000825d(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10006057(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_10008365 @ 0x10008365

undefined4 __cdecl FUN_10008365(int param_1)

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
  
  FUN_10005ff6(0x19);
  CodePage = FUN_10008512(param_1);
  if (CodePage != DAT_10026ad4) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10011e68;
LAB_100083a2:
      if (*pUVar5 != CodePage) goto code_r0x100083a6;
      local_8 = 0;
      puVar15 = &DAT_10026c00;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10011e78);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10011e60)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10026c00 + uVar8 + 1);
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
      DAT_10026aec = 1;
      DAT_10026ad4 = CodePage;
      DAT_10026d04 = FUN_1000855c(CodePage);
      DAT_10026ae0 = *(undefined4 *)(iVar12 + 0x10011e6c);
      DAT_10026ae4 = *(undefined4 *)(iVar12 + 0x10011e70);
      DAT_10026ae8 = *(undefined4 *)(iVar12 + 0x10011e74);
      goto LAB_100084f6;
    }
    goto LAB_100084f1;
  }
  goto LAB_1000838c;
code_r0x100083a6:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10011f57 < (int)pUVar5) goto code_r0x100083b1;
  goto LAB_100083a2;
code_r0x100083b1:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10026d04 = 0;
    puVar15 = &DAT_10026c00;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_10026aec = 0;
      DAT_10026ad4 = CodePage;
    }
    else {
      DAT_10026ad4 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10026c00 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10026c00 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10026d04 = FUN_1000855c(CodePage);
      DAT_10026aec = 1;
    }
    DAT_10026ae0 = 0;
    DAT_10026ae4 = 0;
    DAT_10026ae8 = 0;
  }
  else {
    if (DAT_100269ac == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10008503;
    }
LAB_100084f1:
    FUN_1000858f();
  }
LAB_100084f6:
  FUN_100085b8();
LAB_1000838c:
  uVar14 = 0;
LAB_10008503:
  FUN_10006057(0x19);
  return uVar14;
}



// Function: FUN_10008512 @ 0x10008512

int __cdecl FUN_10008512(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_100269ac = 1;
                    /* WARNING: Could not recover jumptable at 0x1000852c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_100269ac = 1;
                    /* WARNING: Could not recover jumptable at 0x10008541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100269f8;
  }
  DAT_100269ac = (uint)bVar2;
  return param_1;
}



// Function: FUN_1000855c @ 0x1000855c

undefined4 __cdecl FUN_1000855c(int param_1)

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



// Function: FUN_1000858f @ 0x1000858f

void FUN_1000858f(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10026c00;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10026ad4 = 0;
  DAT_10026aec = 0;
  DAT_10026d04 = 0;
  DAT_10026ae0 = 0;
  DAT_10026ae4 = 0;
  DAT_10026ae8 = 0;
  return;
}



// Function: FUN_100085b8 @ 0x100085b8

void FUN_100085b8(void)

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
  
  BVar2 = GetCPInfo(DAT_10026ad4,&local_18);
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
    FUN_10008e8d(1,local_118,0x100,local_518,DAT_10026ad4,DAT_10026d04,0);
    FUN_10008fd6(DAT_10026d04,0x100,local_118,0x100,local_218,0x100,DAT_10026ad4,0);
    FUN_10008fd6(DAT_10026d04,0x200,local_118,0x100,local_318,0x100,DAT_10026ad4,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10026c00 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_100086c4;
        }
        (&DAT_10026b00)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10026c00 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_100086c4:
        (&DAT_10026b00)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10026c00 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1000870e;
        }
        (&DAT_10026b00)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10026c00 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1000870e:
        (&DAT_10026b00)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_1000873d @ 0x1000873d

void FUN_1000873d(void)

{
  if (DAT_10027e68 == 0) {
    FUN_10008365(-3);
    DAT_10027e68 = 1;
  }
  return;
}



// Function: FUN_10008759 @ 0x10008759

void __thiscall FUN_10008759(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10008770(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_10008770 @ 0x10008770

void * __thiscall FUN_10008770(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1000f6f8 < 2) {
      uVar3 = (byte)PTR_DAT_1000f704[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000f704;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_100051e0(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_100087cb:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_100087cb;
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
      goto LAB_10008835;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10008835;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10008835:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000f6f8 < 2) {
      uVar5 = (byte)PTR_DAT_1000f704[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_100051e0(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000f6f8 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000f704 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_100051e0(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_100088e1:
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
          pDVar6 = FUN_10009d04();
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
      uVar3 = FUN_1000a010((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_100088e1;
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



// Function: _strchr @ 0x10008990

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



// Function: _strstr @ 0x10008a50

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
LAB_10008ac3:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10008ac3;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x10008ad0

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



// Function: FUN_10008b10 @ 0x10008b10

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10008b10(void)

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



// Function: FUN_10008b3f @ 0x10008b3f

int __cdecl FUN_10008b3f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100269b0 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100269b0 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100269b0 != (FARPROC)0x0) {
        DAT_100269b4 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100269b8 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10008b8e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10008b8e:
    if (DAT_100269b4 != (FARPROC)0x0) {
      iVar1 = (*DAT_100269b4)();
      if ((iVar1 != 0) && (DAT_100269b8 != (FARPROC)0x0)) {
        iVar1 = (*DAT_100269b8)(iVar1);
      }
    }
    iVar1 = (*DAT_100269b0)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10008bd0

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
        goto joined_r0x10008c0e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10008c4b;
        goto LAB_10008cb9;
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
joined_r0x10008cb5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10008cb9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10008c4b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10008cb5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10008cb5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10008cb5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10008c0e:
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
LAB_10008c4b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10008cce @ 0x10008cce

undefined4 __cdecl FUN_10008cce(DWORD *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  DWORD local_10;
  DWORD local_c;
  
  bVar1 = false;
  if (param_1 == (DWORD *)0x2) {
    puVar7 = &DAT_100269bc;
    pcVar6 = DAT_100269bc;
LAB_10008d54:
    bVar1 = true;
    FUN_10005ff6(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_100269c8;
        pcVar6 = DAT_100269c8;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_100269c0;
        pcVar6 = DAT_100269c0;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_100269c4;
        pcVar6 = DAT_100269c4;
      }
      goto LAB_10008d54;
    }
    pDVar2 = FUN_10003dee();
    uVar3 = FUN_10008e50((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_10006057(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_10006057(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)0x8) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_10008dc8;
    }
  }
  else {
LAB_10008dc8:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_1000fa78 < DAT_1000fa7c + DAT_1000fa78) {
        iVar4 = DAT_1000fa78 * 0xc;
        iVar5 = DAT_1000fa78;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_1000fa7c + DAT_1000fa78);
      }
      goto LAB_10008e06;
    }
  }
  *puVar7 = 0;
LAB_10008e06:
  if (bVar1) {
    FUN_10006057(1);
  }
  if (param_1 == (DWORD *)0x8) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)0x8) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}



// Function: FUN_10008e50 @ 0x10008e50

uint __cdecl FUN_10008e50(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_1000fa84 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_1000fa84 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_10008e8d @ 0x10008e8d

BOOL __cdecl
FUN_10008e8d(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000d6c0;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_100269d0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_100269d0 == 0) {
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
  DAT_100269d0 = iVar3;
  if (DAT_100269d0 != 2) {
    if (DAT_100269d0 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_100269f8;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10008b10();
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
    param_6 = DAT_100269e8;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10008fd6 @ 0x10008fd6

int __cdecl
FUN_10008fd6(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000d6d0;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10026a00 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10026a00 = 2;
    }
    else {
      DAT_10026a00 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000aabe(param_3,param_4);
  }
  if (DAT_10026a00 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10026a00 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100269f8;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10008b10();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10008b10();
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



// Function: FUN_100091fa @ 0x100091fa

undefined4 __cdecl FUN_100091fa(uint param_1,uint param_2,uint *param_3)

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



// Function: ___add_12 @ 0x1000921b

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100091fa(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_100091fa(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_100091fa(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_100091fa(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: FUN_10009279 @ 0x10009279

void __cdecl FUN_10009279(uint *param_1)

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



// Function: FUN_100092a7 @ 0x100092a7

void __cdecl FUN_100092a7(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Function: FUN_100092d4 @ 0x100092d4

void __cdecl FUN_100092d4(char *param_1,int param_2,uint *param_3)

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
      FUN_10009279(puVar1);
      FUN_10009279(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_10009279(puVar1);
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
    FUN_10009279(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// Function: FUN_1000939b @ 0x1000939b

undefined4 __thiscall
FUN_1000939b(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_100093f2:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1000940f:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_10009634;
    }
    if (bVar6 == DAT_1000f6fc) goto LAB_1000941e;
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
      if (bVar6 != 0x30) goto LAB_1000970e;
    }
    goto LAB_100093f2;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1000940f;
    iVar9 = iVar1;
    if (bVar6 != DAT_1000f6fc) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_100094a3;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1000947c;
    }
    goto LAB_100093f2;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1000940f;
    if (bVar6 == DAT_1000f6fc) {
LAB_1000941e:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_10009713;
    }
    goto LAB_100093f2;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_1000f6f8 < 2) {
        uVar3 = (byte)PTR_DAT_1000f704[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1000f704;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_100051e0(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_1000f6fc) goto LAB_10009590;
    goto LAB_100093f2;
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
      if (DAT_1000f6f8 < 2) {
        uVar3 = (byte)PTR_DAT_1000f704[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1000f704;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_100051e0(this,(uint)bVar6,4);
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
LAB_10009590:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_100094a3:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1000947c:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1000970e;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_100093f2;
  case 5:
    local_28 = iVar5;
    if (DAT_1000f6f8 < 2) {
      uVar3 = (byte)PTR_DAT_1000f704[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1000f704;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_100051e0(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_10009634;
    goto LAB_10009713;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_10009669;
      if (bVar6 == 0x2d) goto LAB_1000965d;
      if (bVar6 != 0x30) goto LAB_10009713;
LAB_10009602:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_100093f2;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_10009602;
      goto LAB_10009713;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1000970e;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_10009694;
  default:
    goto switchD_100093fe_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_10009669:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_10009713;
LAB_1000965d:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_100093f2;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_100093fe_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_100093f2;
    goto LAB_10009713;
  }
  iVar9 = 9;
LAB_10009634:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_100093f2;
LAB_10009694:
  if (DAT_1000f6f8 < 2) {
    uVar3 = (byte)PTR_DAT_1000f704[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_1000f704;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_100051e0(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_100096de;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_100096d6;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_10009694;
LAB_100096d6:
  pbVar7 = (byte *)0x1451;
LAB_100096de:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_1000f6f8 < 2) {
      uVar3 = (byte)PTR_DAT_1000f704[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1000f704;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_100051e0(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1000970e:
  pbVar7 = pbVar8 + -1;
LAB_10009713:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_10009821;
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
    FUN_100092d4(local_60,local_8,(uint *)&local_44);
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
        FUN_1000a3ea((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_100097a6;
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
LAB_100097a6:
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
LAB_10009821:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// Function: FUN_1000986c @ 0x1000986c

undefined4 __cdecl
FUN_1000986c(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_10009961;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_10009961:
            pcVar11 = "1#QNAN";
            goto LAB_10009966;
          }
          pcVar11 = "1#IND";
        }
        FUN_10005910((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_10009966:
        FUN_10005910((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1000a3ea((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000a1ca((int *)&local_14,(int *)&local_20);
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
        FUN_10009279((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_100092a7((uint *)&local_14);
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
          FUN_10009279((uint *)&local_14);
          FUN_10009279((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_10009279((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_10009abe;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_10009abe:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_10009ac0:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_10009ac0;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_10009af6;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_10009af6:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// Function: FUN_10009aff @ 0x10009aff

int __thiscall FUN_10009aff(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_1000f6f8 < 2) {
      uVar1 = (byte)PTR_DAT_1000f704[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_1000f704;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_100051e0(this,(uint)*param_1,8);
      this = puVar6;
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_1000f6f8 < 2) {
      uVar2 = (byte)PTR_DAT_1000f704[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_100051e0(this,uVar4,4);
      this = puVar6;
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



// Function: _strcmp @ 0x10009b90

/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_10009bd4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10009ba0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10009bd4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10009bd4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10009ba0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_10009bd4:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_10009c14 @ 0x10009c14

int __cdecl FUN_10009c14(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_10027e64 != 0) &&
      ((DAT_1002674c != (int *)0x0 ||
       (((DAT_10026754 != 0 && (iVar1 = FUN_1000a4e3(), iVar1 == 0)) && (DAT_1002674c != (int *)0x0)
        ))))) && (piVar3 = DAT_1002674c, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar3 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}



// Function: FUN_10009c91 @ 0x10009c91

void __cdecl FUN_10009c91(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10009d0d();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10012070;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10009d04();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10012074);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x100121d8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10009d04();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10009d04();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10009d04();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_10009d04 @ 0x10009d04

DWORD * FUN_10009d04(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10003dee();
  return pDVar1 + 2;
}



// Function: FUN_10009d0d @ 0x10009d0d

DWORD * FUN_10009d0d(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10003dee();
  return pDVar1 + 3;
}



// Function: FUN_10009d16 @ 0x10009d16

undefined4 __cdecl FUN_10009d16(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10027e60) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10027d60)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10026728 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10009d72;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10009d72:
      *(undefined4 *)((&DAT_10027d60)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10009d04();
  *pDVar2 = 9;
  pDVar2 = FUN_10009d0d();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10009d95 @ 0x10009d95

undefined4 __cdecl FUN_10009d95(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10027e60) &&
     ((*(byte *)((&DAT_10027d60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10027d60)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10009d04();
  *pDVar1 = 9;
  pDVar1 = FUN_10009d0d();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_10009dd7 @ 0x10009dd7

void __cdecl FUN_10009dd7(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10027d60)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10005ff6(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10006057(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10027d60)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_10009e36 @ 0x10009e36

void __cdecl FUN_10009e36(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10027d60)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_10009ed9 @ 0x10009ed9

int __cdecl FUN_10009ed9(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009f07(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000a5ce(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_10009f07 @ 0x10009f07

undefined4 __cdecl FUN_10009f07(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10007f30(param_1[4],(char *)param_1[2],uVar3);
      if (uVar1 == uVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}



// Function: FUN_10009f6c @ 0x10009f6c

int __cdecl FUN_10009f6c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10005ff6(2);
  iVar4 = 0;
  if (0 < DAT_10027d20) {
    do {
      iVar2 = *(int *)(DAT_10026d08 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1000820b(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10026d08 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10009ed9(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10009ed9(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_1000825d(iVar4,*(int *)(DAT_10026d08 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10027d20);
  }
  FUN_10006057(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_1000a010 @ 0x1000a010

uint __cdecl FUN_1000a010(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100269e8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10026ad0);
    bVar1 = DAT_10026acc != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10026ad0);
      this = (void *)0x13;
      FUN_10005ff6(0x13);
    }
    param_1 = FUN_1000a07f(this,param_1);
    if (bVar1) {
      FUN_10006057(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10026ad0);
    }
  }
  return param_1;
}



// Function: FUN_1000a07f @ 0x1000a07f

uint __thiscall FUN_1000a07f(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100269e8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000f6f8 < 2) {
        uVar2 = (byte)PTR_DAT_1000f704[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_100051e0(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000f704[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10008fd6(DAT_100269e8,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_1000a150 @ 0x1000a150

int __cdecl FUN_1000a150(byte *param_1,byte *param_2)

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



// Function: FUN_1000a190 @ 0x1000a190

byte * __cdecl FUN_1000a190(byte *param_1,byte *param_2)

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



// Function: FUN_1000a1ca @ 0x1000a1ca

void __cdecl FUN_1000a1ca(int *param_1,int *param_2)

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
LAB_1000a26d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000a26d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_100091fa(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_1000a321:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_100092a7((uint *)&local_28);
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
          FUN_10009279((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000a321;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1000a3ca;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000a3ca:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// Function: FUN_1000a3ea @ 0x1000a3ea

void __cdecl FUN_1000a3ea(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_10012280;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x100123e0;
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
        FUN_1000a1ca(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



// Function: __mbsnbicoll @ 0x1000a4a4

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_1000a841(DAT_10026d04,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_10026ad4);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



// Function: FUN_1000a4e3 @ 0x1000a4e3

undefined4 FUN_1000a4e3(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_10026754;
  puVar2 = DAT_10026754;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_1000aae9(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_1000a551 @ 0x1000a551

undefined4 __cdecl FUN_1000a551(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_100081dc((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_1000822e((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



// Function: __fclose_lk @ 0x1000a582

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10009f07((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_1000ad2f(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_1000606c(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



// Function: FUN_1000a5ce @ 0x1000a5ce

undefined4 __cdecl FUN_1000a5ce(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10027e60 <= param_1) {
LAB_1000a64f:
    pDVar3 = FUN_10009d04();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10027d60)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000a64f;
  FUN_10009dd7(param_1);
  if ((*(byte *)((&DAT_10027d60)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10009d95(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000a644;
    pDVar3 = FUN_10009d0d();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10009d04();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000a644:
  FUN_10009e36(param_1);
  return uVar5;
}



// Function: FUN_1000a670 @ 0x1000a670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000a670(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_10026ad0;
  if (DAT_100269e8 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000a6be;
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
LAB_1000a6be:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10026ad0 = _DAT_10026ad0 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10026acc;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10026ad0 = iVar2;
      FUN_10005ff6(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000a71f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_100052c4(this,uVar8);
      uVar7 = FUN_100052c4(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000a71f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10026ad0 = _DAT_10026ad0 + -1;
      UNLOCK();
    }
    else {
      FUN_10006057(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_1000a740 @ 0x1000a740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000a740(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_10026ad0;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_100269e8 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000a79f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000a79f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10026ad0 = _DAT_10026ad0 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10026acc;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10026ad0 = iVar2;
        FUN_10005ff6(0x13);
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
        uVar7 = FUN_100052c4(param_3,uVar7);
        uVar5 = FUN_100052c4(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000a815;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000a815:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10026ad0 = _DAT_10026ad0 + -1;
        UNLOCK();
      }
      else {
        FUN_10006057(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_1000a841 @ 0x1000a841

int __cdecl
FUN_1000a841(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
            UINT param_7)

{
  undefined1 *puVar1;
  int iVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  int iVar5;
  _cpinfo local_40;
  undefined1 *local_2c;
  PCNZWCH local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000d830;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_10026a78 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10026a78 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10026a78 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_1000aabe((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_1000aabe((char *)param_5,param_6);
  }
  if (DAT_10026a78 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_10026a78 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100269f8;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_4 == param_6) {
        ExceptionList = local_14;
        return 2;
      }
      if (1 < param_6) {
        ExceptionList = local_14;
        return 1;
      }
      if (1 < param_4) {
        ExceptionList = local_14;
        return 3;
      }
      BVar3 = GetCPInfo(param_7,&local_40);
      if (BVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      if (0 < param_4) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 3;
        }
        pBVar4 = local_40.LeadByte;
        while( true ) {
          if (local_40.LeadByte[0] == 0) {
            ExceptionList = local_14;
            return 3;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_3) && (*param_3 <= pBVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          local_40.LeadByte[0] = *pBVar4;
        }
        ExceptionList = local_14;
        return 3;
      }
      if (0 < param_6) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 1;
        }
        pBVar4 = local_40.LeadByte;
        while( true ) {
          if (local_40.LeadByte[0] == 0) {
            ExceptionList = local_14;
            return 1;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_5) && (*param_5 <= pBVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          local_40.LeadByte[0] = *pBVar4;
        }
        ExceptionList = local_14;
        return 1;
      }
    }
    local_20 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    if (local_20 != 0) {
      local_8 = 0;
      FUN_10008b10();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_10008b10();
          local_8 = 0xffffffff;
          if ((&stack0x00000000 != (undefined1 *)0x50) &&
             (local_2c = &stack0xffffffb0, local_1c = &stack0xffffffb0,
             iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,(LPWSTR)&stack0xffffffb0,
                                         iVar2), iVar5 != 0)) {
            iVar2 = CompareStringW(param_1,param_2,local_28,local_20,(PCNZWCH)&stack0xffffffb0,iVar2
                                  );
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



// Function: FUN_1000aabe @ 0x1000aabe

int __cdecl FUN_1000aabe(char *param_1,int param_2)

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



// Function: FUN_1000aae9 @ 0x1000aae9

undefined4 __cdecl FUN_1000aae9(uint *param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  size_t sVar5;
  uint *lpName;
  byte *pbVar6;
  bool bVar7;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar2 = (uint *)FUN_1000ae3a((byte *)param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar7 = *(byte *)((int)puVar2 + 1) == 0;
  if (DAT_1002674c == DAT_10026750) {
    DAT_1002674c = (byte *)FUN_1000acc8((int *)DAT_1002674c);
  }
  if (DAT_1002674c == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_10026754 == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_1002674c = _malloc(4);
      if (DAT_1002674c == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_1002674c + 1;
      pbVar6 = DAT_1002674c + 2;
      pbVar1 = DAT_1002674c + 3;
      DAT_1002674c[0] = 0;
      *pbVar4 = 0;
      *pbVar6 = 0;
      *pbVar1 = 0;
      if (DAT_10026754 == (undefined4 *)0x0) {
        DAT_10026754 = _malloc(4);
        if (DAT_10026754 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_10026754 = 0;
      }
    }
    else {
      iVar3 = FUN_1000a4e3();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_1002674c;
  iVar3 = FUN_1000ac70((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_100040d5(pbVar4,(uint *)(iVar3 * 4 + 8));
    if (pbVar4 == (byte *)0x0) {
      return 0xffffffff;
    }
    *(uint **)(pbVar4 + iVar3 * 4) = param_1;
    pbVar6 = pbVar4 + iVar3 * 4 + 4;
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
  }
  else {
    if (!bVar7) {
      *(uint **)(pbVar4 + iVar3 * 4) = param_1;
      goto LAB_1000ac1d;
    }
    pbVar6 = pbVar4 + iVar3 * 4;
    FUN_1000606c(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar6 != 0; pbVar6 = pbVar6 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar6 = *(int *)(pbVar6 + 4);
    }
    pbVar4 = FUN_100040d5(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_1000ac1d;
  }
  DAT_1002674c = pbVar4;
LAB_1000ac1d:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_10005910(lpName,param_1);
      pbVar4 = (byte *)(((int)lpName - (int)param_1) + (int)puVar2);
      *pbVar4 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(pbVar4 + 1)));
      FUN_1000606c((undefined *)lpName);
    }
  }
  return 0;
}



// Function: FUN_1000ac70 @ 0x1000ac70

int __cdecl FUN_1000ac70(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_1002674c;
  piVar2 = DAT_1002674c;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_1002674c >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_1002674c >> 2;
}



// Function: FUN_1000acc8 @ 0x1000acc8

undefined4 * __cdecl FUN_1000acc8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = _malloc(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    puVar4 = (uint *)*param_1;
    puVar6 = puVar3;
    while (puVar4 != (uint *)0x0) {
      param_1 = param_1 + 1;
      puVar4 = FUN_1000aed1(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



// Function: FUN_1000ad2f @ 0x1000ad2f

undefined4 __cdecl FUN_1000ad2f(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10027e60) &&
     ((*(byte *)((&DAT_10027d60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009dd7(param_1);
    uVar1 = FUN_1000ad8c(param_1);
    FUN_10009e36(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10009d04();
  *pDVar2 = 9;
  pDVar2 = FUN_10009d0d();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_1000ad8c @ 0x1000ad8c

undefined4 __cdecl FUN_1000ad8c(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10009d95(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10009d95(2);
      iVar2 = FUN_10009d95(1);
      if (iVar2 == iVar1) goto LAB_1000adda;
    }
    hObject = (HANDLE)FUN_10009d95(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000addc;
    }
  }
LAB_1000adda:
  DVar4 = 0;
LAB_1000addc:
  FUN_10009d16(param_1);
  *(undefined1 *)((&DAT_10027d60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10009c91(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: __freebuf @ 0x1000ae0f

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_1000606c(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Function: FUN_1000ae3a @ 0x1000ae3a

byte * __cdecl FUN_1000ae3a(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (DAT_10026aec == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_10005ff6(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_10026c00 + uVar3 + 1) & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_10006057(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_10006057(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2 + 1;
    }
    FUN_10006057(0x19);
    pbVar2 = (byte *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return pbVar2;
}



// Function: FUN_1000aed1 @ 0x1000aed1

uint * __cdecl FUN_1000aed1(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10005910(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}



// Function: FUN_1000aefc @ 0x1000aefc

int * FUN_1000aefc(void)

{
  undefined4 *puVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000bcf4();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    *extraout_ECX = (int)&DAT_1000d858;
    extraout_ECX[3] = (int)&DAT_1000d850;
    FUN_1000afd0(extraout_ECX + 5);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  puVar1 = operator_new(0x54);
  *(undefined4 **)(unaff_EBP + 8) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1000b1b0(puVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_1000b0ee();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000d84c;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  return extraout_ECX;
}



// Function: FUN_1000afbd @ 0x1000afbd

void __fastcall FUN_1000afbd(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x14) + 4) + -0x14 + param_1) = &PTR_LAB_1000d84c;
  FUN_1000b163();
  return;
}



// Function: FUN_1000afd0 @ 0x1000afd0

undefined4 * __fastcall FUN_1000afd0(undefined4 *param_1)

{
  int iVar1;
  
  param_1[0xd] = 0xffffffff;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_1000d870;
  param_1[2] = 4;
  param_1[10] = 6;
  *(undefined1 *)(param_1 + 0xb) = 0x20;
  FUN_1000b556((LPCRITICAL_SECTION)(param_1 + 0xe));
  iVar1 = DAT_10026ac0;
  DAT_10026ac0 = DAT_10026ac0 + 1;
  if (iVar1 == 0) {
    FUN_1000b556((LPCRITICAL_SECTION)&DAT_10026a88);
  }
  return param_1;
}



// Function: FUN_1000b02e @ 0x1000b02e

undefined4 * __thiscall FUN_1000b02e(void *this,byte param_1)

{
  FUN_1000b04a(this);
  if ((param_1 & 1) != 0) {
    FUN_1000b9a8(this);
  }
  return this;
}



// Function: FUN_1000b04a @ 0x1000b04a

void __fastcall FUN_1000b04a(undefined4 *param_1)

{
  param_1[0xd] = 0xffffffff;
  *param_1 = &PTR_FUN_1000d870;
  DAT_10026ac0 = DAT_10026ac0 + -1;
  if (DAT_10026ac0 == 0) {
    FUN_1000b561((LPCRITICAL_SECTION)&DAT_10026a88);
  }
  FUN_1000b561((LPCRITICAL_SECTION)(param_1 + 0xe));
  if ((param_1[7] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  param_1[2] = 4;
  return;
}



// Function: FUN_1000b094 @ 0x1000b094

void __thiscall FUN_1000b094(void *this,int param_1)

{
  if ((*(int *)((int)this + 0x1c) != 0) && (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
  }
  *(int *)((int)this + 4) = param_1;
  if (param_1 == 0) {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 4;
  }
  else {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xfffffffb;
  }
  return;
}



// Function: FUN_1000b0ee @ 0x1000b0ee

int * FUN_1000b0ee(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000bcf4();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000d884;
    extraout_ECX[3] = (int)&DAT_1000d87c;
    FUN_1000afd0(extraout_ECX + 5);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  FUN_1000b5ad();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_1000b682();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000d878;
  return extraout_ECX;
}



// Function: FUN_1000b163 @ 0x1000b163

void FUN_1000b163(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_1000bcf4();
  iVar1 = *(int *)(extraout_ECX + -0x14);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0x14 + extraout_ECX) = &PTR_LAB_1000d878;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1000b6e7((-(uint)(extraout_ECX != 0x14) & extraout_ECX - 8U) + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1000b623(extraout_ECX - 8U);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// Function: FUN_1000b1b0 @ 0x1000b1b0

undefined4 * __fastcall FUN_1000b1b0(undefined4 *param_1)

{
  FUN_1000b6f6(param_1);
  param_1[0x14] = 0;
  param_1[0x13] = 0xffffffff;
  *param_1 = &PTR_FUN_1000d8a8;
  return param_1;
}



// Function: FUN_1000b1ca @ 0x1000b1ca

undefined * __thiscall FUN_1000b1ca(void *this,byte param_1)

{
  FUN_1000b1e6();
  if ((param_1 & 1) != 0) {
    FUN_1000b9a8(this);
  }
  return this;
}



// Function: FUN_1000b1e6 @ 0x1000b1e6

void FUN_1000b1e6(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000bcf4();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = (int)&PTR_FUN_1000d8a8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[0xc] < 0) {
    FUN_1000b56c((LPCRITICAL_SECTION)(extraout_ECX + 0xd));
  }
  if (extraout_ECX[0x14] == 0) {
    FUN_1000b417((int)extraout_ECX);
  }
  else {
    FUN_1000b23d(extraout_ECX);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1000b751(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// Function: FUN_1000b23d @ 0x1000b23d

int * __fastcall FUN_1000b23d(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x13] != -1) {
    if (param_1[0xc] < 0) {
      FUN_1000b56c((LPCRITICAL_SECTION)(param_1 + 0xd));
    }
    iVar1 = (**(code **)(*param_1 + 4))();
    iVar2 = FUN_1000ad2f(param_1[0x13]);
    if ((iVar2 != -1) && (iVar1 != -1)) {
      param_1[0x13] = -1;
      if (-1 < param_1[0xc]) {
        return param_1;
      }
      FUN_1000b577((LPCRITICAL_SECTION)(param_1 + 0xd));
      return param_1;
    }
    if (param_1[0xc] < 0) {
      FUN_1000b577((LPCRITICAL_SECTION)(param_1 + 0xd));
    }
  }
  return (int *)0x0;
}



// Function: FUN_1000b2a0 @ 0x1000b2a0

undefined4 __thiscall FUN_1000b2a0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000b8b9(this);
  if ((iVar1 != -1) && (iVar1 = FUN_1000b417((int)this), iVar1 != -1)) {
    if (*(int *)((int)this + 8) == 0) {
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x14);
    }
    if (param_1 != 0xffffffff) {
      if ((*(int *)((int)this + 8) == 0) &&
         (*(uint *)((int)this + 0x1c) < *(uint *)((int)this + 0x20))) {
        FUN_1000b311(this,param_1);
      }
      else {
        iVar1 = FUN_10007f30(*(uint *)((int)this + 0x4c),(char *)&param_1,1);
        if (iVar1 != 1) {
          return 0xffffffff;
        }
      }
    }
    return 1;
  }
  return 0xffffffff;
}



// Function: FUN_1000b311 @ 0x1000b311

uint __thiscall FUN_1000b311(void *this,uint param_1)

{
  uint uVar1;
  
  if (*(undefined1 **)((int)this + 0x1c) < *(undefined1 **)((int)this + 0x20)) {
    **(undefined1 **)((int)this + 0x1c) = (undefined1)param_1;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
    uVar1 = param_1 & 0xff;
  }
  else {
    uVar1 = (**(code **)(*(int *)this + 0x1c))(param_1);
  }
  return uVar1;
}



// Function: FUN_1000b333 @ 0x1000b333

uint __fastcall FUN_1000b333(int *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  iVar3 = FUN_1000b3c3((int)param_1);
  if (iVar3 != 0) {
    return (uint)*(byte *)param_1[10];
  }
  iVar3 = FUN_1000b8b9(param_1);
  if ((iVar3 != -1) && (iVar3 = FUN_1000b417((int)param_1), iVar3 != -1)) {
    if (param_1[2] == 0) {
      pcVar1 = (char *)param_1[4];
      if (pcVar1 < (char *)param_1[5]) {
        pcVar4 = (char *)param_1[5] + -(int)pcVar1;
      }
      else {
        pcVar4 = (char *)0x0;
      }
      iVar3 = FUN_1000bd13(param_1[0x13],pcVar1,pcVar4);
      if (0 < iVar3) {
        pbVar2 = (byte *)param_1[4];
        param_1[3] = -1;
        param_1[9] = (int)pbVar2;
        param_1[10] = (int)pbVar2;
        param_1[0xb] = (int)(pbVar2 + iVar3);
        return (uint)*pbVar2;
      }
    }
    else {
      iVar3 = FUN_1000bd13(param_1[0x13],(char *)((int)&uStack_8 + 3),(char *)0x1);
      if (0 < iVar3) {
        return (uint)uStack_8 >> 0x18;
      }
    }
  }
  return 0xffffffff;
}



// Function: FUN_1000b3c3 @ 0x1000b3c3

int __fastcall FUN_1000b3c3(int param_1)

{
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
    return *(uint *)(param_1 + 0x2c) - *(uint *)(param_1 + 0x28);
  }
  return 0;
}



// Function: FUN_1000b417 @ 0x1000b417

undefined4 __fastcall FUN_1000b417(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint uVar6;
  
  if (*(uint *)(param_1 + 0x4c) == 0xffffffff) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 8) == 0) {
    pcVar5 = *(char **)(param_1 + 0x18);
    if (*(char **)(param_1 + 0x1c) < pcVar5) {
      uVar6 = 0;
    }
    else {
      uVar6 = (int)*(char **)(param_1 + 0x1c) - (int)pcVar5;
    }
    if ((uVar6 != 0) &&
       (uVar2 = FUN_10007f30(*(uint *)(param_1 + 0x4c),pcVar5,uVar6), uVar2 != uVar6)) {
      if (0 < (int)uVar2) {
        if (*(int *)(param_1 + 0x20) != 0) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar2;
        }
        FUN_10005a60(*(undefined4 **)(param_1 + 0x18),
                     (undefined4 *)(uVar2 + (int)*(undefined4 **)(param_1 + 0x18)),uVar6 - uVar2);
      }
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar3 = FUN_1000b3c3(param_1);
    if (0 < iVar3) {
      uVar6 = *(uint *)(param_1 + 0x4c);
      bVar1 = *(byte *)((&DAT_10027d60)[(int)uVar6 >> 5] + 4 + (uVar6 & 0x1f) * 0x24);
      if ((bVar1 & 0x80) != 0) {
        for (pcVar5 = *(char **)(param_1 + 0x28); pcVar5 < *(char **)(param_1 + 0x2c);
            pcVar5 = pcVar5 + 1) {
          if (*pcVar5 == '\n') {
            iVar3 = iVar3 + 1;
          }
        }
        if ((bVar1 & 2) != 0) {
          iVar3 = iVar3 + 1;
        }
      }
      DVar4 = FUN_10007e58(uVar6,-iVar3,1);
      if (DVar4 == 0xffffffff) {
        return 0xffffffff;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return 0;
}



// Function: FUN_1000b4f2 @ 0x1000b4f2

void * __thiscall FUN_1000b4f2(void *this,int param_1,int param_2)

{
  if ((*(int *)((int)this + 0x4c) == -1) || (*(int *)((int)this + 0x14) == 0)) {
    if ((param_1 == 0) || (param_2 < 1)) {
      *(undefined4 *)((int)this + 8) = 1;
    }
    else {
      if (*(int *)((int)this + 0x30) < 0) {
        FUN_1000b56c((LPCRITICAL_SECTION)((int)this + 0x34));
      }
      FUN_1000b904(this,param_1,param_1 + param_2,0);
      if (*(int *)((int)this + 0x30) < 0) {
        FUN_1000b577((LPCRITICAL_SECTION)((int)this + 0x34));
      }
    }
  }
  else {
    this = (void *)0x0;
  }
  return this;
}



// Function: FUN_1000b556 @ 0x1000b556

void __cdecl FUN_1000b556(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return;
}



// Function: FUN_1000b561 @ 0x1000b561

void __cdecl FUN_1000b561(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}



// Function: FUN_1000b56c @ 0x1000b56c

void __cdecl FUN_1000b56c(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}



// Function: FUN_1000b577 @ 0x1000b577

void __cdecl FUN_1000b577(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}



// Function: FUN_1000b5ad @ 0x1000b5ad

int * FUN_1000b5ad(void)

{
  uint *puVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000bcf4();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000d8dc;
    FUN_1000afd0(extraout_ECX + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000d8d8;
  FUN_1000b094((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  puVar1 = (uint *)(*(int *)(*extraout_ECX + 4) + 0x24 + (int)extraout_ECX);
  *puVar1 = *puVar1 | 1;
  extraout_ECX[2] = 0;
  extraout_ECX[1] = 0;
  return extraout_ECX;
}



// Function: FUN_1000b623 @ 0x1000b623

void __fastcall FUN_1000b623(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0xc) + 4) + -0xc + param_1) = &PTR_LAB_1000d8d8;
  return;
}



// Function: FUN_1000b632 @ 0x1000b632

int __thiscall FUN_1000b632(void *this,char param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 0x24) < *(uint *)((int)this + 0x28)) {
    pcVar1 = (char *)(*(uint *)((int)this + 0x28) - 1);
    *(char **)((int)this + 0x28) = pcVar1;
    *pcVar1 = param_1;
    iVar2 = (int)param_1;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))((int)param_1);
  }
  return iVar2;
}



// Function: FUN_1000b682 @ 0x1000b682

int * FUN_1000b682(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000bcf4();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000d8ec;
    FUN_1000afd0(extraout_ECX + 2);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000d8e8;
  FUN_1000b094((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[1] = 0;
  return extraout_ECX;
}



// Function: FUN_1000b6e7 @ 0x1000b6e7

void __fastcall FUN_1000b6e7(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -8) + 4) + -8 + param_1) = &PTR_LAB_1000d8e8;
  return;
}



// Function: FUN_1000b6f6 @ 0x1000b6f6

undefined4 * __fastcall FUN_1000b6f6(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_1000d8f8;
  FUN_1000b556((LPCRITICAL_SECTION)(param_1 + 0xd));
  return param_1;
}



// Function: FUN_1000b735 @ 0x1000b735

undefined4 * __thiscall FUN_1000b735(void *this,byte param_1)

{
  FUN_1000b751(this);
  if ((param_1 & 1) != 0) {
    FUN_1000b9a8(this);
  }
  return this;
}



// Function: FUN_1000b751 @ 0x1000b751

void __fastcall FUN_1000b751(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000d8f8;
  FUN_1000b561((LPCRITICAL_SECTION)(param_1 + 0xd));
  FUN_1000b8a2((int)param_1);
  if ((param_1[1] != 0) && ((undefined *)param_1[4] != (undefined *)0x0)) {
    FUN_1000b9a8((undefined *)param_1[4]);
  }
  return;
}



// Function: FUN_1000b7b5 @ 0x1000b7b5

int __thiscall FUN_1000b7b5(void *this,undefined1 *param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  do {
    if (param_2 == 0) {
      return local_8;
    }
    param_2 = param_2 + -1;
    if ((*(int *)((int)this + 8) == 0) &&
       (*(undefined1 **)((int)this + 0x1c) < *(undefined1 **)((int)this + 0x20))) {
      **(undefined1 **)((int)this + 0x1c) = *param_1;
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
    }
    else {
      iVar1 = (**(code **)(*(int *)this + 0x1c))(*param_1);
      if (iVar1 == -1) {
        return local_8;
      }
    }
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
  } while( true );
}



// Function: FUN_1000b80b @ 0x1000b80b

int __thiscall FUN_1000b80b(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 8) == 0) {
    while ((param_2 != 0 && (iVar2 = (**(code **)(*(int *)this + 0x20))(), iVar2 != -1))) {
      uVar3 = *(int *)((int)this + 0x2c) - (int)*(undefined4 **)((int)this + 0x28);
      if ((int)param_2 <= (int)uVar3) {
        uVar3 = param_2;
      }
      if (0 < (int)uVar3) {
        FUN_10007950(param_1,*(undefined4 **)((int)this + 0x28),uVar3);
        param_1 = (undefined4 *)((int)param_1 + uVar3);
        *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar3;
        local_8 = local_8 + uVar3;
        param_2 = param_2 - uVar3;
      }
    }
  }
  else {
    if (*(int *)((int)this + 0xc) == -1) {
      uVar1 = (**(code **)(*(int *)this + 0x20))();
      *(undefined4 *)((int)this + 0xc) = uVar1;
    }
    while ((param_2 != 0 && (param_2 = param_2 - 1, *(int *)((int)this + 0xc) != -1))) {
      *(undefined1 *)param_1 = *(undefined1 *)((int)this + 0xc);
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_8 = local_8 + 1;
      uVar1 = (**(code **)(*(int *)this + 0x20))();
      *(undefined4 *)((int)this + 0xc) = uVar1;
    }
  }
  return local_8;
}



// Function: FUN_1000b8a2 @ 0x1000b8a2

undefined4 __fastcall FUN_1000b8a2(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) <= *(uint *)(param_1 + 0x28)) &&
     (*(uint *)(param_1 + 0x1c) <= *(uint *)(param_1 + 0x18))) {
    return 0;
  }
  return 0xffffffff;
}



// Function: FUN_1000b8b9 @ 0x1000b8b9

int __fastcall FUN_1000b8b9(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] == 0) && (param_1[4] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x28))();
    return (-(uint)(iVar1 != -1) & 2) - 1;
  }
  return 0;
}



// Function: FUN_1000b8d7 @ 0x1000b8d7

undefined4 __fastcall FUN_1000b8d7(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x200);
  if (pvVar1 == (void *)0x0) {
    return 0xffffffff;
  }
  FUN_1000b904(param_1,pvVar1,(int)pvVar1 + 0x200,1);
  return 1;
}



// Function: FUN_1000b904 @ 0x1000b904

void __thiscall FUN_1000b904(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(int *)((int)this + 4) != 0) && (*(undefined **)((int)this + 0x10) != (undefined *)0x0)) {
    FUN_1000b9a8(*(undefined **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}



// Function: FUN_1000b94c @ 0x1000b94c

int __thiscall FUN_1000b94c(void *this,char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)((int)this + 0x24) < *(uint *)((int)this + 0x28)) {
    iVar2 = FUN_1000b632(this,param_1);
  }
  else {
    iVar2 = 1;
    iVar3 = (**(code **)(*(int *)this + 0xc))(0xffffffff,1);
    if (iVar3 == -1) {
      iVar2 = -1;
    }
    else if ((*(int *)((int)this + 8) == 0) && (*(int *)((int)this + 0x2c) != 0)) {
      puVar1 = *(undefined4 **)((int)this + 0x28);
      FUN_10005a60((undefined4 *)((int)puVar1 + 1),puVar1,
                   (*(int *)((int)this + 0x2c) - (int)puVar1) - 1);
      **(undefined1 **)((int)this + 0x28) = (char)iVar2;
    }
  }
  return iVar2;
}



// Function: FUN_1000b9a8 @ 0x1000b9a8

void __cdecl FUN_1000b9a8(undefined *param_1)

{
  FUN_1000606c(param_1);
  return;
}



// Function: FUN_1000b9ba @ 0x1000b9ba

void __fastcall FUN_1000b9ba(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_10005ff6(0x1b);
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_1000606c((undefined *)param_1[1]);
  }
  FUN_10006057(0x1b);
  return;
}



// Function: FUN_1000b9e3 @ 0x1000b9e3

undefined4 * __thiscall FUN_1000b9e3(void *this,byte param_1)

{
  FUN_1000b9ba(this);
  if ((param_1 & 1) != 0) {
    FUN_1000b9a8(this);
  }
  return this;
}



// Function: operator_new @ 0x1000b9ff

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



// Function: FUN_1000ba0d @ 0x1000ba0d

void FUN_1000ba0d(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000ba38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000ba41 @ 0x1000ba41

void FUN_1000ba41(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000ba46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000ba48 @ 0x1000ba48

void FUN_1000ba48(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000ba4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000ba4f @ 0x1000ba4f

void FUN_1000ba4f(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000ba77,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// Function: FUN_1000ba9e @ 0x1000ba9e

undefined4 __cdecl
FUN_1000ba9e(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_1000bf5a(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



// Function: FUN_1000bad4 @ 0x1000bad4

undefined4 __cdecl
FUN_1000bad4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_1000bb28;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// Function: FUN_1000bb28 @ 0x1000bb28

void __cdecl FUN_1000bb28(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_1000bf5a(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



// Function: FUN_1000bb4d @ 0x1000bb4d

undefined4 __cdecl
FUN_1000bb4d(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_1000bc03;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x1000bbd5;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_10003dee();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// Function: FUN_1000bc03 @ 0x1000bc03

undefined4 __cdecl FUN_1000bc03(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_1000bf5a(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1000ba4f(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1000bc6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// Function: FUN_1000bc78 @ 0x1000bc78

int __cdecl FUN_1000bc78(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar5;
  uVar3 = uVar5;
  while (uVar2 = uVar4, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      FUN_1000c82d();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) &&
        (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(uint *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_1000c82d();
  }
  return iVar1 + uVar5 * 0x14;
}



// Function: FUN_1000bcf4 @ 0x1000bcf4

void FUN_1000bcf4(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}



// Function: FUN_1000bd13 @ 0x1000bd13

int __cdecl FUN_1000bd13(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10027e60) &&
     ((*(byte *)((&DAT_10027d60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009dd7(param_1);
    iVar1 = FUN_1000bd78(param_1,param_2,param_3);
    FUN_10009e36(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10009d04();
  *pDVar2 = 9;
  pDVar2 = FUN_10009d0d();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_1000bd78 @ 0x1000bd78

int __cdecl FUN_1000bd78(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  char *pcVar8;
  int iVar9;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar1 = &DAT_10027d60 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_10027d60)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_10027d60)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar9) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),pcVar8,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          pDVar7 = FUN_10009d04();
          *pDVar7 = 9;
          pDVar7 = FUN_10009d0d();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_10009c91(DVar6);
        }
        return -1;
      }
      bVar4 = *(byte *)(*piVar1 + 4 + iVar9);
      if ((bVar4 & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *(byte *)(*piVar1 + 4 + iVar9) = bVar4;
      param_3 = param_2;
      local_c = param_2 + (int)local_c + local_10;
      pcVar8 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar9);
            bVar4 = *pbVar2;
            if ((bVar4 & 0x40) == 0) {
              *pbVar2 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                param_3 = param_3 + 2;
                goto LAB_1000bf03;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_1000bf1d:
                *pcVar8 = '\r';
LAB_1000bf20:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_1000bf03:
                  *pcVar8 = '\n';
                  goto LAB_1000bf20;
                }
                FUN_10007ebd(param_1,-1,1);
                if (local_5 != '\n') goto LAB_1000bf1d;
              }
              else {
                if (local_5 == '\n') goto LAB_1000bf03;
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                *(char *)(*piVar1 + 5 + iVar9) = local_5;
              }
            }
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            param_3 = param_3 + 1;
          }
        } while (param_3 < local_c);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  return 0;
}



// Function: FUN_1000bf5a @ 0x1000bf5a

undefined4 __cdecl
FUN_1000bf5a(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_1000c82d();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_1000bff5(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_1000c2af((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// Function: FUN_1000bff5 @ 0x1000bff5

void __cdecl
FUN_1000bff5(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte *pbVar1;
  bool bVar2;
  DWORD *pDVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = local_18 & 0xffffff00;
  local_14 = *(int *)((int)param_2 + 8);
  if ((local_14 < -1) || (*(int *)(param_5 + 4) <= local_14)) {
    FUN_1000c82d();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_10003dee();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_10003dee();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_10003dee();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_1000c8e7(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_1000c82d();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_1000c17d;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_1000c82d();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_1000bc78(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_1000c6e7((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_1000c252(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1000c363(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                iVar5 = local_14;
                goto LAB_1000c15d;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_1000c15d:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_1000c17d:
  if (param_6 == '\0') {
    FUN_1000c1a8(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_1000c7cc();
  return;
}



// Function: FUN_1000c1a8 @ 0x1000c1a8

void __cdecl
FUN_1000c1a8(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_10003dee();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_1000bb4d(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_1000bc78(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1000c363(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



// Function: FUN_1000c252 @ 0x1000c252

undefined4 __cdecl FUN_1000c252(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1000c2a9:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1000c283:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1000c2a9;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1000c283;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000c2af @ 0x1000c2af

void __cdecl FUN_1000c2af(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000d930;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_1000c82d();
    }
    local_8 = 0;
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      __CallSettingFrame_12(iVar1,param_1,0x103);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000c363 @ 0x1000c363

void __cdecl
FUN_1000c363(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_1000c523((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_1000ba4f(param_10,param_1);
  FUN_1000c2af((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_1000c3de((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000ba0d(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// Function: FUN_1000c3de @ 0x1000c3de

undefined4 __cdecl
FUN_1000c3de(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000d940;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10003dee();
  FUN_10003dee();
  pDVar1 = FUN_10003dee();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10003dee();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_1000bad4(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_1000c4ab();
  ExceptionList = local_14;
  return uVar2;
}



// Function: FUN_1000c4ab @ 0x1000c4ab

void FUN_1000c4ab(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_10003dee();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_10003dee();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_1000c6e7((int)unaff_EDI);
  }
  return;
}



// Function: FUN_1000c523 @ 0x1000c523

void __cdecl FUN_1000c523(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 *puVar4;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000d958;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        bVar2 = FUN_1000c8e7(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_1000c903(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_1000c74e(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_10005a60(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_1000c8e7(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_1000c903(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_1000c91f(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_1000c74e(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_1000ba48(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_1000c74e(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1000ba41(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_1000c8e7(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_1000c903(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_10005a60(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_1000c5b1;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_1000c8e7(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_1000c903(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_1000c5b1:
      iVar3 = FUN_1000c74e(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_1000c82d();
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000c6e7 @ 0x1000c6e7

void __cdecl FUN_1000c6e7(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000d968;
  puStack_10 = &LAB_10007d80;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_1000ba41(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000c74e @ 0x1000c74e

int __cdecl FUN_1000c74e(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}



// Function: __CallSettingFrame@12 @ 0x1000c780

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}



// Function: FUN_1000c7cc @ 0x1000c7cc

void FUN_1000c7cc(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000d978;
  puStack_10 = &LAB_10007d80;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10003dee();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10003dee();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_1000c937();
  return;
}



// Function: FUN_1000c82d @ 0x1000c82d

void FUN_1000c82d(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000d990;
  puStack_10 = &LAB_10007d80;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10012670 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10012670)();
  }
  local_8 = 0xffffffff;
  FUN_1000c7cc();
  return;
}



// Function: FUN_1000c883 @ 0x1000c883

int FUN_1000c883(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_1000c7cc();
    return iVar3;
  }
  if ((DAT_10026ac8 != (FARPROC)0x0) &&
     (bVar2 = FUN_1000c91f(DAT_10026ac8), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_10026ac8)(param_1);
    return iVar3;
  }
  return 0;
}



// Function: FUN_1000c8e7 @ 0x1000c8e7

bool __cdecl FUN_1000c8e7(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_1000c903 @ 0x1000c903

bool __cdecl FUN_1000c903(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_1000c91f @ 0x1000c91f

bool __cdecl FUN_1000c91f(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



// Function: FUN_1000c937 @ 0x1000c937

void FUN_1000c937(void)

{
  FUN_10004f27(10);
  FUN_10008cce((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// Function: Unwind@1000c950 @ 0x1000c950

void Unwind_1000c950(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000b04a((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



// Function: Unwind@1000c96a @ 0x1000c96a

void Unwind_1000c96a(void)

{
  int unaff_EBP;
  
  FUN_1000b9a8(*(undefined **)(unaff_EBP + 8));
  return;
}



// Function: Unwind@1000c980 @ 0x1000c980

void Unwind_1000c980(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000b04a((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



// Function: Unwind@1000c99a @ 0x1000c99a

void Unwind_1000c99a(void)

{
  int unaff_EBP;
  
  FUN_1000b623(*(int *)(unaff_EBP + -0x14) + 0xc);
  return;
}



// Function: Unwind@1000c9b0 @ 0x1000c9b0

void Unwind_1000c9b0(void)

{
  int unaff_EBP;
  
  FUN_1000b623(*(int *)(unaff_EBP + -0x10) + -8);
  return;
}



// Function: Unwind@1000c9c8 @ 0x1000c9c8

void Unwind_1000c9c8(void)

{
  int unaff_EBP;
  
  FUN_1000b751(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



// Function: Unwind@1000c9dc @ 0x1000c9dc

void Unwind_1000c9dc(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000b04a((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc));
    return;
  }
  return;
}



// Function: Unwind@1000ca00 @ 0x1000ca00

void Unwind_1000ca00(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000b04a((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8));
    return;
  }
  return;
}




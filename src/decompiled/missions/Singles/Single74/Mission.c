// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

char __cdecl FUN_10001000(uint param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return -0x40;
  }
  iVar3 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (iVar1 < iVar3) {
    iVar1 = FUN_10003fc7(iVar1 * 0x100,iVar3);
    cVar2 = (&DAT_100136e8)[iVar1 * 2];
  }
  else {
    iVar1 = FUN_10003fc7(iVar3 * 0x100,iVar1);
    cVar2 = '@' - (&DAT_100136e8)[iVar1 * 2];
  }
  if ((int)param_1 < 0) {
    cVar2 = -0x80 - cVar2;
  }
  if ((int)param_2 < 0) {
    cVar2 = -cVar2;
  }
  return cVar2;
}



// Function: OnInit @ 0x10001210

void OnInit(void)

{
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
                    /* 0x1210  1  OnInit */
  DVar1 = FUN_1000401b((int *)0x0);
  FUN_10003fec(DVar1);
  RegisterUnitType(&DAT_10014100,s_Bashnia_sp__100103cc);
  RegisterUnitType(&DAT_10013db8,s_Bashnia_fr__100103c0);
  RegisterUnitType(&DAT_100140b0,s_WALL_EV_sp__100103b4);
  RegisterUnitType(&DAT_10023730,s_WALL_EV_fr__100103a8);
  EnableUnit((undefined1)DAT_10013d08,&DAT_10014100,0);
  EnableUnit((undefined1)DAT_10013d08,&DAT_10013db8,0);
  EnableUnit((undefined1)DAT_10013d08,&DAT_100140b0,0);
  EnableUnit((undefined1)DAT_10013d08,&DAT_10023730,0);
  RunTimer(4,1000);
  RegisterUnits(&DAT_10023718,s_allies_guard0_10010398);
  ClearSelection(DAT_10014108);
  SelectUnits(&DAT_10023718,0);
  SetStandGround(DAT_10014108,1);
  RegisterUpgrade(&DAT_100140c0,s_AKA25SP_10010390);
  RegisterUpgrade(&DAT_100140e0,s_AKA25FR_10010388);
  DisableUpgrade((undefined1)DAT_10013d08,&DAT_100140c0);
  DisableUpgrade((undefined1)DAT_10013d08,&DAT_100140e0);
  RegisterZone(&DAT_10013df0,s_z_eng_contact_10010378);
  RegisterZone(&DAT_100140f8,s_z_eng_count_1001036c);
  RegisterVar(&DAT_1002780c,4);
  RegisterVar(&DAT_10023710,8);
  RegisterDynGroup(&DAT_10023710);
  RegisterUnits(&DAT_10014098,s_fleet_10010364);
  RegisterUnits(&DAT_10013cf8,s_fleet_patrol_10010354);
  RegisterZone(&DAT_10023700,s_z_patrol_10010348);
  RegisterZone(&DAT_10023560,s_z_patrol0_1001033c);
  RegisterVar(&DAT_10023588,8);
  RegisterUnits(&DAT_100140a8,s_fleet_die_0_10010330);
  RegisterUnits(&DAT_100140b8,s_fleet_die_1_10010324);
  ClearSelection(DAT_10013de8);
  ClearSelection(DAT_100236f8 & 0xff);
  iVar2 = GetDiff(0);
  if (iVar2 < 2) {
    SelectUnits(&DAT_100140b8,1);
  }
  iVar2 = GetDiff(0);
  if (iVar2 == 0) {
    SelectUnits(&DAT_100140a8,1);
  }
  SelErase(DAT_10013de8);
  SelErase(DAT_100236f8 & 0xff);
  RegisterUnitType(&DAT_10013dc8,s_PorE_sp__10010318);
  RegisterUnitType(&DAT_10023580,s_PorE_fr__1001030c);
  RegisterUnits(&DAT_10023738,&DAT_10010304);
  SelectUnits(&DAT_10023738,0);
  SelOpenGates(DAT_10014108);
  FUN_10003ed0(&DAT_10023720,&DAT_10013d08);
  FUN_10003ed0(&DAT_10013de8,&DAT_100236f8);
  FUN_10003ed0(&DAT_10023729,&DAT_100236f8);
  FUN_10003ed0(&DAT_100140a0,&DAT_100236f8);
  FUN_10003f30(&DAT_10014108);
  FUN_10003f00(&DAT_10014108,&DAT_100236f8);
  RegisterZone(&DAT_10013dc0,s_z_king_100102fc);
  RegisterZone(&DAT_10013de0,s_z_france_100102f0);
  RegisterZone(&DAT_10013d00,s_z_spn_100102e8);
  RegisterZone(&DAT_100140e8,s_z_mine0_100102e0);
  RegisterZone(&DAT_100140f0,s_z_mine1_100102d8);
  RegisterZone(&DAT_100140c8,s_z_mine2_100102d0);
  RegisterZone(&DAT_100140d0,s_z_mine3_100102c8);
  RegisterZone(&DAT_10023558,s_z_stone0_100102bc);
  RegisterZone(&DAT_10023550,s_z_stone1_100102b0);
  RegisterZone(&DAT_10023548,s_z_stone2_100102a4);
  RegisterZone(&DAT_10023540,s_z_stone3_10010298);
  RegisterZone(&DAT_10013dd8,s_z_forest0_1001028c);
  RegisterZone(&DAT_10013dd0,s_z_forest1_10010280);
  RegisterUnitType(&DAT_10023ae8,s_Kazarma_1_SP_sp__1001026c);
  RegisterUnits(&DAT_100277e8,s_band0_build_10010260);
  RegisterUnits(&DAT_10023708,s_band1_build_10010254);
  RegisterUnits(&DAT_10023538,s_band2_build_10010248);
  RegisterVar(&DAT_10023590,0x74);
  RegisterVar(&DAT_10023608,0x74);
  RegisterVar(&DAT_10023680,0x74);
  FUN_10002860(&DAT_10023590,DAT_100236f8,s_band0_barrack_10010238,0,100);
  uVar4 = 200;
  iVar2 = GetDiff(0);
  FUN_10002990(&DAT_10023590,s_Pehota_turki_DIP_fr__10010220,(4 - iVar2) * 0x4b,uVar4);
  uVar4 = 0xaa;
  iVar2 = GetDiff(0);
  FUN_100029c0(&DAT_10023590,s_Strelec_Algir_DIP_fr__10010208,(4 - iVar2) * 0x32,uVar4);
  iVar2 = GetDiff(0);
  FUN_10002960(&DAT_10023590,iVar2 + 6);
  FUN_10002970(&DAT_10023590,2);
  FUN_10002980(&DAT_10023590,5000);
  FUN_10002860(&DAT_10023608,5,s_band1_barrack_100101f8,0,100);
  uVar4 = 200;
  iVar2 = GetDiff(0);
  FUN_10002990(&DAT_10023608,s_Rundashir_Avstria_DIP_sp__100101dc,(4 - iVar2) * 0x4b,uVar4);
  uVar4 = 0xaa;
  iVar2 = GetDiff(0);
  FUN_100029c0(&DAT_10023608,s_Strelec_Algir_DIP_sp__100101c4,(4 - iVar2) * 0x32,uVar4);
  iVar2 = GetDiff(0);
  FUN_10002960(&DAT_10023608,iVar2 + 5);
  FUN_10002970(&DAT_10023608,2);
  FUN_10002980(&DAT_10023608,5000);
  FUN_10002860(&DAT_10023680,DAT_100236f8,s_band2_barrack_100101b4,0,100);
  uVar4 = 200;
  iVar2 = GetDiff(0);
  FUN_10002990(&DAT_10023680,s_Pehota_turki_DIP_sp__1001019c,(4 - iVar2) * 0x4b,uVar4);
  uVar4 = 0xaa;
  iVar2 = GetDiff(0);
  FUN_100029c0(&DAT_10023680,s_Strelec_Algir_DIP_sp__100101c4,(4 - iVar2) * 0x32,uVar4);
  iVar2 = GetDiff(0);
  FUN_10002960(&DAT_10023680,iVar2 + 5);
  FUN_10002970(&DAT_10023680,2);
  FUN_10002980(&DAT_10023680,5000);
  FUN_10002d40();
  RegisterVar(&DAT_10023740,0x3a4);
  FUN_10003020(&DAT_10023740,s_dealer_10010194);
  FUN_10003060(&DAT_10023740,0,0,0,0x640,800,800);
  FUN_10003090(&DAT_10023740,0,800,0,0,0,0);
  FUN_10003050(&DAT_10023740,s_trip0_0_1001018c);
  FUN_10003050(&DAT_10023740,s_trip0_1_10010184);
  FUN_10003050(&DAT_10023740,s_trip0_2_1001017c);
  FUN_10003050(&DAT_10023740,s_trip0_2_0_10010170);
  FUN_10003050(&DAT_10023740,s_trip0_3_10010168);
  FUN_10003050(&DAT_10023740,s_trip0_4_10010160);
  FUN_10003050(&DAT_10023740,s_trip0_5_10010158);
  FUN_10003050(&DAT_10023740,s_trip0_6_10010150);
  FUN_10003050(&DAT_10023740,s_trip0_7_10010148);
  FUN_10003050(&DAT_10023740,s_trip0_8_10010140);
  FUN_10003050(&DAT_10023740,s_trip0_9_10010138);
  FUN_10003050(&DAT_10023740,s_trip0_10_1001012c);
  FUN_10003050(&DAT_10023740,s_trip0_11_10010120);
  FUN_10003050(&DAT_10023740,s_trip0_12_10010114);
  FUN_10003050(&DAT_10023740,s_trip0_13_10010108);
  DAT_10023568 = &DAT_10013e00;
  FUN_10002f00(&DAT_10013e00,s_Rinok_sp__100100fc);
  FUN_10003a60(DAT_10023568,0);
  DAT_100140d8 = &DAT_10014110;
  FUN_10002f00(&DAT_10014110,s_KUPEC_UN__100100f0);
  FUN_10003140(DAT_100140d8,s_Center_Spain_sp__100100dc);
  FUN_100032f0(DAT_100140d8,6);
  FUN_100032c0(DAT_100140d8,0);
  FUN_100038e0(DAT_100140d8,0,10,0,200,100,0);
  FUN_100032d0(DAT_100140d8,(undefined4 *)&DAT_10023740);
  FUN_10002ed0(DAT_100140d8,0,500,0,200,500,0);
  FUN_100035a0(DAT_100140d8,0);
  *(undefined4 *)(DAT_100140d8 + 0x185a) = 1;
  uVar3 = _rand();
  *(uint *)(DAT_100140d8 + 0x185e) = (uVar3 & 3) + 3;
  RegisterUnits(&DAT_100277f0,s_king_dipcenter_100100cc);
  RegisterUnits(&DAT_10023570,s_king_b18_100100c0);
  RegisterUnits(&DAT_100277f8,s_gren0_100100b8);
  RegisterUnits(&DAT_10027800,s_gren1_100100b0);
  RegisterVar(&DAT_1002356c,4);
  RegisterVar(&DAT_10023af0,4);
  iVar2 = GetDiff(0);
  DAT_10023af0 = 8000;
  DAT_1002356c = (iVar2 + 1) * 2000;
  SetTrigg(1,0);
  SetTrigg(2,0);
  SetTrigg(3,0);
  SetTrigg(4,0);
  SetTrigg(5,0);
  SetTrigg(6,0);
  SetTrigg(7,0);
  SetTrigg(8,0);
  return;
}



// Function: FUN_10001a50 @ 0x10001a50

void __cdecl FUN_10001a50(int param_1)

{
  if (*(int *)(&DAT_10013d7c + param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(&DAT_10013d78 + param_1 * 8);
  }
  SaveSelectedUnits(param_1,&DAT_10013d78 + param_1 * 8,0);
  ClearSelection(param_1);
  return;
}



// Function: FUN_10001a90 @ 0x10001a90

void __cdecl FUN_10001a90(int param_1)

{
  ClearSelection(param_1);
  SelectUnits(&DAT_10013d78 + param_1 * 8,0);
  return;
}



// Function: ProcessScenary @ 0x10001ac0

void ProcessScenary(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  undefined4 uVar6;
  
                    /* 0x1ac0  2  ProcessScenary */
  cVar1 = NationIsErased(DAT_10013d08 & 0xff);
  pcVar4 = ShowPage_exref;
  if (cVar1 != '\0') {
    ShowPage(s__nation_defeat_100104e8);
    LooseGame();
  }
  cVar1 = NationIsErased(DAT_10023729);
  if (((cVar1 != '\0') && (cVar1 = NationIsErased(DAT_10013de8), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(DAT_100140a0), cVar1 != '\0')) {
    ShowPage(s__nation_victory_100104d8);
    ShowVictory();
  }
  pcVar5 = Trigg_exref;
  cVar1 = Trigg(3);
  if (cVar1 != '\0') {
    FUN_10001a50(DAT_10013d08);
    SelectUnitsType(&DAT_10013dc8,DAT_10013d08 & 0xff,0);
    SaveSelectedUnits(DAT_10013d08 & 0xff,&DAT_10023710,0);
    FUN_10001a90(DAT_10013d08);
    cVar1 = Trigg(5);
    if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_10023710), iVar3 != 0)) {
      ClearSelection(DAT_10013de8);
      SelectUnits(&DAT_10014098,0);
      SelAttackGroup(DAT_10013de8,&DAT_10023710);
      UnitsCenter(&DAT_10023578,&DAT_10023710,2000);
      ClearSelection(DAT_10013de8);
      SelectUnits(&DAT_100277f8,0);
      SelectUnits(&DAT_10027800,1);
      uVar6 = 0;
      iVar3 = _rand();
      SelSendAndKill(DAT_10013de8,&DAT_10023578,iVar3,uVar6);
    }
  }
  cVar1 = Trigg(5);
  if (cVar1 == '\0') {
    iVar3 = GetReadyAmount(&DAT_10013dc8,DAT_10013d08 & 0xff);
    if (iVar3 != 0) {
      SetTrigg(5,1);
      ShowPage(s__NeedContact_100104c8);
      ShowPage(s__king_ata_port_100104b8);
      SetLightSpot(&DAT_100140f8,2,1);
      AddResource(DAT_10013de8,4,7000);
      AddResource(DAT_10013de8,5,7000);
    }
  }
  cVar1 = Trigg(6);
  if ((cVar1 == '\0') && (cVar1 = Trigg(5), cVar1 != '\0')) {
    iVar3 = GetUnitsAmount0(&DAT_10013df0,DAT_10013d08 & 0xff);
    if (iVar3 != 0) {
      SetTrigg(6,1);
      ShowPage(s__FirstContact0_100104a8);
      ShowPage(s__FirstContact1_10010498);
      ShowPage(s__FirstContact2_10010488);
      DisableMission(0x45);
      EnableMission(0x52);
      EnableMission(0x54);
      pcVar5 = Trigg_exref;
    }
  }
  cVar1 = (*pcVar5)(6);
  if (cVar1 != '\0') {
    iVar3 = GetUnitsAmount2(&DAT_100140f8,(int)DAT_100140d8 + 0x3e9,DAT_10013d08 & 0xff);
    cVar1 = (*pcVar5)(8);
    if ((cVar1 == '\0') && (0 < iVar3)) {
      SetTrigg(8,1);
      ShowPage(s__gold_unload0_10010478);
      RunTimer(1,4000);
      RunTimer(2,1000);
    }
    cVar1 = TimerDone(2);
    if (cVar1 != '\0') {
      ShowPage(s__gold_unload1_10010468);
      RunTimer(2,10000);
    }
    cVar1 = Trigg(8);
    if ((cVar1 != '\0') && (50000 < DAT_1002780c * iVar3)) {
      ShowPageParam(s__gold_victory_10010458,DAT_1002780c * iVar3);
      ShowVictory();
    }
    cVar1 = TimerDone(1);
    if (cVar1 != '\0') {
      ShowPage(s__gold_defeat_10010448);
      ShowPage(s__gold_defeat1_10010438);
      RunTimer(1,10000);
      RunTimer(3,0x96);
      FUN_10003f00(&DAT_10014108,&DAT_10013d08);
    }
    cVar1 = TimerDone(3);
    pcVar5 = Trigg_exref;
    if (cVar1 != '\0') {
      LooseGame();
      pcVar5 = Trigg_exref;
    }
  }
  cVar1 = (*pcVar5)(0);
  if (cVar1 != '\0') {
    SetTrigg(0,0);
    ShowPage(s__Entry_10010430);
    DisableMission(0x49);
    DisableMission(0x45);
    DisableMission(0x52);
    DisableMission(0x54);
    DisableMission(0x59);
    iVar3 = GetDiff(0);
    if (iVar3 == 3) {
      DisableMission(0x41);
      DisableMission(0x4c);
    }
    iVar3 = GetDiff(0);
    if (1 < iVar3) {
      DisableMission(0x53);
    }
    DisableMission(0x44);
    iVar3 = GetDiff(0);
    if (0 < iVar3) {
      DisableMission(0x46);
    }
    DisableMission(0x5a);
    DisableMission(0x58);
    EnableUnit(DAT_10013d08 & 0xff,&DAT_10013dc8,0);
    EnableUnit(DAT_10013d08 & 0xff,&DAT_10023580,0);
    SelectUnits(&DAT_10014098,0);
    SelectUnits(&DAT_10013cf8,1);
    SelectUnits(&DAT_100277f8,1);
    SelectUnits(&DAT_10027800,1);
    DoNotUseSelInAI(DAT_10013de8);
    FUN_10003e80(&DAT_10013d08,700);
    SetResource(DAT_10013d08 & 0xff,1,100000);
    FUN_10003e80(&DAT_10013de8,8000);
    SetResource(DAT_10013de8,1,100000);
    iVar3 = GetDiff(0);
    FUN_10003e80(&DAT_10023729,(iVar3 + 1) * 2000);
    iVar3 = GetDiff(0);
    FUN_10003e80(&DAT_100140a0,(iVar3 + 1) * 2000);
    uVar6 = GetDiff(0);
    StartAI(DAT_10013de8,s_SPAIN_0_10010428,0,0,0,uVar6);
    uVar6 = GetDiff(0);
    StartAI(DAT_10023729,s_SPAIN_0_10010428,0,0,0,uVar6);
    uVar6 = GetDiff(0);
    StartAI(DAT_100140a0,s_FRANCE_0_1001041c,0,0,0,uVar6);
    pcVar4 = ShowPage_exref;
  }
  cVar1 = Trigg(4);
  if ((cVar1 == '\0') && (iVar3 = GetTotalAmount1(&DAT_10023ae8,0), iVar3 != 0)) {
    SetTrigg(4,1);
    FUN_10002980(&DAT_10023590,0);
    FUN_10002980(&DAT_10023608,0);
    FUN_10002980(&DAT_10023680,0);
  }
  FUN_10002950(&DAT_10023590,0);
  FUN_10002950(&DAT_10023608,0);
  FUN_10002950(&DAT_10023680,0);
  iVar3 = FUN_10002b20(0x10023590);
  if (iVar3 < 0x50) {
    FUN_10002950(&DAT_10023590,2);
  }
  iVar3 = FUN_10002b20(0x10023608);
  if (iVar3 < 0x4b) {
    FUN_10002950(&DAT_10023608,2);
  }
  iVar3 = FUN_10002b20(0x10023680);
  if (iVar3 < 0x55) {
    FUN_10002950(&DAT_10023680,2);
  }
  cVar1 = Trigg(2);
  if (cVar1 == '\0') {
    FUN_10002c10(&DAT_10023590,(undefined4 *)&DAT_100140e8,(undefined4 *)&DAT_10013dd8);
    FUN_10002c10(&DAT_10023608,(undefined4 *)&DAT_10013dd0,(undefined4 *)&DAT_100140e8);
    FUN_10002c10(&DAT_10023680,(undefined4 *)&DAT_10023558,(undefined4 *)&DAT_10013dd0);
  }
  else {
    FUN_10002bf0(&DAT_10023590,(undefined4 *)&DAT_10013d00);
    FUN_10002bf0(&DAT_10023608,(undefined4 *)&DAT_10013de0);
    FUN_10002bf0(&DAT_10023680,(undefined4 *)&DAT_10013dc0);
  }
  cVar1 = Trigg(1);
  pcVar5 = EnableMission_exref;
  if (((cVar1 == '\0') && (iVar3 = GetGlobalTime(), pcVar5 = EnableMission_exref, 1000 < iVar3)) &&
     (*(int *)((int)DAT_100140d8 + 0x1856) == *(int *)((int)DAT_100140d8 + 0x185a))) {
    SetTrigg(1,1);
    (*pcVar4)(s__bandnews_10010410);
    DisableMission(0x57);
    EnableMission(0x49);
    iVar3 = GetDiff(0);
    pcVar5 = EnableMission_exref;
    if (iVar3 < 2) {
      EnableMission(0x44);
      EnableMission(0x5a);
    }
    else {
      EnableMission(0x5a);
    }
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0), cVar1 != '\0')) {
    SetTrigg(2,0);
    (*pcVar4)(s__bayband3_10010404);
    DAT_1002356c = (DAT_1002356c * 3) / 2;
    DAT_10023af0 = (DAT_10023af0 * 5) / 6;
    FUN_10001a50(DAT_10023720);
    SelectUnits(&DAT_100277e8,0);
    SelectUnits(&DAT_10023708,1);
    SelectUnits(&DAT_10023538,1);
    SelChangeNation(DAT_10023720 & 0xff,DAT_100236f8 & 0xff);
    FUN_10001a90(DAT_10023720);
    FUN_10002910(&DAT_10023590,DAT_100236f8);
    FUN_10002910(&DAT_10023608,DAT_100236f8);
    FUN_10002910(&DAT_10023680,DAT_100236f8);
  }
  cVar1 = Trigg(3);
  if (((cVar1 == '\0') && (iVar3 = GetGlobalTime(), 2000 < iVar3)) &&
     (*(int *)((int)DAT_100140d8 + 0x1856) == *(int *)((int)DAT_100140d8 + 0x185e))) {
    SetTrigg(3,1);
    (*pcVar4)(s__eng_news0_100103f8);
    EnableUnit(DAT_10013d08 & 0xff,&DAT_10013dc8,1);
    DisableMission(0x5a);
    (*pcVar5)(0x58);
    (*pcVar5)(0x45);
  }
  FUN_10003a70(DAT_10023568);
  bVar2 = FUN_10002f20((int)DAT_100140d8);
  if ((bVar2) || (*(int *)((int)DAT_100140d8 + 0x1845) == 4)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  uVar6 = FUN_10002fd0(DAT_10023568,cVar1);
  if ((char)uVar6 != '\0') {
    ShowPageParam(s__MerchantPrice_100103e8,DAT_100140d8[7],DAT_100140d8[8],DAT_100140d8[9],
                  DAT_100140d8[10],DAT_100140d8[0xb],DAT_100140d8[0xc]);
    cVar1 = AskQuestion(s__MarketMainMenu_100103d8);
    if (cVar1 != '\0') {
      FUN_10003160((int *)(&DAT_10014110 + *(int *)((int)DAT_10023568 + 0x35) * 0x186a));
    }
  }
  uVar6 = FUN_10002fd0(DAT_100140d8,'\x01');
  if (((char)uVar6 != '\0') && (*(int *)((int)DAT_100140d8 + 0x1845) == 0)) {
    FUN_100023d0();
  }
  FUN_100035b0(DAT_100140d8);
  return;
}



// Function: FUN_100023d0 @ 0x100023d0

void FUN_100023d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  
  pcVar5 = Trigg_exref;
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) {
    iVar2 = GetResource(DAT_10013d08 & 0xff,1);
    iVar2 = iVar2 + -5000;
    if (iVar2 < 1) {
      ShowPage(s__negold_100105e8);
    }
    else {
      cVar1 = AskQuestion(s__Uhodim_100105f0);
      if (cVar1 != '\0') {
        SetTrigg(7,1);
        *(undefined4 *)((int)DAT_100140d8 + 0x1845) = 6;
        iVar3 = FUN_10003360((int)DAT_100140d8);
        while (iVar3 < 0xf) {
          FUN_10003950((int)DAT_100140d8);
          iVar3 = FUN_10003360((int)DAT_100140d8);
        }
        iVar3 = FUN_10003360((int)DAT_100140d8);
        DAT_1002780c = iVar2 / iVar3;
        AddResource(CONCAT31((int3)((uint)(iVar2 % iVar3) >> 8),(undefined1)DAT_10013d08),1,-iVar2);
        FUN_100033b0(DAT_100140d8,DAT_10013d08);
      }
    }
  }
  cVar1 = Trigg(7);
  do {
    if (cVar1 != '\0') {
      return;
    }
LAB_100024df:
    while( true ) {
      RefreshScreen();
      iVar2 = AskMultilineQuestion
                        (9,s__MerchantMainMenu_100105a4,0,
                         s_V02_MerchMain_0_V02_MerchMain_1__100105b8);
      RefreshScreen();
      if (iVar2 != 0) break;
LAB_10002670:
      do {
        iVar2 = FUN_10003360((int)DAT_100140d8);
        RefreshScreen();
        iVar3 = AskMultilineQuestion
                          (9,s__MerchantInfoMenu_10010520,0,
                           s_V02_MerchInfo_0_V02_MerchInfo_1__10010534);
        RefreshScreen();
        if (iVar3 == 0) {
          ShowPageParam(s__Buiznes_100104f8,iVar2,*(undefined4 *)((int)DAT_100140d8 + 0x401),
                        *(undefined4 *)((int)DAT_100140d8 + 0x405),
                        *(undefined4 *)((int)DAT_100140d8 + 0x409),
                        *(undefined4 *)((int)DAT_100140d8 + 0x40d),
                        *(undefined4 *)((int)DAT_100140d8 + 0x411),
                        *(undefined4 *)((int)DAT_100140d8 + 0x415),
                        *(int *)((int)DAT_100140d8 + 0x91) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x95) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x99) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x9d) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0xa1) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0xa5) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x79) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x7d) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x81) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x85) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x89) * iVar2,
                        *(int *)((int)DAT_100140d8 + 0x8d) * iVar2);
        }
        else if (iVar3 == 1) {
          if (iVar2 < 10) {
            cVar1 = AskQuestion(s__MakeOboz_10010514);
            if (cVar1 != '\0') {
              FUN_10003950((int)DAT_100140d8);
            }
          }
          else {
            ShowPage(s__TooManyOboz_10010504);
          }
          goto LAB_10002670;
        }
        pcVar5 = Trigg_exref;
      } while (iVar3 < 2);
    }
    if (iVar2 != 1) {
      if (1 < iVar2) {
        return;
      }
      goto LAB_100024df;
    }
    iVar2 = FUN_10003360((int)DAT_100140d8);
    if (iVar2 == 0) {
      ShowPage(s__KaravanEmpty_10010594);
      goto LAB_100024df;
    }
    cVar1 = (*pcVar5)(1);
    if ((cVar1 != '\0') && (cVar1 = (*pcVar5)(2), cVar1 == '\0')) {
      ShowPageParam(s__bayband0_10010588,DAT_1002356c);
      cVar1 = AskQuestion(s__bayband1_1001057c);
      if (cVar1 != '\0') {
        iVar2 = GetResource(0,1);
        if (DAT_1002356c < iVar2) {
          SetTrigg(2,1);
          RunTimer(0,DAT_10023af0);
          ShowPage(s__bayband2_10010570);
          AddResource(0,1,-DAT_1002356c);
          FUN_10001a50(DAT_100236f8);
          SelectUnits(&DAT_100277e8,0);
          SelectUnits(&DAT_10023708,1);
          SelectUnits(&DAT_10023538,1);
          SelChangeNation(DAT_100236f8 & 0xff,DAT_10023720 & 0xff);
          FUN_10001a90(DAT_100236f8);
          FUN_10002910(&DAT_10023590,DAT_10023720);
          FUN_10002910(&DAT_10023608,DAT_10023720);
          FUN_10002910(&DAT_10023680,DAT_10023720);
        }
        else {
          cVar1 = AskQuestion(s__no_bayband_10010564);
          if (cVar1 != '\0') {
            return;
          }
        }
      }
    }
    uVar4 = FUN_100039a0(DAT_100140d8);
    cVar1 = (char)uVar4;
  } while( true );
}



// Function: FUN_100027b0 @ 0x100027b0

undefined4 FUN_100027b0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: FUN_100027e0 @ 0x100027e0

void FUN_100027e0(void)

{
  FUN_1000b991();
  return;
}



// Function: FUN_100027f0 @ 0x100027f0

void FUN_100027f0(void)

{
  FUN_10004175(&LAB_10002800);
  return;
}



// Function: FUN_10002840 @ 0x10002840

undefined4 __fastcall FUN_10002840(undefined4 param_1)

{
  RegisterFormation(param_1,s__ALONE_100105f8);
  return param_1;
}



// Function: FUN_10002860 @ 0x10002860

void __thiscall
FUN_10002860(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

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



// Function: FUN_10002910 @ 0x10002910

void __thiscall FUN_10002910(void *this,int param_1)

{
  FUN_10001a50(*(int *)this);
  SelectUnits((int)this + 0x14,0);
  SelChangeNation(*(undefined1 *)this,param_1);
  FUN_10001a90(*(int *)this);
  *(int *)this = param_1;
  return;
}



// Function: FUN_10002950 @ 0x10002950

void __thiscall FUN_10002950(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x50) = param_1;
  return;
}



// Function: FUN_10002960 @ 0x10002960

void __thiscall FUN_10002960(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x58) = param_1;
  return;
}



// Function: FUN_10002970 @ 0x10002970

void __thiscall FUN_10002970(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x5c) = param_1;
  return;
}



// Function: FUN_10002980 @ 0x10002980

void __thiscall FUN_10002980(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x60) = param_1;
  return;
}



// Function: FUN_10002990 @ 0x10002990

void __thiscall FUN_10002990(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RegisterUnitType((int)this + 0x28,param_1);
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x34) = param_3;
  return;
}



// Function: FUN_100029c0 @ 0x100029c0

void __thiscall FUN_100029c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RegisterUnitType((int)this + 0x3c,param_1);
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = param_3;
  return;
}



// Function: FUN_100029f0 @ 0x100029f0

void __thiscall FUN_100029f0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 100) = *param_1;
  *(undefined4 *)((int)this + 0x68) = param_1[1];
  return;
}



// Function: FUN_10002a10 @ 0x10002a10

bool __fastcall FUN_10002a10(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 4);
  return iVar1 != 0;
}



// Function: FUN_10002a30 @ 0x10002a30

undefined4 __fastcall FUN_10002a30(int param_1)

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
  bVar1 = FUN_10002a10(param_1);
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



// Function: FUN_10002b20 @ 0x10002b20

void __fastcall FUN_10002b20(int param_1)

{
  GetTotalAmount0(param_1 + 0x14);
  return;
}



// Function: FUN_10002b30 @ 0x10002b30

undefined4 __fastcall FUN_10002b30(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_10002a10(param_1);
  if (bVar1) {
    iVar2 = GetTotalAmount0(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x58) <= iVar2) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10002b60 @ 0x10002b60

void __fastcall FUN_10002b60(int param_1)

{
  GetNUnits(param_1 + 0x1c);
  RemoveGroup(param_1 + 0x1c,param_1 + 0x6c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
  return;
}



// Function: FUN_10002b90 @ 0x10002b90

void __fastcall FUN_10002b90(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = FUN_10002a10((int)param_1);
  if (bVar1) {
    FUN_10002a30((int)param_1);
    uVar2 = FUN_10002b30((int)param_1);
    if ((char)uVar2 != '\0') {
      FUN_10001a50(*param_1);
      SelectUnits(param_1 + 7,0);
      uVar2 = 0;
      iVar3 = _rand();
      SelSendAndKill((char)*param_1,param_1 + 0x19,iVar3,uVar2);
      FUN_10001a90(*param_1);
      FUN_10002b60((int)param_1);
    }
  }
  return;
}



// Function: FUN_10002bf0 @ 0x10002bf0

void __thiscall FUN_10002bf0(void *this,undefined4 *param_1)

{
  FUN_100029f0(this,param_1);
  FUN_10002b90(this);
  return;
}



// Function: FUN_10002c10 @ 0x10002c10

void __thiscall FUN_10002c10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_10002b30((int)this);
  if ((char)uVar1 != '\0') {
    uVar2 = _rand();
    if ((uVar2 & 0xff) < 0xa0) {
      FUN_100029f0(this,param_1);
      FUN_10002b90(this);
      return;
    }
    FUN_100029f0(this,param_2);
  }
  FUN_10002b90(this);
  return;
}



// Function: FUN_10002c60 @ 0x10002c60

void __fastcall FUN_10002c60(int param_1)

{
  *(undefined4 *)(param_1 + 800) = 0;
  return;
}



// Function: FUN_10002c70 @ 0x10002c70

undefined4 __thiscall FUN_10002c70(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((int)this + 800);
  if (iVar1 == 100) {
    return 0;
  }
  *(int *)((int)this + 800) = iVar1 + 1;
  uVar2 = RegisterZone((void *)((int)this + iVar1 * 8),param_1);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



// Function: FUN_10002ca0 @ 0x10002ca0

int __thiscall FUN_10002ca0(void *this,int param_1)

{
  return (int)(void *)((int)this + param_1 * 8);
}



// Function: FUN_10002d40 @ 0x10002d40

void FUN_10002d40(void)

{
  RegisterVar(&DAT_10014110,0xf424);
  RegisterVar(&DAT_10013e00,0x294);
  RegisterVar(&DAT_10023af8,0x3cf0);
  RegisterVar(&DAT_10027808,4);
  return;
}



// Function: FUN_10002d80 @ 0x10002d80

undefined4 * __fastcall FUN_10002d80(undefined4 *param_1)

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



// Function: FUN_10002db0 @ 0x10002db0

undefined4 __thiscall FUN_10002db0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_2c [20];
  int iStack_18;
  int iStack_14;
  
  iVar5 = 0;
  piVar6 = (int *)((int)this + 0x1c);
  piVar4 = piVar6;
  do {
    iVar1 = GetResource(0,iVar5);
    if (iVar1 < *piVar4) {
      uVar3 = ShowPage(s__LittleMoney_10010600);
      return uVar3 & 0xffffff00;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 6);
  iVar5 = 0;
  do {
    AddResource(0,iVar5,-*piVar6);
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar5 < 6);
  iVar5 = _rand();
  CreateObject0((int)this + 0xc,&DAT_10013df8,(int)this + 4,*(undefined1 *)this,param_1,iVar5);
  GetUnitInfo((int)this + 0xc,0,auStack_2c);
  iStack_18 = iStack_18 + 100;
  iStack_14 = iStack_14 + 100;
  uVar2 = SetUnitInfo(auStack_2c);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



// Function: FUN_10002e80 @ 0x10002e80

undefined4 __thiscall FUN_10002e80(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)this == param_1) {
    return 0;
  }
  FUN_10001a50(*(int *)this);
  SelectUnits((int)this + 0xc,0);
  SelChangeNation(*(undefined1 *)this,param_1);
  uVar1 = FUN_10001a90(*(int *)this);
  *(int *)this = param_1;
  return uVar1;
}



// Function: FUN_10002ed0 @ 0x10002ed0

void __thiscall
FUN_10002ed0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined4 *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0x2c) = param_5;
  *(undefined4 *)((int)this + 0x30) = param_6;
  return;
}



// Function: FUN_10002f00 @ 0x10002f00

void __thiscall FUN_10002f00(void *this,undefined4 param_1)

{
  RegisterUnitType((int)this + 4,param_1);
  return;
}



// Function: FUN_10002f20 @ 0x10002f20

bool __fastcall FUN_10002f20(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 0xc);
  return 0 < iVar1;
}



// Function: FUN_10002f40 @ 0x10002f40

undefined4 __fastcall FUN_10002f40(int *param_1)

{
  undefined *puVar1;
  uint uVar2;
  short asStack_58 [22];
  short asStack_2c [22];
  
  puVar1 = &DAT_10013d78 + *param_1 * 8;
  if (*(int *)(&DAT_10013d7c + *param_1 * 8) != 0x554e4954) {
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



// Function: FUN_10002fc0 @ 0x10002fc0

undefined4 * __fastcall FUN_10002fc0(undefined4 *param_1)

{
  FUN_10002d80(param_1);
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1;
}



// Function: FUN_10002fd0 @ 0x10002fd0

undefined4 __thiscall FUN_10002fd0(void *this,char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  undefined3 uVar3;
  
  bVar1 = FUN_10002f20((int)this);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    uVar2 = FUN_10002f40(this);
    if ((char)uVar2 != '\0') {
      uVar3 = (undefined3)(uVar2 >> 8);
      uVar2 = CONCAT31(uVar3,param_1);
      if (param_1 != '\0') {
        uVar2 = CONCAT31(uVar3,*(char *)((int)this + 0x34));
        if (*(char *)((int)this + 0x34) != '\0') {
          *(undefined1 *)((int)this + 0x34) = 0;
          return CONCAT31(uVar3,1);
        }
        goto LAB_10003004;
      }
    }
    *(undefined1 *)((int)this + 0x34) = 1;
  }
LAB_10003004:
  return uVar2 & 0xffffff00;
}



// Function: FUN_10003010 @ 0x10003010

undefined4 __thiscall FUN_10003010(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10002db0(this,param_1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



// Function: FUN_10003020 @ 0x10003020

void __thiscall FUN_10003020(void *this,undefined4 param_1)

{
  RegisterUnits((int)this + 0xc,param_1);
  UnitsCenter((int)this + 0x34,(int)this + 0xc,400);
  return;
}



// Function: FUN_10003050 @ 0x10003050

void __thiscall FUN_10003050(void *this,undefined4 param_1)

{
  FUN_10002c70((void *)((int)this + 0x7c),param_1);
  return;
}



// Function: FUN_10003060 @ 0x10003060

void __thiscall
FUN_10003060(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x40) = param_2;
  *(undefined4 *)((int)this + 0x44) = param_3;
  *(undefined4 *)((int)this + 0x48) = param_4;
  *(undefined4 *)((int)this + 0x4c) = param_5;
  *(undefined4 *)((int)this + 0x50) = param_6;
  return;
}



// Function: FUN_10003090 @ 0x10003090

void __thiscall
FUN_10003090(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 0x54) = param_1;
  *(undefined4 *)((int)this + 0x58) = param_2;
  *(undefined4 *)((int)this + 0x5c) = param_3;
  *(undefined4 *)((int)this + 0x60) = param_4;
  *(undefined4 *)((int)this + 100) = param_5;
  *(undefined4 *)((int)this + 0x68) = param_6;
  return;
}



// Function: FUN_100030c0 @ 0x100030c0

undefined4 * __fastcall FUN_100030c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10002fc0(param_1);
  FUN_10002d80((undefined4 *)((int)param_1 + 0x3d));
  FUN_10003bb0((int)param_1 + 0xa9);
  puVar2 = (undefined4 *)((int)param_1 + 0x3e5);
  iVar1 = 100;
  do {
    FUN_10002d80(puVar2);
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



// Function: FUN_10003140 @ 0x10003140

void __thiscall FUN_10003140(void *this,undefined4 param_1)

{
  RegisterUnitType((int)this + 0x35,param_1);
  return;
}



// Function: FUN_10003160 @ 0x10003160

undefined4 __fastcall FUN_10003160(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  uint auStack_2c [11];
  
  iVar6 = 0;
  piVar5 = param_1 + 7;
  do {
    iVar2 = GetResource(0,iVar6);
    iVar1 = *piVar5;
    if (iVar2 < iVar1) {
      uVar4 = ShowPage(s__LittleMoney_10010600);
      return uVar4 & 0xffffff00;
    }
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar6 < 6);
  iVar6 = GetReadyAmount((int)param_1 + 0x35,CONCAT31((int3)((uint)iVar1 >> 8),(char)*param_1));
  if (iVar6 != 0) {
    iVar6 = 0;
    piVar5 = param_1 + 7;
    do {
      AddResource(0,iVar6,-*piVar5);
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 6);
    RegisterDynGroup(auStack_3c);
    RegisterDynGroup(auStack_34);
    FUN_10001a50(*param_1);
    SelectUnitsType((int)param_1 + 0x35,(char)*param_1,0);
    SaveSelectedUnits((char)*param_1,auStack_3c,0);
    FUN_10001a50(*param_1);
    GetUnitInfo(auStack_3c,0,auStack_2c);
    InsertUnitToGroup(0,auStack_34,auStack_2c[0] & 0xffff);
    EnableUnit((char)*param_1,param_1 + 1,1);
    uVar3 = ProduceUnitFast(auStack_34,param_1 + 1,param_1 + 3,0);
    *(undefined4 *)((int)param_1 + 0x1845) = 4;
    *(undefined1 *)((int)param_1 + 0x184d) = 1;
    *(undefined4 *)((int)param_1 + 0x184e) = 0;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar4 = ShowPage(s__NeedHall_10010610);
  return uVar4 & 0xffffff00;
}



// Function: FUN_100032c0 @ 0x100032c0

void __thiscall FUN_100032c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x3e1) = param_1;
  return;
}



// Function: FUN_100032d0 @ 0x100032d0

void __thiscall FUN_100032d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x3d);
  for (iVar1 = 0xe9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// Function: FUN_100032f0 @ 0x100032f0

void __thiscall FUN_100032f0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1841) = param_1;
  return;
}



// Function: FUN_10003300 @ 0x10003300

undefined4 __fastcall FUN_10003300(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x1835);
  if (0 < iVar2) {
    iVar4 = param_1 + 0x3f1;
    do {
      bVar1 = FUN_10002f20(iVar4 + -0xc);
      if (bVar1) {
        iVar2 = GetUnitsAmount1(param_1 + 0x1839,iVar4);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = *(int *)(param_1 + 0x1835);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x34;
    } while (iVar3 < iVar2);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



// Function: FUN_10003360 @ 0x10003360

int __fastcall FUN_10003360(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1835)) {
    iVar2 = param_1 + 0x3e5;
    do {
      bVar1 = FUN_10002f20(iVar2);
      if (bVar1) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x34;
    } while (iVar4 < *(int *)(param_1 + 0x1835));
    return iVar3;
  }
  return 0;
}



// Function: FUN_100033b0 @ 0x100033b0

void __thiscall FUN_100033b0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x3e5);
  puVar2 = (undefined4 *)((int)this + 0x3e5);
  FUN_10001a50(iVar1);
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x1835)) {
    do {
      SelectUnits(puVar2 + 3,1);
      *puVar2 = param_1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0xd;
    } while (iVar3 < *(int *)((int)this + 0x1835));
  }
  SelChangeNation(iVar1,param_1);
  FUN_10001a90(iVar1);
  return;
}



// Function: FUN_10003430 @ 0x10003430

undefined4 __fastcall FUN_10003430(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int local_1c;
  int local_18 [6];
  
  iVar1 = FUN_10003360(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  local_1c = 100000;
  iVar1 = 0;
  piVar5 = local_18;
  piVar4 = (int *)(param_1 + 0x91);
  do {
    if (*piVar4 != 0) {
      iVar2 = GetResource(0,iVar1);
      iVar2 = iVar2 / *piVar4;
      *piVar5 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar2 <= local_1c) {
        local_1c = iVar2;
      }
    }
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar1 < 6);
  iVar1 = FUN_10003360(param_1);
  if (iVar1 < local_1c) {
    local_1c = FUN_10003360(param_1);
  }
  *(int *)(param_1 + 0x184e) = local_1c;
  iVar1 = 0;
  piVar4 = (int *)(param_1 + 0x91);
  do {
    uVar3 = AddResource(0,iVar1,-(*piVar4 * *(int *)(param_1 + 0x184e)));
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar1 < 6);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}



// Function: FUN_100034f0 @ 0x100034f0

undefined4 __fastcall FUN_100034f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x184e);
  iVar1 = FUN_10003360(param_1);
  if (iVar1 <= iVar2) {
    iVar2 = FUN_10003360(param_1);
  }
  piVar3 = (int *)(param_1 + 0x79);
  ShowPageParam(s__MerchantSucsess_1001061c,iVar2 * *piVar3,*(int *)(param_1 + 0x7d) * iVar2,
                *(int *)(param_1 + 0x81) * iVar2,*(int *)(param_1 + 0x85) * iVar2,
                *(int *)(param_1 + 0x89) * iVar2,*(int *)(param_1 + 0x8d) * iVar2);
  iVar1 = 0;
  do {
    AddResource(0,iVar1,*piVar3 * iVar2);
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 6);
  iVar2 = *(int *)(param_1 + 0x1856) + 1;
  *(undefined4 *)(param_1 + 0x184e) = 0;
  *(int *)(param_1 + 0x1856) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



// Function: FUN_100035a0 @ 0x100035a0

void __thiscall FUN_100035a0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1852) = param_1;
  return;
}



// Function: FUN_100035b0 @ 0x100035b0

void __fastcall FUN_100035b0(int *param_1)

{
  int *piVar1;
  void *this;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iStack_4;
  
  if ((*(int *)((int)param_1 + 0x1845) == 4) && (bVar2 = FUN_10002f20((int)param_1), bVar2)) {
    *(undefined4 *)((int)param_1 + 0x1845) = 0;
  }
  bVar2 = FUN_10002f20((int)param_1);
  if ((!bVar2) && (*(int *)((int)param_1 + 0x1845) != 4)) {
    if (*(char *)((int)param_1 + 0x184d) != '\0') {
      ShowPage(s__MerchantDie_10010630);
      *(undefined1 *)((int)param_1 + 0x184d) = 0;
      RemoveGroup(param_1 + 3,(int)param_1 + 0x1862);
    }
    ClearLightSpot(*(undefined1 *)((int)param_1 + 0x1852));
    return;
  }
  piVar1 = param_1 + 3;
  UnitsCenter((int)param_1 + 0x1839,piVar1,100);
  SetLightSpot((int)param_1 + 0x1839,1,*(undefined1 *)((int)param_1 + 0x1852));
  switch(*(undefined4 *)((int)param_1 + 0x1845)) {
  case 0:
    iVar4 = GetUnitsAmount1(&DAT_10013e39 + *(int *)((int)param_1 + 0x3e1) * 0x42,piVar1);
    if (iVar4 == 0) {
      FUN_10001a50(*(int *)((int)param_1 + 0x1841));
      SelectUnits(piVar1,0);
      uVar3 = 0;
      iVar4 = _rand();
      SelSendTo(*(undefined1 *)((int)param_1 + 0x1841),
                &DAT_10013e39 + *(int *)((int)param_1 + 0x3e1) * 0x42,iVar4,uVar3);
      FUN_10001a90(*(int *)((int)param_1 + 0x1841));
    }
    break;
  case 1:
    iVar4 = GetUnitsAmount1((int)param_1 + 0x71,piVar1);
    if ((iVar4 != 0) && (uVar3 = FUN_10003300((int)param_1), (char)uVar3 != '\0')) {
      *(undefined4 *)((int)param_1 + 0x1845) = 2;
      iVar4 = GetGlobalTime();
      *(int *)((int)param_1 + 0x1849) = iVar4 + 500;
    }
    break;
  case 2:
    iVar4 = GetGlobalTime();
    if (*(int *)((int)param_1 + 0x1849) < iVar4) {
      *(undefined4 *)((int)param_1 + 0x1845) = 3;
      this = (void *)((int)param_1 + 0xa9);
      FUN_10003bd0(this,*(undefined4 *)(&DAT_10013e39 + *(int *)((int)param_1 + 0x3e1) * 0x42),
                   *(undefined4 *)(&DAT_10013e3d + *(int *)((int)param_1 + 0x3e1) * 0x42));
      FUN_10003d20(this,(int)param_1,*(int *)((int)param_1 + 0x1841),1);
      iStack_4 = 0;
      if (0 < *(int *)((int)param_1 + 0x1835)) {
        piVar5 = (int *)((int)param_1 + 0x3e5);
        do {
          bVar2 = FUN_10002f20((int)piVar5);
          if (bVar2) {
            FUN_10003d20(this,(int)piVar5,*piVar5,1);
          }
          iStack_4 = iStack_4 + 1;
          piVar5 = piVar5 + 0xd;
        } while (iStack_4 < *(int *)((int)param_1 + 0x1835));
      }
    }
    break;
  case 3:
    iVar4 = GetUnitsAmount1(&DAT_10013e39 + *(int *)((int)param_1 + 0x3e1) * 0x42,piVar1);
    if (iVar4 != 0) {
      FUN_100034f0((int)param_1);
      *(undefined4 *)((int)param_1 + 0x1845) = 0;
    }
    bVar2 = FUN_10002f20((int)(&DAT_10013e00 + *(int *)((int)param_1 + 0x3e1) * 0x42));
    if (!bVar2) {
      *(undefined4 *)((int)param_1 + 0x1845) = 0;
    }
  }
  FUN_10001a50(*param_1);
  FUN_10001a50(*(int *)((int)param_1 + 0x1841));
  SelectUnits(piVar1,0);
  iVar4 = GetUnitsAmount1(&DAT_10013e39 + *(int *)((int)param_1 + 0x3e1) * 0x42,piVar1);
  if ((((iVar4 == 0) || (*(int *)((int)param_1 + 0x1845) != 0)) &&
      (*(int *)((int)param_1 + 0x1845) != 5)) && (*(int *)((int)param_1 + 0x1845) != 6)) {
    uVar7 = *(undefined1 *)((int)param_1 + 0x1841);
    uVar6 = (undefined1)*param_1;
  }
  else {
    uVar7 = (undefined1)*param_1;
    uVar6 = *(undefined1 *)((int)param_1 + 0x1841);
  }
  SelChangeNation(uVar6,uVar7);
  FUN_10001a90(*param_1);
  FUN_10001a90(*(int *)((int)param_1 + 0x1841));
  return;
}



// Function: FUN_100038e0 @ 0x100038e0

void __thiscall
FUN_100038e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *this_00;
  int local_4;
  
  local_4 = 100;
  this_00 = (void *)((int)this + 0x3e5);
  do {
    FUN_10002f00(this_00,s_GRUZ_UN__10010640);
    FUN_10002e80(this_00,*(int *)((int)this + 0x1841));
    FUN_10002ed0(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
    this_00 = (void *)((int)this_00 + 0x34);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}



// Function: FUN_10003950 @ 0x10003950

uint __fastcall FUN_10003950(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x1835);
  if (uVar3 != 100) {
    uVar1 = FUN_10003010((void *)(param_1 + 0x3e5 + uVar3 * 0x34),param_1 + 0x1839);
    if ((char)uVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0x1835) + 1;
      *(int *)(param_1 + 0x1835) = iVar2;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    uVar3 = ShowPage(s__LittleMoney_10010600);
  }
  return uVar3 & 0xffffff00;
}



// Function: FUN_100039a0 @ 0x100039a0

uint __fastcall FUN_100039a0(int *param_1)

{
  void *this;
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = *(uint *)((int)param_1 + 0x1845);
  if (uVar3 == 0) {
    uVar2 = FUN_10003430((int)param_1);
    if ((char)uVar2 != '\0') {
      this = (void *)((int)param_1 + 0xa9);
      *(undefined4 *)((int)param_1 + 0x1845) = 1;
      FUN_10003be0(this,*(undefined4 *)((int)param_1 + 0x71),*(undefined4 *)((int)param_1 + 0x75));
      FUN_10003c00(this,(int)param_1,*param_1,1);
      iVar4 = *(int *)((int)param_1 + 0x1835);
      iVar5 = 0;
      if (0 < iVar4) {
        piVar6 = (int *)((int)param_1 + 0x3e5);
        do {
          bVar1 = FUN_10002f20((int)piVar6);
          if (bVar1) {
            FUN_10003c00(this,(int)piVar6,*piVar6,1);
          }
          iVar4 = *(int *)((int)param_1 + 0x1835);
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 0xd;
        } while (iVar5 < iVar4);
      }
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
    uVar3 = ShowPage(s__LittleMoney_10010600);
  }
  return uVar3 & 0xffffff00;
}



// Function: FUN_10003a40 @ 0x10003a40

undefined4 * __fastcall FUN_10003a40(undefined4 *param_1)

{
  FUN_10002fc0(param_1);
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1;
}



// Function: FUN_10003a60 @ 0x10003a60

void __thiscall FUN_10003a60(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x35) = param_1;
  return;
}



// Function: FUN_10003a70 @ 0x10003a70

void __fastcall FUN_10003a70(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  
  piVar1 = param_1 + 1;
  iVar2 = GetTotalAmount1(piVar1,(char)*param_1);
  if (iVar2 == 0) {
    uVar3 = (undefined1)*param_1;
  }
  else {
    uVar3 = (undefined1)*param_1;
  }
  EnableUnit(uVar3,piVar1,iVar2 == 0);
  iVar2 = GetReadyAmount(piVar1,(char)*param_1);
  if (iVar2 == 0) {
    if (*(char *)((int)param_1 + 0x41) != '\0') {
      *(undefined1 *)((int)param_1 + 0x41) = 0;
      *(undefined4 *)(&DAT_10015955 + *(int *)((int)param_1 + 0x35) * 0x186a) = 5;
      ShowPage(s__MarketLost_1001065c);
      return;
    }
  }
  else {
    iVar2 = GetTotalAmount1(piVar1,(char)*param_1);
    if (iVar2 < 2) {
      if (*(char *)((int)param_1 + 0x41) == '\0') {
        *(undefined1 *)((int)param_1 + 0x41) = 1;
        *(undefined4 *)(&DAT_10015955 + *(int *)((int)param_1 + 0x35) * 0x186a) = 0;
        ShowPage(s__MarketBuilt_1001064c);
        FUN_10001a50(*param_1);
        SelectUnitsType(piVar1,(char)*param_1,0);
        SaveSelectedUnits((char)*param_1,param_1 + 3,0);
        UnitsCenter((int)param_1 + 0x39,param_1 + 3,400);
        FUN_10001a90(*param_1);
      }
      FUN_10002f20((int)(&DAT_10014110 + *(int *)((int)param_1 + 0x35) * 0x186a));
    }
  }
  return;
}



// Function: FUN_10003bb0 @ 0x10003bb0

int __fastcall FUN_10003bb0(int param_1)

{
  FUN_10002c60(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x334) = 0;
  return param_1;
}



// Function: FUN_10003bd0 @ 0x10003bd0

void __thiscall FUN_10003bd0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return;
}



// Function: FUN_10003be0 @ 0x10003be0

void __thiscall FUN_10003be0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return;
}



// Function: FUN_10003c00 @ 0x10003c00

bool __thiscall FUN_10003c00(void *this,int param_1,int param_2,int param_3)

{
  void *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iStack_8;
  int iStack_4;
  
  iVar5 = param_2;
  if ((char)param_3 != '\0') {
    FUN_10001a50(param_2);
    SelectUnits(param_1 + 0xc,0);
    this_00 = (void *)((int)this + 0x10);
    uVar7 = 0;
    iVar2 = _rand();
    iVar3 = FUN_10002ca0(this_00,0);
    SelSendTo(iVar5,iVar3,iVar2,uVar7);
    iVar2 = 1;
    if (1 < *(int *)((int)this + 0x330)) {
      do {
        piVar8 = &param_2;
        piVar6 = &iStack_4;
        iVar3 = FUN_10002ca0(this_00,iVar2 + -1);
        GetZoneCoor(iVar3,piVar6,piVar8);
        piVar8 = &param_3;
        piVar6 = &iStack_8;
        iVar3 = FUN_10002ca0(this_00,iVar2);
        GetZoneCoor(iVar3,piVar6,piVar8);
        cVar1 = FUN_10001000(iStack_8 - iStack_4,param_3 - param_2);
        uVar4 = CONCAT31(extraout_var,cVar1) & 0xffff;
        uVar7 = 2;
        iVar3 = FUN_10002ca0(this_00,iVar2);
        SelSendTo(iVar5,iVar3,uVar4,uVar7);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 0x330));
    }
    uVar7 = 2;
    iVar2 = _rand();
    SelSendTo(iVar5,(int)this + 8,iVar2,uVar7);
    FUN_10001a90(iVar5);
  }
  iVar5 = GetUnitsAmount1((int)this + 8,param_1 + 0xc);
  return iVar5 != 0;
}



// Function: FUN_10003d20 @ 0x10003d20

bool __thiscall FUN_10003d20(void *this,int param_1,int param_2,int param_3)

{
  void *this_00;
  char cVar1;
  int iVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int iStack_c;
  int iStack_8;
  void *local_4;
  
  iVar4 = param_2;
  local_4 = this;
  if ((char)param_3 != '\0') {
    FUN_10001a50(param_2);
    SelectUnits(param_1 + 0xc,0);
    iVar5 = *(int *)((int)this + 0x330) + -1;
    this_00 = (void *)((int)this + 0x10);
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = *(int *)((int)this + 0x330) - 2;
    iVar2 = FUN_10002ca0(this_00,iVar5);
    SelSendTo(iVar4,iVar2,uVar7,uVar9);
    if (-1 < (int)uVar6) {
      do {
        piVar10 = &param_2;
        piVar8 = &iStack_8;
        iVar2 = FUN_10002ca0(this_00,iVar5);
        GetZoneCoor(iVar2,piVar8,piVar10);
        piVar10 = &param_3;
        piVar8 = &iStack_c;
        iVar2 = FUN_10002ca0(this_00,uVar6);
        GetZoneCoor(iVar2,piVar8,piVar10);
        cVar1 = FUN_10001000(iStack_c - iStack_8,param_3 - param_2);
        uVar3 = CONCAT31(extraout_var,cVar1) & 0xffff;
        uVar7 = 2;
        iVar2 = FUN_10002ca0(this_00,uVar6);
        SelSendTo(iVar4,iVar2,uVar3,uVar7);
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -1;
        this = local_4;
      } while (uVar6 < 0x80000000);
    }
    uVar7 = 2;
    iVar2 = _rand();
    SelSendTo(iVar4,this,iVar2,uVar7);
    FUN_10001a90(iVar4);
  }
  iVar4 = GetUnitsAmount1(this,param_1 + 0xc);
  return iVar4 != 0;
}



// Function: FUN_10003e40 @ 0x10003e40

undefined4 * __thiscall FUN_10003e40(void *this,undefined4 param_1,int param_2)

{
  RegisterVar(this,5);
  *(undefined4 *)this = param_1;
  *(char *)((int)this + 4) = '\x01' << ((byte)param_1 & 0x1f);
  if (param_2 != 0) {
    SetPlayerName(param_1,param_2);
  }
  return this;
}



// Function: FUN_10003e80 @ 0x10003e80

void __thiscall FUN_10003e80(void *this,undefined4 param_1)

{
  SetResource(*(undefined1 *)this,3,param_1);
  SetResource(*(undefined1 *)this,0,param_1);
  SetResource(*(undefined1 *)this,2,param_1);
  SetResource(*(undefined1 *)this,1,param_1);
  SetResource(*(undefined1 *)this,4,param_1);
  SetResource(*(undefined1 *)this,5,param_1);
  return;
}



// Function: FUN_10003ed0 @ 0x10003ed0

void __thiscall FUN_10003ed0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  bVar2 = *(byte *)((int)this + 4) | '\x01' << ((byte)uVar1 & 0x1f);
  *(byte *)((int)this + 4) = bVar2;
  ChangeFriends(*(undefined1 *)this,CONCAT31((int3)((uint)uVar1 >> 8),bVar2));
  return;
}



// Function: FUN_10003f00 @ 0x10003f00

void __thiscall FUN_10003f00(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  bVar2 = *(byte *)((int)this + 4) & ~('\x01' << ((byte)uVar1 & 0x1f));
  *(byte *)((int)this + 4) = bVar2;
  ChangeFriends(*(undefined1 *)this,CONCAT31((int3)((uint)uVar1 >> 8),bVar2));
  return;
}



// Function: FUN_10003f30 @ 0x10003f30

void __fastcall FUN_10003f30(undefined1 *param_1)

{
  param_1[4] = 0xff;
  ChangeFriends(*param_1,0xff);
  return;
}



// Function: FUN_10003f50 @ 0x10003f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003f50(void)

{
  void *extraout_ECX;
  
  FUN_10003f68();
  _DAT_10027814 = FUN_100043af();
  FUN_1000435f(extraout_ECX);
  return;
}



// Function: FUN_10003f68 @ 0x10003f68

void FUN_10003f68(void)

{
  PTR_LAB_10010684 = &LAB_10004432;
  PTR_LAB_10010680 = __cfltcvt;
  PTR_LAB_10010688 = __fassign;
  PTR_LAB_1001068c = FUN_100043d8;
  PTR_LAB_10010690 = &LAB_10004480;
  PTR_LAB_10010694 = __cfltcvt;
  return;
}



// Function: __ftol @ 0x10003fa0

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Function: FUN_10003fc7 @ 0x10003fc7

int __cdecl FUN_10003fc7(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// Function: FUN_10003fec @ 0x10003fec

void __cdecl FUN_10003fec(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10004883();
  pDVar1[5] = param_1;
  return;
}



// Function: _rand @ 0x10003ff9

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_10004883();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



// Function: FUN_1000401b @ 0x1000401b

void __cdecl FUN_1000401b(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_10027828._2_2_) {
    if (local_24.wHour == (WORD)DAT_10027828) {
      if (local_24.wDay == DAT_10027824._2_2_) {
        if (local_24.wMonth == DAT_10027820._2_2_) {
          if (local_24.wYear == (WORD)DAT_10027820) goto LAB_100040c5;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_10027818 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_10027818 = 1;
  }
  else {
    DAT_10027818 = 0;
  }
  DAT_10027820._0_2_ = local_24.wYear;
  DAT_10027820._2_2_ = local_24.wMonth;
  DAT_10027824._0_2_ = local_24.wDayOfWeek;
  DAT_10027824._2_2_ = local_24.wDay;
  DAT_10027828._0_2_ = local_24.wHour;
  DAT_10027828._2_2_ = local_24.wMinute;
  DAT_1002782c._0_2_ = local_24.wSecond;
  DAT_1002782c._2_2_ = local_24.wMilliseconds;
LAB_100040c5:
  iVar2 = FUN_1000498a((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_10027818);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}



// Function: FUN_100040f7 @ 0x100040f7

undefined4 __cdecl FUN_100040f7(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_10004b3e();
  pbVar1 = (byte *)FUN_10004e99(DAT_10028f70);
  if (pbVar1 < DAT_10028f6c + (4 - (int)DAT_10028f70)) {
    SVar2 = FUN_10004e99(DAT_10028f70);
    pbVar1 = FUN_10004b6a(DAT_10028f70,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_1000416c;
    }
    DAT_10028f6c = pbVar1 + ((int)DAT_10028f6c - (int)DAT_10028f70 >> 2) * 4;
    DAT_10028f70 = pbVar1;
  }
  *(undefined4 *)DAT_10028f6c = param_1;
  DAT_10028f6c = DAT_10028f6c + 4;
LAB_1000416c:
  FUN_10004b47();
  return param_1;
}



// Function: FUN_10004175 @ 0x10004175

int __cdecl FUN_10004175(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100040f7(param_1);
  return (iVar1 != 0) - 1;
}



// Function: FUN_100041b6 @ 0x100041b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100041b6(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10027848 = GetVersion();
    iVar1 = FUN_1000587e(1);
    if (iVar1 != 0) {
      _DAT_10027854 = DAT_10027848 >> 8 & 0xff;
      _DAT_10027850 = DAT_10027848 & 0xff;
      DAT_10027848 = DAT_10027848 >> 0x10;
      _DAT_1002784c = _DAT_10027850 * 0x100 + _DAT_10027854;
      iVar1 = FUN_100047fe();
      if (iVar1 != 0) {
        DAT_10028f74 = GetCommandLineA();
        DAT_10027834 = FUN_100055d7();
        FUN_100050c1();
        FUN_1000538a();
        FUN_100052d1();
        FUN_10004a4c();
        DAT_10027830 = DAT_10027830 + 1;
        goto LAB_10004289;
      }
      FUN_100058db();
    }
LAB_10004216:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10027830 < 1) goto LAB_10004216;
      DAT_10027830 = DAT_10027830 + -1;
      if (DAT_10027880 == 0) {
        FUN_10004a8a();
      }
      FUN_1000527d();
      FUN_10004852();
      FUN_100058db();
    }
    else if (param_2 == 3) {
      FUN_100048ea((undefined *)0x0);
    }
LAB_10004289:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x1000428f

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10027830;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_100042d7;
    if ((DAT_10028f78 != (code *)0x0) &&
       (iVar2 = (*DAT_10028f78)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100041b6(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_100042d7:
  iVar2 = FUN_100027b0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100041b6(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100041b6(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10028f78 != (code *)0x0) {
      iVar2 = (*DAT_10028f78)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x1000432c

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1002783c == 1) || ((DAT_1002783c == 0 && (DAT_10027840 == 1)))) {
    FUN_10005983();
  }
  FUN_100059bc(param_1);
  (*(code *)PTR___exit_1001067c)(0xff);
  return;
}



// Function: FUN_1000435f @ 0x1000435f

void __fastcall FUN_1000435f(void *param_1)

{
  FUN_10005b44(param_1,0x10000,0x30000);
  return;
}



// Function: FUN_10004371 @ 0x10004371

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004371(void)

{
  if (_DAT_1000e208 < _DAT_1000e210 - (_DAT_1000e210 / _DAT_1000e218) * _DAT_1000e218) {
    return 1;
  }
  return 0;
}



// Function: FUN_100043af @ 0x100043af

void FUN_100043af(void)

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
  FUN_10004371();
  return;
}



// Function: FUN_100043d8 @ 0x100043d8

void __cdecl FUN_100043d8(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_10005cea((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10010760 < 2) {
        uVar3 = (byte)PTR_DAT_1001076c[*param_1 * 2] & 4;
        this = PTR_DAT_1001076c;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_10005c75(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10010764;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __fassign @ 0x10004498

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
    FUN_100061b6(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_100061e3(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// Function: FUN_100044d6 @ 0x100044d6

undefined1 * __cdecl FUN_100044d6(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10006287((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10006210(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10004537(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// Function: FUN_10004537 @ 0x10004537

undefined1 * __cdecl
FUN_10004537(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_100047d9(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_10010764;
  }
  puVar3 = FUN_100063a0((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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



// Function: FUN_100045f9 @ 0x100045f9

char * __cdecl FUN_100045f9(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10006287((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10006210(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_1000464e(param_2,param_3,&local_14,'\0');
  return param_2;
}



// Function: FUN_1000464e @ 0x1000464e

char * __cdecl FUN_1000464e(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_100047d9(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_100047d9(pcVar3,1);
    *pcVar3 = DAT_10010764;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_100047d9(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_100046f5 @ 0x100046f5

void __cdecl FUN_100046f5(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10006287((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10006210(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10004537(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_1000464e(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x10004788

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_100044d6(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_100045f9(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_100046f5(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// Function: FUN_100047d9 @ 0x100047d9

void __cdecl FUN_100047d9(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_100064f0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_100047fe @ 0x100047fe

undefined4 FUN_100047fe(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100069f1();
  DAT_10010698 = TlsAlloc();
  if (DAT_10010698 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100068b4(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10010698,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10004870((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10004852 @ 0x10004852

void FUN_10004852(void)

{
  FUN_10006a1a();
  if (DAT_10010698 != 0xffffffff) {
    TlsFree(DAT_10010698);
    DAT_10010698 = 0xffffffff;
  }
  return;
}



// Function: FUN_10004870 @ 0x10004870

void __cdecl FUN_10004870(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10010a70;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10004883 @ 0x10004883

DWORD * FUN_10004883(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10010698);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_100068b4(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10010698,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10004870((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_100048de;
      }
    }
    __amsg_exit(0x10);
  }
LAB_100048de:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_100048ea @ 0x100048ea

void __cdecl FUN_100048ea(undefined *param_1)

{
  if (DAT_10010698 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10010698), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10006afc(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10006afc(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10006afc(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10006afc(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10006afc(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10006afc(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10010a70) {
        FUN_10006afc(*(undefined **)(param_1 + 0x50));
      }
      FUN_10006afc(param_1);
    }
    TlsSetValue(DAT_10010698,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_1000498a @ 0x1000498a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_1000498a(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

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
    iVar4 = *(int *)(&DAT_10010bdc + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_10006be5();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5)
            * 0x3c + DAT_10010af8 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_10010afc != 0)) &&
        (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_10006e9a(local_28),
        CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + _DAT_10010b00;
    }
  }
  return iVar2;
}



// Function: FUN_10004a4c @ 0x10004a4c

void FUN_10004a4c(void)

{
  if (PTR_FUN_10010670 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10010670)();
  }
  FUN_10004b50((undefined4 *)&DAT_1001003c,(undefined4 *)&DAT_10010050);
  FUN_10004b50((undefined4 *)&DAT_10010000,(undefined4 *)&DAT_10010038);
  return;
}



// Function: __exit @ 0x10004a79

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10004a99(_Code,1,0);
  return;
}



// Function: FUN_10004a8a @ 0x10004a8a

void FUN_10004a8a(void)

{
  FUN_10004a99(0,0,1);
  return;
}



// Function: FUN_10004a99 @ 0x10004a99

void __cdecl FUN_10004a99(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10004b3e();
  if (DAT_10027884 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10027880 = 1;
  DAT_1002787c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10028f70 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10028f6c - 4), DAT_10028f70 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10028f70 <= puVar1);
    }
    FUN_10004b50((undefined4 *)&DAT_10010054,(undefined4 *)&DAT_1001005c);
  }
  FUN_10004b50((undefined4 *)&DAT_10010060,(undefined4 *)&DAT_10010068);
  if (param_3 == 0) {
    DAT_10027884 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10004b47();
  return;
}



// Function: FUN_10004b3e @ 0x10004b3e

void FUN_10004b3e(void)

{
  FUN_10006a86(0xd);
  return;
}



// Function: FUN_10004b47 @ 0x10004b47

void FUN_10004b47(void)

{
  FUN_10006ae7(0xd);
  return;
}



// Function: FUN_10004b50 @ 0x10004b50

void __cdecl FUN_10004b50(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10004b6a @ 0x10004b6a

byte * __cdecl FUN_10004b6a(byte *param_1,uint *param_2)

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
  puStack_c = &DAT_1000e258;
  puStack_10 = &LAB_10008810;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_10006afc(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_10028e44 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10006a86(9);
            local_8 = 0;
            local_2c = (uint *)FUN_100071ef((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_10028e3c) {
                iVar1 = FUN_100079f8(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_10007543(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_100083e0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_100071ef((int)param_1);
                    FUN_1000721a(local_2c,(int)param_1);
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
                local_28 = HeapAlloc(DAT_10028e40,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_100083e0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_1000721a(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_10004cf5();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_10028e40,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_10027abc == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_100083bb(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_10028e44 == 2) {
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
              FUN_10006a86(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_10007f4a(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_10028e40,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_10012c3c) {
                  iVar1 = FUN_10008312(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_10007fe6((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_100083e0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_10007fa1(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_10028e40,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_100083e0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10007fa1(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_10004e43();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_10027abc == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_100083bb(param_2);
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
              pbVar3 = HeapReAlloc(DAT_10028e40,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_10027abc == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_100083bb(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



// Function: FUN_10004cf5 @ 0x10004cf5

void FUN_10004cf5(void)

{
  FUN_10006ae7(9);
  return;
}



// Function: FUN_10004e43 @ 0x10004e43

void FUN_10004e43(void)

{
  FUN_10006ae7(9);
  return;
}



// Function: FUN_10004e99 @ 0x10004e99

SIZE_T __cdecl FUN_10004e99(undefined *param_1)

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
  puStack_c = &DAT_1000e270;
  puStack_10 = &LAB_10008810;
  local_14 = ExceptionList;
  if (DAT_10028e44 == 3) {
    ExceptionList = &local_14;
    FUN_10006a86(9);
    local_8 = 0;
    local_20 = (byte *)FUN_100071ef((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10004f03();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10028e44 != 2) goto LAB_10004f57;
    ExceptionList = &local_14;
    FUN_10006a86(9);
    local_8 = 1;
    local_2c = (byte *)FUN_10007f4a(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10004f7e();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_10004f57:
  SVar2 = HeapSize(DAT_10028e40,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}



// Function: FUN_10004f03 @ 0x10004f03

void FUN_10004f03(void)

{
  FUN_10006ae7(9);
  return;
}



// Function: FUN_10004f7e @ 0x10004f7e

void FUN_10004f7e(void)

{
  FUN_10006ae7(9);
  return;
}



// Function: _malloc @ 0x10004f87

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10027abc);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10004f99

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10004fc5((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_100083bb(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10004fc5 @ 0x10004fc5

void __cdecl FUN_10004fc5(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000e288;
  puStack_10 = &LAB_10008810;
  local_14 = ExceptionList;
  if (DAT_10028e44 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10028e3c) {
      ExceptionList = &local_14;
      FUN_10006a86(9);
      local_8 = 0;
      piVar1 = FUN_10007543(param_1);
      local_8 = 0xffffffff;
      FUN_1000502c();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10028e44 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10012c3c) {
        ExceptionList = &local_14;
        FUN_10006a86(9);
        local_8 = 1;
        piVar1 = FUN_10007fe6(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_1000508b();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_100050a4;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_100050a4:
  HeapAlloc(DAT_10028e40,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000502c @ 0x1000502c

void FUN_1000502c(void)

{
  FUN_10006ae7(9);
  return;
}



// Function: FUN_1000508b @ 0x1000508b

void FUN_1000508b(void)

{
  FUN_10006ae7(9);
  return;
}



// Function: FUN_100050c1 @ 0x100050c1

void FUN_100050c1(void)

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
  DAT_10028f60 = 0x20;
  DAT_10028e60 = puVar2;
  for (; puVar2 < DAT_10028e60 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10028f60 < (int)UVar8) {
      puVar2 = &DAT_10028e64;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10028f60;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10028f60 = DAT_10028f60 + 0x20;
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
      } while ((int)DAT_10028f60 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10028e60)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10028e60 + iVar6 * 9;
    if (DAT_10028e60[iVar6 * 9] == -1) {
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
          goto LAB_10005266;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10005266:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10028f60);
      return;
    }
  } while( true );
}



// Function: FUN_1000527d @ 0x1000527d

void FUN_1000527d(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10028e60;
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
      FUN_10006afc((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10028f60);
  return;
}



// Function: FUN_100052d1 @ 0x100052d1

void FUN_100052d1(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10028f68 == 0) {
    FUN_100091cd();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10027834; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_10027864 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10027834;
  puVar6 = DAT_10027834;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100063a0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10006afc((undefined *)DAT_10027834);
  DAT_10027834 = (uint *)0x0;
  *puVar3 = 0;
  DAT_10028f64 = 1;
  return;
}



// Function: FUN_1000538a @ 0x1000538a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000538a(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10028f68 == 0) {
    FUN_100091cd();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10027888,0x104);
  _DAT_10027874 = &DAT_10027888;
  pbVar2 = &DAT_10027888;
  if (*DAT_10028f74 != 0) {
    pbVar2 = DAT_10028f74;
  }
  FUN_10005423(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10005423(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1002785c = puVar1;
  _DAT_10027858 = local_8 + -1;
  return;
}



// Function: FUN_10005423 @ 0x10005423

void __cdecl FUN_10005423(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10027d00 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10027d00 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_100054ce;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_100054ce:
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
          if ((*(byte *)((int)&DAT_10027d00 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10027d00 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_100055d7 @ 0x100055d7

LPSTR FUN_100055d7(void)

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
  if (DAT_1002798c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1002798c = 1;
LAB_1000562e:
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
        FUN_10006afc(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1002798c = 2;
  }
  else {
    if (DAT_1002798c == 1) goto LAB_1000562e;
    if (DAT_1002798c != 2) {
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
    FUN_100083e0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10005709 @ 0x10005709

void __cdecl FUN_10005709(undefined4 *param_1)

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



// Function: FUN_10005736 @ 0x10005736

int FUN_10005736(void)

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
  
  FUN_100095a0();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x70;
    aCStackY_18[1] = 'W';
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
      aCStackY_18[0] = -0x32;
      aCStackY_18[1] = 'W';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -0x10;
        aCStackY_18[1] = 'W';
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
        aCStackY_18[0] = 'V';
        aCStackY_18[1] = 'X';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_100091e9(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10005709((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_1000587e @ 0x1000587e

undefined4 __cdecl FUN_1000587e(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10028e40 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10028e40 != (HANDLE)0x0) {
    DAT_10028e44 = FUN_10005736();
    if (DAT_10028e44 == 3) {
      ppuVar1 = (undefined **)FUN_100071a7(0x3f8);
    }
    else {
      if (DAT_10028e44 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10007cee();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10028e40);
  }
  return 0;
}



// Function: FUN_100058db @ 0x100058db

void FUN_100058db(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10028e44 == 3) {
    iVar1 = 0;
    if (0 < DAT_10028e34) {
      puVar2 = (undefined4 *)((int)DAT_10028e38 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10028e40,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10028e34);
    }
    HeapFree(DAT_10028e40,0,DAT_10028e38);
  }
  else if (DAT_10028e44 == 2) {
    ppuVar3 = &PTR_LOOP_10010c18;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10010c18);
  }
  HeapDestroy(DAT_10028e40);
  return;
}



// Function: FUN_10005983 @ 0x10005983

void FUN_10005983(void)

{
  if ((DAT_1002783c == 1) || ((DAT_1002783c == 0 && (DAT_10027840 == 1)))) {
    FUN_100059bc(0xfc);
    if (DAT_10027990 != (code *)0x0) {
      (*DAT_10027990)();
    }
    FUN_100059bc(0xff);
  }
  return;
}



// Function: FUN_100059bc @ 0x100059bc

void __cdecl FUN_100059bc(DWORD param_1)

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
  pDVar2 = &DAT_100106d0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10010760);
  if (param_1 == (&DAT_100106d0)[iVar5 * 2]) {
    if ((DAT_1002783c == 1) || ((DAT_1002783c == 0 && (DAT_10027840 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100106d4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100063a0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100063a0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100063b0(local_a4,_Dest);
      FUN_100063b0(local_a4,(uint *)&DAT_1000e5f8);
      FUN_100063b0(local_a4,*(uint **)(iVar5 * 8 + 0x100106d4));
      auStackY_1e3._3_4_ = 0x10005ae0;
      FUN_100095cf(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10005b0f @ 0x10005b0f

uint __thiscall FUN_10005b0f(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10005b5a(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10005bec(uVar1);
  return uVar1;
}



// Function: FUN_10005b44 @ 0x10005b44

void __thiscall FUN_10005b44(void *this,uint param_1,uint param_2)

{
  FUN_10005b0f(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// Function: FUN_10005b5a @ 0x10005b5a

uint __cdecl FUN_10005b5a(uint param_1)

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



// Function: FUN_10005bec @ 0x10005bec

uint __cdecl FUN_10005bec(uint param_1)

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



// Function: FUN_10005c75 @ 0x10005c75

uint __thiscall FUN_10005c75(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1001076c + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1001076c[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000991d(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10005cea @ 0x10005cea

uint __cdecl FUN_10005cea(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10027b00 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10027be8);
    bVar1 = DAT_10027be4 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10027be8);
      this = (void *)0x13;
      FUN_10006a86(0x13);
    }
    param_1 = FUN_10005d59(this,param_1);
    if (bVar1) {
      FUN_10006ae7(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10027be8);
    }
  }
  return param_1;
}



// Function: FUN_10005d59 @ 0x10005d59

uint __thiscall FUN_10005d59(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10027b00 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10010760 < 2) {
        uVar2 = (byte)PTR_DAT_1001076c[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10005c75(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1001076c[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10009a66(DAT_10027b00,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_10005e24 @ 0x10005e24

undefined4 __cdecl FUN_10005e24(int param_1,int param_2)

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



// Function: FUN_10005e6d @ 0x10005e6d

void __cdecl FUN_10005e6d(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_10009cb5(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_10009cb5(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Function: FUN_10005ec3 @ 0x10005ec3

undefined4 __cdecl FUN_10005ec3(int param_1,int param_2)

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
     (iVar2 = FUN_10005e24(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10005e6d(param_1,param_2 + -1);
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



// Function: FUN_10005f4f @ 0x10005f4f

void __cdecl FUN_10005f4f(int param_1,undefined4 *param_2)

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



// Function: FUN_10005f6a @ 0x10005f6a

void __cdecl FUN_10005f6a(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_10005f76 @ 0x10005f76

undefined4 __cdecl FUN_10005f76(int *param_1)

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



// Function: FUN_10005f91 @ 0x10005f91

void __cdecl FUN_10005f91(uint *param_1,uint param_2)

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



// Function: FUN_1000601e @ 0x1000601e

undefined4 __cdecl FUN_1000601e(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_10005f76((int *)&local_10);
    if (iVar2 != 0) {
LAB_1000614a:
      uVar5 = 0;
      goto LAB_1000614c;
    }
    FUN_10005f6a(&local_10);
  }
  else {
    FUN_10005f4f((int)local_1c,&local_10);
    iVar2 = FUN_10005ec3((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10005f6a(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10005f6a(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10005f91(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_1000614c;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10005f91(&local_10,param_3[3]);
        goto LAB_1000614a;
      }
      FUN_10005f4f((int)&local_10,local_1c);
      FUN_10005f91(&local_10,iVar2 - iVar4);
      FUN_10005ec3((int)&local_10,param_3[2]);
      FUN_10005f91(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_1000614c:
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



// Function: FUN_1000618a @ 0x1000618a

void __cdecl FUN_1000618a(ushort *param_1,uint *param_2)

{
  FUN_1000601e(param_1,param_2,(int *)&DAT_10010978);
  return;
}



// Function: FUN_100061a0 @ 0x100061a0

void __cdecl FUN_100061a0(ushort *param_1,uint *param_2)

{
  FUN_1000601e(param_1,param_2,(int *)&DAT_10010990);
  return;
}



// Function: FUN_100061b6 @ 0x100061b6

void __thiscall FUN_100061b6(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_10009e56(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1000618a(local_10,param_1);
  return;
}



// Function: FUN_100061e3 @ 0x100061e3

void __thiscall FUN_100061e3(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_10009e56(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_100061a0(local_10,param_1);
  return;
}



// Function: FUN_10006210 @ 0x10006210

void __cdecl FUN_10006210(char *param_1,int param_2,int param_3)

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
    FUN_100064f0((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// Function: FUN_10006287 @ 0x10006287

int * __cdecl FUN_10006287(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_100062e3(&local_10,&param_1);
  iVar3 = FUN_1000a327(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_100063a0(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// Function: FUN_100062e3 @ 0x100062e3

void __cdecl FUN_100062e3(uint *param_1,uint *param_2)

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



// Function: FUN_100063a0 @ 0x100063a0

uint * __cdecl FUN_100063a0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10006488;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10006488:
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



// Function: FUN_100063b0 @ 0x100063b0

uint * __cdecl FUN_100063b0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100063cc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100063ff;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000641b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100063cc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000641b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000641b;
    }
  }
LAB_100063ff:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000641b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10006488:
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
    if (bVar1 == 0) goto LAB_10006488;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _memset @ 0x10006490

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



// Function: FUN_100064f0 @ 0x100064f0

undefined4 * __cdecl FUN_100064f0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100066a7_caseD_2;
        case 3:
          goto switchD_100066a7_caseD_3;
        }
        goto switchD_100066a7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100066a7_caseD_0;
      case 1:
        goto switchD_100066a7_caseD_1;
      case 2:
        goto switchD_100066a7_caseD_2;
      case 3:
        goto switchD_100066a7_caseD_3;
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
              goto switchD_100066a7_caseD_2;
            case 3:
              goto switchD_100066a7_caseD_3;
            }
            goto switchD_100066a7_caseD_1;
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
              goto switchD_100066a7_caseD_2;
            case 3:
              goto switchD_100066a7_caseD_3;
            }
            goto switchD_100066a7_caseD_1;
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
              goto switchD_100066a7_caseD_2;
            case 3:
              goto switchD_100066a7_caseD_3;
            }
            goto switchD_100066a7_caseD_1;
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
switchD_100066a7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100066a7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100066a7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100066a7_caseD_0:
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
        goto switchD_10006525_caseD_2;
      case 3:
        goto switchD_10006525_caseD_3;
      }
      goto switchD_10006525_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10006525_caseD_0;
    case 1:
      goto switchD_10006525_caseD_1;
    case 2:
      goto switchD_10006525_caseD_2;
    case 3:
      goto switchD_10006525_caseD_3;
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
            goto switchD_10006525_caseD_2;
          case 3:
            goto switchD_10006525_caseD_3;
          }
          goto switchD_10006525_caseD_1;
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
            goto switchD_10006525_caseD_2;
          case 3:
            goto switchD_10006525_caseD_3;
          }
          goto switchD_10006525_caseD_1;
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
            goto switchD_10006525_caseD_2;
          case 3:
            goto switchD_10006525_caseD_3;
          }
          goto switchD_10006525_caseD_1;
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
switchD_10006525_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10006525_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10006525_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10006525_caseD_0:
  return param_1;
}



// Function: _strlen @ 0x10006830

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10006850;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10006883:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10006850:
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
  goto LAB_10006883;
}



// Function: FUN_100068b4 @ 0x100068b4

int * __cdecl FUN_100068b4(int param_1,int param_2)

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
  puStack_c = &DAT_1000e638;
  puStack_10 = &LAB_10008810;
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
      if (DAT_10028e44 == 3) {
        if (puVar2 <= DAT_10028e3c) {
          FUN_10006a86(9);
          local_8 = 0;
          local_24 = FUN_10007543(puVar2);
          local_8 = 0xffffffff;
          FUN_1000694d();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_100069a1;
LAB_10006990:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1000699c:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10028e44 != 2) || (DAT_10012c3c < puVar3)) goto LAB_1000699c;
        FUN_10006a86(9);
        local_8 = 1;
        local_24 = FUN_10007fe6((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_100069d6();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10006990;
      }
LAB_100069a1:
      local_24 = HeapAlloc(DAT_10028e40,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10027abc == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_100083bb(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_1000694d @ 0x1000694d

void FUN_1000694d(void)

{
  FUN_10006ae7(9);
  return;
}



// Function: FUN_100069d6 @ 0x100069d6

void FUN_100069d6(void)

{
  FUN_10006ae7(9);
  return;
}



// Function: FUN_100069f1 @ 0x100069f1

void FUN_100069f1(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100109f4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100109e4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100109d4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100109b4);
  return;
}



// Function: FUN_10006a1a @ 0x10006a1a

void FUN_10006a1a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100109b0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100109f4)) && (ppuVar1 != &PTR_DAT_100109e4)) &&
       ((ppuVar1 != &PTR_DAT_100109d4 && (ppuVar1 != &PTR_DAT_100109b4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10006afc(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10010a70);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100109d4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100109e4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100109f4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100109b4);
  return;
}



// Function: FUN_10006a86 @ 0x10006a86

void __cdecl FUN_10006a86(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100109b0 + param_1;
  if ((&DAT_100109b0)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10006a86(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10006afc((undefined *)lpCriticalSection);
    }
    FUN_10006ae7(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10006ae7 @ 0x10006ae7

void __cdecl FUN_10006ae7(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100109b0)[param_1]);
  return;
}



// Function: FUN_10006afc @ 0x10006afc

void __cdecl FUN_10006afc(undefined *param_1)

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
  puStack_c = &DAT_1000e650;
  puStack_10 = &LAB_10008810;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10028e44 == 3) {
    ExceptionList = &local_14;
    FUN_10006a86(9);
    local_8 = 0;
    local_20 = (uint *)FUN_100071ef((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_1000721a(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10006b66();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10028e44 != 2) goto LAB_10006bc8;
    ExceptionList = &local_14;
    FUN_10006a86(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10007f4a(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10007fa1(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10006bbe();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10006bc8:
  HeapFree(DAT_10028e40,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10006b66 @ 0x10006b66

void FUN_10006b66(void)

{
  FUN_10006ae7(9);
  return;
}



// Function: FUN_10006bbe @ 0x10006bbe

void FUN_10006bbe(void)

{
  FUN_10006ae7(9);
  return;
}



// Function: FUN_10006be5 @ 0x10006be5

void FUN_10006be5(void)

{
  if (DAT_10027ab0 == 0) {
    FUN_10006a86(0xb);
    if (DAT_10027ab0 == 0) {
      FUN_10006c13();
      DAT_10027ab0 = DAT_10027ab0 + 1;
    }
    FUN_10006ae7(0xb);
  }
  return;
}



// Function: FUN_10006c13 @ 0x10006c13

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006c13(void)

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
  
  FUN_10006a86(0xc);
  DAT_10010ba0 = 0xffffffff;
  DAT_10010b90 = 0xffffffff;
  DAT_100279f8 = 0;
  _Str1 = (uint *)FUN_1000a6d4("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10006ae7(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10027a00);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_10010af8 = (void *)(DAT_10027a00 * 0x3c);
    DAT_100279f8 = 1;
    if (DAT_10027a46 != 0) {
      DAT_10010af8 = (void *)((int)DAT_10010af8 + DAT_10027a54 * 0x3c);
    }
    if ((DAT_10027a9a == 0) || (DAT_10027aa8 == 0)) {
      DAT_10010afc = 0;
      _DAT_10010b00 = 0;
    }
    else {
      DAT_10010afc = 1;
      _DAT_10010b00 = (DAT_10027aa8 - DAT_10027a54) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_10027b10,0x220,(LPCWSTR)&DAT_10027a04,-1,PTR_DAT_10010b84,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_10010b84 = 0;
    }
    else {
      PTR_DAT_10010b84[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_10027b10,0x220,(LPCWSTR)&DAT_10027a58,-1,PTR_DAT_10010b88,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_10010b88[0x3f] = 0;
      return;
    }
LAB_10006e84:
    *PTR_DAT_10010b88 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_10027aac == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_10027aac), iVar4 != 0)))) {
      FUN_10006afc((undefined *)DAT_10027aac);
      sVar5 = _strlen((char *)_Str1);
      DAT_10027aac = _malloc(sVar5 + 1);
      if (DAT_10027aac != (uint *)0x0) {
        FUN_100063a0(DAT_10027aac,_Str1);
        FUN_10006ae7(0xc);
        _strncpy(PTR_DAT_10010b84,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_10010b84[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_1000a5ba(this,(byte *)_Source);
        DAT_10010af8 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_1000a5ba(DAT_10010af8,(byte *)_Source);
          DAT_10010af8 = (void *)((int)DAT_10010af8 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_1000a5ba(DAT_10010af8,(byte *)_Source);
            DAT_10010af8 = (void *)((int)DAT_10010af8 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_10010af8 = (void *)-(int)DAT_10010af8;
        }
        DAT_10010afc = (int)(char)*_Source;
        if (DAT_10010afc != 0) {
          _strncpy(PTR_DAT_10010b88,(char *)_Source,3);
          PTR_DAT_10010b88[3] = 0;
          return;
        }
        goto LAB_10006e84;
      }
    }
    FUN_10006ae7(0xc);
  }
  return;
}



// Function: FUN_10006e9a @ 0x10006e9a

bool __cdecl FUN_10006e9a(int *param_1)

{
  bool bVar1;
  
  FUN_10006a86(0xb);
  bVar1 = FUN_10006ebb(param_1);
  FUN_10006ae7(0xb);
  return bVar1;
}



// Function: FUN_10006ebb @ 0x10006ebb

bool __cdecl FUN_10006ebb(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_10010afc != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_10010b90) || (uVar5 != DAT_10010ba0)) {
      if (DAT_100279f8 == 0) {
        FUN_10007067(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_10007067(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_10027a98 != 0) {
          uVar6 = (uint)DAT_10027a9e;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_10027a9c;
          uVar6 = 0;
          uVar4 = (uint)DAT_10027a9e;
        }
        FUN_10007067(1,(uint)(DAT_10027a98 == 0),uVar5,(uint)DAT_10027a9a,uVar4,uVar3,uVar6,
                     (uint)DAT_10027aa0,(uint)DAT_10027aa2,(uint)DAT_10027aa4,(uint)DAT_10027aa6);
        if (DAT_10027a44 != 0) {
          uVar6 = (uint)DAT_10027a4a;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_10027a48;
          uVar6 = 0;
          uVar4 = (uint)DAT_10027a4a;
          uVar5 = param_1[5];
        }
        FUN_10007067(0,(uint)(DAT_10027a44 == 0),uVar5,(uint)DAT_10027a46,uVar4,uVar3,uVar6,
                     (uint)DAT_10027a4c,(uint)DAT_10027a4e,(uint)DAT_10027a50,(uint)DAT_10027a52);
      }
    }
    iVar1 = param_1[7];
    if (DAT_10010b94 < DAT_10010ba4) {
      if ((DAT_10010b94 <= iVar1) && (iVar1 <= DAT_10010ba4)) {
        if ((DAT_10010b94 < iVar1) && (iVar1 < DAT_10010ba4)) {
          return true;
        }
LAB_10007033:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_10010b94) {
          return DAT_10010b98 <= iVar2;
        }
        return iVar2 < DAT_10010ba8;
      }
    }
    else {
      if (iVar1 < DAT_10010ba4) {
        return true;
      }
      if (DAT_10010b94 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_10010ba4) || (DAT_10010b94 <= iVar1)) goto LAB_10007033;
    }
  }
  return false;
}



// Function: FUN_10007067 @ 0x10007067

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10007067(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_10010ba8)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_10010bdc + param_4 * 4);
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
        iVar2 = *(int *)(&DAT_10010bac + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_10010be0 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_10010ba8)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_10010bdc + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_10010b90 = param_3;
    DAT_10010b98 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_10010b94 = iVar1;
  }
  else {
    DAT_10010ba8 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_10010b00 + param_10) * 1000 + param_11;
    if (DAT_10010ba8 < 0) {
      DAT_10010ba8 = DAT_10010ba8 + 86400000;
      DAT_10010ba4 = iVar1 + -1;
    }
    else {
      DAT_10010ba4 = iVar1;
      if (86399999 < DAT_10010ba8) {
        DAT_10010ba8 = DAT_10010ba8 + -86400000;
        DAT_10010ba4 = iVar1 + 1;
      }
    }
    DAT_10010ba0 = param_3;
  }
  return;
}



// Function: FUN_100071a7 @ 0x100071a7

undefined4 __cdecl FUN_100071a7(undefined4 param_1)

{
  DAT_10028e38 = HeapAlloc(DAT_10028e40,0,0x140);
  if (DAT_10028e38 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10028e30 = 0;
  DAT_10028e34 = 0;
  DAT_10028e2c = DAT_10028e38;
  DAT_10028e3c = param_1;
  DAT_10028e24 = 0x10;
  return 1;
}



// Function: FUN_100071ef @ 0x100071ef

uint __cdecl FUN_100071ef(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10028e38;
  while( true ) {
    if (DAT_10028e38 + DAT_10028e34 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_1000721a @ 0x1000721a

void __cdecl FUN_1000721a(uint *param_1,int param_2)

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
      if (DAT_10028e30 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10028e28 * 0x8000 + DAT_10028e30[3]),0x8000,0x4000);
        DAT_10028e30[2] = DAT_10028e30[2] | 0x80000000U >> ((byte)DAT_10028e28 & 0x1f);
        *(undefined4 *)(DAT_10028e30[4] + 0xc4 + DAT_10028e28 * 4) = 0;
        *(char *)(DAT_10028e30[4] + 0x43) = *(char *)(DAT_10028e30[4] + 0x43) + -1;
        if (*(char *)(DAT_10028e30[4] + 0x43) == '\0') {
          DAT_10028e30[1] = DAT_10028e30[1] & 0xfffffffe;
        }
        if (DAT_10028e30[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10028e30[3],0,0x8000);
          HeapFree(DAT_10028e40,0,(LPVOID)DAT_10028e30[4]);
          FUN_100064f0(DAT_10028e30,DAT_10028e30 + 5,
                       (DAT_10028e34 * 0x14 - (int)DAT_10028e30) + -0x14 + DAT_10028e38);
          DAT_10028e34 = DAT_10028e34 + -1;
          if (DAT_10028e30 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10028e2c = DAT_10028e38;
        }
      }
      DAT_10028e30 = param_1;
      DAT_10028e28 = uVar14;
    }
  }
  return;
}



// Function: FUN_10007543 @ 0x10007543

int * __cdecl FUN_10007543(uint *param_1)

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
  
  puVar8 = DAT_10028e38 + DAT_10028e34 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10028e2c;
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
  puVar11 = DAT_10028e38;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10028e2c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10028e2c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10028e38;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10028e2c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10028e2c) && (param_1 = FUN_1000784c(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100078fd((int)param_1);
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
  DAT_10028e2c = param_1;
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
    if (iVar9 == 0) goto LAB_10007809;
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
LAB_10007809:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10028e30)) && (local_8 == DAT_10028e28)) {
    DAT_10028e30 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_1000784c @ 0x1000784c

undefined4 * FUN_1000784c(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10028e34 == DAT_10028e24) {
    pvVar2 = HeapReAlloc(DAT_10028e40,0,DAT_10028e38,(DAT_10028e24 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10028e24 = DAT_10028e24 + 0x10;
    DAT_10028e38 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10028e38 + DAT_10028e34 * 0x14);
  pvVar2 = HeapAlloc(DAT_10028e40,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10028e34 = DAT_10028e34 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10028e40,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100078fd @ 0x100078fd

int __cdecl FUN_100078fd(int param_1)

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



// Function: FUN_100079f8 @ 0x100079f8

undefined4 __cdecl FUN_100079f8(uint *param_1,int param_2,int param_3)

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



// Function: FUN_10007cee @ 0x10007cee

undefined ** FUN_10007cee(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10010c28 == -1) {
    lpMem = &PTR_LOOP_10010c18;
  }
  else {
    lpMem = HeapAlloc(DAT_10028e40,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10010c18) {
        if (PTR_LOOP_10010c18 == (undefined *)0x0) {
          PTR_LOOP_10010c18 = (undefined *)&PTR_LOOP_10010c18;
        }
        if (PTR_LOOP_10010c1c == (undefined *)0x0) {
          PTR_LOOP_10010c1c = (undefined *)&PTR_LOOP_10010c18;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10010c18;
        lpMem[1] = PTR_LOOP_10010c1c;
        PTR_LOOP_10010c1c = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_10010c18) {
    HeapFree(DAT_10028e40,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_10007e32 @ 0x10007e32

void __cdecl FUN_10007e32(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10012c38 == param_1) {
    PTR_LOOP_10012c38 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10010c18) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10028e40,0,param_1);
    return;
  }
  DAT_10010c28 = 0xffffffff;
  return;
}



// Function: FUN_10007e88 @ 0x10007e88

void __cdecl FUN_10007e88(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_10010c1c;
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
            DAT_10027ab4 = DAT_10027ab4 + -1;
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
          FUN_10007e32(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_10010c1c) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_10007f4a @ 0x10007f4a

int __cdecl FUN_10007f4a(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10010c18;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10010c18) {
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



// Function: FUN_10007fa1 @ 0x10007fa1

void __cdecl FUN_10007fa1(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10027ab4 = DAT_10027ab4 + 1, DAT_10027ab4 == 0x20)) {
    FUN_10007e88(0x10);
  }
  return;
}



// Function: FUN_10007fe6 @ 0x10007fe6

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10007fe6(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_10012c38;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_100081ee(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_100080b1;
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
          piVar5 = (int *)FUN_100081ee(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_100080b1:
            PTR_LOOP_10012c38 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_10012c38) {
      ppuVar9 = &PTR_LOOP_10010c18;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_10010c18) {
          ppuVar9 = FUN_10007cee();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10012c38 = (undefined *)ppuVar9;
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
      PTR_LOOP_10012c38 = (undefined *)ppuVar9;
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



// Function: FUN_100081ee @ 0x100081ee

int __cdecl FUN_100081ee(int *param_1,uint param_2,uint param_3)

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
          goto LAB_10008301;
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
LAB_10008301:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_10008312 @ 0x10008312

undefined4 __cdecl FUN_10008312(int param_1,int *param_2,byte *param_3,uint param_4)

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



// Function: FUN_100083bb @ 0x100083bb

undefined4 __cdecl FUN_100083bb(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10027ab8 != (code *)0x0) {
    iVar1 = (*DAT_10027ab8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_100083e0 @ 0x100083e0

undefined4 * __cdecl FUN_100083e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10008597_caseD_2;
        case 3:
          goto switchD_10008597_caseD_3;
        }
        goto switchD_10008597_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10008597_caseD_0;
      case 1:
        goto switchD_10008597_caseD_1;
      case 2:
        goto switchD_10008597_caseD_2;
      case 3:
        goto switchD_10008597_caseD_3;
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
              goto switchD_10008597_caseD_2;
            case 3:
              goto switchD_10008597_caseD_3;
            }
            goto switchD_10008597_caseD_1;
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
              goto switchD_10008597_caseD_2;
            case 3:
              goto switchD_10008597_caseD_3;
            }
            goto switchD_10008597_caseD_1;
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
              goto switchD_10008597_caseD_2;
            case 3:
              goto switchD_10008597_caseD_3;
            }
            goto switchD_10008597_caseD_1;
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
switchD_10008597_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10008597_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10008597_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10008597_caseD_0:
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
        goto switchD_10008415_caseD_2;
      case 3:
        goto switchD_10008415_caseD_3;
      }
      goto switchD_10008415_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10008415_caseD_0;
    case 1:
      goto switchD_10008415_caseD_1;
    case 2:
      goto switchD_10008415_caseD_2;
    case 3:
      goto switchD_10008415_caseD_3;
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
            goto switchD_10008415_caseD_2;
          case 3:
            goto switchD_10008415_caseD_3;
          }
          goto switchD_10008415_caseD_1;
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
            goto switchD_10008415_caseD_2;
          case 3:
            goto switchD_10008415_caseD_3;
          }
          goto switchD_10008415_caseD_1;
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
            goto switchD_10008415_caseD_2;
          case 3:
            goto switchD_10008415_caseD_3;
          }
          goto switchD_10008415_caseD_1;
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
switchD_10008415_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10008415_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10008415_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10008415_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x10008718

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10008730,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000875a

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
  puStack_18 = &LAB_10008738;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100087ee();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: __abnormal_termination @ 0x100087c2

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10008738) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// Function: __NLG_Notify1 @ 0x100087e5

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10012c48 = param_1;
  DAT_10012c44 = in_EAX;
  DAT_10012c4c = unaff_EBP;
  return;
}



// Function: FUN_100087ee @ 0x100087ee

void FUN_100087ee(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10012c48 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10012c44 = in_EAX;
  DAT_10012c4c = unaff_EBP;
  return;
}



// Function: FUN_100088cd @ 0x100088cd

void FUN_100088cd(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_100088e8 @ 0x100088e8

DWORD __cdecl FUN_100088e8(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10028f60) &&
     ((*(byte *)((&DAT_10028e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000a897(param_1);
    DVar1 = FUN_1000894d(param_1,param_2,param_3);
    FUN_1000a8f6(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1000a7c4();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a7cd();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_1000894d @ 0x1000894d

DWORD __cdecl FUN_1000894d(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_1000a855(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000a7c4();
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
      pbVar1 = (byte *)((&DAT_10028e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1000a751(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_100089c0 @ 0x100089c0

int __cdecl FUN_100089c0(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10028f60) &&
     ((*(byte *)((&DAT_10028e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000a897(param_1);
    iVar1 = FUN_10008a25(param_1,param_2,param_3);
    FUN_1000a8f6(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000a7c4();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a7cd();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10008a25 @ 0x10008a25

int __cdecl FUN_10008a25(DWORD param_1,char *param_2,uint param_3)

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
LAB_10008a3e:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10028e60 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1000894d(param_1,0,2);
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
LAB_10008b0d:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10008b7f;
      if (param_1 == 5) {
        pDVar7 = FUN_1000a7c4();
        *pDVar7 = 9;
        pDVar7 = FUN_1000a7cd();
        *pDVar7 = 5;
      }
      else {
        FUN_1000a751(param_1);
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
            goto LAB_10008b0d;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10008b0d;
        } while( true );
      }
LAB_10008b7f:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10008a3e;
      pDVar7 = FUN_1000a7c4();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1000a7cd();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_10008c6c @ 0x10008c6c

void __cdecl FUN_10008c6c(uint param_1)

{
  if ((0x10012c4f < param_1) && (param_1 < 0x10012eb1)) {
    FUN_10006a86(((int)(param_1 + 0xeffed3b0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10008c9b @ 0x10008c9b

void __cdecl FUN_10008c9b(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10006a86(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_10008cbe @ 0x10008cbe

void __cdecl FUN_10008cbe(uint param_1)

{
  if ((0x10012c4f < param_1) && (param_1 < 0x10012eb1)) {
    FUN_10006ae7(((int)(param_1 + 0xeffed3b0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10008ced @ 0x10008ced

void __cdecl FUN_10008ced(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10006ae7(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_10008df5 @ 0x10008df5

undefined4 __cdecl FUN_10008df5(int param_1)

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
  
  FUN_10006a86(0x19);
  CodePage = FUN_10008fa2(param_1);
  if (CodePage != DAT_10027bec) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10012ed8;
LAB_10008e32:
      if (*pUVar5 != CodePage) goto code_r0x10008e36;
      local_8 = 0;
      puVar15 = &DAT_10027d00;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10012ee8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10012ed0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10027d00 + uVar8 + 1);
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
      DAT_10027bfc = 1;
      DAT_10027bec = CodePage;
      DAT_10027e04 = FUN_10008fec(CodePage);
      DAT_10027bf0 = *(undefined4 *)(iVar12 + 0x10012edc);
      DAT_10027bf4 = *(undefined4 *)(iVar12 + 0x10012ee0);
      DAT_10027bf8 = *(undefined4 *)(iVar12 + 0x10012ee4);
      goto LAB_10008f86;
    }
    goto LAB_10008f81;
  }
  goto LAB_10008e1c;
code_r0x10008e36:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10012fc7 < (int)pUVar5) goto code_r0x10008e41;
  goto LAB_10008e32;
code_r0x10008e41:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10027e04 = 0;
    puVar15 = &DAT_10027d00;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_10027bfc = 0;
      DAT_10027bec = CodePage;
    }
    else {
      DAT_10027bec = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10027d00 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10027d00 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10027e04 = FUN_10008fec(CodePage);
      DAT_10027bfc = 1;
    }
    DAT_10027bf0 = 0;
    DAT_10027bf4 = 0;
    DAT_10027bf8 = 0;
  }
  else {
    if (DAT_10027ac4 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10008f93;
    }
LAB_10008f81:
    FUN_1000901f();
  }
LAB_10008f86:
  FUN_10009048();
LAB_10008e1c:
  uVar14 = 0;
LAB_10008f93:
  FUN_10006ae7(0x19);
  return uVar14;
}



// Function: FUN_10008fa2 @ 0x10008fa2

int __cdecl FUN_10008fa2(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10027ac4 = 1;
                    /* WARNING: Could not recover jumptable at 0x10008fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10027ac4 = 1;
                    /* WARNING: Could not recover jumptable at 0x10008fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10027b10;
  }
  DAT_10027ac4 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10008fec @ 0x10008fec

undefined4 __cdecl FUN_10008fec(int param_1)

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



// Function: FUN_1000901f @ 0x1000901f

void FUN_1000901f(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10027d00;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10027bec = 0;
  DAT_10027bfc = 0;
  DAT_10027e04 = 0;
  DAT_10027bf0 = 0;
  DAT_10027bf4 = 0;
  DAT_10027bf8 = 0;
  return;
}



// Function: FUN_10009048 @ 0x10009048

void FUN_10009048(void)

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
  
  BVar2 = GetCPInfo(DAT_10027bec,&local_18);
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
    FUN_1000991d(1,local_118,0x100,local_518,DAT_10027bec,DAT_10027e04,0);
    FUN_10009a66(DAT_10027e04,0x100,local_118,0x100,local_218,0x100,DAT_10027bec,0);
    FUN_10009a66(DAT_10027e04,0x200,local_118,0x100,local_318,0x100,DAT_10027bec,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10027d00 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10009154;
        }
        (&DAT_10027c00)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10027d00 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10009154:
        (&DAT_10027c00)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10027d00 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1000919e;
        }
        (&DAT_10027c00)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10027d00 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1000919e:
        (&DAT_10027c00)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_100091cd @ 0x100091cd

void FUN_100091cd(void)

{
  if (DAT_10028f68 == 0) {
    FUN_10008df5(-3);
    DAT_10028f68 = 1;
  }
  return;
}



// Function: FUN_100091e9 @ 0x100091e9

void __thiscall FUN_100091e9(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10009200(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_10009200 @ 0x10009200

void * __thiscall FUN_10009200(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_10010760 < 2) {
      uVar3 = (byte)PTR_DAT_1001076c[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1001076c;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10005c75(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1000925b:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_1000925b;
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
      goto LAB_100092c5;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_100092c5;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_100092c5:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_10010760 < 2) {
      uVar5 = (byte)PTR_DAT_1001076c[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10005c75(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_10010760 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1001076c + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10005c75(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10009371:
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
          pDVar6 = FUN_1000a7c4();
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
      uVar3 = FUN_1000aad0((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10009371;
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



// Function: _strchr @ 0x10009420

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



// Function: _strstr @ 0x100094e0

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
LAB_10009553:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10009553;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x10009560

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



// Function: FUN_100095a0 @ 0x100095a0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100095a0(void)

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



// Function: FUN_100095cf @ 0x100095cf

int __cdecl FUN_100095cf(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10027ac8 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10027ac8 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10027ac8 != (FARPROC)0x0) {
        DAT_10027acc = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10027ad0 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000961e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000961e:
    if (DAT_10027acc != (FARPROC)0x0) {
      iVar1 = (*DAT_10027acc)();
      if ((iVar1 != 0) && (DAT_10027ad0 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10027ad0)(iVar1);
      }
    }
    iVar1 = (*DAT_10027ac8)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10009660

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
        goto joined_r0x1000969e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100096db;
        goto LAB_10009749;
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
joined_r0x10009745:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10009749:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100096db;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10009745;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10009745;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10009745;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000969e:
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
LAB_100096db:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_1000975e @ 0x1000975e

undefined4 __cdecl FUN_1000975e(DWORD *param_1)

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
    puVar7 = &DAT_10027ad4;
    pcVar6 = DAT_10027ad4;
LAB_100097e4:
    bVar1 = true;
    FUN_10006a86(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_10027ae0;
        pcVar6 = DAT_10027ae0;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_10027ad8;
        pcVar6 = DAT_10027ad8;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_10027adc;
        pcVar6 = DAT_10027adc;
      }
      goto LAB_100097e4;
    }
    pDVar2 = FUN_10004883();
    uVar3 = FUN_100098e0((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_10006ae7(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_10006ae7(1);
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
      goto LAB_10009858;
    }
  }
  else {
LAB_10009858:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_10010ae8 < DAT_10010aec + DAT_10010ae8) {
        iVar4 = DAT_10010ae8 * 0xc;
        iVar5 = DAT_10010ae8;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_10010aec + DAT_10010ae8);
      }
      goto LAB_10009896;
    }
  }
  *puVar7 = 0;
LAB_10009896:
  if (bVar1) {
    FUN_10006ae7(1);
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



// Function: FUN_100098e0 @ 0x100098e0

uint __cdecl FUN_100098e0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_10010af4 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_10010af4 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000991d @ 0x1000991d

BOOL __cdecl
FUN_1000991d(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000e6f0;
  puStack_10 = &LAB_10008810;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10027ae8;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10027ae8 == 0) {
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
  DAT_10027ae8 = iVar3;
  if (DAT_10027ae8 != 2) {
    if (DAT_10027ae8 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10027b10;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_100095a0();
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
    param_6 = DAT_10027b00;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10009a66 @ 0x10009a66

int __cdecl
FUN_10009a66(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000e700;
  puStack_10 = &LAB_10008810;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10027b18 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10027b18 = 2;
    }
    else {
      DAT_10027b18 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10009c8a(param_3,param_4);
  }
  if (DAT_10027b18 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10027b18 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10027b10;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_100095a0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_100095a0();
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



// Function: FUN_10009c8a @ 0x10009c8a

int __cdecl FUN_10009c8a(char *param_1,int param_2)

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



// Function: FUN_10009cb5 @ 0x10009cb5

undefined4 __cdecl FUN_10009cb5(uint param_1,uint param_2,uint *param_3)

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



// Function: ___add_12 @ 0x10009cd6

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10009cb5(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_10009cb5(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_10009cb5(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_10009cb5(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: FUN_10009d34 @ 0x10009d34

void __cdecl FUN_10009d34(uint *param_1)

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



// Function: FUN_10009d62 @ 0x10009d62

void __cdecl FUN_10009d62(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Function: FUN_10009d8f @ 0x10009d8f

void __cdecl FUN_10009d8f(char *param_1,int param_2,uint *param_3)

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
      FUN_10009d34(puVar1);
      FUN_10009d34(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_10009d34(puVar1);
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
    FUN_10009d34(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// Function: FUN_10009e56 @ 0x10009e56

undefined4 __thiscall
FUN_10009e56(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_10009ead:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_10009eca:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1000a0ef;
    }
    if (bVar6 == DAT_10010764) goto LAB_10009ed9;
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
      if (bVar6 != 0x30) goto LAB_1000a1c9;
    }
    goto LAB_10009ead;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_10009eca;
    iVar9 = iVar1;
    if (bVar6 != DAT_10010764) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_10009f5e;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_10009f37;
    }
    goto LAB_10009ead;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_10009eca;
    if (bVar6 == DAT_10010764) {
LAB_10009ed9:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000a1ce;
    }
    goto LAB_10009ead;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10010760 < 2) {
        uVar3 = (byte)PTR_DAT_1001076c[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1001076c;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10005c75(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_10010764) goto LAB_1000a04b;
    goto LAB_10009ead;
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
      if (DAT_10010760 < 2) {
        uVar3 = (byte)PTR_DAT_1001076c[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1001076c;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10005c75(this,(uint)bVar6,4);
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
LAB_1000a04b:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_10009f5e:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_10009f37:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1000a1c9;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_10009ead;
  case 5:
    local_28 = iVar5;
    if (DAT_10010760 < 2) {
      uVar3 = (byte)PTR_DAT_1001076c[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1001076c;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10005c75(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1000a0ef;
    goto LAB_1000a1ce;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1000a124;
      if (bVar6 == 0x2d) goto LAB_1000a118;
      if (bVar6 != 0x30) goto LAB_1000a1ce;
LAB_1000a0bd:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_10009ead;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1000a0bd;
      goto LAB_1000a1ce;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1000a1c9;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1000a14f;
  default:
    goto switchD_10009eb9_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1000a124:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1000a1ce;
LAB_1000a118:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_10009ead;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_10009eb9_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_10009ead;
    goto LAB_1000a1ce;
  }
  iVar9 = 9;
LAB_1000a0ef:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_10009ead;
LAB_1000a14f:
  if (DAT_10010760 < 2) {
    uVar3 = (byte)PTR_DAT_1001076c[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_1001076c;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_10005c75(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1000a199;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1000a191;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1000a14f;
LAB_1000a191:
  pbVar7 = (byte *)0x1451;
LAB_1000a199:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_10010760 < 2) {
      uVar3 = (byte)PTR_DAT_1001076c[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1001076c;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10005c75(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1000a1c9:
  pbVar7 = pbVar8 + -1;
LAB_1000a1ce:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000a2dc;
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
    FUN_10009d8f(local_60,local_8,(uint *)&local_44);
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
        FUN_1000aeaa((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1000a261;
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
LAB_1000a261:
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
LAB_1000a2dc:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// Function: FUN_1000a327 @ 0x1000a327

undefined4 __cdecl
FUN_1000a327(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000a41c;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000a41c:
            pcVar11 = "1#QNAN";
            goto LAB_1000a421;
          }
          pcVar11 = "1#IND";
        }
        FUN_100063a0((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1000a421:
        FUN_100063a0((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1000aeaa((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000ac8a((int *)&local_14,(int *)&local_20);
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
        FUN_10009d34((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10009d62((uint *)&local_14);
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
          FUN_10009d34((uint *)&local_14);
          FUN_10009d34((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_10009d34((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_1000a579;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1000a579:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000a57b:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1000a57b;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1000a5b1;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1000a5b1:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// Function: FUN_1000a5ba @ 0x1000a5ba

int __thiscall FUN_1000a5ba(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_10010760 < 2) {
      uVar1 = (byte)PTR_DAT_1001076c[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_1001076c;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_10005c75(this,(uint)*param_1,8);
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
    if (DAT_10010760 < 2) {
      uVar2 = (byte)PTR_DAT_1001076c[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_10005c75(this,uVar4,4);
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



// Function: _strcmp @ 0x1000a650

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
      if (bVar4 != *_Str2) goto LAB_1000a694;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1000a660;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_1000a694;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_1000a694;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1000a660:
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
LAB_1000a694:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_1000a6d4 @ 0x1000a6d4

int __cdecl FUN_1000a6d4(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_10028f64 != 0) &&
      ((DAT_10027864 != (int *)0x0 ||
       (((DAT_1002786c != 0 && (iVar1 = FUN_1000afa3(), iVar1 == 0)) && (DAT_10027864 != (int *)0x0)
        ))))) && (piVar3 = DAT_10027864, param_1 != (uchar *)0x0)) {
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



// Function: FUN_1000a751 @ 0x1000a751

void __cdecl FUN_1000a751(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000a7cd();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_100130e0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000a7c4();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x100130e4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10013248);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000a7c4();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000a7c4();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000a7c4();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_1000a7c4 @ 0x1000a7c4

DWORD * FUN_1000a7c4(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10004883();
  return pDVar1 + 2;
}



// Function: FUN_1000a7cd @ 0x1000a7cd

DWORD * FUN_1000a7cd(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10004883();
  return pDVar1 + 3;
}



// Function: FUN_1000a7d6 @ 0x1000a7d6

undefined4 __cdecl FUN_1000a7d6(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10028f60) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10028e60)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10027840 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000a832;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000a832:
      *(undefined4 *)((&DAT_10028e60)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000a7c4();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a7cd();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_1000a855 @ 0x1000a855

undefined4 __cdecl FUN_1000a855(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10028f60) &&
     ((*(byte *)((&DAT_10028e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10028e60)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000a7c4();
  *pDVar1 = 9;
  pDVar1 = FUN_1000a7cd();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_1000a897 @ 0x1000a897

void __cdecl FUN_1000a897(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10028e60)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10006a86(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10006ae7(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10028e60)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_1000a8f6 @ 0x1000a8f6

void __cdecl FUN_1000a8f6(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10028e60)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_1000a999 @ 0x1000a999

int __cdecl FUN_1000a999(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000a9c7(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000b08e(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_1000a9c7 @ 0x1000a9c7

undefined4 __cdecl FUN_1000a9c7(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_100089c0(param_1[4],(char *)param_1[2],uVar3);
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



// Function: FUN_1000aa2c @ 0x1000aa2c

int __cdecl FUN_1000aa2c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10006a86(2);
  iVar4 = 0;
  if (0 < DAT_10028e20) {
    do {
      iVar2 = *(int *)(DAT_10027e08 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10008c9b(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10027e08 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1000a999(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1000a999(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10008ced(iVar4,*(int *)(DAT_10027e08 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10028e20);
  }
  FUN_10006ae7(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_1000aad0 @ 0x1000aad0

uint __cdecl FUN_1000aad0(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10027b00 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10027be8);
    bVar1 = DAT_10027be4 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10027be8);
      this = (void *)0x13;
      FUN_10006a86(0x13);
    }
    param_1 = FUN_1000ab3f(this,param_1);
    if (bVar1) {
      FUN_10006ae7(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10027be8);
    }
  }
  return param_1;
}



// Function: FUN_1000ab3f @ 0x1000ab3f

uint __thiscall FUN_1000ab3f(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10027b00 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10010760 < 2) {
        uVar2 = (byte)PTR_DAT_1001076c[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10005c75(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1001076c[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10009a66(DAT_10027b00,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_1000ac10 @ 0x1000ac10

int __cdecl FUN_1000ac10(byte *param_1,byte *param_2)

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



// Function: FUN_1000ac50 @ 0x1000ac50

byte * __cdecl FUN_1000ac50(byte *param_1,byte *param_2)

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



// Function: FUN_1000ac8a @ 0x1000ac8a

void __cdecl FUN_1000ac8a(int *param_1,int *param_2)

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
LAB_1000ad2d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000ad2d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_10009cb5(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_1000ade1:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_10009d62((uint *)&local_28);
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
          FUN_10009d34((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000ade1;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1000ae8a;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000ae8a:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// Function: FUN_1000aeaa @ 0x1000aeaa

void __cdecl FUN_1000aeaa(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_100132f0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10013450;
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
        FUN_1000ac8a(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



// Function: __mbsnbicoll @ 0x1000af64

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_1000b301(DAT_10027e04,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_10027bec);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



// Function: FUN_1000afa3 @ 0x1000afa3

undefined4 FUN_1000afa3(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_1002786c;
  puVar2 = DAT_1002786c;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_1000b57e(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_1000b011 @ 0x1000b011

undefined4 __cdecl FUN_1000b011(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10008c6c((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10008cbe((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



// Function: __fclose_lk @ 0x1000b042

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_1000a9c7((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_1000b7c4(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_10006afc(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



// Function: FUN_1000b08e @ 0x1000b08e

undefined4 __cdecl FUN_1000b08e(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10028f60 <= param_1) {
LAB_1000b10f:
    pDVar3 = FUN_1000a7c4();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10028e60)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000b10f;
  FUN_1000a897(param_1);
  if ((*(byte *)((&DAT_10028e60)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000a855(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000b104;
    pDVar3 = FUN_1000a7cd();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000a7c4();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000b104:
  FUN_1000a8f6(param_1);
  return uVar5;
}



// Function: FUN_1000b130 @ 0x1000b130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000b130(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_10027be8;
  if (DAT_10027b00 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000b17e;
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
LAB_1000b17e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10027be8 = _DAT_10027be8 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10027be4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10027be8 = iVar2;
      FUN_10006a86(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000b1df;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10005d59(this,uVar8);
      uVar7 = FUN_10005d59(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000b1df:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10027be8 = _DAT_10027be8 + -1;
      UNLOCK();
    }
    else {
      FUN_10006ae7(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_1000b200 @ 0x1000b200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000b200(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_10027be8;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_10027b00 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000b25f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000b25f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10027be8 = _DAT_10027be8 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10027be4;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10027be8 = iVar2;
        FUN_10006a86(0x13);
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
        uVar7 = FUN_10005d59(param_3,uVar7);
        uVar5 = FUN_10005d59(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000b2d5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000b2d5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10027be8 = _DAT_10027be8 + -1;
        UNLOCK();
      }
      else {
        FUN_10006ae7(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_1000b301 @ 0x1000b301

int __cdecl
FUN_1000b301(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
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
  puStack_c = &DAT_1000e860;
  puStack_10 = &LAB_10008810;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_10027b90 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10027b90 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10027b90 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_10009c8a((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_10009c8a((char *)param_5,param_6);
  }
  if (DAT_10027b90 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_10027b90 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10027b10;
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
      FUN_100095a0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_100095a0();
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



// Function: FUN_1000b57e @ 0x1000b57e

undefined4 __cdecl FUN_1000b57e(uint *param_1,int param_2)

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
  puVar2 = (uint *)FUN_1000b8cf((byte *)param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar7 = *(byte *)((int)puVar2 + 1) == 0;
  if (DAT_10027864 == DAT_10027868) {
    DAT_10027864 = (byte *)FUN_1000b75d((int *)DAT_10027864);
  }
  if (DAT_10027864 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_1002786c == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_10027864 = _malloc(4);
      if (DAT_10027864 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_10027864 + 1;
      pbVar6 = DAT_10027864 + 2;
      pbVar1 = DAT_10027864 + 3;
      DAT_10027864[0] = 0;
      *pbVar4 = 0;
      *pbVar6 = 0;
      *pbVar1 = 0;
      if (DAT_1002786c == (undefined4 *)0x0) {
        DAT_1002786c = _malloc(4);
        if (DAT_1002786c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1002786c = 0;
      }
    }
    else {
      iVar3 = FUN_1000afa3();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_10027864;
  iVar3 = FUN_1000b705((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_10004b6a(pbVar4,(uint *)(iVar3 * 4 + 8));
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
      goto LAB_1000b6b2;
    }
    pbVar6 = pbVar4 + iVar3 * 4;
    FUN_10006afc(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar6 != 0; pbVar6 = pbVar6 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar6 = *(int *)(pbVar6 + 4);
    }
    pbVar4 = FUN_10004b6a(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_1000b6b2;
  }
  DAT_10027864 = pbVar4;
LAB_1000b6b2:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_100063a0(lpName,param_1);
      pbVar4 = (byte *)(((int)lpName - (int)param_1) + (int)puVar2);
      *pbVar4 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(pbVar4 + 1)));
      FUN_10006afc((undefined *)lpName);
    }
  }
  return 0;
}



// Function: FUN_1000b705 @ 0x1000b705

int __cdecl FUN_1000b705(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_10027864;
  piVar2 = DAT_10027864;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_10027864 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_10027864 >> 2;
}



// Function: FUN_1000b75d @ 0x1000b75d

undefined4 * __cdecl FUN_1000b75d(int *param_1)

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
      puVar4 = FUN_1000b966(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



// Function: FUN_1000b7c4 @ 0x1000b7c4

undefined4 __cdecl FUN_1000b7c4(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10028f60) &&
     ((*(byte *)((&DAT_10028e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000a897(param_1);
    uVar1 = FUN_1000b821(param_1);
    FUN_1000a8f6(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000a7c4();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a7cd();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_1000b821 @ 0x1000b821

undefined4 __cdecl FUN_1000b821(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1000a855(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000a855(2);
      iVar2 = FUN_1000a855(1);
      if (iVar2 == iVar1) goto LAB_1000b86f;
    }
    hObject = (HANDLE)FUN_1000a855(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000b871;
    }
  }
LAB_1000b86f:
  DVar4 = 0;
LAB_1000b871:
  FUN_1000a7d6(param_1);
  *(undefined1 *)((&DAT_10028e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1000a751(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: __freebuf @ 0x1000b8a4

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_10006afc(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Function: FUN_1000b8cf @ 0x1000b8cf

byte * __cdecl FUN_1000b8cf(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (DAT_10027bfc == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_10006a86(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_10027d00 + uVar3 + 1) & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_10006ae7(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_10006ae7(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2 + 1;
    }
    FUN_10006ae7(0x19);
    pbVar2 = (byte *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return pbVar2;
}



// Function: FUN_1000b966 @ 0x1000b966

uint * __cdecl FUN_1000b966(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_100063a0(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}



// Function: FUN_1000b991 @ 0x1000b991

int * FUN_1000b991(void)

{
  undefined4 *puVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c788();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    *extraout_ECX = (int)&DAT_1000e888;
    extraout_ECX[3] = (int)&DAT_1000e880;
    FUN_1000ba65(extraout_ECX + 5);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  puVar1 = operator_new(0x54);
  *(undefined4 **)(unaff_EBP + 8) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1000bc45(puVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_1000bb83();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000e87c;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  return extraout_ECX;
}



// Function: FUN_1000ba52 @ 0x1000ba52

void __fastcall FUN_1000ba52(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x14) + 4) + -0x14 + param_1) = &PTR_LAB_1000e87c;
  FUN_1000bbf8();
  return;
}



// Function: FUN_1000ba65 @ 0x1000ba65

undefined4 * __fastcall FUN_1000ba65(undefined4 *param_1)

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
  *param_1 = &PTR_FUN_1000e8a0;
  param_1[2] = 4;
  param_1[10] = 6;
  *(undefined1 *)(param_1 + 0xb) = 0x20;
  FUN_1000bfeb((LPCRITICAL_SECTION)(param_1 + 0xe));
  iVar1 = DAT_10027bd8;
  DAT_10027bd8 = DAT_10027bd8 + 1;
  if (iVar1 == 0) {
    FUN_1000bfeb((LPCRITICAL_SECTION)&DAT_10027ba0);
  }
  return param_1;
}



// Function: FUN_1000bac3 @ 0x1000bac3

undefined4 * __thiscall FUN_1000bac3(void *this,byte param_1)

{
  FUN_1000badf(this);
  if ((param_1 & 1) != 0) {
    FUN_1000c43d(this);
  }
  return this;
}



// Function: FUN_1000badf @ 0x1000badf

void __fastcall FUN_1000badf(undefined4 *param_1)

{
  param_1[0xd] = 0xffffffff;
  *param_1 = &PTR_FUN_1000e8a0;
  DAT_10027bd8 = DAT_10027bd8 + -1;
  if (DAT_10027bd8 == 0) {
    FUN_1000bff6((LPCRITICAL_SECTION)&DAT_10027ba0);
  }
  FUN_1000bff6((LPCRITICAL_SECTION)(param_1 + 0xe));
  if ((param_1[7] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  param_1[2] = 4;
  return;
}



// Function: FUN_1000bb29 @ 0x1000bb29

void __thiscall FUN_1000bb29(void *this,int param_1)

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



// Function: FUN_1000bb83 @ 0x1000bb83

int * FUN_1000bb83(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c788();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000e8b4;
    extraout_ECX[3] = (int)&DAT_1000e8ac;
    FUN_1000ba65(extraout_ECX + 5);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  FUN_1000c042();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_1000c117();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000e8a8;
  return extraout_ECX;
}



// Function: FUN_1000bbf8 @ 0x1000bbf8

void FUN_1000bbf8(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c788();
  iVar1 = *(int *)(extraout_ECX + -0x14);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0x14 + extraout_ECX) = &PTR_LAB_1000e8a8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1000c17c((-(uint)(extraout_ECX != 0x14) & extraout_ECX - 8U) + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1000c0b8(extraout_ECX - 8U);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// Function: FUN_1000bc45 @ 0x1000bc45

undefined4 * __fastcall FUN_1000bc45(undefined4 *param_1)

{
  FUN_1000c18b(param_1);
  param_1[0x14] = 0;
  param_1[0x13] = 0xffffffff;
  *param_1 = &PTR_FUN_1000e8d8;
  return param_1;
}



// Function: FUN_1000bc5f @ 0x1000bc5f

undefined * __thiscall FUN_1000bc5f(void *this,byte param_1)

{
  FUN_1000bc7b();
  if ((param_1 & 1) != 0) {
    FUN_1000c43d(this);
  }
  return this;
}



// Function: FUN_1000bc7b @ 0x1000bc7b

void FUN_1000bc7b(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c788();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = (int)&PTR_FUN_1000e8d8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[0xc] < 0) {
    FUN_1000c001((LPCRITICAL_SECTION)(extraout_ECX + 0xd));
  }
  if (extraout_ECX[0x14] == 0) {
    FUN_1000beac((int)extraout_ECX);
  }
  else {
    FUN_1000bcd2(extraout_ECX);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1000c1e6(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// Function: FUN_1000bcd2 @ 0x1000bcd2

int * __fastcall FUN_1000bcd2(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x13] != -1) {
    if (param_1[0xc] < 0) {
      FUN_1000c001((LPCRITICAL_SECTION)(param_1 + 0xd));
    }
    iVar1 = (**(code **)(*param_1 + 4))();
    iVar2 = FUN_1000b7c4(param_1[0x13]);
    if ((iVar2 != -1) && (iVar1 != -1)) {
      param_1[0x13] = -1;
      if (-1 < param_1[0xc]) {
        return param_1;
      }
      FUN_1000c00c((LPCRITICAL_SECTION)(param_1 + 0xd));
      return param_1;
    }
    if (param_1[0xc] < 0) {
      FUN_1000c00c((LPCRITICAL_SECTION)(param_1 + 0xd));
    }
  }
  return (int *)0x0;
}



// Function: FUN_1000bd35 @ 0x1000bd35

undefined4 __thiscall FUN_1000bd35(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000c34e(this);
  if ((iVar1 != -1) && (iVar1 = FUN_1000beac((int)this), iVar1 != -1)) {
    if (*(int *)((int)this + 8) == 0) {
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x14);
    }
    if (param_1 != 0xffffffff) {
      if ((*(int *)((int)this + 8) == 0) &&
         (*(uint *)((int)this + 0x1c) < *(uint *)((int)this + 0x20))) {
        FUN_1000bda6(this,param_1);
      }
      else {
        iVar1 = FUN_100089c0(*(uint *)((int)this + 0x4c),(char *)&param_1,1);
        if (iVar1 != 1) {
          return 0xffffffff;
        }
      }
    }
    return 1;
  }
  return 0xffffffff;
}



// Function: FUN_1000bda6 @ 0x1000bda6

uint __thiscall FUN_1000bda6(void *this,uint param_1)

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



// Function: FUN_1000bdc8 @ 0x1000bdc8

uint __fastcall FUN_1000bdc8(int *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  iVar3 = FUN_1000be58((int)param_1);
  if (iVar3 != 0) {
    return (uint)*(byte *)param_1[10];
  }
  iVar3 = FUN_1000c34e(param_1);
  if ((iVar3 != -1) && (iVar3 = FUN_1000beac((int)param_1), iVar3 != -1)) {
    if (param_1[2] == 0) {
      pcVar1 = (char *)param_1[4];
      if (pcVar1 < (char *)param_1[5]) {
        pcVar4 = (char *)param_1[5] + -(int)pcVar1;
      }
      else {
        pcVar4 = (char *)0x0;
      }
      iVar3 = FUN_1000c7a7(param_1[0x13],pcVar1,pcVar4);
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
      iVar3 = FUN_1000c7a7(param_1[0x13],(char *)((int)&uStack_8 + 3),(char *)0x1);
      if (0 < iVar3) {
        return (uint)uStack_8 >> 0x18;
      }
    }
  }
  return 0xffffffff;
}



// Function: FUN_1000be58 @ 0x1000be58

int __fastcall FUN_1000be58(int param_1)

{
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
    return *(uint *)(param_1 + 0x2c) - *(uint *)(param_1 + 0x28);
  }
  return 0;
}



// Function: FUN_1000beac @ 0x1000beac

undefined4 __fastcall FUN_1000beac(int param_1)

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
       (uVar2 = FUN_100089c0(*(uint *)(param_1 + 0x4c),pcVar5,uVar6), uVar2 != uVar6)) {
      if (0 < (int)uVar2) {
        if (*(int *)(param_1 + 0x20) != 0) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar2;
        }
        FUN_100064f0(*(undefined4 **)(param_1 + 0x18),
                     (undefined4 *)(uVar2 + (int)*(undefined4 **)(param_1 + 0x18)),uVar6 - uVar2);
      }
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar3 = FUN_1000be58(param_1);
    if (0 < iVar3) {
      uVar6 = *(uint *)(param_1 + 0x4c);
      bVar1 = *(byte *)((&DAT_10028e60)[(int)uVar6 >> 5] + 4 + (uVar6 & 0x1f) * 0x24);
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
      DVar4 = FUN_100088e8(uVar6,-iVar3,1);
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



// Function: FUN_1000bf87 @ 0x1000bf87

void * __thiscall FUN_1000bf87(void *this,int param_1,int param_2)

{
  if ((*(int *)((int)this + 0x4c) == -1) || (*(int *)((int)this + 0x14) == 0)) {
    if ((param_1 == 0) || (param_2 < 1)) {
      *(undefined4 *)((int)this + 8) = 1;
    }
    else {
      if (*(int *)((int)this + 0x30) < 0) {
        FUN_1000c001((LPCRITICAL_SECTION)((int)this + 0x34));
      }
      FUN_1000c399(this,param_1,param_1 + param_2,0);
      if (*(int *)((int)this + 0x30) < 0) {
        FUN_1000c00c((LPCRITICAL_SECTION)((int)this + 0x34));
      }
    }
  }
  else {
    this = (void *)0x0;
  }
  return this;
}



// Function: FUN_1000bfeb @ 0x1000bfeb

void __cdecl FUN_1000bfeb(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return;
}



// Function: FUN_1000bff6 @ 0x1000bff6

void __cdecl FUN_1000bff6(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}



// Function: FUN_1000c001 @ 0x1000c001

void __cdecl FUN_1000c001(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}



// Function: FUN_1000c00c @ 0x1000c00c

void __cdecl FUN_1000c00c(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}



// Function: FUN_1000c042 @ 0x1000c042

int * FUN_1000c042(void)

{
  uint *puVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c788();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000e90c;
    FUN_1000ba65(extraout_ECX + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000e908;
  FUN_1000bb29((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  puVar1 = (uint *)(*(int *)(*extraout_ECX + 4) + 0x24 + (int)extraout_ECX);
  *puVar1 = *puVar1 | 1;
  extraout_ECX[2] = 0;
  extraout_ECX[1] = 0;
  return extraout_ECX;
}



// Function: FUN_1000c0b8 @ 0x1000c0b8

void __fastcall FUN_1000c0b8(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0xc) + 4) + -0xc + param_1) = &PTR_LAB_1000e908;
  return;
}



// Function: FUN_1000c0c7 @ 0x1000c0c7

int __thiscall FUN_1000c0c7(void *this,char param_1)

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



// Function: FUN_1000c117 @ 0x1000c117

int * FUN_1000c117(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c788();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000e91c;
    FUN_1000ba65(extraout_ECX + 2);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000e918;
  FUN_1000bb29((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[1] = 0;
  return extraout_ECX;
}



// Function: FUN_1000c17c @ 0x1000c17c

void __fastcall FUN_1000c17c(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -8) + 4) + -8 + param_1) = &PTR_LAB_1000e918;
  return;
}



// Function: FUN_1000c18b @ 0x1000c18b

undefined4 * __fastcall FUN_1000c18b(undefined4 *param_1)

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
  *param_1 = &PTR_FUN_1000e928;
  FUN_1000bfeb((LPCRITICAL_SECTION)(param_1 + 0xd));
  return param_1;
}



// Function: FUN_1000c1ca @ 0x1000c1ca

undefined4 * __thiscall FUN_1000c1ca(void *this,byte param_1)

{
  FUN_1000c1e6(this);
  if ((param_1 & 1) != 0) {
    FUN_1000c43d(this);
  }
  return this;
}



// Function: FUN_1000c1e6 @ 0x1000c1e6

void __fastcall FUN_1000c1e6(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000e928;
  FUN_1000bff6((LPCRITICAL_SECTION)(param_1 + 0xd));
  FUN_1000c337((int)param_1);
  if ((param_1[1] != 0) && ((undefined *)param_1[4] != (undefined *)0x0)) {
    FUN_1000c43d((undefined *)param_1[4]);
  }
  return;
}



// Function: FUN_1000c24a @ 0x1000c24a

int __thiscall FUN_1000c24a(void *this,undefined1 *param_1,int param_2)

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



// Function: FUN_1000c2a0 @ 0x1000c2a0

int __thiscall FUN_1000c2a0(void *this,undefined4 *param_1,uint param_2)

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
        FUN_100083e0(param_1,*(undefined4 **)((int)this + 0x28),uVar3);
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



// Function: FUN_1000c337 @ 0x1000c337

undefined4 __fastcall FUN_1000c337(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) <= *(uint *)(param_1 + 0x28)) &&
     (*(uint *)(param_1 + 0x1c) <= *(uint *)(param_1 + 0x18))) {
    return 0;
  }
  return 0xffffffff;
}



// Function: FUN_1000c34e @ 0x1000c34e

int __fastcall FUN_1000c34e(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] == 0) && (param_1[4] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x28))();
    return (-(uint)(iVar1 != -1) & 2) - 1;
  }
  return 0;
}



// Function: FUN_1000c36c @ 0x1000c36c

undefined4 __fastcall FUN_1000c36c(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x200);
  if (pvVar1 == (void *)0x0) {
    return 0xffffffff;
  }
  FUN_1000c399(param_1,pvVar1,(int)pvVar1 + 0x200,1);
  return 1;
}



// Function: FUN_1000c399 @ 0x1000c399

void __thiscall FUN_1000c399(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(int *)((int)this + 4) != 0) && (*(undefined **)((int)this + 0x10) != (undefined *)0x0)) {
    FUN_1000c43d(*(undefined **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}



// Function: FUN_1000c3e1 @ 0x1000c3e1

int __thiscall FUN_1000c3e1(void *this,char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)((int)this + 0x24) < *(uint *)((int)this + 0x28)) {
    iVar2 = FUN_1000c0c7(this,param_1);
  }
  else {
    iVar2 = 1;
    iVar3 = (**(code **)(*(int *)this + 0xc))(0xffffffff,1);
    if (iVar3 == -1) {
      iVar2 = -1;
    }
    else if ((*(int *)((int)this + 8) == 0) && (*(int *)((int)this + 0x2c) != 0)) {
      puVar1 = *(undefined4 **)((int)this + 0x28);
      FUN_100064f0((undefined4 *)((int)puVar1 + 1),puVar1,
                   (*(int *)((int)this + 0x2c) - (int)puVar1) - 1);
      **(undefined1 **)((int)this + 0x28) = (char)iVar2;
    }
  }
  return iVar2;
}



// Function: FUN_1000c43d @ 0x1000c43d

void __cdecl FUN_1000c43d(undefined *param_1)

{
  FUN_10006afc(param_1);
  return;
}



// Function: FUN_1000c44e @ 0x1000c44e

void __fastcall FUN_1000c44e(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_10006a86(0x1b);
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_10006afc((undefined *)param_1[1]);
  }
  FUN_10006ae7(0x1b);
  return;
}



// Function: FUN_1000c477 @ 0x1000c477

undefined4 * __thiscall FUN_1000c477(void *this,byte param_1)

{
  FUN_1000c44e(this);
  if ((param_1 & 1) != 0) {
    FUN_1000c43d(this);
  }
  return this;
}



// Function: operator_new @ 0x1000c493

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



// Function: FUN_1000c4a1 @ 0x1000c4a1

void FUN_1000c4a1(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000c4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000c4d5 @ 0x1000c4d5

void FUN_1000c4d5(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000c4da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000c4dc @ 0x1000c4dc

void FUN_1000c4dc(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000c4e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000c4e3 @ 0x1000c4e3

void FUN_1000c4e3(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000c50b,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// Function: FUN_1000c532 @ 0x1000c532

undefined4 __cdecl
FUN_1000c532(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_1000c9ee(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



// Function: FUN_1000c568 @ 0x1000c568

undefined4 __cdecl
FUN_1000c568(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_1000c5bc;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// Function: FUN_1000c5bc @ 0x1000c5bc

void __cdecl FUN_1000c5bc(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_1000c9ee(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



// Function: FUN_1000c5e1 @ 0x1000c5e1

undefined4 __cdecl
FUN_1000c5e1(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_28 = FUN_1000c697;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x1000c669;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_10004883();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// Function: FUN_1000c697 @ 0x1000c697

undefined4 __cdecl FUN_1000c697(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_1000c9ee(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1000c4e3(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1000c701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// Function: FUN_1000c70c @ 0x1000c70c

int __cdecl FUN_1000c70c(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

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
      FUN_1000d2bd();
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
    FUN_1000d2bd();
  }
  return iVar1 + uVar5 * 0x14;
}



// Function: FUN_1000c788 @ 0x1000c788

void FUN_1000c788(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}



// Function: FUN_1000c7a7 @ 0x1000c7a7

int __cdecl FUN_1000c7a7(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10028f60) &&
     ((*(byte *)((&DAT_10028e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000a897(param_1);
    iVar1 = FUN_1000c80c(param_1,param_2,param_3);
    FUN_1000a8f6(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000a7c4();
  *pDVar2 = 9;
  pDVar2 = FUN_1000a7cd();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_1000c80c @ 0x1000c80c

int __cdecl FUN_1000c80c(uint param_1,char *param_2,char *param_3)

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
    piVar1 = &DAT_10028e60 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_10028e60)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_10028e60)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
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
          pDVar7 = FUN_1000a7c4();
          *pDVar7 = 9;
          pDVar7 = FUN_1000a7cd();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_1000a751(DVar6);
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
                goto LAB_1000c997;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_1000c9b1:
                *pcVar8 = '\r';
LAB_1000c9b4:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_1000c997:
                  *pcVar8 = '\n';
                  goto LAB_1000c9b4;
                }
                FUN_1000894d(param_1,-1,1);
                if (local_5 != '\n') goto LAB_1000c9b1;
              }
              else {
                if (local_5 == '\n') goto LAB_1000c997;
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



// Function: FUN_1000c9ee @ 0x1000c9ee

undefined4 __cdecl
FUN_1000c9ee(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_1000d2bd();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_1000ca89(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_1000cd43((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// Function: FUN_1000ca89 @ 0x1000ca89

void __cdecl
FUN_1000ca89(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
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
    FUN_1000d2bd();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_10004883();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_10004883();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_10004883();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_1000d377(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_1000d2bd();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_1000cc11;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_1000d2bd();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_1000c70c(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_1000d17b((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_1000cce6(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1000cdf7(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                iVar5 = local_14;
                goto LAB_1000cbf1;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_1000cbf1:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_1000cc11:
  if (param_6 == '\0') {
    FUN_1000cc3c(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_1000d25c();
  return;
}



// Function: FUN_1000cc3c @ 0x1000cc3c

void __cdecl
FUN_1000cc3c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_10004883();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_1000c5e1(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_1000c70c(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1000cdf7(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



// Function: FUN_1000cce6 @ 0x1000cce6

undefined4 __cdecl FUN_1000cce6(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1000cd3d:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1000cd17:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1000cd3d;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1000cd17;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000cd43 @ 0x1000cd43

void __cdecl FUN_1000cd43(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000e960;
  puStack_10 = &LAB_10008810;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_1000d2bd();
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



// Function: FUN_1000cdf7 @ 0x1000cdf7

void __cdecl
FUN_1000cdf7(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_1000cfb7((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_1000c4e3(param_10,param_1);
  FUN_1000cd43((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_1000ce72((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000c4a1(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// Function: FUN_1000ce72 @ 0x1000ce72

undefined4 __cdecl
FUN_1000ce72(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000e970;
  puStack_10 = &LAB_10008810;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10004883();
  FUN_10004883();
  pDVar1 = FUN_10004883();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10004883();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_1000c568(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_1000cf3f();
  ExceptionList = local_14;
  return uVar2;
}



// Function: FUN_1000cf3f @ 0x1000cf3f

void FUN_1000cf3f(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_10004883();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_10004883();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_1000d17b((int)unaff_EDI);
  }
  return;
}



// Function: FUN_1000cfb7 @ 0x1000cfb7

void __cdecl FUN_1000cfb7(int param_1,int param_2,byte *param_3,byte *param_4)

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
  
  puStack_c = &DAT_1000e988;
  puStack_10 = &LAB_10008810;
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
        bVar2 = FUN_1000d377(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_1000d393(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_1000d1e2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_100064f0(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_1000d377(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_1000d393(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_1000d3af(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_1000d1e2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_1000c4dc(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_1000d1e2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1000c4d5(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_1000d377(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_1000d393(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_100064f0(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_1000d045;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_1000d377(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_1000d393(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_1000d045:
      iVar3 = FUN_1000d1e2(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_1000d2bd();
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000d17b @ 0x1000d17b

void __cdecl FUN_1000d17b(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000e998;
  puStack_10 = &LAB_10008810;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_1000c4d5(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000d1e2 @ 0x1000d1e2

int __cdecl FUN_1000d1e2(int param_1,int *param_2)

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



// Function: __CallSettingFrame@12 @ 0x1000d210

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



// Function: FUN_1000d25c @ 0x1000d25c

void FUN_1000d25c(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000e9a8;
  puStack_10 = &LAB_10008810;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10004883();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10004883();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_1000d3c7();
  return;
}



// Function: FUN_1000d2bd @ 0x1000d2bd

void FUN_1000d2bd(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000e9c0;
  puStack_10 = &LAB_10008810;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_100136e0 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_100136e0)();
  }
  local_8 = 0xffffffff;
  FUN_1000d25c();
  return;
}



// Function: FUN_1000d313 @ 0x1000d313

int FUN_1000d313(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_1000d25c();
    return iVar3;
  }
  if ((DAT_10027be0 != (FARPROC)0x0) &&
     (bVar2 = FUN_1000d3af(DAT_10027be0), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_10027be0)(param_1);
    return iVar3;
  }
  return 0;
}



// Function: FUN_1000d377 @ 0x1000d377

bool __cdecl FUN_1000d377(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_1000d393 @ 0x1000d393

bool __cdecl FUN_1000d393(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_1000d3af @ 0x1000d3af

bool __cdecl FUN_1000d3af(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



// Function: FUN_1000d3c7 @ 0x1000d3c7

void FUN_1000d3c7(void)

{
  FUN_100059bc(10);
  FUN_1000975e((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// Function: Unwind@1000d3e0 @ 0x1000d3e0

void Unwind_1000d3e0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000badf((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



// Function: Unwind@1000d3fa @ 0x1000d3fa

void Unwind_1000d3fa(void)

{
  int unaff_EBP;
  
  FUN_1000c43d(*(undefined **)(unaff_EBP + 8));
  return;
}



// Function: Unwind@1000d410 @ 0x1000d410

void Unwind_1000d410(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000badf((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



// Function: Unwind@1000d42a @ 0x1000d42a

void Unwind_1000d42a(void)

{
  int unaff_EBP;
  
  FUN_1000c0b8(*(int *)(unaff_EBP + -0x14) + 0xc);
  return;
}



// Function: Unwind@1000d440 @ 0x1000d440

void Unwind_1000d440(void)

{
  int unaff_EBP;
  
  FUN_1000c0b8(*(int *)(unaff_EBP + -0x10) + -8);
  return;
}



// Function: Unwind@1000d458 @ 0x1000d458

void Unwind_1000d458(void)

{
  int unaff_EBP;
  
  FUN_1000c1e6(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



// Function: Unwind@1000d46c @ 0x1000d46c

void Unwind_1000d46c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000badf((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc));
    return;
  }
  return;
}



// Function: Unwind@1000d490 @ 0x1000d490

void Unwind_1000d490(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000badf((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8));
    return;
  }
  return;
}




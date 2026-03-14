// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

undefined4 FUN_10001000(void)

{
  undefined4 uVar1;
  
  uVar1 = GetDiff(0);
  switch(uVar1) {
  case 0:
    return 15000;
  case 1:
    return 5000;
  case 2:
    return 0xdac;
  case 3:
    return 3000;
  default:
    return 100;
  }
}



// Function: OnInit @ 0x10001050

void OnInit(void)

{
                    /* 0x1050  1  OnInit */
  RegisterUnits(&DAT_10007680,s_Gmill_100072c0);
  RegisterUnits(&DAT_100076d0,s_Grab1_100072b8);
  RegisterUnits(&DAT_100076d8,s_Grab2_100072b0);
  RegisterUnits(&DAT_100076e0,s_Grab3_100072a8);
  RegisterUnits(&DAT_100076e8,s_Grab4_100072a0);
  RegisterUnits(&DAT_10007820,s_Goboz1_10007298);
  RegisterUnits(&DAT_10007818,s_Goboz2_10007290);
  RegisterUnits(&DAT_10007830,s_Goboz3_10007288);
  RegisterUnits(&DAT_10007828,s_Goboz4_10007280);
  RegisterUnits(&DAT_10007840,s_Goboz5_10007278);
  RegisterUnits(&DAT_10007838,s_Goboz6_10007270);
  RegisterZone(&DAT_10007858,s_Zlag1_10007268);
  RegisterZone(&DAT_10007860,s_Zlag2_10007260);
  RegisterZone(&DAT_10007758,s_Zder1_10007258);
  RegisterZone(&DAT_10007760,s_Zder2_10007250);
  RegisterZone(&DAT_10007768,s_Zder3_10007248);
  RegisterZone(&DAT_10007770,s_Zder4_10007240);
  RegisterZone(&DAT_10007778,s_Zder5_10007238);
  RegisterZone(&DAT_10007780,s_Zder6_10007230);
  RegisterZone(&DAT_100076f0,s_Zr111_10007228);
  RegisterZone(&DAT_100076f8,s_Zr112_10007220);
  RegisterZone(&DAT_10007700,s_Zr113_10007218);
  RegisterZone(&DAT_10007708,s_Zr114_10007210);
  RegisterZone(&DAT_10007718,s_Zr115_10007208);
  RegisterZone(&DAT_10007728,s_Zr116_10007200);
  RegisterZone(&DAT_10007738,s_Zr117_100071f8);
  RegisterZone(&DAT_10007710,s_Zr121_100071f0);
  RegisterZone(&DAT_10007720,s_Zr122_100071e8);
  RegisterZone(&DAT_10007730,s_Zr123_100071e0);
  RegisterZone(&DAT_10007740,s_Zr124_100071d8);
  RegisterZone(&DAT_10007750,s_Zrinok_100071d0);
  RegisterZone(&DAT_10007670,s_ZFORT_100071c8);
  RegisterFormation(&DAT_10007850,s__ALONE_100071c0);
  RegisterFormation(&DAT_10007698,s__TRI3_100071b8);
  RegisterUpgrade(&DAT_10007748,s_AKA19SA_100071b0);
  RegisterUnitType(&DAT_10007788,s_Kreposnoi_pruss_SA__1000719c);
  RegisterUnitType(&DAT_10007790,s_Kuznica_au__10007190);
  RegisterUnitType(&DAT_10007798,s_Dip_korpus_SA__10007180);
  RegisterUnitType(&DAT_100077a0,s_artileri_depo_SA__1000716c);
  RegisterUnitType(&DAT_100077a8,s_Rinok_SA__10007160);
  RegisterUnitType(&DAT_100077b0,s_WALL_EV_SA__10007154);
  RegisterUnitType(&DAT_100077b8,s_Bashnia_SA__10007148);
  RegisterUnitType(&DAT_100077c0,s_Pushka_mnogostvolka_SA__10007130);
  RegisterUnitType(&DAT_100077c8,s_Center_Austria_au__1000711c);
  RegisterUnitType(&DAT_100077d0,s_Art_Depo_Turki_TU__10007108);
  RegisterUnitType(&DAT_100077d8,s_Dip_korpus_au__100070f8);
  RegisterUnitType(&DAT_100077e0,s_Center_Turki_TU__100070e4);
  RegisterUnitType(&DAT_100077e8,s_Mechet_Turki_TU__100070d0);
  RegisterUnitType(&DAT_100077f0,s_Diplomatic_Turki_TU__100070b8);
  RegisterUnitType(&DAT_100077f8,s_Kuznia_Turki_TU__100070a4);
  RegisterUnitType(&DAT_10007800,s_WALL_TU_TU__10007098);
  RegisterUnitType(&DAT_10007808,s_Bashnia_3_TU__10007088);
  RegisterUnitType(&DAT_10007810,s_Barack_Turki_TU__10007074);
  RegisterUnitType(&DAT_10007848,s_GRUZ_UN__10007068);
  RegisterUnitType(&DAT_10007678,s_Tatarin_TU__1000705c);
  SetPlayerName(1,s_TURKEY_10007054);
  SetPlayerName(4,s_AUSTRIANS_10007048);
  SetPlayerName(5,s_TURKEY_10007054);
  InitialUpgrade(s__Grab1_10007038,s_AKA04AU_10007040);
  InitialUpgrade(s__Grab1_10007038,s_KUZ01AU_10007030);
  RegisterDynGroup(&DAT_100076a8);
  RegisterVar(&DAT_100076a8,8);
  RegisterDynGroup(&DAT_100076a0);
  RegisterVar(&DAT_100076a0,8);
  RegisterDynGroup(&DAT_100076b8);
  RegisterVar(&DAT_100076b8,8);
  RegisterDynGroup(&DAT_100076b0);
  RegisterVar(&DAT_100076b0,8);
  RegisterDynGroup(&DAT_100076c8);
  RegisterVar(&DAT_100076c8,8);
  RegisterDynGroup(&DAT_100076c0);
  RegisterVar(&DAT_100076c0,8);
  RegisterDynGroup(&DAT_10007690);
  RegisterVar(&DAT_10007690,8);
  RegisterDynGroup(&DAT_10007688);
  RegisterVar(&DAT_10007688,8);
  return;
}



// Function: FUN_100013f0 @ 0x100013f0

undefined4 FUN_100013f0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: ProcessScenary @ 0x10001410

void ProcessScenary(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  
                    /* 0x1410  2  ProcessScenary */
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage(s__PAGE1_1000733c);
    ShowPage(s__PAGE2_10007334);
    SetLightSpot(&DAT_10007758,1,1);
    SetLightSpot(&DAT_10007760,1,2);
    SetLightSpot(&DAT_10007768,1,3);
    SetLightSpot(&DAT_10007770,1,4);
    SetLightSpot(&DAT_10007778,1,5);
    SetLightSpot(&DAT_10007780,1,6);
    RunTimer(1,1000);
    RunTimer(2,1000);
    RunTimer(3,1000);
    RunTimer(4,1000);
    RunTimer(5,1000);
    RunTimer(6,1000);
    uVar2 = FUN_10001000();
    RunTimer(7,uVar2);
    uVar2 = FUN_10001000();
    RunTimer(8,uVar2);
    RunTimer(9,1000);
    RunTimer(10,1000);
    RunTimer(0xb,1000);
    RunTimer(0xc,1000);
    RunTimer(0xd,1000);
    RunTimer(0xe,1000);
    RunTimer(0xf,1000);
    RunTimer(0x14,1000);
    ChangeFriends(4,0x11);
    ChangeFriends(0,0x11);
    ChangeFriends(1,0x22);
    ChangeFriends(5,0x22);
    TakeStone(&DAT_100076d8);
    TakeFood(&DAT_100076d0);
    TakeFood(&DAT_100076e0);
    TakeFood(&DAT_100076e8);
    SelChangeNation(1,4);
    SetResource(1,3,10000);
    SetResource(1,1,5000);
    SetResource(1,4,5000);
    SetResource(1,5,0x1194);
    SetResource(1,0,5000);
    SetResource(1,2,5000);
    iVar3 = GetDiff(0);
    if (iVar3 == 0) {
      SetResource(0,3,10000);
      SetResource(0,1,10000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      StartAI(1,s_TURKISH_0_10007328,0,1,1,1);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 1) {
      SetResource(0,3,7000);
      SetResource(0,1,7000);
      SetResource(0,4,7000);
      SetResource(0,5,7000);
      SetResource(0,0,7000);
      SetResource(0,2,7000);
      StartAI(1,s_TURKISH_0_10007328,0,1,1,2);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 2) {
      SetResource(0,3,5000);
      SetResource(0,1,5000);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(1,s_TURKISH_0_10007328,0,1,1,3);
    }
    iVar3 = GetDiff(0);
    if (iVar3 == 3) {
      SetResource(0,3,5000);
      SetResource(0,1,4000);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(1,s_TURKISH_0_10007328,0,1,1,3);
    }
  }
  EnableUnit(0,&DAT_10007788,0);
  EnableUnit(0,&DAT_10007790,0);
  EnableUnit(0,&DAT_10007798,0);
  EnableUnit(0,&DAT_100077a0,0);
  EnableUnit(0,&DAT_100077a8,0);
  EnableUnit(0,&DAT_100077b0,0);
  EnableUnit(0,&DAT_100077b8,0);
  EnableUnit(0,&DAT_100077c0,0);
  EnableUnit(0,&DAT_100077c8,0);
  EnableUnit(0,&DAT_100077d0,0);
  EnableUnit(0,&DAT_100077d8,0);
  EnableUnit(0,&DAT_100077e0,0);
  EnableUnit(0,&DAT_100077e8,0);
  EnableUnit(0,&DAT_100077f0,0);
  EnableUnit(0,&DAT_100077f8,0);
  EnableUnit(0,&DAT_10007800,0);
  EnableUnit(0,&DAT_10007808,0);
  EnableUnit(0,&DAT_10007810,0);
  DisableUpgrade(0,&DAT_10007748);
  SelectUnits(&DAT_10007820,0);
  RemoveGroup(&DAT_10007820,&DAT_100076a8);
  SelectUnits(&DAT_10007818,0);
  RemoveGroup(&DAT_10007818,&DAT_100076a0);
  SelectUnits(&DAT_10007830,0);
  RemoveGroup(&DAT_10007830,&DAT_100076b8);
  SelectUnits(&DAT_10007828,0);
  RemoveGroup(&DAT_10007828,&DAT_100076b0);
  SelectUnits(&DAT_10007840,0);
  RemoveGroup(&DAT_10007840,&DAT_100076c8);
  SelectUnits(&DAT_10007838,0);
  RemoveGroup(&DAT_10007838,&DAT_100076c0);
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    SetTrigg(2,0);
    ShowPage(s__PAGE3_10007320);
    LooseGame();
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    SetTrigg(3,0);
    ShowPage(s__PAGE4_10007318);
    ShowVictory();
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_100076f8,&DAT_100076a8), iVar3 != 0)) {
    RunTimer(1,500);
    SetTrigg(4,0);
  }
  cVar1 = TimerDone(1);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_100076f8,&DAT_100076a8), iVar3 != 0)) {
    SelectUnits(&DAT_100076a8,0);
    SelSendTo(4,&DAT_100076f0,0x80,0);
    SelSendTo(4,&DAT_10007750,0,2);
    SetTrigg(5,1);
    RunTimer(1,300);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076a8), iVar3 != 0)) {
    RunTimer(1,500);
    SetTrigg(5,0);
  }
  cVar1 = TimerDone(1);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076a8), iVar3 != 0)) {
    AddResource(0,1,2000);
    SelectUnits(&DAT_100076a8,0);
    SelSendTo(4,&DAT_100076f0,0xe0,0);
    SelSendTo(4,&DAT_100076f8,0x60,2);
    SetTrigg(4,1);
    RunTimer(1,300);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007708,&DAT_100076a0), iVar3 != 0)) {
    RunTimer(2,500);
    SetTrigg(6,0);
  }
  cVar1 = TimerDone(2);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007708,&DAT_100076a0), iVar3 != 0)) {
    SelectUnits(&DAT_100076a0,0);
    SelSendTo(4,&DAT_10007700,0xa0,0);
    SelSendTo(4,&DAT_100076f0,0x80,2);
    SelSendTo(4,&DAT_10007750,0,2);
    SetTrigg(7,1);
    RunTimer(2,300);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076a0), iVar3 != 0)) {
    RunTimer(2,500);
    SetTrigg(7,0);
  }
  cVar1 = TimerDone(2);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076a0), iVar3 != 0)) {
    AddResource(0,3,2000);
    AddResource(0,4,1000);
    SelectUnits(&DAT_100076a0,0);
    SelSendTo(4,&DAT_100076f0,0x20,0);
    SelSendTo(4,&DAT_10007700,0xe0,2);
    SelSendTo(4,&DAT_10007708,0x70,2);
    SetTrigg(6,1);
    RunTimer(2,300);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007708,&DAT_100076b8), iVar3 != 0)) {
    RunTimer(3,500);
    SetTrigg(8,0);
  }
  cVar1 = TimerDone(3);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007728,&DAT_100076b8), iVar3 != 0)) {
    SelectUnits(&DAT_100076b8,0);
    SelSendTo(4,&DAT_10007718,0xa0,0);
    SelSendTo(4,&DAT_10007700,0xa0,2);
    SelSendTo(4,&DAT_100076f0,0x80,2);
    SelSendTo(4,&DAT_10007750,0,2);
    SetTrigg(9,1);
    RunTimer(3,300);
  }
  cVar1 = Trigg(9);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076b8), iVar3 != 0)) {
    RunTimer(3,500);
    SetTrigg(9,0);
  }
  cVar1 = TimerDone(3);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076b8), iVar3 != 0)) {
    AddResource(0,5,2000);
    SelectUnits(&DAT_100076b8,0);
    SelSendTo(4,&DAT_100076f0,0x20,0);
    SelSendTo(4,&DAT_10007700,0x20,2);
    SelSendTo(4,&DAT_10007718,0xe0,2);
    SelSendTo(4,&DAT_10007728,0x60,2);
    SetTrigg(8,1);
    RunTimer(3,300);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007738,&DAT_100076b0), iVar3 != 0)) {
    RunTimer(4,500);
    SetTrigg(10,0);
  }
  cVar1 = TimerDone(4);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007738,&DAT_100076b0), iVar3 != 0)) {
    SelectUnits(&DAT_100076b0,0);
    SelSendTo(4,&DAT_10007718,0xa0,0);
    SelSendTo(4,&DAT_10007700,0xa0,2);
    SelSendTo(4,&DAT_100076f0,0x80,2);
    SelSendTo(4,&DAT_10007750,0,2);
    SetTrigg(0xb,1);
    RunTimer(4,300);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076b0), iVar3 != 0)) {
    RunTimer(4,500);
    SetTrigg(0xb,0);
  }
  cVar1 = TimerDone(4);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076b0), iVar3 != 0)) {
    AddResource(0,3,2000);
    AddResource(0,1,1000);
    SelectUnits(&DAT_100076b0,0);
    SelSendTo(4,&DAT_100076f0,0x20,0);
    SelSendTo(4,&DAT_10007700,0x20,2);
    SelSendTo(4,&DAT_10007718,0xe0,2);
    SelSendTo(4,&DAT_10007738,0xa0,2);
    SetTrigg(10,1);
    RunTimer(4,300);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007710,&DAT_100076c8), iVar3 != 0)) {
    RunTimer(5,500);
    SetTrigg(0xc,0);
  }
  cVar1 = TimerDone(5);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007710,&DAT_100076c8), iVar3 != 0)) {
    SelectUnits(&DAT_100076c8,0);
    SelSendTo(4,&DAT_10007750,0x20,0);
    SetTrigg(0xd,1);
    RunTimer(5,300);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076c8), iVar3 != 0)) {
    RunTimer(5,500);
    SetTrigg(0xd,0);
  }
  cVar1 = TimerDone(5);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076c8), iVar3 != 0)) {
    AddResource(0,4,2000);
    SelectUnits(&DAT_100076c8,0);
    SelSendTo(4,&DAT_10007710,0xa0,0);
    SetTrigg(0xc,1);
    RunTimer(5,300);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007740,&DAT_100076c0), iVar3 != 0)) {
    RunTimer(6,500);
    SetTrigg(0xe,0);
  }
  cVar1 = TimerDone(6);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007740,&DAT_100076c0), iVar3 != 0)) {
    SelectUnits(&DAT_100076c0,0);
    SelSendTo(4,&DAT_10007730,0xa0,0);
    SelSendTo(4,&DAT_10007720,0xc0,2);
    SelSendTo(4,&DAT_10007710,0xa0,2);
    SelSendTo(4,&DAT_10007750,0x20,2);
    SetTrigg(0xf,1);
    RunTimer(6,300);
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076c0), iVar3 != 0)) {
    RunTimer(6,500);
    SetTrigg(0xf,0);
  }
  cVar1 = TimerDone(6);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount1(&DAT_10007750,&DAT_100076c0), iVar3 != 0)) {
    AddResource(0,3,2000);
    AddResource(0,5,1000);
    SelectUnits(&DAT_100076c0,0);
    SelSendTo(4,&DAT_10007710,0x40,0);
    SelSendTo(4,&DAT_10007720,0x20,2);
    SelSendTo(4,&DAT_10007730,0,2);
    SelSendTo(4,&DAT_10007740,0x80,2);
    SetTrigg(0xe,1);
    RunTimer(6,300);
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    SetTrigg(0x10,0);
    CreateObject0(&DAT_10007690,&DAT_10007698,&DAT_10007678,5,&DAT_10007858,0);
    SelectUnits(&DAT_10007690,0);
    SelSendAndKill(5,&DAT_10007780,0xa0,0);
    SelSendAndKill(5,&DAT_10007760,0x80,2);
    SelSendAndKill(5,&DAT_10007778,0xa0,2);
    SelSendAndKill(5,&DAT_10007670,0xc0,2);
    uVar2 = FUN_10001000();
    RunTimer(7,uVar2);
    SetTrigg(0x10,1);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(8), cVar1 != '\0')) {
    SetTrigg(0x12,0);
    CreateObject0(&DAT_10007688,&DAT_10007698,&DAT_10007678,5,&DAT_10007860,0x80);
    SelectUnits(&DAT_10007688,0);
    SelSendAndKill(5,&DAT_10007770,0xa0,0);
    SelSendAndKill(5,&DAT_10007768,0x80,2);
    SelSendAndKill(5,&DAT_10007758,0x80,2);
    SelSendAndKill(5,&DAT_10007670,0x80,2);
    uVar2 = FUN_10001000();
    RunTimer(8,uVar2);
    SetTrigg(0x12,1);
  }
  cVar1 = Trigg(0x13);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x14), cVar1 != '\0')) {
    SetTrigg(0x13,0);
    AddResource(1,5,5000);
  }
  cVar1 = Trigg(0x14);
  pcVar4 = ShowPage_exref;
  if ((cVar1 != '\0') &&
     (iVar3 = GetUnitsAmount0(&DAT_10007858,5), pcVar4 = ShowPage_exref, iVar3 == 0)) {
    SetTrigg(0x14,0);
    pcVar4 = ShowPage_exref;
    ShowPage(s__PAGE5_10007310);
    SetTrigg(0x10,0);
    SetTrigg(0x11,0);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007860,5), iVar3 == 0)) {
    SetTrigg(0x15,0);
    (*pcVar4)(s__PAGE6_10007308);
    SetTrigg(0x12,0);
    SetTrigg(0x11,0);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076a8), iVar3 == 0)) {
    (*pcVar4)(s__PAGE_10007300);
    RunTimer(9,5000);
    SetTrigg(0x16,0);
  }
  cVar1 = TimerDone(9);
  pcVar5 = CreateObject0_exref;
  if ((cVar1 != '\0') &&
     (iVar3 = GetTotalAmount0(&DAT_100076a8), pcVar5 = CreateObject0_exref, iVar3 == 0)) {
    CreateObject0(&DAT_100076a8,&DAT_10007850,&DAT_10007848,4,&DAT_100076f8,0x60);
    RunTimer(9,1000);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076a0), iVar3 == 0)) {
    (*pcVar4)(s__PAGE_10007300);
    RunTimer(10,5000);
    SetTrigg(0x17,0);
  }
  cVar1 = TimerDone(10);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076a0), iVar3 == 0)) {
    (*pcVar5)(&DAT_100076a0,&DAT_10007850,&DAT_10007848,4,&DAT_10007708,0x80);
    RunTimer(10,100);
    SetTrigg(0x17,1);
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076b8), iVar3 == 0)) {
    (*pcVar4)(s__PAGE_10007300);
    RunTimer(0xb,50000);
    SetTrigg(0x18,0);
  }
  cVar1 = TimerDone(0xb);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076b8), iVar3 == 0)) {
    (*pcVar5)(&DAT_100076b8,&DAT_10007850,&DAT_10007848,4,&DAT_10007728,0x60);
    RunTimer(0xb,100);
    SetTrigg(0x18,1);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076b0), iVar3 == 0)) {
    (*pcVar4)(s__PAGE_10007300);
    RunTimer(0xc,5000);
    SetTrigg(0x19,0);
  }
  cVar1 = TimerDone(0xc);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076b0), iVar3 == 0)) {
    (*pcVar5)(&DAT_100076b0,&DAT_10007850,&DAT_10007848,4,&DAT_10007738,0xa0);
    RunTimer(0xc,100);
    SetTrigg(0x19,1);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076c8), iVar3 == 0)) {
    (*pcVar4)(s__PAGE_100072f8);
    RunTimer(0xd,5000);
    SetTrigg(0x1a,0);
  }
  cVar1 = TimerDone(0xd);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076c8), iVar3 == 0)) {
    (*pcVar5)(&DAT_100076c8,&DAT_10007850,&DAT_10007848,4,&DAT_10007710,0xa0);
    RunTimer(0xd,1000);
    SetTrigg(0x1a,1);
  }
  cVar1 = Trigg(0x1b);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076c0), iVar3 == 0)) {
    (*pcVar4)(s__PAGE_100072f8);
    RunTimer(0xe,5000);
    SetTrigg(0x1b,0);
  }
  cVar1 = TimerDone(0xe);
  if ((cVar1 != '\0') && (iVar3 = GetTotalAmount0(&DAT_100076c0), iVar3 == 0)) {
    (*pcVar5)(&DAT_100076c0,&DAT_10007850,&DAT_10007848,4,&DAT_10007740,0x80);
    RunTimer(0xe,100);
    SetTrigg(0x1b,1);
  }
  cVar1 = Trigg(0x1c);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007758,4), iVar3 == 0)) {
    SetTrigg(0x1c,0);
    (*pcVar4)(s__PAGE7_100072f0);
    ClearLightSpot(1);
    SetTrigg(4,0);
    SetTrigg(5,0);
  }
  cVar1 = Trigg(0x1d);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007760,4), iVar3 == 0)) {
    SetTrigg(0x1d,0);
    (*pcVar4)(s__PAGE8_100072e8);
    ClearLightSpot(2);
    SetTrigg(6,0);
    SetTrigg(7,0);
  }
  cVar1 = Trigg(0x1e);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007768,4), iVar3 == 0)) {
    SetTrigg(0x1e,0);
    (*pcVar4)(s__PAGE9_100072e0);
    ClearLightSpot(3);
    SetTrigg(8,0);
    SetTrigg(9,0);
  }
  cVar1 = Trigg(0x1f);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007770,4), iVar3 == 0)) {
    SetTrigg(0x1f,0);
    (*pcVar4)(s__PAGE10_100072d8);
    ClearLightSpot(4);
    SetTrigg(10,0);
    SetTrigg(0xb,0);
  }
  cVar1 = Trigg(0x20);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007778,4), iVar3 == 0)) {
    SetTrigg(0x20,0);
    (*pcVar4)(s__PAGE11_100072d0);
    ClearLightSpot(5);
    SetTrigg(0xc,0);
    SetTrigg(0xd,0);
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007780,4), iVar3 == 0)) {
    SetTrigg(0x21,0);
    (*pcVar4)(s__PAGE12_100072c8);
    ClearLightSpot(6);
    SetTrigg(0xe,0);
    SetTrigg(0xf,0);
  }
  return;
}



// Function: FUN_10002890 @ 0x10002890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002890(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10007884 = GetVersion();
    iVar1 = FUN_100032c4(1);
    if (iVar1 != 0) {
      _DAT_10007890 = DAT_10007884 >> 8 & 0xff;
      _DAT_1000788c = DAT_10007884 & 0xff;
      DAT_10007884 = DAT_10007884 >> 0x10;
      _DAT_10007888 = _DAT_1000788c * 0x100 + _DAT_10007890;
      iVar1 = FUN_10002b57();
      if (iVar1 != 0) {
        DAT_10007dd8 = GetCommandLineA();
        DAT_10007870 = FUN_10003192();
        FUN_10002c7c();
        FUN_10002f45();
        FUN_10002e8c();
        FUN_10002a39();
        DAT_1000786c = DAT_1000786c + 1;
        goto LAB_10002963;
      }
      FUN_10003300();
    }
LAB_100028f0:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000786c < 1) goto LAB_100028f0;
      DAT_1000786c = DAT_1000786c + -1;
      if (DAT_100078bc == 0) {
        FUN_10002a77();
      }
      FUN_10002e38();
      FUN_10002bab();
      FUN_10003300();
    }
    else if (param_2 == 3) {
      FUN_10002bdc((LPVOID)0x0);
    }
LAB_10002963:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10002969

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000786c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_100029b1;
    if ((DAT_10007ddc != (code *)0x0) &&
       (iVar2 = (*DAT_10007ddc)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10002890(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_100029b1:
  iVar2 = FUN_100013f0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10002890(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10002890(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10007ddc != (code *)0x0) {
      iVar2 = (*DAT_10007ddc)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10002a06

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10007878 == 1) || ((DAT_10007878 == 0 && (DAT_1000787c == 1)))) {
    FUN_10003375();
  }
  FUN_100033ae(param_1);
  (*(code *)PTR___exit_10007344)(0xff);
  return;
}



// Function: FUN_10002a39 @ 0x10002a39

void FUN_10002a39(void)

{
  if (DAT_10007dd4 != (code *)0x0) {
    (*DAT_10007dd4)();
  }
  FUN_10002b3d((undefined4 *)&DAT_10007008,(undefined4 *)&DAT_10007010);
  FUN_10002b3d((undefined4 *)&DAT_10007000,(undefined4 *)&DAT_10007004);
  return;
}



// Function: __exit @ 0x10002a66

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10002a86(_Code,1,0);
  return;
}



// Function: FUN_10002a77 @ 0x10002a77

void FUN_10002a77(void)

{
  FUN_10002a86(0,0,1);
  return;
}



// Function: FUN_10002a86 @ 0x10002a86

void __cdecl FUN_10002a86(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10002b2b();
  if (DAT_100078c0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100078bc = 1;
  DAT_100078b8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10007dd0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10007dcc - 4), DAT_10007dd0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10007dd0 <= puVar1);
    }
    FUN_10002b3d((undefined4 *)&DAT_10007014,(undefined4 *)&DAT_10007018);
  }
  FUN_10002b3d((undefined4 *)&DAT_1000701c,(undefined4 *)&DAT_10007020);
  if (param_3 == 0) {
    DAT_100078c0 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10002b34();
  return;
}



// Function: FUN_10002b2b @ 0x10002b2b

void FUN_10002b2b(void)

{
  FUN_10003596(0xd);
  return;
}



// Function: FUN_10002b34 @ 0x10002b34

void FUN_10002b34(void)

{
  FUN_100035f7(0xd);
  return;
}



// Function: FUN_10002b3d @ 0x10002b3d

void __cdecl FUN_10002b3d(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10002b57 @ 0x10002b57

undefined4 FUN_10002b57(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10003501();
  DAT_10007348 = TlsAlloc();
  if (DAT_10007348 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000360c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10007348,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10002bc9((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10002bab @ 0x10002bab

void FUN_10002bab(void)

{
  FUN_1000352a();
  if (DAT_10007348 != 0xffffffff) {
    TlsFree(DAT_10007348);
    DAT_10007348 = 0xffffffff;
  }
  return;
}



// Function: FUN_10002bc9 @ 0x10002bc9

void __cdecl FUN_10002bc9(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100074c8;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10002bdc @ 0x10002bdc

void __cdecl FUN_10002bdc(LPVOID param_1)

{
  if (DAT_10007348 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_10007348), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_10003699(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_10003699(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_10003699(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_10003699(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_10003699(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_10003699(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_100074c8) {
        FUN_10003699(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_10003699(param_1);
    }
    TlsSetValue(DAT_10007348,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10002c7c @ 0x10002c7c

void FUN_10002c7c(void)

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
  DAT_10007dc0 = 0x20;
  DAT_10007cc0 = puVar2;
  for (; puVar2 < DAT_10007cc0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10007dc0 < (int)UVar8) {
      puVar2 = &DAT_10007cc4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10007dc0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10007dc0 = DAT_10007dc0 + 0x20;
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
      } while ((int)DAT_10007dc0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10007cc0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10007cc0 + iVar6 * 9;
    if (DAT_10007cc0[iVar6 * 9] == -1) {
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
          goto LAB_10002e21;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10002e21:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10007dc0);
      return;
    }
  } while( true );
}



// Function: FUN_10002e38 @ 0x10002e38

void FUN_10002e38(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10007cc0;
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
      FUN_10003699((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10007dc0);
  return;
}



// Function: FUN_10002e8c @ 0x10002e8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002e8c(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10007dc8 == 0) {
    FUN_10003cb3();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10007870; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_100078a0 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10007870;
  puVar6 = DAT_10007870;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10003770((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10003699(DAT_10007870);
  DAT_10007870 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10007dc4 = 1;
  return;
}



// Function: FUN_10002f45 @ 0x10002f45

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002f45(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10007dc8 == 0) {
    FUN_10003cb3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100078c4,0x104);
  _DAT_100078b0 = &DAT_100078c4;
  pbVar2 = &DAT_100078c4;
  if (*DAT_10007dd8 != 0) {
    pbVar2 = DAT_10007dd8;
  }
  FUN_10002fde(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10002fde(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10007898 = puVar1;
  _DAT_10007894 = local_8 + -1;
  return;
}



// Function: FUN_10002fde @ 0x10002fde

void __cdecl FUN_10002fde(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10007ba0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10007ba0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10003089;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10003089:
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
          if ((*(byte *)((int)&DAT_10007ba0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10007ba0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10003192 @ 0x10003192

LPSTR FUN_10003192(void)

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
  if (DAT_100079c8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_100079c8 = 1;
LAB_100031e9:
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
        FUN_10003699(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_100079c8 = 2;
  }
  else {
    if (DAT_100079c8 == 1) goto LAB_100031e9;
    if (DAT_100079c8 != 2) {
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
    FUN_10003cd0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_100032c4 @ 0x100032c4

undefined4 __cdecl FUN_100032c4(int param_1)

{
  int iVar1;
  
  DAT_10007ca8 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10007ca8 != (HANDLE)0x0) {
    iVar1 = FUN_10004005();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_10007ca8);
  }
  return 0;
}



// Function: FUN_10003300 @ 0x10003300

void FUN_10003300(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_10007a80) {
    puVar2 = (undefined4 *)((int)DAT_10007a84 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_10007ca8,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10007a80);
  }
  HeapFree(DAT_10007ca8,0,DAT_10007a84);
  HeapDestroy(DAT_10007ca8);
  return;
}



// Function: FUN_10003375 @ 0x10003375

void FUN_10003375(void)

{
  if ((DAT_10007878 == 1) || ((DAT_10007878 == 0 && (DAT_1000787c == 1)))) {
    FUN_100033ae(0xfc);
    if (DAT_100079cc != (code *)0x0) {
      (*DAT_100079cc)();
    }
    FUN_100033ae(0xff);
  }
  return;
}



// Function: FUN_100033ae @ 0x100033ae

void __cdecl FUN_100033ae(DWORD param_1)

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
  pDVar2 = &DAT_10007378;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10007408);
  if (param_1 == (&DAT_10007378)[iVar5 * 2]) {
    if ((DAT_10007878 == 1) || ((DAT_10007878 == 0 && (DAT_1000787c == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000737c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10003770(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10003770(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10003780(local_a4,_Dest);
      FUN_10003780(local_a4,(uint *)&DAT_100063fc);
      FUN_10003780(local_a4,*(uint **)(iVar5 * 8 + 0x1000737c));
      auStackY_1e3._3_4_ = 0x100034d2;
      FUN_1000484e(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10003501 @ 0x10003501

void FUN_10003501(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000744c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000743c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000742c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000740c);
  return;
}



// Function: FUN_1000352a @ 0x1000352a

void FUN_1000352a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10007408;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000744c)) && (ppuVar1 != &PTR_DAT_1000743c)) &&
       ((ppuVar1 != &PTR_DAT_1000742c && (ppuVar1 != &PTR_DAT_1000740c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10003699(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100074c8);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000742c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000743c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000744c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000740c);
  return;
}



// Function: FUN_10003596 @ 0x10003596

void __cdecl FUN_10003596(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10007408 + param_1;
  if ((&DAT_10007408)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10003596(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10003699(lpCriticalSection);
    }
    FUN_100035f7(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_100035f7 @ 0x100035f7

void __cdecl FUN_100035f7(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10007408)[param_1]);
  return;
}



// Function: FUN_1000360c @ 0x1000360c

int * __cdecl FUN_1000360c(int param_1,int param_2)

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
      if (_Size < DAT_10007650 || (int)_Size - (int)DAT_10007650 == 0) {
        FUN_10003596(9);
        piVar1 = FUN_10004399(_Size);
        FUN_100035f7(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_10007ca8,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_10007a44 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10004a38(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_10003699 @ 0x10003699

void __cdecl FUN_10003699(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_10003596(9);
    puVar1 = (uint *)FUN_10004043((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_1000406e(puVar1,(uint)param_1);
      FUN_100035f7(9);
      return;
    }
    FUN_100035f7(9);
    HeapFree(DAT_10007ca8,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x100036e1

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10007a44);
  return pvVar1;
}



// Function: __nh_malloc @ 0x100036f3

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_1000371f((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10004a38(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_1000371f @ 0x1000371f

int * __cdecl FUN_1000371f(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10007650) {
    FUN_10003596(9);
    piVar1 = FUN_10004399(param_1);
    FUN_100035f7(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_10007ca8,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_10003770 @ 0x10003770

uint * __cdecl FUN_10003770(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10003858;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10003858:
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



// Function: FUN_10003780 @ 0x10003780

uint * __cdecl FUN_10003780(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000379c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100037cf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x100037eb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000379c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x100037eb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x100037eb;
    }
  }
LAB_100037cf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x100037eb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10003858:
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
    if (bVar1 == 0) goto LAB_10003858;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x10003860

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10003880;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100038b3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10003880:
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
  goto LAB_100038b3;
}



// Function: FUN_100038db @ 0x100038db

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100038db(int param_1)

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
  
  FUN_10003596(0x19);
  CodePage = FUN_10003a88(param_1);
  if (CodePage != DAT_10007a88) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10007558;
LAB_10003918:
      if (*pUVar5 != CodePage) goto code_r0x1000391c;
      local_8 = 0;
      puVar15 = &DAT_10007ba0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10007568);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10007550)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10007ba0 + uVar8 + 1);
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
      _DAT_10007a9c = 1;
      DAT_10007a88 = CodePage;
      DAT_10007ca4 = FUN_10003ad2(CodePage);
      DAT_10007a90 = *(undefined4 *)(iVar12 + 0x1000755c);
      DAT_10007a94 = *(undefined4 *)(iVar12 + 0x10007560);
      DAT_10007a98 = *(undefined4 *)(iVar12 + 0x10007564);
      goto LAB_10003a6c;
    }
    goto LAB_10003a67;
  }
  goto LAB_10003902;
code_r0x1000391c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10007647 < (int)pUVar5) goto code_r0x10003927;
  goto LAB_10003918;
code_r0x10003927:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10007ca4 = 0;
    puVar15 = &DAT_10007ba0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_10007a9c = 0;
      DAT_10007a88 = CodePage;
    }
    else {
      DAT_10007a88 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10007ba0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10007ba0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10007ca4 = FUN_10003ad2(CodePage);
      _DAT_10007a9c = 1;
    }
    DAT_10007a90 = 0;
    DAT_10007a94 = 0;
    DAT_10007a98 = 0;
  }
  else {
    if (DAT_10007a30 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10003a79;
    }
LAB_10003a67:
    FUN_10003b05();
  }
LAB_10003a6c:
  FUN_10003b2e();
LAB_10003902:
  uVar14 = 0;
LAB_10003a79:
  FUN_100035f7(0x19);
  return uVar14;
}



// Function: FUN_10003a88 @ 0x10003a88

int __cdecl FUN_10003a88(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10007a30 = 1;
                    /* WARNING: Could not recover jumptable at 0x10003aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10007a30 = 1;
                    /* WARNING: Could not recover jumptable at 0x10003ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10007a60;
  }
  DAT_10007a30 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10003ad2 @ 0x10003ad2

undefined4 __cdecl FUN_10003ad2(int param_1)

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



// Function: FUN_10003b05 @ 0x10003b05

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003b05(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10007ba0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10007a88 = 0;
  _DAT_10007a9c = 0;
  DAT_10007ca4 = 0;
  DAT_10007a90 = 0;
  DAT_10007a94 = 0;
  DAT_10007a98 = 0;
  return;
}



// Function: FUN_10003b2e @ 0x10003b2e

void FUN_10003b2e(void)

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
  
  BVar2 = GetCPInfo(DAT_10007a88,&local_18);
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
    FUN_10004ca2(1,local_118,0x100,local_518,DAT_10007a88,DAT_10007ca4,0);
    FUN_10004a53(DAT_10007ca4,0x100,local_118,0x100,local_218,0x100,DAT_10007a88,0);
    FUN_10004a53(DAT_10007ca4,0x200,local_118,0x100,local_318,0x100,DAT_10007a88,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10007ba0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10003c3a;
        }
        (&DAT_10007aa0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10007ba0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10003c3a:
        (&DAT_10007aa0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10007ba0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10003c84;
        }
        (&DAT_10007aa0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10007ba0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10003c84:
        (&DAT_10007aa0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10003cb3 @ 0x10003cb3

void FUN_10003cb3(void)

{
  if (DAT_10007dc8 == 0) {
    FUN_100038db(-3);
    DAT_10007dc8 = 1;
  }
  return;
}



// Function: FUN_10003cd0 @ 0x10003cd0

undefined4 * __cdecl FUN_10003cd0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10003e87_caseD_2;
        case 3:
          goto switchD_10003e87_caseD_3;
        }
        goto switchD_10003e87_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10003e87_caseD_0;
      case 1:
        goto switchD_10003e87_caseD_1;
      case 2:
        goto switchD_10003e87_caseD_2;
      case 3:
        goto switchD_10003e87_caseD_3;
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
              goto switchD_10003e87_caseD_2;
            case 3:
              goto switchD_10003e87_caseD_3;
            }
            goto switchD_10003e87_caseD_1;
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
              goto switchD_10003e87_caseD_2;
            case 3:
              goto switchD_10003e87_caseD_3;
            }
            goto switchD_10003e87_caseD_1;
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
              goto switchD_10003e87_caseD_2;
            case 3:
              goto switchD_10003e87_caseD_3;
            }
            goto switchD_10003e87_caseD_1;
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
switchD_10003e87_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10003e87_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10003e87_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10003e87_caseD_0:
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
        goto switchD_10003d05_caseD_2;
      case 3:
        goto switchD_10003d05_caseD_3;
      }
      goto switchD_10003d05_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10003d05_caseD_0;
    case 1:
      goto switchD_10003d05_caseD_1;
    case 2:
      goto switchD_10003d05_caseD_2;
    case 3:
      goto switchD_10003d05_caseD_3;
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
            goto switchD_10003d05_caseD_2;
          case 3:
            goto switchD_10003d05_caseD_3;
          }
          goto switchD_10003d05_caseD_1;
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
            goto switchD_10003d05_caseD_2;
          case 3:
            goto switchD_10003d05_caseD_3;
          }
          goto switchD_10003d05_caseD_1;
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
            goto switchD_10003d05_caseD_2;
          case 3:
            goto switchD_10003d05_caseD_3;
          }
          goto switchD_10003d05_caseD_1;
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
switchD_10003d05_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10003d05_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10003d05_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10003d05_caseD_0:
  return param_1;
}



// Function: FUN_10004005 @ 0x10004005

undefined4 FUN_10004005(void)

{
  DAT_10007a84 = HeapAlloc(DAT_10007ca8,0,0x140);
  if (DAT_10007a84 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10007a7c = 0;
  DAT_10007a80 = 0;
  DAT_10007a78 = DAT_10007a84;
  DAT_10007a70 = 0x10;
  return 1;
}



// Function: FUN_10004043 @ 0x10004043

uint __cdecl FUN_10004043(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10007a84;
  while( true ) {
    if (DAT_10007a84 + DAT_10007a80 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_1000406e @ 0x1000406e

void __cdecl FUN_1000406e(uint *param_1,uint param_2)

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
  uVar5 = DAT_10007a74;
  puVar2 = DAT_10007a7c;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_10007a7c != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_10007a74 * 0x8000 + DAT_10007a7c[3]),0x8000,0x4000);
    DAT_10007a7c[2] = DAT_10007a7c[2] | 0x80000000U >> ((byte)DAT_10007a74 & 0x1f);
    *(undefined4 *)(DAT_10007a7c[4] + 0xc4 + DAT_10007a74 * 4) = 0;
    *(char *)(DAT_10007a7c[4] + 0x43) = *(char *)(DAT_10007a7c[4] + 0x43) + -1;
    if (*(char *)(DAT_10007a7c[4] + 0x43) == '\0') {
      DAT_10007a7c[1] = DAT_10007a7c[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_10007a7c[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_10007a7c[3],0,0x8000);
      HeapFree(DAT_10007ca8,0,(LPVOID)DAT_10007a7c[4]);
      FUN_10004df0(DAT_10007a7c,DAT_10007a7c + 5,
                   (DAT_10007a80 * 0x14 - (int)DAT_10007a7c) + -0x14 + DAT_10007a84);
      DAT_10007a80 = DAT_10007a80 + -1;
      if (DAT_10007a7c < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_10007a78 = DAT_10007a84;
      puVar2 = param_1;
    }
  }
  DAT_10007a7c = puVar2;
  DAT_10007a74 = uVar5;
  return;
}



// Function: FUN_10004399 @ 0x10004399

int * __cdecl FUN_10004399(uint *param_1)

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
  
  puVar8 = DAT_10007a84 + DAT_10007a80 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10007a78;
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
  puVar11 = DAT_10007a84;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10007a78 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10007a78) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10007a84;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10007a78 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10007a78) && (param_1 = FUN_100046a2(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10004753((int)param_1);
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
  DAT_10007a78 = param_1;
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
    if (iVar9 == 0) goto LAB_1000465f;
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
LAB_1000465f:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10007a7c)) && (local_8 == DAT_10007a74)) {
    DAT_10007a7c = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_100046a2 @ 0x100046a2

undefined4 * FUN_100046a2(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10007a80 == DAT_10007a70) {
    pvVar2 = HeapReAlloc(DAT_10007ca8,0,DAT_10007a84,(DAT_10007a70 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10007a70 = DAT_10007a70 + 0x10;
    DAT_10007a84 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10007a84 + DAT_10007a80 * 0x14);
  pvVar2 = HeapAlloc(DAT_10007ca8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10007a80 = DAT_10007a80 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10007ca8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10004753 @ 0x10004753

int __cdecl FUN_10004753(int param_1)

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



// Function: FUN_1000484e @ 0x1000484e

int __cdecl FUN_1000484e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10007a34 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10007a34 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10007a34 != (FARPROC)0x0) {
        DAT_10007a38 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10007a3c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000489d;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000489d:
    if (DAT_10007a38 != (FARPROC)0x0) {
      iVar1 = (*DAT_10007a38)();
      if ((iVar1 != 0) && (DAT_10007a3c != (FARPROC)0x0)) {
        iVar1 = (*DAT_10007a3c)(iVar1);
      }
    }
    iVar1 = (*DAT_10007a34)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x100048e0

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
        goto joined_r0x1000491e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000495b;
        goto LAB_100049c9;
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
joined_r0x100049c5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_100049c9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000495b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x100049c5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x100049c5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x100049c5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000491e:
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
LAB_1000495b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: _memset @ 0x100049e0

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



// Function: FUN_10004a38 @ 0x10004a38

undefined4 __cdecl FUN_10004a38(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10007a40 != (code *)0x0) {
    iVar1 = (*DAT_10007a40)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10004a53 @ 0x10004a53

int __cdecl
FUN_10004a53(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10006480;
  puStack_10 = &LAB_10005220;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10007a68 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10007a68 = 2;
    }
    else {
      DAT_10007a68 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10004c77(param_3,param_4);
  }
  if (DAT_10007a68 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10007a68 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10007a60;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10005300();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10005300();
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



// Function: FUN_10004c77 @ 0x10004c77

int __cdecl FUN_10004c77(char *param_1,int param_2)

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



// Function: FUN_10004ca2 @ 0x10004ca2

BOOL __cdecl
FUN_10004ca2(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_10006498;
  puStack_10 = &LAB_10005220;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10007a6c;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10007a6c == 0) {
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
  DAT_10007a6c = iVar3;
  if (DAT_10007a6c != 2) {
    if (DAT_10007a6c == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10007a60;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10005300();
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
    param_6 = DAT_10007a50;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10004df0 @ 0x10004df0

undefined4 * __cdecl FUN_10004df0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10004fa7_caseD_2;
        case 3:
          goto switchD_10004fa7_caseD_3;
        }
        goto switchD_10004fa7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10004fa7_caseD_0;
      case 1:
        goto switchD_10004fa7_caseD_1;
      case 2:
        goto switchD_10004fa7_caseD_2;
      case 3:
        goto switchD_10004fa7_caseD_3;
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
              goto switchD_10004fa7_caseD_2;
            case 3:
              goto switchD_10004fa7_caseD_3;
            }
            goto switchD_10004fa7_caseD_1;
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
              goto switchD_10004fa7_caseD_2;
            case 3:
              goto switchD_10004fa7_caseD_3;
            }
            goto switchD_10004fa7_caseD_1;
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
              goto switchD_10004fa7_caseD_2;
            case 3:
              goto switchD_10004fa7_caseD_3;
            }
            goto switchD_10004fa7_caseD_1;
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
switchD_10004fa7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10004fa7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10004fa7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10004fa7_caseD_0:
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
        goto switchD_10004e25_caseD_2;
      case 3:
        goto switchD_10004e25_caseD_3;
      }
      goto switchD_10004e25_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004e25_caseD_0;
    case 1:
      goto switchD_10004e25_caseD_1;
    case 2:
      goto switchD_10004e25_caseD_2;
    case 3:
      goto switchD_10004e25_caseD_3;
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
            goto switchD_10004e25_caseD_2;
          case 3:
            goto switchD_10004e25_caseD_3;
          }
          goto switchD_10004e25_caseD_1;
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
            goto switchD_10004e25_caseD_2;
          case 3:
            goto switchD_10004e25_caseD_3;
          }
          goto switchD_10004e25_caseD_1;
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
            goto switchD_10004e25_caseD_2;
          case 3:
            goto switchD_10004e25_caseD_3;
          }
          goto switchD_10004e25_caseD_1;
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
switchD_10004e25_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004e25_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004e25_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004e25_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x10005128

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10005140,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000516a

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
  puStack_18 = &LAB_10005148;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100051fe();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_100051fe @ 0x100051fe

void FUN_100051fe(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10007668 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10007664 = in_EAX;
  DAT_1000766c = unaff_EBP;
  return;
}



// Function: FUN_100052dd @ 0x100052dd

void FUN_100052dd(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10005300 @ 0x10005300

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10005300(void)

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




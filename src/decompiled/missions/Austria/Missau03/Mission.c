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
  RegisterUnits(&DAT_10009fa0,&DAT_100091c8);
  RegisterUnits(&DAT_10009fa8,&DAT_100091c4);
  RegisterUnits(&DAT_10009fb0,&DAT_100091c0);
  RegisterUnits(&DAT_10009fb8,&DAT_100091bc);
  RegisterUnits(&DAT_10009fc0,&DAT_100091b8);
  RegisterUnits(&DAT_10009fc8,&DAT_100091b4);
  RegisterUnits(&DAT_10009fd0,&DAT_100091b0);
  RegisterUnits(&DAT_10009fd8,&DAT_100091ac);
  RegisterUnits(&DAT_10009fe0,&DAT_100091a8);
  RegisterUnits(&DAT_10009ff0,&DAT_100091a4);
  RegisterUnits(&DAT_10009ff8,&DAT_100091a0);
  RegisterUnits(&DAT_1000a000,&DAT_1000919c);
  RegisterUnits(&DAT_1000a008,&DAT_10009198);
  RegisterUnits(&DAT_1000a010,&DAT_10009194);
  RegisterUnits(&DAT_1000a018,&DAT_10009190);
  RegisterUnits(&DAT_1000a118,&DAT_10009188);
  RegisterUnits(&DAT_1000a098,&DAT_10009184);
  RegisterUnits(&DAT_1000a0a0,&DAT_10009180);
  RegisterUnits(&DAT_1000a0a8,&DAT_1000917c);
  RegisterUnits(&DAT_1000a0b0,&DAT_10009178);
  RegisterUnits(&DAT_1000a0b8,&DAT_10009174);
  RegisterUnits(&DAT_1000a0c0,&DAT_10009170);
  RegisterUnits(&DAT_1000a0c8,&DAT_1000916c);
  RegisterUnits(&DAT_1000a0d0,&DAT_10009168);
  RegisterUnits(&DAT_1000a0d8,&DAT_10009164);
  RegisterUnits(&DAT_1000a040,&DAT_1000915c);
  RegisterUnits(&DAT_1000a048,&DAT_10009154);
  RegisterUnits(&DAT_1000a050,&DAT_1000914c);
  RegisterUnits(&DAT_1000a058,&DAT_10009144);
  RegisterUnits(&DAT_1000a060,&DAT_1000913c);
  RegisterUnits(&DAT_1000a068,&DAT_10009134);
  RegisterUnits(&DAT_1000a070,&DAT_1000912c);
  RegisterUnits(&DAT_1000a078,&DAT_10009124);
  RegisterUnits(&DAT_1000a080,&DAT_1000911c);
  RegisterUnits(&DAT_1000a088,&DAT_10009114);
  RegisterUnits(&DAT_1000a090,&DAT_1000910c);
  RegisterUnits(&DAT_10009f70,s_Ga10a_10009104);
  RegisterUnits(&DAT_10009f78,s_Ga12a_100090fc);
  RegisterUnits(&DAT_10009f80,s_Ga13a_100090f4);
  RegisterZone(&DAT_1000a020,&DAT_100090f0);
  RegisterZone(&DAT_1000a120,&DAT_100090ec);
  RegisterZone(&DAT_1000a028,&DAT_100090e8);
  RegisterZone(&DAT_1000a130,&DAT_100090e4);
  RegisterZone(&DAT_1000a030,&DAT_100090e0);
  RegisterZone(&DAT_1000a038,&DAT_100090dc);
  RegisterZone(&DAT_1000a150,&DAT_100090d8);
  RegisterZone(&DAT_1000a158,&DAT_100090d4);
  RegisterZone(&DAT_1000a160,&DAT_100090d0);
  RegisterZone(&DAT_1000a168,&DAT_100090cc);
  RegisterZone(&DAT_1000a170,&DAT_100090c8);
  RegisterZone(&DAT_1000a178,&DAT_100090c4);
  RegisterZone(&DAT_1000a180,&DAT_100090c0);
  RegisterZone(&DAT_1000a188,&DAT_100090bc);
  RegisterZone(&DAT_1000a190,&DAT_100090b8);
  RegisterZone(&DAT_1000a0e0,&DAT_100090b0);
  RegisterZone(&DAT_1000a0e8,&DAT_100090a8);
  RegisterZone(&DAT_1000a0f0,&DAT_100090a0);
  RegisterZone(&DAT_1000a0f8,&DAT_10009098);
  RegisterZone(&DAT_1000a100,&DAT_10009090);
  RegisterZone(&DAT_1000a108,&DAT_10009088);
  RegisterZone(&DAT_1000a110,&DAT_10009080);
  RegisterZone(&DAT_1000a128,&DAT_10009078);
  RegisterZone(&DAT_1000a138,&DAT_10009070);
  RegisterZone(&DAT_1000a140,&DAT_10009068);
  RegisterZone(&DAT_1000a148,&DAT_10009060);
  RegisterZone(&DAT_10009f88,s_Za10a_10009058);
  RegisterZone(&DAT_10009f90,s_Za12a_10009050);
  RegisterZone(&DAT_10009f98,s_Za13a_10009048);
  RegisterVar(&DAT_1000a198,8);
  RegisterDynGroup(&DAT_10009fe8);
  SetPlayerName(1,s_CHEHS_10009040);
  ChangeFriends(0,0x11);
  ChangeFriends(4,0x11);
  SetPlayerName(4,s_ALLIES_10009038);
  SetPlayerName(5,s_REBELS_10009030);
  return;
}



// Function: ProcessScenary @ 0x100013d0

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
  char *pcVar8;
  
                    /* 0x13d0  2  ProcessScenary */
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SelectUnits(&DAT_1000a018,0);
      SelErase(1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SelectUnits(&DAT_1000a118,0);
      SelErase(1);
    }
    SetResource(0,3,200000);
    SetResource(0,1,200000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar2 = GetDiff(1);
    SetResource(0,5,(0xc - iVar2) * 500);
    iVar2 = GetDiff(1);
    SetResource(0,4,(0xc - iVar2) * 500);
    SetResource(1,3,200000);
    SetResource(1,1,200000);
    SetResource(1,0,0);
    SetResource(1,2,0);
    SetResource(1,5,500000);
    SetResource(1,4,500000);
    SetResource(4,3,200000);
    SetResource(4,1,200000);
    SetResource(4,0,0);
    SetResource(4,2,0);
    SetResource(4,5,500000);
    SetResource(4,4,500000);
    ShowPage(s__PAGE0_10009274);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,5,100000);
      SetResource(0,4,100000);
    }
    else {
      ShowPage(s__OTST1_1000926c);
    }
    RunTimer(1,500);
    CreateZoneNearGroup(&DAT_1000a198,&DAT_1000a020,&DAT_10009fa0,1000);
    RunTimer(3,0x32);
  }
  cVar1 = TimerDoneFirst(1);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10009fb8,0);
    SelSendTo(4,&DAT_1000a130,0xb4,0);
    SelSendTo(4,&DAT_1000a028,0xb4,2);
    SelSendTo(4,&DAT_1000a030,0,2);
    SetLightSpot(&DAT_1000a038,4,1);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_1000a030,&DAT_10009fb8), 10 < iVar2)) {
    SetTrigg(0x12,0);
    ShowPage(s__PAGE1_10009264);
    SelectUnits(&DAT_10009fb8,0);
    SelChangeNation(4,0);
    ClearLightSpot(1);
  }
  cVar1 = Trigg(1);
  pcVar5 = GetTotalAmount0_exref;
  if ((cVar1 != '\0') &&
     ((iVar2 = GetResource(0,4), iVar2 < 0x46 || (iVar2 = GetResource(0,5), iVar2 < 0x73)))) {
    SetTrigg(1,0);
    iVar2 = GetTotalAmount0(&DAT_10009fa8);
    if ((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10009fb0), iVar2 < 1)) {
      pcVar8 = s__PAGE2A_10009254;
    }
    else {
      pcVar8 = s__PAGE2_1000925c;
    }
    ShowPage(pcVar8);
  }
  cVar1 = Trigg(1);
  if ((cVar1 == '\0') && (cVar1 = Trigg(2), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10009fa8);
    iVar3 = GetUnitsAmount1(&DAT_1000a020,&DAT_10009fa8);
    if ((iVar3 == iVar2) &&
       ((iVar2 = GetTotalAmount0(&DAT_10009fa8), 0 < iVar2 &&
        (iVar2 = GetTotalAmount0(&DAT_10009fb0), 0 < iVar2)))) {
      SetTrigg(2,0);
      ShowPage(s__PAGE3_1000924c);
      iVar2 = GetDiff(1);
      RunTimer(2,iVar2 * 200 + 500);
    }
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10009fa8);
    iVar3 = GetUnitsAmount1(&DAT_1000a020,&DAT_10009fa8);
    if (iVar3 < iVar2) {
      SetTrigg(2,1);
      FreeTimer(2);
      ShowPage(s__PAGE4_10009244);
    }
  }
  cVar1 = TimerDoneFirst(2);
  if (cVar1 != '\0') {
    ShowPage(s__PAGE5_1000923c);
    FreeTimer(2);
    SetTrigg(3,0);
  }
  cVar1 = Trigg(3);
  if (cVar1 == '\0') {
    iVar2 = GetTotalAmount0(&DAT_10009fa8);
    iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fa8);
    if ((iVar3 == iVar2) && (iVar2 = GetTotalAmount0(&DAT_10009fa8), 0 < iVar2)) {
      SetTrigg(1,1);
      SetTrigg(2,1);
      SetTrigg(3,1);
      ShowPage(s__PAGE6_10009234);
      iVar2 = GetDiff(1);
      iVar3 = GetTotalAmount0(&DAT_10009fa8);
      AddResource(0,4,(6 - iVar2) * iVar3 * 200);
      iVar2 = GetDiff(1);
      iVar3 = GetTotalAmount0(&DAT_10009fa8);
      AddResource(0,5,(6 - iVar2) * iVar3 * 200);
    }
  }
  cVar1 = TimerDone(3);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(&DAT_1000a198,&DAT_1000a020,&DAT_10009fa0,1000);
    RunTimer(3,0x32);
  }
  iVar2 = GetDiff(0);
  if (0 < iVar2) {
    cVar1 = Trigg(10);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fc0), iVar2 < 0x1e)) {
      iVar2 = GetTotalAmount0(&DAT_10009fc0);
      iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fc0);
      if (iVar3 < iVar2 / 2) {
        SetTrigg(10,0);
        ShowPage(s__PAGE7_1000922c);
        ClearSelection(0);
        SelectUnits(&DAT_10009fc0,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10009fc0,0);
        SelSendTo(4,&DAT_1000a120,0,0);
      }
    }
    cVar1 = Trigg(0x14);
    if ((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) {
      iVar2 = GetTotalAmount0(&DAT_10009fc0);
      iVar3 = GetUnitsAmount1(&DAT_1000a120,&DAT_10009fc0);
      iVar4 = GetDiff(1);
      if (((double)(iVar4 / 10) + _DAT_10008150) * (double)iVar2 <= (double)iVar3) {
        SetTrigg(0x14,0);
        ShowPage(s__PAGE8_10009224);
        ClearSelection(4);
        SelectUnits(&DAT_10009fc0,0);
        SelChangeNation(4,0);
      }
    }
    cVar1 = Trigg(0xb);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fc8), iVar2 < 0x5a)) {
      iVar2 = GetTotalAmount0(&DAT_10009fc8);
      iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fc8);
      if (iVar3 < iVar2 / 2) {
        SetTrigg(0xb,0);
        ShowPage(s__PAGE9_1000921c);
        ClearSelection(0);
        SelectUnits(&DAT_10009fc8,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10009fc8,0);
        SelSendTo(4,&DAT_1000a120,0,0);
      }
    }
    cVar1 = Trigg(0x15);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0xb), cVar1 == '\0')) {
      iVar2 = GetTotalAmount0(&DAT_10009fc8);
      iVar3 = GetUnitsAmount1(&DAT_1000a120,&DAT_10009fc8);
      iVar4 = GetDiff(1);
      if (((double)(iVar4 / 10) + _DAT_10008150) * (double)iVar2 <= (double)iVar3) {
        SetTrigg(0x15,0);
        ShowPage(s__PAGE10_10009214);
        ClearSelection(4);
        SelectUnits(&DAT_10009fc8,0);
        SelChangeNation(4,0);
      }
    }
    cVar1 = Trigg(0xc);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fd0), iVar2 < 100)) {
      iVar2 = GetTotalAmount0(&DAT_10009fd0);
      iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fd0);
      if (iVar3 < iVar2 / 2) {
        SetTrigg(0xc,0);
        ShowPage(s__PAGE11_1000920c);
        ClearSelection(0);
        SelectUnits(&DAT_10009fd0,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10009fd0,0);
        SelSendTo(4,&DAT_1000a120,0,0);
      }
    }
    cVar1 = Trigg(0x16);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0xc), cVar1 == '\0')) {
      iVar2 = GetTotalAmount0(&DAT_10009fd0);
      iVar3 = GetUnitsAmount1(&DAT_1000a120,&DAT_10009fd0);
      iVar4 = GetDiff(1);
      if (((double)(iVar4 / 10) + _DAT_10008150) * (double)iVar2 <= (double)iVar3) {
        SetTrigg(0x16,0);
        ShowPage(s__PAGE12_10009204);
        ClearSelection(4);
        SelectUnits(&DAT_10009fd0,0);
        SelChangeNation(4,0);
      }
    }
    cVar1 = Trigg(0xd);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fd8), iVar2 < 0x78)) {
      iVar2 = GetTotalAmount0(&DAT_10009fd8);
      iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fd8);
      if (iVar3 < iVar2 / 2) {
        SetTrigg(0xd,0);
        ShowPage(s__PAGE13_100091fc);
        ClearSelection(0);
        SelectUnits(&DAT_10009fd8,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10009fd8,0);
        SelSendTo(4,&DAT_1000a120,0,0);
      }
    }
    cVar1 = Trigg(0x17);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0xd), cVar1 == '\0')) {
      iVar2 = GetTotalAmount0(&DAT_10009fd8);
      iVar3 = GetUnitsAmount1(&DAT_1000a120,&DAT_10009fd8);
      iVar4 = GetDiff(1);
      if (((double)(iVar4 / 10) + _DAT_10008150) * (double)iVar2 <= (double)iVar3) {
        SetTrigg(0x17,0);
        ShowPage(s__PAGE14_100091f4);
        ClearSelection(4);
        SelectUnits(&DAT_10009fd8,0);
        SelChangeNation(4,0);
      }
    }
    cVar1 = Trigg(0xe);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10009fe0), iVar2 < 0x32)) {
      iVar2 = GetTotalAmount0(&DAT_10009fe0);
      iVar3 = GetUnitsAmount1(&DAT_1000a198,&DAT_10009fe0);
      if (iVar3 < iVar2 / 2) {
        SetTrigg(0xe,0);
        ShowPage(s__PAGE15_100091ec);
        ClearSelection(0);
        SelectUnits(&DAT_10009fe0,0);
        SelChangeNation(0,4);
        SelectUnits(&DAT_10009fe0,0);
        SelSendTo(4,&DAT_1000a120,0,0);
      }
    }
    cVar1 = Trigg(0x18);
    if ((cVar1 != '\0') && (cVar1 = Trigg(0xe), cVar1 == '\0')) {
      iVar2 = GetTotalAmount0(&DAT_10009fe0);
      iVar3 = GetUnitsAmount1(&DAT_1000a120,&DAT_10009fe0);
      iVar4 = GetDiff(1);
      if (((double)(iVar4 / 10) + _DAT_10008150) * (double)iVar2 <= (double)iVar3) {
        SetTrigg(0x18,0);
        ShowPage(s__PAGE16_100091e4);
        ClearSelection(4);
        SelectUnits(&DAT_10009fe0,0);
        SelChangeNation(4,0);
      }
    }
  }
  cVar1 = Trigg(0xf);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(1);
    iVar3 = GetTotalAmount0(&DAT_10009ff0);
    pcVar5 = GetTotalAmount0_exref;
    if (iVar3 < (3 - iVar2) * 10) {
      SetTrigg(0xf,0);
      ShowPage(s__PAGE17_100091dc);
      ShowVictory();
      pcVar5 = GetTotalAmount0_exref;
    }
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (iVar2 = (*pcVar5)(&DAT_10009fa0), iVar2 == 0)) {
    SetTrigg(0x10,0);
    ShowPage(s__PAGE18_100091d4);
    LooseGame();
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000a020,0), iVar2 < 0xb)) {
    SelectUnits(&DAT_10009ff8,0);
    SelSendTo(1,&DAT_1000a020,0,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10009fa8,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009fa8,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_10009fb0,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_10009fb0,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a008,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_1000a008,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a000,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10009fe8,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_1000a000,0);
    SelDie(0);
    SelectUnits(&DAT_10009fe8,0);
  }
  cVar1 = Trigg(0x13);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_1000a010,0), iVar2 == 3)) {
    SetTrigg(0x13,0);
    ShowPage(s__PAGE19_100091cc);
    AddResource(0,3,10000);
    AddResource(0,1,200);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a098,1);
  pcVar5 = AttackEnemyInZone_exref;
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_1000a070);
    pcVar6 = SelectUnits1_exref;
    pcVar7 = SelSendTo_exref;
    if (0 < iVar2) {
      SelectUnits(&DAT_1000a070,0);
      SelAttackGroup(1,&DAT_10009fa0);
      pcVar6 = SelectUnits1_exref;
      pcVar7 = SelSendTo_exref;
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_1000a110,&DAT_1000a098);
    iVar3 = GetUnitsByNation(&DAT_1000a098,1);
    pcVar6 = SelectUnits1_exref;
    if (iVar2 < iVar3) {
      SelectUnits1(1,&DAT_1000a098);
      pcVar7 = SelSendTo_exref;
      SelSendTo(1,&DAT_1000a110,0x50,0);
    }
    else {
      AttackEnemyInZone(&DAT_1000a098,&DAT_1000a150,0);
      pcVar6 = SelectUnits1_exref;
      pcVar7 = SelSendTo_exref;
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a0a0);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a158,0), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_1000a0a0,&DAT_1000a158,0);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a0a8,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_1000a078);
    if (0 < iVar2) {
      SelectUnits(&DAT_1000a078,0);
      SelAttackGroup(1,&DAT_10009fb0);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_1000a128,&DAT_1000a0a8);
    iVar3 = GetUnitsByNation(&DAT_1000a0a8,1);
    pcVar5 = AttackEnemyInZone_exref;
    if (iVar2 < iVar3) {
      (*pcVar6)(1,&DAT_1000a0a8);
      (*pcVar7)(1,&DAT_1000a128,100,0);
      pcVar5 = AttackEnemyInZone_exref;
    }
    else {
      AttackEnemyInZone(&DAT_1000a0a8,&DAT_1000a160,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a0b0);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a168,0), 0 < iVar2)) {
    (*pcVar5)(&DAT_1000a0b0,&DAT_1000a168,0);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a0b8,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_1000a080);
    if (0 < iVar2) {
      SelectUnits(&DAT_1000a080,0);
      SelAttackGroup(1,&DAT_10009fc0);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_1000a138,&DAT_1000a0b8);
    iVar3 = GetUnitsByNation(&DAT_1000a0b8,1);
    pcVar5 = AttackEnemyInZone_exref;
    if (iVar2 < iVar3) {
      (*pcVar6)(1,&DAT_1000a0b8);
      (*pcVar7)(1,&DAT_1000a138,100,0);
      pcVar5 = AttackEnemyInZone_exref;
    }
    else {
      AttackEnemyInZone(&DAT_1000a0b8,&DAT_1000a170,0);
    }
  }
  iVar2 = GetUnitsByNation(&DAT_1000a0c0,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_1000a088);
    if (0 < iVar2) {
      SelectUnits(&DAT_1000a088,0);
      SelAttackGroup(1,&DAT_10009fc8);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_1000a140,&DAT_1000a0c0);
    iVar3 = GetUnitsByNation(&DAT_1000a0c0,1);
    pcVar5 = AttackEnemyInZone_exref;
    if (iVar2 < iVar3) {
      (*pcVar6)(1,&DAT_1000a0c0);
      (*pcVar7)(1,&DAT_1000a140,100,0);
      pcVar5 = AttackEnemyInZone_exref;
    }
    else {
      AttackEnemyInZone(&DAT_1000a0c0,&DAT_1000a178,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a0c8);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a180,0), 0 < iVar2)) {
    (*pcVar5)(&DAT_1000a0c8,&DAT_1000a180,0);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a0d0,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_1000a090);
    if (0 < iVar2) {
      SelectUnits(&DAT_1000a090,0);
      SelAttackGroup(1,&DAT_10009fd8);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_1000a148,&DAT_1000a0d0);
    iVar3 = GetUnitsByNation(&DAT_1000a0d0,1);
    pcVar5 = AttackEnemyInZone_exref;
    if (iVar2 < iVar3) {
      (*pcVar6)(1,&DAT_1000a0d0);
      (*pcVar7)(1,&DAT_1000a148,100,0);
      pcVar5 = AttackEnemyInZone_exref;
    }
    else {
      AttackEnemyInZone(&DAT_1000a0d0,&DAT_1000a188,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a0d8);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a190,0), 0 < iVar2)) {
    (*pcVar5)(&DAT_1000a0d8,&DAT_1000a190,0);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a040,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_10009f70);
    if (0 < iVar2) {
      SelectUnits(&DAT_10009f70,0);
      SelAttackGroup(1,&DAT_10009ff0);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_10009f88,&DAT_1000a040);
    iVar3 = GetUnitsByNation(&DAT_1000a040,1);
    pcVar5 = AttackEnemyInZone_exref;
    if (iVar2 < iVar3) {
      (*pcVar6)(1,&DAT_1000a040);
      (*pcVar7)(1,&DAT_10009f88,100,0);
      pcVar5 = AttackEnemyInZone_exref;
    }
    else {
      AttackEnemyInZone(&DAT_1000a040,&DAT_1000a0e0,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a048);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a0e8,0), 0 < iVar2)) {
    (*pcVar5)(&DAT_1000a048,&DAT_1000a0e8,0);
  }
  iVar2 = GetUnitsByNation(&DAT_1000a050,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_10009f78);
    if (0 < iVar2) {
      SelectUnits(&DAT_10009f78,0);
      SelAttackGroup(1,&DAT_1000a000);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_10009f90,&DAT_1000a050);
    iVar3 = GetUnitsByNation(&DAT_1000a050,1);
    pcVar5 = AttackEnemyInZone_exref;
    if (iVar2 < iVar3) {
      (*pcVar6)(1,&DAT_1000a050);
      (*pcVar7)(1,&DAT_10009f90,0x50,0);
      pcVar5 = AttackEnemyInZone_exref;
    }
    else {
      AttackEnemyInZone(&DAT_1000a050,&DAT_1000a0f0,0);
    }
  }
  iVar2 = GetUnitsByNation(&DAT_1000a058,1);
  if (iVar2 == 0) {
    iVar2 = GetTotalAmount0(&DAT_10009f80);
    if (0 < iVar2) {
      SelectUnits(&DAT_10009f80,0);
      SelAttackGroup(1,&DAT_1000a008);
    }
  }
  else {
    iVar2 = GetUnitsAmount1(&DAT_10009f98,&DAT_1000a058);
    iVar3 = GetUnitsByNation(&DAT_1000a058,1);
    if (iVar2 < iVar3) {
      (*pcVar6)(1,&DAT_1000a058);
      (*pcVar7)(1,&DAT_10009f98,0x50,0);
    }
    else {
      (*pcVar5)(&DAT_1000a058,&DAT_1000a0f8,0);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_1000a060);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a100,0), 0 < iVar2)) {
    (*pcVar5)(&DAT_1000a060,&DAT_1000a100,0);
  }
  iVar2 = GetTotalAmount0(&DAT_1000a068);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_1000a108,0), 0 < iVar2)) {
    (*pcVar5)(&DAT_1000a068,&DAT_1000a108,0);
  }
  return;
}



// Function: FUN_100027b0 @ 0x100027b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100027b0(void)

{
  void *extraout_ECX;
  
  FUN_100027c8();
  _DAT_1000a1a8 = FUN_100029f9();
  FUN_100029a9(extraout_ECX);
  return;
}



// Function: FUN_100027c8 @ 0x100027c8

void FUN_100027c8(void)

{
  PTR_LAB_10009298 = &LAB_10002a7c;
  PTR_LAB_10009294 = __cfltcvt;
  PTR_LAB_1000929c = __fassign;
  PTR_LAB_100092a0 = FUN_10002a22;
  PTR_LAB_100092a4 = &LAB_10002aca;
  PTR_LAB_100092a8 = __cfltcvt;
  return;
}



// Function: FUN_10002800 @ 0x10002800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002800(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000a1c4 = GetVersion();
    iVar1 = FUN_100036d3(1);
    if (iVar1 != 0) {
      _DAT_1000a1d0 = DAT_1000a1c4 >> 8 & 0xff;
      _DAT_1000a1cc = DAT_1000a1c4 & 0xff;
      DAT_1000a1c4 = DAT_1000a1c4 >> 0x10;
      _DAT_1000a1c8 = _DAT_1000a1cc * 0x100 + _DAT_1000a1d0;
      iVar1 = FUN_10002f66();
      if (iVar1 != 0) {
        DAT_1000a894 = GetCommandLineA();
        DAT_1000a1b0 = FUN_100035a1();
        FUN_1000308b();
        FUN_10003354();
        FUN_1000329b();
        FUN_10002e48();
        DAT_1000a1ac = DAT_1000a1ac + 1;
        goto LAB_100028d3;
      }
      FUN_1000370f();
    }
LAB_10002860:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000a1ac < 1) goto LAB_10002860;
      DAT_1000a1ac = DAT_1000a1ac + -1;
      if (DAT_1000a1fc == 0) {
        FUN_10002e86();
      }
      FUN_10003247();
      FUN_10002fba();
      FUN_1000370f();
    }
    else if (param_2 == 3) {
      FUN_10002feb((LPVOID)0x0);
    }
LAB_100028d3:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100028d9

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000a1ac;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10002921;
    if ((DAT_1000a898 != (code *)0x0) &&
       (iVar2 = (*DAT_1000a898)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10002800(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10002921:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10002800(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10002800(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000a898 != (code *)0x0) {
      iVar2 = (*DAT_1000a898)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10002976

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000a1b8 == 1) || ((DAT_1000a1b8 == 0 && (DAT_1000a1bc == 1)))) {
    FUN_10003784();
  }
  FUN_100037bd(param_1);
  (*(code *)PTR___exit_10009290)(0xff);
  return;
}



// Function: FUN_100029a9 @ 0x100029a9

void __fastcall FUN_100029a9(void *param_1)

{
  FUN_10003945(param_1,0x10000,0x30000);
  return;
}



// Function: FUN_100029bb @ 0x100029bb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100029bb(void)

{
  if (_DAT_10008158 < _DAT_10008160 - (_DAT_10008160 / _DAT_10008168) * _DAT_10008168) {
    return 1;
  }
  return 0;
}



// Function: FUN_100029f9 @ 0x100029f9

void FUN_100029f9(void)

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
  FUN_100029bb();
  return;
}



// Function: FUN_10002a22 @ 0x10002a22

void __cdecl FUN_10002a22(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_10003aeb((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10009368 < 2) {
        uVar3 = (byte)PTR_DAT_10009374[*param_1 * 2] & 4;
        this = PTR_DAT_10009374;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_10003a76(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1000936c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __fassign @ 0x10002ae2

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
    FUN_10003fb7(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_10003fe4(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// Function: FUN_10002b20 @ 0x10002b20

undefined1 * __cdecl FUN_10002b20(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10004088((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10004011(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10002b81(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// Function: FUN_10002b81 @ 0x10002b81

undefined1 * __cdecl
FUN_10002b81(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_10002e23(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_1000936c;
  }
  puVar3 = FUN_100041a0((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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



// Function: FUN_10002c43 @ 0x10002c43

char * __cdecl FUN_10002c43(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10004088((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10004011(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10002c98(param_2,param_3,&local_14,'\0');
  return param_2;
}



// Function: FUN_10002c98 @ 0x10002c98

char * __cdecl FUN_10002c98(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_10002e23(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_10002e23(pcVar3,1);
    *pcVar3 = DAT_1000936c;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_10002e23(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_10002d3f @ 0x10002d3f

void __cdecl FUN_10002d3f(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10004088((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10004011(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10002b81(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_10002c98(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x10002dd2

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_10002b20(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10002c43(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_10002d3f(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// Function: FUN_10002e23 @ 0x10002e23

void __cdecl FUN_10002e23(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_100042f0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_10002e48 @ 0x10002e48

void FUN_10002e48(void)

{
  if (PTR_FUN_10009284 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10009284)();
  }
  FUN_10002f4c((undefined4 *)&DAT_10009008,(undefined4 *)&DAT_10009010);
  FUN_10002f4c((undefined4 *)&DAT_10009000,(undefined4 *)&DAT_10009004);
  return;
}



// Function: __exit @ 0x10002e75

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10002e95(_Code,1,0);
  return;
}



// Function: FUN_10002e86 @ 0x10002e86

void FUN_10002e86(void)

{
  FUN_10002e95(0,0,1);
  return;
}



// Function: FUN_10002e95 @ 0x10002e95

void __cdecl FUN_10002e95(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10002f3a();
  if (DAT_1000a200 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000a1fc = 1;
  DAT_1000a1f8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000a890 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000a88c - 4), DAT_1000a890 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000a890 <= puVar1);
    }
    FUN_10002f4c((undefined4 *)&DAT_10009014,(undefined4 *)&DAT_10009018);
  }
  FUN_10002f4c((undefined4 *)&DAT_1000901c,(undefined4 *)&DAT_10009020);
  if (param_3 == 0) {
    DAT_1000a200 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10002f43();
  return;
}



// Function: FUN_10002f3a @ 0x10002f3a

void FUN_10002f3a(void)

{
  FUN_10004749(0xd);
  return;
}



// Function: FUN_10002f43 @ 0x10002f43

void FUN_10002f43(void)

{
  FUN_100047aa(0xd);
  return;
}



// Function: FUN_10002f4c @ 0x10002f4c

void __cdecl FUN_10002f4c(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10002f66 @ 0x10002f66

undefined4 FUN_10002f66(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100046b4();
  DAT_100092ac = TlsAlloc();
  if (DAT_100092ac != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100047bf(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100092ac,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10002fd8((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10002fba @ 0x10002fba

void FUN_10002fba(void)

{
  FUN_100046dd();
  if (DAT_100092ac != 0xffffffff) {
    TlsFree(DAT_100092ac);
    DAT_100092ac = 0xffffffff;
  }
  return;
}



// Function: FUN_10002fd8 @ 0x10002fd8

void __cdecl FUN_10002fd8(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10009670;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10002feb @ 0x10002feb

void __cdecl FUN_10002feb(LPVOID param_1)

{
  if (DAT_100092ac != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_100092ac), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_1000484c(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_1000484c(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_1000484c(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_1000484c(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_1000484c(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_1000484c(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10009670) {
        FUN_1000484c(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_1000484c(param_1);
    }
    TlsSetValue(DAT_100092ac,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_1000308b @ 0x1000308b

void FUN_1000308b(void)

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
  DAT_1000a880 = 0x20;
  DAT_1000a780 = puVar2;
  for (; puVar2 < DAT_1000a780 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000a880 < (int)UVar8) {
      puVar2 = &DAT_1000a784;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000a880;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000a880 = DAT_1000a880 + 0x20;
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
      } while ((int)DAT_1000a880 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000a780)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000a780 + iVar6 * 9;
    if (DAT_1000a780[iVar6 * 9] == -1) {
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
          goto LAB_10003230;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10003230:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000a880);
      return;
    }
  } while( true );
}



// Function: FUN_10003247 @ 0x10003247

void FUN_10003247(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000a780;
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
      FUN_1000484c((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000a880);
  return;
}



// Function: FUN_1000329b @ 0x1000329b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000329b(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000a888 == 0) {
    FUN_10004cf8();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000a1b0; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1000a1e0 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000a1b0;
  puVar6 = DAT_1000a1b0;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100041a0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1000484c(DAT_1000a1b0);
  DAT_1000a1b0 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1000a884 = 1;
  return;
}



// Function: FUN_10003354 @ 0x10003354

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003354(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000a888 == 0) {
    FUN_10004cf8();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000a204,0x104);
  _DAT_1000a1f0 = &DAT_1000a204;
  pbVar2 = &DAT_1000a204;
  if (*DAT_1000a894 != 0) {
    pbVar2 = DAT_1000a894;
  }
  FUN_100033ed(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100033ed(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000a1d8 = puVar1;
  _DAT_1000a1d4 = local_8 + -1;
  return;
}



// Function: FUN_100033ed @ 0x100033ed

void __cdecl FUN_100033ed(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000a660 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000a660 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10003498;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10003498:
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
          if ((*(byte *)((int)&DAT_1000a660 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000a660 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_100035a1 @ 0x100035a1

LPSTR FUN_100035a1(void)

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
  if (DAT_1000a308 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000a308 = 1;
LAB_100035f8:
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
        FUN_1000484c(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000a308 = 2;
  }
  else {
    if (DAT_1000a308 == 1) goto LAB_100035f8;
    if (DAT_1000a308 != 2) {
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
    FUN_10004d20((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_100036d3 @ 0x100036d3

undefined4 __cdecl FUN_100036d3(int param_1)

{
  int iVar1;
  
  DAT_1000a768 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000a768 != (HANDLE)0x0) {
    iVar1 = FUN_10005055();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_1000a768);
  }
  return 0;
}



// Function: FUN_1000370f @ 0x1000370f

void FUN_1000370f(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_1000a528) {
    puVar2 = (undefined4 *)((int)DAT_1000a52c + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_1000a768,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_1000a528);
  }
  HeapFree(DAT_1000a768,0,DAT_1000a52c);
  HeapDestroy(DAT_1000a768);
  return;
}



// Function: FUN_10003784 @ 0x10003784

void FUN_10003784(void)

{
  if ((DAT_1000a1b8 == 1) || ((DAT_1000a1b8 == 0 && (DAT_1000a1bc == 1)))) {
    FUN_100037bd(0xfc);
    if (DAT_1000a30c != (code *)0x0) {
      (*DAT_1000a30c)();
    }
    FUN_100037bd(0xff);
  }
  return;
}



// Function: FUN_100037bd @ 0x100037bd

void __cdecl FUN_100037bd(DWORD param_1)

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
  pDVar2 = &DAT_100092d8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10009368);
  if (param_1 == (&DAT_100092d8)[iVar5 * 2]) {
    if ((DAT_1000a1b8 == 1) || ((DAT_1000a1b8 == 0 && (DAT_1000a1bc == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100092dc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100041a0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100041a0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100041b0(local_a4,_Dest);
      FUN_100041b0(local_a4,(uint *)&DAT_1000845c);
      FUN_100041b0(local_a4,*(uint **)(iVar5 * 8 + 0x100092dc));
      auStackY_1e3._3_4_ = 0x100038e1;
      FUN_1000589e(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10003910 @ 0x10003910

uint __thiscall FUN_10003910(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_1000395b(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_100039ed(uVar1);
  return uVar1;
}



// Function: FUN_10003945 @ 0x10003945

void __thiscall FUN_10003945(void *this,uint param_1,uint param_2)

{
  FUN_10003910(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// Function: FUN_1000395b @ 0x1000395b

uint __cdecl FUN_1000395b(uint param_1)

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



// Function: FUN_100039ed @ 0x100039ed

uint __cdecl FUN_100039ed(uint param_1)

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



// Function: FUN_10003a76 @ 0x10003a76

uint __thiscall FUN_10003a76(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10009374 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10009374[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10005a2e(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10003aeb @ 0x10003aeb

uint __cdecl FUN_10003aeb(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1000a3ac == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1000a514);
    bVar1 = DAT_1000a510 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1000a514);
      this = (void *)0x13;
      FUN_10004749(0x13);
    }
    param_1 = FUN_10003b5a(this,param_1);
    if (bVar1) {
      FUN_100047aa(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1000a514);
    }
  }
  return param_1;
}



// Function: FUN_10003b5a @ 0x10003b5a

uint __thiscall FUN_10003b5a(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000a3ac == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10009368 < 2) {
        uVar2 = (byte)PTR_DAT_10009374[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10003a76(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10009374[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10005b77(DAT_1000a3ac,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_10003c25 @ 0x10003c25

undefined4 __cdecl FUN_10003c25(int param_1,int param_2)

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



// Function: FUN_10003c6e @ 0x10003c6e

void __cdecl FUN_10003c6e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_10005dc6(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_10005dc6(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Function: FUN_10003cc4 @ 0x10003cc4

undefined4 __cdecl FUN_10003cc4(int param_1,int param_2)

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
     (iVar2 = FUN_10003c25(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10003c6e(param_1,param_2 + -1);
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



// Function: FUN_10003d50 @ 0x10003d50

void __cdecl FUN_10003d50(int param_1,undefined4 *param_2)

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



// Function: FUN_10003d6b @ 0x10003d6b

void __cdecl FUN_10003d6b(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_10003d77 @ 0x10003d77

undefined4 __cdecl FUN_10003d77(int *param_1)

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



// Function: FUN_10003d92 @ 0x10003d92

void __cdecl FUN_10003d92(uint *param_1,uint param_2)

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



// Function: FUN_10003e1f @ 0x10003e1f

undefined4 __cdecl FUN_10003e1f(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_10003d77((int *)&local_10);
    if (iVar2 != 0) {
LAB_10003f4b:
      uVar5 = 0;
      goto LAB_10003f4d;
    }
    FUN_10003d6b(&local_10);
  }
  else {
    FUN_10003d50((int)local_1c,&local_10);
    iVar2 = FUN_10003cc4((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10003d6b(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10003d6b(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10003d92(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10003f4d;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10003d92(&local_10,param_3[3]);
        goto LAB_10003f4b;
      }
      FUN_10003d50((int)&local_10,local_1c);
      FUN_10003d92(&local_10,iVar2 - iVar4);
      FUN_10003cc4((int)&local_10,param_3[2]);
      FUN_10003d92(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10003f4d:
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



// Function: FUN_10003f8b @ 0x10003f8b

void __cdecl FUN_10003f8b(ushort *param_1,uint *param_2)

{
  FUN_10003e1f(param_1,param_2,(int *)&DAT_10009580);
  return;
}



// Function: FUN_10003fa1 @ 0x10003fa1

void __cdecl FUN_10003fa1(ushort *param_1,uint *param_2)

{
  FUN_10003e1f(param_1,param_2,(int *)&DAT_10009598);
  return;
}



// Function: FUN_10003fb7 @ 0x10003fb7

void __thiscall FUN_10003fb7(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_10005f67(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10003f8b(local_10,param_1);
  return;
}



// Function: FUN_10003fe4 @ 0x10003fe4

void __thiscall FUN_10003fe4(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_10005f67(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10003fa1(local_10,param_1);
  return;
}



// Function: FUN_10004011 @ 0x10004011

void __cdecl FUN_10004011(char *param_1,int param_2,int param_3)

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
    FUN_100042f0((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// Function: FUN_10004088 @ 0x10004088

int * __cdecl FUN_10004088(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_100040e4(&local_10,&param_1);
  iVar3 = FUN_10006438(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_100041a0(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// Function: FUN_100040e4 @ 0x100040e4

void __cdecl FUN_100040e4(uint *param_1,uint *param_2)

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



// Function: FUN_100041a0 @ 0x100041a0

uint * __cdecl FUN_100041a0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10004288;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10004288:
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



// Function: FUN_100041b0 @ 0x100041b0

uint * __cdecl FUN_100041b0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100041cc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100041ff;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000421b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100041cc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000421b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000421b;
    }
  }
LAB_100041ff:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000421b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10004288:
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
    if (bVar1 == 0) goto LAB_10004288;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _memset @ 0x10004290

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



// Function: FUN_100042f0 @ 0x100042f0

undefined4 * __cdecl FUN_100042f0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100044a7_caseD_2;
        case 3:
          goto switchD_100044a7_caseD_3;
        }
        goto switchD_100044a7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100044a7_caseD_0;
      case 1:
        goto switchD_100044a7_caseD_1;
      case 2:
        goto switchD_100044a7_caseD_2;
      case 3:
        goto switchD_100044a7_caseD_3;
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
              goto switchD_100044a7_caseD_2;
            case 3:
              goto switchD_100044a7_caseD_3;
            }
            goto switchD_100044a7_caseD_1;
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
              goto switchD_100044a7_caseD_2;
            case 3:
              goto switchD_100044a7_caseD_3;
            }
            goto switchD_100044a7_caseD_1;
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
              goto switchD_100044a7_caseD_2;
            case 3:
              goto switchD_100044a7_caseD_3;
            }
            goto switchD_100044a7_caseD_1;
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
switchD_100044a7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100044a7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100044a7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100044a7_caseD_0:
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
        goto switchD_10004325_caseD_2;
      case 3:
        goto switchD_10004325_caseD_3;
      }
      goto switchD_10004325_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004325_caseD_0;
    case 1:
      goto switchD_10004325_caseD_1;
    case 2:
      goto switchD_10004325_caseD_2;
    case 3:
      goto switchD_10004325_caseD_3;
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
            goto switchD_10004325_caseD_2;
          case 3:
            goto switchD_10004325_caseD_3;
          }
          goto switchD_10004325_caseD_1;
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
            goto switchD_10004325_caseD_2;
          case 3:
            goto switchD_10004325_caseD_3;
          }
          goto switchD_10004325_caseD_1;
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
            goto switchD_10004325_caseD_2;
          case 3:
            goto switchD_10004325_caseD_3;
          }
          goto switchD_10004325_caseD_1;
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
switchD_10004325_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004325_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004325_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004325_caseD_0:
  return param_1;
}



// Function: _strlen @ 0x10004630

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10004650;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10004683:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10004650:
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
  goto LAB_10004683;
}



// Function: FUN_100046b4 @ 0x100046b4

void FUN_100046b4(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100095f4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100095e4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100095d4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100095b4);
  return;
}



// Function: FUN_100046dd @ 0x100046dd

void FUN_100046dd(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100095b0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100095f4)) && (ppuVar1 != &PTR_DAT_100095e4)) &&
       ((ppuVar1 != &PTR_DAT_100095d4 && (ppuVar1 != &PTR_DAT_100095b4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000484c(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10009670);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100095d4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100095e4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100095f4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100095b4);
  return;
}



// Function: FUN_10004749 @ 0x10004749

void __cdecl FUN_10004749(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100095b0 + param_1;
  if ((&DAT_100095b0)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10004749(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1000484c(lpCriticalSection);
    }
    FUN_100047aa(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_100047aa @ 0x100047aa

void __cdecl FUN_100047aa(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100095b0)[param_1]);
  return;
}



// Function: FUN_100047bf @ 0x100047bf

int * __cdecl FUN_100047bf(int param_1,int param_2)

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
      if (_Size < DAT_100097f0 || (int)_Size - (int)DAT_100097f0 == 0) {
        FUN_10004749(9);
        piVar1 = FUN_100053e9(_Size);
        FUN_100047aa(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_1000a768,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_1000a3cc == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_100066cb(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_1000484c @ 0x1000484c

void __cdecl FUN_1000484c(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_10004749(9);
    puVar1 = (uint *)FUN_10005093((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_100050be(puVar1,(uint)param_1);
      FUN_100047aa(9);
      return;
    }
    FUN_100047aa(9);
    HeapFree(DAT_1000a768,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x10004894

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000a3cc);
  return pvVar1;
}



// Function: __nh_malloc @ 0x100048a6

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_100048d2((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_100066cb(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_100048d2 @ 0x100048d2

int * __cdecl FUN_100048d2(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_100097f0) {
    FUN_10004749(9);
    piVar1 = FUN_100053e9(param_1);
    FUN_100047aa(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_1000a768,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_10004920 @ 0x10004920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10004920(int param_1)

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
  
  FUN_10004749(0x19);
  CodePage = FUN_10004acd(param_1);
  if (CodePage != DAT_1000a530) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10009700;
LAB_1000495d:
      if (*pUVar5 != CodePage) goto code_r0x10004961;
      local_8 = 0;
      puVar15 = &DAT_1000a660;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10009710);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100096f8)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000a660 + uVar8 + 1);
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
      _DAT_1000a54c = 1;
      DAT_1000a530 = CodePage;
      DAT_1000a764 = FUN_10004b17(CodePage);
      DAT_1000a540 = *(undefined4 *)(iVar12 + 0x10009704);
      DAT_1000a544 = *(undefined4 *)(iVar12 + 0x10009708);
      DAT_1000a548 = *(undefined4 *)(iVar12 + 0x1000970c);
      goto LAB_10004ab1;
    }
    goto LAB_10004aac;
  }
  goto LAB_10004947;
code_r0x10004961:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100097ef < (int)pUVar5) goto code_r0x1000496c;
  goto LAB_1000495d;
code_r0x1000496c:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000a764 = 0;
    puVar15 = &DAT_1000a660;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000a54c = 0;
      DAT_1000a530 = CodePage;
    }
    else {
      DAT_1000a530 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000a660 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000a660 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000a764 = FUN_10004b17(CodePage);
      _DAT_1000a54c = 1;
    }
    DAT_1000a540 = 0;
    DAT_1000a544 = 0;
    DAT_1000a548 = 0;
  }
  else {
    if (DAT_1000a370 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10004abe;
    }
LAB_10004aac:
    FUN_10004b4a();
  }
LAB_10004ab1:
  FUN_10004b73();
LAB_10004947:
  uVar14 = 0;
LAB_10004abe:
  FUN_100047aa(0x19);
  return uVar14;
}



// Function: FUN_10004acd @ 0x10004acd

int __cdecl FUN_10004acd(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000a370 = 1;
                    /* WARNING: Could not recover jumptable at 0x10004ae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000a370 = 1;
                    /* WARNING: Could not recover jumptable at 0x10004afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000a3bc;
  }
  DAT_1000a370 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10004b17 @ 0x10004b17

undefined4 __cdecl FUN_10004b17(int param_1)

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



// Function: FUN_10004b4a @ 0x10004b4a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004b4a(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000a660;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000a530 = 0;
  _DAT_1000a54c = 0;
  DAT_1000a764 = 0;
  DAT_1000a540 = 0;
  DAT_1000a544 = 0;
  DAT_1000a548 = 0;
  return;
}



// Function: FUN_10004b73 @ 0x10004b73

void FUN_10004b73(void)

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
  
  BVar2 = GetCPInfo(DAT_1000a530,&local_18);
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
    FUN_10005a2e(1,local_118,0x100,local_518,DAT_1000a530,DAT_1000a764,0);
    FUN_10005b77(DAT_1000a764,0x100,local_118,0x100,local_218,0x100,DAT_1000a530,0);
    FUN_10005b77(DAT_1000a764,0x200,local_118,0x100,local_318,0x100,DAT_1000a530,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000a660 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10004c7f;
        }
        (&DAT_1000a560)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000a660 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10004c7f:
        (&DAT_1000a560)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000a660 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10004cc9;
        }
        (&DAT_1000a560)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000a660 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10004cc9:
        (&DAT_1000a560)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10004cf8 @ 0x10004cf8

void FUN_10004cf8(void)

{
  if (DAT_1000a888 == 0) {
    FUN_10004920(-3);
    DAT_1000a888 = 1;
  }
  return;
}



// Function: FUN_10004d20 @ 0x10004d20

undefined4 * __cdecl FUN_10004d20(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10004ed7_caseD_2;
        case 3:
          goto switchD_10004ed7_caseD_3;
        }
        goto switchD_10004ed7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10004ed7_caseD_0;
      case 1:
        goto switchD_10004ed7_caseD_1;
      case 2:
        goto switchD_10004ed7_caseD_2;
      case 3:
        goto switchD_10004ed7_caseD_3;
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
              goto switchD_10004ed7_caseD_2;
            case 3:
              goto switchD_10004ed7_caseD_3;
            }
            goto switchD_10004ed7_caseD_1;
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
              goto switchD_10004ed7_caseD_2;
            case 3:
              goto switchD_10004ed7_caseD_3;
            }
            goto switchD_10004ed7_caseD_1;
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
              goto switchD_10004ed7_caseD_2;
            case 3:
              goto switchD_10004ed7_caseD_3;
            }
            goto switchD_10004ed7_caseD_1;
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
switchD_10004ed7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10004ed7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10004ed7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10004ed7_caseD_0:
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
        goto switchD_10004d55_caseD_2;
      case 3:
        goto switchD_10004d55_caseD_3;
      }
      goto switchD_10004d55_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004d55_caseD_0;
    case 1:
      goto switchD_10004d55_caseD_1;
    case 2:
      goto switchD_10004d55_caseD_2;
    case 3:
      goto switchD_10004d55_caseD_3;
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
            goto switchD_10004d55_caseD_2;
          case 3:
            goto switchD_10004d55_caseD_3;
          }
          goto switchD_10004d55_caseD_1;
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
            goto switchD_10004d55_caseD_2;
          case 3:
            goto switchD_10004d55_caseD_3;
          }
          goto switchD_10004d55_caseD_1;
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
            goto switchD_10004d55_caseD_2;
          case 3:
            goto switchD_10004d55_caseD_3;
          }
          goto switchD_10004d55_caseD_1;
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
switchD_10004d55_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004d55_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004d55_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004d55_caseD_0:
  return param_1;
}



// Function: FUN_10005055 @ 0x10005055

undefined4 FUN_10005055(void)

{
  DAT_1000a52c = HeapAlloc(DAT_1000a768,0,0x140);
  if (DAT_1000a52c == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000a524 = 0;
  DAT_1000a528 = 0;
  DAT_1000a520 = DAT_1000a52c;
  DAT_1000a518 = 0x10;
  return 1;
}



// Function: FUN_10005093 @ 0x10005093

uint __cdecl FUN_10005093(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000a52c;
  while( true ) {
    if (DAT_1000a52c + DAT_1000a528 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_100050be @ 0x100050be

void __cdecl FUN_100050be(uint *param_1,uint param_2)

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
  uVar5 = DAT_1000a51c;
  puVar2 = DAT_1000a524;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_1000a524 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_1000a51c * 0x8000 + DAT_1000a524[3]),0x8000,0x4000);
    DAT_1000a524[2] = DAT_1000a524[2] | 0x80000000U >> ((byte)DAT_1000a51c & 0x1f);
    *(undefined4 *)(DAT_1000a524[4] + 0xc4 + DAT_1000a51c * 4) = 0;
    *(char *)(DAT_1000a524[4] + 0x43) = *(char *)(DAT_1000a524[4] + 0x43) + -1;
    if (*(char *)(DAT_1000a524[4] + 0x43) == '\0') {
      DAT_1000a524[1] = DAT_1000a524[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_1000a524[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_1000a524[3],0,0x8000);
      HeapFree(DAT_1000a768,0,(LPVOID)DAT_1000a524[4]);
      FUN_100042f0(DAT_1000a524,DAT_1000a524 + 5,
                   (DAT_1000a528 * 0x14 - (int)DAT_1000a524) + -0x14 + DAT_1000a52c);
      DAT_1000a528 = DAT_1000a528 + -1;
      if (DAT_1000a524 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_1000a520 = DAT_1000a52c;
      puVar2 = param_1;
    }
  }
  DAT_1000a524 = puVar2;
  DAT_1000a51c = uVar5;
  return;
}



// Function: FUN_100053e9 @ 0x100053e9

int * __cdecl FUN_100053e9(uint *param_1)

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
  
  puVar8 = DAT_1000a52c + DAT_1000a528 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000a520;
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
  puVar11 = DAT_1000a52c;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000a520 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000a520) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000a52c;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000a520 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000a520) && (param_1 = FUN_100056f2(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100057a3((int)param_1);
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
  DAT_1000a520 = param_1;
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
    if (iVar9 == 0) goto LAB_100056af;
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
LAB_100056af:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000a524)) && (local_8 == DAT_1000a51c)) {
    DAT_1000a524 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_100056f2 @ 0x100056f2

undefined4 * FUN_100056f2(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000a528 == DAT_1000a518) {
    pvVar2 = HeapReAlloc(DAT_1000a768,0,DAT_1000a52c,(DAT_1000a518 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000a518 = DAT_1000a518 + 0x10;
    DAT_1000a52c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000a52c + DAT_1000a528 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000a768,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000a528 = DAT_1000a528 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000a768,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100057a3 @ 0x100057a3

int __cdecl FUN_100057a3(int param_1)

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



// Function: FUN_1000589e @ 0x1000589e

int __cdecl FUN_1000589e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000a374 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000a374 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000a374 != (FARPROC)0x0) {
        DAT_1000a378 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000a37c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100058ed;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100058ed:
    if (DAT_1000a378 != (FARPROC)0x0) {
      iVar1 = (*DAT_1000a378)();
      if ((iVar1 != 0) && (DAT_1000a37c != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000a37c)(iVar1);
      }
    }
    iVar1 = (*DAT_1000a374)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10005930

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
        goto joined_r0x1000596e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100059ab;
        goto LAB_10005a19;
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
joined_r0x10005a15:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10005a19:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100059ab;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10005a15;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10005a15;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10005a15;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000596e:
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
LAB_100059ab:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10005a2e @ 0x10005a2e

BOOL __cdecl
FUN_10005a2e(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100084e0;
  puStack_10 = &LAB_100067e0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000a394;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000a394 == 0) {
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
  DAT_1000a394 = iVar3;
  if (DAT_1000a394 != 2) {
    if (DAT_1000a394 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000a3bc;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_100068c0();
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
    param_6 = DAT_1000a3ac;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10005b77 @ 0x10005b77

int __cdecl
FUN_10005b77(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100084f0;
  puStack_10 = &LAB_100067e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000a3c4 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000a3c4 = 2;
    }
    else {
      DAT_1000a3c4 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10005d9b(param_3,param_4);
  }
  if (DAT_1000a3c4 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000a3c4 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000a3bc;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_100068c0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_100068c0();
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



// Function: FUN_10005d9b @ 0x10005d9b

int __cdecl FUN_10005d9b(char *param_1,int param_2)

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



// Function: FUN_10005dc6 @ 0x10005dc6

undefined4 __cdecl FUN_10005dc6(uint param_1,uint param_2,uint *param_3)

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



// Function: ___add_12 @ 0x10005de7

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10005dc6(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_10005dc6(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_10005dc6(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_10005dc6(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: FUN_10005e45 @ 0x10005e45

void __cdecl FUN_10005e45(uint *param_1)

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



// Function: FUN_10005e73 @ 0x10005e73

void __cdecl FUN_10005e73(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Function: FUN_10005ea0 @ 0x10005ea0

void __cdecl FUN_10005ea0(char *param_1,int param_2,uint *param_3)

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
      FUN_10005e45(puVar1);
      FUN_10005e45(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_10005e45(puVar1);
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
    FUN_10005e45(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// Function: FUN_10005f67 @ 0x10005f67

undefined4 __thiscall
FUN_10005f67(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_10005fbe:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_10005fdb:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_10006200;
    }
    if (bVar6 == DAT_1000936c) goto LAB_10005fea;
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
      if (bVar6 != 0x30) goto LAB_100062da;
    }
    goto LAB_10005fbe;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_10005fdb;
    iVar9 = iVar1;
    if (bVar6 != DAT_1000936c) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1000606f;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_10006048;
    }
    goto LAB_10005fbe;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_10005fdb;
    if (bVar6 == DAT_1000936c) {
LAB_10005fea:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_100062df;
    }
    goto LAB_10005fbe;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10009368 < 2) {
        uVar3 = (byte)PTR_DAT_10009374[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10009374;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10003a76(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_1000936c) goto LAB_1000615c;
    goto LAB_10005fbe;
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
      if (DAT_10009368 < 2) {
        uVar3 = (byte)PTR_DAT_10009374[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10009374;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10003a76(this,(uint)bVar6,4);
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
LAB_1000615c:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1000606f:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_10006048:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_100062da;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_10005fbe;
  case 5:
    local_28 = iVar5;
    if (DAT_10009368 < 2) {
      uVar3 = (byte)PTR_DAT_10009374[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10009374;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10003a76(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_10006200;
    goto LAB_100062df;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_10006235;
      if (bVar6 == 0x2d) goto LAB_10006229;
      if (bVar6 != 0x30) goto LAB_100062df;
LAB_100061ce:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_10005fbe;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_100061ce;
      goto LAB_100062df;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_100062da;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_10006260;
  default:
    goto switchD_10005fca_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_10006235:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_100062df;
LAB_10006229:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_10005fbe;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_10005fca_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_10005fbe;
    goto LAB_100062df;
  }
  iVar9 = 9;
LAB_10006200:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_10005fbe;
LAB_10006260:
  if (DAT_10009368 < 2) {
    uVar3 = (byte)PTR_DAT_10009374[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_10009374;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_10003a76(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_100062aa;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_100062a2;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_10006260;
LAB_100062a2:
  pbVar7 = (byte *)0x1451;
LAB_100062aa:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_10009368 < 2) {
      uVar3 = (byte)PTR_DAT_10009374[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10009374;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10003a76(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_100062da:
  pbVar7 = pbVar8 + -1;
LAB_100062df:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_100063ed;
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
    FUN_10005ea0(local_60,local_8,(uint *)&local_44);
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
        FUN_10006c5a((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_10006372;
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
LAB_10006372:
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
LAB_100063ed:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// Function: FUN_10006438 @ 0x10006438

undefined4 __cdecl
FUN_10006438(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000652d;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000652d:
            pcVar11 = "1#QNAN";
            goto LAB_10006532;
          }
          pcVar11 = "1#IND";
        }
        FUN_100041a0((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_10006532:
        FUN_100041a0((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_10006c5a((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_10006a3a((int *)&local_14,(int *)&local_20);
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
        FUN_10005e45((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10005e73((uint *)&local_14);
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
          FUN_10005e45((uint *)&local_14);
          FUN_10005e45((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_10005e45((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_1000668a;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1000668a:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000668c:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1000668c;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_100066c2;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_100066c2:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// Function: FUN_100066cb @ 0x100066cb

undefined4 __cdecl FUN_100066cb(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000a3c8 != (code *)0x0) {
    iVar1 = (*DAT_1000a3c8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: __global_unwind2 @ 0x100066e8

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10006700,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000672a

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
  puStack_18 = &LAB_10006708;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100067be();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_100067be @ 0x100067be

void FUN_100067be(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10009a80 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10009a7c = in_EAX;
  DAT_10009a84 = unaff_EBP;
  return;
}



// Function: FUN_1000689d @ 0x1000689d

void FUN_1000689d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_100068c0 @ 0x100068c0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100068c0(void)

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



// Function: FUN_10006980 @ 0x10006980

int __cdecl FUN_10006980(byte *param_1,byte *param_2)

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



// Function: _strncmp @ 0x100069c0

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



// Function: FUN_10006a00 @ 0x10006a00

byte * __cdecl FUN_10006a00(byte *param_1,byte *param_2)

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



// Function: FUN_10006a3a @ 0x10006a3a

void __cdecl FUN_10006a3a(int *param_1,int *param_2)

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
LAB_10006add:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_10006add;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_10005dc6(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_10006b91:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_10005e73((uint *)&local_28);
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
          FUN_10005e45((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_10006b91;
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
      if (0x7ffe < (ushort)param_1) goto LAB_10006c3a;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_10006c3a:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// Function: FUN_10006c5a @ 0x10006c5a

void __cdecl FUN_10006c5a(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_10009b30;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10009c90;
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
        FUN_10006a3a(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



// Function: FUN_10006ce0 @ 0x10006ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10006ce0(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1000a514;
  if (DAT_1000a3ac == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_10006d2e;
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
LAB_10006d2e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1000a514 = _DAT_1000a514 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1000a510;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1000a514 = iVar2;
      FUN_10004749(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_10006d8f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10003b5a(this,uVar8);
      uVar7 = FUN_10003b5a(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_10006d8f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1000a514 = _DAT_1000a514 + -1;
      UNLOCK();
    }
    else {
      FUN_100047aa(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_10006db0 @ 0x10006db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10006db0(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1000a514;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1000a3ac == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_10006e0f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_10006e0f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1000a514 = _DAT_1000a514 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1000a510;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1000a514 = iVar2;
        FUN_10004749(0x13);
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
        uVar7 = FUN_10003b5a(param_3,uVar7);
        uVar5 = FUN_10003b5a(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10006e85;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10006e85:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1000a514 = _DAT_1000a514 + -1;
        UNLOCK();
      }
      else {
        FUN_100047aa(0x13);
      }
    }
  }
  return uVar6;
}




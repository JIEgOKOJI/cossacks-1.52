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
  RegisterUnits(&DAT_100064d8,&DAT_10006150);
  RegisterUnits(&DAT_100064e0,&DAT_1000614c);
  RegisterUnits(&DAT_100064e8,&DAT_10006148);
  RegisterUnits(&DAT_100064f0,&DAT_10006144);
  RegisterUnits(&DAT_100064f8,&DAT_10006140);
  RegisterUnits(&DAT_10006500,&DAT_1000613c);
  RegisterUnits(&DAT_10006508,&DAT_10006138);
  RegisterUnits(&DAT_10006510,&DAT_10006134);
  RegisterUnits(&DAT_10006518,&DAT_10006130);
  RegisterUnits(&DAT_10006608,&DAT_1000612c);
  RegisterUnits(&DAT_10006528,&DAT_10006128);
  RegisterUnits(&DAT_10006530,&DAT_10006124);
  RegisterUnits(&DAT_10006538,&DAT_10006120);
  RegisterUnits(&DAT_10006540,&DAT_1000611c);
  RegisterUnits(&DAT_10006550,&DAT_10006118);
  RegisterUnits(&DAT_10006560,&DAT_10006114);
  RegisterUnits(&DAT_10006570,&DAT_10006110);
  RegisterUnits(&DAT_10006690,&DAT_10006108);
  RegisterUnits(&DAT_10006580,&DAT_10006104);
  RegisterUnits(&DAT_10006590,&DAT_10006100);
  RegisterUnits(&DAT_100065a0,&DAT_100060fc);
  RegisterUnits(&DAT_10006548,&DAT_100060f8);
  RegisterUnits(&DAT_10006558,&DAT_100060f4);
  RegisterUnits(&DAT_10006568,&DAT_100060f0);
  RegisterUnits(&DAT_10006578,&DAT_100060ec);
  RegisterUnits(&DAT_10006588,&DAT_100060e8);
  RegisterUnits(&DAT_10006598,&DAT_100060e4);
  RegisterUnits(&DAT_100065a8,&DAT_100060e0);
  RegisterUnits(&DAT_100065b0,&DAT_100060dc);
  RegisterUnits(&DAT_100065b8,&DAT_100060d8);
  RegisterZone(&DAT_100065c0,&DAT_100060d4);
  RegisterZone(&DAT_100065c8,&DAT_100060d0);
  RegisterZone(&DAT_100065d0,&DAT_100060cc);
  RegisterZone(&DAT_100065d8,&DAT_100060c8);
  RegisterZone(&DAT_100065e0,&DAT_100060c4);
  RegisterZone(&DAT_100065e8,&DAT_100060c0);
  RegisterZone(&DAT_100065f0,&DAT_100060bc);
  RegisterZone(&DAT_100065f8,&DAT_100060b8);
  RegisterZone(&DAT_10006600,&DAT_100060b4);
  RegisterZone(&DAT_10006628,&DAT_100060b0);
  RegisterZone(&DAT_10006630,&DAT_100060ac);
  RegisterZone(&DAT_10006638,&DAT_100060a8);
  RegisterZone(&DAT_10006640,&DAT_100060a4);
  RegisterZone(&DAT_10006650,&DAT_100060a0);
  RegisterZone(&DAT_10006660,&DAT_1000609c);
  RegisterZone(&DAT_10006670,&DAT_10006098);
  RegisterZone(&DAT_10006678,&DAT_10006094);
  RegisterZone(&DAT_10006680,&DAT_10006090);
  RegisterZone(&DAT_10006688,&DAT_1000608c);
  RegisterZone(&DAT_10006648,&DAT_10006088);
  RegisterZone(&DAT_10006658,&DAT_10006084);
  RegisterZone(&DAT_10006668,&DAT_10006080);
  RegisterDynGroup(&DAT_10006520);
  RegisterUnitType(&DAT_10006610,s_Kreposnoi_pruss_au__1000606c);
  RegisterUnitType(&DAT_10006620,s_Pikiner_evro_au__10006058);
  RegisterUnitType(&DAT_100064c0,s_Mushketer_avstr_au__10006044);
  RegisterFormation(&DAT_10006618,s__SQUARE196_10006038);
  RegisterVar(&DAT_100064c8,8);
  RegisterVar(&DAT_100064d0,8);
  SetPlayerName(1,s_CHEHS_10006030);
  EnableUnit(0,&DAT_10006610,0);
  return;
}



// Function: FUN_10001330 @ 0x10001330

void __cdecl FUN_10001330(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = GetTotalAmount0(param_1);
  if (0 < iVar1) {
    iVar1 = GetTotalAmount0(&DAT_10006518);
    if ((iVar1 != 0) && (iVar1 = GetTotalAmount0(&DAT_10006570), iVar1 != 0)) {
      return;
    }
    iVar1 = GetUnitsAmount1(&DAT_10006630,param_1);
    if (((iVar1 < 1) && (iVar1 = GetUnitsAmount1(&DAT_10006638,param_1), iVar1 < 1)) &&
       (iVar1 = GetUnitsAmount1(&DAT_10006638,param_1), iVar1 < 1)) {
      SelectUnits(param_1,0);
      SelSendAndKill(1,&DAT_10006630,0,0);
      return;
    }
    iVar1 = GetUnitsAmount0(&DAT_10006630,0);
    if (0 < iVar1) {
      AttackEnemyInZone(param_1,&DAT_10006630);
      return;
    }
    iVar1 = GetUnitsAmount0(&DAT_10006638,0);
    puVar2 = &DAT_10006638;
    if (iVar1 < 1) {
      iVar1 = GetUnitsAmount0(&DAT_10006638,0);
      if (iVar1 < 1) {
        return;
      }
      puVar2 = &DAT_10006640;
    }
    AttackEnemyInZone(param_1,puVar2,0);
  }
  return;
}



// Function: ProcessScenary @ 0x10001420

void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  
                    /* 0x1420  2  ProcessScenary */
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    SetTrigg(99,0);
    iVar2 = GetDiff(1);
    SetResource(0,3,iVar2 * -140000 + 500000);
    iVar2 = GetDiff(1);
    SetResource(0,1,(5 - iVar2) * 30000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    iVar2 = GetDiff(1);
    SetResource(0,5,(9 - iVar2) * 10000);
    iVar2 = GetDiff(1);
    SetResource(0,4,(9 - iVar2) * 10000);
    ShowPage(s__PAGE0_10006184);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SelectUnits(&DAT_100065b8,0);
      SelDie(1);
      ShowPage(s__OTST1_1000617c);
    }
    SelectUnits(&DAT_100064f0,0);
    SelSendAndKill(1,&DAT_100065c0,0,0);
    SelSendAndKill(1,&DAT_100065c8,0,2);
    SelSendAndKill(1,&DAT_100065d0,0,2);
    SelSendAndKill(1,&DAT_100065d8,0,2);
    SelSendAndKill(1,&DAT_100065e0,0,2);
    SelSendAndKill(1,&DAT_100065e8,0,2);
    SelectUnits(&DAT_100064f8,0);
    SelSendAndKill(1,&DAT_100065f0,0,0);
    SelSendAndKill(1,&DAT_100065f8,0,2);
    SelectUnits(&DAT_10006548,0);
    SelSendAndKill(1,&DAT_10006660,0,0);
    SelectUnits(&DAT_10006588,0);
    SelSendAndKill(1,&DAT_100065f0,0,0);
    SelSendAndKill(1,&DAT_100065f8,0,2);
    SelectUnits(&DAT_10006500,0);
    SelSendAndKill(1,&DAT_10006600,0,0);
    SelSendAndKill(1,&DAT_10006628,0,2);
    SelectUnits(&DAT_10006530,0);
    SelSendAndKill(1,&DAT_10006650,0,0);
    SelectUnits(&DAT_10006550,0);
    SelSendAndKill(1,&DAT_10006670,0,0);
    SelSendAndKill(1,&DAT_10006678,0,2);
    RunTimer(1,100);
    DisableMission(0x43);
    DisableMission(0x44);
  }
  iVar2 = GetUnitsByNation(&DAT_100064d8,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_100064d8,0);
    SelDie(1);
  }
  iVar2 = GetUnitsByNation(&DAT_100064e0,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10006520,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_100064e0,0);
    SelDie(0);
    SelectUnits(&DAT_10006520,0);
  }
  iVar2 = GetUnitsByNation(&DAT_100064e8,1);
  if (0 < iVar2) {
    ClearSelection(1);
    SelectUnits1(1,&DAT_100064e8,0);
    SelDie(1);
  }
  cVar1 = TimerDone(1);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_10006500);
    if ((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10006508), iVar2 < 1)) {
      FUN_10001330(&DAT_10006508);
    }
    else {
      CreateZoneNearGroup(&DAT_10006698,&DAT_10006628,&DAT_10006500,100);
      SelectUnits(&DAT_10006508,0);
      SelSendAndKill(1,&DAT_10006698,0,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10006530);
    if ((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10006538), iVar2 < 1)) {
      FUN_10001330(&DAT_10006538);
    }
    else {
      CreateZoneNearGroup(&DAT_10006698,&DAT_10006650,&DAT_10006530,100);
      SelectUnits(&DAT_10006538,0);
      SelSendAndKill(1,&DAT_10006698,0x40,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10006550);
    if ((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10006560), iVar2 < 1)) {
      FUN_10001330(&DAT_10006560);
    }
    else {
      CreateZoneNearGroup(&DAT_10006698,&DAT_10006678,&DAT_10006550,100);
      SelectUnits(&DAT_10006560,0);
      SelSendAndKill(1,&DAT_10006698,0,0);
    }
    cVar1 = Trigg(1);
    if (((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006580), 0 < iVar2)) &&
       (iVar2 = GetTotalAmount0(&DAT_10006590), 0 < iVar2)) {
      CreateZoneNearGroup(&DAT_10006698,&DAT_10006680,&DAT_10006580,100);
      SelectUnits(&DAT_10006590,0);
      SelSendAndKill(1,&DAT_10006698,0,0);
    }
    else {
      FUN_10001330(&DAT_10006590);
    }
    RunTimer(1,200);
  }
  cVar1 = Trigg(2);
  pcVar4 = SetTrigg_exref;
  if ((cVar1 != '\0') &&
     (iVar2 = GetUnitsAmount1(&DAT_10006628,&DAT_10006500), pcVar4 = SetTrigg_exref, 0 < iVar2)) {
    SetTrigg(2,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006500), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10006510);
    if ((iVar2 < 1) || (iVar2 = GetDiff(1), iVar2 < 2)) {
      iVar2 = GetTotalAmount0(&DAT_10006518);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_10006528);
        if (iVar2 < 1) {
          (*pcVar4)(2,1);
          SelectUnits(&DAT_10006500,0);
          SelSendAndKill(1,&DAT_10006640,0,0);
        }
        else {
          SelectUnits(&DAT_10006500,0);
          SelAttackGroup(1,&DAT_10006528);
        }
      }
      else {
        SelectUnits(&DAT_10006500,0);
        SelAttackGroup(1,&DAT_10006518);
      }
    }
    else {
      SelectUnits(&DAT_10006500,0);
      SelAttackGroup(1,&DAT_10006510);
    }
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006650,&DAT_10006530), 0 < iVar2)) {
    (*pcVar4)(6,0);
  }
  cVar1 = Trigg(6);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006530), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10006540);
    if ((iVar2 < 1) || (iVar2 = GetDiff(1), iVar2 < 2)) {
      iVar2 = GetTotalAmount0(&DAT_10006510);
      if ((iVar2 < 1) || (iVar2 = GetDiff(1), iVar2 < 2)) {
        iVar2 = GetTotalAmount0(&DAT_10006518);
        if (iVar2 < 1) {
          iVar2 = GetTotalAmount0(&DAT_10006528);
          if (iVar2 < 1) {
            (*pcVar4)(6,1);
            SelectUnits(&DAT_10006530,0);
            SelSendAndKill(1,&DAT_10006640,0,0);
          }
          else {
            SelectUnits(&DAT_10006530,0);
            SelAttackGroup(1,&DAT_10006528);
          }
        }
        else {
          SelectUnits(&DAT_10006530,0);
          SelAttackGroup(1,&DAT_10006518);
        }
      }
      else {
        SelectUnits(&DAT_10006530,0);
        SelAttackGroup(1,&DAT_10006510);
      }
    }
    else {
      SelectUnits(&DAT_10006530,0);
      SelAttackGroup(1,&DAT_10006540);
    }
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006678,&DAT_10006550), 0 < iVar2)) {
    (*pcVar4)(7,0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006550), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10006570);
    if (iVar2 < 1) {
      iVar2 = GetTotalAmount0(&DAT_10006598);
      if (iVar2 < 1) {
        (*pcVar4)(7,1);
        SelectUnits(&DAT_10006550,0);
        SelSendAndKill(1,&DAT_10006640,0,0);
      }
      else {
        SelectUnits(&DAT_10006550,0);
        SelAttackGroup(1,&DAT_10006598);
      }
    }
    else {
      SelectUnits(&DAT_10006550,0);
      SelAttackGroup(1,&DAT_10006570);
    }
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetTotalAmount0(&DAT_10006518), iVar2 == 0 || (cVar1 = TimerDone(3), cVar1 != '\0'))
      && (iVar2 = GetTotalAmount0(&DAT_10006558), 0 < iVar2)))) {
    (*pcVar4)(3,0);
    SelectUnits(&DAT_10006558,0);
    SelSendAndKill(1,&DAT_10006600,0,0);
    SelSendAndKill(1,&DAT_10006628,0,2);
    SelSendAndKill(1,&DAT_10006630,0,2);
    SelSendAndKill(1,&DAT_10006638,0,2);
    SelSendAndKill(1,&DAT_10006640,0,2);
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') &&
      ((iVar2 = GetTotalAmount0(&DAT_10006518), iVar2 == 0 || (cVar1 = TimerDone(3), cVar1 != '\0'))
      )) && (iVar2 = GetTotalAmount0(&DAT_10006568), 0 < iVar2)) {
    (*pcVar4)(8,0);
    SelectUnits(&DAT_10006568,0);
    SelSendAndKill(1,&DAT_10006650,0,0);
    iVar2 = GetTotalAmount0(&DAT_10006518);
    if (iVar2 == 0) {
      SelSendAndKill(1,&DAT_10006628,0,2);
    }
    SelSendAndKill(1,&DAT_10006630,0,2);
    SelSendAndKill(1,&DAT_10006638,0,2);
    SelSendAndKill(1,&DAT_10006640,0,2);
  }
  cVar1 = Trigg(9);
  if (((cVar1 != '\0') &&
      ((iVar2 = GetTotalAmount0(&DAT_10006570), iVar2 == 0 || (cVar1 = TimerDone(2), cVar1 != '\0'))
      )) && (iVar2 = GetTotalAmount0(&DAT_10006578), 0 < iVar2)) {
    (*pcVar4)(9,0);
    SelectUnits(&DAT_10006578,0);
    SelSendAndKill(1,&DAT_10006670,0,0);
    SelSendAndKill(1,&DAT_10006678,0,2);
    SelSendAndKill(1,&DAT_10006630,0,2);
    SelSendAndKill(1,&DAT_10006638,0,2);
    SelSendAndKill(1,&DAT_10006640,0,2);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006518), iVar2 == 0)) {
    (*pcVar4)(4,0);
    RunTimer(2,2000);
    iVar2 = GetTotalAmount0(&DAT_10006608);
    if (0 < iVar2) {
      ClearSelection(0);
      SelectUnits(&DAT_10006608,0);
      SelDie(0);
    }
    ShowPage(s__PAGE1_10006174);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10006570), iVar2 == 0)) {
    (*pcVar4)(5,0);
    RunTimer(3,2000);
    iVar2 = GetTotalAmount0(&DAT_10006690);
    if (0 < iVar2) {
      ClearSelection(0);
      SelectUnits(&DAT_10006690,0);
      SelDie(0);
    }
    ShowPage(s__PAGE2_1000616c);
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar2 = GetGlobalTime(), 5000 < iVar2)) {
    (*pcVar4)(1,0);
    SelectUnits(&DAT_10006580,0);
    SelSendAndKill(1,&DAT_10006680,0x40,0);
  }
  cVar1 = Trigg(10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006680,&DAT_10006580), 0 < iVar2)) {
    (*pcVar4)(10,0);
  }
  cVar1 = Trigg(10);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10006580), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_100065a0);
    if ((iVar2 < 1) || (iVar2 = GetDiff(1), iVar2 < 2)) {
      iVar2 = GetTotalAmount0(&DAT_10006570);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount0(&DAT_10006598);
        if (iVar2 < 1) {
          (*pcVar4)(10,1);
          SelectUnits(&DAT_10006580,0);
          SelSendAndKill(1,&DAT_10006638,0,0);
        }
        else {
          SelectUnits(&DAT_10006580,0);
          SelAttackGroup(1,&DAT_10006598);
        }
      }
      else {
        SelectUnits(&DAT_10006580,0);
        SelAttackGroup(1,&DAT_10006570);
      }
    }
    else {
      SelectUnits(&DAT_10006580,0);
      SelAttackGroup(1,&DAT_100065a0);
    }
  }
  pcVar5 = Trigg_exref;
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_100064d8), iVar2 < 0x3c)) {
    (*pcVar4)(0xb,0);
    ShowPage(s__PAGE3_10006164);
    LooseGame();
  }
  cVar1 = Trigg(0xc);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if ((iVar2 * 3000 + 10000 < iVar3) ||
       (((((iVar2 = GetTotalAmount0(&DAT_10006500), pcVar5 = Trigg_exref, iVar2 == 0 &&
           (iVar2 = GetTotalAmount0(&DAT_10006530), pcVar5 = Trigg_exref, iVar2 == 0)) &&
          (iVar2 = GetTotalAmount0(&DAT_10006550), pcVar5 = Trigg_exref, iVar2 == 0)) &&
         ((iVar2 = GetTotalAmount0(&DAT_10006580), pcVar5 = Trigg_exref, iVar2 == 0 &&
          (cVar1 = Trigg(4), cVar1 != '\0')))) && (cVar1 = Trigg(5), cVar1 != '\0')))) {
      (*pcVar4)(0xc,0);
      DisableMission(0x42);
      EnableMission(0x43);
      EnableMission(0x44);
      ShowPage(s__PAGE4_1000615c);
      CreateObject0(&DAT_100064c8,&DAT_10006618,&DAT_10006620,0,&DAT_10006658,0xc0);
      CreateObject0(&DAT_100064d0,&DAT_10006618,&DAT_100064c0,0,&DAT_10006668,0xc0);
      iVar2 = GetDiff(1);
      AddResource(0,3,(0xf - iVar2) * 2000);
      iVar2 = GetDiff(1);
      AddResource(0,1,(10 - iVar2) * 1000);
      iVar2 = GetDiff(1);
      AddResource(0,5,(10 - iVar2) * 3000);
      iVar2 = GetDiff(1);
      AddResource(0,4,(10 - iVar2) * 3000);
      pcVar5 = Trigg_exref;
    }
  }
  cVar1 = (*pcVar5)(0xd);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_100065a8,1), iVar2 == 0)) &&
     (iVar2 = GetUnitsByNation(&DAT_100065b0,1), iVar2 == 0)) {
    (*pcVar4)(0xd,0);
    ShowPage(s__PAGE5_10006154);
    ShowVictory();
  }
  return;
}



// Function: FUN_10002210 @ 0x10002210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002210(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100066bc = GetVersion();
    iVar1 = FUN_10002c44(1);
    if (iVar1 != 0) {
      _DAT_100066c8 = DAT_100066bc >> 8 & 0xff;
      _DAT_100066c4 = DAT_100066bc & 0xff;
      DAT_100066bc = DAT_100066bc >> 0x10;
      _DAT_100066c0 = _DAT_100066c4 * 0x100 + _DAT_100066c8;
      iVar1 = FUN_100024d7();
      if (iVar1 != 0) {
        DAT_10006c18 = GetCommandLineA();
        DAT_100066a8 = FUN_10002b12();
        FUN_100025fc();
        FUN_100028c5();
        FUN_1000280c();
        FUN_100023b9();
        DAT_100066a4 = DAT_100066a4 + 1;
        goto LAB_100022e3;
      }
      FUN_10002c80();
    }
LAB_10002270:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100066a4 < 1) goto LAB_10002270;
      DAT_100066a4 = DAT_100066a4 + -1;
      if (DAT_100066f4 == 0) {
        FUN_100023f7();
      }
      FUN_100027b8();
      FUN_1000252b();
      FUN_10002c80();
    }
    else if (param_2 == 3) {
      FUN_1000255c((LPVOID)0x0);
    }
LAB_100022e3:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100022e9

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100066a4;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10002331;
    if ((DAT_10006c1c != (code *)0x0) &&
       (iVar2 = (*DAT_10006c1c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10002210(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10002331:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10002210(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10002210(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10006c1c != (code *)0x0) {
      iVar2 = (*DAT_10006c1c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10002386

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100066b0 == 1) || ((DAT_100066b0 == 0 && (DAT_100066b4 == 1)))) {
    FUN_10002cf5();
  }
  FUN_10002d2e(param_1);
  (*(code *)PTR___exit_1000618c)(0xff);
  return;
}



// Function: FUN_100023b9 @ 0x100023b9

void FUN_100023b9(void)

{
  if (DAT_10006c14 != (code *)0x0) {
    (*DAT_10006c14)();
  }
  FUN_100024bd((undefined4 *)&DAT_10006008,(undefined4 *)&DAT_10006010);
  FUN_100024bd((undefined4 *)&DAT_10006000,(undefined4 *)&DAT_10006004);
  return;
}



// Function: __exit @ 0x100023e6

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10002406(_Code,1,0);
  return;
}



// Function: FUN_100023f7 @ 0x100023f7

void FUN_100023f7(void)

{
  FUN_10002406(0,0,1);
  return;
}



// Function: FUN_10002406 @ 0x10002406

void __cdecl FUN_10002406(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100024ab();
  if (DAT_100066f8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100066f4 = 1;
  DAT_100066f0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10006c10 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10006c0c - 4), DAT_10006c10 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10006c10 <= puVar1);
    }
    FUN_100024bd((undefined4 *)&DAT_10006014,(undefined4 *)&DAT_10006018);
  }
  FUN_100024bd((undefined4 *)&DAT_1000601c,(undefined4 *)&DAT_10006020);
  if (param_3 == 0) {
    DAT_100066f8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100024b4();
  return;
}



// Function: FUN_100024ab @ 0x100024ab

void FUN_100024ab(void)

{
  FUN_10002f16(0xd);
  return;
}



// Function: FUN_100024b4 @ 0x100024b4

void FUN_100024b4(void)

{
  FUN_10002f77(0xd);
  return;
}



// Function: FUN_100024bd @ 0x100024bd

void __cdecl FUN_100024bd(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_100024d7 @ 0x100024d7

undefined4 FUN_100024d7(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10002e81();
  DAT_10006190 = TlsAlloc();
  if (DAT_10006190 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10002f8c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10006190,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10002549((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_1000252b @ 0x1000252b

void FUN_1000252b(void)

{
  FUN_10002eaa();
  if (DAT_10006190 != 0xffffffff) {
    TlsFree(DAT_10006190);
    DAT_10006190 = 0xffffffff;
  }
  return;
}



// Function: FUN_10002549 @ 0x10002549

void __cdecl FUN_10002549(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10006310;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_1000255c @ 0x1000255c

void __cdecl FUN_1000255c(LPVOID param_1)

{
  if (DAT_10006190 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_10006190), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_10003019(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_10003019(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_10003019(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_10003019(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_10003019(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_10003019(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10006310) {
        FUN_10003019(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_10003019(param_1);
    }
    TlsSetValue(DAT_10006190,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_100025fc @ 0x100025fc

void FUN_100025fc(void)

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
  DAT_10006c00 = 0x20;
  DAT_10006b00 = puVar2;
  for (; puVar2 < DAT_10006b00 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10006c00 < (int)UVar8) {
      puVar2 = &DAT_10006b04;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10006c00;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10006c00 = DAT_10006c00 + 0x20;
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
      } while ((int)DAT_10006c00 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10006b00)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10006b00 + iVar6 * 9;
    if (DAT_10006b00[iVar6 * 9] == -1) {
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
          goto LAB_100027a1;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_100027a1:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10006c00);
      return;
    }
  } while( true );
}



// Function: FUN_100027b8 @ 0x100027b8

void FUN_100027b8(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10006b00;
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
      FUN_10003019((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10006c00);
  return;
}



// Function: FUN_1000280c @ 0x1000280c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000280c(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10006c08 == 0) {
    FUN_10003633();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100066a8; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_100066d8 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100066a8;
  puVar6 = DAT_100066a8;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100030f0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10003019(DAT_100066a8);
  DAT_100066a8 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10006c04 = 1;
  return;
}



// Function: FUN_100028c5 @ 0x100028c5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100028c5(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10006c08 == 0) {
    FUN_10003633();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100066fc,0x104);
  _DAT_100066e8 = &DAT_100066fc;
  pbVar2 = &DAT_100066fc;
  if (*DAT_10006c18 != 0) {
    pbVar2 = DAT_10006c18;
  }
  FUN_1000295e(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000295e(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_100066d0 = puVar1;
  _DAT_100066cc = local_8 + -1;
  return;
}



// Function: FUN_1000295e @ 0x1000295e

void __cdecl FUN_1000295e(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_100069e0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_100069e0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10002a09;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10002a09:
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
          if ((*(byte *)((int)&DAT_100069e0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_100069e0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10002b12 @ 0x10002b12

LPSTR FUN_10002b12(void)

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
  if (DAT_10006800 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10006800 = 1;
LAB_10002b69:
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
        FUN_10003019(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10006800 = 2;
  }
  else {
    if (DAT_10006800 == 1) goto LAB_10002b69;
    if (DAT_10006800 != 2) {
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
    FUN_10003650((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10002c44 @ 0x10002c44

undefined4 __cdecl FUN_10002c44(int param_1)

{
  int iVar1;
  
  DAT_10006ae8 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10006ae8 != (HANDLE)0x0) {
    iVar1 = FUN_10003985();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_10006ae8);
  }
  return 0;
}



// Function: FUN_10002c80 @ 0x10002c80

void FUN_10002c80(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_100068b8) {
    puVar2 = (undefined4 *)((int)DAT_100068bc + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_10006ae8,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_100068b8);
  }
  HeapFree(DAT_10006ae8,0,DAT_100068bc);
  HeapDestroy(DAT_10006ae8);
  return;
}



// Function: FUN_10002cf5 @ 0x10002cf5

void FUN_10002cf5(void)

{
  if ((DAT_100066b0 == 1) || ((DAT_100066b0 == 0 && (DAT_100066b4 == 1)))) {
    FUN_10002d2e(0xfc);
    if (DAT_10006804 != (code *)0x0) {
      (*DAT_10006804)();
    }
    FUN_10002d2e(0xff);
  }
  return;
}



// Function: FUN_10002d2e @ 0x10002d2e

void __cdecl FUN_10002d2e(DWORD param_1)

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
  pDVar2 = &DAT_100061c0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10006250);
  if (param_1 == (&DAT_100061c0)[iVar5 * 2]) {
    if ((DAT_100066b0 == 1) || ((DAT_100066b0 == 0 && (DAT_100066b4 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100061c4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100030f0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100030f0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10003100(local_a4,_Dest);
      FUN_10003100(local_a4,(uint *)&DAT_100053f4);
      FUN_10003100(local_a4,*(uint **)(iVar5 * 8 + 0x100061c4));
      auStackY_1e3._3_4_ = 0x10002e52;
      FUN_100041ce(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10002e81 @ 0x10002e81

void FUN_10002e81(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10006294);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10006284);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10006274);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10006254);
  return;
}



// Function: FUN_10002eaa @ 0x10002eaa

void FUN_10002eaa(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10006250;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10006294)) && (ppuVar1 != &PTR_DAT_10006284)) &&
       ((ppuVar1 != &PTR_DAT_10006274 && (ppuVar1 != &PTR_DAT_10006254)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10003019(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10006310);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10006274);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10006284);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10006294);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10006254);
  return;
}



// Function: FUN_10002f16 @ 0x10002f16

void __cdecl FUN_10002f16(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10006250 + param_1;
  if ((&DAT_10006250)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10002f16(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10003019(lpCriticalSection);
    }
    FUN_10002f77(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10002f77 @ 0x10002f77

void __cdecl FUN_10002f77(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10006250)[param_1]);
  return;
}



// Function: FUN_10002f8c @ 0x10002f8c

int * __cdecl FUN_10002f8c(int param_1,int param_2)

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
      if (_Size < DAT_100064a0 || (int)_Size - (int)DAT_100064a0 == 0) {
        FUN_10002f16(9);
        piVar1 = FUN_10003d19(_Size);
        FUN_10002f77(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_10006ae8,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_1000687c == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_100043b8(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_10003019 @ 0x10003019

void __cdecl FUN_10003019(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_10002f16(9);
    puVar1 = (uint *)FUN_100039c3((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_100039ee(puVar1,(uint)param_1);
      FUN_10002f77(9);
      return;
    }
    FUN_10002f77(9);
    HeapFree(DAT_10006ae8,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x10003061

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000687c);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10003073

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_1000309f((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_100043b8(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_1000309f @ 0x1000309f

int * __cdecl FUN_1000309f(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_100064a0) {
    FUN_10002f16(9);
    piVar1 = FUN_10003d19(param_1);
    FUN_10002f77(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_10006ae8,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_100030f0 @ 0x100030f0

uint * __cdecl FUN_100030f0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_100031d8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100031d8:
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



// Function: FUN_10003100 @ 0x10003100

uint * __cdecl FUN_10003100(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000311c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000314f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000316b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000311c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000316b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000316b;
    }
  }
LAB_1000314f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000316b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100031d8:
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
    if (bVar1 == 0) goto LAB_100031d8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x100031e0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10003200;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10003233:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10003200:
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
  goto LAB_10003233;
}



// Function: FUN_1000325b @ 0x1000325b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000325b(int param_1)

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
  
  FUN_10002f16(0x19);
  CodePage = FUN_10003408(param_1);
  if (CodePage != DAT_100068c0) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100063a8;
LAB_10003298:
      if (*pUVar5 != CodePage) goto code_r0x1000329c;
      local_8 = 0;
      puVar15 = &DAT_100069e0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100063b8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100063a0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_100069e0 + uVar8 + 1);
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
      _DAT_100068dc = 1;
      DAT_100068c0 = CodePage;
      DAT_10006ae4 = FUN_10003452(CodePage);
      DAT_100068d0 = *(undefined4 *)(iVar12 + 0x100063ac);
      DAT_100068d4 = *(undefined4 *)(iVar12 + 0x100063b0);
      DAT_100068d8 = *(undefined4 *)(iVar12 + 0x100063b4);
      goto LAB_100033ec;
    }
    goto LAB_100033e7;
  }
  goto LAB_10003282;
code_r0x1000329c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10006497 < (int)pUVar5) goto code_r0x100032a7;
  goto LAB_10003298;
code_r0x100032a7:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10006ae4 = 0;
    puVar15 = &DAT_100069e0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_100068dc = 0;
      DAT_100068c0 = CodePage;
    }
    else {
      DAT_100068c0 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_100069e0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_100069e0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10006ae4 = FUN_10003452(CodePage);
      _DAT_100068dc = 1;
    }
    DAT_100068d0 = 0;
    DAT_100068d4 = 0;
    DAT_100068d8 = 0;
  }
  else {
    if (DAT_10006868 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100033f9;
    }
LAB_100033e7:
    FUN_10003485();
  }
LAB_100033ec:
  FUN_100034ae();
LAB_10003282:
  uVar14 = 0;
LAB_100033f9:
  FUN_10002f77(0x19);
  return uVar14;
}



// Function: FUN_10003408 @ 0x10003408

int __cdecl FUN_10003408(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10006868 = 1;
                    /* WARNING: Could not recover jumptable at 0x10003422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10006868 = 1;
                    /* WARNING: Could not recover jumptable at 0x10003437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10006898;
  }
  DAT_10006868 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10003452 @ 0x10003452

undefined4 __cdecl FUN_10003452(int param_1)

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



// Function: FUN_10003485 @ 0x10003485

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003485(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100069e0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_100068c0 = 0;
  _DAT_100068dc = 0;
  DAT_10006ae4 = 0;
  DAT_100068d0 = 0;
  DAT_100068d4 = 0;
  DAT_100068d8 = 0;
  return;
}



// Function: FUN_100034ae @ 0x100034ae

void FUN_100034ae(void)

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
  
  BVar2 = GetCPInfo(DAT_100068c0,&local_18);
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
    FUN_10004622(1,local_118,0x100,local_518,DAT_100068c0,DAT_10006ae4,0);
    FUN_100043d3(DAT_10006ae4,0x100,local_118,0x100,local_218,0x100,DAT_100068c0,0);
    FUN_100043d3(DAT_10006ae4,0x200,local_118,0x100,local_318,0x100,DAT_100068c0,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_100069e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_100035ba;
        }
        (&DAT_100068e0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100069e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_100035ba:
        (&DAT_100068e0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_100069e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10003604;
        }
        (&DAT_100068e0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100069e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10003604:
        (&DAT_100068e0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10003633 @ 0x10003633

void FUN_10003633(void)

{
  if (DAT_10006c08 == 0) {
    FUN_1000325b(-3);
    DAT_10006c08 = 1;
  }
  return;
}



// Function: FUN_10003650 @ 0x10003650

undefined4 * __cdecl FUN_10003650(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10003807_caseD_2;
        case 3:
          goto switchD_10003807_caseD_3;
        }
        goto switchD_10003807_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10003807_caseD_0;
      case 1:
        goto switchD_10003807_caseD_1;
      case 2:
        goto switchD_10003807_caseD_2;
      case 3:
        goto switchD_10003807_caseD_3;
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
              goto switchD_10003807_caseD_2;
            case 3:
              goto switchD_10003807_caseD_3;
            }
            goto switchD_10003807_caseD_1;
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
              goto switchD_10003807_caseD_2;
            case 3:
              goto switchD_10003807_caseD_3;
            }
            goto switchD_10003807_caseD_1;
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
              goto switchD_10003807_caseD_2;
            case 3:
              goto switchD_10003807_caseD_3;
            }
            goto switchD_10003807_caseD_1;
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
switchD_10003807_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10003807_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10003807_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10003807_caseD_0:
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
        goto switchD_10003685_caseD_2;
      case 3:
        goto switchD_10003685_caseD_3;
      }
      goto switchD_10003685_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10003685_caseD_0;
    case 1:
      goto switchD_10003685_caseD_1;
    case 2:
      goto switchD_10003685_caseD_2;
    case 3:
      goto switchD_10003685_caseD_3;
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
            goto switchD_10003685_caseD_2;
          case 3:
            goto switchD_10003685_caseD_3;
          }
          goto switchD_10003685_caseD_1;
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
            goto switchD_10003685_caseD_2;
          case 3:
            goto switchD_10003685_caseD_3;
          }
          goto switchD_10003685_caseD_1;
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
            goto switchD_10003685_caseD_2;
          case 3:
            goto switchD_10003685_caseD_3;
          }
          goto switchD_10003685_caseD_1;
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
switchD_10003685_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10003685_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10003685_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10003685_caseD_0:
  return param_1;
}



// Function: FUN_10003985 @ 0x10003985

undefined4 FUN_10003985(void)

{
  DAT_100068bc = HeapAlloc(DAT_10006ae8,0,0x140);
  if (DAT_100068bc == (LPVOID)0x0) {
    return 0;
  }
  DAT_100068b4 = 0;
  DAT_100068b8 = 0;
  DAT_100068b0 = DAT_100068bc;
  DAT_100068a8 = 0x10;
  return 1;
}



// Function: FUN_100039c3 @ 0x100039c3

uint __cdecl FUN_100039c3(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_100068bc;
  while( true ) {
    if (DAT_100068bc + DAT_100068b8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_100039ee @ 0x100039ee

void __cdecl FUN_100039ee(uint *param_1,uint param_2)

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
  uVar5 = DAT_100068ac;
  puVar2 = DAT_100068b4;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_100068b4 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_100068ac * 0x8000 + DAT_100068b4[3]),0x8000,0x4000);
    DAT_100068b4[2] = DAT_100068b4[2] | 0x80000000U >> ((byte)DAT_100068ac & 0x1f);
    *(undefined4 *)(DAT_100068b4[4] + 0xc4 + DAT_100068ac * 4) = 0;
    *(char *)(DAT_100068b4[4] + 0x43) = *(char *)(DAT_100068b4[4] + 0x43) + -1;
    if (*(char *)(DAT_100068b4[4] + 0x43) == '\0') {
      DAT_100068b4[1] = DAT_100068b4[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_100068b4[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_100068b4[3],0,0x8000);
      HeapFree(DAT_10006ae8,0,(LPVOID)DAT_100068b4[4]);
      FUN_10004770(DAT_100068b4,DAT_100068b4 + 5,
                   (DAT_100068b8 * 0x14 - (int)DAT_100068b4) + -0x14 + DAT_100068bc);
      DAT_100068b8 = DAT_100068b8 + -1;
      if (DAT_100068b4 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_100068b0 = DAT_100068bc;
      puVar2 = param_1;
    }
  }
  DAT_100068b4 = puVar2;
  DAT_100068ac = uVar5;
  return;
}



// Function: FUN_10003d19 @ 0x10003d19

int * __cdecl FUN_10003d19(uint *param_1)

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
  
  puVar8 = DAT_100068bc + DAT_100068b8 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_100068b0;
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
  puVar11 = DAT_100068bc;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_100068b0 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_100068b0) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_100068bc;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_100068b0 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_100068b0) && (param_1 = FUN_10004022(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100040d3((int)param_1);
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
  DAT_100068b0 = param_1;
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
    if (iVar9 == 0) goto LAB_10003fdf;
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
LAB_10003fdf:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_100068b4)) && (local_8 == DAT_100068ac)) {
    DAT_100068b4 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10004022 @ 0x10004022

undefined4 * FUN_10004022(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_100068b8 == DAT_100068a8) {
    pvVar2 = HeapReAlloc(DAT_10006ae8,0,DAT_100068bc,(DAT_100068a8 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100068a8 = DAT_100068a8 + 0x10;
    DAT_100068bc = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_100068bc + DAT_100068b8 * 0x14);
  pvVar2 = HeapAlloc(DAT_10006ae8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_100068b8 = DAT_100068b8 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10006ae8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100040d3 @ 0x100040d3

int __cdecl FUN_100040d3(int param_1)

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



// Function: FUN_100041ce @ 0x100041ce

int __cdecl FUN_100041ce(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000686c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000686c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000686c != (FARPROC)0x0) {
        DAT_10006870 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10006874 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000421d;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000421d:
    if (DAT_10006870 != (FARPROC)0x0) {
      iVar1 = (*DAT_10006870)();
      if ((iVar1 != 0) && (DAT_10006874 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10006874)(iVar1);
      }
    }
    iVar1 = (*DAT_1000686c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10004260

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
        goto joined_r0x1000429e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100042db;
        goto LAB_10004349;
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
joined_r0x10004345:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10004349:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100042db;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10004345;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10004345;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10004345;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000429e:
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
LAB_100042db:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: _memset @ 0x10004360

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



// Function: FUN_100043b8 @ 0x100043b8

undefined4 __cdecl FUN_100043b8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10006878 != (code *)0x0) {
    iVar1 = (*DAT_10006878)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_100043d3 @ 0x100043d3

int __cdecl
FUN_100043d3(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10005478;
  puStack_10 = &LAB_10004ba0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_100068a0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100068a0 = 2;
    }
    else {
      DAT_100068a0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100045f7(param_3,param_4);
  }
  if (DAT_100068a0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_100068a0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10006898;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10004c80();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10004c80();
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



// Function: FUN_100045f7 @ 0x100045f7

int __cdecl FUN_100045f7(char *param_1,int param_2)

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



// Function: FUN_10004622 @ 0x10004622

BOOL __cdecl
FUN_10004622(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_10005490;
  puStack_10 = &LAB_10004ba0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_100068a4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_100068a4 == 0) {
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
  DAT_100068a4 = iVar3;
  if (DAT_100068a4 != 2) {
    if (DAT_100068a4 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10006898;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10004c80();
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
    param_6 = DAT_10006888;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10004770 @ 0x10004770

undefined4 * __cdecl FUN_10004770(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10004927_caseD_2;
        case 3:
          goto switchD_10004927_caseD_3;
        }
        goto switchD_10004927_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10004927_caseD_0;
      case 1:
        goto switchD_10004927_caseD_1;
      case 2:
        goto switchD_10004927_caseD_2;
      case 3:
        goto switchD_10004927_caseD_3;
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
              goto switchD_10004927_caseD_2;
            case 3:
              goto switchD_10004927_caseD_3;
            }
            goto switchD_10004927_caseD_1;
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
              goto switchD_10004927_caseD_2;
            case 3:
              goto switchD_10004927_caseD_3;
            }
            goto switchD_10004927_caseD_1;
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
              goto switchD_10004927_caseD_2;
            case 3:
              goto switchD_10004927_caseD_3;
            }
            goto switchD_10004927_caseD_1;
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
switchD_10004927_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10004927_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10004927_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10004927_caseD_0:
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
        goto switchD_100047a5_caseD_2;
      case 3:
        goto switchD_100047a5_caseD_3;
      }
      goto switchD_100047a5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100047a5_caseD_0;
    case 1:
      goto switchD_100047a5_caseD_1;
    case 2:
      goto switchD_100047a5_caseD_2;
    case 3:
      goto switchD_100047a5_caseD_3;
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
            goto switchD_100047a5_caseD_2;
          case 3:
            goto switchD_100047a5_caseD_3;
          }
          goto switchD_100047a5_caseD_1;
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
            goto switchD_100047a5_caseD_2;
          case 3:
            goto switchD_100047a5_caseD_3;
          }
          goto switchD_100047a5_caseD_1;
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
            goto switchD_100047a5_caseD_2;
          case 3:
            goto switchD_100047a5_caseD_3;
          }
          goto switchD_100047a5_caseD_1;
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
switchD_100047a5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100047a5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100047a5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100047a5_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x10004aa8

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10004ac0,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10004aea

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
  puStack_18 = &LAB_10004ac8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10004b7e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_10004b7e @ 0x10004b7e

void FUN_10004b7e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100064b8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100064b4 = in_EAX;
  DAT_100064bc = unaff_EBP;
  return;
}



// Function: FUN_10004c5d @ 0x10004c5d

void FUN_10004c5d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10004c80 @ 0x10004c80

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10004c80(void)

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




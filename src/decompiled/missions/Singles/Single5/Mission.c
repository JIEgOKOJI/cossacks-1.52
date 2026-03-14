// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

undefined4 FUN_10001000(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: OnInit @ 0x100011d0

void OnInit(void)

{
  DWORD DVar1;
  
                    /* 0x11d0  1  OnInit */
  RegisterVar(&DAT_1000c060,8);
  RegisterDynGroup(&DAT_1000f4b0);
  RegisterVar(&DAT_1000f4b0,8);
  RegisterDynGroup(&DAT_1000f4a8);
  RegisterVar(&DAT_1000f4a8,8);
  RegisterUnits(&DAT_1000f498,s_GYanichar_1000c1dc);
  RegisterDynGroup(&DAT_1000f490);
  RegisterVar(&DAT_1000f490,8);
  FUN_100020a0(0x1000f478);
  RegisterUnits(&DAT_1000f468,s_GLag1_1000c1d4);
  RegisterZone(&DAT_1000f460,s_ZLag1_1000c1cc);
  RegisterDynGroup(&DAT_1000f470);
  RegisterVar(&DAT_1000f470,8);
  RegisterUnits(&DAT_1000f450,s_GLag2_1000c1c4);
  RegisterZone(&DAT_1000f448,s_ZLag2_1000c1bc);
  RegisterDynGroup(&DAT_1000f458);
  RegisterVar(&DAT_1000f458,8);
  RegisterUnits(&DAT_1000f438,s_GLag3_1000c1b4);
  RegisterZone(&DAT_1000f430,s_ZLag3_1000c1ac);
  RegisterDynGroup(&DAT_1000f440);
  RegisterVar(&DAT_1000f440,8);
  RegisterUnits(&DAT_1000f420,s_GLag4_1000c1a4);
  RegisterZone(&DAT_1000f418,s_ZLag4_1000c19c);
  RegisterDynGroup(&DAT_1000f428);
  RegisterVar(&DAT_1000f428,8);
  RegisterFormation(&DAT_1000f410,s__ALONE_1000c194);
  RegisterUnitType(&DAT_1000f408,s_Fregat_sp__1000c188);
  RegisterZone(&DAT_1000f3ed,s_ZSeaPatrol1_1000c17c);
  RegisterZone(&DAT_1000f3cd,s_ZSeaPatrol2_1000c170);
  RegisterZone(&DAT_1000f3ad,s_ZSeaPatrol3_1000c164);
  RegisterZone(&DAT_1000f38d,s_ZSeaPatrol4_1000c158);
  RegisterZone(&DAT_1000f36d,s_ZSeaPatrol5_1000c14c);
  RegisterZone(&DAT_1000f34d,s_ZSeaPatrol6_1000c140);
  RegisterZone(&DAT_1000f32d,s_ZSeaPatrol7_1000c134);
  RegisterZone(&DAT_1000f30d,s_ZSeaPatrol8_1000c128);
  RegisterZone(&DAT_1000f2ed,s_ZSeaPatrol9_1000c11c);
  FUN_100022e0(0x1000f3e8);
  FUN_100022e0(0x1000f3c8);
  FUN_100022e0(0x1000f3a8);
  FUN_100022e0(0x1000f388);
  FUN_100022e0(0x1000f368);
  FUN_100022e0(0x1000f348);
  FUN_100022e0(0x1000f328);
  FUN_100022e0(0x1000f308);
  FUN_100022e0(0x1000f2e8);
  RegisterUnits(&DAT_1000f2e0,s_GWorota_1000c114);
  RegisterUnits(&DAT_1000f2d8,s_GBarack_1000c10c);
  RegisterUnits(&DAT_1000f2d0,s_GPlot_1000c104);
  RegisterZone(&DAT_1000f2c8,s_ZPrichal_1000c0f8);
  RegisterZone(&DAT_1000f2c0,s_ZFortTalk_1000c0ec);
  RegisterUnitType(&DAT_1000f2b8,s_Mushketer_DA_DA__1000c0d8);
  RegisterDynGroup(&DAT_1000f2b0);
  RegisterVar(&DAT_1000f2b0,8);
  RegisterUnits(&DAT_1000f2a8,&DAT_1000c0d0);
  RegisterZone(&DAT_1000f2a0,&DAT_1000c0c8);
  RegisterZone(&DAT_1000f298,s_ZDestP_1000c0c0);
  RegisterUnits(&DAT_1000f280,s_GOboz_1000c0b8);
  RegisterUnits(&DAT_1000f278,&DAT_1000c0b0);
  RegisterUnits(&DAT_1000f270,s_GLin1_1000c0a8);
  RegisterZone(&DAT_1000f290,s_ZObozGive_1000c09c);
  RegisterZone(&DAT_1000f288,s_ZObozTalk_1000c090);
  SetPlayerName(1,s_ALLIES_1000c088);
  SetPlayerName(2,s_NIDERLAND_1000c07c);
  SetPlayerName(3,s_ROBBERS_1000c074);
  SetPlayerName(4,s_DWELLERS_1000c068);
  DVar1 = FUN_1000250f((int *)0x0);
  FUN_100024e0(DVar1);
  return;
}



// Function: ProcessScenary @ 0x100014e0

void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  code *pcVar6;
  
                    /* 0x14e0  2  ProcessScenary */
  cVar1 = Trigg(1);
  pcVar4 = DisableMission_exref;
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ChangeFriends(1,3);
    ChangeFriends(3,10);
    ChangeFriends(4,0x1f);
    iVar5 = 0;
    do {
      iVar2 = GetDiff(0);
      SetResource(0,iVar5,(6 - iVar2) * 1000);
      SetResource(2,iVar5,5000);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 6);
    uVar3 = GetDiff(0);
    StartAI(2,s_HOLLAND_0_1000c278,0,1,1,uVar3);
    RunTimer(1,100);
    RunTimer(2,100);
    RunTimer(3,100);
    RunTimer(4,100);
    RunTimer(5,100);
    RunTimer(6,100);
    RunTimer(7,100);
    RunTimer(8,100);
    RunTimer(9,100);
    RunTimer(10,100);
    RunTimer(0xb,100);
    RunTimer(0xc,100);
    RunTimer(0xd,100);
    RunTimer(0xe,100);
    RunTimer(0xf,100);
    RunTimer(0x10,100);
    RunTimer(0x11,15000);
    FUN_100020e0(0x1000f460,0x1000f478);
    FUN_100020e0(0x1000f448,0x1000f478);
    FUN_100020e0(0x1000f430,0x1000f478);
    FUN_100020e0(0x1000f418,0x1000f478);
    iVar2 = 0;
    iVar5 = GetDiff(0);
    if (iVar5 != -1 && -1 < iVar5 + 1) {
      do {
        FUN_10002320(&DAT_1000f3e8,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f3c8,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f3a8,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f388,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f368,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f348,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f328,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f308,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f2e8,&DAT_1000f408,&DAT_1000f410);
        iVar2 = iVar2 + 1;
        iVar5 = GetDiff(0);
      } while (iVar2 < iVar5 + 1);
    }
    ShowPage(s__PAGE2612_1000c26c);
    pcVar4 = DisableMission_exref;
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x48);
    DisableMission(0x4a);
    SelectUnits(&DAT_1000f2e0,0);
    SelOpenGates(1);
    SelectUnits(&DAT_1000f2d0,0);
    SelSendTo(1,&DAT_1000f2c8,0xc0,0);
    SetDestPoint(&DAT_1000f2d8,&DAT_1000f298);
  }
  cVar1 = TimerDoneFirst(0x11);
  if (cVar1 != '\0') {
    ShowPage(s__PAGE2613_1000c260);
    SetLightSpot(&DAT_1000f2c0,1,0);
    EnableMission(0x43);
    EnableMission(0x48);
  }
  SaveSelectedUnits(0,&DAT_1000f4a8,0);
  cVar1 = TimerDone(1);
  if (cVar1 != '\0') {
    FUN_10001ed0((uint *)&DAT_1000f498,3,0x1e,400,&DAT_1000f490);
    RunTimer(1,300);
  }
  FUN_10001dd0(2,0x1000f460,0x1000f478,2,&DAT_1000f490,3);
  FUN_10001dd0(3,0x1000f448,0x1000f478,3,&DAT_1000f490,3);
  FUN_10001dd0(4,0x1000f430,0x1000f478,4,&DAT_1000f490,3);
  FUN_10001dd0(5,0x1000f418,0x1000f478,5,&DAT_1000f490,3);
  FUN_10002370(&DAT_1000f3e8);
  FUN_10002370(&DAT_1000f3c8);
  FUN_10002370(&DAT_1000f3a8);
  FUN_10002370(&DAT_1000f388);
  FUN_10002370(&DAT_1000f368);
  FUN_10002370(&DAT_1000f348);
  FUN_10002370(&DAT_1000f328);
  FUN_10002370(&DAT_1000f308);
  FUN_10002370(&DAT_1000f2e8);
  iVar5 = GetUnitsAmount0(&DAT_1000f2c0,0);
  pcVar6 = SetTrigg_exref;
  if ((iVar5 != 0) && (cVar1 = Trigg(6), pcVar6 = SetTrigg_exref, cVar1 != '\0')) {
    ShowPage(s__PAGE2601_1000c254);
    pcVar6 = SetTrigg_exref;
    SetTrigg(6,0);
    SetTrigg(7,0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 == '\0') && (cVar1 = CheckProduction(&DAT_1000f2d8), cVar1 != '\0')) {
    ProduceUnit(&DAT_1000f2d8,&DAT_1000f2b8,&DAT_1000f2b0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 == '\0') && (iVar5 = GetTotalAmount0(&DAT_1000f2b0), iVar5 == 0x4b)) {
    (*pcVar6)(7,1);
    RunTimer(0xf,500);
  }
  cVar1 = TimerDoneFirst(0xf);
  if ((cVar1 != '\0') && (iVar5 = GetTotalAmount0(&DAT_1000f2b0), 0x4a < iVar5)) {
    ClearSelection(1);
    SelectUnits(&DAT_1000f2a8,0);
    SelectUnits(&DAT_1000f2b0,1);
    SelectUnits(&DAT_1000f2d0,1);
    SendUnitsToTransport(1);
  }
  SelectUnits(&DAT_1000f2d0,0);
  cVar1 = Trigg(8);
  if (cVar1 != '\0') {
    iVar5 = GetTotalAmount0(&DAT_1000f2b0);
    iVar2 = GetNInside(1);
    pcVar4 = DisableMission_exref;
    if (iVar2 == iVar5 + 1) {
      (*pcVar6)(8,0);
      SelectUnits(&DAT_1000f2d0,0);
      SelSendTo(1,&DAT_1000f2a0,0x80,0);
      ChangeFriends(3,2);
      RunTimer(0x10,500);
      (*pcVar6)(10,0);
      pcVar4 = DisableMission_exref;
    }
  }
  SelectUnits(&DAT_1000f2d0,0);
  cVar1 = Trigg(10);
  if (((cVar1 == '\0') && (cVar1 = CheckLeaveAbility(1), cVar1 != '\0')) &&
     (cVar1 = TimerDone(0x10), cVar1 != '\0')) {
    PushAllUnitsAway(1);
    (*pcVar6)(9,0);
    (*pcVar6)(10,1);
  }
  SelectUnits(&DAT_1000f2d0,0);
  cVar1 = Trigg(9);
  if ((cVar1 == '\0') && (iVar5 = GetNInside(1), iVar5 == 0)) {
    (*pcVar6)(9,1);
    SelectUnits(&DAT_1000f2a8,0);
    SelectUnits(&DAT_1000f2b0,1);
    SelectUnits(&DAT_1000f2d0,1);
    SelChangeNation(1,0);
    ShowPage(s__PAGE2602_1000c248);
    (*pcVar6)(0xe,0);
    (*pcVar4)(0x43);
    (*pcVar4)(0x48);
    EnableMission(0x45);
    EnableMission(0x4a);
  }
  ClearSelection(1);
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar5 = GetUnitsAmount0(&DAT_1000f288,0), iVar5 != 0)) {
    (*pcVar6)(0xb,0);
    ShowPage(s__PAGE2603_1000c23c);
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
     (iVar5 = GetUnitsAmount0(&DAT_1000f290,0), iVar5 != 0)) {
    (*pcVar6)(0xc,0);
    ShowPage(s__PAGE2604_1000c230);
    SelectUnits(&DAT_1000f280,0);
    SelChangeNation(4,0);
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0xd), cVar1 != '\0')) &&
     (iVar5 = GetUnitsAmount0(&DAT_1000f288,0), iVar5 != 0)) {
    iVar5 = GetUnitsAmount1(&DAT_1000f288,&DAT_1000f280);
    iVar2 = GetTotalAmount0(&DAT_1000f280);
    pcVar4 = DisableMission_exref;
    if (iVar2 == iVar5) {
      iVar5 = GetTotalAmount0(&DAT_1000f280);
      iVar2 = GetDiff(0);
      if (iVar5 <= iVar2 + 5) {
        ShowPage(s__PAGE2605_1000c224);
        (*pcVar6)(0xd,0);
      }
      iVar5 = GetTotalAmount0(&DAT_1000f280);
      iVar2 = GetDiff(0);
      if (iVar2 + 5 < iVar5) {
        iVar5 = GetTotalAmount0(&DAT_1000f280);
        iVar2 = GetDiff(0);
        if (iVar5 <= iVar2 + 10) {
          ShowPage(s__PAGE2606_1000c218);
          SelectUnits(&DAT_1000f280,0);
          SelChangeNation(0,4);
          SelectUnits(&DAT_1000f270,0);
          SelChangeNation(4,0);
          (*pcVar6)(0xd,0);
        }
      }
      iVar5 = GetTotalAmount0(&DAT_1000f280);
      iVar2 = GetDiff(0);
      pcVar4 = DisableMission_exref;
      if (iVar2 + 10 < iVar5) {
        ShowPage(s__PAGE2607_1000c20c);
        SelectUnits(&DAT_1000f278,0);
        SelChangeNation(4,0);
        SelectUnits(&DAT_1000f280,0);
        SelChangeNation(0,4);
        (*pcVar6)(0xd,0);
        pcVar4 = DisableMission_exref;
      }
    }
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage(s__PAGE2610_1000c200);
    ShowVictory();
  }
  cVar1 = NationIsErased(2);
  if (cVar1 != '\0') {
    (*pcVar4)(0x42);
    EnableMission(0x44);
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage(s__PAGE2608_1000c1f4);
    LooseGame();
  }
  iVar5 = GetTotalAmount0(&DAT_1000f2b0);
  if (((iVar5 == 0) && (iVar5 = GetTotalAmount0(&DAT_1000f2d0), iVar5 == 0)) &&
     (cVar1 = Trigg(0xe), cVar1 != '\0')) {
    ShowPage(s__PAGE2609_1000c1e8);
    LooseGame();
  }
  ClearSelection(0);
  SelectUnits(&DAT_1000f4a8,0);
  return;
}



// Function: FUN_10001dd0 @ 0x10001dd0

void __cdecl
FUN_10001dd0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  int iVar2;
  
  cVar1 = Trigg(param_1);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar2 = FUN_10002100(param_2,param_3,(5 - iVar2) * 1000);
    if (iVar2 < 8) {
      if (iVar2 == 0) {
        iVar2 = GetDiff(0);
        ShowPageParam(s__PAGE2611_1000c284,(5 - iVar2) * 1000);
      }
      SetTrigg(param_1,0);
    }
    cVar1 = TimerDone(param_4);
    if (cVar1 != '\0') {
      FUN_10002190(param_2,param_5,param_6);
      RunTimer(param_4,300);
    }
  }
  return;
}



// Function: FUN_10001e90 @ 0x10001e90

bool __cdecl FUN_10001e90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1);
  while (iVar1 != 0) {
    RemoveUnitFromGroup(param_1,0);
    iVar1 = GetTotalAmount0(param_1);
  }
  iVar1 = GetTotalAmount0(param_1);
  return (bool)('\x01' - (iVar1 != 0));
}



// Function: FUN_10001ed0 @ 0x10001ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10001ed0(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  unkbyte10 extraout_ST0;
  longlong lVar6;
  undefined4 uVar7;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined4 uStack_30;
  uint auStack_2c [11];
  
  iVar1 = GetTotalAmount0(param_1);
  if (param_3 < iVar1) {
    puVar2 = (uint *)(iVar1 - param_3);
  }
  else {
    puVar2 = (uint *)0x0;
  }
  uStack_30 = 0x4000000a;
  uStack_34 = 0;
  uStack_32 = 0;
  if (puVar2 != (uint *)0x0) {
    ClearSelection(param_2);
    SelectUnits(param_1,0);
    SaveSelectedUnits(param_2,param_5,0);
    param_1 = puVar2;
    if (0 < (int)puVar2) {
      do {
        iVar1 = GetTotalAmount0(param_5);
        iVar3 = _rand();
        RemoveUnitFromGroup(param_5,iVar3 % iVar1);
        param_1 = (uint *)((int)param_1 + -1);
      } while (param_1 != (uint *)0x0);
    }
  }
  iVar1 = GetTotalAmount0(param_5);
  puVar2 = operator_new(iVar1 * 4);
  iVar3 = 0;
  param_1 = puVar2;
  if (0 < iVar1) {
    do {
      GetUnitInfo(param_5,iVar3,auStack_2c);
      *param_1 = auStack_2c[0] & 0xffff;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_10001e90(param_5);
  puVar5 = puVar2;
  if (0 < iVar1) {
    do {
      InsertUnitToGroup(0,param_5,*puVar5);
      GetUnitInfo(param_5,0,auStack_2c);
      uVar4 = _rand();
      uVar4 = uVar4 & 0x800000ff;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffff00) + 1;
      }
      fcos((float10)(int)uVar4 * (float10)_DAT_1000a1d0 * (float10)_DAT_1000a1c8);
      lVar6 = __ftol();
      fsin(extraout_ST0);
      uStack_34 = (undefined2)lVar6;
      lVar6 = __ftol();
      uStack_32 = (undefined2)lVar6;
      ClearSelection(param_2);
      SelectUnits(param_5,0);
      uVar7 = 0;
      iVar3 = _rand();
      SelSendAndKill(param_2,&uStack_34,iVar3 % 0xfa,uVar7);
      FUN_10001e90(param_5);
      iVar1 = iVar1 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar1 != 0);
  }
  FUN_100025eb((undefined *)puVar2);
  return;
}



// Function: FUN_100020a0 @ 0x100020a0

void __fastcall FUN_100020a0(int param_1)

{
  RegisterFormation(param_1,s__ALONE_1000c194);
  RegisterUnitType(param_1 + 8,s_SUNDUK1O_UN__1000c2a0);
  RegisterUnitType(param_1 + 0x10,s_SUNDUK1Z_UN__1000c290);
  return;
}



// Function: FUN_100020e0 @ 0x100020e0

void __cdecl FUN_100020e0(int param_1,int param_2)

{
  CreateObject0(param_1 + 0x10,param_2,param_2 + 0x10,6,param_1,0);
  return;
}



// Function: FUN_10002100 @ 0x10002100

int __cdecl FUN_10002100(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 8;
  iVar1 = GetTotalAmount0(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      if (iVar3 != 8) {
        return iVar3;
      }
      iVar2 = GetUnitsAmount0(param_1,iVar1);
      if (iVar2 != 0) {
        AddResource(iVar1,1,param_3);
        SelectUnits(param_1 + 0x10,0);
        SelErase(6);
        CreateObject0(param_1 + 0x10,param_2,param_2 + 8,6,param_1,0);
        iVar3 = iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
  }
  return iVar3;
}



// Function: FUN_10002190 @ 0x10002190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10002190(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined4 uStack_30;
  uint auStack_2c [11];
  
  iVar1 = param_1 + 8;
  iVar3 = GetTotalAmount0(iVar1);
  if (iVar3 != 0) {
    iVar5 = 0;
    uStack_34 = 0;
    uStack_32 = 0;
    uStack_30 = 0x4000000a;
    iVar3 = GetTotalAmount0(iVar1);
    if (0 < iVar3) {
      do {
        FUN_10001e90(param_2);
        GetUnitInfo(iVar1,iVar5,auStack_2c);
        InsertUnitToGroup(0,param_2,auStack_2c[0] & 0xffff);
        uVar4 = _rand();
        uVar4 = uVar4 & 0x800000ff;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xffffff00) + 1;
        }
        fVar2 = (float)(int)uVar4 * (float)_DAT_1000a1d0 * (float)_DAT_1000a1c8;
        _rand();
        GetZoneCoor(param_1,auStack_3c,auStack_38);
        fcos((float10)fVar2);
        lVar6 = __ftol();
        fsin((float10)fVar2);
        uStack_34 = (undefined2)lVar6;
        lVar6 = __ftol();
        uStack_32 = (undefined2)lVar6;
        SelectUnits(param_2,0);
        uVar7 = 0;
        iVar3 = _rand();
        SelSendAndKill(param_3,&uStack_34,iVar3 % 0xff,uVar7);
        iVar5 = iVar5 + 1;
        iVar3 = GetTotalAmount0(iVar1);
      } while (iVar5 < iVar3);
    }
  }
  return;
}



// Function: FUN_100022e0 @ 0x100022e0

void __fastcall FUN_100022e0(int param_1)

{
  RegisterDynGroup(param_1 + 0xd);
  RegisterVar(param_1 + 0xd,8);
  RegisterDynGroup(param_1 + 0x15);
  RegisterVar(param_1 + 0x15,8);
  RegisterVar(param_1 + 4,4);
  RegisterVar(param_1,4);
  return;
}



// Function: FUN_10002320 @ 0x10002320

void __thiscall FUN_10002320(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)this + 0x15;
  FUN_10001e90(iVar1);
  iVar2 = _rand();
  CreateObject0(iVar1,param_2,param_1,
                CONCAT31((int3)((uint)(iVar2 / 0xff) >> 8),*(undefined1 *)((int)this + 4)),
                (int)this + 5,iVar2 % 0xff);
  RemoveGroup(iVar1,(int)this + 0xd);
  return;
}



// Function: FUN_10002370 @ 0x10002370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10002370(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined4 uStack_30;
  uint auStack_2c [11];
  
  puVar1 = param_1 + 0xd;
  iVar5 = GetTotalAmount0(puVar1);
  if (iVar5 != 0) {
    cVar4 = TimerDone(*param_1);
    if (cVar4 != '\0') {
      iVar7 = 0;
      uStack_34 = 0;
      uStack_32 = 0;
      uStack_30 = 0x40000064;
      iVar5 = GetTotalAmount0(puVar1);
      if (0 < iVar5) {
        puVar2 = param_1 + 0x15;
        do {
          FUN_10001e90(puVar2);
          GetUnitInfo(puVar1,iVar7,auStack_2c);
          InsertUnitToGroup(0,puVar2,auStack_2c[0] & 0xffff);
          uVar6 = _rand();
          uVar6 = uVar6 & 0x800000ff;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
          }
          fVar3 = (float)(int)uVar6 * (float)_DAT_1000a1d0 * (float)_DAT_1000a1c8;
          _rand();
          GetZoneCoor(param_1 + 5,auStack_3c,auStack_38);
          fcos((float10)fVar3);
          lVar8 = __ftol();
          fsin((float10)fVar3);
          uStack_34 = (undefined2)lVar8;
          lVar8 = __ftol();
          uStack_32 = (undefined2)lVar8;
          SelectUnits(puVar2,0);
          uVar9 = 0;
          iVar5 = _rand();
          SelSendAndKill(CONCAT31((int3)((uint)(iVar5 / 0xff) >> 8),param_1[4]),&uStack_34,
                         iVar5 % 0xff,uVar9);
          iVar7 = iVar7 + 1;
          iVar5 = GetTotalAmount0(puVar1);
        } while (iVar7 < iVar5);
      }
      RunTimer(*param_1,800);
    }
  }
  return;
}



// Function: FUN_100024e0 @ 0x100024e0

void __cdecl FUN_100024e0(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10002a16();
  pDVar1[5] = param_1;
  return;
}



// Function: _rand @ 0x100024ed

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_10002a16();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



// Function: FUN_1000250f @ 0x1000250f

void __cdecl FUN_1000250f(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_1000f4d0._2_2_) {
    if (local_24.wHour == (WORD)DAT_1000f4d0) {
      if (local_24.wDay == DAT_1000f4cc._2_2_) {
        if (local_24.wMonth == DAT_1000f4c8._2_2_) {
          if (local_24.wYear == (WORD)DAT_1000f4c8) goto LAB_100025b9;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_1000f4c0 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_1000f4c0 = 1;
  }
  else {
    DAT_1000f4c0 = 0;
  }
  DAT_1000f4c8._0_2_ = local_24.wYear;
  DAT_1000f4c8._2_2_ = local_24.wMonth;
  DAT_1000f4cc._0_2_ = local_24.wDayOfWeek;
  DAT_1000f4cc._2_2_ = local_24.wDay;
  DAT_1000f4d0._0_2_ = local_24.wHour;
  DAT_1000f4d0._2_2_ = local_24.wMinute;
  DAT_1000f4d4._0_2_ = local_24.wSecond;
  DAT_1000f4d4._2_2_ = local_24.wMilliseconds;
LAB_100025b9:
  iVar2 = FUN_10002b1d((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_1000f4c0);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}



// Function: FUN_100025eb @ 0x100025eb

void __cdecl FUN_100025eb(undefined *param_1)

{
  FUN_10002bdf(param_1);
  return;
}



// Function: __global_unwind2 @ 0x100025f8

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10002610,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000263a

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
  puStack_18 = &LAB_10002618;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100026ce();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: __NLG_Notify1 @ 0x100026c5

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1000c2bc = param_1;
  DAT_1000c2b8 = in_EAX;
  DAT_1000c2c0 = unaff_EBP;
  return;
}



// Function: FUN_100026ce @ 0x100026ce

void FUN_100026ce(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000c2bc = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000c2b8 = in_EAX;
  DAT_1000c2c0 = unaff_EBP;
  return;
}



// Function: operator_new @ 0x100026e6

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



// Function: FUN_100026f4 @ 0x100026f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100026f4(void)

{
  void *extraout_ECX;
  
  FUN_1000270c();
  _DAT_1000f4dc = FUN_10002f07();
  FUN_10002eb7(extraout_ECX);
  return;
}



// Function: FUN_1000270c @ 0x1000270c

void FUN_1000270c(void)

{
  PTR_LAB_1000c2f8 = &LAB_10002f8a;
  PTR_LAB_1000c2f4 = __cfltcvt;
  PTR_LAB_1000c2fc = __fassign;
  PTR_LAB_1000c300 = FUN_10002f30;
  PTR_LAB_1000c304 = &LAB_10002fd8;
  PTR_LAB_1000c308 = __cfltcvt;
  return;
}



// Function: __ftol @ 0x10002744

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Function: FUN_1000276b @ 0x1000276b

undefined4 __cdecl FUN_1000276b(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10003412((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10003464((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



// Function: __fclose_lk @ 0x1000279c

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_100035ef((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_100034b6(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_10002bdf(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



// Function: FUN_100027e8 @ 0x100027e8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100027e8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000f504 = GetVersion();
    iVar1 = FUN_10003fd3(1);
    if (iVar1 != 0) {
      _DAT_1000f510 = DAT_1000f504 >> 8 & 0xff;
      _DAT_1000f50c = DAT_1000f504 & 0xff;
      DAT_1000f504 = DAT_1000f504 >> 0x10;
      _DAT_1000f508 = _DAT_1000f50c * 0x100 + _DAT_1000f510;
      iVar1 = FUN_10002991();
      if (iVar1 != 0) {
        DAT_10010be4 = GetCommandLineA();
        DAT_1000f4e4 = FUN_10003d2c();
        FUN_10003816();
        FUN_10003adf();
        FUN_10003a26();
        FUN_100036f8();
        DAT_1000f4e0 = DAT_1000f4e0 + 1;
        goto LAB_100028bb;
      }
      FUN_10004030();
    }
LAB_10002848:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000f4e0 < 1) goto LAB_10002848;
      DAT_1000f4e0 = DAT_1000f4e0 + -1;
      if (DAT_1000f53c == 0) {
        FUN_10003736();
      }
      FUN_100039d2();
      FUN_100029e5();
      FUN_10004030();
    }
    else if (param_2 == 3) {
      FUN_10002a7d((undefined *)0x0);
    }
LAB_100028bb:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100028c1

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000f4e0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10002909;
    if ((DAT_10010be8 != (code *)0x0) &&
       (iVar2 = (*DAT_10010be8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100027e8(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10002909:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100027e8(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100027e8(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10010be8 != (code *)0x0) {
      iVar2 = (*DAT_10010be8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x1000295e

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000f4ec == 1) || ((DAT_1000f4ec == 0 && (DAT_1000f4f0 == 1)))) {
    FUN_100040d8();
  }
  FUN_10004111(param_1);
  (*(code *)PTR___exit_1000c2d8)(0xff);
  return;
}



// Function: FUN_10002991 @ 0x10002991

undefined4 FUN_10002991(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100043a1();
  DAT_1000c2dc = TlsAlloc();
  if (DAT_1000c2dc != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10004264(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000c2dc,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10002a03((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_100029e5 @ 0x100029e5

void FUN_100029e5(void)

{
  FUN_100043ca();
  if (DAT_1000c2dc != 0xffffffff) {
    TlsFree(DAT_1000c2dc);
    DAT_1000c2dc = 0xffffffff;
  }
  return;
}



// Function: FUN_10002a03 @ 0x10002a03

void __cdecl FUN_10002a03(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000c710;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10002a16 @ 0x10002a16

DWORD * FUN_10002a16(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000c2dc);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10004264(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000c2dc,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10002a03((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10002a71;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10002a71:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_10002a7d @ 0x10002a7d

void __cdecl FUN_10002a7d(undefined *param_1)

{
  if (DAT_1000c2dc != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1000c2dc), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10002bdf(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10002bdf(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10002bdf(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10002bdf(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10002bdf(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10002bdf(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1000c710) {
        FUN_10002bdf(*(undefined **)(param_1 + 0x50));
      }
      FUN_10002bdf(param_1);
    }
    TlsSetValue(DAT_1000c2dc,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10002b1d @ 0x10002b1d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_10002b1d(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

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
    iVar4 = *(int *)(&DAT_1000c87c + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_100044ac();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5)
            * 0x3c + DAT_1000c798 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_1000c79c != 0)) &&
        (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_10004761(local_28),
        CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + _DAT_1000c7a0;
    }
  }
  return iVar2;
}



// Function: FUN_10002bdf @ 0x10002bdf

void __cdecl FUN_10002bdf(undefined *param_1)

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
  puStack_c = &DAT_1000a1d8;
  puStack_10 = &LAB_10005c8c;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1000faa8 == 3) {
    ExceptionList = &local_14;
    FUN_10004436(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10004ab6((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10004ae1(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10002c49();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000faa8 != 2) goto LAB_10002cab;
    ExceptionList = &local_14;
    FUN_10004436(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10005811(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10005868(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10002ca1();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10002cab:
  HeapFree(DAT_1000faa4,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10002c49 @ 0x10002c49

void FUN_10002c49(void)

{
  FUN_10004497(9);
  return;
}



// Function: FUN_10002ca1 @ 0x10002ca1

void FUN_10002ca1(void)

{
  FUN_10004497(9);
  return;
}



// Function: __CallSettingFrame@12 @ 0x10002cd0

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



// Function: FUN_10002d1c @ 0x10002d1c

void FUN_10002d1c(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000a1f0;
  puStack_10 = &LAB_10005c8c;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10002a16();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10002a16();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_100061a5();
  return;
}



// Function: _malloc @ 0x10002d7d

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000f774);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10002d8f

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10002dbb((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_100061bc(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10002dbb @ 0x10002dbb

void __cdecl FUN_10002dbb(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000a208;
  puStack_10 = &LAB_10005c8c;
  local_14 = ExceptionList;
  if (DAT_1000faa8 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1000faa0) {
      ExceptionList = &local_14;
      FUN_10004436(9);
      local_8 = 0;
      piVar1 = FUN_10004e0a(param_1);
      local_8 = 0xffffffff;
      FUN_10002e22();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000faa8 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1000e8dc) {
        ExceptionList = &local_14;
        FUN_10004436(9);
        local_8 = 1;
        piVar1 = FUN_100058ad(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10002e81();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10002e9a;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10002e9a:
  HeapAlloc(DAT_1000faa4,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10002e22 @ 0x10002e22

void FUN_10002e22(void)

{
  FUN_10004497(9);
  return;
}



// Function: FUN_10002e81 @ 0x10002e81

void FUN_10002e81(void)

{
  FUN_10004497(9);
  return;
}



// Function: FUN_10002eb7 @ 0x10002eb7

void __fastcall FUN_10002eb7(void *param_1)

{
  FUN_1000620c(param_1,0x10000,0x30000);
  return;
}



// Function: FUN_10002ec9 @ 0x10002ec9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002ec9(void)

{
  if (_DAT_1000a220 < _DAT_1000a228 - (_DAT_1000a228 / _DAT_1000a230) * _DAT_1000a230) {
    return 1;
  }
  return 0;
}



// Function: FUN_10002f07 @ 0x10002f07

void FUN_10002f07(void)

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
  FUN_10002ec9();
  return;
}



// Function: FUN_10002f30 @ 0x10002f30

void __cdecl FUN_10002f30(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_100063b2((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1000e8e0 < 2) {
        uVar3 = (byte)PTR_DAT_1000e8ec[*param_1 * 2] & 4;
        this = PTR_DAT_1000e8ec;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1000633d(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1000e8e4;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __fassign @ 0x10002ff0

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
    FUN_1000687e(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_100068ab(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// Function: FUN_1000302e @ 0x1000302e

undefined1 * __cdecl FUN_1000302e(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_1000694f((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_100068d8(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_1000308f(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// Function: FUN_1000308f @ 0x1000308f

undefined1 * __cdecl
FUN_1000308f(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_10003331(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_1000e8e4;
  }
  puVar3 = FUN_10006a70((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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



// Function: FUN_10003151 @ 0x10003151

char * __cdecl FUN_10003151(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000694f((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_100068d8(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_100031a6(param_2,param_3,&local_14,'\0');
  return param_2;
}



// Function: FUN_100031a6 @ 0x100031a6

char * __cdecl FUN_100031a6(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_10003331(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_10003331(pcVar3,1);
    *pcVar3 = DAT_1000e8e4;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_10003331(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_1000324d @ 0x1000324d

void __cdecl FUN_1000324d(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000694f((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_100068d8(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_1000308f(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_100031a6(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x100032e0

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_1000302e(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10003151(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_1000324d(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// Function: FUN_10003331 @ 0x10003331

void __cdecl FUN_10003331(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10005e70((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_10003412 @ 0x10003412

void __cdecl FUN_10003412(uint param_1)

{
  if ((0x1000c30f < param_1) && (param_1 < 0x1000c571)) {
    FUN_10004436(((int)(param_1 + 0xefff3cf0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10003441 @ 0x10003441

void __cdecl FUN_10003441(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10004436(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_10003464 @ 0x10003464

void __cdecl FUN_10003464(uint param_1)

{
  if ((0x1000c30f < param_1) && (param_1 < 0x1000c571)) {
    FUN_10004497(((int)(param_1 + 0xefff3cf0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10003493 @ 0x10003493

void __cdecl FUN_10003493(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10004497(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_100034b6 @ 0x100034b6

undefined4 __cdecl FUN_100034b6(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000fbc0) &&
     ((*(byte *)((&DAT_1000fac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10006e0b(param_1);
    uVar1 = FUN_10003513(param_1);
    FUN_10006e6a(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10006d38();
  *pDVar2 = 9;
  pDVar2 = FUN_10006d41();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10003513 @ 0x10003513

undefined4 __cdecl FUN_10003513(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10006dc9(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10006dc9(2);
      iVar2 = FUN_10006dc9(1);
      if (iVar2 == iVar1) goto LAB_10003561;
    }
    hObject = (HANDLE)FUN_10006dc9(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10003563;
    }
  }
LAB_10003561:
  DVar4 = 0;
LAB_10003563:
  FUN_10006d4a(param_1);
  *(undefined1 *)((&DAT_1000fac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10006cc5(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: __freebuf @ 0x10003596

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_10002bdf(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Function: FUN_100035c1 @ 0x100035c1

int __cdecl FUN_100035c1(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100035ef(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_10006e8c(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_100035ef @ 0x100035ef

undefined4 __cdecl FUN_100035ef(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10006f1f(param_1[4],(char *)param_1[2],uVar3);
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



// Function: FUN_10003654 @ 0x10003654

int __cdecl FUN_10003654(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10004436(2);
  iVar4 = 0;
  if (0 < DAT_10010be0) {
    do {
      iVar2 = *(int *)(DAT_1000fbd4 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10003441(iVar4,iVar2);
        piVar1 = *(int **)(DAT_1000fbd4 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_100035c1(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_100035c1(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10003493(iVar4,*(int *)(DAT_1000fbd4 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10010be0);
  }
  FUN_10004497(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_100036f8 @ 0x100036f8

void FUN_100036f8(void)

{
  if (PTR_FUN_1000c2cc != (undefined *)0x0) {
    (*(code *)PTR_FUN_1000c2cc)();
  }
  FUN_100037fc((undefined4 *)&DAT_1000c02c,(undefined4 *)&DAT_1000c03c);
  FUN_100037fc((undefined4 *)&DAT_1000c000,(undefined4 *)&DAT_1000c028);
  return;
}



// Function: __exit @ 0x10003725

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10003745(_Code,1,0);
  return;
}



// Function: FUN_10003736 @ 0x10003736

void FUN_10003736(void)

{
  FUN_10003745(0,0,1);
  return;
}



// Function: FUN_10003745 @ 0x10003745

void __cdecl FUN_10003745(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100037ea();
  if (DAT_1000f540 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000f53c = 1;
  DAT_1000f538 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000fbd0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000fbcc - 4), DAT_1000fbd0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000fbd0 <= puVar1);
    }
    FUN_100037fc((undefined4 *)&DAT_1000c040,(undefined4 *)&DAT_1000c048);
  }
  FUN_100037fc((undefined4 *)&DAT_1000c04c,(undefined4 *)&DAT_1000c054);
  if (param_3 == 0) {
    DAT_1000f540 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100037f3();
  return;
}



// Function: FUN_100037ea @ 0x100037ea

void FUN_100037ea(void)

{
  FUN_10004436(0xd);
  return;
}



// Function: FUN_100037f3 @ 0x100037f3

void FUN_100037f3(void)

{
  FUN_10004497(0xd);
  return;
}



// Function: FUN_100037fc @ 0x100037fc

void __cdecl FUN_100037fc(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10003816 @ 0x10003816

void FUN_10003816(void)

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
  DAT_1000fbc0 = 0x20;
  DAT_1000fac0 = puVar2;
  for (; puVar2 < DAT_1000fac0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000fbc0 < (int)UVar8) {
      puVar2 = &DAT_1000fac4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000fbc0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000fbc0 = DAT_1000fbc0 + 0x20;
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
      } while ((int)DAT_1000fbc0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000fac0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000fac0 + iVar6 * 9;
    if (DAT_1000fac0[iVar6 * 9] == -1) {
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
          goto LAB_100039bb;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_100039bb:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000fbc0);
      return;
    }
  } while( true );
}



// Function: FUN_100039d2 @ 0x100039d2

void FUN_100039d2(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000fac0;
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
      FUN_10002bdf((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000fbc0);
  return;
}



// Function: FUN_10003a26 @ 0x10003a26

void FUN_10003a26(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000fbc8 == 0) {
    FUN_100075cd();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000f4e4; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_1000f520 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000f4e4;
  puVar6 = DAT_1000f4e4;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10006a70((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10002bdf((undefined *)DAT_1000f4e4);
  DAT_1000f4e4 = (uint *)0x0;
  *puVar3 = 0;
  DAT_1000fbc4 = 1;
  return;
}



// Function: FUN_10003adf @ 0x10003adf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003adf(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000fbc8 == 0) {
    FUN_100075cd();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000f544,0x104);
  _DAT_1000f530 = &DAT_1000f544;
  pbVar2 = &DAT_1000f544;
  if (*DAT_10010be4 != 0) {
    pbVar2 = DAT_10010be4;
  }
  FUN_10003b78(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10003b78(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000f518 = puVar1;
  _DAT_1000f514 = local_8 + -1;
  return;
}



// Function: FUN_10003b78 @ 0x10003b78

void __cdecl FUN_10003b78(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000f980 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000f980 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10003c23;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10003c23:
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
          if ((*(byte *)((int)&DAT_1000f980 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000f980 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10003d2c @ 0x10003d2c

LPSTR FUN_10003d2c(void)

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
  if (DAT_1000f648 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000f648 = 1;
LAB_10003d83:
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
        FUN_10002bdf(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000f648 = 2;
  }
  else {
    if (DAT_1000f648 == 1) goto LAB_10003d83;
    if (DAT_1000f648 != 2) {
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
    FUN_100075f0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10003e5e @ 0x10003e5e

void __cdecl FUN_10003e5e(undefined4 *param_1)

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



// Function: FUN_10003e8b @ 0x10003e8b

int FUN_10003e8b(void)

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
  
  FUN_10007ce0();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x1b;
    aCStackY_18[1] = '>';
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
      aCStackY_18[0] = '#';
      aCStackY_18[1] = '?';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = 'E';
        aCStackY_18[1] = '?';
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
        aCStackY_18[0] = -0x55;
        aCStackY_18[1] = '?';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10007925(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10003e5e((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_10003fd3 @ 0x10003fd3

undefined4 __cdecl FUN_10003fd3(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1000faa4 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000faa4 != (HANDLE)0x0) {
    DAT_1000faa8 = FUN_10003e8b();
    if (DAT_1000faa8 == 3) {
      ppuVar1 = (undefined **)FUN_10004a6e(0x3f8);
    }
    else {
      if (DAT_1000faa8 != 2) {
        return 1;
      }
      ppuVar1 = FUN_100055b5();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1000faa4);
  }
  return 0;
}



// Function: FUN_10004030 @ 0x10004030

void FUN_10004030(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1000faa8 == 3) {
    iVar1 = 0;
    if (0 < DAT_1000fa98) {
      puVar2 = (undefined4 *)((int)DAT_1000fa9c + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1000faa4,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1000fa98);
    }
    HeapFree(DAT_1000faa4,0,DAT_1000fa9c);
  }
  else if (DAT_1000faa8 == 2) {
    ppuVar3 = &PTR_LOOP_1000c8b8;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000c8b8);
  }
  HeapDestroy(DAT_1000faa4);
  return;
}



// Function: FUN_100040d8 @ 0x100040d8

void FUN_100040d8(void)

{
  if ((DAT_1000f4ec == 1) || ((DAT_1000f4ec == 0 && (DAT_1000f4f0 == 1)))) {
    FUN_10004111(0xfc);
    if (DAT_1000f64c != (code *)0x0) {
      (*DAT_1000f64c)();
    }
    FUN_10004111(0xff);
  }
  return;
}



// Function: FUN_10004111 @ 0x10004111

void __cdecl FUN_10004111(DWORD param_1)

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
  pDVar2 = &DAT_1000c5c0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000c650);
  if (param_1 == (&DAT_1000c5c0)[iVar5 * 2]) {
    if ((DAT_1000f4ec == 1) || ((DAT_1000f4ec == 0 && (DAT_1000f4f0 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000c5c4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10006a70(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10006a70(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10006a80(local_a4,_Dest);
      FUN_10006a80(local_a4,(uint *)&DAT_1000c2b0);
      FUN_10006a80(local_a4,*(uint **)(iVar5 * 8 + 0x1000c5c4));
      auStackY_1e3._3_4_ = 0x10004235;
      FUN_10007d0f(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10004264 @ 0x10004264

int * __cdecl FUN_10004264(int param_1,int param_2)

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
  puStack_c = &DAT_1000a600;
  puStack_10 = &LAB_10005c8c;
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
      if (DAT_1000faa8 == 3) {
        if (puVar2 <= DAT_1000faa0) {
          FUN_10004436(9);
          local_8 = 0;
          local_24 = FUN_10004e0a(puVar2);
          local_8 = 0xffffffff;
          FUN_100042fd();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10004351;
LAB_10004340:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1000434c:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1000faa8 != 2) || (DAT_1000e8dc < puVar3)) goto LAB_1000434c;
        FUN_10004436(9);
        local_8 = 1;
        local_24 = FUN_100058ad((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10004386();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10004340;
      }
LAB_10004351:
      local_24 = HeapAlloc(DAT_1000faa4,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1000f774 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_100061bc(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_100042fd @ 0x100042fd

void FUN_100042fd(void)

{
  FUN_10004497(9);
  return;
}



// Function: FUN_10004386 @ 0x10004386

void FUN_10004386(void)

{
  FUN_10004497(9);
  return;
}



// Function: FUN_100043a1 @ 0x100043a1

void FUN_100043a1(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c694);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c684);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c674);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c654);
  return;
}



// Function: FUN_100043ca @ 0x100043ca

void FUN_100043ca(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000c650;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000c694)) && (ppuVar1 != &PTR_DAT_1000c684)) &&
       ((ppuVar1 != &PTR_DAT_1000c674 && (ppuVar1 != &PTR_DAT_1000c654)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10002bdf(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000c710);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c674);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c684);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c694);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c654);
  return;
}



// Function: FUN_10004436 @ 0x10004436

void __cdecl FUN_10004436(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000c650 + param_1;
  if ((&DAT_1000c650)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10004436(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10002bdf((undefined *)lpCriticalSection);
    }
    FUN_10004497(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10004497 @ 0x10004497

void __cdecl FUN_10004497(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000c650)[param_1]);
  return;
}



// Function: FUN_100044ac @ 0x100044ac

void FUN_100044ac(void)

{
  if (DAT_1000f768 == 0) {
    FUN_10004436(0xb);
    if (DAT_1000f768 == 0) {
      FUN_100044da();
      DAT_1000f768 = DAT_1000f768 + 1;
    }
    FUN_10004497(0xb);
  }
  return;
}



// Function: FUN_100044da @ 0x100044da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100044da(void)

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
  
  FUN_10004436(0xc);
  DAT_1000c840 = 0xffffffff;
  DAT_1000c830 = 0xffffffff;
  DAT_1000f6b0 = 0;
  _Str1 = (uint *)FUN_10007f29("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10004497(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1000f6b8);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_1000c798 = (void *)(DAT_1000f6b8 * 0x3c);
    DAT_1000f6b0 = 1;
    if (DAT_1000f6fe != 0) {
      DAT_1000c798 = (void *)((int)DAT_1000c798 + DAT_1000f70c * 0x3c);
    }
    if ((DAT_1000f752 == 0) || (DAT_1000f760 == 0)) {
      DAT_1000c79c = 0;
      _DAT_1000c7a0 = 0;
    }
    else {
      DAT_1000c79c = 1;
      _DAT_1000c7a0 = (DAT_1000f760 - DAT_1000f70c) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_1000f7a8,0x220,(LPCWSTR)&DAT_1000f6bc,-1,PTR_DAT_1000c824,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_1000c824 = 0;
    }
    else {
      PTR_DAT_1000c824[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_1000f7a8,0x220,(LPCWSTR)&DAT_1000f710,-1,PTR_DAT_1000c828,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_1000c828[0x3f] = 0;
      return;
    }
LAB_1000474b:
    *PTR_DAT_1000c828 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_1000f764 == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_1000f764), iVar4 != 0)))) {
      FUN_10002bdf((undefined *)DAT_1000f764);
      sVar5 = _strlen((char *)_Str1);
      DAT_1000f764 = _malloc(sVar5 + 1);
      if (DAT_1000f764 != (uint *)0x0) {
        FUN_10006a70(DAT_1000f764,_Str1);
        FUN_10004497(0xc);
        _strncpy(PTR_DAT_1000c824,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_1000c824[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_10007e9e(this,(byte *)_Source);
        DAT_1000c798 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_10007e9e(DAT_1000c798,(byte *)_Source);
          DAT_1000c798 = (void *)((int)DAT_1000c798 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_10007e9e(DAT_1000c798,(byte *)_Source);
            DAT_1000c798 = (void *)((int)DAT_1000c798 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_1000c798 = (void *)-(int)DAT_1000c798;
        }
        DAT_1000c79c = (int)(char)*_Source;
        if (DAT_1000c79c != 0) {
          _strncpy(PTR_DAT_1000c828,(char *)_Source,3);
          PTR_DAT_1000c828[3] = 0;
          return;
        }
        goto LAB_1000474b;
      }
    }
    FUN_10004497(0xc);
  }
  return;
}



// Function: FUN_10004761 @ 0x10004761

bool __cdecl FUN_10004761(int *param_1)

{
  bool bVar1;
  
  FUN_10004436(0xb);
  bVar1 = FUN_10004782(param_1);
  FUN_10004497(0xb);
  return bVar1;
}



// Function: FUN_10004782 @ 0x10004782

bool __cdecl FUN_10004782(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_1000c79c != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_1000c830) || (uVar5 != DAT_1000c840)) {
      if (DAT_1000f6b0 == 0) {
        FUN_1000492e(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_1000492e(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_1000f750 != 0) {
          uVar6 = (uint)DAT_1000f756;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_1000f754;
          uVar6 = 0;
          uVar4 = (uint)DAT_1000f756;
        }
        FUN_1000492e(1,(uint)(DAT_1000f750 == 0),uVar5,(uint)DAT_1000f752,uVar4,uVar3,uVar6,
                     (uint)DAT_1000f758,(uint)DAT_1000f75a,(uint)DAT_1000f75c,(uint)DAT_1000f75e);
        if (DAT_1000f6fc != 0) {
          uVar6 = (uint)DAT_1000f702;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_1000f700;
          uVar6 = 0;
          uVar4 = (uint)DAT_1000f702;
          uVar5 = param_1[5];
        }
        FUN_1000492e(0,(uint)(DAT_1000f6fc == 0),uVar5,(uint)DAT_1000f6fe,uVar4,uVar3,uVar6,
                     (uint)DAT_1000f704,(uint)DAT_1000f706,(uint)DAT_1000f708,(uint)DAT_1000f70a);
      }
    }
    iVar1 = param_1[7];
    if (DAT_1000c834 < DAT_1000c844) {
      if ((DAT_1000c834 <= iVar1) && (iVar1 <= DAT_1000c844)) {
        if ((DAT_1000c834 < iVar1) && (iVar1 < DAT_1000c844)) {
          return true;
        }
LAB_100048fa:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_1000c834) {
          return DAT_1000c838 <= iVar2;
        }
        return iVar2 < DAT_1000c848;
      }
    }
    else {
      if (iVar1 < DAT_1000c844) {
        return true;
      }
      if (DAT_1000c834 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_1000c844) || (DAT_1000c834 <= iVar1)) goto LAB_100048fa;
    }
  }
  return false;
}



// Function: FUN_1000492e @ 0x1000492e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1000492e(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_1000c848)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_1000c87c + param_4 * 4);
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
        iVar2 = *(int *)(&DAT_1000c84c + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_1000c880 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_1000c848)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_1000c87c + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_1000c830 = param_3;
    DAT_1000c838 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_1000c834 = iVar1;
  }
  else {
    DAT_1000c848 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_1000c7a0 + param_10) * 1000 + param_11;
    if (DAT_1000c848 < 0) {
      DAT_1000c848 = DAT_1000c848 + 86400000;
      DAT_1000c844 = iVar1 + -1;
    }
    else {
      DAT_1000c844 = iVar1;
      if (86399999 < DAT_1000c848) {
        DAT_1000c848 = DAT_1000c848 + -86400000;
        DAT_1000c844 = iVar1 + 1;
      }
    }
    DAT_1000c840 = param_3;
  }
  return;
}



// Function: FUN_10004a6e @ 0x10004a6e

undefined4 __cdecl FUN_10004a6e(undefined4 param_1)

{
  DAT_1000fa9c = HeapAlloc(DAT_1000faa4,0,0x140);
  if (DAT_1000fa9c == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000fa94 = 0;
  DAT_1000fa98 = 0;
  DAT_1000fa90 = DAT_1000fa9c;
  DAT_1000faa0 = param_1;
  DAT_1000fa88 = 0x10;
  return 1;
}



// Function: FUN_10004ab6 @ 0x10004ab6

uint __cdecl FUN_10004ab6(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000fa9c;
  while( true ) {
    if (DAT_1000fa9c + DAT_1000fa98 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_10004ae1 @ 0x10004ae1

void __cdecl FUN_10004ae1(uint *param_1,int param_2)

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
      if (DAT_1000fa94 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1000fa8c * 0x8000 + DAT_1000fa94[3]),0x8000,0x4000);
        DAT_1000fa94[2] = DAT_1000fa94[2] | 0x80000000U >> ((byte)DAT_1000fa8c & 0x1f);
        *(undefined4 *)(DAT_1000fa94[4] + 0xc4 + DAT_1000fa8c * 4) = 0;
        *(char *)(DAT_1000fa94[4] + 0x43) = *(char *)(DAT_1000fa94[4] + 0x43) + -1;
        if (*(char *)(DAT_1000fa94[4] + 0x43) == '\0') {
          DAT_1000fa94[1] = DAT_1000fa94[1] & 0xfffffffe;
        }
        if (DAT_1000fa94[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1000fa94[3],0,0x8000);
          HeapFree(DAT_1000faa4,0,(LPVOID)DAT_1000fa94[4]);
          FUN_10005e70(DAT_1000fa94,DAT_1000fa94 + 5,
                       (DAT_1000fa98 * 0x14 - (int)DAT_1000fa94) + -0x14 + DAT_1000fa9c);
          DAT_1000fa98 = DAT_1000fa98 + -1;
          if (DAT_1000fa94 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1000fa90 = DAT_1000fa9c;
        }
      }
      DAT_1000fa94 = param_1;
      DAT_1000fa8c = uVar14;
    }
  }
  return;
}



// Function: FUN_10004e0a @ 0x10004e0a

int * __cdecl FUN_10004e0a(uint *param_1)

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
  
  puVar8 = DAT_1000fa9c + DAT_1000fa98 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000fa90;
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
  puVar11 = DAT_1000fa9c;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000fa90 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000fa90) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000fa9c;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000fa90 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000fa90) && (param_1 = FUN_10005113(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100051c4((int)param_1);
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
  DAT_1000fa90 = param_1;
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
    if (iVar9 == 0) goto LAB_100050d0;
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
LAB_100050d0:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000fa94)) && (local_8 == DAT_1000fa8c)) {
    DAT_1000fa94 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10005113 @ 0x10005113

undefined4 * FUN_10005113(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000fa98 == DAT_1000fa88) {
    pvVar2 = HeapReAlloc(DAT_1000faa4,0,DAT_1000fa9c,(DAT_1000fa88 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000fa88 = DAT_1000fa88 + 0x10;
    DAT_1000fa9c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000fa9c + DAT_1000fa98 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000faa4,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000fa98 = DAT_1000fa98 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000faa4,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100051c4 @ 0x100051c4

int __cdecl FUN_100051c4(int param_1)

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



// Function: FUN_100052bf @ 0x100052bf

undefined4 __cdecl FUN_100052bf(uint *param_1,int param_2,int param_3)

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



// Function: FUN_100055b5 @ 0x100055b5

undefined ** FUN_100055b5(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000c8c8 == -1) {
    lpMem = &PTR_LOOP_1000c8b8;
  }
  else {
    lpMem = HeapAlloc(DAT_1000faa4,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000c8b8) {
        if (PTR_LOOP_1000c8b8 == (undefined *)0x0) {
          PTR_LOOP_1000c8b8 = (undefined *)&PTR_LOOP_1000c8b8;
        }
        if (PTR_LOOP_1000c8bc == (undefined *)0x0) {
          PTR_LOOP_1000c8bc = (undefined *)&PTR_LOOP_1000c8b8;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000c8b8;
        lpMem[1] = PTR_LOOP_1000c8bc;
        PTR_LOOP_1000c8bc = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1000c8b8) {
    HeapFree(DAT_1000faa4,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_100056f9 @ 0x100056f9

void __cdecl FUN_100056f9(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1000e8d8 == param_1) {
    PTR_LOOP_1000e8d8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000c8b8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1000faa4,0,param_1);
    return;
  }
  DAT_1000c8c8 = 0xffffffff;
  return;
}



// Function: FUN_1000574f @ 0x1000574f

void __cdecl FUN_1000574f(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000c8bc;
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
            DAT_1000f76c = DAT_1000f76c + -1;
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
          FUN_100056f9(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000c8bc) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_10005811 @ 0x10005811

int __cdecl FUN_10005811(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000c8b8;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000c8b8) {
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



// Function: FUN_10005868 @ 0x10005868

void __cdecl FUN_10005868(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1000f76c = DAT_1000f76c + 1, DAT_1000f76c == 0x20)) {
    FUN_1000574f(0x10);
  }
  return;
}



// Function: FUN_100058ad @ 0x100058ad

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_100058ad(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_1000e8d8;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10005ab5(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10005978;
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
          piVar5 = (int *)FUN_10005ab5(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10005978:
            PTR_LOOP_1000e8d8 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_1000e8d8) {
      ppuVar9 = &PTR_LOOP_1000c8b8;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000c8b8) {
          ppuVar9 = FUN_100055b5();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1000e8d8 = (undefined *)ppuVar9;
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
      PTR_LOOP_1000e8d8 = (undefined *)ppuVar9;
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



// Function: FUN_10005ab5 @ 0x10005ab5

int __cdecl FUN_10005ab5(int *param_1,uint param_2,uint param_3)

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
          goto LAB_10005bc8;
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
LAB_10005bc8:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_10005bd9 @ 0x10005bd9

undefined4 __cdecl FUN_10005bd9(int param_1,int *param_2,byte *param_3,uint param_4)

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



// Function: FUN_10005d49 @ 0x10005d49

void FUN_10005d49(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10005d64 @ 0x10005d64

int FUN_10005d64(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_10002d1c();
    return iVar3;
  }
  if ((DAT_1000f770 != (FARPROC)0x0) &&
     (bVar2 = FUN_10005dc8(DAT_1000f770), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_1000f770)(param_1);
    return iVar3;
  }
  return 0;
}



// Function: FUN_10005dc8 @ 0x10005dc8

bool __cdecl FUN_10005dc8(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



// Function: _strcmp @ 0x10005de0

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
      if (bVar4 != *_Str2) goto LAB_10005e24;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10005df0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10005e24;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10005e24;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10005df0:
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
LAB_10005e24:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_10005e70 @ 0x10005e70

undefined4 * __cdecl FUN_10005e70(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10006027_caseD_2;
        case 3:
          goto switchD_10006027_caseD_3;
        }
        goto switchD_10006027_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006027_caseD_0;
      case 1:
        goto switchD_10006027_caseD_1;
      case 2:
        goto switchD_10006027_caseD_2;
      case 3:
        goto switchD_10006027_caseD_3;
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
              goto switchD_10006027_caseD_2;
            case 3:
              goto switchD_10006027_caseD_3;
            }
            goto switchD_10006027_caseD_1;
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
              goto switchD_10006027_caseD_2;
            case 3:
              goto switchD_10006027_caseD_3;
            }
            goto switchD_10006027_caseD_1;
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
              goto switchD_10006027_caseD_2;
            case 3:
              goto switchD_10006027_caseD_3;
            }
            goto switchD_10006027_caseD_1;
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
switchD_10006027_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10006027_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10006027_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10006027_caseD_0:
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
        goto switchD_10005ea5_caseD_2;
      case 3:
        goto switchD_10005ea5_caseD_3;
      }
      goto switchD_10005ea5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005ea5_caseD_0;
    case 1:
      goto switchD_10005ea5_caseD_1;
    case 2:
      goto switchD_10005ea5_caseD_2;
    case 3:
      goto switchD_10005ea5_caseD_3;
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
            goto switchD_10005ea5_caseD_2;
          case 3:
            goto switchD_10005ea5_caseD_3;
          }
          goto switchD_10005ea5_caseD_1;
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
            goto switchD_10005ea5_caseD_2;
          case 3:
            goto switchD_10005ea5_caseD_3;
          }
          goto switchD_10005ea5_caseD_1;
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
            goto switchD_10005ea5_caseD_2;
          case 3:
            goto switchD_10005ea5_caseD_3;
          }
          goto switchD_10005ea5_caseD_1;
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
switchD_10005ea5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005ea5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005ea5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005ea5_caseD_0:
  return param_1;
}



// Function: FUN_100061a5 @ 0x100061a5

void FUN_100061a5(void)

{
  FUN_10004111(10);
  FUN_10007fa6((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// Function: FUN_100061bc @ 0x100061bc

undefined4 __cdecl FUN_100061bc(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000f778 != (code *)0x0) {
    iVar1 = (*DAT_1000f778)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_100061d7 @ 0x100061d7

uint __thiscall FUN_100061d7(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10006222(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_100062b4(uVar1);
  return uVar1;
}



// Function: FUN_1000620c @ 0x1000620c

void __thiscall FUN_1000620c(void *this,uint param_1,uint param_2)

{
  FUN_100061d7(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// Function: FUN_10006222 @ 0x10006222

uint __cdecl FUN_10006222(uint param_1)

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



// Function: FUN_100062b4 @ 0x100062b4

uint __cdecl FUN_100062b4(uint param_1)

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



// Function: FUN_1000633d @ 0x1000633d

uint __thiscall FUN_1000633d(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000e8ec + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000e8ec[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10008165(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_100063b2 @ 0x100063b2

uint __cdecl FUN_100063b2(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1000f798 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1000f860);
    bVar1 = DAT_1000f85c != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1000f860);
      this = (void *)0x13;
      FUN_10004436(0x13);
    }
    param_1 = FUN_10006421(this,param_1);
    if (bVar1) {
      FUN_10004497(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1000f860);
    }
  }
  return param_1;
}



// Function: FUN_10006421 @ 0x10006421

uint __thiscall FUN_10006421(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000f798 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000e8e0 < 2) {
        uVar2 = (byte)PTR_DAT_1000e8ec[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1000633d(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000e8ec[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100082ae(DAT_1000f798,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_100064ec @ 0x100064ec

undefined4 __cdecl FUN_100064ec(int param_1,int param_2)

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



// Function: FUN_10006535 @ 0x10006535

void __cdecl FUN_10006535(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_100084fd(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_100084fd(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Function: FUN_1000658b @ 0x1000658b

undefined4 __cdecl FUN_1000658b(int param_1,int param_2)

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
     (iVar2 = FUN_100064ec(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10006535(param_1,param_2 + -1);
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



// Function: FUN_10006617 @ 0x10006617

void __cdecl FUN_10006617(int param_1,undefined4 *param_2)

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



// Function: FUN_10006632 @ 0x10006632

void __cdecl FUN_10006632(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_1000663e @ 0x1000663e

undefined4 __cdecl FUN_1000663e(int *param_1)

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



// Function: FUN_10006659 @ 0x10006659

void __cdecl FUN_10006659(uint *param_1,uint param_2)

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



// Function: FUN_100066e6 @ 0x100066e6

undefined4 __cdecl FUN_100066e6(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_1000663e((int *)&local_10);
    if (iVar2 != 0) {
LAB_10006812:
      uVar5 = 0;
      goto LAB_10006814;
    }
    FUN_10006632(&local_10);
  }
  else {
    FUN_10006617((int)local_1c,&local_10);
    iVar2 = FUN_1000658b((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10006632(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10006632(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10006659(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10006814;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10006659(&local_10,param_3[3]);
        goto LAB_10006812;
      }
      FUN_10006617((int)&local_10,local_1c);
      FUN_10006659(&local_10,iVar2 - iVar4);
      FUN_1000658b((int)&local_10,param_3[2]);
      FUN_10006659(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10006814:
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



// Function: FUN_10006852 @ 0x10006852

void __cdecl FUN_10006852(ushort *param_1,uint *param_2)

{
  FUN_100066e6(param_1,param_2,(int *)&DAT_1000eaf8);
  return;
}



// Function: FUN_10006868 @ 0x10006868

void __cdecl FUN_10006868(ushort *param_1,uint *param_2)

{
  FUN_100066e6(param_1,param_2,(int *)&DAT_1000eb10);
  return;
}



// Function: FUN_1000687e @ 0x1000687e

void __thiscall FUN_1000687e(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000869e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10006852(local_10,param_1);
  return;
}



// Function: FUN_100068ab @ 0x100068ab

void __thiscall FUN_100068ab(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000869e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10006868(local_10,param_1);
  return;
}



// Function: FUN_100068d8 @ 0x100068d8

void __cdecl FUN_100068d8(char *param_1,int param_2,int param_3)

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
    FUN_10005e70((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// Function: FUN_1000694f @ 0x1000694f

int * __cdecl FUN_1000694f(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_100069ab(&local_10,&param_1);
  iVar3 = FUN_10008b6f(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10006a70(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// Function: FUN_100069ab @ 0x100069ab

void __cdecl FUN_100069ab(uint *param_1,uint *param_2)

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



// Function: FUN_10006a70 @ 0x10006a70

uint * __cdecl FUN_10006a70(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10006b58;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10006b58:
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



// Function: FUN_10006a80 @ 0x10006a80

uint * __cdecl FUN_10006a80(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10006a9c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10006acf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10006aeb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10006a9c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10006aeb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10006aeb;
    }
  }
LAB_10006acf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10006aeb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10006b58:
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
    if (bVar1 == 0) goto LAB_10006b58;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _memset @ 0x10006b60

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



// Function: _strlen @ 0x10006bc0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10006be0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10006c13:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10006be0:
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
  goto LAB_10006c13;
}



// Function: FUN_10006cc5 @ 0x10006cc5

void __cdecl FUN_10006cc5(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10006d41();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1000eb30;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10006d38();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1000eb34);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x1000ec98);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10006d38();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10006d38();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10006d38();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_10006d38 @ 0x10006d38

DWORD * FUN_10006d38(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10002a16();
  return pDVar1 + 2;
}



// Function: FUN_10006d41 @ 0x10006d41

DWORD * FUN_10006d41(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10002a16();
  return pDVar1 + 3;
}



// Function: FUN_10006d4a @ 0x10006d4a

undefined4 __cdecl FUN_10006d4a(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1000fbc0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1000fac0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1000f4f0 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10006da6;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10006da6:
      *(undefined4 *)((&DAT_1000fac0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10006d38();
  *pDVar2 = 9;
  pDVar2 = FUN_10006d41();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10006dc9 @ 0x10006dc9

undefined4 __cdecl FUN_10006dc9(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1000fbc0) &&
     ((*(byte *)((&DAT_1000fac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1000fac0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10006d38();
  *pDVar1 = 9;
  pDVar1 = FUN_10006d41();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_10006e0b @ 0x10006e0b

void __cdecl FUN_10006e0b(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1000fac0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10004436(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10004497(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1000fac0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_10006e6a @ 0x10006e6a

void __cdecl FUN_10006e6a(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1000fac0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_10006e8c @ 0x10006e8c

undefined4 __cdecl FUN_10006e8c(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1000fbc0 <= param_1) {
LAB_10006f0d:
    pDVar3 = FUN_10006d38();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1000fac0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_10006f0d;
  FUN_10006e0b(param_1);
  if ((*(byte *)((&DAT_1000fac0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10006dc9(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10006f02;
    pDVar3 = FUN_10006d41();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10006d38();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10006f02:
  FUN_10006e6a(param_1);
  return uVar5;
}



// Function: FUN_10006f1f @ 0x10006f1f

int __cdecl FUN_10006f1f(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000fbc0) &&
     ((*(byte *)((&DAT_1000fac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10006e0b(param_1);
    iVar1 = FUN_10006f84(param_1,param_2,param_3);
    FUN_10006e6a(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10006d38();
  *pDVar2 = 9;
  pDVar2 = FUN_10006d41();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10006f84 @ 0x10006f84

int __cdecl FUN_10006f84(DWORD param_1,char *param_2,uint param_3)

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
LAB_10006f9d:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_1000fac0 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10008e02(param_1,0,2);
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
LAB_1000706c:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_100070de;
      if (param_1 == 5) {
        pDVar7 = FUN_10006d38();
        *pDVar7 = 9;
        pDVar7 = FUN_10006d41();
        *pDVar7 = 5;
      }
      else {
        FUN_10006cc5(param_1);
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
            goto LAB_1000706c;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1000706c;
        } while( true );
      }
LAB_100070de:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10006f9d;
      pDVar7 = FUN_10006d38();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10006d41();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_100071f5 @ 0x100071f5

undefined4 __cdecl FUN_100071f5(int param_1)

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
  
  FUN_10004436(0x19);
  CodePage = FUN_100073a2(param_1);
  if (CodePage != DAT_1000f864) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000eca8;
LAB_10007232:
      if (*pUVar5 != CodePage) goto code_r0x10007236;
      local_8 = 0;
      puVar15 = &DAT_1000f980;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000ecb8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000eca0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000f980 + uVar8 + 1);
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
      DAT_1000f87c = 1;
      DAT_1000f864 = CodePage;
      DAT_1000fa84 = FUN_100073ec(CodePage);
      DAT_1000f870 = *(undefined4 *)(iVar12 + 0x1000ecac);
      DAT_1000f874 = *(undefined4 *)(iVar12 + 0x1000ecb0);
      DAT_1000f878 = *(undefined4 *)(iVar12 + 0x1000ecb4);
      goto LAB_10007386;
    }
    goto LAB_10007381;
  }
  goto LAB_1000721c;
code_r0x10007236:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1000ed97 < (int)pUVar5) goto code_r0x10007241;
  goto LAB_10007232;
code_r0x10007241:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000fa84 = 0;
    puVar15 = &DAT_1000f980;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_1000f87c = 0;
      DAT_1000f864 = CodePage;
    }
    else {
      DAT_1000f864 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000f980 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000f980 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000fa84 = FUN_100073ec(CodePage);
      DAT_1000f87c = 1;
    }
    DAT_1000f870 = 0;
    DAT_1000f874 = 0;
    DAT_1000f878 = 0;
  }
  else {
    if (DAT_1000f780 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10007393;
    }
LAB_10007381:
    FUN_1000741f();
  }
LAB_10007386:
  FUN_10007448();
LAB_1000721c:
  uVar14 = 0;
LAB_10007393:
  FUN_10004497(0x19);
  return uVar14;
}



// Function: FUN_100073a2 @ 0x100073a2

int __cdecl FUN_100073a2(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000f780 = 1;
                    /* WARNING: Could not recover jumptable at 0x100073bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000f780 = 1;
                    /* WARNING: Could not recover jumptable at 0x100073d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000f7a8;
  }
  DAT_1000f780 = (uint)bVar2;
  return param_1;
}



// Function: FUN_100073ec @ 0x100073ec

undefined4 __cdecl FUN_100073ec(int param_1)

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



// Function: FUN_1000741f @ 0x1000741f

void FUN_1000741f(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000f980;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000f864 = 0;
  DAT_1000f87c = 0;
  DAT_1000fa84 = 0;
  DAT_1000f870 = 0;
  DAT_1000f874 = 0;
  DAT_1000f878 = 0;
  return;
}



// Function: FUN_10007448 @ 0x10007448

void FUN_10007448(void)

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
  
  BVar2 = GetCPInfo(DAT_1000f864,&local_18);
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
    FUN_10008165(1,local_118,0x100,local_518,DAT_1000f864,DAT_1000fa84,0);
    FUN_100082ae(DAT_1000fa84,0x100,local_118,0x100,local_218,0x100,DAT_1000f864,0);
    FUN_100082ae(DAT_1000fa84,0x200,local_118,0x100,local_318,0x100,DAT_1000f864,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000f980 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10007554;
        }
        (&DAT_1000f880)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000f980 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10007554:
        (&DAT_1000f880)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000f980 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1000759e;
        }
        (&DAT_1000f880)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000f980 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1000759e:
        (&DAT_1000f880)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_100075cd @ 0x100075cd

void FUN_100075cd(void)

{
  if (DAT_1000fbc8 == 0) {
    FUN_100071f5(-3);
    DAT_1000fbc8 = 1;
  }
  return;
}



// Function: FUN_100075f0 @ 0x100075f0

undefined4 * __cdecl FUN_100075f0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100077a7_caseD_2;
        case 3:
          goto switchD_100077a7_caseD_3;
        }
        goto switchD_100077a7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100077a7_caseD_0;
      case 1:
        goto switchD_100077a7_caseD_1;
      case 2:
        goto switchD_100077a7_caseD_2;
      case 3:
        goto switchD_100077a7_caseD_3;
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
              goto switchD_100077a7_caseD_2;
            case 3:
              goto switchD_100077a7_caseD_3;
            }
            goto switchD_100077a7_caseD_1;
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
              goto switchD_100077a7_caseD_2;
            case 3:
              goto switchD_100077a7_caseD_3;
            }
            goto switchD_100077a7_caseD_1;
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
              goto switchD_100077a7_caseD_2;
            case 3:
              goto switchD_100077a7_caseD_3;
            }
            goto switchD_100077a7_caseD_1;
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
switchD_100077a7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100077a7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100077a7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100077a7_caseD_0:
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
        goto switchD_10007625_caseD_2;
      case 3:
        goto switchD_10007625_caseD_3;
      }
      goto switchD_10007625_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10007625_caseD_0;
    case 1:
      goto switchD_10007625_caseD_1;
    case 2:
      goto switchD_10007625_caseD_2;
    case 3:
      goto switchD_10007625_caseD_3;
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
            goto switchD_10007625_caseD_2;
          case 3:
            goto switchD_10007625_caseD_3;
          }
          goto switchD_10007625_caseD_1;
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
            goto switchD_10007625_caseD_2;
          case 3:
            goto switchD_10007625_caseD_3;
          }
          goto switchD_10007625_caseD_1;
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
            goto switchD_10007625_caseD_2;
          case 3:
            goto switchD_10007625_caseD_3;
          }
          goto switchD_10007625_caseD_1;
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
switchD_10007625_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10007625_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10007625_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10007625_caseD_0:
  return param_1;
}



// Function: FUN_10007925 @ 0x10007925

void __thiscall FUN_10007925(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_1000793c(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_1000793c @ 0x1000793c

void * __thiscall FUN_1000793c(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1000e8e0 < 2) {
      uVar3 = (byte)PTR_DAT_1000e8ec[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000e8ec;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_1000633d(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10007997:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10007997;
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
      goto LAB_10007a01;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10007a01;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10007a01:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000e8e0 < 2) {
      uVar5 = (byte)PTR_DAT_1000e8ec[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_1000633d(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000e8e0 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000e8ec + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1000633d(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10007aad:
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
          pDVar6 = FUN_10006d38();
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
      uVar3 = FUN_10008e75((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10007aad;
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



// Function: _strchr @ 0x10007b60

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



// Function: _strstr @ 0x10007c20

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
LAB_10007c93:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10007c93;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x10007ca0

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



// Function: FUN_10007ce0 @ 0x10007ce0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10007ce0(void)

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



// Function: FUN_10007d0f @ 0x10007d0f

int __cdecl FUN_10007d0f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000f784 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000f784 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000f784 != (FARPROC)0x0) {
        DAT_1000f788 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000f78c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10007d5e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10007d5e:
    if (DAT_1000f788 != (FARPROC)0x0) {
      iVar1 = (*DAT_1000f788)();
      if ((iVar1 != 0) && (DAT_1000f78c != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000f78c)(iVar1);
      }
    }
    iVar1 = (*DAT_1000f784)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10007da0

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
        goto joined_r0x10007dde;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10007e1b;
        goto LAB_10007e89;
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
joined_r0x10007e85:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10007e89:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10007e1b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10007e85;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10007e85;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10007e85;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10007dde:
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
LAB_10007e1b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10007e9e @ 0x10007e9e

int __thiscall FUN_10007e9e(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_1000e8e0 < 2) {
      uVar1 = (byte)PTR_DAT_1000e8ec[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_1000e8ec;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_1000633d(this,(uint)*param_1,8);
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
    if (DAT_1000e8e0 < 2) {
      uVar2 = (byte)PTR_DAT_1000e8ec[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_1000633d(this,uVar4,4);
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



// Function: FUN_10007f29 @ 0x10007f29

int __cdecl FUN_10007f29(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_1000fbc4 != 0) &&
      ((DAT_1000f520 != (int *)0x0 ||
       (((DAT_1000f528 != 0 && (iVar1 = FUN_10009023(), iVar1 == 0)) && (DAT_1000f520 != (int *)0x0)
        ))))) && (piVar3 = DAT_1000f520, param_1 != (uchar *)0x0)) {
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



// Function: FUN_10007fa6 @ 0x10007fa6

undefined4 __cdecl FUN_10007fa6(DWORD *param_1)

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
    puVar7 = &DAT_1000f7b0;
    pcVar6 = DAT_1000f7b0;
LAB_1000802c:
    bVar1 = true;
    FUN_10004436(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_1000f7bc;
        pcVar6 = DAT_1000f7bc;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_1000f7b4;
        pcVar6 = DAT_1000f7b4;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_1000f7b8;
        pcVar6 = DAT_1000f7b8;
      }
      goto LAB_1000802c;
    }
    pDVar2 = FUN_10002a16();
    uVar3 = FUN_10008128((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_10004497(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_10004497(1);
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
      goto LAB_100080a0;
    }
  }
  else {
LAB_100080a0:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_1000c788 < DAT_1000c78c + DAT_1000c788) {
        iVar4 = DAT_1000c788 * 0xc;
        iVar5 = DAT_1000c788;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_1000c78c + DAT_1000c788);
      }
      goto LAB_100080de;
    }
  }
  *puVar7 = 0;
LAB_100080de:
  if (bVar1) {
    FUN_10004497(1);
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



// Function: FUN_10008128 @ 0x10008128

uint __cdecl FUN_10008128(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_1000c794 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_1000c794 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_10008165 @ 0x10008165

BOOL __cdecl
FUN_10008165(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000a6a0;
  puStack_10 = &LAB_10005c8c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000f7c4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000f7c4 == 0) {
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
  DAT_1000f7c4 = iVar3;
  if (DAT_1000f7c4 != 2) {
    if (DAT_1000f7c4 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000f7a8;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10007ce0();
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
    param_6 = DAT_1000f798;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_100082ae @ 0x100082ae

int __cdecl
FUN_100082ae(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000a6b0;
  puStack_10 = &LAB_10005c8c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000f7d4 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000f7d4 = 2;
    }
    else {
      DAT_1000f7d4 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100084d2(param_3,param_4);
  }
  if (DAT_1000f7d4 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000f7d4 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000f7a8;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10007ce0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10007ce0();
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



// Function: FUN_100084d2 @ 0x100084d2

int __cdecl FUN_100084d2(char *param_1,int param_2)

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



// Function: FUN_100084fd @ 0x100084fd

undefined4 __cdecl FUN_100084fd(uint param_1,uint param_2,uint *param_3)

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



// Function: ___add_12 @ 0x1000851e

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100084fd(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_100084fd(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_100084fd(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_100084fd(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: FUN_1000857c @ 0x1000857c

void __cdecl FUN_1000857c(uint *param_1)

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



// Function: FUN_100085aa @ 0x100085aa

void __cdecl FUN_100085aa(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Function: FUN_100085d7 @ 0x100085d7

void __cdecl FUN_100085d7(char *param_1,int param_2,uint *param_3)

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
      FUN_1000857c(puVar1);
      FUN_1000857c(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1000857c(puVar1);
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
    FUN_1000857c(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// Function: FUN_1000869e @ 0x1000869e

undefined4 __thiscall
FUN_1000869e(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_100086f5:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_10008712:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_10008937;
    }
    if (bVar6 == DAT_1000e8e4) goto LAB_10008721;
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
      if (bVar6 != 0x30) goto LAB_10008a11;
    }
    goto LAB_100086f5;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_10008712;
    iVar9 = iVar1;
    if (bVar6 != DAT_1000e8e4) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_100087a6;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1000877f;
    }
    goto LAB_100086f5;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_10008712;
    if (bVar6 == DAT_1000e8e4) {
LAB_10008721:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_10008a16;
    }
    goto LAB_100086f5;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_1000e8e0 < 2) {
        uVar3 = (byte)PTR_DAT_1000e8ec[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1000e8ec;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1000633d(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_1000e8e4) goto LAB_10008893;
    goto LAB_100086f5;
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
      if (DAT_1000e8e0 < 2) {
        uVar3 = (byte)PTR_DAT_1000e8ec[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1000e8ec;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1000633d(this,(uint)bVar6,4);
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
LAB_10008893:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_100087a6:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1000877f:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_10008a11;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_100086f5;
  case 5:
    local_28 = iVar5;
    if (DAT_1000e8e0 < 2) {
      uVar3 = (byte)PTR_DAT_1000e8ec[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1000e8ec;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1000633d(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_10008937;
    goto LAB_10008a16;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1000896c;
      if (bVar6 == 0x2d) goto LAB_10008960;
      if (bVar6 != 0x30) goto LAB_10008a16;
LAB_10008905:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_100086f5;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_10008905;
      goto LAB_10008a16;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_10008a11;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_10008997;
  default:
    goto switchD_10008701_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1000896c:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_10008a16;
LAB_10008960:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_100086f5;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_10008701_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_100086f5;
    goto LAB_10008a16;
  }
  iVar9 = 9;
LAB_10008937:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_100086f5;
LAB_10008997:
  if (DAT_1000e8e0 < 2) {
    uVar3 = (byte)PTR_DAT_1000e8ec[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_1000e8ec;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_1000633d(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_100089e1;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_100089d9;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_10008997;
LAB_100089d9:
  pbVar7 = (byte *)0x1451;
LAB_100089e1:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_1000e8e0 < 2) {
      uVar3 = (byte)PTR_DAT_1000e8ec[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1000e8ec;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1000633d(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_10008a11:
  pbVar7 = pbVar8 + -1;
LAB_10008a16:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_10008b24;
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
    FUN_100085d7(local_60,local_8,(uint *)&local_44);
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
        FUN_1000933a((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_10008aa9;
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
LAB_10008aa9:
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
LAB_10008b24:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// Function: FUN_10008b6f @ 0x10008b6f

undefined4 __cdecl
FUN_10008b6f(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_10008c64;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_10008c64:
            pcVar11 = "1#QNAN";
            goto LAB_10008c69;
          }
          pcVar11 = "1#IND";
        }
        FUN_10006a70((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_10008c69:
        FUN_10006a70((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1000933a((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000911a((int *)&local_14,(int *)&local_20);
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
        FUN_1000857c((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_100085aa((uint *)&local_14);
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
          FUN_1000857c((uint *)&local_14);
          FUN_1000857c((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1000857c((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_10008dc1;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_10008dc1:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_10008dc3:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_10008dc3;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_10008df9;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_10008df9:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// Function: FUN_10008e02 @ 0x10008e02

DWORD __cdecl FUN_10008e02(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_10006dc9(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10006d38();
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
      pbVar1 = (byte *)((&DAT_1000fac0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10006cc5(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_10008e75 @ 0x10008e75

uint __cdecl FUN_10008e75(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1000f798 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1000f860);
    bVar1 = DAT_1000f85c != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1000f860);
      this = (void *)0x13;
      FUN_10004436(0x13);
    }
    param_1 = FUN_10008ee4(this,param_1);
    if (bVar1) {
      FUN_10004497(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1000f860);
    }
  }
  return param_1;
}



// Function: FUN_10008ee4 @ 0x10008ee4

uint __thiscall FUN_10008ee4(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000f798 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000e8e0 < 2) {
        uVar2 = (byte)PTR_DAT_1000e8ec[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1000633d(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000e8ec[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100082ae(DAT_1000f798,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: __mbsnbicoll @ 0x10008fe4

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_100093b6(DAT_1000fa84,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_1000f864);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



// Function: FUN_10009023 @ 0x10009023

undefined4 FUN_10009023(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_1000f528;
  puVar2 = DAT_1000f528;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_10009633(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_100090a0 @ 0x100090a0

int __cdecl FUN_100090a0(byte *param_1,byte *param_2)

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



// Function: FUN_100090e0 @ 0x100090e0

byte * __cdecl FUN_100090e0(byte *param_1,byte *param_2)

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



// Function: FUN_1000911a @ 0x1000911a

void __cdecl FUN_1000911a(int *param_1,int *param_2)

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
LAB_100091bd:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_100091bd;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_100084fd(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_10009271:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_100085aa((uint *)&local_28);
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
          FUN_1000857c((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_10009271;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1000931a;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000931a:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// Function: FUN_1000933a @ 0x1000933a

void __cdecl FUN_1000933a(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_1000ef50;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x1000f0b0;
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
        FUN_1000911a(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



// Function: FUN_100093b6 @ 0x100093b6

int __cdecl
FUN_100093b6(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
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
  puStack_c = &DAT_1000a6e8;
  puStack_10 = &LAB_10005c8c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_1000f840 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000f840 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_1000f840 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_100084d2((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_100084d2((char *)param_5,param_6);
  }
  if (DAT_1000f840 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_1000f840 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000f7a8;
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
      FUN_10007ce0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_10007ce0();
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



// Function: FUN_10009633 @ 0x10009633

undefined4 __cdecl FUN_10009633(uint *param_1,int param_2)

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
  puVar2 = (uint *)FUN_10009d80((byte *)param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar7 = *(byte *)((int)puVar2 + 1) == 0;
  if (DAT_1000f520 == DAT_1000f524) {
    DAT_1000f520 = (byte *)FUN_10009812((int *)DAT_1000f520);
  }
  if (DAT_1000f520 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_1000f528 == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_1000f520 = _malloc(4);
      if (DAT_1000f520 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_1000f520 + 1;
      pbVar6 = DAT_1000f520 + 2;
      pbVar1 = DAT_1000f520 + 3;
      DAT_1000f520[0] = 0;
      *pbVar4 = 0;
      *pbVar6 = 0;
      *pbVar1 = 0;
      if (DAT_1000f528 == (undefined4 *)0x0) {
        DAT_1000f528 = _malloc(4);
        if (DAT_1000f528 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1000f528 = 0;
      }
    }
    else {
      iVar3 = FUN_10009023();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_1000f520;
  iVar3 = FUN_100097ba((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_10009a51(pbVar4,(uint *)(iVar3 * 4 + 8));
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
      goto LAB_10009767;
    }
    pbVar6 = pbVar4 + iVar3 * 4;
    FUN_10002bdf(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar6 != 0; pbVar6 = pbVar6 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar6 = *(int *)(pbVar6 + 4);
    }
    pbVar4 = FUN_10009a51(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_10009767;
  }
  DAT_1000f520 = pbVar4;
LAB_10009767:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_10006a70(lpName,param_1);
      pbVar4 = (byte *)(((int)lpName - (int)param_1) + (int)puVar2);
      *pbVar4 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(pbVar4 + 1)));
      FUN_10002bdf((undefined *)lpName);
    }
  }
  return 0;
}



// Function: FUN_100097ba @ 0x100097ba

int __cdecl FUN_100097ba(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_1000f520;
  piVar2 = DAT_1000f520;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_1000f520 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_1000f520 >> 2;
}



// Function: FUN_10009812 @ 0x10009812

undefined4 * __cdecl FUN_10009812(int *param_1)

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
      puVar4 = FUN_10009e17(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10009880 @ 0x10009880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10009880(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1000f860;
  if (DAT_1000f798 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_100098ce;
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
LAB_100098ce:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1000f860 = _DAT_1000f860 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1000f85c;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1000f860 = iVar2;
      FUN_10004436(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000992f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10006421(this,uVar8);
      uVar7 = FUN_10006421(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000992f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1000f860 = _DAT_1000f860 + -1;
      UNLOCK();
    }
    else {
      FUN_10004497(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_10009950 @ 0x10009950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10009950(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1000f860;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1000f798 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_100099af;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_100099af:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1000f860 = _DAT_1000f860 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1000f85c;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1000f860 = iVar2;
        FUN_10004436(0x13);
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
        uVar7 = FUN_10006421(param_3,uVar7);
        uVar5 = FUN_10006421(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10009a25;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10009a25:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1000f860 = _DAT_1000f860 + -1;
        UNLOCK();
      }
      else {
        FUN_10004497(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_10009a51 @ 0x10009a51

byte * __cdecl FUN_10009a51(byte *param_1,uint *param_2)

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
  puStack_c = &DAT_1000a828;
  puStack_10 = &LAB_10005c8c;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_10002bdf(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_1000faa8 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10004436(9);
            local_8 = 0;
            local_2c = (uint *)FUN_10004ab6((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_1000faa0) {
                iVar1 = FUN_100052bf(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_10004e0a(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_100075f0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_10004ab6((int)param_1);
                    FUN_10004ae1(local_2c,(int)param_1);
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
                local_28 = HeapAlloc(DAT_1000faa4,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_100075f0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10004ae1(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_10009bdc();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_1000faa4,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_1000f774 == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_100061bc(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_1000faa8 == 2) {
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
              FUN_10004436(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_10005811(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_1000faa4,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_1000e8dc) {
                  iVar1 = FUN_10005bd9(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_100058ad((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_100075f0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_10005868(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_1000faa4,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_100075f0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10005868(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_10009d2a();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_1000f774 == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_100061bc(param_2);
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
              pbVar3 = HeapReAlloc(DAT_1000faa4,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_1000f774 == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_100061bc(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



// Function: FUN_10009bdc @ 0x10009bdc

void FUN_10009bdc(void)

{
  FUN_10004497(9);
  return;
}



// Function: FUN_10009d2a @ 0x10009d2a

void FUN_10009d2a(void)

{
  FUN_10004497(9);
  return;
}



// Function: FUN_10009d80 @ 0x10009d80

byte * __cdecl FUN_10009d80(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (DAT_1000f87c == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_10004436(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_1000f980 + uVar3 + 1) & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_10004497(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_10004497(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2 + 1;
    }
    FUN_10004497(0x19);
    pbVar2 = (byte *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return pbVar2;
}



// Function: FUN_10009e17 @ 0x10009e17

uint * __cdecl FUN_10009e17(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10006a70(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}




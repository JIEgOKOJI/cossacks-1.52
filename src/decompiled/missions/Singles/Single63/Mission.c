// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

undefined4 FUN_10001000(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: FUN_10001020 @ 0x10001020

void __thiscall
FUN_10001020(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)((int)this + 8) = param_5;
  *(undefined4 *)this = param_4;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = param_6;
  *(undefined4 *)((int)this + 0x10) = param_7;
  *(undefined1 *)((int)this + 0x14) = 0;
  CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bff0,param_4,param_1,0);
  RemoveGroup(&DAT_1000bf78,(int)this + 0x15);
  CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bff0,param_4,param_2,0);
  RemoveGroup(&DAT_1000bf78,(int)this + 0x1d);
  CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bff0,param_4,param_3,0);
  RemoveGroup(&DAT_1000bf78,(int)this + 0x25);
  RunTimer(*(undefined1 *)((int)this + 0xc),10);
  RunTimer(*(undefined1 *)((int)this + 0x10),param_5);
  return;
}



// Function: FUN_100010f0 @ 0x100010f0

void __thiscall
FUN_100010f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(*(undefined1 *)((int)this + 0xc));
  if ((cVar1 != '\0') && (*(int *)((int)this + 4) != 0)) {
    RunTimer(*(undefined1 *)((int)this + 0xc),0x14);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    iVar2 = GetTotalAmount0((int)this + 0x15);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bf88,*(undefined1 *)this,param_1,0);
      SelectUnits(&DAT_1000bf78,0);
      SelSendAndKill(*(undefined1 *)this,param_4,0,0);
      RemoveGroup(&DAT_1000bf78,(int)this + 0x2d);
      ClearSelection(*(undefined1 *)this);
    }
    iVar2 = GetTotalAmount0((int)this + 0x1d);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bf88,*(undefined1 *)this,param_2,0);
      SelectUnits(&DAT_1000bf78,0);
      SelSendAndKill(*(undefined1 *)this,param_4,0,0);
      RemoveGroup(&DAT_1000bf78,(int)this + 0x2d);
      ClearSelection(*(undefined1 *)this);
    }
    iVar2 = GetTotalAmount0((int)this + 0x25);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000bf78,&DAT_1000be18,&DAT_1000bed0,*(undefined1 *)this,param_3,0);
      SelectUnits(&DAT_1000bf78,0);
      SelSendAndKill(*(undefined1 *)this,param_4,0,0);
      RemoveGroup(&DAT_1000bf78,(int)this + 0x35);
      ClearSelection(*(undefined1 *)this);
    }
  }
  return;
}



// Function: FUN_10001260 @ 0x10001260

void __thiscall FUN_10001260(void *this,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_EDX;
  
  cVar1 = TimerDone(*(undefined1 *)((int)this + 0x10));
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0((int)this + 0x2d);
    if (iVar2 < 0x33) {
      iVar2 = GetTotalAmount0((int)this + 0x35);
      if (iVar2 < 0x15) {
        *(undefined4 *)((int)this + 4) = param_1;
        *(undefined1 *)((int)this + 0x14) = 1;
        SelectUnits((int)this + 0x2d,0);
        SelectUnits((int)this + 0x35,1);
        FUN_100023b0(CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)this));
        RunTimer(*(undefined1 *)((int)this + 0x10),*(undefined4 *)((int)this + 8));
        DAT_1000c000 = DAT_1000c000 + 1;
      }
    }
  }
  return;
}



// Function: FUN_100012e0 @ 0x100012e0

bool __fastcall FUN_100012e0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 0x15);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = GetTotalAmount0(param_1 + 0x1d);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = GetTotalAmount0(param_1 + 0x25);
  return iVar1 != 0;
}



// Function: FUN_10001420 @ 0x10001420

undefined4 * __thiscall FUN_10001420(void *this,undefined4 param_1)

{
  RegisterDynGroup((int)this + 4);
  *(undefined4 *)this = param_1;
  return this;
}



// Function: FUN_10001440 @ 0x10001440

void __fastcall FUN_10001440(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 1) {
    iVar1 = GetTotalAmount0(param_1 + 4);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}



// Function: FUN_10001460 @ 0x10001460

void __thiscall FUN_10001460(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    iVar1 = GetDiff(0);
    ProduceUnitFast(param_1,&DAT_1000bf60,(int)this + 4,(10 - iVar1) * 1000);
    *(undefined4 *)((int)this + 0xc) = 1;
  }
  return;
}



// Function: FUN_100014b0 @ 0x100014b0

void __thiscall FUN_100014b0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)((int)this + 0xc) == 1) {
    iVar1 = GetUnitsAmount1(param_1,(int)this + 4);
    if (iVar1 != 0) {
      SelectUnits((int)this + 4,0);
      SelSendTo(*(undefined1 *)this,param_2,0,0);
      *(undefined4 *)((int)this + 0xc) = 2;
    }
  }
  return;
}



// Function: FUN_10001500 @ 0x10001500

void __thiscall FUN_10001500(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)((int)this + 0xc) == 2) {
    iVar1 = GetUnitsAmount1(param_1,(int)this + 4);
    if (iVar1 != 0) {
      SelectUnits((int)this + 4,0);
      Patrol(*(undefined1 *)this,param_2,0);
      *(undefined4 *)((int)this + 0xc) = 3;
    }
  }
  return;
}



// Function: FUN_10001550 @ 0x10001550

void __thiscall
FUN_10001550(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10001440((int)this);
  FUN_10001460(this,param_1);
  FUN_100014b0(this,param_2,param_3);
  FUN_10001500(this,param_3,param_4);
  return;
}



// Function: OnInit @ 0x10001690

void OnInit(void)

{
                    /* 0x1690  1  OnInit */
  RegisterUnits(&DAT_1000c008,s_GDelEasy_10009374);
  RegisterUnits(&DAT_1000be30,s_GFortHome_10009368);
  RegisterUnits(&DAT_1000bf80,s_GFortPeasant_10009358);
  RegisterUnits(&DAT_1000bdc0,s_GFortGarnizon_10009348);
  RegisterUnits(&DAT_1000bff8,s_GKomandir_1000933c);
  RegisterUnits(&DAT_1000c0f8,s_GZabor_100_10009330);
  RegisterUnits(&DAT_1000be10,s_GKavaleriya_10009324);
  RegisterUnits(&DAT_1000bf00,s_GFortresGarnizon_10009310);
  RegisterZone(&DAT_1000bdc8,s_ZPrikaz_10009308);
  RegisterZone(&DAT_1000be68,s_ZWay_Attack01_100092f8);
  RegisterZone(&DAT_1000be60,s_ZWay_Attack02_100092e8);
  RegisterZone(&DAT_1000bea8,s_ZWay_Attack03_100092d8);
  RegisterZone(&DAT_1000bea0,s_ZWay_Attack04_100092c8);
  RegisterZone(&DAT_1000be98,s_ZWay_Attack05_100092b8);
  RegisterZone(&DAT_1000be88,s_ZWay_Attack06_100092a8);
  RegisterZone(&DAT_1000bec8,s_ZWay_Attack07_10009298);
  RegisterZone(&DAT_1000beb8,s_ZWay_Attack08_10009288);
  RegisterZone(&DAT_1000beb0,s_ZWay_Attack09_10009278);
  RegisterZone(&DAT_1000be90,s_ZWay_Attack10_10009268);
  RegisterZone(&DAT_1000be80,s_ZWay_Attack11_10009258);
  RegisterZone(&DAT_1000bec0,s_ZWay_Attack12_10009248);
  RegisterZone(&DAT_1000c010,s_ZLag1_10009240);
  RegisterZone(&DAT_1000bfd8,s_ZLag1_Tent1_10009234);
  RegisterZone(&DAT_1000bfd0,s_ZLag1_Tent2_10009228);
  RegisterZone(&DAT_1000bfc0,s_ZLag1_Tent3_1000921c);
  RegisterZone(&DAT_1000bfb8,s_ZLag1_Unit1_10009210);
  RegisterZone(&DAT_1000bfb0,s_ZLag1_Unit2_10009204);
  RegisterZone(&DAT_1000bfa8,s_ZLag1_Unit3_100091f8);
  RegisterZone(&DAT_1000be38,s_ZLag1_Sbor_100091ec);
  RegisterZone(&DAT_1000c018,s_ZLag2_100091e4);
  RegisterZone(&DAT_1000be58,s_ZLag2_Tent1_100091d8);
  RegisterZone(&DAT_1000be78,s_ZLag2_Tent2_100091cc);
  RegisterZone(&DAT_1000be70,s_ZLag2_Tent3_100091c0);
  RegisterZone(&DAT_1000bdd0,s_ZLag2_Unit1_100091b4);
  RegisterZone(&DAT_1000bde0,s_ZLag2_Unit2_100091a8);
  RegisterZone(&DAT_1000bdd8,s_ZLag2_Unit3_1000919c);
  RegisterZone(&DAT_1000bef8,s_ZLag2_Sbor_10009190);
  RegisterZone(&DAT_1000c020,s_ZLag3_10009188);
  RegisterZone(&DAT_1000bfa0,s_ZLag3_Tent1_1000917c);
  RegisterZone(&DAT_1000bf98,s_ZLag3_Tent2_10009170);
  RegisterZone(&DAT_1000bf90,s_ZLag3_Tent3_10009164);
  RegisterZone(&DAT_1000be50,s_ZLag3_Unit1_10009158);
  RegisterZone(&DAT_1000be48,s_ZLag3_Unit2_1000914c);
  RegisterZone(&DAT_1000be40,s_ZLag3_Unit3_10009140);
  RegisterZone(&DAT_1000bf48,s_ZLag3_Sbor_10009134);
  RegisterUnits(&DAT_1000be20,s_GRazbPort_10009128);
  RegisterZone(&DAT_1000c0f0,s_ZCreateYatch_10009118);
  RegisterZone(&DAT_1000bdf8,s_ZPatrol1_0_1000910c);
  RegisterZone(&DAT_1000be08,s_ZPatrol1_1_10009100);
  RegisterZone(&DAT_1000be00,s_ZPatrol1_2_100090f4);
  RegisterZone(&DAT_1000bdf0,s_ZPatrol1_3_100090e8);
  RegisterZone(&DAT_1000bde8,s_ZPatrol1_4_100090dc);
  RegisterUnitType(&DAT_1000be28,s_Mortira_b_sp__100090cc);
  RegisterUnitType(&DAT_1000bff0,s_URTA_UN__100090c0);
  RegisterUnitType(&DAT_1000bf88,s_Pehota_turki_TU__100090ac);
  RegisterUnitType(&DAT_1000bed0,s_Tatarin_TU__100090a0);
  RegisterUnitType(&DAT_1000bf60,s_YahtaTU_TU__10009094);
  RegisterUnitType(&DAT_1000bfe0,s_WALL_UKR_sp__10009084);
  RegisterUnitType(&DAT_1000bfe8,s_WALL_EV_sp__10009078);
  RegisterFormation(&DAT_1000be18,s__ALONE_10009070);
  RegisterDynGroup(&DAT_1000bfc8);
  RegisterVar(&DAT_1000bfc8,8);
  RegisterDynGroup(&DAT_1000bf78);
  RegisterVar(&DAT_1000bf78,8);
  RegisterVar(&DAT_1000c030,0x3d);
  RegisterVar(&DAT_1000c070,0x3d);
  RegisterVar(&DAT_1000c0b0,0x3d);
  RegisterVar(&DAT_1000c104,4);
  RegisterVar(&DAT_1000bed8,0x10);
  RegisterVar(&DAT_1000bee8,0x10);
  RegisterVar(&DAT_1000bf28,0x10);
  RegisterVar(&DAT_1000bf38,0x10);
  RegisterVar(&DAT_1000bf50,0x10);
  RegisterVar(&DAT_1000bf68,0x10);
  RegisterVar(&DAT_1000bf08,0x10);
  RegisterVar(&DAT_1000bf18,0x10);
  SetPlayerName(1,s_FRIEND_10009068);
  SetPlayerName(2,s_ALIANCE_10009060);
  SetPlayerName(3,s_FRANCE_10009058);
  SetPlayerName(5,s_ROBBERS_10009050);
  RegisterDynGroup(&DAT_1000c028);
  RegisterVar(&DAT_1000c028,8);
  return;
}



// Function: ProcessScenary @ 0x10001a70

void ProcessScenary(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined *this;
  int iVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  
                    /* 0x1a70  2  ProcessScenary */
  cVar1 = Trigg(1);
  pcVar8 = EnableMission_exref;
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    SelectUnits(&DAT_1000c008,0);
    SelErase(2);
    ClearSelection(2);
    ChangeFriends(0,3);
    ChangeFriends(2,0x2c);
    ChangeFriends(2,0x28);
    SetResource(3,0,5000);
    SetResource(3,3,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,4,5000);
    SetResource(3,5,5000);
    uVar5 = GetDiff(0);
    StartAI(3,s_FRANCE_0_100093bc,2,1,1,uVar5);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    iVar6 = GetDiff(0);
    SetResource(0,3,iVar6 * -4000 + 30000);
    iVar6 = GetDiff(0);
    SetResource(0,5,iVar6 * -3000 + 20000);
    iVar6 = GetDiff(0);
    SetResource(0,4,iVar6 * -3000 + 20000);
    iVar6 = GetDiff(0);
    SetResource(0,1,(5 - iVar6) * 4000);
    iVar7 = 0;
    iVar6 = GetDiff(0);
    if (0 < (5 - iVar6) * 2) {
      do {
        CreateObject0(&DAT_1000bfc8,&DAT_1000be18,&DAT_1000be28,0,&DAT_1000bea0,0);
        iVar7 = iVar7 + 1;
        iVar6 = GetDiff(0);
      } while (iVar7 < (5 - iVar6) * 2);
    }
    RunTimer(0x14,0x32);
    RunTimer(0x15,0x32);
    RunTimer(0x16,0x32);
    RunTimer(0x17,0x32);
    RunTimer(0x18,0x32);
    RunTimer(0x19,0x32);
    RunTimer(0x1a,0x32);
    EnableUnit(0,&DAT_1000bfe0,0);
    EnableUnit(0,&DAT_1000bfe8,0);
    pcVar8 = EnableMission_exref;
    EnableMission(0x41);
    EnableMission(0x42);
    DisableMission(0x49);
    DisableMission(0x43);
    DisableMission(0x4b);
    EnableMission(0x4c);
    EnableMission(0x44);
    EnableMission(0x45);
    DisableMission(0x46);
    EnableMission(0x47);
    DisableMission(0x4d);
    DisableMission(0x4e);
    ShowPage(s__PAGE1505_100093b0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar6 = GetTotalAmount0(&DAT_1000bdc0), iVar6 == 0)) {
    SaveSelectedUnits(0,&DAT_1000c028,0);
    SetTrigg(2,0);
    iVar6 = GetDiff(0);
    RunTimer(0x1a,(5 - iVar6) * 1000);
    SelectUnits(&DAT_1000be30,0);
    SelChangeNation(2,0);
    SelectUnits(&DAT_1000be30,0);
    SelChangeNation(1,0);
    SelectUnits(&DAT_1000bf80,0);
    SelChangeNation(2,0);
    SelectUnits(&DAT_1000bf80,0);
    SelChangeNation(1,0);
    ShowPage(s__PAGE1501_100093a4);
    iVar6 = GetDiff(0);
    AddResource(0,3,(5 - iVar6) * 2000);
    iVar6 = GetDiff(0);
    AddResource(0,5,(5 - iVar6) * 1000);
    iVar6 = GetDiff(0);
    AddResource(0,4,(5 - iVar6) * 1000);
    ShowPage(s__PAGE1502_10009398);
    SetTrigg(4,1);
    SelectUnits(&DAT_1000c028,0);
    (*pcVar8)(0x49);
    (*pcVar8)(0x43);
    DisableMission(0x42);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    (*pcVar8)(0x4d);
    (*pcVar8)(0x4e);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (iVar6 = GetTotalAmount0(&DAT_1000c0f8), iVar6 < 0x5f)) {
    DisableMission(0x46);
    SetTrigg(8,0);
  }
  cVar1 = Trigg(5);
  if (cVar1 != '\0') {
    cVar1 = Trigg(3);
    if ((cVar1 != '\0') && (iVar6 = GetUnitsAmount1(&DAT_1000bdc8,&DAT_1000bff8), iVar6 != 0)) {
      SetTrigg(3,0);
      iVar6 = GetTotalAmount0(&DAT_1000c0f8);
      if (iVar6 < 0x5f) {
        cVar1 = AskQuestion(s__PAGE1504_1000938c);
        if (cVar1 != '\0') {
          SelectUnits(&DAT_1000be10,0);
          SetTrigg(4,0);
          SetTrigg(5,0);
          DisableMission(0x46);
          DisableMission(0x45);
        }
      }
      else {
        ShowPage(s__PAGE1503_10009380);
        (*pcVar8)(0x46);
      }
    }
    iVar6 = GetUnitsAmount1(&DAT_1000bdc8,&DAT_1000bff8);
    if (iVar6 == 0) {
      SetTrigg(3,1);
    }
  }
  cVar1 = Trigg(4);
  if (cVar1 == '\0') {
    SelectUnits(&DAT_1000be10,0);
    SelAttackGroup(1,&DAT_1000bdc0);
    ClearSelection(1);
  }
  iVar6 = GetDiff(0);
  DAT_1000c104 = DAT_1000c000 / ((4 - iVar6) * 10);
  iVar6 = GetDiff(0,&DAT_1000be68);
  FUN_10001260(&DAT_1000c030,DAT_1000c104 + iVar6 * 3);
  iVar6 = GetDiff(0,&DAT_1000be60);
  FUN_10001260(&DAT_1000c070,DAT_1000c104 + iVar6 * 3);
  iVar6 = GetDiff(0,&DAT_1000bea8);
  FUN_10001260(&DAT_1000c0b0,DAT_1000c104 + iVar6 * 3);
  FUN_100010f0(&DAT_1000c030,&DAT_1000bfb8,&DAT_1000bfb0,&DAT_1000bfa8,&DAT_1000be38);
  FUN_100010f0(&DAT_1000c070,&DAT_1000bdd0,&DAT_1000bde0,&DAT_1000bdd8,&DAT_1000bef8);
  FUN_100010f0(&DAT_1000c0b0,&DAT_1000be50,&DAT_1000be48,&DAT_1000be40,&DAT_1000bf48);
  cVar1 = TimerDone(0x1a);
  if ((cVar1 == '\0') || (cVar1 = Trigg(2), cVar1 != '\0')) goto LAB_10002283;
  cVar1 = Trigg(6);
  if (cVar1 != '\0') {
    SetTrigg(6,0);
    SetTrigg(7,0);
    iVar6 = GetDiff(0);
    if (iVar6 != 1) {
      if (iVar6 != 2) {
        if (iVar6 != 3) goto LAB_10002135;
        uVar12 = 0x15;
        uVar5 = 0x14;
        iVar6 = GetDiff(0);
        FUN_10001020(&DAT_1000c030,&DAT_1000bfd8,&DAT_1000bfd0,&DAT_1000bfc0,5,(5 - iVar6) * 1000,
                     uVar5,uVar12);
      }
      uVar12 = 0x17;
      uVar5 = 0x16;
      iVar6 = GetDiff(0);
      FUN_10001020(&DAT_1000c070,&DAT_1000be58,&DAT_1000be78,&DAT_1000be70,5,(5 - iVar6) * 1000,
                   uVar5,uVar12);
    }
    uVar12 = 0x19;
    uVar5 = 0x18;
    iVar6 = GetDiff(0);
    FUN_10001020(&DAT_1000c0b0,&DAT_1000bfa0,&DAT_1000bf98,&DAT_1000bf90,5,(5 - iVar6) * 1000,uVar5,
                 uVar12);
  }
LAB_10002135:
  cVar1 = Trigg(7);
  if (cVar1 == '\0') {
    bVar2 = FUN_100012e0(0x1000c0b0);
    bVar3 = FUN_100012e0(0x1000c070);
    bVar4 = FUN_100012e0(0x1000c030);
    iVar6 = GetDiff(0);
    if (CONCAT31(extraout_var,bVar2) + CONCAT31(extraout_var_00,bVar3) +
        CONCAT31(extraout_var_01,bVar4) < iVar6) {
      iVar6 = GetUnitsAmount0(&DAT_1000c010,0);
      if ((iVar6 == 0) && (bVar2 = FUN_100012e0(0x1000c030), CONCAT31(extraout_var_02,bVar2) == 0))
      {
        uVar12 = 0x15;
        uVar5 = 0x14;
        iVar6 = GetDiff(0);
        this = &DAT_1000c030;
        iVar6 = (5 - iVar6) * 1000;
        puVar11 = &DAT_1000bfc0;
        puVar10 = &DAT_1000bfd0;
        puVar9 = &DAT_1000bfd8;
      }
      else {
        iVar6 = GetUnitsAmount0(&DAT_1000c018,0);
        if ((iVar6 == 0) && (bVar2 = FUN_100012e0(0x1000c070), CONCAT31(extraout_var_03,bVar2) == 0)
           ) {
          uVar12 = 0x17;
          uVar5 = 0x16;
          iVar6 = GetDiff(0);
          this = &DAT_1000c070;
          iVar6 = (5 - iVar6) * 1000;
          puVar11 = &DAT_1000be70;
          puVar10 = &DAT_1000be78;
          puVar9 = &DAT_1000be58;
        }
        else {
          iVar6 = GetUnitsAmount0(&DAT_1000c020,0);
          if ((iVar6 != 0) ||
             (bVar2 = FUN_100012e0(0x1000c0b0), CONCAT31(extraout_var_04,bVar2) != 0))
          goto LAB_10002283;
          uVar12 = 0x19;
          uVar5 = 0x18;
          iVar6 = GetDiff(0);
          iVar6 = (5 - iVar6) * 1000;
          puVar11 = &DAT_1000bf90;
          puVar10 = &DAT_1000bf98;
          puVar9 = &DAT_1000bfa0;
          this = &DAT_1000c0b0;
        }
      }
      FUN_10001020(this,puVar9,puVar10,puVar11,5,iVar6,uVar5,uVar12);
    }
  }
LAB_10002283:
  FUN_10001550(&DAT_1000bed8,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000be00,&DAT_1000be08);
  FUN_10001550(&DAT_1000bee8,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000be00,&DAT_1000be08);
  FUN_10001550(&DAT_1000bf28,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000be00);
  FUN_10001550(&DAT_1000bf38,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000be00);
  FUN_10001550(&DAT_1000bf50,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000bdf0);
  FUN_10001550(&DAT_1000bf68,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000bdf0);
  FUN_10001550(&DAT_1000bf08,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000bde8);
  FUN_10001550(&DAT_1000bf18,&DAT_1000be20,&DAT_1000c0f0,&DAT_1000bdf8,&DAT_1000bde8);
  iVar6 = GetTotalAmount0(&DAT_1000bf00);
  if (iVar6 == 0) {
    ShowVictory();
    DisableMission(0x43);
    (*pcVar8)(0x4b);
  }
  cVar1 = NationIsErased(0);
  if (cVar1 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100023a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LooseGame();
  return;
}



// Function: FUN_100023b0 @ 0x100023b0

int __cdecl FUN_100023b0(undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  DVar1 = FUN_1000252f((int *)0x0);
  FUN_10002500(DVar1);
  iVar2 = _rand();
  iVar2 = iVar2 % 3;
  if (iVar2 == 0) {
    puVar4 = &DAT_1000be68;
LAB_1000240c:
    SelSendAndKill(param_1,puVar4,0x80,0);
  }
  else {
    if (iVar2 == 1) {
      puVar4 = &DAT_1000be60;
      goto LAB_1000240c;
    }
    if (iVar2 == 2) {
      puVar4 = &DAT_1000bea8;
      goto LAB_1000240c;
    }
  }
  iVar2 = _rand();
  iVar2 = iVar2 % 3;
  if (iVar2 == 0) {
    puVar4 = &DAT_1000bea0;
LAB_10002452:
    SelSendAndKill(param_1,puVar4,0x80,2);
  }
  else {
    if (iVar2 == 1) {
      puVar4 = &DAT_1000be98;
      goto LAB_10002452;
    }
    if (iVar2 == 2) {
      puVar4 = &DAT_1000be88;
      goto LAB_10002452;
    }
  }
  iVar2 = _rand();
  iVar2 = iVar2 % 3;
  if (iVar2 == 0) {
    puVar4 = &DAT_1000bec8;
  }
  else if (iVar2 == 1) {
    puVar4 = &DAT_1000beb8;
  }
  else {
    if (iVar2 != 2) goto LAB_1000249e;
    puVar4 = &DAT_1000beb0;
  }
  SelSendAndKill(param_1,puVar4,0x80,2);
LAB_1000249e:
  iVar2 = _rand();
  iVar3 = iVar2 / 3;
  iVar2 = iVar2 % 3;
  if (iVar2 == 0) {
    iVar3 = SelSendAndKill(param_1,&DAT_1000be90,0x80,2);
  }
  else {
    if (iVar2 == 1) {
      iVar2 = SelSendAndKill(param_1,&DAT_1000be80,0x80,2);
      return iVar2;
    }
    if (iVar2 == 2) {
      iVar2 = SelSendAndKill(param_1,&DAT_1000bec0,0x80,2);
      return iVar2;
    }
  }
  return iVar3;
}



// Function: FUN_10002500 @ 0x10002500

void __cdecl FUN_10002500(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10002839();
  pDVar1[5] = param_1;
  return;
}



// Function: _rand @ 0x1000250d

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_10002839();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



// Function: FUN_1000252f @ 0x1000252f

void __cdecl FUN_1000252f(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_1000c118._2_2_) {
    if (local_24.wHour == (WORD)DAT_1000c118) {
      if (local_24.wDay == DAT_1000c114._2_2_) {
        if (local_24.wMonth == DAT_1000c110._2_2_) {
          if (local_24.wYear == (WORD)DAT_1000c110) goto LAB_100025d9;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_1000c108 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_1000c108 = 1;
  }
  else {
    DAT_1000c108 = 0;
  }
  DAT_1000c110._0_2_ = local_24.wYear;
  DAT_1000c110._2_2_ = local_24.wMonth;
  DAT_1000c114._0_2_ = local_24.wDayOfWeek;
  DAT_1000c114._2_2_ = local_24.wDay;
  DAT_1000c118._0_2_ = local_24.wHour;
  DAT_1000c118._2_2_ = local_24.wMinute;
  DAT_1000c11c._0_2_ = local_24.wSecond;
  DAT_1000c11c._2_2_ = local_24.wMilliseconds;
LAB_100025d9:
  iVar2 = FUN_10002940((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_1000c108);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}



// Function: FUN_1000260b @ 0x1000260b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000260b(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000c138 = GetVersion();
    iVar1 = FUN_100032dd(1);
    if (iVar1 != 0) {
      _DAT_1000c144 = DAT_1000c138 >> 8 & 0xff;
      _DAT_1000c140 = DAT_1000c138 & 0xff;
      DAT_1000c138 = DAT_1000c138 >> 0x10;
      _DAT_1000c13c = _DAT_1000c140 * 0x100 + _DAT_1000c144;
      iVar1 = FUN_100027b4();
      if (iVar1 != 0) {
        DAT_1000c7f8 = GetCommandLineA();
        DAT_1000c124 = FUN_10003036();
        FUN_10002b20();
        FUN_10002de9();
        FUN_10002d30();
        FUN_10002a02();
        DAT_1000c120 = DAT_1000c120 + 1;
        goto LAB_100026de;
      }
      FUN_1000333a();
    }
LAB_1000266b:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000c120 < 1) goto LAB_1000266b;
      DAT_1000c120 = DAT_1000c120 + -1;
      if (DAT_1000c170 == 0) {
        FUN_10002a40();
      }
      FUN_10002cdc();
      FUN_10002808();
      FUN_1000333a();
    }
    else if (param_2 == 3) {
      FUN_100028a0((undefined *)0x0);
    }
LAB_100026de:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100026e4

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000c120;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1000272c;
    if ((DAT_1000c7fc != (code *)0x0) &&
       (iVar2 = (*DAT_1000c7fc)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1000260b(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1000272c:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1000260b(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1000260b(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000c7fc != (code *)0x0) {
      iVar2 = (*DAT_1000c7fc)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10002781

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000c12c == 1) || ((DAT_1000c12c == 0 && (DAT_1000c130 == 1)))) {
    FUN_100033e2();
  }
  FUN_1000341b(param_1);
  (*(code *)PTR___exit_100093c8)(0xff);
  return;
}



// Function: FUN_100027b4 @ 0x100027b4

undefined4 FUN_100027b4(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100036ab();
  DAT_100093cc = TlsAlloc();
  if (DAT_100093cc != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000356e(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100093cc,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10002826((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10002808 @ 0x10002808

void FUN_10002808(void)

{
  FUN_100036d4();
  if (DAT_100093cc != 0xffffffff) {
    TlsFree(DAT_100093cc);
    DAT_100093cc = 0xffffffff;
  }
  return;
}



// Function: FUN_10002826 @ 0x10002826

void __cdecl FUN_10002826(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10009548;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10002839 @ 0x10002839

DWORD * FUN_10002839(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_100093cc);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000356e(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100093cc,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10002826((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10002894;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10002894:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_100028a0 @ 0x100028a0

void __cdecl FUN_100028a0(undefined *param_1)

{
  if (DAT_100093cc != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_100093cc), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_100037b6(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_100037b6(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_100037b6(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_100037b6(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_100037b6(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_100037b6(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10009548) {
        FUN_100037b6(*(undefined **)(param_1 + 0x50));
      }
      FUN_100037b6(param_1);
    }
    TlsSetValue(DAT_100093cc,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10002940 @ 0x10002940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_10002940(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

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
    iVar4 = *(int *)(&DAT_100096b4 + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_1000389f();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5)
            * 0x3c + DAT_100095d0 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_100095d4 != 0)) &&
        (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_10003b54(local_28),
        CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + _DAT_100095d8;
    }
  }
  return iVar2;
}



// Function: FUN_10002a02 @ 0x10002a02

void FUN_10002a02(void)

{
  if (DAT_1000c7f4 != (code *)0x0) {
    (*DAT_1000c7f4)();
  }
  FUN_10002b06((undefined4 *)&DAT_10009034,(undefined4 *)&DAT_1000903c);
  FUN_10002b06((undefined4 *)&DAT_10009000,(undefined4 *)&DAT_10009030);
  return;
}



// Function: __exit @ 0x10002a2f

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10002a4f(_Code,1,0);
  return;
}



// Function: FUN_10002a40 @ 0x10002a40

void FUN_10002a40(void)

{
  FUN_10002a4f(0,0,1);
  return;
}



// Function: FUN_10002a4f @ 0x10002a4f

void __cdecl FUN_10002a4f(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10002af4();
  if (DAT_1000c174 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000c170 = 1;
  DAT_1000c16c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000c7f0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000c7ec - 4), DAT_1000c7f0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000c7f0 <= puVar1);
    }
    FUN_10002b06((undefined4 *)&DAT_10009040,(undefined4 *)&DAT_10009044);
  }
  FUN_10002b06((undefined4 *)&DAT_10009048,(undefined4 *)&DAT_1000904c);
  if (param_3 == 0) {
    DAT_1000c174 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10002afd();
  return;
}



// Function: FUN_10002af4 @ 0x10002af4

void FUN_10002af4(void)

{
  FUN_10003740(0xd);
  return;
}



// Function: FUN_10002afd @ 0x10002afd

void FUN_10002afd(void)

{
  FUN_100037a1(0xd);
  return;
}



// Function: FUN_10002b06 @ 0x10002b06

void __cdecl FUN_10002b06(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10002b20 @ 0x10002b20

void FUN_10002b20(void)

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
  DAT_1000c7e0 = 0x20;
  DAT_1000c6e0 = puVar2;
  for (; puVar2 < DAT_1000c6e0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000c7e0 < (int)UVar8) {
      puVar2 = &DAT_1000c6e4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000c7e0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000c7e0 = DAT_1000c7e0 + 0x20;
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
      } while ((int)DAT_1000c7e0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000c6e0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000c6e0 + iVar6 * 9;
    if (DAT_1000c6e0[iVar6 * 9] == -1) {
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
          goto LAB_10002cc5;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10002cc5:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000c7e0);
      return;
    }
  } while( true );
}



// Function: FUN_10002cdc @ 0x10002cdc

void FUN_10002cdc(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000c6e0;
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
      FUN_100037b6((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000c7e0);
  return;
}



// Function: FUN_10002d30 @ 0x10002d30

void FUN_10002d30(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000c7e8 == 0) {
    FUN_100044e3();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000c124; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_1000c154 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000c124;
  puVar6 = DAT_1000c124;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10003fa0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100037b6((undefined *)DAT_1000c124);
  DAT_1000c124 = (uint *)0x0;
  *puVar3 = 0;
  DAT_1000c7e4 = 1;
  return;
}



// Function: FUN_10002de9 @ 0x10002de9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002de9(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000c7e8 == 0) {
    FUN_100044e3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000c178,0x104);
  _DAT_1000c164 = &DAT_1000c178;
  pbVar2 = &DAT_1000c178;
  if (*DAT_1000c7f8 != 0) {
    pbVar2 = DAT_1000c7f8;
  }
  FUN_10002e82(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10002e82(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000c14c = puVar1;
  _DAT_1000c148 = local_8 + -1;
  return;
}



// Function: FUN_10002e82 @ 0x10002e82

void __cdecl FUN_10002e82(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000c5c0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000c5c0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10002f2d;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10002f2d:
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
          if ((*(byte *)((int)&DAT_1000c5c0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000c5c0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10003036 @ 0x10003036

LPSTR FUN_10003036(void)

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
  if (DAT_1000c27c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000c27c = 1;
LAB_1000308d:
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
        FUN_100037b6(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000c27c = 2;
  }
  else {
    if (DAT_1000c27c == 1) goto LAB_1000308d;
    if (DAT_1000c27c != 2) {
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
    FUN_10004500((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10003168 @ 0x10003168

void __cdecl FUN_10003168(undefined4 *param_1)

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



// Function: FUN_10003195 @ 0x10003195

int FUN_10003195(void)

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
  
  FUN_10004bf0();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x11;
    aCStackY_18[1] = '1';
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
      aCStackY_18[0] = '-';
      aCStackY_18[1] = '2';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = 'O';
        aCStackY_18[1] = '2';
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
        aCStackY_18[0] = -0x4b;
        aCStackY_18[1] = '2';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10004835(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10003168((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_100032dd @ 0x100032dd

undefined4 __cdecl FUN_100032dd(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1000c6c8 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000c6c8 != (HANDLE)0x0) {
    DAT_1000c6cc = FUN_10003195();
    if (DAT_1000c6cc == 3) {
      ppuVar1 = (undefined **)FUN_10004c1f(0x3f8);
    }
    else {
      if (DAT_1000c6cc != 2) {
        return 1;
      }
      ppuVar1 = FUN_10005766();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1000c6c8);
  }
  return 0;
}



// Function: FUN_1000333a @ 0x1000333a

void FUN_1000333a(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1000c6cc == 3) {
    iVar1 = 0;
    if (0 < DAT_1000c48c) {
      puVar2 = (undefined4 *)((int)DAT_1000c490 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1000c6c8,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1000c48c);
    }
    HeapFree(DAT_1000c6c8,0,DAT_1000c490);
  }
  else if (DAT_1000c6cc == 2) {
    ppuVar3 = &PTR_LOOP_100097f0;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_100097f0);
  }
  HeapDestroy(DAT_1000c6c8);
  return;
}



// Function: FUN_100033e2 @ 0x100033e2

void FUN_100033e2(void)

{
  if ((DAT_1000c12c == 1) || ((DAT_1000c12c == 0 && (DAT_1000c130 == 1)))) {
    FUN_1000341b(0xfc);
    if (DAT_1000c280 != (code *)0x0) {
      (*DAT_1000c280)();
    }
    FUN_1000341b(0xff);
  }
  return;
}



// Function: FUN_1000341b @ 0x1000341b

void __cdecl FUN_1000341b(DWORD param_1)

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
  pDVar2 = &DAT_100093f8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10009488);
  if (param_1 == (&DAT_100093f8)[iVar5 * 2]) {
    if ((DAT_1000c12c == 1) || ((DAT_1000c12c == 0 && (DAT_1000c130 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100093fc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10003fa0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10003fa0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10003fb0(local_a4,_Dest);
      FUN_10003fb0(local_a4,(uint *)&DAT_1000846c);
      FUN_10003fb0(local_a4,*(uint **)(iVar5 * 8 + 0x100093fc));
      auStackY_1e3._3_4_ = 0x1000353f;
      FUN_10005e33(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_1000356e @ 0x1000356e

int * __cdecl FUN_1000356e(int param_1,int param_2)

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
  puStack_c = &DAT_100084a8;
  puStack_10 = &LAB_10006130;
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
      if (DAT_1000c6cc == 3) {
        if (puVar2 <= DAT_1000c494) {
          FUN_10003740(9);
          local_8 = 0;
          local_24 = FUN_10004fbb(puVar2);
          local_8 = 0xffffffff;
          FUN_10003607();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1000365b;
LAB_1000364a:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10003656:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1000c6cc != 2) || (DAT_1000b814 < puVar3)) goto LAB_10003656;
        FUN_10003740(9);
        local_8 = 1;
        local_24 = FUN_10005a5e((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10003690();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1000364a;
      }
LAB_1000365b:
      local_24 = HeapAlloc(DAT_1000c6c8,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1000c3bc == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10005fbe(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_10003607 @ 0x10003607

void FUN_10003607(void)

{
  FUN_100037a1(9);
  return;
}



// Function: FUN_10003690 @ 0x10003690

void FUN_10003690(void)

{
  FUN_100037a1(9);
  return;
}



// Function: FUN_100036ab @ 0x100036ab

void FUN_100036ab(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100094cc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100094bc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100094ac);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000948c);
  return;
}



// Function: FUN_100036d4 @ 0x100036d4

void FUN_100036d4(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10009488;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100094cc)) && (ppuVar1 != &PTR_DAT_100094bc)) &&
       ((ppuVar1 != &PTR_DAT_100094ac && (ppuVar1 != &PTR_DAT_1000948c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100037b6(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10009548);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100094ac);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100094bc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100094cc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000948c);
  return;
}



// Function: FUN_10003740 @ 0x10003740

void __cdecl FUN_10003740(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10009488 + param_1;
  if ((&DAT_10009488)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10003740(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100037b6((undefined *)lpCriticalSection);
    }
    FUN_100037a1(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_100037a1 @ 0x100037a1

void __cdecl FUN_100037a1(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10009488)[param_1]);
  return;
}



// Function: FUN_100037b6 @ 0x100037b6

void __cdecl FUN_100037b6(undefined *param_1)

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
  puStack_c = &DAT_100084c0;
  puStack_10 = &LAB_10006130;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1000c6cc == 3) {
    ExceptionList = &local_14;
    FUN_10003740(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10004c67((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10004c92(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10003820();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000c6cc != 2) goto LAB_10003882;
    ExceptionList = &local_14;
    FUN_10003740(9);
    local_8 = 1;
    local_28 = (uint *)FUN_100059c2(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10005a19(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10003878();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10003882:
  HeapFree(DAT_1000c6c8,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10003820 @ 0x10003820

void FUN_10003820(void)

{
  FUN_100037a1(9);
  return;
}



// Function: FUN_10003878 @ 0x10003878

void FUN_10003878(void)

{
  FUN_100037a1(9);
  return;
}



// Function: FUN_1000389f @ 0x1000389f

void FUN_1000389f(void)

{
  if (DAT_1000c3a0 == 0) {
    FUN_10003740(0xb);
    if (DAT_1000c3a0 == 0) {
      FUN_100038cd();
      DAT_1000c3a0 = DAT_1000c3a0 + 1;
    }
    FUN_100037a1(0xb);
  }
  return;
}



// Function: FUN_100038cd @ 0x100038cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100038cd(void)

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
  
  FUN_10003740(0xc);
  DAT_10009678 = 0xffffffff;
  DAT_10009668 = 0xffffffff;
  DAT_1000c2e8 = 0;
  _Str1 = (uint *)FUN_10006324("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_100037a1(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1000c2f0);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_100095d0 = (void *)(DAT_1000c2f0 * 0x3c);
    DAT_1000c2e8 = 1;
    if (DAT_1000c336 != 0) {
      DAT_100095d0 = (void *)((int)DAT_100095d0 + DAT_1000c344 * 0x3c);
    }
    if ((DAT_1000c38a == 0) || (DAT_1000c398 == 0)) {
      DAT_100095d4 = 0;
      _DAT_100095d8 = 0;
    }
    else {
      DAT_100095d4 = 1;
      _DAT_100095d8 = (DAT_1000c398 - DAT_1000c344) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_1000c3d8,0x220,(LPCWSTR)&DAT_1000c2f4,-1,PTR_DAT_1000965c,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_1000965c = 0;
    }
    else {
      PTR_DAT_1000965c[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_1000c3d8,0x220,(LPCWSTR)&DAT_1000c348,-1,PTR_DAT_10009660,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_10009660[0x3f] = 0;
      return;
    }
LAB_10003b3e:
    *PTR_DAT_10009660 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_1000c39c == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_1000c39c), iVar4 != 0)))) {
      FUN_100037b6((undefined *)DAT_1000c39c);
      sVar5 = _strlen((char *)_Str1);
      DAT_1000c39c = _malloc(sVar5 + 1);
      if (DAT_1000c39c != (uint *)0x0) {
        FUN_10003fa0(DAT_1000c39c,_Str1);
        FUN_100037a1(0xc);
        _strncpy(PTR_DAT_1000965c,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_1000965c[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_10006208(this,(byte *)_Source);
        DAT_100095d0 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_10006208(DAT_100095d0,(byte *)_Source);
          DAT_100095d0 = (void *)((int)DAT_100095d0 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_10006208(DAT_100095d0,(byte *)_Source);
            DAT_100095d0 = (void *)((int)DAT_100095d0 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_100095d0 = (void *)-(int)DAT_100095d0;
        }
        DAT_100095d4 = (int)(char)*_Source;
        if (DAT_100095d4 != 0) {
          _strncpy(PTR_DAT_10009660,(char *)_Source,3);
          PTR_DAT_10009660[3] = 0;
          return;
        }
        goto LAB_10003b3e;
      }
    }
    FUN_100037a1(0xc);
  }
  return;
}



// Function: FUN_10003b54 @ 0x10003b54

bool __cdecl FUN_10003b54(int *param_1)

{
  bool bVar1;
  
  FUN_10003740(0xb);
  bVar1 = FUN_10003b75(param_1);
  FUN_100037a1(0xb);
  return bVar1;
}



// Function: FUN_10003b75 @ 0x10003b75

bool __cdecl FUN_10003b75(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_100095d4 != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_10009668) || (uVar5 != DAT_10009678)) {
      if (DAT_1000c2e8 == 0) {
        FUN_10003d21(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_10003d21(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_1000c388 != 0) {
          uVar6 = (uint)DAT_1000c38e;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_1000c38c;
          uVar6 = 0;
          uVar4 = (uint)DAT_1000c38e;
        }
        FUN_10003d21(1,(uint)(DAT_1000c388 == 0),uVar5,(uint)DAT_1000c38a,uVar4,uVar3,uVar6,
                     (uint)DAT_1000c390,(uint)DAT_1000c392,(uint)DAT_1000c394,(uint)DAT_1000c396);
        if (DAT_1000c334 != 0) {
          uVar6 = (uint)DAT_1000c33a;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_1000c338;
          uVar6 = 0;
          uVar4 = (uint)DAT_1000c33a;
          uVar5 = param_1[5];
        }
        FUN_10003d21(0,(uint)(DAT_1000c334 == 0),uVar5,(uint)DAT_1000c336,uVar4,uVar3,uVar6,
                     (uint)DAT_1000c33c,(uint)DAT_1000c33e,(uint)DAT_1000c340,(uint)DAT_1000c342);
      }
    }
    iVar1 = param_1[7];
    if (DAT_1000966c < DAT_1000967c) {
      if ((DAT_1000966c <= iVar1) && (iVar1 <= DAT_1000967c)) {
        if ((DAT_1000966c < iVar1) && (iVar1 < DAT_1000967c)) {
          return true;
        }
LAB_10003ced:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_1000966c) {
          return DAT_10009670 <= iVar2;
        }
        return iVar2 < DAT_10009680;
      }
    }
    else {
      if (iVar1 < DAT_1000967c) {
        return true;
      }
      if (DAT_1000966c < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_1000967c) || (DAT_1000966c <= iVar1)) goto LAB_10003ced;
    }
  }
  return false;
}



// Function: FUN_10003d21 @ 0x10003d21

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10003d21(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_10009680)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_100096b4 + param_4 * 4);
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
        iVar2 = *(int *)(&DAT_10009684 + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_100096b8 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_10009680)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_100096b4 + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_10009668 = param_3;
    DAT_10009670 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_1000966c = iVar1;
  }
  else {
    DAT_10009680 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_100095d8 + param_10) * 1000 + param_11;
    if (DAT_10009680 < 0) {
      DAT_10009680 = DAT_10009680 + 86400000;
      DAT_1000967c = iVar1 + -1;
    }
    else {
      DAT_1000967c = iVar1;
      if (86399999 < DAT_10009680) {
        DAT_10009680 = DAT_10009680 + -86400000;
        DAT_1000967c = iVar1 + 1;
      }
    }
    DAT_10009678 = param_3;
  }
  return;
}



// Function: _malloc @ 0x10003e61

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000c3bc);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10003e73

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10003e9f((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10005fbe(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10003e9f @ 0x10003e9f

void __cdecl FUN_10003e9f(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10008520;
  puStack_10 = &LAB_10006130;
  local_14 = ExceptionList;
  if (DAT_1000c6cc == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1000c494) {
      ExceptionList = &local_14;
      FUN_10003740(9);
      local_8 = 0;
      piVar1 = FUN_10004fbb(param_1);
      local_8 = 0xffffffff;
      FUN_10003f06();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000c6cc == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1000b814) {
        ExceptionList = &local_14;
        FUN_10003740(9);
        local_8 = 1;
        piVar1 = FUN_10005a5e(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10003f65();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10003f7e;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10003f7e:
  HeapAlloc(DAT_1000c6c8,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10003f06 @ 0x10003f06

void FUN_10003f06(void)

{
  FUN_100037a1(9);
  return;
}



// Function: FUN_10003f65 @ 0x10003f65

void FUN_10003f65(void)

{
  FUN_100037a1(9);
  return;
}



// Function: FUN_10003fa0 @ 0x10003fa0

uint * __cdecl FUN_10003fa0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10004088;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10004088:
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



// Function: FUN_10003fb0 @ 0x10003fb0

uint * __cdecl FUN_10003fb0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10003fcc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10003fff;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000401b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10003fcc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000401b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000401b;
    }
  }
LAB_10003fff:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000401b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10004088:
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
    if (bVar1 == 0) goto LAB_10004088;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x10004090

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
    if (((uint)puVar2 & 3) == 0) goto LAB_100040b0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100040e3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100040b0:
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
  goto LAB_100040e3;
}



// Function: FUN_1000410b @ 0x1000410b

undefined4 __cdecl FUN_1000410b(int param_1)

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
  
  FUN_10003740(0x19);
  CodePage = FUN_100042b8(param_1);
  if (CodePage != DAT_1000c498) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100096f8;
LAB_10004148:
      if (*pUVar5 != CodePage) goto code_r0x1000414c;
      local_8 = 0;
      puVar15 = &DAT_1000c5c0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10009708);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100096f0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000c5c0 + uVar8 + 1);
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
      DAT_1000c4ac = 1;
      DAT_1000c498 = CodePage;
      DAT_1000c6c4 = FUN_10004302(CodePage);
      DAT_1000c4a0 = *(undefined4 *)(iVar12 + 0x100096fc);
      DAT_1000c4a4 = *(undefined4 *)(iVar12 + 0x10009700);
      DAT_1000c4a8 = *(undefined4 *)(iVar12 + 0x10009704);
      goto LAB_1000429c;
    }
    goto LAB_10004297;
  }
  goto LAB_10004132;
code_r0x1000414c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100097e7 < (int)pUVar5) goto code_r0x10004157;
  goto LAB_10004148;
code_r0x10004157:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000c6c4 = 0;
    puVar15 = &DAT_1000c5c0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_1000c4ac = 0;
      DAT_1000c498 = CodePage;
    }
    else {
      DAT_1000c498 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000c5c0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000c5c0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000c6c4 = FUN_10004302(CodePage);
      DAT_1000c4ac = 1;
    }
    DAT_1000c4a0 = 0;
    DAT_1000c4a4 = 0;
    DAT_1000c4a8 = 0;
  }
  else {
    if (DAT_1000c3a4 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100042a9;
    }
LAB_10004297:
    FUN_10004335();
  }
LAB_1000429c:
  FUN_1000435e();
LAB_10004132:
  uVar14 = 0;
LAB_100042a9:
  FUN_100037a1(0x19);
  return uVar14;
}



// Function: FUN_100042b8 @ 0x100042b8

int __cdecl FUN_100042b8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000c3a4 = 1;
                    /* WARNING: Could not recover jumptable at 0x100042d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000c3a4 = 1;
                    /* WARNING: Could not recover jumptable at 0x100042e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000c3d8;
  }
  DAT_1000c3a4 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10004302 @ 0x10004302

undefined4 __cdecl FUN_10004302(int param_1)

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



// Function: FUN_10004335 @ 0x10004335

void FUN_10004335(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000c5c0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000c498 = 0;
  DAT_1000c4ac = 0;
  DAT_1000c6c4 = 0;
  DAT_1000c4a0 = 0;
  DAT_1000c4a4 = 0;
  DAT_1000c4a8 = 0;
  return;
}



// Function: FUN_1000435e @ 0x1000435e

void FUN_1000435e(void)

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
  
  BVar2 = GetCPInfo(DAT_1000c498,&local_18);
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
    FUN_100065f0(1,local_118,0x100,local_518,DAT_1000c498,DAT_1000c6c4,0);
    FUN_100063a1(DAT_1000c6c4,0x100,local_118,0x100,local_218,0x100,DAT_1000c498,0);
    FUN_100063a1(DAT_1000c6c4,0x200,local_118,0x100,local_318,0x100,DAT_1000c498,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000c5c0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000446a;
        }
        (&DAT_1000c4c0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000c5c0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000446a:
        (&DAT_1000c4c0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000c5c0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_100044b4;
        }
        (&DAT_1000c4c0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000c5c0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_100044b4:
        (&DAT_1000c4c0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_100044e3 @ 0x100044e3

void FUN_100044e3(void)

{
  if (DAT_1000c7e8 == 0) {
    FUN_1000410b(-3);
    DAT_1000c7e8 = 1;
  }
  return;
}



// Function: FUN_10004500 @ 0x10004500

undefined4 * __cdecl FUN_10004500(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100046b7_caseD_2;
        case 3:
          goto switchD_100046b7_caseD_3;
        }
        goto switchD_100046b7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100046b7_caseD_0;
      case 1:
        goto switchD_100046b7_caseD_1;
      case 2:
        goto switchD_100046b7_caseD_2;
      case 3:
        goto switchD_100046b7_caseD_3;
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
              goto switchD_100046b7_caseD_2;
            case 3:
              goto switchD_100046b7_caseD_3;
            }
            goto switchD_100046b7_caseD_1;
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
              goto switchD_100046b7_caseD_2;
            case 3:
              goto switchD_100046b7_caseD_3;
            }
            goto switchD_100046b7_caseD_1;
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
              goto switchD_100046b7_caseD_2;
            case 3:
              goto switchD_100046b7_caseD_3;
            }
            goto switchD_100046b7_caseD_1;
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
switchD_100046b7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100046b7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100046b7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100046b7_caseD_0:
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
        goto switchD_10004535_caseD_2;
      case 3:
        goto switchD_10004535_caseD_3;
      }
      goto switchD_10004535_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004535_caseD_0;
    case 1:
      goto switchD_10004535_caseD_1;
    case 2:
      goto switchD_10004535_caseD_2;
    case 3:
      goto switchD_10004535_caseD_3;
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
            goto switchD_10004535_caseD_2;
          case 3:
            goto switchD_10004535_caseD_3;
          }
          goto switchD_10004535_caseD_1;
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
            goto switchD_10004535_caseD_2;
          case 3:
            goto switchD_10004535_caseD_3;
          }
          goto switchD_10004535_caseD_1;
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
            goto switchD_10004535_caseD_2;
          case 3:
            goto switchD_10004535_caseD_3;
          }
          goto switchD_10004535_caseD_1;
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
switchD_10004535_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004535_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004535_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004535_caseD_0:
  return param_1;
}



// Function: FUN_10004835 @ 0x10004835

void __thiscall FUN_10004835(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_1000484c(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_1000484c @ 0x1000484c

void * __thiscall FUN_1000484c(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1000bba4 < 2) {
      uVar3 = (byte)PTR_DAT_1000b998[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000b998;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_1000687d(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_100048a7:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_100048a7;
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
      goto LAB_10004911;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10004911;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10004911:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000bba4 < 2) {
      uVar5 = (byte)PTR_DAT_1000b998[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_1000687d(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000bba4 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000b998 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1000687d(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_100049bd:
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
          pDVar6 = FUN_10006739();
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
      uVar3 = FUN_10006742((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_100049bd;
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



// Function: _strchr @ 0x10004a70

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



// Function: _strstr @ 0x10004b30

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
LAB_10004ba3:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10004ba3;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x10004bb0

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



// Function: FUN_10004bf0 @ 0x10004bf0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10004bf0(void)

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



// Function: FUN_10004c1f @ 0x10004c1f

undefined4 __cdecl FUN_10004c1f(undefined4 param_1)

{
  DAT_1000c490 = HeapAlloc(DAT_1000c6c8,0,0x140);
  if (DAT_1000c490 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000c488 = 0;
  DAT_1000c48c = 0;
  DAT_1000c484 = DAT_1000c490;
  DAT_1000c494 = param_1;
  DAT_1000c47c = 0x10;
  return 1;
}



// Function: FUN_10004c67 @ 0x10004c67

uint __cdecl FUN_10004c67(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000c490;
  while( true ) {
    if (DAT_1000c490 + DAT_1000c48c * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_10004c92 @ 0x10004c92

void __cdecl FUN_10004c92(uint *param_1,int param_2)

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
      if (DAT_1000c488 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1000c480 * 0x8000 + DAT_1000c488[3]),0x8000,0x4000);
        DAT_1000c488[2] = DAT_1000c488[2] | 0x80000000U >> ((byte)DAT_1000c480 & 0x1f);
        *(undefined4 *)(DAT_1000c488[4] + 0xc4 + DAT_1000c480 * 4) = 0;
        *(char *)(DAT_1000c488[4] + 0x43) = *(char *)(DAT_1000c488[4] + 0x43) + -1;
        if (*(char *)(DAT_1000c488[4] + 0x43) == '\0') {
          DAT_1000c488[1] = DAT_1000c488[1] & 0xfffffffe;
        }
        if (DAT_1000c488[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1000c488[3],0,0x8000);
          HeapFree(DAT_1000c6c8,0,(LPVOID)DAT_1000c488[4]);
          FUN_10006900(DAT_1000c488,DAT_1000c488 + 5,
                       (DAT_1000c48c * 0x14 - (int)DAT_1000c488) + -0x14 + DAT_1000c490);
          DAT_1000c48c = DAT_1000c48c + -1;
          if (DAT_1000c488 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1000c484 = DAT_1000c490;
        }
      }
      DAT_1000c488 = param_1;
      DAT_1000c480 = uVar14;
    }
  }
  return;
}



// Function: FUN_10004fbb @ 0x10004fbb

int * __cdecl FUN_10004fbb(uint *param_1)

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
  
  puVar8 = DAT_1000c490 + DAT_1000c48c * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000c484;
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
  puVar11 = DAT_1000c490;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000c484 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000c484) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000c490;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000c484 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000c484) && (param_1 = FUN_100052c4(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10005375((int)param_1);
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
  DAT_1000c484 = param_1;
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
    if (iVar9 == 0) goto LAB_10005281;
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
LAB_10005281:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000c488)) && (local_8 == DAT_1000c480)) {
    DAT_1000c488 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_100052c4 @ 0x100052c4

undefined4 * FUN_100052c4(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000c48c == DAT_1000c47c) {
    pvVar2 = HeapReAlloc(DAT_1000c6c8,0,DAT_1000c490,(DAT_1000c47c * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000c47c = DAT_1000c47c + 0x10;
    DAT_1000c490 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000c490 + DAT_1000c48c * 0x14);
  pvVar2 = HeapAlloc(DAT_1000c6c8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000c48c = DAT_1000c48c + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000c6c8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10005375 @ 0x10005375

int __cdecl FUN_10005375(int param_1)

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



// Function: FUN_10005470 @ 0x10005470

undefined4 __cdecl FUN_10005470(uint *param_1,int param_2,int param_3)

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



// Function: FUN_10005766 @ 0x10005766

undefined ** FUN_10005766(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10009800 == -1) {
    lpMem = &PTR_LOOP_100097f0;
  }
  else {
    lpMem = HeapAlloc(DAT_1000c6c8,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_100097f0) {
        if (PTR_LOOP_100097f0 == (undefined *)0x0) {
          PTR_LOOP_100097f0 = (undefined *)&PTR_LOOP_100097f0;
        }
        if (PTR_LOOP_100097f4 == (undefined *)0x0) {
          PTR_LOOP_100097f4 = (undefined *)&PTR_LOOP_100097f0;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_100097f0;
        lpMem[1] = PTR_LOOP_100097f4;
        PTR_LOOP_100097f4 = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_100097f0) {
    HeapFree(DAT_1000c6c8,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_100058aa @ 0x100058aa

void __cdecl FUN_100058aa(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1000b810 == param_1) {
    PTR_LOOP_1000b810 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_100097f0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1000c6c8,0,param_1);
    return;
  }
  DAT_10009800 = 0xffffffff;
  return;
}



// Function: FUN_10005900 @ 0x10005900

void __cdecl FUN_10005900(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_100097f4;
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
            DAT_1000c3a8 = DAT_1000c3a8 + -1;
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
          FUN_100058aa(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_100097f4) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_100059c2 @ 0x100059c2

int __cdecl FUN_100059c2(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_100097f0;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_100097f0) {
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



// Function: FUN_10005a19 @ 0x10005a19

void __cdecl FUN_10005a19(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1000c3a8 = DAT_1000c3a8 + 1, DAT_1000c3a8 == 0x20)) {
    FUN_10005900(0x10);
  }
  return;
}



// Function: FUN_10005a5e @ 0x10005a5e

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10005a5e(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_1000b810;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10005c66(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10005b29;
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
          piVar5 = (int *)FUN_10005c66(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10005b29:
            PTR_LOOP_1000b810 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_1000b810) {
      ppuVar9 = &PTR_LOOP_100097f0;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_100097f0) {
          ppuVar9 = FUN_10005766();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1000b810 = (undefined *)ppuVar9;
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
      PTR_LOOP_1000b810 = (undefined *)ppuVar9;
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



// Function: FUN_10005c66 @ 0x10005c66

int __cdecl FUN_10005c66(int *param_1,uint param_2,uint param_3)

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
          goto LAB_10005d79;
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
LAB_10005d79:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_10005d8a @ 0x10005d8a

undefined4 __cdecl FUN_10005d8a(int param_1,int *param_2,byte *param_3,uint param_4)

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



// Function: FUN_10005e33 @ 0x10005e33

int __cdecl FUN_10005e33(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000c3ac == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000c3ac = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000c3ac != (FARPROC)0x0) {
        DAT_1000c3b0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000c3b4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10005e82;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10005e82:
    if (DAT_1000c3b0 != (FARPROC)0x0) {
      iVar1 = (*DAT_1000c3b0)();
      if ((iVar1 != 0) && (DAT_1000c3b4 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000c3b4)(iVar1);
      }
    }
    iVar1 = (*DAT_1000c3ac)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10005ec0

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
        goto joined_r0x10005efe;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10005f3b;
        goto LAB_10005fa9;
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
joined_r0x10005fa5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10005fa9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10005f3b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10005fa5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10005fa5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10005fa5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10005efe:
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
LAB_10005f3b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10005fbe @ 0x10005fbe

undefined4 __cdecl FUN_10005fbe(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000c3b8 != (code *)0x0) {
    iVar1 = (*DAT_1000c3b8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: _memset @ 0x10005fe0

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



// Function: __global_unwind2 @ 0x10006038

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10006050,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000607a

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
  puStack_18 = &LAB_10006058;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000610e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_1000610e @ 0x1000610e

void FUN_1000610e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000b828 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000b824 = in_EAX;
  DAT_1000b82c = unaff_EBP;
  return;
}



// Function: FUN_100061ed @ 0x100061ed

void FUN_100061ed(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10006208 @ 0x10006208

int __thiscall FUN_10006208(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_1000bba4 < 2) {
      uVar1 = (byte)PTR_DAT_1000b998[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_1000b998;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_1000687d(this,(uint)*param_1,8);
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
    if (DAT_1000bba4 < 2) {
      uVar2 = (byte)PTR_DAT_1000b998[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_1000687d(this,uVar4,4);
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



// Function: _strcmp @ 0x100062a0

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
      if (bVar4 != *_Str2) goto LAB_100062e4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100062b0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_100062e4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_100062e4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100062b0:
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
LAB_100062e4:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_10006324 @ 0x10006324

int __cdecl FUN_10006324(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_1000c7e4 != 0) &&
      ((DAT_1000c154 != (int *)0x0 ||
       (((DAT_1000c15c != 0 && (iVar1 = FUN_10006cb3(), iVar1 == 0)) && (DAT_1000c154 != (int *)0x0)
        ))))) && (piVar3 = DAT_1000c154, param_1 != (uchar *)0x0)) {
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



// Function: FUN_100063a1 @ 0x100063a1

int __cdecl
FUN_100063a1(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10008580;
  puStack_10 = &LAB_10006130;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000c3e0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000c3e0 = 2;
    }
    else {
      DAT_1000c3e0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100065c5(param_3,param_4);
  }
  if (DAT_1000c3e0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000c3e0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000c3d8;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10004bf0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10004bf0();
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



// Function: FUN_100065c5 @ 0x100065c5

int __cdecl FUN_100065c5(char *param_1,int param_2)

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



// Function: FUN_100065f0 @ 0x100065f0

BOOL __cdecl
FUN_100065f0(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_10008598;
  puStack_10 = &LAB_10006130;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000c3e4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000c3e4 == 0) {
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
  DAT_1000c3e4 = iVar3;
  if (DAT_1000c3e4 != 2) {
    if (DAT_1000c3e4 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000c3d8;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10004bf0();
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
    param_6 = DAT_1000c3c8;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10006739 @ 0x10006739

DWORD * FUN_10006739(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10002839();
  return pDVar1 + 2;
}



// Function: FUN_10006742 @ 0x10006742

uint __cdecl FUN_10006742(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1000c3c8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1000c478);
    bVar1 = DAT_1000c474 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1000c478);
      this = (void *)0x13;
      FUN_10003740(0x13);
    }
    param_1 = FUN_100067b1(this,param_1);
    if (bVar1) {
      FUN_100037a1(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1000c478);
    }
  }
  return param_1;
}



// Function: FUN_100067b1 @ 0x100067b1

uint __thiscall FUN_100067b1(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000c3c8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000bba4 < 2) {
        uVar2 = (byte)PTR_DAT_1000b998[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1000687d(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000b998[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100063a1(DAT_1000c3c8,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_1000687d @ 0x1000687d

uint __thiscall FUN_1000687d(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000b998 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000b998[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_100065f0(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10006900 @ 0x10006900

undefined4 * __cdecl FUN_10006900(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10006ab7_caseD_2;
        case 3:
          goto switchD_10006ab7_caseD_3;
        }
        goto switchD_10006ab7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006ab7_caseD_0;
      case 1:
        goto switchD_10006ab7_caseD_1;
      case 2:
        goto switchD_10006ab7_caseD_2;
      case 3:
        goto switchD_10006ab7_caseD_3;
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
              goto switchD_10006ab7_caseD_2;
            case 3:
              goto switchD_10006ab7_caseD_3;
            }
            goto switchD_10006ab7_caseD_1;
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
              goto switchD_10006ab7_caseD_2;
            case 3:
              goto switchD_10006ab7_caseD_3;
            }
            goto switchD_10006ab7_caseD_1;
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
              goto switchD_10006ab7_caseD_2;
            case 3:
              goto switchD_10006ab7_caseD_3;
            }
            goto switchD_10006ab7_caseD_1;
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
switchD_10006ab7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10006ab7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10006ab7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10006ab7_caseD_0:
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
        goto switchD_10006935_caseD_2;
      case 3:
        goto switchD_10006935_caseD_3;
      }
      goto switchD_10006935_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10006935_caseD_0;
    case 1:
      goto switchD_10006935_caseD_1;
    case 2:
      goto switchD_10006935_caseD_2;
    case 3:
      goto switchD_10006935_caseD_3;
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
            goto switchD_10006935_caseD_2;
          case 3:
            goto switchD_10006935_caseD_3;
          }
          goto switchD_10006935_caseD_1;
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
            goto switchD_10006935_caseD_2;
          case 3:
            goto switchD_10006935_caseD_3;
          }
          goto switchD_10006935_caseD_1;
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
            goto switchD_10006935_caseD_2;
          case 3:
            goto switchD_10006935_caseD_3;
          }
          goto switchD_10006935_caseD_1;
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
switchD_10006935_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10006935_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10006935_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10006935_caseD_0:
  return param_1;
}



// Function: __mbsnbicoll @ 0x10006c74

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_10006d21(DAT_1000c6c4,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_1000c498);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



// Function: FUN_10006cb3 @ 0x10006cb3

undefined4 FUN_10006cb3(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_1000c15c;
  puVar2 = DAT_1000c15c;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_10006f9e(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_10006d21 @ 0x10006d21

int __cdecl
FUN_10006d21(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
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
  puStack_c = &DAT_100085a8;
  puStack_10 = &LAB_10006130;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_1000c3f4 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000c3f4 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_1000c3f4 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_100065c5((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_100065c5((char *)param_5,param_6);
  }
  if (DAT_1000c3f4 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_1000c3f4 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000c3d8;
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
      FUN_10004bf0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_10004bf0();
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



// Function: FUN_10006f9e @ 0x10006f9e

undefined4 __cdecl FUN_10006f9e(uint *param_1,int param_2)

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
  puVar2 = (uint *)FUN_10007599((byte *)param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar7 = *(byte *)((int)puVar2 + 1) == 0;
  if (DAT_1000c154 == DAT_1000c158) {
    DAT_1000c154 = (byte *)FUN_1000717d((int *)DAT_1000c154);
  }
  if (DAT_1000c154 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_1000c15c == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_1000c154 = _malloc(4);
      if (DAT_1000c154 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_1000c154 + 1;
      pbVar6 = DAT_1000c154 + 2;
      pbVar1 = DAT_1000c154 + 3;
      DAT_1000c154[0] = 0;
      *pbVar4 = 0;
      *pbVar6 = 0;
      *pbVar1 = 0;
      if (DAT_1000c15c == (undefined4 *)0x0) {
        DAT_1000c15c = _malloc(4);
        if (DAT_1000c15c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1000c15c = 0;
      }
    }
    else {
      iVar3 = FUN_10006cb3();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_1000c154;
  iVar3 = FUN_10007125((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_1000726a(pbVar4,(uint *)(iVar3 * 4 + 8));
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
      goto LAB_100070d2;
    }
    pbVar6 = pbVar4 + iVar3 * 4;
    FUN_100037b6(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar6 != 0; pbVar6 = pbVar6 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar6 = *(int *)(pbVar6 + 4);
    }
    pbVar4 = FUN_1000726a(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_100070d2;
  }
  DAT_1000c154 = pbVar4;
LAB_100070d2:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_10003fa0(lpName,param_1);
      pbVar4 = (byte *)(((int)lpName - (int)param_1) + (int)puVar2);
      *pbVar4 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(pbVar4 + 1)));
      FUN_100037b6((undefined *)lpName);
    }
  }
  return 0;
}



// Function: FUN_10007125 @ 0x10007125

int __cdecl FUN_10007125(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_1000c154;
  piVar2 = DAT_1000c154;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_1000c154 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_1000c154 >> 2;
}



// Function: FUN_1000717d @ 0x1000717d

undefined4 * __cdecl FUN_1000717d(int *param_1)

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
      puVar4 = FUN_10007630(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100071f0 @ 0x100071f0

int __cdecl FUN_100071f0(byte *param_1,byte *param_2)

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



// Function: FUN_10007230 @ 0x10007230

byte * __cdecl FUN_10007230(byte *param_1,byte *param_2)

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



// Function: FUN_1000726a @ 0x1000726a

byte * __cdecl FUN_1000726a(byte *param_1,uint *param_2)

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
  puStack_c = &DAT_100085c0;
  puStack_10 = &LAB_10006130;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_100037b6(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_1000c6cc == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10003740(9);
            local_8 = 0;
            local_2c = (uint *)FUN_10004c67((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_1000c494) {
                iVar1 = FUN_10005470(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_10004fbb(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_10004500((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_10004c67((int)param_1);
                    FUN_10004c92(local_2c,(int)param_1);
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
                local_28 = HeapAlloc(DAT_1000c6c8,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_10004500((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10004c92(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_100073f5();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_1000c6c8,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_1000c3bc == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_10005fbe(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_1000c6cc == 2) {
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
              FUN_10003740(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_100059c2(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_1000c6c8,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_1000b814) {
                  iVar1 = FUN_10005d8a(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_10005a5e((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_10004500((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_10005a19(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_1000c6c8,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_10004500((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10005a19(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_10007543();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_1000c3bc == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_10005fbe(param_2);
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
              pbVar3 = HeapReAlloc(DAT_1000c6c8,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_1000c3bc == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_10005fbe(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



// Function: FUN_100073f5 @ 0x100073f5

void FUN_100073f5(void)

{
  FUN_100037a1(9);
  return;
}



// Function: FUN_10007543 @ 0x10007543

void FUN_10007543(void)

{
  FUN_100037a1(9);
  return;
}



// Function: FUN_10007599 @ 0x10007599

byte * __cdecl FUN_10007599(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (DAT_1000c4ac == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_10003740(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_1000c5c0 + uVar3 + 1) & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_100037a1(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_100037a1(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2 + 1;
    }
    FUN_100037a1(0x19);
    pbVar2 = (byte *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return pbVar2;
}



// Function: FUN_10007630 @ 0x10007630

uint * __cdecl FUN_10007630(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10003fa0(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}



// Function: FUN_10007660 @ 0x10007660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10007660(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1000c478;
  if (DAT_1000c3c8 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_100076ae;
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
LAB_100076ae:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1000c478 = _DAT_1000c478 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1000c474;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1000c478 = iVar2;
      FUN_10003740(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000770f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10007925(this,uVar8);
      uVar7 = FUN_10007925(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000770f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1000c478 = _DAT_1000c478 + -1;
      UNLOCK();
    }
    else {
      FUN_100037a1(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_10007730 @ 0x10007730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10007730(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1000c478;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1000c3c8 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000778f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000778f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1000c478 = _DAT_1000c478 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1000c474;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1000c478 = iVar2;
        FUN_10003740(0x13);
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
        uVar7 = FUN_10007925(param_3,uVar7);
        uVar5 = FUN_10007925(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10007805;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10007805:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1000c478 = _DAT_1000c478 + -1;
        UNLOCK();
      }
      else {
        FUN_100037a1(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_10007925 @ 0x10007925

uint __thiscall FUN_10007925(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000c3c8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000bba4 < 2) {
        uVar2 = (byte)PTR_DAT_1000b998[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1000687d(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000b998[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100063a1(DAT_1000c3c8,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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




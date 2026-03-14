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

undefined4 __cdecl
FUN_10001012(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CreateObject0(param_1,&DAT_10007898,param_2,param_4,param_3,0x80);
  return param_4;
}



// Function: OnInit @ 0x10001039

void OnInit(void)

{
                    /* 0x1039  1  OnInit */
  SetPlayerName(1,s_ENEMY_10007304);
  SetPlayerName(2,s_NEIRBORG_100072f8);
  SetPlayerName(3,s_SVEDES_100072f0);
  SetPlayerName(4,s_RUSSIANS_100072e4);
  SetPlayerName(5,s_ROBBERS_100072dc);
  RegisterVar(&DAT_100077a8,4);
  RegisterVar(&DAT_100077b8,4);
  RegisterVar(&DAT_10007998,4);
  RegisterVar(&DAT_10007b28,4);
  RegisterVar(&DAT_100077e0,4);
  RegisterVar(&DAT_100079d8,4);
  RegisterUnits(&DAT_100078a8,s_G0AKA_100072d4);
  RegisterUnits(&DAT_100079c8,&DAT_100072d0);
  RegisterUnits(&DAT_10007960,&DAT_100072cc);
  RegisterUnits(&DAT_10007968,&DAT_100072c8);
  RegisterUnits(&DAT_10007810,&DAT_100072c4);
  RegisterUnits(&DAT_10007818,&DAT_100072c0);
  RegisterUnits(&DAT_10007820,&DAT_100072bc);
  RegisterUnits(&DAT_10007840,&DAT_100072b8);
  RegisterUnits(&DAT_10007848,&DAT_100072b4);
  RegisterUnits(&DAT_100079c0,&DAT_100072b0);
  RegisterUnits(&DAT_10007878,&DAT_100072ac);
  RegisterUnits(&DAT_10007888,&DAT_100072a8);
  RegisterUnits(&DAT_100078c0,&DAT_100072a4);
  RegisterUnits(&DAT_100078e8,&DAT_100072a0);
  RegisterUnits(&DAT_10007910,&DAT_1000729c);
  RegisterUnits(&DAT_10007b38,&DAT_10007294);
  RegisterUnits(&DAT_10007b40,&DAT_1000728c);
  RegisterUnits(&DAT_10007858,&DAT_10007288);
  RegisterUnits(&DAT_10007860,&DAT_10007284);
  RegisterUnits(&DAT_10007868,&DAT_10007280);
  RegisterUnits(&DAT_10007870,&DAT_1000727c);
  RegisterUnits(&DAT_10007ab0,&DAT_10007288);
  RegisterUnits(&DAT_10007ac8,&DAT_10007284);
  RegisterUnits(&DAT_10007ad8,&DAT_10007280);
  RegisterUnits(&DAT_10007ae8,&DAT_1000727c);
  RegisterZone(&DAT_10007880,&DAT_10007278);
  RegisterZone(&DAT_10007890,&DAT_10007274);
  RegisterZone(&DAT_100078a0,&DAT_10007270);
  RegisterZone(&DAT_100078b0,&DAT_1000726c);
  RegisterZone(&DAT_10007a78,&DAT_10007268);
  RegisterZone(&DAT_100078b8,&DAT_10007264);
  RegisterZone(&DAT_100078c8,&DAT_10007260);
  RegisterZone(&DAT_10007a60,&DAT_1000725c);
  RegisterZone(&DAT_100078d0,&DAT_10007258);
  RegisterZone(&DAT_100078d8,&DAT_10007254);
  RegisterZone(&DAT_100079f8,&DAT_10007250);
  RegisterZone(&DAT_10007a08,&DAT_1000724c);
  RegisterZone(&DAT_10007a10,&DAT_10007248);
  RegisterZone(&DAT_10007a20,&DAT_10007244);
  RegisterZone(&DAT_10007a28,&DAT_10007240);
  RegisterZone(&DAT_10007a30,&DAT_1000723c);
  RegisterZone(&DAT_10007a40,&DAT_10007238);
  RegisterZone(&DAT_100079e0,&DAT_10007234);
  RegisterZone(&DAT_100079e8,&DAT_10007230);
  RegisterZone(&DAT_100079f0,&DAT_1000722c);
  RegisterZone(&DAT_10007a00,&DAT_10007228);
  RegisterZone(&DAT_10007b48,&DAT_10007220);
  RegisterZone(&DAT_10007b50,&DAT_10007218);
  RegisterZone(&DAT_10007a18,&DAT_10007214);
  RegisterZone(&DAT_10007b08,&DAT_10007210);
  RegisterZone(&DAT_10007a88,&DAT_1000720c);
  RegisterZone(&DAT_10007a98,&DAT_10007208);
  RegisterZone(&DAT_10007aa8,&DAT_10007204);
  RegisterZone(&DAT_10007ac0,&DAT_10007200);
  RegisterZone(&DAT_10007ad0,&DAT_100071fc);
  RegisterZone(&DAT_10007ae0,&DAT_100071f8);
  RegisterZone(&DAT_10007af0,&DAT_100071f4);
  RegisterZone(&DAT_10007af8,&DAT_100071f0);
  RegisterZone(&DAT_10007b00,&DAT_100071ec);
  RegisterZone(&DAT_10007b58,&DAT_100071e4);
  RegisterZone(&DAT_10007780,&DAT_100071dc);
  RegisterZone(&DAT_10007788,&DAT_100071d4);
  RegisterZone(&DAT_10007798,&DAT_100071cc);
  RegisterZone(&DAT_100077a0,&DAT_100071c4);
  RegisterZone(&DAT_100077b0,&DAT_100071bc);
  RegisterZone(&DAT_100077c0,&DAT_100071b4);
  RegisterZone(&DAT_100077c8,&DAT_100071ac);
  RegisterZone(&DAT_100077d0,&DAT_100071a4);
  RegisterZone(&DAT_100077d8,&DAT_1000719c);
  RegisterZone(&DAT_100077e8,s_Z10S0_10007194);
  RegisterUnits(&DAT_100078f8,&DAT_10007190);
  RegisterUnits(&DAT_10007900,&DAT_1000718c);
  RegisterUnits(&DAT_10007908,&DAT_10007188);
  RegisterUnits(&DAT_10007920,&DAT_10007184);
  RegisterUnits(&DAT_10007930,&DAT_10007180);
  RegisterUnits(&DAT_10007938,&DAT_1000717c);
  RegisterUnits(&DAT_10007948,&DAT_10007178);
  RegisterUnits(&DAT_10007950,&DAT_10007174);
  RegisterUnits(&DAT_10007958,&DAT_10007170);
  RegisterUnits(&DAT_10007a50,&DAT_10007168);
  RegisterUnits(&DAT_100079a0,&DAT_10007164);
  RegisterUnits(&DAT_100079a8,&DAT_10007160);
  RegisterUnits(&DAT_100079b0,&DAT_1000715c);
  RegisterZone(&DAT_10007b18,&DAT_10007158);
  RegisterZone(&DAT_10007b20,&DAT_10007154);
  RegisterDynGroup(&DAT_10007820);
  RegisterFormation(&DAT_100078e0,s__ALONE_1000714c);
  RegisterUnitType(&DAT_10007918,s_Strelec_Algir_DIP_DIP__10007134);
  RegisterDynGroup(&DAT_10007828);
  RegisterFormation(&DAT_100078f0,s__ALONE_1000714c);
  RegisterUnitType(&DAT_10007928,s_Grenader_DIP_DIP__10007120);
  RegisterDynGroup(&DAT_10007830);
  RegisterDynGroup(&DAT_10007838);
  RegisterUnitType(&DAT_10007940,s_MOLDAVAN_UN__10007110);
  RegisterUnitType(&DAT_100077f8,s_BGAUZ2_UN__10007104);
  RegisterVar(&DAT_10007820,8);
  RegisterVar(&DAT_10007828,8);
  RegisterVar(&DAT_10007830,8);
  RegisterVar(&DAT_10007838,8);
  RegisterUnitType(&DAT_10007790,s_shahta_PL__100070f8);
  RegisterUnitType(&DAT_100079d0,s_shahta_FE_PL__100070e8);
  RegisterUnitType(&DAT_10007800,s_shahta_UG_PL__100070d8);
  RegisterDynGroup(&DAT_10007808);
  RegisterDynGroup(&DAT_100079b8);
  RegisterDynGroup(&DAT_10007978);
  RegisterDynGroup(&DAT_10007980);
  RegisterDynGroup(&DAT_10007990);
  RegisterDynGroup(&DAT_10007988);
  RegisterVar(&DAT_10007808,8);
  RegisterVar(&DAT_100079b8,8);
  RegisterVar(&DAT_10007978,8);
  RegisterVar(&DAT_10007980,8);
  RegisterVar(&DAT_10007990,8);
  RegisterVar(&DAT_10007988,8);
  RegisterUnitType(&DAT_10007a58,s_Poland_pikiner_PL__100070c4);
  RegisterUnitType(&DAT_10007a70,s_Mushketer_polsha_PL__100070ac);
  RegisterUnitType(&DAT_10007a80,s_Krestian_Sved_SV__10007098);
  RegisterUnitType(&DAT_10007a90,s_Reitar_Shwec_SV__10007084);
  RegisterUnitType(&DAT_10007aa0,s_Pikiner_evro_SV__10007070);
  RegisterUnitType(&DAT_10007ab8,s_Mushketer_ev_SV__1000705c);
  RegisterDynGroup(&DAT_10007970);
  RegisterUnitType(&DAT_10007b10,s_Lodka_SV__10007050);
  RegisterDynGroup(&DAT_10007b30);
  RegisterUnitType(&DAT_100077f0,s_Dragun_18_DIP_SV__1000703c);
  RegisterVar(&DAT_10007970,8);
  RegisterVar(&DAT_10007b30,8);
  RegisterFormation(&DAT_10007898,s__ALONE_1000714c);
  RegisterFormation(&DAT_10007850,s__LINE40PUS_10007030);
  return;
}



// Function: ProcessScenary @ 0x1000169c

void ProcessScenary(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  
                    /* 0x169c  2  ProcessScenary */
  cVar1 = Trigg(99);
  pcVar14 = SetTrigg_exref;
  iVar13 = 1;
  if (cVar1 == '\0') goto LAB_10002004;
  SetStartPoint(&DAT_10007880);
  SelectUnits(&DAT_10007960,0);
  SelOpenGates(2);
  SelectUnits(&DAT_10007968,0);
  SelOpenGates(2);
  SelectUnits(&DAT_100079a8,0);
  SelectUnits(&DAT_100079b0,1);
  Patrol(2,&DAT_10007b20,0);
  SelectUnits(&DAT_100079a0,0);
  Patrol(2,&DAT_10007b18,0);
  ChangeFriends(2,0xfe);
  ChangeFriends(3,0xff);
  ChangeFriends(4,0xff);
  ChangeFriends(5,8);
  DAT_100077b8 = GetDiff(0);
  RunTimer(10,10);
  DAT_10007998 = DAT_100077b8 + 5;
  RunTimer(0x14,(6 - DAT_100077b8) * 22000);
  SetResource(3,0,(DAT_100077b8 + 1) * 50000);
  SetResource(3,3,(DAT_100077b8 + 1) * 0x1e848);
  SetResource(3,1,(DAT_100077b8 + 1) * 0x1e848);
  uVar2 = GetResource(3,0);
  SetResource(3,2,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,4,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,5,uVar2);
  SetResource(1,3,30000);
  SetResource(1,1,30000);
  if (DAT_100077b8 == 2) {
LAB_10001894:
    InitialUpgrade(&DAT_100072d0,s_AKA31SV_10007444);
    InitialUpgrade(&DAT_100072d0,s_AKA33SV_1000741c);
    InitialUpgrade(&DAT_100072d0,s_AKA34SV_10007414);
    InitialUpgrade(&DAT_100072d0,s_KUZ05SV_1000743c);
    InitialUpgrade(&DAT_100072d0,s_KUZ06SV_10007434);
    InitialUpgrade(&DAT_100072a8,s_AKA31PL_1000740c);
    InitialUpgrade(&DAT_100072a8,s_AKA34PL_10007404);
    InitialUpgrade(&DAT_100072a8,s_KUZ03PL_100073fc);
  }
  else if (DAT_100077b8 == 3) {
    InitialUpgrade(&DAT_100072d0,s_AKA31SV_10007444);
    InitialUpgrade(&DAT_100072d0,s_KUZ05SV_1000743c);
    InitialUpgrade(&DAT_100072d0,s_KUZ06SV_10007434);
    InitialUpgrade(&DAT_100072a8,s_KUZ05PL_1000742c);
    InitialUpgrade(&DAT_100072a8,s_KUZ06PL_10007424);
    goto LAB_10001894;
  }
  InitialUpgrade(&DAT_100072d0,s_MAINSV_100073f4);
  InitialUpgrade(&DAT_100072d0,s_AKA09SV_100073ec);
  InitialUpgrade(&DAT_100072d0,s_AKA09SV_100073ec);
  InitialUpgrade(&DAT_100072d0,s_AKA33SV_1000741c);
  InitialUpgrade(&DAT_100072d0,s_KUZ02SV_100073e4);
  InitialUpgrade(&DAT_100072d0,s_KUZ03SV_100073dc);
  InitialUpgrade(&DAT_100072d0,s_KUZ05SV_1000743c);
  InitialUpgrade(&DAT_100072d0,s_KUZ06SV_10007434);
  InitialUpgrade(&DAT_1000729c,s_AKA09PL_100073d4);
  InitialUpgrade(&DAT_100072a8,s_KUZ02PL_100073cc);
  InitialUpgrade(&DAT_100072a8,s_AKA33PL_100073c4);
  InitialUpgrade(s_G0AKA_100072d4,s_AKA28UA_100073bc);
  InitialUpgrade(s_G0AKA_100072d4,s_AKA33UA_100073b4);
  SelectUnits(&DAT_100079c8,0);
  SelErase(3);
  if (DAT_100077b8 == 0) {
    SelectUnits(&DAT_10007910,0);
    SelectUnits(&DAT_10007b38,1);
    SelectUnits(&DAT_10007b40,1);
    SelErase(2);
    SelectUnits(&DAT_10007888,0);
    SelectUnits(&DAT_100078c0,1);
    SelectUnits(&DAT_100078e8,1);
    SelectUnits(&DAT_10007878,1);
    SelectUnits(&DAT_10007860,1);
    SelectUnits(&DAT_10007868,1);
    SelectUnits(&DAT_10007870,1);
    SelectUnits(&DAT_10007ac8,1);
    SelectUnits(&DAT_10007ad8,1);
    SelectUnits(&DAT_10007ae8,1);
    SelErase(1);
    RemoveGroup(&DAT_10007858,&DAT_100079b8);
    DAT_100077e0 = 0x14;
    DAT_100079d8 = 0x24;
    RegisterFormation(&DAT_10007a38,s__LINE20PUS_1000738c);
    RegisterFormation(&DAT_10007a48,s__LINE36_10007398);
    SetTrigg(0x33,0);
    SetTrigg(0x34,0);
    SetTrigg(0x35,0);
    SetTrigg(0x36,0);
    SetTrigg(0x38,0);
    SetTrigg(0x39,0);
    SetTrigg(0x3a,0);
    SetTrigg(0x3b,0);
    SetTrigg(0x3c,0);
  }
  else {
    if (DAT_100077b8 == 1) {
      SelectUnits(&DAT_10007910,0);
      SelectUnits(&DAT_10007b38,1);
      SelectUnits(&DAT_10007b40,1);
      SelErase(2);
      SelectUnits(&DAT_10007888,0);
      SelectUnits(&DAT_100078c0,1);
      SelectUnits(&DAT_10007858,1);
      SelectUnits(&DAT_10007868,1);
      SelectUnits(&DAT_10007870,1);
      SelectUnits(&DAT_10007ab0,1);
      SelectUnits(&DAT_10007ad8,1);
      SelectUnits(&DAT_10007ae8,1);
      SelErase(1);
      RemoveGroup(&DAT_10007860,&DAT_100079b8);
      DAT_100077e0 = 0x28;
      DAT_100079d8 = 0x24;
      RegisterFormation(&DAT_10007a38,s__LINE40PUS_10007030);
      RegisterFormation(&DAT_10007a48,s__LINE36_10007398);
      SetTrigg(0x35,0);
      SetTrigg(0x36,0);
      SetTrigg(0x38,0);
      uVar2 = 0x39;
    }
    else {
      if (DAT_100077b8 != 2) {
        if (DAT_100077b8 == 3) {
          SelectUnits(&DAT_10007858,0);
          SelectUnits(&DAT_10007860,1);
          SelectUnits(&DAT_10007868,1);
          SelectUnits(&DAT_10007ab0,1);
          SelectUnits(&DAT_10007ac8,1);
          SelectUnits(&DAT_10007ad8,1);
          SelErase(1);
          RemoveGroup(&DAT_10007870,&DAT_100079b8);
          DAT_100077e0 = 100;
          DAT_100079d8 = 0x48;
          RegisterFormation(&DAT_10007a38,s__LINE100PUS_100073a8);
          RegisterFormation(&DAT_10007a48,s__LINE72_100073a0);
        }
        goto LAB_10001ce8;
      }
      SelectUnits(&DAT_10007858,0);
      SelectUnits(&DAT_10007860,1);
      SelectUnits(&DAT_10007870,1);
      SelectUnits(&DAT_10007ab0,1);
      SelectUnits(&DAT_10007ac8,1);
      SelectUnits(&DAT_10007ae8,1);
      SelErase(1);
      RemoveGroup(&DAT_10007868,&DAT_100079b8);
      DAT_100077e0 = 100;
      DAT_100079d8 = 0x48;
      RegisterFormation(&DAT_10007a38,s__LINE100PUS_100073a8);
      RegisterFormation(&DAT_10007a48,s__LINE72_100073a0);
      uVar2 = 0x35;
    }
    SetTrigg(uVar2,0);
  }
LAB_10001ce8:
  SelectUnits(&DAT_100079b8,0);
  SelSendTo(1,&DAT_100078b0,0x20,0);
  SetStandGround(1,1);
  if ((DAT_100077b8 != 0) && (DAT_100077ac = 0, 0 < DAT_100077e0)) {
    do {
      FUN_10001012(&DAT_10007990,&DAT_10007a58,&DAT_100078d8,1);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100077e0);
  }
  DAT_100077ac = 0;
  if (0 < DAT_100079d8) {
    do {
      FUN_10001012(&DAT_10007838,&DAT_10007940,&DAT_10007a18,2);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100079d8);
  }
  DAT_100077ac = 0;
  if (0 < DAT_100079d8) {
    do {
      FUN_10001012(&DAT_10007828,&DAT_10007928,&DAT_10007a18,2);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100079d8);
  }
  DAT_100077ac = 0;
  if (0 < DAT_100077e0) {
    do {
      FUN_10001012(&DAT_10007990,&DAT_10007a58,&DAT_100078d8,1);
      RemoveGroup(&DAT_10007990,&DAT_10007978);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100077e0);
  }
  SelectUnits(&DAT_10007978,0);
  SelSendAndKill(1,&DAT_100078b8,0x20,0);
  DAT_100077ac = 0;
  if (0 < DAT_100077e0) {
    do {
      FUN_10001012(&DAT_10007990,&DAT_10007a58,&DAT_100078d8,1);
      RemoveGroup(&DAT_10007990,&DAT_10007980);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100077e0);
  }
  SelectUnits(&DAT_10007980,0);
  SelSendAndKill(1,&DAT_100078c8,0x20,0);
  DAT_100077ac = 0;
  if (0 < DAT_100079d8) {
    do {
      FUN_10001012(&DAT_10007990,&DAT_10007a70,&DAT_100078d8,1);
      RemoveGroup(&DAT_10007990,&DAT_10007988);
      DAT_100077ac = DAT_100077ac + 1;
    } while (DAT_100077ac < DAT_100079d8);
  }
  SelectUnits(&DAT_10007988,0);
  SelSendAndKill(1,&DAT_100078d0,0x20,0);
  SetStandGround(1,1);
  SelectUnits(&DAT_10007810,0);
  SelectUnits(&DAT_10007818,1);
  SelectUnits(&DAT_10007848,1);
  SelectUnits(&DAT_100079c0,1);
  SelectUnitsType(&DAT_10007918,2,1);
  SelectUnitsType(&DAT_10007928,2,1);
  SelectUnitsType(&DAT_10007940,2,1);
  AllowAttack(2,0);
  SelectUnits(&DAT_10007810,0);
  SelSendTo(2,&DAT_10007b50,0x37,0);
  SelSendTo(2,&DAT_10007890,0,2);
  SelectUnits(&DAT_10007818,0);
  SelSendTo(2,&DAT_10007b50,0x37,0);
  SelSendTo(2,&DAT_100078a0,0,2);
  RunTimer(0xc,2000);
  SelectUnits(&DAT_10007988,0);
  SelectUnits(&DAT_100079b8,1);
  SelectUnits(&DAT_10007978,1);
  SelectUnits(&DAT_10007980,1);
  SelectUnits(&DAT_100078e8,1);
  DoNotUseSelInAI(1);
  ClearSelection(1);
  StartAI(1,s_POLAND_0_10007380,1,0,1,DAT_100077b8);
  ShowPage(s__PAGE0_10007378);
  SetTrigg(99,0);
LAB_10002004:
  iVar3 = GetResource(1,3);
  if (iVar3 < 500) {
    AddResource(1,3,1000);
  }
  iVar3 = GetResource(1,1);
  if (iVar3 < 500) {
    AddResource(1,1,1000);
  }
  iVar3 = GetResource(1,4);
  if (iVar3 < 500) {
    AddResource(1,4,1000);
  }
  iVar3 = GetResource(1,5);
  if (iVar3 < 500) {
    AddResource(1,5,1000);
  }
  iVar3 = GetResource(3,3);
  if (iVar3 < 500) {
    AddResource(3,3,1000);
  }
  iVar3 = GetResource(3,1);
  if (iVar3 < 500) {
    AddResource(3,1,1000);
  }
  iVar3 = GetResource(3,4);
  if (iVar3 < 500) {
    AddResource(3,4,1000);
  }
  iVar3 = GetResource(3,5);
  if (iVar3 < 500) {
    AddResource(3,5,1000);
  }
  cVar1 = TimerDone(10);
  if (cVar1 != '\0') {
    DAT_10007998 = DAT_10007998 + DAT_100077b8;
    iVar3 = GetResource(2,3);
    if (iVar3 < 10000) {
      AddResource(2,3,100000);
    }
    iVar3 = GetResource(2,1);
    if (iVar3 < 10000) {
      AddResource(2,1,100000);
    }
    iVar3 = GetResource(2,4);
    if (iVar3 < 10000) {
      AddResource(2,4,100000);
    }
    iVar3 = GetResource(2,5);
    if (iVar3 < 10000) {
      AddResource(2,5,100000);
    }
    DAT_10007b28 = DAT_10007b28 + (5 - DAT_100077b8) * 0x7b;
    RunTimer(10,11000);
  }
  cVar1 = Trigg(5);
  if (((cVar1 != '\0') && (cVar1 = Trigg(1), cVar1 != '\0')) &&
     ((iVar3 = GetUnitsAmount0(&DAT_10007890,2), 1 < iVar3 ||
      (cVar1 = TimerDone(0xc), cVar1 != '\0')))) {
    ShowPage(s__PAGE1_10007370);
    RunTimer(1,0x32);
    RunTimer(2,0x96);
    RunTimer(3,3000);
    SetTrigg(1,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SelectUnits(&DAT_10007810,0);
    SelSendTo(2,&DAT_100079e0,0xf,0);
    SetTrigg(2,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) {
    SelectUnits(&DAT_10007818,0);
    SelSendTo(2,&DAT_100079e8,0xf,0);
    SetTrigg(3,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SelectUnits(&DAT_10007960,0);
    SelCloseGates(2);
    SelectUnits(&DAT_10007968,0);
    SelCloseGates(2);
    ShowPage(s__PAGE6_10007368);
    SetTrigg(4,0);
  }
  cVar1 = Trigg(5);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_10007810,0);
    SelectUnits(&DAT_10007818,1);
    AllowAttack(2,0);
    ClearSelection(2);
  }
  cVar1 = Trigg(5);
  if (cVar1 != '\0') {
    iVar3 = GetUnitsAmount0(&DAT_10007b58,0);
    iVar4 = GetUnitsAmount0(&DAT_10007b00,0);
    iVar5 = GetUnitsAmount0(&DAT_10007af8,0);
    iVar6 = GetUnitsAmount0(&DAT_10007af0,0);
    iVar7 = GetUnitsAmount0(&DAT_10007ae0,0);
    iVar8 = GetUnitsAmount0(&DAT_10007ad0,0);
    iVar9 = GetUnitsAmount0(&DAT_10007ac0,0);
    iVar10 = GetUnitsAmount0(&DAT_10007aa8,0);
    iVar11 = GetUnitsAmount0(&DAT_10007a98,0);
    iVar12 = GetUnitsAmount0(&DAT_10007a88,0);
    pcVar14 = SetTrigg_exref;
    if (0 < iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12) {
      SelectUnits(&DAT_10007810,0);
      SelectUnits(&DAT_10007818,1);
      SelectUnits(&DAT_10007848,1);
      SelectUnitsType(&DAT_10007918,2,1);
      SelectUnitsType(&DAT_10007928,2,1);
      SelectUnitsType(&DAT_10007940,2,1);
      AllowAttack(2,1);
      SelectUnits(&DAT_100079a8,0);
      SelectUnits(&DAT_100079b0,1);
      SelSendTo(2,&DAT_10007b20,0,0);
      AllowAttack(2,1);
      SelectUnits(&DAT_100079a0,0);
      SelSendTo(2,&DAT_10007880,0,0);
      AllowAttack(2,1);
      Patrol(2,&DAT_10007b18,0);
      SelectUnits(&DAT_10007960,0);
      SelCloseGates(2);
      ShowPage(s__PAGE3_10007360);
      RunTimer(1,0);
      RunTimer(2,0);
      DAT_100077a8 = 1;
      RunTimer(4,0);
      pcVar14 = SetTrigg_exref;
      SetTrigg(5,0);
    }
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0xb), cVar1 != '\0')) {
    iVar3 = GetUnitsAmount0(&DAT_100077e8,0);
    iVar4 = GetUnitsAmount0(&DAT_100077d8,0);
    iVar5 = GetUnitsAmount0(&DAT_100077d0,0);
    iVar6 = GetUnitsAmount0(&DAT_100077c8,0);
    iVar7 = GetUnitsAmount0(&DAT_100077c0,0);
    iVar8 = GetUnitsAmount0(&DAT_100077b0,0);
    iVar9 = GetUnitsAmount0(&DAT_100077a0,0);
    iVar10 = GetUnitsAmount0(&DAT_10007798,0);
    iVar11 = GetUnitsAmount0(&DAT_10007788,0);
    iVar12 = GetUnitsAmount0(&DAT_10007780,0);
    pcVar14 = SetTrigg_exref;
    if (0 < iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12) {
      ShowPage(s__PAGE5_10007358);
      pcVar14 = SetTrigg_exref;
      SetTrigg(0xb,0);
    }
  }
  cVar1 = Trigg(0xb);
  if (cVar1 == '\0') {
    iVar3 = GetUnitsAmount0(&DAT_100077e8,0);
    iVar4 = GetUnitsAmount0(&DAT_100077d8,0);
    iVar5 = GetUnitsAmount0(&DAT_100077d0,0);
    iVar6 = GetUnitsAmount0(&DAT_100077c8,0);
    iVar7 = GetUnitsAmount0(&DAT_100077c0,0);
    iVar8 = GetUnitsAmount0(&DAT_100077b0,0);
    iVar9 = GetUnitsAmount0(&DAT_100077a0,0);
    iVar10 = GetUnitsAmount0(&DAT_10007798,0);
    iVar11 = GetUnitsAmount0(&DAT_10007788,0);
    iVar12 = GetUnitsAmount0(&DAT_10007780,0);
    pcVar14 = SetTrigg_exref;
    if (iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 == 0) {
      SetTrigg(0xb,1);
    }
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') &&
     ((iVar3 = GetTotalAmount0(&DAT_10007810), iVar3 == 0 ||
      (iVar3 = GetTotalAmount0(&DAT_10007818), iVar3 == 0)))) {
    SelectUnits(&DAT_10007810,0);
    SelectUnits(&DAT_10007818,1);
    SelectUnits(&DAT_10007848,1);
    SelectUnitsType(&DAT_10007918,2,1);
    SelectUnitsType(&DAT_10007928,2,1);
    SelectUnitsType(&DAT_10007940,2,1);
    AllowAttack(2,1);
    SelectUnits(&DAT_100079a8,0);
    SelectUnits(&DAT_100079b0,1);
    SelSendTo(2,&DAT_10007b20,0,0);
    AllowAttack(2,1);
    SelectUnits(&DAT_100079a0,0);
    SelSendTo(2,&DAT_10007880,0,0);
    AllowAttack(2,1);
    Patrol(2,&DAT_10007b18,0);
    SelectUnits(&DAT_10007960,0);
    SelCloseGates(2);
    ShowPage(s__PAGE4_10007350);
    RunTimer(1,0);
    RunTimer(2,0);
    DAT_100077a8 = 1;
    RunTimer(4,0);
    (*pcVar14)(5,0);
  }
  cVar1 = Trigg(5);
  if (cVar1 != '\0') {
    iVar3 = GetTotalAmount1(&DAT_10007800,2);
    iVar4 = GetTotalAmount1(&DAT_100079d0,2);
    iVar5 = GetTotalAmount1(&DAT_10007790,2);
    pcVar14 = SetTrigg_exref;
    if (iVar3 + iVar4 + iVar5 < 10) {
      SelectUnits(&DAT_10007810,0);
      SelectUnits(&DAT_10007818,1);
      SelectUnits(&DAT_10007848,1);
      SelectUnitsType(&DAT_10007918,2,1);
      SelectUnitsType(&DAT_10007928,2,1);
      SelectUnitsType(&DAT_10007940,2,1);
      AllowAttack(2,1);
      SelectUnits(&DAT_100079a8,0);
      SelectUnits(&DAT_100079b0,1);
      SelSendTo(2,&DAT_10007b20,0,0);
      AllowAttack(2,1);
      SelectUnits(&DAT_100079a0,0);
      SelSendTo(2,&DAT_10007880,0,0);
      AllowAttack(2,1);
      Patrol(2,&DAT_10007b18,0);
      SelectUnits(&DAT_10007960,0);
      SelCloseGates(2);
      ShowPage(s__PAGE3_10007360);
      RunTimer(1,0);
      RunTimer(2,0);
      DAT_100077a8 = 1;
      RunTimer(4,0);
      pcVar14 = SetTrigg_exref;
      SetTrigg(5,0);
    }
  }
  cVar1 = Trigg(0x33);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007a88,2), iVar3 == 0)) {
    SelectUnits(&DAT_100078f8,0);
    SelDie(2);
    (*pcVar14)(0x33,0);
  }
  cVar1 = Trigg(0x34);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007a98,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007900,0);
    SelDie(2);
    (*pcVar14)(0x34,0);
  }
  cVar1 = Trigg(0x35);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007aa8,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007908,0);
    SelDie(2);
    (*pcVar14)(0x35,0);
  }
  cVar1 = Trigg(0x36);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007ac0,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007920,0);
    SelDie(2);
    (*pcVar14)(0x36,0);
  }
  cVar1 = Trigg(0x38);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007ae0,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007938,0);
    SelDie(2);
    (*pcVar14)(0x38,0);
  }
  cVar1 = Trigg(0x39);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007af0,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007948,0);
    SelDie(2);
    (*pcVar14)(0x39,0);
  }
  cVar1 = Trigg(0x3a);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007af8,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007950,0);
    SelDie(2);
    (*pcVar14)(0x3a,0);
  }
  cVar1 = Trigg(0x3b);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007b00,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007958,0);
    SelDie(2);
    (*pcVar14)(0x3b,0);
  }
  cVar1 = Trigg(0x3c);
  if (((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007b58,2), iVar3 == 0)) {
    SelectUnits(&DAT_10007a50,0);
    SelDie(2);
    (*pcVar14)(0x3c,0);
  }
  cVar1 = Trigg(5);
  if ((((cVar1 == '\0') && (cVar1 = Trigg(0x3d), cVar1 != '\0')) &&
      (iVar3 = GetTotalAmount1(&DAT_100077f8,2), iVar3 == 0)) &&
     (iVar3 = GetUnitsAmount0(&DAT_10007b08,2), iVar3 == 0)) {
    ShowPageParam(s__PAGE9_10007348,DAT_10007b28 + 0x929,DAT_10007b28 + 0x4d2);
    AddResource(0,1,DAT_10007b28 + 0x929);
    AddResource(0,3,DAT_10007b28 + 0x4d2);
    AddResource(0,4,((4 - DAT_100077b8) * DAT_10007b28) / 10 + 0x4d2);
    AddResource(0,5,((4 - DAT_100077b8) * DAT_10007b28) / 10 + 0x598);
    (*pcVar14)(0x3d,0);
  }
  cVar1 = Trigg(0x3d);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
    if (DAT_10007998 < DAT_100077a8) {
      DAT_100077a8 = 1;
      RunTimer(4,5000);
      RunTimer(5,200);
      (*pcVar14)(6,0);
    }
    else {
      SelectUnits(&DAT_100079a8,0);
      SelectUnits(&DAT_100079b0,1);
      SelSendAndKill(2,&DAT_10007b20,0,0);
      AllowAttack(2,1);
      SelectUnits(&DAT_100079a0,0);
      SelSendAndKill(2,&DAT_10007880,0,0);
      AllowAttack(2,1);
      (*pcVar14)(8,1);
      CreateObject0(&DAT_10007820,&DAT_100078e0,&DAT_10007918,2,&DAT_100079f0,0);
      SelectUnits(&DAT_10007820,0);
      SelSendTo(2,&DAT_10007b48,0x8c,0);
      RemoveGroup(&DAT_10007820,&DAT_10007830);
      CreateObject0(&DAT_10007828,&DAT_100078f0,&DAT_10007928,2,&DAT_10007a00,0);
      SelectUnits(&DAT_10007828,0);
      SelSendTo(2,&DAT_10007b48,0x8c,0);
      RemoveGroup(&DAT_10007828,&DAT_10007830);
      DAT_100077a8 = DAT_100077a8 + 1;
      RunTimer(4,0x1e);
    }
  }
  cVar1 = Trigg(6);
  if ((cVar1 == '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    SelectUnits(&DAT_10007830,0);
    SelSendTo(2,&DAT_10007b50,0x37,0);
    SelectUnits(&DAT_10007968,0);
    SelOpenGates(2);
    RunTimer(5,200);
    (*pcVar14)(6,1);
    (*pcVar14)(7,0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 == '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    cVar1 = Trigg(10);
    if ((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) {
      SelectUnits(&DAT_10007840,0);
      SelSendAndKill(2,&DAT_10007880,0,0);
      (*pcVar14)(10,0);
    }
    (*pcVar14)(7,1);
    (*pcVar14)(8,0);
    (*pcVar14)(9,1);
    RunTimer(5,(DAT_10007998 + 10) * 100);
  }
  cVar1 = Trigg(8);
  if (((cVar1 == '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) &&
     (cVar1 = TimerDone(5), cVar1 != '\0')) {
    SelectUnits(&DAT_10007968,0);
    SelCloseGates(2);
    (*pcVar14)(9,0);
  }
  cVar1 = Trigg(8);
  if ((cVar1 == '\0') && (iVar3 = GetTotalAmount0(&DAT_10007830), iVar3 != 0)) {
    AttackEnemyInZone(&DAT_10007830,&DAT_10007880,0);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007a60,0), 0 < iVar3)) {
    SelectUnits(&DAT_10007978,0);
    SelectUnits(&DAT_10007980,1);
    SelSendAndKill(1,&DAT_10007a78,0x20,0);
    (*pcVar14)(0xc,0);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007a78,0), iVar3 == 0)) {
    SelectUnits(&DAT_10007978,0);
    SelSendAndKill(1,&DAT_100078b8,0x20,0);
    SelectUnits(&DAT_10007980,0);
    SelSendAndKill(1,&DAT_100078c8,0x20,0);
    (*pcVar14)(0xc,1);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007a78,0), 0 < iVar3)) {
    SelectUnits(&DAT_100079b8,0);
    SetStandGround(1,1);
    (*pcVar14)(0xe,0);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (iVar3 = GetUnitsAmount0(&DAT_10007a78,0), iVar3 == 0)) {
    SelectUnits(&DAT_100079b8,0);
    SelSendAndKill(1,&DAT_100078b0,0x20,0);
    (*pcVar14)(0xe,1);
  }
  cVar1 = Trigg(0x14);
  if ((cVar1 != '\0') &&
     ((cVar1 = TimerDone(0x14), cVar1 != '\0' || (cVar1 = Trigg(0x5b), cVar1 == '\0')))) {
    ShowPage(s__PAGE7_10007340);
    CreateObject0(&DAT_10007990,&DAT_10007850,&DAT_10007a80,3,&DAT_100079f8,0);
    if (2 < DAT_100077b8) {
      CreateObject0(&DAT_10007990,&DAT_10007850,&DAT_10007a80,3,&DAT_100079f8,0);
    }
    DAT_100077ac = 0;
    if (0 < DAT_100077e0 * 2) {
      do {
        CreateObject0(&DAT_10007990,&DAT_10007898,&DAT_100077f0,3,&DAT_100079f8,0);
        SelectUnits(&DAT_10007990,0);
        SelSendAndKill(3,&DAT_10007a08,0x20,0);
        RemoveGroup(&DAT_10007990,&DAT_10007b30);
        DAT_100077ac = DAT_100077ac + 1;
      } while (DAT_100077ac < DAT_100077e0 * 2);
    }
    SelectUnits(&DAT_10007b30,0);
    DoNotUseSelInAI(3);
    ClearSelection(3);
    ChangeFriends(3,0x1c);
    StartAI(3,s_SVEDEN_0_10007334,1,3,1,DAT_100077b8);
    RunTimer(0x15,2000);
    (*pcVar14)(0x14,0);
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x15), cVar1 != '\0')) {
    DAT_100077ac = 0;
    if (0 < DAT_100077e0 * 3) {
      do {
        FUN_10001012(&DAT_10007990,&DAT_10007a90,&DAT_100079f8,3);
        DAT_100077ac = DAT_100077ac + 1;
      } while (DAT_100077ac < DAT_100077e0 * 3);
    }
    DAT_100077ac = 0;
    if (0 < DAT_100079d8 * 2) {
      do {
        FUN_10001012(&DAT_10007990,&DAT_10007aa0,&DAT_100079f8,3);
        DAT_100077ac = DAT_100077ac + 1;
      } while (DAT_100077ac < DAT_100079d8 * 2);
    }
    DAT_100077ac = 0;
    if (0 < DAT_100079d8 * 2) {
      do {
        FUN_10001012(&DAT_10007990,&DAT_10007ab8,&DAT_100079f8,3);
        DAT_100077ac = DAT_100077ac + 1;
      } while (DAT_100077ac < DAT_100079d8 * 2);
    }
    RunTimer(0x16,(4 - DAT_100077b8) * 1000);
    (*pcVar14)(0x15,0);
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x16), cVar1 != '\0')) {
    CreateObject0(&DAT_10007970,&DAT_10007898,&DAT_10007b10,3,&DAT_10007b18,0);
    SelectUnits(&DAT_10007b30,0);
    SelectUnits(&DAT_10007970,1);
    SelSendTo(3,&DAT_10007a08,0x20,0);
    RunTimer(0x17,20000);
    (*pcVar14)(0x16,0);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x17), cVar1 != '\0')) {
    SelectUnits(&DAT_10007b30,0);
    SelSendAndKill(3,&DAT_10007880,0x20,0);
    (*pcVar14)(0x17,0);
  }
  cVar1 = Trigg(0x5b);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    ShowPage(s__PAGE11_1000732c);
    (*pcVar14)(0x5b,0);
  }
  cVar1 = Trigg(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage(s__PAGE12_10007324);
    (*pcVar14)(0x5c,0);
  }
  cVar1 = Trigg(0x15);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5d), cVar1 != '\0')) &&
     (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage(s__PAGE13_1000731c);
    (*pcVar14)(0x5d,0);
  }
  cVar1 = Trigg(0x5b);
  if (((cVar1 == '\0') &&
      ((cVar1 = Trigg(0x5c), cVar1 == '\0' || (cVar1 = Trigg(5), cVar1 != '\0')))) &&
     (cVar1 = Trigg(0x5d), cVar1 == '\0')) {
    ShowPage(s__PAGE10_10007314);
    iVar3 = iVar13;
    do {
      FreeTimer(iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x19);
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage(s__PAGE14_1000730c);
    do {
      FreeTimer(iVar13);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x19);
    LooseGame();
  }
  return;
}



// Function: FUN_100033ba @ 0x100033ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100033ba(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10007b7c = GetVersion();
    iVar1 = FUN_10003dee(1);
    if (iVar1 != 0) {
      _DAT_10007b88 = DAT_10007b7c >> 8 & 0xff;
      _DAT_10007b84 = DAT_10007b7c & 0xff;
      DAT_10007b7c = DAT_10007b7c >> 0x10;
      _DAT_10007b80 = _DAT_10007b84 * 0x100 + _DAT_10007b88;
      iVar1 = FUN_10003681();
      if (iVar1 != 0) {
        DAT_100080d8 = GetCommandLineA();
        DAT_10007b68 = FUN_10003cbc();
        FUN_100037a6();
        FUN_10003a6f();
        FUN_100039b6();
        FUN_10003563();
        DAT_10007b64 = DAT_10007b64 + 1;
        goto LAB_1000348d;
      }
      FUN_10003e2a();
    }
LAB_1000341a:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10007b64 < 1) goto LAB_1000341a;
      DAT_10007b64 = DAT_10007b64 + -1;
      if (DAT_10007bb4 == 0) {
        FUN_100035a1();
      }
      FUN_10003962();
      FUN_100036d5();
      FUN_10003e2a();
    }
    else if (param_2 == 3) {
      FUN_10003706((LPVOID)0x0);
    }
LAB_1000348d:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10003493

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10007b64;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_100034db;
    if ((DAT_100080dc != (code *)0x0) &&
       (iVar2 = (*DAT_100080dc)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100033ba(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_100034db:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100033ba(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100033ba(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_100080dc != (code *)0x0) {
      iVar2 = (*DAT_100080dc)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10003530

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10007b70 == 1) || ((DAT_10007b70 == 0 && (DAT_10007b74 == 1)))) {
    FUN_10003e9f();
  }
  FUN_10003ed8(param_1);
  (*(code *)PTR___exit_1000744c)(0xff);
  return;
}



// Function: FUN_10003563 @ 0x10003563

void FUN_10003563(void)

{
  if (DAT_100080d4 != (code *)0x0) {
    (*DAT_100080d4)();
  }
  FUN_10003667((undefined4 *)&DAT_10007008,(undefined4 *)&DAT_10007010);
  FUN_10003667((undefined4 *)&DAT_10007000,(undefined4 *)&DAT_10007004);
  return;
}



// Function: __exit @ 0x10003590

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_100035b0(_Code,1,0);
  return;
}



// Function: FUN_100035a1 @ 0x100035a1

void FUN_100035a1(void)

{
  FUN_100035b0(0,0,1);
  return;
}



// Function: FUN_100035b0 @ 0x100035b0

void __cdecl FUN_100035b0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10003655();
  if (DAT_10007bb8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10007bb4 = 1;
  DAT_10007bb0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_100080d0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_100080cc - 4), DAT_100080d0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_100080d0 <= puVar1);
    }
    FUN_10003667((undefined4 *)&DAT_10007014,(undefined4 *)&DAT_10007018);
  }
  FUN_10003667((undefined4 *)&DAT_1000701c,(undefined4 *)&DAT_10007020);
  if (param_3 == 0) {
    DAT_10007bb8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000365e();
  return;
}



// Function: FUN_10003655 @ 0x10003655

void FUN_10003655(void)

{
  FUN_100040c0(0xd);
  return;
}



// Function: FUN_1000365e @ 0x1000365e

void FUN_1000365e(void)

{
  FUN_10004121(0xd);
  return;
}



// Function: FUN_10003667 @ 0x10003667

void __cdecl FUN_10003667(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10003681 @ 0x10003681

undefined4 FUN_10003681(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000402b();
  DAT_10007450 = TlsAlloc();
  if (DAT_10007450 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10004136(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10007450,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100036f3((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_100036d5 @ 0x100036d5

void FUN_100036d5(void)

{
  FUN_10004054();
  if (DAT_10007450 != 0xffffffff) {
    TlsFree(DAT_10007450);
    DAT_10007450 = 0xffffffff;
  }
  return;
}



// Function: FUN_100036f3 @ 0x100036f3

void __cdecl FUN_100036f3(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100075d0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10003706 @ 0x10003706

void __cdecl FUN_10003706(LPVOID param_1)

{
  if (DAT_10007450 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_10007450), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_100041c3(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_100041c3(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_100041c3(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_100041c3(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_100041c3(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_100041c3(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_100075d0) {
        FUN_100041c3(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_100041c3(param_1);
    }
    TlsSetValue(DAT_10007450,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_100037a6 @ 0x100037a6

void FUN_100037a6(void)

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
  DAT_100080c0 = 0x20;
  DAT_10007fc0 = puVar2;
  for (; puVar2 < DAT_10007fc0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_100080c0 < (int)UVar8) {
      puVar2 = &DAT_10007fc4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_100080c0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_100080c0 = DAT_100080c0 + 0x20;
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
      } while ((int)DAT_100080c0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10007fc0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10007fc0 + iVar6 * 9;
    if (DAT_10007fc0[iVar6 * 9] == -1) {
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
          goto LAB_1000394b;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1000394b:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_100080c0);
      return;
    }
  } while( true );
}



// Function: FUN_10003962 @ 0x10003962

void FUN_10003962(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10007fc0;
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
      FUN_100041c3((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x100080c0);
  return;
}



// Function: FUN_100039b6 @ 0x100039b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100039b6(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_100080c8 == 0) {
    FUN_100047e3();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10007b68; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10007b98 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10007b68;
  puVar6 = DAT_10007b68;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100042a0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100041c3(DAT_10007b68);
  DAT_10007b68 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_100080c4 = 1;
  return;
}



// Function: FUN_10003a6f @ 0x10003a6f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003a6f(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_100080c8 == 0) {
    FUN_100047e3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10007bbc,0x104);
  _DAT_10007ba8 = &DAT_10007bbc;
  pbVar2 = &DAT_10007bbc;
  if (*DAT_100080d8 != 0) {
    pbVar2 = DAT_100080d8;
  }
  FUN_10003b08(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10003b08(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10007b90 = puVar1;
  _DAT_10007b8c = local_8 + -1;
  return;
}



// Function: FUN_10003b08 @ 0x10003b08

void __cdecl FUN_10003b08(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10007ea0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10007ea0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10003bb3;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10003bb3:
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
          if ((*(byte *)((int)&DAT_10007ea0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10007ea0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10003cbc @ 0x10003cbc

LPSTR FUN_10003cbc(void)

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
  if (DAT_10007cc0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10007cc0 = 1;
LAB_10003d13:
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
        FUN_100041c3(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10007cc0 = 2;
  }
  else {
    if (DAT_10007cc0 == 1) goto LAB_10003d13;
    if (DAT_10007cc0 != 2) {
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
    FUN_10004800((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10003dee @ 0x10003dee

undefined4 __cdecl FUN_10003dee(int param_1)

{
  int iVar1;
  
  DAT_10007fa8 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10007fa8 != (HANDLE)0x0) {
    iVar1 = FUN_10004b35();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_10007fa8);
  }
  return 0;
}



// Function: FUN_10003e2a @ 0x10003e2a

void FUN_10003e2a(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_10007d78) {
    puVar2 = (undefined4 *)((int)DAT_10007d7c + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_10007fa8,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10007d78);
  }
  HeapFree(DAT_10007fa8,0,DAT_10007d7c);
  HeapDestroy(DAT_10007fa8);
  return;
}



// Function: FUN_10003e9f @ 0x10003e9f

void FUN_10003e9f(void)

{
  if ((DAT_10007b70 == 1) || ((DAT_10007b70 == 0 && (DAT_10007b74 == 1)))) {
    FUN_10003ed8(0xfc);
    if (DAT_10007cc4 != (code *)0x0) {
      (*DAT_10007cc4)();
    }
    FUN_10003ed8(0xff);
  }
  return;
}



// Function: FUN_10003ed8 @ 0x10003ed8

void __cdecl FUN_10003ed8(DWORD param_1)

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
  pDVar2 = &DAT_10007480;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10007510);
  if (param_1 == (&DAT_10007480)[iVar5 * 2]) {
    if ((DAT_10007b70 == 1) || ((DAT_10007b70 == 0 && (DAT_10007b74 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10007484);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100042a0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100042a0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100042b0(local_a4,_Dest);
      FUN_100042b0(local_a4,(uint *)&DAT_1000641c);
      FUN_100042b0(local_a4,*(uint **)(iVar5 * 8 + 0x10007484));
      auStackY_1e3._3_4_ = 0x10003ffc;
      FUN_1000537e(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_1000402b @ 0x1000402b

void FUN_1000402b(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007554);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007544);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007534);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007514);
  return;
}



// Function: FUN_10004054 @ 0x10004054

void FUN_10004054(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10007510;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10007554)) && (ppuVar1 != &PTR_DAT_10007544)) &&
       ((ppuVar1 != &PTR_DAT_10007534 && (ppuVar1 != &PTR_DAT_10007514)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100041c3(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100075d0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007534);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007544);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007554);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10007514);
  return;
}



// Function: FUN_100040c0 @ 0x100040c0

void __cdecl FUN_100040c0(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10007510 + param_1;
  if ((&DAT_10007510)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100040c0(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100041c3(lpCriticalSection);
    }
    FUN_10004121(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10004121 @ 0x10004121

void __cdecl FUN_10004121(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10007510)[param_1]);
  return;
}



// Function: FUN_10004136 @ 0x10004136

int * __cdecl FUN_10004136(int param_1,int param_2)

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
      if (_Size < DAT_10007760 || (int)_Size - (int)DAT_10007760 == 0) {
        FUN_100040c0(9);
        piVar1 = FUN_10004ec9(_Size);
        FUN_10004121(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_10007fa8,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_10007d3c == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10005568(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_100041c3 @ 0x100041c3

void __cdecl FUN_100041c3(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_100040c0(9);
    puVar1 = (uint *)FUN_10004b73((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_10004b9e(puVar1,(uint)param_1);
      FUN_10004121(9);
      return;
    }
    FUN_10004121(9);
    HeapFree(DAT_10007fa8,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x1000420b

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10007d3c);
  return pvVar1;
}



// Function: __nh_malloc @ 0x1000421d

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_10004249((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10005568(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10004249 @ 0x10004249

int * __cdecl FUN_10004249(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10007760) {
    FUN_100040c0(9);
    piVar1 = FUN_10004ec9(param_1);
    FUN_10004121(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_10007fa8,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_100042a0 @ 0x100042a0

uint * __cdecl FUN_100042a0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10004388;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10004388:
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



// Function: FUN_100042b0 @ 0x100042b0

uint * __cdecl FUN_100042b0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100042cc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100042ff;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000431b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100042cc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000431b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000431b;
    }
  }
LAB_100042ff:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000431b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10004388:
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
    if (bVar1 == 0) goto LAB_10004388;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x10004390

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
    if (((uint)puVar2 & 3) == 0) goto LAB_100043b0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100043e3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100043b0:
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
  goto LAB_100043e3;
}



// Function: FUN_1000440b @ 0x1000440b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000440b(int param_1)

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
  
  FUN_100040c0(0x19);
  CodePage = FUN_100045b8(param_1);
  if (CodePage != DAT_10007d80) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10007668;
LAB_10004448:
      if (*pUVar5 != CodePage) goto code_r0x1000444c;
      local_8 = 0;
      puVar15 = &DAT_10007ea0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10007678);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10007660)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10007ea0 + uVar8 + 1);
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
      _DAT_10007d9c = 1;
      DAT_10007d80 = CodePage;
      DAT_10007fa4 = FUN_10004602(CodePage);
      DAT_10007d90 = *(undefined4 *)(iVar12 + 0x1000766c);
      DAT_10007d94 = *(undefined4 *)(iVar12 + 0x10007670);
      DAT_10007d98 = *(undefined4 *)(iVar12 + 0x10007674);
      goto LAB_1000459c;
    }
    goto LAB_10004597;
  }
  goto LAB_10004432;
code_r0x1000444c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10007757 < (int)pUVar5) goto code_r0x10004457;
  goto LAB_10004448;
code_r0x10004457:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10007fa4 = 0;
    puVar15 = &DAT_10007ea0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_10007d9c = 0;
      DAT_10007d80 = CodePage;
    }
    else {
      DAT_10007d80 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10007ea0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10007ea0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10007fa4 = FUN_10004602(CodePage);
      _DAT_10007d9c = 1;
    }
    DAT_10007d90 = 0;
    DAT_10007d94 = 0;
    DAT_10007d98 = 0;
  }
  else {
    if (DAT_10007d28 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100045a9;
    }
LAB_10004597:
    FUN_10004635();
  }
LAB_1000459c:
  FUN_1000465e();
LAB_10004432:
  uVar14 = 0;
LAB_100045a9:
  FUN_10004121(0x19);
  return uVar14;
}



// Function: FUN_100045b8 @ 0x100045b8

int __cdecl FUN_100045b8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10007d28 = 1;
                    /* WARNING: Could not recover jumptable at 0x100045d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10007d28 = 1;
                    /* WARNING: Could not recover jumptable at 0x100045e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10007d58;
  }
  DAT_10007d28 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10004602 @ 0x10004602

undefined4 __cdecl FUN_10004602(int param_1)

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



// Function: FUN_10004635 @ 0x10004635

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004635(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10007ea0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10007d80 = 0;
  _DAT_10007d9c = 0;
  DAT_10007fa4 = 0;
  DAT_10007d90 = 0;
  DAT_10007d94 = 0;
  DAT_10007d98 = 0;
  return;
}



// Function: FUN_1000465e @ 0x1000465e

void FUN_1000465e(void)

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
  
  BVar2 = GetCPInfo(DAT_10007d80,&local_18);
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
    FUN_100057d2(1,local_118,0x100,local_518,DAT_10007d80,DAT_10007fa4,0);
    FUN_10005583(DAT_10007fa4,0x100,local_118,0x100,local_218,0x100,DAT_10007d80,0);
    FUN_10005583(DAT_10007fa4,0x200,local_118,0x100,local_318,0x100,DAT_10007d80,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10007ea0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000476a;
        }
        (&DAT_10007da0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10007ea0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000476a:
        (&DAT_10007da0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10007ea0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_100047b4;
        }
        (&DAT_10007da0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10007ea0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_100047b4:
        (&DAT_10007da0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_100047e3 @ 0x100047e3

void FUN_100047e3(void)

{
  if (DAT_100080c8 == 0) {
    FUN_1000440b(-3);
    DAT_100080c8 = 1;
  }
  return;
}



// Function: FUN_10004800 @ 0x10004800

undefined4 * __cdecl FUN_10004800(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100049b7_caseD_2;
        case 3:
          goto switchD_100049b7_caseD_3;
        }
        goto switchD_100049b7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100049b7_caseD_0;
      case 1:
        goto switchD_100049b7_caseD_1;
      case 2:
        goto switchD_100049b7_caseD_2;
      case 3:
        goto switchD_100049b7_caseD_3;
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
              goto switchD_100049b7_caseD_2;
            case 3:
              goto switchD_100049b7_caseD_3;
            }
            goto switchD_100049b7_caseD_1;
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
              goto switchD_100049b7_caseD_2;
            case 3:
              goto switchD_100049b7_caseD_3;
            }
            goto switchD_100049b7_caseD_1;
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
              goto switchD_100049b7_caseD_2;
            case 3:
              goto switchD_100049b7_caseD_3;
            }
            goto switchD_100049b7_caseD_1;
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
switchD_100049b7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100049b7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100049b7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100049b7_caseD_0:
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
        goto switchD_10004835_caseD_2;
      case 3:
        goto switchD_10004835_caseD_3;
      }
      goto switchD_10004835_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004835_caseD_0;
    case 1:
      goto switchD_10004835_caseD_1;
    case 2:
      goto switchD_10004835_caseD_2;
    case 3:
      goto switchD_10004835_caseD_3;
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
            goto switchD_10004835_caseD_2;
          case 3:
            goto switchD_10004835_caseD_3;
          }
          goto switchD_10004835_caseD_1;
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
            goto switchD_10004835_caseD_2;
          case 3:
            goto switchD_10004835_caseD_3;
          }
          goto switchD_10004835_caseD_1;
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
            goto switchD_10004835_caseD_2;
          case 3:
            goto switchD_10004835_caseD_3;
          }
          goto switchD_10004835_caseD_1;
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
switchD_10004835_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004835_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004835_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004835_caseD_0:
  return param_1;
}



// Function: FUN_10004b35 @ 0x10004b35

undefined4 FUN_10004b35(void)

{
  DAT_10007d7c = HeapAlloc(DAT_10007fa8,0,0x140);
  if (DAT_10007d7c == (LPVOID)0x0) {
    return 0;
  }
  DAT_10007d74 = 0;
  DAT_10007d78 = 0;
  DAT_10007d70 = DAT_10007d7c;
  DAT_10007d68 = 0x10;
  return 1;
}



// Function: FUN_10004b73 @ 0x10004b73

uint __cdecl FUN_10004b73(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10007d7c;
  while( true ) {
    if (DAT_10007d7c + DAT_10007d78 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_10004b9e @ 0x10004b9e

void __cdecl FUN_10004b9e(uint *param_1,uint param_2)

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
  uVar5 = DAT_10007d6c;
  puVar2 = DAT_10007d74;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_10007d74 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_10007d6c * 0x8000 + DAT_10007d74[3]),0x8000,0x4000);
    DAT_10007d74[2] = DAT_10007d74[2] | 0x80000000U >> ((byte)DAT_10007d6c & 0x1f);
    *(undefined4 *)(DAT_10007d74[4] + 0xc4 + DAT_10007d6c * 4) = 0;
    *(char *)(DAT_10007d74[4] + 0x43) = *(char *)(DAT_10007d74[4] + 0x43) + -1;
    if (*(char *)(DAT_10007d74[4] + 0x43) == '\0') {
      DAT_10007d74[1] = DAT_10007d74[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_10007d74[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_10007d74[3],0,0x8000);
      HeapFree(DAT_10007fa8,0,(LPVOID)DAT_10007d74[4]);
      FUN_10005920(DAT_10007d74,DAT_10007d74 + 5,
                   (DAT_10007d78 * 0x14 - (int)DAT_10007d74) + -0x14 + DAT_10007d7c);
      DAT_10007d78 = DAT_10007d78 + -1;
      if (DAT_10007d74 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_10007d70 = DAT_10007d7c;
      puVar2 = param_1;
    }
  }
  DAT_10007d74 = puVar2;
  DAT_10007d6c = uVar5;
  return;
}



// Function: FUN_10004ec9 @ 0x10004ec9

int * __cdecl FUN_10004ec9(uint *param_1)

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
  
  puVar8 = DAT_10007d7c + DAT_10007d78 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10007d70;
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
  puVar11 = DAT_10007d7c;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10007d70 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10007d70) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10007d7c;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10007d70 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10007d70) && (param_1 = FUN_100051d2(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10005283((int)param_1);
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
  DAT_10007d70 = param_1;
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
    if (iVar9 == 0) goto LAB_1000518f;
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
LAB_1000518f:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10007d74)) && (local_8 == DAT_10007d6c)) {
    DAT_10007d74 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_100051d2 @ 0x100051d2

undefined4 * FUN_100051d2(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10007d78 == DAT_10007d68) {
    pvVar2 = HeapReAlloc(DAT_10007fa8,0,DAT_10007d7c,(DAT_10007d68 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10007d68 = DAT_10007d68 + 0x10;
    DAT_10007d7c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10007d7c + DAT_10007d78 * 0x14);
  pvVar2 = HeapAlloc(DAT_10007fa8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10007d78 = DAT_10007d78 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10007fa8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10005283 @ 0x10005283

int __cdecl FUN_10005283(int param_1)

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



// Function: FUN_1000537e @ 0x1000537e

int __cdecl FUN_1000537e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10007d2c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10007d2c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10007d2c != (FARPROC)0x0) {
        DAT_10007d30 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10007d34 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100053cd;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100053cd:
    if (DAT_10007d30 != (FARPROC)0x0) {
      iVar1 = (*DAT_10007d30)();
      if ((iVar1 != 0) && (DAT_10007d34 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10007d34)(iVar1);
      }
    }
    iVar1 = (*DAT_10007d2c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10005410

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
        goto joined_r0x1000544e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000548b;
        goto LAB_100054f9;
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
joined_r0x100054f5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_100054f9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000548b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x100054f5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x100054f5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x100054f5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000544e:
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
LAB_1000548b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: _memset @ 0x10005510

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



// Function: FUN_10005568 @ 0x10005568

undefined4 __cdecl FUN_10005568(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10007d38 != (code *)0x0) {
    iVar1 = (*DAT_10007d38)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10005583 @ 0x10005583

int __cdecl
FUN_10005583(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100064a0;
  puStack_10 = &LAB_10005d50;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10007d60 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10007d60 = 2;
    }
    else {
      DAT_10007d60 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100057a7(param_3,param_4);
  }
  if (DAT_10007d60 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10007d60 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10007d58;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10005e30();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10005e30();
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



// Function: FUN_100057a7 @ 0x100057a7

int __cdecl FUN_100057a7(char *param_1,int param_2)

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



// Function: FUN_100057d2 @ 0x100057d2

BOOL __cdecl
FUN_100057d2(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100064b8;
  puStack_10 = &LAB_10005d50;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10007d64;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10007d64 == 0) {
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
  DAT_10007d64 = iVar3;
  if (DAT_10007d64 != 2) {
    if (DAT_10007d64 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10007d58;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10005e30();
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
    param_6 = DAT_10007d48;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10005920 @ 0x10005920

undefined4 * __cdecl FUN_10005920(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10005ad7_caseD_2;
        case 3:
          goto switchD_10005ad7_caseD_3;
        }
        goto switchD_10005ad7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10005ad7_caseD_0;
      case 1:
        goto switchD_10005ad7_caseD_1;
      case 2:
        goto switchD_10005ad7_caseD_2;
      case 3:
        goto switchD_10005ad7_caseD_3;
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
              goto switchD_10005ad7_caseD_2;
            case 3:
              goto switchD_10005ad7_caseD_3;
            }
            goto switchD_10005ad7_caseD_1;
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
              goto switchD_10005ad7_caseD_2;
            case 3:
              goto switchD_10005ad7_caseD_3;
            }
            goto switchD_10005ad7_caseD_1;
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
              goto switchD_10005ad7_caseD_2;
            case 3:
              goto switchD_10005ad7_caseD_3;
            }
            goto switchD_10005ad7_caseD_1;
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
switchD_10005ad7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10005ad7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10005ad7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10005ad7_caseD_0:
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
        goto switchD_10005955_caseD_2;
      case 3:
        goto switchD_10005955_caseD_3;
      }
      goto switchD_10005955_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005955_caseD_0;
    case 1:
      goto switchD_10005955_caseD_1;
    case 2:
      goto switchD_10005955_caseD_2;
    case 3:
      goto switchD_10005955_caseD_3;
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
            goto switchD_10005955_caseD_2;
          case 3:
            goto switchD_10005955_caseD_3;
          }
          goto switchD_10005955_caseD_1;
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
            goto switchD_10005955_caseD_2;
          case 3:
            goto switchD_10005955_caseD_3;
          }
          goto switchD_10005955_caseD_1;
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
            goto switchD_10005955_caseD_2;
          case 3:
            goto switchD_10005955_caseD_3;
          }
          goto switchD_10005955_caseD_1;
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
switchD_10005955_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005955_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005955_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005955_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x10005c58

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10005c70,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10005c9a

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
  puStack_18 = &LAB_10005c78;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10005d2e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_10005d2e @ 0x10005d2e

void FUN_10005d2e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10007778 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10007774 = in_EAX;
  DAT_1000777c = unaff_EBP;
  return;
}



// Function: FUN_10005e0d @ 0x10005e0d

void FUN_10005e0d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10005e30 @ 0x10005e30

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10005e30(void)

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




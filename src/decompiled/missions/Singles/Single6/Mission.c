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

void __cdecl FUN_10001012(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = GetResource(param_1,iVar2);
    if (iVar1 < DAT_10007030) {
      AddResource(param_1,iVar2,DAT_10007030);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return;
}



// Function: FUN_10001043 @ 0x10001043

void __cdecl FUN_10001043(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = GetResource(param_1,param_2);
  if (iVar1 < 100000) {
    SetResource(param_1,param_2,10000000);
  }
  return;
}



// Function: FUN_10001071 @ 0x10001071

void __cdecl FUN_10001071(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_10001043(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}



// Function: FUN_10001088 @ 0x10001088

int __cdecl FUN_10001088(undefined4 param_1)

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
  } while (iVar2 < 7);
  return iVar2;
}



// Function: FUN_100010a6 @ 0x100010a6

int __cdecl FUN_100010a6(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = GetUnitsAmount2(param_1,&DAT_10007ab0,param_2);
  iVar2 = GetUnitsAmount0(param_1,param_2);
  iVar3 = GetUnitsAmount2(param_1,&DAT_100078b0,param_2);
  iVar4 = GetUnitsAmount2(param_1,&DAT_10007b10,param_2);
  iVar5 = GetUnitsAmount2(param_1,&DAT_100077c8,param_2);
  return (((iVar2 - iVar1) - iVar3) - iVar4) - iVar5;
}



// Function: FUN_10001103 @ 0x10001103

int __cdecl
FUN_10001103(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_10001088(param_1);
  SelectUnits(param_1,0);
  SetStandGround(iVar1,0);
  SelSendAndKill(iVar1,param_2,param_3,param_4);
  return iVar1;
}



// Function: FUN_1000113d @ 0x1000113d

void __cdecl FUN_1000113d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_10001103(param_1,param_2,param_3,0);
  return;
}



// Function: FUN_10001154 @ 0x10001154

undefined4 __cdecl
FUN_10001154(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CreateObject0(&DAT_100078d8,&DAT_10007958,param_2,param_4,param_3,0x80);
  RemoveGroup(&DAT_100078d8,param_1);
  return param_4;
}



// Function: FUN_1000118a @ 0x1000118a

undefined4 __cdecl
FUN_1000118a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10001088(param_1);
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
  if (iVar1 < param_4) {
    ProduceUnitFast(param_2,param_3,param_1,0);
    return 1;
  }
  return 0;
}



// Function: OnInit @ 0x1000126e

void OnInit(void)

{
                    /* 0x126e  1  OnInit */
  RegisterVar(&DAT_100077d0,4);
  RegisterVar(&DAT_10007a50,4);
  RegisterVar(&DAT_10007ab8,4);
  SetPlayerName(1,s_PRUSSIA_1000735c);
  SetPlayerName(2,s_DUTCH_10007354);
  SetPlayerName(5,s_DUTCH_10007354);
  SetPlayerName(3,s_ALLIES_1000734c);
  SetPlayerName(4,s_ALLIES_1000734c);
  SetPlayerName(6,s_ALLIES_1000734c);
  RegisterZone(&DAT_10007ad8,s_ZAttack_10007344);
  RegisterZone(&DAT_10007a58,&DAT_10007340);
  RegisterZone(&DAT_10007a60,&DAT_1000733c);
  RegisterZone(&DAT_10007930,&DAT_10007338);
  RegisterZone(&DAT_10007940,&DAT_10007334);
  RegisterZone(&DAT_10007950,&DAT_10007330);
  RegisterZone(&DAT_10007960,&DAT_1000732c);
  RegisterZone(&DAT_10007968,&DAT_10007328);
  RegisterZone(&DAT_10007978,&DAT_10007324);
  RegisterZone(&DAT_10007980,&DAT_10007320);
  RegisterZone(&DAT_10007988,&DAT_1000731c);
  RegisterZone(&DAT_10007998,&DAT_10007318);
  RegisterZone(&DAT_100079a0,&DAT_10007314);
  RegisterZone(&DAT_10007a68,&DAT_10007310);
  RegisterZone(&DAT_10007a70,&DAT_1000730c);
  RegisterZone(&DAT_10007a78,&DAT_10007308);
  RegisterUnits(&DAT_10007a10,s_GErase_10007300);
  RegisterUnits(&DAT_100079e0,&DAT_100072fc);
  RegisterUnits(&DAT_100079e8,&DAT_100072f8);
  RegisterDynGroup(&DAT_100078d8);
  RegisterDynGroup(&DAT_100078e0);
  RegisterDynGroup(&DAT_100078e8);
  RegisterDynGroup(&DAT_100078f0);
  RegisterDynGroup(&DAT_100078f8);
  RegisterDynGroup(&DAT_100079a8);
  RegisterVar(&DAT_100078d8,8);
  RegisterVar(&DAT_100078e0,8);
  RegisterVar(&DAT_100078e8,8);
  RegisterVar(&DAT_100078f0,8);
  RegisterVar(&DAT_100078f8,8);
  RegisterFormation(&DAT_10007958,s__ALONE_100072f0);
  RegisterUnits(&DAT_10007990,&DAT_100072e8);
  RegisterUnits(&DAT_10007898,&DAT_100072e0);
  RegisterUnits(&DAT_10007848,&DAT_100072d8);
  RegisterUnitType(&DAT_10007aa8,s_Lodka_SA__100072cc);
  RegisterUnitType(&DAT_10007a08,s_PERES_KOR_SA__100072bc);
  RegisterUnitType(&DAT_100079c0,s_Melnica_SA__100072b0);
  RegisterUnitType(&DAT_100079d0,s_shahta_SA__100072a4);
  RegisterUnitType(&DAT_10007af0,s_Sclad1_SA__10007298);
  RegisterUnitType(&DAT_10007b18,s_Dom_Saksona_SA__10007288);
  RegisterUnitType(&DAT_10007ac8,s_Konushnia_Swesair_SA__10007270);
  RegisterUnitType(&DAT_10007840,s_Kazarma_evro_SA__1000725c);
  RegisterUnitType(&DAT_10007b20,s_Center_Sacson_SA__10007248);
  RegisterUnitType(&DAT_10007a30,s_Kazarma_SA__1000723c);
  RegisterUnitType(&DAT_10007ae0,s_Melnica_GE__10007230);
  RegisterUnitType(&DAT_10007ae8,s_shahta_GE__10007224);
  RegisterUnitType(&DAT_10007a00,s_Europ_GE__10007218);
  RegisterUnitType(&DAT_100079b8,s_Melnica_DA__1000720c);
  RegisterUnitType(&DAT_100079b0,s_shahta_DA__10007200);
  RegisterUnitType(&DAT_10007af8,s_Europ_DA__100071f4);
  RegisterDynGroup(&DAT_10007a80);
  RegisterVar(&DAT_10007a80,8);
  RegisterUnitType(&DAT_100078b8,s_Fregat_SA__100071e8);
  RegisterDynGroup(&DAT_100078d0);
  RegisterVar(&DAT_100078d0,8);
  RegisterUnitType(&DAT_100077b8,s_Fregat_DA__100071dc);
  RegisterUnitType(&DAT_10007800,s_FregatNEW_DA__100071cc);
  RegisterDynGroup(&DAT_10007828);
  RegisterVar(&DAT_10007828,8);
  RegisterUnits(&DAT_10007850,&DAT_100071c4);
  RegisterUnitType(&DAT_10007b08,s_Yahta_SA__100071b8);
  RegisterUnitType(&DAT_100079f8,s_Linkor_SA__100071ac);
  RegisterUnitType(&DAT_100079d8,s_GALERA_SA__100071a0);
  RegisterUnitType(&DAT_10007ad0,s_Victoria_SA__10007190);
  RegisterUnitType(&DAT_10007ac0,s_FregatNEW_SA__10007180);
  RegisterUnitType(&DAT_10007910,s_KECH_SA__10007174);
  RegisterUnitType(&DAT_100077b0,s_KUTTER_SA__10007168);
  RegisterZone(&DAT_10007918,s_Zone1_10007160);
  RegisterZone(&DAT_10007920,s_Zone2_10007158);
  RegisterZone(&DAT_10007a38,s_Zone10_10007150);
  RegisterZone(&DAT_10007a48,s_Zone12_10007148);
  RegisterZone(&DAT_10007a40,s_Zone20_10007140);
  RegisterUnits(&DAT_100078a8,s_GBar4_10007138);
  RegisterUnits(&DAT_10007a28,s_GSta4_10007130);
  RegisterUnitType(&DAT_100077f8,s_Pik_evro_rus_SA__1000711c);
  RegisterUnitType(&DAT_100078c0,s_Mushketer_sakson_SA__10007104);
  RegisterUnitType(&DAT_100079c8,s_Grenader_Sacson_SA__100070f0);
  RegisterUnitType(&DAT_10007a18,s_Kiracir_Sacson_SA__100070dc);
  RegisterUnitType(&DAT_100079f0,s_Dragun_18_SA__100070cc);
  RegisterDynGroup(&DAT_10007830);
  RegisterVar(&DAT_10007830,8);
  RegisterDynGroup(&DAT_10007900);
  RegisterVar(&DAT_10007900,8);
  RegisterDynGroup(&DAT_10007928);
  RegisterVar(&DAT_10007928,8);
  RegisterDynGroup(&DAT_100077e0);
  RegisterVar(&DAT_100077e0,8);
  RegisterDynGroup(&DAT_10007938);
  RegisterVar(&DAT_10007938,8);
  RegisterDynGroup(&DAT_100077d8);
  RegisterVar(&DAT_100077d8,8);
  RegisterUnitType(&DAT_100078c8,s_PERES_KOR_SA__100072bc);
  RegisterDynGroup(&DAT_10007808);
  RegisterVar(&DAT_10007808,8);
  RegisterDynGroup(&DAT_10007810);
  RegisterVar(&DAT_10007810,8);
  RegisterZone(&DAT_10007a98,&DAT_100070c8);
  RegisterZone(&DAT_10007aa0,&DAT_100070c4);
  RegisterZone(&DAT_10007878,&DAT_100070bc);
  RegisterZone(&DAT_10007880,&DAT_100070b4);
  RegisterZone(&DAT_10007888,&DAT_100070ac);
  RegisterZone(&DAT_10007890,&DAT_100070a4);
  RegisterUnitType(&DAT_10007ab0,s_Lodka_DA__10007098);
  RegisterUnitType(&DAT_100078b0,s_Lodka_GE__1000708c);
  RegisterUnitType(&DAT_10007b10,s_PERES_KOR_DA__1000707c);
  RegisterUnitType(&DAT_100077c8,s_PERES_KOR_GE__1000706c);
  RegisterUnits(&DAT_100078a0,s_GBar3_10007064);
  RegisterUnits(&DAT_10007a20,s_GSta3_1000705c);
  RegisterDynGroup(&DAT_10007838);
  RegisterVar(&DAT_10007838,8);
  RegisterDynGroup(&DAT_10007908);
  RegisterVar(&DAT_10007908,8);
  RegisterDynGroup(&DAT_10007948);
  RegisterVar(&DAT_10007948,8);
  RegisterDynGroup(&DAT_100077e8);
  RegisterVar(&DAT_100077e8,8);
  RegisterDynGroup(&DAT_10007970);
  RegisterVar(&DAT_10007970,8);
  RegisterDynGroup(&DAT_100077f0);
  RegisterVar(&DAT_100077f0,8);
  RegisterDynGroup(&DAT_10007818);
  RegisterVar(&DAT_10007808,8);
  RegisterDynGroup(&DAT_10007820);
  RegisterVar(&DAT_10007810,8);
  RegisterZone(&DAT_10007a90,&DAT_10007058);
  RegisterZone(&DAT_10007a88,&DAT_10007054);
  RegisterZone(&DAT_10007858,&DAT_1000704c);
  RegisterZone(&DAT_10007860,&DAT_10007044);
  RegisterZone(&DAT_10007868,&DAT_1000703c);
  RegisterZone(&DAT_10007870,&DAT_10007034);
  return;
}



// Function: ProcessScenary @ 0x10001868

void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  int iStack_4;
  
                    /* 0x1868  2  ProcessScenary */
  pcVar10 = Trigg_exref;
  cVar1 = Trigg(0x5d);
  if (cVar1 != '\0') {
    cVar1 = Trigg(0x15);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0xc);
      if (cVar1 != '\0') {
        FUN_1000118a(&DAT_10007948,&DAT_100078a0,&DAT_100079c8,0xf);
      }
      cVar1 = Trigg(0xd);
      if (cVar1 != '\0') {
        FUN_1000118a(&DAT_100077e8,&DAT_10007a20,&DAT_10007a18,0xf);
      }
      FUN_1000118a(&DAT_10007838,&DAT_100078a0,&DAT_100079c8,3);
      FUN_1000118a(&DAT_10007838,&DAT_100078a0,&DAT_100078c0,3);
      FUN_1000118a(&DAT_10007908,&DAT_10007a20,&DAT_10007a18,3);
      FUN_1000118a(&DAT_10007908,&DAT_10007a20,&DAT_100079f0,3);
    }
    cVar1 = TimerDone(0x11);
    pcVar11 = SelectUnits_exref;
    if (cVar1 != '\0') {
      ClearSelection(3);
      pcVar11 = SelectUnits_exref;
      SelectUnits(&DAT_10007818,0);
      SelDie(3);
      SelectUnits(&DAT_10007820,0);
      SelDie(3);
      FreeTimer(0x11);
    }
    cVar1 = TimerDone(0xe);
    if (cVar1 != '\0') {
      cVar1 = Trigg(0xc);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10007818), iVar2 == 0)) {
        FUN_10001154(&DAT_10007818,&DAT_10007a08,&DAT_10007a88,3);
        (*pcVar11)(&DAT_10007818,0);
        SelSendTo(3,&DAT_10007858,0x40,0);
      }
      cVar1 = Trigg(0xd);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10007820), iVar2 == 0)) {
        FUN_10001154(&DAT_10007820,&DAT_10007a08,&DAT_10007a90,3);
        (*pcVar11)(&DAT_10007820,0);
        SelSendTo(3,&DAT_10007860,0x40,0);
      }
      iVar2 = GetTotalAmount0(&DAT_100077e8);
      iVar3 = GetTotalAmount0(&DAT_10007948);
      if (iVar2 + iVar3 < 10) {
        cVar1 = Trigg(0x16);
        if (cVar1 == '\0') {
          RemoveGroup(&DAT_10007948,&DAT_10007970);
        }
        cVar1 = Trigg(0x17);
        if (cVar1 == '\0') {
          RemoveGroup(&DAT_100077e8,&DAT_100077f0);
        }
        iStack_4 = 0x14;
        do {
          ProduceUnitFast(&DAT_100078a0,&DAT_100078c0,&DAT_10007948,0);
          ProduceUnitFast(&DAT_100078a0,&DAT_100079c8,&DAT_10007948,0);
          ProduceUnitFast(&DAT_10007a20,&DAT_10007a18,&DAT_100077e8,0);
          ProduceUnitFast(&DAT_10007a20,&DAT_100079f0,&DAT_100077e8,0);
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
        SetTrigg(0xc,1);
        SetTrigg(0xd,1);
      }
      RunTimer(0xe,1000);
    }
    cVar1 = Trigg(0x15);
    if ((((cVar1 != '\0') && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
        (iVar2 = GetTotalAmount0(&DAT_10007818), 0 < iVar2)) &&
       (iVar2 = GetTotalAmount0(&DAT_10007948), iVar2 != 0)) {
      SelectUnits(&DAT_10007818,0);
      iVar2 = GetTotalAmount0(&DAT_10007948);
      iVar3 = GetNInside(3);
      if ((iVar3 == iVar2) || (iVar2 = GetNInside(3), iVar2 == 0x50)) {
        SelSendTo(3,&DAT_10007868,0xc4,0);
        SetTrigg(0x16,1);
        cVar1 = CheckLeaveAbility(3);
        if (cVar1 == '\0') {
          SetTrigg(0xc,0);
        }
      }
      cVar1 = CheckLeaveAbility(3);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_10007948,1);
        SendUnitsToTransport(3);
      }
    }
    cVar1 = Trigg(0x15);
    if (((cVar1 != '\0') && (cVar1 = Trigg(0xd), cVar1 != '\0')) &&
       ((iVar2 = GetTotalAmount0(&DAT_10007820), 0 < iVar2 &&
        (iVar2 = GetTotalAmount0(&DAT_100077e8), iVar2 != 0)))) {
      SelectUnits(&DAT_10007820,0);
      iVar2 = GetTotalAmount0(&DAT_100077e8);
      iVar3 = GetNInside(3);
      if ((iVar3 == iVar2) || (iVar2 = GetNInside(3), iVar2 == 0x50)) {
        SelSendTo(3,&DAT_10007870,0xc4,0);
        SetTrigg(0x17,1);
        cVar1 = CheckLeaveAbility(3);
        if (cVar1 == '\0') {
          SetTrigg(0xd,0);
        }
      }
      cVar1 = CheckLeaveAbility(3);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_100077e8,1);
        SendUnitsToTransport(3);
      }
    }
    cVar1 = Trigg(0xc);
    if ((cVar1 == '\0') && (cVar1 = Trigg(0x16), cVar1 != '\0')) {
      SelectUnits(&DAT_10007818,0);
      cVar1 = CheckLeaveAbility(3);
      if ((cVar1 != '\0') && (iVar2 = GetNInside(3), 0 < iVar2)) {
        PushAllUnitsAway(3);
        cVar1 = Trigg(0x17);
        if (cVar1 == '\0') {
          RunTimer(0x11,2000);
        }
        SetTrigg(0x16,0);
      }
    }
    cVar1 = Trigg(0xd);
    if ((cVar1 == '\0') && (cVar1 = Trigg(0x17), cVar1 != '\0')) {
      SelectUnits(&DAT_10007820,0);
      cVar1 = CheckLeaveAbility(3);
      if ((cVar1 != '\0') && (iVar2 = GetNInside(3), 0 < iVar2)) {
        PushAllUnitsAway(3);
        cVar1 = Trigg(0x16);
        if (cVar1 == '\0') {
          RunTimer(0x11,2000);
        }
        SetTrigg(0x17,0);
      }
    }
    cVar1 = Trigg(0x16);
    if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10007948), 0 < iVar2)) {
      iVar2 = FUN_100010a6(&DAT_10007a40,2);
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,2);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,1);
          if (0 < iVar2) {
            uVar14 = 1;
            goto LAB_10001e1c;
          }
          iVar2 = FUN_100010a6(&DAT_10007a38,2);
          if (iVar2 < 1) {
            iVar2 = FUN_100010a6(&DAT_10007a38,1);
            if (iVar2 < 1) goto LAB_10001db8;
            uVar14 = 1;
            puVar13 = &DAT_10007a38;
            goto LAB_10001e5c;
          }
          uVar14 = 2;
          puVar13 = &DAT_10007a38;
          puVar12 = &DAT_10007928;
        }
        else {
          uVar14 = 2;
LAB_10001e1c:
          puVar13 = &DAT_10007a48;
LAB_10001e5c:
          puVar12 = &DAT_10007948;
        }
        AttackEnemyInZone(puVar12,puVar13,uVar14);
      }
      else {
        AttackEnemyInZone(&DAT_10007948,&DAT_10007a40);
      }
    }
LAB_10001db8:
    puVar13 = &DAT_10007a48;
    cVar1 = Trigg(0x17);
    if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_100077e8), 0 < iVar2)) {
      iVar2 = FUN_100010a6(&DAT_10007a40,2);
      uVar14 = 2;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,2);
        if (0 < iVar2) {
          uVar14 = 2;
          goto LAB_10001eb7;
        }
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (0 < iVar2) {
LAB_10001eb4:
          uVar14 = 1;
          goto LAB_10001eb7;
        }
        puVar13 = &DAT_10007a38;
        iVar2 = FUN_100010a6(&DAT_10007a38,2);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a38,1);
          if (iVar2 < 1) goto LAB_10001ec1;
          goto LAB_10001eb4;
        }
        uVar14 = 2;
        puVar13 = &DAT_10007a38;
        puVar12 = &DAT_10007928;
      }
      else {
        puVar13 = &DAT_10007a40;
LAB_10001eb7:
        puVar12 = &DAT_100077e8;
      }
      AttackEnemyInZone(puVar12,puVar13,uVar14);
    }
LAB_10001ec1:
    iVar2 = GetTotalAmount0(&DAT_10007970);
    if (0 < iVar2) {
      iVar2 = FUN_100010a6(&DAT_10007a40,2);
      uVar14 = 2;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,2);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,1);
          if (iVar2 < 1) {
            iVar2 = FUN_100010a6(&DAT_10007a38,2);
            if (iVar2 < 1) {
              iVar2 = FUN_100010a6(&DAT_10007a38,1);
              if (iVar2 < 1) goto LAB_10001f51;
              uVar14 = 1;
            }
            else {
              uVar14 = 2;
            }
            puVar13 = &DAT_10007a38;
            goto LAB_10001f4b;
          }
          uVar14 = 1;
        }
        else {
          uVar14 = 2;
        }
        puVar13 = &DAT_10007a48;
      }
      else {
        puVar13 = &DAT_10007a40;
      }
LAB_10001f4b:
      AttackEnemyInZone(&DAT_10007970,puVar13,uVar14);
    }
LAB_10001f51:
    iVar2 = GetTotalAmount0(&DAT_100077f0);
    if (0 < iVar2) {
      iVar2 = FUN_100010a6(&DAT_10007a40,2);
      uVar14 = 2;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,2);
        if (0 < iVar2) {
          uVar14 = 2;
LAB_10001fa9:
          puVar13 = &DAT_10007a48;
          goto LAB_10001fe9;
        }
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (0 < iVar2) {
          uVar14 = 1;
          goto LAB_10001fa9;
        }
        iVar2 = FUN_100010a6(&DAT_10007a38,2);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a38,1);
          if (iVar2 < 1) goto LAB_10001fef;
          uVar14 = 1;
          puVar13 = &DAT_10007a38;
          goto LAB_10001fe9;
        }
        uVar14 = 2;
        puVar13 = &DAT_10007a38;
        puVar12 = &DAT_10007928;
      }
      else {
        puVar13 = &DAT_10007a40;
LAB_10001fe9:
        puVar12 = &DAT_100077f0;
      }
      AttackEnemyInZone(puVar12,puVar13,uVar14);
    }
LAB_10001fef:
    iVar2 = FUN_100010a6(&DAT_10007920,2);
    iVar3 = FUN_100010a6(&DAT_10007920,1);
    if (iVar2 + iVar3 < 1) {
      cVar1 = Trigg(0x15);
      if (cVar1 == '\0') {
        FUN_1000113d(&DAT_10007838,&DAT_10007920,0xa1);
        FUN_1000113d(&DAT_10007908,&DAT_10007920,0xa1);
        SetTrigg(0x15,1);
      }
    }
    else {
      iVar2 = FUN_100010a6(&DAT_10007920,1);
      if (iVar2 < 1) {
        AttackEnemyInZone(&DAT_10007838,&DAT_10007920,2);
        AttackEnemyInZone(&DAT_10007908,&DAT_10007920,2);
        cVar1 = Trigg(0xc);
        if (cVar1 != '\0') {
          AttackEnemyInZone(&DAT_10007948,&DAT_10007920,2);
        }
        cVar1 = Trigg(0xd);
        if (cVar1 != '\0') {
          uVar14 = 2;
          goto LAB_10002099;
        }
      }
      else {
        AttackEnemyInZone(&DAT_10007838,&DAT_10007920,1);
        AttackEnemyInZone(&DAT_10007908,&DAT_10007920,1);
        cVar1 = Trigg(0xc);
        if (cVar1 != '\0') {
          AttackEnemyInZone(&DAT_10007948,&DAT_10007920,1);
        }
        cVar1 = Trigg(0xd);
        if (cVar1 != '\0') {
          uVar14 = 1;
LAB_10002099:
          AttackEnemyInZone(&DAT_100077e8,&DAT_10007920,uVar14);
        }
      }
      cVar1 = Trigg(0x15);
      if (cVar1 != '\0') {
        cVar1 = Trigg(0xc);
        if (cVar1 != '\0') {
          SelectUnits(&DAT_10007818,0);
          PushAllUnitsAway(3);
          FUN_1000113d(&DAT_10007948,&DAT_10007920,0xc4);
        }
        cVar1 = Trigg(0xd);
        if (cVar1 != '\0') {
          SelectUnits(&DAT_10007820,0);
          PushAllUnitsAway(3);
          FUN_1000113d(&DAT_100077e8,&DAT_10007920,0xc4);
        }
        SetTrigg(0x15,0);
      }
    }
  }
  cVar1 = Trigg(0x5e);
  if (cVar1 != '\0') {
    cVar1 = Trigg(0x1a);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0xf);
      if (cVar1 != '\0') {
        FUN_1000118a(&DAT_10007928,&DAT_100078a8,&DAT_100079c8,0xf);
      }
      cVar1 = Trigg(0xe);
      if (cVar1 != '\0') {
        FUN_1000118a(&DAT_100077e0,&DAT_10007a28,&DAT_10007a18,0xf);
      }
      FUN_1000118a(&DAT_10007830,&DAT_100078a8,&DAT_100079c8,3);
      FUN_1000118a(&DAT_10007830,&DAT_100078a8,&DAT_100078c0,3);
      FUN_1000118a(&DAT_10007900,&DAT_10007a28,&DAT_10007a18,3);
      FUN_1000118a(&DAT_10007900,&DAT_10007a28,&DAT_100079f0,3);
    }
    cVar1 = TimerDone(0x10);
    if (cVar1 != '\0') {
      ClearSelection(4);
      SelectUnits(&DAT_10007808,0);
      SelDie(4);
      SelectUnits(&DAT_10007810,0);
      SelDie(4);
      FreeTimer(0x10);
    }
    cVar1 = TimerDone(0xf);
    if (cVar1 != '\0') {
      cVar1 = Trigg(0xe);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10007808), iVar2 == 0)) {
        FUN_10001154(&DAT_10007808,&DAT_10007a08,&DAT_10007a98,4);
        SelectUnits(&DAT_10007808,0);
        SelSendTo(4,&DAT_10007878,0x40,0);
      }
      cVar1 = Trigg(0xf);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10007810), iVar2 == 0)) {
        FUN_10001154(&DAT_10007810,&DAT_10007a08,&DAT_10007aa0,4);
        SelectUnits(&DAT_10007810,0);
        SelSendTo(4,&DAT_10007880,0x40,0);
      }
      iVar2 = GetTotalAmount0(&DAT_100077e0);
      iVar3 = GetTotalAmount0(&DAT_10007928);
      if (iVar2 + iVar3 < 10) {
        cVar1 = Trigg(0x18);
        if (cVar1 == '\0') {
          RemoveGroup(&DAT_10007928,&DAT_10007938);
        }
        cVar1 = Trigg(0x19);
        if (cVar1 == '\0') {
          RemoveGroup(&DAT_100077e0,&DAT_100077d8);
        }
        iStack_4 = 0x14;
        do {
          ProduceUnitFast(&DAT_100078a8,&DAT_100078c0,&DAT_10007928,0);
          ProduceUnitFast(&DAT_100078a8,&DAT_100079c8,&DAT_10007928,0);
          ProduceUnitFast(&DAT_10007a28,&DAT_10007a18,&DAT_100077e0,0);
          ProduceUnitFast(&DAT_10007a28,&DAT_100079f0,&DAT_100077e0,0);
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
        SetTrigg(0xe,1);
        SetTrigg(0xf,1);
      }
      RunTimer(0xf,1000);
    }
    cVar1 = Trigg(0x1a);
    if ((((cVar1 != '\0') && (cVar1 = Trigg(0xe), cVar1 != '\0')) &&
        (iVar2 = GetTotalAmount0(&DAT_10007808), 0 < iVar2)) &&
       (iVar2 = GetTotalAmount0(&DAT_10007928), iVar2 != 0)) {
      SelectUnits(&DAT_10007808,0);
      iVar2 = GetTotalAmount0(&DAT_10007928);
      iVar3 = GetNInside(4);
      if ((iVar3 == iVar2) || (iVar2 = GetNInside(4), iVar2 == 0x50)) {
        SelSendTo(4,&DAT_10007888,0xc4,0);
        SetTrigg(0x18,1);
        cVar1 = CheckLeaveAbility(4);
        if (cVar1 == '\0') {
          SetTrigg(0xe,0);
        }
      }
      cVar1 = CheckLeaveAbility(4);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_10007928,1);
        SendUnitsToTransport(4);
      }
    }
    cVar1 = Trigg(0x1a);
    if (((cVar1 != '\0') && (cVar1 = Trigg(0xf), cVar1 != '\0')) &&
       ((iVar2 = GetTotalAmount0(&DAT_10007810), 0 < iVar2 &&
        (iVar2 = GetTotalAmount0(&DAT_100077e0), iVar2 != 0)))) {
      SelectUnits(&DAT_10007810,0);
      iVar2 = GetTotalAmount0(&DAT_100077e0);
      iVar3 = GetNInside(4);
      if ((iVar3 == iVar2) || (iVar2 = GetNInside(4), iVar2 == 0x50)) {
        SelSendTo(4,&DAT_10007890,0xc4,0);
        SetTrigg(0x19,1);
        cVar1 = CheckLeaveAbility(4);
        if (cVar1 == '\0') {
          SetTrigg(0xf,0);
        }
      }
      cVar1 = CheckLeaveAbility(4);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_100077e0,1);
        SendUnitsToTransport(4);
      }
    }
    cVar1 = Trigg(0xe);
    if ((cVar1 == '\0') && (cVar1 = Trigg(0x18), cVar1 != '\0')) {
      SelectUnits(&DAT_10007808,0);
      cVar1 = CheckLeaveAbility(4);
      if ((cVar1 != '\0') && (iVar2 = GetNInside(4), 0 < iVar2)) {
        PushAllUnitsAway(4);
        cVar1 = Trigg(0x19);
        if (cVar1 == '\0') {
          RunTimer(0x10,2000);
        }
        SetTrigg(0x18,0);
      }
    }
    cVar1 = Trigg(0xf);
    if ((cVar1 == '\0') && (cVar1 = Trigg(0x19), cVar1 != '\0')) {
      SelectUnits(&DAT_10007810,0);
      cVar1 = CheckLeaveAbility(4);
      if ((cVar1 != '\0') && (iVar2 = GetNInside(4), 0 < iVar2)) {
        PushAllUnitsAway(4);
        cVar1 = Trigg(0x18);
        if (cVar1 == '\0') {
          RunTimer(0x10,2000);
        }
        SetTrigg(0x19,0);
      }
    }
    cVar1 = Trigg(0x18);
    if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10007928), 0 < iVar2)) {
      iVar2 = FUN_100010a6(&DAT_10007a38,1);
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,2);
          if (0 < iVar2) {
            uVar14 = 2;
            goto LAB_1000270c;
          }
          iVar2 = FUN_100010a6(&DAT_10007a40,1);
          if (iVar2 < 1) {
            iVar2 = FUN_100010a6(&DAT_10007a40,2);
            if (iVar2 < 1) goto LAB_100026a8;
            uVar14 = 2;
          }
          else {
            uVar14 = 1;
          }
          puVar13 = &DAT_10007a40;
        }
        else {
          uVar14 = 1;
LAB_1000270c:
          puVar13 = &DAT_10007a48;
        }
        AttackEnemyInZone(&DAT_10007928,puVar13,uVar14);
      }
      else {
        AttackEnemyInZone(&DAT_10007928,&DAT_10007a38);
      }
    }
LAB_100026a8:
    puVar13 = &DAT_10007a48;
    cVar1 = Trigg(0x19);
    if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_100077e0), 0 < iVar2)) {
      iVar2 = FUN_100010a6(&DAT_10007a38,1);
      uVar14 = 1;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,2);
          if (iVar2 < 1) {
            iVar2 = FUN_100010a6(&DAT_10007a40,1);
            if (iVar2 < 1) {
              iVar2 = FUN_100010a6(&DAT_10007a40,2);
              if (iVar2 < 1) goto LAB_100027ad;
              uVar14 = 2;
            }
            else {
              uVar14 = 1;
            }
            puVar12 = &DAT_10007a40;
            goto LAB_100027a3;
          }
          uVar14 = 2;
        }
        else {
          uVar14 = 1;
        }
        puVar12 = &DAT_10007a48;
      }
      else {
        puVar12 = &DAT_10007a38;
      }
LAB_100027a3:
      AttackEnemyInZone(&DAT_100077e0,puVar12,uVar14);
    }
LAB_100027ad:
    iVar2 = GetTotalAmount0(&DAT_10007938);
    if (0 < iVar2) {
      iVar2 = FUN_100010a6(&DAT_10007a38,1);
      uVar14 = 1;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,2);
          if (iVar2 < 1) {
            puVar13 = &DAT_10007a40;
            iVar2 = FUN_100010a6(&DAT_10007a40,1);
            if (0 < iVar2) goto LAB_10002805;
            iVar2 = FUN_100010a6(&DAT_10007a40,2);
            if (iVar2 < 1) goto LAB_10002824;
          }
          uVar14 = 2;
        }
        else {
LAB_10002805:
          uVar14 = 1;
        }
      }
      else {
        puVar13 = &DAT_10007a38;
      }
      AttackEnemyInZone(&DAT_10007938,puVar13,uVar14);
    }
LAB_10002824:
    iVar2 = GetTotalAmount0(&DAT_100077d8);
    if (0 < iVar2) {
      iVar2 = FUN_100010a6(&DAT_10007a38,1);
      uVar14 = 1;
      if (iVar2 < 1) {
        iVar2 = FUN_100010a6(&DAT_10007a48,1);
        if (iVar2 < 1) {
          iVar2 = FUN_100010a6(&DAT_10007a48,2);
          if (iVar2 < 1) {
            iVar2 = FUN_100010a6(&DAT_10007a40,1);
            if (iVar2 < 1) {
              iVar2 = FUN_100010a6(&DAT_10007a40,2);
              if (iVar2 < 1) goto LAB_100028b4;
              uVar14 = 2;
            }
            else {
              uVar14 = 1;
            }
            puVar13 = &DAT_10007a40;
            goto LAB_100028ae;
          }
          uVar14 = 2;
        }
        else {
          uVar14 = 1;
        }
        puVar13 = &DAT_10007a48;
      }
      else {
        puVar13 = &DAT_10007a38;
      }
LAB_100028ae:
      AttackEnemyInZone(&DAT_100077d8,puVar13,uVar14);
    }
LAB_100028b4:
    iVar2 = FUN_100010a6(&DAT_10007918,2);
    iVar3 = FUN_100010a6(&DAT_10007918,1);
    if (iVar2 + iVar3 < 1) {
      cVar1 = Trigg(0x1a);
      if (cVar1 == '\0') {
        FUN_1000113d(&DAT_10007830,&DAT_10007918,0xa0);
        FUN_1000113d(&DAT_10007900,&DAT_10007918,0xa0);
        SetTrigg(0x1a,1);
      }
    }
    else {
      iVar2 = FUN_100010a6(&DAT_10007918,1);
      if (iVar2 < 1) {
        AttackEnemyInZone(&DAT_10007830,&DAT_10007918,2);
        AttackEnemyInZone(&DAT_10007900,&DAT_10007918,2);
        cVar1 = Trigg(0xe);
        if (cVar1 != '\0') {
          AttackEnemyInZone(&DAT_10007928,&DAT_10007918,2);
        }
        cVar1 = Trigg(0xf);
        if (cVar1 != '\0') {
          uVar14 = 2;
          goto LAB_1000295e;
        }
      }
      else {
        AttackEnemyInZone(&DAT_10007830,&DAT_10007918,1);
        AttackEnemyInZone(&DAT_10007900,&DAT_10007918,1);
        cVar1 = Trigg(0xe);
        if (cVar1 != '\0') {
          AttackEnemyInZone(&DAT_10007928,&DAT_10007918,1);
        }
        cVar1 = Trigg(0xf);
        if (cVar1 != '\0') {
          uVar14 = 1;
LAB_1000295e:
          AttackEnemyInZone(&DAT_100077e0,&DAT_10007918,uVar14);
        }
      }
      cVar1 = Trigg(0x1a);
      if (cVar1 != '\0') {
        cVar1 = Trigg(0xe);
        if (cVar1 != '\0') {
          SelectUnits(&DAT_10007808,0);
          PushAllUnitsAway(4);
          FUN_1000113d(&DAT_10007928,&DAT_10007918,0xc4);
        }
        cVar1 = Trigg(0xf);
        if (cVar1 != '\0') {
          SelectUnits(&DAT_10007810,0);
          PushAllUnitsAway(4);
          FUN_1000113d(&DAT_100077e0,&DAT_10007918,0xc4);
        }
        SetTrigg(0x1a,0);
      }
    }
  }
  cVar1 = TimerDone(10);
  if (cVar1 != '\0') {
    FUN_10001012(1);
    FUN_10001012(2);
    FUN_10001071(3);
    FUN_10001071(4);
    FUN_10001071(5);
    FUN_10001071(6);
    RunTimer(10,1000);
  }
  cVar1 = Trigg(0);
  if (cVar1 != '\0') {
    DAT_100077d0 = GetDiff(0);
    DAT_10007a50 = DAT_100077d0 + 1;
    DAT_10007ab8 = 0;
    ChangeFriends(1,0x26);
    ChangeFriends(2,0x26);
    ChangeFriends(5,0x26);
    ChangeFriends(3,0x59);
    ChangeFriends(4,0x59);
    ChangeFriends(6,0x59);
    SetResource(0,2,0);
    if (DAT_100077d0 == 0) {
      ClearSelection(1);
      SelectUnits(&DAT_100079e0,0);
      SelDie(1);
      ClearSelection(2);
      SelectUnits(&DAT_100079e8,0);
      SelDie(2);
      ClearSelection(1);
      ClearSelection(2);
    }
    if (DAT_100077d0 == 1) {
      ClearSelection(2);
      SelectUnits(&DAT_100079e8,0);
      SelDie(2);
      ClearSelection(2);
    }
    EnableUnit(0,&DAT_10007aa8,0);
    EnableUnit(0,&DAT_10007a08,0);
    EnableUnit(0,&DAT_100079d0,0);
    EnableUnit(0,&DAT_10007af0,0);
    EnableUnit(0,&DAT_100079c0,0);
    EnableUnit(0,&DAT_10007b18,0);
    EnableUnit(0,&DAT_10007840,0);
    EnableUnit(0,&DAT_10007ac8,0);
    EnableUnit(0,&DAT_10007b20,0);
    EnableUnit(0,&DAT_10007a30,0);
    EnableUnit(0,&DAT_10007ae8,0);
    EnableUnit(0,&DAT_10007ae0,0);
    EnableUnit(0,&DAT_10007a00,0);
    EnableUnit(0,&DAT_100079b0,0);
    EnableUnit(0,&DAT_100079b8,0);
    EnableUnit(0,&DAT_10007af8,0);
    InitialUpgrade(&DAT_100072e8,s_MAINSA_1000747c);
    InitialUpgrade(&DAT_100072e8,s_AKA30SA_10007474);
    InitialUpgrade(&DAT_100072e8,s_AKA06SA_1000746c);
    InitialUpgrade(&DAT_100072e8,s_AKA29SA_10007464);
    InitialUpgrade(&DAT_100072e0,s_MAINGE_1000745c);
    InitialUpgrade(&DAT_100072d8,s_MAINDA_10007454);
    InitialUpgrade(s_GBar3_10007064,s_MAINSA_1000747c);
    InitialUpgrade(s_GBar4_10007138,s_MAINSA_1000747c);
    if (DAT_100077d0 == 0) {
      InitialUpgrade(&DAT_100072e8,s_AKA16SA_1000744c);
      InitialUpgrade(&DAT_100072e8,s_AKA20SA_10007444);
      InitialUpgrade(&DAT_100072e8,s_AKA12SA_1000743c);
      InitialUpgrade(&DAT_100072e8,s_AKA13SA_10007434);
      InitialUpgrade(&DAT_100072e8,s_AKA32SA_1000742c);
LAB_10002c69:
      InitialUpgrade(&DAT_100072e8,s_AKA17SA_10007424);
      InitialUpgrade(&DAT_100072e8,s_AKA27SA_1000741c);
      InitialUpgrade(&DAT_100072e8,s_AKA28SA_10007414);
      InitialUpgrade(&DAT_100072e8,s_AKA14SA_1000740c);
      InitialUpgrade(&DAT_100072e8,s_AKA15SA_10007404);
      InitialUpgrade(&DAT_100072e8,s_AKA33SA_100073fc);
    }
    else if (DAT_100077d0 == 1) goto LAB_10002c69;
    if (DAT_100077d0 == 1) {
LAB_10002cef:
      InitialUpgrade(&DAT_100071c4,s_AKA27DA_100073c4);
    }
    else {
      if (DAT_100077d0 == 2) {
LAB_10002cc4:
        InitialUpgrade(&DAT_100071c4,s_AKA16DA_100073e4);
        InitialUpgrade(&DAT_100071c4,s_AKA28DA_100073dc);
        InitialUpgrade(&DAT_100072e0,s_KUZ04GE_100073d4);
        InitialUpgrade(&DAT_100072d8,s_KUZ04DA_100073cc);
        goto LAB_10002cef;
      }
      if (DAT_100077d0 == 3) {
        InitialUpgrade(&DAT_100071c4,s_AKA17DA_100073f4);
        InitialUpgrade(&DAT_100071c4,s_AKA20DA_100073ec);
        goto LAB_10002cc4;
      }
    }
    iVar2 = 0;
    if (DAT_100077d0 * 3 != -5 && -1 < DAT_100077d0 * 3 + 5) {
      do {
        FUN_10001154(&DAT_10007828,&DAT_100077b8,&DAT_10007a68,5);
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_100077d0 * 3 + 5);
    }
    if (1 < DAT_100077d0) {
      FUN_10001154(&DAT_10007828,&DAT_10007800,&DAT_10007a70,5);
    }
    if (2 < DAT_100077d0) {
      FUN_10001154(&DAT_10007828,&DAT_10007800,&DAT_10007a70,5);
    }
    FUN_1000113d(&DAT_10007828,&DAT_10007a68,0x40);
    StartAI(1,s_GERMAN_0_100073b8,2,1,1,DAT_100077d0);
    StartAI(2,s_DENMARK_0_100073ac,2,1,1,DAT_100077d0);
    RunTimer(3,0x96);
    RunTimer(5,1);
    RunTimer(6,300);
    RunTimer(7,30000);
    RunTimer(8,500);
    RunTimer(10,0);
    RunTimer(0xe,100);
    RunTimer(0xf,100);
    iStack_4 = 5;
    do {
      ProduceUnitFast(&DAT_100078a8,&DAT_100078c0,&DAT_10007830,0);
      ProduceUnitFast(&DAT_100078a8,&DAT_100079c8,&DAT_10007830,0);
      ProduceUnitFast(&DAT_10007a28,&DAT_10007a18,&DAT_10007900,0);
      ProduceUnitFast(&DAT_10007a28,&DAT_100079f0,&DAT_10007900,0);
      ProduceUnitFast(&DAT_100078a0,&DAT_100078c0,&DAT_10007838,0);
      ProduceUnitFast(&DAT_100078a0,&DAT_100079c8,&DAT_10007838,0);
      ProduceUnitFast(&DAT_10007a20,&DAT_10007a18,&DAT_10007908,0);
      ProduceUnitFast(&DAT_10007a20,&DAT_100079f0,&DAT_10007908,0);
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
    iVar2 = 1;
    do {
      iStack_4 = 0;
      if (0 < DAT_100077d0) {
        do {
          iVar3 = 0;
          do {
            AddResource(iVar2,iVar3,15000);
            iVar3 = iVar3 + 1;
          } while (iVar3 < 6);
          iStack_4 = iStack_4 + 1;
        } while (iStack_4 < DAT_100077d0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    SetLightSpot(&DAT_10007918,4,1);
    SetLightSpot(&DAT_10007920,4,2);
    ShowPage(s__PAGE1_100073a4);
    ShowPage(s__PAGE2_1000739c);
    SetTrigg(0,0);
    pcVar10 = Trigg_exref;
  }
  cVar1 = (*pcVar10)(8);
  pcVar11 = SetTrigg_exref;
  if ((cVar1 != '\0') && (cVar1 = TimerDone(8), pcVar11 = SetTrigg_exref, cVar1 != '\0')) {
    FUN_1000113d(&DAT_10007828,&DAT_10007960,0x40);
    pcVar11 = SetTrigg_exref;
    SetTrigg(8,0);
  }
  iVar2 = GetTotalAmount1(&DAT_10007b20,0);
  EnableUnit(0,&DAT_10007b20,iVar2 == 0);
  iVar2 = GetTotalAmount1(&DAT_10007a30,0);
  EnableUnit(0,&DAT_10007a30,iVar2 == 0);
  cVar1 = TimerDone(3);
  if ((cVar1 != '\0') && (cVar1 = (*pcVar10)(3), cVar1 != '\0')) {
    FUN_10001154(&DAT_10007a80,&DAT_100078b8,&DAT_10007940,6);
    FUN_1000113d(&DAT_10007a80,&DAT_10007968,0x40);
    RunTimer(3,500);
    (*pcVar11)(3,0);
    (*pcVar11)(4,0);
  }
  cVar1 = (*pcVar10)(3);
  if (cVar1 == '\0') {
    SelectUnits(&DAT_10007a80,0);
    SelCenter(&DAT_10007b00,6,1000);
    ClearLightSpot(3);
    SetLightSpot(&DAT_10007b00,1,3);
  }
  cVar1 = TimerDone(3);
  if (((cVar1 != '\0') && (cVar1 = (*pcVar10)(3), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount1(&DAT_10007940,&DAT_10007a80), 0 < iVar2)) {
    SelectUnits(&DAT_10007a80,0);
    SelErase(6);
    RunTimer(3,1000);
    (*pcVar11)(3,1);
  }
  iVar2 = GetUnitsAmount1(&DAT_10007968,&DAT_10007a80);
  if (0 < iVar2) {
    cVar1 = (*pcVar10)(4);
    if (cVar1 == '\0') {
      uVar14 = 0x40;
      puVar13 = &DAT_10007950;
    }
    else {
      uVar14 = 0;
      puVar13 = &DAT_10007940;
    }
    FUN_1000113d(&DAT_10007a80,puVar13,uVar14);
  }
  cVar1 = (*pcVar10)(4);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_10007950,&DAT_10007a80), 0 < iVar2)) {
    RunTimer(4,500);
    (*pcVar11)(4,1);
  }
  cVar1 = (*pcVar10)(4);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
    AddResource(0,0,20000);
    AddResource(0,3,20000);
    AddResource(0,1,20000);
    AddResource(0,4,20000);
    AddResource(0,5,20000);
    FUN_1000113d(&DAT_10007a80,&DAT_10007968,0);
    FreeTimer(4);
    pcVar11 = SetTrigg_exref;
  }
  cVar1 = (*pcVar10)(3);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10007a80), iVar2 == 0)) {
    cVar1 = (*pcVar10)(4);
    if (cVar1 == '\0') {
      uVar14 = 500;
    }
    else {
      uVar14 = 4000;
    }
    RunTimer(3,uVar14);
    (*pcVar11)(3,1);
  }
  cVar1 = TimerDone(5);
  if (cVar1 == '\0') goto LAB_10003274;
  if (DAT_10007a50 <= DAT_10007ab8) {
    DAT_10007ab8 = 0;
    RunTimer(5,(7 - DAT_100077d0) * 1000);
    goto LAB_10003274;
  }
  cVar1 = (*pcVar10)(5);
  if (cVar1 == '\0') {
    cVar1 = (*pcVar10)(6);
    if (cVar1 == '\0') {
      if (DAT_100077d0 < 2) {
        puVar13 = &DAT_10007978;
        goto LAB_10003200;
      }
      puVar13 = &DAT_10007980;
      puVar12 = &DAT_10007800;
    }
    else {
      puVar13 = &DAT_10007980;
LAB_10003200:
      puVar12 = &DAT_100077b8;
    }
    FUN_10001154(&DAT_100078d0,puVar12,puVar13,5);
    cVar1 = (*pcVar10)(6);
    (*pcVar11)(6,'\x01' - (cVar1 != '\0'));
  }
  else {
    FUN_10001154(&DAT_100078d0,&DAT_100077b8,&DAT_10007978,5);
  }
  cVar1 = (*pcVar10)(5);
  (*pcVar11)(5,'\x01' - (cVar1 != '\0'));
  FUN_1000113d(&DAT_100078d0,&DAT_10007b00,0x40);
  RunTimer(5,0x96);
  DAT_10007ab8 = DAT_10007ab8 + 1;
LAB_10003274:
  cVar1 = TimerDone(6);
  if (cVar1 != '\0') {
    FUN_1000113d(&DAT_100078d0,&DAT_10007b00,0x40);
    RunTimer(6,300);
  }
  if ((DAT_100077d0 != 0) && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    DAT_10007a50 = DAT_10007a50 + 1;
    RunTimer(7,(4 - DAT_100077d0) * 15000);
  }
  cVar1 = (*pcVar10)(0x5b);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), cVar1 != '\0')) {
    ShowPage(s__PAGE11_10007394);
    (*pcVar11)(0x5b,0);
  }
  cVar1 = (*pcVar10)(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage(s__PAGE12_1000738c);
    (*pcVar11)(0x5c,0);
  }
  cVar1 = (*pcVar10)(0x5d);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10007a20);
    iVar3 = GetTotalAmount0(&DAT_100078a0);
    if (iVar2 + iVar3 == 0) {
      ShowPage(s__PAGE13_10007384);
      cVar1 = (*pcVar10)(0x5e);
      if (cVar1 != '\0') {
        ShowPage(s__PAGE4_1000737c);
      }
      (*pcVar11)(0x5d,0);
    }
  }
  cVar1 = (*pcVar10)(0x5e);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(4), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10007a28);
    iVar3 = GetTotalAmount0(&DAT_100078a8);
    if (iVar2 + iVar3 == 0) {
      ShowPage(s__PAGE14_10007374);
      cVar1 = (*pcVar10)(0x5d);
      if (cVar1 != '\0') {
        ShowPage(s__PAGE4_1000737c);
      }
      (*pcVar11)(0x5e,0);
    }
  }
  cVar1 = (*pcVar10)(0x5a);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(0), cVar1 != '\0')) {
    iVar2 = GetTotalAmount1(&DAT_10007ad0,0);
    iVar3 = GetTotalAmount1(&DAT_10007ac0,0);
    iVar4 = GetTotalAmount1(&DAT_10007910,0);
    iVar5 = GetTotalAmount1(&DAT_100077b0,0);
    iVar6 = GetTotalAmount1(&DAT_100079f8,0);
    iVar7 = GetTotalAmount1(&DAT_100079d8,0);
    iVar8 = GetTotalAmount1(&DAT_10007b08,0);
    iVar9 = GetTotalAmount1(&DAT_100078b8,0);
    if (iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 == 0) {
      iVar2 = 1;
      do {
        cVar1 = TimerDone(iVar2);
        if (cVar1 == '\0') {
          RunTimer(iVar2,1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x1e);
      ShowPage(s__PAGE10_1000736c);
      LooseGame();
      (*pcVar11)(0x5a,0);
    }
  }
  cVar1 = (*pcVar10)(0x5b);
  if ((cVar1 == '\0') && (cVar1 = (*pcVar10)(0x5c), cVar1 == '\0')) {
    iVar2 = 1;
    do {
      cVar1 = TimerDone(iVar2);
      if (cVar1 == '\0') {
        FreeTimer(iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    ShowPage(s__PAGE20_10007364);
    ShowVictory();
  }
  return;
}



// Function: FUN_100034f9 @ 0x100034f9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100034f9(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10007b44 = GetVersion();
    iVar1 = FUN_10003f2d(1);
    if (iVar1 != 0) {
      _DAT_10007b50 = DAT_10007b44 >> 8 & 0xff;
      _DAT_10007b4c = DAT_10007b44 & 0xff;
      DAT_10007b44 = DAT_10007b44 >> 0x10;
      _DAT_10007b48 = _DAT_10007b4c * 0x100 + _DAT_10007b50;
      iVar1 = FUN_100037c0();
      if (iVar1 != 0) {
        DAT_10008098 = GetCommandLineA();
        DAT_10007b30 = FUN_10003dfb();
        FUN_100038e5();
        FUN_10003bae();
        FUN_10003af5();
        FUN_100036a2();
        DAT_10007b2c = DAT_10007b2c + 1;
        goto LAB_100035cc;
      }
      FUN_10003f69();
    }
LAB_10003559:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10007b2c < 1) goto LAB_10003559;
      DAT_10007b2c = DAT_10007b2c + -1;
      if (DAT_10007b7c == 0) {
        FUN_100036e0();
      }
      FUN_10003aa1();
      FUN_10003814();
      FUN_10003f69();
    }
    else if (param_2 == 3) {
      FUN_10003845((LPVOID)0x0);
    }
LAB_100035cc:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100035d2

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10007b2c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1000361a;
    if ((DAT_1000809c != (code *)0x0) &&
       (iVar2 = (*DAT_1000809c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100034f9(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1000361a:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100034f9(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100034f9(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000809c != (code *)0x0) {
      iVar2 = (*DAT_1000809c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x1000366f

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10007b38 == 1) || ((DAT_10007b38 == 0 && (DAT_10007b3c == 1)))) {
    FUN_10003fde();
  }
  FUN_10004017(param_1);
  (*(code *)PTR___exit_10007484)(0xff);
  return;
}



// Function: FUN_100036a2 @ 0x100036a2

void FUN_100036a2(void)

{
  if (DAT_10008094 != (code *)0x0) {
    (*DAT_10008094)();
  }
  FUN_100037a6((undefined4 *)&DAT_10007008,(undefined4 *)&DAT_10007010);
  FUN_100037a6((undefined4 *)&DAT_10007000,(undefined4 *)&DAT_10007004);
  return;
}



// Function: __exit @ 0x100036cf

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_100036ef(_Code,1,0);
  return;
}



// Function: FUN_100036e0 @ 0x100036e0

void FUN_100036e0(void)

{
  FUN_100036ef(0,0,1);
  return;
}



// Function: FUN_100036ef @ 0x100036ef

void __cdecl FUN_100036ef(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10003794();
  if (DAT_10007b80 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10007b7c = 1;
  DAT_10007b78 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10008090 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000808c - 4), DAT_10008090 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10008090 <= puVar1);
    }
    FUN_100037a6((undefined4 *)&DAT_10007014,(undefined4 *)&DAT_10007018);
  }
  FUN_100037a6((undefined4 *)&DAT_1000701c,(undefined4 *)&DAT_10007020);
  if (param_3 == 0) {
    DAT_10007b80 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000379d();
  return;
}



// Function: FUN_10003794 @ 0x10003794

void FUN_10003794(void)

{
  FUN_100041ff(0xd);
  return;
}



// Function: FUN_1000379d @ 0x1000379d

void FUN_1000379d(void)

{
  FUN_10004260(0xd);
  return;
}



// Function: FUN_100037a6 @ 0x100037a6

void __cdecl FUN_100037a6(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_100037c0 @ 0x100037c0

undefined4 FUN_100037c0(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000416a();
  DAT_10007488 = TlsAlloc();
  if (DAT_10007488 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10004275(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10007488,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10003832((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10003814 @ 0x10003814

void FUN_10003814(void)

{
  FUN_10004193();
  if (DAT_10007488 != 0xffffffff) {
    TlsFree(DAT_10007488);
    DAT_10007488 = 0xffffffff;
  }
  return;
}



// Function: FUN_10003832 @ 0x10003832

void __cdecl FUN_10003832(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10007608;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10003845 @ 0x10003845

void __cdecl FUN_10003845(LPVOID param_1)

{
  if (DAT_10007488 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_10007488), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_10004302(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_10004302(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_10004302(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_10004302(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_10004302(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_10004302(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10007608) {
        FUN_10004302(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_10004302(param_1);
    }
    TlsSetValue(DAT_10007488,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_100038e5 @ 0x100038e5

void FUN_100038e5(void)

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
  DAT_10008080 = 0x20;
  DAT_10007f80 = puVar2;
  for (; puVar2 < DAT_10007f80 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10008080 < (int)UVar8) {
      puVar2 = &DAT_10007f84;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10008080;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10008080 = DAT_10008080 + 0x20;
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
      } while ((int)DAT_10008080 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10007f80)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10007f80 + iVar6 * 9;
    if (DAT_10007f80[iVar6 * 9] == -1) {
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
          goto LAB_10003a8a;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10003a8a:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10008080);
      return;
    }
  } while( true );
}



// Function: FUN_10003aa1 @ 0x10003aa1

void FUN_10003aa1(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10007f80;
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
      FUN_10004302((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10008080);
  return;
}



// Function: FUN_10003af5 @ 0x10003af5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003af5(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10008088 == 0) {
    FUN_10004923();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10007b30; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10007b60 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10007b30;
  puVar6 = DAT_10007b30;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100043e0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10004302(DAT_10007b30);
  DAT_10007b30 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10008084 = 1;
  return;
}



// Function: FUN_10003bae @ 0x10003bae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003bae(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10008088 == 0) {
    FUN_10004923();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10007b84,0x104);
  _DAT_10007b70 = &DAT_10007b84;
  pbVar2 = &DAT_10007b84;
  if (*DAT_10008098 != 0) {
    pbVar2 = DAT_10008098;
  }
  FUN_10003c47(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10003c47(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10007b58 = puVar1;
  _DAT_10007b54 = local_8 + -1;
  return;
}



// Function: FUN_10003c47 @ 0x10003c47

void __cdecl FUN_10003c47(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10007e60 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10007e60 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10003cf2;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10003cf2:
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
          if ((*(byte *)((int)&DAT_10007e60 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10007e60 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10003dfb @ 0x10003dfb

LPSTR FUN_10003dfb(void)

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
  if (DAT_10007c88 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10007c88 = 1;
LAB_10003e52:
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
        FUN_10004302(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10007c88 = 2;
  }
  else {
    if (DAT_10007c88 == 1) goto LAB_10003e52;
    if (DAT_10007c88 != 2) {
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
    FUN_10004940((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10003f2d @ 0x10003f2d

undefined4 __cdecl FUN_10003f2d(int param_1)

{
  int iVar1;
  
  DAT_10007f68 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10007f68 != (HANDLE)0x0) {
    iVar1 = FUN_10004c75();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_10007f68);
  }
  return 0;
}



// Function: FUN_10003f69 @ 0x10003f69

void FUN_10003f69(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_10007d40) {
    puVar2 = (undefined4 *)((int)DAT_10007d44 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_10007f68,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10007d40);
  }
  HeapFree(DAT_10007f68,0,DAT_10007d44);
  HeapDestroy(DAT_10007f68);
  return;
}



// Function: FUN_10003fde @ 0x10003fde

void FUN_10003fde(void)

{
  if ((DAT_10007b38 == 1) || ((DAT_10007b38 == 0 && (DAT_10007b3c == 1)))) {
    FUN_10004017(0xfc);
    if (DAT_10007c8c != (code *)0x0) {
      (*DAT_10007c8c)();
    }
    FUN_10004017(0xff);
  }
  return;
}



// Function: FUN_10004017 @ 0x10004017

void __cdecl FUN_10004017(DWORD param_1)

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
  pDVar2 = &DAT_100074b8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10007548);
  if (param_1 == (&DAT_100074b8)[iVar5 * 2]) {
    if ((DAT_10007b38 == 1) || ((DAT_10007b38 == 0 && (DAT_10007b3c == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100074bc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100043e0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100043e0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100043f0(local_a4,_Dest);
      FUN_100043f0(local_a4,(uint *)&DAT_1000642c);
      FUN_100043f0(local_a4,*(uint **)(iVar5 * 8 + 0x100074bc));
      auStackY_1e3._3_4_ = 0x1000413b;
      FUN_100054be(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_1000416a @ 0x1000416a

void FUN_1000416a(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000758c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000757c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000756c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000754c);
  return;
}



// Function: FUN_10004193 @ 0x10004193

void FUN_10004193(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10007548;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000758c)) && (ppuVar1 != &PTR_DAT_1000757c)) &&
       ((ppuVar1 != &PTR_DAT_1000756c && (ppuVar1 != &PTR_DAT_1000754c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10004302(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10007608);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000756c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000757c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000758c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000754c);
  return;
}



// Function: FUN_100041ff @ 0x100041ff

void __cdecl FUN_100041ff(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10007548 + param_1;
  if ((&DAT_10007548)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100041ff(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10004302(lpCriticalSection);
    }
    FUN_10004260(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10004260 @ 0x10004260

void __cdecl FUN_10004260(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10007548)[param_1]);
  return;
}



// Function: FUN_10004275 @ 0x10004275

int * __cdecl FUN_10004275(int param_1,int param_2)

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
      if (_Size < DAT_10007790 || (int)_Size - (int)DAT_10007790 == 0) {
        FUN_100041ff(9);
        piVar1 = FUN_10005009(_Size);
        FUN_10004260(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_10007f68,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_10007d04 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_100056a8(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_10004302 @ 0x10004302

void __cdecl FUN_10004302(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_100041ff(9);
    puVar1 = (uint *)FUN_10004cb3((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_10004cde(puVar1,(uint)param_1);
      FUN_10004260(9);
      return;
    }
    FUN_10004260(9);
    HeapFree(DAT_10007f68,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x1000434a

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10007d04);
  return pvVar1;
}



// Function: __nh_malloc @ 0x1000435c

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_10004388((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_100056a8(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10004388 @ 0x10004388

int * __cdecl FUN_10004388(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10007790) {
    FUN_100041ff(9);
    piVar1 = FUN_10005009(param_1);
    FUN_10004260(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_10007f68,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_100043e0 @ 0x100043e0

uint * __cdecl FUN_100043e0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_100044c8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100044c8:
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



// Function: FUN_100043f0 @ 0x100043f0

uint * __cdecl FUN_100043f0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000440c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000443f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000445b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000440c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000445b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000445b;
    }
  }
LAB_1000443f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000445b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100044c8:
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
    if (bVar1 == 0) goto LAB_100044c8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x100044d0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_100044f0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10004523:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100044f0:
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
  goto LAB_10004523;
}



// Function: FUN_1000454b @ 0x1000454b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000454b(int param_1)

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
  
  FUN_100041ff(0x19);
  CodePage = FUN_100046f8(param_1);
  if (CodePage != DAT_10007d48) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10007698;
LAB_10004588:
      if (*pUVar5 != CodePage) goto code_r0x1000458c;
      local_8 = 0;
      puVar15 = &DAT_10007e60;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100076a8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10007690)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10007e60 + uVar8 + 1);
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
      _DAT_10007d5c = 1;
      DAT_10007d48 = CodePage;
      DAT_10007f64 = FUN_10004742(CodePage);
      DAT_10007d50 = *(undefined4 *)(iVar12 + 0x1000769c);
      DAT_10007d54 = *(undefined4 *)(iVar12 + 0x100076a0);
      DAT_10007d58 = *(undefined4 *)(iVar12 + 0x100076a4);
      goto LAB_100046dc;
    }
    goto LAB_100046d7;
  }
  goto LAB_10004572;
code_r0x1000458c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10007787 < (int)pUVar5) goto code_r0x10004597;
  goto LAB_10004588;
code_r0x10004597:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10007f64 = 0;
    puVar15 = &DAT_10007e60;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_10007d5c = 0;
      DAT_10007d48 = CodePage;
    }
    else {
      DAT_10007d48 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10007e60 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10007e60 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10007f64 = FUN_10004742(CodePage);
      _DAT_10007d5c = 1;
    }
    DAT_10007d50 = 0;
    DAT_10007d54 = 0;
    DAT_10007d58 = 0;
  }
  else {
    if (DAT_10007cf0 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100046e9;
    }
LAB_100046d7:
    FUN_10004775();
  }
LAB_100046dc:
  FUN_1000479e();
LAB_10004572:
  uVar14 = 0;
LAB_100046e9:
  FUN_10004260(0x19);
  return uVar14;
}



// Function: FUN_100046f8 @ 0x100046f8

int __cdecl FUN_100046f8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10007cf0 = 1;
                    /* WARNING: Could not recover jumptable at 0x10004712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10007cf0 = 1;
                    /* WARNING: Could not recover jumptable at 0x10004727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10007d20;
  }
  DAT_10007cf0 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10004742 @ 0x10004742

undefined4 __cdecl FUN_10004742(int param_1)

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



// Function: FUN_10004775 @ 0x10004775

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004775(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10007e60;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10007d48 = 0;
  _DAT_10007d5c = 0;
  DAT_10007f64 = 0;
  DAT_10007d50 = 0;
  DAT_10007d54 = 0;
  DAT_10007d58 = 0;
  return;
}



// Function: FUN_1000479e @ 0x1000479e

void FUN_1000479e(void)

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
  
  BVar2 = GetCPInfo(DAT_10007d48,&local_18);
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
    FUN_10005912(1,local_118,0x100,local_518,DAT_10007d48,DAT_10007f64,0);
    FUN_100056c3(DAT_10007f64,0x100,local_118,0x100,local_218,0x100,DAT_10007d48,0);
    FUN_100056c3(DAT_10007f64,0x200,local_118,0x100,local_318,0x100,DAT_10007d48,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10007e60 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_100048aa;
        }
        (&DAT_10007d60)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10007e60 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_100048aa:
        (&DAT_10007d60)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10007e60 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_100048f4;
        }
        (&DAT_10007d60)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10007e60 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_100048f4:
        (&DAT_10007d60)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10004923 @ 0x10004923

void FUN_10004923(void)

{
  if (DAT_10008088 == 0) {
    FUN_1000454b(-3);
    DAT_10008088 = 1;
  }
  return;
}



// Function: FUN_10004940 @ 0x10004940

undefined4 * __cdecl FUN_10004940(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10004af7_caseD_2;
        case 3:
          goto switchD_10004af7_caseD_3;
        }
        goto switchD_10004af7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10004af7_caseD_0;
      case 1:
        goto switchD_10004af7_caseD_1;
      case 2:
        goto switchD_10004af7_caseD_2;
      case 3:
        goto switchD_10004af7_caseD_3;
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
              goto switchD_10004af7_caseD_2;
            case 3:
              goto switchD_10004af7_caseD_3;
            }
            goto switchD_10004af7_caseD_1;
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
              goto switchD_10004af7_caseD_2;
            case 3:
              goto switchD_10004af7_caseD_3;
            }
            goto switchD_10004af7_caseD_1;
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
              goto switchD_10004af7_caseD_2;
            case 3:
              goto switchD_10004af7_caseD_3;
            }
            goto switchD_10004af7_caseD_1;
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
switchD_10004af7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10004af7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10004af7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10004af7_caseD_0:
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
        goto switchD_10004975_caseD_2;
      case 3:
        goto switchD_10004975_caseD_3;
      }
      goto switchD_10004975_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004975_caseD_0;
    case 1:
      goto switchD_10004975_caseD_1;
    case 2:
      goto switchD_10004975_caseD_2;
    case 3:
      goto switchD_10004975_caseD_3;
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
            goto switchD_10004975_caseD_2;
          case 3:
            goto switchD_10004975_caseD_3;
          }
          goto switchD_10004975_caseD_1;
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
            goto switchD_10004975_caseD_2;
          case 3:
            goto switchD_10004975_caseD_3;
          }
          goto switchD_10004975_caseD_1;
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
            goto switchD_10004975_caseD_2;
          case 3:
            goto switchD_10004975_caseD_3;
          }
          goto switchD_10004975_caseD_1;
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
switchD_10004975_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004975_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004975_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004975_caseD_0:
  return param_1;
}



// Function: FUN_10004c75 @ 0x10004c75

undefined4 FUN_10004c75(void)

{
  DAT_10007d44 = HeapAlloc(DAT_10007f68,0,0x140);
  if (DAT_10007d44 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10007d3c = 0;
  DAT_10007d40 = 0;
  DAT_10007d38 = DAT_10007d44;
  DAT_10007d30 = 0x10;
  return 1;
}



// Function: FUN_10004cb3 @ 0x10004cb3

uint __cdecl FUN_10004cb3(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10007d44;
  while( true ) {
    if (DAT_10007d44 + DAT_10007d40 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_10004cde @ 0x10004cde

void __cdecl FUN_10004cde(uint *param_1,uint param_2)

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
  uVar5 = DAT_10007d34;
  puVar2 = DAT_10007d3c;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_10007d3c != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_10007d34 * 0x8000 + DAT_10007d3c[3]),0x8000,0x4000);
    DAT_10007d3c[2] = DAT_10007d3c[2] | 0x80000000U >> ((byte)DAT_10007d34 & 0x1f);
    *(undefined4 *)(DAT_10007d3c[4] + 0xc4 + DAT_10007d34 * 4) = 0;
    *(char *)(DAT_10007d3c[4] + 0x43) = *(char *)(DAT_10007d3c[4] + 0x43) + -1;
    if (*(char *)(DAT_10007d3c[4] + 0x43) == '\0') {
      DAT_10007d3c[1] = DAT_10007d3c[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_10007d3c[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_10007d3c[3],0,0x8000);
      HeapFree(DAT_10007f68,0,(LPVOID)DAT_10007d3c[4]);
      FUN_10005a60(DAT_10007d3c,DAT_10007d3c + 5,
                   (DAT_10007d40 * 0x14 - (int)DAT_10007d3c) + -0x14 + DAT_10007d44);
      DAT_10007d40 = DAT_10007d40 + -1;
      if (DAT_10007d3c < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_10007d38 = DAT_10007d44;
      puVar2 = param_1;
    }
  }
  DAT_10007d3c = puVar2;
  DAT_10007d34 = uVar5;
  return;
}



// Function: FUN_10005009 @ 0x10005009

int * __cdecl FUN_10005009(uint *param_1)

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
  
  puVar8 = DAT_10007d44 + DAT_10007d40 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10007d38;
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
  puVar11 = DAT_10007d44;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10007d38 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10007d38) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10007d44;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10007d38 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10007d38) && (param_1 = FUN_10005312(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100053c3((int)param_1);
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
  DAT_10007d38 = param_1;
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
    if (iVar9 == 0) goto LAB_100052cf;
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
LAB_100052cf:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10007d3c)) && (local_8 == DAT_10007d34)) {
    DAT_10007d3c = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10005312 @ 0x10005312

undefined4 * FUN_10005312(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10007d40 == DAT_10007d30) {
    pvVar2 = HeapReAlloc(DAT_10007f68,0,DAT_10007d44,(DAT_10007d30 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10007d30 = DAT_10007d30 + 0x10;
    DAT_10007d44 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10007d44 + DAT_10007d40 * 0x14);
  pvVar2 = HeapAlloc(DAT_10007f68,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10007d40 = DAT_10007d40 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10007f68,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100053c3 @ 0x100053c3

int __cdecl FUN_100053c3(int param_1)

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



// Function: FUN_100054be @ 0x100054be

int __cdecl FUN_100054be(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10007cf4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10007cf4 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10007cf4 != (FARPROC)0x0) {
        DAT_10007cf8 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10007cfc = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000550d;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000550d:
    if (DAT_10007cf8 != (FARPROC)0x0) {
      iVar1 = (*DAT_10007cf8)();
      if ((iVar1 != 0) && (DAT_10007cfc != (FARPROC)0x0)) {
        iVar1 = (*DAT_10007cfc)(iVar1);
      }
    }
    iVar1 = (*DAT_10007cf4)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10005550

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
        goto joined_r0x1000558e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100055cb;
        goto LAB_10005639;
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
joined_r0x10005635:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10005639:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100055cb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10005635;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10005635;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10005635;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000558e:
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
LAB_100055cb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: _memset @ 0x10005650

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



// Function: FUN_100056a8 @ 0x100056a8

undefined4 __cdecl FUN_100056a8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10007d00 != (code *)0x0) {
    iVar1 = (*DAT_10007d00)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_100056c3 @ 0x100056c3

int __cdecl
FUN_100056c3(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100064b0;
  puStack_10 = &LAB_10005e90;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10007d28 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10007d28 = 2;
    }
    else {
      DAT_10007d28 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100058e7(param_3,param_4);
  }
  if (DAT_10007d28 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10007d28 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10007d20;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10005f70();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10005f70();
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



// Function: FUN_100058e7 @ 0x100058e7

int __cdecl FUN_100058e7(char *param_1,int param_2)

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



// Function: FUN_10005912 @ 0x10005912

BOOL __cdecl
FUN_10005912(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100064c8;
  puStack_10 = &LAB_10005e90;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10007d2c;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10007d2c == 0) {
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
  DAT_10007d2c = iVar3;
  if (DAT_10007d2c != 2) {
    if (DAT_10007d2c == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10007d20;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10005f70();
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
    param_6 = DAT_10007d10;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
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



// Function: __global_unwind2 @ 0x10005d98

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10005db0,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10005dda

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
  puStack_18 = &LAB_10005db8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10005e6e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_10005e6e @ 0x10005e6e

void FUN_10005e6e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100077a8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100077a4 = in_EAX;
  DAT_100077ac = unaff_EBP;
  return;
}



// Function: FUN_10005f4d @ 0x10005f4d

void FUN_10005f4d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10005f70 @ 0x10005f70

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10005f70(void)

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




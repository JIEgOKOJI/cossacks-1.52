// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

undefined4 FUN_10001000(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: OnInit @ 0x10001050

void OnInit(void)

{
  undefined4 uVar1;
  
                    /* 0x1050  1  OnInit */
  RegisterVar(&DAT_10008030,8);
  RegisterUnits(&DAT_1000afa0,s_GFortN1Easy_10008308);
  RegisterUnits(&DAT_1000af48,s_GFortN2Easy_100082fc);
  RegisterUnits(&DAT_1000af40,s_GFortN1Normal_100082ec);
  RegisterUnits(&DAT_1000af88,s_GFortN2Normal_100082dc);
  RegisterUnits(&DAT_1000af08,s_GFortN1Hard_100082d0);
  RegisterUnits(&DAT_1000ae98,s_GFortN2Hard_100082c4);
  RegisterUnits(&DAT_1000aef0,s_GMyFortS_100082b8);
  RegisterUnits(&DAT_1000aed8,s_GMySquard1_100082ac);
  RegisterUnits(&DAT_1000aec8,s_GMySquard2_100082a0);
  RegisterUnits(&DAT_1000aed0,s_GMySquard3_10008294);
  RegisterUnits(&DAT_1000aec0,s_GMySquard4_10008288);
  RegisterUnits(&DAT_1000af00,s_GDrur1_10008280);
  RegisterUnits(&DAT_1000aef8,s_GDrur2_10008278);
  RegisterUnits(&DAT_1000b038,s_GMyPisant_1000826c);
  RegisterUnitType(&DAT_1000ae68,s_WALL_EV_HO__10008260);
  RegisterUnitType(&DAT_1000ae60,s_Kazarma_1_HO_HO__1000824c);
  RegisterUnitType(&DAT_1000ae08,s_Konushnia_HO_HO__10008238);
  RegisterUnitType(&DAT_1000af30,s_Center_Holland_HO__10008224);
  RegisterUnitType(&DAT_1000b030,s_Euro_dom_HO__10008214);
  RegisterUnits(&DAT_1000ae70,s_GGateF1_1000820c);
  RegisterUnits(&DAT_1000ae78,s_GGateF2_10008204);
  RegisterVar(&DAT_1000aeb8,8);
  RegisterVar(&DAT_1000b054,4);
  RegisterDynGroup(&DAT_1000ae20);
  RegisterDynGroup(&DAT_1000ae28);
  RegisterDynGroup(&DAT_1000ae30);
  RegisterDynGroup(&DAT_1000ae38);
  RegisterDynGroup(&DAT_1000ae40);
  RegisterDynGroup(&DAT_1000ae48);
  RegisterDynGroup(&DAT_1000ae50);
  RegisterDynGroup(&DAT_1000ae58);
  RegisterVar(&DAT_1000ae20,0x40);
  RegisterZone(&DAT_1000ae10,s_ZCreateF1_100081f8);
  RegisterZone(&DAT_1000af18,s_ZSborF1_100081f0);
  RegisterUnits(&DAT_1000af50,s_GDipF1_100081e8);
  RegisterDynGroup(&DAT_1000adf8);
  RegisterVar(&DAT_1000adf8,8);
  RegisterUnits(&DAT_1000ae88,s_GKuz1_100081e0);
  RegisterUnits(&DAT_1000ae90,s_GKuz2_100081d8);
  RegisterZone(&DAT_1000ae18,s_ZCreateF2_100081cc);
  RegisterZone(&DAT_1000af20,s_ZSborF2_100081c4);
  RegisterUnits(&DAT_1000af58,s_GDipF2_100081bc);
  RegisterDynGroup(&DAT_1000ae00);
  RegisterVar(&DAT_1000ae00,8);
  RegisterUnitType(&DAT_1000af60,s_Grenader_en__100081ac);
  RegisterVar(&DAT_1000afb0,0x80);
  RegisterUnitType(&DAT_1000afb0,s_Center_Holland_HO__10008224);
  RegisterUnitType(&DAT_1000afb8,s_Euro_dom_HO__10008214);
  RegisterUnitType(&DAT_1000afc0,s_Melnica_HO__100081a0);
  RegisterUnitType(&DAT_1000afc8,s_Sclad1_HO__10008194);
  RegisterUnitType(&DAT_1000afd0,s_Kuznica_HO_HO__10008184);
  RegisterUnitType(&DAT_1000afd8,s_Cercov_HO_HO__10008174);
  RegisterUnitType(&DAT_1000afe0,s_Rinok_HO__10008168);
  RegisterUnitType(&DAT_1000afe8,s_Bashnia_HO__1000815c);
  RegisterUnitType(&DAT_1000aff0,s_shahta_HO__10008150);
  RegisterUnitType(&DAT_1000aff8,s_shahta_FE_HO__10008140);
  RegisterUnitType(&DAT_1000b000,s_shahta_UG_HO__10008130);
  RegisterUnitType(&DAT_1000b008,s_Konushnia_HO_HO__10008238);
  RegisterUnitType(&DAT_1000b010,s_akademia_HO_HO__10008120);
  RegisterUnitType(&DAT_1000b018,s_Dip_korpus_HO_HO__1000810c);
  RegisterUnitType(&DAT_1000b020,s_Kazarma_1_HO_HO__1000824c);
  RegisterUnitType(&DAT_1000b028,s_artileri_depo_HO_HO__100080f4);
  RegisterVar(&DAT_1000af90,0x10);
  RegisterUnitType(&DAT_1000af90,s_WALL_UKR_HO__100080e4);
  RegisterUnitType(&DAT_1000af98,s_WALL_EV_HO__10008260);
  RegisterDynGroup(&DAT_1000aee0);
  RegisterVar(&DAT_1000aee0,8);
  RegisterDynGroup(&DAT_1000afa8);
  RegisterVar(&DAT_1000afa8,8);
  RegisterVar(&DAT_1000af38,4);
  RegisterVar(&DAT_1000af68,4);
  RegisterUnits(&DAT_1000af80,s_GStorage_100080d8);
  RegisterZone(&DAT_1000aea0,s_ZMyW1_100080d0);
  RegisterZone(&DAT_1000aea8,s_ZMyW2_100080c8);
  RegisterZone(&DAT_1000aeb0,s_ZMyW3_100080c0);
  RegisterZone(&DAT_1000af78,s_ZCreateOboz_100080b4);
  RegisterUnitType(&DAT_1000aee8,s_GRUZ_UN__100080a8);
  RegisterDynGroup(&DAT_1000af70);
  RegisterVar(&DAT_1000af70,8);
  RegisterFormation(&DAT_1000ae80,s__ALONE_100080a0);
  RegisterZone(&DAT_1000b048,s_ZStartAI2_10008094);
  RegisterZone(&DAT_1000b040,s_ZStartAI3_10008088);
  uVar1 = GetDiff(0);
  switch(uVar1) {
  case 0:
    SelectUnits(&DAT_1000afa0,0);
    SelectUnits(&DAT_1000af48,1);
    SelErase(4);
    ClearSelection(4);
    DAT_1000af38 = 30000;
    DAT_1000aeb8 = 3000;
    DAT_1000aebc = 0x14;
    break;
  case 1:
    SelectUnits(&DAT_1000aec8,0);
    SelectUnits(&DAT_1000af00,1);
    SelErase(1);
    ClearSelection(1);
    SelectUnits(&DAT_1000af40,0);
    SelectUnits(&DAT_1000af88,1);
    SelErase(4);
    ClearSelection(4);
    DAT_1000af38 = 40000;
    DAT_1000aeb8 = 2000;
    DAT_1000aebc = 0x19;
    break;
  case 2:
    SelectUnits(&DAT_1000aed8,0);
    SelectUnits(&DAT_1000aed0,1);
    SelectUnits(&DAT_1000af00,1);
    SelectUnits(&DAT_1000aef8,1);
    SelErase(1);
    ClearSelection(1);
    SelectUnits(&DAT_1000af08,0);
    SelectUnits(&DAT_1000ae98,1);
    SelErase(4);
    ClearSelection(4);
    DAT_1000af38 = 55000;
    DAT_1000aeb8 = 0x5dc;
    DAT_1000aebc = 0x1e;
    break;
  case 3:
    SelectUnits(&DAT_1000aed8,0);
    SelectUnits(&DAT_1000aed0,1);
    SelectUnits(&DAT_1000aec0,1);
    SelectUnits(&DAT_1000af00,1);
    SelectUnits(&DAT_1000aef8,1);
    SelErase(1);
    ClearSelection(1);
    DAT_1000af38 = 70000;
    DAT_1000aeb8 = 1000;
    DAT_1000aebc = 0x23;
  }
  ChangeFriends(0,3);
  ChangeFriends(1,3);
  ChangeFriends(2,0x1c);
  ChangeFriends(3,0x1c);
  ChangeFriends(4,0x1c);
  RegisterUnitType(&DAT_1000af28,s_Kozak_loshad_DIP_HO__10008070);
  RegisterUnitType(&DAT_1000af10,s_Dragun_18_DIP_HO__1000805c);
  SetPlayerName(1,s_ALLIES_10008054);
  SetPlayerName(2,s_SPAIN_1000804c);
  SetPlayerName(3,s_VINECIA_10008044);
  SetPlayerName(4,s_MECENARY_10008038);
  return;
}



// Function: ProcessScenary @ 0x10001660

void ProcessScenary(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  int iStack_30;
  uint auStack_2c [11];
  
                    /* 0x1660  2  ProcessScenary */
  cVar1 = Trigg(2);
  pcVar8 = DisableMission_exref;
  if (cVar1 != '\0') {
    SetTrigg(2,0);
    iVar6 = 0;
    do {
      iVar3 = GetDiff(0);
      SetResource(0,iVar6,(6 - iVar3) * 1000);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    SelectUnits(&DAT_1000aed8,0);
    SelectUnits(&DAT_1000aec8,1);
    SelectUnits(&DAT_1000aed0,1);
    SelectUnits(&DAT_1000aec0,1);
    SelChangeNation(1,0);
    TakeFood(&DAT_1000b038);
    EnableUnit(0,&DAT_1000ae68,0);
    EnableUnit(0,&DAT_1000ae60,0);
    EnableUnit(0,&DAT_1000ae08,0);
    EnableUnit(0,&DAT_1000af30,0);
    EnableUnit(0,&DAT_1000b030,0);
    SelectUnits(&DAT_1000ae70,0);
    SelectUnits(&DAT_1000ae78,1);
    SelOpenGates(4);
    ClearSelection(4);
    RunTimer(1,100);
    RunTimer(2,500);
    SetDestPoint(&DAT_1000af50,&DAT_1000af18);
    SetDestPoint(&DAT_1000af58,&DAT_1000af20);
    GetUnitInfo(&DAT_1000af80,0,auStack_2c);
    DAT_1000af68 = auStack_2c[0] & 0xffff;
    RunTimer(3,700);
    ShowPage(s__PAGE2102_100083ec);
    RunTimer(4,10000);
    EnableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x43);
    EnableMission(0x44);
    pcVar8 = DisableMission_exref;
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    uVar4 = GetDiff(0);
    switch(uVar4) {
    case 3:
      InitialUpgrade(s_GKuz1_100081e0,s_Grenader_en_ATTACK7_100083d8);
      InitialUpgrade(s_GKuz1_100081e0,s_Grenader_en_ATTACK6_100083c4);
    case 2:
      InitialUpgrade(s_GKuz1_100081e0,s_Grenader_en_ATTACK5_100083b0);
    case 1:
      InitialUpgrade(s_GKuz1_100081e0,s_Grenader_en_ATTACK4_1000839c);
    case 0:
      InitialUpgrade(s_GKuz1_100081e0,s_Grenader_en_ATTACK3_10008388);
    default:
      EnableUnit(0,&DAT_1000af28,0);
      EnableUnit(0,&DAT_1000af10,0);
    }
  }
  cVar1 = TimerDoneFirst(4);
  if (cVar1 != '\0') {
    ShowPage(s__PAGE2109_1000837c);
  }
  iVar6 = GetTotalAmount0(&DAT_1000af50);
  if ((iVar6 != 0) || (iVar6 = GetTotalAmount0(&DAT_1000af58), iVar6 != 0)) {
    cVar1 = TimerDone(2);
    if (cVar1 != '\0') {
      iStack_30 = 0;
      puVar7 = &DAT_1000ae28;
      do {
        if (DAT_1000b054 != 0x14) break;
        iVar6 = GetTotalAmount0(puVar7 + -8);
        if ((iVar6 == 0) && (iVar6 = GetTotalAmount0(puVar7), iVar6 == 0)) {
          DAT_1000b054 = iStack_30;
        }
        puVar7 = puVar7 + 0x10;
        iStack_30 = iStack_30 + 2;
      } while ((int)puVar7 < 0x1000ae68);
      cVar1 = CheckProduction(&DAT_1000af50);
      if ((cVar1 != '\0') && (DAT_1000b054 != 0x14)) {
        ProduceUnit(&DAT_1000af50,&DAT_1000af60,&DAT_1000adf8);
      }
      cVar1 = CheckProduction(&DAT_1000af58);
      if ((cVar1 != '\0') && (DAT_1000b054 != 0x14)) {
        ProduceUnit(&DAT_1000af58,&DAT_1000af60,&DAT_1000ae00);
      }
    }
    iVar6 = GetTotalAmount0(&DAT_1000adf8);
    if ((iVar6 == DAT_1000aebc) || (iVar6 = GetTotalAmount0(&DAT_1000ae00), iVar6 == DAT_1000aebc))
    {
      RemoveGroup(&DAT_1000adf8,&DAT_1000ae20 + DAT_1000b054 * 8);
      RemoveGroup(&DAT_1000ae00,&DAT_1000ae28 + DAT_1000b054 * 8);
      DAT_1000b054 = 0x14;
      RunTimer(2,DAT_1000aeb8);
    }
    SaveSelectedUnits(0,&DAT_1000afa8,0);
    puVar7 = &DAT_1000ae20;
    do {
      bVar2 = FUN_100021c0(puVar7);
      if (bVar2) {
        uVar4 = FUN_10002150(&DAT_1000aee0,0x1000afb0,0x10,puVar7,4);
        if ((char)uVar4 == '\0') {
          FUN_10002290(puVar7,4,&DAT_1000aee0,0,0x1000af90);
        }
        SetTrigg(4,1);
      }
      else {
        cVar1 = Trigg();
        if (cVar1 != '\0') {
          FUN_10002230(puVar7,&DAT_1000aee0,4);
          SetTrigg(4,0);
        }
      }
      puVar7 = puVar7 + 8;
    } while ((int)puVar7 < 0x1000ae60);
    SelectUnits(&DAT_1000afa8,0);
    pcVar8 = DisableMission_exref;
  }
  iVar6 = GetTotalAmount0(&DAT_1000af80);
  if (iVar6 != 0) {
    SaveSelectedUnits(0,&DAT_1000afa8,0);
    iVar6 = GetTotalAmount0(&DAT_1000afa8);
    if ((iVar6 == 1) &&
       (GetUnitInfo(&DAT_1000afa8,0,auStack_2c), (auStack_2c[0] & 0xffff) == DAT_1000af68)) {
      ClearSelection(0);
      ShowPageParam(s__PAGE2101_10008370,DAT_1000af38);
    }
    if ((2000 < DAT_1000af38) && (cVar1 = TimerDone(3), cVar1 != '\0')) {
      RunTimer(3,0xfa);
      CreateObject0(&DAT_1000af70,&DAT_1000ae80,&DAT_1000aee8,1,&DAT_1000af78,0x80);
      SelectUnits(&DAT_1000af70,0);
      SelSendTo(1,&DAT_1000aea8,0,0);
      SelSendTo(1,&DAT_1000aea0,0,2);
      SelSendTo(1,&DAT_1000aeb0,0,2);
      ClearSelection(1);
    }
    iVar6 = GetUnitsAmount2(&DAT_1000aeb0,&DAT_1000aee8,1);
    if (iVar6 != 0) {
      SelectTypeOfUnitsInZone(&DAT_1000aeb0,&DAT_1000aee8,1,0);
      SelErase(1);
      ClearSelection(1);
      if (999 < DAT_1000af38) {
        DAT_1000af38 = DAT_1000af38 + -1000;
      }
    }
  }
  cVar1 = Trigg(5);
  pcVar9 = GetDiff_exref;
  if ((cVar1 != '\0') &&
     (((iVar6 = GetUnitsAmount0(&DAT_1000b048,0), iVar6 != 0 ||
       (iVar6 = GetTotalAmount0(&DAT_1000af58), iVar6 == 0)) ||
      (iVar6 = GetTotalAmount0(&DAT_1000ae90), pcVar9 = GetDiff_exref, iVar6 == 0)))) {
    SetTrigg(5,0);
    iVar6 = 0;
    do {
      SetResource(2,iVar6,5000);
      pcVar9 = GetDiff_exref;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    uVar4 = GetDiff(0);
    StartAI(2,s_SPAIN_0_10008368,0,1,1,uVar4);
    EnableUnit(0,&DAT_1000af28,1);
    EnableUnit(0,&DAT_1000af10,1);
    ShowPage(s__PAGE2103_1000835c);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') &&
     (((iVar6 = GetUnitsAmount0(&DAT_1000b040,0), iVar6 != 0 ||
       (iVar6 = GetTotalAmount0(&DAT_1000af50), iVar6 == 0)) ||
      (iVar6 = GetTotalAmount0(&DAT_1000ae88), iVar6 == 0)))) {
    SetTrigg(6,0);
    iVar6 = 0;
    do {
      SetResource(3,iVar6,5000);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    uVar4 = GetDiff(0);
    StartAI(3,s_VENECIA_0_10008350,0,1,1,uVar4);
    EnableUnit(0,&DAT_1000af28,1);
    EnableUnit(0,&DAT_1000af10,1);
    ShowPage(s__PAGE2104_10008344);
    pcVar9 = GetDiff_exref;
  }
  cVar1 = Trigg(7);
  pcVar5 = ShowPage_exref;
  if ((cVar1 != '\0') && (DAT_1000af38 < 1000)) {
    SetTrigg(7,0);
    ShowPage(s__PAGE2105_10008338);
    EnableUnit(0,&DAT_1000ae60,1);
    EnableUnit(0,&DAT_1000ae08,1);
    EnableUnit(0,&DAT_1000af30,1);
    EnableUnit(0,&DAT_1000b030,1);
    EnableMission(0x41);
    EnableMission(0x42);
    (*pcVar8)(0x43);
    (*pcVar8)(0x44);
    EnableMission(0x45);
    EnableMission(0x46);
    EnableMission(0x47);
    iVar6 = 0;
    do {
      iVar3 = (*pcVar9)(0);
      AddResource(0,iVar6,(4 - iVar3) * 1000);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    cVar1 = Trigg(5);
    pcVar5 = ShowPage_exref;
    if (cVar1 != '\0') {
      SetTrigg(5,0);
      iVar6 = 0;
      do {
        SetResource(2,iVar6,5000);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 6);
      uVar4 = (*pcVar9)(0);
      StartAI(2,s_SPAIN_0_10008368,0,1,1,uVar4);
      pcVar5 = ShowPage_exref;
      ShowPage(s__PAGE2103_1000835c);
    }
    cVar1 = Trigg(6);
    if (cVar1 != '\0') {
      SetTrigg(6,0);
      iVar6 = 0;
      do {
        SetResource(3,iVar6,5000);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 6);
      uVar4 = (*pcVar9)(0);
      StartAI(3,s_VENECIA_0_10008350,0,1,1,uVar4);
      (*pcVar5)(s__PAGE2104_10008344);
    }
  }
  cVar1 = NationIsErased(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    (*pcVar5)(s__PAGE2108_1000832c);
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    (*pcVar5)(s__PAGE2106_10008320);
    LooseGame();
  }
  iVar6 = GetTotalAmount0(&DAT_1000af80);
  if ((iVar6 == 0) && (1999 < DAT_1000af38)) {
    (*pcVar5)(s__PAGE2107_10008314);
    LooseGame();
  }
  return;
}



// Function: FUN_10001fb0 @ 0x10001fb0

bool __cdecl FUN_10001fb0(undefined4 param_1)

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



// Function: FUN_10001ff0 @ 0x10001ff0

undefined4 __cdecl FUN_10001ff0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined3 extraout_var;
  undefined4 uVar1;
  undefined3 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char local_3d;
  int local_3c;
  int local_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  uint auStack_2c [5];
  undefined2 uStack_18;
  undefined2 uStack_14;
  
  uVar3 = 0;
  local_38 = 0xffff;
  local_3d = '\0';
  local_3c = 0;
  do {
    if ((&DAT_10008030)[local_3c] == '\x01') {
      ClearSelection(local_3c);
      iVar4 = param_3;
      iVar5 = param_2;
      if (0 < param_3) {
        do {
          SelectUnitsType(iVar5,local_3c,1);
          iVar4 = iVar4 + -1;
          iVar5 = iVar5 + 8;
        } while (iVar4 != 0);
      }
      FUN_10001fb0(param_1);
      SaveSelectedUnits(local_3c,param_1,0);
      ClearSelection(local_3c);
      iVar4 = GetTotalAmount0(param_1);
      if (iVar4 != 0) {
        CreateZoneNearGroup(&uStack_34,param_4,param_1,100);
      }
      iVar5 = 0;
      iVar4 = GetTotalAmount0(param_1);
      if (0 < iVar4) {
        do {
          GetUnitInfo(param_1,iVar5,auStack_2c);
          uStack_34 = uStack_18;
          uStack_32 = uStack_14;
          iVar4 = GetTopDst(param_4,&uStack_34);
          if (iVar4 < local_38) {
            local_38 = GetTopDst(param_4,&uStack_34);
            uVar3 = auStack_2c[0] & 0xffff;
            local_3d = '\x01';
          }
          iVar5 = iVar5 + 1;
          iVar4 = GetTotalAmount0(param_1);
        } while (iVar5 < iVar4);
      }
    }
    local_3c = local_3c + 1;
  } while (local_3c < 8);
  FUN_10001fb0(param_1);
  uVar2 = extraout_var;
  if (local_3d != '\0') {
    uVar1 = InsertUnitToGroup(0,param_1,uVar3);
    uVar2 = (undefined3)((uint)uVar1 >> 8);
  }
  return CONCAT31(uVar2,local_3d);
}



// Function: FUN_10002150 @ 0x10002150

undefined4 __cdecl
FUN_10002150(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    UnitsCenter(auStack_8,param_4,100);
    uVar2 = FUN_10001ff0(param_1,param_2,param_3,auStack_8);
    if ((char)uVar2 != '\0') {
      SelectUnits(param_4,0);
      uVar3 = SelAttackGroup(param_5,param_1);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}



// Function: FUN_100021c0 @ 0x100021c0

bool __cdecl FUN_100021c0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_8 [8];
  
  bVar1 = false;
  iVar2 = GetTotalAmount0(param_1);
  if (iVar2 != 0) {
    UnitsCenter(auStack_8,param_1,500);
    iVar2 = 0;
    do {
      if (((&DAT_10008030)[iVar2] == '\x01') &&
         ((bVar1 || (iVar3 = GetUnitsAmount0(auStack_8,iVar2), iVar3 != 0)))) {
        bVar1 = true;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  return !bVar1;
}



// Function: FUN_10002230 @ 0x10002230

void __cdecl FUN_10002230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    iVar1 = GetTotalAmount0(param_2);
    if (iVar1 != 0) {
      UnitsCenter(auStack_8,param_1,500);
      SelectUnits(param_1,0);
      SelSendAndKill(param_3,auStack_8,0,0);
    }
  }
  return;
}



// Function: FUN_10002290 @ 0x10002290

void __cdecl
FUN_10002290(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_3c [5];
  int local_28;
  int local_24;
  ushort local_10;
  ushort uStack_e;
  uint local_8;
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    SelectUnitsType(param_5,param_4,0);
    FUN_10001fb0(param_3);
    SaveSelectedUnits(param_4,param_3,0);
    ClearSelection(param_4);
    iVar1 = GetTotalAmount0(param_3);
    if (iVar1 != 0) {
      uVar5 = 0xffff;
      param_5 = 0xffff;
      UnitsCenter(&local_10,param_1,0x32);
      param_4 = 0;
      iVar1 = GetTotalAmount0(param_3);
      if (0 < iVar1) {
        do {
          GetUnitInfo(param_3,param_4,local_3c);
          local_8 = local_28 - (uint)local_10;
          uVar2 = local_24 - (uint)uStack_e;
          uVar3 = local_8;
          if ((int)local_8 < 0) {
            uVar3 = -local_8;
          }
          if ((int)uVar2 < 0) {
            uVar2 = -uVar2;
          }
          uVar4 = uVar3;
          if (uVar3 <= uVar2) {
            uVar4 = uVar2;
          }
          uVar3 = uVar4 + uVar3 + uVar2 >> 1;
          if (uVar3 < param_5) {
            uVar5 = local_3c[0] & 0xffff;
            param_5 = uVar3;
          }
          param_4 = param_4 + 1;
          iVar1 = GetTotalAmount0(param_3);
        } while (param_4 < iVar1);
      }
      FUN_10001fb0(param_3);
      if (uVar5 < 0xffff) {
        InsertUnitToGroup(0,param_3,uVar5);
      }
      SelectUnits(param_1,0);
      SelAttackGroup(param_2,param_3);
    }
  }
  return;
}



// Function: FUN_100023d0 @ 0x100023d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100023d0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000b070 = GetVersion();
    iVar1 = FUN_10002fe0(1);
    if (iVar1 != 0) {
      _DAT_1000b07c = DAT_1000b070 >> 8 & 0xff;
      _DAT_1000b078 = DAT_1000b070 & 0xff;
      DAT_1000b070 = DAT_1000b070 >> 0x10;
      _DAT_1000b074 = _DAT_1000b078 * 0x100 + _DAT_1000b07c;
      iVar1 = FUN_10002697();
      if (iVar1 != 0) {
        DAT_1000b738 = GetCommandLineA();
        DAT_1000b05c = FUN_10002d39();
        FUN_10002823();
        FUN_10002aec();
        FUN_10002a33();
        FUN_10002579();
        DAT_1000b058 = DAT_1000b058 + 1;
        goto LAB_100024a3;
      }
      FUN_1000303d();
    }
LAB_10002430:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000b058 < 1) goto LAB_10002430;
      DAT_1000b058 = DAT_1000b058 + -1;
      if (DAT_1000b0a8 == 0) {
        FUN_100025b7();
      }
      FUN_100029df();
      FUN_100026eb();
      FUN_1000303d();
    }
    else if (param_2 == 3) {
      FUN_10002783((undefined *)0x0);
    }
LAB_100024a3:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100024a9

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000b058;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_100024f1;
    if ((DAT_1000b73c != (code *)0x0) &&
       (iVar2 = (*DAT_1000b73c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100023d0(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_100024f1:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100023d0(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100023d0(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000b73c != (code *)0x0) {
      iVar2 = (*DAT_1000b73c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10002546

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000b064 == 1) || ((DAT_1000b064 == 0 && (DAT_1000b068 == 1)))) {
    FUN_100030e5();
  }
  FUN_1000311e(param_1);
  (*(code *)PTR___exit_100083f8)(0xff);
  return;
}



// Function: FUN_10002579 @ 0x10002579

void FUN_10002579(void)

{
  if (DAT_1000b734 != (code *)0x0) {
    (*DAT_1000b734)();
  }
  FUN_1000267d((undefined4 *)&DAT_1000800c,(undefined4 *)&DAT_10008014);
  FUN_1000267d((undefined4 *)&DAT_10008000,(undefined4 *)&DAT_10008008);
  return;
}



// Function: __exit @ 0x100025a6

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_100025c6(_Code,1,0);
  return;
}



// Function: FUN_100025b7 @ 0x100025b7

void FUN_100025b7(void)

{
  FUN_100025c6(0,0,1);
  return;
}



// Function: FUN_100025c6 @ 0x100025c6

void __cdecl FUN_100025c6(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1000266b();
  if (DAT_1000b0ac == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000b0a8 = 1;
  DAT_1000b0a4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000b730 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000b72c - 4), DAT_1000b730 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000b730 <= puVar1);
    }
    FUN_1000267d((undefined4 *)&DAT_10008018,(undefined4 *)&DAT_1000801c);
  }
  FUN_1000267d((undefined4 *)&DAT_10008020,(undefined4 *)&DAT_10008024);
  if (param_3 == 0) {
    DAT_1000b0ac = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10002674();
  return;
}



// Function: FUN_1000266b @ 0x1000266b

void FUN_1000266b(void)

{
  FUN_10003306(0xd);
  return;
}



// Function: FUN_10002674 @ 0x10002674

void FUN_10002674(void)

{
  FUN_10003367(0xd);
  return;
}



// Function: FUN_1000267d @ 0x1000267d

void __cdecl FUN_1000267d(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10002697 @ 0x10002697

undefined4 FUN_10002697(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10003271();
  DAT_100083fc = TlsAlloc();
  if (DAT_100083fc != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000337c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100083fc,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10002709((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_100026eb @ 0x100026eb

void FUN_100026eb(void)

{
  FUN_1000329a();
  if (DAT_100083fc != 0xffffffff) {
    TlsFree(DAT_100083fc);
    DAT_100083fc = 0xffffffff;
  }
  return;
}



// Function: FUN_10002709 @ 0x10002709

void __cdecl FUN_10002709(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10008578;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_1000271c @ 0x1000271c

DWORD * FUN_1000271c(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_100083fc);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000337c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100083fc,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10002709((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10002777;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10002777:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_10002783 @ 0x10002783

void __cdecl FUN_10002783(undefined *param_1)

{
  if (DAT_100083fc != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_100083fc), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_100034b9(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_100034b9(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_100034b9(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_100034b9(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_100034b9(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_100034b9(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10008578) {
        FUN_100034b9(*(undefined **)(param_1 + 0x50));
      }
      FUN_100034b9(param_1);
    }
    TlsSetValue(DAT_100083fc,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10002823 @ 0x10002823

void FUN_10002823(void)

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
  DAT_1000b720 = 0x20;
  DAT_1000b620 = puVar2;
  for (; puVar2 < DAT_1000b620 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000b720 < (int)UVar8) {
      puVar2 = &DAT_1000b624;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000b720;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000b720 = DAT_1000b720 + 0x20;
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
      } while ((int)DAT_1000b720 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000b620)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000b620 + iVar6 * 9;
    if (DAT_1000b620[iVar6 * 9] == -1) {
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
          goto LAB_100029c8;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_100029c8:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000b720);
      return;
    }
  } while( true );
}



// Function: FUN_100029df @ 0x100029df

void FUN_100029df(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000b620;
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
      FUN_100034b9((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000b720);
  return;
}



// Function: FUN_10002a33 @ 0x10002a33

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002a33(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000b728 == 0) {
    FUN_10003c23();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000b05c; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1000b08c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000b05c;
  puVar6 = DAT_1000b05c;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100036e0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100034b9((undefined *)DAT_1000b05c);
  DAT_1000b05c = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1000b724 = 1;
  return;
}



// Function: FUN_10002aec @ 0x10002aec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002aec(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000b728 == 0) {
    FUN_10003c23();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000b0b0,0x104);
  _DAT_1000b09c = &DAT_1000b0b0;
  pbVar2 = &DAT_1000b0b0;
  if (*DAT_1000b738 != 0) {
    pbVar2 = DAT_1000b738;
  }
  FUN_10002b85(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10002b85(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000b084 = puVar1;
  _DAT_1000b080 = local_8 + -1;
  return;
}



// Function: FUN_10002b85 @ 0x10002b85

void __cdecl FUN_10002b85(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000b500 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000b500 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10002c30;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10002c30:
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
          if ((*(byte *)((int)&DAT_1000b500 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000b500 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10002d39 @ 0x10002d39

LPSTR FUN_10002d39(void)

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
  if (DAT_1000b1b4 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000b1b4 = 1;
LAB_10002d90:
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
        FUN_100034b9(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000b1b4 = 2;
  }
  else {
    if (DAT_1000b1b4 == 1) goto LAB_10002d90;
    if (DAT_1000b1b4 != 2) {
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
    FUN_10003c40((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10002e6b @ 0x10002e6b

void __cdecl FUN_10002e6b(undefined4 *param_1)

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



// Function: FUN_10002e98 @ 0x10002e98

int FUN_10002e98(void)

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
  
  FUN_10004330();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0xe;
    aCStackY_18[1] = '.';
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
      aCStackY_18[0] = '0';
      aCStackY_18[1] = '/';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = 'R';
        aCStackY_18[1] = '/';
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
        aCStackY_18[0] = -0x48;
        aCStackY_18[1] = '/';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10003f75(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10002e6b((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_10002fe0 @ 0x10002fe0

undefined4 __cdecl FUN_10002fe0(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1000b608 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000b608 != (HANDLE)0x0) {
    DAT_1000b60c = FUN_10002e98();
    if (DAT_1000b60c == 3) {
      ppuVar1 = (undefined **)FUN_1000435f(0x3f8);
    }
    else {
      if (DAT_1000b60c != 2) {
        return 1;
      }
      ppuVar1 = FUN_10004bb0();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1000b608);
  }
  return 0;
}



// Function: FUN_1000303d @ 0x1000303d

void FUN_1000303d(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1000b60c == 3) {
    iVar1 = 0;
    if (0 < DAT_1000b3c8) {
      puVar2 = (undefined4 *)((int)DAT_1000b3cc + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1000b608,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1000b3c8);
    }
    HeapFree(DAT_1000b608,0,DAT_1000b3cc);
  }
  else if (DAT_1000b60c == 2) {
    ppuVar3 = &PTR_LOOP_10008700;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10008700);
  }
  HeapDestroy(DAT_1000b608);
  return;
}



// Function: FUN_100030e5 @ 0x100030e5

void FUN_100030e5(void)

{
  if ((DAT_1000b064 == 1) || ((DAT_1000b064 == 0 && (DAT_1000b068 == 1)))) {
    FUN_1000311e(0xfc);
    if (DAT_1000b1b8 != (code *)0x0) {
      (*DAT_1000b1b8)();
    }
    FUN_1000311e(0xff);
  }
  return;
}



// Function: FUN_1000311e @ 0x1000311e

void __cdecl FUN_1000311e(DWORD param_1)

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
  pDVar2 = &DAT_10008428;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x100084b8);
  if (param_1 == (&DAT_10008428)[iVar5 * 2]) {
    if ((DAT_1000b064 == 1) || ((DAT_1000b064 == 0 && (DAT_1000b068 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000842c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100036e0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100036e0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100036f0(local_a4,_Dest);
      FUN_100036f0(local_a4,(uint *)&DAT_10007484);
      FUN_100036f0(local_a4,*(uint **)(iVar5 * 8 + 0x1000842c));
      auStackY_1e3._3_4_ = 0x10003242;
      FUN_100051d4(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10003271 @ 0x10003271

void FUN_10003271(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100084fc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100084ec);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100084dc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100084bc);
  return;
}



// Function: FUN_1000329a @ 0x1000329a

void FUN_1000329a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100084b8;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100084fc)) && (ppuVar1 != &PTR_DAT_100084ec)) &&
       ((ppuVar1 != &PTR_DAT_100084dc && (ppuVar1 != &PTR_DAT_100084bc)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100034b9(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10008578);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100084dc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100084ec);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100084fc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100084bc);
  return;
}



// Function: FUN_10003306 @ 0x10003306

void __cdecl FUN_10003306(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100084b8 + param_1;
  if ((&DAT_100084b8)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10003306(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100034b9((undefined *)lpCriticalSection);
    }
    FUN_10003367(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10003367 @ 0x10003367

void __cdecl FUN_10003367(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100084b8)[param_1]);
  return;
}



// Function: FUN_1000337c @ 0x1000337c

int * __cdecl FUN_1000337c(int param_1,int param_2)

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
  puStack_c = &DAT_100074c0;
  puStack_10 = &LAB_100054d0;
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
      if (DAT_1000b60c == 3) {
        if (puVar2 <= DAT_1000b3d0) {
          FUN_10003306(9);
          local_8 = 0;
          local_24 = FUN_100046fb(puVar2);
          local_8 = 0xffffffff;
          FUN_10003415();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10003469;
LAB_10003458:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10003464:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1000b60c != 2) || (DAT_1000a724 < puVar3)) goto LAB_10003464;
        FUN_10003306(9);
        local_8 = 1;
        local_24 = FUN_10004ea8((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1000349e();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10003458;
      }
LAB_10003469:
      local_24 = HeapAlloc(DAT_1000b608,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1000b238 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1000535e(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_10003415 @ 0x10003415

void FUN_10003415(void)

{
  FUN_10003367(9);
  return;
}



// Function: FUN_1000349e @ 0x1000349e

void FUN_1000349e(void)

{
  FUN_10003367(9);
  return;
}



// Function: FUN_100034b9 @ 0x100034b9

void __cdecl FUN_100034b9(undefined *param_1)

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
  puStack_c = &DAT_100074d8;
  puStack_10 = &LAB_100054d0;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1000b60c == 3) {
    ExceptionList = &local_14;
    FUN_10003306(9);
    local_8 = 0;
    local_20 = (uint *)FUN_100043a7((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100043d2(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10003523();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000b60c != 2) goto LAB_10003585;
    ExceptionList = &local_14;
    FUN_10003306(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10004e0c(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10004e63(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000357b();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10003585:
  HeapFree(DAT_1000b608,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10003523 @ 0x10003523

void FUN_10003523(void)

{
  FUN_10003367(9);
  return;
}



// Function: FUN_1000357b @ 0x1000357b

void FUN_1000357b(void)

{
  FUN_10003367(9);
  return;
}



// Function: _malloc @ 0x100035a2

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000b238);
  return pvVar1;
}



// Function: __nh_malloc @ 0x100035b4

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_100035e0((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1000535e(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_100035e0 @ 0x100035e0

void __cdecl FUN_100035e0(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100074f0;
  puStack_10 = &LAB_100054d0;
  local_14 = ExceptionList;
  if (DAT_1000b60c == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1000b3d0) {
      ExceptionList = &local_14;
      FUN_10003306(9);
      local_8 = 0;
      piVar1 = FUN_100046fb(param_1);
      local_8 = 0xffffffff;
      FUN_10003647();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000b60c == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1000a724) {
        ExceptionList = &local_14;
        FUN_10003306(9);
        local_8 = 1;
        piVar1 = FUN_10004ea8(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_100036a6();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_100036bf;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_100036bf:
  HeapAlloc(DAT_1000b608,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10003647 @ 0x10003647

void FUN_10003647(void)

{
  FUN_10003367(9);
  return;
}



// Function: FUN_100036a6 @ 0x100036a6

void FUN_100036a6(void)

{
  FUN_10003367(9);
  return;
}



// Function: FUN_100036e0 @ 0x100036e0

uint * __cdecl FUN_100036e0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_100037c8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100037c8:
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



// Function: FUN_100036f0 @ 0x100036f0

uint * __cdecl FUN_100036f0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000370c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000373f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000375b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000370c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000375b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000375b;
    }
  }
LAB_1000373f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000375b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100037c8:
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
    if (bVar1 == 0) goto LAB_100037c8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x100037d0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_100037f0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10003823:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100037f0:
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
  goto LAB_10003823;
}



// Function: FUN_1000384b @ 0x1000384b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000384b(int param_1)

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
  
  FUN_10003306(0x19);
  CodePage = FUN_100039f8(param_1);
  if (CodePage != DAT_1000b3d4) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10008608;
LAB_10003888:
      if (*pUVar5 != CodePage) goto code_r0x1000388c;
      local_8 = 0;
      puVar15 = &DAT_1000b500;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10008618);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10008600)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000b500 + uVar8 + 1);
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
      _DAT_1000b3ec = 1;
      DAT_1000b3d4 = CodePage;
      DAT_1000b604 = FUN_10003a42(CodePage);
      DAT_1000b3e0 = *(undefined4 *)(iVar12 + 0x1000860c);
      DAT_1000b3e4 = *(undefined4 *)(iVar12 + 0x10008610);
      DAT_1000b3e8 = *(undefined4 *)(iVar12 + 0x10008614);
      goto LAB_100039dc;
    }
    goto LAB_100039d7;
  }
  goto LAB_10003872;
code_r0x1000388c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100086f7 < (int)pUVar5) goto code_r0x10003897;
  goto LAB_10003888;
code_r0x10003897:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000b604 = 0;
    puVar15 = &DAT_1000b500;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000b3ec = 0;
      DAT_1000b3d4 = CodePage;
    }
    else {
      DAT_1000b3d4 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000b500 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000b500 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000b604 = FUN_10003a42(CodePage);
      _DAT_1000b3ec = 1;
    }
    DAT_1000b3e0 = 0;
    DAT_1000b3e4 = 0;
    DAT_1000b3e8 = 0;
  }
  else {
    if (DAT_1000b220 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100039e9;
    }
LAB_100039d7:
    FUN_10003a75();
  }
LAB_100039dc:
  FUN_10003a9e();
LAB_10003872:
  uVar14 = 0;
LAB_100039e9:
  FUN_10003367(0x19);
  return uVar14;
}



// Function: FUN_100039f8 @ 0x100039f8

int __cdecl FUN_100039f8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000b220 = 1;
                    /* WARNING: Could not recover jumptable at 0x10003a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000b220 = 1;
                    /* WARNING: Could not recover jumptable at 0x10003a27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000b254;
  }
  DAT_1000b220 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10003a42 @ 0x10003a42

undefined4 __cdecl FUN_10003a42(int param_1)

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



// Function: FUN_10003a75 @ 0x10003a75

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003a75(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000b500;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000b3d4 = 0;
  _DAT_1000b3ec = 0;
  DAT_1000b604 = 0;
  DAT_1000b3e0 = 0;
  DAT_1000b3e4 = 0;
  DAT_1000b3e8 = 0;
  return;
}



// Function: FUN_10003a9e @ 0x10003a9e

void FUN_10003a9e(void)

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
  
  BVar2 = GetCPInfo(DAT_1000b3d4,&local_18);
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
    FUN_100057f7(1,local_118,0x100,local_518,DAT_1000b3d4,DAT_1000b604,0);
    FUN_100055a8(DAT_1000b604,0x100,local_118,0x100,local_218,0x100,DAT_1000b3d4,0);
    FUN_100055a8(DAT_1000b604,0x200,local_118,0x100,local_318,0x100,DAT_1000b3d4,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000b500 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10003baa;
        }
        (&DAT_1000b400)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000b500 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10003baa:
        (&DAT_1000b400)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000b500 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10003bf4;
        }
        (&DAT_1000b400)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000b500 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10003bf4:
        (&DAT_1000b400)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10003c23 @ 0x10003c23

void FUN_10003c23(void)

{
  if (DAT_1000b728 == 0) {
    FUN_1000384b(-3);
    DAT_1000b728 = 1;
  }
  return;
}



// Function: FUN_10003c40 @ 0x10003c40

undefined4 * __cdecl FUN_10003c40(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10003df7_caseD_2;
        case 3:
          goto switchD_10003df7_caseD_3;
        }
        goto switchD_10003df7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10003df7_caseD_0;
      case 1:
        goto switchD_10003df7_caseD_1;
      case 2:
        goto switchD_10003df7_caseD_2;
      case 3:
        goto switchD_10003df7_caseD_3;
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
              goto switchD_10003df7_caseD_2;
            case 3:
              goto switchD_10003df7_caseD_3;
            }
            goto switchD_10003df7_caseD_1;
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
              goto switchD_10003df7_caseD_2;
            case 3:
              goto switchD_10003df7_caseD_3;
            }
            goto switchD_10003df7_caseD_1;
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
              goto switchD_10003df7_caseD_2;
            case 3:
              goto switchD_10003df7_caseD_3;
            }
            goto switchD_10003df7_caseD_1;
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
switchD_10003df7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10003df7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10003df7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10003df7_caseD_0:
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
        goto switchD_10003c75_caseD_2;
      case 3:
        goto switchD_10003c75_caseD_3;
      }
      goto switchD_10003c75_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10003c75_caseD_0;
    case 1:
      goto switchD_10003c75_caseD_1;
    case 2:
      goto switchD_10003c75_caseD_2;
    case 3:
      goto switchD_10003c75_caseD_3;
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
            goto switchD_10003c75_caseD_2;
          case 3:
            goto switchD_10003c75_caseD_3;
          }
          goto switchD_10003c75_caseD_1;
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
            goto switchD_10003c75_caseD_2;
          case 3:
            goto switchD_10003c75_caseD_3;
          }
          goto switchD_10003c75_caseD_1;
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
            goto switchD_10003c75_caseD_2;
          case 3:
            goto switchD_10003c75_caseD_3;
          }
          goto switchD_10003c75_caseD_1;
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
switchD_10003c75_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10003c75_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10003c75_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10003c75_caseD_0:
  return param_1;
}



// Function: FUN_10003f75 @ 0x10003f75

void __thiscall FUN_10003f75(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10003f8c(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_10003f8c @ 0x10003f8c

void * __thiscall FUN_10003f8c(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1000aab4 < 2) {
      uVar3 = (byte)PTR_DAT_1000a8a8[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000a8a8;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10005a84(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10003fe7:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10003fe7;
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
      goto LAB_10004051;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10004051;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10004051:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000aab4 < 2) {
      uVar5 = (byte)PTR_DAT_1000a8a8[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10005a84(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000aab4 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000a8a8 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10005a84(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_100040fd:
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
          pDVar6 = FUN_10005940();
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
      uVar3 = FUN_10005949((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_100040fd;
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



// Function: _strchr @ 0x100041b0

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



// Function: _strstr @ 0x10004270

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
LAB_100042e3:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_100042e3;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x100042f0

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



// Function: FUN_10004330 @ 0x10004330

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10004330(void)

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



// Function: FUN_1000435f @ 0x1000435f

undefined4 __cdecl FUN_1000435f(undefined4 param_1)

{
  DAT_1000b3cc = HeapAlloc(DAT_1000b608,0,0x140);
  if (DAT_1000b3cc == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000b3c4 = 0;
  DAT_1000b3c8 = 0;
  DAT_1000b3c0 = DAT_1000b3cc;
  DAT_1000b3d0 = param_1;
  DAT_1000b3b8 = 0x10;
  return 1;
}



// Function: FUN_100043a7 @ 0x100043a7

uint __cdecl FUN_100043a7(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000b3cc;
  while( true ) {
    if (DAT_1000b3cc + DAT_1000b3c8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_100043d2 @ 0x100043d2

void __cdecl FUN_100043d2(uint *param_1,int param_2)

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
      if (DAT_1000b3c4 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1000b3bc * 0x8000 + DAT_1000b3c4[3]),0x8000,0x4000);
        DAT_1000b3c4[2] = DAT_1000b3c4[2] | 0x80000000U >> ((byte)DAT_1000b3bc & 0x1f);
        *(undefined4 *)(DAT_1000b3c4[4] + 0xc4 + DAT_1000b3bc * 4) = 0;
        *(char *)(DAT_1000b3c4[4] + 0x43) = *(char *)(DAT_1000b3c4[4] + 0x43) + -1;
        if (*(char *)(DAT_1000b3c4[4] + 0x43) == '\0') {
          DAT_1000b3c4[1] = DAT_1000b3c4[1] & 0xfffffffe;
        }
        if (DAT_1000b3c4[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1000b3c4[3],0,0x8000);
          HeapFree(DAT_1000b608,0,(LPVOID)DAT_1000b3c4[4]);
          FUN_10005b00(DAT_1000b3c4,DAT_1000b3c4 + 5,
                       (DAT_1000b3c8 * 0x14 - (int)DAT_1000b3c4) + -0x14 + DAT_1000b3cc);
          DAT_1000b3c8 = DAT_1000b3c8 + -1;
          if (DAT_1000b3c4 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1000b3c0 = DAT_1000b3cc;
        }
      }
      DAT_1000b3c4 = param_1;
      DAT_1000b3bc = uVar14;
    }
  }
  return;
}



// Function: FUN_100046fb @ 0x100046fb

int * __cdecl FUN_100046fb(uint *param_1)

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
  
  puVar8 = DAT_1000b3cc + DAT_1000b3c8 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000b3c0;
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
  puVar11 = DAT_1000b3cc;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000b3c0 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000b3c0) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000b3cc;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000b3c0 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000b3c0) && (param_1 = FUN_10004a04(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10004ab5((int)param_1);
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
  DAT_1000b3c0 = param_1;
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
    if (iVar9 == 0) goto LAB_100049c1;
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
LAB_100049c1:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000b3c4)) && (local_8 == DAT_1000b3bc)) {
    DAT_1000b3c4 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10004a04 @ 0x10004a04

undefined4 * FUN_10004a04(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000b3c8 == DAT_1000b3b8) {
    pvVar2 = HeapReAlloc(DAT_1000b608,0,DAT_1000b3cc,(DAT_1000b3b8 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000b3b8 = DAT_1000b3b8 + 0x10;
    DAT_1000b3cc = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000b3cc + DAT_1000b3c8 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000b608,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000b3c8 = DAT_1000b3c8 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000b608,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10004ab5 @ 0x10004ab5

int __cdecl FUN_10004ab5(int param_1)

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



// Function: FUN_10004bb0 @ 0x10004bb0

undefined ** FUN_10004bb0(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10008710 == -1) {
    lpMem = &PTR_LOOP_10008700;
  }
  else {
    lpMem = HeapAlloc(DAT_1000b608,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10008700) {
        if (PTR_LOOP_10008700 == (undefined *)0x0) {
          PTR_LOOP_10008700 = (undefined *)&PTR_LOOP_10008700;
        }
        if (PTR_LOOP_10008704 == (undefined *)0x0) {
          PTR_LOOP_10008704 = (undefined *)&PTR_LOOP_10008700;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10008700;
        lpMem[1] = PTR_LOOP_10008704;
        PTR_LOOP_10008704 = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_10008700) {
    HeapFree(DAT_1000b608,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_10004cf4 @ 0x10004cf4

void __cdecl FUN_10004cf4(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1000a720 == param_1) {
    PTR_LOOP_1000a720 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10008700) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1000b608,0,param_1);
    return;
  }
  DAT_10008710 = 0xffffffff;
  return;
}



// Function: FUN_10004d4a @ 0x10004d4a

void __cdecl FUN_10004d4a(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_10008704;
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
            DAT_1000b224 = DAT_1000b224 + -1;
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
          FUN_10004cf4(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_10008704) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_10004e0c @ 0x10004e0c

int __cdecl FUN_10004e0c(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10008700;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10008700) {
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



// Function: FUN_10004e63 @ 0x10004e63

void __cdecl FUN_10004e63(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1000b224 = DAT_1000b224 + 1, DAT_1000b224 == 0x20)) {
    FUN_10004d4a(0x10);
  }
  return;
}



// Function: FUN_10004ea8 @ 0x10004ea8

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10004ea8(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_1000a720;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_100050b0(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10004f73;
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
          piVar5 = (int *)FUN_100050b0(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10004f73:
            PTR_LOOP_1000a720 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_1000a720) {
      ppuVar9 = &PTR_LOOP_10008700;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_10008700) {
          ppuVar9 = FUN_10004bb0();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1000a720 = (undefined *)ppuVar9;
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
      PTR_LOOP_1000a720 = (undefined *)ppuVar9;
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



// Function: FUN_100050b0 @ 0x100050b0

int __cdecl FUN_100050b0(int *param_1,uint param_2,uint param_3)

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
          goto LAB_100051c3;
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
LAB_100051c3:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_100051d4 @ 0x100051d4

int __cdecl FUN_100051d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000b228 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000b228 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000b228 != (FARPROC)0x0) {
        DAT_1000b22c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000b230 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10005223;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10005223:
    if (DAT_1000b22c != (FARPROC)0x0) {
      iVar1 = (*DAT_1000b22c)();
      if ((iVar1 != 0) && (DAT_1000b230 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000b230)(iVar1);
      }
    }
    iVar1 = (*DAT_1000b228)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10005260

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
        goto joined_r0x1000529e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100052db;
        goto LAB_10005349;
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
joined_r0x10005345:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10005349:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100052db;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10005345;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10005345;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10005345;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000529e:
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
LAB_100052db:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_1000535e @ 0x1000535e

undefined4 __cdecl FUN_1000535e(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000b234 != (code *)0x0) {
    iVar1 = (*DAT_1000b234)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: _memset @ 0x10005380

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



// Function: __global_unwind2 @ 0x100053d8

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100053f0,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000541a

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
  puStack_18 = &LAB_100053f8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100054ae();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_100054ae @ 0x100054ae

void FUN_100054ae(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000a738 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000a734 = in_EAX;
  DAT_1000a73c = unaff_EBP;
  return;
}



// Function: FUN_1000558d @ 0x1000558d

void FUN_1000558d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_100055a8 @ 0x100055a8

int __cdecl
FUN_100055a8(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10007550;
  puStack_10 = &LAB_100054d0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000b25c == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000b25c = 2;
    }
    else {
      DAT_1000b25c = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100057cc(param_3,param_4);
  }
  if (DAT_1000b25c == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000b25c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000b254;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10004330();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10004330();
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



// Function: FUN_100057cc @ 0x100057cc

int __cdecl FUN_100057cc(char *param_1,int param_2)

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



// Function: FUN_100057f7 @ 0x100057f7

BOOL __cdecl
FUN_100057f7(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_10007568;
  puStack_10 = &LAB_100054d0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000b260;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000b260 == 0) {
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
  DAT_1000b260 = iVar3;
  if (DAT_1000b260 != 2) {
    if (DAT_1000b260 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000b254;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10004330();
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
    param_6 = DAT_1000b244;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10005940 @ 0x10005940

DWORD * FUN_10005940(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000271c();
  return pDVar1 + 2;
}



// Function: FUN_10005949 @ 0x10005949

uint __cdecl FUN_10005949(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1000b244 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1000b3b4);
    bVar1 = DAT_1000b3b0 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1000b3b4);
      this = (void *)0x13;
      FUN_10003306(0x13);
    }
    param_1 = FUN_100059b8(this,param_1);
    if (bVar1) {
      FUN_10003367(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1000b3b4);
    }
  }
  return param_1;
}



// Function: FUN_100059b8 @ 0x100059b8

uint __thiscall FUN_100059b8(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000b244 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000aab4 < 2) {
        uVar2 = (byte)PTR_DAT_1000a8a8[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10005a84(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000a8a8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100055a8(DAT_1000b244,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_10005a84 @ 0x10005a84

uint __thiscall FUN_10005a84(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000a8a8 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000a8a8[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_100057f7(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10005b00 @ 0x10005b00

undefined4 * __cdecl FUN_10005b00(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10005cb7_caseD_2;
        case 3:
          goto switchD_10005cb7_caseD_3;
        }
        goto switchD_10005cb7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10005cb7_caseD_0;
      case 1:
        goto switchD_10005cb7_caseD_1;
      case 2:
        goto switchD_10005cb7_caseD_2;
      case 3:
        goto switchD_10005cb7_caseD_3;
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
              goto switchD_10005cb7_caseD_2;
            case 3:
              goto switchD_10005cb7_caseD_3;
            }
            goto switchD_10005cb7_caseD_1;
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
              goto switchD_10005cb7_caseD_2;
            case 3:
              goto switchD_10005cb7_caseD_3;
            }
            goto switchD_10005cb7_caseD_1;
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
              goto switchD_10005cb7_caseD_2;
            case 3:
              goto switchD_10005cb7_caseD_3;
            }
            goto switchD_10005cb7_caseD_1;
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
switchD_10005cb7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10005cb7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10005cb7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10005cb7_caseD_0:
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
        goto switchD_10005b35_caseD_2;
      case 3:
        goto switchD_10005b35_caseD_3;
      }
      goto switchD_10005b35_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005b35_caseD_0;
    case 1:
      goto switchD_10005b35_caseD_1;
    case 2:
      goto switchD_10005b35_caseD_2;
    case 3:
      goto switchD_10005b35_caseD_3;
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
            goto switchD_10005b35_caseD_2;
          case 3:
            goto switchD_10005b35_caseD_3;
          }
          goto switchD_10005b35_caseD_1;
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
            goto switchD_10005b35_caseD_2;
          case 3:
            goto switchD_10005b35_caseD_3;
          }
          goto switchD_10005b35_caseD_1;
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
            goto switchD_10005b35_caseD_2;
          case 3:
            goto switchD_10005b35_caseD_3;
          }
          goto switchD_10005b35_caseD_1;
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
switchD_10005b35_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005b35_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005b35_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005b35_caseD_0:
  return param_1;
}



// Function: FUN_10005ed0 @ 0x10005ed0

int __cdecl FUN_10005ed0(byte *param_1,byte *param_2)

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



// Function: FUN_10005f10 @ 0x10005f10

byte * __cdecl FUN_10005f10(byte *param_1,byte *param_2)

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



// Function: FUN_10005f50 @ 0x10005f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10005f50(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1000b3b4;
  if (DAT_1000b244 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_10005f9e;
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
LAB_10005f9e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1000b3b4 = _DAT_1000b3b4 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1000b3b0;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1000b3b4 = iVar2;
      FUN_10003306(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_10005fff;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10006215(this,uVar8);
      uVar7 = FUN_10006215(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_10005fff:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1000b3b4 = _DAT_1000b3b4 + -1;
      UNLOCK();
    }
    else {
      FUN_10003367(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_10006020 @ 0x10006020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10006020(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1000b3b4;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1000b244 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000607f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000607f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1000b3b4 = _DAT_1000b3b4 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1000b3b0;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1000b3b4 = iVar2;
        FUN_10003306(0x13);
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
        uVar7 = FUN_10006215(param_3,uVar7);
        uVar5 = FUN_10006215(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_100060f5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_100060f5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1000b3b4 = _DAT_1000b3b4 + -1;
        UNLOCK();
      }
      else {
        FUN_10003367(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_10006215 @ 0x10006215

uint __thiscall FUN_10006215(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000b244 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000aab4 < 2) {
        uVar2 = (byte)PTR_DAT_1000a8a8[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10005a84(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000a8a8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100055a8(DAT_1000b244,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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




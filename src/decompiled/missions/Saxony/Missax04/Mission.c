// Decompiled from: Mission.dll

// Function: OnInit @ 0x10001000

void OnInit(void)

{
                    /* 0x1000  1  OnInit */
  RegisterUnits(&DAT_10007d30,s_Gkomandirk_10007458);
  RegisterUnits(&DAT_10007d38,s_Gkomandirz_1000744c);
  RegisterUnits(&DAT_10007c60,s_Gotrydk_10007444);
  RegisterUnits(&DAT_10007d48,s_Gtorg_1000743c);
  RegisterUnits(&DAT_10007d78,s_Gstraga1_10007430);
  RegisterUnits(&DAT_10007d80,s_Gstraga2_10007424);
  RegisterUnits(&DAT_10007b18,s_Grab1_1000741c);
  RegisterUnits(&DAT_10007b20,s_Grab2_10007414);
  RegisterUnits(&DAT_10007b28,s_Grab3_1000740c);
  RegisterUnits(&DAT_10007b30,s_Grab4_10007404);
  RegisterUnits(&DAT_10007b38,s_Grab5_100073fc);
  RegisterUnits(&DAT_10007b40,s_Grab6_100073f4);
  RegisterUnits(&DAT_10007ae8,s_Gohr1_100073ec);
  RegisterUnits(&DAT_10007af0,s_Gohr2_100073e4);
  RegisterUnits(&DAT_10007af8,s_Gohr3_100073dc);
  RegisterUnits(&DAT_10007b00,s_Gohr4_100073d4);
  RegisterUnits(&DAT_10007b08,s_Gohr5_100073cc);
  RegisterUnits(&DAT_10007b10,s_Gohr6_100073c4);
  RegisterUnits(&DAT_10007ba0,s_Grazb_100073bc);
  RegisterUnits(&DAT_10007c38,s_Gakkad_100073b4);
  RegisterUnits(&DAT_10007d90,&DAT_100073ac);
  RegisterUnits(&DAT_10007c20,s_Gartdepo_100073a0);
  RegisterUnits(&DAT_10007b50,s_Gbarak_10007398);
  RegisterUnits(&DAT_10007ca0,&DAT_10007394);
  RegisterUnits(&DAT_10007d68,&DAT_1000738c);
  RegisterUnits(&DAT_10007ca8,s_Gvorotader_10007380);
  RegisterUnits(&DAT_10007c98,s_Gzamok_10007378);
  RegisterUnits(&DAT_10007be8,s_Gport_10007370);
  RegisterUnits(&DAT_10007a08,s_Gselo1_10007368);
  RegisterUnits(&DAT_10007a18,s_Gselo2_10007360);
  RegisterUnits(&DAT_10007a10,s_Gselo3_10007358);
  RegisterUnits(&DAT_10007a28,s_Gselo4_10007350);
  RegisterUnits(&DAT_10007a20,s_Gselo5_10007348);
  RegisterUnits(&DAT_10007da0,s_Gpatrul_10007340);
  RegisterUnits(&DAT_10007ad8,s_Gpatrul1_10007334);
  RegisterUnits(&DAT_10007ad0,s_Gpatrul2_10007328);
  RegisterUnits(&DAT_10007d28,&DAT_10007320);
  RegisterUnits(&DAT_10007d18,&DAT_1000731c);
  RegisterZone(&DAT_10007ac0,s_Zstraga1_10007310);
  RegisterZone(&DAT_10007ab0,s_Zstraga2_10007304);
  RegisterZone(&DAT_10007d20,s_Zsraga22_100072f8);
  RegisterZone(&DAT_10007d10,s_Zsraga11_100072ec);
  RegisterZone(&DAT_10007d98,s_Zbazara_100072e4);
  RegisterZone(&DAT_10007a88,s_Zbazara1_100072d8);
  RegisterZone(&DAT_10007d08,s_Zrudn_100072d0);
  RegisterZone(&DAT_10007b58,s_Zzrudn_100072c8);
  RegisterZone(&DAT_10007b48,s_Zoboza_100072c0);
  RegisterZone(&DAT_10007d58,s_Zoboza1_100072b8);
  RegisterZone(&DAT_10007b68,s_Zkomandiraz_100072ac);
  RegisterZone(&DAT_10007a78,s_Zperedkz_100072a0);
  RegisterZone(&DAT_10007a60,s_Zperedkz1_10007294);
  RegisterZone(&DAT_10007c28,s_Zart1_1000728c);
  RegisterZone(&DAT_10007c30,s_Zart2_10007284);
  RegisterZone(&DAT_10007a68,s_Zkon1_1000727c);
  RegisterZone(&DAT_10007d40,s_Zkon11_10007274);
  RegisterZone(&DAT_10007a70,s_Zkon2_1000726c);
  RegisterZone(&DAT_10007be0,s_Zshar1_10007264);
  RegisterZone(&DAT_10007c00,s_Zshar2_1000725c);
  RegisterZone(&DAT_10007c08,s_Zshar3_10007254);
  RegisterZone(&DAT_10007bf0,s_Zshar4_1000724c);
  RegisterZone(&DAT_10007bf8,s_Zshar5_10007244);
  RegisterZone(&DAT_10007c10,s_Zshar6_1000723c);
  RegisterZone(&DAT_10007c18,s_Zshar7_10007234);
  RegisterZone(&DAT_10007d60,s_Zsund_1000722c);
  RegisterZone(&DAT_10007b88,s_Zsela1_10007224);
  RegisterZone(&DAT_10007b90,s_Zsela2_1000721c);
  RegisterZone(&DAT_10007ba8,s_Zsela3_10007214);
  RegisterZone(&DAT_10007bb0,s_Zsela4_1000720c);
  RegisterZone(&DAT_10007b98,s_Zsela5_10007204);
  RegisterZone(&DAT_10007a00,s_Zpatrul_100071fc);
  RegisterZone(&DAT_10007bd8,s_Zpatrul1_100071f0);
  RegisterZone(&DAT_10007bd0,s_Zpatrul2_100071e4);
  RegisterZone(&DAT_10007bb8,&DAT_100071e0);
  RegisterUnitType(&DAT_10007d00,s_Dragun_SA__100071d4);
  RegisterDynGroup(&DAT_10007aa8);
  RegisterDynGroup(&DAT_10007b78);
  RegisterUnitType(&DAT_10007d70,s_Konni_Ricar_SA__100071c4);
  RegisterDynGroup(&DAT_10007aa0);
  RegisterDynGroup(&DAT_10007b70);
  RegisterUnitType(&DAT_10007c40,s_Pushka_SA__100071b8);
  RegisterDynGroup(&DAT_10007ac8);
  RegisterDynGroup(&DAT_10007bc0);
  RegisterUnitType(&DAT_10007cf8,s_Mortira_SA__100071ac);
  RegisterDynGroup(&DAT_10007ab8);
  RegisterDynGroup(&DAT_10007b80);
  RegisterUnitType(&DAT_10007a58,s_PERES_KOR_SA__1000719c);
  RegisterDynGroup(&DAT_10007a90);
  RegisterDynGroup(&DAT_10007bc8);
  RegisterUnitType(&DAT_10007a80,s_Krestian_Sved_SV__10007188);
  RegisterDynGroup(&DAT_10007a98);
  RegisterDynGroup(&DAT_10007a38);
  RegisterDynGroup(&DAT_10007d88);
  RegisterDynGroup(&DAT_10007b60);
  RegisterUnitType(&DAT_10007d50,s_SUNDUK1Z_UN__10007178);
  RegisterUnitType(&DAT_10007a30,s_SUNDUK1O_UN__10007168);
  RegisterFormation(&DAT_10007ae0,s__ALONE_10007160);
  SetPlayerName(2,s_ALLIES_10007158);
  SetPlayerName(4,s_ALLY_SVED_1000714c);
  SetPlayerName(5,s_ROBBERS_10007144);
  RegisterUnitType(&DAT_10007c48,s_Center_Swesair_SV__10007130);
  RegisterUnitType(&DAT_10007c50,s_Dom_Swisair_SV__10007120);
  RegisterUnitType(&DAT_10007c58,s_Melnica_SV__10007114);
  RegisterUnitType(&DAT_10007c68,s_Sclad1_SV__10007108);
  RegisterUnitType(&DAT_10007c70,s_shahta_SV__100070fc);
  RegisterUnitType(&DAT_10007c78,s_shahta_FE_SV__100070ec);
  RegisterUnitType(&DAT_10007c80,s_shahta_UG_SV__100070dc);
  RegisterUnitType(&DAT_10007c88,s_Kuznica_SV__100070d0);
  RegisterUnitType(&DAT_10007c90,s_Konushnia_Swesair_SV__100070b8);
  RegisterUnitType(&DAT_10007cb0,s_Kostel_SV__100070ac);
  RegisterUnitType(&DAT_10007cb8,s_akademia_E_SV__1000709c);
  RegisterUnitType(&DAT_10007cc0,s_Dip_korpus_SV__1000708c);
  RegisterUnitType(&DAT_10007cc8,s_Kazarma_evro_SV__10007078);
  RegisterUnitType(&DAT_10007cd0,s_Kazarma_SV__1000706c);
  RegisterUnitType(&DAT_10007cd8,s_artileri_depo_SV__10007058);
  RegisterUnitType(&DAT_10007ce0,s_WALL_UKR_SV__10007048);
  RegisterUnitType(&DAT_10007ce8,s_Rinok_SV__1000703c);
  RegisterUnitType(&DAT_10007cf0,s_Bashnia_SV__10007030);
  return;
}



// Function: FUN_10001580 @ 0x10001580

undefined4 FUN_10001580(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: ProcessScenary @ 0x100015a0

void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  
                    /* 0x15a0  2  ProcessScenary */
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,250000);
      SetResource(0,1,30000);
      SetResource(0,4,20000);
      SetResource(0,5,20000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK_100076bc);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK3_100076a4);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK4_1000768c);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK5_10007674);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK6_1000765c);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK7_10007644);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_SHIELD_1000762c);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_SHIELD3_10007614);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_SHIELD4_100075fc);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_SHIELD5_100075e4);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_SHIELD6_100075cc);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_SHIELD7_100075b4);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK_100075a0);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK3_1000758c);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK4_10007578);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK5_10007564);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK6_10007550);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK7_1000753c);
      SelectUnits(&DAT_10007d28,0);
      SelErase(4);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,150000);
      SetResource(0,1,20000);
      SetResource(0,4,14000);
      SetResource(0,5,14000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK_100076bc);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK3_100076a4);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK4_1000768c);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK5_10007674);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_SHIELD_1000762c);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_SHIELD3_10007614);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_SHIELD4_100075fc);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK_100075a0);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK3_1000758c);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK4_10007578);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK5_10007564);
      SelectUnits(&DAT_10007d28,0);
      SelErase(4);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,50000);
      SetResource(0,1,10000);
      SetResource(0,4,10000);
      SetResource(0,5,1000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK_100076bc);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_ATTACK3_100076a4);
      InitialUpgrade(s_Gkomandirk_10007458,s_Konni_Ricar_SA_SHIELD_1000762c);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK_100075a0);
      InitialUpgrade(s_Gkomandirk_10007458,s_Dragun_SA_ATTACK3_1000758c);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,30000);
      SetResource(0,1,8000);
      SetResource(0,4,8000);
      SetResource(0,5,8000);
      SetResource(0,0,0);
      SetResource(0,2,0);
    }
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,4,5000000);
    SetResource(1,2,5000000);
    SetResource(1,0,5000000);
    SetResource(1,5,5000);
    SetResource(4,3,5000000);
    SetResource(4,1,5000000);
    SetResource(4,4,5000000);
    SetResource(4,2,5000000);
    SetResource(4,0,5000000);
    SetResource(4,5,5000000);
    SetResource(5,3,5000000);
    SetResource(5,1,5000000);
    SetResource(5,4,5000000);
    SetResource(5,2,500000);
    SetResource(5,0,5000000);
    SetResource(5,5,5000000);
    SetResource(6,3,5000000);
    SetResource(6,1,5000000);
    SetResource(6,4,5000000);
    SetResource(6,2,5000000);
    SetResource(6,0,5000000);
    SetResource(6,5,5000000);
    ChangeFriends(0,5);
    ChangeFriends(2,5);
    EnableUnit(2,&DAT_10007d00,1);
    InitialUpgrade(s_Gkomandirz_1000744c,s_KUZ03SA_10007534);
    InitialUpgrade(s_Gkomandirz_1000744c,s_MAINSA_1000752c);
    DAT_10007a44 = 0;
    DAT_10007a40 = 0;
    DAT_10007a48 = 0;
    DAT_10007a4c = 0;
    DAT_10007a50 = 0;
    DAT_10007a54 = 0;
    TakeStone(&DAT_10007b40);
    TakeWood(&DAT_10007b38);
    SelectUnits(&DAT_10007ca8,0);
    SelOpenGates(4);
    ShowPage(s__PAGE1_10007524);
    ShowPage(s__PAGE2_1000751c);
    SetLightSpot(&DAT_10007d98,2,3);
    SetLightSpot(&DAT_10007b68,8,4);
    CreateObject0(&DAT_10007d88,&DAT_10007ae0,&DAT_10007d50,7,&DAT_10007d60,0);
    EnableUnit(0,&DAT_10007c48,0);
    EnableUnit(0,&DAT_10007c50,0);
    EnableUnit(0,&DAT_10007c58,0);
    EnableUnit(0,&DAT_10007c68,0);
    EnableUnit(0,&DAT_10007c70,0);
    EnableUnit(0,&DAT_10007c78,0);
    EnableUnit(0,&DAT_10007c80,0);
    EnableUnit(0,&DAT_10007c88,0);
    EnableUnit(0,&DAT_10007c90,0);
    EnableUnit(0,&DAT_10007cb0,0);
    EnableUnit(0,&DAT_10007cb8,0);
    EnableUnit(0,&DAT_10007cc0,0);
    EnableUnit(0,&DAT_10007cc8,0);
    EnableUnit(0,&DAT_10007cd0,0);
    EnableUnit(0,&DAT_10007cd8,0);
    EnableUnit(0,&DAT_10007ce0,0);
    EnableUnit(0,&DAT_10007ce8,0);
    EnableUnit(0,&DAT_10007cf0,0);
    RunTimer(0x1c,100);
    RunTimer(0x1a,100);
  }
  cVar1 = Trigg(2);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007ae8,4), iVar2 == 0)) &&
      (iVar2 = GetUnitsByNation(&DAT_10007b18,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10007b88,0), 0 < iVar2)) {
    SetTrigg(2,0);
    SelectUnits(&DAT_10007b18,0);
    SelChangeNation(4,0);
    ShowPage(s__PAGE9_10007514);
    SelectUnits(&DAT_10007a08,0);
    SelDie(4);
    AddResource(0,1,500);
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007af0,4), iVar2 == 0)) &&
     ((iVar2 = GetUnitsByNation(&DAT_10007b20,0), 0 < iVar2 &&
      (iVar2 = GetUnitsAmount0(&DAT_10007b90,0), 0 < iVar2)))) {
    SetTrigg(3,0);
    SelectUnits(&DAT_10007b20,0);
    SelChangeNation(4,0);
    ShowPage(s__PAGE10_1000750c);
    SelectUnits(&DAT_10007a18,0);
    AddResource(0,1,700);
    SelDie(4);
  }
  cVar1 = Trigg(4);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007af8,4), iVar2 == 0)) &&
     ((iVar2 = GetUnitsByNation(&DAT_10007b28,0), 0 < iVar2 &&
      (iVar2 = GetUnitsAmount0(&DAT_10007ba8,0), 0 < iVar2)))) {
    SetTrigg(4,0);
    SelectUnits(&DAT_10007b28,0);
    SelChangeNation(4,0);
    ShowPage(s__PAGE10_1000750c);
    SelectUnits(&DAT_10007a10,0);
    AddResource(0,1,700);
    SelDie(4);
  }
  cVar1 = Trigg(5);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007b00,4), iVar2 == 0)) &&
      (iVar2 = GetUnitsByNation(&DAT_10007b30,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10007bb0,0), 0 < iVar2)) {
    SetTrigg(5,0);
    SelectUnits(&DAT_10007b30,0);
    SelChangeNation(4,0);
    ShowPage(s__PAGE10_1000750c);
    SelectUnits(&DAT_10007a28,0);
    AddResource(0,1,700);
    SelDie(4);
  }
  cVar1 = Trigg(6);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007b08,4), iVar2 == 0)) &&
     ((iVar2 = GetUnitsByNation(&DAT_10007b38,0), 0 < iVar2 &&
      (iVar2 = GetUnitsAmount0(&DAT_10007b98,0), 0 < iVar2)))) {
    SetTrigg(6,0);
    SelectUnits(&DAT_10007b38,0);
    SelChangeNation(4,0);
    ShowPage(s__PAGE9_10007514);
    SelectUnits(&DAT_10007a20,0);
    AddResource(0,1,500);
    SelDie(4);
  }
  cVar1 = Trigg(99);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10007b10,4), iVar2 == 0)) &&
     (iVar2 = GetUnitsByNation(&DAT_10007b40,0), 0 < iVar2)) {
    SetTrigg(99,0);
    SelectUnits(&DAT_10007b40,0);
    SelChangeNation(4,0);
    ShowPage(s__PAGE11_10007504);
    iVar2 = GetDiff(0);
    AddResource(0,1,(10 - iVar2) * 1000);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10007a78,0), 0 < iVar2)) {
    SetTrigg(7,0);
    SelectUnits(&DAT_10007d78,0);
    SelSendTo(2,&DAT_10007ac0,0,0);
    SelectUnits(&DAT_10007d80,0);
    SelSendTo(2,&DAT_10007ab0,0x80,0);
    SelectUnits(&DAT_10007d38,0);
    SelSendTo(2,&DAT_10007a60,0x40,0);
    SelectUnits(&DAT_10007d18,0);
    SelOpenGates(2);
    RunTimer(1,200);
  }
  cVar1 = Trigg(8);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(8,0);
    ShowPage(s__PAGE3_100074fc);
    SelectUnits(&DAT_10007d38,0);
    SelSendTo(2,&DAT_10007b68,0x40,0);
  }
  cVar1 = Trigg(9);
  if (((cVar1 != '\0') && (cVar1 = Trigg(8), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10007b68,0), 0 < iVar2)) {
    SetTrigg(9,0);
    SelectUnits(&DAT_10007d78,0);
    SelSendAndKill(2,&DAT_10007d10,0x40,0);
    SelectUnits(&DAT_10007d80,0);
    SelSendTo(2,&DAT_10007d20,0x40,0);
  }
  cVar1 = Trigg(10);
  if (((cVar1 == '\0') || (cVar1 = Trigg(9), cVar1 != '\0')) ||
     ((cVar1 = Trigg(0xd), cVar1 == '\0' ||
      ((iVar2 = GetUnitsAmount1(&DAT_10007b68,&DAT_10007d30), iVar2 < 1 &&
       (iVar2 = GetUnitsAmount1(&DAT_10007a78,&DAT_10007d30), iVar2 < 1))))))
  goto switchD_10002115_default;
  SetTrigg(10,0);
  uVar3 = AskMultilineQuestion(9,s__PAGE4_100074c8,0,s_Qr4_1_Qr4_2_Qr4_3_Qr4_4_Qr4_5_Qr_100074d0);
  switch(uVar3) {
  case 0:
    iVar2 = GetResource(0,1);
    if (iVar2 < 3000) {
      iVar4 = GetResource(0,1);
      iVar2 = 3000;
LAB_100022f2:
      iVar2 = iVar2 - iVar4;
LAB_100022f5:
      ShowPageParam(s__PAGE6_100074c0,iVar2);
      RunTimer(2,100);
      goto switchD_10002115_default;
    }
    AddResource(0,1,0xfffff448);
    DAT_10007a44 = 0;
    do {
      ProduceUnitFast(&DAT_10007d90,&DAT_10007d00,&DAT_10007aa8,3);
      DAT_10007a44 = DAT_10007a44 + 1;
    } while (DAT_10007a44 < 5);
    DAT_10007a44 = 0;
    break;
  case 1:
    iVar2 = GetResource(0,1);
    if (iVar2 < 0x5dc) {
      iVar2 = GetResource(0,1);
      iVar2 = 0x5dc - iVar2;
      goto LAB_100022f5;
    }
    AddResource(0,1,0xfffffa24);
    DAT_10007a40 = 0;
    do {
      ProduceUnitFast(&DAT_10007d90,&DAT_10007d70,&DAT_10007aa0,3);
      DAT_10007a40 = DAT_10007a40 + 1;
    } while (DAT_10007a40 < 5);
    DAT_10007a40 = 0;
    break;
  case 2:
    iVar2 = GetResource(0,1);
    if (iVar2 < 5000) {
      iVar4 = GetResource(0,1);
      iVar2 = 5000;
      goto LAB_100022f2;
    }
    AddResource(0,1,0xffffec78);
    DAT_10007a48 = 0;
    do {
      ProduceUnitFast(&DAT_10007c20,&DAT_10007c40,&DAT_10007ac8,3);
      DAT_10007a48 = DAT_10007a48 + 1;
    } while (DAT_10007a48 < 4);
    DAT_10007a48 = 0;
    break;
  case 3:
    iVar2 = GetResource(0,1);
    if (iVar2 < 5000) {
      iVar2 = GetResource(0,1);
      iVar2 = 5000 - iVar2;
      goto LAB_100022f5;
    }
    AddResource(0,1,0xffffec78);
    DAT_10007a4c = 0;
    do {
      ProduceUnitFast(&DAT_10007c20,&DAT_10007cf8,&DAT_10007ab8,3);
      DAT_10007a4c = DAT_10007a4c + 1;
    } while (DAT_10007a4c < 4);
    DAT_10007a4c = 0;
    break;
  case 4:
    iVar2 = GetResource(0,1);
    if (iVar2 < 0xdac) {
      iVar4 = GetResource(0,1);
      iVar2 = 0xdac;
      goto LAB_100022f2;
    }
    AddResource(0,1,0xfffff254);
    DAT_10007a50 = 0;
    do {
      InitialUpgrade(s_Gkomandirz_1000744c,s_AKA25SA_100074b8);
      RunTimer(4,800);
      SetTrigg(0xd,0);
      SetTrigg(0xe,0);
      SetTrigg(0x10,1);
      RunTimer(6,800);
      DAT_10007a50 = DAT_10007a50 + 1;
    } while (DAT_10007a50 < 1);
    break;
  case 5:
    iVar2 = GetResource(0,1);
    if (iVar2 < 1000) {
      iVar2 = GetResource(0,1);
      ShowPageParam(s__PAGE6_100074c0,1000 - iVar2);
      SetLightSpot(&DAT_10007bb8,3,7);
      RunTimer(2,100);
      goto switchD_10002115_default;
    }
    AddResource(0,1,0xfffffc18);
    DAT_10007a54 = 0;
    do {
      ProduceUnitFast(&DAT_10007be8,&DAT_10007a58,&DAT_10007a90,3);
      SetLightSpot(&DAT_10007bb8,3,0xe);
      DAT_10007a54 = DAT_10007a54 + 1;
    } while (DAT_10007a54 < 1);
    break;
  case 6:
    goto switchD_10002115_caseD_6;
  default:
    goto switchD_10002115_default;
  }
  RunTimer(2,300);
switchD_10002115_default:
  cVar1 = Trigg(0xb);
  pcVar7 = SelSendTo_exref;
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), pcVar7 = SelSendTo_exref, cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10007aa8,2), pcVar7 = SelSendTo_exref, 0 < iVar2)) {
    SelectUnits(&DAT_10007aa8,0);
    pcVar7 = SelSendTo_exref;
    SelSendTo(2,&DAT_10007a68,0x50,0);
    SelSendTo(2,&DAT_10007a70,0x50,2);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10007aa8,&DAT_10007b78);
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10007aa0,2), 0 < iVar2)) {
    SelectUnits(&DAT_10007aa0,0);
    (*pcVar7)(2,&DAT_10007a68,0x50,0);
    (*pcVar7)(2,&DAT_10007a70,0x50,2);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10007aa0,&DAT_10007b70);
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10007ac8,2), 0 < iVar2)) {
    SelectUnits(&DAT_10007ac8,0);
    (*pcVar7)(2,&DAT_10007c28,0x50,0);
    (*pcVar7)(2,&DAT_10007c30,0x40,2);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10007ac8,&DAT_10007bc0);
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10007ab8,2), 0 < iVar2)) {
    SelectUnits(&DAT_10007ab8,0);
    (*pcVar7)(2,&DAT_10007c28,0x50,0);
    (*pcVar7)(2,&DAT_10007c30,0x40,2);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10007ab8,&DAT_10007b80);
  }
  cVar1 = Trigg(0x1e);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_10007a90,2), 0 < iVar2)) {
    SelectUnits(&DAT_10007a90,0);
    SelChangeNation(2,0);
    RemoveGroup(&DAT_10007a90,&DAT_10007bc8);
  }
  cVar1 = Trigg(0xc);
  pcVar7 = SetTrigg_exref;
  pcVar8 = RunTimer_exref;
  if ((cVar1 != '\0') &&
     (cVar1 = TimerDoneFirst(2), pcVar7 = SetTrigg_exref, pcVar8 = RunTimer_exref, cVar1 != '\0')) {
    cVar1 = AskQuestion(s__PAGE5_100074b0);
    if (cVar1 == '\0') goto switchD_10002115_caseD_6;
    SetTrigg(10,1);
    pcVar7 = SetTrigg_exref;
    pcVar8 = RunTimer_exref;
  }
LAB_100026a3:
  cVar1 = TimerDone(5);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 == '\0')) &&
     (cVar1 = Trigg(0x10), cVar1 == '\0')) {
    FreeTimer(5);
    (*pcVar7)(10,1);
    (*pcVar7)(0x10,1);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (cVar1 = TimerDoneFirst(6), cVar1 != '\0')) {
    SetLightSpot(&DAT_10007be0,8,1);
    SetLightSpot(&DAT_10007c00,8,2);
    SetLightSpot(&DAT_10007c08,8,3);
    SetLightSpot(&DAT_10007bf0,8,4);
    SetLightSpot(&DAT_10007bf8,8,5);
    SetLightSpot(&DAT_10007c10,8,6);
    SetLightSpot(&DAT_10007c18,8,7);
    SetLightSpot(&DAT_10007a78,8,8);
    SetLightSpot(&DAT_10007b48,8,9);
  }
  cVar1 = Trigg(10);
  if (((cVar1 == '\0') || (cVar1 = Trigg(9), cVar1 != '\0')) ||
     ((cVar1 = Trigg(0xd), cVar1 != '\0' ||
      ((iVar2 = GetUnitsAmount1(&DAT_10007b68,&DAT_10007d30), iVar2 < 1 &&
       (iVar2 = GetUnitsAmount1(&DAT_10007a78,&DAT_10007d30), iVar2 < 1))))))
  goto switchD_100027f7_default;
  (*pcVar7)(10,0);
  uVar3 = AskMultilineQuestion(9,s__PAGE4_100074c8,0,s_Qr4_1_Qr4_2_Qr4_3_Qr4_4_Qr4_6_Qr_1000748c);
  switch(uVar3) {
  case 0:
    iVar2 = GetResource(0,1);
    if (iVar2 < 3000) {
      iVar2 = GetResource(0,1);
      iVar4 = 3000;
LAB_1000281d:
      iVar4 = iVar4 - iVar2;
LAB_10002820:
      ShowPageParam(s__PAGE6_100074c0,iVar4);
      (*pcVar8)(2,100);
    }
    else {
      AddResource(0,1,0xfffff448);
      DAT_10007a44 = 0;
      do {
        ProduceUnitFast(&DAT_10007d90,&DAT_10007d00,&DAT_10007aa8,3);
        DAT_10007a44 = DAT_10007a44 + 1;
      } while (DAT_10007a44 < 5);
      DAT_10007a44 = 0;
      (*pcVar8)(2,300);
    }
    break;
  case 1:
    iVar2 = GetResource(0,1);
    if (0x5db < iVar2) {
      AddResource(0,1,0xfffffa24);
      DAT_10007a40 = 0;
      do {
        ProduceUnitFast(&DAT_10007d90,&DAT_10007d70,&DAT_10007aa0,3);
        DAT_10007a40 = DAT_10007a40 + 1;
      } while (DAT_10007a40 < 5);
      DAT_10007a40 = 0;
      (*pcVar8)(2,300);
      break;
    }
    iVar4 = GetResource(0,1);
    iVar4 = 0x5dc - iVar4;
    goto LAB_10002820;
  case 2:
    iVar2 = GetResource(0,1);
    if (iVar2 < 5000) {
      iVar2 = GetResource(0,1);
      iVar4 = 5000;
      goto LAB_1000281d;
    }
    AddResource(0,1,0xffffec78);
    DAT_10007a48 = 0;
    do {
      ProduceUnitFast(&DAT_10007c20,&DAT_10007c40,&DAT_10007ac8,3);
      DAT_10007a48 = DAT_10007a48 + 1;
    } while (DAT_10007a48 < 4);
    DAT_10007a48 = 0;
    (*pcVar8)(2,300);
    break;
  case 3:
    iVar2 = GetResource(0,1);
    if (iVar2 < 5000) {
      iVar4 = GetResource(0,1);
      iVar4 = 5000 - iVar4;
      goto LAB_10002820;
    }
    AddResource(0,1,0xffffec78);
    DAT_10007a4c = 0;
    do {
      ProduceUnitFast(&DAT_10007c20,&DAT_10007cf8,&DAT_10007ab8,3);
      DAT_10007a4c = DAT_10007a4c + 1;
    } while (DAT_10007a4c < 4);
    DAT_10007a4c = 0;
    (*pcVar8)(2,300);
    break;
  case 4:
    iVar2 = GetResource(0,1);
    if (iVar2 < 1000) {
      iVar2 = GetResource(0,1);
      iVar4 = 1000;
      goto LAB_1000281d;
    }
    AddResource(0,1,0xfffffc18);
    DAT_10007a54 = 0;
    do {
      ProduceUnitFast(&DAT_10007be8,&DAT_10007a58,&DAT_10007a90,3);
      SetLightSpot(&DAT_10007bb8,3,0xc);
      DAT_10007a54 = DAT_10007a54 + 1;
    } while (DAT_10007a54 < 1);
    (*pcVar8)(2,700);
    break;
  case 5:
    goto switchD_10002115_caseD_6;
  default:
    break;
  }
switchD_100027f7_default:
  cVar1 = Trigg(0x14);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(0x1c), cVar1 != '\0')) &&
     (iVar2 = GetUnitsAmount2(&DAT_10007d98,&DAT_10007a80,0), pcVar5 = SetTrigg_exref, 0 < iVar2)) {
    SetTrigg(0x14,0);
    ShowPage(s__PAGE7_10007484);
    FreeTimer(0x14);
    FreeTimer(0x1c);
    SelectUnitsType(&DAT_10007a80,0,0);
    SaveSelectedUnits(0,&DAT_10007a98,0);
    SelectUnitsType(&DAT_10007a80,0,0);
    SelSendTo(0,&DAT_10007d08,0x50,0);
    SelectUnitsType(&DAT_10007a80,0,0);
    SelChangeNation(0,2);
    (*pcVar8)(0x14,1000);
    (*pcVar8)(0x1c,3000);
    SetTrigg(0x59,1);
    pcVar7 = pcVar5;
  }
  cVar1 = Trigg(0x59);
  pcVar5 = GetUnitsByNation_exref;
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x14), pcVar5 = GetUnitsByNation_exref, cVar1 != '\0'))
  {
    (*pcVar7)(0x59,0);
    pcVar5 = GetUnitsByNation_exref;
    iVar2 = GetUnitsByNation(&DAT_10007a98,2);
    uVar3 = GetUnitsByNation(&DAT_10007a98,2,iVar2 * 300);
    ShowPageParam(s__PAGE8_1000747c,uVar3);
    iVar2 = GetUnitsByNation(&DAT_10007a98,2);
    AddResource(0,1,iVar2 * 300);
    (*pcVar7)(0x14,1);
  }
  cVar1 = TimerDone(0x1a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount2(&DAT_10007d08,&DAT_10007a80,2), 3 < iVar2)) {
    SelectUnitsInZone(&DAT_10007d08,2,0);
    SaveSelectedUnits(2,&DAT_10007a38,0);
    TakeStone(&DAT_10007a38);
    (*pcVar8)(0x1a,2000);
  }
  cVar1 = Trigg(0x18);
  if (cVar1 != '\0') {
    (*pcVar7)(0x18,0);
    (*pcVar8)(0x18,1000);
  }
  cVar1 = Trigg(0x16);
  pcVar6 = SelectUnits_exref;
  if ((((cVar1 != '\0') &&
       (iVar2 = (*pcVar5)(&DAT_10007ca0,4), pcVar6 = SelectUnits_exref, 0 < iVar2)) &&
      (iVar2 = GetUnitsAmount1(&DAT_10007b48,&DAT_10007ca0), pcVar6 = SelectUnits_exref, 0 < iVar2))
     && (cVar1 = TimerDone(0x18), pcVar6 = SelectUnits_exref, cVar1 != '\0')) {
    (*pcVar7)(0x16,0);
    pcVar6 = SelectUnits_exref;
    SelectUnits(&DAT_10007ca0,0);
    SelSendTo(4,&DAT_10007d58,0x23,0);
    (*pcVar8)(0x16,1000);
    (*pcVar7)(0x17,1);
  }
  cVar1 = Trigg(0x17);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x16), cVar1 != '\0')) {
    (*pcVar7)(0x17,0);
    (*pcVar6)(&DAT_10007ca0,0);
    SelSendTo(4,&DAT_10007b48,0x80,0);
    (*pcVar7)(0x16,1);
    (*pcVar7)(0x18,1);
  }
  cVar1 = Trigg(0x1b);
  if (cVar1 != '\0') {
    (*pcVar7)(0x1b,0);
    (*pcVar8)(0x1b,0x44c);
  }
  cVar1 = Trigg(0x19);
  if (((cVar1 != '\0') && (iVar2 = (*pcVar5)(&DAT_10007d68,4), 0 < iVar2)) &&
     ((iVar2 = GetUnitsAmount1(&DAT_10007d58,&DAT_10007d68), 0 < iVar2 &&
      (cVar1 = TimerDone(0x1b), cVar1 != '\0')))) {
    (*pcVar7)(0x19,0);
    (*pcVar6)(&DAT_10007d68,0);
    SelSendTo(4,&DAT_10007b48,0x23,0);
    (*pcVar8)(0x19,900);
    (*pcVar7)(0x1a,1);
  }
  pcVar8 = Trigg_exref;
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0x19), cVar1 != '\0')) {
    (*pcVar7)(0x1a,0);
    (*pcVar6)(&DAT_10007d68,0);
    SelSendTo(4,&DAT_10007d58,0x80,0);
    (*pcVar7)(0x19,1);
    (*pcVar7)(0x1b,1);
  }
  cVar1 = Trigg(0x28);
  if (cVar1 != '\0') {
    SetTrigg(0x28,0);
    pcVar6 = SelectUnits_exref;
    SelectUnits(&DAT_10007da0,0);
    Patrol(2,&DAT_10007a00,0);
    SelectUnits(&DAT_10007ad8,0);
    Patrol(2,&DAT_10007bd8,0);
    SelectUnits(&DAT_10007ad0,0);
    Patrol(2,&DAT_10007bd0,0);
    pcVar5 = GetUnitsByNation_exref;
    pcVar7 = SetTrigg_exref;
    pcVar8 = Trigg_exref;
  }
  cVar1 = (*pcVar8)(0x60);
  pcVar8 = ShowPage_exref;
  if (((cVar1 != '\0') && (iVar2 = (*pcVar5)(&DAT_10007ba0,5), pcVar8 = ShowPage_exref, iVar2 == 0))
     && (iVar2 = GetUnitsAmount0(&DAT_10007d60,0), pcVar8 = ShowPage_exref, 0 < iVar2)) {
    (*pcVar7)(0x60,0);
    pcVar8 = ShowPage_exref;
    ShowPage(s__PAGE12_10007474);
    (*pcVar6)(&DAT_10007d88,0);
    SelErase(7);
    CreateObject0(&DAT_10007b60,&DAT_10007ae0,&DAT_10007a30,7,&DAT_10007d60,0);
    AddResource(0,1,3000);
  }
  cVar1 = Trigg(0x62);
  if ((cVar1 != '\0') && (iVar2 = (*pcVar5)(&DAT_10007c98,4), iVar2 == 0)) {
    (*pcVar7)(0x62,0);
    (*pcVar8)(s__PAGE14_1000746c);
    ShowVictory();
  }
  cVar1 = Trigg(0x61);
  if ((cVar1 != '\0') && (iVar2 = (*pcVar5)(&DAT_10007d30,0), iVar2 == 0)) {
    (*pcVar7)(0x61,0);
    (*pcVar8)(s__PAGE13_10007464);
    LooseGame();
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (iVar2 = (*pcVar5)(&DAT_10007ca0,0), 0 < iVar2)) {
    (*pcVar7)(0x37,0);
    (*pcVar6)(&DAT_10007ca0,0);
    SelDie(0);
  }
  cVar1 = Trigg(0x38);
  if ((cVar1 != '\0') && (iVar2 = (*pcVar5)(&DAT_10007d68,0), 0 < iVar2)) {
    (*pcVar7)(0x38,0);
    (*pcVar6)(&DAT_10007d68,0);
    SelDie(0);
  }
  return;
switchD_10002115_caseD_6:
  pcVar8 = RunTimer_exref;
  RunTimer(5,5000);
  pcVar7 = SetTrigg_exref;
  SetTrigg(0x10,0);
  goto LAB_100026a3;
}



// Function: FUN_10003090 @ 0x10003090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10003090(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10007dc4 = GetVersion();
    iVar1 = FUN_10003ac4(1);
    if (iVar1 != 0) {
      _DAT_10007dd0 = DAT_10007dc4 >> 8 & 0xff;
      _DAT_10007dcc = DAT_10007dc4 & 0xff;
      DAT_10007dc4 = DAT_10007dc4 >> 0x10;
      _DAT_10007dc8 = _DAT_10007dcc * 0x100 + _DAT_10007dd0;
      iVar1 = FUN_10003357();
      if (iVar1 != 0) {
        DAT_10008318 = GetCommandLineA();
        DAT_10007db0 = FUN_10003992();
        FUN_1000347c();
        FUN_10003745();
        FUN_1000368c();
        FUN_10003239();
        DAT_10007dac = DAT_10007dac + 1;
        goto LAB_10003163;
      }
      FUN_10003b00();
    }
LAB_100030f0:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10007dac < 1) goto LAB_100030f0;
      DAT_10007dac = DAT_10007dac + -1;
      if (DAT_10007dfc == 0) {
        FUN_10003277();
      }
      FUN_10003638();
      FUN_100033ab();
      FUN_10003b00();
    }
    else if (param_2 == 3) {
      FUN_100033dc((LPVOID)0x0);
    }
LAB_10003163:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10003169

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10007dac;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_100031b1;
    if ((DAT_1000831c != (code *)0x0) &&
       (iVar2 = (*DAT_1000831c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10003090(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_100031b1:
  iVar2 = FUN_10001580(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10003090(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10003090(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000831c != (code *)0x0) {
      iVar2 = (*DAT_1000831c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10003206

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10007db8 == 1) || ((DAT_10007db8 == 0 && (DAT_10007dbc == 1)))) {
    FUN_10003b75();
  }
  FUN_10003bae(param_1);
  (*(code *)PTR___exit_100076d4)(0xff);
  return;
}



// Function: FUN_10003239 @ 0x10003239

void FUN_10003239(void)

{
  if (DAT_10008314 != (code *)0x0) {
    (*DAT_10008314)();
  }
  FUN_1000333d((undefined4 *)&DAT_10007008,(undefined4 *)&DAT_10007010);
  FUN_1000333d((undefined4 *)&DAT_10007000,(undefined4 *)&DAT_10007004);
  return;
}



// Function: __exit @ 0x10003266

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10003286(_Code,1,0);
  return;
}



// Function: FUN_10003277 @ 0x10003277

void FUN_10003277(void)

{
  FUN_10003286(0,0,1);
  return;
}



// Function: FUN_10003286 @ 0x10003286

void __cdecl FUN_10003286(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1000332b();
  if (DAT_10007e00 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10007dfc = 1;
  DAT_10007df8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10008310 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000830c - 4), DAT_10008310 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10008310 <= puVar1);
    }
    FUN_1000333d((undefined4 *)&DAT_10007014,(undefined4 *)&DAT_10007018);
  }
  FUN_1000333d((undefined4 *)&DAT_1000701c,(undefined4 *)&DAT_10007020);
  if (param_3 == 0) {
    DAT_10007e00 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10003334();
  return;
}



// Function: FUN_1000332b @ 0x1000332b

void FUN_1000332b(void)

{
  FUN_10003d96(0xd);
  return;
}



// Function: FUN_10003334 @ 0x10003334

void FUN_10003334(void)

{
  FUN_10003df7(0xd);
  return;
}



// Function: FUN_1000333d @ 0x1000333d

void __cdecl FUN_1000333d(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10003357 @ 0x10003357

undefined4 FUN_10003357(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10003d01();
  DAT_100076d8 = TlsAlloc();
  if (DAT_100076d8 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10003e0c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100076d8,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100033c9((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_100033ab @ 0x100033ab

void FUN_100033ab(void)

{
  FUN_10003d2a();
  if (DAT_100076d8 != 0xffffffff) {
    TlsFree(DAT_100076d8);
    DAT_100076d8 = 0xffffffff;
  }
  return;
}



// Function: FUN_100033c9 @ 0x100033c9

void __cdecl FUN_100033c9(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10007858;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_100033dc @ 0x100033dc

void __cdecl FUN_100033dc(LPVOID param_1)

{
  if (DAT_100076d8 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_100076d8), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_10003e99(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_10003e99(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_10003e99(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_10003e99(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_10003e99(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_10003e99(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10007858) {
        FUN_10003e99(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_10003e99(param_1);
    }
    TlsSetValue(DAT_100076d8,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_1000347c @ 0x1000347c

void FUN_1000347c(void)

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
  DAT_10008300 = 0x20;
  DAT_10008200 = puVar2;
  for (; puVar2 < DAT_10008200 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10008300 < (int)UVar8) {
      puVar2 = &DAT_10008204;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10008300;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10008300 = DAT_10008300 + 0x20;
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
      } while ((int)DAT_10008300 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10008200)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10008200 + iVar6 * 9;
    if (DAT_10008200[iVar6 * 9] == -1) {
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
          goto LAB_10003621;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10003621:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10008300);
      return;
    }
  } while( true );
}



// Function: FUN_10003638 @ 0x10003638

void FUN_10003638(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10008200;
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
      FUN_10003e99((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10008300);
  return;
}



// Function: FUN_1000368c @ 0x1000368c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000368c(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10008308 == 0) {
    FUN_100044b3();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10007db0; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10007de0 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10007db0;
  puVar6 = DAT_10007db0;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10003f70((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10003e99(DAT_10007db0);
  DAT_10007db0 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10008304 = 1;
  return;
}



// Function: FUN_10003745 @ 0x10003745

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003745(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10008308 == 0) {
    FUN_100044b3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10007e04,0x104);
  _DAT_10007df0 = &DAT_10007e04;
  pbVar2 = &DAT_10007e04;
  if (*DAT_10008318 != 0) {
    pbVar2 = DAT_10008318;
  }
  FUN_100037de(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100037de(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10007dd8 = puVar1;
  _DAT_10007dd4 = local_8 + -1;
  return;
}



// Function: FUN_100037de @ 0x100037de

void __cdecl FUN_100037de(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_100080e0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_100080e0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10003889;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10003889:
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
          if ((*(byte *)((int)&DAT_100080e0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_100080e0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10003992 @ 0x10003992

LPSTR FUN_10003992(void)

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
  if (DAT_10007f08 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10007f08 = 1;
LAB_100039e9:
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
        FUN_10003e99(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10007f08 = 2;
  }
  else {
    if (DAT_10007f08 == 1) goto LAB_100039e9;
    if (DAT_10007f08 != 2) {
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
    FUN_100044d0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10003ac4 @ 0x10003ac4

undefined4 __cdecl FUN_10003ac4(int param_1)

{
  int iVar1;
  
  DAT_100081e8 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_100081e8 != (HANDLE)0x0) {
    iVar1 = FUN_10004805();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_100081e8);
  }
  return 0;
}



// Function: FUN_10003b00 @ 0x10003b00

void FUN_10003b00(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_10007fc0) {
    puVar2 = (undefined4 *)((int)DAT_10007fc4 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_100081e8,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10007fc0);
  }
  HeapFree(DAT_100081e8,0,DAT_10007fc4);
  HeapDestroy(DAT_100081e8);
  return;
}



// Function: FUN_10003b75 @ 0x10003b75

void FUN_10003b75(void)

{
  if ((DAT_10007db8 == 1) || ((DAT_10007db8 == 0 && (DAT_10007dbc == 1)))) {
    FUN_10003bae(0xfc);
    if (DAT_10007f0c != (code *)0x0) {
      (*DAT_10007f0c)();
    }
    FUN_10003bae(0xff);
  }
  return;
}



// Function: FUN_10003bae @ 0x10003bae

void __cdecl FUN_10003bae(DWORD param_1)

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
  pDVar2 = &DAT_10007708;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10007798);
  if (param_1 == (&DAT_10007708)[iVar5 * 2]) {
    if ((DAT_10007db8 == 1) || ((DAT_10007db8 == 0 && (DAT_10007dbc == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000770c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10003f70(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10003f70(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10003f80(local_a4,_Dest);
      FUN_10003f80(local_a4,(uint *)&DAT_10006424);
      FUN_10003f80(local_a4,*(uint **)(iVar5 * 8 + 0x1000770c));
      auStackY_1e3._3_4_ = 0x10003cd2;
      FUN_1000504e(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10003d01 @ 0x10003d01

void FUN_10003d01(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100077dc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100077cc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100077bc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000779c);
  return;
}



// Function: FUN_10003d2a @ 0x10003d2a

void FUN_10003d2a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10007798;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100077dc)) && (ppuVar1 != &PTR_DAT_100077cc)) &&
       ((ppuVar1 != &PTR_DAT_100077bc && (ppuVar1 != &PTR_DAT_1000779c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10003e99(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10007858);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100077bc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100077cc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100077dc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000779c);
  return;
}



// Function: FUN_10003d96 @ 0x10003d96

void __cdecl FUN_10003d96(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10007798 + param_1;
  if ((&DAT_10007798)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10003d96(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10003e99(lpCriticalSection);
    }
    FUN_10003df7(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10003df7 @ 0x10003df7

void __cdecl FUN_10003df7(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10007798)[param_1]);
  return;
}



// Function: FUN_10003e0c @ 0x10003e0c

int * __cdecl FUN_10003e0c(int param_1,int param_2)

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
      if (_Size < DAT_100079e0 || (int)_Size - (int)DAT_100079e0 == 0) {
        FUN_10003d96(9);
        piVar1 = FUN_10004b99(_Size);
        FUN_10003df7(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_100081e8,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_10007f84 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10005238(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_10003e99 @ 0x10003e99

void __cdecl FUN_10003e99(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_10003d96(9);
    puVar1 = (uint *)FUN_10004843((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_1000486e(puVar1,(uint)param_1);
      FUN_10003df7(9);
      return;
    }
    FUN_10003df7(9);
    HeapFree(DAT_100081e8,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x10003ee1

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10007f84);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10003ef3

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_10003f1f((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10005238(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10003f1f @ 0x10003f1f

int * __cdecl FUN_10003f1f(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_100079e0) {
    FUN_10003d96(9);
    piVar1 = FUN_10004b99(param_1);
    FUN_10003df7(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_100081e8,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_10003f70 @ 0x10003f70

uint * __cdecl FUN_10003f70(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10004058;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10004058:
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



// Function: FUN_10003f80 @ 0x10003f80

uint * __cdecl FUN_10003f80(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10003f9c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10003fcf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10003feb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10003f9c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10003feb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10003feb;
    }
  }
LAB_10003fcf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10003feb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10004058:
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
    if (bVar1 == 0) goto LAB_10004058;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x10004060

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10004080;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100040b3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10004080:
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
  goto LAB_100040b3;
}



// Function: FUN_100040db @ 0x100040db

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100040db(int param_1)

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
  
  FUN_10003d96(0x19);
  CodePage = FUN_10004288(param_1);
  if (CodePage != DAT_10007fc8) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100078e8;
LAB_10004118:
      if (*pUVar5 != CodePage) goto code_r0x1000411c;
      local_8 = 0;
      puVar15 = &DAT_100080e0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100078f8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100078e0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_100080e0 + uVar8 + 1);
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
      _DAT_10007fdc = 1;
      DAT_10007fc8 = CodePage;
      DAT_100081e4 = FUN_100042d2(CodePage);
      DAT_10007fd0 = *(undefined4 *)(iVar12 + 0x100078ec);
      DAT_10007fd4 = *(undefined4 *)(iVar12 + 0x100078f0);
      DAT_10007fd8 = *(undefined4 *)(iVar12 + 0x100078f4);
      goto LAB_1000426c;
    }
    goto LAB_10004267;
  }
  goto LAB_10004102;
code_r0x1000411c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100079d7 < (int)pUVar5) goto code_r0x10004127;
  goto LAB_10004118;
code_r0x10004127:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_100081e4 = 0;
    puVar15 = &DAT_100080e0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_10007fdc = 0;
      DAT_10007fc8 = CodePage;
    }
    else {
      DAT_10007fc8 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_100080e0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_100080e0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_100081e4 = FUN_100042d2(CodePage);
      _DAT_10007fdc = 1;
    }
    DAT_10007fd0 = 0;
    DAT_10007fd4 = 0;
    DAT_10007fd8 = 0;
  }
  else {
    if (DAT_10007f70 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10004279;
    }
LAB_10004267:
    FUN_10004305();
  }
LAB_1000426c:
  FUN_1000432e();
LAB_10004102:
  uVar14 = 0;
LAB_10004279:
  FUN_10003df7(0x19);
  return uVar14;
}



// Function: FUN_10004288 @ 0x10004288

int __cdecl FUN_10004288(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10007f70 = 1;
                    /* WARNING: Could not recover jumptable at 0x100042a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10007f70 = 1;
                    /* WARNING: Could not recover jumptable at 0x100042b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10007fa0;
  }
  DAT_10007f70 = (uint)bVar2;
  return param_1;
}



// Function: FUN_100042d2 @ 0x100042d2

undefined4 __cdecl FUN_100042d2(int param_1)

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



// Function: FUN_10004305 @ 0x10004305

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004305(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100080e0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10007fc8 = 0;
  _DAT_10007fdc = 0;
  DAT_100081e4 = 0;
  DAT_10007fd0 = 0;
  DAT_10007fd4 = 0;
  DAT_10007fd8 = 0;
  return;
}



// Function: FUN_1000432e @ 0x1000432e

void FUN_1000432e(void)

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
  
  BVar2 = GetCPInfo(DAT_10007fc8,&local_18);
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
    FUN_100054a2(1,local_118,0x100,local_518,DAT_10007fc8,DAT_100081e4,0);
    FUN_10005253(DAT_100081e4,0x100,local_118,0x100,local_218,0x100,DAT_10007fc8,0);
    FUN_10005253(DAT_100081e4,0x200,local_118,0x100,local_318,0x100,DAT_10007fc8,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_100080e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000443a;
        }
        (&DAT_10007fe0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100080e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000443a:
        (&DAT_10007fe0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_100080e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10004484;
        }
        (&DAT_10007fe0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100080e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10004484:
        (&DAT_10007fe0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_100044b3 @ 0x100044b3

void FUN_100044b3(void)

{
  if (DAT_10008308 == 0) {
    FUN_100040db(-3);
    DAT_10008308 = 1;
  }
  return;
}



// Function: FUN_100044d0 @ 0x100044d0

undefined4 * __cdecl FUN_100044d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10004687_caseD_2;
        case 3:
          goto switchD_10004687_caseD_3;
        }
        goto switchD_10004687_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10004687_caseD_0;
      case 1:
        goto switchD_10004687_caseD_1;
      case 2:
        goto switchD_10004687_caseD_2;
      case 3:
        goto switchD_10004687_caseD_3;
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
              goto switchD_10004687_caseD_2;
            case 3:
              goto switchD_10004687_caseD_3;
            }
            goto switchD_10004687_caseD_1;
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
              goto switchD_10004687_caseD_2;
            case 3:
              goto switchD_10004687_caseD_3;
            }
            goto switchD_10004687_caseD_1;
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
              goto switchD_10004687_caseD_2;
            case 3:
              goto switchD_10004687_caseD_3;
            }
            goto switchD_10004687_caseD_1;
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
switchD_10004687_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10004687_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10004687_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10004687_caseD_0:
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
        goto switchD_10004505_caseD_2;
      case 3:
        goto switchD_10004505_caseD_3;
      }
      goto switchD_10004505_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004505_caseD_0;
    case 1:
      goto switchD_10004505_caseD_1;
    case 2:
      goto switchD_10004505_caseD_2;
    case 3:
      goto switchD_10004505_caseD_3;
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
            goto switchD_10004505_caseD_2;
          case 3:
            goto switchD_10004505_caseD_3;
          }
          goto switchD_10004505_caseD_1;
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
            goto switchD_10004505_caseD_2;
          case 3:
            goto switchD_10004505_caseD_3;
          }
          goto switchD_10004505_caseD_1;
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
            goto switchD_10004505_caseD_2;
          case 3:
            goto switchD_10004505_caseD_3;
          }
          goto switchD_10004505_caseD_1;
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
switchD_10004505_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004505_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004505_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004505_caseD_0:
  return param_1;
}



// Function: FUN_10004805 @ 0x10004805

undefined4 FUN_10004805(void)

{
  DAT_10007fc4 = HeapAlloc(DAT_100081e8,0,0x140);
  if (DAT_10007fc4 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10007fbc = 0;
  DAT_10007fc0 = 0;
  DAT_10007fb8 = DAT_10007fc4;
  DAT_10007fb0 = 0x10;
  return 1;
}



// Function: FUN_10004843 @ 0x10004843

uint __cdecl FUN_10004843(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10007fc4;
  while( true ) {
    if (DAT_10007fc4 + DAT_10007fc0 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_1000486e @ 0x1000486e

void __cdecl FUN_1000486e(uint *param_1,uint param_2)

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
  uVar5 = DAT_10007fb4;
  puVar2 = DAT_10007fbc;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_10007fbc != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_10007fb4 * 0x8000 + DAT_10007fbc[3]),0x8000,0x4000);
    DAT_10007fbc[2] = DAT_10007fbc[2] | 0x80000000U >> ((byte)DAT_10007fb4 & 0x1f);
    *(undefined4 *)(DAT_10007fbc[4] + 0xc4 + DAT_10007fb4 * 4) = 0;
    *(char *)(DAT_10007fbc[4] + 0x43) = *(char *)(DAT_10007fbc[4] + 0x43) + -1;
    if (*(char *)(DAT_10007fbc[4] + 0x43) == '\0') {
      DAT_10007fbc[1] = DAT_10007fbc[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_10007fbc[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_10007fbc[3],0,0x8000);
      HeapFree(DAT_100081e8,0,(LPVOID)DAT_10007fbc[4]);
      FUN_100055f0(DAT_10007fbc,DAT_10007fbc + 5,
                   (DAT_10007fc0 * 0x14 - (int)DAT_10007fbc) + -0x14 + DAT_10007fc4);
      DAT_10007fc0 = DAT_10007fc0 + -1;
      if (DAT_10007fbc < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_10007fb8 = DAT_10007fc4;
      puVar2 = param_1;
    }
  }
  DAT_10007fbc = puVar2;
  DAT_10007fb4 = uVar5;
  return;
}



// Function: FUN_10004b99 @ 0x10004b99

int * __cdecl FUN_10004b99(uint *param_1)

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
  
  puVar8 = DAT_10007fc4 + DAT_10007fc0 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10007fb8;
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
  puVar11 = DAT_10007fc4;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10007fb8 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10007fb8) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10007fc4;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10007fb8 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10007fb8) && (param_1 = FUN_10004ea2(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10004f53((int)param_1);
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
  DAT_10007fb8 = param_1;
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
    if (iVar9 == 0) goto LAB_10004e5f;
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
LAB_10004e5f:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10007fbc)) && (local_8 == DAT_10007fb4)) {
    DAT_10007fbc = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10004ea2 @ 0x10004ea2

undefined4 * FUN_10004ea2(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10007fc0 == DAT_10007fb0) {
    pvVar2 = HeapReAlloc(DAT_100081e8,0,DAT_10007fc4,(DAT_10007fb0 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10007fb0 = DAT_10007fb0 + 0x10;
    DAT_10007fc4 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10007fc4 + DAT_10007fc0 * 0x14);
  pvVar2 = HeapAlloc(DAT_100081e8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10007fc0 = DAT_10007fc0 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_100081e8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10004f53 @ 0x10004f53

int __cdecl FUN_10004f53(int param_1)

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



// Function: FUN_1000504e @ 0x1000504e

int __cdecl FUN_1000504e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10007f74 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10007f74 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10007f74 != (FARPROC)0x0) {
        DAT_10007f78 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10007f7c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000509d;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000509d:
    if (DAT_10007f78 != (FARPROC)0x0) {
      iVar1 = (*DAT_10007f78)();
      if ((iVar1 != 0) && (DAT_10007f7c != (FARPROC)0x0)) {
        iVar1 = (*DAT_10007f7c)(iVar1);
      }
    }
    iVar1 = (*DAT_10007f74)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x100050e0

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
        goto joined_r0x1000511e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000515b;
        goto LAB_100051c9;
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
joined_r0x100051c5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_100051c9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000515b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x100051c5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x100051c5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x100051c5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000511e:
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
LAB_1000515b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: _memset @ 0x100051e0

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



// Function: FUN_10005238 @ 0x10005238

undefined4 __cdecl FUN_10005238(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10007f80 != (code *)0x0) {
    iVar1 = (*DAT_10007f80)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10005253 @ 0x10005253

int __cdecl
FUN_10005253(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100064a8;
  puStack_10 = &LAB_10005a20;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10007fa8 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10007fa8 = 2;
    }
    else {
      DAT_10007fa8 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10005477(param_3,param_4);
  }
  if (DAT_10007fa8 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10007fa8 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10007fa0;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10005b00();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10005b00();
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



// Function: FUN_10005477 @ 0x10005477

int __cdecl FUN_10005477(char *param_1,int param_2)

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



// Function: FUN_100054a2 @ 0x100054a2

BOOL __cdecl
FUN_100054a2(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100064c0;
  puStack_10 = &LAB_10005a20;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10007fac;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10007fac == 0) {
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
  DAT_10007fac = iVar3;
  if (DAT_10007fac != 2) {
    if (DAT_10007fac == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10007fa0;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10005b00();
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
    param_6 = DAT_10007f90;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_100055f0 @ 0x100055f0

undefined4 * __cdecl FUN_100055f0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100057a7_caseD_2;
        case 3:
          goto switchD_100057a7_caseD_3;
        }
        goto switchD_100057a7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100057a7_caseD_0;
      case 1:
        goto switchD_100057a7_caseD_1;
      case 2:
        goto switchD_100057a7_caseD_2;
      case 3:
        goto switchD_100057a7_caseD_3;
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
              goto switchD_100057a7_caseD_2;
            case 3:
              goto switchD_100057a7_caseD_3;
            }
            goto switchD_100057a7_caseD_1;
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
              goto switchD_100057a7_caseD_2;
            case 3:
              goto switchD_100057a7_caseD_3;
            }
            goto switchD_100057a7_caseD_1;
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
              goto switchD_100057a7_caseD_2;
            case 3:
              goto switchD_100057a7_caseD_3;
            }
            goto switchD_100057a7_caseD_1;
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
switchD_100057a7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100057a7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100057a7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100057a7_caseD_0:
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
        goto switchD_10005625_caseD_2;
      case 3:
        goto switchD_10005625_caseD_3;
      }
      goto switchD_10005625_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005625_caseD_0;
    case 1:
      goto switchD_10005625_caseD_1;
    case 2:
      goto switchD_10005625_caseD_2;
    case 3:
      goto switchD_10005625_caseD_3;
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
            goto switchD_10005625_caseD_2;
          case 3:
            goto switchD_10005625_caseD_3;
          }
          goto switchD_10005625_caseD_1;
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
            goto switchD_10005625_caseD_2;
          case 3:
            goto switchD_10005625_caseD_3;
          }
          goto switchD_10005625_caseD_1;
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
            goto switchD_10005625_caseD_2;
          case 3:
            goto switchD_10005625_caseD_3;
          }
          goto switchD_10005625_caseD_1;
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
switchD_10005625_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005625_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005625_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005625_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x10005928

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10005940,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000596a

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
  puStack_18 = &LAB_10005948;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100059fe();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_100059fe @ 0x100059fe

void FUN_100059fe(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100079f8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100079f4 = in_EAX;
  DAT_100079fc = unaff_EBP;
  return;
}



// Function: FUN_10005add @ 0x10005add

void FUN_10005add(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10005b00 @ 0x10005b00

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10005b00(void)

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




// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

undefined4 FUN_10001000(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: OnInit @ 0x10001012

void OnInit(void)

{
                    /* 0x1012  1  OnInit */
  RegisterUnits(&DAT_10008a68,&DAT_10008448);
  RegisterUnits(&DAT_10008b70,&DAT_10008444);
  RegisterUnits(&DAT_10008b78,&DAT_10008440);
  RegisterUnits(&DAT_10008b80,&DAT_1000843c);
  RegisterUnits(&DAT_10008b88,&DAT_10008438);
  RegisterUnits(&DAT_10008b98,&DAT_10008434);
  RegisterUnits(&DAT_10008a70,&DAT_10008430);
  RegisterUnits(&DAT_10008a78,&DAT_1000842c);
  RegisterUnits(&DAT_10008a80,&DAT_10008428);
  RegisterUnits(&DAT_10008a88,&DAT_10008424);
  RegisterUnits(&DAT_10008be0,&DAT_10008420);
  RegisterUnits(&DAT_10008a90,&DAT_1000841c);
  RegisterUnits(&DAT_10008a98,&DAT_10008418);
  RegisterUnits(&DAT_10008be8,&DAT_10008414);
  RegisterUnits(&DAT_10008aa0,&DAT_10008410);
  RegisterUnits(&DAT_10008bf0,&DAT_1000840c);
  RegisterUnits(&DAT_10008aa8,&DAT_10008408);
  RegisterUnits(&DAT_10008bf8,&DAT_10008404);
  RegisterUnits(&DAT_10008ad0,&DAT_10008400);
  RegisterUnits(&DAT_10008ad8,&DAT_100083fc);
  RegisterUnits(&DAT_10008ae8,&DAT_100083f8);
  RegisterUnits(&DAT_10008c88,&DAT_100083f0);
  RegisterUnits(&DAT_10008ca0,&DAT_100083e8);
  RegisterUnits(&DAT_10008cb8,&DAT_100083e0);
  RegisterUnits(&DAT_10008cd0,&DAT_100083d8);
  RegisterUnits(&DAT_10008af0,&DAT_100083d4);
  RegisterUnits(&DAT_10008b00,&DAT_100083d0);
  RegisterUnits(&DAT_10008b10,&DAT_100083cc);
  RegisterUnits(&DAT_10008d28,&DAT_100083c4);
  RegisterUnits(&DAT_10008b20,&DAT_100083c0);
  RegisterUnits(&DAT_10008b30,&DAT_100083bc);
  RegisterUnits(&DAT_10008b40,&DAT_100083b8);
  RegisterUnits(&DAT_10008b50,&DAT_100083b4);
  RegisterUnits(&DAT_10008af8,&DAT_100083b0);
  RegisterUnits(&DAT_10008b08,&DAT_100083ac);
  RegisterUnits(&DAT_10008b08,&DAT_100083ac);
  RegisterUnits(&DAT_10008b18,&DAT_100083a8);
  RegisterUnits(&DAT_10008b28,&DAT_100083a4);
  RegisterUnits(&DAT_10008b38,&DAT_100083a0);
  RegisterUnits(&DAT_10008b48,&DAT_1000839c);
  RegisterUnits(&DAT_10008b58,&DAT_10008398);
  RegisterUnits(&DAT_10008b60,&DAT_10008394);
  RegisterUnits(&DAT_10008b68,&DAT_10008390);
  RegisterZone(&DAT_10008b90,&DAT_1000838c);
  RegisterZone(&DAT_10008ba0,&DAT_10008388);
  RegisterZone(&DAT_10008ba8,&DAT_10008384);
  RegisterZone(&DAT_10008bb0,&DAT_10008380);
  RegisterZone(&DAT_10008bb8,&DAT_1000837c);
  RegisterZone(&DAT_10008bc0,&DAT_10008378);
  RegisterZone(&DAT_10008bc8,&DAT_10008374);
  RegisterZone(&DAT_10008d40,&DAT_10008370);
  RegisterZone(&DAT_10008bd0,&DAT_1000836c);
  RegisterZone(&DAT_10008d48,&DAT_10008368);
  RegisterZone(&DAT_10008bd8,&DAT_10008364);
  RegisterZone(&DAT_10008c58,&DAT_10008360);
  RegisterZone(&DAT_10008c60,&DAT_1000835c);
  RegisterZone(&DAT_10008c68,&DAT_10008358);
  RegisterZone(&DAT_10008c70,&DAT_10008354);
  RegisterZone(&DAT_10008d78,&DAT_1000834c);
  RegisterZone(&DAT_10008c80,&DAT_10008348);
  RegisterZone(&DAT_10008c98,&DAT_10008344);
  RegisterZone(&DAT_10008d90,&DAT_1000833c);
  RegisterZone(&DAT_10008cb0,&DAT_10008338);
  RegisterZone(&DAT_10008cc8,&DAT_10008334);
  RegisterZone(&DAT_10008da8,&DAT_1000832c);
  RegisterZone(&DAT_10008ce0,&DAT_10008328);
  RegisterZone(&DAT_10008db0,&DAT_10008320);
  RegisterZone(&DAT_10008db8,&DAT_10008318);
  RegisterZone(&DAT_10008cf8,&DAT_10008314);
  RegisterZone(&DAT_10008dc0,&DAT_1000830c);
  RegisterZone(&DAT_10008dc8,&DAT_10008304);
  RegisterZone(&DAT_10008dd0,&DAT_100082fc);
  RegisterZone(&DAT_10008dd8,&DAT_100082f4);
  RegisterZone(&DAT_10008de0,&DAT_100082ec);
  RegisterZone(&DAT_10008df0,&DAT_100082e4);
  RegisterZone(&DAT_10008c78,&DAT_100082e0);
  RegisterZone(&DAT_10008d80,&DAT_100082d8);
  RegisterZone(&DAT_10008c90,&DAT_100082d4);
  RegisterZone(&DAT_10008d88,&DAT_100082cc);
  RegisterZone(&DAT_10008ca8,&DAT_100082c8);
  RegisterZone(&DAT_10008d98,&DAT_100082c0);
  RegisterZone(&DAT_10008cc0,&DAT_100082bc);
  RegisterZone(&DAT_10008da0,&DAT_100082b4);
  RegisterZone(&DAT_10008cd8,&DAT_100082b0);
  RegisterZone(&DAT_10008cf0,&DAT_100082ac);
  RegisterZone(&DAT_10008d08,&DAT_100082a8);
  RegisterZone(&DAT_10008d10,&DAT_100082a4);
  RegisterZone(&DAT_10008d18,&DAT_100082a0);
  RegisterZone(&DAT_10008d20,&DAT_1000829c);
  RegisterZone(&DAT_10008df8,&DAT_10008294);
  RegisterZone(&DAT_10008e00,&DAT_1000828c);
  RegisterZone(&DAT_10008ce8,&DAT_10008288);
  RegisterZone(&DAT_10008d00,&DAT_10008284);
  RegisterDynGroup(&DAT_10008ac0);
  RegisterDynGroup(&DAT_10008a28);
  RegisterDynGroup(&DAT_10008a38);
  RegisterDynGroup(&DAT_10008a40);
  RegisterDynGroup(&DAT_10008a48);
  RegisterDynGroup(&DAT_10008a50);
  RegisterDynGroup(&DAT_10008a58);
  RegisterDynGroup(&DAT_10008a60);
  RegisterVar(&DAT_10008d38,8);
  RegisterVar(&DAT_10008d50,8);
  RegisterVar(&DAT_10008d58,8);
  RegisterVar(&DAT_10008ab0,8);
  RegisterVar(&DAT_10008ac8,8);
  RegisterVar(&DAT_10008ab8,8);
  RegisterVar(&DAT_10008ae0,8);
  RegisterVar(&DAT_10008c10,4);
  RegisterUnitType(&DAT_10008990,s_PERES_KOR_sp__10008274);
  RegisterUnitType(&DAT_10008c18,s_Fregat_sp__10008268);
  RegisterUnitType(&DAT_100089e8,s_Center_Algir_AL__10008254);
  RegisterUnitType(&DAT_100089f0,s_Dom_Algir_AL__10008244);
  RegisterUnitType(&DAT_100089f8,s_Rinok_Turki_AL__10008234);
  RegisterUnitType(&DAT_10008a00,s_Kuznia_Turki_AL__10008220);
  RegisterUnitType(&DAT_10008a08,s_Mechet_Turki_AL__1000820c);
  RegisterUnitType(&DAT_10008a10,s_Minaret_AL__10008200);
  RegisterUnitType(&DAT_10008a18,s_Diplomatic_Turki_AL__100081e8);
  RegisterUnitType(&DAT_10008a20,s_Barack_Turki_AL__100081d4);
  RegisterUnitType(&DAT_10008a30,s_Konushnia_Turki_AL__100081c0);
  RegisterUnitType(&DAT_100089b0,s_Art_Depo_Turki_AL__100081ac);
  RegisterUnitType(&DAT_100089b8,s_Bashnia_3_AL__1000819c);
  RegisterUnitType(&DAT_100089c0,s_WALL_TU_AL__10008190);
  RegisterUnitType(&DAT_100089d0,s_WALL_UKR_AL__10008180);
  RegisterUnitType(&DAT_100089d8,s_Port_AL__10008174);
  RegisterUnitType(&DAT_100089e0,s_Melnica_tu_AL__10008164);
  RegisterUnitType(&DAT_100089a8,s_GRUZ_Z_UN__10008158);
  RegisterUnitType(&DAT_10008c08,s_TUrkey_pikiner_TU__10008144);
  RegisterUnitType(&DAT_10008998,s_Strelec_Algir_AL__10008130);
  RegisterUnitType(&DAT_10008de8,s_Pehota_turki_AL__1000811c);
  RegisterUnitType(&DAT_10008d60,s_Mameluk_AL__10008110);
  RegisterUnitType(&DAT_100089c8,s_Mortira_b_AL__10008100);
  RegisterUnitType(&DAT_10008d30,s_GALERA_AL__100080f4);
  RegisterUnitType(&DAT_10008980,s_PERES_KOR_AL__100080e4);
  RegisterUnitType(&DAT_10008c20,s_SUNDUK1Z_UN__100080d4);
  RegisterUnitType(&DAT_10008c50,s_SUNDUK1O_UN__100080c4);
  RegisterUnitType(&DAT_10008c40,s_SUNDUK2Z_UN__100080b4);
  RegisterUnitType(&DAT_10008c48,s_SUNDUK2O_UN__100080a4);
  RegisterFormation(&DAT_10008c38,s__ALONE_1000809c);
  RegisterFormation(&DAT_10008c30,s__PACK20_10008094);
  RegisterFormation(&DAT_10008c28,s__LINEMORB11_10008088);
  RegisterFormation(&DAT_10008978,s__SQUARE36_1000807c);
  RegisterFormation(&DAT_10008970,s__SHIPS12_10008070);
  RegisterFormation(&DAT_10008e08,s__SHIPSN5_10008064);
  RegisterUpgrade(&DAT_100089a0,s_AKA06AL_1000805c);
  RegisterUpgrade(&DAT_10008d68,s_AKA29AL_10008054);
  ChangeFriends(0,1);
  ChangeFriends(1,2);
  ChangeFriends(3,9);
  ChangeFriends(4,0x19);
  ChangeFriends(5,0x28);
  DAT_10008d70 = 0;
  SetPlayerName(1,s_SPAIN_1000804c);
  SetPlayerName(3,s_NEIRBORG_10008040);
  SetPlayerName(4,s_ALLIES_10008038);
  SetPlayerName(5,s_NOMADS_10008030);
  EnableUnit(0,&DAT_100089e8,0);
  EnableUnit(0,&DAT_100089f0,0);
  EnableUnit(0,&DAT_100089f8,0);
  EnableUnit(0,&DAT_10008a00,0);
  EnableUnit(0,&DAT_10008a08,0);
  EnableUnit(0,&DAT_10008a10,0);
  EnableUnit(0,&DAT_10008a18,0);
  EnableUnit(0,&DAT_10008a20,0);
  EnableUnit(0,&DAT_10008a30,0);
  EnableUnit(0,&DAT_100089b0,0);
  EnableUnit(0,&DAT_100089b8,0);
  EnableUnit(0,&DAT_100089c0,0);
  EnableUnit(0,&DAT_100089d0,0);
  EnableUnit(0,&DAT_100089d8,0);
  EnableUnit(0,&DAT_100089e0,0);
  EnableUnit(0,&DAT_100089c8,0);
  EnableUnit(0,&DAT_10008980,0);
  return;
}



// Function: ProcessScenary @ 0x10001805

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
                    /* 0x1805  2  ProcessScenary */
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    InitialUpgrade(&DAT_100083b4,s_AKA06SP_10008634);
    InitialUpgrade(&DAT_100083b4,s_AKA30SP_1000862c);
    InitialUpgrade(&DAT_100083b0,s_AKA04SP_10008624);
    InitialUpgrade(&DAT_100083b0,s_KUZ01SP_1000861c);
    iVar2 = GetDiff(0);
    if (1 < iVar2) {
      InitialUpgrade(&DAT_100083cc,s_AKA30AL_10008614);
    }
    _DAT_10008988 = 1;
    DisableUpgrade(0,&DAT_100089a0);
    DisableUpgrade(0,&DAT_10008d68);
    SetTrigg(99,0);
    CreateObject0(&DAT_10008ab0,&DAT_10008c38,&DAT_10008c20,4,&DAT_10008bc8,0);
    CreateObject0(&DAT_10008ab8,&DAT_10008c38,&DAT_10008c40,4,&DAT_10008bd0,0);
    iVar2 = GetDiff(0);
    SetResource(0,3,(7 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,1,(6 - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,0,iVar2 * -0x96 + 1000);
    SetResource(0,2,0);
    iVar2 = GetDiff(0);
    SetResource(0,5,(4 - iVar2) * 500);
    iVar2 = GetDiff(0);
    SetResource(0,4,(6 - iVar2) * 500);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,500000);
      SetResource(0,5,50000);
      SetResource(0,4,50000);
      SetResource(0,1,10000);
      SetLightSpot(&DAT_10008bd8,3,2);
      InitialUpgrade(&DAT_1000843c,s_AKA30AL_10008614);
      SelectUnits(&DAT_10008be8,0);
      SelDie(5);
    }
    ShowPage(s__PAGE0_1000860c);
    TakeFood(&DAT_10008aa0);
    TakeWood(&DAT_10008bf0);
    TakeFood(&DAT_10008af8);
    SelectUnits(&DAT_10008a78,0);
    SelOpenGates(3);
    ProduceUnit(&DAT_10008b40,&DAT_10008990,&DAT_10008a28);
    ProduceUnit(&DAT_10008b50,&DAT_10008c18,&DAT_10008a38);
    CreateObject0(&DAT_10008d38,&DAT_10008c30,&DAT_100089a8,1,&DAT_10008db0,0x80);
    RunTimer(3,2000);
    RunTimer(6,500);
    iVar2 = GetDiff(0);
    RunTimer(7,(8 - iVar2) * 1000);
    SetTrigg(0xb,0);
    SetTrigg(0xf,0);
    SetTrigg(0x10,0);
    SetTrigg(0x4a,0);
    SelectUnits(&DAT_10008b78,0);
    SelChangeNation(0,4);
    SelectUnits(&DAT_10008be0,0);
    SelChangeNation(3,4);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x47);
    DisableMission(0x48);
    DisableMission(0x4a);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x4d);
  }
  cVar1 = Trigg(9);
  if ((cVar1 == '\0') && (DAT_10008d70 == 0)) {
    DAT_10008d70 = 1;
    ChangeFriends(3,8);
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0(&DAT_10008a70);
    iVar3 = GetResource(0,0);
    if ((((iVar2 * 1000 <= iVar3) && (iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2)) &&
        (cVar1 = Trigg(9), cVar1 != '\0')) && (iVar2 = GetTotalAmount0(&DAT_10008b78), 0 < iVar2)) {
      SetTrigg(1,0);
      ShowPage(s__PAGE1_10008604);
    }
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (cVar1 = Trigg(1), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_10008a70);
    iVar3 = GetResource(0,0);
    if ((iVar2 * 1000 <= iVar3) && (iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2)) {
      iVar2 = GetTotalAmount0(&DAT_10008a70);
      iVar3 = GetUnitsAmount1(&DAT_10008ba0,&DAT_10008a70);
      if (((iVar3 == iVar2) && (cVar1 = Trigg(9), cVar1 != '\0')) &&
         (iVar2 = GetTotalAmount0(&DAT_10008b78), 0 < iVar2)) {
        SetTrigg(2,0);
        ShowPage(s__PAGE2_100085fc);
        iVar2 = GetTotalAmount0(&DAT_10008a70);
        AddResource(0,0,iVar2 * -1000);
        SetLightSpot(&DAT_10008ba8,1,1);
      }
    }
  }
  cVar1 = Trigg(3);
  if (((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 == '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10008a70);
    iVar3 = GetUnitsAmount1(&DAT_10008ba8,&DAT_10008a70);
    if ((iVar3 == iVar2) && (cVar1 = Trigg(9), cVar1 != '\0')) {
      SetTrigg(1,1);
      SetTrigg(2,1);
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a70);
      ShowPageParam(s__PAGE3_100085f4,(10 - iVar2) * iVar3 * 0x32);
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a70);
      AddResource(0,1,(10 - iVar2) * iVar3 * 0x32);
      ClearLightSpot(1);
    }
  }
  iVar2 = GetUnitsAmount1(&DAT_10008bb0,&DAT_10008a70);
  if ((iVar2 < 1) || (iVar2 = GetTotalAmount0(&DAT_10008a90), iVar2 < 1)) {
    iVar2 = GetUnitsAmount0(&DAT_10008bb8,0);
    if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008a90), 0 < iVar2)) {
      AttackEnemyInZone(&DAT_10008a90,&DAT_10008bb8,0);
    }
  }
  else {
    SelectUnits(&DAT_10008a90,0);
    SelAttackGroup(5,&DAT_10008a70);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a90), iVar2 == 0)) {
    SetTrigg(4,0);
    ShowPage(s__PAGE4_100085ec);
    AddResource(0,1,0x17);
    SelectUnits(&DAT_10008a98,0);
    SelSendAndKill(5,&DAT_10008bc0,0x80,0);
    SelSendAndKill(5,&DAT_10008b90,0x80,2);
  }
  iVar2 = GetUnitsAmount0(&DAT_10008bd8,0);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008aa8), 0 < iVar2)) {
    SetTrigg(0x32,0);
    cVar1 = Trigg(5);
    if (cVar1 != '\0') {
      SetTrigg(5,0);
      ShowPage(s__PAGE5_100085e4);
    }
    AttackEnemyInZone(&DAT_10008aa8,&DAT_10008bd8,0);
  }
  cVar1 = Trigg(0x32);
  if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008bd8,0), iVar2 == 0)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008aa8), 0 < iVar2)) {
    SetTrigg(0x32,1);
    RunTimer(1,200);
  }
  cVar1 = Trigg(0x32);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008aa8), 0 < iVar2)) {
    FreeTimer(1);
    SelectUnits(&DAT_10008aa8,0);
    SelSendAndKill(5,&DAT_10008bd8,0x96,0);
  }
  iVar2 = GetUnitsAmount0(&DAT_10008c58,0);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008ad0), 0 < iVar2)) {
    SetTrigg(0x33,0);
    AttackEnemyInZone(&DAT_10008ad0,&DAT_10008c58,0);
  }
  cVar1 = Trigg(0x33);
  if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008c58,0), iVar2 == 0)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008ad0), 0 < iVar2)) {
    SetTrigg(0x33,1);
    RunTimer(2,200);
  }
  cVar1 = Trigg(0x33);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(2), cVar1 != '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008ad0), 0 < iVar2)) {
    FreeTimer(2);
    SelectUnits(&DAT_10008ad0,0);
    SelSendAndKill(5,&DAT_10008c58,0x50,0);
  }
  cVar1 = Trigg(6);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x34), cVar1 != '\0')) &&
     ((iVar2 = GetUnitsAmount0(&DAT_10008c60,0), 0 < iVar2 &&
      (iVar2 = GetTotalAmount0(&DAT_10008ad8), 0 < iVar2)))) {
    SetTrigg(6,0);
    SetTrigg(0x34,0);
    cVar1 = AskQuestion(s__PAGE6_100085dc);
    if (cVar1 == '\0') {
      ShowPage(s__PAGE6B_100085c4);
    }
    else {
      SetTrigg(0x35,0);
      iVar2 = GetResource(0,1);
      if (iVar2 < 2000) {
        ShowPage(s__PAGE6D_100085cc);
        SelectUnits(&DAT_10008ad8,0);
        SelChangeNation(4,5);
      }
      else {
        ShowPage(s__PAGE6A_100085d4);
        AddResource(0,1,0xfffff830);
        SelectUnits(&DAT_10008ad8,0);
        SelChangeNation(4,0);
      }
    }
  }
  cVar1 = Trigg(0x34);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008c60,0), iVar2 == 0)) {
    SetTrigg(0x34,1);
  }
  cVar1 = Trigg(0x34);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0x35), cVar1 != '\0')) &&
      (cVar1 = Trigg(6), cVar1 == '\0')) && (iVar2 = GetUnitsAmount0(&DAT_10008c60,0), 0 < iVar2)) {
    SetTrigg(0x34,0);
    cVar1 = AskQuestion(s__PAGE6C_100085bc);
    if (cVar1 == '\0') {
      ShowPage(s__PAGE6B_100085c4);
    }
    else {
      SetTrigg(0x35,0);
      iVar2 = GetResource(0,1);
      if (iVar2 < 2000) {
        ShowPage(s__PAGE6D_100085cc);
        SelectUnits(&DAT_10008ad8,0);
        SelChangeNation(4,5);
      }
      else {
        ShowPage(s__PAGE6A_100085d4);
        AddResource(0,1,0xfffff830);
        SelectUnits(&DAT_10008ad8,0);
        SelChangeNation(4,0);
      }
    }
  }
  cVar1 = Trigg(7);
  pcVar4 = GetDiff_exref;
  if (((cVar1 != '\0') &&
      (iVar2 = GetUnitsAmount0(&DAT_10008bc8,0), pcVar4 = GetDiff_exref, 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008d40,5), pcVar4 = GetDiff_exref, iVar2 == 0)) {
    SetTrigg(7,0);
    pcVar4 = GetDiff_exref;
    iVar2 = GetDiff(0);
    ShowPageParam(s__PAGE8_100085b4,(6 - iVar2) * 500);
    iVar2 = GetDiff(0);
    AddResource(0,1,(6 - iVar2) * 500);
    ClearSelection(4);
    SelectUnits(&DAT_10008ab0,0);
    SelErase(4);
    CreateObject0(&DAT_10008ac8,&DAT_10008c38,&DAT_10008c50,4,&DAT_10008bc8,0);
  }
  cVar1 = Trigg(8);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008bd0,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008d48,5), iVar2 == 0)) {
    SetTrigg(8,0);
    iVar2 = (*pcVar4)(0);
    ShowPageParam(s__PAGE8_100085b4,(9 - iVar2) * 500);
    iVar2 = (*pcVar4)(0);
    AddResource(0,1,(9 - iVar2) * 500);
    ClearSelection(4);
    SelectUnits(&DAT_10008ab8,0);
    SelErase(4);
    CreateObject0(&DAT_10008ae0,&DAT_10008c38,&DAT_10008c48,4,&DAT_10008bd0,0);
  }
  cVar1 = Trigg(9);
  if (cVar1 != '\0') {
    iVar2 = (*pcVar4)(0);
    iVar3 = GetGlobalTime();
    if ((7 - iVar2) * 5000 < iVar3) {
      SetTrigg(9,0);
      cVar1 = Trigg(2);
      if (cVar1 == '\0') {
        ClearLightSpot(1);
      }
      ShowPage(s__PAGE9_100085ac);
      ChangeFriends(3,8);
      DisableMission(0x4e);
      EnableMission(0x44);
      iVar2 = GetDiff(0);
      if (iVar2 == 0) {
        ShowPage(s__OTST3_100085a4);
        SetLightSpot(&DAT_10008d20,1,7);
      }
    }
  }
  cVar1 = Trigg(0x15);
  if (cVar1 != '\0') {
    cVar1 = Trigg(9);
    if (((cVar1 == '\0') && (cVar1 = CheckProduction(&DAT_10008b38), cVar1 != '\0')) &&
       (iVar2 = GetTotalAmount0(&DAT_10008b38), 0 < iVar2)) {
      cVar1 = Trigg(0x37);
      if (cVar1 == '\0') {
        puVar6 = &DAT_10008a48;
      }
      else {
        puVar6 = &DAT_10008a40;
      }
      ProduceUnit(&DAT_10008b38,&DAT_10008998,puVar6);
    }
    cVar1 = Trigg(9);
    if (((cVar1 == '\0') && (cVar1 = CheckProduction(&DAT_10008b48), cVar1 != '\0')) &&
       (iVar2 = GetTotalAmount0(&DAT_10008b48), 0 < iVar2)) {
      cVar1 = Trigg(0x37);
      if (cVar1 == '\0') {
        puVar6 = &DAT_10008a48;
      }
      else {
        puVar6 = &DAT_10008a40;
      }
      ProduceUnit(&DAT_10008b48,&DAT_10008de8,puVar6);
    }
    cVar1 = Trigg(0x37);
    if (cVar1 != '\0') {
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a40);
      if ((iVar2 + 2) * 0x32 < iVar3) {
        SetTrigg(0x37,0);
        SetTrigg(0x38,0);
        RunTimer(8,200);
      }
    }
    cVar1 = Trigg(0x37);
    if (cVar1 == '\0') {
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a48);
      if ((iVar2 + 2) * 0x32 < iVar3) {
        SetTrigg(0x37,1);
        SetTrigg(0x38,0);
        RunTimer(8,200);
      }
    }
    cVar1 = TimerDoneFirst(8);
    if (cVar1 != '\0') {
      cVar1 = Trigg(0x37);
      if (cVar1 == '\0') {
        puVar6 = &DAT_10008a40;
      }
      else {
        puVar6 = &DAT_10008a48;
      }
      SelectUnits(puVar6,0);
      SelSendAndKill(3,&DAT_10008c70,0,0);
      SelSendAndKill(3,&DAT_10008bb0,0,2);
    }
    cVar1 = Trigg(0x38);
    if (((cVar1 == '\0') && (cVar1 = Trigg(0x37), cVar1 != '\0')) &&
       (iVar2 = GetUnitsAmount1(&DAT_10008cf0,&DAT_10008a48), iVar2 < 3)) {
      SetTrigg(0x38,1);
    }
    cVar1 = Trigg(0x38);
    if (((cVar1 == '\0') && (cVar1 = Trigg(0x37), cVar1 == '\0')) &&
       (iVar2 = GetUnitsAmount1(&DAT_10008cf0,&DAT_10008a40), iVar2 < 3)) {
      SetTrigg(0x38,1);
    }
    cVar1 = Trigg(0x39);
    if (((cVar1 != '\0') && (cVar1 = Trigg(0x37), cVar1 != '\0')) &&
       (iVar2 = GetTotalAmount0(&DAT_10008a48), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_10008bb0,&DAT_10008a48);
      iVar3 = GetTotalAmount0(&DAT_10008a48);
      if (iVar3 + -5 <= iVar2) {
        SetTrigg(0x39,0);
        SelectUnits(&DAT_10008a48,0);
        SelSendAndKill(3,&DAT_10008b90,0,0);
      }
    }
    cVar1 = Trigg(0x37);
    if (((cVar1 != '\0') && (cVar1 = Trigg(0x39), cVar1 == '\0')) &&
       (iVar2 = GetUnitsAmount1(&DAT_10008b90,&DAT_10008a48), 0 < iVar2)) {
      AttackEnemyInZone(&DAT_10008a48,&DAT_10008b90,0);
    }
    cVar1 = Trigg(0x39);
    if ((cVar1 == '\0') &&
       ((iVar2 = GetTotalAmount0(&DAT_10008a48), iVar2 == 0 || (cVar1 = Trigg(0x37), cVar1 == '\0'))
       )) {
      SetTrigg(0x39,1);
    }
    cVar1 = Trigg(0x3a);
    if (((cVar1 != '\0') && (cVar1 = Trigg(0x37), cVar1 == '\0')) &&
       (iVar2 = GetTotalAmount0(&DAT_10008a40), 0 < iVar2)) {
      iVar2 = GetUnitsAmount1(&DAT_10008bb0,&DAT_10008a40);
      iVar3 = GetTotalAmount0(&DAT_10008a40);
      if (iVar3 + -5 <= iVar2) {
        SetTrigg(0x3a,0);
        SelectUnits(&DAT_10008a40,0);
        SelSendAndKill(3,&DAT_10008b90,0,0);
      }
    }
    cVar1 = Trigg(0x37);
    if (((cVar1 == '\0') && (cVar1 = Trigg(0x3a), cVar1 == '\0')) &&
       (iVar2 = GetUnitsAmount1(&DAT_10008b90,&DAT_10008a40), 0 < iVar2)) {
      AttackEnemyInZone(&DAT_10008a40,&DAT_10008b90,0);
    }
    cVar1 = Trigg(0x3a);
    if ((cVar1 == '\0') &&
       ((iVar2 = GetTotalAmount0(&DAT_10008a40), iVar2 == 0 || (cVar1 = Trigg(0x37), cVar1 != '\0'))
       )) {
      SetTrigg(0x3a,1);
    }
    cVar1 = Trigg(9);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0x3b);
      if (cVar1 != '\0') {
        iVar2 = GetDiff(0);
        iVar3 = GetTotalAmount0(&DAT_10008a50);
        if (((iVar3 < (iVar2 + 2) * 5) && (iVar2 = GetTotalAmount0(&DAT_10008b58), 0 < iVar2)) &&
           (cVar1 = CheckProduction(&DAT_10008b58), cVar1 != '\0')) {
          ProduceUnit(&DAT_10008b58,&DAT_10008d60,&DAT_10008a50);
        }
      }
      cVar1 = Trigg(0x3b);
      if (cVar1 != '\0') {
        iVar2 = GetDiff(0);
        iVar3 = GetTotalAmount0(&DAT_10008a50);
        if ((iVar2 + 2) * 5 <= iVar3) {
          SetTrigg(0x3b,0);
          RunTimer(9,200);
        }
      }
      cVar1 = TimerDoneFirst(9);
      if (cVar1 != '\0') {
        SetTrigg(0x45,0);
        SelectUnits(&DAT_10008a50,0);
        SelSendAndKill(3,&DAT_10008c70,0,0);
        SelSendAndKill(3,&DAT_10008bb8,0xf0,2);
      }
      cVar1 = Trigg(0x45);
      if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008cf0,&DAT_10008a50), iVar2 < 3)) {
        SetTrigg(0x45,1);
      }
      cVar1 = Trigg(0x3b);
      if (((cVar1 == '\0') && (cVar1 = Trigg(0x4e), cVar1 != '\0')) &&
         (iVar2 = GetTotalAmount0(&DAT_10008a50), 0 < iVar2)) {
        iVar2 = GetUnitsAmount1(&DAT_10008bb8,&DAT_10008a50);
        iVar3 = GetTotalAmount0(&DAT_10008a50);
        if (iVar3 + -3 <= iVar2) {
          SetTrigg(0x4e,0);
          SelectUnits(&DAT_10008a50,0);
          SelSendAndKill(3,&DAT_10008cd8,0,0);
        }
      }
      cVar1 = Trigg(0x3b);
      if (((cVar1 == '\0') && (cVar1 = Trigg(0x4e), cVar1 == '\0')) &&
         (iVar2 = GetUnitsAmount1(&DAT_10008cd8,&DAT_10008a50), 0 < iVar2)) {
        AttackEnemyInZone(&DAT_10008a50,&DAT_10008cd8,0);
      }
      cVar1 = Trigg(0x3b);
      if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a50), iVar2 == 0)) {
        SetTrigg(0x3b,1);
        SetTrigg(0x4e,1);
      }
    }
    cVar1 = Trigg(9);
    if (((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008c70,0), 0 < iVar2)) &&
       (iVar2 = GetTotalAmount0(&DAT_10008af0), 0 < iVar2)) {
      AttackEnemyInZone(&DAT_10008af0,&DAT_10008c70,0);
    }
    iVar2 = GetTotalAmount0(&DAT_10008af0);
    iVar3 = GetUnitsAmount1(&DAT_10008d78,&DAT_10008af0);
    if (iVar3 < iVar2) {
      SelectUnits1(3,&DAT_10008af0,0);
      SelSendTo(3,&DAT_10008d78,0,0);
    }
    cVar1 = Trigg(0x38);
    if ((((cVar1 != '\0') && (cVar1 = Trigg(0x45), cVar1 != '\0')) &&
        (cVar1 = Trigg(0x36), cVar1 != '\0')) && (iVar2 = GetTotalAmount0(&DAT_10008a78), 0 < iVar2)
       ) {
      iVar2 = GetUnitsAmount0(&DAT_10008c68,5);
      if ((iVar2 < 1) &&
         ((cVar1 = Trigg(9), cVar1 != '\0' || (iVar2 = GetUnitsAmount0(&DAT_10008c68,0), iVar2 < 1))
         )) {
        iVar2 = GetUnitsAmount1(&DAT_10008c68,&DAT_10008a70);
        iVar3 = GetUnitsAmount0(&DAT_10008c68,0);
        if (iVar3 <= iVar2) goto LAB_10002a70;
      }
      SetTrigg(0x36,0);
      SelectUnits(&DAT_10008a78,0);
      SelCloseGates(3);
    }
LAB_10002a70:
    cVar1 = Trigg(0x36);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0x38);
      if ((cVar1 == '\0') || (cVar1 = Trigg(0x45), cVar1 == '\0')) {
LAB_10002aff:
        SetTrigg(0x36,1);
        SelectUnits(&DAT_10008a78,0);
        SelOpenGates(3);
      }
      else {
        iVar2 = GetTotalAmount0(&DAT_10008a78);
        if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_10008c68,5), iVar2 == 0)) {
          cVar1 = Trigg(9);
          if (cVar1 != '\0') {
            iVar2 = GetUnitsAmount1(&DAT_10008c68,&DAT_10008a70);
            iVar3 = GetUnitsAmount0(&DAT_10008c68,0);
            if (iVar3 == iVar2) goto LAB_10002aff;
          }
          iVar2 = GetUnitsAmount0(&DAT_10008c68,0);
          if (iVar2 == 0) goto LAB_10002aff;
        }
      }
    }
  }
  cVar1 = Trigg(9);
  if (((cVar1 != '\0') && (cVar1 = Trigg(10), cVar1 != '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008c70,0), 0 < iVar2)) {
    SetTrigg(10,0);
    ShowPage(s__PAGE10_1000859c);
  }
  iVar2 = GetTotalAmount0(&DAT_10008b40);
  if (((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008b50), 0 < iVar2)) &&
     (cVar1 = Trigg(0x12), cVar1 != '\0')) {
    cVar1 = Trigg(0x44);
    if ((cVar1 != '\0') && (cVar1 = CheckProduction(&DAT_10008b40), cVar1 != '\0')) {
      SetTrigg(0x44,0);
      RunTimer(5,1000);
    }
    cVar1 = CheckProduction(&DAT_10008b40);
    if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a28), iVar2 == 0)) &&
       (cVar1 = TimerDone(5), cVar1 != '\0')) {
      ProduceUnit(&DAT_10008b40,&DAT_10008990,&DAT_10008a28);
      SetTrigg(0x44,1);
    }
    cVar1 = CheckProduction(&DAT_10008b50);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a38), iVar2 < 4)) {
      ProduceUnit(&DAT_10008b50,&DAT_10008c18,&DAT_10008a38);
    }
    cVar1 = TimerDone(3);
    if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a28), 0 < iVar2)) {
      cVar1 = Trigg(0x3c);
      if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c78,&DAT_10008a28), iVar2 == 0)) {
        SetTrigg(0x3c,0);
        SelectUnits(&DAT_10008a28,0);
        SelSendTo(1,&DAT_10008c78,0,0);
      }
      cVar1 = Trigg(0x3d);
      if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c78,&DAT_10008a28), 0 < iVar2)) {
        SetTrigg(0x3d,0);
        SelectUnits(&DAT_10008a28,0);
        SelSendTo(1,&DAT_10008ce0,0,0);
        iVar2 = GetTotalAmount0(&DAT_10008d38);
        if (iVar2 == 0) {
          CreateObject0(&DAT_10008d38,&DAT_10008c30,&DAT_100089a8,1,&DAT_10008db0,0x80);
        }
        SelectUnits(&DAT_10008d38,0);
        SelSendTo(1,&DAT_10008db8,0x80,0);
      }
      cVar1 = Trigg(0x3e);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a28), 0 < iVar2)) {
        SelectUnits(&DAT_10008a28,0);
        cVar1 = CheckLeaveAbility(1);
        if (cVar1 != '\0') {
          SetTrigg(0x3e,0);
          SelectUnits(&DAT_10008a28,0);
          SelectUnits(&DAT_10008d38,1);
          SendUnitsToTransport(1);
        }
      }
      cVar1 = Trigg(0x3f);
      if (((cVar1 != '\0') && (cVar1 = Trigg(0x3e), cVar1 == '\0')) &&
         (iVar2 = GetTotalAmount0(&DAT_10008a28), 0 < iVar2)) {
        SelectUnits(&DAT_10008a28,0);
        iVar2 = GetTotalAmount0(&DAT_10008d38);
        iVar3 = GetNInside(1);
        if (iVar3 == iVar2) {
          SetTrigg(0x3f,0);
          SelectUnits(&DAT_10008a28,0);
          SelSendTo(1,&DAT_10008c90,0x80,0);
        }
      }
      cVar1 = Trigg(0x40);
      if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008c90,&DAT_10008a28), 0 < iVar2)) {
        SetTrigg(0x40,0);
        SelectUnits(&DAT_10008a28,0);
        SelSendTo(1,&DAT_10008cf8,0x80,0);
      }
      cVar1 = Trigg(0x41);
      if (((cVar1 != '\0') && (cVar1 = Trigg(0x40), cVar1 == '\0')) &&
         (iVar2 = GetTotalAmount0(&DAT_10008a28), 0 < iVar2)) {
        SelectUnits(&DAT_10008a28,0);
        cVar1 = CheckLeaveAbility(1);
        if (cVar1 != '\0') {
          SetTrigg(0x41,0);
          SelectUnits(&DAT_10008a28,0);
          PushAllUnitsAway(1);
        }
      }
      cVar1 = Trigg(0x42);
      if (((cVar1 != '\0') && (cVar1 = Trigg(0x41), cVar1 == '\0')) &&
         (iVar2 = GetTotalAmount0(&DAT_10008a28), 0 < iVar2)) {
        SelectUnits(&DAT_10008a28,0);
        iVar2 = GetNInside(1);
        if (iVar2 == 0) {
          SetTrigg(0x42,0);
          RunTimer(4,100);
        }
      }
      cVar1 = TimerDoneFirst(4);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_10008a28,0);
        SelSendTo(1,&DAT_10008c78,0,0);
        iVar2 = GetTotalAmount0(&DAT_10008d38);
        if (0 < iVar2) {
          SelectUnits(&DAT_10008d38,0);
          SelSendTo(1,&DAT_10008dc0,0x80,0);
          SelSendTo(1,&DAT_10008dc8,0x80,2);
          SelSendTo(1,&DAT_10008dd0,0x80,2);
          SelSendTo(1,&DAT_10008dd8,0x80,2);
          SelSendTo(1,&DAT_10008de0,200,2);
          SelSendTo(1,&DAT_10008df0,200,2);
        }
      }
      cVar1 = Trigg(0x43);
      if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10008df0,&DAT_10008d38), 0 < iVar2)) {
        SetTrigg(0x43,0);
        ClearSelection(1);
        SelectUnits1(1,&DAT_10008d38,0);
        SelErase(1);
      }
      cVar1 = Trigg(0x42);
      if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10008d38), iVar2 == 0)) {
        RunTimer(3,5000);
        SetTrigg(0x3c,1);
        SetTrigg(0x3d,1);
        SetTrigg(0x3e,1);
        SetTrigg(0x3f,1);
        SetTrigg(0x40,1);
        SetTrigg(0x41,1);
        SetTrigg(0x42,1);
        SetTrigg(0x43,1);
      }
    }
    iVar2 = GetTotalAmount0(&DAT_10008a28);
    if (((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008a38), 0 < iVar2)) &&
       (cVar1 = TimerDone(6), cVar1 != '\0')) {
      iVar2 = GetUnitsAmount1(&DAT_10008d80,&DAT_10008a28);
      if (iVar2 < 1) {
        iVar2 = GetUnitsAmount1(&DAT_10008d88,&DAT_10008a28);
        if (0 < iVar2) {
          SelectUnits(&DAT_10008a38,0);
          puVar6 = &DAT_10008c90;
          goto LAB_10003068;
        }
        CreateZoneNearGroup(&DAT_10008c00,&DAT_10008c78,&DAT_10008a28,200);
        SelectUnits(&DAT_10008a38,0);
        cVar1 = Trigg(0x40);
        if ((cVar1 == '\0') || (cVar1 = Trigg(0x3f), cVar1 != '\0')) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0x80;
        }
        SelSendAndKill(1,&DAT_10008c00,uVar5,0);
      }
      else {
        SelectUnits(&DAT_10008a38,0);
        puVar6 = &DAT_10008c78;
LAB_10003068:
        SelSendAndKill(1,puVar6,0,0);
      }
      RunTimer(6,200);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10008a28);
  if (0 < iVar2) {
    cVar1 = Trigg(0xb);
    if (cVar1 == '\0') {
      SetTrigg(0xb,1);
    }
    SelectUnits(&DAT_10008a28,0);
    DAT_10008c10 = GetNInside(1);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a28), iVar2 == 0)) {
    SetTrigg(0xb,0);
    if (DAT_10008c10 < 1) {
      ShowPage(s__PAGE11A_10008588);
    }
    else {
      iVar2 = GetDiff(0);
      ShowPageParam(s__PAGE11_10008594,(5 - iVar2) * DAT_10008c10 * 0x32);
      iVar2 = GetDiff(0);
      AddResource(0,1,(5 - iVar2) * DAT_10008c10 * 0x32);
    }
    cVar1 = TimerDone(3);
    if (cVar1 != '\0') {
      RunTimer(3,10000);
      SetTrigg(0x3c,1);
      SetTrigg(0x3d,1);
      SetTrigg(0x3e,1);
      SetTrigg(0x3f,1);
      SetTrigg(0x40,1);
      SetTrigg(0x41,1);
      SetTrigg(0x42,1);
      SetTrigg(0x43,1);
    }
    DAT_10008c10 = 0;
  }
  iVar2 = GetUnitsByNation(&DAT_10008d38,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10008ac0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10008d38,0);
    SelDie(0);
    SelectUnits(&DAT_10008ac0,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10008b08,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10008ac0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10008b08,0);
    SelDie(0);
    SelectUnits(&DAT_10008ac0,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10008af0,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10008ac0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10008af0,0);
    SelDie(0);
    SelectUnits(&DAT_10008ac0,0);
  }
  iVar2 = GetUnitsByNation(&DAT_10008af8,0);
  if (0 < iVar2) {
    SaveSelectedUnits(0,&DAT_10008ac0,0);
    ClearSelection(0);
    SelectUnits1(0,&DAT_10008af8,0);
    SelDie(0);
    SelectUnits(&DAT_10008ac0,0);
  }
  iVar2 = GetDiff(0);
  pcVar4 = ClearSelection_exref;
  if ((0 < iVar2) &&
     (iVar2 = GetUnitsByNation(&DAT_10008b70,5), pcVar4 = ClearSelection_exref, 0 < iVar2)) {
    ClearSelection(5);
    SelectUnits1(5,&DAT_10008b70,0);
    SelDie(5);
  }
  iVar2 = GetDiff(0);
  if ((0 < iVar2) && (iVar2 = GetUnitsByNation(&DAT_10008b70,3), 0 < iVar2)) {
    (*pcVar4)(3);
    SelectUnits1(3,&DAT_10008b70,0);
    SelDie(3);
  }
  iVar2 = GetUnitsByNation(&DAT_10008a70,3);
  if (0 < iVar2) {
    (*pcVar4)(3);
    SelectUnits1(3,&DAT_10008a70,0);
    SelDie(3);
  }
  iVar2 = GetUnitsByNation(&DAT_10008a70,5);
  if (0 < iVar2) {
    (*pcVar4)(5);
    SelectUnits1(5,&DAT_10008a70,0);
    SelDie(5);
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008bd8,0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008bd8,5), iVar2 == 0)) {
    SetTrigg(0xc,0);
    ShowPage(s__PAGE12_10008580);
    (*pcVar4)(5);
    SelectUnits(&DAT_10008bf8,0);
    SelDie(5);
    DisableMission(0x42);
    EnableMission(0x43);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ClearLightSpot(2);
    }
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_10008bd8,0), iVar2 == 0)) {
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      puVar6 = &DAT_10008c28;
    }
    else {
      puVar6 = &DAT_10008978;
    }
    CreateObject0(&DAT_10008d50,puVar6,&DAT_10008c08,5,&DAT_10008cb0,0x80);
    SelectUnits(&DAT_10008d50,0);
    SelSendAndKill(5,&DAT_10008bc0,0x80,0);
    SelSendAndKill(5,&DAT_10008b90,0x80,2);
    iVar2 = GetDiff(0);
    RunTimer(7,(5 - iVar2) * 1000);
  }
  pcVar4 = GetTotalAmount0_exref;
  iVar2 = GetTotalAmount0(&DAT_10008b18);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_10008ca8,0), 0 < iVar2)) {
    AttackZoneByArtillery(&DAT_10008b18,&DAT_10008ca8,0);
  }
  iVar2 = GetTotalAmount0(&DAT_10008b18);
  iVar3 = GetUnitsAmount1(&DAT_10008d98,&DAT_10008b18);
  if (iVar3 < iVar2) {
    SelectUnits(&DAT_10008b18,0);
    SelSendTo(1,&DAT_10008d98,0x28,0);
  }
  iVar2 = GetTotalAmount0(&DAT_10008b28);
  if ((0 < iVar2) && (iVar2 = GetUnitsAmount0(&DAT_10008cc0,0), 0 < iVar2)) {
    AttackZoneByArtillery(&DAT_10008b28,&DAT_10008cc0,0);
  }
  iVar2 = GetTotalAmount0(&DAT_10008b28);
  iVar3 = GetUnitsAmount1(&DAT_10008da0,&DAT_10008b28);
  if (iVar3 < iVar2) {
    SelectUnits(&DAT_10008b28,0);
    SelSendTo(1,&DAT_10008da0,0x46,0);
  }
  cVar1 = Trigg(0xd);
  if ((((cVar1 == '\0') || (iVar2 = GetTotalAmount0(&DAT_10008b20), iVar2 < 1)) ||
      (iVar2 = GetUnitsAmount0(&DAT_10008cc8,0), iVar2 < 1)) ||
     (iVar2 = GetUnitsAmount0(&DAT_10008cc8,5), iVar2 != 0)) goto LAB_100036e8;
  SetTrigg(0xd,0);
  iVar2 = AskMultilineQuestion(9,s__PAGE13_10008564,0,s_Q12_1_Q12_2_Q12_3_1000856c);
  if (iVar2 == 0) {
LAB_100036dc:
    ShowPage(s__PAGE13A_10008528);
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_100036e8;
      iVar2 = AskMultilineQuestion(9,s__PAGE13B_10008540,0,s_Q12_4_Q12_5_Q12_6_Q12_7_1000854c);
      if (iVar2 == 0) {
        SetTrigg(0xe,0);
        ClearSelection(4);
        SelectUnits(&DAT_10008b20,0);
        SelDie(4);
        goto LAB_100036e8;
      }
      if (iVar2 == 1) goto LAB_100036dc;
      if (iVar2 != 2) {
        if (iVar2 == 3) {
          ShowPage(s__PAGE13C_10008534);
          SetTrigg(0xe,0);
          SetTrigg(0xf,1);
        }
        goto LAB_100036e8;
      }
    }
    SetTrigg(0xe,0);
  }
LAB_100036e8:
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008d08,0), 0 < iVar2)) {
    SetTrigg(0xf,0);
    iVar2 = GetDiff(0);
    ShowPageParam(s__PAGE15_10008520,(5 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    AddResource(0,1,(5 - iVar2) * 1000);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b60), 0 < iVar2)) {
    iVar2 = GetUnitsAmount1(&DAT_10008da8,&DAT_10008b60);
    iVar3 = GetTotalAmount0(&DAT_10008b60);
    pcVar4 = GetTotalAmount0_exref;
    if (iVar3 == iVar2) {
      iVar2 = GetUnitsByNation(&DAT_10008b60,0);
      iVar3 = GetTotalAmount0(&DAT_10008b60);
      pcVar4 = GetTotalAmount0_exref;
      if (iVar3 == iVar2) {
        SetTrigg(0xe,0);
        SaveSelectedUnits(0,&DAT_10008ac0,0);
        ClearSelection(0);
        SelectUnits1(0,&DAT_10008b60,0);
        SelChangeNation(0,4);
        SelectUnits1(4,&DAT_10008b60,0);
        SelSendTo(4,&DAT_10008cc8,0x40,0);
        SelectUnits(&DAT_10008ac0,0);
        iVar2 = GetTotalAmount0(&DAT_10008b60);
        if (iVar2 < 5) {
          iVar2 = AskMultilineQuestion(9,s__PAGE14A_10008500,0,s_Q13_1_Q13_2_1000850c);
          if (iVar2 == 0) {
            SetTrigg(0x10,1);
          }
          else if (iVar2 == 1) {
            ShowPage(s__PAGE13C_10008534);
            SetTrigg(0xf,1);
          }
        }
        else {
          ShowPage(s__PAGE14_10008518);
          SetTrigg(0xf,1);
          SetTrigg(0x10,1);
        }
        cVar1 = Trigg(0x10);
        pcVar4 = GetTotalAmount0_exref;
        if (cVar1 != '\0') {
          iVar2 = GetDiff(0);
          iVar3 = GetGlobalTime();
          pcVar4 = GetTotalAmount0_exref;
          if (((((9 - iVar2) * 5000 < iVar3) &&
               (iVar2 = GetTotalAmount0(&DAT_10008b20), pcVar4 = GetTotalAmount0_exref, 0 < iVar2))
              && (iVar2 = GetTotalAmount0(&DAT_10008b78), pcVar4 = GetTotalAmount0_exref, 0 < iVar2)
              ) && (iVar2 = GetTotalAmount0(&DAT_10008a70), pcVar4 = GetTotalAmount0_exref,
                   0 < iVar2)) {
            SetTrigg(0x10,0);
            iVar2 = GetDiff(0);
            ShowPageParam(s__PAGE16A_100084f4,(10 - iVar2) * 0x32);
            SetTrigg(0x4a,1);
            pcVar4 = GetTotalAmount0_exref;
          }
        }
      }
    }
  }
  cVar1 = Trigg(0x10);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    pcVar4 = GetTotalAmount0_exref;
    if ((((9 - iVar2) * 5000 < iVar3) && (iVar2 = GetTotalAmount0(&DAT_10008b20), 0 < iVar2)) &&
       ((iVar2 = GetTotalAmount0(&DAT_10008b78), 0 < iVar2 &&
        (iVar2 = GetTotalAmount0(&DAT_10008a70), 0 < iVar2)))) {
      SetTrigg(0x10,0);
      iVar2 = GetDiff(0);
      ShowPageParam(s__PAGE16_100084ec,(10 - iVar2) * 0x32);
      SetTrigg(0x4a,1);
    }
  }
  cVar1 = Trigg(0x4a);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x17), cVar1 != '\0')) {
    iVar2 = (*pcVar4)(&DAT_10008a70);
    iVar3 = GetResource(0,0);
    if ((iVar2 * 4000 <= iVar3) &&
       (((iVar2 = (*pcVar4)(&DAT_10008a70), 0 < iVar2 &&
         (iVar2 = (*pcVar4)(&DAT_10008b78), 0 < iVar2)) &&
        (iVar2 = (*pcVar4)(&DAT_10008b20), 0 < iVar2)))) {
      SetTrigg(0x17,0);
      ShowPage(s__PAGE26_100084e4);
    }
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x17), cVar1 == '\0')) {
    iVar2 = (*pcVar4)(&DAT_10008a70);
    iVar3 = GetResource(0,0);
    if ((iVar2 * 4000 <= iVar3) && (iVar2 = (*pcVar4)(&DAT_10008a70), 0 < iVar2)) {
      iVar2 = (*pcVar4)(&DAT_10008a70);
      iVar3 = GetUnitsAmount1(&DAT_10008ba0,&DAT_10008a70);
      if (((iVar3 == iVar2) && (iVar2 = (*pcVar4)(&DAT_10008b78), 0 < iVar2)) &&
         (iVar2 = (*pcVar4)(&DAT_10008b20), 0 < iVar2)) {
        SetTrigg(0x18,0);
        ShowPage(s__PAGE24_100084dc);
        iVar2 = (*pcVar4)(&DAT_10008a70);
        AddResource(0,0,iVar2 * -4000);
        SetLightSpot(&DAT_10008cc8,1,1);
      }
    }
  }
  cVar1 = Trigg(0x18);
  if ((cVar1 == '\0') && (iVar2 = (*pcVar4)(&DAT_10008a70), 0 < iVar2)) {
    iVar2 = (*pcVar4)(&DAT_10008a70);
    iVar3 = GetUnitsAmount1(&DAT_10008da8,&DAT_10008a70);
    if ((iVar3 == iVar2) && (iVar2 = (*pcVar4)(&DAT_10008b20), 0 < iVar2)) {
      SetTrigg(0x17,1);
      SetTrigg(0x18,1);
      iVar2 = GetDiff(0);
      iVar3 = (*pcVar4)(&DAT_10008a70);
      ShowPageParam(s__PAGE23_100084d4,(10 - iVar2) * iVar3 * 0x32);
      iVar2 = GetDiff(0);
      iVar3 = GetTotalAmount0(&DAT_10008a70);
      AddResource(0,1,(10 - iVar2) * iVar3 * 0x32);
      ClearLightSpot(1);
    }
  }
  cVar1 = Trigg(0x46);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if (iVar2 * -2000 + 25000 < iVar3) {
      SetTrigg(0x46,0);
      SelectUnits(&DAT_10008b00,0);
      SelSendAndKill(5,&DAT_10008d90,0x80,0);
      SelSendAndKill(5,&DAT_10008c98,0x40,2);
    }
  }
  iVar2 = GetUnitsAmount1(&DAT_10008c98,&DAT_10008b00);
  if ((0 < iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008b80), 0 < iVar2)) {
    SelectUnits(&DAT_10008b00,0);
    SelAttackGroup(5,&DAT_10008b80);
  }
  cVar1 = Trigg(0x46);
  if ((((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b10), 0 < iVar2)) &&
      (iVar2 = GetTotalAmount0(&DAT_10008a58), iVar2 == 0)) &&
     (cVar1 = CheckProduction(&DAT_10008b10), cVar1 != '\0')) {
    SetTrigg(0x47,1);
    ProduceUnit(&DAT_10008b10,&DAT_10008d30,&DAT_10008a58);
  }
  cVar1 = Trigg(0x47);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a58), 0 < iVar2)) {
    iVar2 = GetTotalAmount0(&DAT_10008a58);
    iVar3 = GetUnitsAmount1(&DAT_10008c98,&DAT_10008a58);
    if (iVar3 < iVar2) {
      SelectUnits(&DAT_10008a58,0);
      SelSendAndKill(5,&DAT_10008d90,0x80,0);
      SelSendAndKill(5,&DAT_10008c98,0x40,2);
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10008a58);
  iVar3 = GetUnitsAmount1(&DAT_10008c98,&DAT_10008a58);
  if (((iVar3 == iVar2) && (iVar2 = GetTotalAmount0(&DAT_10008a58), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008b80), 0 < iVar2)) {
    SelectUnits(&DAT_10008a58,0);
    SelAttackGroup(1,&DAT_10008b80);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008a68), iVar2 == 0)) {
    SetTrigg(0x11,0);
    ShowPage(s__PAGE17_100084cc);
    LooseGame();
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b80), iVar2 == 0)) {
    SetTrigg(0x11,0);
    ShowPage(s__PAGE17A_100084c0);
    LooseGame();
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b88), iVar2 == 0)) {
    SetTrigg(0x11,0);
    ShowPage(s__PAGE17B_100084b4);
    LooseGame();
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b98), iVar2 == 0)) {
    SetTrigg(0x11,0);
    ShowPage(s__PAGE17C_100084a8);
    LooseGame();
  }
  cVar1 = Trigg(0x12);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if ((0xe - iVar2) * 5000 < iVar3) {
      iVar2 = GetTotalAmount0(&DAT_10008b50);
      iVar3 = GetTotalAmount0(&DAT_10008b40);
      if (0 < iVar3 + iVar2) {
        SetTrigg(0x12,0);
        ShowPage(s__PAGE18_100084a0);
        iVar2 = GetDiff(0);
        if (iVar2 == 0) {
          ShowPage(s__OTST1_10008498);
          SetLightSpot(&DAT_10008ce8,1,3);
          SetLightSpot(&DAT_10008d00,1,4);
        }
        DisableMission(0x46);
        EnableMission(0x47);
        EnableMission(0x48);
      }
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10008b40);
  if (((0 < iVar2) || (iVar2 = GetTotalAmount0(&DAT_10008b50), 0 < iVar2)) &&
     (cVar1 = Trigg(0x12), cVar1 == '\0')) {
    iVar2 = GetDiff(0);
    iVar3 = GetTotalAmount0(&DAT_10008a60);
    if (iVar3 < (iVar2 + 1) * 3) {
      cVar1 = CheckProduction(&DAT_10008b40);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b40), 0 < iVar2)) {
        ProduceUnit(&DAT_10008b40,&DAT_10008c18,&DAT_10008a60);
      }
      cVar1 = CheckProduction(&DAT_10008b50);
      if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b50), 0 < iVar2)) {
        ProduceUnit(&DAT_10008b50,&DAT_10008c18,&DAT_10008a60);
      }
    }
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 == '\0') && (cVar1 = Trigg(0x48), cVar1 != '\0')) {
    iVar2 = GetDiff(0);
    iVar3 = GetTotalAmount0(&DAT_10008a60);
    if (iVar2 * 2 + 6 <= iVar3) {
      SetTrigg(0x48,0);
      SelectUnits(&DAT_10008a60,0);
      SelSendAndKill(1,&DAT_10008c98,0x40,0);
    }
  }
  cVar1 = Trigg(0x48);
  if (cVar1 == '\0') {
    iVar2 = GetDiff(0);
    iVar3 = GetTotalAmount0(&DAT_10008a60);
    if (iVar3 < iVar2 * 2 + 6) {
      SetTrigg(0x48,1);
    }
  }
  cVar1 = Trigg(0x13);
  if (((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b40), iVar2 == 0)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008b50), iVar2 == 0)) {
    SetTrigg(0x13,0);
    ShowPage(s__PAGE19_10008490);
    iVar2 = GetDiff(0);
    RunTimer(10,(5 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ClearLightSpot(3);
      ClearLightSpot(4);
    }
    DisableMission(0x48);
    EnableMission(0x4a);
    EnableMission(0x4b);
  }
  cVar1 = Trigg(0x49);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(10), cVar1 != '\0')) {
    iVar2 = GetDiff(0);
    iVar3 = GetGlobalTime();
    if ((0xc - iVar2) * 5000 < iVar3) {
      SetTrigg(0x49,0);
      iVar2 = GetDiff(0);
      if (iVar2 == 0) {
        puVar6 = &DAT_10008e08;
      }
      else {
        puVar6 = &DAT_10008970;
      }
      CreateObject0(&DAT_10008d58,puVar6,&DAT_10008c18,1,&DAT_10008d10,0x40);
      SelectUnits(&DAT_10008d58,0);
      SelSendAndKill(1,&DAT_10008c98,0x40,0);
      DisableMission(0x4b);
      EnableMission(0x4c);
      EnableMission(0x4d);
    }
  }
  cVar1 = Trigg(0x14);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x49), cVar1 == '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_10008d58), iVar2 == 0)) {
    SetTrigg(0x14,0);
    ShowPage(s__PAGE20_10008488);
    ShowVictory();
  }
  cVar1 = Trigg(0x15);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008a80,0), 0 < iVar2)) {
    SetTrigg(0x15,0);
    ShowPage(s__PAGE21_10008480);
    EnableUnit(0,&DAT_100089b8,1);
    EnableUnit(0,&DAT_100089c0,1);
    DisableMission(0x44);
    EnableMission(0x45);
    ClearSelection(3);
    SelectUnits1(3,&DAT_10008b68,0);
    SelDie(3);
    iVar2 = GetDiff(0);
    if ((iVar2 == 0) && (cVar1 = Trigg(0x12), cVar1 != '\0')) {
      ShowPage(s__OTST4_10008478);
    }
  }
  cVar1 = Trigg(0x15);
  pcVar4 = ShowPage_exref;
  if (((cVar1 != '\0') &&
      (iVar2 = GetTotalAmount0(&DAT_10008a80), pcVar4 = ShowPage_exref, iVar2 == 0)) &&
     (cVar1 = Trigg(0x12), pcVar4 = ShowPage_exref, cVar1 != '\0')) {
    SetTrigg(0x15,0);
    pcVar4 = ShowPage_exref;
    ShowPage(s__PAGE21A_1000846c);
    DisableMission(0x44);
    EnableMission(0x45);
    ClearSelection(3);
    SelectUnits1(3,&DAT_10008b68,0);
    SelDie(3);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      ShowPage(s__OTST4_10008478);
    }
  }
  cVar1 = Trigg(0x16);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10008a88,0), 0 < iVar2)) {
    SetTrigg(0x16,0);
    (*pcVar4)(s__PAGE22_10008464);
    InitialUpgrade(&DAT_1000843c,s_AKA06AL_1000805c);
  }
  cVar1 = Trigg(0x19);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10008b10), iVar2 == 0)) {
    SetTrigg(0x19,0);
    (*pcVar4)(s__PAGE25_1000845c);
  }
  cVar1 = Trigg(0x1b);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10008d18,0), 0 < iVar2)) &&
     (iVar2 = GetTotalAmount0(&DAT_10008d28), 0 < iVar2)) {
    SetTrigg(0x1b,0);
    (*pcVar4)(s__PAGE27_10008454);
  }
  cVar1 = Trigg(0x1c);
  if (((cVar1 != '\0') && (iVar2 = GetDiff(0), iVar2 == 0)) &&
     ((iVar2 = GetGlobalTime(), 15000 < iVar2 &&
      ((iVar2 = GetUnitsAmount0(&DAT_10008df8,5), 0 < iVar2 ||
       (iVar2 = GetUnitsAmount0(&DAT_10008e00,5), 0 < iVar2)))))) {
    SetTrigg(0x1c,0);
    (*pcVar4)(s__OTST2_1000844c);
    SetLightSpot(&DAT_10008df8,1,5);
    SetLightSpot(&DAT_10008e00,1,6);
  }
  return;
}



// Function: FUN_100043be @ 0x100043be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100043be(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10008e2c = GetVersion();
    iVar1 = FUN_10004df2(1);
    if (iVar1 != 0) {
      _DAT_10008e38 = DAT_10008e2c >> 8 & 0xff;
      _DAT_10008e34 = DAT_10008e2c & 0xff;
      DAT_10008e2c = DAT_10008e2c >> 0x10;
      _DAT_10008e30 = _DAT_10008e34 * 0x100 + _DAT_10008e38;
      iVar1 = FUN_10004685();
      if (iVar1 != 0) {
        DAT_10009398 = GetCommandLineA();
        DAT_10008e18 = FUN_10004cc0();
        FUN_100047aa();
        FUN_10004a73();
        FUN_100049ba();
        FUN_10004567();
        DAT_10008e14 = DAT_10008e14 + 1;
        goto LAB_10004491;
      }
      FUN_10004e2e();
    }
LAB_1000441e:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10008e14 < 1) goto LAB_1000441e;
      DAT_10008e14 = DAT_10008e14 + -1;
      if (DAT_10008e64 == 0) {
        FUN_100045a5();
      }
      FUN_10004966();
      FUN_100046d9();
      FUN_10004e2e();
    }
    else if (param_2 == 3) {
      FUN_1000470a((LPVOID)0x0);
    }
LAB_10004491:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10004497

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10008e14;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_100044df;
    if ((DAT_1000939c != (code *)0x0) &&
       (iVar2 = (*DAT_1000939c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100043be(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_100044df:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100043be(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100043be(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000939c != (code *)0x0) {
      iVar2 = (*DAT_1000939c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10004534

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10008e20 == 1) || ((DAT_10008e20 == 0 && (DAT_10008e24 == 1)))) {
    FUN_10004ea3();
  }
  FUN_10004edc(param_1);
  (*(code *)PTR___exit_1000863c)(0xff);
  return;
}



// Function: FUN_10004567 @ 0x10004567

void FUN_10004567(void)

{
  if (DAT_10009394 != (code *)0x0) {
    (*DAT_10009394)();
  }
  FUN_1000466b((undefined4 *)&DAT_10008008,(undefined4 *)&DAT_10008010);
  FUN_1000466b((undefined4 *)&DAT_10008000,(undefined4 *)&DAT_10008004);
  return;
}



// Function: __exit @ 0x10004594

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_100045b4(_Code,1,0);
  return;
}



// Function: FUN_100045a5 @ 0x100045a5

void FUN_100045a5(void)

{
  FUN_100045b4(0,0,1);
  return;
}



// Function: FUN_100045b4 @ 0x100045b4

void __cdecl FUN_100045b4(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10004659();
  if (DAT_10008e68 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10008e64 = 1;
  DAT_10008e60 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10009390 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000938c - 4), DAT_10009390 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10009390 <= puVar1);
    }
    FUN_1000466b((undefined4 *)&DAT_10008014,(undefined4 *)&DAT_10008018);
  }
  FUN_1000466b((undefined4 *)&DAT_1000801c,(undefined4 *)&DAT_10008020);
  if (param_3 == 0) {
    DAT_10008e68 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10004662();
  return;
}



// Function: FUN_10004659 @ 0x10004659

void FUN_10004659(void)

{
  FUN_100050c4(0xd);
  return;
}



// Function: FUN_10004662 @ 0x10004662

void FUN_10004662(void)

{
  FUN_10005125(0xd);
  return;
}



// Function: FUN_1000466b @ 0x1000466b

void __cdecl FUN_1000466b(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10004685 @ 0x10004685

undefined4 FUN_10004685(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000502f();
  DAT_10008640 = TlsAlloc();
  if (DAT_10008640 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000513a(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10008640,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100046f7((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_100046d9 @ 0x100046d9

void FUN_100046d9(void)

{
  FUN_10005058();
  if (DAT_10008640 != 0xffffffff) {
    TlsFree(DAT_10008640);
    DAT_10008640 = 0xffffffff;
  }
  return;
}



// Function: FUN_100046f7 @ 0x100046f7

void __cdecl FUN_100046f7(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100087c0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_1000470a @ 0x1000470a

void __cdecl FUN_1000470a(LPVOID param_1)

{
  if (DAT_10008640 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_10008640), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_100051c7(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_100051c7(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_100051c7(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_100051c7(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_100051c7(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_100051c7(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_100087c0) {
        FUN_100051c7(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_100051c7(param_1);
    }
    TlsSetValue(DAT_10008640,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_100047aa @ 0x100047aa

void FUN_100047aa(void)

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
  DAT_10009380 = 0x20;
  DAT_10009280 = puVar2;
  for (; puVar2 < DAT_10009280 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10009380 < (int)UVar8) {
      puVar2 = &DAT_10009284;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10009380;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10009380 = DAT_10009380 + 0x20;
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
      } while ((int)DAT_10009380 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10009280)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10009280 + iVar6 * 9;
    if (DAT_10009280[iVar6 * 9] == -1) {
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
          goto LAB_1000494f;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1000494f:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10009380);
      return;
    }
  } while( true );
}



// Function: FUN_10004966 @ 0x10004966

void FUN_10004966(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10009280;
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
      FUN_100051c7((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10009380);
  return;
}



// Function: FUN_100049ba @ 0x100049ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100049ba(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10009388 == 0) {
    FUN_100057e3();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10008e18; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10008e48 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10008e18;
  puVar6 = DAT_10008e18;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100052a0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100051c7(DAT_10008e18);
  DAT_10008e18 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10009384 = 1;
  return;
}



// Function: FUN_10004a73 @ 0x10004a73

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004a73(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10009388 == 0) {
    FUN_100057e3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10008e6c,0x104);
  _DAT_10008e58 = &DAT_10008e6c;
  pbVar2 = &DAT_10008e6c;
  if (*DAT_10009398 != 0) {
    pbVar2 = DAT_10009398;
  }
  FUN_10004b0c(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10004b0c(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10008e40 = puVar1;
  _DAT_10008e3c = local_8 + -1;
  return;
}



// Function: FUN_10004b0c @ 0x10004b0c

void __cdecl FUN_10004b0c(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10009160 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10009160 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10004bb7;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10004bb7:
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
          if ((*(byte *)((int)&DAT_10009160 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10009160 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10004cc0 @ 0x10004cc0

LPSTR FUN_10004cc0(void)

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
  if (DAT_10008f70 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10008f70 = 1;
LAB_10004d17:
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
        FUN_100051c7(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10008f70 = 2;
  }
  else {
    if (DAT_10008f70 == 1) goto LAB_10004d17;
    if (DAT_10008f70 != 2) {
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
    FUN_10005800((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10004df2 @ 0x10004df2

undefined4 __cdecl FUN_10004df2(int param_1)

{
  int iVar1;
  
  DAT_10009268 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10009268 != (HANDLE)0x0) {
    iVar1 = FUN_10005b35();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_10009268);
  }
  return 0;
}



// Function: FUN_10004e2e @ 0x10004e2e

void FUN_10004e2e(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_10009028) {
    puVar2 = (undefined4 *)((int)DAT_1000902c + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_10009268,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10009028);
  }
  HeapFree(DAT_10009268,0,DAT_1000902c);
  HeapDestroy(DAT_10009268);
  return;
}



// Function: FUN_10004ea3 @ 0x10004ea3

void FUN_10004ea3(void)

{
  if ((DAT_10008e20 == 1) || ((DAT_10008e20 == 0 && (DAT_10008e24 == 1)))) {
    FUN_10004edc(0xfc);
    if (DAT_10008f74 != (code *)0x0) {
      (*DAT_10008f74)();
    }
    FUN_10004edc(0xff);
  }
  return;
}



// Function: FUN_10004edc @ 0x10004edc

void __cdecl FUN_10004edc(DWORD param_1)

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
  pDVar2 = &DAT_10008670;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10008700);
  if (param_1 == (&DAT_10008670)[iVar5 * 2]) {
    if ((DAT_10008e20 == 1) || ((DAT_10008e20 == 0 && (DAT_10008e24 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10008674);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100052a0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100052a0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100052b0(local_a4,_Dest);
      FUN_100052b0(local_a4,(uint *)&DAT_1000745c);
      FUN_100052b0(local_a4,*(uint **)(iVar5 * 8 + 0x10008674));
      auStackY_1e3._3_4_ = 0x10005000;
      FUN_1000637e(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_1000502f @ 0x1000502f

void FUN_1000502f(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10008744);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10008734);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10008724);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10008704);
  return;
}



// Function: FUN_10005058 @ 0x10005058

void FUN_10005058(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10008700;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10008744)) && (ppuVar1 != &PTR_DAT_10008734)) &&
       ((ppuVar1 != &PTR_DAT_10008724 && (ppuVar1 != &PTR_DAT_10008704)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100051c7(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100087c0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10008724);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10008734);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10008744);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10008704);
  return;
}



// Function: FUN_100050c4 @ 0x100050c4

void __cdecl FUN_100050c4(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10008700 + param_1;
  if ((&DAT_10008700)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100050c4(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100051c7(lpCriticalSection);
    }
    FUN_10005125(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10005125 @ 0x10005125

void __cdecl FUN_10005125(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10008700)[param_1]);
  return;
}



// Function: FUN_1000513a @ 0x1000513a

int * __cdecl FUN_1000513a(int param_1,int param_2)

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
      if (_Size < DAT_10008950 || (int)_Size - (int)DAT_10008950 == 0) {
        FUN_100050c4(9);
        piVar1 = FUN_10005ec9(_Size);
        FUN_10005125(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_10009268,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_10008fec == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10006568(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_100051c7 @ 0x100051c7

void __cdecl FUN_100051c7(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_100050c4(9);
    puVar1 = (uint *)FUN_10005b73((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_10005b9e(puVar1,(uint)param_1);
      FUN_10005125(9);
      return;
    }
    FUN_10005125(9);
    HeapFree(DAT_10009268,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x1000520f

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10008fec);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10005221

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_1000524d((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10006568(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_1000524d @ 0x1000524d

int * __cdecl FUN_1000524d(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10008950) {
    FUN_100050c4(9);
    piVar1 = FUN_10005ec9(param_1);
    FUN_10005125(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_10009268,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_100052a0 @ 0x100052a0

uint * __cdecl FUN_100052a0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10005388;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10005388:
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



// Function: FUN_100052b0 @ 0x100052b0

uint * __cdecl FUN_100052b0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100052cc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100052ff;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000531b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100052cc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000531b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000531b;
    }
  }
LAB_100052ff:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000531b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10005388:
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
    if (bVar1 == 0) goto LAB_10005388;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x10005390

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
    if (((uint)puVar2 & 3) == 0) goto LAB_100053b0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100053e3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100053b0:
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
  goto LAB_100053e3;
}



// Function: FUN_1000540b @ 0x1000540b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000540b(int param_1)

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
  
  FUN_100050c4(0x19);
  CodePage = FUN_100055b8(param_1);
  if (CodePage != DAT_10009030) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10008858;
LAB_10005448:
      if (*pUVar5 != CodePage) goto code_r0x1000544c;
      local_8 = 0;
      puVar15 = &DAT_10009160;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10008868);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10008850)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10009160 + uVar8 + 1);
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
      _DAT_1000904c = 1;
      DAT_10009030 = CodePage;
      DAT_10009264 = FUN_10005602(CodePage);
      DAT_10009040 = *(undefined4 *)(iVar12 + 0x1000885c);
      DAT_10009044 = *(undefined4 *)(iVar12 + 0x10008860);
      DAT_10009048 = *(undefined4 *)(iVar12 + 0x10008864);
      goto LAB_1000559c;
    }
    goto LAB_10005597;
  }
  goto LAB_10005432;
code_r0x1000544c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10008947 < (int)pUVar5) goto code_r0x10005457;
  goto LAB_10005448;
code_r0x10005457:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10009264 = 0;
    puVar15 = &DAT_10009160;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000904c = 0;
      DAT_10009030 = CodePage;
    }
    else {
      DAT_10009030 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10009160 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10009160 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10009264 = FUN_10005602(CodePage);
      _DAT_1000904c = 1;
    }
    DAT_10009040 = 0;
    DAT_10009044 = 0;
    DAT_10009048 = 0;
  }
  else {
    if (DAT_10008fd8 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100055a9;
    }
LAB_10005597:
    FUN_10005635();
  }
LAB_1000559c:
  FUN_1000565e();
LAB_10005432:
  uVar14 = 0;
LAB_100055a9:
  FUN_10005125(0x19);
  return uVar14;
}



// Function: FUN_100055b8 @ 0x100055b8

int __cdecl FUN_100055b8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10008fd8 = 1;
                    /* WARNING: Could not recover jumptable at 0x100055d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10008fd8 = 1;
                    /* WARNING: Could not recover jumptable at 0x100055e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10009008;
  }
  DAT_10008fd8 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10005602 @ 0x10005602

undefined4 __cdecl FUN_10005602(int param_1)

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



// Function: FUN_10005635 @ 0x10005635

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005635(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10009160;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10009030 = 0;
  _DAT_1000904c = 0;
  DAT_10009264 = 0;
  DAT_10009040 = 0;
  DAT_10009044 = 0;
  DAT_10009048 = 0;
  return;
}



// Function: FUN_1000565e @ 0x1000565e

void FUN_1000565e(void)

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
  
  BVar2 = GetCPInfo(DAT_10009030,&local_18);
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
    FUN_100067d2(1,local_118,0x100,local_518,DAT_10009030,DAT_10009264,0);
    FUN_10006583(DAT_10009264,0x100,local_118,0x100,local_218,0x100,DAT_10009030,0);
    FUN_10006583(DAT_10009264,0x200,local_118,0x100,local_318,0x100,DAT_10009030,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10009160 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000576a;
        }
        (&DAT_10009060)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10009160 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000576a:
        (&DAT_10009060)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10009160 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_100057b4;
        }
        (&DAT_10009060)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10009160 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_100057b4:
        (&DAT_10009060)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_100057e3 @ 0x100057e3

void FUN_100057e3(void)

{
  if (DAT_10009388 == 0) {
    FUN_1000540b(-3);
    DAT_10009388 = 1;
  }
  return;
}



// Function: FUN_10005800 @ 0x10005800

undefined4 * __cdecl FUN_10005800(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100059b7_caseD_2;
        case 3:
          goto switchD_100059b7_caseD_3;
        }
        goto switchD_100059b7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100059b7_caseD_0;
      case 1:
        goto switchD_100059b7_caseD_1;
      case 2:
        goto switchD_100059b7_caseD_2;
      case 3:
        goto switchD_100059b7_caseD_3;
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
              goto switchD_100059b7_caseD_2;
            case 3:
              goto switchD_100059b7_caseD_3;
            }
            goto switchD_100059b7_caseD_1;
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
              goto switchD_100059b7_caseD_2;
            case 3:
              goto switchD_100059b7_caseD_3;
            }
            goto switchD_100059b7_caseD_1;
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
              goto switchD_100059b7_caseD_2;
            case 3:
              goto switchD_100059b7_caseD_3;
            }
            goto switchD_100059b7_caseD_1;
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
switchD_100059b7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100059b7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100059b7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100059b7_caseD_0:
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
        goto switchD_10005835_caseD_2;
      case 3:
        goto switchD_10005835_caseD_3;
      }
      goto switchD_10005835_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005835_caseD_0;
    case 1:
      goto switchD_10005835_caseD_1;
    case 2:
      goto switchD_10005835_caseD_2;
    case 3:
      goto switchD_10005835_caseD_3;
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
            goto switchD_10005835_caseD_2;
          case 3:
            goto switchD_10005835_caseD_3;
          }
          goto switchD_10005835_caseD_1;
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
            goto switchD_10005835_caseD_2;
          case 3:
            goto switchD_10005835_caseD_3;
          }
          goto switchD_10005835_caseD_1;
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
            goto switchD_10005835_caseD_2;
          case 3:
            goto switchD_10005835_caseD_3;
          }
          goto switchD_10005835_caseD_1;
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
switchD_10005835_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005835_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005835_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005835_caseD_0:
  return param_1;
}



// Function: FUN_10005b35 @ 0x10005b35

undefined4 FUN_10005b35(void)

{
  DAT_1000902c = HeapAlloc(DAT_10009268,0,0x140);
  if (DAT_1000902c == (LPVOID)0x0) {
    return 0;
  }
  DAT_10009024 = 0;
  DAT_10009028 = 0;
  DAT_10009020 = DAT_1000902c;
  DAT_10009018 = 0x10;
  return 1;
}



// Function: FUN_10005b73 @ 0x10005b73

uint __cdecl FUN_10005b73(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000902c;
  while( true ) {
    if (DAT_1000902c + DAT_10009028 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_10005b9e @ 0x10005b9e

void __cdecl FUN_10005b9e(uint *param_1,uint param_2)

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
  uVar5 = DAT_1000901c;
  puVar2 = DAT_10009024;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_10009024 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_1000901c * 0x8000 + DAT_10009024[3]),0x8000,0x4000);
    DAT_10009024[2] = DAT_10009024[2] | 0x80000000U >> ((byte)DAT_1000901c & 0x1f);
    *(undefined4 *)(DAT_10009024[4] + 0xc4 + DAT_1000901c * 4) = 0;
    *(char *)(DAT_10009024[4] + 0x43) = *(char *)(DAT_10009024[4] + 0x43) + -1;
    if (*(char *)(DAT_10009024[4] + 0x43) == '\0') {
      DAT_10009024[1] = DAT_10009024[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_10009024[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_10009024[3],0,0x8000);
      HeapFree(DAT_10009268,0,(LPVOID)DAT_10009024[4]);
      FUN_10006920(DAT_10009024,DAT_10009024 + 5,
                   (DAT_10009028 * 0x14 - (int)DAT_10009024) + -0x14 + DAT_1000902c);
      DAT_10009028 = DAT_10009028 + -1;
      if (DAT_10009024 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_10009020 = DAT_1000902c;
      puVar2 = param_1;
    }
  }
  DAT_10009024 = puVar2;
  DAT_1000901c = uVar5;
  return;
}



// Function: FUN_10005ec9 @ 0x10005ec9

int * __cdecl FUN_10005ec9(uint *param_1)

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
  
  puVar8 = DAT_1000902c + DAT_10009028 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10009020;
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
  puVar11 = DAT_1000902c;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10009020 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10009020) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000902c;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10009020 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10009020) && (param_1 = FUN_100061d2(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10006283((int)param_1);
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
  DAT_10009020 = param_1;
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
    if (iVar9 == 0) goto LAB_1000618f;
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
LAB_1000618f:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10009024)) && (local_8 == DAT_1000901c)) {
    DAT_10009024 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_100061d2 @ 0x100061d2

undefined4 * FUN_100061d2(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10009028 == DAT_10009018) {
    pvVar2 = HeapReAlloc(DAT_10009268,0,DAT_1000902c,(DAT_10009018 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10009018 = DAT_10009018 + 0x10;
    DAT_1000902c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000902c + DAT_10009028 * 0x14);
  pvVar2 = HeapAlloc(DAT_10009268,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10009028 = DAT_10009028 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10009268,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10006283 @ 0x10006283

int __cdecl FUN_10006283(int param_1)

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



// Function: FUN_1000637e @ 0x1000637e

int __cdecl FUN_1000637e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10008fdc == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10008fdc = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10008fdc != (FARPROC)0x0) {
        DAT_10008fe0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10008fe4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100063cd;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100063cd:
    if (DAT_10008fe0 != (FARPROC)0x0) {
      iVar1 = (*DAT_10008fe0)();
      if ((iVar1 != 0) && (DAT_10008fe4 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10008fe4)(iVar1);
      }
    }
    iVar1 = (*DAT_10008fdc)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10006410

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
        goto joined_r0x1000644e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000648b;
        goto LAB_100064f9;
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
joined_r0x100064f5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_100064f9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000648b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x100064f5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x100064f5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x100064f5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000644e:
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
LAB_1000648b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: _memset @ 0x10006510

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



// Function: FUN_10006568 @ 0x10006568

undefined4 __cdecl FUN_10006568(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10008fe8 != (code *)0x0) {
    iVar1 = (*DAT_10008fe8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10006583 @ 0x10006583

int __cdecl
FUN_10006583(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100074e0;
  puStack_10 = &LAB_10006d50;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10009010 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10009010 = 2;
    }
    else {
      DAT_10009010 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100067a7(param_3,param_4);
  }
  if (DAT_10009010 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10009010 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10009008;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10006e30();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10006e30();
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



// Function: FUN_100067a7 @ 0x100067a7

int __cdecl FUN_100067a7(char *param_1,int param_2)

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



// Function: FUN_100067d2 @ 0x100067d2

BOOL __cdecl
FUN_100067d2(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100074f8;
  puStack_10 = &LAB_10006d50;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10009014;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10009014 == 0) {
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
  DAT_10009014 = iVar3;
  if (DAT_10009014 != 2) {
    if (DAT_10009014 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10009008;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10006e30();
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
    param_6 = DAT_10008ff8;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10006920 @ 0x10006920

undefined4 * __cdecl FUN_10006920(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10006ad7_caseD_2;
        case 3:
          goto switchD_10006ad7_caseD_3;
        }
        goto switchD_10006ad7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006ad7_caseD_0;
      case 1:
        goto switchD_10006ad7_caseD_1;
      case 2:
        goto switchD_10006ad7_caseD_2;
      case 3:
        goto switchD_10006ad7_caseD_3;
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
              goto switchD_10006ad7_caseD_2;
            case 3:
              goto switchD_10006ad7_caseD_3;
            }
            goto switchD_10006ad7_caseD_1;
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
              goto switchD_10006ad7_caseD_2;
            case 3:
              goto switchD_10006ad7_caseD_3;
            }
            goto switchD_10006ad7_caseD_1;
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
              goto switchD_10006ad7_caseD_2;
            case 3:
              goto switchD_10006ad7_caseD_3;
            }
            goto switchD_10006ad7_caseD_1;
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
switchD_10006ad7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10006ad7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10006ad7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10006ad7_caseD_0:
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
        goto switchD_10006955_caseD_2;
      case 3:
        goto switchD_10006955_caseD_3;
      }
      goto switchD_10006955_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10006955_caseD_0;
    case 1:
      goto switchD_10006955_caseD_1;
    case 2:
      goto switchD_10006955_caseD_2;
    case 3:
      goto switchD_10006955_caseD_3;
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
            goto switchD_10006955_caseD_2;
          case 3:
            goto switchD_10006955_caseD_3;
          }
          goto switchD_10006955_caseD_1;
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
            goto switchD_10006955_caseD_2;
          case 3:
            goto switchD_10006955_caseD_3;
          }
          goto switchD_10006955_caseD_1;
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
            goto switchD_10006955_caseD_2;
          case 3:
            goto switchD_10006955_caseD_3;
          }
          goto switchD_10006955_caseD_1;
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
switchD_10006955_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10006955_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10006955_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10006955_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x10006c58

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10006c70,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10006c9a

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
  puStack_18 = &LAB_10006c78;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10006d2e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_10006d2e @ 0x10006d2e

void FUN_10006d2e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10008968 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10008964 = in_EAX;
  DAT_1000896c = unaff_EBP;
  return;
}



// Function: FUN_10006e0d @ 0x10006e0d

void FUN_10006e0d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10006e30 @ 0x10006e30

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10006e30(void)

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




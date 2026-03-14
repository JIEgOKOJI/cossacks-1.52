// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

undefined4 * __fastcall FUN_10001000(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000d1e8;
  RegisterVar(param_1,0x14);
  RegisterDynGroup(param_1 + 1);
  return param_1;
}



// Function: FUN_10001030 @ 0x10001030

undefined4 * __thiscall FUN_10001030(void *this,byte param_1)

{
  FUN_10001050(this);
  if ((param_1 & 1) != 0) {
    FUN_10003ae0(this);
  }
  return this;
}



// Function: FUN_10001050 @ 0x10001050

void __fastcall FUN_10001050(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000d1e8;
  return;
}



// Function: FUN_10001060 @ 0x10001060

undefined4 * __fastcall FUN_10001060(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000d1ec;
  RegisterVar(param_1,8);
  param_1[1] = 0;
  return param_1;
}



// Function: FUN_10001080 @ 0x10001080

undefined4 * __thiscall FUN_10001080(void *this,byte param_1)

{
  FUN_100010a0(this);
  if ((param_1 & 1) != 0) {
    FUN_10003ae0(this);
  }
  return this;
}



// Function: FUN_100010a0 @ 0x100010a0

void __fastcall FUN_100010a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000d1ec;
  return;
}



// Function: FUN_100010b0 @ 0x100010b0

char __cdecl FUN_100010b0(uint param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return -0x40;
  }
  iVar3 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (iVar1 < iVar3) {
    iVar1 = FUN_10003b63(iVar1 * 0x100,iVar3);
    cVar2 = (&DAT_100125e8)[iVar1 * 2];
  }
  else {
    iVar1 = FUN_10003b63(iVar3 * 0x100,iVar1);
    cVar2 = '@' - (&DAT_100125e8)[iVar1 * 2];
  }
  if ((int)param_1 < 0) {
    cVar2 = -0x80 - cVar2;
  }
  if ((int)param_2 < 0) {
    cVar2 = -cVar2;
  }
  return cVar2;
}



// Function: FUN_10001150 @ 0x10001150

void __cdecl FUN_10001150(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = GetNUnits(param_1);
  if (0 < iVar1) {
    do {
      RemoveUnitFromGroup(param_1,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



// Function: FUN_10001180 @ 0x10001180

void __cdecl FUN_10001180(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iStack_c;
  ushort local_8;
  ushort uStack_6;
  
  iVar1 = param_2;
  UnitsCenter(&local_8,param_2,100);
  uVar2 = param_3;
  GetZoneCoor(param_3,&iStack_c,&param_2);
  cVar3 = FUN_100010b0(iStack_c - (uint)local_8,param_2 - (uint)uStack_6);
  param_3 = CONCAT31(param_3._1_3_,cVar3);
  SelectUnits(iVar1,0);
  SelSendTo(param_1,uVar2,param_3,param_4);
  return;
}



// Function: FUN_10001350 @ 0x10001350

void FUN_10001350(void)

{
  FUN_10001000((undefined4 *)&DAT_10022760);
  return;
}



// Function: FUN_10001360 @ 0x10001360

void FUN_10001360(void)

{
  FUN_10003c06(&LAB_10001370);
  return;
}



// Function: FUN_10001390 @ 0x10001390

void FUN_10001390(void)

{
  FUN_10001000((undefined4 *)&DAT_10022778);
  return;
}



// Function: FUN_100013a0 @ 0x100013a0

void FUN_100013a0(void)

{
  FUN_10003c06(&LAB_100013b0);
  return;
}



// Function: FUN_100013d0 @ 0x100013d0

void FUN_100013d0(void)

{
  FUN_10001000((undefined4 *)&DAT_10022790);
  return;
}



// Function: FUN_100013e0 @ 0x100013e0

void FUN_100013e0(void)

{
  FUN_10003c06(&LAB_100013f0);
  return;
}



// Function: FUN_10001410 @ 0x10001410

void FUN_10001410(void)

{
  FUN_10001000((undefined4 *)&DAT_10022818);
  return;
}



// Function: FUN_10001420 @ 0x10001420

void FUN_10001420(void)

{
  FUN_10003c06(&LAB_10001430);
  return;
}



// Function: FUN_10001450 @ 0x10001450

void FUN_10001450(void)

{
  FUN_10001000((undefined4 *)&DAT_10022830);
  return;
}



// Function: FUN_10001460 @ 0x10001460

void FUN_10001460(void)

{
  FUN_10003c06(&LAB_10001470);
  return;
}



// Function: FUN_10001490 @ 0x10001490

void FUN_10001490(void)

{
  FUN_10001000((undefined4 *)&DAT_10022848);
  return;
}



// Function: FUN_100014a0 @ 0x100014a0

void FUN_100014a0(void)

{
  FUN_10003c06(&LAB_100014b0);
  return;
}



// Function: FUN_100014c0 @ 0x100014c0

void __cdecl FUN_100014c0(int param_1)

{
  if (*(int *)(&DAT_10012c84 + param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(&DAT_10012c80 + param_1 * 8);
  }
  SaveSelectedUnits(param_1,&DAT_10012c80 + param_1 * 8,0);
  ClearSelection(param_1);
  return;
}



// Function: FUN_10001510 @ 0x10001510

void FUN_10001510(void)

{
  FUN_10001000((undefined4 *)&DAT_100227b8);
  return;
}



// Function: FUN_10001520 @ 0x10001520

void FUN_10001520(void)

{
  FUN_10003c06(&LAB_10001530);
  return;
}



// Function: FUN_10001540 @ 0x10001540

void __cdecl FUN_10001540(int param_1)

{
  ClearSelection(param_1);
  SelectUnits(&DAT_10012c80 + param_1 * 8,0);
  return;
}



// Function: FUN_10001580 @ 0x10001580

void FUN_10001580(void)

{
  FUN_10001000((undefined4 *)&DAT_100227d0);
  return;
}



// Function: FUN_10001590 @ 0x10001590

void FUN_10001590(void)

{
  FUN_10003c06(&LAB_100015a0);
  return;
}



// Function: FUN_100015c0 @ 0x100015c0

void FUN_100015c0(void)

{
  FUN_10001000((undefined4 *)&DAT_100227f0);
  return;
}



// Function: FUN_100015d0 @ 0x100015d0

void FUN_100015d0(void)

{
  FUN_10003c06(&LAB_100015e0);
  return;
}



// Function: FUN_10001600 @ 0x10001600

void FUN_10001600(void)

{
  FUN_10001060((undefined4 *)&DAT_10022758);
  return;
}



// Function: FUN_10001610 @ 0x10001610

void FUN_10001610(void)

{
  FUN_10003c06(&LAB_10001620);
  return;
}



// Function: FUN_10001640 @ 0x10001640

void FUN_10001640(void)

{
  FUN_10001060((undefined4 *)&DAT_10023c38);
  return;
}



// Function: FUN_10001650 @ 0x10001650

void FUN_10001650(void)

{
  FUN_10003c06(&LAB_10001660);
  return;
}



// Function: FUN_100016a0 @ 0x100016a0

void FUN_100016a0(void)

{
  FUN_10001060((undefined4 *)&DAT_10022ca0);
  return;
}



// Function: FUN_100016b0 @ 0x100016b0

void FUN_100016b0(void)

{
  FUN_10003c06(&LAB_100016c0);
  return;
}



// Function: FUN_100016e0 @ 0x100016e0

void FUN_100016e0(void)

{
  FUN_10001060((undefined4 *)&DAT_10023c30);
  return;
}



// Function: FUN_100016f0 @ 0x100016f0

void FUN_100016f0(void)

{
  FUN_10003c06(&LAB_10001700);
  return;
}



// Function: OnInit @ 0x10001710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OnInit(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_8 [8];
  
                    /* 0x1710  1  OnInit */
  RegisterUnits(&DAT_100227a8,s_ENG_cannons_1000f508);
  RegisterUnits(&DAT_10023c18,s_FRA_cannons_1000f4fc);
  RegisterUnits(&DAT_10023c80,s_FRA_killer_1000f4f0);
  RegisterUnits(&DAT_10012fc8,s_HOL_tow0_1000f4e4);
  RegisterUnits(&DAT_10012fe0,s_HOL_tow1_1000f4d8);
  RegisterUnitType(&DAT_10023c58,s_BGAUZ_UN__1000f4cc);
  RegisterUnitType(&DAT_10023c50,s_BGAUZ2_UN__1000f4c0);
  RegisterUnitType(&DAT_10012d18,s_Bashnia_en__1000f4b4);
  RegisterUnitType(&DAT_10012fb8,s_Bashnia_HO__1000f4a8);
  RegisterUnitType(&DAT_10012fd8,s_PorE_en__1000f49c);
  RegisterDynGroup(&DAT_10023ca8);
  RegisterZone(&DAT_10023ca0,s_ZGuard0_1000f494);
  RegisterZone(&DAT_10023c98,s_ZGuard1_1000f48c);
  RegisterDynGroup(&DAT_10023c00);
  RegisterUnitType(&DAT_10023c88,s_Center_British_en__1000f478);
  RegisterUnits(&DAT_10023bd8,s_ENEMY_flot0_1000f46c);
  RegisterZone(&DAT_10023c70,s_ENM_flot0_0_1000f460);
  RegisterZone(&DAT_10023c78,s_ENM_flot0_1_1000f454);
  RegisterZone(&DAT_10012ce0,s_ENM_help_1000f448);
  RegisterZone(&DAT_10023c28,s_ENM_back_1000f43c);
  RegisterDynGroup(&DAT_100227e8);
  RegisterZone(&DAT_10023c90,s_ENM_back_rest_1000f42c);
  RegisterVar(&DAT_100227e8,8);
  RegisterUnitType(&DAT_10012fd0,s_FregatNEW_HO__1000f41c);
  RegisterZone(&DAT_10023bf0,s_z_att0_1000f414);
  RegisterZone(&DAT_10023bf8,s_z_att1_1000f40c);
  RegisterZone(&DAT_10023be0,s_z_att2_1000f404);
  RegisterZone(&DAT_10023be8,s_z_att3_1000f3fc);
  RegisterUnits(&DAT_10012cd0,s_ENG_arerg_1000f3f0);
  RegisterUnits(&DAT_10012bf8,s_FRA_arerg_1000f3e4);
  RegisterUnits(&DAT_10023c60,s_ENEMY_arerg_1000f3d8);
  RegisterZone(&DAT_10023c20,s_ENG_batl0_1000f3cc);
  RegisterZone(&DAT_10023c08,s_FRA_batl0_1000f3c0);
  RegisterZone(&DAT_10012cc8,s_ALI_batl1_1000f3b4);
  RegisterZone(&DAT_10012d08,s_ENEMY_batl0_1000f3a8);
  RegisterZone(&DAT_10012d00,s_ENEMY_batl1_1000f39c);
  RegisterUnits(&DAT_10022808,s_ENG_parom_1000f390);
  RegisterZone(&DAT_10022810,s_ENG_dock_1000f384);
  RegisterUnits(&DAT_10023c10,s_ENG_men_1000f37c);
  RegisterZone(&DAT_10012cc0,s_ENG_assault_1000f370);
  RegisterUnits(&DAT_10012cd8,s_FRA_parom_1000f364);
  RegisterZone(&DAT_10023c40,s_FRA_dock_1000f358);
  RegisterUnits(&DAT_10023cb0,s_FRA_men_1000f350);
  RegisterZone(&DAT_10012fc0,s_FRA_assault_1000f344);
  FUN_10003aa0(&DAT_10022ca8,DAT_10023c68,DAT_10023c68);
  FUN_10003650(&DAT_10023a86,s_EF_dock_1000f31c,s_EF_port_1000f324,s_EF_gate_in_1000f32c,
               s_EF_gate_out_1000f338);
  RegisterUnitType(&DAT_10022c20,s_KECH_HO__1000f310);
  FUN_10003300(&DAT_10012fe8,_DAT_10012cfa,s_ENEMY_port4_1000f304,0x1000f324,7);
  FUN_100033c0(&DAT_10012fe8,s_Yahta_HO__1000f2f8,2000,200);
  InitialUpgrade(s_ENEMY_port4_1000f304,s_AKA06HO_1000f2f0);
  FUN_100033f0(&DAT_10012fe8,s_Fregat_HO__1000f2e4,4000,0x32);
  FUN_100033b0(&DAT_10012fe8,10);
  FUN_10003300(&DAT_10022860,_DAT_10012cfa,s_ENEMY_port0_1000f2cc,0x1000f2d8,100);
  FUN_100033c0(&DAT_10022860,s_Yahta_en__1000f2c0,3000,200);
  FUN_100033f0(&DAT_10022860,s_GALERA_en__1000f2b4,3000,100);
  FUN_10003300(&DAT_100228d8,_DAT_10012cfa,s_ENEMY_port1_1000f29c,0x1000f2a8,100);
  FUN_100033c0(&DAT_100228d8,s_Yahta_en__1000f2c0,3000,200);
  FUN_100033f0(&DAT_100228d8,s_GALERA_en__1000f2b4,3000,100);
  FUN_10003300(&DAT_10022950,_DAT_10012cfa,s_ENEMY_port2_1000f284,0x1000f290,100);
  FUN_100033c0(&DAT_10022950,s_Yahta_HO__1000f2f8,0xdac,200);
  FUN_100033f0(&DAT_10022950,s_GALERA_HO__1000f278,0xdac,100);
  iVar1 = GetDiff(0);
  iVar1 = 4 - iVar1;
  iVar3 = iVar1 * 0x96;
  iVar2 = iVar1 * 400;
  iVar4 = iVar1 * 800;
  iVar1 = iVar1 * 900;
  FUN_10003300(&DAT_10013060,_DAT_10012cfa,s_ENEMY_bar0_1000f25c,0x1000f268,100);
  FUN_100033c0(&DAT_10013060,s_Pikiner_evro_en__1000f248,iVar3,200);
  FUN_100033f0(&DAT_10013060,s_Mushketer_ev_en__1000f234,iVar2,100);
  FUN_10003300(&DAT_100130d8,_DAT_10012cfa,s_ENEMY_bar1_1000f218,0x1000f224,100);
  FUN_100033c0(&DAT_100130d8,s_Pikiner_evro_en__1000f248,iVar3,200);
  FUN_100033f0(&DAT_100130d8,s_Mushketer_ev_en__1000f234,iVar2,100);
  FUN_10003300(&DAT_10013150,_DAT_10012cfa,s_ENEMY_bar2_1000f1fc,0x1000f208,100);
  FUN_100033c0(&DAT_10013150,s_Pikiner_evro_en__1000f248,iVar3,200);
  FUN_100033f0(&DAT_10013150,s_Mushketer_niderland_HO__1000f1e4,iVar2 + -0x19,100);
  FUN_10003300(&DAT_100131c8,_DAT_10012cfa,s_ENM_bar3_1000f1cc,0x1000f1d8,100);
  FUN_100033c0(&DAT_100131c8,s_Pikiner_evro_HO__1000f1b8,iVar3,200);
  FUN_100033f0(&DAT_100131c8,s_Mushketer_niderland_HO__1000f1e4,iVar2 + -0x19,100);
  FUN_10003300(&DAT_10013240,_DAT_10012cfa,s_ENM_bar4_1000f1a0,0x1000f1ac,100);
  FUN_100033c0(&DAT_10013240,s_Pikiner_evro_HO__1000f1b8,iVar3,200);
  FUN_100033f0(&DAT_10013240,s_Mushketer_niderland_HO__1000f1e4,iVar2,100);
  FUN_10003300(&DAT_100132b8,_DAT_10012cfa,s_ENM_bar5_1000f188,0x1000f194,100);
  FUN_100033c0(&DAT_100132b8,s_Pikiner_evro_HO__1000f1b8,iVar3,200);
  FUN_100033f0(&DAT_100132b8,s_Mushketer_niderland_HO__1000f1e4,iVar2,100);
  FUN_10003300(&DAT_100229c8,_DAT_10012cfa,s_ENEMY_sta0_1000f16c,0x1000f178,100);
  FUN_100033c0(&DAT_100229c8,s_Konni_Ricar_en__1000f15c,iVar4,200);
  FUN_100033f0(&DAT_100229c8,s_Dragun_en__1000f150,iVar1,100);
  FUN_10003300(&DAT_10022a40,_DAT_10012cfa,s_ENEMY_sta1_1000f134,0x1000f140,100);
  FUN_100033c0(&DAT_10022a40,s_Konni_Ricar_en__1000f15c,iVar4,200);
  FUN_100033f0(&DAT_10022a40,s_Dragun_en__1000f150,iVar1,100);
  FUN_10003300(&DAT_10022ab8,_DAT_10012cfa,s_ENEMY_sta2_1000f118,0x1000f124,100);
  FUN_100033c0(&DAT_10022ab8,s_Konni_Ricar_HO__1000f108,iVar4,200);
  FUN_100033f0(&DAT_10022ab8,s_Dragun_HO__1000f0fc,iVar1,100);
  FUN_10003300(&DAT_10022b30,_DAT_10012cfa,s_ENM_sta3_1000f0f0,0x1000f1d8,100);
  FUN_100033c0(&DAT_10022b30,s_Konni_Ricar_HO__1000f108,iVar4,200);
  FUN_100033f0(&DAT_10022b30,s_Dragun_HO__1000f0fc,iVar1,100);
  FUN_10003300(&DAT_10022ba8,_DAT_10012cfa,s_ENM_sta4_1000f0e4,0x1000f1ac,100);
  FUN_100033c0(&DAT_10022ba8,s_Konni_Ricar_HO__1000f108,iVar4,200);
  FUN_100033f0(&DAT_10022ba8,s_Dragun_HO__1000f0fc,iVar1,100);
  FUN_10003300(&DAT_10022c28,_DAT_10012cfa,s_ENM_sta5_1000f0d8,0x1000f194,100);
  FUN_100033c0(&DAT_10022c28,s_Konni_Ricar_HO__1000f108,iVar4,200);
  FUN_100033f0(&DAT_10022c28,s_Dragun_HO__1000f0fc,iVar1,100);
  FUN_10002fb0(&DAT_10012ce8,(undefined4 *)&DAT_10012c00);
  FUN_10002fb0(&DAT_10012cf1,(undefined4 *)&DAT_10012c00);
  FUN_10002fb0(&DAT_10012c09,(undefined4 *)&DAT_10012cfa);
  FUN_10002fb0(&DAT_10012c12,(undefined4 *)&DAT_10012cfa);
  FUN_10002fb0(&DAT_10023c68,(undefined4 *)&DAT_10012cfa);
  RegisterUpgrade(auStack_8,s_AKA25HO_1000f0d0);
  DisableUpgrade(0,auStack_8);
  SetTrigg(7,0);
  return;
}



// Function: ProcessScenary @ 0x10001ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProcessScenary(void)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iStack_68;
  int aiStack_60 [2];
  short asStack_58 [2];
  undefined2 uStack_54;
  uint uStack_52;
  int iStack_3c;
  uint auStack_2c [11];
  
                    /* 0x1ec0  2  ProcessScenary */
  cVar2 = Trigg(0);
  if (cVar2 != '\0') {
    SetTrigg(0,0);
    ShowPage(s__Entry_1000f550);
    DisableMission(0x5a);
    DisableMission(0x53);
    iVar4 = GetDiff(0);
    if (1 < iVar4) {
      DisableMission(0x58);
    }
    GetDiff(0);
    iVar4 = GetDiff(0);
    FUN_10002f60(&DAT_10012c00,(5 - iVar4) * 2000);
    iVar4 = GetDiff(0);
    SetResource(CONCAT31((int3)((uint)(8 - iVar4) >> 8),DAT_10012c00),4,(8 - iVar4) * 3000);
    iVar4 = GetDiff(0);
    SetResource(_DAT_10012c00 & 0xff,5,(8 - iVar4) * 3000);
    FUN_10002f60(&DAT_10012c09,15000);
    FUN_10002f60(&DAT_10012c12,15000);
    StartAI(DAT_10012c09,s_HOLLAND_0_1000f544,0,0,0,0xffffffff);
    StartAI(DAT_10012c12,s_HOLLAND_0_1000f544,3,0,0,0xffffffff);
    ClearSelection(DAT_10012cfa);
    SelectUnits(&DAT_10023bd8,0);
    uVar7 = 0;
    iVar4 = _rand();
    SelSendAndKill(DAT_10012cfa,&DAT_10023c70,iVar4,uVar7);
    uVar7 = 2;
    iVar4 = _rand();
    SelSendAndKill(DAT_10012cfa,&DAT_10023c78,iVar4,uVar7);
    iVar4 = GetDiff(0);
    uVar1 = DAT_10012cfa;
    ClearSelection(DAT_10012cfa);
    SelectUnitsType(&DAT_10012d18,uVar1,1);
    SelectUnitsType(&DAT_10012fb8,uVar1,1);
    SelectUnitsType(&DAT_10012fd8,uVar1,1);
    SaveSelectedUnits(uVar1,&DAT_10023ca8,0);
    aiStack_60[0] = GetNUnits(&DAT_10023ca8);
    iStack_68 = 0;
    if (0 < aiStack_60[0]) {
      do {
        GetUnitInfo(&DAT_10023ca8,iStack_68,asStack_58);
        if (asStack_58[0] != -1) {
          iVar5 = (iVar4 + 1) * (uStack_52 & 0xffff);
          uStack_54 = (undefined2)((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
          uStack_52 = CONCAT22(uStack_52._2_2_,uStack_54);
          SetUnitInfo(asStack_58);
        }
        iStack_68 = iStack_68 + 1;
      } while (iStack_68 < aiStack_60[0]);
    }
    if (iVar4 == 0) {
      ClearSelection(uVar1);
      SelectUnits(&DAT_10023bd8,1);
      SelErase(uVar1);
      ClearSelection(uVar1);
      SelectUnitsType(&DAT_10023c58,uVar1,1);
      SelectUnitsType(&DAT_10023c50,uVar1,1);
      SelErase(uVar1);
    }
    iVar5 = GetGlobalTime();
    DAT_10022ca4 = iVar5 + 2000;
    RunTimer(0,(0xd - iVar4) * 4000);
    RunTimer(2,(7 - iVar4) * 5000);
  }
  iVar4 = GetReadyAmount(&DAT_10023c88,0);
  if ((iVar4 != 0) && (cVar2 = Trigg(5), cVar2 != '\0')) {
    SetTrigg(5,0);
    RunTimer(0,36000);
  }
  iVar4 = GetGlobalTime();
  if (DAT_10023c34 < iVar4) {
    iVar4 = GetGlobalTime();
    DAT_10023c34 = iVar4 + 400;
    iVar4 = GetTotalAmount0(&DAT_10012bf8);
    if (iVar4 == 0) {
      ClearLightSpot(0);
    }
    else {
      UnitsCenter(aiStack_60,&DAT_10012bf8,100);
      SetLightSpot(aiStack_60,2,0);
    }
    iVar4 = GetTotalAmount0(&DAT_10012cd0);
    if (iVar4 == 0) {
      ClearLightSpot(1);
    }
    else {
      UnitsCenter(aiStack_60,&DAT_10012cd0,100);
      SetLightSpot(aiStack_60,2,1);
    }
    iVar4 = GetTotalAmount0(&DAT_10023cb0);
    if (iVar4 == 0) {
      ClearLightSpot(2);
    }
    else {
      UnitsCenter(aiStack_60,&DAT_10023cb0,100);
      SetLightSpot(aiStack_60,2,2);
    }
    iVar4 = GetTotalAmount0(&DAT_10023c10);
    if (iVar4 == 0) {
      ClearLightSpot(3);
    }
    else {
      UnitsCenter(aiStack_60,&DAT_10023c10,100);
      SetLightSpot(aiStack_60,2,3);
    }
  }
  cVar2 = TimerDone(2);
  if (cVar2 != '\0') {
    FUN_10003130();
  }
  cVar2 = TimerDone(0);
  pcVar6 = SelSendTo_exref;
  if ((cVar2 != '\0') && (cVar2 = Trigg(1), pcVar6 = SelSendTo_exref, cVar2 != '\0')) {
    ClearSelection(DAT_10012ce8);
    SelectUnits(&DAT_10022808,0);
    pcVar6 = SelSendTo_exref;
    SelSendTo(DAT_10012ce8,&DAT_10022810,0,0);
    ClearSelection(DAT_10012cf1);
    SelectUnits(&DAT_10012cd8,0);
    SelSendTo(DAT_10012cf1,&DAT_10023c40,0,0);
    iVar4 = GetTotalAmount0(&DAT_10022808);
    if (((iVar4 == 0) || (cVar2 = CheckLeaveAbility(DAT_10012ce8), cVar2 != '\0')) &&
       ((iVar4 = GetTotalAmount0(&DAT_10012cd8), iVar4 == 0 ||
        (cVar2 = CheckLeaveAbility(DAT_10012cf1), cVar2 != '\0')))) {
      SetTrigg(1,0);
    }
  }
  cVar2 = Trigg(3);
  if ((cVar2 != '\0') && (cVar2 = TimerDone(3), cVar2 != '\0')) {
    SetTrigg(3,0);
    ClearSelection(DAT_10012cfa);
    SelectUnits(&DAT_100227e8,0);
    SelSendAndKill(DAT_10012cfa,&DAT_10012d08,0xdc,0);
    SelSendAndKill(DAT_10012cfa,&DAT_10023c90,200,2);
    SelSendAndKill(DAT_10012cfa,&DAT_10023c98,100,2);
  }
  cVar2 = Trigg(7);
  if ((cVar2 != '\0') && (cVar2 = Trigg(6), cVar2 != '\0')) {
    iVar4 = GetNUnits(&DAT_10023c60);
    if (iVar4 == 0) {
      SetTrigg(6,0);
    }
    else {
      while (0 < iVar4) {
        iVar4 = iVar4 + -1;
        GetUnitInfo(&DAT_10023c60,iVar4,auStack_2c);
        if ((short)auStack_2c[0] == -1) {
          RemoveUnitFromGroup(&DAT_10023c60,iVar4);
        }
        else {
          GetUnitExCaps(auStack_2c[0] & 0xffff,asStack_58,1);
          if (iStack_3c == -1) {
            InsertUnitToGroup(0,&DAT_10023c00,auStack_2c[0] & 0xffff);
            RemoveUnitFromGroup(&DAT_10023c60,iVar4);
          }
        }
      }
    }
    ClearSelection(DAT_10012cfa);
    SelectUnits(&DAT_10023c00,0);
    SelChangeNation(DAT_10012cfa,DAT_10012c12);
    FUN_10001150(&DAT_10023c00);
    pcVar6 = SelSendTo_exref;
  }
  cVar2 = Trigg(2);
  if ((cVar2 != '\0') && (cVar2 = Trigg(1), cVar2 == '\0')) {
    ClearSelection(DAT_10012ce8);
    SelectUnits(&DAT_10022808,1);
    SelectUnits(&DAT_10023c10,1);
    SendUnitsToTransport(DAT_10012ce8);
    ClearSelection(DAT_10012cf1);
    SelectUnits(&DAT_10012cd8,1);
    SelectUnits(&DAT_10023cb0,1);
    SendUnitsToTransport(DAT_10012cf1);
    aiStack_60[0] = GetTotalAmount0(&DAT_10023c10);
    iVar4 = GetNInside(DAT_10012ce8);
    if (iVar4 == aiStack_60[0]) {
      aiStack_60[0] = GetTotalAmount0(&DAT_10023cb0);
      iVar4 = GetNInside(DAT_10012cf1);
      if (iVar4 == aiStack_60[0]) {
        SetTrigg(2,0);
        ClearSelection(DAT_10012ce8);
        SelectUnits(&DAT_10022808,0);
        (*pcVar6)(DAT_10012ce8,&DAT_10012cc0,0,0);
        ClearSelection(DAT_10012cf1);
        SelectUnits(&DAT_10012cd8,0);
        (*pcVar6)(DAT_10012cf1,&DAT_10012fc0,0,0);
        RunTimer(1,1000);
        SetTrigg(7,1);
        RunTimer(3,1000);
        ShowPage(s__Start_att_1000f538);
        DisableMission(0x41);
        EnableMission(0x5a);
        EnableMission(0x53);
        ClearSelection(DAT_10012ce8);
        SelectUnits(&DAT_10012cd0,1);
        SelSendAndKill(DAT_10012ce8,&DAT_10023c20,0xdc,0);
        SelSendAndKill(DAT_10012ce8,&DAT_10012cc8,0xdc,2);
        ClearSelection(DAT_10012cf1);
        SelectUnits(&DAT_10012bf8,1);
        SelSendAndKill(DAT_10012cf1,&DAT_10023c08,0xdc,0);
        SelSendAndKill(DAT_10012cf1,&DAT_10012cc8,0xdc,2);
        ClearSelection(DAT_10012cfa);
        SelectUnits(&DAT_10023c60,1);
        SelSendAndKill(DAT_10012cfa,&DAT_10012d08,0xdc,0);
        SelSendAndKill(DAT_10012cfa,&DAT_10012d00,0xdc,2);
        SelSendAndKill(DAT_10012cfa,&DAT_10023c98,100,2);
      }
    }
  }
  cVar2 = TimerDone(1);
  if (((cVar2 != '\0') && (cVar2 = CheckLeaveAbility(DAT_10012ce8), cVar2 != '\0')) &&
     (cVar2 = CheckLeaveAbility(DAT_10012cf1), cVar2 != '\0')) {
    ClearSelection(DAT_10012ce8);
    SelectUnits(&DAT_10022808,0);
    PushAllUnitsAway(DAT_10012ce8);
    ClearSelection(DAT_10012cf1);
    SelectUnits(&DAT_10012cd8,0);
    PushAllUnitsAway(DAT_10012cf1);
  }
  cVar2 = TimerDone(1);
  if ((cVar2 != '\0') && (cVar2 = Trigg(4), cVar2 != '\0')) {
    ClearSelection(DAT_10012ce8);
    SelectUnits(&DAT_10022808,0);
    ClearSelection(DAT_10012cf1);
    SelectUnits(&DAT_10012cd8,0);
    iVar4 = GetNInside(DAT_10012ce8);
    if ((iVar4 == 0) && (iVar4 = GetNInside(DAT_10012cf1), iVar4 == 0)) {
      cVar2 = Trigg(8);
      if (cVar2 != '\0') {
        SetTrigg(8,0);
        ShowPage(s__ali_assault_1000f528);
      }
      ClearSelection(DAT_10012ce8);
      SelectUnits(&DAT_100227a8,1);
      SelAttackGroup(DAT_10012ce8,&DAT_10012fc8);
      ClearSelection(DAT_10012cf1);
      SelectUnits(&DAT_10023c18,1);
      SelAttackGroup(DAT_10012cf1,&DAT_10012fe0);
      ClearSelection(DAT_10012cf1);
      aiStack_60[0] = GetTotalAmount0(&DAT_10012fe0);
      iVar4 = GetTotalAmount0(&DAT_10012fc8);
      if (iVar4 + aiStack_60[0] == 0) {
        SetTrigg(4,0);
        iVar4 = GetTotalAmount0(&DAT_10022808);
        if (iVar4 != 0) {
          ClearSelection(DAT_10012ce8);
          SelectUnits(&DAT_10023c10,0);
          uVar7 = 0;
          iVar4 = _rand();
          SelSendAndKill(DAT_10012ce8,&DAT_10023bf0,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = _rand();
          SelSendAndKill(DAT_10012ce8,&DAT_10023bf8,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = _rand();
          SelSendAndKill(DAT_10012ce8,&DAT_10023be0,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = _rand();
          SelSendAndKill(DAT_10012ce8,&DAT_10023be8,iVar4,uVar7);
        }
        iVar4 = GetTotalAmount0(&DAT_10012cd8);
        if (iVar4 != 0) {
          ClearSelection(DAT_10012cf1);
          SelectUnits(&DAT_10023cb0,0);
          uVar7 = 0;
          iVar4 = _rand();
          SelSendAndKill(DAT_10012cf1,&DAT_10023bf0,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = _rand();
          SelSendAndKill(DAT_10012cf1,&DAT_10023bf8,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = _rand();
          SelSendAndKill(DAT_10012cf1,&DAT_10023be0,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = _rand();
          SelSendAndKill(DAT_10012cf1,&DAT_10023be8,iVar4,uVar7);
        }
      }
    }
  }
  FUN_10003440(0x10022860);
  FUN_10003440(0x100228d8);
  FUN_10003440(0x10022950);
  FUN_10003440(0x10013060);
  FUN_10003440(0x100130d8);
  FUN_10003440(0x10013150);
  FUN_10003440(0x100131c8);
  FUN_10003440(0x10013240);
  FUN_10003440(0x100132b8);
  FUN_10003440(0x100229c8);
  FUN_10003440(0x10022a40);
  FUN_10003440(0x10022ab8);
  FUN_10003440(0x10022b30);
  FUN_10003440(0x10022ba8);
  FUN_10003440(0x10022c28);
  iVar4 = GetGlobalTime();
  if (DAT_1002275c < iVar4) {
    iVar4 = GetGlobalTime();
    DAT_1002275c = iVar4 + 500;
    RemoveGroup(&DAT_10022874,&DAT_10022764);
    RemoveGroup(&DAT_100228ec,&DAT_1002277c);
    RemoveGroup(&DAT_10022964,&DAT_10022794);
    RemoveGroup(&DAT_10013074,&DAT_1002281c);
    RemoveGroup(&DAT_100130ec,&DAT_10022834);
    RemoveGroup(&DAT_10013164,&DAT_1002284c);
    RemoveGroup(&DAT_100229dc,&DAT_100227bc);
    RemoveGroup(&DAT_10022a54,&DAT_100227d4);
    RemoveGroup(&DAT_10022acc,&DAT_100227f4);
  }
  iVar4 = GetGlobalTime();
  if (DAT_10023c3c < iVar4) {
    iVar4 = GetGlobalTime();
    DAT_10023c3c = iVar4 + 200;
    FUN_10003600((int *)&DAT_10022860,_DAT_10012c00,0x10022760,3000);
    FUN_10003600((int *)&DAT_100228d8,_DAT_10012c00,0x10022778,3000);
    FUN_10003600((int *)&DAT_10022950,_DAT_10012c00,0x10022790,3000);
    FUN_10003600((int *)&DAT_10013060,_DAT_10012c00,0x10022818,0x5dc);
    FUN_10003600((int *)&DAT_100130d8,_DAT_10012c00,0x10022830,0x5dc);
    FUN_10003600((int *)&DAT_10013150,_DAT_10012c00,0x10022848,0x5dc);
    FUN_10003600((int *)&DAT_100229c8,_DAT_10012c00,0x100227b8,0x5dc);
    FUN_10003600((int *)&DAT_10022a40,_DAT_10012c00,0x100227d0,0x5dc);
    FUN_10003600((int *)&DAT_10022ab8,_DAT_10012c00,0x100227f0,0x5dc);
    FUN_10003530(&DAT_10023ca0,_DAT_10012c00,0x100131dc,DAT_100131c8,&DAT_100131d4);
    FUN_10003530(&DAT_10023ca0,_DAT_10012c00,0x10013254,DAT_10013240,&DAT_1001324c);
    FUN_10003530(&DAT_10023ca0,_DAT_10012c00,0x100132cc,DAT_100132b8,&DAT_100132c4);
    FUN_10003530(&DAT_10023ca0,_DAT_10012c00,0x10022b44,DAT_10022b30,&DAT_10022b3c);
    FUN_10003530(&DAT_10023ca0,_DAT_10012c00,0x10022bbc,DAT_10022ba8,&DAT_10022bb4);
    FUN_10003530(&DAT_10023ca0,_DAT_10012c00,0x10022c3c,DAT_10022c28,&DAT_10022c34);
    FUN_10003800(&DAT_10022ca8,&LAB_10003010);
  }
  bVar3 = FUN_10003420(0x10012fe8);
  if (bVar3) {
    iVar4 = GetGlobalTime();
    if (((DAT_10022ca4 < iVar4) && (iVar4 = FUN_100036e0(0x10022ca8), iVar4 < 4)) &&
       (iVar4 = GetUnitsAmount0(&DAT_10023a8e,DAT_10023c68 & 0xff), iVar4 == 0)) {
      iVar4 = GetGlobalTime();
      DAT_10022ca4 = iVar4 + 4000;
      iVar4 = _rand();
      CreateObject0(&DAT_10023c48,&DAT_10012d10,&DAT_10022c20,DAT_10023c68 & 0xff,&DAT_10023a8e,
                    iVar4);
      SelectUnits(&DAT_10023c48,0);
      FUN_10003730(&DAT_10022ca8,DAT_10023c68,0,0,0x10012ffc);
      AddResource(DAT_10012c09,1,0xfffffe0c);
      AddResource(DAT_10012c12,1,0xfffffe0c);
    }
    FUN_10003440(0x10012fe8);
  }
  cVar2 = NationIsErased(DAT_10012c09);
  if ((cVar2 != '\0') && (cVar2 = NationIsErased(DAT_10012c12), cVar2 != '\0')) {
    ShowPage(s__victory_1000f51c);
    ShowVictory();
  }
  cVar2 = NationIsErased(_DAT_10012c00 & 0xff);
  if (cVar2 != '\0') {
    ShowPage(s__defeat_1000f514);
    LooseGame();
  }
  return;
}



// Function: FUN_10002ea0 @ 0x10002ea0

void FUN_10002ea0(void)

{
  FUN_1000a684();
  return;
}



// Function: FUN_10002eb0 @ 0x10002eb0

void FUN_10002eb0(void)

{
  FUN_10003c06(&LAB_10002ec0);
  return;
}



// Function: FUN_10002f00 @ 0x10002f00

undefined4 __fastcall FUN_10002f00(undefined4 param_1)

{
  RegisterFormation(param_1,s__ALONE_1000f558);
  return param_1;
}



// Function: FUN_10002f20 @ 0x10002f20

undefined4 * __thiscall FUN_10002f20(void *this,undefined4 param_1,int param_2)

{
  RegisterVar(this,5);
  *(undefined4 *)this = param_1;
  *(char *)((int)this + 4) = '\x01' << ((byte)param_1 & 0x1f);
  if (param_2 != 0) {
    SetPlayerName(param_1,param_2);
  }
  return this;
}



// Function: FUN_10002f60 @ 0x10002f60

void __thiscall FUN_10002f60(void *this,undefined4 param_1)

{
  SetResource(*(undefined1 *)this,3,param_1);
  SetResource(*(undefined1 *)this,0,param_1);
  SetResource(*(undefined1 *)this,2,param_1);
  SetResource(*(undefined1 *)this,1,param_1);
  SetResource(*(undefined1 *)this,4,param_1);
  SetResource(*(undefined1 *)this,5,param_1);
  return;
}



// Function: FUN_10002fb0 @ 0x10002fb0

void __thiscall FUN_10002fb0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  bVar2 = *(byte *)((int)this + 4) | '\x01' << ((byte)uVar1 & 0x1f);
  *(byte *)((int)this + 4) = bVar2;
  ChangeFriends(*(undefined1 *)this,CONCAT31((int3)((uint)uVar1 >> 8),bVar2));
  return;
}



// Function: FUN_10002fe0 @ 0x10002fe0

void __fastcall FUN_10002fe0(int param_1)

{
  *(undefined4 *)(param_1 + 800) = 0;
  return;
}



// Function: FUN_10002ff0 @ 0x10002ff0

undefined4 FUN_10002ff0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: FUN_10003130 @ 0x10003130

void FUN_10003130(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    uVar2 = _rand();
    if (200 < (uVar2 & 0xff)) {
      CreateObject0(&DAT_100279a8,&DAT_10012d10,&DAT_10012fd0,DAT_10012cfa,&DAT_10012ce0,0xff);
      SelectUnits(&DAT_100279a8,0);
      uVar4 = 0;
      iVar3 = _rand();
      SelSendTo(DAT_10012cfa,&DAT_10023c28,iVar3,uVar4);
      RemoveGroup(&DAT_100279a8,&DAT_100227e8);
      RunTimer(2,15000);
    }
  }
  return;
}



// Function: FUN_10003200 @ 0x10003200

undefined4 * __fastcall FUN_10003200(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  RegisterDynGroup(param_1 + 3);
  puVar2 = param_1 + 7;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



// Function: FUN_10003230 @ 0x10003230

undefined4 * __fastcall FUN_10003230(undefined4 *param_1)

{
  FUN_10003200(param_1);
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1;
}



// Function: FUN_10003240 @ 0x10003240

undefined4 * __fastcall FUN_10003240(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10003230(param_1);
  FUN_10003200((undefined4 *)((int)param_1 + 0x3d));
  FUN_100032e0((int)param_1 + 0xa9);
  puVar2 = (undefined4 *)((int)param_1 + 0x3e5);
  iVar1 = 100;
  do {
    FUN_10003200(puVar2);
    puVar2 = puVar2 + 0xd;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)((int)param_1 + 0x185a) = 5;
  *(undefined4 *)((int)param_1 + 0x1835) = 0;
  *(undefined1 *)((int)param_1 + 0x184d) = 0;
  *(undefined4 *)((int)param_1 + 0x184e) = 0;
  *(undefined4 *)((int)param_1 + 0x1852) = 0;
  *(undefined4 *)((int)param_1 + 0x1856) = 0;
  *(undefined4 *)((int)param_1 + 0x185e) = 10;
  RegisterDynGroup((int)param_1 + 0x1862);
  return param_1;
}



// Function: FUN_100032c0 @ 0x100032c0

undefined4 * __fastcall FUN_100032c0(undefined4 *param_1)

{
  FUN_10003230(param_1);
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1;
}



// Function: FUN_100032e0 @ 0x100032e0

int __fastcall FUN_100032e0(int param_1)

{
  FUN_10002fe0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x334) = 0;
  return param_1;
}



// Function: FUN_10003300 @ 0x10003300

void __thiscall
FUN_10003300(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  RegisterVar(this,0x74);
  *(undefined4 *)this = param_1;
  RegisterUnits((int)this + 4,param_2);
  if (param_3 != 0) {
    RegisterZone((int)this + 0xc,param_3);
    SetDestPoint((int)this + 4,(int)this + 0xc);
  }
  RegisterDynGroup((int)this + 0x14);
  RegisterDynGroup((int)this + 0x1c);
  RegisterDynGroup((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x3c;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x78;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = 1;
  *(undefined4 *)((int)this + 0x58) = 10;
  *(undefined4 *)((int)this + 0x5c) = 1;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x24) = param_4;
  return;
}



// Function: FUN_100033b0 @ 0x100033b0

void __thiscall FUN_100033b0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x50) = param_1;
  return;
}



// Function: FUN_100033c0 @ 0x100033c0

void __thiscall FUN_100033c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RegisterUnitType((int)this + 0x28,param_1);
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x34) = param_3;
  return;
}



// Function: FUN_100033f0 @ 0x100033f0

void __thiscall FUN_100033f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RegisterUnitType((int)this + 0x3c,param_1);
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = param_3;
  return;
}



// Function: FUN_10003420 @ 0x10003420

bool __fastcall FUN_10003420(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 4);
  return iVar1 != 0;
}



// Function: FUN_10003440 @ 0x10003440

undefined4 __fastcall FUN_10003440(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = GetTotalAmount0(param_1 + 0x1c);
  iVar7 = param_1 + 0x14;
  iVar4 = GetTotalAmount0(iVar7);
  if (*(int *)(param_1 + 0x24) < iVar4 + iVar3) {
    return 0xffffffff;
  }
  bVar1 = FUN_10003420(param_1);
  if (bVar1) {
    iVar3 = param_1 + 4;
    cVar2 = CheckProduction(iVar3);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x50)) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0;
        iVar7 = param_1 + 0x1c;
      }
      iVar4 = GetGlobalTime();
      if (*(int *)(param_1 + 0x60) < iVar4) {
        uVar5 = GetGlobalTime();
        *(undefined4 *)(param_1 + 0x60) = uVar5;
        uVar6 = _rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x34)) {
          ProduceUnitFast(iVar3,param_1 + 0x28,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x30);
        }
        uVar6 = _rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x48)) {
          ProduceUnitFast(iVar3,param_1 + 0x3c,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x44);
        }
      }
    }
  }
  return 0;
}



// Function: FUN_10003530 @ 0x10003530

void __cdecl FUN_10003530(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (*(int *)(param_3 + 4) == 0x554e4954) {
    if (DAT_100227b4 != 0x554e4954) {
      RegisterDynGroup(&DAT_100227b0);
    }
    FUN_100014c0(param_2);
    SelectUnitsInZone(param_1,param_2,0);
    SaveSelectedUnits(param_2,&DAT_100227b0,0);
    FUN_10001540(param_2);
    FUN_100014c0(param_4);
    iVar1 = GetTotalAmount0(&DAT_100227b0);
    if (iVar1 != 0) {
      SelectUnits(param_3,0);
      SelAttackGroup(param_4,&DAT_100227b0);
      FUN_10001540(param_4);
      return;
    }
    iVar1 = GetUnitsAmount1(param_5,param_3);
    if (iVar1 == 0) {
      FUN_10001180(param_4,param_3,param_5,0);
    }
    FUN_10001540(param_4);
  }
  return;
}



// Function: FUN_10003600 @ 0x10003600

void __cdecl FUN_10003600(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 local_8 [8];
  
  UnitsCenter(local_8,param_1 + 1,param_4);
  FUN_10003530(local_8,param_2,param_3 + 4,*param_1,param_1 + 3);
  return;
}



// Function: FUN_10003650 @ 0x10003650

void __thiscall
FUN_10003650(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  RegisterZone(this,param_1);
  RegisterZone((int)this + 8,param_2);
  RegisterZone((int)this + 0x10,param_3);
  RegisterZone((int)this + 0x18,param_4);
  return;
}



// Function: FUN_10003690 @ 0x10003690

undefined4 * __fastcall FUN_10003690(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x32;
  puVar2 = param_1;
  do {
    FUN_10003230(puVar2);
    puVar2 = (undefined4 *)((int)puVar2 + 0x47);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  RegisterVar(param_1,0xf29);
  *(undefined2 *)((int)param_1 + 0xf1e) = 0;
  param_1[0x3c8] = 0;
  param_1[0x3c9] = 6;
  return param_1;
}



// Function: FUN_100036e0 @ 0x100036e0

int __fastcall FUN_100036e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (*(short *)(param_1 + 0xf1e) != 0) {
    iVar2 = param_1 + 0xc;
    do {
      iVar1 = GetTotalAmount0(iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x47;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0xf1e));
    return iVar3;
  }
  return 0;
}



// Function: FUN_10003730 @ 0x10003730

uint __thiscall FUN_10003730(void *this,uint param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint in_EAX;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_2c [44];
  
  uVar2 = *(ushort *)((int)this + 0xf1e);
  if (0x31 < uVar2) {
    return in_EAX & 0xffffff00;
  }
  *(ushort *)((int)this + 0xf1e) = uVar2 + 1;
  *(int *)((int)this + (uint)uVar2 * 0x47 + 0x35) = param_2;
  if (param_2 == 3) {
    uVar5 = *(uint *)((int)this + 0xf20);
    if (param_1 == uVar5) goto LAB_10003798;
  }
  else {
    if (param_1 == *(uint *)((int)this + 0xf24)) goto LAB_10003798;
    uVar5 = *(uint *)((int)this + 0xf24) & 0xff;
  }
  SelChangeNation(param_1,uVar5);
LAB_10003798:
  iVar1 = (int)this + (uint)uVar2 * 0x47 + 0xc;
  SaveSelectedUnits(param_1,iVar1,0);
  iVar3 = *(int *)((int)this + (uint)uVar2 * 0x47 + 0x43);
  *(undefined4 *)((int)this + (uint)uVar2 * 0x47 + 0x3b) = 0;
  if (iVar3 != 0x554e4954) {
    RegisterDynGroup((int)this + (uint)uVar2 * 0x47 + 0x3f);
  }
  if (param_4 != 0) {
    RemoveGroup(param_4,(int)this + (uint)uVar2 * 0x47 + 0x3f);
  }
  uVar4 = GetUnitInfo(iVar1,0,auStack_2c);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}



// Function: FUN_10003800 @ 0x10003800

void __thiscall FUN_10003800(void *this,undefined *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [20];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_2c [20];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_74 = 0;
  if (*(short *)((int)this + 0xf1e) != 0) {
    iVar5 = (int)this + 0xc;
    do {
      iVar3 = GetTotalAmount0(iVar5);
      if (iVar3 != 0) {
        FUN_100014c0(*(int *)((int)this + 0xf20));
        FUN_100014c0(*(int *)((int)this + 0xf24));
        UnitsCenter(auStack_60,iVar5,0x5dc);
        UnitsCenter(auStack_68,iVar5,200);
        switch(*(undefined4 *)(iVar5 + 0x29)) {
        case 0:
          iVar3 = (uint)*(byte *)(iVar5 + 0x2d) * 0x20 + 0xdee + (int)this;
          iVar4 = GetUnitsAmount1(iVar3,iVar5);
          if (iVar4 == 0) {
            FUN_10001180(CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)((int)this + 0xf24)
                                 ),iVar5,iVar3,0);
          }
          else {
            *(undefined4 *)(iVar5 + 0x29) = 1;
            iVar3 = GetGlobalTime();
            *(int *)(iVar5 + 0x2f) = iVar3 + 1000;
            GetUnitInfo(iVar5,0,auStack_58);
            uStack_44 = 0x3c00;
            uStack_40 = 0;
            SetUnitInfo(auStack_58);
          }
          FUN_10003530(auStack_60,0,iVar5 + 0x33,5,auStack_68);
          break;
        case 1:
          bVar1 = *(byte *)(iVar5 + 0x2d);
          iVar3 = GetGlobalTime();
          if (*(int *)(iVar5 + 0x2f) < iVar3) {
            *(undefined4 *)(iVar5 + 0x29) = 2;
            GetZoneCoor((uint)bVar1 * 0x20 + 0xdf6 + (int)this,&uStack_70,&uStack_6c);
            GetUnitInfo(iVar5,0,auStack_2c);
            uStack_18 = uStack_70;
            uStack_14 = uStack_6c;
            SetUnitInfo(auStack_2c);
          }
          break;
        case 2:
          iVar3 = (uint)*(byte *)(iVar5 + 0x2d) * 0x20 + 0xde6 + (int)this;
          iVar4 = GetUnitsAmount1(iVar3,iVar5);
          if (iVar4 == 0) {
            FUN_10001180((uint)*(byte *)((int)this + 0xf24),iVar5,iVar3,0);
          }
          else {
            *(undefined4 *)(iVar5 + 0x29) = 3;
            iVar3 = GetGlobalTime();
            *(int *)(iVar5 + 0x2f) = iVar3 + 400;
            SelectUnits(iVar5,0);
            SelChangeNation(*(undefined1 *)((int)this + 0xf24),*(undefined1 *)((int)this + 0xf20));
          }
          FUN_10003530(auStack_60,0,iVar5 + 0x33,5,auStack_68);
          break;
        case 3:
          iVar3 = GetGlobalTime();
          if (*(int *)(iVar5 + 0x2f) < iVar3) {
            *(undefined1 *)((int)this + 0xf28) = (undefined1)local_74;
            cVar2 = (*(code *)param_1)();
            if (cVar2 == '\0') {
              iVar3 = GetGlobalTime();
              *(int *)(iVar5 + 0x2f) = iVar3 + 400;
            }
            else {
              *(undefined4 *)(iVar5 + 0x29) = 0;
              SelectUnits(iVar5,0);
              SelChangeNation(*(undefined1 *)((int)this + 0xf20),*(undefined1 *)((int)this + 0xf24))
              ;
            }
          }
        }
        FUN_10001540(*(int *)((int)this + 0xf20));
        FUN_10001540(*(int *)((int)this + 0xf24));
      }
      local_74 = local_74 + 1;
      iVar5 = iVar5 + 0x47;
    } while (local_74 < (int)(uint)*(ushort *)((int)this + 0xf1e));
  }
  return;
}



// Function: FUN_10003aa0 @ 0x10003aa0

void __thiscall FUN_10003aa0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xf20) = param_1;
  *(undefined4 *)((int)this + 0xf24) = param_2;
  return;
}



// Function: FUN_10003ac0 @ 0x10003ac0

int __fastcall FUN_10003ac0(int param_1)

{
  return (uint)*(byte *)(param_1 + 0xf28) * 0x47 + param_1;
}



// Function: FUN_10003ae0 @ 0x10003ae0

void __cdecl FUN_10003ae0(undefined *param_1)

{
  FUN_10003e12(param_1);
  return;
}



// Function: FUN_10003aeb @ 0x10003aeb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003aeb(void)

{
  void *extraout_ECX;
  
  FUN_10003b03();
  _DAT_100279b8 = FUN_10003f4b();
  FUN_10003efb(extraout_ECX);
  return;
}



// Function: FUN_10003b03 @ 0x10003b03

void FUN_10003b03(void)

{
  PTR_LAB_1000f57c = &LAB_10003fce;
  PTR_LAB_1000f578 = __cfltcvt;
  PTR_LAB_1000f580 = __fassign;
  PTR_LAB_1000f584 = FUN_10003f74;
  PTR_LAB_1000f588 = &LAB_1000401c;
  PTR_LAB_1000f58c = __cfltcvt;
  return;
}



// Function: __ftol @ 0x10003b3c

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Function: FUN_10003b63 @ 0x10003b63

int __cdecl FUN_10003b63(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// Function: FUN_10003b88 @ 0x10003b88

undefined4 __cdecl FUN_10003b88(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_1000448c();
  pbVar1 = (byte *)FUN_100047e7(DAT_10029110);
  if (pbVar1 < DAT_1002910c + (4 - (int)DAT_10029110)) {
    SVar2 = FUN_100047e7(DAT_10029110);
    pbVar1 = FUN_100044b8(DAT_10029110,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10003bfd;
    }
    DAT_1002910c = pbVar1 + ((int)DAT_1002910c - (int)DAT_10029110 >> 2) * 4;
    DAT_10029110 = pbVar1;
  }
  *(undefined4 *)DAT_1002910c = param_1;
  DAT_1002910c = DAT_1002910c + 4;
LAB_10003bfd:
  FUN_10004495();
  return param_1;
}



// Function: FUN_10003c06 @ 0x10003c06

int __cdecl FUN_10003c06(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_10003b88(param_1);
  return (iVar1 != 0) - 1;
}



// Function: _rand @ 0x10003c47

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_10004a94();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



// Function: FUN_10003c69 @ 0x10003c69

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10003c69(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100279d4 = GetVersion();
    iVar1 = FUN_10005358(1);
    if (iVar1 != 0) {
      _DAT_100279e0 = DAT_100279d4 >> 8 & 0xff;
      _DAT_100279dc = DAT_100279d4 & 0xff;
      DAT_100279d4 = DAT_100279d4 >> 0x10;
      _DAT_100279d8 = _DAT_100279dc * 0x100 + _DAT_100279e0;
      iVar1 = FUN_10004a0f();
      if (iVar1 != 0) {
        DAT_10029114 = GetCommandLineA();
        DAT_100279c0 = FUN_100050b1();
        FUN_10004b9b();
        FUN_10004e64();
        FUN_10004dab();
        FUN_1000439a();
        DAT_100279bc = DAT_100279bc + 1;
        goto LAB_10003d3c;
      }
      FUN_100053b5();
    }
LAB_10003cc9:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100279bc < 1) goto LAB_10003cc9;
      DAT_100279bc = DAT_100279bc + -1;
      if (DAT_10027a0c == 0) {
        FUN_100043d8();
      }
      FUN_10004d57();
      FUN_10004a63();
      FUN_100053b5();
    }
    else if (param_2 == 3) {
      FUN_10004afb((undefined *)0x0);
    }
LAB_10003d3c:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10003d42

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100279bc;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10003d8a;
    if ((DAT_10029118 != (code *)0x0) &&
       (iVar2 = (*DAT_10029118)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10003c69(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10003d8a:
  iVar2 = FUN_10002ff0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10003c69(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10003c69(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10029118 != (code *)0x0) {
      iVar2 = (*DAT_10029118)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10003ddf

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100279c8 == 1) || ((DAT_100279c8 == 0 && (DAT_100279cc == 1)))) {
    FUN_1000545d();
  }
  FUN_10005496(param_1);
  (*(code *)PTR___exit_1000f574)(0xff);
  return;
}



// Function: FUN_10003e12 @ 0x10003e12

void __cdecl FUN_10003e12(undefined *param_1)

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
  puStack_c = &DAT_1000d1f0;
  puStack_10 = &LAB_10006a00;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10028fe4 == 3) {
    ExceptionList = &local_14;
    FUN_10006892(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10005631((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_1000565c(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10003e7c();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10028fe4 != 2) goto LAB_10003ede;
    ExceptionList = &local_14;
    FUN_10006892(9);
    local_8 = 1;
    local_28 = (uint *)FUN_1000638c(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_100063e3(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10003ed4();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10003ede:
  HeapFree(DAT_10028fe0,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10003e7c @ 0x10003e7c

void FUN_10003e7c(void)

{
  FUN_100068f3(9);
  return;
}



// Function: FUN_10003ed4 @ 0x10003ed4

void FUN_10003ed4(void)

{
  FUN_100068f3(9);
  return;
}



// Function: FUN_10003efb @ 0x10003efb

void __fastcall FUN_10003efb(void *param_1)

{
  FUN_10006b0d(param_1,0x10000,0x30000);
  return;
}



// Function: FUN_10003f0d @ 0x10003f0d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10003f0d(void)

{
  if (_DAT_1000d208 < _DAT_1000d210 - (_DAT_1000d210 / _DAT_1000d218) * _DAT_1000d218) {
    return 1;
  }
  return 0;
}



// Function: FUN_10003f4b @ 0x10003f4b

void FUN_10003f4b(void)

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
  FUN_10003f0d();
  return;
}



// Function: FUN_10003f74 @ 0x10003f74

void __cdecl FUN_10003f74(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_10006cb3((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10011750 < 2) {
        uVar3 = (byte)PTR_DAT_1001175c[*param_1 * 2] & 4;
        this = PTR_DAT_1001175c;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_10006c3e(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10011754;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __fassign @ 0x10004034

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
    FUN_1000717f(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_100071ac(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// Function: FUN_10004072 @ 0x10004072

undefined1 * __cdecl FUN_10004072(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10007250((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_100071d9(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_100040d3(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// Function: FUN_100040d3 @ 0x100040d3

undefined1 * __cdecl
FUN_100040d3(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_10004375(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_10011754;
  }
  puVar3 = FUN_10007370((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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



// Function: FUN_10004195 @ 0x10004195

char * __cdecl FUN_10004195(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10007250((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_100071d9(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_100041ea(param_2,param_3,&local_14,'\0');
  return param_2;
}



// Function: FUN_100041ea @ 0x100041ea

char * __cdecl FUN_100041ea(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_10004375(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_10004375(pcVar3,1);
    *pcVar3 = DAT_10011754;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_10004375(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_10004291 @ 0x10004291

void __cdecl FUN_10004291(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10007250((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_100071d9(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_100040d3(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_100041ea(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x10004324

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_10004072(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10004195(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_10004291(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// Function: FUN_10004375 @ 0x10004375

void __cdecl FUN_10004375(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_100074c0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_1000439a @ 0x1000439a

void FUN_1000439a(void)

{
  if (PTR_FUN_1000f568 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1000f568)();
  }
  FUN_1000449e((undefined4 *)&DAT_1000f070,(undefined4 *)&DAT_1000f084);
  FUN_1000449e((undefined4 *)&DAT_1000f000,(undefined4 *)&DAT_1000f06c);
  return;
}



// Function: __exit @ 0x100043c7

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_100043e7(_Code,1,0);
  return;
}



// Function: FUN_100043d8 @ 0x100043d8

void FUN_100043d8(void)

{
  FUN_100043e7(0,0,1);
  return;
}



// Function: FUN_100043e7 @ 0x100043e7

void __cdecl FUN_100043e7(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1000448c();
  if (DAT_10027a10 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10027a0c = 1;
  DAT_10027a08 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10029110 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1002910c - 4), DAT_10029110 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10029110 <= puVar1);
    }
    FUN_1000449e((undefined4 *)&DAT_1000f088,(undefined4 *)&DAT_1000f090);
  }
  FUN_1000449e((undefined4 *)&DAT_1000f094,(undefined4 *)&DAT_1000f09c);
  if (param_3 == 0) {
    DAT_10027a10 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10004495();
  return;
}



// Function: FUN_1000448c @ 0x1000448c

void FUN_1000448c(void)

{
  FUN_10006892(0xd);
  return;
}



// Function: FUN_10004495 @ 0x10004495

void FUN_10004495(void)

{
  FUN_100068f3(0xd);
  return;
}



// Function: FUN_1000449e @ 0x1000449e

void __cdecl FUN_1000449e(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_100044b8 @ 0x100044b8

byte * __cdecl FUN_100044b8(byte *param_1,uint *param_2)

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
  puStack_c = &DAT_1000d258;
  puStack_10 = &LAB_10006a00;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_10003e12(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_10028fe4 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10006892(9);
            local_8 = 0;
            local_2c = (uint *)FUN_10005631((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_10028fdc) {
                iVar1 = FUN_10005e3a(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_10005985(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_100078a0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_10005631((int)param_1);
                    FUN_1000565c(local_2c,(int)param_1);
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
                local_28 = HeapAlloc(DAT_10028fe0,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_100078a0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_1000565c(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_10004643();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_10028fe0,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_10027b8c == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_10007884(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_10028fe4 == 2) {
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
              FUN_10006892(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_1000638c(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_10028fe0,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_1001167c) {
                  iVar1 = FUN_10006754(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_10006428((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_100078a0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_100063e3(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_10028fe0,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_100078a0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_100063e3(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_10004791();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_10027b8c == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_10007884(param_2);
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
              pbVar3 = HeapReAlloc(DAT_10028fe0,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_10027b8c == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_10007884(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



// Function: FUN_10004643 @ 0x10004643

void FUN_10004643(void)

{
  FUN_100068f3(9);
  return;
}



// Function: FUN_10004791 @ 0x10004791

void FUN_10004791(void)

{
  FUN_100068f3(9);
  return;
}



// Function: FUN_100047e7 @ 0x100047e7

SIZE_T __cdecl FUN_100047e7(undefined *param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined4 local_30;
  byte *local_2c;
  uint local_28;
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000d270;
  puStack_10 = &LAB_10006a00;
  local_14 = ExceptionList;
  if (DAT_10028fe4 == 3) {
    ExceptionList = &local_14;
    FUN_10006892(9);
    local_8 = 0;
    local_20 = (byte *)FUN_10005631((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10004851();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10028fe4 != 2) goto LAB_100048a5;
    ExceptionList = &local_14;
    FUN_10006892(9);
    local_8 = 1;
    local_2c = (byte *)FUN_1000638c(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_100048cc();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_100048a5:
  SVar2 = HeapSize(DAT_10028fe0,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}



// Function: FUN_10004851 @ 0x10004851

void FUN_10004851(void)

{
  FUN_100068f3(9);
  return;
}



// Function: FUN_100048cc @ 0x100048cc

void FUN_100048cc(void)

{
  FUN_100068f3(9);
  return;
}



// Function: _malloc @ 0x100048d5

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10027b8c);
  return pvVar1;
}



// Function: __nh_malloc @ 0x100048e7

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10004913((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10007884(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10004913 @ 0x10004913

void __cdecl FUN_10004913(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000d288;
  puStack_10 = &LAB_10006a00;
  local_14 = ExceptionList;
  if (DAT_10028fe4 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10028fdc) {
      ExceptionList = &local_14;
      FUN_10006892(9);
      local_8 = 0;
      piVar1 = FUN_10005985(param_1);
      local_8 = 0xffffffff;
      FUN_1000497a();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10028fe4 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1001167c) {
        ExceptionList = &local_14;
        FUN_10006892(9);
        local_8 = 1;
        piVar1 = FUN_10006428(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_100049d9();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_100049f2;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_100049f2:
  HeapAlloc(DAT_10028fe0,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000497a @ 0x1000497a

void FUN_1000497a(void)

{
  FUN_100068f3(9);
  return;
}



// Function: FUN_100049d9 @ 0x100049d9

void FUN_100049d9(void)

{
  FUN_100068f3(9);
  return;
}



// Function: FUN_10004a0f @ 0x10004a0f

undefined4 FUN_10004a0f(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100067fd();
  DAT_1000f590 = TlsAlloc();
  if (DAT_1000f590 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10007bd5(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000f590,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10004a81((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10004a63 @ 0x10004a63

void FUN_10004a63(void)

{
  FUN_10006826();
  if (DAT_1000f590 != 0xffffffff) {
    TlsFree(DAT_1000f590);
    DAT_1000f590 = 0xffffffff;
  }
  return;
}



// Function: FUN_10004a81 @ 0x10004a81

void __cdecl FUN_10004a81(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100119a0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10004a94 @ 0x10004a94

DWORD * FUN_10004a94(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000f590);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10007bd5(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000f590,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10004a81((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10004aef;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10004aef:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_10004afb @ 0x10004afb

void __cdecl FUN_10004afb(undefined *param_1)

{
  if (DAT_1000f590 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1000f590), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10003e12(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10003e12(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10003e12(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10003e12(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10003e12(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10003e12(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_100119a0) {
        FUN_10003e12(*(undefined **)(param_1 + 0x50));
      }
      FUN_10003e12(param_1);
    }
    TlsSetValue(DAT_1000f590,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10004b9b @ 0x10004b9b

void FUN_10004b9b(void)

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
  DAT_10029100 = 0x20;
  DAT_10029000 = puVar2;
  for (; puVar2 < DAT_10029000 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10029100 < (int)UVar8) {
      puVar2 = &DAT_10029004;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10029100;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10029100 = DAT_10029100 + 0x20;
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
      } while ((int)DAT_10029100 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10029000)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10029000 + iVar6 * 9;
    if (DAT_10029000[iVar6 * 9] == -1) {
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
          goto LAB_10004d40;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10004d40:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10029100);
      return;
    }
  } while( true );
}



// Function: FUN_10004d57 @ 0x10004d57

void FUN_10004d57(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10029000;
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
      FUN_10003e12((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10029100);
  return;
}



// Function: FUN_10004dab @ 0x10004dab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004dab(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10029108 == 0) {
    FUN_100085fd();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100279c0; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_100279f0 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100279c0;
  puVar6 = DAT_100279c0;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10007370((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10003e12((undefined *)DAT_100279c0);
  DAT_100279c0 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10029104 = 1;
  return;
}



// Function: FUN_10004e64 @ 0x10004e64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004e64(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10029108 == 0) {
    FUN_100085fd();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10027a14,0x104);
  _DAT_10027a00 = &DAT_10027a14;
  pbVar2 = &DAT_10027a14;
  if (*DAT_10029114 != 0) {
    pbVar2 = DAT_10029114;
  }
  FUN_10004efd(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10004efd(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_100279e8 = puVar1;
  _DAT_100279e4 = local_8 + -1;
  return;
}



// Function: FUN_10004efd @ 0x10004efd

void __cdecl FUN_10004efd(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10027ea0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10027ea0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10004fa8;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10004fa8:
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
          if ((*(byte *)((int)&DAT_10027ea0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10027ea0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_100050b1 @ 0x100050b1

LPSTR FUN_100050b1(void)

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
  if (DAT_10027b18 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10027b18 = 1;
LAB_10005108:
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
        FUN_10003e12(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10027b18 = 2;
  }
  else {
    if (DAT_10027b18 == 1) goto LAB_10005108;
    if (DAT_10027b18 != 2) {
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
    FUN_100078a0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_100051e3 @ 0x100051e3

void __cdecl FUN_100051e3(undefined4 *param_1)

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



// Function: FUN_10005210 @ 0x10005210

int FUN_10005210(void)

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
  
  FUN_100089d0();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = 'j';
    aCStackY_18[1] = 'R';
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
      aCStackY_18[0] = -0x58;
      aCStackY_18[1] = 'R';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -0x36;
        aCStackY_18[1] = 'R';
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
        aCStackY_18[0] = '0';
        aCStackY_18[1] = 'S';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10008619(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_100051e3((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_10005358 @ 0x10005358

undefined4 __cdecl FUN_10005358(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10028fe0 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10028fe0 != (HANDLE)0x0) {
    DAT_10028fe4 = FUN_10005210();
    if (DAT_10028fe4 == 3) {
      ppuVar1 = (undefined **)FUN_100055e9(0x3f8);
    }
    else {
      if (DAT_10028fe4 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10006130();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10028fe0);
  }
  return 0;
}



// Function: FUN_100053b5 @ 0x100053b5

void FUN_100053b5(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10028fe4 == 3) {
    iVar1 = 0;
    if (0 < DAT_10028fd4) {
      puVar2 = (undefined4 *)((int)DAT_10028fd8 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10028fe0,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10028fd4);
    }
    HeapFree(DAT_10028fe0,0,DAT_10028fd8);
  }
  else if (DAT_10028fe4 == 2) {
    ppuVar3 = &PTR_LOOP_1000f658;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000f658);
  }
  HeapDestroy(DAT_10028fe0);
  return;
}



// Function: FUN_1000545d @ 0x1000545d

void FUN_1000545d(void)

{
  if ((DAT_100279c8 == 1) || ((DAT_100279c8 == 0 && (DAT_100279cc == 1)))) {
    FUN_10005496(0xfc);
    if (DAT_10027b1c != (code *)0x0) {
      (*DAT_10027b1c)();
    }
    FUN_10005496(0xff);
  }
  return;
}



// Function: FUN_10005496 @ 0x10005496

void __cdecl FUN_10005496(DWORD param_1)

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
  pDVar2 = &DAT_1000f5c8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000f658);
  if (param_1 == (&DAT_1000f5c8)[iVar5 * 2]) {
    if ((DAT_100279c8 == 1) || ((DAT_100279c8 == 0 && (DAT_100279cc == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000f5cc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10007370(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10007370(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10007380(local_a4,_Dest);
      FUN_10007380(local_a4,(uint *)&DAT_1000d5f8);
      FUN_10007380(local_a4,*(uint **)(iVar5 * 8 + 0x1000f5cc));
      auStackY_1e3._3_4_ = 0x100055ba;
      FUN_100089ff(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_100055e9 @ 0x100055e9

undefined4 __cdecl FUN_100055e9(undefined4 param_1)

{
  DAT_10028fd8 = HeapAlloc(DAT_10028fe0,0,0x140);
  if (DAT_10028fd8 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10028fd0 = 0;
  DAT_10028fd4 = 0;
  DAT_10028fcc = DAT_10028fd8;
  DAT_10028fdc = param_1;
  DAT_10028fc4 = 0x10;
  return 1;
}



// Function: FUN_10005631 @ 0x10005631

uint __cdecl FUN_10005631(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10028fd8;
  while( true ) {
    if (DAT_10028fd8 + DAT_10028fd4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_1000565c @ 0x1000565c

void __cdecl FUN_1000565c(uint *param_1,int param_2)

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
      if (DAT_10028fd0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10028fc8 * 0x8000 + DAT_10028fd0[3]),0x8000,0x4000);
        DAT_10028fd0[2] = DAT_10028fd0[2] | 0x80000000U >> ((byte)DAT_10028fc8 & 0x1f);
        *(undefined4 *)(DAT_10028fd0[4] + 0xc4 + DAT_10028fc8 * 4) = 0;
        *(char *)(DAT_10028fd0[4] + 0x43) = *(char *)(DAT_10028fd0[4] + 0x43) + -1;
        if (*(char *)(DAT_10028fd0[4] + 0x43) == '\0') {
          DAT_10028fd0[1] = DAT_10028fd0[1] & 0xfffffffe;
        }
        if (DAT_10028fd0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10028fd0[3],0,0x8000);
          HeapFree(DAT_10028fe0,0,(LPVOID)DAT_10028fd0[4]);
          FUN_100074c0(DAT_10028fd0,DAT_10028fd0 + 5,
                       (DAT_10028fd4 * 0x14 - (int)DAT_10028fd0) + -0x14 + DAT_10028fd8);
          DAT_10028fd4 = DAT_10028fd4 + -1;
          if (DAT_10028fd0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10028fcc = DAT_10028fd8;
        }
      }
      DAT_10028fd0 = param_1;
      DAT_10028fc8 = uVar14;
    }
  }
  return;
}



// Function: FUN_10005985 @ 0x10005985

int * __cdecl FUN_10005985(uint *param_1)

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
  
  puVar8 = DAT_10028fd8 + DAT_10028fd4 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10028fcc;
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
  puVar11 = DAT_10028fd8;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10028fcc && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10028fcc) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10028fd8;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10028fcc && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10028fcc) && (param_1 = FUN_10005c8e(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10005d3f((int)param_1);
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
  DAT_10028fcc = param_1;
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
    if (iVar9 == 0) goto LAB_10005c4b;
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
LAB_10005c4b:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10028fd0)) && (local_8 == DAT_10028fc8)) {
    DAT_10028fd0 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10005c8e @ 0x10005c8e

undefined4 * FUN_10005c8e(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10028fd4 == DAT_10028fc4) {
    pvVar2 = HeapReAlloc(DAT_10028fe0,0,DAT_10028fd8,(DAT_10028fc4 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10028fc4 = DAT_10028fc4 + 0x10;
    DAT_10028fd8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10028fd8 + DAT_10028fd4 * 0x14);
  pvVar2 = HeapAlloc(DAT_10028fe0,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10028fd4 = DAT_10028fd4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10028fe0,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10005d3f @ 0x10005d3f

int __cdecl FUN_10005d3f(int param_1)

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



// Function: FUN_10005e3a @ 0x10005e3a

undefined4 __cdecl FUN_10005e3a(uint *param_1,int param_2,int param_3)

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



// Function: FUN_10006130 @ 0x10006130

undefined ** FUN_10006130(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000f668 == -1) {
    lpMem = &PTR_LOOP_1000f658;
  }
  else {
    lpMem = HeapAlloc(DAT_10028fe0,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000f658) {
        if (PTR_LOOP_1000f658 == (undefined *)0x0) {
          PTR_LOOP_1000f658 = (undefined *)&PTR_LOOP_1000f658;
        }
        if (PTR_LOOP_1000f65c == (undefined *)0x0) {
          PTR_LOOP_1000f65c = (undefined *)&PTR_LOOP_1000f658;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000f658;
        lpMem[1] = PTR_LOOP_1000f65c;
        PTR_LOOP_1000f65c = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1000f658) {
    HeapFree(DAT_10028fe0,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_10006274 @ 0x10006274

void __cdecl FUN_10006274(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10011678 == param_1) {
    PTR_LOOP_10011678 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000f658) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10028fe0,0,param_1);
    return;
  }
  DAT_1000f668 = 0xffffffff;
  return;
}



// Function: FUN_100062ca @ 0x100062ca

void __cdecl FUN_100062ca(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000f65c;
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
            DAT_10027b20 = DAT_10027b20 + -1;
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
          FUN_10006274(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000f65c) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_1000638c @ 0x1000638c

int __cdecl FUN_1000638c(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000f658;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000f658) {
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



// Function: FUN_100063e3 @ 0x100063e3

void __cdecl FUN_100063e3(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10027b20 = DAT_10027b20 + 1, DAT_10027b20 == 0x20)) {
    FUN_100062ca(0x10);
  }
  return;
}



// Function: FUN_10006428 @ 0x10006428

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10006428(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_10011678;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10006630(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_100064f3;
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
          piVar5 = (int *)FUN_10006630(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_100064f3:
            PTR_LOOP_10011678 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_10011678) {
      ppuVar9 = &PTR_LOOP_1000f658;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000f658) {
          ppuVar9 = FUN_10006130();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10011678 = (undefined *)ppuVar9;
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
      PTR_LOOP_10011678 = (undefined *)ppuVar9;
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



// Function: FUN_10006630 @ 0x10006630

int __cdecl FUN_10006630(int *param_1,uint param_2,uint param_3)

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
          goto LAB_10006743;
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
LAB_10006743:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_10006754 @ 0x10006754

undefined4 __cdecl FUN_10006754(int param_1,int *param_2,byte *param_3,uint param_4)

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



// Function: FUN_100067fd @ 0x100067fd

void FUN_100067fd(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100116c4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100116b4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100116a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011684);
  return;
}



// Function: FUN_10006826 @ 0x10006826

void FUN_10006826(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10011680;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100116c4)) && (ppuVar1 != &PTR_DAT_100116b4)) &&
       ((ppuVar1 != &PTR_DAT_100116a4 && (ppuVar1 != &PTR_DAT_10011684)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10003e12(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10011740);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100116a4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100116b4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100116c4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011684);
  return;
}



// Function: FUN_10006892 @ 0x10006892

void __cdecl FUN_10006892(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10011680 + param_1;
  if ((&DAT_10011680)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10006892(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10003e12((undefined *)lpCriticalSection);
    }
    FUN_100068f3(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_100068f3 @ 0x100068f3

void __cdecl FUN_100068f3(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10011680)[param_1]);
  return;
}



// Function: __global_unwind2 @ 0x10006908

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10006920,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000694a

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
  puStack_18 = &LAB_10006928;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100069de();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: __abnormal_termination @ 0x100069b2

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10006928) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// Function: __NLG_Notify1 @ 0x100069d5

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10011748 = param_1;
  DAT_10011744 = in_EAX;
  DAT_1001174c = unaff_EBP;
  return;
}



// Function: FUN_100069de @ 0x100069de

void FUN_100069de(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10011748 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10011744 = in_EAX;
  DAT_1001174c = unaff_EBP;
  return;
}



// Function: FUN_10006abd @ 0x10006abd

void FUN_10006abd(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10006ad8 @ 0x10006ad8

uint __thiscall FUN_10006ad8(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10006b23(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10006bb5(uVar1);
  return uVar1;
}



// Function: FUN_10006b0d @ 0x10006b0d

void __thiscall FUN_10006b0d(void *this,uint param_1,uint param_2)

{
  FUN_10006ad8(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// Function: FUN_10006b23 @ 0x10006b23

uint __cdecl FUN_10006b23(uint param_1)

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



// Function: FUN_10006bb5 @ 0x10006bb5

uint __cdecl FUN_10006bb5(uint param_1)

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



// Function: FUN_10006c3e @ 0x10006c3e

uint __thiscall FUN_10006c3e(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1001175c + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1001175c[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10008d4d(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10006cb3 @ 0x10006cb3

uint __cdecl FUN_10006cb3(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10027bd0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10027d70);
    bVar1 = DAT_10027d6c != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10027d70);
      this = (void *)0x13;
      FUN_10006892(0x13);
    }
    param_1 = FUN_10006d22(this,param_1);
    if (bVar1) {
      FUN_100068f3(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10027d70);
    }
  }
  return param_1;
}



// Function: FUN_10006d22 @ 0x10006d22

uint __thiscall FUN_10006d22(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10027bd0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10011750 < 2) {
        uVar2 = (byte)PTR_DAT_1001175c[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10006c3e(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1001175c[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10008e96(DAT_10027bd0,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_10006ded @ 0x10006ded

undefined4 __cdecl FUN_10006ded(int param_1,int param_2)

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



// Function: FUN_10006e36 @ 0x10006e36

void __cdecl FUN_10006e36(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_100090e5(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_100090e5(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Function: FUN_10006e8c @ 0x10006e8c

undefined4 __cdecl FUN_10006e8c(int param_1,int param_2)

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
     (iVar2 = FUN_10006ded(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10006e36(param_1,param_2 + -1);
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



// Function: FUN_10006f18 @ 0x10006f18

void __cdecl FUN_10006f18(int param_1,undefined4 *param_2)

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



// Function: FUN_10006f33 @ 0x10006f33

void __cdecl FUN_10006f33(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_10006f3f @ 0x10006f3f

undefined4 __cdecl FUN_10006f3f(int *param_1)

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



// Function: FUN_10006f5a @ 0x10006f5a

void __cdecl FUN_10006f5a(uint *param_1,uint param_2)

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



// Function: FUN_10006fe7 @ 0x10006fe7

undefined4 __cdecl FUN_10006fe7(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_10006f3f((int *)&local_10);
    if (iVar2 != 0) {
LAB_10007113:
      uVar5 = 0;
      goto LAB_10007115;
    }
    FUN_10006f33(&local_10);
  }
  else {
    FUN_10006f18((int)local_1c,&local_10);
    iVar2 = FUN_10006e8c((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10006f33(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10006f33(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10006f5a(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10007115;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10006f5a(&local_10,param_3[3]);
        goto LAB_10007113;
      }
      FUN_10006f18((int)&local_10,local_1c);
      FUN_10006f5a(&local_10,iVar2 - iVar4);
      FUN_10006e8c((int)&local_10,param_3[2]);
      FUN_10006f5a(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10007115:
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



// Function: FUN_10007153 @ 0x10007153

void __cdecl FUN_10007153(ushort *param_1,uint *param_2)

{
  FUN_10006fe7(param_1,param_2,(int *)&DAT_10011968);
  return;
}



// Function: FUN_10007169 @ 0x10007169

void __cdecl FUN_10007169(ushort *param_1,uint *param_2)

{
  FUN_10006fe7(param_1,param_2,(int *)&DAT_10011980);
  return;
}



// Function: FUN_1000717f @ 0x1000717f

void __thiscall FUN_1000717f(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_10009286(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10007153(local_10,param_1);
  return;
}



// Function: FUN_100071ac @ 0x100071ac

void __thiscall FUN_100071ac(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_10009286(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10007169(local_10,param_1);
  return;
}



// Function: FUN_100071d9 @ 0x100071d9

void __cdecl FUN_100071d9(char *param_1,int param_2,int param_3)

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
    FUN_100074c0((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// Function: FUN_10007250 @ 0x10007250

int * __cdecl FUN_10007250(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_100072ac(&local_10,&param_1);
  iVar3 = FUN_10009757(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10007370(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// Function: FUN_100072ac @ 0x100072ac

void __cdecl FUN_100072ac(uint *param_1,uint *param_2)

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



// Function: FUN_10007370 @ 0x10007370

uint * __cdecl FUN_10007370(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10007458;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10007458:
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



// Function: FUN_10007380 @ 0x10007380

uint * __cdecl FUN_10007380(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000739c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100073cf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x100073eb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000739c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x100073eb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x100073eb;
    }
  }
LAB_100073cf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x100073eb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10007458:
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
    if (bVar1 == 0) goto LAB_10007458;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _memset @ 0x10007460

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



// Function: FUN_100074c0 @ 0x100074c0

undefined4 * __cdecl FUN_100074c0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10007677_caseD_2;
        case 3:
          goto switchD_10007677_caseD_3;
        }
        goto switchD_10007677_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10007677_caseD_0;
      case 1:
        goto switchD_10007677_caseD_1;
      case 2:
        goto switchD_10007677_caseD_2;
      case 3:
        goto switchD_10007677_caseD_3;
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
              goto switchD_10007677_caseD_2;
            case 3:
              goto switchD_10007677_caseD_3;
            }
            goto switchD_10007677_caseD_1;
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
              goto switchD_10007677_caseD_2;
            case 3:
              goto switchD_10007677_caseD_3;
            }
            goto switchD_10007677_caseD_1;
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
              goto switchD_10007677_caseD_2;
            case 3:
              goto switchD_10007677_caseD_3;
            }
            goto switchD_10007677_caseD_1;
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
switchD_10007677_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10007677_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10007677_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10007677_caseD_0:
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
        goto switchD_100074f5_caseD_2;
      case 3:
        goto switchD_100074f5_caseD_3;
      }
      goto switchD_100074f5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100074f5_caseD_0;
    case 1:
      goto switchD_100074f5_caseD_1;
    case 2:
      goto switchD_100074f5_caseD_2;
    case 3:
      goto switchD_100074f5_caseD_3;
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
            goto switchD_100074f5_caseD_2;
          case 3:
            goto switchD_100074f5_caseD_3;
          }
          goto switchD_100074f5_caseD_1;
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
            goto switchD_100074f5_caseD_2;
          case 3:
            goto switchD_100074f5_caseD_3;
          }
          goto switchD_100074f5_caseD_1;
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
            goto switchD_100074f5_caseD_2;
          case 3:
            goto switchD_100074f5_caseD_3;
          }
          goto switchD_100074f5_caseD_1;
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
switchD_100074f5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100074f5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100074f5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100074f5_caseD_0:
  return param_1;
}



// Function: _strlen @ 0x10007800

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10007820;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10007853:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10007820:
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
  goto LAB_10007853;
}



// Function: FUN_10007884 @ 0x10007884

undefined4 __cdecl FUN_10007884(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10027b88 != (code *)0x0) {
    iVar1 = (*DAT_10027b88)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_100078a0 @ 0x100078a0

undefined4 * __cdecl FUN_100078a0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10007a57_caseD_2;
        case 3:
          goto switchD_10007a57_caseD_3;
        }
        goto switchD_10007a57_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10007a57_caseD_0;
      case 1:
        goto switchD_10007a57_caseD_1;
      case 2:
        goto switchD_10007a57_caseD_2;
      case 3:
        goto switchD_10007a57_caseD_3;
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
              goto switchD_10007a57_caseD_2;
            case 3:
              goto switchD_10007a57_caseD_3;
            }
            goto switchD_10007a57_caseD_1;
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
              goto switchD_10007a57_caseD_2;
            case 3:
              goto switchD_10007a57_caseD_3;
            }
            goto switchD_10007a57_caseD_1;
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
              goto switchD_10007a57_caseD_2;
            case 3:
              goto switchD_10007a57_caseD_3;
            }
            goto switchD_10007a57_caseD_1;
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
switchD_10007a57_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10007a57_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10007a57_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10007a57_caseD_0:
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
        goto switchD_100078d5_caseD_2;
      case 3:
        goto switchD_100078d5_caseD_3;
      }
      goto switchD_100078d5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100078d5_caseD_0;
    case 1:
      goto switchD_100078d5_caseD_1;
    case 2:
      goto switchD_100078d5_caseD_2;
    case 3:
      goto switchD_100078d5_caseD_3;
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
            goto switchD_100078d5_caseD_2;
          case 3:
            goto switchD_100078d5_caseD_3;
          }
          goto switchD_100078d5_caseD_1;
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
            goto switchD_100078d5_caseD_2;
          case 3:
            goto switchD_100078d5_caseD_3;
          }
          goto switchD_100078d5_caseD_1;
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
            goto switchD_100078d5_caseD_2;
          case 3:
            goto switchD_100078d5_caseD_3;
          }
          goto switchD_100078d5_caseD_1;
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
switchD_100078d5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100078d5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100078d5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100078d5_caseD_0:
  return param_1;
}



// Function: FUN_10007bd5 @ 0x10007bd5

int * __cdecl FUN_10007bd5(int param_1,int param_2)

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
  puStack_c = &DAT_1000d638;
  puStack_10 = &LAB_10006a00;
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
      if (DAT_10028fe4 == 3) {
        if (puVar2 <= DAT_10028fdc) {
          FUN_10006892(9);
          local_8 = 0;
          local_24 = FUN_10005985(puVar2);
          local_8 = 0xffffffff;
          FUN_10007c6e();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10007cc2;
LAB_10007cb1:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10007cbd:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10028fe4 != 2) || (DAT_1001167c < puVar3)) goto LAB_10007cbd;
        FUN_10006892(9);
        local_8 = 1;
        local_24 = FUN_10006428((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10007cf7();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10007cb1;
      }
LAB_10007cc2:
      local_24 = HeapAlloc(DAT_10028fe0,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10027b8c == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10007884(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_10007c6e @ 0x10007c6e

void FUN_10007c6e(void)

{
  FUN_100068f3(9);
  return;
}



// Function: FUN_10007cf7 @ 0x10007cf7

void FUN_10007cf7(void)

{
  FUN_100068f3(9);
  return;
}



// Function: FUN_10007d12 @ 0x10007d12

DWORD __cdecl FUN_10007d12(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10029100) &&
     ((*(byte *)((&DAT_10029000)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009b30(param_1);
    DVar1 = FUN_10007d77(param_1,param_2,param_3);
    FUN_10009b8f(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10009a5d();
  *pDVar2 = 9;
  pDVar2 = FUN_10009a66();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10007d77 @ 0x10007d77

DWORD __cdecl FUN_10007d77(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_10009aee(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10009a5d();
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
      pbVar1 = (byte *)((&DAT_10029000)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_100099ea(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_10007dea @ 0x10007dea

int __cdecl FUN_10007dea(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10029100) &&
     ((*(byte *)((&DAT_10029000)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009b30(param_1);
    iVar1 = FUN_10007e4f(param_1,param_2,param_3);
    FUN_10009b8f(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10009a5d();
  *pDVar2 = 9;
  pDVar2 = FUN_10009a66();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10007e4f @ 0x10007e4f

int __cdecl FUN_10007e4f(DWORD param_1,char *param_2,uint param_3)

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
LAB_10007e68:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10029000 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10007d77(param_1,0,2);
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
LAB_10007f37:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10007fa9;
      if (param_1 == 5) {
        pDVar7 = FUN_10009a5d();
        *pDVar7 = 9;
        pDVar7 = FUN_10009a66();
        *pDVar7 = 5;
      }
      else {
        FUN_100099ea(param_1);
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
            goto LAB_10007f37;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10007f37;
        } while( true );
      }
LAB_10007fa9:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10007e68;
      pDVar7 = FUN_10009a5d();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10009a66();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_10008096 @ 0x10008096

void __cdecl FUN_10008096(uint param_1)

{
  if ((0x10011a27 < param_1) && (param_1 < 0x10011c89)) {
    FUN_10006892(((int)(param_1 + 0xeffee5d8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_100080c5 @ 0x100080c5

void __cdecl FUN_100080c5(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10006892(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_100080e8 @ 0x100080e8

void __cdecl FUN_100080e8(uint param_1)

{
  if ((0x10011a27 < param_1) && (param_1 < 0x10011c89)) {
    FUN_100068f3(((int)(param_1 + 0xeffee5d8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10008117 @ 0x10008117

void __cdecl FUN_10008117(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100068f3(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_10008225 @ 0x10008225

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10008225(int param_1)

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
  
  FUN_10006892(0x19);
  CodePage = FUN_100083d2(param_1);
  if (CodePage != DAT_10027d74) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10011cb8;
LAB_10008262:
      if (*pUVar5 != CodePage) goto code_r0x10008266;
      local_8 = 0;
      puVar15 = &DAT_10027ea0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10011cc8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10011cb0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10027ea0 + uVar8 + 1);
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
      _DAT_10027d8c = 1;
      DAT_10027d74 = CodePage;
      DAT_10027fa4 = FUN_1000841c(CodePage);
      DAT_10027d80 = *(undefined4 *)(iVar12 + 0x10011cbc);
      DAT_10027d84 = *(undefined4 *)(iVar12 + 0x10011cc0);
      DAT_10027d88 = *(undefined4 *)(iVar12 + 0x10011cc4);
      goto LAB_100083b6;
    }
    goto LAB_100083b1;
  }
  goto LAB_1000824c;
code_r0x10008266:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10011da7 < (int)pUVar5) goto code_r0x10008271;
  goto LAB_10008262;
code_r0x10008271:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10027fa4 = 0;
    puVar15 = &DAT_10027ea0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_10027d8c = 0;
      DAT_10027d74 = CodePage;
    }
    else {
      DAT_10027d74 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10027ea0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10027ea0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10027fa4 = FUN_1000841c(CodePage);
      _DAT_10027d8c = 1;
    }
    DAT_10027d80 = 0;
    DAT_10027d84 = 0;
    DAT_10027d88 = 0;
  }
  else {
    if (DAT_10027b94 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100083c3;
    }
LAB_100083b1:
    FUN_1000844f();
  }
LAB_100083b6:
  FUN_10008478();
LAB_1000824c:
  uVar14 = 0;
LAB_100083c3:
  FUN_100068f3(0x19);
  return uVar14;
}



// Function: FUN_100083d2 @ 0x100083d2

int __cdecl FUN_100083d2(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10027b94 = 1;
                    /* WARNING: Could not recover jumptable at 0x100083ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10027b94 = 1;
                    /* WARNING: Could not recover jumptable at 0x10008401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10027be0;
  }
  DAT_10027b94 = (uint)bVar2;
  return param_1;
}



// Function: FUN_1000841c @ 0x1000841c

undefined4 __cdecl FUN_1000841c(int param_1)

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



// Function: FUN_1000844f @ 0x1000844f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000844f(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10027ea0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10027d74 = 0;
  _DAT_10027d8c = 0;
  DAT_10027fa4 = 0;
  DAT_10027d80 = 0;
  DAT_10027d84 = 0;
  DAT_10027d88 = 0;
  return;
}



// Function: FUN_10008478 @ 0x10008478

void FUN_10008478(void)

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
  
  BVar2 = GetCPInfo(DAT_10027d74,&local_18);
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
    FUN_10008d4d(1,local_118,0x100,local_518,DAT_10027d74,DAT_10027fa4,0);
    FUN_10008e96(DAT_10027fa4,0x100,local_118,0x100,local_218,0x100,DAT_10027d74,0);
    FUN_10008e96(DAT_10027fa4,0x200,local_118,0x100,local_318,0x100,DAT_10027d74,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10027ea0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10008584;
        }
        (&DAT_10027da0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10027ea0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10008584:
        (&DAT_10027da0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10027ea0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_100085ce;
        }
        (&DAT_10027da0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10027ea0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_100085ce:
        (&DAT_10027da0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_100085fd @ 0x100085fd

void FUN_100085fd(void)

{
  if (DAT_10029108 == 0) {
    FUN_10008225(-3);
    DAT_10029108 = 1;
  }
  return;
}



// Function: FUN_10008619 @ 0x10008619

void __thiscall FUN_10008619(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10008630(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_10008630 @ 0x10008630

void * __thiscall FUN_10008630(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_10011750 < 2) {
      uVar3 = (byte)PTR_DAT_1001175c[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1001175c;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10006c3e(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1000868b:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_1000868b;
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
      goto LAB_100086f5;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_100086f5;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_100086f5:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_10011750 < 2) {
      uVar5 = (byte)PTR_DAT_1001175c[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10006c3e(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_10011750 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1001175c + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10006c3e(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_100087a1:
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
          pDVar6 = FUN_10009a5d();
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
      uVar3 = FUN_10009d69((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_100087a1;
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



// Function: _strchr @ 0x10008850

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



// Function: _strstr @ 0x10008910

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
LAB_10008983:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10008983;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x10008990

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



// Function: FUN_100089d0 @ 0x100089d0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100089d0(void)

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



// Function: FUN_100089ff @ 0x100089ff

int __cdecl FUN_100089ff(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10027b98 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10027b98 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10027b98 != (FARPROC)0x0) {
        DAT_10027b9c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10027ba0 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10008a4e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10008a4e:
    if (DAT_10027b9c != (FARPROC)0x0) {
      iVar1 = (*DAT_10027b9c)();
      if ((iVar1 != 0) && (DAT_10027ba0 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10027ba0)(iVar1);
      }
    }
    iVar1 = (*DAT_10027b98)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10008a90

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
        goto joined_r0x10008ace;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10008b0b;
        goto LAB_10008b79;
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
joined_r0x10008b75:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10008b79:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10008b0b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10008b75;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10008b75;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10008b75;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10008ace:
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
LAB_10008b0b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10008b8e @ 0x10008b8e

undefined4 __cdecl FUN_10008b8e(DWORD *param_1)

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
    puVar7 = &DAT_10027ba4;
    pcVar6 = DAT_10027ba4;
LAB_10008c14:
    bVar1 = true;
    FUN_10006892(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_10027bb0;
        pcVar6 = DAT_10027bb0;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_10027ba8;
        pcVar6 = DAT_10027ba8;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_10027bac;
        pcVar6 = DAT_10027bac;
      }
      goto LAB_10008c14;
    }
    pDVar2 = FUN_10004a94();
    uVar3 = FUN_10008d10((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_100068f3(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_100068f3(1);
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
      goto LAB_10008c88;
    }
  }
  else {
LAB_10008c88:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_10011a18 < DAT_10011a1c + DAT_10011a18) {
        iVar4 = DAT_10011a18 * 0xc;
        iVar5 = DAT_10011a18;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_10011a1c + DAT_10011a18);
      }
      goto LAB_10008cc6;
    }
  }
  *puVar7 = 0;
LAB_10008cc6:
  if (bVar1) {
    FUN_100068f3(1);
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



// Function: FUN_10008d10 @ 0x10008d10

uint __cdecl FUN_10008d10(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_10011a24 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_10011a24 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_10008d4d @ 0x10008d4d

BOOL __cdecl
FUN_10008d4d(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000d698;
  puStack_10 = &LAB_10006a00;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10027bb8;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10027bb8 == 0) {
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
  DAT_10027bb8 = iVar3;
  if (DAT_10027bb8 != 2) {
    if (DAT_10027bb8 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10027be0;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_100089d0();
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
    param_6 = DAT_10027bd0;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10008e96 @ 0x10008e96

int __cdecl
FUN_10008e96(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000d6a8;
  puStack_10 = &LAB_10006a00;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10027be8 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10027be8 = 2;
    }
    else {
      DAT_10027be8 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100090ba(param_3,param_4);
  }
  if (DAT_10027be8 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10027be8 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10027be0;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_100089d0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_100089d0();
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



// Function: FUN_100090ba @ 0x100090ba

int __cdecl FUN_100090ba(char *param_1,int param_2)

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



// Function: FUN_100090e5 @ 0x100090e5

undefined4 __cdecl FUN_100090e5(uint param_1,uint param_2,uint *param_3)

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



// Function: ___add_12 @ 0x10009106

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100090e5(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_100090e5(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_100090e5(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_100090e5(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: FUN_10009164 @ 0x10009164

void __cdecl FUN_10009164(uint *param_1)

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



// Function: FUN_10009192 @ 0x10009192

void __cdecl FUN_10009192(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Function: FUN_100091bf @ 0x100091bf

void __cdecl FUN_100091bf(char *param_1,int param_2,uint *param_3)

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
      FUN_10009164(puVar1);
      FUN_10009164(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_10009164(puVar1);
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
    FUN_10009164(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// Function: FUN_10009286 @ 0x10009286

undefined4 __thiscall
FUN_10009286(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_100092dd:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_100092fa:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1000951f;
    }
    if (bVar6 == DAT_10011754) goto LAB_10009309;
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
      if (bVar6 != 0x30) goto LAB_100095f9;
    }
    goto LAB_100092dd;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_100092fa;
    iVar9 = iVar1;
    if (bVar6 != DAT_10011754) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1000938e;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_10009367;
    }
    goto LAB_100092dd;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_100092fa;
    if (bVar6 == DAT_10011754) {
LAB_10009309:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_100095fe;
    }
    goto LAB_100092dd;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10011750 < 2) {
        uVar3 = (byte)PTR_DAT_1001175c[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1001175c;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10006c3e(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_10011754) goto LAB_1000947b;
    goto LAB_100092dd;
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
      if (DAT_10011750 < 2) {
        uVar3 = (byte)PTR_DAT_1001175c[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1001175c;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10006c3e(this,(uint)bVar6,4);
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
LAB_1000947b:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1000938e:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_10009367:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_100095f9;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_100092dd;
  case 5:
    local_28 = iVar5;
    if (DAT_10011750 < 2) {
      uVar3 = (byte)PTR_DAT_1001175c[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1001175c;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10006c3e(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1000951f;
    goto LAB_100095fe;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_10009554;
      if (bVar6 == 0x2d) goto LAB_10009548;
      if (bVar6 != 0x30) goto LAB_100095fe;
LAB_100094ed:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_100092dd;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_100094ed;
      goto LAB_100095fe;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_100095f9;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1000957f;
  default:
    goto switchD_100092e9_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_10009554:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_100095fe;
LAB_10009548:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_100092dd;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_100092e9_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_100092dd;
    goto LAB_100095fe;
  }
  iVar9 = 9;
LAB_1000951f:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_100092dd;
LAB_1000957f:
  if (DAT_10011750 < 2) {
    uVar3 = (byte)PTR_DAT_1001175c[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_1001175c;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_10006c3e(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_100095c9;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_100095c1;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1000957f;
LAB_100095c1:
  pbVar7 = (byte *)0x1451;
LAB_100095c9:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_10011750 < 2) {
      uVar3 = (byte)PTR_DAT_1001175c[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1001175c;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10006c3e(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_100095f9:
  pbVar7 = pbVar8 + -1;
LAB_100095fe:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000970c;
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
    FUN_100091bf(local_60,local_8,(uint *)&local_44);
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
        FUN_1000a1da((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_10009691;
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
LAB_10009691:
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
LAB_1000970c:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// Function: FUN_10009757 @ 0x10009757

undefined4 __cdecl
FUN_10009757(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000984c;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000984c:
            pcVar11 = "1#QNAN";
            goto LAB_10009851;
          }
          pcVar11 = "1#IND";
        }
        FUN_10007370((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_10009851:
        FUN_10007370((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1000a1da((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_10009fba((int *)&local_14,(int *)&local_20);
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
        FUN_10009164((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10009192((uint *)&local_14);
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
          FUN_10009164((uint *)&local_14);
          FUN_10009164((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_10009164((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_100099a9;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_100099a9:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_100099ab:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_100099ab;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_100099e1;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_100099e1:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// Function: FUN_100099ea @ 0x100099ea

void __cdecl FUN_100099ea(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10009a66();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10011ec0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10009a5d();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10011ec4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10012028);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10009a5d();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10009a5d();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10009a5d();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_10009a5d @ 0x10009a5d

DWORD * FUN_10009a5d(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10004a94();
  return pDVar1 + 2;
}



// Function: FUN_10009a66 @ 0x10009a66

DWORD * FUN_10009a66(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10004a94();
  return pDVar1 + 3;
}



// Function: FUN_10009a6f @ 0x10009a6f

undefined4 __cdecl FUN_10009a6f(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10029100) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10029000)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_100279cc == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10009acb;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10009acb:
      *(undefined4 *)((&DAT_10029000)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10009a5d();
  *pDVar2 = 9;
  pDVar2 = FUN_10009a66();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10009aee @ 0x10009aee

undefined4 __cdecl FUN_10009aee(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10029100) &&
     ((*(byte *)((&DAT_10029000)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10029000)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10009a5d();
  *pDVar1 = 9;
  pDVar1 = FUN_10009a66();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_10009b30 @ 0x10009b30

void __cdecl FUN_10009b30(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10029000)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10006892(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_100068f3(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10029000)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_10009b8f @ 0x10009b8f

void __cdecl FUN_10009b8f(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10029000)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_10009c32 @ 0x10009c32

int __cdecl FUN_10009c32(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009c60(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000a2d3(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_10009c60 @ 0x10009c60

undefined4 __cdecl FUN_10009c60(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10007dea(param_1[4],(char *)param_1[2],uVar3);
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



// Function: FUN_10009cc5 @ 0x10009cc5

int __cdecl FUN_10009cc5(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10006892(2);
  iVar4 = 0;
  if (0 < DAT_10028fc0) {
    do {
      iVar2 = *(int *)(DAT_10027fa8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_100080c5(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10027fa8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10009c32(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10009c32(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10008117(iVar4,*(int *)(DAT_10027fa8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10028fc0);
  }
  FUN_100068f3(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_10009d69 @ 0x10009d69

uint __cdecl FUN_10009d69(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10027bd0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10027d70);
    bVar1 = DAT_10027d6c != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10027d70);
      this = (void *)0x13;
      FUN_10006892(0x13);
    }
    param_1 = FUN_10009dd8(this,param_1);
    if (bVar1) {
      FUN_100068f3(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10027d70);
    }
  }
  return param_1;
}



// Function: FUN_10009dd8 @ 0x10009dd8

uint __thiscall FUN_10009dd8(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10027bd0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10011750 < 2) {
        uVar2 = (byte)PTR_DAT_1001175c[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10006c3e(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1001175c[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10008e96(DAT_10027bd0,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: _strcmp @ 0x10009eb0

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
      if (bVar4 != *_Str2) goto LAB_10009ef4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10009ec0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10009ef4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10009ef4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10009ec0:
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
LAB_10009ef4:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_10009f40 @ 0x10009f40

int __cdecl FUN_10009f40(byte *param_1,byte *param_2)

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



// Function: FUN_10009f80 @ 0x10009f80

byte * __cdecl FUN_10009f80(byte *param_1,byte *param_2)

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



// Function: FUN_10009fba @ 0x10009fba

void __cdecl FUN_10009fba(int *param_1,int *param_2)

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
LAB_1000a05d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000a05d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_100090e5(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_1000a111:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_10009192((uint *)&local_28);
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
          FUN_10009164((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000a111;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1000a1ba;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000a1ba:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// Function: FUN_1000a1da @ 0x1000a1da

void __cdecl FUN_1000a1da(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_100120d0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10012230;
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
        FUN_10009fba(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



// Function: FUN_1000a256 @ 0x1000a256

undefined4 __cdecl FUN_1000a256(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_10008096((uint)param_1);
    uVar1 = FUN_1000a287(param_1);
    FUN_100080e8((uint)param_1);
  }
  else {
    param_1[3] = 0;
  }
  return uVar1;
}



// Function: FUN_1000a287 @ 0x1000a287

undefined4 __cdecl FUN_1000a287(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_10009c60(param_1);
    FUN_1000a621(param_1);
    iVar1 = FUN_1000a541(param_1[4]);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_10003e12((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



// Function: FUN_1000a2d3 @ 0x1000a2d3

undefined4 __cdecl FUN_1000a2d3(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10029100 <= param_1) {
LAB_1000a354:
    pDVar3 = FUN_10009a5d();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10029000)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000a354;
  FUN_10009b30(param_1);
  if ((*(byte *)((&DAT_10029000)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10009aee(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000a349;
    pDVar3 = FUN_10009a66();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10009a5d();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000a349:
  FUN_10009b8f(param_1);
  return uVar5;
}



// Function: FUN_1000a370 @ 0x1000a370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000a370(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_10027d70;
  if (DAT_10027bd0 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000a3be;
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
LAB_1000a3be:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10027d70 = _DAT_10027d70 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10027d6c;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10027d70 = iVar2;
      FUN_10006892(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000a41f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10006d22(this,uVar8);
      uVar7 = FUN_10006d22(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000a41f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10027d70 = _DAT_10027d70 + -1;
      UNLOCK();
    }
    else {
      FUN_100068f3(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_1000a440 @ 0x1000a440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000a440(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_10027d70;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_10027bd0 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000a49f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000a49f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10027d70 = _DAT_10027d70 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10027d6c;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10027d70 = iVar2;
        FUN_10006892(0x13);
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
        uVar7 = FUN_10006d22(param_3,uVar7);
        uVar5 = FUN_10006d22(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000a515;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000a515:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10027d70 = _DAT_10027d70 + -1;
        UNLOCK();
      }
      else {
        FUN_100068f3(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_1000a541 @ 0x1000a541

undefined4 __cdecl FUN_1000a541(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10029100) &&
     ((*(byte *)((&DAT_10029000)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009b30(param_1);
    uVar1 = FUN_1000a59e(param_1);
    FUN_10009b8f(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10009a5d();
  *pDVar2 = 9;
  pDVar2 = FUN_10009a66();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_1000a59e @ 0x1000a59e

undefined4 __cdecl FUN_1000a59e(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10009aee(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10009aee(2);
      iVar2 = FUN_10009aee(1);
      if (iVar2 == iVar1) goto LAB_1000a5ec;
    }
    hObject = (HANDLE)FUN_10009aee(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000a5ee;
    }
  }
LAB_1000a5ec:
  DVar4 = 0;
LAB_1000a5ee:
  FUN_10009a6f(param_1);
  *(undefined1 *)((&DAT_10029000)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_100099ea(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: FUN_1000a621 @ 0x1000a621

void __cdecl FUN_1000a621(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_10003e12((undefined *)param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



// Function: FUN_1000a684 @ 0x1000a684

int * FUN_1000a684(void)

{
  undefined4 *puVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000b470();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    *extraout_ECX = (int)&DAT_1000d854;
    extraout_ECX[3] = (int)&DAT_1000d84c;
    FUN_1000a758(extraout_ECX + 5);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  puVar1 = operator_new(0x54);
  *(undefined4 **)(unaff_EBP + 8) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1000a938(puVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_1000a876();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000d848;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  return extraout_ECX;
}



// Function: FUN_1000a745 @ 0x1000a745

void __fastcall FUN_1000a745(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x14) + 4) + -0x14 + param_1) = &PTR_LAB_1000d848;
  FUN_1000a8eb();
  return;
}



// Function: FUN_1000a758 @ 0x1000a758

undefined4 * __fastcall FUN_1000a758(undefined4 *param_1)

{
  int iVar1;
  
  param_1[0xd] = 0xffffffff;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_1000d86c;
  param_1[2] = 4;
  param_1[10] = 6;
  *(undefined1 *)(param_1 + 0xb) = 0x20;
  FUN_1000acde((LPCRITICAL_SECTION)(param_1 + 0xe));
  iVar1 = DAT_10027d60;
  DAT_10027d60 = DAT_10027d60 + 1;
  if (iVar1 == 0) {
    FUN_1000acde((LPCRITICAL_SECTION)&DAT_10027d28);
  }
  return param_1;
}



// Function: FUN_1000a7b6 @ 0x1000a7b6

undefined4 * __thiscall FUN_1000a7b6(void *this,byte param_1)

{
  FUN_1000a7d2(this);
  if ((param_1 & 1) != 0) {
    FUN_10003ae0(this);
  }
  return this;
}



// Function: FUN_1000a7d2 @ 0x1000a7d2

void __fastcall FUN_1000a7d2(undefined4 *param_1)

{
  param_1[0xd] = 0xffffffff;
  *param_1 = &PTR_FUN_1000d86c;
  DAT_10027d60 = DAT_10027d60 + -1;
  if (DAT_10027d60 == 0) {
    FUN_1000ace9((LPCRITICAL_SECTION)&DAT_10027d28);
  }
  FUN_1000ace9((LPCRITICAL_SECTION)(param_1 + 0xe));
  if ((param_1[7] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  param_1[2] = 4;
  return;
}



// Function: FUN_1000a81c @ 0x1000a81c

void __thiscall FUN_1000a81c(void *this,int param_1)

{
  if ((*(int *)((int)this + 0x1c) != 0) && (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)this + 4))(1);
  }
  *(int *)((int)this + 4) = param_1;
  if (param_1 == 0) {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 4;
  }
  else {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xfffffffb;
  }
  return;
}



// Function: FUN_1000a876 @ 0x1000a876

int * FUN_1000a876(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000b470();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000d880;
    extraout_ECX[3] = (int)&DAT_1000d878;
    FUN_1000a758(extraout_ECX + 5);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  FUN_1000ad35();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_1000ae0a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000d874;
  return extraout_ECX;
}



// Function: FUN_1000a8eb @ 0x1000a8eb

void FUN_1000a8eb(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_1000b470();
  iVar1 = *(int *)(extraout_ECX + -0x14);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0x14 + extraout_ECX) = &PTR_LAB_1000d874;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1000ae6f((-(uint)(extraout_ECX != 0x14) & extraout_ECX - 8U) + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1000adab(extraout_ECX - 8U);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// Function: FUN_1000a938 @ 0x1000a938

undefined4 * __fastcall FUN_1000a938(undefined4 *param_1)

{
  FUN_1000ae7e(param_1);
  param_1[0x14] = 0;
  param_1[0x13] = 0xffffffff;
  *param_1 = &PTR_FUN_1000d8a4;
  return param_1;
}



// Function: FUN_1000a952 @ 0x1000a952

undefined * __thiscall FUN_1000a952(void *this,byte param_1)

{
  FUN_1000a96e();
  if ((param_1 & 1) != 0) {
    FUN_10003ae0(this);
  }
  return this;
}



// Function: FUN_1000a96e @ 0x1000a96e

void FUN_1000a96e(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000b470();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = (int)&PTR_FUN_1000d8a4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[0xc] < 0) {
    FUN_1000acf4((LPCRITICAL_SECTION)(extraout_ECX + 0xd));
  }
  if (extraout_ECX[0x14] == 0) {
    FUN_1000ab9f((int)extraout_ECX);
  }
  else {
    FUN_1000a9c5(extraout_ECX);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1000aed9(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// Function: FUN_1000a9c5 @ 0x1000a9c5

int * __fastcall FUN_1000a9c5(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x13] != -1) {
    if (param_1[0xc] < 0) {
      FUN_1000acf4((LPCRITICAL_SECTION)(param_1 + 0xd));
    }
    iVar1 = (**(code **)(*param_1 + 4))();
    iVar2 = FUN_1000a541(param_1[0x13]);
    if ((iVar2 != -1) && (iVar1 != -1)) {
      param_1[0x13] = -1;
      if (-1 < param_1[0xc]) {
        return param_1;
      }
      FUN_1000acff((LPCRITICAL_SECTION)(param_1 + 0xd));
      return param_1;
    }
    if (param_1[0xc] < 0) {
      FUN_1000acff((LPCRITICAL_SECTION)(param_1 + 0xd));
    }
  }
  return (int *)0x0;
}



// Function: FUN_1000aa28 @ 0x1000aa28

undefined4 __thiscall FUN_1000aa28(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000b041(this);
  if ((iVar1 != -1) && (iVar1 = FUN_1000ab9f((int)this), iVar1 != -1)) {
    if (*(int *)((int)this + 8) == 0) {
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x14);
    }
    if (param_1 != 0xffffffff) {
      if ((*(int *)((int)this + 8) == 0) &&
         (*(uint *)((int)this + 0x1c) < *(uint *)((int)this + 0x20))) {
        FUN_1000aa99(this,param_1);
      }
      else {
        iVar1 = FUN_10007dea(*(uint *)((int)this + 0x4c),(char *)&param_1,1);
        if (iVar1 != 1) {
          return 0xffffffff;
        }
      }
    }
    return 1;
  }
  return 0xffffffff;
}



// Function: FUN_1000aa99 @ 0x1000aa99

uint __thiscall FUN_1000aa99(void *this,uint param_1)

{
  uint uVar1;
  
  if (*(undefined1 **)((int)this + 0x1c) < *(undefined1 **)((int)this + 0x20)) {
    **(undefined1 **)((int)this + 0x1c) = (undefined1)param_1;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
    uVar1 = param_1 & 0xff;
  }
  else {
    uVar1 = (**(code **)(*(int *)this + 0x1c))(param_1);
  }
  return uVar1;
}



// Function: FUN_1000aabb @ 0x1000aabb

uint __fastcall FUN_1000aabb(int *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  iVar3 = FUN_1000ab4b((int)param_1);
  if (iVar3 != 0) {
    return (uint)*(byte *)param_1[10];
  }
  iVar3 = FUN_1000b041(param_1);
  if ((iVar3 != -1) && (iVar3 = FUN_1000ab9f((int)param_1), iVar3 != -1)) {
    if (param_1[2] == 0) {
      pcVar1 = (char *)param_1[4];
      if (pcVar1 < (char *)param_1[5]) {
        pcVar4 = (char *)param_1[5] + -(int)pcVar1;
      }
      else {
        pcVar4 = (char *)0x0;
      }
      iVar3 = FUN_1000b48f(param_1[0x13],pcVar1,pcVar4);
      if (0 < iVar3) {
        pbVar2 = (byte *)param_1[4];
        param_1[3] = -1;
        param_1[9] = (int)pbVar2;
        param_1[10] = (int)pbVar2;
        param_1[0xb] = (int)(pbVar2 + iVar3);
        return (uint)*pbVar2;
      }
    }
    else {
      iVar3 = FUN_1000b48f(param_1[0x13],(char *)((int)&uStack_8 + 3),(char *)0x1);
      if (0 < iVar3) {
        return (uint)uStack_8 >> 0x18;
      }
    }
  }
  return 0xffffffff;
}



// Function: FUN_1000ab4b @ 0x1000ab4b

int __fastcall FUN_1000ab4b(int param_1)

{
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
    return *(uint *)(param_1 + 0x2c) - *(uint *)(param_1 + 0x28);
  }
  return 0;
}



// Function: FUN_1000ab9f @ 0x1000ab9f

undefined4 __fastcall FUN_1000ab9f(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint uVar6;
  
  if (*(uint *)(param_1 + 0x4c) == 0xffffffff) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 8) == 0) {
    pcVar5 = *(char **)(param_1 + 0x18);
    if (*(char **)(param_1 + 0x1c) < pcVar5) {
      uVar6 = 0;
    }
    else {
      uVar6 = (int)*(char **)(param_1 + 0x1c) - (int)pcVar5;
    }
    if ((uVar6 != 0) &&
       (uVar2 = FUN_10007dea(*(uint *)(param_1 + 0x4c),pcVar5,uVar6), uVar2 != uVar6)) {
      if (0 < (int)uVar2) {
        if (*(int *)(param_1 + 0x20) != 0) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar2;
        }
        FUN_100074c0(*(undefined4 **)(param_1 + 0x18),
                     (undefined4 *)(uVar2 + (int)*(undefined4 **)(param_1 + 0x18)),uVar6 - uVar2);
      }
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar3 = FUN_1000ab4b(param_1);
    if (0 < iVar3) {
      uVar6 = *(uint *)(param_1 + 0x4c);
      bVar1 = *(byte *)((&DAT_10029000)[(int)uVar6 >> 5] + 4 + (uVar6 & 0x1f) * 0x24);
      if ((bVar1 & 0x80) != 0) {
        for (pcVar5 = *(char **)(param_1 + 0x28); pcVar5 < *(char **)(param_1 + 0x2c);
            pcVar5 = pcVar5 + 1) {
          if (*pcVar5 == '\n') {
            iVar3 = iVar3 + 1;
          }
        }
        if ((bVar1 & 2) != 0) {
          iVar3 = iVar3 + 1;
        }
      }
      DVar4 = FUN_10007d12(uVar6,-iVar3,1);
      if (DVar4 == 0xffffffff) {
        return 0xffffffff;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return 0;
}



// Function: FUN_1000ac7a @ 0x1000ac7a

void * __thiscall FUN_1000ac7a(void *this,int param_1,int param_2)

{
  if ((*(int *)((int)this + 0x4c) == -1) || (*(int *)((int)this + 0x14) == 0)) {
    if ((param_1 == 0) || (param_2 < 1)) {
      *(undefined4 *)((int)this + 8) = 1;
    }
    else {
      if (*(int *)((int)this + 0x30) < 0) {
        FUN_1000acf4((LPCRITICAL_SECTION)((int)this + 0x34));
      }
      FUN_1000b08c(this,param_1,param_1 + param_2,0);
      if (*(int *)((int)this + 0x30) < 0) {
        FUN_1000acff((LPCRITICAL_SECTION)((int)this + 0x34));
      }
    }
  }
  else {
    this = (void *)0x0;
  }
  return this;
}



// Function: FUN_1000acde @ 0x1000acde

void __cdecl FUN_1000acde(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return;
}



// Function: FUN_1000ace9 @ 0x1000ace9

void __cdecl FUN_1000ace9(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}



// Function: FUN_1000acf4 @ 0x1000acf4

void __cdecl FUN_1000acf4(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}



// Function: FUN_1000acff @ 0x1000acff

void __cdecl FUN_1000acff(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}



// Function: FUN_1000ad35 @ 0x1000ad35

int * FUN_1000ad35(void)

{
  uint *puVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000b470();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000d8d8;
    FUN_1000a758(extraout_ECX + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000d8d4;
  FUN_1000a81c((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  puVar1 = (uint *)(*(int *)(*extraout_ECX + 4) + 0x24 + (int)extraout_ECX);
  *puVar1 = *puVar1 | 1;
  extraout_ECX[2] = 0;
  extraout_ECX[1] = 0;
  return extraout_ECX;
}



// Function: FUN_1000adab @ 0x1000adab

void __fastcall FUN_1000adab(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0xc) + 4) + -0xc + param_1) = &PTR_LAB_1000d8d4;
  return;
}



// Function: FUN_1000adba @ 0x1000adba

int __thiscall FUN_1000adba(void *this,char param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 0x24) < *(uint *)((int)this + 0x28)) {
    pcVar1 = (char *)(*(uint *)((int)this + 0x28) - 1);
    *(char **)((int)this + 0x28) = pcVar1;
    *pcVar1 = param_1;
    iVar2 = (int)param_1;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))((int)param_1);
  }
  return iVar2;
}



// Function: FUN_1000ae0a @ 0x1000ae0a

int * FUN_1000ae0a(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000b470();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000d8e8;
    FUN_1000a758(extraout_ECX + 2);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000d8e4;
  FUN_1000a81c((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[1] = 0;
  return extraout_ECX;
}



// Function: FUN_1000ae6f @ 0x1000ae6f

void __fastcall FUN_1000ae6f(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -8) + 4) + -8 + param_1) = &PTR_LAB_1000d8e4;
  return;
}



// Function: FUN_1000ae7e @ 0x1000ae7e

undefined4 * __fastcall FUN_1000ae7e(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_1000d8f4;
  FUN_1000acde((LPCRITICAL_SECTION)(param_1 + 0xd));
  return param_1;
}



// Function: FUN_1000aebd @ 0x1000aebd

undefined4 * __thiscall FUN_1000aebd(void *this,byte param_1)

{
  FUN_1000aed9(this);
  if ((param_1 & 1) != 0) {
    FUN_10003ae0(this);
  }
  return this;
}



// Function: FUN_1000aed9 @ 0x1000aed9

void __fastcall FUN_1000aed9(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000d8f4;
  FUN_1000ace9((LPCRITICAL_SECTION)(param_1 + 0xd));
  FUN_1000b02a((int)param_1);
  if ((param_1[1] != 0) && ((undefined *)param_1[4] != (undefined *)0x0)) {
    FUN_10003ae0((undefined *)param_1[4]);
  }
  return;
}



// Function: FUN_1000af3d @ 0x1000af3d

int __thiscall FUN_1000af3d(void *this,undefined1 *param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  do {
    if (param_2 == 0) {
      return local_8;
    }
    param_2 = param_2 + -1;
    if ((*(int *)((int)this + 8) == 0) &&
       (*(undefined1 **)((int)this + 0x1c) < *(undefined1 **)((int)this + 0x20))) {
      **(undefined1 **)((int)this + 0x1c) = *param_1;
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
    }
    else {
      iVar1 = (**(code **)(*(int *)this + 0x1c))(*param_1);
      if (iVar1 == -1) {
        return local_8;
      }
    }
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
  } while( true );
}



// Function: FUN_1000af93 @ 0x1000af93

int __thiscall FUN_1000af93(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 8) == 0) {
    while ((param_2 != 0 && (iVar2 = (**(code **)(*(int *)this + 0x20))(), iVar2 != -1))) {
      uVar3 = *(int *)((int)this + 0x2c) - (int)*(undefined4 **)((int)this + 0x28);
      if ((int)param_2 <= (int)uVar3) {
        uVar3 = param_2;
      }
      if (0 < (int)uVar3) {
        FUN_100078a0(param_1,*(undefined4 **)((int)this + 0x28),uVar3);
        param_1 = (undefined4 *)((int)param_1 + uVar3);
        *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar3;
        local_8 = local_8 + uVar3;
        param_2 = param_2 - uVar3;
      }
    }
  }
  else {
    if (*(int *)((int)this + 0xc) == -1) {
      uVar1 = (**(code **)(*(int *)this + 0x20))();
      *(undefined4 *)((int)this + 0xc) = uVar1;
    }
    while ((param_2 != 0 && (param_2 = param_2 - 1, *(int *)((int)this + 0xc) != -1))) {
      *(undefined1 *)param_1 = *(undefined1 *)((int)this + 0xc);
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_8 = local_8 + 1;
      uVar1 = (**(code **)(*(int *)this + 0x20))();
      *(undefined4 *)((int)this + 0xc) = uVar1;
    }
  }
  return local_8;
}



// Function: FUN_1000b02a @ 0x1000b02a

undefined4 __fastcall FUN_1000b02a(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) <= *(uint *)(param_1 + 0x28)) &&
     (*(uint *)(param_1 + 0x1c) <= *(uint *)(param_1 + 0x18))) {
    return 0;
  }
  return 0xffffffff;
}



// Function: FUN_1000b041 @ 0x1000b041

int __fastcall FUN_1000b041(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] == 0) && (param_1[4] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x28))();
    return (-(uint)(iVar1 != -1) & 2) - 1;
  }
  return 0;
}



// Function: FUN_1000b05f @ 0x1000b05f

undefined4 __fastcall FUN_1000b05f(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x200);
  if (pvVar1 == (void *)0x0) {
    return 0xffffffff;
  }
  FUN_1000b08c(param_1,pvVar1,(int)pvVar1 + 0x200,1);
  return 1;
}



// Function: FUN_1000b08c @ 0x1000b08c

void __thiscall FUN_1000b08c(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(int *)((int)this + 4) != 0) && (*(undefined **)((int)this + 0x10) != (undefined *)0x0)) {
    FUN_10003ae0(*(undefined **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}



// Function: FUN_1000b0d4 @ 0x1000b0d4

int __thiscall FUN_1000b0d4(void *this,char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)((int)this + 0x24) < *(uint *)((int)this + 0x28)) {
    iVar2 = FUN_1000adba(this,param_1);
  }
  else {
    iVar2 = 1;
    iVar3 = (**(code **)(*(int *)this + 0xc))(0xffffffff,1);
    if (iVar3 == -1) {
      iVar2 = -1;
    }
    else if ((*(int *)((int)this + 8) == 0) && (*(int *)((int)this + 0x2c) != 0)) {
      puVar1 = *(undefined4 **)((int)this + 0x28);
      FUN_100074c0((undefined4 *)((int)puVar1 + 1),puVar1,
                   (*(int *)((int)this + 0x2c) - (int)puVar1) - 1);
      **(undefined1 **)((int)this + 0x28) = (char)iVar2;
    }
  }
  return iVar2;
}



// Function: FUN_1000b136 @ 0x1000b136

void __fastcall FUN_1000b136(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_10006892(0x1b);
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_10003e12((undefined *)param_1[1]);
  }
  FUN_100068f3(0x1b);
  return;
}



// Function: FUN_1000b15f @ 0x1000b15f

undefined4 * __thiscall FUN_1000b15f(void *this,byte param_1)

{
  FUN_1000b136(this);
  if ((param_1 & 1) != 0) {
    FUN_10003ae0(this);
  }
  return this;
}



// Function: operator_new @ 0x1000b17b

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



// Function: FUN_1000b189 @ 0x1000b189

void FUN_1000b189(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000b1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000b1bd @ 0x1000b1bd

void FUN_1000b1bd(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000b1c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000b1c4 @ 0x1000b1c4

void FUN_1000b1c4(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000b1c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000b1cb @ 0x1000b1cb

void FUN_1000b1cb(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000b1f3,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// Function: FUN_1000b21a @ 0x1000b21a

undefined4 __cdecl
FUN_1000b21a(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_1000b6d6(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



// Function: FUN_1000b250 @ 0x1000b250

undefined4 __cdecl
FUN_1000b250(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_1000b2a4;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// Function: FUN_1000b2a4 @ 0x1000b2a4

void __cdecl FUN_1000b2a4(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_1000b6d6(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



// Function: FUN_1000b2c9 @ 0x1000b2c9

undefined4 __cdecl
FUN_1000b2c9(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_1000b37f;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x1000b351;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_10004a94();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// Function: FUN_1000b37f @ 0x1000b37f

undefined4 __cdecl FUN_1000b37f(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_1000b6d6(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1000b1cb(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1000b3e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// Function: FUN_1000b3f4 @ 0x1000b3f4

int __cdecl FUN_1000b3f4(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar5;
  uVar3 = uVar5;
  while (uVar2 = uVar4, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      FUN_1000bf9d();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) &&
        (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(uint *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_1000bf9d();
  }
  return iVar1 + uVar5 * 0x14;
}



// Function: FUN_1000b470 @ 0x1000b470

void FUN_1000b470(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}



// Function: FUN_1000b48f @ 0x1000b48f

int __cdecl FUN_1000b48f(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10029100) &&
     ((*(byte *)((&DAT_10029000)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10009b30(param_1);
    iVar1 = FUN_1000b4f4(param_1,param_2,param_3);
    FUN_10009b8f(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10009a5d();
  *pDVar2 = 9;
  pDVar2 = FUN_10009a66();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_1000b4f4 @ 0x1000b4f4

int __cdecl FUN_1000b4f4(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  char *pcVar8;
  int iVar9;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar1 = &DAT_10029000 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_10029000)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_10029000)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar9) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),pcVar8,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          pDVar7 = FUN_10009a5d();
          *pDVar7 = 9;
          pDVar7 = FUN_10009a66();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_100099ea(DVar6);
        }
        return -1;
      }
      bVar4 = *(byte *)(*piVar1 + 4 + iVar9);
      if ((bVar4 & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *(byte *)(*piVar1 + 4 + iVar9) = bVar4;
      param_3 = param_2;
      local_c = param_2 + (int)local_c + local_10;
      pcVar8 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar9);
            bVar4 = *pbVar2;
            if ((bVar4 & 0x40) == 0) {
              *pbVar2 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                param_3 = param_3 + 2;
                goto LAB_1000b67f;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_1000b699:
                *pcVar8 = '\r';
LAB_1000b69c:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_1000b67f:
                  *pcVar8 = '\n';
                  goto LAB_1000b69c;
                }
                FUN_10007d77(param_1,-1,1);
                if (local_5 != '\n') goto LAB_1000b699;
              }
              else {
                if (local_5 == '\n') goto LAB_1000b67f;
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                *(char *)(*piVar1 + 5 + iVar9) = local_5;
              }
            }
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            param_3 = param_3 + 1;
          }
        } while (param_3 < local_c);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  return 0;
}



// Function: FUN_1000b6d6 @ 0x1000b6d6

undefined4 __cdecl
FUN_1000b6d6(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_1000bf9d();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_1000b771(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_1000ba2b((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// Function: FUN_1000b771 @ 0x1000b771

void __cdecl
FUN_1000b771(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte *pbVar1;
  bool bVar2;
  DWORD *pDVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = local_18 & 0xffffff00;
  local_14 = *(int *)((int)param_2 + 8);
  if ((local_14 < -1) || (*(int *)(param_5 + 4) <= local_14)) {
    FUN_1000bf9d();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_10004a94();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_10004a94();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_10004a94();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_1000c057(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_1000bf9d();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_1000b8f9;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_1000bf9d();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_1000b3f4(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_1000be63((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_1000b9ce(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1000badf(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                iVar5 = local_14;
                goto LAB_1000b8d9;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_1000b8d9:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_1000b8f9:
  if (param_6 == '\0') {
    FUN_1000b924(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_1000bf3c();
  return;
}



// Function: FUN_1000b924 @ 0x1000b924

void __cdecl
FUN_1000b924(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_10004a94();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_1000b2c9(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_1000b3f4(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1000badf(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



// Function: FUN_1000b9ce @ 0x1000b9ce

undefined4 __cdecl FUN_1000b9ce(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1000ba25:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1000b9ff:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1000ba25;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1000b9ff;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000ba2b @ 0x1000ba2b

void __cdecl FUN_1000ba2b(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000d928;
  puStack_10 = &LAB_10006a00;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_1000bf9d();
    }
    local_8 = 0;
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      __CallSettingFrame_12(iVar1,param_1,0x103);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000badf @ 0x1000badf

void __cdecl
FUN_1000badf(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_1000bc9f((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_1000b1cb(param_10,param_1);
  FUN_1000ba2b((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_1000bb5a((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000b189(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// Function: FUN_1000bb5a @ 0x1000bb5a

undefined4 __cdecl
FUN_1000bb5a(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000d938;
  puStack_10 = &LAB_10006a00;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10004a94();
  FUN_10004a94();
  pDVar1 = FUN_10004a94();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10004a94();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_1000b250(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_1000bc27();
  ExceptionList = local_14;
  return uVar2;
}



// Function: FUN_1000bc27 @ 0x1000bc27

void FUN_1000bc27(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_10004a94();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_10004a94();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_1000be63((int)unaff_EDI);
  }
  return;
}



// Function: FUN_1000bc9f @ 0x1000bc9f

void __cdecl FUN_1000bc9f(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 *puVar4;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000d950;
  puStack_10 = &LAB_10006a00;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        bVar2 = FUN_1000c057(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_1000c073(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_1000beca(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_100074c0(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_1000c057(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_1000c073(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_1000c08f(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_1000beca(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_1000b1c4(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_1000beca(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1000b1bd(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_1000c057(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_1000c073(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_100074c0(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_1000bd2d;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_1000c057(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_1000c073(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_1000bd2d:
      iVar3 = FUN_1000beca(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_1000bf9d();
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000be63 @ 0x1000be63

void __cdecl FUN_1000be63(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000d960;
  puStack_10 = &LAB_10006a00;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_1000b1bd(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000beca @ 0x1000beca

int __cdecl FUN_1000beca(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}



// Function: __CallSettingFrame@12 @ 0x1000bef0

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



// Function: FUN_1000bf3c @ 0x1000bf3c

void FUN_1000bf3c(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000d970;
  puStack_10 = &LAB_10006a00;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10004a94();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10004a94();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_1000c0a7();
  return;
}



// Function: FUN_1000bf9d @ 0x1000bf9d

void FUN_1000bf9d(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000d988;
  puStack_10 = &LAB_10006a00;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_100125e0 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_100125e0)();
  }
  local_8 = 0xffffffff;
  FUN_1000bf3c();
  return;
}



// Function: FUN_1000bff3 @ 0x1000bff3

int FUN_1000bff3(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_1000bf3c();
    return iVar3;
  }
  if ((DAT_10027d68 != (FARPROC)0x0) &&
     (bVar2 = FUN_1000c08f(DAT_10027d68), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_10027d68)(param_1);
    return iVar3;
  }
  return 0;
}



// Function: FUN_1000c057 @ 0x1000c057

bool __cdecl FUN_1000c057(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_1000c073 @ 0x1000c073

bool __cdecl FUN_1000c073(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_1000c08f @ 0x1000c08f

bool __cdecl FUN_1000c08f(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



// Function: FUN_1000c0a7 @ 0x1000c0a7

void FUN_1000c0a7(void)

{
  FUN_10005496(10);
  FUN_10008b8e((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// Function: Unwind@1000c0c0 @ 0x1000c0c0

void Unwind_1000c0c0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000a7d2((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



// Function: Unwind@1000c0da @ 0x1000c0da

void Unwind_1000c0da(void)

{
  int unaff_EBP;
  
  FUN_10003ae0(*(undefined **)(unaff_EBP + 8));
  return;
}



// Function: Unwind@1000c0f0 @ 0x1000c0f0

void Unwind_1000c0f0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000a7d2((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



// Function: Unwind@1000c10a @ 0x1000c10a

void Unwind_1000c10a(void)

{
  int unaff_EBP;
  
  FUN_1000adab(*(int *)(unaff_EBP + -0x14) + 0xc);
  return;
}



// Function: Unwind@1000c120 @ 0x1000c120

void Unwind_1000c120(void)

{
  int unaff_EBP;
  
  FUN_1000adab(*(int *)(unaff_EBP + -0x10) + -8);
  return;
}



// Function: Unwind@1000c138 @ 0x1000c138

void Unwind_1000c138(void)

{
  int unaff_EBP;
  
  FUN_1000aed9(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



// Function: Unwind@1000c14c @ 0x1000c14c

void Unwind_1000c14c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000a7d2((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc));
    return;
  }
  return;
}



// Function: Unwind@1000c170 @ 0x1000c170

void Unwind_1000c170(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000a7d2((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8));
    return;
  }
  return;
}




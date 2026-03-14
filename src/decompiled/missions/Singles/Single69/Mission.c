// Decompiled from: Mission.dll

// Function: FUN_10001030 @ 0x10001030

void FUN_10001030(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  RegisterUnits(&DAT_10037828,"Gband1");
  __chkesp();
  RegisterUnits(&DAT_10037820,"Gband2");
  __chkesp();
  RegisterUnits(&DAT_10037858,"Gholop1");
  __chkesp();
  RegisterUnits(&DAT_10037850,"Gholop2");
  __chkesp();
  RegisterUnits(&DAT_10037848,"Gholop3");
  __chkesp();
  RegisterUnits(&DAT_10037840,"Gholop4");
  __chkesp();
  RegisterUnits(&DAT_10037838,"Gholop5");
  __chkesp();
  RegisterUnits(&DAT_10037948,"Ggrin1");
  __chkesp();
  RegisterUnits(&DAT_10037940,"Ggrin2");
  __chkesp();
  RegisterUnits(&DAT_10037870,"Gbash1");
  __chkesp();
  RegisterUnits(&DAT_10037a30,"Ggus1");
  __chkesp();
  RegisterUnits(&DAT_10037a38,"Ggus2");
  __chkesp();
  RegisterUnits(&DAT_100377f0,"Gkon1");
  __chkesp();
  RegisterUnits(&DAT_100377f8,"Gkon2");
  __chkesp();
  RegisterZone(&DAT_10037960,"Zband0");
  __chkesp();
  RegisterZone(&DAT_100379f0,"Zband00");
  __chkesp();
  RegisterZone(&DAT_10037950,"Zband1");
  __chkesp();
  RegisterZone(&DAT_100379f8,"Zband1a");
  __chkesp();
  RegisterZone(&DAT_10037a00,"Zband1b");
  __chkesp();
  RegisterZone(&DAT_10037958,"Zband2");
  __chkesp();
  RegisterZone(&DAT_10037a08,"Zband2a");
  __chkesp();
  RegisterZone(&DAT_10037a10,"Zband2b");
  __chkesp();
  RegisterZone(&DAT_10037910,"Ztalk1");
  __chkesp();
  RegisterZone(&DAT_100379b8,"Zgen1");
  __chkesp();
  RegisterZone(&DAT_100379c0,"Zgen2");
  __chkesp();
  RegisterZone(&DAT_100379c8,"Zgen3");
  __chkesp();
  RegisterZone(&DAT_100379d0,"Zgen4");
  __chkesp();
  RegisterZone(&DAT_10037980,"Zattack1");
  __chkesp();
  RegisterZone(&DAT_10037988,"Zattack2");
  __chkesp();
  RegisterZone(&DAT_10037970,"Zattack3");
  __chkesp();
  RegisterZone(&DAT_10037978,"Zattack4");
  __chkesp();
  RegisterZone(&DAT_100379a0,"Zattack5");
  __chkesp();
  RegisterZone(&DAT_100379a8,"Zattack6");
  __chkesp();
  RegisterZone(&DAT_10037990,"Zattack7");
  __chkesp();
  RegisterZone(&DAT_10037998,"Zattack8");
  __chkesp();
  RegisterZone(&DAT_100379b0,"Zattack9");
  __chkesp();
  RegisterZone(&DAT_10037a28,"Zattack10");
  __chkesp();
  RegisterZone(&DAT_10037a20,"Zattack11");
  __chkesp();
  RegisterZone(&DAT_10037a18,"Zattack12");
  __chkesp();
  RegisterZone(&DAT_100377b0,"Zotxod1");
  __chkesp();
  RegisterZone(&DAT_100377b8,"Zotxod2");
  __chkesp();
  RegisterUnitType(&DAT_10037830,"Dragun_18_DIP(en)");
  __chkesp();
  RegisterUnitType(&DAT_10037930,"Mortira_b(en)");
  __chkesp();
  RegisterUnitType(&DAT_100377d8,"Krestian_Sved(en)");
  __chkesp();
  RegisterUnitType(&DAT_100377e8,"Krestian_Sved(fr)");
  __chkesp();
  RegisterUnitType(&DAT_10037808,"WALL_EV(DA)");
  __chkesp();
  RegisterUnitType(&DAT_10037920,"WALL_UKR(DA)");
  __chkesp();
  RegisterUnitType(&DAT_10037810,"WALL_EV(en)");
  __chkesp();
  RegisterUnitType(&DAT_10037928,"WALL_UKR(en)");
  __chkesp();
  RegisterUnitType(&DAT_10037818,"WALL_EV(fr)");
  __chkesp();
  RegisterUnitType(&DAT_10037918,"WALL_UKR(fr)");
  __chkesp();
  RegisterUnitType(&DAT_10037860,"Center_British(en)");
  __chkesp();
  RegisterUnitType(&DAT_10037868,"Center_France(fr)");
  __chkesp();
  RegisterVar(&DAT_100377c8,8);
  __chkesp();
  RegisterVar(&DAT_100377c0,8);
  __chkesp();
  RegisterVar(&DAT_100377e0,8);
  __chkesp();
  RegisterVar(&DAT_100377d0,8);
  __chkesp();
  RegisterVar(&DAT_10037790,8);
  __chkesp();
  RegisterVar(&DAT_10037788,8);
  __chkesp();
  RegisterVar(&DAT_100377a0,8);
  __chkesp();
  RegisterVar(&DAT_10037798,8);
  __chkesp();
  RegisterVar(&DAT_100377a8,8);
  __chkesp();
  RegisterVar(&DAT_10037880,8);
  __chkesp();
  RegisterVar(&DAT_10037878,8);
  __chkesp();
  RegisterVar(&DAT_100378b8,8);
  __chkesp();
  RegisterVar(&DAT_100378b0,8);
  __chkesp();
  RegisterVar(&DAT_100378d0,8);
  __chkesp();
  RegisterVar(&DAT_100378c0,8);
  __chkesp();
  RegisterVar(&DAT_10037898,8);
  __chkesp();
  RegisterVar(&DAT_10037890,8);
  __chkesp();
  RegisterVar(&DAT_100378a8,8);
  __chkesp();
  RegisterVar(&DAT_100378a0,8);
  __chkesp();
  RegisterVar(&DAT_100378c8,8);
  __chkesp();
  RegisterVar(&DAT_10037888,4);
  __chkesp();
  RegisterVar(&DAT_100378d8,4);
  __chkesp();
  RegisterVar(&DAT_10037908,4);
  __chkesp();
  RegisterVar(&DAT_10037938,4);
  __chkesp();
  RegisterVar(&DAT_1003793c,4);
  __chkesp();
  RegisterVar(&DAT_10037968,4);
  __chkesp();
  RegisterVar(&DAT_100378dc,4);
  __chkesp();
  RegisterFormation(&DAT_100379e8,"#LINE5");
  __chkesp();
  RegisterFormation(&DAT_100378e8,"#LINE20PUS");
  __chkesp();
  RegisterFormation(&DAT_100378f8,"#LINE30PUS");
  __chkesp();
  RegisterFormation(&DAT_10037900,"#LINE40PUS");
  __chkesp();
  RegisterFormation(&DAT_100378f0,"#LINE15PUS");
  __chkesp();
  RegisterFormation(&DAT_100378e0,"#LINE10PUS");
  __chkesp();
  RegisterFormation(&DAT_100379e0,"#LINE3");
  __chkesp();
  RegisterFormation(&DAT_10037778,"#SHIPS3");
  __chkesp();
  RegisterFormation(&DAT_10037780,"#SHIPS5");
  __chkesp();
  RegisterFormation(&DAT_10037800,"#ALONE");
  __chkesp();
  RegisterDynGroup(&DAT_100377c8);
  __chkesp();
  RegisterDynGroup(&DAT_100377c0);
  __chkesp();
  RegisterDynGroup(&DAT_100377e0);
  __chkesp();
  RegisterDynGroup(&DAT_100377d0);
  __chkesp();
  RegisterDynGroup(&DAT_10037790);
  __chkesp();
  RegisterDynGroup(&DAT_10037788);
  __chkesp();
  RegisterDynGroup(&DAT_100377a0);
  __chkesp();
  RegisterDynGroup(&DAT_10037798);
  __chkesp();
  RegisterDynGroup(&DAT_100377a8);
  __chkesp();
  RegisterDynGroup(&DAT_10037880);
  __chkesp();
  RegisterDynGroup(&DAT_10037878);
  __chkesp();
  RegisterDynGroup(&DAT_100378b8);
  __chkesp();
  RegisterDynGroup(&DAT_100378b0);
  __chkesp();
  RegisterDynGroup(&DAT_100378d0);
  __chkesp();
  RegisterDynGroup(&DAT_100378c0);
  __chkesp();
  RegisterDynGroup(&DAT_10037898);
  __chkesp();
  RegisterDynGroup(&DAT_10037890);
  __chkesp();
  RegisterDynGroup(&DAT_100378a8);
  __chkesp();
  RegisterDynGroup(&DAT_100378a0);
  __chkesp();
  RegisterDynGroup(&DAT_100378c8);
  __chkesp();
  RegisterDynGroup(&DAT_100379d8);
  __chkesp();
  SetPlayerName(1,"ENGLAND");
  __chkesp();
  SetPlayerName(2,"FRANCE");
  __chkesp();
  SetPlayerName(5,"BANDITS");
  __chkesp();
  ChangeFriends(1,0x66);
  __chkesp();
  ChangeFriends(2,0x66);
  __chkesp();
  ChangeFriends(5,0x66);
  __chkesp();
  EnableUnit(0,&DAT_10037808,0);
  __chkesp();
  EnableUnit(0,&DAT_10037920,0);
  __chkesp();
  EnableUnit(0,&DAT_10037810,0);
  __chkesp();
  EnableUnit(0,&DAT_10037928,0);
  __chkesp();
  EnableUnit(0,&DAT_10037818,0);
  __chkesp();
  EnableUnit(0,&DAT_10037918,0);
  __chkesp();
  EnableUnit(0,&DAT_100377d8,0);
  __chkesp();
  EnableUnit(0,&DAT_100377e8,0);
  __chkesp();
  EnableUnit(0,&DAT_10037860,0);
  __chkesp();
  EnableUnit(0,&DAT_10037868,0);
  __chkesp();
  DVar1 = FUN_10005e70((int *)0x0);
  FUN_10005e20(DVar1);
  uStack_8 = 0x10001d6d;
  __chkesp();
  return;
}



// Function: FUN_100020d0 @ 0x100020d0

void FUN_100020d0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_2;
  if (param_2 == 1) {
    OnInit();
  }
  local_8 = 0x1000210d;
  __chkesp();
  return;
}



// Function: FUN_10002130 @ 0x10002130

void FUN_10002130(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 local_88 [16];
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  puVar5 = local_88;
  for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  Trigg(99);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    __chkesp();
    EnableMission(0x42);
    __chkesp();
    DisableMission(0x43);
    __chkesp();
    DisableMission(0x44);
    __chkesp();
    DisableMission(0x45);
    __chkesp();
    DisableMission(0x46);
    __chkesp();
    DisableMission(0x47);
    __chkesp();
    SetDestPoint(&DAT_100377f0,&DAT_100377b0);
    __chkesp();
    SetDestPoint(&DAT_100377f8,&DAT_100377b8);
    __chkesp();
    GetDiff(0);
    local_10 = __chkesp();
    switch(local_10) {
    case 0:
      SetResource(0,3,15000);
      __chkesp();
      SetResource(0,0,15000);
      __chkesp();
      SetResource(0,2,15000);
      __chkesp();
      SetResource(0,1,15000);
      __chkesp();
      SetResource(0,5,15000);
      __chkesp();
      SetResource(0,4,15000);
      __chkesp();
      SelectUnits(&DAT_10037870,0);
      __chkesp();
      SelectUnits(&DAT_10037948,1);
      __chkesp();
      SelectUnits(&DAT_10037940,1);
      __chkesp();
      SelectUnits(&DAT_10037a30,1);
      __chkesp();
      SelectUnits(&DAT_10037a38,1);
      __chkesp();
      SelErase(5);
      __chkesp();
      DAT_10037888 = 1;
      DAT_100378d8 = 1;
      DAT_10037908 = 1;
      DAT_10037938 = 1;
      DAT_1003793c = 1;
      DAT_10037968 = 1;
      break;
    case 1:
      SetResource(0,3,10000);
      __chkesp();
      SetResource(0,0,10000);
      __chkesp();
      SetResource(0,2,10000);
      __chkesp();
      SetResource(0,1,10000);
      __chkesp();
      SetResource(0,5,10000);
      __chkesp();
      SetResource(0,4,10000);
      __chkesp();
      SelectUnits(&DAT_10037948,0);
      __chkesp();
      SelectUnits(&DAT_10037940,1);
      __chkesp();
      SelectUnits(&DAT_10037a30,1);
      __chkesp();
      SelectUnits(&DAT_10037a38,1);
      __chkesp();
      SelErase(5);
      __chkesp();
      DAT_10037888 = 2;
      DAT_100378d8 = 2;
      DAT_10037908 = 1;
      DAT_10037938 = 1;
      DAT_1003793c = 1;
      DAT_10037968 = 1;
      break;
    case 2:
      SetResource(0,3,7000);
      __chkesp();
      SetResource(0,0,7000);
      __chkesp();
      SetResource(0,2,7000);
      __chkesp();
      SetResource(0,1,7000);
      __chkesp();
      SetResource(0,5,7000);
      __chkesp();
      SetResource(0,4,7000);
      __chkesp();
      SelectUnits(&DAT_10037a30,0);
      __chkesp();
      SelectUnits(&DAT_10037a38,1);
      __chkesp();
      SelErase(5);
      __chkesp();
      DAT_10037888 = 3;
      DAT_100378d8 = 3;
      DAT_10037908 = 5;
      DAT_10037938 = 3;
      DAT_1003793c = 2;
      DAT_10037968 = 1;
      break;
    case 3:
      SetResource(0,3,5000);
      __chkesp();
      SetResource(0,0,5000);
      __chkesp();
      SetResource(0,2,5000);
      __chkesp();
      SetResource(0,1,5000);
      __chkesp();
      SetResource(0,5,5000);
      __chkesp();
      SetResource(0,4,5000);
      __chkesp();
      DAT_10037888 = 4;
      DAT_100378d8 = 4;
      DAT_10037908 = 6;
      DAT_10037938 = 4;
      DAT_1003793c = 2;
      DAT_10037968 = 2;
    }
    RunTimer(1,500);
    __chkesp();
    RunTimer(2,6000);
    __chkesp();
    GetDiff(0);
    iVar4 = __chkesp();
    RunTimer(0xd,(5 - iVar4) * 5000);
    __chkesp();
    InitialUpgrade("Gholop1","Melnica(DA)GETRES");
    __chkesp();
    InitialUpgrade("Gholop1","MAINDA");
    __chkesp();
    InitialUpgrade("Gholop1","Melnica(DA)GETRES2");
    __chkesp();
    InitialUpgrade("Gholop1","KUZ01DA");
    __chkesp();
    InitialUpgrade("Gholop1","AKA01DA");
    __chkesp();
    InitialUpgrade("Gholop1","AKA02DA");
    __chkesp();
    InitialUpgrade("Gholop1","AKA03DA");
    __chkesp();
    InitialUpgrade("Gholop1","AKA04DA");
    __chkesp();
    InitialUpgrade("Gholop1","AKA10DA");
    __chkesp();
    InitialUpgrade("Gholop2","Melnica(en)GETRES");
    __chkesp();
    InitialUpgrade("Gholop2","MAINEN");
    __chkesp();
    InitialUpgrade("Gholop2","Melnica(en)GETRES2");
    __chkesp();
    InitialUpgrade("Gholop2","KUZ01EN");
    __chkesp();
    InitialUpgrade("Gholop2","AKA01EN");
    __chkesp();
    InitialUpgrade("Gholop2","AKA02EN");
    __chkesp();
    InitialUpgrade("Gholop2","AKA03EN");
    __chkesp();
    InitialUpgrade("Gholop2","AKA04EN");
    __chkesp();
    InitialUpgrade("Gholop2","AKA10EN");
    __chkesp();
    InitialUpgrade("Gholop4","Melnica(fr)GETRES");
    __chkesp();
    InitialUpgrade("Gholop4","MAINFR");
    __chkesp();
    InitialUpgrade("Gholop4","Melnica(fr)GETRES2");
    __chkesp();
    InitialUpgrade("Gholop4","KUZ01FR");
    __chkesp();
    InitialUpgrade("Gholop4","AKA01FR");
    __chkesp();
    InitialUpgrade("Gholop4","AKA02FR");
    __chkesp();
    InitialUpgrade("Gholop4","AKA03FR");
    __chkesp();
    InitialUpgrade("Gholop4","AKA04FR");
    __chkesp();
    InitialUpgrade("Gholop4","AKA10FR");
    __chkesp();
    uVar1 = _rand();
    if ((uVar1 & 1) == 0) {
      SelectUnits(&DAT_10037850,0);
      __chkesp();
      SelErase(1);
      __chkesp();
    }
    else {
      SelectUnits(&DAT_10037848,0);
      __chkesp();
      SelErase(1);
      __chkesp();
    }
    ClearSelection(1);
    __chkesp();
    uVar1 = _rand();
    if ((uVar1 & 1) == 0) {
      SelectUnits(&DAT_10037840,0);
      __chkesp();
      SelErase(2);
      __chkesp();
    }
    else {
      SelectUnits(&DAT_10037838,0);
      __chkesp();
      SelErase(2);
      __chkesp();
    }
    iVar4 = _rand();
    RunTimer(6,iVar4 % 8000 + 4000);
    __chkesp();
    ClearSelection(2);
    __chkesp();
    SetResource(1,3,5000);
    __chkesp();
    SetResource(1,0,5000);
    __chkesp();
    SetResource(1,2,5000);
    __chkesp();
    SetResource(1,1,5000);
    __chkesp();
    SetResource(1,5,5000);
    __chkesp();
    SetResource(1,4,5000);
    __chkesp();
    GetDiff(0);
    uVar2 = __chkesp();
    StartAI(1,"ENGLAND.0",0,1,2,uVar2);
    __chkesp();
    SetResource(2,3,5000);
    __chkesp();
    SetResource(2,0,5000);
    __chkesp();
    SetResource(2,2,5000);
    __chkesp();
    SetResource(2,1,5000);
    __chkesp();
    SetResource(2,5,5000);
    __chkesp();
    SetResource(2,4,5000);
    __chkesp();
    GetDiff(0);
    uVar2 = __chkesp();
    StartAI(2,"FRANCE.0",0,1,2,uVar2);
    __chkesp();
  }
  SaveSelectedUnits(0,&DAT_100379d8,0);
  __chkesp();
  ClearSelection(0);
  __chkesp();
  TimerDone(6);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    Trigg(6);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      Trigg(0x10);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) != 0) {
        Trigg(0x11);
        uVar1 = __chkesp();
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(6,0);
          __chkesp();
          SetTrigg(8,1);
          __chkesp();
          SetTrigg(0xd,1);
          __chkesp();
          local_14 = _rand();
          local_14 = local_14 & 0x80000003;
          if ((int)local_14 < 0) {
            local_14 = (local_14 - 1 | 0xfffffffc) + 1;
          }
          switch(local_14) {
          case 0:
            CreateObject0(&DAT_10037790,&DAT_10037800,&DAT_10037830,0,&DAT_100379b8,0xc3);
            __chkesp();
            GetTotalAmount0(&DAT_10037850);
            iVar4 = __chkesp();
            if (iVar4 < 1) {
              SelectUnits(&DAT_10037790,0);
              __chkesp();
              SelSendTo(0,&DAT_100379a0,0,0);
              __chkesp();
            }
            else {
              SelectUnits(&DAT_10037790,0);
              __chkesp();
              SelSendTo(0,&DAT_10037970,0x82,0);
              __chkesp();
            }
            break;
          case 1:
            CreateObject0(&DAT_10037790,&DAT_10037800,&DAT_10037830,0,&DAT_100379c0,0xc3);
            __chkesp();
            GetTotalAmount0(&DAT_10037840);
            iVar4 = __chkesp();
            if (iVar4 < 1) {
              SelectUnits(&DAT_10037790,0);
              __chkesp();
              SelSendTo(0,&DAT_100379b0,0x1e,0);
              __chkesp();
            }
            else {
              SelectUnits(&DAT_10037790,0);
              __chkesp();
              SelSendTo(0,&DAT_10037990,100,0);
              __chkesp();
            }
            break;
          case 2:
            CreateObject0(&DAT_10037790,&DAT_10037800,&DAT_10037830,0,&DAT_100379c8,0xc3);
            __chkesp();
            GetTotalAmount0(&DAT_10037840);
            iVar4 = __chkesp();
            if (iVar4 < 1) {
              SelectUnits(&DAT_10037790,0);
              __chkesp();
              SelSendTo(0,&DAT_100379b0,0x1e,0);
              __chkesp();
            }
            else {
              SelectUnits(&DAT_10037790,0);
              __chkesp();
              SelSendTo(0,&DAT_10037990,100,0);
              __chkesp();
            }
            break;
          case 3:
            CreateObject0(&DAT_10037790,&DAT_10037800,&DAT_10037830,0,&DAT_100379d0,0xc3);
            __chkesp();
            GetTotalAmount0(&DAT_10037850);
            iVar4 = __chkesp();
            if (iVar4 < 1) {
              SelectUnits(&DAT_10037790,0);
              __chkesp();
              SelSendTo(0,&DAT_100379a0,0,0);
              __chkesp();
            }
            else {
              SelectUnits(&DAT_10037790,0);
              __chkesp();
              SelSendTo(0,&DAT_10037970,0x82,0);
              __chkesp();
            }
          }
          GetResource(0,1);
          DAT_100378dc = __chkesp();
          GetDiff(0);
          iVar4 = __chkesp();
          local_18 = DAT_100378dc * (iVar4 + 1);
          lVar6 = __ftol();
          AddResource(0,1,(int)lVar6);
          __chkesp();
          RunTimer(7,0x44c);
          __chkesp();
        }
      }
    }
  }
  Trigg(6);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) == 0) {
    Trigg(7);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      TimerDoneFirst(7);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) == 0) {
        GetTotalAmount0(&DAT_10037790);
        iVar4 = __chkesp();
        if (iVar4 != 0) goto LAB_1000337b;
      }
      GetDiff(0);
      iVar4 = __chkesp();
      local_1c = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      ShowPageParam("#PAGE4",(int)lVar6);
      __chkesp();
      GetTotalAmount0(&DAT_10037790);
      iVar4 = __chkesp();
      if (0 < iVar4) {
        SelectUnits(&DAT_10037790,0);
        __chkesp();
        SelDie(0);
        __chkesp();
      }
      GetDiff(0);
      iVar4 = __chkesp();
      local_20 = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      AddResource(0,1,(int)lVar6);
      __chkesp();
      SetTrigg(6,1);
      __chkesp();
      iVar4 = _rand();
      RunTimer(6,iVar4 % 8000 + 4000);
      __chkesp();
    }
  }
LAB_1000337b:
  Trigg(7);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_10037970,&DAT_10037790);
    iVar4 = __chkesp();
    if (0 < iVar4) {
      SetTrigg(7,0);
      __chkesp();
      GetUnitsByNation(&DAT_10037790,7);
      iVar4 = __chkesp();
      if (iVar4 < 1) {
        SelectUnits(&DAT_10037790,0);
        __chkesp();
        SelChangeNation(0,6);
        __chkesp();
      }
      else {
        SelectUnits(&DAT_10037790,0);
        __chkesp();
        SelChangeNation(7,6);
        __chkesp();
      }
      SelectUnits(&DAT_10037790,0);
      __chkesp();
      SelSendTo(6,&DAT_10037a20,0x8c,0);
      __chkesp();
      SelSendTo(6,&DAT_10037978,0,2);
      __chkesp();
      GetDiff(0);
      iVar4 = __chkesp();
      local_24 = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      ShowPageParam("#PAGE5",(int)lVar6);
      __chkesp();
    }
  }
  Trigg(7);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_100379a0,&DAT_10037790);
    iVar4 = __chkesp();
    if (0 < iVar4) {
      SetTrigg(7,0);
      __chkesp();
      GetUnitsByNation(&DAT_10037790,7);
      iVar4 = __chkesp();
      if (iVar4 < 1) {
        SelectUnits(&DAT_10037790,0);
        __chkesp();
        SelChangeNation(0,6);
        __chkesp();
      }
      else {
        SelectUnits(&DAT_10037790,0);
        __chkesp();
        SelChangeNation(7,6);
        __chkesp();
      }
      SelectUnits(&DAT_10037790,0);
      __chkesp();
      SelSendTo(6,&DAT_10037a18,0xdc,0);
      __chkesp();
      SelSendTo(6,&DAT_100379a8,0,2);
      __chkesp();
      GetDiff(0);
      iVar4 = __chkesp();
      local_28 = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      ShowPageParam("#PAGE5",(int)lVar6);
      __chkesp();
    }
  }
  Trigg(7);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_10037990,&DAT_10037790);
    iVar4 = __chkesp();
    if (0 < iVar4) {
      SetTrigg(7,0);
      __chkesp();
      GetUnitsByNation(&DAT_10037790,7);
      iVar4 = __chkesp();
      if (iVar4 < 1) {
        SelectUnits(&DAT_10037790,0);
        __chkesp();
        SelChangeNation(0,6);
        __chkesp();
      }
      else {
        SelectUnits(&DAT_10037790,0);
        __chkesp();
        SelChangeNation(7,6);
        __chkesp();
      }
      SelectUnits(&DAT_10037790,0);
      __chkesp();
      SelSendTo(6,&DAT_10037998,0,0);
      __chkesp();
      GetDiff(0);
      iVar4 = __chkesp();
      local_2c = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      ShowPageParam("#PAGE5",(int)lVar6);
      __chkesp();
    }
  }
  Trigg(7);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_100379b0,&DAT_10037790);
    iVar4 = __chkesp();
    if (0 < iVar4) {
      SetTrigg(7,0);
      __chkesp();
      GetUnitsByNation(&DAT_10037790,7);
      iVar4 = __chkesp();
      if (iVar4 < 1) {
        SelectUnits(&DAT_10037790,0);
        __chkesp();
        SelChangeNation(0,6);
        __chkesp();
      }
      else {
        SelectUnits(&DAT_10037790,0);
        __chkesp();
        SelChangeNation(7,6);
        __chkesp();
      }
      SelectUnits(&DAT_10037790,0);
      __chkesp();
      SelSendTo(6,&DAT_10037a28,0,0);
      __chkesp();
      GetDiff(0);
      iVar4 = __chkesp();
      local_30 = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      ShowPageParam("#PAGE5",(int)lVar6);
      __chkesp();
    }
  }
  Trigg(6);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) == 0) {
    GetTotalAmount0(&DAT_10037790);
    iVar4 = __chkesp();
    if (iVar4 == 0) {
      ShowPage("#PAGE6");
      __chkesp();
      GetDiff(0);
      iVar4 = __chkesp();
      local_34 = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      AddResource(0,1,(int)lVar6);
      __chkesp();
      SetTrigg(6,1);
      __chkesp();
      SetTrigg(7,1);
      __chkesp();
      iVar4 = _rand();
      RunTimer(6,iVar4 % 8000 + 4000);
      __chkesp();
    }
  }
  Trigg(8);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_10037978,&DAT_10037790);
    iVar4 = __chkesp();
    if (0 < iVar4) {
      SetTrigg(8,0);
      __chkesp();
      ShowPage("#PAGE7");
      __chkesp();
      GetDiff(0);
      iVar4 = __chkesp();
      local_38 = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      AddResource(1,1,(int)lVar6);
      __chkesp();
      SelectUnits(&DAT_10037790,0);
      __chkesp();
      SelChangeNation(6,1);
      __chkesp();
      SetTrigg(6,1);
      __chkesp();
      SetTrigg(7,1);
      __chkesp();
      iVar4 = _rand();
      RunTimer(6,iVar4 % 8000 + 4000);
      __chkesp();
    }
  }
  Trigg(8);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_100379a8,&DAT_10037790);
    iVar4 = __chkesp();
    if (0 < iVar4) {
      SetTrigg(8,0);
      __chkesp();
      ShowPage("#PAGE7");
      __chkesp();
      GetDiff(0);
      iVar4 = __chkesp();
      local_3c = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      AddResource(1,1,(int)lVar6);
      __chkesp();
      SelectUnits(&DAT_10037790,0);
      __chkesp();
      SelChangeNation(6,1);
      __chkesp();
      SetTrigg(6,1);
      __chkesp();
      SetTrigg(7,1);
      __chkesp();
      iVar4 = _rand();
      RunTimer(6,iVar4 % 8000 + 4000);
      __chkesp();
    }
  }
  Trigg(8);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_10037998,&DAT_10037790);
    iVar4 = __chkesp();
    if (0 < iVar4) {
      SetTrigg(8,0);
      __chkesp();
      ShowPage("#PAGE7");
      __chkesp();
      GetDiff(0);
      iVar4 = __chkesp();
      local_40 = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      AddResource(2,1,(int)lVar6);
      __chkesp();
      SelectUnits(&DAT_10037790,0);
      __chkesp();
      SelChangeNation(6,2);
      __chkesp();
      SetTrigg(6,1);
      __chkesp();
      SetTrigg(7,1);
      __chkesp();
      iVar4 = _rand();
      RunTimer(6,iVar4 % 8000 + 4000);
      __chkesp();
    }
  }
  Trigg(8);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_10037a28,&DAT_10037790);
    iVar4 = __chkesp();
    if (0 < iVar4) {
      SetTrigg(8,0);
      __chkesp();
      ShowPage("#PAGE7");
      __chkesp();
      GetDiff(0);
      iVar4 = __chkesp();
      local_44 = DAT_100378dc * (iVar4 + 1);
      lVar6 = __ftol();
      AddResource(2,1,(int)lVar6);
      __chkesp();
      SelectUnits(&DAT_10037790,0);
      __chkesp();
      SelChangeNation(6,2);
      __chkesp();
      SetTrigg(6,1);
      __chkesp();
      SetTrigg(7,1);
      __chkesp();
      iVar4 = _rand();
      RunTimer(6,iVar4 % 8000 + 4000);
      __chkesp();
    }
  }
  ClearSelection(0);
  __chkesp();
  GetTotalAmount0(&DAT_100379d8);
  iVar4 = __chkesp();
  if (0 < iVar4) {
    SelectUnits(&DAT_100379d8,0);
    __chkesp();
  }
  TimerDoneFirst(1);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    Trigg(0x60);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x60,0);
      __chkesp();
      ShowPage("#PAGE0A");
      __chkesp();
    }
  }
  Trigg(0x5f);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    TimerDoneFirst(2);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) == 0) {
      GetUnitsAmount0(&DAT_10037960,0);
      iVar4 = __chkesp();
      if (iVar4 < 1) {
        GetUnitsAmount0(&DAT_100379f0,0);
        iVar4 = __chkesp();
        if (iVar4 < 1) goto LAB_100040b4;
      }
    }
    SetTrigg(0x5f,0);
    __chkesp();
    ShowPage("#PAGE2");
    __chkesp();
    EnableMission(0x44);
    __chkesp();
    EnableMission(0x46);
    __chkesp();
    SetLightSpot(&DAT_10037950,3,1);
    __chkesp();
    SetLightSpot(&DAT_10037958,3,2);
    __chkesp();
  }
LAB_100040b4:
  Trigg(1);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) == 0) {
    GetUnitsAmount1(&DAT_10037950,&DAT_10037828);
    iVar4 = __chkesp();
    GetTotalAmount0(&DAT_10037828);
    iVar3 = __chkesp();
    if (iVar4 < iVar3) {
      SetTrigg(1,1);
      __chkesp();
      SelectUnits(&DAT_10037828,0);
      __chkesp();
      SelSendTo(5,&DAT_10037a00,0x41,0);
      __chkesp();
    }
  }
  Trigg(1);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_10037950,&DAT_10037828);
    iVar4 = __chkesp();
    GetTotalAmount0(&DAT_10037828);
    iVar3 = __chkesp();
    if (iVar4 == iVar3) {
      SetTrigg(1,0);
      __chkesp();
      SelectUnits(&DAT_10037828,0);
      __chkesp();
      Patrol(5,&DAT_100379f8,0);
      __chkesp();
    }
  }
  Trigg(2);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10037828);
    iVar4 = __chkesp();
    if (iVar4 == 0) {
      GetUnitsAmount0(&DAT_10037950,0);
      iVar4 = __chkesp();
      if (0 < iVar4) {
        SetTrigg(2,0);
        __chkesp();
        GetDiff(0);
        iVar4 = __chkesp();
        ShowPageParam("#PAGE0",iVar4 * -1000 + 10000);
        __chkesp();
        GetDiff(0);
        iVar4 = __chkesp();
        AddResource(0,1,iVar4 * -1000 + 10000);
        __chkesp();
        DisableMission(0x46);
        __chkesp();
        EnableMission(0x47);
        __chkesp();
      }
    }
  }
  Trigg(0x14);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) == 0) {
    GetUnitsAmount1(&DAT_10037958,&DAT_10037820);
    iVar4 = __chkesp();
    GetTotalAmount0(&DAT_10037820);
    iVar3 = __chkesp();
    if (iVar4 < iVar3) {
      SetTrigg(0x14,1);
      __chkesp();
      SelectUnits(&DAT_10037820,0);
      __chkesp();
      SelSendTo(5,&DAT_10037a10,0xaa,0);
      __chkesp();
    }
  }
  Trigg(0x14);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_10037958,&DAT_10037820);
    iVar4 = __chkesp();
    GetTotalAmount0(&DAT_10037820);
    iVar3 = __chkesp();
    if (iVar4 == iVar3) {
      SetTrigg(0x14,0);
      __chkesp();
      SelectUnits(&DAT_10037820,0);
      __chkesp();
      Patrol(5,&DAT_10037a08,0);
      __chkesp();
    }
  }
  Trigg(0x15);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_10037820);
    iVar4 = __chkesp();
    if (iVar4 == 0) {
      GetUnitsAmount0(&DAT_10037958,0);
      iVar4 = __chkesp();
      if (0 < iVar4) {
        SetTrigg(0x15,0);
        __chkesp();
        GetDiff(0);
        iVar4 = __chkesp();
        ShowPageParam("#PAGE0",iVar4 * -1000 + 12000);
        __chkesp();
        GetDiff(0);
        iVar4 = __chkesp();
        AddResource(0,1,iVar4 * -1000 + 12000);
        __chkesp();
        DisableMission(0x44);
        __chkesp();
        EnableMission(0x45);
        __chkesp();
      }
    }
  }
  Trigg(0x62);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    NationIsErased(0);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x62,0);
      __chkesp();
      GetResource(0,3);
      iVar4 = __chkesp();
      if (iVar4 < 1) {
        ShowPage("#PAGE1A");
        __chkesp();
      }
      else {
        ShowPage("#PAGE1");
        __chkesp();
      }
      LooseGame();
      __chkesp();
    }
  }
  Trigg(0x62);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount0(&DAT_10037910,0);
    iVar4 = __chkesp();
    if (iVar4 < 5) {
      SetTrigg(0x62,0);
      __chkesp();
      ShowPage("#PAGE1B");
      __chkesp();
      LooseGame();
      __chkesp();
    }
  }
  Trigg(0xf);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) == 0) {
    Trigg(2);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) == 0) {
      Trigg(0x15);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) == 0) {
        Trigg(0x61);
        uVar1 = __chkesp();
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x61,0);
          __chkesp();
          ShowPage("#PAGE9");
          __chkesp();
          ShowVictory();
          __chkesp();
        }
      }
    }
  }
  Trigg(2);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    Trigg(9);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(9,0);
      __chkesp();
      for (local_8 = 0; local_8 < DAT_10037888; local_8 = local_8 + 1) {
        ProduceUnitFast(&DAT_100377f0,&DAT_10037930,&DAT_100377c8,1);
        __chkesp();
      }
    }
    Trigg(10);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      CheckProduction(&DAT_100377f0);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) != 0) {
        RunTimer(3,500);
        __chkesp();
        SetTrigg(10,0);
        __chkesp();
      }
    }
    Trigg(0x5f);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) == 0) {
      Trigg(4);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) != 0) {
        TimerDone(3);
        uVar1 = __chkesp();
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(4,0);
          __chkesp();
          SetTrigg(10,1);
          __chkesp();
          SetTrigg(9,1);
          __chkesp();
          FreeTimer(3);
          __chkesp();
          RunTimer(8,10000);
          __chkesp();
          RemoveGroup(&DAT_100377c8,&DAT_100377e0);
          __chkesp();
          SelectUnits(&DAT_100377e0,0);
          __chkesp();
          SetStandGround(5,1);
          __chkesp();
          ClearSelection(5);
          __chkesp();
        }
      }
    }
    AttackBuildingsInZone(&DAT_100377e0,&DAT_10037980,0);
    __chkesp();
    Trigg(0x5f);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) == 0) {
      Trigg(4);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) == 0) {
        GetTotalAmount0(&DAT_100377e0);
        iVar4 = __chkesp();
        if (iVar4 != 0) {
          TimerDoneFirst(8);
          uVar1 = __chkesp();
          if ((uVar1 & 0xff) == 0) goto LAB_10004a30;
        }
        FreeTimer(8);
        __chkesp();
        SetTrigg(4,1);
        __chkesp();
      }
    }
  }
LAB_10004a30:
  Trigg(0x15);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    Trigg(0xb);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      __chkesp();
      for (local_c = 0; local_c < DAT_100378d8; local_c = local_c + 1) {
        ProduceUnitFast(&DAT_100377f8,&DAT_10037930,&DAT_100377c0,1);
        __chkesp();
      }
    }
    Trigg(0xc);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      CheckProduction(&DAT_100377f8);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) != 0) {
        RunTimer(4,500);
        __chkesp();
        SetTrigg(0xc,0);
        __chkesp();
      }
    }
    Trigg(0x5f);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) == 0) {
      Trigg(5);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) != 0) {
        TimerDone(4);
        uVar1 = __chkesp();
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(5,0);
          __chkesp();
          SetTrigg(0xc,1);
          __chkesp();
          SetTrigg(0xb,1);
          __chkesp();
          FreeTimer(4);
          __chkesp();
          RunTimer(5,10000);
          __chkesp();
          RemoveGroup(&DAT_100377c0,&DAT_100377d0);
          __chkesp();
          SelectUnits(&DAT_100377d0,0);
          __chkesp();
          SetStandGround(5,1);
          __chkesp();
          ClearSelection(5);
          __chkesp();
        }
      }
    }
    AttackBuildingsInZone(&DAT_100377d0,&DAT_10037988,0);
    __chkesp();
    Trigg(0x5f);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) == 0) {
      Trigg(5);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) == 0) {
        GetTotalAmount0(&DAT_100377d0);
        iVar4 = __chkesp();
        if (iVar4 != 0) {
          TimerDoneFirst(5);
          uVar1 = __chkesp();
          if ((uVar1 & 0xff) == 0) goto LAB_10004d1d;
        }
        FreeTimer(5);
        __chkesp();
        SetTrigg(5,1);
        __chkesp();
      }
    }
  }
LAB_10004d1d:
  TimerDoneFirst(0xd);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    Trigg(2);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) == 0) {
      Trigg(0x15);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) == 0) goto LAB_10004f41;
    }
    GetDiff(0);
    local_48 = __chkesp();
    switch(local_48) {
    case 0:
      DAT_10037888 = DAT_10037888 + 1;
      DAT_100378d8 = DAT_100378d8 + 1;
      DAT_10037908 = DAT_10037908 + 1;
      DAT_10037938 = DAT_10037938 + 1;
      DAT_1003793c = DAT_1003793c + 1;
      DAT_10037968 = DAT_10037968 + 1;
      break;
    case 1:
      DAT_10037888 = DAT_10037888 + 1;
      DAT_100378d8 = DAT_100378d8 + 1;
      DAT_10037908 = DAT_10037908 + 3;
      DAT_10037938 = DAT_10037938 + 2;
      DAT_1003793c = DAT_1003793c + 1;
      DAT_10037968 = DAT_10037968 + 2;
      break;
    case 2:
      DAT_10037888 = DAT_10037888 + 1;
      DAT_100378d8 = DAT_100378d8 + 1;
      DAT_10037908 = DAT_10037908 + 4;
      DAT_10037938 = DAT_10037938 + 4;
      DAT_1003793c = DAT_1003793c + 2;
      DAT_10037968 = DAT_10037968 + 1;
      break;
    case 3:
      DAT_10037888 = DAT_10037888 + 2;
      DAT_100378d8 = DAT_100378d8 + 2;
      DAT_10037908 = DAT_10037908 + 5;
      DAT_10037938 = DAT_10037938 + 5;
      DAT_1003793c = DAT_1003793c + 3;
      DAT_10037968 = DAT_10037968 + 2;
    }
    GetDiff(0);
    iVar4 = __chkesp();
    RunTimer(0xd,(5 - iVar4) * 5000);
    __chkesp();
  }
LAB_10004f41:
  Trigg(0x10);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    NationIsErased(1);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x10,0);
      __chkesp();
      ShowPage("#PAGE8A");
      __chkesp();
    }
  }
  Trigg(0x11);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    NationIsErased(2);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x11,0);
      __chkesp();
      ShowPage("#PAGE8B");
      __chkesp();
    }
  }
  Trigg(0xf);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    Trigg(0x10);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) == 0) {
      Trigg(0x11);
      uVar1 = __chkesp();
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0xf,0);
        __chkesp();
        ShowPage("#PAGE8");
        __chkesp();
        DisableMission(0x42);
        __chkesp();
        EnableMission(0x43);
        __chkesp();
      }
    }
  }
  local_8 = 0x100050cf;
  __chkesp();
  return;
}



// Function: FUN_10005e20 @ 0x10005e20

void __cdecl FUN_10005e20(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006480();
  pDVar1[5] = param_1;
  return;
}



// Function: _rand @ 0x10005e30

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006480();
  pDVar1[5] = pDVar1[5] * 0x343fd + 0x269ec3;
  return pDVar1[5] >> 0x10 & 0x7fff;
}



// Function: FUN_10005e70 @ 0x10005e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_10005e70(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  int local_dc;
  _TIME_ZONE_INFORMATION local_d4;
  _SYSTEMTIME local_28;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_28);
  GetSystemTime(&local_14);
  if (((((uint)local_14.wMinute == _DAT_10037ae8 >> 0x10) && (local_14.wHour == DAT_10037ae8)) &&
      (local_14.wDay == DAT_10037ae6)) &&
     ((local_14.wMonth == DAT_10037ae2 && (local_14.wYear == DAT_10037ae0)))) {
    local_dc = DAT_10037ad8;
  }
  else {
    DVar1 = GetTimeZoneInformation(&local_d4);
    if (DVar1 == 0xffffffff) {
      local_dc = -1;
    }
    else if (((DVar1 == 2) && ((local_d4.DaylightDate._2_4_ & 0xffff) != 0)) &&
            (local_d4.DaylightBias != 0)) {
      local_dc = 1;
    }
    else {
      local_dc = 0;
    }
    _DAT_10037ae0 = CONCAT22(local_14.wMonth,local_14.wYear);
    _DAT_10037ae4 = CONCAT22(local_14.wDay,local_14.wDayOfWeek);
    _DAT_10037ae8 = CONCAT22(local_14.wMinute,local_14.wHour);
    _DAT_10037aec = CONCAT22(local_14.wMilliseconds,local_14.wSecond);
  }
  DAT_10037ad8 = local_dc;
  iVar2 = FUN_10006650((uint)local_28.wYear,(uint)local_28.wMonth,(uint)local_28.wDay,
                       (uint)local_28.wHour,(uint)local_28.wMinute,(uint)local_28.wSecond,local_dc);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return iVar2;
}



// Function: __chkesp @ 0x10006000

/* Library Function - Single Match
    __chkesp
   
   Library: Visual Studio */

undefined4 __chkesp(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined4 uVar3;
  bool in_ZF;
  
  if (in_ZF) {
    return in_EAX;
  }
  iVar2 = FUN_10006850(1,0x10032574,0x2a,&DAT_10032584,
                       (byte *)
                       "The value of ESP was not properly saved across a function call.  This is usually a result of calling a function declared with one calling convention with a function pointer declared with a different calling convention. "
                      );
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return in_EAX;
}



// Function: FUN_10006040 @ 0x10006040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006040(void)

{
  FUN_10006080();
  _DAT_10037af4 = __ms_p5_mp_test_fdiv();
  __setdefaultprecision();
  return;
}



// Function: FUN_10006070 @ 0x10006070

void FUN_10006070(void)

{
  return;
}



// Function: FUN_10006080 @ 0x10006080

void FUN_10006080(void)

{
  PTR___fptrap_10035a74 = __cfltcvt;
  PTR___fptrap_10035a78 = __cropzeros;
  PTR___fptrap_10035a7c = __fassign;
  PTR___fptrap_10035a80 = FUN_10006fc0;
  PTR___fptrap_10035a84 = __positive;
  PTR___fptrap_10035a88 = __cfltcvt;
  return;
}



// Function: FUN_100060d0 @ 0x100060d0

undefined4 __cdecl FUN_100060d0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10037af0;
  DAT_10037af0 = param_1;
  return uVar1;
}



// Function: __ftol @ 0x100060ec

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Function: FUN_10006120 @ 0x10006120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10006120(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    DAT_10037b14 = GetVersion();
    iVar1 = FUN_1000a4d0(1);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_10037b20 = DAT_10037b14 >> 8 & 0xff;
    DAT_10037b1c = DAT_10037b14 & 0xff;
    _DAT_10037b18 = DAT_10037b1c * 0x100 + _DAT_10037b20;
    DAT_10037b14 = DAT_10037b14 >> 0x10;
    iVar1 = FUN_100063a0();
    if (iVar1 == 0) {
      FUN_1000a520();
      return 0;
    }
    DAT_10039648 = GetCommandLineA();
    DAT_10037afc = FUN_1000a2b0();
    FUN_100078f0();
    FUN_10009da0();
    FUN_10009c50();
    FUN_100076f0();
    DAT_10037af8 = DAT_10037af8 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_10037af8 < 1) {
      return 0;
    }
    DAT_10037af8 = DAT_10037af8 + -1;
    if (DAT_10037b4c == 0) {
      FUN_10007770();
    }
    uVar2 = FUN_100091f0(-1);
    if ((uVar2 & 0x20) != 0) {
      FUN_10009b00();
    }
    __ioterm();
    FUN_10006430();
    FUN_1000a520();
  }
  else if (param_2 == 3) {
    FUN_10006520((LPVOID)0x0);
  }
  return 1;
}



// Function: entry @ 0x10006260

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  if ((param_2 == 0) && (DAT_10037af8 == 0)) {
    local_8 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_10039658 != (code *)0x0) {
        local_8 = (*DAT_10039658)(param_1,param_2,param_3);
      }
      if (local_8 != 0) {
        local_8 = FUN_10006120(param_1,param_2);
      }
      if (local_8 == 0) {
        return 0;
      }
    }
    local_8 = thunk_FUN_100020d0(param_1,param_2);
    if ((param_2 == 1) && (local_8 == 0)) {
      FUN_10006120(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = FUN_10006120(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 0;
      }
      if ((local_8 != 0) && (DAT_10039658 != (code *)0x0)) {
        local_8 = (*DAT_10039658)(param_1,param_2,param_3);
      }
    }
  }
  return local_8;
}



// Function: __amsg_exit @ 0x10006360

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10037b04 == 1) || ((DAT_10037b04 == 0 && (DAT_10037b08 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_1000a610(param_1);
  (*(code *)PTR___exit_10035a44)(0xff);
  return;
}



// Function: FUN_100063a0 @ 0x100063a0

undefined4 FUN_100063a0(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000a820();
  DAT_10035a48 = TlsAlloc();
  if (((DAT_10035a48 != 0xffffffff) &&
      (lpTlsValue = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0x61), lpTlsValue != (DWORD *)0x0))
     && (BVar1 = TlsSetValue(DAT_10035a48,lpTlsValue), BVar1 != 0)) {
    FUN_10006460((int)lpTlsValue);
    DVar2 = GetCurrentThreadId();
    *lpTlsValue = DVar2;
    lpTlsValue[1] = 0xffffffff;
    return 1;
  }
  return 0;
}



// Function: FUN_10006430 @ 0x10006430

void FUN_10006430(void)

{
  FUN_1000a860();
  if (DAT_10035a48 != 0xffffffff) {
    TlsFree(DAT_10035a48);
    DAT_10035a48 = 0xffffffff;
  }
  return;
}



// Function: FUN_10006460 @ 0x10006460

void __cdecl FUN_10006460(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10035c30;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10006480 @ 0x10006480

DWORD * FUN_10006480(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *local_8;
  
  dwErrCode = GetLastError();
  local_8 = TlsGetValue(DAT_10035a48);
  if (local_8 == (DWORD *)0x0) {
    local_8 = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0xe7);
    if (local_8 != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10035a48,local_8);
      if (BVar1 != 0) {
        FUN_10006460((int)local_8);
        DVar2 = GetCurrentThreadId();
        *local_8 = DVar2;
        local_8[1] = 0xffffffff;
        goto LAB_10006507;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10006507:
  SetLastError(dwErrCode);
  return local_8;
}



// Function: FUN_10006520 @ 0x10006520

void __cdecl FUN_10006520(LPVOID param_1)

{
  if (DAT_10035a48 != 0xffffffff) {
    if (param_1 == (LPVOID)0x0) {
      param_1 = TlsGetValue(DAT_10035a48);
    }
    if (param_1 != (LPVOID)0x0) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_10008770(*(void **)((int)param_1 + 0x24),2);
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_10008770(*(void **)((int)param_1 + 0x28),2);
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_10008770(*(void **)((int)param_1 + 0x30),2);
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_10008770(*(void **)((int)param_1 + 0x38),2);
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_10008770(*(void **)((int)param_1 + 0x40),2);
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_10008770(*(void **)((int)param_1 + 0x44),2);
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10035c30) {
        FUN_10008770(*(void **)((int)param_1 + 0x50),2);
      }
      FUN_10008770(param_1,2);
    }
    TlsSetValue(DAT_10035a48,(LPVOID)0x0);
  }
  return;
}



// Function: FUN_10006630 @ 0x10006630

void FUN_10006630(void)

{
  GetCurrentThreadId();
  return;
}



// Function: FUN_10006640 @ 0x10006640

void FUN_10006640(void)

{
  GetCurrentThread();
  return;
}



// Function: FUN_10006650 @ 0x10006650

int __cdecl
FUN_10006650(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int local_30;
  int local_2c [2];
  int local_24;
  int local_1c;
  uint local_18;
  int local_10;
  int local_8;
  
  uVar1 = param_1 - 0x76c;
  if (((int)uVar1 < 0x46) || (0x8a < (int)uVar1)) {
    local_8 = -1;
  }
  else {
    local_30 = param_3 + *(int *)(&DAT_10035d9c + param_2 * 4);
    if (((uVar1 & 3) == 0) && (2 < param_2)) {
      local_30 = local_30 + 1;
    }
    local_8 = ((((param_1 + -0x76d >> 2) + -0x11 + local_30 + (param_1 + -0x7b2) * 0x16d) * 0x18 +
               param_4) * 0x3c + param_5) * 0x3c + param_6;
    FUN_1000ac00();
    local_8 = local_8 + DAT_10035cb8;
    local_10 = local_30;
    local_1c = param_2 + -1;
    local_24 = param_4;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_10035cbc != 0)) &&
        (local_18 = uVar1, iVar2 = FUN_1000b010(local_2c), iVar2 != 0)))) {
      local_8 = local_8 + DAT_10035cc0;
    }
  }
  return local_8;
}



// Function: FUN_10006740 @ 0x10006740

void FUN_10006740(void)

{
  DebugBreak();
  return;
}



// Function: FUN_10006750 @ 0x10006750

undefined4 __cdecl FUN_10006750(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0xffffffff) {
    uVar1 = *(undefined4 *)(&DAT_10035a50 + param_1 * 4);
  }
  else if ((param_2 & 0xfffffff8) == 0) {
    uVar1 = *(undefined4 *)(&DAT_10035a50 + param_1 * 4);
    *(uint *)(&DAT_10035a50 + param_1 * 4) = param_2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: __CrtSetReportFile @ 0x100067b0

/* Library Function - Single Match
    __CrtSetReportFile
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __CrtSetReportFile(int param_1,int param_2)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xfffffffe;
  }
  else if (param_2 == -6) {
    uVar1 = *(undefined4 *)(&DAT_10035a5c + param_1 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_10035a5c + param_1 * 4);
    if (param_2 == -4) {
      pvVar2 = GetStdHandle(0xfffffff5);
      *(HANDLE *)(&DAT_10035a5c + param_1 * 4) = pvVar2;
    }
    else if (param_2 == -5) {
      pvVar2 = GetStdHandle(0xfffffff4);
      *(HANDLE *)(&DAT_10035a5c + param_1 * 4) = pvVar2;
    }
    else {
      *(int *)(&DAT_10035a5c + param_1 * 4) = param_2;
    }
  }
  return uVar1;
}



// Function: FUN_10006830 @ 0x10006830

undefined4 __cdecl FUN_10006830(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1003963c;
  DAT_1003963c = param_1;
  return uVar1;
}



// Function: FUN_10006850 @ 0x10006850

undefined4 __cdecl
FUN_10006850(int param_1,int param_2,int param_3,undefined4 param_4,byte *param_5)

{
  bool bVar1;
  LONG LVar2;
  size_t nNumberOfBytesToWrite;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *puVar4;
  uint *local_302c;
  char local_3028 [20];
  DWORD local_3014;
  HMODULE local_3010;
  undefined1 local_300c;
  undefined4 local_300b;
  undefined1 local_200c;
  undefined4 local_200b;
  undefined4 local_100c;
  undefined4 *local_1008;
  undefined1 local_1004;
  undefined4 local_1003;
  undefined4 uStackY_24;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  
  FUN_1000bba0();
  local_300c = 0;
  puVar4 = &local_300b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_200c = '\0';
  puVar4 = &local_200b;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_1004 = 0;
  puVar4 = &local_1003;
  for (iVar3 = 0x3ff; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_1008 = (undefined4 *)&stack0x00000018;
  if ((param_1 < 0) || (2 < param_1)) {
    local_100c = 0xffffffff;
  }
  else if ((param_1 == 2) && (LVar2 = InterlockedIncrement((LONG *)&DAT_10035a4c), 0 < LVar2)) {
    if ((DAT_10037b0c == (FARPROC)0x0) &&
       ((local_3010 = LoadLibraryA("user32.dll"), local_3010 == (HMODULE)0x0 ||
        (DAT_10037b0c = GetProcAddress(local_3010,"wsprintfA"), DAT_10037b0c == (FARPROC)0x0)))) {
      local_100c = 0xffffffff;
    }
    else {
      (*DAT_10037b0c)();
      OutputDebugStringA(&local_200c);
      InterlockedDecrement((LONG *)&DAT_10035a4c);
      FUN_10006740();
      local_100c = 0xffffffff;
    }
  }
  else {
    if ((param_5 != (byte *)0x0) &&
       (iVar3 = FUN_1000baa0(&local_1004,0xfed,param_5,local_1008), iVar3 < 0)) {
      FUN_1000b9b0((uint *)&local_1004,(uint *)"_CrtDbgReport: String too long or IO Error");
    }
    if (param_1 == 2) {
      if (param_5 == (byte *)0x0) {
        local_302c = (uint *)0x100326a8;
      }
      else {
        local_302c = (uint *)0x100326bc;
      }
      FUN_1000b9b0((uint *)&local_300c,local_302c);
    }
    FUN_1000b9c0((uint *)&local_300c,(uint *)&local_1004);
    if (param_1 == 2) {
      if ((uRam10035a58 & 1) != 0) {
        FUN_1000b9c0((uint *)&local_300c,(uint *)&DAT_100326a4);
      }
      FUN_1000b9c0((uint *)&local_300c,(uint *)&DAT_100326a0);
    }
    if (param_2 == 0) {
      FUN_1000b9b0((uint *)&local_200c,(uint *)&local_300c);
    }
    else {
      uStackY_24 = 0x10006a65;
      iVar3 = FUN_1000b8b0(&local_200c,0x1000,(byte *)"%s(%d) : %s");
      if (iVar3 < 0) {
        FUN_1000b9b0((uint *)&local_200c,(uint *)"_CrtDbgReport: String too long or IO Error");
      }
    }
    if ((DAT_1003963c == (code *)0x0) || (iVar3 = (*DAT_1003963c)(), iVar3 == 0)) {
      if (((*(uint *)(&DAT_10035a50 + param_1 * 4) & 1) != 0) &&
         (*(int *)(&DAT_10035a5c + param_1 * 4) != -1)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_3014;
        nNumberOfBytesToWrite = _strlen(&local_200c);
        WriteFile(*(HANDLE *)(&DAT_10035a5c + param_1 * 4),&local_200c,nNumberOfBytesToWrite,
                  lpNumberOfBytesWritten,lpOverlapped);
      }
      if ((*(uint *)(&DAT_10035a50 + param_1 * 4) & 2) != 0) {
        OutputDebugStringA(&local_200c);
      }
      if ((*(uint *)(&DAT_10035a50 + param_1 * 4) & 4) == 0) {
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_10035a4c);
        }
        local_100c = 0;
      }
      else {
        if (param_3 != 0) {
          __itoa(param_3,local_3028,10);
        }
        bVar1 = FUN_10006be0();
        local_100c = CONCAT31(extraout_var,bVar1);
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_10035a4c);
        }
      }
    }
    else if (param_1 == 2) {
      InterlockedDecrement((LONG *)&DAT_10035a4c);
    }
  }
  return local_100c;
}



// Function: FUN_10006be0 @ 0x10006be0

bool FUN_10006be0(void)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  char *in_stack_00000010;
  int in_stack_00000014;
  uint local_1110 [1024];
  int local_110;
  uint local_10c [50];
  undefined4 uStackY_44;
  uint *_Str;
  
  FUN_1000bba0();
  if ((in_stack_00000014 == 0) &&
     (iVar1 = FUN_10006850(2,0x10032880,0x1da,0,(byte *)"szUserMessage != NULL"), iVar1 == 1)) {
    FUN_10006740();
  }
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_10c,0x104);
  if (DVar2 == 0) {
    FUN_1000b9b0(local_10c,(uint *)"<program name unknown>");
  }
  _Str = local_10c;
  sVar3 = _strlen((char *)_Str);
  if (0x40 < sVar3) {
    _strlen((char *)_Str);
    _strncpy((char *)0x3,"...",3);
  }
  if ((in_stack_00000010 != (char *)0x0) && (sVar3 = _strlen(in_stack_00000010), 0x40 < sVar3)) {
    sVar3 = _strlen(in_stack_00000010);
    _strncpy(in_stack_00000010 + (sVar3 - 0x40),"...",3);
  }
  uStackY_44 = 0x10006e82;
  iVar1 = FUN_1000b8b0((undefined1 *)local_1110,0x1000,
                       (byte *)
                       "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)"
                      );
  if (iVar1 < 0) {
    FUN_1000b9b0(local_1110,(uint *)"_CrtDbgReport: String too long or IO Error");
  }
  local_110 = FUN_1000c160(local_1110,"Microsoft Visual C++ Debug Library",0x12012);
  if (local_110 == 3) {
    FUN_1000bea0(0x16);
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  return local_110 == 4;
}



// Function: __setdefaultprecision @ 0x10006ef0

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2003 Debug */

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}



// Function: FUN_10006f10 @ 0x10006f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10006f10(void)

{
  uint local_20;
  
  local_20 = (uint)(_DAT_100328a8 < 0.0);
  return local_20;
}



// Function: __ms_p5_mp_test_fdiv @ 0x10006f70

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if ((hModule != (HMODULE)0x0) &&
     (pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent"), pFVar1 != (FARPROC)0x0)) {
    (*pFVar1)(0);
    return;
  }
  FUN_10006f10();
  return;
}



// Function: FUN_10006fc0 @ 0x10006fc0

void __cdecl FUN_10006fc0(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint local_10;
  char local_c;
  
  uVar2 = FUN_1000c890((int)*param_1);
  if (uVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10035de0 < 2) {
        local_10 = *(ushort *)(PTR_DAT_10035dec + *param_1 * 2) & 4;
      }
      else {
        local_10 = FUN_1000c7c0((int)*param_1,4);
      }
    } while (local_10 != 0);
  }
  local_c = *param_1;
  *param_1 = DAT_10035de4;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = local_c;
    local_c = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __cropzeros @ 0x10007070

/* Library Function - Single Match
    __cropzeros
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __cropzeros(char *_Buf)

{
  char *pcVar1;
  char *local_8;
  
  for (; (*_Buf != '\0' && (*_Buf != DAT_10035de4)); _Buf = _Buf + 1) {
  }
  if (*_Buf != '\0') {
    do {
      pcVar1 = _Buf;
      _Buf = pcVar1 + 1;
      if ((*_Buf == '\0') || (*_Buf == 'e')) break;
    } while (*_Buf != 'E');
    local_8 = _Buf;
    for (_Buf = pcVar1; *_Buf == '0'; _Buf = _Buf + -1) {
    }
    if (*_Buf == DAT_10035de4) {
      _Buf = _Buf + -1;
    }
    do {
      _Buf = _Buf + 1;
      *_Buf = *local_8;
      local_8 = local_8 + 1;
    } while (*_Buf != '\0');
  }
  return;
}



// Function: __positive @ 0x10007150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __positive
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl __positive(double *arg)

{
  uint local_8;
  
  local_8 = (uint)(_DAT_100328d8 <= *arg);
  return local_8;
}



// Function: __fassign @ 0x10007180

/* Library Function - Single Match
    __fassign
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FUN_1000d200(&local_10,(byte *)number);
    *(uint *)argument = local_10;
  }
  else {
    FUN_1000d180(&local_c,(byte *)number);
    *(uint *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}



// Function: FUN_100071d0 @ 0x100071d0

undefined1 * __cdecl FUN_100071d0(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_1000d340(*param_1,param_1[1],local_18,local_30);
  FUN_1000d240(param_2 + (uint)(0 < param_3) + (uint)(*local_8 == 0x2d),param_3 + 1,(int)local_8);
  FUN_10007250(param_2,param_3,param_4,local_8,'\0');
  return param_2;
}



// Function: FUN_10007250 @ 0x10007250

undefined1 * __cdecl
FUN_10007250(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  uint *puVar1;
  int local_c;
  undefined1 *local_8;
  
  if (param_5 != '\0') {
    __shift(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  local_8 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    local_8 = param_1 + 1;
  }
  if (0 < param_2) {
    *local_8 = local_8[1];
    local_8 = local_8 + 1;
    *local_8 = DAT_10035de4;
  }
  puVar1 = FUN_1000b9b0((uint *)(local_8 + (uint)(param_5 == '\0') + param_2),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar1 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    local_c = param_4[1] + -1;
    if (local_c < 0) {
      local_c = -local_c;
      *(undefined1 *)((int)puVar1 + 1) = 0x2d;
    }
    if (99 < local_c) {
      *(char *)((int)puVar1 + 2) = *(char *)((int)puVar1 + 2) + (char)(local_c / 100);
      local_c = local_c % 100;
    }
    if (9 < local_c) {
      *(char *)((int)puVar1 + 3) = *(char *)((int)puVar1 + 3) + (char)(local_c / 10);
      local_c = local_c % 10;
    }
    *(char *)(puVar1 + 1) = (char)puVar1[1] + (char)local_c;
  }
  return param_1;
}



// Function: FUN_100073c0 @ 0x100073c0

char * __cdecl FUN_100073c0(undefined4 *param_1,char *param_2,size_t param_3)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_1000d340(*param_1,param_1[1],local_18,local_30);
  FUN_1000d240(param_2 + (*local_8 == 0x2d),param_3 + local_8[1],(int)local_8);
  FUN_10007430(param_2,param_3,local_8,'\0');
  return param_2;
}



// Function: FUN_10007430 @ 0x10007430

char * __cdecl FUN_10007430(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  size_t local_14;
  char *local_8;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar2 = *param_3, iVar1 - 1U == param_2)) {
    param_1[(iVar1 - 1U) + (uint)(iVar2 == 0x2d)] = '0';
    (param_1 + (iVar1 - 1U) + (uint)(iVar2 == 0x2d))[1] = '\0';
  }
  local_8 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    local_8 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    __shift(local_8,1);
    *local_8 = '0';
    local_8 = local_8 + 1;
  }
  else {
    local_8 = local_8 + param_3[1];
  }
  if (0 < (int)param_2) {
    __shift(local_8,1);
    *local_8 = DAT_10035de4;
    if (param_3[1] < 0) {
      if (param_4 == '\0') {
        if ((int)param_2 < -param_3[1]) {
          local_14 = param_2;
        }
        else {
          local_14 = -param_3[1];
        }
        param_2 = local_14;
      }
      else {
        param_2 = -param_3[1];
      }
      __shift(local_8 + 1,param_2);
      _memset(local_8 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_10007570 @ 0x10007570

void __cdecl FUN_10007570(undefined4 *param_1,char *param_2,size_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  uint local_30 [6];
  int local_18;
  int local_14;
  char *local_8;
  
  FUN_1000d340(*param_1,param_1[1],&local_18,local_30);
  iVar2 = local_14 + -1;
  local_8 = param_2 + (local_18 == 0x2d);
  FUN_1000d240(local_8,param_3,(int)&local_18);
  if ((local_14 + -1 < -4) || ((int)param_3 <= local_14 + -1)) {
    FUN_10007250(param_2,param_3,param_4,&local_18,'\x01');
  }
  else {
    pcVar1 = local_8;
    if (iVar2 < local_14 + -1) {
      do {
        local_8 = pcVar1;
        pcVar1 = local_8 + 1;
      } while (*local_8 != '\0');
      local_8[-1] = '\0';
      local_8 = local_8 + 1;
    }
    FUN_10007430(param_2,param_3,&local_18,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x10007660

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    pcVar1 = FUN_100071d0((undefined4 *)arg,buffer,format,precision);
  }
  else if (sizeInBytes == 0x66) {
    pcVar1 = FUN_100073c0((undefined4 *)arg,buffer,format);
  }
  else {
    pcVar1 = (char *)FUN_10007570((undefined4 *)arg,buffer,format,precision);
  }
  return (errno_t)pcVar1;
}



// Function: __shift @ 0x100076c0

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio */

void __cdecl __shift(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_1000d590((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_100076f0 @ 0x100076f0

void FUN_100076f0(void)

{
  if (PTR_FUN_10035a38 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10035a38)();
  }
  __initterm((int *)&DAT_10035208,(int *)&DAT_10035418);
  __initterm((int *)&DAT_10035000,(int *)&DAT_10035104);
  return;
}



// Function: FUN_10007730 @ 0x10007730

void __cdecl FUN_10007730(UINT param_1)

{
  FUN_100077b0(param_1,0,0);
  return;
}



// Function: __exit @ 0x10007750

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __exit(int _Code)

{
  FUN_100077b0(_Code,1,0);
  return;
}



// Function: FUN_10007770 @ 0x10007770

void FUN_10007770(void)

{
  FUN_100077b0(0,0,1);
  return;
}



// Function: FUN_10007790 @ 0x10007790

void FUN_10007790(void)

{
  FUN_100077b0(0,1,1);
  return;
}



// Function: FUN_100077b0 @ 0x100077b0

void __cdecl FUN_100077b0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  FUN_100078a0();
  if (DAT_10037b50 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10037b4c = 1;
  DAT_10037b48 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_10039638 != (int *)0x0) {
      local_8 = DAT_10039634;
      while (local_8 = local_8 + -1, DAT_10039638 <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_1003551c,(int *)&DAT_10035724);
  }
  __initterm((int *)&DAT_10035828,(int *)&DAT_1003592c);
  if ((DAT_10037b54 == 0) && (uVar1 = FUN_100091f0(-1), (uVar1 & 0x20) != 0)) {
    DAT_10037b54 = 1;
    FUN_10009b00();
  }
  if (param_3 == 0) {
    DAT_10037b50 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100078b0();
  return;
}



// Function: FUN_100078a0 @ 0x100078a0

void FUN_100078a0(void)

{
  FUN_1000a900(0xd);
  return;
}



// Function: FUN_100078b0 @ 0x100078b0

void FUN_100078b0(void)

{
  FUN_1000a9a0(0xd);
  return;
}



// Function: __initterm @ 0x100078c0

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2003 Debug */

void __cdecl __initterm(int *param_1,int *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if (*param_1 != 0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_100078f0 @ 0x100078f0

void FUN_100078f0(void)

{
  DWORD DVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  int *piVar3;
  DWORD local_70;
  UINT local_6c;
  UINT local_68;
  byte *local_64;
  int local_60;
  uint local_5c;
  undefined4 *local_54;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  local_54 = (undefined4 *)FUN_10007ce0((void *)0x480,2,0x100328e8,0x81);
  if (local_54 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_1003961c = 0x20;
  DAT_100394e0 = local_54;
  for (; local_54 < DAT_100394e0 + 0x120; local_54 = local_54 + 9) {
    *(undefined1 *)(local_54 + 1) = 0;
    *local_54 = 0xffffffff;
    *(undefined1 *)((int)local_54 + 5) = 10;
    local_54[2] = 0;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) &&
     (CONCAT22(local_4c.lpReserved2._2_2_,local_4c.lpReserved2._0_2_) != 0)) {
    local_6c = *(UINT *)CONCAT22(local_4c.lpReserved2._2_2_,local_4c.lpReserved2._0_2_);
    local_8 = (byte *)(CONCAT22(local_4c.lpReserved2._2_2_,local_4c.lpReserved2._0_2_) + 4);
    local_64 = local_8 + local_6c;
    if (0x7ff < (int)local_6c) {
      local_6c = 0x800;
    }
    local_68 = local_6c;
    local_60 = 1;
    while ((int)DAT_1003961c < (int)local_6c) {
      local_54 = (undefined4 *)FUN_10007ce0((void *)0x480,2,0x100328e8,0xb6);
      if (local_54 == (undefined4 *)0x0) {
        local_68 = DAT_1003961c;
        break;
      }
      (&DAT_100394e0)[local_60] = local_54;
      DAT_1003961c = DAT_1003961c + 0x20;
      for (; local_54 < (undefined4 *)((int)(&DAT_100394e0)[local_60] + 0x480);
          local_54 = local_54 + 9) {
        *(undefined1 *)(local_54 + 1) = 0;
        *local_54 = 0xffffffff;
        *(undefined1 *)((int)local_54 + 5) = 10;
        local_54[2] = 0;
      }
      local_60 = local_60 + 1;
    }
    for (local_5c = 0; (int)local_5c < (int)local_68; local_5c = local_5c + 1) {
      if (((*(int *)local_64 != -1) && ((*local_8 & 1) != 0)) &&
         (((*local_8 & 8) != 0 || (DVar1 = GetFileType(*(HANDLE *)local_64), DVar1 != 0)))) {
        puVar2 = (undefined4 *)((int)(&DAT_100394e0)[(int)local_5c >> 5] + (local_5c & 0x1f) * 0x24)
        ;
        *puVar2 = *(undefined4 *)local_64;
        *(byte *)(puVar2 + 1) = *local_8;
      }
      local_8 = local_8 + 1;
      local_64 = local_64 + 4;
    }
  }
  for (local_5c = 0; (int)local_5c < 3; local_5c = local_5c + 1) {
    piVar3 = DAT_100394e0 + local_5c * 9;
    if (*piVar3 == -1) {
      *(undefined1 *)(piVar3 + 1) = 0x81;
      if (local_5c == 0) {
        local_70 = 0xfffffff6;
      }
      else {
        local_70 = 0xfffffff5 - (local_5c != 1);
      }
      hFile = GetStdHandle(local_70);
      if ((hFile == (HANDLE)0xffffffff) || (DVar1 = GetFileType(hFile), DVar1 == 0)) {
        *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x40;
      }
      else {
        *piVar3 = (int)hFile;
        if ((DVar1 & 0xff) == 2) {
          *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x40;
        }
        else if ((DVar1 & 0xff) == 3) {
          *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 8;
        }
      }
    }
    else {
      *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) | 0x80;
    }
  }
  SetHandleCount(DAT_1003961c);
  return;
}



// Function: __ioterm @ 0x10007c20

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio */

void __cdecl __ioterm(void)

{
  int local_c;
  uint local_8;
  
  for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
    if ((&DAT_100394e0)[local_c] != 0) {
      for (local_8 = (&DAT_100394e0)[local_c]; local_8 < (&DAT_100394e0)[local_c] + 0x480;
          local_8 = local_8 + 0x24) {
        if (*(int *)(local_8 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(local_8 + 0xc));
        }
      }
      FUN_10008770((void *)(&DAT_100394e0)[local_c],2);
      (&DAT_100394e0)[local_c] = 0;
    }
  }
  return;
}



// Function: FUN_10007cc0 @ 0x10007cc0

void __cdecl FUN_10007cc0(void *param_1)

{
  FUN_10007d30(param_1,(uint)param_1,DAT_10037db4,1,0,0);
  return;
}



// Function: FUN_10007ce0 @ 0x10007ce0

void __cdecl FUN_10007ce0(void *param_1,uint param_2,int param_3,int param_4)

{
  FUN_10007d30(param_1,(uint)param_1,DAT_10037db4,param_2,param_3,param_4);
  return;
}



// Function: FUN_10007d10 @ 0x10007d10

void __cdecl FUN_10007d10(void *param_1,int param_2)

{
  FUN_10007d30(param_1,(uint)param_1,param_2,1,0,0);
  return;
}



// Function: FUN_10007d30 @ 0x10007d30

int * __thiscall
FUN_10007d30(void *this,uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    FUN_1000a900(9);
    piVar1 = FUN_10007db0(param_1,param_3,param_4,param_5);
    FUN_1000a9a0(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (param_2 == 0) break;
    iVar2 = __callnewh(param_1);
    if (iVar2 == 0) {
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



// Function: FUN_10007d90 @ 0x10007d90

void __cdecl FUN_10007d90(uint param_1)

{
  FUN_10007db0(param_1,1,0,0);
  return;
}



// Function: FUN_10007db0 @ 0x10007db0

int * __cdecl FUN_10007db0(uint param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  bVar2 = false;
  if ((((DAT_10035ab4 & 4) != 0) && (iVar4 = FUN_10008e80(), iVar4 == 0)) &&
     (iVar4 = FUN_10006850(2,0x100329d0,0x141,0,(byte *)"_CrtCheckMemory()"), iVar4 == 1)) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar4 = DAT_10035ab8;
  if (DAT_10035ab8 == DAT_10035abc) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar6 = (*(code *)PTR_FUN_10036030)(1,0,param_1,param_2,DAT_10035ab8,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == 0) {
      iVar4 = FUN_10006850(0,0,0,0,&DAT_10032970);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    else {
      iVar4 = FUN_10006850(0,0,0,0,(byte *)"Client hook allocation failure at file %hs line %d.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    piVar5 = (int *)0x0;
  }
  else {
    if (((param_2 & 0xffff) != 2) && ((DAT_10035ab4 & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < 0xffffffe1) && (param_1 + 0x24 < 0xffffffe1)) {
      if (((((param_2 & 0xffff) != 4) && (param_2 != 1)) && ((param_2 & 0xffff) != 2)) &&
         ((param_2 != 3 && (iVar6 = FUN_10006850(1,0,0,0,&DAT_10032970), iVar6 == 1)))) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = FUN_1000d9d0((void *)(param_1 + 0x24),param_1 + 0x24);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        DAT_10035ab8 = DAT_10035ab8 + 1;
        if (bVar2) {
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = 0;
          piVar5[3] = -0x1234544;
          piVar5[4] = param_1;
          piVar5[5] = 3;
          piVar5[6] = 0;
        }
        else {
          DAT_10037b5c = DAT_10037b5c + param_1;
          DAT_10037b64 = DAT_10037b64 + param_1;
          if (DAT_10037b68 < DAT_10037b64) {
            DAT_10037b68 = DAT_10037b64;
          }
          piVar3 = piVar5;
          if (DAT_10037b60 != (int *)0x0) {
            DAT_10037b60[1] = (int)piVar5;
            piVar3 = DAT_10037b58;
          }
          DAT_10037b58 = piVar3;
          *piVar5 = (int)DAT_10037b60;
          piVar5[1] = 0;
          piVar5[2] = param_3;
          piVar5[3] = param_4;
          piVar5[4] = param_1;
          piVar5[5] = param_2;
          piVar5[6] = iVar4;
          DAT_10037b60 = piVar5;
        }
        _memset(piVar5 + 7,(uint)DAT_10035ac0,4);
        _memset((void *)((int)piVar5 + param_1 + 0x20),(uint)DAT_10035ac0,4);
        _memset(piVar5 + 8,(uint)DAT_10035ac2,param_1);
        piVar5 = piVar5 + 8;
      }
    }
    else {
      iVar4 = FUN_10006850(1,0,0,0,(byte *)"Invalid allocation size: %u bytes.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = (int *)0x0;
    }
  }
  return piVar5;
}



// Function: FUN_100080d0 @ 0x100080d0

void __cdecl FUN_100080d0(int param_1,int param_2)

{
  __calloc_dbg(param_1,param_2,1,0,0);
  return;
}



// Function: __calloc_dbg @ 0x100080f0

/* Library Function - Single Match
    __calloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined1 * __cdecl __calloc_dbg(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 *local_10;
  
  puVar1 = (undefined1 *)FUN_10007ce0((void *)(param_2 * param_1),param_3,param_4,param_5);
  if (puVar1 != (undefined1 *)0x0) {
    for (local_10 = puVar1; local_10 < puVar1 + param_2 * param_1; local_10 = local_10 + 1) {
      *local_10 = 0;
    }
  }
  return puVar1;
}



// Function: FUN_10008150 @ 0x10008150

void __cdecl FUN_10008150(void *param_1,void *param_2)

{
  FUN_10008170(param_1,param_2,1,0,0);
  return;
}



// Function: FUN_10008170 @ 0x10008170

int * __cdecl FUN_10008170(void *param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_1000a900(9);
  piVar1 = FUN_100081b0(param_1,param_2,param_3,param_4,param_5,1);
  FUN_1000a9a0(9);
  return piVar1;
}



// Function: FUN_100081b0 @ 0x100081b0

int * __cdecl
FUN_100081b0(void *param_1,void *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  BOOL BVar6;
  bool bVar7;
  int *local_10;
  
  if (param_1 == (void *)0x0) {
    piVar2 = (int *)FUN_10007ce0(param_2,param_3,param_4,param_5);
  }
  else if ((param_6 == 0) || (param_2 != (void *)0x0)) {
    if (((DAT_10035ab4 & 4) != 0) &&
       ((iVar3 = FUN_10008e80(), iVar3 == 0 &&
        (iVar3 = FUN_10006850(2,0x100329d0,0x239,0,(byte *)"_CrtCheckMemory()"), iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar3 = DAT_10035ab8;
    if (DAT_10035ab8 == DAT_10035abc) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar5 = (*(code *)PTR_FUN_10036030)(2,param_1,param_2,param_3,DAT_10035ab8,param_4,param_5);
    if (iVar5 == 0) {
      if (param_4 == 0) {
        iVar3 = FUN_10006850(0,0,0,0,&DAT_10032970);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        iVar3 = FUN_10006850(0,0,0,0,(byte *)
                                     "Client hook re-allocation failure at file %hs line %d.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      piVar2 = (int *)0x0;
    }
    else if (param_2 < (void *)0xffffffdc) {
      if ((((param_3 != 1) && ((param_3 & 0xffff) != 4)) && ((param_3 & 0xffff) != 2)) &&
         (iVar5 = FUN_10006850(1,0,0,0,&DAT_10032970), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      BVar6 = FUN_100092e0((int)param_1);
      if ((BVar6 == 0) &&
         (iVar5 = FUN_10006850(2,0x100329d0,0x261,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar4 = (int *)((int)param_1 + -0x20);
      bVar7 = *(int *)((int)param_1 + -0xc) == 3;
      if (bVar7) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar5 = FUN_10006850(2,0x100329d0,0x26b,0,
                                    (byte *)
                                    "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ"
                                   ), iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        if (((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2) && ((param_3 & 0xffff) == 1)) {
          param_3 = 2;
        }
        if (((*(uint *)((int)param_1 + -0xc) & 0xffff) != (param_3 & 0xffff)) &&
           (iVar5 = FUN_10006850(2,0x100329d0,0x272,0,
                                 (byte *)"_BLOCK_TYPE(pOldBlock->nBlockUse)==_BLOCK_TYPE(nBlockUse)"
                                ), iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      if (param_6 == 0) {
        local_10 = FUN_1000da50(piVar4,(int)param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_10 = FUN_1000db00(piVar4,(void *)((int)param_2 + 0x24));
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      DAT_10035ab8 = DAT_10035ab8 + 1;
      if (!bVar7) {
        DAT_10037b5c = (DAT_10037b5c - local_10[4]) + (int)param_2;
        DAT_10037b64 = (DAT_10037b64 - local_10[4]) + (int)param_2;
        if (DAT_10037b68 < DAT_10037b64) {
          DAT_10037b68 = DAT_10037b64;
        }
      }
      piVar2 = local_10 + 8;
      if ((void *)local_10[4] < param_2) {
        _memset((void *)((int)piVar2 + local_10[4]),(uint)DAT_10035ac2,(int)param_2 - local_10[4]);
      }
      _memset((void *)((int)piVar2 + (int)param_2),(uint)DAT_10035ac0,4);
      if (!bVar7) {
        local_10[2] = param_4;
        local_10[3] = param_5;
        local_10[6] = iVar3;
      }
      local_10[4] = (int)param_2;
      if (((param_6 == 0) && (local_10 != piVar4)) &&
         (iVar3 = FUN_10006850(2,0x100329d0,0x2a8,0,
                               (byte *)"fRealloc || (!fRealloc && pNewBlock == pOldBlock)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      if ((local_10 != piVar4) && (!bVar7)) {
        if (*local_10 == 0) {
          if ((DAT_10037b58 != piVar4) &&
             (iVar3 = FUN_10006850(2,0x100329d0,0x2b7,0,(byte *)"_pLastBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10037b58 = (int *)local_10[1];
        }
        else {
          *(int *)(*local_10 + 4) = local_10[1];
        }
        if (local_10[1] == 0) {
          if ((DAT_10037b60 != piVar4) &&
             (iVar3 = FUN_10006850(2,0x100329d0,0x2c2,0,(byte *)"_pFirstBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10037b60 = (int *)*local_10;
        }
        else {
          *(int *)local_10[1] = *local_10;
        }
        if (DAT_10037b60 == (int *)0x0) {
          DAT_10037b58 = local_10;
        }
        else {
          DAT_10037b60[1] = (int)local_10;
        }
        *local_10 = (int)DAT_10037b60;
        local_10[1] = 0;
        DAT_10037b60 = local_10;
      }
    }
    else {
      iVar3 = FUN_10006850(1,0,0,0,(byte *)"Allocation too large or negative: %u bytes.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    FUN_10008770(param_1,param_3);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



// Function: FUN_100086d0 @ 0x100086d0

void __cdecl FUN_100086d0(void *param_1,void *param_2)

{
  FUN_100086f0(param_1,param_2,1,0,0);
  return;
}



// Function: FUN_100086f0 @ 0x100086f0

int * __cdecl FUN_100086f0(void *param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_1000a900(9);
  piVar1 = FUN_100081b0(param_1,param_2,param_3,param_4,param_5,0);
  FUN_1000a9a0(9);
  return piVar1;
}



// Function: FUN_10008730 @ 0x10008730

void __cdecl FUN_10008730(void *param_1)

{
  FUN_10008770(param_1,1);
  return;
}



// Function: FUN_10008750 @ 0x10008750

void __cdecl FUN_10008750(void *param_1)

{
  FUN_100087a0(param_1,1);
  return;
}



// Function: FUN_10008770 @ 0x10008770

void __cdecl FUN_10008770(void *param_1,int param_2)

{
  FUN_1000a900(9);
  FUN_100087a0(param_1,param_2);
  FUN_1000a9a0(9);
  return;
}



// Function: FUN_100087a0 @ 0x100087a0

void __cdecl FUN_100087a0(void *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int *_Dst;
  void *this;
  void *this_00;
  
  if ((((DAT_10035ab4 & 4) != 0) && (iVar2 = FUN_10008e80(), iVar2 == 0)) &&
     (iVar2 = FUN_10006850(2,0x100329d0,0x3e1,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (void *)0x0) {
    iVar2 = (*(code *)PTR_FUN_10036030)(3,param_1,0,param_2,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_10006850(0,0,0,0,&DAT_10032970);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      BVar3 = FUN_100092e0((int)param_1);
      if ((BVar3 == 0) &&
         (iVar2 = FUN_10006850(2,0x100329d0,0x3f3,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = (int *)((int)param_1 + -0x20);
      if ((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
         && (((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2 &&
             ((*(int *)((int)param_1 + -0xc) != 3 &&
              (iVar2 = FUN_10006850(2,0x100329d0,0x3f9,0,
                                    (byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))
             ))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((DAT_10035ab4 & 4) == 0) {
        iVar2 = FUN_10008df0((char *)((int)param_1 + -4),DAT_10035ac0,4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_10006850(1,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar2 = FUN_10008df0((char *)((int)param_1 + *(int *)((int)param_1 + -0x10)),DAT_10035ac0,4)
        ;
        if ((iVar2 == 0) &&
           (iVar2 = FUN_10006850(1,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((int)param_1 + -0xc) == 3) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar2 = FUN_10006850(2,0x100329d0,0x40e,0,
                                    (byte *)
                                    "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ"),
              iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _memset(_Dst,(uint)DAT_10035ac1,*(int *)((int)param_1 + -0x10) + 0x24);
        FUN_1000dcf0(this,_Dst);
      }
      else {
        if ((*(int *)((int)param_1 + -0xc) == 2) && (param_2 == 1)) {
          param_2 = 2;
        }
        if ((*(int *)((int)param_1 + -0xc) != param_2) &&
           (iVar2 = FUN_10006850(2,0x100329d0,0x41b,0,(byte *)"pHead->nBlockUse == nBlockUse"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_10037b64 = DAT_10037b64 - *(int *)((int)param_1 + -0x10);
        if ((DAT_10035ab4 & 2) == 0) {
          if (*_Dst == 0) {
            if ((DAT_10037b58 != _Dst) &&
               (iVar2 = FUN_10006850(2,0x100329d0,0x42a,0,(byte *)"_pLastBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10037b58 = *(int **)((int)param_1 + -0x1c);
          }
          else {
            *(undefined4 *)(*_Dst + 4) = *(undefined4 *)((int)param_1 + -0x1c);
          }
          if (*(int *)((int)param_1 + -0x1c) == 0) {
            if ((DAT_10037b60 != _Dst) &&
               (iVar2 = FUN_10006850(2,0x100329d0,0x434,0,(byte *)"_pFirstBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10037b60 = (int *)*_Dst;
          }
          else {
            **(int **)((int)param_1 + -0x1c) = *_Dst;
          }
          _memset(_Dst,(uint)DAT_10035ac1,*(int *)((int)param_1 + -0x10) + 0x24);
          FUN_1000dcf0(this_00,_Dst);
        }
        else {
          *(undefined4 *)((int)param_1 + -0xc) = 0;
          _memset(param_1,(uint)DAT_10035ac1,*(size_t *)((int)param_1 + -0x10));
        }
      }
    }
  }
  return;
}



// Function: FUN_10008b90 @ 0x10008b90

void __cdecl FUN_10008b90(int param_1)

{
  FUN_10008bb0(param_1,1);
  return;
}



// Function: FUN_10008bb0 @ 0x10008bb0

undefined4 __cdecl FUN_10008bb0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  
  if ((((DAT_10035ab4 & 4) != 0) && (iVar2 = FUN_10008e80(), iVar2 == 0)) &&
     (iVar2 = FUN_10006850(2,0x100329d0,0x47c,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_1000a900(9);
  BVar4 = FUN_100092e0(param_1);
  if ((BVar4 == 0) &&
     (iVar2 = FUN_10006850(2,0x100329d0,0x485,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
     (((*(uint *)(param_1 + -0xc) & 0xffff) != 2 &&
      ((*(int *)(param_1 + -0xc) != 3 &&
       (iVar2 = FUN_10006850(2,0x100329d0,0x48b,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
       iVar2 == 1)))))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((*(int *)(param_1 + -0xc) == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if (((*(int *)(param_1 + -0xc) != 3) && (*(int *)(param_1 + -0xc) != param_2)) &&
     (iVar2 = FUN_10006850(2,0x100329d0,0x492,0,(byte *)"pHead->nBlockUse == nBlockUse"), iVar2 == 1
     )) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + -0x10);
  FUN_1000a9a0(9);
  return uVar3;
}



// Function: FUN_10008d10 @ 0x10008d10

undefined4 __cdecl FUN_10008d10(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10035abc;
  DAT_10035abc = param_1;
  return uVar1;
}



// Function: FUN_10008d30 @ 0x10008d30

void __cdecl FUN_10008d30(int param_1,undefined4 param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  FUN_1000a900(9);
  BVar2 = FUN_100092e0(param_1);
  if (BVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)(param_1 + -0xc) != 3 &&
        (iVar3 = FUN_10006850(2,0x100329d0,0x4d3,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)")
        , iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  FUN_1000a9a0(9);
  return;
}



// Function: FUN_10008dd0 @ 0x10008dd0

undefined * __cdecl FUN_10008dd0(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_10036030;
  PTR_FUN_10036030 = param_1;
  return puVar1;
}



// Function: FUN_10008df0 @ 0x10008df0

undefined4 __cdecl FUN_10008df0(char *param_1,char param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_8;
  
  local_8 = 1;
  while( true ) {
    do {
      iVar4 = param_3 + -1;
      if (param_3 == 0) {
        return local_8;
      }
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = iVar4;
    } while (cVar1 == param_2);
    iVar4 = FUN_10006850(0,0,0,0,(byte *)
                                 "memory check error at 0x%08X = 0x%02X, should be 0x%02X.\n");
    if (iVar4 == 1) break;
    local_8 = 0;
  }
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}



// Function: FUN_10008e80 @ 0x10008e80

undefined4 FUN_10008e80(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = 1;
  if ((DAT_10035ab4 & 1) == 0) {
    local_8 = 1;
  }
  else {
    FUN_1000a900(9);
    iVar3 = FUN_1000dd60();
    if ((iVar3 == -1) || (iVar3 == -2)) {
      for (local_c = DAT_10037b60; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
        bVar2 = true;
        iVar3 = FUN_10008df0((char *)(local_c + 7),DAT_10035ac0,4);
        if (iVar3 == 0) {
          iVar3 = FUN_10006850(0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        iVar3 = FUN_10008df0((char *)((int)local_c + local_c[4] + 0x20),DAT_10035ac0,4);
        if (iVar3 == 0) {
          iVar3 = FUN_10006850(0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if ((local_c[5] == 0) &&
           (iVar3 = FUN_10008df0((char *)(local_c + 8),DAT_10035ac1,local_c[4]), iVar3 == 0)) {
          iVar3 = FUN_10006850(0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if (!bVar2) {
          if ((local_c[2] != 0) &&
             (iVar3 = FUN_10006850(0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar3 == 1))
          {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          iVar3 = FUN_10006850(0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          local_8 = 0;
        }
      }
      FUN_1000a9a0(9);
    }
    else {
      switch(iVar3) {
      case -6:
        iVar3 = FUN_10006850(0,0,0,0,&DAT_10032970);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -5:
        iVar3 = FUN_10006850(0,0,0,0,&DAT_10032970);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -4:
        iVar3 = FUN_10006850(0,0,0,0,&DAT_10032970);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -3:
        iVar3 = FUN_10006850(0,0,0,0,&DAT_10032970);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      default:
        iVar3 = FUN_10006850(0,0,0,0,&DAT_10032970);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      FUN_1000a9a0(9);
      local_8 = 0;
    }
  }
  return local_8;
}



// Function: FUN_100091f0 @ 0x100091f0

int __cdecl FUN_100091f0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_10035ab4;
  if (param_1 != -1) {
    DAT_10035ab4 = param_1;
  }
  return iVar1;
}



// Function: FUN_10009220 @ 0x10009220

void __cdecl FUN_10009220(undefined *param_1,undefined4 param_2)

{
  undefined4 *local_8;
  
  if ((DAT_10035ab4 & 1) != 0) {
    FUN_1000a900(9);
    for (local_8 = DAT_10037b60; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      if ((local_8[5] & 0xffff) == 4) {
        (*(code *)param_1)(local_8 + 8,param_2);
      }
    }
    FUN_1000a9a0(9);
  }
  return;
}



// Function: FID_conflict:AtlIsValidAddress @ 0x10009290

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl ATL::AtlIsValidAddress(void const *,unsigned int,int)
    __CrtIsValidPointer
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl FID_conflict_AtlIsValidAddress(void *param_1,UINT_PTR param_2,int param_3)

{
  BOOL BVar1;
  
  if (((param_1 != (void *)0x0) && (BVar1 = IsBadReadPtr(param_1,param_2), BVar1 == 0)) &&
     ((param_3 == 0 || (BVar1 = IsBadWritePtr(param_1,param_2), BVar1 == 0)))) {
    return 1;
  }
  return 0;
}



// Function: FUN_100092e0 @ 0x100092e0

BOOL __cdecl FUN_100092e0(int param_1)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    BVar1 = 0;
  }
  else {
    iVar2 = FID_conflict_AtlIsValidAddress((void *)(param_1 + -0x20),0x20,1);
    if (iVar2 == 0) {
      BVar1 = 0;
    }
    else {
      uVar3 = FUN_1000de80(param_1 + -0x20);
      if (uVar3 == 0) {
        if ((DAT_10037b14 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_100394ac,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = FUN_1000dee0(uVar3,param_1 + -0x20);
      }
    }
  }
  return BVar1;
}



// Function: FUN_10009370 @ 0x10009370

undefined4 __cdecl
FUN_10009370(void *param_1,UINT_PTR param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = FUN_100092e0((int)param_1);
  if (BVar1 != 0) {
    FUN_1000a900(9);
    if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) || (*(int *)((int)param_1 + -0xc) == 1))
         || ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
        (*(int *)((int)param_1 + -0xc) == 3)) &&
       (((iVar2 = FID_conflict_AtlIsValidAddress(param_1,param_2,1), iVar2 != 0 &&
         (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
        (*(int *)((int)param_1 + -8) <= DAT_10035ab8)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)((int)param_1 + -0x14);
      }
      FUN_1000a9a0(9);
      return 1;
    }
    FUN_1000a9a0(9);
  }
  return 0;
}



// Function: FUN_10009460 @ 0x10009460

undefined4 __cdecl FUN_10009460(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_100394b8;
  DAT_100394b8 = param_1;
  return uVar1;
}



// Function: FUN_10009480 @ 0x10009480

void __cdecl FUN_10009480(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  int local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = FUN_10006850(0,0,0,0,&DAT_10032970);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FUN_1000a900(9);
    *param_1 = DAT_10037b60;
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      param_1[local_8 + 6] = 0;
      param_1[local_8 + 1] = 0;
    }
    for (local_c = DAT_10037b60; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
      if ((local_c[5] & 0xffff) < 5) {
        param_1[(local_c[5] & 0xffff) + 1] = param_1[(local_c[5] & 0xffff) + 1] + 1;
        param_1[(local_c[5] & 0xffff) + 6] = param_1[(local_c[5] & 0xffff) + 6] + local_c[4];
      }
      else {
        iVar2 = FUN_10006850(0,0,0,0,(byte *)"Bad memory block found at 0x%08X.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    param_1[0xb] = DAT_10037b68;
    param_1[0xc] = DAT_10037b5c;
    FUN_1000a9a0(9);
  }
  return;
}



// Function: FUN_100095f0 @ 0x100095f0

undefined4 __cdecl FUN_100095f0(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar2 = FUN_10006850(0,0,0,0,&DAT_10032970);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    local_c = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      param_1[local_8 + 6] =
           *(int *)(param_3 + 0x18 + local_8 * 4) - *(int *)(param_2 + 0x18 + local_8 * 4);
      param_1[local_8 + 1] =
           *(int *)(param_3 + 4 + local_8 * 4) - *(int *)(param_2 + 4 + local_8 * 4);
      if (((param_1[local_8 + 6] != 0) || (param_1[local_8 + 1] != 0)) &&
         ((local_8 != 0 && ((local_8 != 2 || ((DAT_10035ab4 & 0x10) != 0)))))) {
        local_c = 1;
      }
    }
    param_1[0xb] = *(int *)(param_3 + 0x2c) - *(int *)(param_2 + 0x2c);
    param_1[0xc] = *(int *)(param_3 + 0x30) - *(int *)(param_2 + 0x30);
    *param_1 = 0;
  }
  return local_c;
}



// Function: FUN_10009720 @ 0x10009720

void __cdecl FUN_10009720(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_1000a900(9);
  iVar2 = FUN_10006850(0,0,0,0,&DAT_10032970);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
  }
  local_8 = DAT_10037b60;
  do {
    if ((local_8 == (undefined4 *)0x0) || (local_8 == local_c)) {
      FUN_1000a9a0(9);
      iVar2 = FUN_10006850(0,0,0,0,&DAT_10032970);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
    if ((((local_8[5] & 0xffff) != 3) && ((local_8[5] & 0xffff) != 0)) &&
       (((local_8[5] & 0xffff) != 2 || ((DAT_10035ab4 & 0x10) != 0)))) {
      if (local_8[2] != 0) {
        iVar2 = FID_conflict_AtlIsValidAddress((void *)local_8[2],1,0);
        if (iVar2 == 0) {
          iVar2 = FUN_10006850(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = FUN_10006850(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = FUN_10006850(0,0,0,0,(byte *)"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_8[5] & 0xffff) == 4) {
        iVar2 = FUN_10006850(0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n")
        ;
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_100394b8 == (code *)0x0) {
          FUN_100099e0((int)local_8);
        }
        else {
          (*DAT_100394b8)(local_8 + 8,local_8[4]);
        }
      }
      else if (local_8[5] == 1) {
        iVar2 = FUN_10006850(0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_100099e0((int)local_8);
      }
      else if ((local_8[5] & 0xffff) == 2) {
        iVar2 = FUN_10006850(0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_100099e0((int)local_8);
      }
    }
    local_8 = (undefined4 *)*local_8;
  } while( true );
}



// Function: FUN_100099e0 @ 0x100099e0

void __cdecl FUN_100099e0(int param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint local_5c;
  int local_58;
  int local_50;
  byte local_4c [20];
  undefined1 local_38 [52];
  
  local_50 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x10) < 0x10) {
      local_58 = *(int *)(param_1 + 0x10);
    }
    else {
      local_58 = 0x10;
    }
    if (local_58 <= local_50) break;
    bVar1 = *(byte *)(param_1 + local_50 + 0x20);
    if (DAT_10035de0 < 2) {
      local_5c = *(ushort *)(PTR_DAT_10035dec + (uint)bVar1 * 2) & 0x157;
    }
    else {
      local_5c = FUN_1000c7c0((uint)bVar1,0x157);
    }
    if (local_5c == 0) {
      bVar1 = 0x20;
    }
    local_4c[local_50] = bVar1;
    FUN_1000fa90(local_38 + local_50 * 3,(byte *)"%.2X ");
    local_50 = local_50 + 1;
  }
  local_4c[local_50] = 0;
  iVar3 = FUN_10006850(0,0,0,0,(byte *)" Data: <%s> %s\n");
  if (iVar3 == 1) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}



// Function: FUN_10009b00 @ 0x10009b00

undefined4 FUN_10009b00(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  FUN_10009480(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_10035ab4 & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_10006850(0,0,0,0,&DAT_10032970);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_10009720((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_10009b80 @ 0x10009b80

void __cdecl FUN_10009b80(int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  if (param_1 != 0) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      iVar2 = FUN_10006850(0,0,0,0,(byte *)"%ld bytes in %ld %hs Blocks.\n");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = FUN_10006850(0,0,0,0,(byte *)"Largest number used: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FUN_10006850(0,0,0,0,(byte *)"Total allocations: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



// Function: FUN_10009c50 @ 0x10009c50

void FUN_10009c50(void)

{
  size_t sVar1;
  int iVar2;
  int *local_10;
  int local_c;
  uint *local_8;
  
  if (DAT_10039630 == 0) {
    FUN_10010370();
  }
  local_c = 0;
  for (local_8 = DAT_10037afc; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    if ((char)*local_8 != '=') {
      local_c = local_c + 1;
    }
    sVar1 = _strlen((char *)local_8);
  }
  local_10 = (int *)FUN_10007ce0((void *)(local_c * 4 + 4),2,0x10033020,0x6d);
  DAT_10037b30 = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (local_8 = DAT_10037afc; (char)*local_8 != '\0';
      local_8 = (uint *)((int)local_8 + (int)(sVar1 + 1))) {
    sVar1 = _strlen((char *)local_8);
    if ((char)*local_8 != '=') {
      iVar2 = FUN_10007ce0((void *)(sVar1 + 1),2,0x10033020,0x79);
      *local_10 = iVar2;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_1000b9b0((uint *)*local_10,local_8);
      local_10 = local_10 + 1;
    }
  }
  FUN_10008770(DAT_10037afc,2);
  DAT_10037afc = (uint *)0x0;
  *local_10 = 0;
  DAT_10039620 = 1;
  return;
}



// Function: FUN_10009da0 @ 0x10009da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009da0(void)

{
  byte *local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_10039630 == 0) {
    FUN_10010370();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10037b6c,0x104);
  DAT_10037b40 = &DAT_10037b6c;
  if (*DAT_10039648 == 0) {
    local_18 = &DAT_10037b6c;
  }
  else {
    local_18 = DAT_10039648;
  }
  FUN_10009e80(local_18,(undefined4 *)0x0,(byte *)0x0,&local_10,&local_8);
  local_c = (undefined4 *)FUN_10007ce0((void *)(local_8 + local_10 * 4),2,0x1003302c,0x80);
  if (local_c == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10009e80(local_18,local_c,(byte *)(local_c + local_10),&local_10,&local_8);
  _DAT_10037b24 = local_10 + -1;
  _DAT_10037b28 = local_c;
  return;
}



// Function: FUN_10009e80 @ 0x10009e80

void __cdecl FUN_10009e80(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  bool bVar4;
  uint local_14;
  byte *local_8;
  
  *param_5 = 0;
  *param_4 = 1;
  local_8 = param_1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while ((pbVar3 = local_8 + 1, *pbVar3 != 0x22 && (*pbVar3 != 0))) {
      if ((((&DAT_10039381)[*pbVar3] & 4) != 0) && (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)
         ) {
        *param_3 = *pbVar3;
        param_3 = param_3 + 1;
        pbVar3 = local_8 + 2;
      }
      local_8 = pbVar3;
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *local_8;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar3 == 0x22) {
      pbVar3 = local_8 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *local_8;
        param_3 = param_3 + 1;
      }
      bVar1 = *local_8;
      pbVar3 = local_8 + 1;
      if (((&DAT_10039381)[bVar1] & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = local_8[1];
          param_3 = param_3 + 1;
        }
        pbVar3 = local_8 + 2;
      }
      local_8 = pbVar3;
    } while (((bVar1 != 0x20) && (bVar1 != 0)) && (bVar1 != 9));
    if (bVar1 == 0) {
      pbVar3 = local_8 + -1;
    }
    else {
      pbVar3 = local_8;
      if (param_3 != (byte *)0x0) {
        param_3[-1] = 0;
      }
    }
  }
  local_8 = pbVar3;
  bVar2 = false;
  while( true ) {
    if (*local_8 != 0) {
      for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
      }
    }
    if (*local_8 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar4 = true;
      local_14 = 0;
      for (; *local_8 == 0x5c; local_8 = local_8 + 1) {
        local_14 = local_14 + 1;
      }
      if (*local_8 == 0x22) {
        if (local_14 % 2 == 0) {
          if (bVar2) {
            bVar4 = local_8[1] == 0x22;
            if (bVar4) {
              local_8 = local_8 + 1;
            }
          }
          else {
            bVar4 = false;
          }
          bVar2 = !bVar2;
        }
        local_14 = local_14 >> 1;
      }
      while (local_14 != 0) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
        local_14 = local_14 - 1;
      }
      if ((*local_8 == 0) || ((!bVar2 && ((*local_8 == 0x20 || (*local_8 == 9)))))) break;
      if (bVar4) {
        if (param_3 == (byte *)0x0) {
          if (((&DAT_10039381)[*local_8] & 4) != 0) {
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if (((&DAT_10039381)[*local_8] & 4) != 0) {
            *param_3 = *local_8;
            param_3 = param_3 + 1;
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *local_8;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      local_8 = local_8 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



// Function: FUN_1000a2b0 @ 0x1000a2b0

LPSTR FUN_1000a2b0(void)

{
  char *pcVar1;
  LPWCH pWVar2;
  void *cbMultiByte;
  LPSTR pCVar3;
  int iVar4;
  LPCH local_1c;
  LPWCH local_18;
  char *local_10;
  LPWCH local_c;
  
  local_18 = (LPWCH)0x0;
  local_1c = (LPCH)0x0;
  if (DAT_10037c70 == 0) {
    local_18 = GetEnvironmentStringsW();
    if (local_18 == (LPWCH)0x0) {
      local_1c = GetEnvironmentStrings();
      if (local_1c == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_10037c70 = 2;
    }
    else {
      DAT_10037c70 = 1;
    }
  }
  if (DAT_10037c70 == 1) {
    if ((local_18 == (LPWCH)0x0) && (local_18 = GetEnvironmentStringsW(), local_18 == (LPWCH)0x0)) {
      pCVar3 = (LPSTR)0x0;
    }
    else {
      local_c = local_18;
      pWVar2 = local_c;
      while (local_c = pWVar2, *local_c != L'\0') {
        pWVar2 = local_c + 1;
        if (local_c[1] == L'\0') {
          pWVar2 = local_c + 2;
        }
      }
      iVar4 = ((int)local_c - (int)local_18 >> 1) + 1;
      cbMultiByte = (void *)WideCharToMultiByte(0,0,local_18,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,
                                                (LPBOOL)0x0);
      if ((cbMultiByte == (void *)0x0) ||
         (local_1c = (LPCH)FUN_10007ce0(cbMultiByte,2,0x10033038,100), local_1c == (LPSTR)0x0)) {
        FreeEnvironmentStringsW(local_18);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,local_18,iVar4,local_1c,(int)cbMultiByte,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar4 == 0) {
          FUN_10008770(local_1c,2);
          local_1c = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(local_18);
        pCVar3 = local_1c;
      }
    }
  }
  else if (DAT_10037c70 == 2) {
    if ((local_1c == (LPCH)0x0) && (local_1c = GetEnvironmentStrings(), local_1c == (LPCH)0x0)) {
      pCVar3 = (LPSTR)0x0;
    }
    else {
      local_10 = local_1c;
      pcVar1 = local_10;
      while (local_10 = pcVar1, *local_10 != '\0') {
        pcVar1 = local_10 + 1;
        if (local_10[1] == '\0') {
          pcVar1 = local_10 + 2;
        }
      }
      pCVar3 = (LPSTR)FUN_10007ce0(local_10 + (1 - (int)local_1c),2,0x10033038,0x8f);
      if (pCVar3 == (LPSTR)0x0) {
        FreeEnvironmentStringsA(local_1c);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        FUN_100103a0((undefined4 *)pCVar3,(undefined4 *)local_1c,
                     (uint)(local_10 + (1 - (int)local_1c)));
        FreeEnvironmentStringsA(local_1c);
      }
    }
  }
  else {
    pCVar3 = (LPSTR)0x0;
  }
  return pCVar3;
}



// Function: FUN_1000a4d0 @ 0x1000a4d0

undefined4 __cdecl FUN_1000a4d0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  DAT_100394ac = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_100394ac == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_1000de20();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      HeapDestroy(DAT_100394ac);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// Function: FUN_1000a520 @ 0x1000a520

void FUN_1000a520(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = DAT_100394a8;
  for (local_8 = 0; local_8 < DAT_100394a4; local_8 = local_8 + 1) {
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
    HeapFree(DAT_100394ac,0,*(LPVOID *)((int)local_c + 0x10));
    local_c = (LPVOID)((int)local_c + 0x14);
  }
  HeapFree(DAT_100394ac,0,DAT_100394a8);
  HeapDestroy(DAT_100394ac);
  return;
}



// Function: __FF_MSGBANNER @ 0x1000a5c0

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_10037b04 == 1) || ((DAT_10037b04 == 0 && (DAT_10037b08 == 1)))) {
    FUN_1000a610(0xfc);
    if (DAT_10037c74 != (code *)0x0) {
      (*DAT_10037c74)();
    }
    FUN_1000a610(0xff);
  }
  return;
}



// Function: FUN_1000a610 @ 0x1000a610

void __cdecl FUN_1000a610(int param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  HANDLE hFile;
  DWORD DVar4;
  undefined *lpBuffer;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  uint local_1b4 [40];
  uint local_114 [65];
  uint *local_10;
  uint local_c;
  DWORD local_8;
  
  for (local_c = 0; (local_c < 0x12 && (param_1 != *(int *)(&DAT_10035ae0 + local_c * 8)));
      local_c = local_c + 1) {
  }
  if (param_1 == *(int *)(&DAT_10035ae0 + local_c * 8)) {
    if ((param_1 != 0xfc) &&
       (iVar2 = FUN_10006850(1,0,0,0,(&PTR_s_R6002___floating_point_not_loade_10035ae4)[local_c * 2]
                            ), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((DAT_10037b04 == 1) || ((DAT_10037b04 == 0 && (DAT_10037b08 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_8;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_10035ae4)[local_c * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_10035ae4)[local_c * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar4 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_114,0x104);
      if (DVar4 == 0) {
        FUN_1000b9b0(local_114,(uint *)"<program name unknown>");
      }
      local_10 = local_114;
      sVar3 = _strlen((char *)local_10);
      if (0x3c < sVar3 + 1) {
        sVar3 = _strlen((char *)local_114);
        local_10 = (uint *)((int)local_10 + (sVar3 - 0x3b));
        _strncpy((char *)local_10,"...",3);
      }
      FUN_1000b9b0(local_1b4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_1000b9c0(local_1b4,local_10);
      FUN_1000b9c0(local_1b4,(uint *)&DAT_100327dc);
      FUN_1000b9c0(local_1b4,(uint *)(&PTR_s_R6002___floating_point_not_loade_10035ae4)[local_c * 2]
                  );
      FUN_1000c160(local_1b4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: __GET_RTERRMSG @ 0x1000a7d0

/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2003 Debug */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  wchar_t *pwVar1;
  uint local_8;
  
  for (local_8 = 0; (local_8 < 0x12 && (param_1 != *(int *)(&DAT_10035ae0 + local_8 * 8)));
      local_8 = local_8 + 1) {
  }
  if (param_1 == *(int *)(&DAT_10035ae0 + local_8 * 8)) {
    pwVar1 = (wchar_t *)(&PTR_s_R6002___floating_point_not_loade_10035ae4)[local_8 * 2];
  }
  else {
    pwVar1 = (wchar_t *)0x0;
  }
  return pwVar1;
}



// Function: FUN_1000a820 @ 0x1000a820

void FUN_1000a820(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10035bb4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10035ba4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10035b94);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10035b74);
  return;
}



// Function: FUN_1000a860 @ 0x1000a860

void FUN_1000a860(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x30; local_8 = local_8 + 1) {
    if ((((*(int *)(&DAT_10035b70 + local_8 * 4) != 0) && (local_8 != 0x11)) && (local_8 != 0xd)) &&
       ((local_8 != 9 && (local_8 != 1)))) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_10035b70 + local_8 * 4));
      FUN_10008770(*(void **)(&DAT_10035b70 + local_8 * 4),2);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10035b94);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10035ba4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10035bb4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10035b74);
  return;
}



// Function: FUN_1000a900 @ 0x1000a900

void __cdecl FUN_1000a900(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(&DAT_10035b70 + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_10007ce0((void *)0x18,2,0x10033310,0xe1);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1000a900(0x11);
    if (*(int *)(&DAT_10035b70 + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_10035b70 + param_1 * 4) = lpCriticalSection;
    }
    else {
      FUN_10008770(lpCriticalSection,2);
    }
    FUN_1000a9a0(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_10035b70 + param_1 * 4));
  return;
}



// Function: FUN_1000a9a0 @ 0x1000a9a0

void __cdecl FUN_1000a9a0(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_10035b70 + param_1 * 4));
  return;
}



// Function: FUN_1000a9c0 @ 0x1000a9c0

void __cdecl FUN_1000a9c0(LPCSTR param_1)

{
  FatalAppExitA(0,param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}



// Function: __XcptFilter @ 0x1000a9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2003 Debug */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int *piVar5;
  int iVar6;
  int local_18;
  
  pDVar4 = FUN_10006480();
  piVar5 = FUN_1000aba0(_ExceptionNum,(int *)pDVar4[0x14]);
  if ((piVar5 == (int *)0x0) || (piVar5[2] == 0)) {
    iVar6 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (piVar5[2] == 5) {
    piVar5[2] = 0;
    iVar6 = 1;
  }
  else if (piVar5[2] == 1) {
    iVar6 = -1;
  }
  else {
    pcVar1 = (code *)piVar5[2];
    DVar2 = pDVar4[0x15];
    pDVar4[0x15] = (DWORD)_ExceptionPtr;
    if (piVar5[1] == 8) {
      for (local_18 = DAT_10035ca8; local_18 < DAT_10035ca8 + _DAT_10035cac; local_18 = local_18 + 1
          ) {
        *(undefined4 *)(pDVar4[0x14] + 8 + local_18 * 0xc) = 0;
      }
      DVar3 = pDVar4[0x16];
      if (*piVar5 == -0x3fffff72) {
        pDVar4[0x16] = 0x83;
      }
      else if (*piVar5 == -0x3fffff70) {
        pDVar4[0x16] = 0x81;
      }
      else if (*piVar5 == -0x3fffff6f) {
        pDVar4[0x16] = 0x84;
      }
      else if (*piVar5 == -0x3fffff6d) {
        pDVar4[0x16] = 0x85;
      }
      else if (*piVar5 == -0x3fffff73) {
        pDVar4[0x16] = 0x82;
      }
      else if (*piVar5 == -0x3fffff71) {
        pDVar4[0x16] = 0x86;
      }
      else if (*piVar5 == -0x3fffff6e) {
        pDVar4[0x16] = 0x8a;
      }
      (*pcVar1)(8,pDVar4[0x16]);
      pDVar4[0x16] = DVar3;
    }
    else {
      piVar5[2] = 0;
      (*pcVar1)(piVar5[1]);
    }
    pDVar4[0x15] = DVar2;
    iVar6 = -1;
  }
  return iVar6;
}



// Function: FUN_1000aba0 @ 0x1000aba0

int * __cdecl FUN_1000aba0(int param_1,int *param_2)

{
  int *local_8;
  
  local_8 = param_2;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < param_2 + DAT_10035cb4 * 3);
  if ((param_2 + DAT_10035cb4 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}



// Function: FUN_1000ac00 @ 0x1000ac00

void FUN_1000ac00(void)

{
  if (DAT_10037d90 == 0) {
    FUN_1000a900(0xb);
    if (DAT_10037d90 == 0) {
      FUN_1000ac60();
      DAT_10037d90 = DAT_10037d90 + 1;
    }
    FUN_1000a9a0(0xb);
  }
  return;
}



// Function: FUN_1000ac40 @ 0x1000ac40

void FUN_1000ac40(void)

{
  FUN_1000a900(0xb);
  FUN_1000ac60();
  FUN_1000a9a0(0xb);
  return;
}



// Function: FUN_1000ac60 @ 0x1000ac60

void FUN_1000ac60(void)

{
  uint *_Str1;
  DWORD DVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_1000a900(0xc);
  DAT_10037cd8 = 0;
  DAT_10035d60 = 0xffffffff;
  DAT_10035d50 = 0xffffffff;
  _Str1 = (uint *)FID_conflict___getenv_lk("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_1000a9a0(0xc);
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10037ce0);
    if (DVar1 != 0xffffffff) {
      DAT_10037cd8 = 1;
      DAT_10035cb8 = DAT_10037ce0 * 0x3c;
      if (DAT_10037d26 != 0) {
        DAT_10035cb8 = DAT_10035cb8 + DAT_10037d34 * 0x3c;
      }
      if ((DAT_10037d7a == 0) || (DAT_10037d88 == 0)) {
        DAT_10035cbc = 0;
        DAT_10035cc0 = 0;
      }
      else {
        DAT_10035cbc = 1;
        DAT_10035cc0 = (DAT_10037d88 - DAT_10037d34) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(DAT_10037dd8,0x220,(LPCWSTR)&DAT_10037ce4,-1,PTR_DAT_10035d44,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10035d44 = 0;
      }
      else {
        PTR_DAT_10035d44[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(DAT_10037dd8,0x220,(LPCWSTR)&DAT_10037d38,-1,PTR_DAT_10035d48,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_10035d48 = 0;
      }
      else {
        PTR_DAT_10035d48[0x3f] = 0;
      }
    }
  }
  else if (((char)*_Str1 == '\0') ||
          ((DAT_10037d8c != (uint *)0x0 &&
           (iVar2 = _strcmp((char *)_Str1,(char *)DAT_10037d8c), iVar2 == 0)))) {
    FUN_1000a9a0(0xc);
  }
  else {
    FUN_10008770(DAT_10037d8c,2);
    iVar2 = 0x10c;
    pcVar5 = "tzset.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)_Str1);
    DAT_10037d8c = (uint *)FUN_10007ce0((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar2);
    if (DAT_10037d8c == (uint *)0x0) {
      FUN_1000a9a0(0xc);
    }
    else {
      FUN_1000b9b0(DAT_10037d8c,_Str1);
      FUN_1000a9a0(0xc);
      _strncpy(PTR_DAT_10035d44,(char *)_Str1,3);
      PTR_DAT_10035d44[3] = 0;
      local_10 = (uint *)((int)_Str1 + 3);
      if (*(char *)local_10 == '-') {
        local_8 = local_8 + 1;
        local_10 = _Str1 + 1;
      }
      iVar2 = FUN_100106e0((byte *)local_10);
      DAT_10035cb8 = iVar2 * 0xe10;
      for (; ((char)*local_10 == '+' || (('/' < (char)*local_10 && ((char)*local_10 < ':'))));
          local_10 = (uint *)((int)local_10 + 1)) {
      }
      if ((char)*local_10 == ':') {
        local_10 = (uint *)((int)local_10 + 1);
        iVar2 = FUN_100106e0((byte *)local_10);
        DAT_10035cb8 = DAT_10035cb8 + iVar2 * 0x3c;
        for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
            local_10 = (uint *)((int)local_10 + 1)) {
        }
        if ((char)*local_10 == ':') {
          local_10 = (uint *)((int)local_10 + 1);
          iVar2 = FUN_100106e0((byte *)local_10);
          DAT_10035cb8 = DAT_10035cb8 + iVar2;
          for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
              local_10 = (uint *)((int)local_10 + 1)) {
          }
        }
      }
      if (local_8 != 0) {
        DAT_10035cb8 = -DAT_10035cb8;
      }
      DAT_10035cbc = (int)(char)*local_10;
      if (DAT_10035cbc == 0) {
        *PTR_DAT_10035d48 = 0;
      }
      else {
        _strncpy(PTR_DAT_10035d48,(char *)local_10,3);
        PTR_DAT_10035d48[3] = 0;
      }
    }
  }
  return;
}



// Function: FUN_1000b010 @ 0x1000b010

undefined4 __cdecl FUN_1000b010(int *param_1)

{
  undefined4 uVar1;
  
  FUN_1000a900(0xb);
  uVar1 = FUN_1000b040(param_1);
  FUN_1000a9a0(0xb);
  return uVar1;
}



// Function: FUN_1000b040 @ 0x1000b040

undefined4 __cdecl FUN_1000b040(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_10035cbc == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_10035d50) || (param_1[5] != DAT_10035d60)) {
    if (DAT_10037cd8 == 0) {
      FUN_1000b340(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_1000b340(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_10037d78 == 0) {
        FUN_1000b340(1,1,param_1[5],(uint)DAT_10037d7a,(uint)DAT_10037d7e,(uint)DAT_10037d7c,0,
                     (uint)DAT_10037d80,(uint)DAT_10037d82,(uint)DAT_10037d84,(uint)DAT_10037d86);
      }
      else {
        FUN_1000b340(1,0,param_1[5],(uint)DAT_10037d7a,0,0,(uint)DAT_10037d7e,(uint)DAT_10037d80,
                     (uint)DAT_10037d82,(uint)DAT_10037d84,(uint)DAT_10037d86);
      }
      if (DAT_10037d24 == 0) {
        FUN_1000b340(0,1,param_1[5],(uint)DAT_10037d26,(uint)DAT_10037d2a,(uint)DAT_10037d28,0,
                     (uint)DAT_10037d2c,(uint)DAT_10037d2e,(uint)DAT_10037d30,(uint)DAT_10037d32);
      }
      else {
        FUN_1000b340(0,0,param_1[5],(uint)DAT_10037d26,0,0,(uint)DAT_10037d2a,(uint)DAT_10037d2c,
                     (uint)DAT_10037d2e,(uint)DAT_10037d30,(uint)DAT_10037d32);
      }
    }
  }
  if (DAT_10035d54 < DAT_10035d64) {
    if ((param_1[7] < DAT_10035d54) || (DAT_10035d64 < param_1[7])) {
      return 0;
    }
    if ((DAT_10035d54 < param_1[7]) && (param_1[7] < DAT_10035d64)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_10035d64) || (DAT_10035d54 < param_1[7])) {
      return 1;
    }
    if ((DAT_10035d64 < param_1[7]) && (param_1[7] < DAT_10035d54)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_10035d54) {
    if (iVar2 < DAT_10035d58) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_10035d68) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_1000b340 @ 0x1000b340

void __cdecl
FUN_1000b340(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      local_10 = (&DAT_10035d68)[param_4];
    }
    else {
      local_10 = *(int *)(&DAT_10035d9c + param_4 * 4);
    }
    local_10 = local_10 + 1;
    iVar1 = (int)(local_10 + (param_3 - 0x46) * 0x16d + -0xd + ((int)(param_3 - 1) >> 2)) % 7;
    if (iVar1 < param_6) {
      local_c = (param_5 + -1) * 7 + local_10 + (param_6 - iVar1);
    }
    else {
      local_c = param_5 * 7 + local_10 + (param_6 - iVar1);
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        local_14 = *(int *)(&DAT_10035d6c + param_4 * 4);
      }
      else {
        local_14 = *(int *)(&DAT_10035da0 + param_4 * 4);
      }
      if (local_14 < local_c) {
        local_c = local_c + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      local_18 = (&DAT_10035d68)[param_4];
    }
    else {
      local_18 = *(int *)(&DAT_10035d9c + param_4 * 4);
    }
    local_c = local_18 + param_7;
  }
  if (param_1 == 1) {
    DAT_10035d54 = local_c;
    DAT_10035d58 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    DAT_10035d50 = param_3;
  }
  else {
    DAT_10035d64 = local_c;
    DAT_10035d68 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000 +
                   DAT_10035cc0 * 1000;
    if (DAT_10035d68 < 0) {
      DAT_10035d68 = DAT_10035d68 + 86400000;
      DAT_10035d64 = local_c + -1;
    }
    else if (86399999 < DAT_10035d68) {
      DAT_10035d68 = DAT_10035d68 + -86400000;
      DAT_10035d64 = local_c + 1;
    }
    DAT_10035d60 = param_3;
  }
  return;
}



// Function: __itoa @ 0x1000b540

/* Library Function - Single Match
    __itoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  if ((_Radix == 10) && (_Value < 0)) {
    xtoa(_Value,_Dest,10,1);
  }
  else {
    xtoa(_Value,_Dest,_Radix,0);
  }
  return _Dest;
}



// Function: xtoa @ 0x1000b590

/* Library Function - Single Match
    _xtoa
   
   Library: Visual Studio 2003 Debug */

void __cdecl xtoa(uint param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *local_c;
  char *local_8;
  
  local_8 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    local_8 = param_2 + 1;
    param_1 = -param_1;
  }
  local_c = local_8;
  do {
    pcVar2 = local_8;
    uVar3 = param_1 % param_3;
    param_1 = param_1 / param_3;
    cVar1 = (char)uVar3;
    if (uVar3 < 10) {
      *local_8 = cVar1 + '0';
    }
    else {
      *local_8 = cVar1 + 'W';
    }
    local_8 = local_8 + 1;
  } while (param_1 != 0);
  *local_8 = '\0';
  local_8 = pcVar2;
  do {
    cVar1 = *local_8;
    *local_8 = *local_c;
    *local_c = cVar1;
    local_8 = local_8 + -1;
    local_c = local_c + 1;
  } while (local_c < local_8);
  return;
}



// Function: __ltoa @ 0x1000b660

/* Library Function - Single Match
    __ltoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ltoa(long _Value,char *_Dest,int _Radix)

{
  undefined4 local_8;
  
  if ((_Radix == 10) && (_Value < 0)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  xtoa(_Value,_Dest,_Radix,local_8);
  return _Dest;
}



// Function: __ultoa @ 0x1000b6a0

/* Library Function - Single Match
    __ultoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Value,_Dest,_Radix,0);
  return _Dest;
}



// Function: __i64toa @ 0x1000b6c0

/* Library Function - Single Match
    __i64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __i64toa(longlong _Val,char *_DstBuf,int _Radix)

{
  int local_8;
  
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  x64toa(_Val,_DstBuf,_Radix,local_8);
  return _DstBuf;
}



// Function: x64toa @ 0x1000b710

/* Library Function - Single Match
    _x64toa@20
   
   Library: Visual Studio 2003 Debug
   __stdcall x64toa,20 */

void x64toa(undefined8 param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_c;
  char *local_8;
  
  local_8 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    local_8 = param_2 + 1;
    param_1 = CONCAT44(-(param_1._4_4_ + ((uint)param_1 != 0)),-(uint)param_1);
  }
  local_c = local_8;
  do {
    pcVar2 = local_8;
    uVar4 = __aullrem((uint)param_1,param_1._4_4_,param_3,0);
    uVar5 = __aulldiv((uint)param_1,param_1._4_4_,param_3,0);
    if ((uint)uVar4 < 10) {
      *local_8 = (char)uVar4 + '0';
    }
    else {
      *local_8 = (char)uVar4 + 'W';
    }
    local_8 = local_8 + 1;
    param_1._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
    bVar3 = param_1._4_4_ != 0;
    param_1 = uVar5;
  } while ((bVar3) || (param_1._0_4_ = (uint)uVar5, bVar3 = (uint)param_1 != 0, bVar3));
  *local_8 = '\0';
  local_8 = pcVar2;
  do {
    cVar1 = *local_8;
    *local_8 = *local_c;
    *local_c = cVar1;
    local_8 = local_8 + -1;
    local_c = local_c + 1;
  } while (local_c < local_8);
  return;
}



// Function: __ui64toa @ 0x1000b810

/* Library Function - Single Match
    __ui64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  x64toa(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}



// Function: _strlen @ 0x1000b830

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
    if (((uint)puVar2 & 3) == 0) goto LAB_1000b850;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1000b883:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1000b850:
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
  goto LAB_1000b883;
}



// Function: FUN_1000b8b0 @ 0x1000b8b0

int __cdecl FUN_1000b8b0(undefined1 *param_1,int param_2,byte *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_10006850(2,0x10033374,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte *)0x0) &&
     (iVar2 = FUN_10006850(2,0x10033374,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_10010e30((int *)&local_24,param_3,(undefined4 *)&stack0x00000010);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10010bb0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_1000b9b0 @ 0x1000b9b0

uint * __cdecl FUN_1000b9b0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_1000ba98;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_1000ba98:
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



// Function: FUN_1000b9c0 @ 0x1000b9c0

uint * __cdecl FUN_1000b9c0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000b9dc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000ba0f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000ba2b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000b9dc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000ba2b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000ba2b;
    }
  }
LAB_1000ba0f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000ba2b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_1000ba98:
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
    if (bVar1 == 0) goto LAB_1000ba98;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: FUN_1000baa0 @ 0x1000baa0

int __cdecl FUN_1000baa0(undefined1 *param_1,int param_2,byte *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_10006850(2,0x10033390,0x5a,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte *)0x0) &&
     (iVar2 = FUN_10006850(2,0x10033390,0x5b,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_10010e30((int *)&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10010bb0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_1000bba0 @ 0x1000bba0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000bba0(void)

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



// Function: FUN_1000bbd0 @ 0x1000bbd0

int __cdecl FUN_1000bbd0(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  int local_10;
  uint local_c;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_1000a900(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_10037da4 == 0)) {
        BVar2 = SetConsoleCtrlHandler(FUN_1000be00,1);
        if (BVar2 != 1) {
          DVar3 = GetLastError();
          pDVar4 = FUN_10011d80();
          *pDVar4 = DVar3;
          FUN_1000a9a0(1);
          goto LAB_1000bdb8;
        }
        DAT_10037da4 = 1;
      }
      switch(param_1) {
      case 2:
        local_10 = DAT_10037d94;
        DAT_10037d94 = param_2;
        break;
      case 0xf:
        local_10 = DAT_10037da0;
        DAT_10037da0 = param_2;
        break;
      case 0x15:
        local_10 = DAT_10037d98;
        DAT_10037d98 = param_2;
        break;
      case 0x16:
        local_10 = DAT_10037d9c;
        DAT_10037d9c = param_2;
      }
      FUN_1000a9a0(1);
      return local_10;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar4 = FUN_10006480();
      if ((undefined *)pDVar4[0x14] == &DAT_10035c30) {
        DVar3 = FUN_10007ce0(DAT_10035cb0,2,0x1003339c,0x133);
        pDVar4[0x14] = DVar3;
        if (pDVar4[0x14] == 0) goto LAB_1000bdb8;
        FUN_100103a0((undefined4 *)pDVar4[0x14],(undefined4 *)&DAT_10035c30,(uint)DAT_10035cb0);
      }
      local_c = FUN_1000c0e0(param_1,pDVar4[0x14]);
      if (local_c != 0) {
        iVar1 = *(int *)(local_c + 8);
        do {
          if (*(int *)(local_c + 4) != param_1) {
            return iVar1;
          }
          *(int *)(local_c + 8) = param_2;
          local_c = local_c + 0xc;
        } while (local_c < pDVar4[0x14] + DAT_10035cb4 * 0xc);
        return iVar1;
      }
    }
  }
LAB_1000bdb8:
  puVar5 = (undefined4 *)FUN_10011d70();
  *puVar5 = 0x16;
  return -1;
}



// Function: FUN_1000be00 @ 0x1000be00

undefined4 FUN_1000be00(int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  FUN_1000a900(1);
  if (param_1 == 0) {
    local_c = &DAT_10037d94;
    local_10 = DAT_10037d94;
    local_8 = 2;
  }
  else {
    local_c = &DAT_10037d98;
    local_10 = DAT_10037d98;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    FUN_1000a9a0(1);
    uVar1 = 0;
  }
  else {
    if (local_10 == (code *)0x1) {
      FUN_1000a9a0(1);
    }
    else {
      *local_c = 0;
      FUN_1000a9a0(1);
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_1000bea0 @ 0x1000bea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000bea0(int param_1)

{
  bool bVar1;
  uint uVar2;
  code *local_20;
  undefined4 *local_1c;
  DWORD local_18;
  int local_14;
  DWORD local_c;
  DWORD *local_8;
  
  bVar1 = false;
  switch(param_1) {
  case 2:
    local_1c = &DAT_10037d94;
    local_20 = DAT_10037d94;
    bVar1 = true;
    break;
  default:
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    local_8 = FUN_10006480();
    uVar2 = FUN_1000c0e0(param_1,local_8[0x14]);
    local_1c = (undefined4 *)(uVar2 + 8);
    local_20 = (code *)*local_1c;
    break;
  case 0xf:
    local_1c = &DAT_10037da0;
    local_20 = DAT_10037da0;
    bVar1 = true;
    break;
  case 0x15:
    local_1c = &DAT_10037d98;
    local_20 = DAT_10037d98;
    bVar1 = true;
    break;
  case 0x16:
    local_1c = &DAT_10037d9c;
    local_20 = DAT_10037d9c;
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1000a900(1);
  }
  if (local_20 != (code *)0x1) {
    if (local_20 == (code *)0x0) {
      if (bVar1) {
        FUN_1000a9a0(1);
      }
                    /* WARNING: Subroutine does not return */
      __exit(3);
    }
    if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
      local_18 = local_8[0x15];
      local_8[0x15] = 0;
      if (param_1 == 8) {
        local_c = local_8[0x16];
        local_8[0x16] = 0x8c;
      }
    }
    if (param_1 == 8) {
      for (local_14 = DAT_10035ca8; local_14 < DAT_10035ca8 + _DAT_10035cac; local_14 = local_14 + 1
          ) {
        *(undefined4 *)(local_8[0x14] + 8 + local_14 * 0xc) = 0;
      }
    }
    else {
      *local_1c = 0;
    }
    if (bVar1) {
      FUN_1000a9a0(1);
    }
    if (param_1 == 8) {
      (*local_20)(8,local_8[0x16]);
    }
    else {
      (*local_20)(param_1);
      if ((param_1 != 0xb) && (param_1 != 4)) {
        return 0;
      }
    }
    local_8[0x15] = local_18;
    if (param_1 == 8) {
      local_8[0x16] = local_c;
    }
    return 0;
  }
  if (bVar1) {
    FUN_1000a9a0(1);
  }
  return 0;
}



// Function: FUN_1000c0e0 @ 0x1000c0e0

uint __cdecl FUN_1000c0e0(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < param_2 + DAT_10035cb4 * 0xc);
  if ((param_2 + DAT_10035cb4 * 0xc <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}



// Function: FUN_1000c140 @ 0x1000c140

DWORD * FUN_1000c140(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006480();
  return pDVar1 + 0x16;
}



// Function: FUN_1000c150 @ 0x1000c150

DWORD * FUN_1000c150(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006480();
  return pDVar1 + 0x15;
}



// Function: FUN_1000c160 @ 0x1000c160

int __cdecl FUN_1000c160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_10037da8 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10037da8 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10037da8 != (FARPROC)0x0) {
        DAT_10037dac = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10037db0 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000c1d3;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000c1d3:
    if (DAT_10037dac != (FARPROC)0x0) {
      local_8 = (*DAT_10037dac)();
    }
    if ((local_8 != 0) && (DAT_10037db0 != (FARPROC)0x0)) {
      local_8 = (*DAT_10037db0)(local_8);
    }
    iVar1 = (*DAT_10037da8)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x1000c220

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
        goto joined_r0x1000c25e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000c29b;
        goto LAB_1000c309;
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
joined_r0x1000c305:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1000c309:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000c29b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1000c305;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1000c305;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1000c305;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000c25e:
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
LAB_1000c29b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_1000c320 @ 0x1000c320

void FUN_1000c320(void)

{
  undefined4 in_EAX;
  undefined2 in_FPUStatusWord;
  
  FUN_1000c710(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUStatusWord));
  return;
}



// Function: FUN_1000c340 @ 0x1000c340

void FUN_1000c340(void)

{
  undefined4 in_EAX;
  undefined2 in_FPUStatusWord;
  
  FUN_1000c710(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUStatusWord));
  return;
}



// Function: FUN_1000c360 @ 0x1000c360

uint __cdecl FUN_1000c360(uint param_1,uint param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined2 in_FPUControlWord;
  
  uVar1 = FUN_1000c430(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUControlWord));
  uVar1 = param_1 & param_2 | uVar1 & ~param_2;
  FUN_1000c5b0(uVar1);
  return uVar1;
}



// Function: __controlfp @ 0x1000c3b0

/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = FUN_1000c360(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}



// Function: FUN_1000c3d0 @ 0x1000c3d0

void FUN_1000c3d0(void)

{
  DWORD DVar1;
  int iVar2;
  DWORD *pDVar3;
  
  pDVar3 = FUN_1000c150();
  DVar1 = *pDVar3;
  __setdefaultprecision();
  if ((DVar1 != 0) && ((**(uint **)(DVar1 + 4) & 0x10008) != 0)) {
    iVar2 = *(int *)(DVar1 + 4);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0xffff;
  }
  return;
}



// Function: FUN_1000c430 @ 0x1000c430

uint __cdecl FUN_1000c430(uint param_1)

{
  uint uVar1;
  uint local_8;
  
  local_8 = 0;
  if ((param_1 & 1) != 0) {
    local_8 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    local_8 = local_8 | 8;
  }
  if ((param_1 & 8) != 0) {
    local_8 = local_8 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    local_8 = local_8 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    local_8 = local_8 | 1;
  }
  if ((param_1 & 2) != 0) {
    local_8 = local_8 | 0x80000;
  }
  uVar1 = param_1 & 0xc00;
  if (uVar1 < 0x801) {
    if (uVar1 == 0x800) {
      local_8 = local_8 | 0x200;
    }
    else if ((uVar1 != 0) && (uVar1 == 0x400)) {
      local_8 = local_8 | 0x100;
    }
  }
  else if (uVar1 == 0xc00) {
    local_8 = local_8 | 0x300;
  }
  if ((param_1 & 0x300) == 0) {
    local_8 = local_8 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    local_8 = local_8 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    local_8 = local_8 | 0x40000;
  }
  return local_8;
}



// Function: FUN_1000c5b0 @ 0x1000c5b0

undefined4 __cdecl FUN_1000c5b0(uint param_1)

{
  uint uVar1;
  ushort local_8;
  
  local_8 = (ushort)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    local_8 = local_8 | 4;
  }
  if ((param_1 & 4) != 0) {
    local_8 = local_8 | 8;
  }
  if ((param_1 & 2) != 0) {
    local_8 = local_8 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    local_8 = local_8 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    local_8 = local_8 | 2;
  }
  uVar1 = param_1 & 0x300;
  if (uVar1 < 0x201) {
    if (uVar1 == 0x200) {
      local_8 = local_8 | 0x800;
    }
    else if ((uVar1 != 0) && (uVar1 == 0x100)) {
      local_8 = local_8 | 0x400;
    }
  }
  else if (uVar1 == 0x300) {
    local_8 = local_8 | 0xc00;
  }
  if ((param_1 & 0x30000) == 0) {
    local_8 = local_8 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    local_8 = local_8 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    local_8 = local_8 | 0x1000;
  }
  return CONCAT22((short)((param_1 & 0x40000) >> 0x10),local_8);
}



// Function: FUN_1000c710 @ 0x1000c710

uint __cdecl FUN_1000c710(uint param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_1 & 1) != 0) {
    local_8 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    local_8 = local_8 | 8;
  }
  if ((param_1 & 8) != 0) {
    local_8 = local_8 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    local_8 = local_8 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    local_8 = local_8 | 1;
  }
  if ((param_1 & 2) != 0) {
    local_8 = local_8 | 0x80000;
  }
  return local_8;
}



// Function: FUN_1000c7c0 @ 0x1000c7c0

uint __cdecl FUN_1000c7c0(int param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  CHAR local_10;
  CHAR local_f;
  undefined1 local_e;
  int local_c;
  uint local_8;
  
  if (param_1 + 1U < 0x101) {
    uVar1 = *(ushort *)(PTR_DAT_10035dec + param_1 * 2) & param_2;
  }
  else {
    if ((*(ushort *)(PTR_DAT_10035dec + (param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_10 = (CHAR)param_1;
      local_f = '\0';
      local_c = 1;
    }
    else {
      local_10 = (CHAR)((uint)param_1 >> 8);
      local_f = (CHAR)param_1;
      local_e = 0;
      local_c = 2;
    }
    BVar2 = FUN_10011d90(1,&local_10,local_c,(LPWORD)&local_8,0,0,1);
    if (BVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_8 & 0xffff & param_2;
    }
  }
  return uVar1;
}



// Function: FUN_1000c880 @ 0x1000c880

int __cdecl FUN_1000c880(int param_1)

{
  return param_1 + 0x20;
}



// Function: FUN_1000c890 @ 0x1000c890

uint __cdecl FUN_1000c890(uint param_1)

{
  bool bVar1;
  
  if (DAT_10037dc8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_100391f4);
    bVar1 = DAT_100391e4 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_100391f4);
      FUN_1000a900(0x13);
    }
    param_1 = FUN_1000c930(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_100391f4);
    }
    else {
      FUN_1000a9a0(0x13);
    }
  }
  return param_1;
}



// Function: FUN_1000c930 @ 0x1000c930

uint __cdecl FUN_1000c930(uint param_1)

{
  int iVar1;
  uint local_14;
  uint local_10;
  char local_c;
  char local_b;
  undefined1 local_a;
  int local_8;
  
  if (DAT_10037dc8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_10035de0 < 2) {
        local_14 = *(ushort *)(PTR_DAT_10035dec + param_1 * 2) & 1;
      }
      else {
        local_14 = FUN_1000c7c0(param_1,1);
      }
      if (local_14 == 0) {
        return param_1;
      }
    }
    if ((*(ushort *)(PTR_DAT_10035dec + ((int)param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
      local_c = (char)param_1;
      local_b = '\0';
      local_8 = 1;
    }
    else {
      local_c = (char)(param_1 >> 8);
      local_b = (char)param_1;
      local_a = 0;
      local_8 = 2;
    }
    iVar1 = FUN_100129a0(DAT_10037dc8,0x100,&local_c,local_8,(LPWSTR)&local_10,3,0,1);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        param_1 = local_10 & 0xff;
      }
      else {
        param_1 = local_10 & 0xff | (local_10 >> 8 & 0xff) << 8;
      }
    }
  }
  return param_1;
}



// Function: FUN_1000ca60 @ 0x1000ca60

undefined4 __cdecl FUN_1000ca60(int param_1,int param_2)

{
  uint uVar1;
  int local_10;
  
  local_10 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar1 = *(uint *)(param_1 + local_10 * 4) & ~(-1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f));
  while( true ) {
    if (uVar1 != 0) {
      return 0;
    }
    local_10 = local_10 + 1;
    if (2 < local_10) break;
    uVar1 = *(uint *)(param_1 + local_10 * 4);
  }
  return 1;
}



// Function: __IncMan @ 0x1000caf0

/* Library Function - Single Match
    __IncMan
   
   Library: Visual Studio */

int __cdecl __IncMan(int param_1,int param_2)

{
  int local_14;
  int local_10;
  
  local_10 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  local_14 = ___addl(*(uint *)(param_1 + local_10 * 4),1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f),
                     (uint *)(param_1 + local_10 * 4));
  while ((local_10 = local_10 + -1, -1 < local_10 && (local_14 != 0))) {
    local_14 = ___addl(*(uint *)(param_1 + local_10 * 4),1,(uint *)(param_1 + local_10 * 4));
  }
  return local_14;
}



// Function: FUN_1000cba0 @ 0x1000cba0

int __cdecl FUN_1000cba0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int local_1c;
  int local_14;
  
  local_1c = 0;
  local_14 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = 0x1f - ((byte)param_2 & 0x1f);
  if (((*(uint *)(param_1 + local_14 * 4) & 1 << (bVar2 & 0x1f)) != 0) &&
     (iVar1 = FUN_1000ca60(param_1,param_2 + 1), iVar1 == 0)) {
    local_1c = __IncMan(param_1,param_2 + -1);
  }
  *(uint *)(param_1 + local_14 * 4) = *(uint *)(param_1 + local_14 * 4) & -1 << (bVar2 & 0x1f);
  while (local_14 = local_14 + 1, local_14 < 3) {
    *(undefined4 *)(param_1 + local_14 * 4) = 0;
  }
  return local_1c;
}



// Function: __CopyMan @ 0x1000cc80

/* Library Function - Single Match
    __CopyMan
   
   Library: Visual Studio */

void __cdecl __CopyMan(undefined4 *param_1,undefined4 *param_2)

{
  int local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = param_2;
  local_c = param_1;
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *local_c = *local_8;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
  }
  return;
}



// Function: __FillZeroMan @ 0x1000ccd0

/* Library Function - Single Match
    __FillZeroMan
   
   Library: Visual Studio */

void __cdecl __FillZeroMan(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + local_8 * 4) = 0;
  }
  return;
}



// Function: __IsZeroMan @ 0x1000cd00

/* Library Function - Single Match
    __IsZeroMan
   
   Library: Visual Studio */

undefined4 __cdecl __IsZeroMan(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 1;
    }
    if (*(int *)(param_1 + local_8 * 4) != 0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}



// Function: __ShrMan @ 0x1000cd40

/* Library Function - Single Match
    __ShrMan
   
   Library: Visual Studio */

void __cdecl __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int local_10;
  uint local_c;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar3 = (byte)param_2 & 0x1f;
  local_c = 0;
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    uVar1 = *(uint *)(param_1 + local_10 * 4);
    *(uint *)(param_1 + local_10 * 4) = *(uint *)(param_1 + local_10 * 4) >> bVar3;
    *(uint *)(param_1 + local_10 * 4) = *(uint *)(param_1 + local_10 * 4) | local_c;
    local_c = (uVar1 & ~(-1 << bVar3)) << (0x20 - bVar3 & 0x1f);
  }
  for (local_10 = 2; -1 < local_10; local_10 = local_10 + -1) {
    if (local_10 < iVar2) {
      *(undefined4 *)(param_1 + local_10 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + local_10 * 4) = *(undefined4 *)(param_1 + (local_10 - iVar2) * 4);
    }
  }
  return;
}



// Function: FUN_1000ce30 @ 0x1000ce30

undefined4 __cdecl FUN_1000ce30(ushort *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_34 [4];
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_c;
  int local_8;
  
  local_8 = (param_1[5] & 0x7fff) - 0x3fff;
  local_24 = param_1[5] & 0x8000;
  local_1c = *(uint *)(param_1 + 3);
  local_18 = *(uint *)(param_1 + 1);
  local_14 = (uint)*param_1 << 0x10;
  if (local_8 == -0x3fff) {
    local_c = 0;
    iVar1 = __IsZeroMan((int)&local_1c);
    if (iVar1 == 0) {
      __FillZeroMan((int)&local_1c);
      local_20 = 2;
    }
    else {
      local_20 = 0;
    }
  }
  else {
    __CopyMan(local_34,&local_1c);
    iVar1 = FUN_1000cba0((int)&local_1c,param_3[2]);
    if (iVar1 != 0) {
      local_8 = local_8 + 1;
    }
    if (local_8 < param_3[1] - param_3[2]) {
      __FillZeroMan((int)&local_1c);
      local_c = 0;
      local_20 = 2;
    }
    else if (param_3[1] < local_8) {
      if (local_8 < *param_3) {
        local_c = local_8 + param_3[5];
        local_1c = local_1c & 0x7fffffff;
        __ShrMan((int)&local_1c,param_3[3]);
        local_20 = 0;
      }
      else {
        __FillZeroMan((int)&local_1c);
        local_1c = local_1c | 0x80000000;
        __ShrMan((int)&local_1c,param_3[3]);
        local_c = *param_3 + param_3[5];
        local_20 = 1;
      }
    }
    else {
      iVar1 = param_3[1] - local_8;
      __CopyMan(&local_1c,local_34);
      __ShrMan((int)&local_1c,iVar1);
      FUN_1000cba0((int)&local_1c,param_3[2]);
      __ShrMan((int)&local_1c,param_3[3] + 1);
      local_c = 0;
      local_20 = 2;
    }
  }
  uVar2 = local_1c | local_c << (0x20U - ((char)param_3[3] + '\x01') & 0x1f) |
          -(uint)(local_24 != 0) & 0x80000000;
  if (param_3[4] == 0x40) {
    param_2[1] = uVar2;
    *param_2 = local_18;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = uVar2;
  }
  return local_20;
}



// Function: FUN_1000d080 @ 0x1000d080

void __cdecl FUN_1000d080(ushort *param_1,uint *param_2)

{
  FUN_1000ce30(param_1,param_2,(int *)&DAT_10035ff8);
  return;
}



// Function: FUN_1000d0a0 @ 0x1000d0a0

void __cdecl FUN_1000d0a0(ushort *param_1,uint *param_2)

{
  FUN_1000ce30(param_1,param_2,(int *)&DAT_10036010);
  return;
}



// Function: FUN_1000d0c0 @ 0x1000d0c0

bool __cdecl FUN_1000d0c0(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = CONCAT22(local_8._2_2_,param_1[5]) & 0xffff7fff;
  uVar1 = param_1[5];
  local_14 = *(undefined4 *)(param_1 + 3);
  local_10 = *(undefined4 *)(param_1 + 1);
  local_c = (uint)*param_1 << 0x10;
  iVar2 = FUN_1000cba0((int)&local_14,0x40);
  if (iVar2 != 0) {
    local_14 = 0x80000000;
    local_8 = (uint)(ushort)((short)local_8 + 1);
  }
  param_2[1] = local_14;
  *param_2 = local_10;
  *(ushort *)(param_2 + 2) = uVar1 & 0x8000 | (ushort)local_8;
  return (local_8 & 0xffff) == 0x7fff;
}



// Function: FUN_1000d180 @ 0x1000d180

void __cdecl FUN_1000d180(uint *param_1,byte *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_10013000(local_10,&local_14,param_2,0,0,0,0);
  FUN_1000d080(local_10,param_1);
  return;
}



// Function: FUN_1000d1c0 @ 0x1000d1c0

void __cdecl FUN_1000d1c0(undefined4 *param_1,byte *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_10013000(local_10,&local_14,param_2,1,0,0,0);
  FUN_1000d0c0(local_10,param_1);
  return;
}



// Function: FUN_1000d200 @ 0x1000d200

void __cdecl FUN_1000d200(uint *param_1,byte *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_10013000(local_10,&local_14,param_2,0,0,0,0);
  FUN_1000d0a0(local_10,param_1);
  return;
}



// Function: FUN_1000d240 @ 0x1000d240

void __cdecl FUN_1000d240(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *local_c;
  char *local_8;
  
  local_c = *(char **)(param_3 + 0xc);
  *param_1 = '0';
  pcVar2 = param_1;
  for (; local_8 = pcVar2 + 1, 0 < param_2; param_2 = param_2 + -1) {
    if (*local_c == '\0') {
      cVar1 = '0';
    }
    else {
      cVar1 = *local_c;
      local_c = local_c + 1;
    }
    *local_8 = cVar1;
    pcVar2 = local_8;
  }
  *local_8 = '\0';
  if ((-1 < param_2) && (local_8 = pcVar2, '4' < *local_c)) {
    for (; *local_8 == '9'; local_8 = local_8 + -1) {
      *local_8 = '0';
    }
    *local_8 = *local_8 + '\x01';
  }
  if (*param_1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(param_1 + 1);
    FUN_1000d590((undefined4 *)param_1,(undefined4 *)(param_1 + 1),sVar3 + 1);
  }
  return;
}



// Function: FUN_1000d340 @ 0x1000d340

int * __cdecl FUN_1000d340(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int iVar1;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint local_c;
  ushort local_8;
  
  FUN_1000d3c0(&local_10,&param_1);
  iVar1 = FUN_10013b80(local_10,local_c,local_8,0x11,0,&local_2c);
  param_3[2] = iVar1;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_1000b9b0(param_4,local_28);
  param_3[3] = (int)param_4;
  return param_3;
}



// Function: FUN_1000d3c0 @ 0x1000d3c0

void __cdecl FUN_1000d3c0(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  short local_18;
  uint local_10;
  
  local_10 = 0x80000000;
  iVar3 = (int)(*(ushort *)((int)param_2 + 6) & 0x7ff0) >> 4;
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar2 = *param_2;
  local_18 = (short)iVar3;
  if (iVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    uVar4 = 0x3c01;
    local_10 = 0;
  }
  else if (iVar3 == 0x7ff) {
    uVar4 = 0x7fff;
  }
  else {
    uVar4 = local_18 + 0x3c00;
  }
  param_1[1] = local_10 | (param_2[1] & 0xfffff) << 0xb | uVar2 >> 0x15;
  *param_1 = uVar2 << 0xb;
  while ((param_1[1] & 0x80000000) == 0) {
    param_1[1] = param_1[1] << 1 | (uint)((*param_1 & 0x80000000) != 0);
    *param_1 = *param_1 << 1;
    uVar4 = uVar4 - 1;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | uVar4;
  return;
}



// Function: _memset @ 0x1000d530

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



// Function: FUN_1000d590 @ 0x1000d590

undefined4 * __cdecl FUN_1000d590(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_1000d747_caseD_2;
        case 3:
          goto switchD_1000d747_caseD_3;
        }
        goto switchD_1000d747_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1000d747_caseD_0;
      case 1:
        goto switchD_1000d747_caseD_1;
      case 2:
        goto switchD_1000d747_caseD_2;
      case 3:
        goto switchD_1000d747_caseD_3;
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
              goto switchD_1000d747_caseD_2;
            case 3:
              goto switchD_1000d747_caseD_3;
            }
            goto switchD_1000d747_caseD_1;
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
              goto switchD_1000d747_caseD_2;
            case 3:
              goto switchD_1000d747_caseD_3;
            }
            goto switchD_1000d747_caseD_1;
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
              goto switchD_1000d747_caseD_2;
            case 3:
              goto switchD_1000d747_caseD_3;
            }
            goto switchD_1000d747_caseD_1;
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
switchD_1000d747_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1000d747_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1000d747_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1000d747_caseD_0:
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
        goto switchD_1000d5c5_caseD_2;
      case 3:
        goto switchD_1000d5c5_caseD_3;
      }
      goto switchD_1000d5c5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1000d5c5_caseD_0;
    case 1:
      goto switchD_1000d5c5_caseD_1;
    case 2:
      goto switchD_1000d5c5_caseD_2;
    case 3:
      goto switchD_1000d5c5_caseD_3;
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
            goto switchD_1000d5c5_caseD_2;
          case 3:
            goto switchD_1000d5c5_caseD_3;
          }
          goto switchD_1000d5c5_caseD_1;
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
            goto switchD_1000d5c5_caseD_2;
          case 3:
            goto switchD_1000d5c5_caseD_3;
          }
          goto switchD_1000d5c5_caseD_1;
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
            goto switchD_1000d5c5_caseD_2;
          case 3:
            goto switchD_1000d5c5_caseD_3;
          }
          goto switchD_1000d5c5_caseD_1;
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
switchD_1000d5c5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1000d5c5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1000d5c5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1000d5c5_caseD_0:
  return param_1;
}



// Function: __fptrap @ 0x1000d8d0

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Debug */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



// Function: _set_new_handler @ 0x1000d8e0

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  FUN_1000a900(9);
  p_Var1 = DAT_10037db8;
  DAT_10037db8 = param_1;
  FUN_1000a9a0(9);
  return p_Var1;
}



// Function: FUN_1000d910 @ 0x1000d910

undefined4 FUN_1000d910(void)

{
  return DAT_10037db8;
}



// Function: __callnewh @ 0x1000d920

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Debug */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_10037db8 != (code *)0x0) && (iVar1 = (*DAT_10037db8)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// Function: FUN_1000d950 @ 0x1000d950

void __cdecl FUN_1000d950(void *param_1)

{
  __nh_malloc_base(param_1,(uint)param_1,DAT_10037db4);
  return;
}



// Function: __nh_malloc_base @ 0x1000d970

/* Library Function - Single Match
    __nh_malloc_base
   
   Library: Visual Studio 2003 Debug */

int * __thiscall __nh_malloc_base(void *this,uint param_1,int param_2)

{
  int iVar1;
  void *extraout_ECX;
  int *local_8;
  
  if (param_1 < 0xffffffe1) {
    do {
      if (param_1 < 0xffffffe1) {
        local_8 = FUN_1000d9d0(this,param_1);
      }
      else {
        local_8 = (int *)0x0;
      }
      if (local_8 != (int *)0x0) {
        return local_8;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar1 = __callnewh(param_1);
      this = extraout_ECX;
    } while (iVar1 != 0);
  }
  return (int *)0x0;
}



// Function: FUN_1000d9d0 @ 0x1000d9d0

int * __thiscall FUN_1000d9d0(void *this,uint param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10036034) {
    FUN_1000a900(9);
    piVar1 = FUN_1000e510(param_1);
    FUN_1000a9a0(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = HeapAlloc(DAT_100394ac,0,param_1 + 0xf & 0xfffffff0);
  return piVar1;
}



// Function: FUN_1000da40 @ 0x1000da40

undefined4 FUN_1000da40(void)

{
  return 1;
}



// Function: FUN_1000da50 @ 0x1000da50

LPVOID __cdecl FUN_1000da50(LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_2 < 0xffffffe1) {
    FUN_1000a900(9);
    puVar1 = (uint *)FUN_1000de80((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_1000a9a0(9);
      if (param_2 == 0) {
        param_2 = 1;
      }
      local_8 = HeapReAlloc(DAT_100394ac,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
    else {
      local_8 = (LPVOID)0x0;
      if (param_2 <= DAT_10036034) {
        iVar2 = FUN_1000ed50(puVar1,(int)param_1,param_2);
        if (iVar2 != 0) {
          local_8 = param_1;
        }
      }
      FUN_1000a9a0(9);
    }
  }
  else {
    local_8 = (LPVOID)0x0;
  }
  return local_8;
}



// Function: FUN_1000db00 @ 0x1000db00

int * __cdecl FUN_1000db00(int *param_1,void *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  void *local_18;
  void *local_14;
  int *local_c;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_1000d950(param_2);
  }
  else if (param_2 == (void *)0x0) {
    FUN_1000dcf0(param_1,param_1);
    piVar1 = (int *)0x0;
  }
  else {
    do {
      local_c = (int *)0x0;
      if (param_2 < (void *)0xffffffe1) {
        FUN_1000a900(9);
        puVar2 = (uint *)FUN_1000de80((int)param_1);
        if (puVar2 == (uint *)0x0) {
          FUN_1000a9a0(9);
          if (param_2 == (void *)0x0) {
            param_2 = (void *)0x1;
          }
          param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
          local_c = HeapReAlloc(DAT_100394ac,0,param_1,(SIZE_T)param_2);
        }
        else {
          if (param_2 <= DAT_10036034) {
            iVar3 = FUN_1000ed50(puVar2,(int)param_1,(int)param_2);
            if (iVar3 == 0) {
              local_c = FUN_1000e510((int)param_2);
              if (local_c != (int *)0x0) {
                local_14 = (void *)(param_1[-1] - 1);
                if (param_2 <= local_14) {
                  local_14 = param_2;
                }
                FUN_100103a0(local_c,param_1,(uint)local_14);
                FUN_1000df40(puVar2,(int)param_1);
              }
            }
            else {
              local_c = param_1;
            }
          }
          if (local_c == (int *)0x0) {
            if (param_2 == (void *)0x0) {
              param_2 = (void *)0x1;
            }
            param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
            local_c = HeapAlloc(DAT_100394ac,0,(SIZE_T)param_2);
            if (local_c != (int *)0x0) {
              local_18 = param_2;
              if ((void *)(param_1[-1] - 1U) < param_2) {
                local_18 = (void *)(param_1[-1] - 1U);
              }
              FUN_100103a0(local_c,param_1,(uint)local_18);
              FUN_1000df40(puVar2,(int)param_1);
            }
          }
          FUN_1000a9a0(9);
        }
      }
      if (local_c != (int *)0x0) {
        return local_c;
      }
      if (DAT_10037db4 == 0) {
        return (int *)0x0;
      }
      iVar3 = __callnewh((size_t)param_2);
    } while (iVar3 != 0);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



// Function: FUN_1000dcf0 @ 0x1000dcf0

void __thiscall FUN_1000dcf0(void *this,LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_1000a900(9);
    puVar1 = (uint *)FUN_1000de80((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_1000a9a0(9);
      HeapFree(DAT_100394ac,0,param_1);
    }
    else {
      FUN_1000df40(puVar1,(int)param_1);
      FUN_1000a9a0(9);
    }
  }
  return;
}



// Function: FUN_1000dd60 @ 0x1000dd60

undefined4 FUN_1000dd60(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  FUN_1000a900(9);
  iVar1 = FUN_1000f470();
  if (iVar1 < 0) {
    local_8 = 0xfffffffc;
  }
  FUN_1000a9a0(9);
  BVar2 = HeapValidate(DAT_100394ac,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      pDVar4 = FUN_10011d80();
      *pDVar4 = 0x78;
      puVar5 = (undefined4 *)FUN_10011d70();
      *puVar5 = 0x28;
    }
    else {
      local_8 = 0xfffffffc;
    }
  }
  return local_8;
}



// Function: FUN_1000dde0 @ 0x1000dde0

void FUN_1000dde0(void)

{
  FUN_1000dd60();
  return;
}



// Function: FUN_1000ddf0 @ 0x1000ddf0

undefined4 FUN_1000ddf0(void)

{
  return DAT_10036034;
}



// Function: FUN_1000de00 @ 0x1000de00

bool __cdecl FUN_1000de00(uint param_1)

{
  if (param_1 < 0x3f9) {
    DAT_10036034 = param_1;
  }
  return param_1 < 0x3f9;
}



// Function: FUN_1000de20 @ 0x1000de20

bool FUN_1000de20(void)

{
  DAT_100394a8 = HeapAlloc(DAT_100394ac,0,0x140);
  if (DAT_100394a8 != (LPVOID)0x0) {
    DAT_100394a0 = 0;
    DAT_100394a4 = 0;
    DAT_10039488 = 0x10;
    DAT_1003949c = DAT_100394a8;
  }
  return DAT_100394a8 != (LPVOID)0x0;
}



// Function: FUN_1000de80 @ 0x1000de80

uint __cdecl FUN_1000de80(int param_1)

{
  uint local_c;
  
  local_c = DAT_100394a8;
  while( true ) {
    if (DAT_100394a8 + DAT_100394a4 * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}



// Function: FUN_1000dee0 @ 0x1000dee0

undefined4 __cdecl FUN_1000dee0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 local_10;
  
  uVar1 = param_2 - *(int *)(param_1 + 0xc);
  if ((((*(uint *)(param_1 + 8) & 0x80000000U >> ((byte)(uVar1 >> 0xf) & 0x1f)) == 0) &&
      ((uVar1 & 0xf) == 0)) && ((uVar1 & 0xfff) != 0)) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



// Function: FUN_1000df40 @ 0x1000df40

void __cdecl FUN_1000df40(uint *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int *local_20;
  
  uVar4 = param_1[4];
  uVar8 = param_2 - param_1[3] >> 0xf;
  piVar2 = (int *)(uVar4 + 0x144 + uVar8 * 0x204);
  local_20 = (int *)(param_2 + -4);
  local_34 = *local_20 + -1;
  puVar9 = (uint *)((int)local_20 + local_34);
  uVar5 = *puVar9;
  uVar6 = *(uint *)(param_2 + -8);
  if ((uVar5 & 1) == 0) {
    local_28 = ((int)uVar5 >> 4) - 1;
    if (0x3f < local_28) {
      local_28 = 0x3f;
    }
    if (puVar9[1] == puVar9[2]) {
      bVar7 = (byte)local_28;
      if (local_28 < 0x20) {
        *(uint *)(uVar4 + 0x44 + uVar8 * 4) =
             *(uint *)(uVar4 + 0x44 + uVar8 * 4) & ~(0x80000000U >> (bVar7 & 0x1f));
        *(char *)(uVar4 + local_28 + 4) = *(char *)(uVar4 + local_28 + 4) + -1;
        if (*(char *)(uVar4 + local_28 + 4) == '\0') {
          *param_1 = *param_1 & ~(0x80000000U >> (bVar7 & 0x1f));
        }
      }
      else {
        *(uint *)(uVar4 + 0xc4 + uVar8 * 4) =
             *(uint *)(uVar4 + 0xc4 + uVar8 * 4) & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
        *(char *)(uVar4 + local_28 + 4) = *(char *)(uVar4 + local_28 + 4) + -1;
        if (*(char *)(uVar4 + local_28 + 4) == '\0') {
          param_1[1] = param_1[1] & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
        }
      }
    }
    *(uint *)(puVar9[2] + 4) = puVar9[1];
    *(uint *)(puVar9[1] + 8) = puVar9[2];
    local_34 = local_34 + uVar5;
  }
  local_2c = (local_34 >> 4) - 1;
  if (0x3f < local_2c) {
    local_2c = 0x3f;
  }
  if ((uVar6 & 1) == 0) {
    local_20 = (int *)((int)local_20 - uVar6);
    local_30 = ((int)uVar6 >> 4) - 1;
    if (0x3f < local_30) {
      local_30 = 0x3f;
    }
    local_34 = local_34 + uVar6;
    local_2c = (local_34 >> 4) - 1;
    if (0x3f < local_2c) {
      local_2c = 0x3f;
    }
    if (local_30 != local_2c) {
      if (local_20[1] == local_20[2]) {
        bVar7 = (byte)local_30;
        if (local_30 < 0x20) {
          *(uint *)(uVar4 + 0x44 + uVar8 * 4) =
               *(uint *)(uVar4 + 0x44 + uVar8 * 4) & ~(0x80000000U >> (bVar7 & 0x1f));
          *(char *)(uVar4 + local_30 + 4) = *(char *)(uVar4 + local_30 + 4) + -1;
          if (*(char *)(uVar4 + local_30 + 4) == '\0') {
            *param_1 = *param_1 & ~(0x80000000U >> (bVar7 & 0x1f));
          }
        }
        else {
          *(uint *)(uVar4 + 0xc4 + uVar8 * 4) =
               *(uint *)(uVar4 + 0xc4 + uVar8 * 4) & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
          *(char *)(uVar4 + local_30 + 4) = *(char *)(uVar4 + local_30 + 4) + -1;
          if (*(char *)(uVar4 + local_30 + 4) == '\0') {
            param_1[1] = param_1[1] & ~(0x80000000U >> (bVar7 - 0x20 & 0x1f));
          }
        }
      }
      *(int *)(local_20[2] + 4) = local_20[1];
      *(int *)(local_20[1] + 8) = local_20[2];
    }
  }
  if (((uVar6 & 1) != 0) || (local_30 != local_2c)) {
    piVar1 = piVar2 + local_2c * 2;
    local_20[1] = piVar1[1];
    local_20[2] = (int)piVar1;
    piVar1[1] = (int)local_20;
    *(int **)(local_20[1] + 8) = local_20;
    if (local_20[1] == local_20[2]) {
      bVar7 = (byte)local_2c;
      if (local_2c < 0x20) {
        cVar3 = *(char *)(uVar4 + local_2c + 4);
        *(char *)(uVar4 + local_2c + 4) = *(char *)(uVar4 + local_2c + 4) + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar7 & 0x1f);
        }
        *(uint *)(uVar4 + 0x44 + uVar8 * 4) =
             *(uint *)(uVar4 + 0x44 + uVar8 * 4) | 0x80000000U >> (bVar7 & 0x1f);
      }
      else {
        cVar3 = *(char *)(uVar4 + local_2c + 4);
        *(char *)(uVar4 + local_2c + 4) = *(char *)(uVar4 + local_2c + 4) + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
        }
        *(uint *)(uVar4 + 0xc4 + uVar8 * 4) =
             *(uint *)(uVar4 + 0xc4 + uVar8 * 4) | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
      }
    }
  }
  *local_20 = local_34;
  *(int *)((int)local_20 + local_34 + -4) = local_34;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    if (DAT_100394a0 != (uint *)0x0) {
      VirtualFree((LPVOID)(DAT_100394a0[3] + DAT_10039498 * 0x8000),0x8000,0x4000);
      DAT_100394a0[2] = DAT_100394a0[2] | 0x80000000U >> ((byte)DAT_10039498 & 0x1f);
      *(undefined4 *)(DAT_100394a0[4] + 0xc4 + DAT_10039498 * 4) = 0;
      *(char *)(DAT_100394a0[4] + 0x43) = *(char *)(DAT_100394a0[4] + 0x43) + -1;
      if (*(char *)(DAT_100394a0[4] + 0x43) == '\0') {
        DAT_100394a0[1] = DAT_100394a0[1] & 0xfffffffe;
      }
      if (DAT_100394a0[2] == 0xffffffff) {
        VirtualFree((LPVOID)DAT_100394a0[3],0,0x8000);
        HeapFree(DAT_100394ac,0,(LPVOID)DAT_100394a0[4]);
        FUN_1000d590(DAT_100394a0,DAT_100394a0 + 5,
                     (DAT_100394a8 + DAT_100394a4 * 0x14) - (int)(DAT_100394a0 + 5));
        DAT_100394a4 = DAT_100394a4 + -1;
        if (DAT_100394a0 < param_1) {
          param_1 = param_1 + -5;
        }
        DAT_1003949c = DAT_100394a8;
      }
    }
    DAT_100394a0 = param_1;
    DAT_10039498 = uVar8;
  }
  return;
}



// Function: FUN_1000e510 @ 0x1000e510

int * __cdecl FUN_1000e510(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  uint local_38;
  int local_34;
  uint local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  int local_18;
  
  puVar7 = DAT_100394a8 + DAT_100394a4 * 5;
  uVar9 = param_1 + 0x17U & 0xfffffff0;
  iVar5 = ((int)(param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar5;
  if (iVar5 < 0x20) {
    local_28 = 0xffffffff >> (bVar6 & 0x1f);
    local_38 = 0xffffffff;
  }
  else {
    local_28 = 0;
    local_38 = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (local_1c = DAT_1003949c;
      (local_1c < puVar7 && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
      local_1c = local_1c + 5) {
  }
  if (local_1c == puVar7) {
    for (local_1c = DAT_100394a8;
        (local_1c < DAT_1003949c && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
        local_1c = local_1c + 5) {
    }
    if (local_1c == DAT_1003949c) {
      for (; (local_1c < puVar7 && (local_1c[2] == 0)); local_1c = local_1c + 5) {
      }
      if (local_1c == puVar7) {
        for (local_1c = DAT_100394a8; (local_1c < DAT_1003949c && (local_1c[2] == 0));
            local_1c = local_1c + 5) {
        }
        if ((local_1c == DAT_1003949c) && (local_1c = FUN_1000ea50(), local_1c == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar5 = FUN_1000eb60((int)local_1c);
      *(int *)local_1c[4] = iVar5;
      if (*(int *)local_1c[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_1003949c = local_1c;
  piVar4 = (int *)local_1c[4];
  local_34 = *piVar4;
  if ((local_34 == -1) ||
     ((local_28 & piVar4[local_34 + 0x11]) == 0 && (local_38 & piVar4[local_34 + 0x31]) == 0)) {
    local_34 = 0;
    while ((local_28 & piVar4[local_34 + 0x11]) == 0 && (local_38 & piVar4[local_34 + 0x31]) == 0) {
      local_34 = local_34 + 1;
    }
  }
  piVar2 = piVar4 + local_34 * 0x81 + 0x51;
  local_24 = 0;
  local_20 = local_28 & piVar4[local_34 + 0x11];
  if (local_20 == 0) {
    local_24 = 0x20;
    local_20 = local_38 & piVar4[local_34 + 0x31];
  }
  for (; -1 < (int)local_20; local_20 = local_20 << 1) {
    local_24 = local_24 + 1;
  }
  piVar8 = (int *)piVar2[local_24 * 2 + 1];
  iVar5 = *piVar8 - uVar9;
  local_18 = (iVar5 >> 4) + -1;
  if (0x3f < local_18) {
    local_18 = 0x3f;
  }
  if (local_18 != local_24) {
    if (piVar8[1] == piVar8[2]) {
      bVar6 = (byte)local_24;
      if (local_24 < 0x20) {
        piVar4[local_34 + 0x11] = piVar4[local_34 + 0x11] & ~(0x80000000U >> (bVar6 & 0x1f));
        *(char *)((int)piVar4 + local_24 + 4) = *(char *)((int)piVar4 + local_24 + 4) + -1;
        if (*(char *)((int)piVar4 + local_24 + 4) == '\0') {
          *local_1c = *local_1c & ~(0x80000000U >> (bVar6 & 0x1f));
        }
      }
      else {
        piVar4[local_34 + 0x31] = piVar4[local_34 + 0x31] & ~(0x80000000U >> (bVar6 - 0x20 & 0x1f));
        *(char *)((int)piVar4 + local_24 + 4) = *(char *)((int)piVar4 + local_24 + 4) + -1;
        if (*(char *)((int)piVar4 + local_24 + 4) == '\0') {
          local_1c[1] = local_1c[1] & ~(0x80000000U >> (bVar6 - 0x20 & 0x1f));
        }
      }
    }
    *(int *)(piVar8[2] + 4) = piVar8[1];
    *(int *)(piVar8[1] + 8) = piVar8[2];
    if (iVar5 != 0) {
      piVar1 = piVar2 + local_18 * 2;
      piVar8[1] = piVar1[1];
      piVar8[2] = (int)piVar1;
      piVar1[1] = (int)piVar8;
      *(int **)(piVar8[1] + 8) = piVar8;
      if (piVar8[1] == piVar8[2]) {
        bVar6 = (byte)local_18;
        if (local_18 < 0x20) {
          cVar3 = *(char *)((int)piVar4 + local_18 + 4);
          *(char *)((int)piVar4 + local_18 + 4) = *(char *)((int)piVar4 + local_18 + 4) + '\x01';
          if (cVar3 == '\0') {
            *local_1c = *local_1c | 0x80000000U >> (bVar6 & 0x1f);
          }
          piVar4[local_34 + 0x11] = piVar4[local_34 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
        }
        else {
          cVar3 = *(char *)((int)piVar4 + local_18 + 4);
          *(char *)((int)piVar4 + local_18 + 4) = *(char *)((int)piVar4 + local_18 + 4) + '\x01';
          if (cVar3 == '\0') {
            local_1c[1] = local_1c[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
          }
          piVar4[local_34 + 0x31] = piVar4[local_34 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
      }
    }
  }
  if (iVar5 != 0) {
    *piVar8 = iVar5;
    *(int *)((int)piVar8 + iVar5 + -4) = iVar5;
  }
  piVar8 = (int *)((int)piVar8 + iVar5);
  *piVar8 = uVar9 + 1;
  *(uint *)((int)piVar8 + (uVar9 - 4)) = uVar9 + 1;
  iVar5 = *piVar2;
  *piVar2 = *piVar2 + 1;
  if (((iVar5 == 0) && (local_1c == DAT_100394a0)) && (local_34 == DAT_10039498)) {
    DAT_100394a0 = (uint *)0x0;
  }
  *piVar4 = local_34;
  return piVar8 + 1;
}



// Function: FUN_1000ea50 @ 0x1000ea50

undefined4 * FUN_1000ea50(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_100394a4 == DAT_10039488) {
    pvVar1 = HeapReAlloc(DAT_100394ac,0,DAT_100394a8,(DAT_10039488 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10039488 = DAT_10039488 + 0x10;
    DAT_100394a8 = pvVar1;
  }
  puVar2 = (undefined4 *)((int)DAT_100394a8 + DAT_100394a4 * 0x14);
  pvVar1 = HeapAlloc(DAT_100394ac,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_100394ac,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_100394a4 = DAT_100394a4 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}



// Function: FUN_1000eb60 @ 0x1000eb60

int __cdecl FUN_1000eb60(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  LPVOID lpAddress;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar4 = *(int *)(param_1 + 0x10);
  local_c = *(int *)(param_1 + 8);
  local_2c = 0;
  for (; -1 < local_c; local_c = local_c << 1) {
    local_2c = local_2c + 1;
  }
  iVar2 = iVar4 + 0x144 + local_2c * 0x204;
  for (local_24 = 0; local_24 < 0x3f; local_24 = local_24 + 1) {
    iVar1 = iVar2 + local_24 * 8;
    *(int *)(iVar1 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
  }
  lpAddress = (LPVOID)(*(int *)(param_1 + 0xc) + local_2c * 0x8000);
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    local_2c = -1;
  }
  else {
    for (local_8 = lpAddress; local_8 <= (LPVOID)((int)lpAddress + 0x7000U);
        local_8 = (LPVOID)((int)local_8 + 0x1000)) {
      *(undefined4 *)((int)local_8 + 8) = 0xffffffff;
      *(undefined4 *)((int)local_8 + 0xffc) = 0xffffffff;
      *(undefined4 *)((int)local_8 + 0xc) = 0xff0;
      *(int *)((int)local_8 + 0x10) = (int)local_8 + 0x100c;
      *(int *)((int)local_8 + 0x14) = (int)local_8 + -0xff4;
      *(undefined4 *)((int)local_8 + 0xff8) = 0xff0;
    }
    *(int *)(iVar2 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)(*(int *)(iVar2 + 0x1fc) + 8) = iVar2 + 0x1f8;
    *(int *)(iVar2 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)(*(int *)(iVar2 + 0x200) + 4) = iVar2 + 0x1f8;
    *(undefined4 *)(iVar4 + 0x44 + local_2c * 4) = 0;
    *(undefined4 *)(iVar4 + 0xc4 + local_2c * 4) = 1;
    cVar3 = *(char *)(iVar4 + 0x43);
    *(char *)(iVar4 + 0x43) = *(char *)(iVar4 + 0x43) + '\x01';
    if (cVar3 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)local_2c & 0x1f));
  }
  return local_2c;
}



// Function: FUN_1000ed50 @ 0x1000ed50

undefined4 __cdecl FUN_1000ed50(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  int *piVar10;
  uint uVar11;
  int local_2c;
  uint local_28;
  uint local_24;
  
  uVar5 = param_3 + 0x17U & 0xfffffff0;
  uVar3 = param_1[4];
  uVar11 = param_2 - param_1[3] >> 0xf;
  iVar1 = uVar3 + 0x144 + uVar11 * 0x204;
  piVar6 = (int *)(param_2 + -4);
  local_2c = *piVar6 + -1;
  puVar7 = (uint *)((int)piVar6 + local_2c);
  uVar4 = *puVar7;
  if (local_2c < (int)uVar5) {
    if (((uVar4 & 1) != 0) || ((int)(local_2c + uVar4) < (int)uVar5)) {
      return 0;
    }
    local_24 = ((int)uVar4 >> 4) - 1;
    if (0x3f < local_24) {
      local_24 = 0x3f;
    }
    if (puVar7[1] == puVar7[2]) {
      bVar9 = (byte)local_24;
      if (local_24 < 0x20) {
        *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
             *(uint *)(uVar3 + 0x44 + uVar11 * 4) & ~(0x80000000U >> (bVar9 & 0x1f));
        *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
        if (*(char *)(uVar3 + local_24 + 4) == '\0') {
          *param_1 = *param_1 & ~(0x80000000U >> (bVar9 & 0x1f));
        }
      }
      else {
        *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
             *(uint *)(uVar3 + 0xc4 + uVar11 * 4) & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
        *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
        if (*(char *)(uVar3 + local_24 + 4) == '\0') {
          param_1[1] = param_1[1] & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
        }
      }
    }
    *(uint *)(puVar7[2] + 4) = puVar7[1];
    *(uint *)(puVar7[1] + 8) = puVar7[2];
    iVar8 = (local_2c + uVar4) - uVar5;
    if (0 < iVar8) {
      piVar10 = (int *)((int)piVar6 + uVar5);
      local_24 = (iVar8 >> 4) - 1;
      if (0x3f < local_24) {
        local_24 = 0x3f;
      }
      iVar1 = iVar1 + local_24 * 8;
      piVar10[1] = *(int *)(iVar1 + 4);
      piVar10[2] = iVar1;
      *(int **)(iVar1 + 4) = piVar10;
      *(int **)(piVar10[1] + 8) = piVar10;
      if (piVar10[1] == piVar10[2]) {
        bVar9 = (byte)local_24;
        if (local_24 < 0x20) {
          cVar2 = *(char *)(uVar3 + local_24 + 4);
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + '\x01';
          if (cVar2 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar9 & 0x1f);
          }
          *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
               *(uint *)(uVar3 + 0x44 + uVar11 * 4) | 0x80000000U >> (bVar9 & 0x1f);
        }
        else {
          cVar2 = *(char *)(uVar3 + local_24 + 4);
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + '\x01';
          if (cVar2 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
          }
          *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
               *(uint *)(uVar3 + 0xc4 + uVar11 * 4) | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
        }
      }
      *piVar10 = iVar8;
      *(int *)((int)piVar10 + iVar8 + -4) = iVar8;
    }
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
  }
  else if ((int)uVar5 < local_2c) {
    *piVar6 = uVar5 + 1;
    *(uint *)((int)piVar6 + (uVar5 - 4)) = uVar5 + 1;
    piVar6 = (int *)((int)piVar6 + uVar5);
    local_2c = local_2c - uVar5;
    local_28 = (local_2c >> 4) - 1;
    if (0x3f < local_28) {
      local_28 = 0x3f;
    }
    if ((uVar4 & 1) == 0) {
      local_24 = ((int)uVar4 >> 4) - 1;
      if (0x3f < local_24) {
        local_24 = 0x3f;
      }
      if (puVar7[1] == puVar7[2]) {
        bVar9 = (byte)local_24;
        if (local_24 < 0x20) {
          *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
               *(uint *)(uVar3 + 0x44 + uVar11 * 4) & ~(0x80000000U >> (bVar9 & 0x1f));
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
          if (*(char *)(uVar3 + local_24 + 4) == '\0') {
            *param_1 = *param_1 & ~(0x80000000U >> (bVar9 & 0x1f));
          }
        }
        else {
          *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
               *(uint *)(uVar3 + 0xc4 + uVar11 * 4) & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
          *(char *)(uVar3 + local_24 + 4) = *(char *)(uVar3 + local_24 + 4) + -1;
          if (*(char *)(uVar3 + local_24 + 4) == '\0') {
            param_1[1] = param_1[1] & ~(0x80000000U >> (bVar9 - 0x20 & 0x1f));
          }
        }
      }
      *(uint *)(puVar7[2] + 4) = puVar7[1];
      *(uint *)(puVar7[1] + 8) = puVar7[2];
      local_2c = local_2c + uVar4;
      local_28 = (local_2c >> 4) - 1;
      if (0x3f < local_28) {
        local_28 = 0x3f;
      }
    }
    iVar1 = iVar1 + local_28 * 8;
    piVar6[1] = *(int *)(iVar1 + 4);
    piVar6[2] = iVar1;
    *(int **)(iVar1 + 4) = piVar6;
    *(int **)(piVar6[1] + 8) = piVar6;
    if (piVar6[1] == piVar6[2]) {
      bVar9 = (byte)local_28;
      if (local_28 < 0x20) {
        cVar2 = *(char *)(uVar3 + local_28 + 4);
        *(char *)(uVar3 + local_28 + 4) = *(char *)(uVar3 + local_28 + 4) + '\x01';
        if (cVar2 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar9 & 0x1f);
        }
        *(uint *)(uVar3 + 0x44 + uVar11 * 4) =
             *(uint *)(uVar3 + 0x44 + uVar11 * 4) | 0x80000000U >> (bVar9 & 0x1f);
      }
      else {
        cVar2 = *(char *)(uVar3 + local_28 + 4);
        *(char *)(uVar3 + local_28 + 4) = *(char *)(uVar3 + local_28 + 4) + '\x01';
        if (cVar2 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
        }
        *(uint *)(uVar3 + 0xc4 + uVar11 * 4) =
             *(uint *)(uVar3 + 0xc4 + uVar11 * 4) | 0x80000000U >> (bVar9 - 0x20 & 0x1f);
      }
    }
    *piVar6 = local_2c;
    *(int *)((int)piVar6 + local_2c + -4) = local_2c;
  }
  return 1;
}



// Function: FUN_1000f340 @ 0x1000f340

void FUN_1000f340(void)

{
  if (DAT_100394a0 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_100394a0[3] + DAT_10039498 * 0x8000),0x8000,0x4000);
    DAT_100394a0[2] = DAT_100394a0[2] | 0x80000000U >> ((byte)DAT_10039498 & 0x1f);
    *(undefined4 *)(DAT_100394a0[4] + 0xc4 + DAT_10039498 * 4) = 0;
    *(char *)(DAT_100394a0[4] + 0x43) = *(char *)(DAT_100394a0[4] + 0x43) + -1;
    if (*(char *)(DAT_100394a0[4] + 0x43) == '\0') {
      DAT_100394a0[1] = DAT_100394a0[1] & 0xfffffffe;
    }
    if ((DAT_100394a0[2] == -1) && (1 < DAT_100394a4)) {
      HeapFree(DAT_100394ac,0,(LPVOID)DAT_100394a0[4]);
      FUN_1000d590(DAT_100394a0,DAT_100394a0 + 5,
                   (DAT_100394a8 + DAT_100394a4 * 0x14) - (int)(DAT_100394a0 + 5));
      DAT_100394a4 = DAT_100394a4 + -1;
    }
    DAT_100394a0 = (undefined4 *)0x0;
  }
  return;
}



// Function: FUN_1000f470 @ 0x1000f470

undefined4 FUN_1000f470(void)

{
  LPVOID lp;
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  uint *puVar4;
  byte bVar5;
  uint *puVar6;
  int local_16c;
  uint local_15c;
  uint local_154;
  int local_150;
  uint local_14c;
  uint local_148;
  int local_144;
  uint *local_140;
  uint *local_138;
  uint *local_134;
  uint local_130;
  uint *local_12c;
  int local_124;
  uint local_120;
  int aiStack_11c [64];
  uint *local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  BVar2 = IsBadWritePtr(DAT_100394a8,DAT_100394a4 * 0x14);
  if (BVar2 == 0) {
    local_140 = DAT_100394a8;
    for (local_124 = 0; local_124 < DAT_100394a4; local_124 = local_124 + 1) {
      lp = (LPVOID)local_140[4];
      BVar2 = IsBadWritePtr(lp,0x41c4);
      if (BVar2 != 0) {
        return 0xfffffffe;
      }
      local_12c = (uint *)local_140[3];
      local_1c = (uint *)((int)lp + 0x144);
      local_8 = local_140[2];
      local_148 = 0;
      local_15c = 0;
      for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
        local_120 = 0;
        local_154 = 0;
        local_130 = 0;
        for (local_150 = 0; local_150 < 0x40; local_150 = local_150 + 1) {
          aiStack_11c[local_150] = 0;
        }
        if (-1 < (int)local_8) {
          BVar2 = IsBadWritePtr(local_12c,0x8000);
          if (BVar2 != 0) {
            return 0xfffffffc;
          }
          local_c = local_12c;
          for (local_144 = 0; local_144 < 8; local_144 = local_144 + 1) {
            local_134 = local_c + 3;
            puVar6 = local_c + 0x3ff;
            if ((local_c[2] != 0xffffffff) || (*puVar6 != 0xffffffff)) {
              return 0xfffffffb;
            }
            do {
              uVar1 = *local_134;
              if ((uVar1 & 1) == 0) {
                local_150 = ((int)uVar1 >> 4) + -1;
                if (0x3f < local_150) {
                  local_150 = 0x3f;
                }
                aiStack_11c[local_150] = aiStack_11c[local_150] + 1;
                local_14c = uVar1;
              }
              else {
                if (0x400 < (int)(uVar1 - 1)) {
                  return 0xfffffffa;
                }
                local_130 = local_130 + 1;
                local_14c = uVar1 - 1;
              }
              if ((((int)local_14c < 0x10) || ((local_14c & 0xf) != 0)) || (0xff0 < (int)local_14c))
              {
                return 0xfffffff9;
              }
              if (*(uint *)((int)local_134 + (local_14c - 4)) != uVar1) {
                return 0xfffffff8;
              }
              local_134 = (uint *)((int)local_134 + local_14c);
            } while (local_134 < puVar6);
            if (local_134 != puVar6) {
              return 0xfffffff8;
            }
            local_c = local_c + 0x400;
          }
          if (*local_1c != local_130) {
            return 0xfffffff7;
          }
          local_138 = local_1c;
          for (local_18 = 0; local_18 < 0x40; local_18 = local_18 + 1) {
            local_134 = local_138;
            for (local_16c = 0;
                (puVar6 = (uint *)local_134[1], puVar6 != local_138 &&
                (local_16c != aiStack_11c[local_18])); local_16c = local_16c + 1) {
              if ((puVar6 < local_12c) || (local_12c + 0x2000 <= puVar6)) {
                return 0xfffffff6;
              }
              puVar4 = (uint *)(((uint)puVar6 & 0xfffff000) + 0xffc);
              for (local_14 = (uint *)(((uint)puVar6 & 0xfffff000) + 0xc);
                  (local_14 != puVar4 && (local_14 != puVar6));
                  local_14 = (uint *)((int)local_14 + (*local_14 & 0xfffffffe))) {
              }
              if (local_14 == puVar4) {
                return 0xfffffff5;
              }
              local_150 = ((int)*puVar6 >> 4) + -1;
              if (0x3f < local_150) {
                local_150 = 0x3f;
              }
              if (local_150 != local_18) {
                return 0xfffffff4;
              }
              if ((uint *)puVar6[2] != local_134) {
                return 0xfffffff3;
              }
              local_134 = puVar6;
            }
            if (local_16c != 0) {
              bVar5 = (byte)local_18;
              if (local_18 < 0x20) {
                local_120 = local_120 | 0x80000000U >> (bVar5 & 0x1f);
                local_148 = local_148 | 0x80000000U >> (bVar5 & 0x1f);
              }
              else {
                local_154 = local_154 | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
                local_15c = local_15c | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
              }
            }
            if (((uint *)local_134[1] != local_138) || (local_16c != aiStack_11c[local_18])) {
              return 0xfffffff2;
            }
            if ((uint *)local_138[2] != local_134) {
              return 0xfffffff1;
            }
            local_138 = local_138 + 2;
          }
        }
        if ((local_120 != *(uint *)((int)lp + local_10 * 4 + 0x44)) ||
           (local_154 != *(uint *)((int)lp + local_10 * 4 + 0xc4))) {
          return 0xfffffff0;
        }
        local_12c = local_12c + 0x2000;
        local_1c = local_1c + 0x81;
        local_8 = local_8 << 1;
      }
      if ((local_148 != *local_140) || (local_15c != local_140[1])) {
        return 0xffffffef;
      }
      local_140 = local_140 + 5;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// Function: FUN_1000fa90 @ 0x1000fa90

int __cdecl FUN_1000fa90(undefined1 *param_1,byte *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_10006850(2,0x10033374,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_10006850(2,0x10033374,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  iVar2 = FUN_10010e30((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10010bb0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_1000fb90 @ 0x1000fb90

undefined4 __cdecl FUN_1000fb90(UINT param_1)

{
  UINT CodePage;
  undefined4 uVar1;
  BOOL BVar2;
  BYTE *local_2c;
  uint local_28;
  _cpinfo local_24;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  FUN_1000a900(0x19);
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_100391f8) {
    FUN_1000a9a0(0x19);
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_10010040();
    FUN_1000a9a0(0x19);
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(UINT *)(&DAT_10036040 + local_8 * 0x30) == CodePage) {
        for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
          (&DAT_10039380)[local_28] = 0;
        }
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          for (local_c = &DAT_10036050 + local_10 * 8 + local_8 * 0x30;
              (*local_c != 0 && (local_c[1] != 0)); local_c = local_c + 2) {
            for (local_28 = (uint)*local_c; local_28 <= local_c[1]; local_28 = local_28 + 1) {
              (&DAT_10039381)[local_28] = (&DAT_10039381)[local_28] | (&DAT_10036038)[local_10];
            }
          }
        }
        DAT_1003927c = 1;
        DAT_100391f8 = CodePage;
        DAT_10039484 = FUN_1000ff40(CodePage);
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          *(undefined2 *)(&DAT_10039270 + local_10 * 2) =
               *(undefined2 *)(&DAT_10036044 + local_10 * 2 + local_8 * 0x30);
        }
        FUN_10010040();
        FUN_1000a9a0(0x19);
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&local_24);
    if (BVar2 == 1) {
      for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
        (&DAT_10039380)[local_28] = 0;
      }
      DAT_10039484 = 0;
      if (local_24.MaxCharSize < 2) {
        DAT_1003927c = 0;
        DAT_100391f8 = CodePage;
      }
      else {
        DAT_100391f8 = CodePage;
        for (local_2c = local_24.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (local_28 = (uint)*local_2c; local_28 <= local_2c[1]; local_28 = local_28 + 1) {
            (&DAT_10039381)[local_28] = (&DAT_10039381)[local_28] | 4;
          }
        }
        for (local_28 = 1; local_28 < 0xff; local_28 = local_28 + 1) {
          (&DAT_10039381)[local_28] = (&DAT_10039381)[local_28] | 8;
        }
        DAT_10039484 = FUN_1000ff40(DAT_100391f8);
        DAT_1003927c = 1;
      }
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(undefined2 *)(&DAT_10039270 + local_10 * 2) = 0;
      }
      FUN_10010040();
      FUN_1000a9a0(0x19);
      uVar1 = 0;
    }
    else if (DAT_10037dbc == 0) {
      FUN_1000a9a0(0x19);
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_10010040();
      FUN_1000a9a0(0x19);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// Function: getSystemCP @ 0x1000fee0

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_10037dbc = 0;
  if (param_1 == 0xfffffffe) {
    DAT_10037dbc = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_10037dbc = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_10037dbc = 1;
    param_1 = DAT_10037dd8;
  }
  return param_1;
}



// Function: FUN_1000ff40 @ 0x1000ff40

undefined4 __cdecl FUN_1000ff40(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x3a4:
    uVar1 = 0x411;
    break;
  default:
    uVar1 = 0;
    break;
  case 0x3a8:
    uVar1 = 0x804;
    break;
  case 0x3b5:
    uVar1 = 0x412;
    break;
  case 0x3b6:
    uVar1 = 0x404;
  }
  return uVar1;
}



// Function: setSBCS @ 0x1000ffc0

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_10039380)[local_8] = 0;
  }
  DAT_100391f8 = 0;
  DAT_1003927c = 0;
  DAT_10039484 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_10039270 + local_8 * 2) = 0;
  }
  return;
}



// Function: FUN_10010040 @ 0x10010040

void FUN_10010040(void)

{
  BOOL BVar1;
  uint local_520;
  WCHAR local_51c [128];
  WCHAR local_41c [128];
  _cpinfo local_31c;
  CHAR local_308 [256];
  WORD local_208 [256];
  BYTE *local_8;
  
  BVar1 = GetCPInfo(DAT_100391f8,&local_31c);
  if (BVar1 == 1) {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      local_308[local_520] = (CHAR)local_520;
    }
    local_308[0] = ' ';
    for (local_8 = local_31c.LeadByte; *local_8 != 0; local_8 = local_8 + 2) {
      for (local_520 = (uint)*local_8; local_520 <= local_8[1]; local_520 = local_520 + 1) {
        local_308[local_520] = ' ';
      }
    }
    FUN_10011d90(1,local_308,0x100,local_208,DAT_100391f8,DAT_10039484,0);
    FUN_100129a0(DAT_10039484,0x100,local_308,0x100,local_41c,0x100,DAT_100391f8,0);
    FUN_100129a0(DAT_10039484,0x200,local_308,0x100,local_51c,0x100,DAT_100391f8,0);
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_208[local_520] & 1) == 0) {
        if ((local_208[local_520] & 2) == 0) {
          (&DAT_10039280)[local_520] = 0;
        }
        else {
          (&DAT_10039381)[local_520] = (&DAT_10039381)[local_520] | 0x20;
          (&DAT_10039280)[local_520] = *(undefined1 *)((int)local_51c + local_520);
        }
      }
      else {
        (&DAT_10039381)[local_520] = (&DAT_10039381)[local_520] | 0x10;
        (&DAT_10039280)[local_520] = *(undefined1 *)((int)local_41c + local_520);
      }
    }
  }
  else {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_520 < 0x41) || (0x5a < local_520)) {
        if ((local_520 < 0x61) || (0x7a < local_520)) {
          (&DAT_10039280)[local_520] = 0;
        }
        else {
          (&DAT_10039381)[local_520] = (&DAT_10039381)[local_520] | 0x20;
          (&DAT_10039280)[local_520] = (char)local_520 + -0x20;
        }
      }
      else {
        (&DAT_10039381)[local_520] = (&DAT_10039381)[local_520] | 0x10;
        (&DAT_10039280)[local_520] = (char)local_520 + ' ';
      }
    }
  }
  return;
}



// Function: FUN_10010350 @ 0x10010350

undefined4 FUN_10010350(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_100391f8;
  if (DAT_1003927c == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_10010370 @ 0x10010370

void FUN_10010370(void)

{
  if (DAT_10039630 == 0) {
    FUN_1000fb90(0xfffffffd);
    DAT_10039630 = 1;
  }
  return;
}



// Function: FUN_100103a0 @ 0x100103a0

undefined4 * __cdecl FUN_100103a0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10010557_caseD_2;
        case 3:
          goto switchD_10010557_caseD_3;
        }
        goto switchD_10010557_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10010557_caseD_0;
      case 1:
        goto switchD_10010557_caseD_1;
      case 2:
        goto switchD_10010557_caseD_2;
      case 3:
        goto switchD_10010557_caseD_3;
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
              goto switchD_10010557_caseD_2;
            case 3:
              goto switchD_10010557_caseD_3;
            }
            goto switchD_10010557_caseD_1;
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
              goto switchD_10010557_caseD_2;
            case 3:
              goto switchD_10010557_caseD_3;
            }
            goto switchD_10010557_caseD_1;
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
              goto switchD_10010557_caseD_2;
            case 3:
              goto switchD_10010557_caseD_3;
            }
            goto switchD_10010557_caseD_1;
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
switchD_10010557_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10010557_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10010557_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10010557_caseD_0:
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
        goto switchD_100103d5_caseD_2;
      case 3:
        goto switchD_100103d5_caseD_3;
      }
      goto switchD_100103d5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100103d5_caseD_0;
    case 1:
      goto switchD_100103d5_caseD_1;
    case 2:
      goto switchD_100103d5_caseD_2;
    case 3:
      goto switchD_100103d5_caseD_3;
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
            goto switchD_100103d5_caseD_2;
          case 3:
            goto switchD_100103d5_caseD_3;
          }
          goto switchD_100103d5_caseD_1;
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
            goto switchD_100103d5_caseD_2;
          case 3:
            goto switchD_100103d5_caseD_3;
          }
          goto switchD_100103d5_caseD_1;
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
            goto switchD_100103d5_caseD_2;
          case 3:
            goto switchD_100103d5_caseD_3;
          }
          goto switchD_100103d5_caseD_1;
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
switchD_100103d5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100103d5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100103d5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100103d5_caseD_0:
  return param_1;
}



// Function: FUN_100106e0 @ 0x100106e0

int __cdecl FUN_100106e0(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_c;
  uint local_8;
  
  while( true ) {
    if (DAT_10035de0 < 2) {
      local_14 = *(ushort *)(PTR_DAT_10035dec + (uint)*param_1 * 2) & 8;
    }
    else {
      local_14 = FUN_1000c7c0((uint)*param_1,8);
    }
    if (local_14 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  if ((uVar2 == 0x2d) || (pbVar1 = param_1 + 1, local_8 = uVar2, uVar2 == 0x2b)) {
    local_8 = (uint)param_1[1];
    pbVar1 = param_1 + 2;
  }
  param_1 = pbVar1;
  local_c = 0;
  while( true ) {
    if (DAT_10035de0 < 2) {
      local_18 = *(ushort *)(PTR_DAT_10035dec + local_8 * 2) & 4;
    }
    else {
      local_18 = FUN_1000c7c0(local_8,4);
    }
    if (local_18 == 0) break;
    local_c = local_c * 10 + -0x30 + local_8;
    local_8 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (uVar2 == 0x2d) {
    local_c = -local_c;
  }
  return local_c;
}



// Function: FUN_100107e0 @ 0x100107e0

void __cdecl FUN_100107e0(byte *param_1)

{
  FUN_100106e0(param_1);
  return;
}



// Function: FUN_10010800 @ 0x10010800

undefined8 __cdecl FUN_10010800(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  uint local_1c;
  uint local_18;
  undefined8 local_10;
  uint local_8;
  
  while( true ) {
    if (DAT_10035de0 < 2) {
      local_18 = *(ushort *)(PTR_DAT_10035dec + (uint)*param_1 * 2) & 8;
    }
    else {
      local_18 = FUN_1000c7c0((uint)*param_1,8);
    }
    if (local_18 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  if ((uVar2 == 0x2d) || (pbVar1 = param_1 + 1, local_8 = uVar2, uVar2 == 0x2b)) {
    local_8 = (uint)param_1[1];
    pbVar1 = param_1 + 2;
  }
  param_1 = pbVar1;
  local_10 = 0;
  while( true ) {
    if (DAT_10035de0 < 2) {
      local_1c = *(ushort *)(PTR_DAT_10035dec + local_8 * 2) & 4;
    }
    else {
      local_1c = FUN_1000c7c0(local_8,4);
    }
    if (local_1c == 0) break;
    local_10 = __allmul((uint)local_10,local_10._4_4_,10,0);
    local_10 = local_10 + (int)(local_8 - 0x30);
    local_8 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (uVar2 == 0x2d) {
    bVar3 = (uint)local_10 != 0;
    local_10._0_4_ = -(uint)local_10;
    local_10._4_4_ = -(local_10._4_4_ + (uint)bVar3);
  }
  return CONCAT44(local_10._4_4_,(uint)local_10);
}



// Function: _strcmp @ 0x10010930

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
      if (bVar4 != *_Str2) goto LAB_10010974;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10010940;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10010974;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10010974;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10010940:
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
LAB_10010974:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_100109c0 @ 0x100109c0

char * __cdecl FUN_100109c0(char *param_1)

{
  char *pcVar1;
  
  FUN_1000a900(0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_1000a9a0(0xc);
  return pcVar1;
}



// Function: FID_conflict:__getenv_lk @ 0x100109f0

/* Library Function - Multiple Matches With Different Base Names
    __getenv_lk
    _getenv
   
   Library: Visual Studio 2003 Debug */

char * __cdecl FID_conflict___getenv_lk(char *_VarName)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *local_c;
  
  local_c = DAT_10037b30;
  if (DAT_10039620 != 0) {
    if ((DAT_10037b30 == (int *)0x0) && (DAT_10037b38 != 0)) {
      iVar1 = FUN_10014130();
      if (iVar1 != 0) {
        return (char *)0x0;
      }
      local_c = DAT_10037b30;
    }
    DAT_10037b30 = local_c;
    if ((local_c != (int *)0x0) && (_VarName != (char *)0x0)) {
      _MaxCount = _strlen(_VarName);
      for (; *local_c != 0; local_c = local_c + 1) {
        sVar2 = _strlen((char *)*local_c);
        if (((_MaxCount < sVar2) && (*(char *)(*local_c + _MaxCount) == '=')) &&
           (iVar1 = __mbsnbicoll((uchar *)*local_c,(uchar *)_VarName,_MaxCount), iVar1 == 0)) {
          return (char *)(*local_c + 1 + _MaxCount);
        }
      }
    }
  }
  return (char *)0x0;
}



// Function: __aulldiv @ 0x10010ac0

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio 2003 Debug */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



// Function: __aullrem @ 0x10010b30

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio 2003 Debug */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}



// Function: FUN_10010bb0 @ 0x10010bb0

uint __cdecl FUN_10010bb0(uint param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *local_18;
  uint local_10;
  uint local_8;
  
  if ((param_2 == (int *)0x0) &&
     (iVar3 = FUN_10006850(2,0x10033418,0x69,0,(byte *)"str != NULL"), iVar3 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  piVar2 = param_2;
  uVar4 = param_2[4];
  if (((param_2[3] & 0x82U) == 0) || ((param_2[3] & 0x40U) != 0)) {
    param_2[3] = param_2[3] | 0x20;
    uVar4 = 0xffffffff;
  }
  else {
    if ((param_2[3] & 1U) != 0) {
      param_2[1] = 0;
      if ((param_2[3] & 0x10U) == 0) {
        param_2[3] = param_2[3] | 0x20;
        return 0xffffffff;
      }
      *param_2 = param_2[2];
      param_2[3] = param_2[3] & 0xfffffffe;
    }
    param_2[3] = param_2[3] | 2;
    param_2[3] = param_2[3] & 0xffffffef;
    param_2[1] = 0;
    local_10 = 0;
    if (((param_2[3] & 0x10cU) == 0) &&
       (((param_2 != (int *)&DAT_10036420 && (param_2 != (int *)&DAT_10036440)) ||
        (iVar3 = __isatty(uVar4), iVar3 == 0)))) {
      FUN_10014640(piVar2);
    }
    if ((piVar2[3] & 0x108U) == 0) {
      local_8 = 1;
      local_10 = FUN_10014330(uVar4,(char *)&param_1,1);
    }
    else {
      if ((*piVar2 - piVar2[2] < 0) &&
         (iVar3 = FUN_10006850(2,0x10033418,0xa0,0,
                               (byte *)
                               "(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      local_8 = *piVar2 - piVar2[2];
      *piVar2 = piVar2[2] + 1;
      piVar2[1] = piVar2[6] + -1;
      if ((int)local_8 < 1) {
        if (uVar4 == 0xffffffff) {
          local_18 = &DAT_10035a90;
        }
        else {
          local_18 = (undefined *)((&DAT_100394e0)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x24);
        }
        if ((local_18[4] & 0x20) != 0) {
          FUN_100141e0(uVar4,0,2);
        }
      }
      else {
        local_10 = FUN_10014330(uVar4,(char *)piVar2[2],local_8);
      }
      *(undefined1 *)piVar2[2] = (undefined1)param_1;
    }
    if (local_10 == local_8) {
      uVar4 = param_1 & 0xff;
    }
    else {
      piVar2[3] = piVar2[3] | 0x20;
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}



// Function: FUN_10010e30 @ 0x10010e30

int __cdecl FUN_10010e30(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  size_t sVar8;
  int iVar9;
  short *psVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_2a8;
  uint local_294;
  CHAR local_28c [4];
  size_t local_288;
  short *local_284;
  int local_280;
  undefined8 local_27c;
  int local_274;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  int *local_260;
  int local_25c;
  short *local_258;
  short *local_254;
  short *local_250;
  undefined2 local_24c;
  int local_248;
  char local_244;
  char local_243;
  int local_240;
  uint local_23c;
  int local_238;
  int local_234;
  int local_230;
  short local_22c [255];
  undefined2 uStack_2d;
  undefined3 uStack_2b;
  size_t local_28;
  short *local_24;
  int local_20;
  int local_1c;
  undefined2 local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_28 = 0;
  local_230 = 0;
  local_1c = 0;
  pbVar5 = param_2;
  do {
    param_2 = pbVar5;
    bVar1 = *param_2;
    stack0xffffffd4 = CONCAT31(uStack_2b,bVar1);
    pbVar5 = param_2 + 1;
    if ((bVar1 == 0) || (local_230 < 0)) {
      return local_230;
    }
    if (((char)bVar1 < ' ') || ('x' < (char)bVar1)) {
      local_294 = 0;
    }
    else {
      local_294 = (int)"(\"inconsistent IOB fields\", stream->_ptr - stream->_base >= 0)"
                       [(char)bVar1 + 0x38] & 0xf;
    }
    local_10 = local_294;
    local_1c = (int)(char)(&DAT_10033430)[local_294 * 8 + local_1c] >> 4;
    switch(local_1c) {
    case 0:
switchD_10010ee9_caseD_0:
      local_20 = 0;
      pbVar4 = pbVar5;
      if ((*(ushort *)(PTR_DAT_10035dec + (uint)bVar1 * 2) & 0x8000) != 0) {
        FUN_10011b60((int)(char)bVar1,param_1,&local_230);
        stack0xffffffd4 = CONCAT31(uStack_2b,*pbVar5);
        pbVar4 = param_2 + 2;
        if ((*pbVar5 == 0) &&
           (iVar9 = FUN_10006850(2,0x100334a4,0x186,0,(byte *)"ch != _T(\'\\0\')"), iVar9 == 1)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
      }
      param_2 = pbVar4;
      FUN_10011b60((int)uStack_2d._1_1_,param_1,&local_230);
      pbVar5 = param_2;
      break;
    case 1:
      local_c = 0;
      local_240 = 0;
      local_248 = 0;
      local_14 = 0;
      local_8 = 0;
      local_238 = -1;
      local_20 = 0;
      break;
    case 2:
      switch(bVar1) {
      case 0x20:
        local_8 = local_8 | 2;
        break;
      case 0x23:
        local_8 = local_8 | 0x80;
        break;
      case 0x2b:
        local_8 = local_8 | 1;
        break;
      case 0x2d:
        local_8 = local_8 | 4;
        break;
      case 0x30:
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar1 == 0x2a) {
        local_248 = FUN_10011c70((int *)&param_3);
        if (local_248 < 0) {
          local_8 = local_8 | 4;
          local_248 = -local_248;
        }
      }
      else {
        local_248 = local_248 * 10 + -0x30 + (int)(char)bVar1;
      }
      break;
    case 4:
      local_238 = 0;
      break;
    case 5:
      if (bVar1 == 0x2a) {
        local_238 = FUN_10011c70((int *)&param_3);
        if (local_238 < 0) {
          local_238 = -1;
        }
      }
      else {
        local_238 = local_238 * 10 + -0x30 + (int)(char)bVar1;
      }
      break;
    case 6:
      switch(bVar1) {
      case 0x49:
        if ((*pbVar5 != 0x36) || (param_2[2] != 0x34)) {
          local_1c = 0;
          goto switchD_10010ee9_caseD_0;
        }
        local_8 = local_8 | 0x8000;
        pbVar5 = param_2 + 3;
        break;
      case 0x68:
        local_8 = local_8 | 0x20;
        break;
      case 0x6c:
        local_8 = local_8 | 0x10;
        break;
      case 0x77:
        local_8 = local_8 | 0x800;
      }
      param_2 = pbVar5;
      pbVar5 = param_2;
      break;
    case 7:
      psVar10 = local_24;
      switch(bVar1) {
      case 0x43:
        if ((local_8 & 0x830) == 0) {
          local_8 = local_8 | 0x800;
        }
      case 99:
        if ((local_8 & 0x810) == 0) {
          uVar6 = FUN_10011c70((int *)&param_3);
          local_24c._0_1_ = (undefined1)uVar6;
          local_22c[0]._0_1_ = (undefined1)local_24c;
          local_28 = 1;
          local_24c = (short)uVar6;
        }
        else {
          local_18 = FUN_10011cb0((int *)&param_3);
          local_28 = FUN_10014980((LPSTR)local_22c,local_18);
          if ((int)local_28 < 0) {
            local_240 = 1;
          }
        }
        psVar10 = local_22c;
        break;
      case 0x45:
      case 0x47:
        local_c = 1;
        stack0xffffffd4 = CONCAT31(uStack_2b,bVar1 + 0x20);
      case 0x65:
      case 0x66:
      case 0x67:
        local_8 = local_8 | 0x40;
        local_24 = local_22c;
        if (local_238 < 0) {
          local_238 = 6;
        }
        else if ((local_238 == 0) && (uStack_2d._1_1_ == 'g')) {
          local_238 = 1;
        }
        local_268 = *param_3;
        local_264 = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR___fptrap_10035a74)(&local_268,local_24,(int)uStack_2d._1_1_,local_238,local_c)
        ;
        if (((local_8 & 0x80) != 0) && (local_238 == 0)) {
          (*(code *)PTR___fptrap_10035a80)(local_24);
        }
        if ((uStack_2d._1_1_ == 'g') && ((local_8 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_10035a78)(local_24);
        }
        if ((char)*local_24 == '-') {
          local_8 = local_8 | 0x100;
          local_24 = (short *)((int)local_24 + 1);
        }
        local_28 = _strlen((char *)local_24);
        psVar10 = local_24;
        break;
      case 0x53:
        if ((local_8 & 0x830) == 0) {
          local_8 = local_8 | 0x800;
        }
      case 0x73:
        if (local_238 == -1) {
          local_2a8 = 0x7fffffff;
        }
        else {
          local_2a8 = local_238;
        }
        local_25c = local_2a8;
        local_24 = (short *)FUN_10011c70((int *)&param_3);
        if ((local_8 & 0x810) == 0) {
          if (local_24 == (short *)0x0) {
            local_24 = (short *)PTR_DAT_10036130;
          }
          for (local_254 = local_24; (local_25c != 0 && ((char)*local_254 != '\0'));
              local_254 = (short *)((int)local_254 + 1)) {
            local_25c = local_25c + -1;
          }
          local_28 = (int)local_254 - (int)local_24;
          local_25c = local_25c + -1;
          psVar10 = local_24;
        }
        else {
          if (local_24 == (short *)0x0) {
            local_24 = (short *)PTR_DAT_10036134;
          }
          local_20 = 1;
          for (local_258 = local_24; (local_25c != 0 && (*local_258 != 0));
              local_258 = local_258 + 1) {
            local_25c = local_25c + -1;
          }
          local_28 = (int)local_258 - (int)local_24 >> 1;
          local_25c = local_25c + -1;
          psVar10 = local_24;
        }
        break;
      case 0x5a:
        local_250 = (short *)FUN_10011c70((int *)&param_3);
        if ((local_250 == (short *)0x0) || (*(int *)(local_250 + 2) == 0)) {
          local_24 = (short *)PTR_DAT_10036130;
          local_28 = _strlen(PTR_DAT_10036130);
          psVar10 = local_24;
        }
        else if ((local_8 & 0x800) == 0) {
          local_20 = 0;
          local_28 = (size_t)*local_250;
          psVar10 = *(short **)(local_250 + 2);
        }
        else {
          local_28 = (uint)(int)*local_250 >> 1;
          local_20 = 1;
          psVar10 = *(short **)(local_250 + 2);
        }
        break;
      case 100:
      case 0x69:
        local_8 = local_8 | 0x40;
        local_23c = 10;
        goto LAB_100115f5;
      case 0x6e:
        local_260 = (int *)FUN_10011c70((int *)&param_3);
        if ((local_8 & 0x20) == 0) {
          *local_260 = local_230;
        }
        else {
          *(undefined2 *)local_260 = (undefined2)local_230;
        }
        local_240 = 1;
        psVar10 = local_24;
        break;
      case 0x6f:
        local_23c = 8;
        if ((local_8 & 0x80) != 0) {
          local_8 = local_8 | 0x200;
        }
        goto LAB_100115f5;
      case 0x70:
        local_238 = 8;
      case 0x58:
        local_234 = 7;
        goto LAB_1001159f;
      case 0x75:
        local_23c = 10;
        goto LAB_100115f5;
      case 0x78:
        local_234 = 0x27;
LAB_1001159f:
        local_23c = 0x10;
        if ((local_8 & 0x80) != 0) {
          local_244 = '0';
          local_243 = (char)local_234 + 'Q';
          local_14 = 2;
        }
LAB_100115f5:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar7 = FUN_10011c70((int *)&param_3);
              local_27c = (ulonglong)uVar7;
            }
            else {
              iVar9 = FUN_10011c70((int *)&param_3);
              local_27c = (ulonglong)iVar9;
            }
          }
          else if ((local_8 & 0x40) == 0) {
            uVar7 = FUN_10011c70((int *)&param_3);
            local_27c = (ulonglong)(uVar7 & 0xffff);
          }
          else {
            uVar6 = FUN_10011c70((int *)&param_3);
            local_27c = (ulonglong)(int)(short)uVar6;
          }
        }
        else {
          local_27c = FUN_10011c90((int *)&param_3);
        }
        if ((((local_8 & 0x40) == 0) || (0 < local_27c._4_4_)) || (-1 < (longlong)local_27c)) {
          local_270 = local_27c;
        }
        else {
          local_270 = CONCAT44(-(local_27c._4_4_ + (uint)((int)local_27c != 0)),-(int)local_27c);
          local_8 = local_8 | 0x100;
        }
        if ((local_8 & 0x8000) == 0) {
          local_270 = local_270 & 0xffffffff;
        }
        if (local_238 < 0) {
          local_238 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((uint)local_270 == 0 && local_270._4_4_ == 0) {
          local_14 = 0;
        }
        local_24 = &uStack_2d;
        while( true ) {
          iVar9 = local_238 + -1;
          if ((local_238 < 1) && ((uint)local_270 == 0 && local_270._4_4_ == 0)) break;
          local_238 = iVar9;
          uVar12 = __aullrem((uint)local_270,local_270._4_4_,local_23c,(int)local_23c >> 0x1f);
          local_274 = (int)uVar12 + 0x30;
          local_270 = __aulldiv((uint)local_270,local_270._4_4_,local_23c,(int)local_23c >> 0x1f);
          if (0x39 < local_274) {
            local_274 = local_274 + local_234;
          }
          *(char *)local_24 = (char)local_274;
          local_24 = (short *)((int)local_24 + -1);
        }
        local_28 = (int)&uStack_2d - (int)local_24;
        psVar10 = (short *)((int)local_24 + 1);
        local_238 = iVar9;
        if (((local_8 & 0x200) != 0) && ((*(char *)psVar10 != '0' || (local_28 == 0)))) {
          *(char *)local_24 = '0';
          local_28 = local_28 + 1;
          psVar10 = local_24;
        }
      }
      local_24 = psVar10;
      if (local_240 == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) != 0) {
                local_244 = ' ';
                local_14 = 1;
              }
            }
            else {
              local_244 = '+';
              local_14 = 1;
            }
          }
          else {
            local_244 = '-';
            local_14 = 1;
          }
        }
        local_280 = (local_248 - local_28) - local_14;
        if ((local_8 & 0xc) == 0) {
          FUN_10011be0(0x20,local_280,param_1,&local_230);
        }
        FUN_10011c20(&local_244,local_14,param_1,&local_230);
        if (((local_8 & 8) != 0) && ((local_8 & 4) == 0)) {
          FUN_10011be0(0x30,local_280,param_1,&local_230);
        }
        if ((local_20 == 0) || ((int)local_28 < 1)) {
          FUN_10011c20((char *)local_24,local_28,param_1,&local_230);
        }
        else {
          local_284 = local_24;
          local_288 = local_28;
          while (sVar8 = local_288 - 1, bVar11 = local_288 != 0, local_288 = sVar8, bVar11) {
            sVar2 = *local_284;
            local_284 = local_284 + 1;
            iVar9 = FUN_10014980(local_28c,sVar2);
            if (iVar9 < 1) break;
            FUN_10011c20(local_28c,iVar9,param_1,&local_230);
          }
        }
        if ((local_8 & 4) != 0) {
          FUN_10011be0(0x20,local_280,param_1,&local_230);
        }
      }
    }
  } while( true );
}



// Function: FUN_10011b60 @ 0x10011b60

void __cdecl FUN_10011b60(uint param_1,int *param_2,int *param_3)

{
  uint local_8;
  
  param_2[1] = param_2[1] + -1;
  if (param_2[1] < 0) {
    local_8 = FUN_10010bb0(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    local_8 = param_1 & 0xff;
    *param_2 = *param_2 + 1;
  }
  if (local_8 == 0xffffffff) {
    *param_3 = -1;
  }
  else {
    *param_3 = *param_3 + 1;
  }
  return;
}



// Function: FUN_10011be0 @ 0x10011be0

void __cdecl FUN_10011be0(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    FUN_10011b60(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Function: FUN_10011c20 @ 0x10011c20

void __cdecl FUN_10011c20(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_10011b60((int)cVar1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Function: FUN_10011c70 @ 0x10011c70

undefined4 __cdecl FUN_10011c70(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



// Function: FUN_10011c90 @ 0x10011c90

undefined8 __cdecl FUN_10011c90(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



// Function: FUN_10011cb0 @ 0x10011cb0

undefined2 __cdecl FUN_10011cb0(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined2 *)(*param_1 + -4);
}



// Function: __dosmaperr @ 0x10011cd0

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  uint local_8;
  
  pDVar1 = FUN_10011d80();
  *pDVar1 = param_1;
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          puVar2 = (undefined4 *)FUN_10011d70();
          *puVar2 = 0x16;
        }
        else {
          puVar2 = (undefined4 *)FUN_10011d70();
          *puVar2 = 8;
        }
      }
      else {
        puVar2 = (undefined4 *)FUN_10011d70();
        *puVar2 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_10036138 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  puVar2 = (undefined4 *)FUN_10011d70();
  *puVar2 = *(undefined4 *)(&DAT_1003613c + local_8 * 8);
  return;
}



// Function: FUN_10011d70 @ 0x10011d70

int FUN_10011d70(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006480();
  return (int)(pDVar1 + 2);
}



// Function: FUN_10011d80 @ 0x10011d80

DWORD * FUN_10011d80(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006480();
  return pDVar1 + 3;
}



// Function: FUN_10011d90 @ 0x10011d90

BOOL __cdecl
FUN_10011d90(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_100334c8;
  puStack_10 = &LAB_10014b98;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc4;
  if (DAT_10037de0 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10037de0 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10037de0 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_10037de0 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_10037dc8;
    }
    BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  }
  else if (DAT_10037de0 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_10037dd8;
    }
    iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar3 == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_1000bba0();
      local_1c = &stack0xffffffc4;
      _memset(&stack0xffffffc4,0,iVar3 << 1);
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x3c) {
        BVar2 = 0;
      }
      else {
        iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc4,iVar3);
        if (iVar3 == 0) {
          BVar2 = 0;
        }
        else {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc4,iVar3,param_4);
        }
      }
    }
  }
  else {
    BVar2 = 0;
  }
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10011f50 @ 0x10011f50

uint * __cdecl FUN_10011f50(int param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  uint *local_b4;
  uint *local_b0;
  uint *local_ac;
  uint *local_a0;
  uint local_9c [33];
  int local_18;
  int local_14;
  int local_10;
  uint *local_c;
  int local_8;
  
  if ((param_1 < 0) || (5 < param_1)) {
    local_c = (uint *)0x0;
  }
  else {
    FUN_1000a900(0x13);
    local_8 = 1;
    DAT_100391e4 = DAT_100391e4 + 1;
    while (DAT_100391f4 != 0) {
      Sleep(1);
    }
    if (param_1 == 0) {
      local_18 = 1;
      local_10 = 0;
      if (param_2 == (uint *)0x0) {
        local_c = FUN_100124e0();
      }
      else if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
              (*(char *)((int)param_2 + 2) == '_')) {
        local_a0 = param_2;
        do {
          pbVar1 = FUN_100161b0((byte *)local_a0,&DAT_10033518);
          if (((pbVar1 == (byte *)0x0) || (sVar4 = (int)pbVar1 - (int)local_a0, sVar4 == 0)) ||
             (*pbVar1 == 0x3b)) {
            if (local_8 != 0) {
              FUN_1000a9a0(0x13);
              DAT_100391e4 = DAT_100391e4 + -1;
            }
            return (uint *)0x0;
          }
          local_14 = 1;
          while ((local_14 < 6 &&
                 ((iVar2 = _strncmp(*(char **)(local_14 * 0xc + 0x100363b0),(char *)local_a0,sVar4),
                  iVar2 != 0 ||
                  (sVar3 = _strlen(*(char **)(local_14 * 0xc + 0x100363b0)), sVar4 != sVar3))))) {
            local_14 = local_14 + 1;
          }
          pbVar1 = pbVar1 + 1;
          sVar4 = FUN_10016130(pbVar1,&DAT_10033514);
          if ((sVar4 == 0) && (*pbVar1 != 0x3b)) {
            if (local_8 != 0) {
              FUN_1000a9a0(0x13);
              DAT_100391e4 = DAT_100391e4 + -1;
            }
            return (uint *)0x0;
          }
          if (local_14 < 6) {
            _strncpy((char *)local_9c,(char *)pbVar1,sVar4);
            *(undefined1 *)((int)local_9c + sVar4) = 0;
            iVar2 = FUN_10012340(local_14,local_9c);
            if (iVar2 != 0) {
              local_10 = local_10 + 1;
            }
          }
          local_a0 = (uint *)(pbVar1 + sVar4);
          if ((byte)*local_a0 != 0) {
            local_a0 = (uint *)((int)local_a0 + 1);
          }
        } while ((byte)*local_a0 != 0);
        if (local_10 == 0) {
          local_b0 = (uint *)0x0;
        }
        else {
          local_b0 = FUN_100124e0();
        }
        local_c = local_b0;
      }
      else {
        local_c = FUN_100125e0(param_2,local_9c,(undefined4 *)0x0,(undefined4 *)0x0);
        if (local_c != (uint *)0x0) {
          for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
            if (local_14 != 0) {
              iVar2 = _strcmp((char *)local_9c,(&DAT_100363b4)[local_14 * 3]);
              if (iVar2 == 0) {
                local_10 = local_10 + 1;
              }
              else {
                iVar2 = FUN_10012340(local_14,local_9c);
                if (iVar2 == 0) {
                  local_18 = 0;
                }
                else {
                  local_10 = local_10 + 1;
                }
              }
            }
          }
          if (local_18 == 0) {
            if (local_10 == 0) {
              local_b4 = (uint *)0x0;
            }
            else {
              local_b4 = FUN_100124e0();
            }
            local_c = local_b4;
          }
          else {
            local_c = FUN_100124e0();
            FUN_10008770(DAT_100363b4,2);
            DAT_100363b4 = (void *)0x0;
          }
        }
      }
    }
    else {
      if (param_2 == (uint *)0x0) {
        local_ac = (&DAT_100363b4)[param_1 * 3];
      }
      else {
        local_ac = (uint *)FUN_10012340(param_1,param_2);
      }
      local_c = local_ac;
    }
    if (local_8 != 0) {
      FUN_1000a9a0(0x13);
      DAT_100391e4 = DAT_100391e4 + -1;
    }
  }
  return local_c;
}



// Function: FUN_10012340 @ 0x10012340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10012340(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  size_t sVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint local_ac [2];
  undefined4 local_a4;
  uint local_a0 [33];
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined *local_10;
  uint *local_c;
  undefined4 local_8;
  
  puVar1 = FUN_100125e0(param_2,local_a0,local_ac,&local_a4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0x132;
    pcVar5 = "setlocal.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)local_a0);
    local_c = (uint *)FUN_10007ce0((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar6);
    if (local_c == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      local_10 = (undefined *)(&DAT_100363b4)[param_1 * 3];
      local_8 = *(undefined4 *)(&DAT_10037dc0 + param_1 * 4);
      FUN_100103a0(local_18,(undefined4 *)(&DAT_10037e14 + param_1 * 6),6);
      local_1c = DAT_10037dd8;
      puVar1 = FUN_1000b9b0(local_c,local_a0);
      (&DAT_100363b4)[param_1 * 3] = puVar1;
      *(uint *)(&DAT_10037dc0 + param_1 * 4) = local_ac[0] & 0xffff;
      FUN_100103a0((undefined4 *)(&DAT_10037e14 + param_1 * 6),local_ac,6);
      if (param_1 == 2) {
        DAT_10037dd8 = local_a4;
      }
      if (param_1 == 1) {
        _DAT_10037ddc = local_a4;
      }
      iVar6 = (**(code **)(&DAT_100363b8 + param_1 * 0xc))();
      if (iVar6 == 0) {
        if (local_10 != &DAT_100362a0) {
          FUN_10008770(local_10,2);
        }
        uVar2 = (&DAT_100363b4)[param_1 * 3];
      }
      else {
        (&DAT_100363b4)[param_1 * 3] = local_10;
        FUN_10008770(local_c,2);
        *(undefined4 *)(&DAT_10037dc0 + param_1 * 4) = local_8;
        DAT_10037dd8 = local_1c;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



// Function: FUN_100124e0 @ 0x100124e0

uint * FUN_100124e0(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int local_8;
  
  bVar1 = true;
  if (DAT_100363b4 == (uint *)0x0) {
    DAT_100363b4 = (uint *)FUN_10007ce0((void *)0x351,2,0x1003351c,0x167);
  }
  *(undefined1 *)DAT_100363b4 = 0;
  for (local_8 = 1; __strcats(DAT_100363b4,3), local_8 < 5; local_8 = local_8 + 1) {
    FUN_1000b9c0(DAT_100363b4,(uint *)&DAT_10033514);
    iVar2 = _strcmp((char *)(&DAT_100363b4)[local_8 * 3],(char *)(&DAT_100363b4)[(local_8 + 1) * 3])
    ;
    if (iVar2 != 0) {
      bVar1 = false;
    }
  }
  puVar3 = DAT_100363b4;
  if (bVar1) {
    FUN_10008770(DAT_100363b4,2);
    DAT_100363b4 = (uint *)0x0;
    puVar3 = (uint *)PTR_DAT_100363cc;
  }
  return puVar3;
}



// Function: FUN_100125e0 @ 0x100125e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_100125e0(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
    param_2 = (uint *)0x0;
  }
  else if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
    *(undefined1 *)param_2 = 0x43;
    *(undefined1 *)((int)param_2 + 1) = 0;
    if (param_3 != (undefined4 *)0x0) {
      *(undefined2 *)param_3 = 0;
      *(undefined2 *)((int)param_3 + 2) = 0;
      *(undefined2 *)(param_3 + 1) = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    iVar1 = _strcmp(&DAT_10036328,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_100362a4,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_100127d0((char *)local_8c,(byte *)param_1);
      if (iVar1 != 0) {
        return (uint *)0x0;
      }
      iVar1 = FUN_100161f0((char *)local_8c,(undefined2 *)&DAT_10037de4,(int)local_8c);
      if (iVar1 == 0) {
        return (uint *)0x0;
      }
      _DAT_10037dec = (uint)DAT_10037de8;
      ___lc_lctostr((uint *)&DAT_10036328,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_1000b9b0((uint *)&DAT_100362a4,(uint *)&DAT_10036328);
      }
      else {
        FUN_1000b9b0((uint *)&DAT_100362a4,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_100103a0(param_3,(undefined4 *)&DAT_10037de4,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_100103a0(param_4,(undefined4 *)&DAT_10037dec,4);
    }
    FUN_1000b9b0(param_2,(uint *)&DAT_10036328);
    param_2 = (uint *)&DAT_10036328;
  }
  return param_2;
}



// Function: FUN_10012770 @ 0x10012770

undefined4 FUN_10012770(void)

{
  return 0;
}



// Function: __strcats @ 0x10012780

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Debug */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    FUN_1000b9c0(param_1,(uint *)*local_8);
    local_8 = local_8 + 1;
  }
  return;
}



// Function: FUN_100127d0 @ 0x100127d0

undefined4 __cdecl FUN_100127d0(char *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  size_t _Count;
  int local_8;
  
  _memset(param_1,0,0x88);
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else if ((*param_2 == 0x2e) && (param_2[1] != 0)) {
    FUN_1000b9b0((uint *)(param_1 + 0x80),(uint *)(param_2 + 1));
    uVar2 = 0;
  }
  else {
    local_8 = 0;
    while (_Count = FUN_10016130(param_2,&DAT_1003352c), _Count != 0) {
      bVar1 = param_2[_Count];
      if (((local_8 == 0) && ((int)_Count < 0x40)) && (bVar1 != 0x2e)) {
        _strncpy(param_1,(char *)param_2,_Count);
      }
      else if (((local_8 == 1) && ((int)_Count < 0x40)) && (bVar1 != 0x5f)) {
        _strncpy(param_1 + 0x40,(char *)param_2,_Count);
      }
      else {
        if ((local_8 != 2) || ((bVar1 != 0 && (bVar1 != 0x2c)))) {
          return 0xffffffff;
        }
        _strncpy(param_1 + 0x80,(char *)param_2,_Count);
      }
      if ((bVar1 == 0x2c) || (bVar1 == 0)) {
        return 0;
      }
      param_2 = param_2 + _Count + 1;
      local_8 = local_8 + 1;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// Function: ___lc_lctostr @ 0x10012930

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___lc_lctostr(uint *param_1,uint *param_2)

{
  FUN_1000b9b0(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    __strcats(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    __strcats(param_1,2);
  }
  return;
}



// Function: FUN_100129a0 @ 0x100129a0

int __cdecl
FUN_100129a0(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10033538;
  puStack_10 = &LAB_10014b98;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10037df0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10037df0 = 2;
    }
    else {
      DAT_10037df0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10012cb0(param_3,param_4);
  }
  if (DAT_10037df0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
  }
  else if (DAT_10037df0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10037dd8;
    }
    iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_1000bba0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x44) {
        iVar1 = 0;
      }
      else {
        iVar1 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffbc,iVar2);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,(LPWSTR)0x0,0);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_1000bba0();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x44) {
              iVar1 = 0;
            }
            else {
              iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,
                                   (LPWSTR)&stack0xffffffbc,iVar1);
              if (iVar2 == 0) {
                iVar1 = 0;
              }
              else if (param_6 == 0) {
                iVar1 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffbc,iVar1,(LPSTR)0x0
                                            ,0,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar1 == 0) {
                  iVar1 = 0;
                }
              }
              else {
                iVar1 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffbc,iVar1,
                                            (LPSTR)param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar1 == 0) {
                  iVar1 = 0;
                }
              }
            }
          }
          else if (param_6 != 0) {
            if (param_6 < iVar1) {
              iVar1 = 0;
            }
            else {
              iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffbc,iVar2,param_5,param_6);
              if (iVar2 == 0) {
                iVar1 = 0;
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}



// Function: FUN_10012cb0 @ 0x10012cb0

int __cdecl FUN_10012cb0(char *param_1,int param_2)

{
  int local_c;
  char *local_8;
  
  local_c = param_2;
  for (local_8 = param_1; (local_c != 0 && (*local_8 != '\0')); local_8 = local_8 + 1) {
    local_c = local_c + -1;
  }
  if (*local_8 == '\0') {
    param_2 = (int)local_8 - (int)param_1;
  }
  return param_2;
}



// Function: ___addl @ 0x10012d00

/* Library Function - Single Match
    ___addl
   
   Library: Visual Studio 2012 Debug */

undefined4 __cdecl ___addl(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 local_c;
  
  local_c = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    local_c = 1;
  }
  *param_3 = uVar1;
  return local_c;
}



// Function: ___add_12 @ 0x10012d40

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = ___addl(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = ___addl(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = ___addl(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  ___addl(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: ___shl_12 @ 0x10012df0

/* Library Function - Single Match
    ___shl_12
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

void __cdecl ___shl_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_1 << 1;
  param_1[1] = param_1[1] << 1 | (uint)((uVar1 & 0x80000000) != 0);
  param_1[2] = param_1[2] << 1 | (uint)((uVar2 & 0x80000000) != 0);
  return;
}



// Function: ___shr_12 @ 0x10012e50

/* Library Function - Single Match
    ___shr_12
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

void __cdecl ___shr_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  param_1[2] = param_1[2] >> 1;
  param_1[1] = param_1[1] >> 1 | -(uint)((uVar1 & 1) != 0) & 0x80000000;
  *param_1 = *param_1 >> 1 | -(uint)((uVar2 & 1) != 0) & 0x80000000;
  return;
}



// Function: FUN_10012ec0 @ 0x10012ec0

void __cdecl FUN_10012ec0(char *param_1,int param_2,uint *param_3)

{
  short local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_10 = *param_3;
    local_c = param_3[1];
    local_8 = param_3[2];
    ___shl_12(param_3);
    ___shl_12(param_3);
    ___add_12(param_3,&local_10);
    ___shl_12(param_3);
    local_10 = (uint)*param_1;
    local_c = 0;
    local_8 = 0;
    ___add_12(param_3,&local_10);
    param_1 = param_1 + 1;
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
    local_14 = local_14 + -0x10;
  }
  while ((param_3[2] & 0x8000) == 0) {
    ___shl_12(param_3);
    local_14 = local_14 + -1;
  }
  *(short *)((int)param_3 + 10) = local_14;
  return;
}



// Function: FUN_10013000 @ 0x10013000

uint __cdecl
FUN_10013000(undefined2 *param_1,undefined4 *param_2,byte *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint local_b4;
  uint local_b0;
  uint local_a4;
  uint local_9c;
  uint local_94;
  int local_80;
  int local_78;
  uint local_74;
  int local_70;
  char *local_6c;
  byte *local_68;
  undefined2 local_64;
  undefined4 local_62;
  undefined4 local_5e;
  ushort local_5a;
  int local_58;
  ushort local_54;
  int local_50;
  undefined2 local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  char local_3c [23];
  char local_25;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  byte *local_8;
  
  local_6c = local_3c;
  local_20 = local_20 & 0xffff0000;
  local_78 = 1;
  local_74 = 0;
  local_58 = 0;
  local_10 = 0;
  local_1c = 0;
  local_44 = 0;
  bVar2 = false;
  local_18 = 0;
  local_70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_68 = param_3;
  for (local_8 = param_3;
      (((*local_8 == 0x20 || (*local_8 == 9)) || (*local_8 == 10)) || (*local_8 == 0xd));
      local_8 = local_8 + 1) {
  }
  do {
    if (local_50 == 10) {
      *param_2 = local_8;
      if ((local_58 != 0) && (local_44 == 0)) {
        if (0x18 < local_74) {
          if ('\x04' < local_25) {
            local_25 = local_25 + '\x01';
          }
          local_74 = 0x18;
          local_6c = local_6c + -1;
          local_70 = local_70 + 1;
        }
        if (local_74 == 0) {
          local_4c = 0;
          local_54 = 0;
          local_14 = 0;
          local_c = 0;
        }
        else {
          while (local_6c = local_6c + -1, *local_6c == '\0') {
            local_74 = local_74 - 1;
            local_70 = local_70 + 1;
          }
          FUN_10012ec0(local_3c,local_74,(uint *)&local_64);
          if (local_78 < 0) {
            local_18 = -local_18;
          }
          local_18 = local_18 + local_70;
          if (local_1c == 0) {
            local_18 = local_18 + param_5;
          }
          if (local_10 == 0) {
            local_18 = local_18 - param_6;
          }
          if ((int)local_18 < 0x1451) {
            if ((int)local_18 < -0x1450) {
              bVar2 = true;
            }
            else {
              FUN_100173d0((int *)&local_64,local_18,param_4);
              local_4c = local_64;
              local_c = local_62;
              local_14 = local_5e;
              local_54 = local_5a;
            }
          }
          else {
            local_44 = 1;
          }
        }
      }
      if (local_58 == 0) {
        local_4c = 0;
        local_54 = 0;
        local_14 = 0;
        local_c = 0;
        local_48 = local_48 | 4;
      }
      else if (local_44 == 0) {
        if (bVar2) {
          local_4c = 0;
          local_54 = 0;
          local_14 = 0;
          local_c = 0;
          local_48 = local_48 | 1;
        }
      }
      else {
        local_54 = 0x7fff;
        local_14 = 0x80000000;
        local_c = 0;
        local_4c = 0;
        local_48 = local_48 | 2;
      }
      *param_1 = local_4c;
      *(undefined4 *)(param_1 + 1) = local_c;
      *(undefined4 *)(param_1 + 3) = local_14;
      param_1[5] = local_54 | (ushort)local_20;
      return local_48;
    }
    bVar1 = *local_8;
    local_40 = CONCAT31(local_40._1_3_,bVar1);
    pbVar3 = local_8 + 1;
    switch(local_50) {
    case 0:
      if (((char)bVar1 < '1') || ('9' < (char)bVar1)) {
        if (bVar1 == DAT_10035de4) {
          local_50 = 5;
        }
        else if (bVar1 == 0x2b) {
          local_50 = 2;
          local_20 = (uint)local_20._2_2_ << 0x10;
        }
        else if (bVar1 == 0x2d) {
          local_50 = 2;
          local_20 = CONCAT22(local_20._2_2_,0x8000);
        }
        else if (bVar1 == 0x30) {
          local_50 = 1;
        }
        else {
          local_50 = 10;
          pbVar3 = local_8;
        }
      }
      else {
        local_50 = 3;
        pbVar3 = local_8;
      }
      break;
    case 1:
      local_58 = 1;
      if (((char)bVar1 < '1') || ('9' < (char)bVar1)) {
        if (bVar1 == DAT_10035de4) {
          local_50 = 4;
        }
        else {
          switch(bVar1) {
          case 0x2b:
          case 0x2d:
            local_50 = 0xb;
            pbVar3 = local_8;
            break;
          default:
            local_50 = 10;
            pbVar3 = local_8;
            break;
          case 0x30:
            local_50 = 1;
            break;
          case 0x44:
          case 0x45:
          case 100:
          case 0x65:
            local_50 = 6;
          }
        }
      }
      else {
        local_50 = 3;
        pbVar3 = local_8;
      }
      break;
    case 2:
      if (((char)bVar1 < '1') || ('9' < (char)bVar1)) {
        if (bVar1 == DAT_10035de4) {
          local_50 = 5;
        }
        else if (bVar1 == 0x30) {
          local_50 = 1;
        }
        else {
          local_50 = 10;
          local_8 = local_68;
          pbVar3 = local_8;
        }
      }
      else {
        local_50 = 3;
        pbVar3 = local_8;
      }
      break;
    case 3:
      local_58 = 1;
      local_8 = pbVar3;
      while( true ) {
        if (DAT_10035de0 < 2) {
          local_94 = *(ushort *)(PTR_DAT_10035dec + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_94 = FUN_1000c7c0(local_40 & 0xff,4);
        }
        if (local_94 == 0) break;
        if (local_74 < 0x19) {
          local_74 = local_74 + 1;
          *local_6c = (byte)local_40 - 0x30;
          local_6c = local_6c + 1;
        }
        else {
          local_70 = local_70 + 1;
        }
        local_40 = CONCAT31(local_40._1_3_,*local_8);
        local_8 = local_8 + 1;
      }
      pbVar3 = local_8;
      if ((byte)local_40 == DAT_10035de4) {
        local_50 = 4;
      }
      else {
        switch((byte)local_40) {
        case 0x2b:
        case 0x2d:
          local_50 = 0xb;
          pbVar3 = local_8 + -1;
          break;
        default:
          local_50 = 10;
          pbVar3 = local_8 + -1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          local_50 = 6;
        }
      }
      break;
    case 4:
      local_58 = 1;
      local_10 = 1;
      local_8 = pbVar3;
      if (local_74 == 0) {
        while ((byte)local_40 == '0') {
          local_70 = local_70 + -1;
          local_40 = CONCAT31(local_40._1_3_,*local_8);
          local_8 = local_8 + 1;
        }
      }
      while( true ) {
        if (DAT_10035de0 < 2) {
          local_9c = *(ushort *)(PTR_DAT_10035dec + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_9c = FUN_1000c7c0(local_40 & 0xff,4);
        }
        if (local_9c == 0) break;
        if (local_74 < 0x19) {
          local_74 = local_74 + 1;
          *local_6c = (byte)local_40 + -0x30;
          local_6c = local_6c + 1;
          local_70 = local_70 + -1;
        }
        local_40 = CONCAT31(local_40._1_3_,*local_8);
        local_8 = local_8 + 1;
      }
      switch((byte)local_40) {
      case 0x2b:
      case 0x2d:
        local_50 = 0xb;
        pbVar3 = local_8 + -1;
        break;
      default:
        local_50 = 10;
        pbVar3 = local_8 + -1;
        break;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
        local_50 = 6;
        pbVar3 = local_8;
      }
      break;
    case 5:
      local_10 = 1;
      if (DAT_10035de0 < 2) {
        local_a4 = *(ushort *)(PTR_DAT_10035dec + (uint)bVar1 * 2) & 4;
        local_8 = pbVar3;
      }
      else {
        local_8 = pbVar3;
        local_a4 = FUN_1000c7c0((uint)bVar1,4);
      }
      if (local_a4 == 0) {
        local_50 = 10;
        local_8 = local_68;
        pbVar3 = local_8;
      }
      else {
        local_50 = 4;
        pbVar3 = local_8 + -1;
      }
      break;
    case 6:
      local_68 = local_8 + -1;
      if (((char)bVar1 < '1') || ('9' < (char)bVar1)) {
        if (bVar1 == 0x2b) {
          local_50 = 7;
        }
        else if (bVar1 == 0x2d) {
          local_50 = 7;
          local_78 = -1;
        }
        else if (bVar1 == 0x30) {
          local_50 = 8;
        }
        else {
          local_50 = 10;
          pbVar3 = local_68;
        }
      }
      else {
        local_50 = 9;
        pbVar3 = local_8;
      }
      break;
    case 7:
      if (((char)bVar1 < '1') || ('9' < (char)bVar1)) {
        if (bVar1 == 0x30) {
          local_50 = 8;
        }
        else {
          local_50 = 10;
          local_8 = local_68;
          pbVar3 = local_8;
        }
      }
      else {
        local_50 = 9;
        pbVar3 = local_8;
      }
      break;
    case 8:
      local_1c = 1;
      local_8 = pbVar3;
      while ((byte)local_40 == '0') {
        bVar1 = *local_8;
        local_8 = local_8 + 1;
        local_40 = CONCAT31(local_40._1_3_,bVar1);
      }
      if (((char)(byte)local_40 < '1') || ('9' < (char)(byte)local_40)) {
        local_50 = 10;
      }
      else {
        local_50 = 9;
      }
      local_8 = local_8 + -1;
      pbVar3 = local_8;
      break;
    case 9:
      local_1c = 1;
      local_80 = 0;
      local_8 = pbVar3;
      while( true ) {
        if (DAT_10035de0 < 2) {
          local_b0 = *(ushort *)(PTR_DAT_10035dec + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_b0 = FUN_1000c7c0(local_40 & 0xff,4);
        }
        if (local_b0 == 0) goto LAB_10013727;
        local_80 = local_80 * 10 + -0x30 + (int)(char)(byte)local_40;
        if (0x1450 < local_80) break;
        local_40 = CONCAT31(local_40._1_3_,*local_8);
        local_8 = local_8 + 1;
      }
      local_80 = 0x1451;
LAB_10013727:
      local_18 = local_80;
      while( true ) {
        if (DAT_10035de0 < 2) {
          local_b4 = *(ushort *)(PTR_DAT_10035dec + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_b4 = FUN_1000c7c0(local_40 & 0xff,4);
        }
        if (local_b4 == 0) break;
        local_40 = CONCAT31(local_40._1_3_,*local_8);
        local_8 = local_8 + 1;
      }
      local_50 = 10;
      pbVar3 = local_8 + -1;
      break;
    case 0xb:
      if (param_7 == 0) {
        local_50 = 10;
        pbVar3 = local_8;
      }
      else {
        local_68 = local_8;
        if (bVar1 == 0x2b) {
          local_50 = 7;
        }
        else if (bVar1 == 0x2d) {
          local_50 = 7;
          local_78 = -1;
        }
        else {
          local_50 = 10;
          pbVar3 = local_8;
        }
      }
    }
    local_8 = pbVar3;
  } while( true );
}



// Function: FUN_10013b30 @ 0x10013b30

uint __cdecl FUN_10013b30(undefined4 *param_1,undefined4 *param_2,byte *param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_18;
  ushort local_10 [6];
  
  local_18 = FUN_10013000(local_10,param_2,param_3,param_4,0,0,0);
  bVar1 = FUN_1000d0c0(local_10,param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    local_18 = local_18 | 2;
  }
  return local_18;
}



// Function: FUN_10013b80 @ 0x10013b80

undefined4 __cdecl
FUN_10013b80(int param_1,uint param_2,ushort param_3,int param_4,uint param_5,short *param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  char *pcVar4;
  uint local_78;
  short local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  int local_4c;
  int local_48;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 local_3c;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  undefined1 local_32;
  char cStack_31;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  char cStack_2d;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  ushort local_10;
  int local_c;
  short *local_8;
  
  _local_40 = CONCAT22(uStack_3e,0x4d);
  local_24 = 0x134312f4;
  local_58 = 0xcc;
  local_57 = 0xcc;
  local_56 = 0xcc;
  local_55 = 0xcc;
  local_54 = 0xcc;
  local_53 = 0xcc;
  local_52 = 0xcc;
  local_51 = 0xcc;
  local_50 = 0xcc;
  local_4f = 0xcc;
  local_4e = 0xfb;
  local_4d = 0x3f;
  local_5c = 1;
  local_28 = param_2;
  local_4c = param_1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((param_3 & 0x7fff) == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(undefined1 *)(param_6 + 1) = 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    local_5c = 1;
  }
  else if ((param_3 & 0x7fff) == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) || (param_1 != 0)) {
        if ((param_2 == 0x80000000) && (param_1 == 0)) {
          FUN_1000b9b0((uint *)(param_6 + 2),(uint *)"1#INF");
          *(undefined1 *)((int)param_6 + 3) = 5;
        }
        else {
          FUN_1000b9b0((uint *)(param_6 + 2),(uint *)"1#QNAN");
          *(undefined1 *)((int)param_6 + 3) = 6;
        }
      }
      else {
        FUN_1000b9b0((uint *)(param_6 + 2),(uint *)"1#IND");
        *(undefined1 *)((int)param_6 + 3) = 5;
      }
    }
    else {
      FUN_1000b9b0((uint *)(param_6 + 2),(uint *)"1#SNAN");
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    local_5c = 0;
  }
  else {
    local_10 = param_3 & 0xff;
    uVar3 = (ushort)(byte)(param_2 >> 0x18);
    _local_44 = CONCAT22(uStack_42,uVar3);
    local_c = (param_3 & 0x7fff) * 0x4d10 + (uint)(param_3 >> 8 & 0x7f) * 0x4d + (uint)uVar3 * 0x9a
              + -0x134312f4;
    local_60 = (short)((uint)local_c >> 0x10);
    local_32 = (undefined1)(param_3 & 0x7fff);
    cStack_31 = (char)((param_3 & 0x7fff) >> 8);
    local_3c = 0;
    uStack_36 = param_2;
    uStack_3a = param_1;
    FUN_100173d0((int *)&local_3c,-(int)local_60,1);
    if (0x3ffe < CONCAT11(cStack_31,local_32)) {
      local_60 = local_60 + 1;
      FUN_10016f90((int *)&local_3c,(int *)&local_58);
    }
    *param_6 = local_60;
    if (((param_5 & 1) == 0) || (param_4 = param_4 + local_60, 0 < param_4)) {
      if (0x15 < param_4) {
        param_4 = 0x15;
      }
      iVar2 = CONCAT11(cStack_31,local_32) - 0x3ffe;
      uStack_30 = (undefined2)iVar2;
      uStack_2e = (undefined1)((uint)iVar2 >> 0x10);
      cStack_2d = (char)((uint)iVar2 >> 0x18);
      local_32 = 0;
      cStack_31 = '\0';
      for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
        ___shl_12((uint *)&local_3c);
      }
      if (cStack_2d < '\0') {
        for (local_78 = -CONCAT13(cStack_2d,CONCAT12(uStack_2e,uStack_30)) & 0xff; 0 < (int)local_78
            ; local_78 = local_78 - 1) {
          ___shr_12((uint *)&local_3c);
        }
      }
      local_8 = param_6 + 2;
      local_14 = param_4 + 1;
      iVar2 = uStack_3a;
      uVar1 = uStack_36;
      while( true ) {
        uStack_36._2_2_ = (undefined2)(uVar1 >> 0x10);
        uStack_36._0_2_ = (undefined2)uVar1;
        uStack_3a._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
        uStack_3a._0_2_ = (undefined2)iVar2;
        if (local_14 < 1) break;
        local_20 = CONCAT22((undefined2)uStack_3a,local_3c);
        local_1c = CONCAT22((undefined2)uStack_36,uStack_3a._2_2_);
        local_18 = CONCAT13(cStack_31,CONCAT12(local_32,uStack_36._2_2_));
        uStack_3a = iVar2;
        uStack_36 = uVar1;
        ___shl_12((uint *)&local_3c);
        ___shl_12((uint *)&local_3c);
        ___add_12((uint *)&local_3c,&local_20);
        ___shl_12((uint *)&local_3c);
        *(char *)local_8 = cStack_31 + '0';
        local_8 = (short *)((int)local_8 + 1);
        cStack_31 = '\0';
        local_14 = local_14 + -1;
        iVar2 = uStack_3a;
        uVar1 = uStack_36;
      }
      pcVar4 = (char *)((int)local_8 + -1);
      local_8 = local_8 + -1;
      if (*pcVar4 < '5') {
        for (; (param_6 + 2 <= local_8 && ((char)*local_8 == '0'));
            local_8 = (short *)((int)local_8 + -1)) {
        }
        if (local_8 < param_6 + 2) {
          *param_6 = 0;
          *(undefined1 *)(param_6 + 1) = 0x20;
          *(undefined1 *)((int)param_6 + 3) = 1;
          *(undefined1 *)(param_6 + 2) = 0x30;
          *(undefined1 *)((int)param_6 + 5) = 0;
          return 1;
        }
      }
      else {
        for (; (param_6 + 2 <= local_8 && ((char)*local_8 == '9'));
            local_8 = (short *)((int)local_8 + -1)) {
          *(char *)local_8 = '0';
        }
        if (local_8 < param_6 + 2) {
          local_8 = (short *)((int)local_8 + 1);
          *param_6 = *param_6 + 1;
        }
        *(char *)local_8 = (char)*local_8 + '\x01';
      }
      *(char *)((int)param_6 + 3) = ((char)local_8 - ((char)param_6 + '\x04')) + '\x01';
      *(undefined1 *)((int)param_6 + *(char *)((int)param_6 + 3) + 4) = 0;
    }
    else {
      *param_6 = 0;
      *(undefined1 *)(param_6 + 1) = 0x20;
      *(undefined1 *)((int)param_6 + 3) = 1;
      *(undefined1 *)(param_6 + 2) = 0x30;
      *(undefined1 *)((int)param_6 + 5) = 0;
      local_5c = 1;
    }
  }
  return local_5c;
}



// Function: __allmul @ 0x100140a0

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



// Function: __mbsnbicoll @ 0x100140e0

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Debug */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_100174a0(DAT_10039484,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_100391f8);
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}



// Function: FUN_10014130 @ 0x10014130

undefined4 FUN_10014130(void)

{
  void *cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  int *local_8;
  
  local_8 = DAT_10037b38;
  while( true ) {
    if (*local_8 == 0) {
      return 0;
    }
    cbMultiByte = (void *)WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                              (LPBOOL)0x0);
    if (cbMultiByte == (void *)0x0) {
      return 0xffffffff;
    }
    lpMultiByteStr = (uint *)FUN_10007ce0(cbMultiByte,2,0x10033570,0x3d);
    if (lpMultiByteStr == (uint *)0x0) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)lpMultiByteStr,(int)cbMultiByte,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    FUN_100178f0(lpMultiByteStr,0);
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_100141e0 @ 0x100141e0

DWORD __cdecl FUN_100141e0(uint param_1,LONG param_2,DWORD param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  
  if ((param_1 < DAT_1003961c) &&
     ((*(byte *)((&DAT_100394e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10018250(param_1);
    DVar3 = FUN_10014270(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10011d70();
    *puVar1 = 9;
    pDVar2 = FUN_10011d80();
    *pDVar2 = 0;
    DVar3 = 0xffffffff;
  }
  return DVar3;
}



// Function: FUN_10014270 @ 0x10014270

DWORD __cdecl FUN_10014270(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  undefined4 *puVar1;
  DWORD DVar2;
  ulong local_8;
  
  hFile = (HANDLE)FUN_100180d0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar1 = (undefined4 *)FUN_10011d70();
    *puVar1 = 9;
    DVar2 = 0xffffffff;
  }
  else {
    DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar2 == 0xffffffff) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) {
      *(byte *)((&DAT_100394e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
           *(byte *)((&DAT_100394e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
    }
    else {
      __dosmaperr(local_8);
      DVar2 = 0xffffffff;
    }
  }
  return DVar2;
}



// Function: FUN_10014330 @ 0x10014330

int __cdecl FUN_10014330(uint param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if ((param_1 < DAT_1003961c) &&
     ((*(byte *)((&DAT_100394e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10018250(param_1);
    iVar3 = FUN_100143c0(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10011d70();
    *puVar1 = 9;
    pDVar2 = FUN_10011d80();
    *pDVar2 = 0;
    iVar3 = -1;
  }
  return iVar3;
}



// Function: FUN_100143c0 @ 0x100143c0

int __cdecl FUN_100143c0(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  DWORD *pDVar4;
  int iVar5;
  int local_424;
  DWORD local_41c;
  char local_418 [1028];
  DWORD local_14;
  ulong local_10;
  char *local_c;
  char *local_8;
  
  local_14 = 0;
  local_424 = 0;
  if (param_3 == 0) {
    local_424 = 0;
  }
  else {
    iVar5 = (int)param_1 >> 5;
    if ((*(byte *)((&DAT_100394e0)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x20) != 0) {
      FUN_10014270(param_1,0,2);
    }
    if (((int)*(char *)((&DAT_100394e0)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) == 0) {
      BVar2 = WriteFile(*(HANDLE *)((&DAT_100394e0)[iVar5] + (param_1 & 0x1f) * 0x24),param_2,
                        param_3,&local_41c,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        local_10 = GetLastError();
      }
      else {
        local_10 = 0;
        local_14 = local_41c;
      }
    }
    else {
      local_8 = param_2;
      local_10 = 0;
      do {
        if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
        local_c = local_418;
        while (((int)local_c - (int)local_418 < 0x400 &&
               ((uint)((int)local_8 - (int)param_2) < param_3))) {
          cVar1 = *local_8;
          local_8 = local_8 + 1;
          if (cVar1 == '\n') {
            local_424 = local_424 + 1;
            *local_c = '\r';
            local_c = local_c + 1;
          }
          *local_c = cVar1;
          local_c = local_c + 1;
        }
        BVar2 = WriteFile(*(HANDLE *)((&DAT_100394e0)[iVar5] + (param_1 & 0x1f) * 0x24),local_418,
                          (int)local_c - (int)local_418,&local_41c,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          local_10 = GetLastError();
          break;
        }
        local_14 = local_14 + local_41c;
      } while ((int)local_c - (int)local_418 <= (int)local_41c);
    }
    if (local_14 == 0) {
      if (local_10 == 0) {
        if (((*(byte *)((&DAT_100394e0)[iVar5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) ||
           (*param_2 != '\x1a')) {
          puVar3 = (undefined4 *)FUN_10011d70();
          *puVar3 = 0x1c;
          pDVar4 = FUN_10011d80();
          *pDVar4 = 0;
          local_424 = -1;
        }
        else {
          local_424 = 0;
        }
      }
      else {
        if (local_10 == 5) {
          puVar3 = (undefined4 *)FUN_10011d70();
          *puVar3 = 9;
          pDVar4 = FUN_10011d80();
          *pDVar4 = local_10;
        }
        else {
          __dosmaperr(local_10);
        }
        local_424 = -1;
      }
    }
    else {
      local_424 = local_14 - local_424;
    }
  }
  return local_424;
}



// Function: FUN_10014640 @ 0x10014640

void __cdecl FUN_10014640(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_10006850(2,0x1003357c,0x2e,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DAT_10037df4 = DAT_10037df4 + 1;
  uVar3 = FUN_10007ce0((void *)0x1000,2,0x1003357c,0x3b);
  param_1[2] = uVar3;
  if (param_1[2] == 0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return;
}



// Function: __isatty @ 0x10014710

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_1003961c) {
    uVar1 = (int)*(char *)((&DAT_100394e0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) &
            0x40;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_10014750 @ 0x10014750

void FUN_10014750(void)

{
  uint local_8;
  
  if (DAT_100391e0 == 0) {
    DAT_100391e0 = 0x200;
  }
  else if (DAT_100391e0 < 0x14) {
    DAT_100391e0 = 0x14;
  }
  DAT_10037e8c = __calloc_dbg(DAT_100391e0,4,2,"_file.c",0x83);
  if (DAT_10037e8c == (undefined1 *)0x0) {
    DAT_100391e0 = 0x14;
    DAT_10037e8c = __calloc_dbg(0x14,4,2,"_file.c",0x86);
    if (DAT_10037e8c == (undefined1 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined ***)(DAT_10037e8c + local_8 * 4) = &PTR_DAT_10036400 + local_8 * 8;
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_100394e0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == -1) ||
       (*(int *)((&DAT_100394e0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == 0)) {
      *(undefined4 *)(&DAT_10036410 + local_8 * 0x20) = 0xffffffff;
    }
  }
  return;
}



// Function: FUN_10014880 @ 0x10014880

void FUN_10014880(void)

{
  FUN_10018550();
  if (DAT_10037b48 != '\0') {
    FUN_10018310();
  }
  return;
}



// Function: FUN_100148a0 @ 0x100148a0

void __cdecl FUN_100148a0(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_10036400) || (&DAT_10036660 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_1000a900(((int)(param_1 + -0x400d900) >> 5) + 0x1c);
  }
  return;
}



// Function: FUN_100148e0 @ 0x100148e0

void __cdecl FUN_100148e0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000a900(param_1 + 0x1c);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}



// Function: FUN_10014910 @ 0x10014910

void __cdecl FUN_10014910(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_10036400) || (&DAT_10036660 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_1000a9a0(((int)(param_1 + -0x400d900) >> 5) + 0x1c);
  }
  return;
}



// Function: FUN_10014950 @ 0x10014950

void __cdecl FUN_10014950(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000a9a0(param_1 + 0x1c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}



// Function: FUN_10014980 @ 0x10014980

int __cdecl FUN_10014980(LPSTR param_1,undefined2 param_2)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar3;
  int iVar2;
  bool bVar4;
  
  LVar1 = InterlockedIncrement(&DAT_100391f4);
  bVar4 = DAT_100391e4 == 0;
  uVar3 = (short)((uint)LVar1 >> 0x10);
  if (!bVar4) {
    InterlockedDecrement(&DAT_100391f4);
    FUN_1000a900(0x13);
    uVar3 = extraout_var;
  }
  iVar2 = FUN_10014a00(param_1,CONCAT22(uVar3,param_2));
  if (bVar4) {
    InterlockedDecrement(&DAT_100391f4);
  }
  else {
    FUN_1000a9a0(0x13);
  }
  return iVar2;
}



// Function: FUN_10014a00 @ 0x10014a00

int __cdecl FUN_10014a00(LPSTR param_1,uint param_2)

{
  undefined4 *puVar1;
  BOOL local_c;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else if (DAT_10037dc8 == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      local_8 = 1;
    }
    else {
      puVar1 = (undefined4 *)FUN_10011d70();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  else {
    local_c = 0;
    local_8 = WideCharToMultiByte(DAT_10037dd8,0x220,(LPCWSTR)&param_2,1,param_1,DAT_10035de0,
                                  (LPCSTR)0x0,&local_c);
    if ((local_8 == 0) || (local_c != 0)) {
      puVar1 = (undefined4 *)FUN_10011d70();
      *puVar1 = 0x2a;
      local_8 = -1;
    }
  }
  return local_8;
}



// Function: __global_unwind2 @ 0x10014aa0

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10014ab8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10014ae2

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
  puStack_18 = &LAB_10014ac0;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10014b76();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_10014b76 @ 0x10014b76

void FUN_10014b76(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10036688 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10036684 = in_EAX;
  DAT_1003668c = unaff_EBP;
  return;
}



// Function: FUN_10014c55 @ 0x10014c55

void FUN_10014c55(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: ___init_time @ 0x10014c70

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_10037dd4 == 0) {
    PTR_PTR_10036e08 = (undefined *)&PTR_DAT_10036e10;
    ___free_lc_time(DAT_10037df8);
    FUN_10008770(DAT_10037df8,2);
    DAT_10037df8 = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = (int *)__calloc_dbg(1,0xac,2,"inittime.c",0x48);
    if (piVar1 == (int *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = FUN_10014d50(piVar1);
      if (uVar3 == 0) {
        PTR_PTR_10036e08 = (undefined *)piVar1;
        ___free_lc_time(DAT_10037df8);
        FUN_10008770(DAT_10037df8,2);
        iVar2 = 0;
        DAT_10037df8 = piVar1;
      }
      else {
        ___free_lc_time(piVar1);
        FUN_10008770(piVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}



// Function: FUN_10014d50 @ 0x10014d50

uint __cdecl FUN_10014d50(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  uVar41 = (uint)DAT_10037e32;
  uVar1 = (uint)DAT_10037e34;
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10019b10(1,uVar41,0x31,param_1 + 1);
    uVar3 = FUN_10019b10(1,uVar41,0x32,param_1 + 2);
    uVar4 = FUN_10019b10(1,uVar41,0x33,param_1 + 3);
    uVar5 = FUN_10019b10(1,uVar41,0x34,param_1 + 4);
    uVar6 = FUN_10019b10(1,uVar41,0x35,param_1 + 5);
    uVar7 = FUN_10019b10(1,uVar41,0x36,param_1 + 6);
    uVar8 = FUN_10019b10(1,uVar41,0x37,param_1);
    uVar9 = FUN_10019b10(1,uVar41,0x2a,param_1 + 8);
    uVar10 = FUN_10019b10(1,uVar41,0x2b,param_1 + 9);
    uVar11 = FUN_10019b10(1,uVar41,0x2c,param_1 + 10);
    uVar12 = FUN_10019b10(1,uVar41,0x2d,param_1 + 0xb);
    uVar13 = FUN_10019b10(1,uVar41,0x2e,param_1 + 0xc);
    uVar14 = FUN_10019b10(1,uVar41,0x2f,param_1 + 0xd);
    uVar15 = FUN_10019b10(1,uVar41,0x30,param_1 + 7);
    uVar16 = FUN_10019b10(1,uVar41,0x44,param_1 + 0xe);
    uVar17 = FUN_10019b10(1,uVar41,0x45,param_1 + 0xf);
    uVar18 = FUN_10019b10(1,uVar41,0x46,param_1 + 0x10);
    uVar19 = FUN_10019b10(1,uVar41,0x47,param_1 + 0x11);
    uVar20 = FUN_10019b10(1,uVar41,0x48,param_1 + 0x12);
    uVar21 = FUN_10019b10(1,uVar41,0x49,param_1 + 0x13);
    uVar22 = FUN_10019b10(1,uVar41,0x4a,param_1 + 0x14);
    uVar23 = FUN_10019b10(1,uVar41,0x4b,param_1 + 0x15);
    uVar24 = FUN_10019b10(1,uVar41,0x4c,param_1 + 0x16);
    uVar25 = FUN_10019b10(1,uVar41,0x4d,param_1 + 0x17);
    uVar26 = FUN_10019b10(1,uVar41,0x4e,param_1 + 0x18);
    uVar27 = FUN_10019b10(1,uVar41,0x4f,param_1 + 0x19);
    uVar28 = FUN_10019b10(1,uVar41,0x38,param_1 + 0x1a);
    uVar29 = FUN_10019b10(1,uVar41,0x39,param_1 + 0x1b);
    uVar30 = FUN_10019b10(1,uVar41,0x3a,param_1 + 0x1c);
    uVar31 = FUN_10019b10(1,uVar41,0x3b,param_1 + 0x1d);
    uVar32 = FUN_10019b10(1,uVar41,0x3c,param_1 + 0x1e);
    uVar33 = FUN_10019b10(1,uVar41,0x3d,param_1 + 0x1f);
    uVar34 = FUN_10019b10(1,uVar41,0x3e,param_1 + 0x20);
    uVar35 = FUN_10019b10(1,uVar41,0x3f,param_1 + 0x21);
    uVar36 = FUN_10019b10(1,uVar41,0x40,param_1 + 0x22);
    uVar37 = FUN_10019b10(1,uVar41,0x41,param_1 + 0x23);
    uVar38 = FUN_10019b10(1,uVar41,0x42,param_1 + 0x24);
    uVar39 = FUN_10019b10(1,uVar41,0x43,param_1 + 0x25);
    uVar40 = FUN_10019b10(1,uVar41,0x28,param_1 + 0x26);
    uVar41 = FUN_10019b10(1,uVar41,0x29,param_1 + 0x27);
    uVar42 = FUN_10019b10(1,uVar1,0x1f,param_1 + 0x28);
    uVar43 = FUN_10019b10(1,uVar1,0x20,param_1 + 0x29);
    uVar1 = FUN_10019b10(1,uVar1,0x1003,param_1 + 0x2a);
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
            uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31
            | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 |
            uVar41 | uVar42 | uVar43 | uVar1;
  }
  return uVar1;
}



// Function: ___free_lc_time @ 0x100152e0

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_10008770((void *)param_1[1],2);
    FUN_10008770((void *)param_1[2],2);
    FUN_10008770((void *)param_1[3],2);
    FUN_10008770((void *)param_1[4],2);
    FUN_10008770((void *)param_1[5],2);
    FUN_10008770((void *)param_1[6],2);
    FUN_10008770((void *)*param_1,2);
    FUN_10008770((void *)param_1[8],2);
    FUN_10008770((void *)param_1[9],2);
    FUN_10008770((void *)param_1[10],2);
    FUN_10008770((void *)param_1[0xb],2);
    FUN_10008770((void *)param_1[0xc],2);
    FUN_10008770((void *)param_1[0xd],2);
    FUN_10008770((void *)param_1[7],2);
    FUN_10008770((void *)param_1[0xe],2);
    FUN_10008770((void *)param_1[0xf],2);
    FUN_10008770((void *)param_1[0x10],2);
    FUN_10008770((void *)param_1[0x11],2);
    FUN_10008770((void *)param_1[0x12],2);
    FUN_10008770((void *)param_1[0x13],2);
    FUN_10008770((void *)param_1[0x14],2);
    FUN_10008770((void *)param_1[0x15],2);
    FUN_10008770((void *)param_1[0x16],2);
    FUN_10008770((void *)param_1[0x17],2);
    FUN_10008770((void *)param_1[0x18],2);
    FUN_10008770((void *)param_1[0x19],2);
    FUN_10008770((void *)param_1[0x1a],2);
    FUN_10008770((void *)param_1[0x1b],2);
    FUN_10008770((void *)param_1[0x1c],2);
    FUN_10008770((void *)param_1[0x1d],2);
    FUN_10008770((void *)param_1[0x1e],2);
    FUN_10008770((void *)param_1[0x1f],2);
    FUN_10008770((void *)param_1[0x20],2);
    FUN_10008770((void *)param_1[0x21],2);
    FUN_10008770((void *)param_1[0x22],2);
    FUN_10008770((void *)param_1[0x23],2);
    FUN_10008770((void *)param_1[0x24],2);
    FUN_10008770((void *)param_1[0x25],2);
    FUN_10008770((void *)param_1[0x26],2);
    FUN_10008770((void *)param_1[0x27],2);
    FUN_10008770((void *)param_1[0x28],2);
    FUN_10008770((void *)param_1[0x29],2);
    FUN_10008770((void *)param_1[0x2a],2);
  }
  return;
}



// Function: FUN_100155f0 @ 0x100155f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100155f0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = (uint)DAT_10037e2e;
  if (DAT_10037dd0 == 0) {
    FUN_10008770(DAT_10037dfc,2);
    FUN_10008770(DAT_10037e00,2);
    FUN_10008770(DAT_10037e04,2);
    DAT_10037dfc = (void *)0x0;
    DAT_10037e00 = (void *)0x0;
    DAT_10037e04 = (char *)0x0;
    uVar5 = FUN_10007ce0((void *)0x2,2,0x1003359c,0x88);
    *(undefined4 *)PTR_PTR_10036ef8 = uVar5;
    if (*(int *)PTR_PTR_10036ef8 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      FUN_1000b9b0(*(uint **)PTR_PTR_10036ef8,(uint *)&DAT_10033530);
      uVar5 = FUN_10007ce0((void *)0x2,2,0x1003359c,0x8d);
      *(undefined4 *)(PTR_PTR_10036ef8 + 4) = uVar5;
      if (*(int *)(PTR_PTR_10036ef8 + 4) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_10036ef8 + 4) = 0;
        uVar5 = FUN_10007ce0((void *)0x2,2,0x1003359c,0x92);
        *(undefined4 *)(PTR_PTR_10036ef8 + 8) = uVar5;
        if (*(int *)(PTR_PTR_10036ef8 + 8) == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_10036ef8 + 8) = 0;
          DAT_10035de4 = **(undefined1 **)PTR_PTR_10036ef8;
          _DAT_10035de8 = 1;
          uVar5 = 0;
        }
      }
    }
  }
  else {
    iVar2 = FUN_10019b10(1,uVar1,0xe,(int *)&DAT_10037dfc);
    iVar3 = FUN_10019b10(1,uVar1,0xf,(int *)&DAT_10037e00);
    iVar4 = FUN_10019b10(1,uVar1,0x10,(int *)&DAT_10037e04);
    fix_grouping(DAT_10037e04);
    if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) {
      if (*(undefined **)PTR_PTR_10036ef8 != &DAT_10036ec0) {
        FUN_10008770(*(void **)PTR_PTR_10036ef8,2);
        FUN_10008770(*(void **)(PTR_PTR_10036ef8 + 4),2);
        FUN_10008770(*(void **)(PTR_PTR_10036ef8 + 8),2);
      }
      *(void **)PTR_PTR_10036ef8 = DAT_10037dfc;
      *(void **)(PTR_PTR_10036ef8 + 4) = DAT_10037e00;
      *(char **)(PTR_PTR_10036ef8 + 8) = DAT_10037e04;
      DAT_10035de4 = **(undefined1 **)PTR_PTR_10036ef8;
      _DAT_10035de8 = 1;
      uVar5 = 0;
    }
    else {
      FUN_10008770(DAT_10037dfc,2);
      FUN_10008770(DAT_10037e00,2);
      FUN_10008770(DAT_10037e04,2);
      DAT_10037dfc = (void *)0x0;
      DAT_10037e00 = (void *)0x0;
      DAT_10037e04 = (char *)0x0;
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}



// Function: fix_grouping @ 0x100158a0

/* Library Function - Single Match
    _fix_grouping
   
   Library: Visual Studio */

void __cdecl fix_grouping(char *param_1)

{
  char *local_8;
  
  while (*param_1 != '\0') {
    if ((*param_1 < '0') || ('9' < *param_1)) {
      if (*param_1 == ';') {
        local_8 = param_1;
        do {
          *local_8 = local_8[1];
          local_8 = local_8 + 1;
        } while (*local_8 != '\0');
      }
      else {
        param_1 = param_1 + 1;
      }
    }
    else {
      *param_1 = *param_1 + -0x30;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// Function: FUN_10015920 @ 0x10015920

undefined4 FUN_10015920(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_10037dcc == 0) {
    PTR_DAT_10036ec8 = *(undefined **)PTR_PTR_10036ef8;
    PTR_DAT_10036ecc = *(undefined **)(PTR_PTR_10036ef8 + 4);
    PTR_DAT_10036ed0 = *(undefined **)(PTR_PTR_10036ef8 + 8);
    PTR_PTR_10036ef8 = (undefined *)&PTR_DAT_10036ec8;
    FUN_10015ce0((int)DAT_10037e08);
    FUN_10008770(DAT_10037e08,2);
    DAT_10037e08 = (undefined4 *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)__calloc_dbg(1,0x30,2,"initmon.c",0x4a);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_10015a50((int)puVar1);
      if (uVar3 == 0) {
        *puVar1 = *(undefined4 *)PTR_PTR_10036ef8;
        puVar1[1] = *(undefined4 *)(PTR_PTR_10036ef8 + 4);
        puVar1[2] = *(undefined4 *)(PTR_PTR_10036ef8 + 8);
        PTR_PTR_10036ef8 = (undefined *)puVar1;
        FUN_10015ce0((int)DAT_10037e08);
        FUN_10008770(DAT_10037e08,2);
        uVar2 = 0;
        DAT_10037e08 = puVar1;
      }
      else {
        FUN_10015ce0((int)puVar1);
        FUN_10008770(puVar1,2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// Function: FUN_10015a50 @ 0x10015a50

uint __cdecl FUN_10015a50(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar1 = (uint)DAT_10037e28;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10019b10(1,uVar1,0x15,(int *)(param_1 + 0xc));
    uVar3 = FUN_10019b10(1,uVar1,0x14,(int *)(param_1 + 0x10));
    uVar4 = FUN_10019b10(1,uVar1,0x16,(int *)(param_1 + 0x14));
    uVar5 = FUN_10019b10(1,uVar1,0x17,(int *)(param_1 + 0x18));
    uVar6 = FUN_10019b10(1,uVar1,0x18,(int *)(param_1 + 0x1c));
    fix_grouping(*(char **)(param_1 + 0x1c));
    uVar7 = FUN_10019b10(1,uVar1,0x50,(int *)(param_1 + 0x20));
    uVar8 = FUN_10019b10(1,uVar1,0x51,(int *)(param_1 + 0x24));
    uVar9 = FUN_10019b10(0,uVar1,0x1a,(int *)(param_1 + 0x28));
    uVar10 = FUN_10019b10(0,uVar1,0x19,(int *)(param_1 + 0x29));
    uVar11 = FUN_10019b10(0,uVar1,0x54,(int *)(param_1 + 0x2a));
    uVar12 = FUN_10019b10(0,uVar1,0x55,(int *)(param_1 + 0x2b));
    uVar13 = FUN_10019b10(0,uVar1,0x56,(int *)(param_1 + 0x2c));
    uVar14 = FUN_10019b10(0,uVar1,0x57,(int *)(param_1 + 0x2d));
    uVar15 = FUN_10019b10(0,uVar1,0x52,(int *)(param_1 + 0x2e));
    uVar1 = FUN_10019b10(0,uVar1,0x53,(int *)(param_1 + 0x2f));
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar1;
  }
  return uVar1;
}



// Function: fix_grouping @ 0x10015c60

/* Library Function - Single Match
    _fix_grouping
   
   Library: Visual Studio */

void __cdecl fix_grouping(char *param_1)

{
  char *local_8;
  
  while (*param_1 != '\0') {
    if ((*param_1 < '0') || ('9' < *param_1)) {
      if (*param_1 == ';') {
        local_8 = param_1;
        do {
          *local_8 = local_8[1];
          local_8 = local_8 + 1;
        } while (*local_8 != '\0');
      }
      else {
        param_1 = param_1 + 1;
      }
    }
    else {
      *param_1 = *param_1 + -0x30;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// Function: FUN_10015ce0 @ 0x10015ce0

void __cdecl FUN_10015ce0(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_10037e68)) {
    FUN_10008770(*(void **)(param_1 + 0xc),2);
    FUN_10008770(*(void **)(param_1 + 0x10),2);
    FUN_10008770(*(void **)(param_1 + 0x14),2);
    FUN_10008770(*(void **)(param_1 + 0x18),2);
    FUN_10008770(*(void **)(param_1 + 0x1c),2);
    FUN_10008770(*(void **)(param_1 + 0x20),2);
    FUN_10008770(*(void **)(param_1 + 0x24),2);
  }
  return;
}



// Function: FUN_10015d80 @ 0x10015d80

undefined4 FUN_10015d80(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined2 *local_34;
  LPCSTR local_30;
  LPCWSTR local_2c;
  LPCWSTR local_28;
  uint local_24;
  undefined2 *local_20;
  BYTE *local_1c;
  _cpinfo local_18;
  
  local_30 = (LPCSTR)0x0;
  local_2c = (LPCWSTR)0x0;
  if (DAT_10037dc8 == 0) {
    PTR_DAT_10035dec = &DAT_10035df6;
    PTR_DAT_10035df0 = &DAT_10035df6;
    FUN_10008770(DAT_10037e0c,2);
    FUN_10008770(DAT_10037e10,2);
    DAT_10037e0c = (void *)0x0;
    DAT_10037e10 = (void *)0x0;
    uVar3 = 0;
  }
  else {
    if ((DAT_10037dd8 != 0) ||
       (iVar1 = FUN_10019b10(0,(uint)DAT_10037e20,0x1004,(int *)&DAT_10037dd8), iVar1 == 0)) {
      local_34 = (undefined2 *)FUN_10007ce0((void *)0x202,2,0x100335b4,0x5c);
      local_20 = (undefined2 *)FUN_10007ce0((void *)0x202,2,0x100335b4,0x5e);
      local_30 = (LPCSTR)FUN_10007ce0((void *)0x101,2,0x100335b4,0x60);
      local_2c = (LPCWSTR)FUN_10007ce0((void *)0x202,2,0x100335b4,0x62);
      if ((local_34 != (undefined2 *)0x0) &&
         (((local_20 != (undefined2 *)0x0 && (local_30 != (LPCSTR)0x0)) &&
          (local_2c != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)local_30;
        for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
          *local_1c = (CHAR)local_24;
          local_1c = local_1c + 1;
        }
        BVar2 = GetCPInfo(DAT_10037dd8,&local_18);
        if ((BVar2 != 0) && (local_18.MaxCharSize < 3)) {
          DAT_10035de0 = local_18.MaxCharSize & 0xffff;
          if (1 < DAT_10035de0) {
            for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                  local_24 = local_24 + 1) {
                local_30[local_24] = '\0';
              }
            }
          }
          BVar2 = FUN_10011d90(1,local_30,0x100,local_34 + 1,0,0,0);
          if (BVar2 != 0) {
            *local_34 = 0;
            local_28 = local_2c;
            for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
              *local_28 = (WCHAR)local_24;
              local_28 = local_28 + 1;
            }
            BVar2 = FUN_10019db0(1,local_2c,0x100,local_20 + 1,0,0);
            if (BVar2 != 0) {
              *local_20 = 0;
              if (1 < (int)DAT_10035de0) {
                for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                      local_24 = local_24 + 1) {
                    local_34[local_24 + 1] = 0x8000;
                  }
                }
              }
              PTR_DAT_10035dec = (undefined *)(local_34 + 1);
              PTR_DAT_10035df0 = (undefined *)(local_20 + 1);
              if (DAT_10037e0c != (void *)0x0) {
                FUN_10008770(DAT_10037e0c,2);
              }
              DAT_10037e0c = local_34;
              if (DAT_10037e10 != (void *)0x0) {
                FUN_10008770(DAT_10037e10,2);
              }
              DAT_10037e10 = local_20;
              FUN_10008770(local_30,2);
              FUN_10008770(local_2c,2);
              return 0;
            }
          }
        }
      }
    }
    FUN_10008770(local_34,2);
    FUN_10008770(local_20,2);
    FUN_10008770(local_30,2);
    FUN_10008770(local_2c,2);
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_10016120 @ 0x10016120

undefined4 FUN_10016120(void)

{
  return 0;
}



// Function: FUN_10016130 @ 0x10016130

int __cdecl FUN_10016130(byte *param_1,byte *param_2)

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



// Function: _strncmp @ 0x10016170

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



// Function: FUN_100161b0 @ 0x100161b0

byte * __cdecl FUN_100161b0(byte *param_1,byte *param_2)

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



// Function: FUN_100161f0 @ 0x100161f0

undefined4 __cdecl FUN_100161f0(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_10037e58 == (code *)0x0) {
    iVar1 = FUN_10016cc0();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_10037e58 = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_10016b10();
  }
  else {
    DAT_10037e48 = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_100163f0(0x10036c00,0x40,(int *)&DAT_10037e48);
    }
    DAT_10037e4c = param_1 + 0x40;
    if ((DAT_10037e4c != (char *)0x0) && (*DAT_10037e4c != '\0')) {
      FUN_100163f0(0x10036b48,0x16,(int *)&DAT_10037e4c);
    }
    DAT_10037e50 = 0;
    if ((DAT_10037e48 == (char *)0x0) || (*DAT_10037e48 == '\0')) {
      if ((DAT_10037e4c == (char *)0x0) || (*DAT_10037e4c == '\0')) {
        FUN_10016b10();
      }
      else {
        FUN_10016a10();
      }
    }
    else if ((DAT_10037e4c == (char *)0x0) || (*DAT_10037e4c == '\0')) {
      FUN_10016870();
    }
    else {
      FUN_10016480();
    }
  }
  if (DAT_10037e50 == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_10016b40((byte *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_10037e38,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_10037e38;
          param_2[1] = (undefined2)DAT_10037e54;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_10037e58)(DAT_10037e38,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_10037e58)(DAT_10037e54,0x1002,param_3 + 0x40,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          __itoa(_Value,(char *)(param_3 + 0x80),10);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// Function: FUN_100163f0 @ 0x100163f0

void __cdecl FUN_100163f0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_c = 1;
  local_10 = 0;
  while ((local_10 <= param_2 && (local_c != 0))) {
    iVar1 = (local_10 + param_2) / 2;
    local_c = FUN_1001a020((byte *)*param_3,*(byte **)(param_1 + iVar1 * 8));
    if (local_c == 0) {
      *param_3 = param_1 + 4 + iVar1 * 8;
    }
    else if ((int)local_c < 0) {
      param_2 = iVar1 + -1;
    }
    else {
      local_10 = iVar1 + 1;
    }
  }
  return;
}



// Function: FUN_10016480 @ 0x10016480

void FUN_10016480(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_10037e48);
  DAT_10037e44 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_10037e4c);
  DAT_10037e3c = (uint)(sVar1 == 3);
  DAT_10037e38 = 0;
  if (DAT_10037e44 == 0) {
    local_8 = _GetPrimaryLen(DAT_10037e48);
  }
  else {
    local_8 = 2;
  }
  DAT_10037e40 = local_8;
  EnumSystemLocalesA(FUN_10016540,1);
  if ((((DAT_10037e50 & 0x100) == 0) || ((DAT_10037e50 & 0x200) == 0)) || ((DAT_10037e50 & 7) == 0))
  {
    DAT_10037e50 = 0;
  }
  return;
}



// Function: FUN_10016540 @ 0x10016540

bool FUN_10016540(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  byte local_7c [120];
  
  iVar2 = FUN_10016ea0(param_1);
  iVar3 = (*DAT_10037e58)(iVar2,(-(uint)(DAT_10037e3c != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10037e50 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_1001a020(DAT_10037e4c,local_7c);
    if (uVar4 == 0) {
      iVar3 = (*DAT_10037e58)(iVar2,(-(uint)(DAT_10037e44 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10037e50 = 0;
        return true;
      }
      uVar4 = FUN_1001a020(DAT_10037e48,local_7c);
      if (uVar4 == 0) {
        DAT_10037e50 = DAT_10037e50 | 0x304;
        DAT_10037e38 = iVar2;
        DAT_10037e54 = iVar2;
      }
      else if ((DAT_10037e50 & 2) == 0) {
        if ((DAT_10037e40 == 0) ||
           (iVar3 = FUN_1001a0f0(DAT_10037e48,(char *)local_7c,DAT_10037e40), iVar3 != 0)) {
          if (((DAT_10037e50 & 1) == 0) && (iVar3 = FUN_10016be0((short)iVar2), iVar3 != 0)) {
            DAT_10037e50 = DAT_10037e50 | 1;
            DAT_10037e54 = iVar2;
          }
        }
        else {
          DAT_10037e50 = DAT_10037e50 | 2;
          DAT_10037e54 = iVar2;
          sVar5 = _strlen((char *)DAT_10037e48);
          if (sVar5 == DAT_10037e40) {
            DAT_10037e38 = iVar2;
          }
        }
      }
    }
    if ((DAT_10037e50 & 0x300) != 0x300) {
      iVar3 = (*DAT_10037e58)(iVar2,(-(uint)(DAT_10037e44 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10037e50 = 0;
        return true;
      }
      uVar4 = FUN_1001a020(DAT_10037e48,local_7c);
      if (uVar4 == 0) {
        uVar4 = DAT_10037e50 | 0x200;
        if (DAT_10037e44 == 0) {
          DAT_10037e50 = uVar4;
          if ((DAT_10037e40 == 0) || (sVar5 = _strlen((char *)DAT_10037e48), sVar5 != DAT_10037e40))
          {
            DAT_10037e50 = DAT_10037e50 | 0x100;
            if (DAT_10037e38 == 0) {
              DAT_10037e38 = iVar2;
            }
          }
          else {
            iVar3 = FUN_10016c30(iVar2,1);
            if ((iVar3 != 0) && (DAT_10037e50 = DAT_10037e50 | 0x100, DAT_10037e38 == 0)) {
              DAT_10037e38 = iVar2;
            }
          }
        }
        else {
          DAT_10037e50 = DAT_10037e50 | 0x300;
          if (DAT_10037e38 == 0) {
            DAT_10037e38 = iVar2;
          }
        }
      }
      else if ((((DAT_10037e44 == 0) && (DAT_10037e40 != 0)) &&
               (iVar3 = FUN_1001a0f0(DAT_10037e48,(char *)local_7c,DAT_10037e40), iVar3 == 0)) &&
              ((iVar3 = FUN_10016c30(iVar2,0), iVar3 != 0 &&
               (DAT_10037e50 = DAT_10037e50 | 0x100, DAT_10037e38 == 0)))) {
        DAT_10037e38 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10037e50 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_10016870 @ 0x10016870

void FUN_10016870(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_10037e48);
  DAT_10037e44 = (uint)(sVar1 == 3);
  if (DAT_10037e44 == 0) {
    local_8 = _GetPrimaryLen(DAT_10037e48);
  }
  else {
    local_8 = 2;
  }
  DAT_10037e40 = local_8;
  EnumSystemLocalesA(FUN_100168f0,1);
  if ((DAT_10037e50 & 4) == 0) {
    DAT_10037e50 = 0;
  }
  return;
}



// Function: FUN_100168f0 @ 0x100168f0

bool FUN_100168f0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_7c [120];
  
  iVar2 = FUN_10016ea0(param_1);
  iVar3 = (*DAT_10037e58)(iVar2,(-(uint)(DAT_10037e44 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10037e50 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_1001a020(DAT_10037e48,local_7c);
    if (uVar4 == 0) {
      if ((DAT_10037e44 != 0) || (iVar3 = FUN_10016c30(iVar2,1), iVar3 != 0)) {
        DAT_10037e50 = DAT_10037e50 | 4;
        DAT_10037e38 = iVar2;
        DAT_10037e54 = iVar2;
      }
    }
    else if ((((DAT_10037e44 == 0) && (DAT_10037e40 != 0)) &&
             (iVar3 = FUN_1001a0f0(DAT_10037e48,(char *)local_7c,DAT_10037e40), iVar3 == 0)) &&
            (iVar3 = FUN_10016c30(iVar2,0), iVar3 != 0)) {
      DAT_10037e50 = DAT_10037e50 | 4;
      DAT_10037e38 = iVar2;
      DAT_10037e54 = iVar2;
    }
    cVar1 = '\x01' - ((DAT_10037e50 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_10016a10 @ 0x10016a10

void FUN_10016a10(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_10037e4c);
  DAT_10037e3c = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_10016a60,1);
  if ((DAT_10037e50 & 4) == 0) {
    DAT_10037e50 = 0;
  }
  return;
}



// Function: FUN_10016a60 @ 0x10016a60

bool FUN_10016a60(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_7c [120];
  
  iVar2 = FUN_10016ea0(param_1);
  iVar3 = (*DAT_10037e58)(iVar2,(-(uint)(DAT_10037e3c != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10037e50 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_1001a020(DAT_10037e4c,local_7c);
    if (uVar4 == 0) {
      iVar3 = FUN_10016be0((short)iVar2);
      if (iVar3 != 0) {
        DAT_10037e50 = DAT_10037e50 | 4;
        DAT_10037e38 = iVar2;
        DAT_10037e54 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10037e50 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_10016b10 @ 0x10016b10

void FUN_10016b10(void)

{
  DAT_10037e50 = DAT_10037e50 | 0x104;
  DAT_10037e54 = GetUserDefaultLCID();
  DAT_10037e38 = DAT_10037e54;
  return;
}



// Function: FUN_10016b40 @ 0x10016b40

int __cdecl FUN_10016b40(byte *param_1)

{
  int iVar1;
  byte local_c [8];
  
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    iVar1 = (*DAT_10037e58)(DAT_10037e54,0x1004,local_c,8);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = local_c;
  }
  else {
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 == 0) {
      iVar1 = (*DAT_10037e58)(DAT_10037e54,0xb,local_c,8);
      if (iVar1 == 0) {
        return 0;
      }
      param_1 = local_c;
    }
  }
  iVar1 = FUN_100106e0(param_1);
  return iVar1;
}



// Function: FUN_10016be0 @ 0x10016be0

undefined4 __cdecl FUN_10016be0(short param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_10036b34 + local_c * 2)) break;
    local_c = local_c + 1;
  }
  return 0;
}



// Function: FUN_10016c30 @ 0x10016c30

undefined4 __cdecl FUN_10016c30(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  char local_80 [120];
  uint local_8;
  
  local_8 = (uint)((ushort)param_1 & 0x3ff | 0x400);
  iVar1 = (*DAT_10037e58)(local_8,1,local_80,0x78);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_10016ea0(local_80);
    if ((param_1 != iVar1) && (param_2 != 0)) {
      sVar3 = _GetPrimaryLen(DAT_10037e48);
      sVar4 = _strlen(DAT_10037e48);
      if (sVar3 == sVar4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_10016cc0 @ 0x10016cc0

undefined4 FUN_10016cc0(void)

{
  BOOL BVar1;
  undefined4 local_9c;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_98);
  if ((BVar1 == 0) || (local_98.dwPlatformId != 2)) {
    local_9c = 0;
  }
  else {
    local_9c = 1;
  }
  return local_9c;
}



// Function: crtGetLocaleInfoA @ 0x10016d10

/* Library Function - Single Match
    _crtGetLocaleInfoA@16
   
   Library: Visual Studio 2003 Debug
   __stdcall crtGetLocaleInfoA,16 */

int crtGetLocaleInfoA(uint param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  int local_14;
  char *local_c;
  int local_8;
  
  local_14 = 0;
  local_8 = 0x1a;
  local_c = (char *)0x0;
  do {
    if (local_8 < local_14) {
LAB_10016e78:
      iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = (local_14 + local_8) / 2;
    if (param_1 == *(uint *)(&DAT_10036690 + iVar1 * 0x2c)) {
      if (param_2 < 0xc) {
        if (param_2 == 0xb) {
          local_c = &DAT_100366ac + iVar1 * 0x2c;
        }
        else if (param_2 == 1) {
          local_c = &DAT_10036694 + iVar1 * 0x2c;
        }
        else if (param_2 == 3) {
          local_c = &DAT_100366a0 + iVar1 * 0x2c;
        }
        else if (param_2 == 7) {
          local_c = &DAT_100366a8 + iVar1 * 0x2c;
        }
      }
      else if (param_2 == 0x1001) {
        local_c = (&PTR_s_Spanish___Traditional_Sort_1003669c)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1002) {
        local_c = (&PTR_s_Spain_100366a4)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1004) {
        local_c = &DAT_100366b4 + iVar1 * 0x2c;
      }
      if ((local_c != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,local_c,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      goto LAB_10016e78;
    }
    if (param_1 < *(uint *)(&DAT_10036690 + iVar1 * 0x2c)) {
      local_8 = iVar1 + -1;
    }
    else {
      local_14 = iVar1 + 1;
    }
  } while( true );
}



// Function: FUN_10016ea0 @ 0x10016ea0

int __cdecl FUN_10016ea0(char *param_1)

{
  char local_c;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    local_c = *param_1;
    param_1 = param_1 + 1;
    if (local_c == '\0') break;
    if ((local_c < 'a') || ('f' < local_c)) {
      if (('@' < local_c) && (local_c < 'G')) {
        local_c = local_c + -7;
      }
    }
    else {
      local_c = local_c + -0x27;
    }
    local_8 = local_8 * 0x10 + -0x30 + (int)local_c;
  }
  return local_8;
}



// Function: _GetPrimaryLen @ 0x10016f20

/* Library Function - Single Match
    _GetPrimaryLen
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

int __cdecl _GetPrimaryLen(char *param_1)

{
  int local_c;
  char local_8;
  
  local_c = 0;
  local_8 = *param_1;
  while (((param_1 = param_1 + 1, '@' < local_8 && (local_8 < '[')) ||
         (('`' < local_8 && (local_8 < '{'))))) {
    local_c = local_c + 1;
    local_8 = *param_1;
  }
  return local_c;
}



// Function: FUN_10016f90 @ 0x10016f90

void __cdecl FUN_10016f90(int *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int local_38;
  ushort local_34;
  int local_2c;
  int local_28;
  int local_20;
  undefined4 local_18;
  short local_14 [4];
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  local_18._0_2_ = 0;
  local_18._2_2_ = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  uVar1 = *(ushort *)((int)param_1 + 10);
  uVar2 = *(ushort *)((int)param_2 + 10);
  uVar3 = uVar1 ^ uVar2;
  local_34 = (uVar1 & 0x7fff) + (uVar2 & 0x7fff);
  if ((((uVar1 & 0x7fff) < 0x7fff) && ((uVar2 & 0x7fff) < 0x7fff)) && (local_34 < 0xbffe)) {
    if (local_34 < 0x3fc0) {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    else if ((((uVar1 & 0x7fff) == 0) && (local_34 = local_34 + 1, (param_1[2] & 0x7fffffffU) == 0))
            && ((param_1[1] == 0 && (*param_1 == 0)))) {
      *(undefined2 *)((int)param_1 + 10) = 0;
    }
    else if ((((uVar2 & 0x7fff) == 0) && (local_34 = local_34 + 1, (param_2[2] & 0x7fffffffU) == 0))
            && ((param_2[1] == 0 && (*param_2 == 0)))) {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    else {
      local_2c = 0;
      for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
        local_28 = local_20 << 1;
        local_c = 8;
        for (local_38 = 5 - local_20; 0 < local_38; local_38 = local_38 + -1) {
          iVar4 = ___addl(*(uint *)((int)&local_18 + local_2c),
                          (uint)*(ushort *)((int)param_1 + local_28) *
                          (uint)*(ushort *)((int)param_2 + local_c),
                          (uint *)((int)&local_18 + local_2c));
          if (iVar4 != 0) {
            *(short *)((int)local_14 + local_2c) = *(short *)((int)local_14 + local_2c) + 1;
          }
          local_28 = local_28 + 2;
          local_c = local_c + -2;
        }
        local_2c = local_2c + 2;
      }
      local_34 = local_34 + 0xc002;
      while ((0 < (short)local_34 && ((local_14[3] & 0x8000U) == 0))) {
        ___shl_12(&local_18);
        local_34 = local_34 - 1;
      }
      if ((short)local_34 < 1) {
        for (local_34 = local_34 - 1; (short)local_34 < 0; local_34 = local_34 + 1) {
          if (((ushort)local_18 & 1) != 0) {
            local_8 = local_8 + 1;
          }
          ___shr_12(&local_18);
        }
        if (local_8 != 0) {
          local_18._0_2_ = (ushort)local_18 | 1;
        }
      }
      iVar4 = CONCAT22(local_14[0],local_18._2_2_);
      if ((0x8000 < (ushort)local_18) ||
         (iVar5 = CONCAT22(local_14[2],local_14[1]),
         (CONCAT22(local_18._2_2_,(ushort)local_18) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_14[0],local_18._2_2_) == -1) {
          iVar4 = 0;
          if (CONCAT22(local_14[2],local_14[1]) == -1) {
            iVar5 = 0;
            if (local_14[3] == 0xffff) {
              local_14[3] = 0x8000;
              local_34 = local_34 + 1;
            }
            else {
              local_14[3] = local_14[3] + 1;
            }
          }
          else {
            iVar5 = CONCAT22(local_14[2],local_14[1]) + 1;
          }
        }
        else {
          iVar4 = CONCAT22(local_14[0],local_18._2_2_) + 1;
          iVar5 = CONCAT22(local_14[2],local_14[1]);
        }
      }
      local_14[0] = (short)((uint)iVar4 >> 0x10);
      local_18._2_2_ = (undefined2)iVar4;
      local_14[2] = (short)((uint)iVar5 >> 0x10);
      local_14[1] = (short)iVar5;
      if (local_34 < 0x7fff) {
        *(undefined2 *)param_1 = local_18._2_2_;
        *(uint *)((int)param_1 + 2) = CONCAT22(local_14[1],local_14[0]);
        *(uint *)((int)param_1 + 6) = CONCAT22(local_14[3],local_14[2]);
        *(ushort *)((int)param_1 + 10) = local_34 | uVar3 & 0x8000;
      }
      else {
        param_1[2] = (-(uint)((uVar3 & 0x8000) != 0) & 0x80000000) + 0x7fff8000;
        param_1[1] = 0;
        *param_1 = 0;
      }
    }
  }
  else {
    param_1[2] = (-(uint)((uVar3 & 0x8000) != 0) & 0x80000000) + 0x7fff8000;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}



// Function: FUN_100173d0 @ 0x100173d0

void __cdecl FUN_100173d0(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined2 local_18;
  undefined4 uStack_16;
  undefined2 uStack_12;
  undefined *local_10;
  undefined **local_c;
  undefined **local_8;
  
  local_8 = &PTR_s_November_10036ea0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      local_8 = (undefined **)&DAT_10037000;
    }
    uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16);
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
      uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16);
    }
    while (param_2 != 0) {
      local_8 = local_8 + 0x15;
      uVar1 = param_2 & 7;
      param_2 = (int)param_2 >> 3;
      if (uVar1 != 0) {
        local_c = local_8 + uVar1 * 3;
        if (0x7fff < *(ushort *)local_c) {
          local_18 = SUB42(*local_c,0);
          uStack_16._0_2_ = (undefined2)((uint)*local_c >> 0x10);
          uStack_16._2_2_ = SUB42(local_c[1],0);
          uStack_12 = (undefined2)((uint)local_c[1] >> 0x10);
          local_10 = local_c[2];
          uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16) + -1;
          local_c = (undefined **)&local_18;
        }
        FUN_10016f90(param_1,(int *)local_c);
      }
    }
  }
  return;
}



// Function: FUN_100174a0 @ 0x100174a0

int __cdecl
FUN_100174a0(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
            UINT param_7)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  BOOL BVar4;
  BYTE *local_44;
  _cpinfo local_40;
  PCNZWCH local_2c;
  PCNZWCH local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10033c90;
  puStack_10 = &LAB_10014b98;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  ExceptionList = &local_14;
  puVar2 = &stack0xffffffa8;
  if (DAT_10037e5c == 0) {
    ExceptionList = &local_14;
    iVar3 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar3 == 0) {
      iVar3 = CompareStringA(0,0,"",1,"",1);
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10037e5c = 2;
      puVar2 = local_1c;
    }
    else {
      DAT_10037e5c = 1;
      puVar2 = local_1c;
    }
  }
  local_1c = puVar2;
  if (0 < param_4) {
    param_4 = FUN_100178a0((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_100178a0((char *)param_5,param_6);
  }
  if (DAT_10037e5c == 2) {
    iVar3 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
  }
  else if (DAT_10037e5c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10037dd8;
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
      BVar4 = GetCPInfo(param_7,&local_40);
      if (BVar4 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      if ((((param_4 != 0) || (param_6 != 1)) && ((param_4 != 1 || (param_6 != 0)))) &&
         (iVar3 = FUN_10006850(2,0x10033c48,0xb6,0,
                               (byte *)
                               "cchCount1==0 && cchCount2==1 || cchCount1==1 && cchCount2==0"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if (0 < param_4) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 3;
        }
        local_44 = local_40.LeadByte;
        while( true ) {
          if ((*local_44 == 0) || (local_44[1] == 0)) {
            ExceptionList = local_14;
            return 3;
          }
          if ((*local_44 <= *param_3) && (*param_3 <= local_44[1])) break;
          local_44 = local_44 + 2;
        }
        ExceptionList = local_14;
        return 2;
      }
      if (0 < param_6) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 1;
        }
        local_44 = local_40.LeadByte;
        while( true ) {
          if ((*local_44 == 0) || (local_44[1] == 0)) {
            ExceptionList = local_14;
            return 1;
          }
          if ((*local_44 <= *param_5) && (*param_5 <= local_44[1])) break;
          local_44 = local_44 + 2;
        }
        ExceptionList = local_14;
        return 2;
      }
    }
    local_20 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    if (local_20 == 0) {
      iVar3 = 0;
    }
    else {
      local_8 = 0;
      FUN_1000bba0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x58) {
        iVar3 = 0;
      }
      else {
        local_28 = (PCNZWCH)&stack0xffffffa8;
        local_1c = &stack0xffffffa8;
        iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffa8,
                                    local_20);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          local_24 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
          if (local_24 == 0) {
            iVar3 = 0;
          }
          else {
            local_8 = 1;
            FUN_1000bba0();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x58) {
              iVar3 = 0;
            }
            else {
              local_2c = (PCNZWCH)&stack0xffffffa8;
              local_1c = &stack0xffffffa8;
              iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,(LPWSTR)&stack0xffffffa8
                                          ,local_24);
              if (iVar3 == 0) {
                iVar3 = 0;
              }
              else {
                iVar3 = CompareStringW(param_1,param_2,local_28,local_20,local_2c,local_24);
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = 0;
  }
  ExceptionList = local_14;
  return iVar3;
}



// Function: FUN_100178a0 @ 0x100178a0

int __cdecl FUN_100178a0(char *param_1,int param_2)

{
  int local_c;
  char *local_8;
  
  local_c = param_2;
  for (local_8 = param_1; (local_c != 0 && (*local_8 != '\0')); local_8 = local_8 + 1) {
    local_c = local_c + -1;
  }
  if (*local_8 == '\0') {
    param_2 = (int)local_8 - (int)param_1;
  }
  return param_2;
}



// Function: FUN_100178f0 @ 0x100178f0

undefined4 __cdecl FUN_100178f0(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint *lpName;
  undefined1 *puVar5;
  bool bVar6;
  uint uVar7;
  char *pcVar8;
  int local_c;
  
  if (((param_1 == (uint *)0x0) ||
      (puVar1 = (uint *)FUN_1001a200((byte *)param_1,0x3d), puVar1 == (uint *)0x0)) ||
     (param_1 == puVar1)) {
    return 0xffffffff;
  }
  bVar6 = *(byte *)((int)puVar1 + 1) == 0;
  if (DAT_10037b30 == DAT_10037b34) {
    DAT_10037b30 = copy_environ(DAT_10037b30);
  }
  if (DAT_10037b30 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_10037b38 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_10037b30 = (int *)FUN_10007ce0((void *)0x4,2,0x10033ca8,0x87);
      if (DAT_10037b30 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_10037b30 = 0;
      if (DAT_10037b38 == (undefined4 *)0x0) {
        DAT_10037b38 = (undefined4 *)FUN_10007ce0((void *)0x4,2,0x10033ca8,0x8e);
        if (DAT_10037b38 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_10037b38 = 0;
      }
    }
    else {
      iVar2 = FUN_10014130();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_10037b30;
  local_c = findenv((uchar *)param_1,(int)puVar1 - (int)param_1);
  if ((local_c < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (local_c < 0) {
      local_c = -local_c;
    }
    piVar3 = FUN_10008170(piVar3,(void *)(local_c * 4 + 8),2,0x10033ca8,0xce);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[local_c] = (int)param_1;
    piVar3[local_c + 1] = 0;
    DAT_10037b30 = piVar3;
  }
  else if (bVar6) {
    FUN_10008770((void *)piVar3[local_c],2);
    for (; piVar3[local_c] != 0; local_c = local_c + 1) {
      piVar3[local_c] = piVar3[local_c + 1];
    }
    piVar3 = FUN_10008170(piVar3,(void *)(local_c << 2),2,0x10033ca8,0xb9);
    if (piVar3 != (int *)0x0) {
      DAT_10037b30 = piVar3;
    }
  }
  else {
    piVar3[local_c] = (int)param_1;
  }
  if (param_2 != 0) {
    iVar2 = 0xe5;
    pcVar8 = "setenv.c";
    uVar7 = 2;
    sVar4 = _strlen((char *)param_1);
    lpName = (uint *)FUN_10007ce0((void *)(sVar4 + 2),uVar7,(int)pcVar8,iVar2);
    if (lpName != (uint *)0x0) {
      FUN_1000b9b0(lpName,param_1);
      puVar5 = (undefined1 *)((int)lpName + ((int)puVar1 - (int)param_1));
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(puVar5 + 1)));
      FUN_10008770(lpName,2);
    }
  }
  return 0;
}



// Function: findenv @ 0x10017bd0

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2003 Debug */

int __cdecl findenv(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = DAT_10037b30;
  while( true ) {
    if (*local_8 == 0) {
      return -((int)local_8 - (int)DAT_10037b30 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*local_8,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*local_8 + param_2) == '=' || (*(char *)(*local_8 + param_2) == '\0')))) break;
    local_8 = local_8 + 1;
  }
  return (int)local_8 - (int)DAT_10037b30 >> 2;
}



// Function: copy_environ @ 0x10017c50

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2003 Debug */

int * __cdecl copy_environ(int *param_1)

{
  int *piVar1;
  size_t sVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int local_14;
  int *local_10;
  int *local_c;
  
  local_14 = 0;
  local_10 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    while (iVar5 = *local_10, local_10 = local_10 + 1, iVar5 != 0) {
      local_14 = local_14 + 1;
    }
    piVar1 = (int *)FUN_10007ce0((void *)(local_14 * 4 + 4),2,0x10033ca8,0x146);
    if (piVar1 == (int *)0x0) {
      __amsg_exit(9);
    }
    local_c = piVar1;
    for (local_10 = param_1; *local_10 != 0; local_10 = local_10 + 1) {
      iVar5 = 0x14f;
      pcVar4 = "setenv.c";
      uVar3 = 2;
      sVar2 = _strlen((char *)*local_10);
      iVar5 = FUN_10007ce0((void *)(sVar2 + 1),uVar3,(int)pcVar4,iVar5);
      *local_c = iVar5;
      if (*local_c != 0) {
        FUN_1000b9b0((uint *)*local_c,(uint *)*local_10);
      }
      local_c = local_c + 1;
    }
    *local_c = 0;
  }
  return piVar1;
}



// Function: FUN_10017d40 @ 0x10017d40

uint FUN_10017d40(void)

{
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0xffffffff;
  FUN_1000a900(0x12);
  local_10 = 0;
  do {
    if (0x3f < local_10) {
LAB_10017f10:
      FUN_1000a9a0(0x12);
      return local_c;
    }
    if ((&DAT_100394e0)[local_10] == 0) {
      local_8 = (undefined4 *)FUN_10007ce0((void *)0x480,2,0x10033cb4,0x79);
      if (local_8 != (undefined4 *)0x0) {
        (&DAT_100394e0)[local_10] = local_8;
        DAT_1003961c = DAT_1003961c + 0x20;
        for (; local_8 < (undefined4 *)((&DAT_100394e0)[local_10] + 0x480); local_8 = local_8 + 9) {
          *(undefined1 *)(local_8 + 1) = 0;
          *local_8 = 0xffffffff;
          *(undefined1 *)((int)local_8 + 5) = 10;
          local_8[2] = 0;
        }
        local_c = local_10 << 5;
        FUN_10018250(local_c);
      }
      goto LAB_10017f10;
    }
    for (local_8 = (undefined4 *)(&DAT_100394e0)[local_10];
        local_8 < (undefined4 *)((&DAT_100394e0)[local_10] + 0x480); local_8 = local_8 + 9) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        if (local_8[2] == 0) {
          FUN_1000a900(0x11);
          if (local_8[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
            local_8[2] = local_8[2] + 1;
          }
          FUN_1000a9a0(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
        if ((*(byte *)(local_8 + 1) & 1) == 0) {
          *local_8 = 0xffffffff;
          local_c = local_10 * 0x20 + ((int)local_8 - (&DAT_100394e0)[local_10]) / 0x24;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
      }
    }
    if (local_c != 0xffffffff) goto LAB_10017f10;
    local_10 = local_10 + 1;
  } while( true );
}



// Function: __set_osfhnd @ 0x10017f30

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  
  if (((uint)param_1 < DAT_1003961c) &&
     (*(int *)((&DAT_100394e0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) == -1)) {
    if (DAT_10037b08 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)param_2);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)param_2);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)param_2);
      }
    }
    *(intptr_t *)((&DAT_100394e0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) = param_2;
    iVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_10011d70();
    *puVar2 = 9;
    pDVar3 = FUN_10011d80();
    *pDVar3 = 0;
    iVar1 = -1;
  }
  return iVar1;
}



// Function: FUN_10017ff0 @ 0x10017ff0

undefined4 __cdecl FUN_10017ff0(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  
  if (((param_1 < DAT_1003961c) &&
      (iVar4 = (int)param_1 >> 5,
      (*(byte *)((&DAT_100394e0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) &&
     (*(int *)((&DAT_100394e0)[iVar4] + (param_1 & 0x1f) * 0x24) != -1)) {
    if (DAT_10037b08 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)0x0);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)0x0);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)0x0);
      }
    }
    *(undefined4 *)((&DAT_100394e0)[iVar4] + (param_1 & 0x1f) * 0x24) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_10011d70();
    *puVar2 = 9;
    pDVar3 = FUN_10011d80();
    *pDVar3 = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: FUN_100180d0 @ 0x100180d0

undefined4 __cdecl FUN_100180d0(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  
  if ((param_1 < DAT_1003961c) &&
     ((*(byte *)((&DAT_100394e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    uVar3 = *(undefined4 *)((&DAT_100394e0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  else {
    puVar1 = (undefined4 *)FUN_10011d70();
    *puVar1 = 9;
    pDVar2 = FUN_10011d80();
    *pDVar2 = 0;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// Function: FUN_10018140 @ 0x10018140

uint __cdecl FUN_10018140(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint _Filehandle;
  undefined4 *puVar2;
  DWORD *pDVar3;
  byte local_10;
  
  local_10 = 0;
  if ((param_2 & 8) != 0) {
    local_10 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    local_10 = local_10 | 0x80;
  }
  if ((param_2 & 0x80) != 0) {
    local_10 = local_10 | 0x10;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
    _Filehandle = 0xffffffff;
  }
  else {
    if (DVar1 == 2) {
      local_10 = local_10 | 0x40;
    }
    else if (DVar1 == 3) {
      local_10 = local_10 | 8;
    }
    _Filehandle = FUN_10017d40();
    if (_Filehandle == 0xffffffff) {
      puVar2 = (undefined4 *)FUN_10011d70();
      *puVar2 = 0x18;
      pDVar3 = FUN_10011d80();
      *pDVar3 = 0;
      _Filehandle = 0xffffffff;
    }
    else {
      __set_osfhnd(_Filehandle,(intptr_t)param_1);
      *(byte *)((&DAT_100394e0)[(int)_Filehandle >> 5] + 4 + (_Filehandle & 0x1f) * 0x24) =
           local_10 | 1;
      __unlock_fhandle(_Filehandle);
    }
  }
  return _Filehandle;
}



// Function: FUN_10018250 @ 0x10018250

void __cdecl FUN_10018250(uint param_1)

{
  int iVar1;
  
  iVar1 = (&DAT_100394e0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000a900(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000a9a0(0x11);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_100394e0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: __unlock_fhandle @ 0x100182e0

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_100394e0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}



// Function: FUN_10018310 @ 0x10018310

int FUN_10018310(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_1000a900(2);
  for (local_c = 3; local_c < DAT_100391e0; local_c = local_c + 1) {
    if (*(int *)(DAT_10037e8c + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_10037e8c + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = FUN_1001a2f0(*(undefined ***)(DAT_10037e8c + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10037e8c + local_c * 4) + 0x20));
        FUN_10008770(*(void **)(DAT_10037e8c + local_c * 4),2);
        *(undefined4 *)(DAT_10037e8c + local_c * 4) = 0;
      }
    }
  }
  FUN_1000a9a0(2);
  return local_8;
}



// Function: FUN_100183f0 @ 0x100183f0

int __cdecl FUN_100183f0(undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_10018560(0);
  }
  else {
    FUN_100148a0(param_1);
    iVar1 = FUN_10018440((int *)param_1);
    FUN_10014910(param_1);
  }
  return iVar1;
}



// Function: FUN_10018440 @ 0x10018440

int __cdecl FUN_10018440(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_10018490(param_1);
  if (iVar1 == 0) {
    if ((param_1[3] & 0x4000U) == 0) {
      iVar1 = 0;
    }
    else {
      DVar2 = FUN_1001a440(param_1[4]);
      iVar1 = -(uint)(DVar2 != 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// Function: FUN_10018490 @ 0x10018490

undefined4 __cdecl FUN_10018490(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((param_1[3] & 3U) == 2) && ((param_1[3] & 0x108U) != 0)) &&
     (uVar2 = *param_1 - param_1[2], 0 < (int)uVar2)) {
    uVar1 = FUN_10014330(param_1[4],(char *)param_1[2],uVar2);
    if (uVar1 == uVar2) {
      if ((param_1[3] & 0x80U) != 0) {
        param_1[3] = param_1[3] & 0xfffffffd;
      }
    }
    else {
      param_1[3] = param_1[3] | 0x20;
      local_8 = 0xffffffff;
    }
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return local_8;
}



// Function: FUN_10018550 @ 0x10018550

void FUN_10018550(void)

{
  FUN_10018560(1);
  return;
}



// Function: FUN_10018560 @ 0x10018560

int __cdecl FUN_10018560(int param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_1000a900(2);
  for (local_10 = 0; local_10 < DAT_100391e0; local_10 = local_10 + 1) {
    if ((*(int *)(DAT_10037e8c + local_10 * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_10037e8c + local_10 * 4) + 0xc) & 0x83) != 0)) {
      FUN_100148e0(local_10,*(int *)(DAT_10037e8c + local_10 * 4));
      if ((*(uint *)(*(int *)(DAT_10037e8c + local_10 * 4) + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = FUN_10018440(*(int **)(DAT_10037e8c + local_10 * 4));
          if (iVar1 != -1) {
            local_8 = local_8 + 1;
          }
        }
        else if (((param_1 == 0) &&
                 ((*(uint *)(*(int *)(DAT_10037e8c + local_10 * 4) + 0xc) & 2) != 0)) &&
                (iVar1 = FUN_10018440(*(int **)(DAT_10037e8c + local_10 * 4)), iVar1 == -1)) {
          local_c = -1;
        }
      }
      FUN_10014950(local_10,*(int *)(DAT_10037e8c + local_10 * 4));
    }
  }
  FUN_1000a9a0(2);
  if (param_1 == 1) {
    local_c = local_8;
  }
  return local_c;
}



// Function: FUN_100186a0 @ 0x100186a0

undefined1 * FUN_100186a0(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *_Str;
  undefined1 *puVar6;
  undefined1 *local_18;
  uint local_14;
  int local_c;
  
  puVar1 = PTR_PTR_10036e08;
  local_c = 0;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x1c));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_10007cc0((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_1000b9b0((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_1000b9b0(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}



// Function: FUN_100187d0 @ 0x100187d0

undefined1 * FUN_100187d0(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *_Str;
  undefined1 *puVar6;
  undefined1 *local_18;
  uint local_14;
  int local_c;
  
  puVar1 = PTR_PTR_10036e08;
  local_c = 0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x38));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x68));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_10007cc0((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_1000b9b0((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_1000b9b0(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}



// Function: FUN_10018900 @ 0x10018900

undefined4 * FUN_10018900(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *local_18;
  uint local_14;
  int local_c;
  
  puVar1 = PTR_PTR_10036e08;
  local_c = 0;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x1c));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x38));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x68));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  sVar2 = _strlen(*(char **)(puVar1 + 0x98));
  sVar3 = _strlen(*(char **)(puVar1 + 0x9c));
  sVar4 = _strlen(*(char **)(puVar1 + 0xa0));
  sVar5 = _strlen(*(char **)(puVar1 + 0xa4));
  sVar6 = _strlen(*(char **)(puVar1 + 0xa8));
  puVar7 = (undefined4 *)
           FUN_10007cc0((void *)(sVar3 + local_c + sVar2 + sVar4 + sVar5 + sVar6 + 0xb1));
  if (puVar7 != (undefined4 *)0x0) {
    local_18 = puVar7 + 0x2b;
    FUN_100103a0(puVar7,(undefined4 *)PTR_PTR_10036e08,0xac);
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      puVar7[local_14] = local_18;
      puVar8 = FUN_1000b9b0(local_18,*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 7] = local_18;
      puVar8 = FUN_1000b9b0(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      puVar7[local_14 + 0xe] = local_18;
      puVar8 = FUN_1000b9b0(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 0x1a] = local_18;
      puVar8 = FUN_1000b9b0(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    puVar7[0x26] = local_18;
    puVar8 = FUN_1000b9b0(local_18,*(uint **)(puVar1 + 0x98));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x27] = local_18;
    puVar8 = FUN_1000b9b0(local_18,*(uint **)(puVar1 + 0x9c));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x28] = local_18;
    puVar8 = FUN_1000b9b0(local_18,*(uint **)(puVar1 + 0xa0));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x29] = local_18;
    puVar8 = FUN_1000b9b0(local_18,*(uint **)(puVar1 + 0xa4));
    sVar2 = _strlen((char *)puVar8);
    puVar7[0x2a] = (int)local_18 + sVar2 + 1;
  }
  return puVar7;
}



// Function: FUN_10018c70 @ 0x10018c70

void __cdecl FUN_10018c70(byte *param_1,uint param_2,byte *param_3,int *param_4)

{
  FUN_10018c90(param_1,param_2,param_3,param_4,(undefined *)0x0);
  return;
}



// Function: FUN_10018c90 @ 0x10018c90

int __cdecl FUN_10018c90(byte *param_1,uint param_2,byte *param_3,int *param_4,undefined *param_5)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  undefined *local_14;
  uint local_10;
  int local_c;
  undefined *local_8;
  
  if (param_5 == (undefined *)0x0) {
    local_14 = PTR_PTR_10036e08;
  }
  else {
    local_14 = param_5;
  }
  local_8 = local_14;
  local_10 = param_2;
  InterlockedIncrement(&DAT_100391f4);
  if (DAT_100391e4 == 0) {
    local_c = 0;
  }
  else {
    InterlockedDecrement(&DAT_100391f4);
    FUN_1000a900(0x13);
    local_c = 1;
  }
  for (; (local_10 != 0 && (*param_3 != 0)); param_3 = param_3 + 1) {
    if (*param_3 == 0x25) {
      bVar3 = param_3[1] == 0x23;
      pbVar1 = param_3 + 1;
      if (bVar3) {
        pbVar1 = param_3 + 2;
      }
      param_3 = pbVar1;
      DAT_10037e78 = (uint)bVar3;
      FUN_10018e20(*param_3,param_4,(int *)&param_1,&local_10,(int)local_8);
    }
    else {
      if (((*(ushort *)(PTR_DAT_10035dec + (uint)*param_3 * 2) & 0x8000) != 0) && (1 < local_10)) {
        *param_1 = *param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        local_10 = local_10 - 1;
      }
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      local_10 = local_10 - 1;
    }
  }
  if (local_c == 0) {
    InterlockedDecrement(&DAT_100391f4);
  }
  else {
    FUN_1000a9a0(0x13);
  }
  if (local_10 == 0) {
    iVar2 = 0;
  }
  else {
    *param_1 = 0;
    iVar2 = param_2 - local_10;
  }
  return iVar2;
}



// Function: FUN_10018e20 @ 0x10018e20

void __cdecl FUN_10018e20(undefined1 param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  int local_c;
  int local_8;
  
  switch(param_1) {
  case 0x25:
    *(undefined1 *)*param_3 = 0x25;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 - 1;
    break;
  case 0x41:
    FID_conflict__store_str(*(char **)(param_5 + 0x1c + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x42:
    FID_conflict__store_str(*(char **)(param_5 + 0x68 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 0x48:
    DAT_10037e88 = DAT_10037e78;
    FUN_10019490(param_2[2],2,param_3,param_4);
    break;
  case 0x49:
    DAT_10037e88 = DAT_10037e78;
    local_8 = param_2[2] % 0xc;
    if (local_8 == 0) {
      local_8 = 0xc;
    }
    FUN_10019490(local_8,2,param_3,param_4);
    break;
  case 0x4d:
    DAT_10037e88 = DAT_10037e78;
    FUN_10019490(param_2[1],2,param_3,param_4);
    break;
  case 0x53:
    DAT_10037e88 = DAT_10037e78;
    FUN_10019490(*param_2,2,param_3,param_4);
    break;
  case 0x55:
    local_c = param_2[6];
    goto LAB_100191cd;
  case 0x57:
    if (param_2[6] == 0) {
      local_c = 6;
    }
    else {
      local_c = param_2[6] + -1;
    }
LAB_100191cd:
    DAT_10037e88 = DAT_10037e78;
    if (param_2[7] < local_c) {
      local_8 = 0;
    }
    else {
      local_8 = param_2[7] / 7;
      if (local_c <= param_2[7] % 7) {
        local_8 = local_8 + 1;
      }
    }
    FUN_10019490(local_8,2,param_3,param_4);
    break;
  case 0x58:
    DAT_10037e78 = 0;
    FUN_100195f0(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
    break;
  case 0x59:
    DAT_10037e88 = DAT_10037e78;
    FUN_10019490((param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100,4,param_3,param_4);
    break;
  case 0x5a:
  case 0x7a:
    FUN_1000ac00();
    FID_conflict__store_str((&PTR_DAT_10035d44)[param_2[8] != 0],param_3,(int *)param_4);
    break;
  case 0x61:
    FID_conflict__store_str(*(char **)(param_5 + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x62:
    FID_conflict__store_str(*(char **)(param_5 + 0x38 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 99:
    if (DAT_10037e78 == 0) {
      FUN_100195f0(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_100195f0(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    else {
      DAT_10037e78 = 0;
      FUN_100195f0(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_100195f0(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    break;
  case 100:
    DAT_10037e88 = DAT_10037e78;
    FUN_10019490(param_2[3],2,param_3,param_4);
    break;
  case 0x6a:
    DAT_10037e88 = DAT_10037e78;
    FUN_10019490(param_2[7] + 1,3,param_3,param_4);
    break;
  case 0x6d:
    DAT_10037e88 = DAT_10037e78;
    FUN_10019490(param_2[4] + 1,2,param_3,param_4);
    break;
  case 0x70:
    if (param_2[2] < 0xc) {
      FID_conflict__store_str(*(char **)(param_5 + 0x98),param_3,(int *)param_4);
    }
    else {
      FID_conflict__store_str(*(char **)(param_5 + 0x9c),param_3,(int *)param_4);
    }
    break;
  case 0x77:
    DAT_10037e88 = DAT_10037e78;
    FUN_10019490(param_2[6],1,param_3,param_4);
    break;
  case 0x78:
    if (DAT_10037e78 == 0) {
      FUN_100195f0(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
    }
    else {
      DAT_10037e78 = 0;
      FUN_100195f0(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
    }
    break;
  case 0x79:
    DAT_10037e88 = DAT_10037e78;
    FUN_10019490(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}



// Function: FID_conflict:_store_str @ 0x10019440

/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_str(char *,char * *,unsigned int *)
    __store_str
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl FID_conflict__store_str(char *param_1,int *param_2,int *param_3)

{
  while ((*param_3 != 0 && (*param_1 != '\0'))) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    param_1 = param_1 + 1;
    *param_3 = *param_3 + -1;
  }
  return;
}



// Function: FUN_10019490 @ 0x10019490

void __cdecl FUN_10019490(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_10037e88 == 0) {
    if (param_2 < *param_4) {
      while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
        *(char *)(*param_3 + param_2) = (char)(param_1 % 10) + '0';
        param_1 = param_1 / 10;
        local_8 = local_8 + 1;
      }
      *param_3 = *param_3 + local_8;
      *param_4 = *param_4 - local_8;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    FID_conflict__store_number(param_1,param_3,param_4);
  }
  return;
}



// Function: FID_conflict:_store_number @ 0x10019540

/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_number(int,char * *,unsigned int *)
    __store_number
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __cdecl FID_conflict__store_number(int param_1,int *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  char *local_c;
  char *local_8;
  
  local_8 = (char *)*param_2;
  uVar2 = *param_3;
  while (1 < uVar2) {
    *local_8 = (char)(param_1 % 10) + '0';
    local_8 = local_8 + 1;
    *param_3 = *param_3 - 1;
    param_1 = param_1 / 10;
    if (param_1 < 1) break;
    uVar2 = *param_3;
  }
  local_c = (char *)*param_2;
  *param_2 = (int)local_8;
  local_8 = local_8 + -1;
  do {
    cVar1 = *local_8;
    *local_8 = *local_c;
    local_8 = local_8 + -1;
    *local_c = cVar1;
    local_c = local_c + 1;
  } while (local_c < local_8);
  return;
}



// Function: FUN_100195f0 @ 0x100195f0

void __cdecl FUN_100195f0(byte *param_1,int param_2,int *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  byte *local_14;
  uint local_10;
  char local_c;
  byte *local_8;
  
LAB_100195f6:
  do {
    if ((*param_1 == 0) || (*param_4 == 0)) {
      return;
    }
    local_c = '\0';
    DAT_10037e88 = 0;
    local_10 = 0;
    local_8 = param_1;
    while (*local_8 == *param_1) {
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
    }
    switch(*param_1) {
    case 0x27:
      if ((local_10 & 1) == 0) {
        param_1 = param_1 + local_10;
      }
      else {
        param_1 = param_1 + local_10;
        while( true ) {
          if ((*param_1 == 0) || (*param_4 == 0)) goto LAB_100195f6;
          if (*param_1 == 0x27) break;
          if (((*(ushort *)(PTR_DAT_10035dec + (uint)*param_1 * 2) & 0x8000) != 0) && (1 < *param_4)
             ) {
            *(byte *)*param_3 = *param_1;
            *param_3 = *param_3 + 1;
            param_1 = param_1 + 1;
            *param_4 = *param_4 - 1;
          }
          *(byte *)*param_3 = *param_1;
          *param_3 = *param_3 + 1;
          param_1 = param_1 + 1;
          *param_4 = *param_4 - 1;
        }
        param_1 = param_1 + 1;
      }
      goto LAB_100195f6;
    case 0x41:
    case 0x61:
      uVar1 = FUN_1001a020(param_1,(byte *)"am/pm");
      if (uVar1 == 0) {
        local_8 = param_1 + 5;
      }
      else {
        uVar1 = FUN_1001a020(param_1,&DAT_10033de4);
        if (uVar1 == 0) {
          local_8 = param_1 + 3;
        }
      }
      local_c = 'p';
      break;
    case 0x48:
      if (local_10 == 1) {
        DAT_10037e88 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'H';
      break;
    case 0x4d:
      switch(local_10) {
      case 1:
        DAT_10037e88 = 1;
      case 2:
        local_c = 'm';
        break;
      case 3:
        local_c = 'b';
        break;
      case 4:
        local_c = 'B';
      }
      break;
    case 100:
      switch(local_10) {
      case 1:
        DAT_10037e88 = 1;
      case 2:
        local_c = 'd';
        break;
      case 3:
        local_c = 'a';
        break;
      case 4:
        local_c = 'A';
      }
      break;
    case 0x68:
      if (local_10 == 1) {
        DAT_10037e88 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'I';
      break;
    case 0x6d:
      if (local_10 == 1) {
        DAT_10037e88 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'M';
      break;
    case 0x73:
      if (local_10 == 1) {
        DAT_10037e88 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'S';
      break;
    case 0x74:
      goto switchD_10019681_caseD_74;
    case 0x79:
      if (local_10 == 2) {
        local_c = 'y';
      }
      else if (local_10 == 4) {
        local_c = 'Y';
      }
    }
    if (local_c == '\0') {
      if ((*(ushort *)(PTR_DAT_10035dec + (uint)*param_1 * 2) & 0x8000) != 0) {
        *(byte *)*param_3 = *param_1;
        *param_3 = *param_3 + 1;
        param_1 = param_1 + 1;
        *param_4 = *param_4 - 1;
      }
      *(byte *)*param_3 = *param_1;
      *param_3 = *param_3 + 1;
      param_1 = param_1 + 1;
      *param_4 = *param_4 - 1;
    }
    else {
      FUN_10018e20(local_c,(int *)param_2,param_3,param_4,param_5);
      param_1 = local_8;
    }
  } while( true );
switchD_10019681_caseD_74:
  if (*(int *)(param_2 + 8) < 0xc) {
    local_14 = *(byte **)(param_5 + 0x98);
  }
  else {
    local_14 = *(byte **)(param_5 + 0x9c);
  }
  while ((param_1 = local_8, 0 < (int)local_10 && (*param_4 != 0))) {
    if (((*(ushort *)(PTR_DAT_10035dec + (uint)*local_14 * 2) & 0x8000) != 0) && (1 < *param_4)) {
      *(byte *)*param_3 = *local_14;
      *param_3 = *param_3 + 1;
      local_14 = local_14 + 1;
      *param_4 = *param_4 - 1;
    }
    *(byte *)*param_3 = *local_14;
    *param_3 = *param_3 + 1;
    local_14 = local_14 + 1;
    *param_4 = *param_4 - 1;
    local_10 = local_10 - 1;
  }
  goto LAB_100195f6;
}



// Function: FUN_10019b10 @ 0x10019b10

undefined4 __cdecl FUN_10019b10(int param_1,LCID param_2,LCTYPE param_3,int *param_4)

{
  byte bVar1;
  DWORD DVar2;
  void *pvVar3;
  int iVar4;
  uint local_ac;
  int local_a4;
  CHAR local_90 [128];
  LPSTR local_10;
  void *local_c;
  int local_8;
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_1001a520(param_2,param_3,(LPWSTR)&DAT_10037e60,4,0);
    if (iVar4 != 0) {
      *(undefined1 *)param_4 = 0;
      local_a4 = 0;
      while( true ) {
        if (3 < local_a4) {
          return 0;
        }
        if (DAT_10035de0 < 2) {
          bVar1 = (&DAT_10037e60)[local_a4 * 2];
          local_ac = *(ushort *)(PTR_DAT_10035dec + (uint)bVar1 * 2) & 4;
        }
        else {
          bVar1 = (&DAT_10037e60)[local_a4 * 2];
          local_ac = FUN_1000c7c0((uint)bVar1,4);
        }
        if (local_ac == 0) break;
        *(byte *)param_4 = (char)*param_4 * '\n' + -0x30 + bVar1;
        local_a4 = local_a4 + 1;
      }
      return 0;
    }
    return 0xffffffff;
  }
  local_10 = local_90;
  local_8 = 0;
  local_c = (void *)FUN_1001a6c0(param_2,param_3,local_10,0x80,0);
  if (local_c == (void *)0x0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) ||
        (pvVar3 = (void *)FUN_1001a6c0(param_2,param_3,(LPSTR)0x0,0,0), pvVar3 == (void *)0x0)) ||
       (local_10 = (LPSTR)FUN_10007ce0(pvVar3,2,0x10033df0,0x58), local_10 == (LPSTR)0x0))
    goto LAB_10019c5d;
    local_8 = 1;
    local_c = (void *)FUN_1001a6c0(param_2,param_3,local_10,(int)pvVar3,0);
    if (local_c == (void *)0x0) goto LAB_10019c5d;
  }
  iVar4 = FUN_10007ce0(local_c,2,0x10033df0,99);
  *param_4 = iVar4;
  if (*param_4 != 0) {
    _strncpy((char *)*param_4,local_10,(size_t)local_c);
    if (local_8 != 0) {
      FUN_10008770(local_10,2);
    }
    return 0;
  }
LAB_10019c5d:
  if (local_8 != 0) {
    FUN_10008770(local_10,2);
  }
  return 0xffffffff;
}



// Function: FUN_10019da0 @ 0x10019da0

undefined * FUN_10019da0(void)

{
  return PTR_PTR_10036ef8;
}



// Function: FUN_10019db0 @ 0x10019db0

BOOL __cdecl
FUN_10019db0(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  undefined1 *puVar1;
  BOOL BVar2;
  size_t _Size;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10033e00;
  puStack_10 = &LAB_10014b98;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffbc;
  if (DAT_10037e6c == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10037e6c = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10037e6c = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_10037e6c == 1) {
    BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10037e6c == 2) {
    if (param_5 == 0) {
      param_5 = DAT_10037dd8;
    }
    _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (_Size == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_1000bba0();
      local_1c = &stack0xffffffbc;
      _memset(&stack0xffffffbc,0,_Size);
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x44) {
        BVar2 = 0;
      }
      else {
        iVar3 = WideCharToMultiByte(param_5,0x220,param_2,param_3,&stack0xffffffbc,_Size,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
        if (iVar3 == 0) {
          BVar2 = 0;
        }
        else {
          local_8 = 1;
          FUN_1000bba0();
          local_8 = 0xffffffff;
          if (&stack0x00000000 == (undefined1 *)0x44) {
            BVar2 = 0;
          }
          else {
            if (param_6 == 0) {
              param_6 = DAT_10037dc8;
            }
            *(undefined2 *)(&stack0xffffffbc + param_3 * 2) = 0xffff;
            *(undefined2 *)(&stack0xffffffba + param_3 * 2) = 0xffff;
            local_1c = &stack0xffffffbc;
            BVar2 = GetStringTypeA(param_6,param_1,&stack0xffffffbc,_Size,(LPWORD)&stack0xffffffbc);
            if ((*(short *)(&stack0xffffffba + param_3 * 2) == -1) ||
               (*(short *)(&stack0xffffffbc + param_3 * 2) != -1)) {
              BVar2 = 0;
            }
            else {
              FUN_1000d590((undefined4 *)param_4,(undefined4 *)&stack0xffffffbc,param_3 << 1);
            }
          }
        }
      }
    }
  }
  else {
    BVar2 = 0;
  }
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_1001a020 @ 0x1001a020

uint __cdecl FUN_1001a020(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = DAT_100391f4;
  if (DAT_10037dc8 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1001a06e;
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
LAB_1001a06e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    DAT_100391f4 = DAT_100391f4 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_100391e4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      DAT_100391f4 = iVar2;
      FUN_1000a900(0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1001a0cf;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1000c930(uVar8);
      uVar7 = FUN_1000c930(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1001a0cf:
    if (uVar9 == 0) {
      LOCK();
      DAT_100391f4 = DAT_100391f4 + -1;
      UNLOCK();
    }
    else {
      FUN_1000a9a0(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_1001a0f0 @ 0x1001a0f0

undefined4 __cdecl FUN_1001a0f0(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = DAT_100391f4;
  uVar6 = 0;
  if (param_3 != 0) {
    if (DAT_10037dc8 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1001a14f;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1001a14f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      DAT_100391f4 = DAT_100391f4 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_100391e4;
      if (bVar8) {
        LOCK();
        UNLOCK();
        DAT_100391f4 = iVar2;
        FUN_1000a900(0x13);
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
        uVar7 = FUN_1000c930(uVar7);
        uVar5 = FUN_1000c930(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1001a1c5;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1001a1c5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        DAT_100391f4 = DAT_100391f4 + -1;
        UNLOCK();
      }
      else {
        FUN_1000a9a0(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_1001a200 @ 0x1001a200

byte * __cdecl FUN_1001a200(byte *param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (DAT_1003927c == 0) {
    param_1 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_1000a900(0x19);
    while( true ) {
      uVar1 = (ushort)*param_1;
      if (uVar1 == 0) break;
      if (((&DAT_10039381)[uVar1] & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar1) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (*pbVar2 == 0) {
          FUN_1000a9a0(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(*param_1,*pbVar2)) {
          FUN_1000a9a0(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2;
      param_1 = param_1 + 1;
    }
    FUN_1000a9a0(0x19);
    if (param_2 != uVar1) {
      param_1 = (byte *)0x0;
    }
  }
  return param_1;
}



// Function: FUN_1001a2f0 @ 0x1001a2f0

undefined4 __cdecl FUN_1001a2f0(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10006850(2,0x10033e18,0x3a,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uint)param_1[3] & 0x40) == 0) {
    FUN_100148a0(param_1);
    local_8 = FUN_1001a380((int *)param_1);
    FUN_10014910(param_1);
  }
  else {
    param_1[3] = (undefined *)0x0;
  }
  return local_8;
}



// Function: FUN_1001a380 @ 0x1001a380

undefined4 __cdecl FUN_1001a380(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_10006850(2,0x10033e18,0x77,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_1[3] & 0x83U) != 0) {
    local_8 = FUN_10018490(param_1);
    FUN_1001aa70(param_1);
    iVar2 = FUN_1001a940(param_1[4]);
    if (iVar2 < 0) {
      local_8 = 0xffffffff;
    }
    else if (param_1[7] != 0) {
      FUN_10008770((void *)param_1[7],2);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return local_8;
}



// Function: FUN_1001a440 @ 0x1001a440

DWORD __cdecl FUN_1001a440(uint param_1)

{
  undefined4 *puVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD local_8;
  
  if ((DAT_1003961c <= param_1) ||
     ((*(byte *)((&DAT_100394e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_10011d70();
    *puVar1 = 9;
    return 0xffffffff;
  }
  FUN_10018250(param_1);
  if ((*(byte *)((&DAT_100394e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0) {
    hFile = (HANDLE)FUN_100180d0(param_1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) goto LAB_1001a4ff;
    pDVar3 = FUN_10011d80();
    *pDVar3 = local_8;
  }
  puVar1 = (undefined4 *)FUN_10011d70();
  *puVar1 = 9;
  local_8 = 0xffffffff;
LAB_1001a4ff:
  __unlock_fhandle(param_1);
  return local_8;
}



// Function: FUN_1001a520 @ 0x1001a520

int __cdecl FUN_1001a520(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10033e38;
  puStack_10 = &LAB_10014b98;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10037e70 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10037e70 = 2;
    }
    else {
      DAT_10037e70 = 1;
    }
  }
  if (DAT_10037e70 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10037e70 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_10037dd8;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_1000bba0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x38) {
        iVar1 = 0;
      }
      else {
        iVar1 = GetLocaleInfoA(param_1,param_2,&stack0xffffffc8,iVar1);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else if (param_4 == 0) {
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffc8,-1,(LPWSTR)0x0,0);
        }
        else {
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffc8,-1,param_3,param_4);
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}



// Function: FUN_1001a6c0 @ 0x1001a6c0

int __cdecl FUN_1001a6c0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10033e48;
  puStack_10 = &LAB_10014b98;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10037e74 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10037e74 = 2;
    }
    else {
      DAT_10037e74 = 1;
    }
  }
  if (DAT_10037e74 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10037e74 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_10037dd8;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_1000bba0();
      local_8 = 0xffffffff;
      if (&stack0x00000000 == (undefined1 *)0x38) {
        iVar1 = 0;
      }
      else {
        iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)&stack0xffffffc8,iVar1);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else if (param_4 == 0) {
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffc8,-1,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        }
        else {
          iVar1 = WideCharToMultiByte(param_5,0x220,(LPCWSTR)&stack0xffffffc8,-1,param_3,param_4,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}



// Function: _strchr @ 0x1001a880

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



// Function: FUN_1001a940 @ 0x1001a940

undefined4 __cdecl FUN_1001a940(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  
  if ((param_1 < DAT_1003961c) &&
     ((*(byte *)((&DAT_100394e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10018250(param_1);
    uVar3 = __close_lk(param_1);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_10011d70();
    *puVar1 = 9;
    pDVar2 = FUN_10011d80();
    *pDVar2 = 0;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// Function: __close_lk @ 0x1001a9c0

/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  ulong local_8;
  
  iVar1 = FUN_100180d0(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100180d0(1);
      iVar2 = FUN_100180d0(2);
      if (iVar1 == iVar2) goto LAB_1001aa13;
    }
    hObject = (HANDLE)FUN_100180d0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_1001aa25;
    }
  }
LAB_1001aa13:
  local_8 = 0;
LAB_1001aa25:
  FUN_10017ff0(param_1);
  *(undefined1 *)((&DAT_100394e0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// Function: FUN_1001aa70 @ 0x1001aa70

void __cdecl FUN_1001aa70(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_10006850(2,0x10033e54,0x30,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_10008770((void *)param_1[2],2);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}




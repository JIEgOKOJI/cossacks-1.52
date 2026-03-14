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
  RegisterDynGroup(&DAT_1000ac70);
  RegisterVar(&DAT_1000ac70,8);
  RegisterDynGroup(&DAT_1000ac20);
  RegisterVar(&DAT_1000ac20,8);
  RegisterVar(&DAT_10008030,8);
  RegisterZone(&DAT_1000ac90,s_ZStart_1000819c);
  RegisterUnits(&DAT_1000ac10,s_GForCreate_10008190);
  RegisterDynGroup(&DAT_1000ac78);
  RegisterVar(&DAT_1000ac78,8);
  RegisterFormation(&DAT_1000ac18,s__LINE10PUS_10008184);
  RegisterUnitType(&DAT_1000ac60,s_Kreposnoi_RU__10008174);
  RegisterUnitType(&DAT_1000ac68,s_Krestian_Turki_TU__10008160);
  RegisterUnitType(&DAT_1000ac28,s_Kreposnoi_pruss_DA__1000814c);
  RegisterUnitType(&DAT_1000ac58,s_Kreposnoi_pruss_GE__10008138);
  RegisterVar(&DAT_1000acc0,0x30);
  RegisterUnitType(&DAT_1000acc0,s_shahta_au__1000812c);
  RegisterUnitType(&DAT_1000acc8,s_shahta_FE_au__1000811c);
  RegisterUnitType(&DAT_1000acd0,s_shahta_UG_au__1000810c);
  RegisterUnitType(&DAT_1000acd8,s_shahta_PL__10008100);
  RegisterUnitType(&DAT_1000ace0,s_shahta_FE_PL__100080f0);
  RegisterUnitType(&DAT_1000ace8,s_shahta_UG_PL__100080e0);
  RegisterUnits(&DAT_1000ac80,s_GComCent_100080d4);
  RegisterZone(&DAT_1000ac88,s_ZComCent_100080c8);
  RegisterZone(&DAT_1000ac98,s_ZCreate1_100080bc);
  RegisterZone(&DAT_1000aca0,s_ZCreate2_100080b0);
  RegisterZone(&DAT_1000aca8,s_ZCreate3_100080a4);
  RegisterZone(&DAT_1000acb0,s_ZCreate4_10008098);
  RegisterZone(&DAT_1000acb8,s_ZCreate5_1000808c);
  RegisterFormation(&DAT_1000ac48,s__LINE10PUS_10008184);
  RegisterFormation(&DAT_1000ac40,s__LINE15PUS_10008080);
  RegisterFormation(&DAT_1000ac38,s__LINE20PUS_10008074);
  RegisterFormation(&DAT_1000ac30,s__LINE25PUS_10008068);
  RegisterUnitType(&DAT_1000ac50,s_Mushketer_DA_DA__10008054);
  SetPlayerName(1,s_DENMARK_1000804c);
  SetPlayerName(2,s_POALND_10008044);
  SetPlayerName(3,s_AUSTRIAN_10008038);
  return;
}



// Function: ProcessScenary @ 0x100011f0

void ProcessScenary(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD DVar5;
  int iVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  
                    /* 0x11f0  2  ProcessScenary */
  cVar1 = Trigg(2);
  if (cVar1 == '\0') goto LAB_1000139c;
  SetTrigg(2,0);
  iVar6 = 0;
  do {
    iVar3 = GetDiff(0);
    SetResource(0,iVar6,(10 - iVar3) * 500);
    SetResource(2,iVar6,5000);
    SetResource(3,iVar6,5000);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  uVar4 = AskMultilineQuestion(9,s__PAGE2001_100081ec,0,s_M20_01_M20_02_M20_03_M20_04_100081f8);
  switch(uVar4) {
  case 0:
    puVar9 = &DAT_1000ac60;
    break;
  case 1:
    puVar9 = &DAT_1000ac68;
    break;
  case 2:
    puVar9 = &DAT_1000ac28;
    break;
  case 3:
    puVar9 = &DAT_1000ac58;
    break;
  default:
    goto switchD_1000128a_default;
  }
  CreateObject0(&DAT_1000ac78,&DAT_1000ac18,puVar9,0,&DAT_1000ac90,0xc0);
switchD_1000128a_default:
  SelectUnits(&DAT_1000ac10,0);
  SelErase(4);
  ClearSelection(4);
  ChangeFriends(0,3);
  ChangeFriends(2,0xc);
  uVar4 = GetDiff(0);
  StartAI(2,s_POLAND_0_100081e0,0,1,1,uVar4);
  uVar4 = GetDiff(0);
  StartAI(3,s_AUSTRIA_0_100081d4,0,1,1,uVar4);
  iVar6 = GetDiff(0);
  RunTimer(1,(iVar6 + 10) * 1000);
  EnableMission(0x41);
  EnableMission(0x42);
  EnableMission(0x43);
  EnableMission(0x44);
  DisableMission(0x45);
  DisableMission(0x46);
  DisableMission(0x47);
  EnableMission(0x48);
  EnableMission(0x4c);
  DisableMission(0x4d);
  DisableMission(0x4e);
LAB_1000139c:
  cVar1 = Trigg(4);
  pcVar7 = SetTrigg_exref;
  if (((cVar1 != '\0') &&
      (iVar6 = GetUnitsAmount0(&DAT_1000ac88,0), pcVar7 = SetTrigg_exref, iVar6 != 0)) &&
     (iVar6 = GetTotalAmount0(&DAT_1000ac80), pcVar7 = SetTrigg_exref, iVar6 != 0)) {
    SetTrigg(4,0);
    ShowPage(s__PAGE2002_100081c8);
    SetLightSpot(&DAT_1000ac88,1,4);
    DisableMission(0x44);
    EnableMission(0x45);
    EnableMission(0x46);
    EnableMission(0x4d);
  }
  cVar1 = TimerDone(1);
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), cVar1 == '\0')) &&
     ((iVar6 = GetTotalAmount0(&DAT_1000ac70), iVar6 == 0 &&
      (iVar6 = GetTotalAmount0(&DAT_1000ac80), iVar6 != 0)))) {
    iVar6 = GetDiff(0);
    RunTimer(1,(iVar6 + 10) * 500);
    DVar5 = FUN_1000194f((int *)0x0);
    FUN_10001920(DVar5);
    uVar4 = 0x40;
    iVar6 = _rand();
    iVar6 = GetDiff(0,&DAT_1000ac50,1,&DAT_1000ac98 + (iVar6 % 5) * 8,uVar4);
    CreateObject0(&DAT_1000ac70,&DAT_1000ac30 + iVar6 * 8);
  }
  bVar2 = FUN_10001850(&DAT_1000ac70);
  if ((bVar2) && (iVar6 = GetTotalAmount0(&DAT_1000ac80), iVar6 != 0)) {
    FUN_10001790(&DAT_1000ac20,0x1000acc0,6,&DAT_1000ac70,1);
    (*pcVar7)(3,1);
  }
  else {
    cVar1 = Trigg(3);
    if (cVar1 != '\0') {
      FUN_100018c0(&DAT_1000ac70,&DAT_1000ac20);
      (*pcVar7)(3,0);
    }
  }
  FUN_10001800(&DAT_1000ac70);
  iVar6 = GetTotalAmount0(&DAT_1000ac80);
  pcVar8 = ShowPage_exref;
  if ((iVar6 == 0) && (cVar1 = Trigg(5), pcVar8 = ShowPage_exref, cVar1 != '\0')) {
    (*pcVar7)(5,0);
    pcVar8 = ShowPage_exref;
    ShowPage(s__PAGE2003_100081bc);
    DisableMission(0x44);
    DisableMission(0x46);
    DisableMission(0x4d);
    EnableMission(0x45);
    EnableMission(0x47);
    EnableMission(0x4e);
  }
  cVar1 = NationIsErased(2);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    (*pcVar8)(s__PAGE2004_100081b0);
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    (*pcVar8)(s__PAGE2005_100081a4);
    LooseGame();
  }
  return;
}



// Function: FUN_100015f0 @ 0x100015f0

bool __cdecl FUN_100015f0(undefined4 param_1)

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



// Function: FUN_10001630 @ 0x10001630

undefined4 __cdecl FUN_10001630(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

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
  local_38 = 0;
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
      FUN_100015f0(param_1);
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
          if ((local_38 == 0) || (iVar4 = GetTopDst(param_4,&uStack_34), iVar4 < local_38)) {
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
  FUN_100015f0(param_1);
  uVar2 = extraout_var;
  if (local_3d != '\0') {
    uVar1 = InsertUnitToGroup(0,param_1,uVar3);
    uVar2 = (undefined3)((uint)uVar1 >> 8);
  }
  return CONCAT31(uVar2,local_3d);
}



// Function: FUN_10001790 @ 0x10001790

undefined4 __cdecl
FUN_10001790(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    UnitsCenter(auStack_8,param_4,100);
    uVar2 = FUN_10001630(param_1,param_2,param_3,auStack_8);
    if ((char)uVar2 != '\0') {
      SelectUnits(param_4,0);
      uVar3 = SelAttackGroup(param_5,param_1);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}



// Function: FUN_10001800 @ 0x10001800

undefined4 __cdecl FUN_10001800(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    UnitsCenter(auStack_8,param_1,100);
    uVar2 = SetLightSpot(auStack_8,1,1);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  uVar3 = ClearLightSpot(1);
  return uVar3 & 0xffffff00;
}



// Function: FUN_10001850 @ 0x10001850

bool __cdecl FUN_10001850(undefined4 param_1)

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



// Function: FUN_100018c0 @ 0x100018c0

void __cdecl FUN_100018c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_8 [8];
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    iVar1 = GetTotalAmount0(param_2);
    if (iVar1 != 0) {
      UnitsCenter(auStack_8,param_2,500);
      SelectUnits(param_1,0);
      SelSendAndKill(1,auStack_8,0,0);
    }
  }
  return;
}



// Function: FUN_10001920 @ 0x10001920

void __cdecl FUN_10001920(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10001c59();
  pDVar1[5] = param_1;
  return;
}



// Function: _rand @ 0x1000192d

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_10001c59();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



// Function: FUN_1000194f @ 0x1000194f

void __cdecl FUN_1000194f(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_1000ad08._2_2_) {
    if (local_24.wHour == (WORD)DAT_1000ad08) {
      if (local_24.wDay == DAT_1000ad04._2_2_) {
        if (local_24.wMonth == DAT_1000ad00._2_2_) {
          if (local_24.wYear == (WORD)DAT_1000ad00) goto LAB_100019f9;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_1000acf8 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_1000acf8 = 1;
  }
  else {
    DAT_1000acf8 = 0;
  }
  DAT_1000ad00._0_2_ = local_24.wYear;
  DAT_1000ad00._2_2_ = local_24.wMonth;
  DAT_1000ad04._0_2_ = local_24.wDayOfWeek;
  DAT_1000ad04._2_2_ = local_24.wDay;
  DAT_1000ad08._0_2_ = local_24.wHour;
  DAT_1000ad08._2_2_ = local_24.wMinute;
  DAT_1000ad0c._0_2_ = local_24.wSecond;
  DAT_1000ad0c._2_2_ = local_24.wMilliseconds;
LAB_100019f9:
  iVar2 = FUN_10001d60((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_1000acf8);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}



// Function: FUN_10001a2b @ 0x10001a2b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001a2b(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000ad28 = GetVersion();
    iVar1 = FUN_100026fd(1);
    if (iVar1 != 0) {
      _DAT_1000ad34 = DAT_1000ad28 >> 8 & 0xff;
      _DAT_1000ad30 = DAT_1000ad28 & 0xff;
      DAT_1000ad28 = DAT_1000ad28 >> 0x10;
      _DAT_1000ad2c = _DAT_1000ad30 * 0x100 + _DAT_1000ad34;
      iVar1 = FUN_10001bd4();
      if (iVar1 != 0) {
        DAT_1000b3d8 = GetCommandLineA();
        DAT_1000ad14 = FUN_10002456();
        FUN_10001f40();
        FUN_10002209();
        FUN_10002150();
        FUN_10001e22();
        DAT_1000ad10 = DAT_1000ad10 + 1;
        goto LAB_10001afe;
      }
      FUN_1000275a();
    }
LAB_10001a8b:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000ad10 < 1) goto LAB_10001a8b;
      DAT_1000ad10 = DAT_1000ad10 + -1;
      if (DAT_1000ad60 == 0) {
        FUN_10001e60();
      }
      FUN_100020fc();
      FUN_10001c28();
      FUN_1000275a();
    }
    else if (param_2 == 3) {
      FUN_10001cc0((undefined *)0x0);
    }
LAB_10001afe:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10001b04

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000ad10;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10001b4c;
    if ((DAT_1000b3dc != (code *)0x0) &&
       (iVar2 = (*DAT_1000b3dc)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10001a2b(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10001b4c:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10001a2b(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10001a2b(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000b3dc != (code *)0x0) {
      iVar2 = (*DAT_1000b3dc)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10001ba1

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000ad1c == 1) || ((DAT_1000ad1c == 0 && (DAT_1000ad20 == 1)))) {
    FUN_10002802();
  }
  FUN_1000283b(param_1);
  (*(code *)PTR___exit_10008214)(0xff);
  return;
}



// Function: FUN_10001bd4 @ 0x10001bd4

undefined4 FUN_10001bd4(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10002acb();
  DAT_10008218 = TlsAlloc();
  if (DAT_10008218 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000298e(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10008218,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10001c46((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10001c28 @ 0x10001c28

void FUN_10001c28(void)

{
  FUN_10002af4();
  if (DAT_10008218 != 0xffffffff) {
    TlsFree(DAT_10008218);
    DAT_10008218 = 0xffffffff;
  }
  return;
}



// Function: FUN_10001c46 @ 0x10001c46

void __cdecl FUN_10001c46(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10008398;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10001c59 @ 0x10001c59

DWORD * FUN_10001c59(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10008218);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000298e(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10008218,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10001c46((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10001cb4;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10001cb4:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_10001cc0 @ 0x10001cc0

void __cdecl FUN_10001cc0(undefined *param_1)

{
  if (DAT_10008218 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10008218), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10002bd6(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10002bd6(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10002bd6(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10002bd6(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10002bd6(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10002bd6(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10008398) {
        FUN_10002bd6(*(undefined **)(param_1 + 0x50));
      }
      FUN_10002bd6(param_1);
    }
    TlsSetValue(DAT_10008218,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10001d60 @ 0x10001d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_10001d60(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

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
    iVar4 = *(int *)(&DAT_10008504 + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_10002cbf();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5)
            * 0x3c + DAT_10008420 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_10008424 != 0)) &&
        (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_10002f74(local_28),
        CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + _DAT_10008428;
    }
  }
  return iVar2;
}



// Function: FUN_10001e22 @ 0x10001e22

void FUN_10001e22(void)

{
  if (DAT_1000b3d4 != (code *)0x0) {
    (*DAT_1000b3d4)();
  }
  FUN_10001f26((undefined4 *)&DAT_10008008,(undefined4 *)&DAT_10008010);
  FUN_10001f26((undefined4 *)&DAT_10008000,(undefined4 *)&DAT_10008004);
  return;
}



// Function: __exit @ 0x10001e4f

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10001e6f(_Code,1,0);
  return;
}



// Function: FUN_10001e60 @ 0x10001e60

void FUN_10001e60(void)

{
  FUN_10001e6f(0,0,1);
  return;
}



// Function: FUN_10001e6f @ 0x10001e6f

void __cdecl FUN_10001e6f(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10001f14();
  if (DAT_1000ad64 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000ad60 = 1;
  DAT_1000ad5c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000b3d0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000b3cc - 4), DAT_1000b3d0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000b3d0 <= puVar1);
    }
    FUN_10001f26((undefined4 *)&DAT_10008014,(undefined4 *)&DAT_10008018);
  }
  FUN_10001f26((undefined4 *)&DAT_1000801c,(undefined4 *)&DAT_10008020);
  if (param_3 == 0) {
    DAT_1000ad64 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10001f1d();
  return;
}



// Function: FUN_10001f14 @ 0x10001f14

void FUN_10001f14(void)

{
  FUN_10002b60(0xd);
  return;
}



// Function: FUN_10001f1d @ 0x10001f1d

void FUN_10001f1d(void)

{
  FUN_10002bc1(0xd);
  return;
}



// Function: FUN_10001f26 @ 0x10001f26

void __cdecl FUN_10001f26(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10001f40 @ 0x10001f40

void FUN_10001f40(void)

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
  DAT_1000b3c0 = 0x20;
  DAT_1000b2c0 = puVar2;
  for (; puVar2 < DAT_1000b2c0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000b3c0 < (int)UVar8) {
      puVar2 = &DAT_1000b2c4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000b3c0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000b3c0 = DAT_1000b3c0 + 0x20;
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
      } while ((int)DAT_1000b3c0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000b2c0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000b2c0 + iVar6 * 9;
    if (DAT_1000b2c0[iVar6 * 9] == -1) {
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
          goto LAB_100020e5;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_100020e5:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000b3c0);
      return;
    }
  } while( true );
}



// Function: FUN_100020fc @ 0x100020fc

void FUN_100020fc(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000b2c0;
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
      FUN_10002bd6((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000b3c0);
  return;
}



// Function: FUN_10002150 @ 0x10002150

void FUN_10002150(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000b3c8 == 0) {
    FUN_10003903();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000ad14; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_1000ad44 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000ad14;
  puVar6 = DAT_1000ad14;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_100033c0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10002bd6((undefined *)DAT_1000ad14);
  DAT_1000ad14 = (uint *)0x0;
  *puVar3 = 0;
  DAT_1000b3c4 = 1;
  return;
}



// Function: FUN_10002209 @ 0x10002209

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002209(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000b3c8 == 0) {
    FUN_10003903();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000ad68,0x104);
  _DAT_1000ad54 = &DAT_1000ad68;
  pbVar2 = &DAT_1000ad68;
  if (*DAT_1000b3d8 != 0) {
    pbVar2 = DAT_1000b3d8;
  }
  FUN_100022a2(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100022a2(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000ad3c = puVar1;
  _DAT_1000ad38 = local_8 + -1;
  return;
}



// Function: FUN_100022a2 @ 0x100022a2

void __cdecl FUN_100022a2(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000b1a0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000b1a0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_1000234d;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_1000234d:
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
          if ((*(byte *)((int)&DAT_1000b1a0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000b1a0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10002456 @ 0x10002456

LPSTR FUN_10002456(void)

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
  if (DAT_1000ae6c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000ae6c = 1;
LAB_100024ad:
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
        FUN_10002bd6(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000ae6c = 2;
  }
  else {
    if (DAT_1000ae6c == 1) goto LAB_100024ad;
    if (DAT_1000ae6c != 2) {
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
    FUN_10003920((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10002588 @ 0x10002588

void __cdecl FUN_10002588(undefined4 *param_1)

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



// Function: FUN_100025b5 @ 0x100025b5

int FUN_100025b5(void)

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
  
  FUN_10004010();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = '\x0f';
    aCStackY_18[1] = '&';
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
      aCStackY_18[0] = 'M';
      aCStackY_18[1] = '&';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = 'o';
        aCStackY_18[1] = '&';
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
        aCStackY_18[0] = -0x2b;
        aCStackY_18[1] = '&';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10003c55(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10002588((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_100026fd @ 0x100026fd

undefined4 __cdecl FUN_100026fd(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1000b2a8 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000b2a8 != (HANDLE)0x0) {
    DAT_1000b2ac = FUN_100025b5();
    if (DAT_1000b2ac == 3) {
      ppuVar1 = (undefined **)FUN_1000403f(0x3f8);
    }
    else {
      if (DAT_1000b2ac != 2) {
        return 1;
      }
      ppuVar1 = FUN_10004b86();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1000b2a8);
  }
  return 0;
}



// Function: FUN_1000275a @ 0x1000275a

void FUN_1000275a(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1000b2ac == 3) {
    iVar1 = 0;
    if (0 < DAT_1000b07c) {
      puVar2 = (undefined4 *)((int)DAT_1000b080 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1000b2a8,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1000b07c);
    }
    HeapFree(DAT_1000b2a8,0,DAT_1000b080);
  }
  else if (DAT_1000b2ac == 2) {
    ppuVar3 = &PTR_LOOP_10008640;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10008640);
  }
  HeapDestroy(DAT_1000b2a8);
  return;
}



// Function: FUN_10002802 @ 0x10002802

void FUN_10002802(void)

{
  if ((DAT_1000ad1c == 1) || ((DAT_1000ad1c == 0 && (DAT_1000ad20 == 1)))) {
    FUN_1000283b(0xfc);
    if (DAT_1000ae70 != (code *)0x0) {
      (*DAT_1000ae70)();
    }
    FUN_1000283b(0xff);
  }
  return;
}



// Function: FUN_1000283b @ 0x1000283b

void __cdecl FUN_1000283b(DWORD param_1)

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
  pDVar2 = &DAT_10008248;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x100082d8);
  if (param_1 == (&DAT_10008248)[iVar5 * 2]) {
    if ((DAT_1000ad1c == 1) || ((DAT_1000ad1c == 0 && (DAT_1000ad20 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000824c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_100033c0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_100033c0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100033d0(local_a4,_Dest);
      FUN_100033d0(local_a4,(uint *)&DAT_1000746c);
      FUN_100033d0(local_a4,*(uint **)(iVar5 * 8 + 0x1000824c));
      auStackY_1e3._3_4_ = 0x1000295f;
      FUN_10005253(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_1000298e @ 0x1000298e

int * __cdecl FUN_1000298e(int param_1,int param_2)

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
  puStack_c = &DAT_100074a8;
  puStack_10 = &LAB_10005550;
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
      if (DAT_1000b2ac == 3) {
        if (puVar2 <= DAT_1000b084) {
          FUN_10002b60(9);
          local_8 = 0;
          local_24 = FUN_100043db(puVar2);
          local_8 = 0xffffffff;
          FUN_10002a27();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10002a7b;
LAB_10002a6a:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10002a76:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1000b2ac != 2) || (DAT_1000a664 < puVar3)) goto LAB_10002a76;
        FUN_10002b60(9);
        local_8 = 1;
        local_24 = FUN_10004e7e((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10002ab0();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10002a6a;
      }
LAB_10002a7b:
      local_24 = HeapAlloc(DAT_1000b2a8,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1000afac == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_100053de(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_10002a27 @ 0x10002a27

void FUN_10002a27(void)

{
  FUN_10002bc1(9);
  return;
}



// Function: FUN_10002ab0 @ 0x10002ab0

void FUN_10002ab0(void)

{
  FUN_10002bc1(9);
  return;
}



// Function: FUN_10002acb @ 0x10002acb

void FUN_10002acb(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000831c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000830c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100082fc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100082dc);
  return;
}



// Function: FUN_10002af4 @ 0x10002af4

void FUN_10002af4(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100082d8;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000831c)) && (ppuVar1 != &PTR_DAT_1000830c)) &&
       ((ppuVar1 != &PTR_DAT_100082fc && (ppuVar1 != &PTR_DAT_100082dc)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10002bd6(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10008398);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100082fc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000830c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000831c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100082dc);
  return;
}



// Function: FUN_10002b60 @ 0x10002b60

void __cdecl FUN_10002b60(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100082d8 + param_1;
  if ((&DAT_100082d8)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10002b60(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10002bd6((undefined *)lpCriticalSection);
    }
    FUN_10002bc1(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10002bc1 @ 0x10002bc1

void __cdecl FUN_10002bc1(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100082d8)[param_1]);
  return;
}



// Function: FUN_10002bd6 @ 0x10002bd6

void __cdecl FUN_10002bd6(undefined *param_1)

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
  puStack_c = &DAT_100074c0;
  puStack_10 = &LAB_10005550;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1000b2ac == 3) {
    ExceptionList = &local_14;
    FUN_10002b60(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10004087((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100040b2(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10002c40();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000b2ac != 2) goto LAB_10002ca2;
    ExceptionList = &local_14;
    FUN_10002b60(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10004de2(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10004e39(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10002c98();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10002ca2:
  HeapFree(DAT_1000b2a8,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10002c40 @ 0x10002c40

void FUN_10002c40(void)

{
  FUN_10002bc1(9);
  return;
}



// Function: FUN_10002c98 @ 0x10002c98

void FUN_10002c98(void)

{
  FUN_10002bc1(9);
  return;
}



// Function: FUN_10002cbf @ 0x10002cbf

void FUN_10002cbf(void)

{
  if (DAT_1000af90 == 0) {
    FUN_10002b60(0xb);
    if (DAT_1000af90 == 0) {
      FUN_10002ced();
      DAT_1000af90 = DAT_1000af90 + 1;
    }
    FUN_10002bc1(0xb);
  }
  return;
}



// Function: FUN_10002ced @ 0x10002ced

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002ced(void)

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
  
  FUN_10002b60(0xc);
  DAT_100084c8 = 0xffffffff;
  DAT_100084b8 = 0xffffffff;
  DAT_1000aed8 = 0;
  _Str1 = (uint *)FUN_10005744("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10002bc1(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1000aee0);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_10008420 = (void *)(DAT_1000aee0 * 0x3c);
    DAT_1000aed8 = 1;
    if (DAT_1000af26 != 0) {
      DAT_10008420 = (void *)((int)DAT_10008420 + DAT_1000af34 * 0x3c);
    }
    if ((DAT_1000af7a == 0) || (DAT_1000af88 == 0)) {
      DAT_10008424 = 0;
      _DAT_10008428 = 0;
    }
    else {
      DAT_10008424 = 1;
      _DAT_10008428 = (DAT_1000af88 - DAT_1000af34) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_1000afc8,0x220,(LPCWSTR)&DAT_1000aee4,-1,PTR_DAT_100084ac,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_100084ac = 0;
    }
    else {
      PTR_DAT_100084ac[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_1000afc8,0x220,(LPCWSTR)&DAT_1000af38,-1,PTR_DAT_100084b0,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_100084b0[0x3f] = 0;
      return;
    }
LAB_10002f5e:
    *PTR_DAT_100084b0 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_1000af8c == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_1000af8c), iVar4 != 0)))) {
      FUN_10002bd6((undefined *)DAT_1000af8c);
      sVar5 = _strlen((char *)_Str1);
      DAT_1000af8c = _malloc(sVar5 + 1);
      if (DAT_1000af8c != (uint *)0x0) {
        FUN_100033c0(DAT_1000af8c,_Str1);
        FUN_10002bc1(0xc);
        _strncpy(PTR_DAT_100084ac,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_100084ac[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_10005628(this,(byte *)_Source);
        DAT_10008420 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_10005628(DAT_10008420,(byte *)_Source);
          DAT_10008420 = (void *)((int)DAT_10008420 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_10005628(DAT_10008420,(byte *)_Source);
            DAT_10008420 = (void *)((int)DAT_10008420 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_10008420 = (void *)-(int)DAT_10008420;
        }
        DAT_10008424 = (int)(char)*_Source;
        if (DAT_10008424 != 0) {
          _strncpy(PTR_DAT_100084b0,(char *)_Source,3);
          PTR_DAT_100084b0[3] = 0;
          return;
        }
        goto LAB_10002f5e;
      }
    }
    FUN_10002bc1(0xc);
  }
  return;
}



// Function: FUN_10002f74 @ 0x10002f74

bool __cdecl FUN_10002f74(int *param_1)

{
  bool bVar1;
  
  FUN_10002b60(0xb);
  bVar1 = FUN_10002f95(param_1);
  FUN_10002bc1(0xb);
  return bVar1;
}



// Function: FUN_10002f95 @ 0x10002f95

bool __cdecl FUN_10002f95(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_10008424 != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_100084b8) || (uVar5 != DAT_100084c8)) {
      if (DAT_1000aed8 == 0) {
        FUN_10003141(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_10003141(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_1000af78 != 0) {
          uVar6 = (uint)DAT_1000af7e;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_1000af7c;
          uVar6 = 0;
          uVar4 = (uint)DAT_1000af7e;
        }
        FUN_10003141(1,(uint)(DAT_1000af78 == 0),uVar5,(uint)DAT_1000af7a,uVar4,uVar3,uVar6,
                     (uint)DAT_1000af80,(uint)DAT_1000af82,(uint)DAT_1000af84,(uint)DAT_1000af86);
        if (DAT_1000af24 != 0) {
          uVar6 = (uint)DAT_1000af2a;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_1000af28;
          uVar6 = 0;
          uVar4 = (uint)DAT_1000af2a;
          uVar5 = param_1[5];
        }
        FUN_10003141(0,(uint)(DAT_1000af24 == 0),uVar5,(uint)DAT_1000af26,uVar4,uVar3,uVar6,
                     (uint)DAT_1000af2c,(uint)DAT_1000af2e,(uint)DAT_1000af30,(uint)DAT_1000af32);
      }
    }
    iVar1 = param_1[7];
    if (DAT_100084bc < DAT_100084cc) {
      if ((DAT_100084bc <= iVar1) && (iVar1 <= DAT_100084cc)) {
        if ((DAT_100084bc < iVar1) && (iVar1 < DAT_100084cc)) {
          return true;
        }
LAB_1000310d:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_100084bc) {
          return DAT_100084c0 <= iVar2;
        }
        return iVar2 < DAT_100084d0;
      }
    }
    else {
      if (iVar1 < DAT_100084cc) {
        return true;
      }
      if (DAT_100084bc < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_100084cc) || (DAT_100084bc <= iVar1)) goto LAB_1000310d;
    }
  }
  return false;
}



// Function: FUN_10003141 @ 0x10003141

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10003141(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_100084d0)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_10008504 + param_4 * 4);
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
        iVar2 = *(int *)(&DAT_100084d4 + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_10008508 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_100084d0)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_10008504 + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_100084b8 = param_3;
    DAT_100084c0 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_100084bc = iVar1;
  }
  else {
    DAT_100084d0 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_10008428 + param_10) * 1000 + param_11;
    if (DAT_100084d0 < 0) {
      DAT_100084d0 = DAT_100084d0 + 86400000;
      DAT_100084cc = iVar1 + -1;
    }
    else {
      DAT_100084cc = iVar1;
      if (86399999 < DAT_100084d0) {
        DAT_100084d0 = DAT_100084d0 + -86400000;
        DAT_100084cc = iVar1 + 1;
      }
    }
    DAT_100084c8 = param_3;
  }
  return;
}



// Function: _malloc @ 0x10003281

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000afac);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10003293

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_100032bf((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_100053de(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_100032bf @ 0x100032bf

void __cdecl FUN_100032bf(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10007520;
  puStack_10 = &LAB_10005550;
  local_14 = ExceptionList;
  if (DAT_1000b2ac == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1000b084) {
      ExceptionList = &local_14;
      FUN_10002b60(9);
      local_8 = 0;
      piVar1 = FUN_100043db(param_1);
      local_8 = 0xffffffff;
      FUN_10003326();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000b2ac == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1000a664) {
        ExceptionList = &local_14;
        FUN_10002b60(9);
        local_8 = 1;
        piVar1 = FUN_10004e7e(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10003385();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_1000339e;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_1000339e:
  HeapAlloc(DAT_1000b2a8,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10003326 @ 0x10003326

void FUN_10003326(void)

{
  FUN_10002bc1(9);
  return;
}



// Function: FUN_10003385 @ 0x10003385

void FUN_10003385(void)

{
  FUN_10002bc1(9);
  return;
}



// Function: FUN_100033c0 @ 0x100033c0

uint * __cdecl FUN_100033c0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_100034a8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100034a8:
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



// Function: FUN_100033d0 @ 0x100033d0

uint * __cdecl FUN_100033d0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100033ec;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000341f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000343b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100033ec:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000343b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000343b;
    }
  }
LAB_1000341f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000343b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100034a8:
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
    if (bVar1 == 0) goto LAB_100034a8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x100034b0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_100034d0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10003503:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100034d0:
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
  goto LAB_10003503;
}



// Function: FUN_1000352b @ 0x1000352b

undefined4 __cdecl FUN_1000352b(int param_1)

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
  
  FUN_10002b60(0x19);
  CodePage = FUN_100036d8(param_1);
  if (CodePage != DAT_1000b088) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10008548;
LAB_10003568:
      if (*pUVar5 != CodePage) goto code_r0x1000356c;
      local_8 = 0;
      puVar15 = &DAT_1000b1a0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10008558);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10008540)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000b1a0 + uVar8 + 1);
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
      DAT_1000b09c = 1;
      DAT_1000b088 = CodePage;
      DAT_1000b2a4 = FUN_10003722(CodePage);
      DAT_1000b090 = *(undefined4 *)(iVar12 + 0x1000854c);
      DAT_1000b094 = *(undefined4 *)(iVar12 + 0x10008550);
      DAT_1000b098 = *(undefined4 *)(iVar12 + 0x10008554);
      goto LAB_100036bc;
    }
    goto LAB_100036b7;
  }
  goto LAB_10003552;
code_r0x1000356c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10008637 < (int)pUVar5) goto code_r0x10003577;
  goto LAB_10003568;
code_r0x10003577:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000b2a4 = 0;
    puVar15 = &DAT_1000b1a0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_1000b09c = 0;
      DAT_1000b088 = CodePage;
    }
    else {
      DAT_1000b088 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000b1a0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000b1a0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000b2a4 = FUN_10003722(CodePage);
      DAT_1000b09c = 1;
    }
    DAT_1000b090 = 0;
    DAT_1000b094 = 0;
    DAT_1000b098 = 0;
  }
  else {
    if (DAT_1000af94 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100036c9;
    }
LAB_100036b7:
    FUN_10003755();
  }
LAB_100036bc:
  FUN_1000377e();
LAB_10003552:
  uVar14 = 0;
LAB_100036c9:
  FUN_10002bc1(0x19);
  return uVar14;
}



// Function: FUN_100036d8 @ 0x100036d8

int __cdecl FUN_100036d8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000af94 = 1;
                    /* WARNING: Could not recover jumptable at 0x100036f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000af94 = 1;
                    /* WARNING: Could not recover jumptable at 0x10003707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000afc8;
  }
  DAT_1000af94 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10003722 @ 0x10003722

undefined4 __cdecl FUN_10003722(int param_1)

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



// Function: FUN_10003755 @ 0x10003755

void FUN_10003755(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000b1a0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000b088 = 0;
  DAT_1000b09c = 0;
  DAT_1000b2a4 = 0;
  DAT_1000b090 = 0;
  DAT_1000b094 = 0;
  DAT_1000b098 = 0;
  return;
}



// Function: FUN_1000377e @ 0x1000377e

void FUN_1000377e(void)

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
  
  BVar2 = GetCPInfo(DAT_1000b088,&local_18);
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
    FUN_100059e5(1,local_118,0x100,local_518,DAT_1000b088,DAT_1000b2a4,0);
    FUN_100057c1(DAT_1000b2a4,0x100,local_118,0x100,local_218,0x100,DAT_1000b088,0);
    FUN_100057c1(DAT_1000b2a4,0x200,local_118,0x100,local_318,0x100,DAT_1000b088,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000b1a0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000388a;
        }
        (&DAT_1000b0a0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000b1a0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000388a:
        (&DAT_1000b0a0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000b1a0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_100038d4;
        }
        (&DAT_1000b0a0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000b1a0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_100038d4:
        (&DAT_1000b0a0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10003903 @ 0x10003903

void FUN_10003903(void)

{
  if (DAT_1000b3c8 == 0) {
    FUN_1000352b(-3);
    DAT_1000b3c8 = 1;
  }
  return;
}



// Function: FUN_10003920 @ 0x10003920

undefined4 * __cdecl FUN_10003920(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10003ad7_caseD_2;
        case 3:
          goto switchD_10003ad7_caseD_3;
        }
        goto switchD_10003ad7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10003ad7_caseD_0;
      case 1:
        goto switchD_10003ad7_caseD_1;
      case 2:
        goto switchD_10003ad7_caseD_2;
      case 3:
        goto switchD_10003ad7_caseD_3;
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
              goto switchD_10003ad7_caseD_2;
            case 3:
              goto switchD_10003ad7_caseD_3;
            }
            goto switchD_10003ad7_caseD_1;
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
              goto switchD_10003ad7_caseD_2;
            case 3:
              goto switchD_10003ad7_caseD_3;
            }
            goto switchD_10003ad7_caseD_1;
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
              goto switchD_10003ad7_caseD_2;
            case 3:
              goto switchD_10003ad7_caseD_3;
            }
            goto switchD_10003ad7_caseD_1;
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
switchD_10003ad7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10003ad7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10003ad7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10003ad7_caseD_0:
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
        goto switchD_10003955_caseD_2;
      case 3:
        goto switchD_10003955_caseD_3;
      }
      goto switchD_10003955_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10003955_caseD_0;
    case 1:
      goto switchD_10003955_caseD_1;
    case 2:
      goto switchD_10003955_caseD_2;
    case 3:
      goto switchD_10003955_caseD_3;
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
            goto switchD_10003955_caseD_2;
          case 3:
            goto switchD_10003955_caseD_3;
          }
          goto switchD_10003955_caseD_1;
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
            goto switchD_10003955_caseD_2;
          case 3:
            goto switchD_10003955_caseD_3;
          }
          goto switchD_10003955_caseD_1;
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
            goto switchD_10003955_caseD_2;
          case 3:
            goto switchD_10003955_caseD_3;
          }
          goto switchD_10003955_caseD_1;
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
switchD_10003955_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10003955_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10003955_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10003955_caseD_0:
  return param_1;
}



// Function: FUN_10003c55 @ 0x10003c55

void __thiscall FUN_10003c55(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10003c6c(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_10003c6c @ 0x10003c6c

void * __thiscall FUN_10003c6c(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1000a9f4 < 2) {
      uVar3 = (byte)PTR_DAT_1000a7e8[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000a7e8;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10005c72(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10003cc7:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10003cc7;
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
      goto LAB_10003d31;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10003d31;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10003d31:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000a9f4 < 2) {
      uVar5 = (byte)PTR_DAT_1000a7e8[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10005c72(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000a9f4 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000a7e8 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10005c72(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10003ddd:
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
          pDVar6 = FUN_10005b2e();
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
      uVar3 = FUN_10005b37((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10003ddd;
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



// Function: _strchr @ 0x10003e90

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



// Function: _strstr @ 0x10003f50

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
LAB_10003fc3:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10003fc3;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x10003fd0

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



// Function: FUN_10004010 @ 0x10004010

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10004010(void)

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



// Function: FUN_1000403f @ 0x1000403f

undefined4 __cdecl FUN_1000403f(undefined4 param_1)

{
  DAT_1000b080 = HeapAlloc(DAT_1000b2a8,0,0x140);
  if (DAT_1000b080 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000b078 = 0;
  DAT_1000b07c = 0;
  DAT_1000b074 = DAT_1000b080;
  DAT_1000b084 = param_1;
  DAT_1000b06c = 0x10;
  return 1;
}



// Function: FUN_10004087 @ 0x10004087

uint __cdecl FUN_10004087(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000b080;
  while( true ) {
    if (DAT_1000b080 + DAT_1000b07c * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_100040b2 @ 0x100040b2

void __cdecl FUN_100040b2(uint *param_1,int param_2)

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
      if (DAT_1000b078 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1000b070 * 0x8000 + DAT_1000b078[3]),0x8000,0x4000);
        DAT_1000b078[2] = DAT_1000b078[2] | 0x80000000U >> ((byte)DAT_1000b070 & 0x1f);
        *(undefined4 *)(DAT_1000b078[4] + 0xc4 + DAT_1000b070 * 4) = 0;
        *(char *)(DAT_1000b078[4] + 0x43) = *(char *)(DAT_1000b078[4] + 0x43) + -1;
        if (*(char *)(DAT_1000b078[4] + 0x43) == '\0') {
          DAT_1000b078[1] = DAT_1000b078[1] & 0xfffffffe;
        }
        if (DAT_1000b078[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1000b078[3],0,0x8000);
          HeapFree(DAT_1000b2a8,0,(LPVOID)DAT_1000b078[4]);
          FUN_10005cf0(DAT_1000b078,DAT_1000b078 + 5,
                       (DAT_1000b07c * 0x14 - (int)DAT_1000b078) + -0x14 + DAT_1000b080);
          DAT_1000b07c = DAT_1000b07c + -1;
          if (DAT_1000b078 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1000b074 = DAT_1000b080;
        }
      }
      DAT_1000b078 = param_1;
      DAT_1000b070 = uVar14;
    }
  }
  return;
}



// Function: FUN_100043db @ 0x100043db

int * __cdecl FUN_100043db(uint *param_1)

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
  
  puVar8 = DAT_1000b080 + DAT_1000b07c * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000b074;
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
  puVar11 = DAT_1000b080;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000b074 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000b074) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000b080;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000b074 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000b074) && (param_1 = FUN_100046e4(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10004795((int)param_1);
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
  DAT_1000b074 = param_1;
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
    if (iVar9 == 0) goto LAB_100046a1;
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
LAB_100046a1:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000b078)) && (local_8 == DAT_1000b070)) {
    DAT_1000b078 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_100046e4 @ 0x100046e4

undefined4 * FUN_100046e4(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000b07c == DAT_1000b06c) {
    pvVar2 = HeapReAlloc(DAT_1000b2a8,0,DAT_1000b080,(DAT_1000b06c * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000b06c = DAT_1000b06c + 0x10;
    DAT_1000b080 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000b080 + DAT_1000b07c * 0x14);
  pvVar2 = HeapAlloc(DAT_1000b2a8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000b07c = DAT_1000b07c + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000b2a8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10004795 @ 0x10004795

int __cdecl FUN_10004795(int param_1)

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



// Function: FUN_10004890 @ 0x10004890

undefined4 __cdecl FUN_10004890(uint *param_1,int param_2,int param_3)

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



// Function: FUN_10004b86 @ 0x10004b86

undefined ** FUN_10004b86(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10008650 == -1) {
    lpMem = &PTR_LOOP_10008640;
  }
  else {
    lpMem = HeapAlloc(DAT_1000b2a8,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10008640) {
        if (PTR_LOOP_10008640 == (undefined *)0x0) {
          PTR_LOOP_10008640 = (undefined *)&PTR_LOOP_10008640;
        }
        if (PTR_LOOP_10008644 == (undefined *)0x0) {
          PTR_LOOP_10008644 = (undefined *)&PTR_LOOP_10008640;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10008640;
        lpMem[1] = PTR_LOOP_10008644;
        PTR_LOOP_10008644 = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_10008640) {
    HeapFree(DAT_1000b2a8,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_10004cca @ 0x10004cca

void __cdecl FUN_10004cca(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1000a660 == param_1) {
    PTR_LOOP_1000a660 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10008640) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1000b2a8,0,param_1);
    return;
  }
  DAT_10008650 = 0xffffffff;
  return;
}



// Function: FUN_10004d20 @ 0x10004d20

void __cdecl FUN_10004d20(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_10008644;
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
            DAT_1000af98 = DAT_1000af98 + -1;
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
          FUN_10004cca(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_10008644) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_10004de2 @ 0x10004de2

int __cdecl FUN_10004de2(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10008640;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10008640) {
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



// Function: FUN_10004e39 @ 0x10004e39

void __cdecl FUN_10004e39(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1000af98 = DAT_1000af98 + 1, DAT_1000af98 == 0x20)) {
    FUN_10004d20(0x10);
  }
  return;
}



// Function: FUN_10004e7e @ 0x10004e7e

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10004e7e(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_1000a660;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10005086(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10004f49;
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
          piVar5 = (int *)FUN_10005086(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10004f49:
            PTR_LOOP_1000a660 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_1000a660) {
      ppuVar9 = &PTR_LOOP_10008640;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_10008640) {
          ppuVar9 = FUN_10004b86();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1000a660 = (undefined *)ppuVar9;
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
      PTR_LOOP_1000a660 = (undefined *)ppuVar9;
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



// Function: FUN_10005086 @ 0x10005086

int __cdecl FUN_10005086(int *param_1,uint param_2,uint param_3)

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
          goto LAB_10005199;
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
LAB_10005199:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_100051aa @ 0x100051aa

undefined4 __cdecl FUN_100051aa(int param_1,int *param_2,byte *param_3,uint param_4)

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



// Function: FUN_10005253 @ 0x10005253

int __cdecl FUN_10005253(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000af9c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000af9c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000af9c != (FARPROC)0x0) {
        DAT_1000afa0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000afa4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100052a2;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100052a2:
    if (DAT_1000afa0 != (FARPROC)0x0) {
      iVar1 = (*DAT_1000afa0)();
      if ((iVar1 != 0) && (DAT_1000afa4 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000afa4)(iVar1);
      }
    }
    iVar1 = (*DAT_1000af9c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x100052e0

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
        goto joined_r0x1000531e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000535b;
        goto LAB_100053c9;
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
joined_r0x100053c5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_100053c9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000535b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x100053c5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x100053c5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x100053c5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000531e:
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
LAB_1000535b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_100053de @ 0x100053de

undefined4 __cdecl FUN_100053de(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000afa8 != (code *)0x0) {
    iVar1 = (*DAT_1000afa8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: _memset @ 0x10005400

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



// Function: __global_unwind2 @ 0x10005458

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10005470,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000549a

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
  puStack_18 = &LAB_10005478;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000552e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_1000552e @ 0x1000552e

void FUN_1000552e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000a678 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000a674 = in_EAX;
  DAT_1000a67c = unaff_EBP;
  return;
}



// Function: FUN_1000560d @ 0x1000560d

void FUN_1000560d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10005628 @ 0x10005628

int __thiscall FUN_10005628(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_1000a9f4 < 2) {
      uVar1 = (byte)PTR_DAT_1000a7e8[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_1000a7e8;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_10005c72(this,(uint)*param_1,8);
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
    if (DAT_1000a9f4 < 2) {
      uVar2 = (byte)PTR_DAT_1000a7e8[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_10005c72(this,uVar4,4);
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



// Function: _strcmp @ 0x100056c0

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
      if (bVar4 != *_Str2) goto LAB_10005704;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100056d0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10005704;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10005704;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100056d0:
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
LAB_10005704:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_10005744 @ 0x10005744

int __cdecl FUN_10005744(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_1000b3c4 != 0) &&
      ((DAT_1000ad44 != (int *)0x0 ||
       (((DAT_1000ad4c != 0 && (iVar1 = FUN_100060a3(), iVar1 == 0)) && (DAT_1000ad44 != (int *)0x0)
        ))))) && (piVar3 = DAT_1000ad44, param_1 != (uchar *)0x0)) {
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



// Function: FUN_100057c1 @ 0x100057c1

int __cdecl
FUN_100057c1(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10007580;
  puStack_10 = &LAB_10005550;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000afd0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000afd0 = 2;
    }
    else {
      DAT_1000afd0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000638e(param_3,param_4);
  }
  if (DAT_1000afd0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000afd0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000afc8;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10004010();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10004010();
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



// Function: FUN_100059e5 @ 0x100059e5

BOOL __cdecl
FUN_100059e5(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_10007598;
  puStack_10 = &LAB_10005550;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000afd4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000afd4 == 0) {
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
  DAT_1000afd4 = iVar3;
  if (DAT_1000afd4 != 2) {
    if (DAT_1000afd4 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000afc8;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10004010();
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
    param_6 = DAT_1000afb8;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10005b2e @ 0x10005b2e

DWORD * FUN_10005b2e(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10001c59();
  return pDVar1 + 2;
}



// Function: FUN_10005b37 @ 0x10005b37

uint __cdecl FUN_10005b37(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1000afb8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1000b068);
    bVar1 = DAT_1000b064 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1000b068);
      this = (void *)0x13;
      FUN_10002b60(0x13);
    }
    param_1 = FUN_10005ba6(this,param_1);
    if (bVar1) {
      FUN_10002bc1(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1000b068);
    }
  }
  return param_1;
}



// Function: FUN_10005ba6 @ 0x10005ba6

uint __thiscall FUN_10005ba6(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000afb8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000a9f4 < 2) {
        uVar2 = (byte)PTR_DAT_1000a7e8[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10005c72(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000a7e8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100057c1(DAT_1000afb8,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_10005c72 @ 0x10005c72

uint __thiscall FUN_10005c72(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000a7e8 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000a7e8[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_100059e5(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10005cf0 @ 0x10005cf0

undefined4 * __cdecl FUN_10005cf0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10005ea7_caseD_2;
        case 3:
          goto switchD_10005ea7_caseD_3;
        }
        goto switchD_10005ea7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10005ea7_caseD_0;
      case 1:
        goto switchD_10005ea7_caseD_1;
      case 2:
        goto switchD_10005ea7_caseD_2;
      case 3:
        goto switchD_10005ea7_caseD_3;
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
              goto switchD_10005ea7_caseD_2;
            case 3:
              goto switchD_10005ea7_caseD_3;
            }
            goto switchD_10005ea7_caseD_1;
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
              goto switchD_10005ea7_caseD_2;
            case 3:
              goto switchD_10005ea7_caseD_3;
            }
            goto switchD_10005ea7_caseD_1;
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
              goto switchD_10005ea7_caseD_2;
            case 3:
              goto switchD_10005ea7_caseD_3;
            }
            goto switchD_10005ea7_caseD_1;
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
switchD_10005ea7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10005ea7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10005ea7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10005ea7_caseD_0:
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
        goto switchD_10005d25_caseD_2;
      case 3:
        goto switchD_10005d25_caseD_3;
      }
      goto switchD_10005d25_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005d25_caseD_0;
    case 1:
      goto switchD_10005d25_caseD_1;
    case 2:
      goto switchD_10005d25_caseD_2;
    case 3:
      goto switchD_10005d25_caseD_3;
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
            goto switchD_10005d25_caseD_2;
          case 3:
            goto switchD_10005d25_caseD_3;
          }
          goto switchD_10005d25_caseD_1;
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
            goto switchD_10005d25_caseD_2;
          case 3:
            goto switchD_10005d25_caseD_3;
          }
          goto switchD_10005d25_caseD_1;
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
            goto switchD_10005d25_caseD_2;
          case 3:
            goto switchD_10005d25_caseD_3;
          }
          goto switchD_10005d25_caseD_1;
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
switchD_10005d25_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005d25_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005d25_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005d25_caseD_0:
  return param_1;
}



// Function: __mbsnbicoll @ 0x10006064

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_10006111(DAT_1000b2a4,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_1000b088);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



// Function: FUN_100060a3 @ 0x100060a3

undefined4 FUN_100060a3(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_1000ad4c;
  puVar2 = DAT_1000ad4c;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_100063b9(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_10006111 @ 0x10006111

int __cdecl
FUN_10006111(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
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
  puStack_c = &DAT_100075a8;
  puStack_10 = &LAB_10005550;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_1000afe4 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000afe4 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_1000afe4 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_1000638e((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_1000638e((char *)param_5,param_6);
  }
  if (DAT_1000afe4 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_1000afe4 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000afc8;
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
      FUN_10004010();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_10004010();
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



// Function: FUN_1000638e @ 0x1000638e

int __cdecl FUN_1000638e(char *param_1,int param_2)

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



// Function: FUN_100063b9 @ 0x100063b9

undefined4 __cdecl FUN_100063b9(uint *param_1,int param_2)

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
  puVar2 = (uint *)FUN_100069a9((byte *)param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar7 = *(byte *)((int)puVar2 + 1) == 0;
  if (DAT_1000ad44 == DAT_1000ad48) {
    DAT_1000ad44 = (byte *)FUN_10006598((int *)DAT_1000ad44);
  }
  if (DAT_1000ad44 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_1000ad4c == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_1000ad44 = _malloc(4);
      if (DAT_1000ad44 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_1000ad44 + 1;
      pbVar6 = DAT_1000ad44 + 2;
      pbVar1 = DAT_1000ad44 + 3;
      DAT_1000ad44[0] = 0;
      *pbVar4 = 0;
      *pbVar6 = 0;
      *pbVar1 = 0;
      if (DAT_1000ad4c == (undefined4 *)0x0) {
        DAT_1000ad4c = _malloc(4);
        if (DAT_1000ad4c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1000ad4c = 0;
      }
    }
    else {
      iVar3 = FUN_100060a3();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_1000ad44;
  iVar3 = FUN_10006540((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_1000667a(pbVar4,(uint *)(iVar3 * 4 + 8));
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
      goto LAB_100064ed;
    }
    pbVar6 = pbVar4 + iVar3 * 4;
    FUN_10002bd6(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar6 != 0; pbVar6 = pbVar6 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar6 = *(int *)(pbVar6 + 4);
    }
    pbVar4 = FUN_1000667a(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_100064ed;
  }
  DAT_1000ad44 = pbVar4;
LAB_100064ed:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_100033c0(lpName,param_1);
      pbVar4 = (byte *)(((int)lpName - (int)param_1) + (int)puVar2);
      *pbVar4 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(pbVar4 + 1)));
      FUN_10002bd6((undefined *)lpName);
    }
  }
  return 0;
}



// Function: FUN_10006540 @ 0x10006540

int __cdecl FUN_10006540(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_1000ad44;
  piVar2 = DAT_1000ad44;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_1000ad44 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_1000ad44 >> 2;
}



// Function: FUN_10006598 @ 0x10006598

undefined4 * __cdecl FUN_10006598(int *param_1)

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
      puVar4 = FUN_10006a40(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10006600 @ 0x10006600

int __cdecl FUN_10006600(byte *param_1,byte *param_2)

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



// Function: FUN_10006640 @ 0x10006640

byte * __cdecl FUN_10006640(byte *param_1,byte *param_2)

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



// Function: FUN_1000667a @ 0x1000667a

byte * __cdecl FUN_1000667a(byte *param_1,uint *param_2)

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
  puStack_c = &DAT_100075c0;
  puStack_10 = &LAB_10005550;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_10002bd6(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_1000b2ac == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10002b60(9);
            local_8 = 0;
            local_2c = (uint *)FUN_10004087((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_1000b084) {
                iVar1 = FUN_10004890(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_100043db(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_10003920((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_10004087((int)param_1);
                    FUN_100040b2(local_2c,(int)param_1);
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
                local_28 = HeapAlloc(DAT_1000b2a8,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_10003920((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_100040b2(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_10006805();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_1000b2a8,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_1000afac == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_100053de(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_1000b2ac == 2) {
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
              FUN_10002b60(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_10004de2(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_1000b2a8,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_1000a664) {
                  iVar1 = FUN_100051aa(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_10004e7e((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_10003920((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_10004e39(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_1000b2a8,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_10003920((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10004e39(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_10006953();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_1000afac == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_100053de(param_2);
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
              pbVar3 = HeapReAlloc(DAT_1000b2a8,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_1000afac == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_100053de(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



// Function: FUN_10006805 @ 0x10006805

void FUN_10006805(void)

{
  FUN_10002bc1(9);
  return;
}



// Function: FUN_10006953 @ 0x10006953

void FUN_10006953(void)

{
  FUN_10002bc1(9);
  return;
}



// Function: FUN_100069a9 @ 0x100069a9

byte * __cdecl FUN_100069a9(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (DAT_1000b09c == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_10002b60(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_1000b1a0 + uVar3 + 1) & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_10002bc1(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_10002bc1(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2 + 1;
    }
    FUN_10002bc1(0x19);
    pbVar2 = (byte *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return pbVar2;
}



// Function: FUN_10006a40 @ 0x10006a40

uint * __cdecl FUN_10006a40(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_100033c0(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}



// Function: FUN_10006a70 @ 0x10006a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10006a70(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1000b068;
  if (DAT_1000afb8 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_10006abe;
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
LAB_10006abe:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1000b068 = _DAT_1000b068 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1000b064;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1000b068 = iVar2;
      FUN_10002b60(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_10006b1f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10006d35(this,uVar8);
      uVar7 = FUN_10006d35(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_10006b1f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1000b068 = _DAT_1000b068 + -1;
      UNLOCK();
    }
    else {
      FUN_10002bc1(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_10006b40 @ 0x10006b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10006b40(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1000b068;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1000afb8 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_10006b9f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_10006b9f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1000b068 = _DAT_1000b068 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1000b064;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1000b068 = iVar2;
        FUN_10002b60(0x13);
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
        uVar7 = FUN_10006d35(param_3,uVar7);
        uVar5 = FUN_10006d35(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10006c15;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10006c15:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1000b068 = _DAT_1000b068 + -1;
        UNLOCK();
      }
      else {
        FUN_10002bc1(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_10006d35 @ 0x10006d35

uint __thiscall FUN_10006d35(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000afb8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000a9f4 < 2) {
        uVar2 = (byte)PTR_DAT_1000a7e8[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10005c72(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000a7e8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_100057c1(DAT_1000afb8,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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




// Decompiled from: Mission.dll

// Function: OnInit @ 0x10001000

void OnInit(void)

{
                    /* 0x1000  1  OnInit */
  RegisterUnits(&DAT_100066c8,s_Gkomandir_1000631c);
  RegisterUnits(&DAT_10006830,s_GroupV1_10006314);
  RegisterUnits(&DAT_10006828,s_GroupV2_1000630c);
  RegisterUnits(&DAT_10006700,s_GroupFR1_10006300);
  RegisterUnits(&DAT_10006708,s_GroupFR2_100062f4);
  RegisterUnits(&DAT_100066f0,s_GroupFR3_100062e8);
  RegisterUnits(&DAT_100066f8,s_GroupFR4_100062dc);
  RegisterUnits(&DAT_100066a0,s_GroupART1_100062d0);
  RegisterUnits(&DAT_100066a8,s_GroupART2_100062c4);
  RegisterUnits(&DAT_10006698,s_GroupART3_100062b8);
  RegisterUnits(&DAT_10006820,s_GroupR1_100062b0);
  RegisterZone(&DAT_10006710,s_ZoneFORT_100062a4);
  RegisterZone(&DAT_10006840,s_ZoneV1_1000629c);
  RegisterZone(&DAT_10006848,s_ZoneV2_10006294);
  RegisterZone(&DAT_100066d0,s_ZoneFR1_1000628c);
  RegisterZone(&DAT_100066d8,s_ZoneFR2_10006284);
  RegisterZone(&DAT_100066e0,s_ZoneFR3_1000627c);
  RegisterZone(&DAT_100066e8,s_ZoneFR4_10006274);
  RegisterZone(&DAT_100066c0,s_ZoneART1_10006268);
  RegisterZone(&DAT_100066b8,s_ZoneART2_1000625c);
  RegisterZone(&DAT_100066b0,s_ZoneART3_10006250);
  RegisterZone(&DAT_10006838,s_ZoneR1_10006248);
  RegisterZone(&DAT_10006718,s_ZoneRA1_10006240);
  RegisterUnitType(&DAT_10006730,s_Melnica_VE__10006234);
  RegisterUnitType(&DAT_10006738,s_Rinok_VE__10006228);
  RegisterUnitType(&DAT_10006740,s_PorE_VE__1000621c);
  RegisterUnitType(&DAT_10006748,s_Dip_korpus_VE__1000620c);
  RegisterUnitType(&DAT_10006750,s_artileri_depo_VE__100061f8);
  RegisterUnitType(&DAT_10006758,s_Kuznica_VE__100061ec);
  RegisterUnitType(&DAT_10006760,s_WALL_UKR_VE__100061dc);
  RegisterUnitType(&DAT_10006768,s_WALL_EV_VE__100061d0);
  RegisterUnitType(&DAT_10006770,s_Konushnia_Swesair_VE__100061b8);
  RegisterUnitType(&DAT_10006778,s_Kostel_VE__100061ac);
  RegisterUnitType(&DAT_10006780,s_akademia_E_VE__1000619c);
  RegisterUnitType(&DAT_10006788,s_Bashnia_VE__10006190);
  RegisterUnitType(&DAT_10006798,s_Kazarma_evro_VE__1000617c);
  RegisterUnitType(&DAT_100067a8,s_Kazarma_VE__10006170);
  RegisterUnitType(&DAT_10006790,s_Europ_GE__10006164);
  RegisterUnitType(&DAT_100067a0,s_Dom_Prussia_GE__10006154);
  RegisterUnitType(&DAT_100067b0,s_Melnica_GE__10006148);
  RegisterUnitType(&DAT_100067c0,s_Sclad1_GE__1000613c);
  RegisterUnitType(&DAT_100067d0,s_PorE_GE__10006130);
  RegisterUnitType(&DAT_100067e0,s_Dip_korpus_GE__10006120);
  RegisterUnitType(&DAT_100067f0,s_artileri_depo_GE__1000610c);
  RegisterUnitType(&DAT_10006800,s_Kuznica_GE__10006100);
  RegisterUnitType(&DAT_10006810,s_WALL_UKR_GE__100060f0);
  RegisterUnitType(&DAT_100067b8,s_WALL_EV_GE__100060e4);
  RegisterUnitType(&DAT_100067c8,s_Konushnia_Swesair_GE__100060cc);
  RegisterUnitType(&DAT_100067d8,s_Cercov_Poland_GE__100060b8);
  RegisterUnitType(&DAT_100067e8,s_akademia_E_GE__100060a8);
  RegisterUnitType(&DAT_100067f8,s_Bashnia_GE__1000609c);
  RegisterUnitType(&DAT_10006808,s_Kazarma_evro_GE__10006088);
  RegisterUnitType(&DAT_10006818,s_Kazarma_GE__1000607c);
  RegisterUpgrade(&DAT_10006858,s_AKA06VE_10006074);
  RegisterUpgrade(&DAT_10006690,s_AKA29VE_1000606c);
  RegisterUpgrade(&DAT_10006850,s_AKA04VE_10006064);
  SetPlayerName(1,s_SPAIN_1000605c);
  SetPlayerName(2,s_PRUSSIA_10006054);
  SetPlayerName(5,s_ROZBOINIKI_10006048);
  InitialUpgrade(s_GroupART1_100062d0,s_AKA17SP_10006040);
  InitialUpgrade(s_GroupART1_100062d0,s_AKA17SP_10006040);
  InitialUpgrade(s_GroupART1_100062d0,s_AKA17SP_10006040);
  InitialUpgrade(s_GroupART1_100062d0,s_AKA20SP_10006038);
  InitialUpgrade(s_GroupART1_100062d0,s_AKA11SP_10006030);
  InitialUpgrade(s_GroupART1_100062d0,s_AKA20SP_10006038);
  InitialUpgrade(s_Gkomandir_1000631c,s_AKA04VE_10006064);
  return;
}



// Function: FUN_10001360 @ 0x10001360

undefined4 FUN_10001360(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: ProcessScenary @ 0x10001380

void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  
                    /* 0x1380  2  ProcessScenary */
  pcVar4 = Trigg_exref;
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ShowPage(s__PAGE1_1000635c);
    ShowPage(s__PAGE2_10006354);
    SetResource(2,3,150000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,5000);
    SetResource(2,0,5000);
    SetResource(2,2,10000);
    SetResource(5,3,0xa98ac7);
    SetResource(5,1,0xa98ac7);
    SetResource(5,4,250000);
    SetResource(5,5,250000);
    SetResource(5,0,250000);
    SetResource(5,2,250000);
    SelectUnits(&DAT_10006830,0);
    Patrol(1,&DAT_10006840,0xc0);
    SelectUnits(&DAT_10006828,0);
    Patrol(1,&DAT_10006848,0x40);
    SelectUnits(&DAT_10006700,0);
    Patrol(1,&DAT_100066d0,0x40);
    SelectUnits(&DAT_10006708,0);
    Patrol(1,&DAT_100066d8,0x40);
    SelectUnits(&DAT_10006828,0);
    Patrol(1,&DAT_10006848,0x40);
    SelectUnits(&DAT_100066f0,0);
    Patrol(1,&DAT_100066e0,0xc0);
    SelectUnits(&DAT_100066f8,0);
    Patrol(1,&DAT_100066e8,0xc0);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetLightSpot(&DAT_10006710,3,1);
      SetResource(0,3,55000);
      SetResource(0,1,55000);
      SetResource(0,4,50000);
      SetResource(0,5,50000);
      SetResource(0,0,50000);
      SetResource(0,2,50000);
      StartAI(2,s_GERMAN_0_10006348,0,1,1,1);
      SelectUnits(&DAT_10006830,0);
      SelectUnits(&DAT_10006828,1);
      SelErase(1);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,11000);
      SetResource(0,1,11000);
      SetResource(0,4,10000);
      SetResource(0,5,10000);
      SetResource(0,0,10000);
      SetResource(0,2,10000);
      StartAI(2,s_GERMAN_0_10006348,0,1,1,2);
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,0x157c);
      SetResource(0,1,0x157c);
      SetResource(0,4,5000);
      SetResource(0,5,5000);
      SetResource(0,0,5000);
      SetResource(0,2,5000);
      StartAI(2,s_GERMAN_0_10006348,0,1,1,3);
    }
    iVar2 = GetDiff(0);
    pcVar4 = Trigg_exref;
    if (iVar2 == 3) {
      SetResource(0,3,0x1194);
      SetResource(0,1,0x1194);
      SetResource(0,4,4000);
      SetResource(0,5,4000);
      SetResource(0,0,4000);
      SetResource(0,2,4000);
      StartAI(2,s_GERMAN_0_10006348,0,1,1,3);
      pcVar4 = Trigg_exref;
    }
  }
  iVar2 = GetUnitsAmount0(&DAT_100066c0,0);
  if (0 < iVar2) {
    AttackZoneByArtillery(&DAT_100066a0,&DAT_100066c0,0);
  }
  iVar2 = GetUnitsAmount0(&DAT_100066b8,0);
  if (0 < iVar2) {
    AttackZoneByArtillery(&DAT_100066a8,&DAT_100066b8,0);
  }
  iVar2 = GetUnitsAmount0(&DAT_100066b0,0);
  if (0 < iVar2) {
    AttackZoneByArtillery(&DAT_10006698,&DAT_100066b0,0);
  }
  ChangeFriends(5,100);
  EnableUnit(0,&DAT_10006720,0);
  EnableUnit(0,&DAT_10006728,0);
  EnableUnit(0,&DAT_10006730,0);
  EnableUnit(0,&DAT_10006738,0);
  EnableUnit(0,&DAT_10006740,0);
  EnableUnit(0,&DAT_10006748,0);
  EnableUnit(0,&DAT_10006750,0);
  EnableUnit(0,&DAT_10006758,0);
  EnableUnit(0,&DAT_10006760,0);
  EnableUnit(0,&DAT_10006768,0);
  EnableUnit(0,&DAT_10006770,0);
  EnableUnit(0,&DAT_10006778,0);
  EnableUnit(0,&DAT_10006780,0);
  EnableUnit(0,&DAT_10006788,0);
  EnableUnit(0,&DAT_10006798,0);
  EnableUnit(0,&DAT_100067a8,0);
  EnableUnit(0,&DAT_10006790,0);
  EnableUnit(0,&DAT_100067a0,0);
  EnableUnit(0,&DAT_100067b0,0);
  EnableUnit(0,&DAT_100067c0,0);
  EnableUnit(0,&DAT_100067d0,0);
  EnableUnit(0,&DAT_100067e0,0);
  EnableUnit(0,&DAT_100067f0,0);
  EnableUnit(0,&DAT_10006800,0);
  EnableUnit(0,&DAT_10006810,0);
  EnableUnit(0,&DAT_100067b8,0);
  EnableUnit(0,&DAT_100067c8,0);
  EnableUnit(0,&DAT_100067d8,0);
  EnableUnit(0,&DAT_100067e8,0);
  EnableUnit(0,&DAT_100067f8,0);
  EnableUnit(0,&DAT_10006808,0);
  EnableUnit(0,&DAT_10006818,0);
  DisableUpgrade(0,&DAT_10006858);
  DisableUpgrade(0,&DAT_10006690);
  DisableUpgrade(0,&DAT_10006850);
  cVar1 = (*pcVar4)(0x16);
  pcVar5 = SetTrigg_exref;
  if (cVar1 != '\0') {
    uVar3 = FUN_100019c0(5,0,&DAT_10006718,&DAT_10006838,&DAT_10006820,s__PAGE15_10006340,5000,0,0,0
                         ,0,0);
    pcVar5 = SetTrigg_exref;
    SetTrigg(0x16,uVar3);
  }
  cVar1 = (*pcVar4)(0x5c);
  pcVar6 = ShowPage_exref;
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), pcVar6 = ShowPage_exref, cVar1 != '\0')) {
    (*pcVar5)(0x5c,0);
    pcVar6 = ShowPage_exref;
    ShowPage(s__PAGE12_10006338);
  }
  cVar1 = (*pcVar4)(0x5f);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_100066c8,0), iVar2 == 0)) {
    (*pcVar5)(0x5f,0);
    (*pcVar6)(s__PAGE11_10006330);
    LooseGame();
  }
  cVar1 = (*pcVar4)(0x5e);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_10006710,1), iVar2 == 0)) {
    (*pcVar5)(0x5e,0);
    (*pcVar6)(s__PAGE10_10006328);
    ShowVictory();
  }
  return;
}



// Function: FUN_100019c0 @ 0x100019c0

uint __cdecl
FUN_100019c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = GetTotalAmount0(param_5);
  if (iVar2 < 1) {
LAB_10001a1a:
    iVar2 = GetUnitsAmount0(param_3,param_1);
    iVar3 = GetTotalAmount0(param_5);
    if (iVar3 == iVar2 || iVar3 - iVar2 < 0) goto LAB_10001a67;
  }
  else {
    iVar2 = GetUnitsAmount1(param_3,param_5);
    iVar3 = GetUnitsAmount1(param_4,param_5);
    if ((iVar2 == iVar3 || iVar2 - iVar3 < 0) ||
       (iVar2 = GetUnitsAmount0(param_3,param_2), iVar2 != 0)) goto LAB_10001a1a;
  }
  SelectUnits(param_5,0);
  SelSendTo(param_1,param_4,0x3e,1);
  AllowAttack(param_1,0);
  SetTrigg(0xc,1);
LAB_10001a67:
  cVar1 = Trigg(0xc);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(param_3,param_2), 0 < iVar2)) {
    AllowAttack(param_1,1);
    SetTrigg(0xc,0);
  }
  iVar2 = GetUnitsAmount0(param_3,param_1);
  if ((iVar2 == 0) && (iVar2 = GetUnitsAmount0(param_4,param_2), 0 < iVar2)) {
    ShowPage(param_6);
    AddResource(param_2,1,param_7);
    AddResource(param_2,3,param_8);
    AddResource(param_2,0,param_9);
    AddResource(param_2,2,param_10);
    AddResource(param_2,4,param_11);
    uVar4 = AddResource(param_2,5,param_12);
    return uVar4 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



// Function: FUN_10001b30 @ 0x10001b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10001b30(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000687c = GetVersion();
    iVar1 = FUN_10002564(1);
    if (iVar1 != 0) {
      _DAT_10006888 = DAT_1000687c >> 8 & 0xff;
      _DAT_10006884 = DAT_1000687c & 0xff;
      DAT_1000687c = DAT_1000687c >> 0x10;
      _DAT_10006880 = _DAT_10006884 * 0x100 + _DAT_10006888;
      iVar1 = FUN_10001df7();
      if (iVar1 != 0) {
        DAT_10006dd8 = GetCommandLineA();
        DAT_10006868 = FUN_10002432();
        FUN_10001f1c();
        FUN_100021e5();
        FUN_1000212c();
        FUN_10001cd9();
        DAT_10006864 = DAT_10006864 + 1;
        goto LAB_10001c03;
      }
      FUN_100025a0();
    }
LAB_10001b90:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10006864 < 1) goto LAB_10001b90;
      DAT_10006864 = DAT_10006864 + -1;
      if (DAT_100068b4 == 0) {
        FUN_10001d17();
      }
      FUN_100020d8();
      FUN_10001e4b();
      FUN_100025a0();
    }
    else if (param_2 == 3) {
      FUN_10001e7c((LPVOID)0x0);
    }
LAB_10001c03:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10001c09

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10006864;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10001c51;
    if ((DAT_10006ddc != (code *)0x0) &&
       (iVar2 = (*DAT_10006ddc)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10001b30(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10001c51:
  iVar2 = FUN_10001360(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10001b30(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10001b30(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10006ddc != (code *)0x0) {
      iVar2 = (*DAT_10006ddc)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10001ca6

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10006870 == 1) || ((DAT_10006870 == 0 && (DAT_10006874 == 1)))) {
    FUN_10002615();
  }
  FUN_1000264e(param_1);
  (*(code *)PTR___exit_10006364)(0xff);
  return;
}



// Function: FUN_10001cd9 @ 0x10001cd9

void FUN_10001cd9(void)

{
  if (DAT_10006dd4 != (code *)0x0) {
    (*DAT_10006dd4)();
  }
  FUN_10001ddd((undefined4 *)&DAT_10006008,(undefined4 *)&DAT_10006010);
  FUN_10001ddd((undefined4 *)&DAT_10006000,(undefined4 *)&DAT_10006004);
  return;
}



// Function: __exit @ 0x10001d06

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10001d26(_Code,1,0);
  return;
}



// Function: FUN_10001d17 @ 0x10001d17

void FUN_10001d17(void)

{
  FUN_10001d26(0,0,1);
  return;
}



// Function: FUN_10001d26 @ 0x10001d26

void __cdecl FUN_10001d26(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10001dcb();
  if (DAT_100068b8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100068b4 = 1;
  DAT_100068b0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10006dd0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10006dcc - 4), DAT_10006dd0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10006dd0 <= puVar1);
    }
    FUN_10001ddd((undefined4 *)&DAT_10006014,(undefined4 *)&DAT_10006018);
  }
  FUN_10001ddd((undefined4 *)&DAT_1000601c,(undefined4 *)&DAT_10006020);
  if (param_3 == 0) {
    DAT_100068b8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10001dd4();
  return;
}



// Function: FUN_10001dcb @ 0x10001dcb

void FUN_10001dcb(void)

{
  FUN_10002836(0xd);
  return;
}



// Function: FUN_10001dd4 @ 0x10001dd4

void FUN_10001dd4(void)

{
  FUN_10002897(0xd);
  return;
}



// Function: FUN_10001ddd @ 0x10001ddd

void __cdecl FUN_10001ddd(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10001df7 @ 0x10001df7

undefined4 FUN_10001df7(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100027a1();
  DAT_10006368 = TlsAlloc();
  if (DAT_10006368 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100028ac(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10006368,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10001e69((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10001e4b @ 0x10001e4b

void FUN_10001e4b(void)

{
  FUN_100027ca();
  if (DAT_10006368 != 0xffffffff) {
    TlsFree(DAT_10006368);
    DAT_10006368 = 0xffffffff;
  }
  return;
}



// Function: FUN_10001e69 @ 0x10001e69

void __cdecl FUN_10001e69(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100064e8;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10001e7c @ 0x10001e7c

void __cdecl FUN_10001e7c(LPVOID param_1)

{
  if (DAT_10006368 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_10006368), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_10002939(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_10002939(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_10002939(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_10002939(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_10002939(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_10002939(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_100064e8) {
        FUN_10002939(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_10002939(param_1);
    }
    TlsSetValue(DAT_10006368,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10001f1c @ 0x10001f1c

void FUN_10001f1c(void)

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
  DAT_10006dc0 = 0x20;
  DAT_10006cc0 = puVar2;
  for (; puVar2 < DAT_10006cc0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10006dc0 < (int)UVar8) {
      puVar2 = &DAT_10006cc4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10006dc0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10006dc0 = DAT_10006dc0 + 0x20;
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
      } while ((int)DAT_10006dc0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10006cc0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10006cc0 + iVar6 * 9;
    if (DAT_10006cc0[iVar6 * 9] == -1) {
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
          goto LAB_100020c1;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_100020c1:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10006dc0);
      return;
    }
  } while( true );
}



// Function: FUN_100020d8 @ 0x100020d8

void FUN_100020d8(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10006cc0;
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
      FUN_10002939((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10006dc0);
  return;
}



// Function: FUN_1000212c @ 0x1000212c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000212c(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10006dc8 == 0) {
    FUN_10002f53();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10006868; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10006898 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10006868;
  puVar6 = DAT_10006868;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10002a10((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10002939(DAT_10006868);
  DAT_10006868 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10006dc4 = 1;
  return;
}



// Function: FUN_100021e5 @ 0x100021e5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021e5(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10006dc8 == 0) {
    FUN_10002f53();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100068bc,0x104);
  _DAT_100068a8 = &DAT_100068bc;
  pbVar2 = &DAT_100068bc;
  if (*DAT_10006dd8 != 0) {
    pbVar2 = DAT_10006dd8;
  }
  FUN_1000227e(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000227e(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10006890 = puVar1;
  _DAT_1000688c = local_8 + -1;
  return;
}



// Function: FUN_1000227e @ 0x1000227e

void __cdecl FUN_1000227e(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10006ba0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10006ba0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10002329;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10002329:
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
          if ((*(byte *)((int)&DAT_10006ba0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10006ba0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10002432 @ 0x10002432

LPSTR FUN_10002432(void)

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
  if (DAT_100069c0 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_100069c0 = 1;
LAB_10002489:
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
        FUN_10002939(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_100069c0 = 2;
  }
  else {
    if (DAT_100069c0 == 1) goto LAB_10002489;
    if (DAT_100069c0 != 2) {
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
    FUN_10002f70((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10002564 @ 0x10002564

undefined4 __cdecl FUN_10002564(int param_1)

{
  int iVar1;
  
  DAT_10006ca8 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10006ca8 != (HANDLE)0x0) {
    iVar1 = FUN_100032a5();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_10006ca8);
  }
  return 0;
}



// Function: FUN_100025a0 @ 0x100025a0

void FUN_100025a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_10006a78) {
    puVar2 = (undefined4 *)((int)DAT_10006a7c + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_10006ca8,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10006a78);
  }
  HeapFree(DAT_10006ca8,0,DAT_10006a7c);
  HeapDestroy(DAT_10006ca8);
  return;
}



// Function: FUN_10002615 @ 0x10002615

void FUN_10002615(void)

{
  if ((DAT_10006870 == 1) || ((DAT_10006870 == 0 && (DAT_10006874 == 1)))) {
    FUN_1000264e(0xfc);
    if (DAT_100069c4 != (code *)0x0) {
      (*DAT_100069c4)();
    }
    FUN_1000264e(0xff);
  }
  return;
}



// Function: FUN_1000264e @ 0x1000264e

void __cdecl FUN_1000264e(DWORD param_1)

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
  pDVar2 = &DAT_10006398;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10006428);
  if (param_1 == (&DAT_10006398)[iVar5 * 2]) {
    if ((DAT_10006870 == 1) || ((DAT_10006870 == 0 && (DAT_10006874 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000639c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10002a10(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10002a10(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10002a20(local_a4,_Dest);
      FUN_10002a20(local_a4,(uint *)&DAT_100053e4);
      FUN_10002a20(local_a4,*(uint **)(iVar5 * 8 + 0x1000639c));
      auStackY_1e3._3_4_ = 0x10002772;
      FUN_10003aee(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_100027a1 @ 0x100027a1

void FUN_100027a1(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000646c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000645c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000644c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000642c);
  return;
}



// Function: FUN_100027ca @ 0x100027ca

void FUN_100027ca(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10006428;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000646c)) && (ppuVar1 != &PTR_DAT_1000645c)) &&
       ((ppuVar1 != &PTR_DAT_1000644c && (ppuVar1 != &PTR_DAT_1000642c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10002939(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100064e8);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000644c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000645c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000646c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000642c);
  return;
}



// Function: FUN_10002836 @ 0x10002836

void __cdecl FUN_10002836(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10006428 + param_1;
  if ((&DAT_10006428)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10002836(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10002939(lpCriticalSection);
    }
    FUN_10002897(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10002897 @ 0x10002897

void __cdecl FUN_10002897(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10006428)[param_1]);
  return;
}



// Function: FUN_100028ac @ 0x100028ac

int * __cdecl FUN_100028ac(int param_1,int param_2)

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
      if (_Size < DAT_10006670 || (int)_Size - (int)DAT_10006670 == 0) {
        FUN_10002836(9);
        piVar1 = FUN_10003639(_Size);
        FUN_10002897(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_10006ca8,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_10006a3c == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10003cd8(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



// Function: FUN_10002939 @ 0x10002939

void __cdecl FUN_10002939(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_10002836(9);
    puVar1 = (uint *)FUN_100032e3((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_1000330e(puVar1,(uint)param_1);
      FUN_10002897(9);
      return;
    }
    FUN_10002897(9);
    HeapFree(DAT_10006ca8,0,param_1);
  }
  return;
}



// Function: _malloc @ 0x10002981

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10006a3c);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10002993

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_100029bf((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10003cd8(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_100029bf @ 0x100029bf

int * __cdecl FUN_100029bf(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_10006670) {
    FUN_10002836(9);
    piVar1 = FUN_10003639(param_1);
    FUN_10002897(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_10006ca8,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



// Function: FUN_10002a10 @ 0x10002a10

uint * __cdecl FUN_10002a10(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10002af8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10002af8:
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



// Function: FUN_10002a20 @ 0x10002a20

uint * __cdecl FUN_10002a20(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10002a3c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10002a6f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10002a8b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10002a3c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10002a8b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10002a8b;
    }
  }
LAB_10002a6f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10002a8b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10002af8:
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
    if (bVar1 == 0) goto LAB_10002af8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x10002b00

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10002b20;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10002b53:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10002b20:
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
  goto LAB_10002b53;
}



// Function: FUN_10002b7b @ 0x10002b7b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10002b7b(int param_1)

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
  
  FUN_10002836(0x19);
  CodePage = FUN_10002d28(param_1);
  if (CodePage != DAT_10006a80) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10006578;
LAB_10002bb8:
      if (*pUVar5 != CodePage) goto code_r0x10002bbc;
      local_8 = 0;
      puVar15 = &DAT_10006ba0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10006588);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10006570)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10006ba0 + uVar8 + 1);
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
      _DAT_10006a9c = 1;
      DAT_10006a80 = CodePage;
      DAT_10006ca4 = FUN_10002d72(CodePage);
      DAT_10006a90 = *(undefined4 *)(iVar12 + 0x1000657c);
      DAT_10006a94 = *(undefined4 *)(iVar12 + 0x10006580);
      DAT_10006a98 = *(undefined4 *)(iVar12 + 0x10006584);
      goto LAB_10002d0c;
    }
    goto LAB_10002d07;
  }
  goto LAB_10002ba2;
code_r0x10002bbc:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10006667 < (int)pUVar5) goto code_r0x10002bc7;
  goto LAB_10002bb8;
code_r0x10002bc7:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10006ca4 = 0;
    puVar15 = &DAT_10006ba0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_10006a9c = 0;
      DAT_10006a80 = CodePage;
    }
    else {
      DAT_10006a80 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10006ba0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10006ba0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10006ca4 = FUN_10002d72(CodePage);
      _DAT_10006a9c = 1;
    }
    DAT_10006a90 = 0;
    DAT_10006a94 = 0;
    DAT_10006a98 = 0;
  }
  else {
    if (DAT_10006a28 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10002d19;
    }
LAB_10002d07:
    FUN_10002da5();
  }
LAB_10002d0c:
  FUN_10002dce();
LAB_10002ba2:
  uVar14 = 0;
LAB_10002d19:
  FUN_10002897(0x19);
  return uVar14;
}



// Function: FUN_10002d28 @ 0x10002d28

int __cdecl FUN_10002d28(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10006a28 = 1;
                    /* WARNING: Could not recover jumptable at 0x10002d42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10006a28 = 1;
                    /* WARNING: Could not recover jumptable at 0x10002d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10006a58;
  }
  DAT_10006a28 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10002d72 @ 0x10002d72

undefined4 __cdecl FUN_10002d72(int param_1)

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



// Function: FUN_10002da5 @ 0x10002da5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002da5(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10006ba0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10006a80 = 0;
  _DAT_10006a9c = 0;
  DAT_10006ca4 = 0;
  DAT_10006a90 = 0;
  DAT_10006a94 = 0;
  DAT_10006a98 = 0;
  return;
}



// Function: FUN_10002dce @ 0x10002dce

void FUN_10002dce(void)

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
  
  BVar2 = GetCPInfo(DAT_10006a80,&local_18);
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
    FUN_10003f42(1,local_118,0x100,local_518,DAT_10006a80,DAT_10006ca4,0);
    FUN_10003cf3(DAT_10006ca4,0x100,local_118,0x100,local_218,0x100,DAT_10006a80,0);
    FUN_10003cf3(DAT_10006ca4,0x200,local_118,0x100,local_318,0x100,DAT_10006a80,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10006ba0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10002eda;
        }
        (&DAT_10006aa0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10006ba0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10002eda:
        (&DAT_10006aa0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10006ba0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10002f24;
        }
        (&DAT_10006aa0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10006ba0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10002f24:
        (&DAT_10006aa0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10002f53 @ 0x10002f53

void FUN_10002f53(void)

{
  if (DAT_10006dc8 == 0) {
    FUN_10002b7b(-3);
    DAT_10006dc8 = 1;
  }
  return;
}



// Function: FUN_10002f70 @ 0x10002f70

undefined4 * __cdecl FUN_10002f70(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10003127_caseD_2;
        case 3:
          goto switchD_10003127_caseD_3;
        }
        goto switchD_10003127_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10003127_caseD_0;
      case 1:
        goto switchD_10003127_caseD_1;
      case 2:
        goto switchD_10003127_caseD_2;
      case 3:
        goto switchD_10003127_caseD_3;
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
              goto switchD_10003127_caseD_2;
            case 3:
              goto switchD_10003127_caseD_3;
            }
            goto switchD_10003127_caseD_1;
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
              goto switchD_10003127_caseD_2;
            case 3:
              goto switchD_10003127_caseD_3;
            }
            goto switchD_10003127_caseD_1;
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
              goto switchD_10003127_caseD_2;
            case 3:
              goto switchD_10003127_caseD_3;
            }
            goto switchD_10003127_caseD_1;
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
switchD_10003127_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10003127_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10003127_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10003127_caseD_0:
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
        goto switchD_10002fa5_caseD_2;
      case 3:
        goto switchD_10002fa5_caseD_3;
      }
      goto switchD_10002fa5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10002fa5_caseD_0;
    case 1:
      goto switchD_10002fa5_caseD_1;
    case 2:
      goto switchD_10002fa5_caseD_2;
    case 3:
      goto switchD_10002fa5_caseD_3;
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
            goto switchD_10002fa5_caseD_2;
          case 3:
            goto switchD_10002fa5_caseD_3;
          }
          goto switchD_10002fa5_caseD_1;
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
            goto switchD_10002fa5_caseD_2;
          case 3:
            goto switchD_10002fa5_caseD_3;
          }
          goto switchD_10002fa5_caseD_1;
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
            goto switchD_10002fa5_caseD_2;
          case 3:
            goto switchD_10002fa5_caseD_3;
          }
          goto switchD_10002fa5_caseD_1;
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
switchD_10002fa5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10002fa5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10002fa5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10002fa5_caseD_0:
  return param_1;
}



// Function: FUN_100032a5 @ 0x100032a5

undefined4 FUN_100032a5(void)

{
  DAT_10006a7c = HeapAlloc(DAT_10006ca8,0,0x140);
  if (DAT_10006a7c == (LPVOID)0x0) {
    return 0;
  }
  DAT_10006a74 = 0;
  DAT_10006a78 = 0;
  DAT_10006a70 = DAT_10006a7c;
  DAT_10006a68 = 0x10;
  return 1;
}



// Function: FUN_100032e3 @ 0x100032e3

uint __cdecl FUN_100032e3(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10006a7c;
  while( true ) {
    if (DAT_10006a7c + DAT_10006a78 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_1000330e @ 0x1000330e

void __cdecl FUN_1000330e(uint *param_1,uint param_2)

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
  uVar5 = DAT_10006a6c;
  puVar2 = DAT_10006a74;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_10006a74 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_10006a6c * 0x8000 + DAT_10006a74[3]),0x8000,0x4000);
    DAT_10006a74[2] = DAT_10006a74[2] | 0x80000000U >> ((byte)DAT_10006a6c & 0x1f);
    *(undefined4 *)(DAT_10006a74[4] + 0xc4 + DAT_10006a6c * 4) = 0;
    *(char *)(DAT_10006a74[4] + 0x43) = *(char *)(DAT_10006a74[4] + 0x43) + -1;
    if (*(char *)(DAT_10006a74[4] + 0x43) == '\0') {
      DAT_10006a74[1] = DAT_10006a74[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_10006a74[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_10006a74[3],0,0x8000);
      HeapFree(DAT_10006ca8,0,(LPVOID)DAT_10006a74[4]);
      FUN_10004090(DAT_10006a74,DAT_10006a74 + 5,
                   (DAT_10006a78 * 0x14 - (int)DAT_10006a74) + -0x14 + DAT_10006a7c);
      DAT_10006a78 = DAT_10006a78 + -1;
      if (DAT_10006a74 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_10006a70 = DAT_10006a7c;
      puVar2 = param_1;
    }
  }
  DAT_10006a74 = puVar2;
  DAT_10006a6c = uVar5;
  return;
}



// Function: FUN_10003639 @ 0x10003639

int * __cdecl FUN_10003639(uint *param_1)

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
  
  puVar8 = DAT_10006a7c + DAT_10006a78 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10006a70;
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
  puVar11 = DAT_10006a7c;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10006a70 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10006a70) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10006a7c;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10006a70 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10006a70) && (param_1 = FUN_10003942(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100039f3((int)param_1);
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
  DAT_10006a70 = param_1;
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
    if (iVar9 == 0) goto LAB_100038ff;
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
LAB_100038ff:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10006a74)) && (local_8 == DAT_10006a6c)) {
    DAT_10006a74 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10003942 @ 0x10003942

undefined4 * FUN_10003942(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10006a78 == DAT_10006a68) {
    pvVar2 = HeapReAlloc(DAT_10006ca8,0,DAT_10006a7c,(DAT_10006a68 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10006a68 = DAT_10006a68 + 0x10;
    DAT_10006a7c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10006a7c + DAT_10006a78 * 0x14);
  pvVar2 = HeapAlloc(DAT_10006ca8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10006a78 = DAT_10006a78 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10006ca8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_100039f3 @ 0x100039f3

int __cdecl FUN_100039f3(int param_1)

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



// Function: FUN_10003aee @ 0x10003aee

int __cdecl FUN_10003aee(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10006a2c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10006a2c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10006a2c != (FARPROC)0x0) {
        DAT_10006a30 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10006a34 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10003b3d;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10003b3d:
    if (DAT_10006a30 != (FARPROC)0x0) {
      iVar1 = (*DAT_10006a30)();
      if ((iVar1 != 0) && (DAT_10006a34 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10006a34)(iVar1);
      }
    }
    iVar1 = (*DAT_10006a2c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10003b80

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
        goto joined_r0x10003bbe;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10003bfb;
        goto LAB_10003c69;
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
joined_r0x10003c65:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10003c69:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10003bfb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10003c65;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10003c65;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10003c65;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10003bbe:
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
LAB_10003bfb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: _memset @ 0x10003c80

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



// Function: FUN_10003cd8 @ 0x10003cd8

undefined4 __cdecl FUN_10003cd8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10006a38 != (code *)0x0) {
    iVar1 = (*DAT_10006a38)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10003cf3 @ 0x10003cf3

int __cdecl
FUN_10003cf3(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10005468;
  puStack_10 = &LAB_100044c0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10006a60 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10006a60 = 2;
    }
    else {
      DAT_10006a60 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10003f17(param_3,param_4);
  }
  if (DAT_10006a60 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10006a60 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10006a58;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_100045a0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_100045a0();
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



// Function: FUN_10003f17 @ 0x10003f17

int __cdecl FUN_10003f17(char *param_1,int param_2)

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



// Function: FUN_10003f42 @ 0x10003f42

BOOL __cdecl
FUN_10003f42(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_10005480;
  puStack_10 = &LAB_100044c0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10006a64;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10006a64 == 0) {
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
  DAT_10006a64 = iVar3;
  if (DAT_10006a64 != 2) {
    if (DAT_10006a64 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10006a58;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_100045a0();
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
    param_6 = DAT_10006a48;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10004090 @ 0x10004090

undefined4 * __cdecl FUN_10004090(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10004247_caseD_2;
        case 3:
          goto switchD_10004247_caseD_3;
        }
        goto switchD_10004247_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10004247_caseD_0;
      case 1:
        goto switchD_10004247_caseD_1;
      case 2:
        goto switchD_10004247_caseD_2;
      case 3:
        goto switchD_10004247_caseD_3;
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
              goto switchD_10004247_caseD_2;
            case 3:
              goto switchD_10004247_caseD_3;
            }
            goto switchD_10004247_caseD_1;
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
              goto switchD_10004247_caseD_2;
            case 3:
              goto switchD_10004247_caseD_3;
            }
            goto switchD_10004247_caseD_1;
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
              goto switchD_10004247_caseD_2;
            case 3:
              goto switchD_10004247_caseD_3;
            }
            goto switchD_10004247_caseD_1;
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
switchD_10004247_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10004247_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10004247_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10004247_caseD_0:
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
        goto switchD_100040c5_caseD_2;
      case 3:
        goto switchD_100040c5_caseD_3;
      }
      goto switchD_100040c5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100040c5_caseD_0;
    case 1:
      goto switchD_100040c5_caseD_1;
    case 2:
      goto switchD_100040c5_caseD_2;
    case 3:
      goto switchD_100040c5_caseD_3;
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
            goto switchD_100040c5_caseD_2;
          case 3:
            goto switchD_100040c5_caseD_3;
          }
          goto switchD_100040c5_caseD_1;
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
            goto switchD_100040c5_caseD_2;
          case 3:
            goto switchD_100040c5_caseD_3;
          }
          goto switchD_100040c5_caseD_1;
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
            goto switchD_100040c5_caseD_2;
          case 3:
            goto switchD_100040c5_caseD_3;
          }
          goto switchD_100040c5_caseD_1;
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
switchD_100040c5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100040c5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100040c5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100040c5_caseD_0:
  return param_1;
}



// Function: __global_unwind2 @ 0x100043c8

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100043e0,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000440a

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
  puStack_18 = &LAB_100043e8;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000449e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_1000449e @ 0x1000449e

void FUN_1000449e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10006688 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10006684 = in_EAX;
  DAT_1000668c = unaff_EBP;
  return;
}



// Function: FUN_1000457d @ 0x1000457d

void FUN_1000457d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_100045a0 @ 0x100045a0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100045a0(void)

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




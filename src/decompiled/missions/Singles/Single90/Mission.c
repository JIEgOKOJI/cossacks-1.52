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
  DWORD DVar1;
  undefined1 *puVar2;
  
                    /* 0x1020  1  OnInit */
  RegisterVar(&DAT_1000e040,8);
  RegisterDynGroup(&DAT_10012af0);
  RegisterVar(&DAT_10012af0,8);
  RegisterDynGroup(&DAT_10012ae8);
  RegisterVar(&DAT_10012ae8,8);
  RegisterVar(&DAT_10012840,0x1ce);
  puVar2 = &DAT_10012849;
  do {
    RegisterDynGroup(puVar2 + -9);
    puVar2[-1] = 1;
    *puVar2 = 1;
    *(undefined4 *)(puVar2 + 5) = 0x640;
    *(undefined4 *)(puVar2 + 9) = 0xffff;
    *(undefined4 *)(puVar2 + 1) = 0;
    puVar2 = puVar2 + 0x16;
  } while ((int)puVar2 < 0x10012a17);
  FUN_10002820(0x10012a58,0x12,0xe);
  FUN_100037e0(0x10012a10,9,'\x0e');
  RegisterFormation(&DAT_10012758,s__ALONE_1000e1f0);
  RegisterUnitType(&DAT_10012770,s_Fregat_PO__1000e1e4);
  RegisterUnitType(&DAT_10012768,s_FregatNEW_PO__1000e1d4);
  RegisterUnitType(&DAT_10012760,s_Yahta_PO__1000e1c8);
  RegisterUnits(&DAT_100127c0,s_GPortCentW_1000e1bc);
  RegisterUnits(&DAT_100127b0,s_GPortCentN_1000e1b0);
  RegisterUnits(&DAT_100127a0,s_GPortCentE_1000e1a4);
  RegisterUnits(&DAT_10012790,s_GPortWest_1000e198);
  RegisterUnits(&DAT_10012780,s_GPortEast_1000e18c);
  RegisterZone(&DAT_100127b8,s_ZPortCentW_1000e180);
  RegisterZone(&DAT_100127a8,s_ZPortCentN_1000e174);
  RegisterZone(&DAT_10012798,s_ZPortCentE_1000e168);
  RegisterZone(&DAT_10012788,s_ZPortWest_1000e15c);
  RegisterZone(&DAT_10012778,s_ZPortEest_1000e150);
  RegisterVar(&DAT_10012828,0x11);
  RegisterVar(&DAT_10012810,0x11);
  RegisterVar(&DAT_100127f8,0x11);
  RegisterVar(&DAT_100127c8,0x11);
  RegisterVar(&DAT_100127e0,0x11);
  RegisterDynGroup(&DAT_10012750);
  RegisterVar(&DAT_10012750,8);
  RegisterVar(&DAT_10012afc,4);
  RegisterVar(&DAT_10012b00,4);
  RegisterZone(&DAT_10012720,s_ZAEnemy1_1000e144);
  RegisterZone(&DAT_10012728,s_ZAEnemy2_1000e138);
  RegisterZone(&DAT_10012730,s_ZAEnemy3_1000e12c);
  RegisterZone(&DAT_10012738,s_ZAEnemy4_1000e120);
  RegisterZone(&DAT_10012740,s_ZAEnemy5_1000e114);
  RegisterZone(&DAT_10012748,s_ZAEnemy6_1000e108);
  RegisterZone(&DAT_10012700,s_ZGWest1_1000e100);
  RegisterZone(&DAT_10012708,s_ZGWest2_1000e0f8);
  RegisterZone(&DAT_10012710,s_ZGWest3_1000e0f0);
  RegisterZone(&DAT_10012718,s_ZGWest4_1000e0e8);
  RegisterZone(&DAT_100126e8,s_ZGEest1_1000e0e0);
  RegisterZone(&DAT_100126f0,s_ZGEest2_1000e0d8);
  RegisterZone(&DAT_100126f8,s_ZGEest3_1000e0d0);
  RegisterZone(&DAT_100126d0,s_ZGCenter1_1000e0c4);
  RegisterZone(&DAT_100126d8,s_ZGCenter2_1000e0b8);
  RegisterZone(&DAT_100126e0,s_ZGCenter3_1000e0ac);
  RegisterZone(&DAT_100126b8,s_ZGBack1_1000e0a4);
  RegisterZone(&DAT_100126c0,s_ZGBack2_1000e09c);
  RegisterZone(&DAT_100126c8,s_ZGBack3_1000e094);
  RegisterVar(&DAT_10012b04,4);
  RegisterDynGroup(&DAT_100126b0);
  RegisterDynGroup(&DAT_100126a8);
  RegisterUnits(&DAT_100126a0,s_GMineW1_1000e08c);
  RegisterUnits(&DAT_10012698,s_GMineW2_1000e084);
  RegisterUnits(&DAT_10012690,s_GMineW3_1000e07c);
  RegisterUnits(&DAT_10012688,s_GMineE1_1000e074);
  RegisterUnits(&DAT_10012680,s_GMineE2_1000e06c);
  RegisterUnits(&DAT_10012678,s_GMineE3_1000e064);
  RegisterUnitType(&DAT_10012670,s_PorPO_PO__1000e058);
  RegisterVar(&DAT_1000e048,4);
  SetPlayerName(1,s_PORTUGAL_1000e04c);
  DVar1 = FUN_1000392f((int *)0x0);
  FUN_10003900(DVar1);
  return;
}



// Function: ProcessScenary @ 0x10001360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 local_6c [20];
  int local_58;
  int local_54;
  undefined1 local_40 [4];
  ushort local_3c;
  ushort uStack_3a;
  int local_2c;
  int local_28;
  uint local_14;
  uint local_10;
  int local_c;
  char local_5;
  
                    /* 0x1360  2  ProcessScenary */
  DAT_10012828 = &DAT_10012790;
  _DAT_1001282c = &DAT_10012788;
  DAT_10012810 = &DAT_10012780;
  _DAT_10012814 = &DAT_10012778;
  _DAT_100127f8 = &DAT_100127c0;
  _DAT_100127fc = &DAT_100127b8;
  _DAT_100127e0 = &DAT_100127a0;
  _DAT_100127e4 = &DAT_10012798;
  _DAT_100127c8 = &DAT_100127b0;
  _DAT_100127cc = &DAT_100127a8;
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    DAT_10012830 = 1;
    _DAT_10012831 = 10;
    DAT_10012835 = (5 - iVar2) * 1000;
    iVar2 = GetDiff(0);
    DAT_10012818 = 1;
    _DAT_10012819 = 0xb;
    DAT_1001281d = (5 - iVar2) * 1000;
    iVar2 = GetDiff(0);
    DAT_10012800 = 1;
    _DAT_10012801 = 0xc;
    DAT_10012805 = (5 - iVar2) * 1000;
    iVar2 = GetDiff(0);
    DAT_100127e8 = 1;
    _DAT_100127e9 = 0xd;
    DAT_100127ed = (5 - iVar2) * 1000;
    iVar2 = GetDiff(0);
    DAT_100127d0 = 1;
    _DAT_100127d1 = 0xe;
    DAT_100127d5 = (5 - iVar2) * 1000;
    iVar2 = GetDiff(0);
    SetResource(0,0,(8 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,3,(5 - iVar2) * 2000);
    iVar2 = GetDiff(0);
    SetResource(0,2,(8 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,1,(5 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,4,(6 - iVar2) * 1000);
    iVar2 = GetDiff(0);
    SetResource(0,5,(6 - iVar2) * 1000);
    RunTimer(_DAT_10012831 & 0xff,DAT_10012835);
    RunTimer(_DAT_10012819 & 0xff,DAT_1001281d);
    RunTimer(_DAT_10012801 & 0xff,DAT_10012805);
    RunTimer(_DAT_100127e9 & 0xff,DAT_100127ed);
    RunTimer(_DAT_100127d1 & 0xff,DAT_100127d5);
    iVar2 = GetDiff(0);
    ShowPageParam(s__PAGE2401_1000e234,iVar2 * -0x14 + 0x96);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    uVar3 = GetDiff(0);
    switch(uVar3) {
    case 0:
      uVar3 = 0x44;
      break;
    case 1:
      uVar3 = 0x45;
      break;
    case 2:
      uVar3 = 0x46;
      break;
    case 3:
      uVar3 = 0x47;
      break;
    default:
      goto switchD_10001625_default;
    }
    EnableMission(uVar3);
  }
switchD_10001625_default:
  DAT_10012b04 = (DAT_10012b04 + 1) % 3;
  SaveSelectedUnits(0,&DAT_10012ae8,0);
  if (DAT_10012b04 == 0) {
    puVar6 = &DAT_10012948;
    do {
      if (0x10012a0d < (int)puVar6) break;
      iVar2 = FUN_10002440((uint)puVar6,0x10012af0,1,0);
      if ((char)iVar2 == '\0') {
        FUN_10001f00((int)puVar6,1,0x10012720,6,0);
      }
      puVar6 = puVar6 + 0x16;
    } while (DAT_10012b04 == 0);
  }
  if (DAT_10012b04 == 1) {
    puVar6 = &DAT_10012882;
    do {
      if (0x100128c3 < (int)puVar6) break;
      iVar2 = FUN_10002440((uint)(puVar6 + -0x42),0x10012af0,1,0);
      if ((char)iVar2 == '\0') {
        FUN_10001f00((int)(puVar6 + -0x42),1,0x10012700,4,1);
      }
      iVar2 = FUN_10002440((uint)puVar6,0x10012af0,1,0);
      if ((char)iVar2 == '\0') {
        FUN_10001f00((int)puVar6,1,0x100126e8,3,0);
      }
      iVar2 = FUN_10002440((uint)(puVar6 + 0x42),0x10012af0,1,0);
      if ((char)iVar2 == '\0') {
        FUN_10001f00((int)(puVar6 + 0x42),1,0x100126d0,3,0);
      }
      iVar2 = FUN_10002440((uint)(puVar6 + 0x84),0x10012af0,1,0);
      if ((char)iVar2 == '\0') {
        FUN_10001f00((int)(puVar6 + 0x84),1,0x100126b8,3,0);
      }
      puVar6 = puVar6 + 0x16;
    } while (DAT_10012b04 == 1);
  }
  pcVar9 = ClearSelection_exref;
  ClearSelection(0);
  SelectUnits(&DAT_10012ae8,0);
  cVar1 = '\0';
  iVar2 = FUN_10001eb0(0x10012840,3);
  FUN_10001de0(&DAT_10012828,iVar2,cVar1);
  cVar1 = '\0';
  iVar2 = FUN_10001eb0(0x10012882,3);
  FUN_10001de0(&DAT_10012810,iVar2,cVar1);
  cVar1 = '\x01';
  iVar2 = FUN_10001eb0(0x100128c4,2);
  FUN_10001de0(&DAT_100127f8,iVar2,cVar1);
  cVar1 = '\x01';
  iVar2 = FUN_10001eb0(0x100128f0,2);
  FUN_10001de0(&DAT_100127c8,iVar2,cVar1);
  cVar1 = '\x01';
  iVar2 = FUN_10001eb0(0x1001291c,2);
  FUN_10001de0(&DAT_100127e0,iVar2,cVar1);
  cVar1 = '\0';
  iVar2 = FUN_10001eb0(0x10012948,3);
  FUN_10001de0(&DAT_100127f8,iVar2,cVar1);
  cVar1 = '\0';
  iVar2 = FUN_10001eb0(0x1001298a,3);
  FUN_10001de0(&DAT_100127c8,iVar2,cVar1);
  cVar1 = '\0';
  iVar2 = FUN_10001eb0(0x100129cc,3);
  FUN_10001de0(&DAT_100127e0,iVar2,cVar1);
  SaveSelectedUnits(0,&DAT_10012ae8,0);
  if (DAT_10012b04 == 2) {
    ClearSelection(0);
    SelectUnitsType(&DAT_10012ae0,0,0);
    SaveSelectedUnits(0,&DAT_100126a8,0);
    iVar2 = GetTotalAmount0(&DAT_100126a8);
    if (iVar2 != 0) {
      ClearSelection(0);
      puVar6 = &DAT_10012a10;
      do {
        SelectUnitsType(puVar6,0,1);
        puVar6 = puVar6 + 8;
      } while ((int)puVar6 < 0x10012a58);
      SaveSelectedUnits(0,&DAT_100126b0,0);
      iVar2 = GetTotalAmount0(&DAT_100126b0);
      if (iVar2 != 0) {
        iVar7 = 0;
        local_c = 0;
        iVar2 = GetTotalAmount0(&DAT_100126b0);
        if (0 < iVar2) {
          do {
            GetUnitInfo(&DAT_100126b0,iVar7,local_40);
            iVar7 = 0;
            local_5 = '\0';
            iVar2 = GetTotalAmount0(&DAT_100126a8);
            if (0 < iVar2) {
              do {
                if (local_5 != '\0') break;
                GetUnitInfo(&DAT_100126a8,iVar7,local_6c);
                local_10 = local_54 - local_28;
                local_14 = local_58 - local_2c;
                uVar4 = local_14;
                if ((int)local_14 < 0) {
                  uVar4 = -local_14;
                }
                uVar8 = local_10;
                if ((int)local_10 < 0) {
                  uVar8 = -local_10;
                }
                uVar5 = uVar4;
                if (uVar4 <= uVar8) {
                  uVar5 = uVar8;
                }
                if (uVar5 + uVar4 + uVar8 >> 1 < 600) {
                  if ((uint)uStack_3a < local_3c + 0x32) {
                    local_3c = uStack_3a;
                  }
                  else {
                    local_3c = local_3c + 0x32;
                  }
                  SetUnitInfo(local_40);
                  local_5 = '\x01';
                }
                iVar7 = iVar7 + 1;
                iVar2 = GetTotalAmount0(&DAT_100126a8);
              } while (iVar7 < iVar2);
            }
            iVar7 = local_c + 1;
            local_c = iVar7;
            iVar2 = GetTotalAmount0(&DAT_100126b0);
            pcVar9 = ClearSelection_exref;
          } while (iVar7 < iVar2);
        }
      }
    }
  }
  (*pcVar9)(0);
  SelectUnits(&DAT_10012ae8,0);
  (*pcVar9)(1);
  SelectUnits1(1,&DAT_100126a0,0);
  SelectUnits1(1,&DAT_10012698,1);
  SelectUnits1(1,&DAT_10012690,1);
  SelectUnits1(1,DAT_10012828,1);
  SaveSelectedUnits(1,&DAT_10012ae8,0);
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10012ae8), iVar2 == 0)) {
    SetTrigg(2,0);
    iVar2 = GetDiff(0);
    DAT_10012835 = DAT_10012835 + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_1001281d = DAT_1001281d + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_10012805 = DAT_10012805 + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_100127ed = DAT_100127ed + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_100127d5 = DAT_100127d5 + (iVar2 + 7) * 100;
    ShowPage(s__PAGE2402_1000e228);
  }
  (*pcVar9)(1);
  SelectUnits1(1,&DAT_10012688,0);
  SelectUnits1(1,&DAT_10012680,1);
  SelectUnits1(1,&DAT_10012678,1);
  SelectUnits1(1,DAT_10012810,1);
  SaveSelectedUnits(1,&DAT_10012ae8,0);
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_10012ae8), iVar2 == 0)) {
    SetTrigg(3,0);
    iVar2 = GetDiff(0);
    DAT_10012835 = DAT_10012835 + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_1001281d = DAT_1001281d + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_10012805 = DAT_10012805 + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_100127ed = DAT_100127ed + (iVar2 + 7) * 100;
    iVar2 = GetDiff(0);
    DAT_100127d5 = DAT_100127d5 + (iVar2 + 7) * 100;
    ShowPage(s__PAGE2403_1000e21c);
  }
  SaveSelectedUnits(0,&DAT_10012ae8,0);
  GetTotalAmount0(&DAT_10012750);
  iVar2 = GetTotalAmount0(&DAT_10012750);
  if (DAT_10012afc != iVar2 && -1 < DAT_10012afc - iVar2) {
    iVar2 = GetTotalAmount0(&DAT_10012750);
    DAT_10012b00 = DAT_10012b00 + (DAT_10012afc - iVar2);
  }
  (*pcVar9)(0);
  puVar6 = &DAT_10012a10;
  do {
    SelectUnitsType(puVar6,0,1);
    puVar6 = puVar6 + 8;
  } while ((int)puVar6 < 0x10012a58);
  SaveSelectedUnits(0,&DAT_10012750,0);
  DAT_10012afc = GetTotalAmount0(&DAT_10012750);
  (*pcVar9)(0);
  SelectUnits(&DAT_10012ae8,0);
  if (DAT_1000e048 < DAT_10012b00) {
    DAT_1000e048 = DAT_1000e048 + 0x14;
    ShowPageParam(s__PAGE2406_1000e210,DAT_10012b00);
  }
  (*pcVar9)(1);
  SelectUnitsType(&DAT_10012670,1,0);
  SaveSelectedUnits(1,&DAT_10012ae8,0);
  iVar2 = GetTotalAmount0(&DAT_10012ae8);
  if (iVar2 == 0) {
    ShowPage(s__PAGE2404_1000e204);
    ShowVictory();
  }
  iVar2 = GetDiff(0);
  if (iVar2 * -0x14 + 0x96 < DAT_10012b00) {
    ShowPageParam(s__PAGE2405_1000e1f8,DAT_10012b00);
    LooseGame();
  }
  return;
}



// Function: FUN_10001de0 @ 0x10001de0

void __thiscall FUN_10001de0(void *this,int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = GetTotalAmount0(*(undefined4 *)this);
  if ((iVar2 != 0) && (param_1 != 0)) {
    cVar1 = TimerDone(*(undefined1 *)((int)this + 9));
    if (cVar1 != '\0') {
      RunTimer(*(undefined1 *)((int)this + 9),*(undefined4 *)((int)this + 0xd));
      if (param_2 != '\0') {
        CreateObject0(param_1,&DAT_10012758,&DAT_10012768,1,*(undefined4 *)((int)this + 4),0);
        return;
      }
      uVar3 = _rand();
      uVar3 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      if (uVar3 == 0) {
        CreateObject0(param_1,&DAT_10012758,&DAT_10012770,1,*(undefined4 *)((int)this + 4),0);
      }
      else if (uVar3 == 1) {
        CreateObject0(param_1,&DAT_10012758,&DAT_10012760,1,*(undefined4 *)((int)this + 4),0);
        return;
      }
    }
  }
  return;
}



// Function: FUN_10001eb0 @ 0x10001eb0

int __cdecl FUN_10001eb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < param_2) {
    do {
      iVar1 = GetTotalAmount0(iVar3);
      if (iVar1 == 0) {
        return param_1 + iVar2 * 0x16;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x16;
    } while (iVar2 < param_2);
  }
  return 0;
}



// Function: FUN_10001f00 @ 0x10001f00

void __cdecl FUN_10001f00(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_40 [20];
  int local_2c;
  int local_28;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  iVar4 = GetTotalAmount0(param_1);
  iVar3 = param_4;
  iVar2 = param_3;
  if (((iVar4 != 0) && (param_3 != 0)) && (0 < param_4)) {
    local_c = 0;
    if (*(char *)(iVar1 + 8) != '\0') {
      GetZoneCoor(param_3,&param_5,&param_1);
      GetUnitInfo(iVar1,0,local_40);
      uVar5 = local_28 - param_1;
      local_10 = local_2c - param_5;
      uVar6 = local_10;
      if ((int)local_10 < 0) {
        uVar6 = -local_10;
      }
      if ((int)uVar5 < 0) {
        uVar5 = -uVar5;
      }
      uVar8 = uVar6;
      if (uVar6 <= uVar5) {
        uVar8 = uVar5;
      }
      uVar6 = uVar8 + uVar6 + uVar5 >> 1;
      local_8 = 1;
      if (1 < param_4) {
        do {
          GetZoneCoor(param_3,&param_5,&param_1);
          local_10 = local_28 - param_1;
          local_14 = local_2c - param_5;
          uVar5 = local_14;
          if ((int)local_14 < 0) {
            uVar5 = -local_14;
          }
          uVar8 = local_10;
          if ((int)local_10 < 0) {
            uVar8 = -local_10;
          }
          uVar7 = uVar5;
          if (uVar5 <= uVar8) {
            uVar7 = uVar8;
          }
          if (uVar7 + uVar5 + uVar8 >> 1 < uVar6) {
            local_14 = local_28 - param_1;
            local_10 = local_2c - param_5;
            uVar6 = local_10;
            if ((int)local_10 < 0) {
              uVar6 = -local_10;
            }
            uVar5 = local_14;
            if ((int)local_14 < 0) {
              uVar5 = -local_14;
            }
            uVar8 = uVar6;
            if (uVar6 <= uVar5) {
              uVar8 = uVar5;
            }
            uVar6 = uVar8 + uVar6 + uVar5 >> 1;
            local_c = local_8;
          }
          local_8 = local_8 + 1;
        } while (local_8 < param_4);
      }
      *(undefined1 *)(iVar1 + 8) = 0;
      *(int *)(iVar1 + 10) = local_c;
      SelectUnits(iVar1,0);
      SelSendAndKill(param_2,param_3 + *(int *)(iVar1 + 10) * 8,0,0);
      return;
    }
    iVar4 = GetUnitsAmount1(param_3 + *(int *)(iVar1 + 10) * 8,iVar1);
    if (iVar4 != 0) {
      if ((char)param_5 == '\0') {
        iVar4 = *(int *)(iVar1 + 10);
        if (iVar4 == iVar3 + -1) {
          *(undefined1 *)(iVar1 + 9) = 0;
        }
        if (iVar4 == 0) {
          *(undefined1 *)(iVar1 + 9) = 1;
        }
        if ((*(char *)(iVar1 + 9) == '\0') ||
           (*(int *)(iVar1 + 10) = iVar4 + 1, *(char *)(iVar1 + 9) == '\0')) {
          *(int *)(iVar1 + 10) = *(int *)(iVar1 + 10) + -1;
        }
      }
      else {
        *(int *)(iVar1 + 10) = (*(int *)(iVar1 + 10) + 1) % iVar3;
      }
      SelectUnits(iVar1,0);
      SelSendAndKill(param_2,iVar2 + *(int *)(iVar1 + 10) * 8,0,0);
    }
  }
  return;
}



// Function: FUN_10002110 @ 0x10002110

bool __cdecl FUN_10002110(undefined4 param_1)

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



// Function: FUN_10002150 @ 0x10002150

void __cdecl FUN_10002150(undefined4 param_1,int param_2,ushort *param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_4c [5];
  int local_38;
  int local_34;
  undefined1 local_20 [4];
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000bdd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ClearSelection(param_2);
  uVar3 = param_5;
  if (0 < (int)param_5) {
    do {
      SelectUnitsType(param_4,param_2,1);
      param_4 = param_4 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_10002110(param_1);
  SaveSelectedUnits(param_2,param_1,0);
  ClearSelection(param_2);
  local_1c = (undefined4 *)0x0;
  local_20[0] = param_2._3_1_;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_8 = 0;
  param_2 = 0;
  iVar1 = GetTotalAmount0(param_1);
  if (0 < iVar1) {
    do {
      GetUnitInfo(param_1,param_2,local_4c);
      param_5 = (uint)param_3[1] - local_34;
      uVar3 = (uint)*param_3 - local_38;
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      uVar4 = param_5;
      if ((int)param_5 < 0) {
        uVar4 = -param_5;
      }
      uVar2 = uVar3;
      if (uVar3 <= uVar4) {
        uVar2 = uVar4;
      }
      if (uVar2 + uVar3 + uVar4 >> 1 <= (*(uint *)(param_3 + 2) & 0xffffff)) {
        param_5 = local_4c[0] & 0xffff;
        FUN_10002610(local_20,local_18,1,&param_5);
      }
      param_2 = param_2 + 1;
      iVar1 = GetTotalAmount0(param_1);
    } while (param_2 < iVar1);
  }
  FUN_10002110(param_1);
  puVar5 = local_1c;
  if (local_1c != local_18) {
    do {
      InsertUnitToGroup(0,param_1,*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_18);
  }
  FUN_10003a0b((undefined *)local_1c);
  ExceptionList = local_10;
  return;
}



// Function: FUN_100022c0 @ 0x100022c0

void __cdecl FUN_100022c0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_64 [20];
  int local_50;
  int local_4c;
  uint local_38 [5];
  int local_24;
  int local_20;
  uint local_c;
  uint local_8;
  
  iVar1 = param_1;
  iVar2 = GetTotalAmount0(param_1);
  if (iVar2 != 0) {
    iVar2 = GetTotalAmount0(param_2);
    if (iVar2 == 1) {
      GetUnitInfo(param_1,0,local_38);
      GetUnitInfo(param_2,0,local_64);
      uVar5 = local_20 - local_4c;
      local_8 = local_24 - local_50;
      uVar3 = local_8;
      if ((int)local_8 < 0) {
        uVar3 = -local_8;
      }
      if ((int)uVar5 < 0) {
        uVar5 = -uVar5;
      }
      uVar6 = uVar3;
      if (uVar3 <= uVar5) {
        uVar6 = uVar5;
      }
      param_2 = uVar6 + uVar3 + uVar5 >> 1;
      uVar3 = local_38[0] & 0xffff;
      iVar2 = GetTotalAmount0(param_1);
      param_1 = 1;
      if (1 < iVar2) {
        do {
          GetUnitInfo(iVar1,param_1,local_38);
          local_8 = local_20 - local_4c;
          local_c = local_24 - local_50;
          uVar5 = local_c;
          if ((int)local_c < 0) {
            uVar5 = -local_c;
          }
          uVar6 = local_8;
          if ((int)local_8 < 0) {
            uVar6 = -local_8;
          }
          uVar4 = uVar5;
          if (uVar5 <= uVar6) {
            uVar4 = uVar6;
          }
          if (uVar4 + uVar5 + uVar6 >> 1 < param_2) {
            uVar5 = local_20 - local_4c;
            local_c = local_24 - local_50;
            uVar3 = local_c;
            if ((int)local_c < 0) {
              uVar3 = -local_c;
            }
            if ((int)uVar5 < 0) {
              uVar5 = -uVar5;
            }
            uVar6 = uVar3;
            if (uVar3 <= uVar5) {
              uVar6 = uVar5;
            }
            param_2 = uVar6 + uVar3 + uVar5 >> 1;
            uVar3 = local_38[0] & 0xffff;
          }
          param_1 = param_1 + 1;
          iVar2 = GetTotalAmount0(iVar1);
        } while (param_1 < iVar2);
      }
      if (uVar3 < 0xffff) {
        FUN_10002110(iVar1);
        InsertUnitToGroup(0,iVar1,uVar3);
      }
    }
  }
  return;
}



// Function: FUN_10002440 @ 0x10002440

int __cdecl FUN_10002440(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  ushort auStack_34 [4];
  uint auStack_2c [11];
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  UnitsCenter(auStack_34,param_1,*(undefined2 *)(param_1 + 0xe));
  FUN_10002150(param_2,param_4,auStack_34,0x10012a10,9);
  iVar1 = GetTotalAmount0(param_2);
  if (iVar1 != 0) {
    FUN_100022c0(param_2,param_1);
    SelectUnits(param_1,0);
    GetUnitInfo(param_2,0,auStack_2c);
    FUN_100025a0(auStack_34,param_1,param_3,(int *)(param_1 + 0x12),auStack_2c[0] & 0xffff);
    SelAttackGroup(param_3,param_2);
    *(undefined1 *)(param_1 + 8) = 1;
    FUN_10002110(param_2);
    return CONCAT31(extraout_var,1);
  }
  FUN_10002150(param_2,param_4,auStack_34,0x10012a58,0x12);
  iVar1 = GetTotalAmount0(param_2);
  if (iVar1 != 0) {
    FUN_100022c0(param_2,param_1);
    SelectUnits(param_1,0);
    GetUnitInfo(param_1,0,auStack_2c);
    FUN_100025a0(auStack_34,param_2,param_3,(int *)(param_1 + 0x12),auStack_2c[0] & 0xffff);
    SelAttackGroup(param_3,param_2);
    *(undefined1 *)(param_1 + 8) = 1;
    FUN_10002110(param_2);
    return CONCAT31(extraout_var_00,1);
  }
  *(undefined4 *)(param_1 + 0x12) = 0xffff;
  FUN_10002110(param_2);
  return (uint)extraout_var_01 << 8;
}



// Function: FUN_100025a0 @ 0x100025a0

void __cdecl
FUN_100025a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  if (param_5 != *param_4) {
    *param_4 = param_5;
    SelectUnits(param_2,0);
    SelSendAndKill(param_3,param_1,0,0);
  }
  return;
}



// Function: FUN_100025e0 @ 0x100025e0

void __fastcall FUN_100025e0(int param_1)

{
  FUN_10003a0b(*(undefined **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// Function: FUN_10002610 @ 0x10002610

void __thiscall FUN_10002610(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar7 >> 2)) {
    if ((uint)((int)puVar7 - (int)param_1 >> 2) < param_2) {
      puVar5 = param_1 + param_2;
      if (param_1 != puVar7) {
        puVar4 = puVar5 + -param_2;
        do {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar4 != puVar7);
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (iVar2 = param_2 - ((int)puVar7 - (int)param_1 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *param_3;
        }
        puVar7 = puVar7 + 1;
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (; param_1 != puVar7; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
      return;
    }
    if (param_2 != 0) {
      puVar5 = puVar7;
      for (puVar4 = puVar7 + -param_2; puVar4 != puVar7; puVar4 = puVar4 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (puVar5 = puVar7 + -param_2; param_1 != puVar5; puVar5 = puVar5 + -1) {
        puVar7 = puVar7 + -1;
        *puVar7 = puVar5[-1];
      }
      puVar7 = param_1 + param_2;
      for (; param_1 != puVar7; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
    }
    return;
  }
  iVar2 = *(int *)((int)this + 4);
  if ((iVar2 == 0) || (uVar6 = (int)puVar7 - iVar2 >> 2, uVar6 <= param_2)) {
    uVar6 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar7 - iVar2 >> 2;
  }
  iVar2 = iVar2 + uVar6;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = operator_new(iVar3 * 4);
  puVar5 = puVar4;
  for (puVar7 = *(undefined4 **)((int)this + 4); uVar6 = param_2, puVar1 = puVar5, puVar7 != param_1
      ; puVar7 = puVar7 + 1) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar7;
    }
    puVar5 = puVar5 + 1;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar7 = puVar5 + param_2;
  if (param_1 != puVar1) {
    puVar5 = (undefined4 *)((int)puVar7 + (param_2 * -4 - (int)puVar5) + (int)param_1);
    do {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar5;
      }
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar1);
  }
  FUN_10003a0b(*(undefined **)((int)this + 4));
  *(undefined4 **)((int)this + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    *(undefined4 **)((int)this + 4) = puVar4;
    *(undefined4 **)((int)this + 8) = puVar4 + param_2;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar4;
  *(undefined4 **)((int)this + 8) = puVar4 + (*(int *)((int)this + 8) - iVar2 >> 2) + param_2;
  return;
}



// Function: FUN_10002820 @ 0x10002820

void __cdecl FUN_10002820(int param_1,undefined4 param_2,undefined1 param_3)

{
  switch(param_3) {
  case 1:
    RegisterUnitType(param_1,s_Europ_BA__1000f5c4);
    RegisterUnitType(param_1 + 8,s_Dom_Prussia_BA__1000f5b4);
    RegisterUnitType(param_1 + 0x10,s_Melnica_BA__1000f5a8);
    RegisterUnitType(param_1 + 0x18,s_Sclad1_BA__1000f59c);
    RegisterUnitType(param_1 + 0x20,s_shahta_BA__1000f590);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_BA__1000f580);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_BA__1000f570);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_BA__1000f564);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_Swesair_BA__1000f54c);
    RegisterUnitType(param_1 + 0x48,s_Cercov_Poland_BA__1000f538);
    RegisterUnitType(param_1 + 0x50,s_akademia_E_BA__1000f528);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_BA__1000f518);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_evro_BA__1000f504);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_BA__1000f4f8);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_BA__1000f4e4);
    RegisterUnitType(param_1 + 0x78,s_Rinok_BA__1000f4d8);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_BA__1000f4cc);
    RegisterUnitType(param_1 + 0x88,s_PorE_BA__1000f4c0);
    return;
  case 2:
    RegisterUnitType(param_1,s_Europ_DA__1000f4b4);
    RegisterUnitType(param_1 + 8,s_Dom_Prussia_DA__1000f4a4);
    RegisterUnitType(param_1 + 0x10,s_Melnica_DA__1000f498);
    RegisterUnitType(param_1 + 0x18,s_Sclad1_DA__1000f48c);
    RegisterUnitType(param_1 + 0x20,s_shahta_DA__1000f480);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_DA__1000f470);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_DA__1000f460);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_DA__1000f454);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_Swesair_DA__1000f43c);
    RegisterUnitType(param_1 + 0x48,s_Cercov_Poland_DA__1000f428);
    RegisterUnitType(param_1 + 0x50,s_akademia_E_DA__1000f418);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_DA__1000f408);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_evro_DA__1000f3f4);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_DA__1000f3e8);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_DA__1000f3d4);
    RegisterUnitType(param_1 + 0x78,s_Rinok_DA__1000f3c8);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_DA__1000f3bc);
    RegisterUnitType(param_1 + 0x88,s_PorE_DA__1000f3b0);
    return;
  case 3:
    RegisterUnitType(param_1,s_Center_Austria_au__1000f39c);
    RegisterUnitType(param_1 + 8,s_Dom_Austria_au__1000f38c);
    RegisterUnitType(param_1 + 0x10,s_Melnica_au__1000f380);
    RegisterUnitType(param_1 + 0x18,s_Sclad1_au__1000f374);
    RegisterUnitType(param_1 + 0x20,s_shahta_au__1000f368);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_au__1000f358);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_au__1000f348);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_au__1000f33c);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_Swesair_au__1000f324);
    RegisterUnitType(param_1 + 0x48,s_Cercov_Poland_au__1000f310);
    RegisterUnitType(param_1 + 0x50,s_akademia_E_au__1000f300);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_au__1000f2f0);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_evro_au__1000f2dc);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_au__1000f2d0);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_au__1000f2bc);
    RegisterUnitType(param_1 + 0x78,s_Rinok_au__1000f2b0);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_au__1000f2a4);
    RegisterUnitType(param_1 + 0x88,s_PorE_au__1000f298);
    return;
  case 4:
    RegisterUnitType(param_1,s_Center_Algir_AL__1000f284);
    RegisterUnitType(param_1 + 8,s_Dom_Algir_AL__1000f274);
    RegisterUnitType(param_1 + 0x10,s_Rinok_Turki_AL__1000f264);
    RegisterUnitType(param_1 + 0x18,s_Sclad4_AL__1000f258);
    RegisterUnitType(param_1 + 0x20,s_shahta_AL__1000f24c);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_AL__1000f23c);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_AL__1000f22c);
    RegisterUnitType(param_1 + 0x38,s_Kuznia_Turki_AL__1000f218);
    RegisterUnitType(param_1 + 0x40,s_Mechet_Turki_AL__1000f204);
    RegisterUnitType(param_1 + 0x48,s_Minaret_AL__1000f1f8);
    RegisterUnitType(param_1 + 0x50,s_Diplomatic_Turki_AL__1000f1e0);
    RegisterUnitType(param_1 + 0x58,s_Barack_Turki_AL__1000f1cc);
    RegisterUnitType(param_1 + 0x60,s_Konushnia_Turki_AL__1000f1b8);
    RegisterUnitType(param_1 + 0x68,s_Art_Depo_Turki_AL__1000f1a4);
    RegisterUnitType(param_1 + 0x70,s_Bashnia_3_AL__1000f194);
    RegisterUnitType(param_1 + 0x78,s_Port_AL__1000f188);
    return;
  case 5:
    RegisterUnitType(param_1,s_Center_British_en__1000f174);
    RegisterUnitType(param_1 + 8,s_Dom_English_en__1000f164);
    RegisterUnitType(param_1 + 0x10,s_Melnica_en__1000f158);
    RegisterUnitType(param_1 + 0x18,s_Sclad1_en__1000f14c);
    RegisterUnitType(param_1 + 0x20,s_shahta_en__1000f140);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_en__1000f130);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_en__1000f120);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_BR_en__1000f110);
    RegisterUnitType(param_1 + 0x40,s_konushnia_BR_en__1000f0fc);
    RegisterUnitType(param_1 + 0x48,s_Cerkov_BR_en__1000f0ec);
    RegisterUnitType(param_1 + 0x50,s_akademia_BR_en__1000f0dc);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_BR_en__1000f0c8);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_1_BR_en__1000f0b4);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_BR_en__1000f0a4);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_BR_en__1000f08c);
    RegisterUnitType(param_1 + 0x78,s_Rinok_en__1000f080);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_en__1000f074);
    RegisterUnitType(param_1 + 0x88,s_PorE_en__1000f068);
    return;
  case 6:
    RegisterUnitType(param_1,s_Center_France_fr__1000f054);
    RegisterUnitType(param_1 + 8,s_Dom_France_fr__1000f044);
    RegisterUnitType(param_1 + 0x10,s_Melnica_fr__1000f038);
    RegisterUnitType(param_1 + 0x18,s_Sclad2_fr__1000f02c);
    RegisterUnitType(param_1 + 0x20,s_shahta_fr__1000f020);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_fr__1000f010);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_fr__1000f000);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_FR_fr__1000eff0);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_FR_fr__1000efdc);
    RegisterUnitType(param_1 + 0x48,s_NotrDam_fr__1000efd0);
    RegisterUnitType(param_1 + 0x50,s_akademia_FR_fr__1000efc0);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_FR_fr__1000efac);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_1_FR_fr__1000ef98);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_FR_fr__1000ef88);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_FR_fr__1000ef70);
    RegisterUnitType(param_1 + 0x78,s_Rinok_fr__1000ef64);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_fr__1000ef58);
    RegisterUnitType(param_1 + 0x88,s_PorE_fr__1000ef4c);
    return;
  case 7:
    RegisterUnitType(param_1,s_Europ_GE__1000ef40);
    RegisterUnitType(param_1 + 8,s_Dom_Prussia_GE__1000ef30);
    RegisterUnitType(param_1 + 0x10,s_Melnica_GE__1000ef24);
    RegisterUnitType(param_1 + 0x18,s_Sclad1_GE__1000ef18);
    RegisterUnitType(param_1 + 0x20,s_shahta_GE__1000ef0c);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_GE__1000eefc);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_GE__1000eeec);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_GE__1000eee0);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_Swesair_GE__1000eec8);
    RegisterUnitType(param_1 + 0x48,s_Cercov_Poland_GE__1000eeb4);
    RegisterUnitType(param_1 + 0x50,s_akademia_E_GE__1000eea4);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_GE__1000ee94);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_evro_GE__1000ee80);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_GE__1000ee74);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_GE__1000ee60);
    RegisterUnitType(param_1 + 0x78,s_Rinok_GE__1000ee54);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_GE__1000ee48);
    RegisterUnitType(param_1 + 0x88,s_PorE_GE__1000ee3c);
    return;
  case 8:
    RegisterUnitType(param_1,s_Center_Holland_HO__1000ee28);
    RegisterUnitType(param_1 + 8,s_Euro_dom_HO__1000ee18);
    RegisterUnitType(param_1 + 0x10,s_Melnica_HO__1000ee0c);
    RegisterUnitType(param_1 + 0x18,s_Sclad1_HO__1000ee00);
    RegisterUnitType(param_1 + 0x20,s_shahta_HO__1000edf4);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_HO__1000ede4);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_HO__1000edd4);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_HO_HO__1000edc4);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_HO_HO__1000edb0);
    RegisterUnitType(param_1 + 0x48,s_Cercov_HO_HO__1000eda0);
    RegisterUnitType(param_1 + 0x50,s_akademia_HO_HO__1000ed90);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_HO_HO__1000ed7c);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_1_HO_HO__1000ed68);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_2_HO_HO__1000ed54);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_HO_HO__1000ed3c);
    RegisterUnitType(param_1 + 0x78,s_Rinok_HO__1000ed30);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_HO__1000ed24);
    RegisterUnitType(param_1 + 0x88,s_PorE_HO__1000ed18);
    return;
  case 9:
    RegisterUnitType(param_1,s_Center_Piemont_PI__1000ed04);
    RegisterUnitType(param_1 + 8,s_Dom_Piemont_PI__1000ecf4);
    RegisterUnitType(param_1 + 0x10,s_Melnica_PI__1000ece8);
    RegisterUnitType(param_1 + 0x18,s_Sclad2_PI__1000ecdc);
    RegisterUnitType(param_1 + 0x20,s_shahta_PI__1000ecd0);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_PI__1000ecc0);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_PI__1000ecb0);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_PI__1000eca4);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_Swesair_PI__1000ec8c);
    RegisterUnitType(param_1 + 0x48,s_Kostel_PI__1000ec80);
    RegisterUnitType(param_1 + 0x50,s_akademia_E_PI__1000ec70);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_PI__1000ec60);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_evro_PI__1000ec4c);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_PI__1000ec40);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_PI__1000ec2c);
    RegisterUnitType(param_1 + 0x78,s_Rinok_PI__1000ec20);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_PI__1000ec14);
    RegisterUnitType(param_1 + 0x88,s_PorE_PI__1000ec08);
    return;
  case 10:
    RegisterUnitType(param_1,s_Center_Poland_PL__1000ebf4);
    RegisterUnitType(param_1 + 8,s_Dom_Poland_PL__1000ebe4);
    RegisterUnitType(param_1 + 0x10,s_Melnica_PL__1000ebd8);
    RegisterUnitType(param_1 + 0x18,s_Sclad2_PL__1000ebcc);
    RegisterUnitType(param_1 + 0x20,s_shahta_PL__1000ebc0);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_PL__1000ebb0);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_PL__1000eba0);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_PL__1000eb94);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_Swesair_PL__1000eb7c);
    RegisterUnitType(param_1 + 0x48,s_Cercov_Poland_PL__1000eb68);
    RegisterUnitType(param_1 + 0x50,s_akademia_E_PL__1000eb58);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_PL__1000eb48);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_evro_PL__1000eb34);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_PL__1000eb28);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_PL__1000eb14);
    RegisterUnitType(param_1 + 0x78,s_Rinok_PL__1000eb08);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_PL__1000eafc);
    RegisterUnitType(param_1 + 0x88,s_PorE_PL__1000eaf0);
    return;
  case 0xb:
    RegisterUnitType(param_1,s_Center_Portugal_PO__1000eadc);
    RegisterUnitType(param_1 + 8,s_Dom_Portugal_PO__1000eac8);
    RegisterUnitType(param_1 + 0x10,s_Melnica_PO__1000eabc);
    RegisterUnitType(param_1 + 0x18,s_Sclad2_PO__1000eab0);
    RegisterUnitType(param_1 + 0x20,s_shahta_PO__1000eaa4);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_PO__1000ea94);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_PO__1000ea84);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_PO_PO__1000ea74);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_PO_PO__1000ea60);
    RegisterUnitType(param_1 + 0x48,s_Cercov_PO_PO__1000ea50);
    RegisterUnitType(param_1 + 0x50,s_akademia_PO_PO__1000ea40);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_PO_PO__1000ea2c);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_1_PO_PO__1000ea18);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_2_PO_PO__1000ea04);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_PO_PO__1000e9ec);
    RegisterUnitType(param_1 + 0x78,s_Rinok_PO__1000e9e0);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_PO__1000e9d4);
    RegisterUnitType(param_1 + 0x88,s_PorPO_PO__1000e058);
    return;
  case 0xc:
    RegisterUnitType(param_1,s_Russki_Center_RU__1000e9c0);
    RegisterUnitType(param_1 + 8,s_ruskaia_izba_RU__1000e9ac);
    RegisterUnitType(param_1 + 0x10,s_Melnica_rus_RU__1000e99c);
    RegisterUnitType(param_1 + 0x18,s_Sclad3_RU__1000e990);
    RegisterUnitType(param_1 + 0x20,s_shahta_RU__1000e984);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_RU__1000e974);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_RU__1000e964);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_RU__1000e958);
    RegisterUnitType(param_1 + 0x40,s_konushnia_RU__1000e948);
    RegisterUnitType(param_1 + 0x48,s_Cerkov_RU_RU__1000e938);
    RegisterUnitType(param_1 + 0x50,s_akademia_RU_RU__1000e928);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_RU_RU__1000e914);
    RegisterUnitType(param_1 + 0x60,s_Rus_Strel_Dom_RU__1000e900);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_RU__1000e8f4);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_RU__1000e8e0);
    RegisterUnitType(param_1 + 0x78,s_Rinok_RU__1000e8d4);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_2_RU__1000e8c4);
    RegisterUnitType(param_1 + 0x88,s_PorR_RU__1000e8b8);
    return;
  case 0xd:
    RegisterUnitType(param_1,s_Center_Sacson_SA__1000e8a4);
    RegisterUnitType(param_1 + 8,s_Dom_Saksona_SA__1000e894);
    RegisterUnitType(param_1 + 0x10,s_Melnica_SA__1000e888);
    RegisterUnitType(param_1 + 0x18,s_Sclad1_SA__1000e87c);
    RegisterUnitType(param_1 + 0x20,s_shahta_SA__1000e870);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_SA__1000e860);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_SA__1000e850);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_SA__1000e844);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_Swesair_SA__1000e82c);
    RegisterUnitType(param_1 + 0x48,s_Cercov_Poland_SA__1000e818);
    RegisterUnitType(param_1 + 0x50,s_akademia_E_SA__1000e808);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_SA__1000e7f8);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_evro_SA__1000e7e4);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_SA__1000e7d8);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_SA__1000e7c4);
    RegisterUnitType(param_1 + 0x78,s_Rinok_SA__1000e7b8);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_SA__1000e7ac);
    RegisterUnitType(param_1 + 0x88,s_PorE_SA__1000e7a0);
    return;
  case 0xe:
    RegisterUnitType(param_1,s_Center_Spain_sp__1000e78c);
    RegisterUnitType(param_1 + 8,s_Dom_Ispain_sp__1000e77c);
    RegisterUnitType(param_1 + 0x10,s_Melnica_sp__1000e770);
    RegisterUnitType(param_1 + 0x18,s_Sclad2_sp__1000e764);
    RegisterUnitType(param_1 + 0x20,s_shahta_sp__1000e758);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_sp__1000e748);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_sp__1000e738);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_SP_sp__1000e728);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_SP_sp__1000e714);
    RegisterUnitType(param_1 + 0x48,s_Cercov_SP_sp__1000e704);
    RegisterUnitType(param_1 + 0x50,s_akademia_SP_sp__1000e6f4);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_SP_sp__1000e6e0);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_1_SP_sp__1000e6cc);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_SP_sp__1000e6bc);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_SP_sp__1000e6a4);
    RegisterUnitType(param_1 + 0x78,s_Rinok_sp__1000e698);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_sp__1000e68c);
    RegisterUnitType(param_1 + 0x88,s_PorE_sp__1000e680);
    return;
  case 0xf:
    RegisterUnitType(param_1,s_Center_Swesair_SV__1000e66c);
    RegisterUnitType(param_1 + 8,s_Dom_Swisair_SV__1000e65c);
    RegisterUnitType(param_1 + 0x10,s_Melnica_SV__1000e650);
    RegisterUnitType(param_1 + 0x18,s_Sclad1_SV__1000e644);
    RegisterUnitType(param_1 + 0x20,s_shahta_SV__1000e638);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_SV__1000e628);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_SV__1000e618);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_SV__1000e60c);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_Swesair_SV__1000e5f4);
    RegisterUnitType(param_1 + 0x48,s_Kostel_SV__1000e5e8);
    RegisterUnitType(param_1 + 0x50,s_akademia_E_SV__1000e5d8);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_SV__1000e5c8);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_evro_SV__1000e5b4);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_SV__1000e5a8);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_SV__1000e594);
    RegisterUnitType(param_1 + 0x78,s_Rinok_SV__1000e588);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_SV__1000e57c);
    RegisterUnitType(param_1 + 0x88,s_PorE_SV__1000e570);
    return;
  case 0x10:
    RegisterUnitType(param_1,s_Center_Turki_TU__1000e55c);
    RegisterUnitType(param_1 + 8,s_Dom_Turki_TU__1000e54c);
    RegisterUnitType(param_1 + 0x10,s_Rinok_Turki_TU__1000e53c);
    RegisterUnitType(param_1 + 0x18,s_Sclad4_TU__1000e530);
    RegisterUnitType(param_1 + 0x20,s_shahta_TU__1000e524);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_TU__1000e514);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_TU__1000e504);
    RegisterUnitType(param_1 + 0x38,s_Kuznia_Turki_TU__1000e4f0);
    RegisterUnitType(param_1 + 0x40,s_Mechet_Turki_TU__1000e4dc);
    RegisterUnitType(param_1 + 0x48,s_Minaret_TU__1000e4d0);
    RegisterUnitType(param_1 + 0x50,s_Diplomatic_Turki_TU__1000e4b8);
    RegisterUnitType(param_1 + 0x58,s_Barack_Turki_TU__1000e4a4);
    RegisterUnitType(param_1 + 0x60,s_Konushnia_Turki_TU__1000e490);
    RegisterUnitType(param_1 + 0x68,s_Art_Depo_Turki_TU__1000e47c);
    RegisterUnitType(param_1 + 0x70,s_Bashnia_3_TU__1000e46c);
    RegisterUnitType(param_1 + 0x78,s_Port_TU__1000e460);
    return;
  case 0x11:
    RegisterUnitType(param_1,s_CenterUR_UA__1000e450);
    RegisterUnitType(param_1 + 8,s_Ukrainska_hata_UA__1000e43c);
    RegisterUnitType(param_1 + 0x10,s_Melnica_rus_UA__1000e42c);
    RegisterUnitType(param_1 + 0x18,s_Sclad3_UA__1000e420);
    RegisterUnitType(param_1 + 0x20,s_shahta_UA__1000e414);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_UA__1000e404);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_UA__1000e3f4);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_ua_UA__1000e3e4);
    RegisterUnitType(param_1 + 0x40,s_konushnia_ua_UA__1000e3d0);
    RegisterUnitType(param_1 + 0x48,s_Cerkov_UA_UA__1000e3c0);
    RegisterUnitType(param_1 + 0x50,s_akademia_UA_UA__1000e3b0);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_UA_UA__1000e39c);
    RegisterUnitType(param_1 + 0x60,s_Rinok_UA__1000e390);
    RegisterUnitType(param_1 + 0x68,s_Strelcovaia_Izba_UA__1000e378);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_UA_UA__1000e360);
    RegisterUnitType(param_1 + 0x78,s_Poru_UA__1000e354);
    return;
  case 0x12:
    RegisterUnitType(param_1,s_Center_Venecia_VE__1000e340);
    RegisterUnitType(param_1 + 8,s_Dom_Venecia_VE__1000e330);
    RegisterUnitType(param_1 + 0x10,s_Melnica_VE__1000e324);
    RegisterUnitType(param_1 + 0x18,s_Sclad2_VE__1000e318);
    RegisterUnitType(param_1 + 0x20,s_shahta_VE__1000e30c);
    RegisterUnitType(param_1 + 0x28,s_shahta_FE_VE__1000e2fc);
    RegisterUnitType(param_1 + 0x30,s_shahta_UG_VE__1000e2ec);
    RegisterUnitType(param_1 + 0x38,s_Kuznica_VE__1000e2e0);
    RegisterUnitType(param_1 + 0x40,s_Konushnia_Swesair_VE__1000e2c8);
    RegisterUnitType(param_1 + 0x48,s_Kostel_VE__1000e2bc);
    RegisterUnitType(param_1 + 0x50,s_akademia_E_VE__1000e2ac);
    RegisterUnitType(param_1 + 0x58,s_Dip_korpus_VE__1000e29c);
    RegisterUnitType(param_1 + 0x60,s_Kazarma_evro_VE__1000e288);
    RegisterUnitType(param_1 + 0x68,s_Kazarma_VE__1000e27c);
    RegisterUnitType(param_1 + 0x70,s_artileri_depo_VE__1000e268);
    RegisterUnitType(param_1 + 0x78,s_Rinok_VE__1000e25c);
    RegisterUnitType(param_1 + 0x80,s_Bashnia_VE__1000e250);
    RegisterUnitType(param_1 + 0x88,s_PorE_VE__1000e244);
  }
  return;
}



// Function: FUN_100037e0 @ 0x100037e0

void __cdecl FUN_100037e0(int param_1,int param_2,char param_3)

{
  if (param_3 == '\x01') {
    if (param_2 == 9) {
      RegisterUnitType(param_1,s_Yahta_BA__1000f63c);
      RegisterUnitType(param_1 + 8,s_Linkor_BA__1000f630);
      RegisterUnitType(param_1 + 0x10,s_PERES_KOR_BA__1000f620);
      RegisterUnitType(param_1 + 0x18,s_Fregat_BA__1000f614);
      RegisterUnitType(param_1 + 0x20,s_GALERA_BA__1000f608);
      RegisterUnitType(param_1 + 0x28,s_Victoria_BA__1000f5f8);
      RegisterUnitType(param_1 + 0x30,s_FregatNEW_BA__1000f5e8);
      RegisterUnitType(param_1 + 0x38,s_KECH_BA__1000f5dc);
      RegisterUnitType(param_1 + 0x40,s_KUTTER_BA__1000f5d0);
    }
  }
  else if ((param_3 == '\x0e') && (param_2 == 9)) {
    RegisterUnitType(param_1,s_Yahta_sp__1000f6b4);
    RegisterUnitType(param_1 + 8,s_Linkor_sp__1000f6a8);
    RegisterUnitType(param_1 + 0x10,s_PERES_KOR_sp__1000f698);
    RegisterUnitType(param_1 + 0x18,s_Fregat_sp__1000f68c);
    RegisterUnitType(param_1 + 0x20,s_GALERA_sp__1000f680);
    RegisterUnitType(param_1 + 0x28,s_Victoria_sp__1000f670);
    RegisterUnitType(param_1 + 0x30,s_FregatNEW_sp__1000f660);
    RegisterUnitType(param_1 + 0x38,s_KECH_sp__1000f654);
    RegisterUnitType(param_1 + 0x40,s_KUTTER_sp__1000f648);
    return;
  }
  return;
}



// Function: FUN_10003900 @ 0x10003900

void __cdecl FUN_10003900(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100040f3();
  pDVar1[5] = param_1;
  return;
}



// Function: _rand @ 0x1000390d

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_100040f3();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



// Function: FUN_1000392f @ 0x1000392f

void __cdecl FUN_1000392f(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_10012b18._2_2_) {
    if (local_24.wHour == (WORD)DAT_10012b18) {
      if (local_24.wDay == DAT_10012b14._2_2_) {
        if (local_24.wMonth == DAT_10012b10._2_2_) {
          if (local_24.wYear == (WORD)DAT_10012b10) goto LAB_100039d9;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_10012b08 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_10012b08 = 1;
  }
  else {
    DAT_10012b08 = 0;
  }
  DAT_10012b10._0_2_ = local_24.wYear;
  DAT_10012b10._2_2_ = local_24.wMonth;
  DAT_10012b14._0_2_ = local_24.wDayOfWeek;
  DAT_10012b14._2_2_ = local_24.wDay;
  DAT_10012b18._0_2_ = local_24.wHour;
  DAT_10012b18._2_2_ = local_24.wMinute;
  DAT_10012b1c._0_2_ = local_24.wSecond;
  DAT_10012b1c._2_2_ = local_24.wMilliseconds;
LAB_100039d9:
  iVar2 = FUN_100041fa((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_10012b08);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}



// Function: FUN_10003a0b @ 0x10003a0b

void __cdecl FUN_10003a0b(undefined *param_1)

{
  FUN_100042bc(param_1);
  return;
}



// Function: FUN_10003a16 @ 0x10003a16

void FUN_10003a16(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x10003a41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_10003a4a @ 0x10003a4a

void FUN_10003a4a(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10003a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_10003a51 @ 0x10003a51

void FUN_10003a51(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10003a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_10003a58 @ 0x10003a58

void FUN_10003a58(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x10003a80,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// Function: FUN_10003aa7 @ 0x10003aa7

undefined4 __cdecl
FUN_10003aa7(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_100043a5(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



// Function: FUN_10003add @ 0x10003add

undefined4 __cdecl
FUN_10003add(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_10003b31;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// Function: FUN_10003b31 @ 0x10003b31

void __cdecl FUN_10003b31(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_100043a5(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



// Function: FUN_10003b56 @ 0x10003b56

undefined4 __cdecl
FUN_10003b56(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_28 = FUN_10003c0c;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x10003bde;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_100040f3();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// Function: FUN_10003c0c @ 0x10003c0c

undefined4 __cdecl FUN_10003c0c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_100043a5(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_10003a58(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x10003c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// Function: FUN_10003c81 @ 0x10003c81

int __cdecl FUN_10003c81(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

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
      FUN_10004c6d();
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
    FUN_10004c6d();
  }
  return iVar1 + uVar5 * 0x14;
}



// Function: __global_unwind2 @ 0x10003cfc

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10003d14,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10003d3e

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
  puStack_18 = &LAB_10003d1c;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10003dd2();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: __abnormal_termination @ 0x10003da6

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10003d1c) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// Function: __NLG_Notify1 @ 0x10003dc9

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1000f6c8 = param_1;
  DAT_1000f6c4 = in_EAX;
  DAT_1000f6cc = unaff_EBP;
  return;
}



// Function: FUN_10003dd2 @ 0x10003dd2

void FUN_10003dd2(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000f6c8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000f6c4 = in_EAX;
  DAT_1000f6cc = unaff_EBP;
  return;
}



// Function: operator_new @ 0x10003dea

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



// Function: FUN_10003df8 @ 0x10003df8

undefined4 __cdecl FUN_10003df8(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10004eb9((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10004f0b((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



// Function: __fclose_lk @ 0x10003e29

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10005096((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_10004f5d(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_100042bc(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



// Function: FUN_10003e75 @ 0x10003e75

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003e75(void)

{
  void *extraout_ECX;
  
  FUN_10003e8d();
  _DAT_10012b24 = FUN_100051ef();
  FUN_1000519f(extraout_ECX);
  return;
}



// Function: FUN_10003e8d @ 0x10003e8d

void FUN_10003e8d(void)

{
  PTR_LAB_1000f984 = &LAB_10005272;
  PTR_LAB_1000f980 = __cfltcvt;
  PTR_LAB_1000f988 = __fassign;
  PTR_LAB_1000f98c = FUN_10005218;
  PTR_LAB_1000f990 = &LAB_100052c0;
  PTR_LAB_1000f994 = __cfltcvt;
  return;
}



// Function: FUN_10003ec5 @ 0x10003ec5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10003ec5(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10012b4c = GetVersion();
    iVar1 = FUN_10005f19(1);
    if (iVar1 != 0) {
      _DAT_10012b58 = DAT_10012b4c >> 8 & 0xff;
      _DAT_10012b54 = DAT_10012b4c & 0xff;
      DAT_10012b4c = DAT_10012b4c >> 0x10;
      _DAT_10012b50 = _DAT_10012b54 * 0x100 + _DAT_10012b58;
      iVar1 = FUN_1000406e();
      if (iVar1 != 0) {
        DAT_10014224 = GetCommandLineA();
        DAT_10012b2c = FUN_10005c72();
        FUN_1000575c();
        FUN_10005a25();
        FUN_1000596c();
        FUN_1000563e();
        DAT_10012b28 = DAT_10012b28 + 1;
        goto LAB_10003f98;
      }
      FUN_10005f76();
    }
LAB_10003f25:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10012b28 < 1) goto LAB_10003f25;
      DAT_10012b28 = DAT_10012b28 + -1;
      if (DAT_10012b84 == 0) {
        FUN_1000567c();
      }
      FUN_10005918();
      FUN_100040c2();
      FUN_10005f76();
    }
    else if (param_2 == 3) {
      FUN_1000415a((undefined *)0x0);
    }
LAB_10003f98:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10003f9e

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10012b28;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10003fe6;
    if ((DAT_10014228 != (code *)0x0) &&
       (iVar2 = (*DAT_10014228)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10003ec5(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10003fe6:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10003ec5(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10003ec5(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10014228 != (code *)0x0) {
      iVar2 = (*DAT_10014228)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x1000403b

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10012b34 == 1) || ((DAT_10012b34 == 0 && (DAT_10012b38 == 1)))) {
    FUN_1000601e();
  }
  FUN_10006057(param_1);
  (*(code *)PTR___exit_1000f6e4)(0xff);
  return;
}



// Function: FUN_1000406e @ 0x1000406e

undefined4 FUN_1000406e(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100062e7();
  DAT_1000f6e8 = TlsAlloc();
  if (DAT_1000f6e8 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100061aa(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000f6e8,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100040e0((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_100040c2 @ 0x100040c2

void FUN_100040c2(void)

{
  FUN_10006310();
  if (DAT_1000f6e8 != 0xffffffff) {
    TlsFree(DAT_1000f6e8);
    DAT_1000f6e8 = 0xffffffff;
  }
  return;
}



// Function: FUN_100040e0 @ 0x100040e0

void __cdecl FUN_100040e0(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000fb10;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_100040f3 @ 0x100040f3

DWORD * FUN_100040f3(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000f6e8);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_100061aa(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000f6e8,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100040e0((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1000414e;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1000414e:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_1000415a @ 0x1000415a

void __cdecl FUN_1000415a(undefined *param_1)

{
  if (DAT_1000f6e8 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1000f6e8), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_100042bc(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_100042bc(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_100042bc(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_100042bc(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_100042bc(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_100042bc(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1000fb10) {
        FUN_100042bc(*(undefined **)(param_1 + 0x50));
      }
      FUN_100042bc(param_1);
    }
    TlsSetValue(DAT_1000f6e8,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_100041fa @ 0x100041fa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_100041fa(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

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
    iVar4 = *(int *)(&DAT_1000fc7c + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_100063f2();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5)
            * 0x3c + DAT_1000fb98 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_1000fb9c != 0)) &&
        (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_100066a7(local_28),
        CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + _DAT_1000fba0;
    }
  }
  return iVar2;
}



// Function: FUN_100042bc @ 0x100042bc

void __cdecl FUN_100042bc(undefined *param_1)

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
  puStack_c = &DAT_1000c198;
  puStack_10 = &LAB_10007bd0;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_100130e8 == 3) {
    ExceptionList = &local_14;
    FUN_1000637c(9);
    local_8 = 0;
    local_20 = (uint *)FUN_100069fc((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10006a27(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10004326();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_100130e8 != 2) goto LAB_10004388;
    ExceptionList = &local_14;
    FUN_1000637c(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10007757(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_100077ae(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000437e();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10004388:
  HeapFree(DAT_100130e4,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10004326 @ 0x10004326

void FUN_10004326(void)

{
  FUN_100063dd(9);
  return;
}



// Function: FUN_1000437e @ 0x1000437e

void FUN_1000437e(void)

{
  FUN_100063dd(9);
  return;
}



// Function: FUN_100043a5 @ 0x100043a5

undefined4 __cdecl
FUN_100043a5(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_10004c6d();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_10004440(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_100046fa((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// Function: FUN_10004440 @ 0x10004440

void __cdecl
FUN_10004440(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
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
    FUN_10004c6d();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_100040f3();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_100040f3();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_100040f3();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_10007d0c(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_10004c6d();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_100045c8;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_10004c6d();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_10003c81(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_10004b32((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_1000469d(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_100047ae(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                iVar5 = local_14;
                goto LAB_100045a8;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_100045a8:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_100045c8:
  if (param_6 == '\0') {
    FUN_100045f3(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_10004c0c();
  return;
}



// Function: FUN_100045f3 @ 0x100045f3

void __cdecl
FUN_100045f3(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_100040f3();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_10003b56(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_10003c81(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_100047ae(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



// Function: FUN_1000469d @ 0x1000469d

undefined4 __cdecl FUN_1000469d(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100046f4:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_100046ce:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100046f4;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_100046ce;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_100046fa @ 0x100046fa

void __cdecl FUN_100046fa(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000c1b0;
  puStack_10 = &LAB_10007bd0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_10004c6d();
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



// Function: FUN_10004798 @ 0x10004798

undefined4 __cdecl FUN_10004798(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_10004c0c();
  return uVar1;
}



// Function: FUN_100047ae @ 0x100047ae

void __cdecl
FUN_100047ae(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_1000496e((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_10003a58(param_10,param_1);
  FUN_100046fa((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_10004829((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_10003a16(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// Function: FUN_10004829 @ 0x10004829

undefined4 __cdecl
FUN_10004829(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c1c0;
  puStack_10 = &LAB_10007bd0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_100040f3();
  FUN_100040f3();
  pDVar1 = FUN_100040f3();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_100040f3();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_10003add(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_100048f6();
  ExceptionList = local_14;
  return uVar2;
}



// Function: FUN_100048f6 @ 0x100048f6

void FUN_100048f6(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_100040f3();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_100040f3();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_10004b32((int)unaff_EDI);
  }
  return;
}



// Function: FUN_10004944 @ 0x10004944

undefined4 __cdecl FUN_10004944(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     (piVar1[7] == 0)) {
    return 1;
  }
  return 0;
}



// Function: FUN_1000496e @ 0x1000496e

void __cdecl FUN_1000496e(int param_1,int param_2,byte *param_3,byte *param_4)

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
  
  puStack_c = &DAT_1000c1d8;
  puStack_10 = &LAB_10007bd0;
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
        bVar2 = FUN_10007d0c(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_10007d28(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_10004b99(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_10007df0(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_10007d0c(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_10007d28(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_10007d44(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_10004b99(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_10003a51(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_10004b99(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_10003a4a(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_10007d0c(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_10007d28(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_10007df0(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_100049fc;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_10007d0c(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_10007d28(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_100049fc:
      iVar3 = FUN_10004b99(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_10004c6d();
  ExceptionList = local_14;
  return;
}



// Function: FUN_10004b32 @ 0x10004b32

void __cdecl FUN_10004b32(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000c1e8;
  puStack_10 = &LAB_10007bd0;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_10003a4a(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



// Function: FUN_10004b99 @ 0x10004b99

int __cdecl FUN_10004b99(int param_1,int *param_2)

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



// Function: __CallSettingFrame@12 @ 0x10004bc0

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



// Function: FUN_10004c0c @ 0x10004c0c

void FUN_10004c0c(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000c1f8;
  puStack_10 = &LAB_10007bd0;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_100040f3();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_100040f3();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_10008125();
  return;
}



// Function: FUN_10004c6d @ 0x10004c6d

void FUN_10004c6d(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000c210;
  puStack_10 = &LAB_10007bd0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_1000f6f0 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_1000f6f0)();
  }
  local_8 = 0xffffffff;
  FUN_10004c0c();
  return;
}



// Function: _malloc @ 0x10004cc3

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10012dbc);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10004cd5

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10004d01((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1000813c(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10004d01 @ 0x10004d01

void __cdecl FUN_10004d01(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c228;
  puStack_10 = &LAB_10007bd0;
  local_14 = ExceptionList;
  if (DAT_100130e8 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_100130e0) {
      ExceptionList = &local_14;
      FUN_1000637c(9);
      local_8 = 0;
      piVar1 = FUN_10006d50(param_1);
      local_8 = 0xffffffff;
      FUN_10004d68();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_100130e8 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10011cdc) {
        ExceptionList = &local_14;
        FUN_1000637c(9);
        local_8 = 1;
        piVar1 = FUN_100077f3(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10004dc7();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10004de0;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10004de0:
  HeapAlloc(DAT_100130e4,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10004d68 @ 0x10004d68

void FUN_10004d68(void)

{
  FUN_100063dd(9);
  return;
}



// Function: FUN_10004dc7 @ 0x10004dc7

void FUN_10004dc7(void)

{
  FUN_100063dd(9);
  return;
}



// Function: FUN_10004eb9 @ 0x10004eb9

void __cdecl FUN_10004eb9(uint param_1)

{
  if ((0x1000f6f7 < param_1) && (param_1 < 0x1000f959)) {
    FUN_1000637c(((int)(param_1 + 0xefff0908) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10004ee8 @ 0x10004ee8

void __cdecl FUN_10004ee8(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000637c(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_10004f0b @ 0x10004f0b

void __cdecl FUN_10004f0b(uint param_1)

{
  if ((0x1000f6f7 < param_1) && (param_1 < 0x1000f959)) {
    FUN_100063dd(((int)(param_1 + 0xefff0908) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10004f3a @ 0x10004f3a

void __cdecl FUN_10004f3a(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100063dd(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_10004f5d @ 0x10004f5d

undefined4 __cdecl FUN_10004f5d(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10013200) &&
     ((*(byte *)((&DAT_10013100)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000831e(param_1);
    uVar1 = FUN_10004fba(param_1);
    FUN_1000837d(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000824b();
  *pDVar2 = 9;
  pDVar2 = FUN_10008254();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10004fba @ 0x10004fba

undefined4 __cdecl FUN_10004fba(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_100082dc(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100082dc(2);
      iVar2 = FUN_100082dc(1);
      if (iVar2 == iVar1) goto LAB_10005008;
    }
    hObject = (HANDLE)FUN_100082dc(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000500a;
    }
  }
LAB_10005008:
  DVar4 = 0;
LAB_1000500a:
  FUN_1000825d(param_1);
  *(undefined1 *)((&DAT_10013100)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_100081d8(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: __freebuf @ 0x1000503d

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_100042bc(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Function: FUN_10005068 @ 0x10005068

int __cdecl FUN_10005068(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10005096(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000839f(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_10005096 @ 0x10005096

undefined4 __cdecl FUN_10005096(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10008432(param_1[4],(char *)param_1[2],uVar3);
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



// Function: FUN_100050fb @ 0x100050fb

int __cdecl FUN_100050fb(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_1000637c(2);
  iVar4 = 0;
  if (0 < DAT_10014220) {
    do {
      iVar2 = *(int *)(DAT_10013214 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10004ee8(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10013214 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10005068(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10005068(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10004f3a(iVar4,*(int *)(DAT_10013214 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10014220);
  }
  FUN_100063dd(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_1000519f @ 0x1000519f

void __fastcall FUN_1000519f(void *param_1)

{
  FUN_100087ca(param_1,0x10000,0x30000);
  return;
}



// Function: FUN_100051b1 @ 0x100051b1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100051b1(void)

{
  if (_DAT_1000c2b8 < _DAT_1000c2c0 - (_DAT_1000c2c0 / _DAT_1000c2c8) * _DAT_1000c2c8) {
    return 1;
  }
  return 0;
}



// Function: FUN_100051ef @ 0x100051ef

void FUN_100051ef(void)

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
  FUN_100051b1();
  return;
}



// Function: FUN_10005218 @ 0x10005218

void __cdecl FUN_10005218(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_10008970((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10012060 < 2) {
        uVar3 = (byte)PTR_DAT_10011e50[*param_1 * 2] & 4;
        this = PTR_DAT_10011e50;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_100088fb(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10012064;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __fassign @ 0x100052d8

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
    FUN_10008e3c(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_10008e69(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// Function: FUN_10005316 @ 0x10005316

undefined1 * __cdecl FUN_10005316(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10008f0d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10008e96(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10005377(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// Function: FUN_10005377 @ 0x10005377

undefined1 * __cdecl
FUN_10005377(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_10005619(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_10012064;
  }
  puVar3 = FUN_10009020((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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



// Function: FUN_10005439 @ 0x10005439

char * __cdecl FUN_10005439(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10008f0d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10008e96(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_1000548e(param_2,param_3,&local_14,'\0');
  return param_2;
}



// Function: FUN_1000548e @ 0x1000548e

char * __cdecl FUN_1000548e(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_10005619(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_10005619(pcVar3,1);
    *pcVar3 = DAT_10012064;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_10005619(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_10005535 @ 0x10005535

void __cdecl FUN_10005535(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10008f0d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10008e96(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10005377(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_1000548e(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x100055c8

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_10005316(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10005439(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_10005535(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// Function: FUN_10005619 @ 0x10005619

void __cdecl FUN_10005619(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10007df0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_1000563e @ 0x1000563e

void FUN_1000563e(void)

{
  if (PTR_FUN_1000f6d8 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1000f6d8)();
  }
  FUN_10005742((undefined4 *)&DAT_1000e008,(undefined4 *)&DAT_1000e018);
  FUN_10005742((undefined4 *)&DAT_1000e000,(undefined4 *)&DAT_1000e004);
  return;
}



// Function: __exit @ 0x1000566b

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000568b(_Code,1,0);
  return;
}



// Function: FUN_1000567c @ 0x1000567c

void FUN_1000567c(void)

{
  FUN_1000568b(0,0,1);
  return;
}



// Function: FUN_1000568b @ 0x1000568b

void __cdecl FUN_1000568b(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10005730();
  if (DAT_10012b88 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10012b84 = 1;
  DAT_10012b80 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10013210 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1001320c - 4), DAT_10013210 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10013210 <= puVar1);
    }
    FUN_10005742((undefined4 *)&DAT_1000e01c,(undefined4 *)&DAT_1000e024);
  }
  FUN_10005742((undefined4 *)&DAT_1000e028,(undefined4 *)&DAT_1000e030);
  if (param_3 == 0) {
    DAT_10012b88 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10005739();
  return;
}



// Function: FUN_10005730 @ 0x10005730

void FUN_10005730(void)

{
  FUN_1000637c(0xd);
  return;
}



// Function: FUN_10005739 @ 0x10005739

void FUN_10005739(void)

{
  FUN_100063dd(0xd);
  return;
}



// Function: FUN_10005742 @ 0x10005742

void __cdecl FUN_10005742(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_1000575c @ 0x1000575c

void FUN_1000575c(void)

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
  DAT_10013200 = 0x20;
  DAT_10013100 = puVar2;
  for (; puVar2 < DAT_10013100 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10013200 < (int)UVar8) {
      puVar2 = &DAT_10013104;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10013200;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10013200 = DAT_10013200 + 0x20;
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
      } while ((int)DAT_10013200 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10013100)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10013100 + iVar6 * 9;
    if (DAT_10013100[iVar6 * 9] == -1) {
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
          goto LAB_10005901;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10005901:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10013200);
      return;
    }
  } while( true );
}



// Function: FUN_10005918 @ 0x10005918

void FUN_10005918(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10013100;
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
      FUN_100042bc((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10013200);
  return;
}



// Function: FUN_1000596c @ 0x1000596c

void FUN_1000596c(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10013208 == 0) {
    FUN_10009549();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10012b2c; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_10012b68 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10012b2c;
  puVar6 = DAT_10012b2c;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10009020((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100042bc((undefined *)DAT_10012b2c);
  DAT_10012b2c = (uint *)0x0;
  *puVar3 = 0;
  DAT_10013204 = 1;
  return;
}



// Function: FUN_10005a25 @ 0x10005a25

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005a25(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10013208 == 0) {
    FUN_10009549();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10012b8c,0x104);
  _DAT_10012b78 = &DAT_10012b8c;
  pbVar2 = &DAT_10012b8c;
  if (*DAT_10014224 != 0) {
    pbVar2 = DAT_10014224;
  }
  FUN_10005abe(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10005abe(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10012b60 = puVar1;
  _DAT_10012b5c = local_8 + -1;
  return;
}



// Function: FUN_10005abe @ 0x10005abe

void __cdecl FUN_10005abe(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10012fc0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10012fc0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10005b69;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10005b69:
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
          if ((*(byte *)((int)&DAT_10012fc0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10012fc0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10005c72 @ 0x10005c72

LPSTR FUN_10005c72(void)

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
  if (DAT_10012c90 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10012c90 = 1;
LAB_10005cc9:
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
        FUN_100042bc(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10012c90 = 2;
  }
  else {
    if (DAT_10012c90 == 1) goto LAB_10005cc9;
    if (DAT_10012c90 != 2) {
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
    FUN_10009570((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10005da4 @ 0x10005da4

void __cdecl FUN_10005da4(undefined4 *param_1)

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



// Function: FUN_10005dd1 @ 0x10005dd1

int FUN_10005dd1(void)

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
  
  FUN_10009c60();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = '+';
    aCStackY_18[1] = '^';
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
      aCStackY_18[0] = 'i';
      aCStackY_18[1] = '^';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -0x75;
        aCStackY_18[1] = '^';
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
        aCStackY_18[0] = -0xf;
        aCStackY_18[1] = '^';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_100098a5(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10005da4((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_10005f19 @ 0x10005f19

undefined4 __cdecl FUN_10005f19(int param_1)

{
  undefined **ppuVar1;
  
  DAT_100130e4 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_100130e4 != (HANDLE)0x0) {
    DAT_100130e8 = FUN_10005dd1();
    if (DAT_100130e8 == 3) {
      ppuVar1 = (undefined **)FUN_100069b4(0x3f8);
    }
    else {
      if (DAT_100130e8 != 2) {
        return 1;
      }
      ppuVar1 = FUN_100074fb();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_100130e4);
  }
  return 0;
}



// Function: FUN_10005f76 @ 0x10005f76

void FUN_10005f76(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_100130e8 == 3) {
    iVar1 = 0;
    if (0 < DAT_100130d8) {
      puVar2 = (undefined4 *)((int)DAT_100130dc + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_100130e4,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_100130d8);
    }
    HeapFree(DAT_100130e4,0,DAT_100130dc);
  }
  else if (DAT_100130e8 == 2) {
    ppuVar3 = &PTR_LOOP_1000fcb8;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000fcb8);
  }
  HeapDestroy(DAT_100130e4);
  return;
}



// Function: FUN_1000601e @ 0x1000601e

void FUN_1000601e(void)

{
  if ((DAT_10012b34 == 1) || ((DAT_10012b34 == 0 && (DAT_10012b38 == 1)))) {
    FUN_10006057(0xfc);
    if (DAT_10012c94 != (code *)0x0) {
      (*DAT_10012c94)();
    }
    FUN_10006057(0xff);
  }
  return;
}



// Function: FUN_10006057 @ 0x10006057

void __cdecl FUN_10006057(DWORD param_1)

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
  pDVar2 = &DAT_1000f9c0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000fa50);
  if (param_1 == (&DAT_1000f9c0)[iVar5 * 2]) {
    if ((DAT_10012b34 == 1) || ((DAT_10012b34 == 0 && (DAT_10012b38 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000f9c4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10009020(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10009020(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10009030(local_a4,_Dest);
      FUN_10009030(local_a4,(uint *)&DAT_1000e240);
      FUN_10009030(local_a4,*(uint **)(iVar5 * 8 + 0x1000f9c4));
      auStackY_1e3._3_4_ = 0x1000617b;
      FUN_10009c8f(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_100061aa @ 0x100061aa

int * __cdecl FUN_100061aa(int param_1,int param_2)

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
  puStack_c = &DAT_1000c628;
  puStack_10 = &LAB_10007bd0;
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
      if (DAT_100130e8 == 3) {
        if (puVar2 <= DAT_100130e0) {
          FUN_1000637c(9);
          local_8 = 0;
          local_24 = FUN_10006d50(puVar2);
          local_8 = 0xffffffff;
          FUN_10006243();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10006297;
LAB_10006286:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10006292:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_100130e8 != 2) || (DAT_10011cdc < puVar3)) goto LAB_10006292;
        FUN_1000637c(9);
        local_8 = 1;
        local_24 = FUN_100077f3((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_100062cc();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10006286;
      }
LAB_10006297:
      local_24 = HeapAlloc(DAT_100130e4,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10012dbc == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1000813c(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_10006243 @ 0x10006243

void FUN_10006243(void)

{
  FUN_100063dd(9);
  return;
}



// Function: FUN_100062cc @ 0x100062cc

void FUN_100062cc(void)

{
  FUN_100063dd(9);
  return;
}



// Function: FUN_100062e7 @ 0x100062e7

void FUN_100062e7(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000fa94);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000fa84);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000fa74);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000fa54);
  return;
}



// Function: FUN_10006310 @ 0x10006310

void FUN_10006310(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000fa50;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000fa94)) && (ppuVar1 != &PTR_DAT_1000fa84)) &&
       ((ppuVar1 != &PTR_DAT_1000fa74 && (ppuVar1 != &PTR_DAT_1000fa54)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100042bc(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000fb10);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000fa74);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000fa84);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000fa94);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000fa54);
  return;
}



// Function: FUN_1000637c @ 0x1000637c

void __cdecl FUN_1000637c(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000fa50 + param_1;
  if ((&DAT_1000fa50)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1000637c(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100042bc((undefined *)lpCriticalSection);
    }
    FUN_100063dd(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_100063dd @ 0x100063dd

void __cdecl FUN_100063dd(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000fa50)[param_1]);
  return;
}



// Function: FUN_100063f2 @ 0x100063f2

void FUN_100063f2(void)

{
  if (DAT_10012db0 == 0) {
    FUN_1000637c(0xb);
    if (DAT_10012db0 == 0) {
      FUN_10006420();
      DAT_10012db0 = DAT_10012db0 + 1;
    }
    FUN_100063dd(0xb);
  }
  return;
}



// Function: FUN_10006420 @ 0x10006420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006420(void)

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
  
  FUN_1000637c(0xc);
  DAT_1000fc40 = 0xffffffff;
  DAT_1000fc30 = 0xffffffff;
  DAT_10012cf8 = 0;
  _Str1 = (uint *)FUN_10009ea9("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_100063dd(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10012d00);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_1000fb98 = (void *)(DAT_10012d00 * 0x3c);
    DAT_10012cf8 = 1;
    if (DAT_10012d46 != 0) {
      DAT_1000fb98 = (void *)((int)DAT_1000fb98 + DAT_10012d54 * 0x3c);
    }
    if ((DAT_10012d9a == 0) || (DAT_10012da8 == 0)) {
      DAT_1000fb9c = 0;
      _DAT_1000fba0 = 0;
    }
    else {
      DAT_1000fb9c = 1;
      _DAT_1000fba0 = (DAT_10012da8 - DAT_10012d54) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_10012df0,0x220,(LPCWSTR)&DAT_10012d04,-1,PTR_DAT_1000fc24,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_1000fc24 = 0;
    }
    else {
      PTR_DAT_1000fc24[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_10012df0,0x220,(LPCWSTR)&DAT_10012d58,-1,PTR_DAT_1000fc28,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_1000fc28[0x3f] = 0;
      return;
    }
LAB_10006691:
    *PTR_DAT_1000fc28 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_10012dac == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_10012dac), iVar4 != 0)))) {
      FUN_100042bc((undefined *)DAT_10012dac);
      sVar5 = _strlen((char *)_Str1);
      DAT_10012dac = _malloc(sVar5 + 1);
      if (DAT_10012dac != (uint *)0x0) {
        FUN_10009020(DAT_10012dac,_Str1);
        FUN_100063dd(0xc);
        _strncpy(PTR_DAT_1000fc24,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_1000fc24[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_10009e1e(this,(byte *)_Source);
        DAT_1000fb98 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_10009e1e(DAT_1000fb98,(byte *)_Source);
          DAT_1000fb98 = (void *)((int)DAT_1000fb98 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_10009e1e(DAT_1000fb98,(byte *)_Source);
            DAT_1000fb98 = (void *)((int)DAT_1000fb98 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_1000fb98 = (void *)-(int)DAT_1000fb98;
        }
        DAT_1000fb9c = (int)(char)*_Source;
        if (DAT_1000fb9c != 0) {
          _strncpy(PTR_DAT_1000fc28,(char *)_Source,3);
          PTR_DAT_1000fc28[3] = 0;
          return;
        }
        goto LAB_10006691;
      }
    }
    FUN_100063dd(0xc);
  }
  return;
}



// Function: FUN_100066a7 @ 0x100066a7

bool __cdecl FUN_100066a7(int *param_1)

{
  bool bVar1;
  
  FUN_1000637c(0xb);
  bVar1 = FUN_100066c8(param_1);
  FUN_100063dd(0xb);
  return bVar1;
}



// Function: FUN_100066c8 @ 0x100066c8

bool __cdecl FUN_100066c8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_1000fb9c != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_1000fc30) || (uVar5 != DAT_1000fc40)) {
      if (DAT_10012cf8 == 0) {
        FUN_10006874(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_10006874(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_10012d98 != 0) {
          uVar6 = (uint)DAT_10012d9e;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_10012d9c;
          uVar6 = 0;
          uVar4 = (uint)DAT_10012d9e;
        }
        FUN_10006874(1,(uint)(DAT_10012d98 == 0),uVar5,(uint)DAT_10012d9a,uVar4,uVar3,uVar6,
                     (uint)DAT_10012da0,(uint)DAT_10012da2,(uint)DAT_10012da4,(uint)DAT_10012da6);
        if (DAT_10012d44 != 0) {
          uVar6 = (uint)DAT_10012d4a;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_10012d48;
          uVar6 = 0;
          uVar4 = (uint)DAT_10012d4a;
          uVar5 = param_1[5];
        }
        FUN_10006874(0,(uint)(DAT_10012d44 == 0),uVar5,(uint)DAT_10012d46,uVar4,uVar3,uVar6,
                     (uint)DAT_10012d4c,(uint)DAT_10012d4e,(uint)DAT_10012d50,(uint)DAT_10012d52);
      }
    }
    iVar1 = param_1[7];
    if (DAT_1000fc34 < DAT_1000fc44) {
      if ((DAT_1000fc34 <= iVar1) && (iVar1 <= DAT_1000fc44)) {
        if ((DAT_1000fc34 < iVar1) && (iVar1 < DAT_1000fc44)) {
          return true;
        }
LAB_10006840:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_1000fc34) {
          return DAT_1000fc38 <= iVar2;
        }
        return iVar2 < DAT_1000fc48;
      }
    }
    else {
      if (iVar1 < DAT_1000fc44) {
        return true;
      }
      if (DAT_1000fc34 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_1000fc44) || (DAT_1000fc34 <= iVar1)) goto LAB_10006840;
    }
  }
  return false;
}



// Function: FUN_10006874 @ 0x10006874

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10006874(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_1000fc48)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_1000fc7c + param_4 * 4);
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
        iVar2 = *(int *)(&DAT_1000fc4c + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_1000fc80 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_1000fc48)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_1000fc7c + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_1000fc30 = param_3;
    DAT_1000fc38 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_1000fc34 = iVar1;
  }
  else {
    DAT_1000fc48 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_1000fba0 + param_10) * 1000 + param_11;
    if (DAT_1000fc48 < 0) {
      DAT_1000fc48 = DAT_1000fc48 + 86400000;
      DAT_1000fc44 = iVar1 + -1;
    }
    else {
      DAT_1000fc44 = iVar1;
      if (86399999 < DAT_1000fc48) {
        DAT_1000fc48 = DAT_1000fc48 + -86400000;
        DAT_1000fc44 = iVar1 + 1;
      }
    }
    DAT_1000fc40 = param_3;
  }
  return;
}



// Function: FUN_100069b4 @ 0x100069b4

undefined4 __cdecl FUN_100069b4(undefined4 param_1)

{
  DAT_100130dc = HeapAlloc(DAT_100130e4,0,0x140);
  if (DAT_100130dc == (LPVOID)0x0) {
    return 0;
  }
  DAT_100130d4 = 0;
  DAT_100130d8 = 0;
  DAT_100130d0 = DAT_100130dc;
  DAT_100130e0 = param_1;
  DAT_100130c8 = 0x10;
  return 1;
}



// Function: FUN_100069fc @ 0x100069fc

uint __cdecl FUN_100069fc(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_100130dc;
  while( true ) {
    if (DAT_100130dc + DAT_100130d8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_10006a27 @ 0x10006a27

void __cdecl FUN_10006a27(uint *param_1,int param_2)

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
      if (DAT_100130d4 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_100130cc * 0x8000 + DAT_100130d4[3]),0x8000,0x4000);
        DAT_100130d4[2] = DAT_100130d4[2] | 0x80000000U >> ((byte)DAT_100130cc & 0x1f);
        *(undefined4 *)(DAT_100130d4[4] + 0xc4 + DAT_100130cc * 4) = 0;
        *(char *)(DAT_100130d4[4] + 0x43) = *(char *)(DAT_100130d4[4] + 0x43) + -1;
        if (*(char *)(DAT_100130d4[4] + 0x43) == '\0') {
          DAT_100130d4[1] = DAT_100130d4[1] & 0xfffffffe;
        }
        if (DAT_100130d4[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_100130d4[3],0,0x8000);
          HeapFree(DAT_100130e4,0,(LPVOID)DAT_100130d4[4]);
          FUN_10007df0(DAT_100130d4,DAT_100130d4 + 5,
                       (DAT_100130d8 * 0x14 - (int)DAT_100130d4) + -0x14 + DAT_100130dc);
          DAT_100130d8 = DAT_100130d8 + -1;
          if (DAT_100130d4 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_100130d0 = DAT_100130dc;
        }
      }
      DAT_100130d4 = param_1;
      DAT_100130cc = uVar14;
    }
  }
  return;
}



// Function: FUN_10006d50 @ 0x10006d50

int * __cdecl FUN_10006d50(uint *param_1)

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
  
  puVar8 = DAT_100130dc + DAT_100130d8 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_100130d0;
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
  puVar11 = DAT_100130dc;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_100130d0 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_100130d0) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_100130dc;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_100130d0 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_100130d0) && (param_1 = FUN_10007059(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_1000710a((int)param_1);
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
  DAT_100130d0 = param_1;
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
    if (iVar9 == 0) goto LAB_10007016;
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
LAB_10007016:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_100130d4)) && (local_8 == DAT_100130cc)) {
    DAT_100130d4 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10007059 @ 0x10007059

undefined4 * FUN_10007059(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_100130d8 == DAT_100130c8) {
    pvVar2 = HeapReAlloc(DAT_100130e4,0,DAT_100130dc,(DAT_100130c8 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100130c8 = DAT_100130c8 + 0x10;
    DAT_100130dc = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_100130dc + DAT_100130d8 * 0x14);
  pvVar2 = HeapAlloc(DAT_100130e4,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_100130d8 = DAT_100130d8 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_100130e4,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_1000710a @ 0x1000710a

int __cdecl FUN_1000710a(int param_1)

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



// Function: FUN_10007205 @ 0x10007205

undefined4 __cdecl FUN_10007205(uint *param_1,int param_2,int param_3)

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



// Function: FUN_100074fb @ 0x100074fb

undefined ** FUN_100074fb(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000fcc8 == -1) {
    lpMem = &PTR_LOOP_1000fcb8;
  }
  else {
    lpMem = HeapAlloc(DAT_100130e4,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000fcb8) {
        if (PTR_LOOP_1000fcb8 == (undefined *)0x0) {
          PTR_LOOP_1000fcb8 = (undefined *)&PTR_LOOP_1000fcb8;
        }
        if (PTR_LOOP_1000fcbc == (undefined *)0x0) {
          PTR_LOOP_1000fcbc = (undefined *)&PTR_LOOP_1000fcb8;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000fcb8;
        lpMem[1] = PTR_LOOP_1000fcbc;
        PTR_LOOP_1000fcbc = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1000fcb8) {
    HeapFree(DAT_100130e4,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_1000763f @ 0x1000763f

void __cdecl FUN_1000763f(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10011cd8 == param_1) {
    PTR_LOOP_10011cd8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000fcb8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_100130e4,0,param_1);
    return;
  }
  DAT_1000fcc8 = 0xffffffff;
  return;
}



// Function: FUN_10007695 @ 0x10007695

void __cdecl FUN_10007695(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000fcbc;
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
            DAT_10012db4 = DAT_10012db4 + -1;
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
          FUN_1000763f(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000fcbc) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_10007757 @ 0x10007757

int __cdecl FUN_10007757(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000fcb8;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000fcb8) {
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



// Function: FUN_100077ae @ 0x100077ae

void __cdecl FUN_100077ae(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10012db4 = DAT_10012db4 + 1, DAT_10012db4 == 0x20)) {
    FUN_10007695(0x10);
  }
  return;
}



// Function: FUN_100077f3 @ 0x100077f3

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_100077f3(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_10011cd8;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_100079fb(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_100078be;
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
          piVar5 = (int *)FUN_100079fb(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_100078be:
            PTR_LOOP_10011cd8 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_10011cd8) {
      ppuVar9 = &PTR_LOOP_1000fcb8;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000fcb8) {
          ppuVar9 = FUN_100074fb();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10011cd8 = (undefined *)ppuVar9;
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
      PTR_LOOP_10011cd8 = (undefined *)ppuVar9;
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



// Function: FUN_100079fb @ 0x100079fb

int __cdecl FUN_100079fb(int *param_1,uint param_2,uint param_3)

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
          goto LAB_10007b0e;
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
LAB_10007b0e:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_10007b1f @ 0x10007b1f

undefined4 __cdecl FUN_10007b1f(int param_1,int *param_2,byte *param_3,uint param_4)

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



// Function: FUN_10007c8d @ 0x10007c8d

void FUN_10007c8d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10007ca8 @ 0x10007ca8

int FUN_10007ca8(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_10004c0c();
    return iVar3;
  }
  if ((DAT_10012db8 != (FARPROC)0x0) &&
     (bVar2 = FUN_10007d44(DAT_10012db8), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_10012db8)(param_1);
    return iVar3;
  }
  return 0;
}



// Function: FUN_10007d0c @ 0x10007d0c

bool __cdecl FUN_10007d0c(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_10007d28 @ 0x10007d28

bool __cdecl FUN_10007d28(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_10007d44 @ 0x10007d44

bool __cdecl FUN_10007d44(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



// Function: _strcmp @ 0x10007d60

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
      if (bVar4 != *_Str2) goto LAB_10007da4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10007d70;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10007da4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10007da4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10007d70:
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
LAB_10007da4:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_10007df0 @ 0x10007df0

undefined4 * __cdecl FUN_10007df0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10007fa7_caseD_2;
        case 3:
          goto switchD_10007fa7_caseD_3;
        }
        goto switchD_10007fa7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10007fa7_caseD_0;
      case 1:
        goto switchD_10007fa7_caseD_1;
      case 2:
        goto switchD_10007fa7_caseD_2;
      case 3:
        goto switchD_10007fa7_caseD_3;
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
              goto switchD_10007fa7_caseD_2;
            case 3:
              goto switchD_10007fa7_caseD_3;
            }
            goto switchD_10007fa7_caseD_1;
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
              goto switchD_10007fa7_caseD_2;
            case 3:
              goto switchD_10007fa7_caseD_3;
            }
            goto switchD_10007fa7_caseD_1;
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
              goto switchD_10007fa7_caseD_2;
            case 3:
              goto switchD_10007fa7_caseD_3;
            }
            goto switchD_10007fa7_caseD_1;
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
switchD_10007fa7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10007fa7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10007fa7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10007fa7_caseD_0:
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
        goto switchD_10007e25_caseD_2;
      case 3:
        goto switchD_10007e25_caseD_3;
      }
      goto switchD_10007e25_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10007e25_caseD_0;
    case 1:
      goto switchD_10007e25_caseD_1;
    case 2:
      goto switchD_10007e25_caseD_2;
    case 3:
      goto switchD_10007e25_caseD_3;
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
            goto switchD_10007e25_caseD_2;
          case 3:
            goto switchD_10007e25_caseD_3;
          }
          goto switchD_10007e25_caseD_1;
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
            goto switchD_10007e25_caseD_2;
          case 3:
            goto switchD_10007e25_caseD_3;
          }
          goto switchD_10007e25_caseD_1;
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
            goto switchD_10007e25_caseD_2;
          case 3:
            goto switchD_10007e25_caseD_3;
          }
          goto switchD_10007e25_caseD_1;
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
switchD_10007e25_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10007e25_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10007e25_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10007e25_caseD_0:
  return param_1;
}



// Function: FUN_10008125 @ 0x10008125

void FUN_10008125(void)

{
  FUN_10006057(10);
  FUN_10009f26((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// Function: FUN_1000813c @ 0x1000813c

undefined4 __cdecl FUN_1000813c(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10012dc0 != (code *)0x0) {
    iVar1 = (*DAT_10012dc0)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_100081d8 @ 0x100081d8

void __cdecl FUN_100081d8(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10008254();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10011ce0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000824b();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10011ce4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10011e48);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000824b();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000824b();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000824b();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_1000824b @ 0x1000824b

DWORD * FUN_1000824b(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100040f3();
  return pDVar1 + 2;
}



// Function: FUN_10008254 @ 0x10008254

DWORD * FUN_10008254(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100040f3();
  return pDVar1 + 3;
}



// Function: FUN_1000825d @ 0x1000825d

undefined4 __cdecl FUN_1000825d(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10013200) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10013100)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10012b38 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100082b9;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100082b9:
      *(undefined4 *)((&DAT_10013100)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000824b();
  *pDVar2 = 9;
  pDVar2 = FUN_10008254();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_100082dc @ 0x100082dc

undefined4 __cdecl FUN_100082dc(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10013200) &&
     ((*(byte *)((&DAT_10013100)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10013100)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000824b();
  *pDVar1 = 9;
  pDVar1 = FUN_10008254();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_1000831e @ 0x1000831e

void __cdecl FUN_1000831e(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10013100)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000637c(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_100063dd(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10013100)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_1000837d @ 0x1000837d

void __cdecl FUN_1000837d(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10013100)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_1000839f @ 0x1000839f

undefined4 __cdecl FUN_1000839f(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10013200 <= param_1) {
LAB_10008420:
    pDVar3 = FUN_1000824b();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10013100)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_10008420;
  FUN_1000831e(param_1);
  if ((*(byte *)((&DAT_10013100)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_100082dc(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10008415;
    pDVar3 = FUN_10008254();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000824b();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10008415:
  FUN_1000837d(param_1);
  return uVar5;
}



// Function: FUN_10008432 @ 0x10008432

int __cdecl FUN_10008432(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10013200) &&
     ((*(byte *)((&DAT_10013100)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000831e(param_1);
    iVar1 = FUN_10008497(param_1,param_2,param_3);
    FUN_1000837d(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000824b();
  *pDVar2 = 9;
  pDVar2 = FUN_10008254();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10008497 @ 0x10008497

int __cdecl FUN_10008497(DWORD param_1,char *param_2,uint param_3)

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
LAB_100084b0:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10013100 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1000a0e5(param_1,0,2);
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
LAB_1000857f:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_100085f1;
      if (param_1 == 5) {
        pDVar7 = FUN_1000824b();
        *pDVar7 = 9;
        pDVar7 = FUN_10008254();
        *pDVar7 = 5;
      }
      else {
        FUN_100081d8(param_1);
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
            goto LAB_1000857f;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1000857f;
        } while( true );
      }
LAB_100085f1:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_100084b0;
      pDVar7 = FUN_1000824b();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10008254();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: _strlen @ 0x10008630

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10008650;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10008683:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10008650:
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
  goto LAB_10008683;
}



// Function: FUN_10008795 @ 0x10008795

uint __thiscall FUN_10008795(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_100087e0(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10008872(uVar1);
  return uVar1;
}



// Function: FUN_100087ca @ 0x100087ca

void __thiscall FUN_100087ca(void *this,uint param_1,uint param_2)

{
  FUN_10008795(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// Function: FUN_100087e0 @ 0x100087e0

uint __cdecl FUN_100087e0(uint param_1)

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



// Function: FUN_10008872 @ 0x10008872

uint __cdecl FUN_10008872(uint param_1)

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



// Function: FUN_100088fb @ 0x100088fb

uint __thiscall FUN_100088fb(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10011e50 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10011e50[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000a158(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10008970 @ 0x10008970

uint __cdecl FUN_10008970(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10012de0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10012ea8);
    bVar1 = DAT_10012ea4 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10012ea8);
      this = (void *)0x13;
      FUN_1000637c(0x13);
    }
    param_1 = FUN_100089df(this,param_1);
    if (bVar1) {
      FUN_100063dd(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10012ea8);
    }
  }
  return param_1;
}



// Function: FUN_100089df @ 0x100089df

uint __thiscall FUN_100089df(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10012de0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10012060 < 2) {
        uVar2 = (byte)PTR_DAT_10011e50[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_100088fb(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10011e50[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000a2a1(DAT_10012de0,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_10008aaa @ 0x10008aaa

undefined4 __cdecl FUN_10008aaa(int param_1,int param_2)

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



// Function: FUN_10008af3 @ 0x10008af3

void __cdecl FUN_10008af3(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1000a4f0(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1000a4f0(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Function: FUN_10008b49 @ 0x10008b49

undefined4 __cdecl FUN_10008b49(int param_1,int param_2)

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
     (iVar2 = FUN_10008aaa(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10008af3(param_1,param_2 + -1);
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



// Function: FUN_10008bd5 @ 0x10008bd5

void __cdecl FUN_10008bd5(int param_1,undefined4 *param_2)

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



// Function: FUN_10008bf0 @ 0x10008bf0

void __cdecl FUN_10008bf0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_10008bfc @ 0x10008bfc

undefined4 __cdecl FUN_10008bfc(int *param_1)

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



// Function: FUN_10008c17 @ 0x10008c17

void __cdecl FUN_10008c17(uint *param_1,uint param_2)

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



// Function: FUN_10008ca4 @ 0x10008ca4

undefined4 __cdecl FUN_10008ca4(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_10008bfc((int *)&local_10);
    if (iVar2 != 0) {
LAB_10008dd0:
      uVar5 = 0;
      goto LAB_10008dd2;
    }
    FUN_10008bf0(&local_10);
  }
  else {
    FUN_10008bd5((int)local_1c,&local_10);
    iVar2 = FUN_10008b49((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10008bf0(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10008bf0(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10008c17(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10008dd2;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10008c17(&local_10,param_3[3]);
        goto LAB_10008dd0;
      }
      FUN_10008bd5((int)&local_10,local_1c);
      FUN_10008c17(&local_10,iVar2 - iVar4);
      FUN_10008b49((int)&local_10,param_3[2]);
      FUN_10008c17(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10008dd2:
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



// Function: FUN_10008e10 @ 0x10008e10

void __cdecl FUN_10008e10(ushort *param_1,uint *param_2)

{
  FUN_10008ca4(param_1,param_2,(int *)&DAT_10012070);
  return;
}



// Function: FUN_10008e26 @ 0x10008e26

void __cdecl FUN_10008e26(ushort *param_1,uint *param_2)

{
  FUN_10008ca4(param_1,param_2,(int *)&DAT_10012088);
  return;
}



// Function: FUN_10008e3c @ 0x10008e3c

void __thiscall FUN_10008e3c(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000a691(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10008e10(local_10,param_1);
  return;
}



// Function: FUN_10008e69 @ 0x10008e69

void __thiscall FUN_10008e69(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000a691(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10008e26(local_10,param_1);
  return;
}



// Function: FUN_10008e96 @ 0x10008e96

void __cdecl FUN_10008e96(char *param_1,int param_2,int param_3)

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
    FUN_10007df0((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// Function: FUN_10008f0d @ 0x10008f0d

int * __cdecl FUN_10008f0d(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_10008f69(&local_10,&param_1);
  iVar3 = FUN_1000ab62(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10009020(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// Function: FUN_10008f69 @ 0x10008f69

void __cdecl FUN_10008f69(uint *param_1,uint *param_2)

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



// Function: FUN_10009020 @ 0x10009020

uint * __cdecl FUN_10009020(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10009108;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10009108:
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



// Function: FUN_10009030 @ 0x10009030

uint * __cdecl FUN_10009030(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000904c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000907f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000909b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000904c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000909b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000909b;
    }
  }
LAB_1000907f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000909b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10009108:
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
    if (bVar1 == 0) goto LAB_10009108;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _memset @ 0x10009110

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



// Function: FUN_10009171 @ 0x10009171

undefined4 __cdecl FUN_10009171(int param_1)

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
  
  FUN_1000637c(0x19);
  CodePage = FUN_1000931e(param_1);
  if (CodePage != DAT_10012eac) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100120a8;
LAB_100091ae:
      if (*pUVar5 != CodePage) goto code_r0x100091b2;
      local_8 = 0;
      puVar15 = &DAT_10012fc0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100120b8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100120a0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10012fc0 + uVar8 + 1);
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
      DAT_10012ebc = 1;
      DAT_10012eac = CodePage;
      DAT_100130c4 = FUN_10009368(CodePage);
      DAT_10012eb0 = *(undefined4 *)(iVar12 + 0x100120ac);
      DAT_10012eb4 = *(undefined4 *)(iVar12 + 0x100120b0);
      DAT_10012eb8 = *(undefined4 *)(iVar12 + 0x100120b4);
      goto LAB_10009302;
    }
    goto LAB_100092fd;
  }
  goto LAB_10009198;
code_r0x100091b2:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10012197 < (int)pUVar5) goto code_r0x100091bd;
  goto LAB_100091ae;
code_r0x100091bd:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_100130c4 = 0;
    puVar15 = &DAT_10012fc0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_10012ebc = 0;
      DAT_10012eac = CodePage;
    }
    else {
      DAT_10012eac = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10012fc0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10012fc0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_100130c4 = FUN_10009368(CodePage);
      DAT_10012ebc = 1;
    }
    DAT_10012eb0 = 0;
    DAT_10012eb4 = 0;
    DAT_10012eb8 = 0;
  }
  else {
    if (DAT_10012dc8 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1000930f;
    }
LAB_100092fd:
    FUN_1000939b();
  }
LAB_10009302:
  FUN_100093c4();
LAB_10009198:
  uVar14 = 0;
LAB_1000930f:
  FUN_100063dd(0x19);
  return uVar14;
}



// Function: FUN_1000931e @ 0x1000931e

int __cdecl FUN_1000931e(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10012dc8 = 1;
                    /* WARNING: Could not recover jumptable at 0x10009338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10012dc8 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000934d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10012df0;
  }
  DAT_10012dc8 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10009368 @ 0x10009368

undefined4 __cdecl FUN_10009368(int param_1)

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



// Function: FUN_1000939b @ 0x1000939b

void FUN_1000939b(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10012fc0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10012eac = 0;
  DAT_10012ebc = 0;
  DAT_100130c4 = 0;
  DAT_10012eb0 = 0;
  DAT_10012eb4 = 0;
  DAT_10012eb8 = 0;
  return;
}



// Function: FUN_100093c4 @ 0x100093c4

void FUN_100093c4(void)

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
  
  BVar2 = GetCPInfo(DAT_10012eac,&local_18);
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
    FUN_1000a158(1,local_118,0x100,local_518,DAT_10012eac,DAT_100130c4,0);
    FUN_1000a2a1(DAT_100130c4,0x100,local_118,0x100,local_218,0x100,DAT_10012eac,0);
    FUN_1000a2a1(DAT_100130c4,0x200,local_118,0x100,local_318,0x100,DAT_10012eac,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10012fc0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_100094d0;
        }
        (&DAT_10012ec0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10012fc0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_100094d0:
        (&DAT_10012ec0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10012fc0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1000951a;
        }
        (&DAT_10012ec0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10012fc0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1000951a:
        (&DAT_10012ec0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10009549 @ 0x10009549

void FUN_10009549(void)

{
  if (DAT_10013208 == 0) {
    FUN_10009171(-3);
    DAT_10013208 = 1;
  }
  return;
}



// Function: FUN_10009570 @ 0x10009570

undefined4 * __cdecl FUN_10009570(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10009727_caseD_2;
        case 3:
          goto switchD_10009727_caseD_3;
        }
        goto switchD_10009727_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10009727_caseD_0;
      case 1:
        goto switchD_10009727_caseD_1;
      case 2:
        goto switchD_10009727_caseD_2;
      case 3:
        goto switchD_10009727_caseD_3;
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
              goto switchD_10009727_caseD_2;
            case 3:
              goto switchD_10009727_caseD_3;
            }
            goto switchD_10009727_caseD_1;
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
              goto switchD_10009727_caseD_2;
            case 3:
              goto switchD_10009727_caseD_3;
            }
            goto switchD_10009727_caseD_1;
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
              goto switchD_10009727_caseD_2;
            case 3:
              goto switchD_10009727_caseD_3;
            }
            goto switchD_10009727_caseD_1;
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
switchD_10009727_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10009727_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10009727_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10009727_caseD_0:
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
        goto switchD_100095a5_caseD_2;
      case 3:
        goto switchD_100095a5_caseD_3;
      }
      goto switchD_100095a5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100095a5_caseD_0;
    case 1:
      goto switchD_100095a5_caseD_1;
    case 2:
      goto switchD_100095a5_caseD_2;
    case 3:
      goto switchD_100095a5_caseD_3;
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
            goto switchD_100095a5_caseD_2;
          case 3:
            goto switchD_100095a5_caseD_3;
          }
          goto switchD_100095a5_caseD_1;
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
            goto switchD_100095a5_caseD_2;
          case 3:
            goto switchD_100095a5_caseD_3;
          }
          goto switchD_100095a5_caseD_1;
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
            goto switchD_100095a5_caseD_2;
          case 3:
            goto switchD_100095a5_caseD_3;
          }
          goto switchD_100095a5_caseD_1;
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
switchD_100095a5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100095a5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100095a5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100095a5_caseD_0:
  return param_1;
}



// Function: FUN_100098a5 @ 0x100098a5

void __thiscall FUN_100098a5(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_100098bc(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_100098bc @ 0x100098bc

void * __thiscall FUN_100098bc(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_10012060 < 2) {
      uVar3 = (byte)PTR_DAT_10011e50[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_10011e50;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_100088fb(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10009917:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10009917;
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
      goto LAB_10009981;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10009981;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10009981:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_10012060 < 2) {
      uVar5 = (byte)PTR_DAT_10011e50[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_100088fb(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_10012060 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_10011e50 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_100088fb(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10009a2d:
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
          pDVar6 = FUN_1000824b();
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
      uVar3 = FUN_1000adf5((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10009a2d;
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



// Function: _strchr @ 0x10009ae0

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



// Function: _strstr @ 0x10009ba0

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
LAB_10009c13:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10009c13;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x10009c20

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



// Function: FUN_10009c60 @ 0x10009c60

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10009c60(void)

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



// Function: FUN_10009c8f @ 0x10009c8f

int __cdecl FUN_10009c8f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10012dcc == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10012dcc = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10012dcc != (FARPROC)0x0) {
        DAT_10012dd0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10012dd4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10009cde;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10009cde:
    if (DAT_10012dd0 != (FARPROC)0x0) {
      iVar1 = (*DAT_10012dd0)();
      if ((iVar1 != 0) && (DAT_10012dd4 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10012dd4)(iVar1);
      }
    }
    iVar1 = (*DAT_10012dcc)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10009d20

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
        goto joined_r0x10009d5e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10009d9b;
        goto LAB_10009e09;
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
joined_r0x10009e05:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10009e09:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10009d9b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10009e05;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10009e05;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10009e05;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10009d5e:
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
LAB_10009d9b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10009e1e @ 0x10009e1e

int __thiscall FUN_10009e1e(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_10012060 < 2) {
      uVar1 = (byte)PTR_DAT_10011e50[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_10011e50;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_100088fb(this,(uint)*param_1,8);
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
    if (DAT_10012060 < 2) {
      uVar2 = (byte)PTR_DAT_10011e50[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_100088fb(this,uVar4,4);
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



// Function: FUN_10009ea9 @ 0x10009ea9

int __cdecl FUN_10009ea9(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_10013204 != 0) &&
      ((DAT_10012b68 != (int *)0x0 ||
       (((DAT_10012b70 != 0 && (iVar1 = FUN_1000afa3(), iVar1 == 0)) && (DAT_10012b68 != (int *)0x0)
        ))))) && (piVar3 = DAT_10012b68, param_1 != (uchar *)0x0)) {
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



// Function: FUN_10009f26 @ 0x10009f26

undefined4 __cdecl FUN_10009f26(DWORD *param_1)

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
    puVar7 = &DAT_10012df8;
    pcVar6 = DAT_10012df8;
LAB_10009fac:
    bVar1 = true;
    FUN_1000637c(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_10012e04;
        pcVar6 = DAT_10012e04;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_10012dfc;
        pcVar6 = DAT_10012dfc;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_10012e00;
        pcVar6 = DAT_10012e00;
      }
      goto LAB_10009fac;
    }
    pDVar2 = FUN_100040f3();
    uVar3 = FUN_1000a0a8((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_100063dd(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_100063dd(1);
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
      goto LAB_1000a020;
    }
  }
  else {
LAB_1000a020:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_1000fb88 < DAT_1000fb8c + DAT_1000fb88) {
        iVar4 = DAT_1000fb88 * 0xc;
        iVar5 = DAT_1000fb88;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_1000fb8c + DAT_1000fb88);
      }
      goto LAB_1000a05e;
    }
  }
  *puVar7 = 0;
LAB_1000a05e:
  if (bVar1) {
    FUN_100063dd(1);
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



// Function: FUN_1000a0a8 @ 0x1000a0a8

uint __cdecl FUN_1000a0a8(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_1000fb94 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_1000fb94 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000a0e5 @ 0x1000a0e5

DWORD __cdecl FUN_1000a0e5(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_100082dc(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000824b();
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
      pbVar1 = (byte *)((&DAT_10013100)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_100081d8(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_1000a158 @ 0x1000a158

BOOL __cdecl
FUN_1000a158(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000c6c8;
  puStack_10 = &LAB_10007bd0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10012e1c;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10012e1c == 0) {
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
  DAT_10012e1c = iVar3;
  if (DAT_10012e1c != 2) {
    if (DAT_10012e1c == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10012df0;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10009c60();
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
    param_6 = DAT_10012de0;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_1000a2a1 @ 0x1000a2a1

int __cdecl
FUN_1000a2a1(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c6d8;
  puStack_10 = &LAB_10007bd0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10012e20 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10012e20 = 2;
    }
    else {
      DAT_10012e20 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000a4c5(param_3,param_4);
  }
  if (DAT_10012e20 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10012e20 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10012df0;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10009c60();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10009c60();
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



// Function: FUN_1000a4c5 @ 0x1000a4c5

int __cdecl FUN_1000a4c5(char *param_1,int param_2)

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



// Function: FUN_1000a4f0 @ 0x1000a4f0

undefined4 __cdecl FUN_1000a4f0(uint param_1,uint param_2,uint *param_3)

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



// Function: ___add_12 @ 0x1000a511

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000a4f0(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1000a4f0(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1000a4f0(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1000a4f0(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: FUN_1000a56f @ 0x1000a56f

void __cdecl FUN_1000a56f(uint *param_1)

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



// Function: FUN_1000a59d @ 0x1000a59d

void __cdecl FUN_1000a59d(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Function: FUN_1000a5ca @ 0x1000a5ca

void __cdecl FUN_1000a5ca(char *param_1,int param_2,uint *param_3)

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
      FUN_1000a56f(puVar1);
      FUN_1000a56f(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1000a56f(puVar1);
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
    FUN_1000a56f(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// Function: FUN_1000a691 @ 0x1000a691

undefined4 __thiscall
FUN_1000a691(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_1000a6e8:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1000a705:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1000a92a;
    }
    if (bVar6 == DAT_10012064) goto LAB_1000a714;
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
      if (bVar6 != 0x30) goto LAB_1000aa04;
    }
    goto LAB_1000a6e8;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1000a705;
    iVar9 = iVar1;
    if (bVar6 != DAT_10012064) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1000a799;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1000a772;
    }
    goto LAB_1000a6e8;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1000a705;
    if (bVar6 == DAT_10012064) {
LAB_1000a714:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000aa09;
    }
    goto LAB_1000a6e8;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10012060 < 2) {
        uVar3 = (byte)PTR_DAT_10011e50[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10011e50;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_100088fb(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_10012064) goto LAB_1000a886;
    goto LAB_1000a6e8;
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
      if (DAT_10012060 < 2) {
        uVar3 = (byte)PTR_DAT_10011e50[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10011e50;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_100088fb(this,(uint)bVar6,4);
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
LAB_1000a886:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1000a799:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1000a772:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1000aa04;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1000a6e8;
  case 5:
    local_28 = iVar5;
    if (DAT_10012060 < 2) {
      uVar3 = (byte)PTR_DAT_10011e50[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10011e50;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_100088fb(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1000a92a;
    goto LAB_1000aa09;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1000a95f;
      if (bVar6 == 0x2d) goto LAB_1000a953;
      if (bVar6 != 0x30) goto LAB_1000aa09;
LAB_1000a8f8:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1000a6e8;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1000a8f8;
      goto LAB_1000aa09;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1000aa04;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1000a98a;
  default:
    goto switchD_1000a6f4_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1000a95f:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1000aa09;
LAB_1000a953:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1000a6e8;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_1000a6f4_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1000a6e8;
    goto LAB_1000aa09;
  }
  iVar9 = 9;
LAB_1000a92a:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1000a6e8;
LAB_1000a98a:
  if (DAT_10012060 < 2) {
    uVar3 = (byte)PTR_DAT_10011e50[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_10011e50;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_100088fb(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1000a9d4;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1000a9cc;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1000a98a;
LAB_1000a9cc:
  pbVar7 = (byte *)0x1451;
LAB_1000a9d4:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_10012060 < 2) {
      uVar3 = (byte)PTR_DAT_10011e50[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10011e50;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_100088fb(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1000aa04:
  pbVar7 = pbVar8 + -1;
LAB_1000aa09:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000ab17;
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
    FUN_1000a5ca(local_60,local_8,(uint *)&local_44);
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
        FUN_1000b2ba((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1000aa9c;
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
LAB_1000aa9c:
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
LAB_1000ab17:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// Function: FUN_1000ab62 @ 0x1000ab62

undefined4 __cdecl
FUN_1000ab62(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000ac57;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000ac57:
            pcVar11 = "1#QNAN";
            goto LAB_1000ac5c;
          }
          pcVar11 = "1#IND";
        }
        FUN_10009020((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1000ac5c:
        FUN_10009020((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1000b2ba((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000b09a((int *)&local_14,(int *)&local_20);
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
        FUN_1000a56f((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1000a59d((uint *)&local_14);
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
          FUN_1000a56f((uint *)&local_14);
          FUN_1000a56f((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1000a56f((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_1000adb4;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1000adb4:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000adb6:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1000adb6;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1000adec;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1000adec:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// Function: FUN_1000adf5 @ 0x1000adf5

uint __cdecl FUN_1000adf5(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10012de0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10012ea8);
    bVar1 = DAT_10012ea4 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10012ea8);
      this = (void *)0x13;
      FUN_1000637c(0x13);
    }
    param_1 = FUN_1000ae64(this,param_1);
    if (bVar1) {
      FUN_100063dd(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10012ea8);
    }
  }
  return param_1;
}



// Function: FUN_1000ae64 @ 0x1000ae64

uint __thiscall FUN_1000ae64(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10012de0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10012060 < 2) {
        uVar2 = (byte)PTR_DAT_10011e50[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_100088fb(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10011e50[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000a2a1(DAT_10012de0,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: __mbsnbicoll @ 0x1000af64

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_1000b336(DAT_100130c4,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_10012eac);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



// Function: FUN_1000afa3 @ 0x1000afa3

undefined4 FUN_1000afa3(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_10012b70;
  puVar2 = DAT_10012b70;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_1000b5b3(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_1000b020 @ 0x1000b020

int __cdecl FUN_1000b020(byte *param_1,byte *param_2)

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



// Function: FUN_1000b060 @ 0x1000b060

byte * __cdecl FUN_1000b060(byte *param_1,byte *param_2)

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



// Function: FUN_1000b09a @ 0x1000b09a

void __cdecl FUN_1000b09a(int *param_1,int *param_2)

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
LAB_1000b13d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000b13d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_1000a4f0(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_1000b1f1:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1000a59d((uint *)&local_28);
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
          FUN_1000a56f((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000b1f1;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1000b29a;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000b29a:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// Function: FUN_1000b2ba @ 0x1000b2ba

void __cdecl FUN_1000b2ba(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_10012350;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x100124b0;
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
        FUN_1000b09a(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



// Function: FUN_1000b336 @ 0x1000b336

int __cdecl
FUN_1000b336(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
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
  puStack_c = &DAT_1000c710;
  puStack_10 = &LAB_10007bd0;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_10012e88 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10012e88 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10012e88 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_1000a4c5((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_1000a4c5((char *)param_5,param_6);
  }
  if (DAT_10012e88 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_10012e88 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10012df0;
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
      FUN_10009c60();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_10009c60();
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



// Function: FUN_1000b5b3 @ 0x1000b5b3

undefined4 __cdecl FUN_1000b5b3(uint *param_1,int param_2)

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
  puVar2 = (uint *)FUN_1000bd00((byte *)param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar7 = *(byte *)((int)puVar2 + 1) == 0;
  if (DAT_10012b68 == DAT_10012b6c) {
    DAT_10012b68 = (byte *)FUN_1000b792((int *)DAT_10012b68);
  }
  if (DAT_10012b68 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_10012b70 == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_10012b68 = _malloc(4);
      if (DAT_10012b68 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_10012b68 + 1;
      pbVar6 = DAT_10012b68 + 2;
      pbVar1 = DAT_10012b68 + 3;
      DAT_10012b68[0] = 0;
      *pbVar4 = 0;
      *pbVar6 = 0;
      *pbVar1 = 0;
      if (DAT_10012b70 == (undefined4 *)0x0) {
        DAT_10012b70 = _malloc(4);
        if (DAT_10012b70 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_10012b70 = 0;
      }
    }
    else {
      iVar3 = FUN_1000afa3();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_10012b68;
  iVar3 = FUN_1000b73a((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_1000b9d1(pbVar4,(uint *)(iVar3 * 4 + 8));
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
      goto LAB_1000b6e7;
    }
    pbVar6 = pbVar4 + iVar3 * 4;
    FUN_100042bc(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar6 != 0; pbVar6 = pbVar6 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar6 = *(int *)(pbVar6 + 4);
    }
    pbVar4 = FUN_1000b9d1(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_1000b6e7;
  }
  DAT_10012b68 = pbVar4;
LAB_1000b6e7:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_10009020(lpName,param_1);
      pbVar4 = (byte *)(((int)lpName - (int)param_1) + (int)puVar2);
      *pbVar4 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(pbVar4 + 1)));
      FUN_100042bc((undefined *)lpName);
    }
  }
  return 0;
}



// Function: FUN_1000b73a @ 0x1000b73a

int __cdecl FUN_1000b73a(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_10012b68;
  piVar2 = DAT_10012b68;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_10012b68 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_10012b68 >> 2;
}



// Function: FUN_1000b792 @ 0x1000b792

undefined4 * __cdecl FUN_1000b792(int *param_1)

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
      puVar4 = FUN_1000bd97(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



// Function: FUN_1000b800 @ 0x1000b800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000b800(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_10012ea8;
  if (DAT_10012de0 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000b84e;
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
LAB_1000b84e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10012ea8 = _DAT_10012ea8 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10012ea4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10012ea8 = iVar2;
      FUN_1000637c(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000b8af;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_100089df(this,uVar8);
      uVar7 = FUN_100089df(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000b8af:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10012ea8 = _DAT_10012ea8 + -1;
      UNLOCK();
    }
    else {
      FUN_100063dd(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_1000b8d0 @ 0x1000b8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000b8d0(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_10012ea8;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_10012de0 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000b92f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000b92f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10012ea8 = _DAT_10012ea8 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10012ea4;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10012ea8 = iVar2;
        FUN_1000637c(0x13);
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
        uVar7 = FUN_100089df(param_3,uVar7);
        uVar5 = FUN_100089df(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000b9a5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000b9a5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10012ea8 = _DAT_10012ea8 + -1;
        UNLOCK();
      }
      else {
        FUN_100063dd(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_1000b9d1 @ 0x1000b9d1

byte * __cdecl FUN_1000b9d1(byte *param_1,uint *param_2)

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
  puStack_c = &DAT_1000c850;
  puStack_10 = &LAB_10007bd0;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_100042bc(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_100130e8 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_1000637c(9);
            local_8 = 0;
            local_2c = (uint *)FUN_100069fc((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_100130e0) {
                iVar1 = FUN_10007205(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_10006d50(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_10009570((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_100069fc((int)param_1);
                    FUN_10006a27(local_2c,(int)param_1);
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
                local_28 = HeapAlloc(DAT_100130e4,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_10009570((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10006a27(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_1000bb5c();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_100130e4,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_10012dbc == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_1000813c(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_100130e8 == 2) {
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
              FUN_1000637c(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_10007757(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_100130e4,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_10011cdc) {
                  iVar1 = FUN_10007b1f(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_100077f3((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_10009570((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_100077ae(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_100130e4,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_10009570((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_100077ae(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_1000bcaa();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_10012dbc == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_1000813c(param_2);
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
              pbVar3 = HeapReAlloc(DAT_100130e4,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_10012dbc == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_1000813c(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



// Function: FUN_1000bb5c @ 0x1000bb5c

void FUN_1000bb5c(void)

{
  FUN_100063dd(9);
  return;
}



// Function: FUN_1000bcaa @ 0x1000bcaa

void FUN_1000bcaa(void)

{
  FUN_100063dd(9);
  return;
}



// Function: FUN_1000bd00 @ 0x1000bd00

byte * __cdecl FUN_1000bd00(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (DAT_10012ebc == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_1000637c(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_10012fc0 + uVar3 + 1) & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_100063dd(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_100063dd(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2 + 1;
    }
    FUN_100063dd(0x19);
    pbVar2 = (byte *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return pbVar2;
}



// Function: FUN_1000bd97 @ 0x1000bd97

uint * __cdecl FUN_1000bd97(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10009020(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}



// Function: Unwind@1000bdd0 @ 0x1000bdd0

void Unwind_1000bdd0(void)

{
  int unaff_EBP;
  
  FUN_100025e0(unaff_EBP + -0x1c);
  return;
}




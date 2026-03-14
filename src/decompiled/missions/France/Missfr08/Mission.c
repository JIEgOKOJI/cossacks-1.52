// Decompiled from: Mission.dll

// Function: FUN_10001040 @ 0x10001040

void FUN_10001040(undefined4 param_1,int param_2)

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
  local_8 = 0x1000107d;
  __chkesp();
  return;
}



// Function: FUN_100010a0 @ 0x100010a0

void FUN_100010a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  RegisterZone(&DAT_1002f458,"Zone1");
  __chkesp();
  RegisterZone(&DAT_1002f460,"Zone2");
  __chkesp();
  RegisterZone(&DAT_1002f468,"Zone3");
  __chkesp();
  RegisterZone(&DAT_1002f470,"Zone4");
  __chkesp();
  RegisterZone(&DAT_1002f478,"Zone5");
  __chkesp();
  RegisterZone(&DAT_1002f480,"Zone6");
  __chkesp();
  RegisterZone(&DAT_1002f488,"Zone7");
  __chkesp();
  RegisterZone(&DAT_1002f450,"Zone7a");
  __chkesp();
  RegisterZone(&DAT_1002f490,"Zone8");
  __chkesp();
  RegisterZone(&DAT_1002f498,"Zone9");
  __chkesp();
  RegisterZone(&DAT_1002f430,"Zone10");
  __chkesp();
  RegisterZone(&DAT_1002f428,"Zone11");
  __chkesp();
  RegisterZone(&DAT_1002f440,"Zone12");
  __chkesp();
  RegisterZone(&DAT_1002f438,"Zone13");
  __chkesp();
  RegisterZone(&DAT_1002f448,"Zone14");
  __chkesp();
  RegisterUnits(&DAT_1002f3e0,"Group1");
  __chkesp();
  RegisterUnits(&DAT_1002f3f0,"Group2");
  __chkesp();
  RegisterUnits(&DAT_1002f4d0,"Group2a");
  __chkesp();
  RegisterUnits(&DAT_1002f3e8,"Group3");
  __chkesp();
  RegisterUnits(&DAT_1002f400,"Group4");
  __chkesp();
  RegisterUnits(&DAT_1002f3f8,"Group5");
  __chkesp();
  RegisterUnits(&DAT_1002f410,"Group6");
  __chkesp();
  RegisterUnits(&DAT_1002f408,"Group7");
  __chkesp();
  RegisterUnits(&DAT_1002f420,"Group8");
  __chkesp();
  RegisterUnits(&DAT_1002f418,"Group9");
  __chkesp();
  RegisterUnits(&DAT_1002f4a8,"Group10");
  __chkesp();
  RegisterUnits(&DAT_1002f4c0,"Group11");
  __chkesp();
  RegisterUnits(&DAT_1002f4c8,"Group12");
  __chkesp();
  RegisterUnits(&DAT_1002f4b0,"Group13");
  __chkesp();
  RegisterUnits(&DAT_1002f4b8,"Group14");
  __chkesp();
  RegisterUnitType(&DAT_1002f4d8,"Sclad1(au)");
  __chkesp();
  RegisterUnitType(&DAT_1002f4a0,"Pushka(GE)");
  __chkesp();
  ChangeFriends(0,0x91);
  __chkesp();
  SetPlayerName(1,"EMPIRE");
  __chkesp();
  SetPlayerName(4,"ALLIES");
  __chkesp();
  uStack_8 = 0x10001490;
  __chkesp();
  return;
}



// Function: FUN_100015a0 @ 0x100015a0

void FUN_100015a0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar4 = local_44;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  Trigg(1);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(1,0);
    __chkesp();
    SetResource(0,3,20000);
    __chkesp();
    SetResource(0,1,5000);
    __chkesp();
    SetResource(0,0,0);
    __chkesp();
    SetResource(0,2,0);
    __chkesp();
    SetResource(0,5,10000);
    __chkesp();
    SetResource(0,4,10000);
    __chkesp();
    ShowPage("#PAGE1");
    __chkesp();
    ShowPage("#PAGE1A");
    __chkesp();
    SelectUnits(&DAT_1002f4b0,0);
    __chkesp();
    Patrol(1,&DAT_1002f438,0);
    __chkesp();
  }
  Trigg(0x1e);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetGlobalTime();
    iVar3 = __chkesp();
    if (0x5dc < iVar3) {
      SetTrigg(0x1e,0);
      __chkesp();
      SelectUnits(&DAT_1002f3f0,0);
      __chkesp();
      SelectUnits(&DAT_1002f4d0,1);
      __chkesp();
      SelSendAndKill(1,&DAT_1002f458,0xb4,0);
      __chkesp();
    }
  }
  Trigg(0x1f);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_1002f458,&DAT_1002f3f0);
    iVar3 = __chkesp();
    iVar2 = thunk_FUN_10002b50(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      GetUnitsAmount1(&DAT_1002f458,&DAT_1002f4d0);
      iVar3 = __chkesp();
      iVar2 = thunk_FUN_10002b50(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        iVar3 = thunk_FUN_10002b50(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x1f,0);
          __chkesp();
          RunTimer(1,200);
          __chkesp();
          SelectUnits(&DAT_1002f4d0,0);
          __chkesp();
          SelSendAndKill(1,&DAT_1002f460,0xb4,0);
          __chkesp();
        }
      }
    }
  }
  TimerDoneFirst(1);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    __chkesp();
    SelSendAndKill(1,&DAT_1002f460,0xb4,0);
    __chkesp();
  }
  Trigg(0x20);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_1002f460,&DAT_1002f3f0);
    iVar3 = __chkesp();
    iVar2 = thunk_FUN_10002b50(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      GetUnitsAmount1(&DAT_1002f460,&DAT_1002f4d0);
      iVar3 = __chkesp();
      iVar2 = thunk_FUN_10002b50(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        iVar3 = thunk_FUN_10002b50(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x20,0);
          __chkesp();
          RunTimer(2,600);
          __chkesp();
          SelectUnits(&DAT_1002f4d0,0);
          __chkesp();
          SelSendAndKill(1,&DAT_1002f468,0xb4,0);
          __chkesp();
        }
      }
    }
  }
  TimerDoneFirst(2);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    __chkesp();
    SelSendAndKill(1,&DAT_1002f468,0xb4,0);
    __chkesp();
  }
  Trigg(0x21);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_1002f468,&DAT_1002f3f0);
    iVar3 = __chkesp();
    iVar2 = thunk_FUN_10002b50(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      GetUnitsAmount1(&DAT_1002f468,&DAT_1002f4d0);
      iVar3 = __chkesp();
      iVar2 = thunk_FUN_10002b50(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        iVar3 = thunk_FUN_10002b50(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x21,0);
          __chkesp();
          RunTimer(3,700);
          __chkesp();
          SelectUnits(&DAT_1002f4d0,0);
          __chkesp();
          SelSendAndKill(1,&DAT_1002f470,0xb4,0);
          __chkesp();
        }
      }
    }
  }
  TimerDoneFirst(3);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    __chkesp();
    SelSendAndKill(1,&DAT_1002f470,0xb4,0);
    __chkesp();
  }
  Trigg(0x22);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_1002f470,&DAT_1002f3f0);
    iVar3 = __chkesp();
    iVar2 = thunk_FUN_10002b50(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      GetUnitsAmount1(&DAT_1002f470,&DAT_1002f4d0);
      iVar3 = __chkesp();
      iVar2 = thunk_FUN_10002b50(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        iVar3 = thunk_FUN_10002b50(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x22,0);
          __chkesp();
          RunTimer(4,800);
          __chkesp();
          SelectUnits(&DAT_1002f4d0,0);
          __chkesp();
          SelSendAndKill(1,&DAT_1002f478,0xb4,0);
          __chkesp();
        }
      }
    }
  }
  TimerDoneFirst(4);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    __chkesp();
    SelSendAndKill(1,&DAT_1002f478,0xb4,0);
    __chkesp();
  }
  Trigg(0x23);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_1002f478,&DAT_1002f3f0);
    iVar3 = __chkesp();
    iVar2 = thunk_FUN_10002b50(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      GetUnitsAmount1(&DAT_1002f478,&DAT_1002f4d0);
      iVar3 = __chkesp();
      iVar2 = thunk_FUN_10002b50(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        iVar3 = thunk_FUN_10002b50(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x23,0);
          __chkesp();
          RunTimer(5,600);
          __chkesp();
          SelectUnits(&DAT_1002f4d0,0);
          __chkesp();
          SelSendAndKill(1,&DAT_1002f480,0xb4,0);
          __chkesp();
        }
      }
    }
  }
  TimerDoneFirst(5);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    __chkesp();
    SelSendAndKill(1,&DAT_1002f480,0xb4,0);
    __chkesp();
  }
  Trigg(0x24);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_1002f480,&DAT_1002f3f0);
    iVar3 = __chkesp();
    iVar2 = thunk_FUN_10002b50(&DAT_1002f3f0);
    if (iVar3 == iVar2) {
      GetUnitsAmount1(&DAT_1002f480,&DAT_1002f4d0);
      iVar3 = __chkesp();
      iVar2 = thunk_FUN_10002b50(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        iVar3 = thunk_FUN_10002b50(&DAT_1002f3f0);
        if (3 < iVar3) {
          SetTrigg(0x24,0);
          __chkesp();
          RunTimer(6,700);
          __chkesp();
          SelectUnits(&DAT_1002f4d0,0);
          __chkesp();
          SelSendAndKill(1,&DAT_1002f450,0,0);
          __chkesp();
        }
      }
    }
  }
  TimerDoneFirst(6);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1002f3f0,0);
    __chkesp();
    SelSendAndKill(1,&DAT_1002f488,0,0);
    __chkesp();
  }
  GetGlobalTime();
  iVar3 = __chkesp();
  if (1000 < iVar3) {
    iVar3 = thunk_FUN_10002b50(&DAT_1002f3e8);
    if (0 < iVar3) {
      iVar3 = thunk_FUN_10002b50(&DAT_1002f3f8);
      if (0 < iVar3) {
        SelectUnits(&DAT_1002f3e8,0);
        __chkesp();
        SelAttackGroup(1,&DAT_1002f3f8);
        __chkesp();
      }
    }
  }
  Trigg(0x28);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    iVar3 = thunk_FUN_10002b50(&DAT_1002f3e8);
    if (0 < iVar3) {
      iVar3 = thunk_FUN_10002b50(&DAT_1002f3f8);
      if (iVar3 == 0) {
        SelectUnits(&DAT_1002f3e8,0);
        __chkesp();
        Patrol(1,&DAT_1002f440,0);
        __chkesp();
      }
    }
  }
  Trigg(0x25);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    iVar3 = thunk_FUN_10002b50(&DAT_1002f410);
    if (iVar3 < 2) {
      SetTrigg(0x25,0);
      __chkesp();
      ClearSelection(1);
      __chkesp();
      SelectUnits1(1,&DAT_1002f408,0);
      __chkesp();
      SelDie(1);
      __chkesp();
      ClearSelection(0);
      __chkesp();
      SelectUnits1(0,&DAT_1002f408,0);
      __chkesp();
      SelDie(0);
      __chkesp();
    }
  }
  Trigg(0x26);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount0(&DAT_1002f490,0);
    iVar3 = __chkesp();
    if (3 < iVar3) {
      SetTrigg(0x26,0);
      __chkesp();
      SelectUnits(&DAT_1002f420,0);
      __chkesp();
      SelSendAndKill(1,&DAT_1002f490,0,0);
      __chkesp();
    }
  }
  GetUnitsAmount0(&DAT_1002f498,0);
  iVar3 = __chkesp();
  if (0 < iVar3) {
    iVar3 = thunk_FUN_10002b50(&DAT_1002f418);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1002f418,&DAT_1002f498,0);
      __chkesp();
    }
  }
  GetUnitsAmount0(&DAT_1002f430,0);
  iVar3 = __chkesp();
  if (0 < iVar3) {
    iVar3 = thunk_FUN_10002b50(&DAT_1002f4a8);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1002f4a8,&DAT_1002f430,0);
      __chkesp();
    }
  }
  GetUnitsAmount0(&DAT_1002f428,0);
  iVar3 = __chkesp();
  if (0 < iVar3) {
    iVar3 = thunk_FUN_10002b50(&DAT_1002f4c0);
    if (0 < iVar3) {
      AttackEnemyInZone(&DAT_1002f4c0,&DAT_1002f428,0);
      __chkesp();
    }
  }
  Trigg(2);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    Trigg(0x25);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      iVar3 = thunk_FUN_10002ba0(&DAT_1002f4a0,0);
      iVar2 = thunk_FUN_10002b50(&DAT_1002f4d0);
      if (iVar3 == iVar2) {
        iVar3 = thunk_FUN_10002ba0(&DAT_1002f4a0,0);
        if (0 < iVar3) {
          SetTrigg(2,0);
          __chkesp();
          ShowPage("#PAGE2");
          __chkesp();
        }
      }
    }
  }
  Trigg(3);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    iVar3 = thunk_FUN_10002ba0(&DAT_1002f4d8,0);
    if (0 < iVar3) {
      SetTrigg(3,0);
      __chkesp();
      ShowPage("#PAGE3");
      __chkesp();
      AddResource(0,3,20000);
      __chkesp();
      AddResource(0,1,2000);
      __chkesp();
      AddResource(0,5,5000);
      __chkesp();
      AddResource(0,4,5000);
      __chkesp();
    }
  }
  Trigg(4);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    iVar3 = thunk_FUN_10002b50(&DAT_1002f4c8);
    if (iVar3 == 0) {
      SetTrigg(4,0);
      __chkesp();
      ShowPage("#PAGE4");
      __chkesp();
      ShowVictory();
      __chkesp();
    }
  }
  Trigg(5);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    iVar3 = thunk_FUN_10002b50(&DAT_1002f3e0);
    if (iVar3 == 0) {
      SetTrigg(5,0);
      __chkesp();
      ShowPage("#PAGE5");
      __chkesp();
      LooseGame();
      __chkesp();
    }
  }
  Trigg(6);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount1(&DAT_1002f448,&DAT_1002f3e0);
    iVar3 = __chkesp();
    if (0 < iVar3) {
      iVar3 = thunk_FUN_10002b50(&DAT_1002f4b8);
      if (0 < iVar3) {
        SetTrigg(6,0);
        __chkesp();
        ShowPage("#PAGE6");
        __chkesp();
        SelectUnits(&DAT_1002f4b8,0);
        __chkesp();
        SelChangeNation(4,0);
        __chkesp();
      }
    }
  }
  Trigg(0x32);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    Trigg(6);
    uVar1 = __chkesp();
    if ((uVar1 & 0xff) != 0) {
      GetUnitsAmount0(&DAT_1002f458,0);
      iVar3 = __chkesp();
      if (iVar3 < 1) {
        GetUnitsAmount0(&DAT_1002f460,0);
        iVar3 = __chkesp();
        if (iVar3 < 1) {
          GetUnitsAmount0(&DAT_1002f460,0);
          iVar3 = __chkesp();
          if (iVar3 < 1) {
            GetUnitsAmount0(&DAT_1002f468,0);
            iVar3 = __chkesp();
            if (iVar3 < 1) {
              GetUnitsAmount0(&DAT_1002f470,0);
              iVar3 = __chkesp();
              if (iVar3 < 1) {
                GetUnitsAmount0(&DAT_1002f478,0);
                iVar3 = __chkesp();
                if (iVar3 < 1) {
                  GetUnitsAmount0(&DAT_1002f480,0);
                  iVar3 = __chkesp();
                  if (iVar3 < 1) {
                    GetUnitsAmount0(&DAT_1002f488,0);
                    iVar3 = __chkesp();
                    if (iVar3 < 1) goto LAB_100026e1;
                  }
                }
              }
            }
          }
        }
      }
      SetTrigg(0x32,0);
      __chkesp();
      ShowPage("#PAGE2A");
      __chkesp();
    }
  }
LAB_100026e1:
  uStack_8 = 0x100026ee;
  __chkesp();
  return;
}



// Function: FUN_10002b50 @ 0x10002b50

void __cdecl FUN_10002b50(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  GetTotalAmount0(param_1);
  __chkesp();
  uStack_8 = 0x10002b8b;
  __chkesp();
  return;
}



// Function: FUN_10002ba0 @ 0x10002ba0

void __cdecl FUN_10002ba0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  GetTotalAmount1(param_1,CONCAT31(0xcccccc,param_2));
  __chkesp();
  uStack_8 = 0x10002bdf;
  __chkesp();
  return;
}



// Function: __chkesp @ 0x10002ca0

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
  iVar2 = FUN_10003070(1,0x1002a19c,0x2a,&DAT_1002a1ac,
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



// Function: FUN_10002ce0 @ 0x10002ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002ce0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    DAT_1002f534 = GetVersion();
    iVar1 = FUN_100067a0(1);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_1002f540 = DAT_1002f534 >> 8 & 0xff;
    DAT_1002f53c = DAT_1002f534 & 0xff;
    _DAT_1002f538 = DAT_1002f53c * 0x100 + _DAT_1002f540;
    DAT_1002f534 = DAT_1002f534 >> 0x10;
    iVar1 = FUN_10003910();
    if (iVar1 == 0) {
      FUN_100067f0();
      return 0;
    }
    DAT_1003106c = GetCommandLineA();
    DAT_1002f51c = FUN_10006580();
    FUN_10003bc0();
    FUN_10006070();
    FUN_10005f20();
    FUN_10003710();
    DAT_1002f518 = DAT_1002f518 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_1002f518 < 1) {
      return 0;
    }
    DAT_1002f518 = DAT_1002f518 + -1;
    if (DAT_1002f56c == 0) {
      FUN_10003790();
    }
    uVar2 = FUN_100054c0(-1);
    if ((uVar2 & 0x20) != 0) {
      FUN_10005dd0();
    }
    __ioterm();
    FUN_100039a0();
    FUN_100067f0();
  }
  else if (param_2 == 3) {
    FUN_10003a90((LPVOID)0x0);
  }
  return 1;
}



// Function: entry @ 0x10002e20

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  if ((param_2 == 0) && (DAT_1002f518 == 0)) {
    local_8 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_1003107c != (code *)0x0) {
        local_8 = (*DAT_1003107c)(param_1,param_2,param_3);
      }
      if (local_8 != 0) {
        local_8 = FUN_10002ce0(param_1,param_2);
      }
      if (local_8 == 0) {
        return 0;
      }
    }
    local_8 = thunk_FUN_10001040(param_1,param_2);
    if ((param_2 == 1) && (local_8 == 0)) {
      FUN_10002ce0(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = FUN_10002ce0(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 0;
      }
      if ((local_8 != 0) && (DAT_1003107c != (code *)0x0)) {
        local_8 = (*DAT_1003107c)(param_1,param_2,param_3);
      }
    }
  }
  return local_8;
}



// Function: __amsg_exit @ 0x10002f20

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1002f524 == 1) || ((DAT_1002f524 == 0 && (DAT_1002f528 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_100068e0(param_1);
  (*(code *)PTR___exit_1002da30)(0xff);
  return;
}



// Function: FUN_10002f60 @ 0x10002f60

void FUN_10002f60(void)

{
  DebugBreak();
  return;
}



// Function: FUN_10002f70 @ 0x10002f70

undefined4 __cdecl FUN_10002f70(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0xffffffff) {
    uVar1 = *(undefined4 *)(&DAT_1002da38 + param_1 * 4);
  }
  else if ((param_2 & 0xfffffff8) == 0) {
    uVar1 = *(undefined4 *)(&DAT_1002da38 + param_1 * 4);
    *(uint *)(&DAT_1002da38 + param_1 * 4) = param_2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: __CrtSetReportFile @ 0x10002fd0

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
    uVar1 = *(undefined4 *)(&DAT_1002da44 + param_1 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_1002da44 + param_1 * 4);
    if (param_2 == -4) {
      pvVar2 = GetStdHandle(0xfffffff5);
      *(HANDLE *)(&DAT_1002da44 + param_1 * 4) = pvVar2;
    }
    else if (param_2 == -5) {
      pvVar2 = GetStdHandle(0xfffffff4);
      *(HANDLE *)(&DAT_1002da44 + param_1 * 4) = pvVar2;
    }
    else {
      *(int *)(&DAT_1002da44 + param_1 * 4) = param_2;
    }
  }
  return uVar1;
}



// Function: FUN_10003050 @ 0x10003050

undefined4 __cdecl FUN_10003050(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10031060;
  DAT_10031060 = param_1;
  return uVar1;
}



// Function: FUN_10003070 @ 0x10003070

undefined4 __cdecl
FUN_10003070(int param_1,int param_2,int param_3,undefined4 param_4,byte *param_5)

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
  
  FUN_10007150();
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
  else if ((param_1 == 2) && (LVar2 = InterlockedIncrement((LONG *)&DAT_1002da34), 0 < LVar2)) {
    if ((DAT_1002f52c == (FARPROC)0x0) &&
       ((local_3010 = LoadLibraryA("user32.dll"), local_3010 == (HMODULE)0x0 ||
        (DAT_1002f52c = GetProcAddress(local_3010,"wsprintfA"), DAT_1002f52c == (FARPROC)0x0)))) {
      local_100c = 0xffffffff;
    }
    else {
      (*DAT_1002f52c)();
      OutputDebugStringA(&local_200c);
      InterlockedDecrement((LONG *)&DAT_1002da34);
      FUN_10002f60();
      local_100c = 0xffffffff;
    }
  }
  else {
    if ((param_5 != (byte *)0x0) &&
       (iVar3 = FUN_10007050(&local_1004,0xfed,param_5,local_1008), iVar3 < 0)) {
      FUN_10006f60((uint *)&local_1004,(uint *)"_CrtDbgReport: String too long or IO Error");
    }
    if (param_1 == 2) {
      if (param_5 == (byte *)0x0) {
        local_302c = (uint *)0x1002a2c4;
      }
      else {
        local_302c = (uint *)0x1002a2d8;
      }
      FUN_10006f60((uint *)&local_300c,local_302c);
    }
    FUN_10006f70((uint *)&local_300c,(uint *)&local_1004);
    if (param_1 == 2) {
      if ((uRam1002da40 & 1) != 0) {
        FUN_10006f70((uint *)&local_300c,(uint *)&DAT_1002a2c0);
      }
      FUN_10006f70((uint *)&local_300c,(uint *)&DAT_1002a2bc);
    }
    if (param_2 == 0) {
      FUN_10006f60((uint *)&local_200c,(uint *)&local_300c);
    }
    else {
      uStackY_24 = 0x10003285;
      iVar3 = FUN_10006e60(&local_200c,0x1000,(byte *)"%s(%d) : %s");
      if (iVar3 < 0) {
        FUN_10006f60((uint *)&local_200c,(uint *)"_CrtDbgReport: String too long or IO Error");
      }
    }
    if ((DAT_10031060 == (code *)0x0) || (iVar3 = (*DAT_10031060)(), iVar3 == 0)) {
      if (((*(uint *)(&DAT_1002da38 + param_1 * 4) & 1) != 0) &&
         (*(int *)(&DAT_1002da44 + param_1 * 4) != -1)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_3014;
        nNumberOfBytesToWrite = _strlen(&local_200c);
        WriteFile(*(HANDLE *)(&DAT_1002da44 + param_1 * 4),&local_200c,nNumberOfBytesToWrite,
                  lpNumberOfBytesWritten,lpOverlapped);
      }
      if ((*(uint *)(&DAT_1002da38 + param_1 * 4) & 2) != 0) {
        OutputDebugStringA(&local_200c);
      }
      if ((*(uint *)(&DAT_1002da38 + param_1 * 4) & 4) == 0) {
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1002da34);
        }
        local_100c = 0;
      }
      else {
        if (param_3 != 0) {
          __itoa(param_3,local_3028,10);
        }
        bVar1 = FUN_10003400();
        local_100c = CONCAT31(extraout_var,bVar1);
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1002da34);
        }
      }
    }
    else if (param_1 == 2) {
      InterlockedDecrement((LONG *)&DAT_1002da34);
    }
  }
  return local_100c;
}



// Function: FUN_10003400 @ 0x10003400

bool FUN_10003400(void)

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
  
  FUN_10007150();
  if ((in_stack_00000014 == 0) &&
     (iVar1 = FUN_10003070(2,0x1002a49c,0x1da,0,(byte *)"szUserMessage != NULL"), iVar1 == 1)) {
    FUN_10002f60();
  }
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_10c,0x104);
  if (DVar2 == 0) {
    FUN_10006f60(local_10c,(uint *)"<program name unknown>");
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
  uStackY_44 = 0x100036a2;
  iVar1 = FUN_10006e60((undefined1 *)local_1110,0x1000,
                       (byte *)
                       "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)"
                      );
  if (iVar1 < 0) {
    FUN_10006f60(local_1110,(uint *)"_CrtDbgReport: String too long or IO Error");
  }
  local_110 = FUN_10007710(local_1110,"Microsoft Visual C++ Debug Library",0x12012);
  if (local_110 == 3) {
    FUN_10007450(0x16);
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  return local_110 == 4;
}



// Function: FUN_10003710 @ 0x10003710

void FUN_10003710(void)

{
  if (DAT_1003105c != (code *)0x0) {
    (*DAT_1003105c)();
  }
  __initterm((int *)&DAT_1002d208,(int *)&DAT_1002d418);
  __initterm((int *)&DAT_1002d000,(int *)&DAT_1002d104);
  return;
}



// Function: FUN_10003750 @ 0x10003750

void __cdecl FUN_10003750(UINT param_1)

{
  FUN_100037d0(param_1,0,0);
  return;
}



// Function: __exit @ 0x10003770

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __exit(int _Code)

{
  FUN_100037d0(_Code,1,0);
  return;
}



// Function: FUN_10003790 @ 0x10003790

void FUN_10003790(void)

{
  FUN_100037d0(0,0,1);
  return;
}



// Function: FUN_100037b0 @ 0x100037b0

void FUN_100037b0(void)

{
  FUN_100037d0(0,1,1);
  return;
}



// Function: FUN_100037d0 @ 0x100037d0

void __cdecl FUN_100037d0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  FUN_100038c0();
  if (DAT_1002f570 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1002f56c = 1;
  DAT_1002f568 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_10031058 != (int *)0x0) {
      local_8 = DAT_10031054;
      while (local_8 = local_8 + -1, DAT_10031058 <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_1002d51c,(int *)&DAT_1002d724);
  }
  __initterm((int *)&DAT_1002d828,(int *)&DAT_1002d92c);
  if ((DAT_1002f574 == 0) && (uVar1 = FUN_100054c0(-1), (uVar1 & 0x20) != 0)) {
    DAT_1002f574 = 1;
    FUN_10005dd0();
  }
  if (param_3 == 0) {
    DAT_1002f570 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100038d0();
  return;
}



// Function: FUN_100038c0 @ 0x100038c0

void FUN_100038c0(void)

{
  FUN_100079b0(0xd);
  return;
}



// Function: FUN_100038d0 @ 0x100038d0

void FUN_100038d0(void)

{
  FUN_10007a50(0xd);
  return;
}



// Function: __initterm @ 0x100038e0

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



// Function: FUN_10003910 @ 0x10003910

undefined4 FUN_10003910(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100078d0();
  DAT_1002da5c = TlsAlloc();
  if (((DAT_1002da5c != 0xffffffff) &&
      (lpTlsValue = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0x61), lpTlsValue != (DWORD *)0x0))
     && (BVar1 = TlsSetValue(DAT_1002da5c,lpTlsValue), BVar1 != 0)) {
    FUN_100039d0((int)lpTlsValue);
    DVar2 = GetCurrentThreadId();
    *lpTlsValue = DVar2;
    lpTlsValue[1] = 0xffffffff;
    return 1;
  }
  return 0;
}



// Function: FUN_100039a0 @ 0x100039a0

void FUN_100039a0(void)

{
  FUN_10007910();
  if (DAT_1002da5c != 0xffffffff) {
    TlsFree(DAT_1002da5c);
    DAT_1002da5c = 0xffffffff;
  }
  return;
}



// Function: FUN_100039d0 @ 0x100039d0

void __cdecl FUN_100039d0(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1002dc00;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_100039f0 @ 0x100039f0

DWORD * FUN_100039f0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *local_8;
  
  dwErrCode = GetLastError();
  local_8 = TlsGetValue(DAT_1002da5c);
  if (local_8 == (DWORD *)0x0) {
    local_8 = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0xe7);
    if (local_8 != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1002da5c,local_8);
      if (BVar1 != 0) {
        FUN_100039d0((int)local_8);
        DVar2 = GetCurrentThreadId();
        *local_8 = DVar2;
        local_8[1] = 0xffffffff;
        goto LAB_10003a77;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10003a77:
  SetLastError(dwErrCode);
  return local_8;
}



// Function: FUN_10003a90 @ 0x10003a90

void __cdecl FUN_10003a90(LPVOID param_1)

{
  if (DAT_1002da5c != 0xffffffff) {
    if (param_1 == (LPVOID)0x0) {
      param_1 = TlsGetValue(DAT_1002da5c);
    }
    if (param_1 != (LPVOID)0x0) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_10004a40(*(void **)((int)param_1 + 0x24),2);
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_10004a40(*(void **)((int)param_1 + 0x28),2);
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_10004a40(*(void **)((int)param_1 + 0x30),2);
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_10004a40(*(void **)((int)param_1 + 0x38),2);
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_10004a40(*(void **)((int)param_1 + 0x40),2);
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_10004a40(*(void **)((int)param_1 + 0x44),2);
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_1002dc00) {
        FUN_10004a40(*(void **)((int)param_1 + 0x50),2);
      }
      FUN_10004a40(param_1,2);
    }
    TlsSetValue(DAT_1002da5c,(LPVOID)0x0);
  }
  return;
}



// Function: FUN_10003ba0 @ 0x10003ba0

void FUN_10003ba0(void)

{
  GetCurrentThreadId();
  return;
}



// Function: FUN_10003bb0 @ 0x10003bb0

void FUN_10003bb0(void)

{
  GetCurrentThread();
  return;
}



// Function: FUN_10003bc0 @ 0x10003bc0

void FUN_10003bc0(void)

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
  
  local_54 = (undefined4 *)FUN_10003fb0((void *)0x480,2,0x1002a4cc,0x81);
  if (local_54 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_1003103c = 0x20;
  DAT_10030f00 = local_54;
  for (; local_54 < DAT_10030f00 + 0x120; local_54 = local_54 + 9) {
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
    while ((int)DAT_1003103c < (int)local_6c) {
      local_54 = (undefined4 *)FUN_10003fb0((void *)0x480,2,0x1002a4cc,0xb6);
      if (local_54 == (undefined4 *)0x0) {
        local_68 = DAT_1003103c;
        break;
      }
      (&DAT_10030f00)[local_60] = local_54;
      DAT_1003103c = DAT_1003103c + 0x20;
      for (; local_54 < (undefined4 *)((int)(&DAT_10030f00)[local_60] + 0x480);
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
        puVar2 = (undefined4 *)((int)(&DAT_10030f00)[(int)local_5c >> 5] + (local_5c & 0x1f) * 0x24)
        ;
        *puVar2 = *(undefined4 *)local_64;
        *(byte *)(puVar2 + 1) = *local_8;
      }
      local_8 = local_8 + 1;
      local_64 = local_64 + 4;
    }
  }
  for (local_5c = 0; (int)local_5c < 3; local_5c = local_5c + 1) {
    piVar3 = DAT_10030f00 + local_5c * 9;
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
  SetHandleCount(DAT_1003103c);
  return;
}



// Function: __ioterm @ 0x10003ef0

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio */

void __cdecl __ioterm(void)

{
  int local_c;
  uint local_8;
  
  for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
    if ((&DAT_10030f00)[local_c] != 0) {
      for (local_8 = (&DAT_10030f00)[local_c]; local_8 < (&DAT_10030f00)[local_c] + 0x480;
          local_8 = local_8 + 0x24) {
        if (*(int *)(local_8 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(local_8 + 0xc));
        }
      }
      FUN_10004a40((void *)(&DAT_10030f00)[local_c],2);
      (&DAT_10030f00)[local_c] = 0;
    }
  }
  return;
}



// Function: FUN_10003f90 @ 0x10003f90

void __cdecl FUN_10003f90(void *param_1)

{
  FUN_10004000(param_1,(uint)param_1,DAT_1002f718,1,0,0);
  return;
}



// Function: FUN_10003fb0 @ 0x10003fb0

void __cdecl FUN_10003fb0(void *param_1,uint param_2,int param_3,int param_4)

{
  FUN_10004000(param_1,(uint)param_1,DAT_1002f718,param_2,param_3,param_4);
  return;
}



// Function: FUN_10003fe0 @ 0x10003fe0

void __cdecl FUN_10003fe0(void *param_1,int param_2)

{
  FUN_10004000(param_1,(uint)param_1,param_2,1,0,0);
  return;
}



// Function: FUN_10004000 @ 0x10004000

int * __thiscall
FUN_10004000(void *this,uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    FUN_100079b0(9);
    piVar1 = FUN_10004080(param_1,param_3,param_4,param_5);
    FUN_10007a50(9);
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



// Function: FUN_10004060 @ 0x10004060

void __cdecl FUN_10004060(uint param_1)

{
  FUN_10004080(param_1,1,0,0);
  return;
}



// Function: FUN_10004080 @ 0x10004080

int * __cdecl FUN_10004080(uint param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  bVar2 = false;
  if ((((DAT_1002da84 & 4) != 0) && (iVar4 = FUN_10005150(), iVar4 == 0)) &&
     (iVar4 = FUN_10003070(2,0x1002a5b4,0x141,0,(byte *)"_CrtCheckMemory()"), iVar4 == 1)) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar4 = DAT_1002da88;
  if (DAT_1002da88 == DAT_1002da8c) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar6 = (*(code *)PTR_FUN_1002dc90)(1,0,param_1,param_2,DAT_1002da88,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == 0) {
      iVar4 = FUN_10003070(0,0,0,0,&DAT_1002a554);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    else {
      iVar4 = FUN_10003070(0,0,0,0,(byte *)"Client hook allocation failure at file %hs line %d.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    piVar5 = (int *)0x0;
  }
  else {
    if (((param_2 & 0xffff) != 2) && ((DAT_1002da84 & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < 0xffffffe1) && (param_1 + 0x24 < 0xffffffe1)) {
      if (((((param_2 & 0xffff) != 4) && (param_2 != 1)) && ((param_2 & 0xffff) != 2)) &&
         ((param_2 != 3 && (iVar6 = FUN_10003070(1,0,0,0,&DAT_1002a554), iVar6 == 1)))) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = FUN_10007e00((void *)(param_1 + 0x24),param_1 + 0x24);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        DAT_1002da88 = DAT_1002da88 + 1;
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
          DAT_1002f57c = DAT_1002f57c + param_1;
          DAT_1002f584 = DAT_1002f584 + param_1;
          if (DAT_1002f588 < DAT_1002f584) {
            DAT_1002f588 = DAT_1002f584;
          }
          piVar3 = piVar5;
          if (DAT_1002f580 != (int *)0x0) {
            DAT_1002f580[1] = (int)piVar5;
            piVar3 = DAT_1002f578;
          }
          DAT_1002f578 = piVar3;
          *piVar5 = (int)DAT_1002f580;
          piVar5[1] = 0;
          piVar5[2] = param_3;
          piVar5[3] = param_4;
          piVar5[4] = param_1;
          piVar5[5] = param_2;
          piVar5[6] = iVar4;
          DAT_1002f580 = piVar5;
        }
        _memset(piVar5 + 7,(uint)DAT_1002da90,4);
        _memset((void *)((int)piVar5 + param_1 + 0x20),(uint)DAT_1002da90,4);
        _memset(piVar5 + 8,(uint)DAT_1002da92,param_1);
        piVar5 = piVar5 + 8;
      }
    }
    else {
      iVar4 = FUN_10003070(1,0,0,0,(byte *)"Invalid allocation size: %u bytes.\n");
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



// Function: FUN_100043a0 @ 0x100043a0

void __cdecl FUN_100043a0(int param_1,int param_2)

{
  __calloc_dbg(param_1,param_2,1,0,0);
  return;
}



// Function: __calloc_dbg @ 0x100043c0

/* Library Function - Single Match
    __calloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined1 * __cdecl __calloc_dbg(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 *local_10;
  
  puVar1 = (undefined1 *)FUN_10003fb0((void *)(param_2 * param_1),param_3,param_4,param_5);
  if (puVar1 != (undefined1 *)0x0) {
    for (local_10 = puVar1; local_10 < puVar1 + param_2 * param_1; local_10 = local_10 + 1) {
      *local_10 = 0;
    }
  }
  return puVar1;
}



// Function: FUN_10004420 @ 0x10004420

void __cdecl FUN_10004420(void *param_1,void *param_2)

{
  FUN_10004440(param_1,param_2,1,0,0);
  return;
}



// Function: FUN_10004440 @ 0x10004440

int * __cdecl FUN_10004440(void *param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_100079b0(9);
  piVar1 = FUN_10004480(param_1,param_2,param_3,param_4,param_5,1);
  FUN_10007a50(9);
  return piVar1;
}



// Function: FUN_10004480 @ 0x10004480

int * __cdecl
FUN_10004480(void *param_1,void *param_2,uint param_3,int param_4,int param_5,int param_6)

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
    piVar2 = (int *)FUN_10003fb0(param_2,param_3,param_4,param_5);
  }
  else if ((param_6 == 0) || (param_2 != (void *)0x0)) {
    if (((DAT_1002da84 & 4) != 0) &&
       ((iVar3 = FUN_10005150(), iVar3 == 0 &&
        (iVar3 = FUN_10003070(2,0x1002a5b4,0x239,0,(byte *)"_CrtCheckMemory()"), iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar3 = DAT_1002da88;
    if (DAT_1002da88 == DAT_1002da8c) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar5 = (*(code *)PTR_FUN_1002dc90)(2,param_1,param_2,param_3,DAT_1002da88,param_4,param_5);
    if (iVar5 == 0) {
      if (param_4 == 0) {
        iVar3 = FUN_10003070(0,0,0,0,&DAT_1002a554);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        iVar3 = FUN_10003070(0,0,0,0,(byte *)
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
         (iVar5 = FUN_10003070(1,0,0,0,&DAT_1002a554), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      BVar6 = FUN_100055b0((int)param_1);
      if ((BVar6 == 0) &&
         (iVar5 = FUN_10003070(2,0x1002a5b4,0x261,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar4 = (int *)((int)param_1 + -0x20);
      bVar7 = *(int *)((int)param_1 + -0xc) == 3;
      if (bVar7) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar5 = FUN_10003070(2,0x1002a5b4,0x26b,0,
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
           (iVar5 = FUN_10003070(2,0x1002a5b4,0x272,0,
                                 (byte *)"_BLOCK_TYPE(pOldBlock->nBlockUse)==_BLOCK_TYPE(nBlockUse)"
                                ), iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      if (param_6 == 0) {
        local_10 = FUN_10007e80(piVar4,(int)param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_10 = FUN_10007f30(piVar4,(void *)((int)param_2 + 0x24));
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      DAT_1002da88 = DAT_1002da88 + 1;
      if (!bVar7) {
        DAT_1002f57c = (DAT_1002f57c - local_10[4]) + (int)param_2;
        DAT_1002f584 = (DAT_1002f584 - local_10[4]) + (int)param_2;
        if (DAT_1002f588 < DAT_1002f584) {
          DAT_1002f588 = DAT_1002f584;
        }
      }
      piVar2 = local_10 + 8;
      if ((void *)local_10[4] < param_2) {
        _memset((void *)((int)piVar2 + local_10[4]),(uint)DAT_1002da92,(int)param_2 - local_10[4]);
      }
      _memset((void *)((int)piVar2 + (int)param_2),(uint)DAT_1002da90,4);
      if (!bVar7) {
        local_10[2] = param_4;
        local_10[3] = param_5;
        local_10[6] = iVar3;
      }
      local_10[4] = (int)param_2;
      if (((param_6 == 0) && (local_10 != piVar4)) &&
         (iVar3 = FUN_10003070(2,0x1002a5b4,0x2a8,0,
                               (byte *)"fRealloc || (!fRealloc && pNewBlock == pOldBlock)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      if ((local_10 != piVar4) && (!bVar7)) {
        if (*local_10 == 0) {
          if ((DAT_1002f578 != piVar4) &&
             (iVar3 = FUN_10003070(2,0x1002a5b4,0x2b7,0,(byte *)"_pLastBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_1002f578 = (int *)local_10[1];
        }
        else {
          *(int *)(*local_10 + 4) = local_10[1];
        }
        if (local_10[1] == 0) {
          if ((DAT_1002f580 != piVar4) &&
             (iVar3 = FUN_10003070(2,0x1002a5b4,0x2c2,0,(byte *)"_pFirstBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_1002f580 = (int *)*local_10;
        }
        else {
          *(int *)local_10[1] = *local_10;
        }
        if (DAT_1002f580 == (int *)0x0) {
          DAT_1002f578 = local_10;
        }
        else {
          DAT_1002f580[1] = (int)local_10;
        }
        *local_10 = (int)DAT_1002f580;
        local_10[1] = 0;
        DAT_1002f580 = local_10;
      }
    }
    else {
      iVar3 = FUN_10003070(1,0,0,0,(byte *)"Allocation too large or negative: %u bytes.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    FUN_10004a40(param_1,param_3);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



// Function: FUN_100049a0 @ 0x100049a0

void __cdecl FUN_100049a0(void *param_1,void *param_2)

{
  FUN_100049c0(param_1,param_2,1,0,0);
  return;
}



// Function: FUN_100049c0 @ 0x100049c0

int * __cdecl FUN_100049c0(void *param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_100079b0(9);
  piVar1 = FUN_10004480(param_1,param_2,param_3,param_4,param_5,0);
  FUN_10007a50(9);
  return piVar1;
}



// Function: FUN_10004a00 @ 0x10004a00

void __cdecl FUN_10004a00(void *param_1)

{
  FUN_10004a40(param_1,1);
  return;
}



// Function: FUN_10004a20 @ 0x10004a20

void __cdecl FUN_10004a20(void *param_1)

{
  FUN_10004a70(param_1,1);
  return;
}



// Function: FUN_10004a40 @ 0x10004a40

void __cdecl FUN_10004a40(void *param_1,int param_2)

{
  FUN_100079b0(9);
  FUN_10004a70(param_1,param_2);
  FUN_10007a50(9);
  return;
}



// Function: FUN_10004a70 @ 0x10004a70

void __cdecl FUN_10004a70(void *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int *_Dst;
  void *this;
  void *this_00;
  
  if ((((DAT_1002da84 & 4) != 0) && (iVar2 = FUN_10005150(), iVar2 == 0)) &&
     (iVar2 = FUN_10003070(2,0x1002a5b4,0x3e1,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (void *)0x0) {
    iVar2 = (*(code *)PTR_FUN_1002dc90)(3,param_1,0,param_2,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_10003070(0,0,0,0,&DAT_1002a554);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      BVar3 = FUN_100055b0((int)param_1);
      if ((BVar3 == 0) &&
         (iVar2 = FUN_10003070(2,0x1002a5b4,0x3f3,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = (int *)((int)param_1 + -0x20);
      if ((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
         && (((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2 &&
             ((*(int *)((int)param_1 + -0xc) != 3 &&
              (iVar2 = FUN_10003070(2,0x1002a5b4,0x3f9,0,
                                    (byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))
             ))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((DAT_1002da84 & 4) == 0) {
        iVar2 = FUN_100050c0((char *)((int)param_1 + -4),DAT_1002da90,4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_10003070(1,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar2 = FUN_100050c0((char *)((int)param_1 + *(int *)((int)param_1 + -0x10)),DAT_1002da90,4)
        ;
        if ((iVar2 == 0) &&
           (iVar2 = FUN_10003070(1,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((int)param_1 + -0xc) == 3) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar2 = FUN_10003070(2,0x1002a5b4,0x40e,0,
                                    (byte *)
                                    "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ"),
              iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _memset(_Dst,(uint)DAT_1002da91,*(int *)((int)param_1 + -0x10) + 0x24);
        FUN_10008120(this,_Dst);
      }
      else {
        if ((*(int *)((int)param_1 + -0xc) == 2) && (param_2 == 1)) {
          param_2 = 2;
        }
        if ((*(int *)((int)param_1 + -0xc) != param_2) &&
           (iVar2 = FUN_10003070(2,0x1002a5b4,0x41b,0,(byte *)"pHead->nBlockUse == nBlockUse"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_1002f584 = DAT_1002f584 - *(int *)((int)param_1 + -0x10);
        if ((DAT_1002da84 & 2) == 0) {
          if (*_Dst == 0) {
            if ((DAT_1002f578 != _Dst) &&
               (iVar2 = FUN_10003070(2,0x1002a5b4,0x42a,0,(byte *)"_pLastBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_1002f578 = *(int **)((int)param_1 + -0x1c);
          }
          else {
            *(undefined4 *)(*_Dst + 4) = *(undefined4 *)((int)param_1 + -0x1c);
          }
          if (*(int *)((int)param_1 + -0x1c) == 0) {
            if ((DAT_1002f580 != _Dst) &&
               (iVar2 = FUN_10003070(2,0x1002a5b4,0x434,0,(byte *)"_pFirstBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_1002f580 = (int *)*_Dst;
          }
          else {
            **(int **)((int)param_1 + -0x1c) = *_Dst;
          }
          _memset(_Dst,(uint)DAT_1002da91,*(int *)((int)param_1 + -0x10) + 0x24);
          FUN_10008120(this_00,_Dst);
        }
        else {
          *(undefined4 *)((int)param_1 + -0xc) = 0;
          _memset(param_1,(uint)DAT_1002da91,*(size_t *)((int)param_1 + -0x10));
        }
      }
    }
  }
  return;
}



// Function: FUN_10004e60 @ 0x10004e60

void __cdecl FUN_10004e60(int param_1)

{
  FUN_10004e80(param_1,1);
  return;
}



// Function: FUN_10004e80 @ 0x10004e80

undefined4 __cdecl FUN_10004e80(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  
  if ((((DAT_1002da84 & 4) != 0) && (iVar2 = FUN_10005150(), iVar2 == 0)) &&
     (iVar2 = FUN_10003070(2,0x1002a5b4,0x47c,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_100079b0(9);
  BVar4 = FUN_100055b0(param_1);
  if ((BVar4 == 0) &&
     (iVar2 = FUN_10003070(2,0x1002a5b4,0x485,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
     (((*(uint *)(param_1 + -0xc) & 0xffff) != 2 &&
      ((*(int *)(param_1 + -0xc) != 3 &&
       (iVar2 = FUN_10003070(2,0x1002a5b4,0x48b,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
       iVar2 == 1)))))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((*(int *)(param_1 + -0xc) == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if (((*(int *)(param_1 + -0xc) != 3) && (*(int *)(param_1 + -0xc) != param_2)) &&
     (iVar2 = FUN_10003070(2,0x1002a5b4,0x492,0,(byte *)"pHead->nBlockUse == nBlockUse"), iVar2 == 1
     )) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + -0x10);
  FUN_10007a50(9);
  return uVar3;
}



// Function: FUN_10004fe0 @ 0x10004fe0

undefined4 __cdecl FUN_10004fe0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1002da8c;
  DAT_1002da8c = param_1;
  return uVar1;
}



// Function: FUN_10005000 @ 0x10005000

void __cdecl FUN_10005000(int param_1,undefined4 param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  FUN_100079b0(9);
  BVar2 = FUN_100055b0(param_1);
  if (BVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)(param_1 + -0xc) != 3 &&
        (iVar3 = FUN_10003070(2,0x1002a5b4,0x4d3,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)")
        , iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  FUN_10007a50(9);
  return;
}



// Function: FUN_100050a0 @ 0x100050a0

undefined * __cdecl FUN_100050a0(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_1002dc90;
  PTR_FUN_1002dc90 = param_1;
  return puVar1;
}



// Function: FUN_100050c0 @ 0x100050c0

undefined4 __cdecl FUN_100050c0(char *param_1,char param_2,int param_3)

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
    iVar4 = FUN_10003070(0,0,0,0,(byte *)
                                 "memory check error at 0x%08X = 0x%02X, should be 0x%02X.\n");
    if (iVar4 == 1) break;
    local_8 = 0;
  }
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}



// Function: FUN_10005150 @ 0x10005150

undefined4 FUN_10005150(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = 1;
  if ((DAT_1002da84 & 1) == 0) {
    local_8 = 1;
  }
  else {
    FUN_100079b0(9);
    iVar3 = FUN_10008190();
    if ((iVar3 == -1) || (iVar3 == -2)) {
      for (local_c = DAT_1002f580; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
        bVar2 = true;
        iVar3 = FUN_100050c0((char *)(local_c + 7),DAT_1002da90,4);
        if (iVar3 == 0) {
          iVar3 = FUN_10003070(0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        iVar3 = FUN_100050c0((char *)((int)local_c + local_c[4] + 0x20),DAT_1002da90,4);
        if (iVar3 == 0) {
          iVar3 = FUN_10003070(0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if ((local_c[5] == 0) &&
           (iVar3 = FUN_100050c0((char *)(local_c + 8),DAT_1002da91,local_c[4]), iVar3 == 0)) {
          iVar3 = FUN_10003070(0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if (!bVar2) {
          if ((local_c[2] != 0) &&
             (iVar3 = FUN_10003070(0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar3 == 1))
          {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          iVar3 = FUN_10003070(0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          local_8 = 0;
        }
      }
      FUN_10007a50(9);
    }
    else {
      switch(iVar3) {
      case -6:
        iVar3 = FUN_10003070(0,0,0,0,&DAT_1002a554);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -5:
        iVar3 = FUN_10003070(0,0,0,0,&DAT_1002a554);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -4:
        iVar3 = FUN_10003070(0,0,0,0,&DAT_1002a554);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -3:
        iVar3 = FUN_10003070(0,0,0,0,&DAT_1002a554);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      default:
        iVar3 = FUN_10003070(0,0,0,0,&DAT_1002a554);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      FUN_10007a50(9);
      local_8 = 0;
    }
  }
  return local_8;
}



// Function: FUN_100054c0 @ 0x100054c0

int __cdecl FUN_100054c0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1002da84;
  if (param_1 != -1) {
    DAT_1002da84 = param_1;
  }
  return iVar1;
}



// Function: FUN_100054f0 @ 0x100054f0

void __cdecl FUN_100054f0(undefined *param_1,undefined4 param_2)

{
  undefined4 *local_8;
  
  if ((DAT_1002da84 & 1) != 0) {
    FUN_100079b0(9);
    for (local_8 = DAT_1002f580; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      if ((local_8[5] & 0xffff) == 4) {
        (*(code *)param_1)(local_8 + 8,param_2);
      }
    }
    FUN_10007a50(9);
  }
  return;
}



// Function: FID_conflict:AtlIsValidAddress @ 0x10005560

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



// Function: FUN_100055b0 @ 0x100055b0

BOOL __cdecl FUN_100055b0(int param_1)

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
      uVar3 = FUN_100082b0(param_1 + -0x20);
      if (uVar3 == 0) {
        if ((DAT_1002f534 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_10030ecc,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = FUN_10008310(uVar3,param_1 + -0x20);
      }
    }
  }
  return BVar1;
}



// Function: FUN_10005640 @ 0x10005640

undefined4 __cdecl
FUN_10005640(void *param_1,UINT_PTR param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = FUN_100055b0((int)param_1);
  if (BVar1 != 0) {
    FUN_100079b0(9);
    if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) || (*(int *)((int)param_1 + -0xc) == 1))
         || ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
        (*(int *)((int)param_1 + -0xc) == 3)) &&
       (((iVar2 = FID_conflict_AtlIsValidAddress(param_1,param_2,1), iVar2 != 0 &&
         (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
        (*(int *)((int)param_1 + -8) <= DAT_1002da88)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)((int)param_1 + -0x14);
      }
      FUN_10007a50(9);
      return 1;
    }
    FUN_10007a50(9);
  }
  return 0;
}



// Function: FUN_10005730 @ 0x10005730

undefined4 __cdecl FUN_10005730(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10030ed8;
  DAT_10030ed8 = param_1;
  return uVar1;
}



// Function: FUN_10005750 @ 0x10005750

void __cdecl FUN_10005750(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  int local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = FUN_10003070(0,0,0,0,&DAT_1002a554);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FUN_100079b0(9);
    *param_1 = DAT_1002f580;
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      param_1[local_8 + 6] = 0;
      param_1[local_8 + 1] = 0;
    }
    for (local_c = DAT_1002f580; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
      if ((local_c[5] & 0xffff) < 5) {
        param_1[(local_c[5] & 0xffff) + 1] = param_1[(local_c[5] & 0xffff) + 1] + 1;
        param_1[(local_c[5] & 0xffff) + 6] = param_1[(local_c[5] & 0xffff) + 6] + local_c[4];
      }
      else {
        iVar2 = FUN_10003070(0,0,0,0,(byte *)"Bad memory block found at 0x%08X.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    param_1[0xb] = DAT_1002f588;
    param_1[0xc] = DAT_1002f57c;
    FUN_10007a50(9);
  }
  return;
}



// Function: FUN_100058c0 @ 0x100058c0

undefined4 __cdecl FUN_100058c0(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar2 = FUN_10003070(0,0,0,0,&DAT_1002a554);
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
         ((local_8 != 0 && ((local_8 != 2 || ((DAT_1002da84 & 0x10) != 0)))))) {
        local_c = 1;
      }
    }
    param_1[0xb] = *(int *)(param_3 + 0x2c) - *(int *)(param_2 + 0x2c);
    param_1[0xc] = *(int *)(param_3 + 0x30) - *(int *)(param_2 + 0x30);
    *param_1 = 0;
  }
  return local_c;
}



// Function: FUN_100059f0 @ 0x100059f0

void __cdecl FUN_100059f0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_100079b0(9);
  iVar2 = FUN_10003070(0,0,0,0,&DAT_1002a554);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
  }
  local_8 = DAT_1002f580;
  do {
    if ((local_8 == (undefined4 *)0x0) || (local_8 == local_c)) {
      FUN_10007a50(9);
      iVar2 = FUN_10003070(0,0,0,0,&DAT_1002a554);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
    if ((((local_8[5] & 0xffff) != 3) && ((local_8[5] & 0xffff) != 0)) &&
       (((local_8[5] & 0xffff) != 2 || ((DAT_1002da84 & 0x10) != 0)))) {
      if (local_8[2] != 0) {
        iVar2 = FID_conflict_AtlIsValidAddress((void *)local_8[2],1,0);
        if (iVar2 == 0) {
          iVar2 = FUN_10003070(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = FUN_10003070(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = FUN_10003070(0,0,0,0,(byte *)"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_8[5] & 0xffff) == 4) {
        iVar2 = FUN_10003070(0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n")
        ;
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_10030ed8 == (code *)0x0) {
          FUN_10005cb0((int)local_8);
        }
        else {
          (*DAT_10030ed8)(local_8 + 8,local_8[4]);
        }
      }
      else if (local_8[5] == 1) {
        iVar2 = FUN_10003070(0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_10005cb0((int)local_8);
      }
      else if ((local_8[5] & 0xffff) == 2) {
        iVar2 = FUN_10003070(0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_10005cb0((int)local_8);
      }
    }
    local_8 = (undefined4 *)*local_8;
  } while( true );
}



// Function: FUN_10005cb0 @ 0x10005cb0

void __cdecl FUN_10005cb0(int param_1)

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
    if (DAT_1002dea4 < 2) {
      local_5c = *(ushort *)(PTR_DAT_1002dc98 + (uint)bVar1 * 2) & 0x157;
    }
    else {
      local_5c = FUN_10009fc0((uint)bVar1,0x157);
    }
    if (local_5c == 0) {
      bVar1 = 0x20;
    }
    local_4c[local_50] = bVar1;
    FUN_10009ec0(local_38 + local_50 * 3,0x1002ab80);
    local_50 = local_50 + 1;
  }
  local_4c[local_50] = 0;
  iVar3 = FUN_10003070(0,0,0,0,(byte *)" Data: <%s> %s\n");
  if (iVar3 == 1) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}



// Function: FUN_10005dd0 @ 0x10005dd0

undefined4 FUN_10005dd0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  FUN_10005750(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_1002da84 & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_10003070(0,0,0,0,&DAT_1002a554);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_100059f0((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_10005e50 @ 0x10005e50

void __cdecl FUN_10005e50(int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  if (param_1 != 0) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      iVar2 = FUN_10003070(0,0,0,0,(byte *)"%ld bytes in %ld %hs Blocks.\n");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = FUN_10003070(0,0,0,0,(byte *)"Largest number used: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FUN_10003070(0,0,0,0,(byte *)"Total allocations: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



// Function: FUN_10005f20 @ 0x10005f20

void FUN_10005f20(void)

{
  size_t sVar1;
  int iVar2;
  int *local_10;
  int local_c;
  uint *local_8;
  
  if (DAT_10031050 == 0) {
    FUN_1000a860();
  }
  local_c = 0;
  for (local_8 = DAT_1002f51c; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    if ((char)*local_8 != '=') {
      local_c = local_c + 1;
    }
    sVar1 = _strlen((char *)local_8);
  }
  local_10 = (int *)FUN_10003fb0((void *)(local_c * 4 + 4),2,0x1002ac04,0x6d);
  DAT_1002f550 = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (local_8 = DAT_1002f51c; (char)*local_8 != '\0';
      local_8 = (uint *)((int)local_8 + (int)(sVar1 + 1))) {
    sVar1 = _strlen((char *)local_8);
    if ((char)*local_8 != '=') {
      iVar2 = FUN_10003fb0((void *)(sVar1 + 1),2,0x1002ac04,0x79);
      *local_10 = iVar2;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_10006f60((uint *)*local_10,local_8);
      local_10 = local_10 + 1;
    }
  }
  FUN_10004a40(DAT_1002f51c,2);
  DAT_1002f51c = (uint *)0x0;
  *local_10 = 0;
  DAT_10031040 = 1;
  return;
}



// Function: FUN_10006070 @ 0x10006070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006070(void)

{
  byte *local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_10031050 == 0) {
    FUN_1000a860();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1002f58c,0x104);
  DAT_1002f560 = &DAT_1002f58c;
  if (*DAT_1003106c == 0) {
    local_18 = &DAT_1002f58c;
  }
  else {
    local_18 = DAT_1003106c;
  }
  FUN_10006150(local_18,(undefined4 *)0x0,(byte *)0x0,&local_10,&local_8);
  local_c = (undefined4 *)FUN_10003fb0((void *)(local_8 + local_10 * 4),2,0x1002ac10,0x80);
  if (local_c == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10006150(local_18,local_c,(byte *)(local_c + local_10),&local_10,&local_8);
  _DAT_1002f544 = local_10 + -1;
  _DAT_1002f548 = local_c;
  return;
}



// Function: FUN_10006150 @ 0x10006150

void __cdecl FUN_10006150(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if ((((&DAT_10030da1)[*pbVar3] & 4) != 0) && (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)
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
      if (((&DAT_10030da1)[bVar1] & 4) != 0) {
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
          if (((&DAT_10030da1)[*local_8] & 4) != 0) {
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if (((&DAT_10030da1)[*local_8] & 4) != 0) {
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



// Function: FUN_10006580 @ 0x10006580

LPSTR FUN_10006580(void)

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
  if (DAT_1002f690 == 0) {
    local_18 = GetEnvironmentStringsW();
    if (local_18 == (LPWCH)0x0) {
      local_1c = GetEnvironmentStrings();
      if (local_1c == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_1002f690 = 2;
    }
    else {
      DAT_1002f690 = 1;
    }
  }
  if (DAT_1002f690 == 1) {
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
         (local_1c = (LPCH)FUN_10003fb0(cbMultiByte,2,0x1002ac1c,100), local_1c == (LPSTR)0x0)) {
        FreeEnvironmentStringsW(local_18);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,local_18,iVar4,local_1c,(int)cbMultiByte,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar4 == 0) {
          FUN_10004a40(local_1c,2);
          local_1c = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(local_18);
        pCVar3 = local_1c;
      }
    }
  }
  else if (DAT_1002f690 == 2) {
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
      pCVar3 = (LPSTR)FUN_10003fb0(local_10 + (1 - (int)local_1c),2,0x1002ac1c,0x8f);
      if (pCVar3 == (LPSTR)0x0) {
        FreeEnvironmentStringsA(local_1c);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        FUN_1000a890((undefined4 *)pCVar3,(undefined4 *)local_1c,
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



// Function: FUN_100067a0 @ 0x100067a0

undefined4 __cdecl FUN_100067a0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  DAT_10030ecc = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10030ecc == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_10008250();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      HeapDestroy(DAT_10030ecc);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// Function: FUN_100067f0 @ 0x100067f0

void FUN_100067f0(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = DAT_10030ec8;
  for (local_8 = 0; local_8 < DAT_10030ec4; local_8 = local_8 + 1) {
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
    HeapFree(DAT_10030ecc,0,*(LPVOID *)((int)local_c + 0x10));
    local_c = (LPVOID)((int)local_c + 0x14);
  }
  HeapFree(DAT_10030ecc,0,DAT_10030ec8);
  HeapDestroy(DAT_10030ecc);
  return;
}



// Function: __FF_MSGBANNER @ 0x10006890

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_1002f524 == 1) || ((DAT_1002f524 == 0 && (DAT_1002f528 == 1)))) {
    FUN_100068e0(0xfc);
    if (DAT_1002f694 != (code *)0x0) {
      (*DAT_1002f694)();
    }
    FUN_100068e0(0xff);
  }
  return;
}



// Function: FUN_100068e0 @ 0x100068e0

void __cdecl FUN_100068e0(int param_1)

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
  
  for (local_c = 0; (local_c < 0x12 && (param_1 != *(int *)(&DAT_1002dab0 + local_c * 8)));
      local_c = local_c + 1) {
  }
  if (param_1 == *(int *)(&DAT_1002dab0 + local_c * 8)) {
    if ((param_1 != 0xfc) &&
       (iVar2 = FUN_10003070(1,0,0,0,(&PTR_s_R6002___floating_point_not_loade_1002dab4)[local_c * 2]
                            ), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((DAT_1002f524 == 1) || ((DAT_1002f524 == 0 && (DAT_1002f528 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_8;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_1002dab4)[local_c * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_1002dab4)[local_c * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar4 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_114,0x104);
      if (DVar4 == 0) {
        FUN_10006f60(local_114,(uint *)"<program name unknown>");
      }
      local_10 = local_114;
      sVar3 = _strlen((char *)local_10);
      if (0x3c < sVar3 + 1) {
        sVar3 = _strlen((char *)local_114);
        local_10 = (uint *)((int)local_10 + (sVar3 - 0x3b));
        _strncpy((char *)local_10,"...",3);
      }
      FUN_10006f60(local_1b4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10006f70(local_1b4,local_10);
      FUN_10006f70(local_1b4,(uint *)&DAT_1002a3f8);
      FUN_10006f70(local_1b4,(uint *)(&PTR_s_R6002___floating_point_not_loade_1002dab4)[local_c * 2]
                  );
      FUN_10007710(local_1b4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: __GET_RTERRMSG @ 0x10006aa0

/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2003 Debug */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  wchar_t *pwVar1;
  uint local_8;
  
  for (local_8 = 0; (local_8 < 0x12 && (param_1 != *(int *)(&DAT_1002dab0 + local_8 * 8)));
      local_8 = local_8 + 1) {
  }
  if (param_1 == *(int *)(&DAT_1002dab0 + local_8 * 8)) {
    pwVar1 = (wchar_t *)(&PTR_s_R6002___floating_point_not_loade_1002dab4)[local_8 * 2];
  }
  else {
    pwVar1 = (wchar_t *)0x0;
  }
  return pwVar1;
}



// Function: __itoa @ 0x10006af0

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



// Function: xtoa @ 0x10006b40

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



// Function: __ltoa @ 0x10006c10

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



// Function: __ultoa @ 0x10006c50

/* Library Function - Single Match
    __ultoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Value,_Dest,_Radix,0);
  return _Dest;
}



// Function: __i64toa @ 0x10006c70

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



// Function: x64toa @ 0x10006cc0

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



// Function: __ui64toa @ 0x10006dc0

/* Library Function - Single Match
    __ui64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  x64toa(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}



// Function: _strlen @ 0x10006de0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10006e00;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10006e33:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10006e00:
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
  goto LAB_10006e33;
}



// Function: FUN_10006e60 @ 0x10006e60

int __cdecl FUN_10006e60(undefined1 *param_1,int param_2,byte *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_10003070(2,0x1002af04,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte *)0x0) &&
     (iVar2 = FUN_10003070(2,0x1002af04,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_1000af40((int *)&local_24,param_3,(undefined4 *)&stack0x00000010);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000acc0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_10006f60 @ 0x10006f60

uint * __cdecl FUN_10006f60(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10007048;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10007048:
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



// Function: FUN_10006f70 @ 0x10006f70

uint * __cdecl FUN_10006f70(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10006f8c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10006fbf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10006fdb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10006f8c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10006fdb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10006fdb;
    }
  }
LAB_10006fbf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10006fdb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10007048:
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
    if (bVar1 == 0) goto LAB_10007048;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: FUN_10007050 @ 0x10007050

int __cdecl FUN_10007050(undefined1 *param_1,int param_2,byte *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_10003070(2,0x1002af20,0x5a,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte *)0x0) &&
     (iVar2 = FUN_10003070(2,0x1002af20,0x5b,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_1000af40((int *)&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000acc0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_10007150 @ 0x10007150

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10007150(void)

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



// Function: FUN_10007180 @ 0x10007180

int __cdecl FUN_10007180(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int local_10;
  uint local_c;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_100079b0(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_1002f6a8 == 0)) {
        BVar2 = SetConsoleCtrlHandler(FUN_100073b0,1);
        if (BVar2 != 1) {
          DVar3 = GetLastError();
          pDVar4 = FUN_1000be90();
          *pDVar4 = DVar3;
          FUN_10007a50(1);
          goto LAB_10007368;
        }
        DAT_1002f6a8 = 1;
      }
      switch(param_1) {
      case 2:
        local_10 = DAT_1002f698;
        DAT_1002f698 = param_2;
        break;
      case 0xf:
        local_10 = DAT_1002f6a4;
        DAT_1002f6a4 = param_2;
        break;
      case 0x15:
        local_10 = DAT_1002f69c;
        DAT_1002f69c = param_2;
        break;
      case 0x16:
        local_10 = DAT_1002f6a0;
        DAT_1002f6a0 = param_2;
      }
      FUN_10007a50(1);
      return local_10;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar4 = FUN_100039f0();
      if ((undefined *)pDVar4[0x14] == &DAT_1002dc00) {
        DVar3 = FUN_10003fb0(DAT_1002dc80,2,0x1002af2c,0x133);
        pDVar4[0x14] = DVar3;
        if (pDVar4[0x14] == 0) goto LAB_10007368;
        FUN_1000a890((undefined4 *)pDVar4[0x14],(undefined4 *)&DAT_1002dc00,(uint)DAT_1002dc80);
      }
      local_c = FUN_10007690(param_1,pDVar4[0x14]);
      if (local_c != 0) {
        iVar1 = *(int *)(local_c + 8);
        do {
          if (*(int *)(local_c + 4) != param_1) {
            return iVar1;
          }
          *(int *)(local_c + 8) = param_2;
          local_c = local_c + 0xc;
        } while (local_c < pDVar4[0x14] + DAT_1002dc84 * 0xc);
        return iVar1;
      }
    }
  }
LAB_10007368:
  pDVar4 = FUN_1000be80();
  *pDVar4 = 0x16;
  return -1;
}



// Function: FUN_100073b0 @ 0x100073b0

undefined4 FUN_100073b0(int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  FUN_100079b0(1);
  if (param_1 == 0) {
    local_c = &DAT_1002f698;
    local_10 = DAT_1002f698;
    local_8 = 2;
  }
  else {
    local_c = &DAT_1002f69c;
    local_10 = DAT_1002f69c;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    FUN_10007a50(1);
    uVar1 = 0;
  }
  else {
    if (local_10 == (code *)0x1) {
      FUN_10007a50(1);
    }
    else {
      *local_c = 0;
      FUN_10007a50(1);
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_10007450 @ 0x10007450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10007450(int param_1)

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
    local_1c = &DAT_1002f698;
    local_20 = DAT_1002f698;
    bVar1 = true;
    break;
  default:
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    local_8 = FUN_100039f0();
    uVar2 = FUN_10007690(param_1,local_8[0x14]);
    local_1c = (undefined4 *)(uVar2 + 8);
    local_20 = (code *)*local_1c;
    break;
  case 0xf:
    local_1c = &DAT_1002f6a4;
    local_20 = DAT_1002f6a4;
    bVar1 = true;
    break;
  case 0x15:
    local_1c = &DAT_1002f69c;
    local_20 = DAT_1002f69c;
    bVar1 = true;
    break;
  case 0x16:
    local_1c = &DAT_1002f6a0;
    local_20 = DAT_1002f6a0;
    bVar1 = true;
  }
  if (bVar1) {
    FUN_100079b0(1);
  }
  if (local_20 != (code *)0x1) {
    if (local_20 == (code *)0x0) {
      if (bVar1) {
        FUN_10007a50(1);
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
      for (local_14 = DAT_1002dc78; local_14 < DAT_1002dc78 + _DAT_1002dc7c; local_14 = local_14 + 1
          ) {
        *(undefined4 *)(local_8[0x14] + 8 + local_14 * 0xc) = 0;
      }
    }
    else {
      *local_1c = 0;
    }
    if (bVar1) {
      FUN_10007a50(1);
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
    FUN_10007a50(1);
  }
  return 0;
}



// Function: FUN_10007690 @ 0x10007690

uint __cdecl FUN_10007690(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < param_2 + DAT_1002dc84 * 0xc);
  if ((param_2 + DAT_1002dc84 * 0xc <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}



// Function: FUN_100076f0 @ 0x100076f0

DWORD * FUN_100076f0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100039f0();
  return pDVar1 + 0x16;
}



// Function: FUN_10007700 @ 0x10007700

DWORD * FUN_10007700(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100039f0();
  return pDVar1 + 0x15;
}



// Function: FUN_10007710 @ 0x10007710

int __cdecl FUN_10007710(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_1002f6ac == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1002f6ac = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1002f6ac != (FARPROC)0x0) {
        DAT_1002f6b0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1002f6b4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10007783;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10007783:
    if (DAT_1002f6b0 != (FARPROC)0x0) {
      local_8 = (*DAT_1002f6b0)();
    }
    if ((local_8 != 0) && (DAT_1002f6b4 != (FARPROC)0x0)) {
      local_8 = (*DAT_1002f6b4)(local_8);
    }
    iVar1 = (*DAT_1002f6ac)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x100077d0

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
        goto joined_r0x1000780e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000784b;
        goto LAB_100078b9;
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
joined_r0x100078b5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_100078b9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000784b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x100078b5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x100078b5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x100078b5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000780e:
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
LAB_1000784b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_100078d0 @ 0x100078d0

void FUN_100078d0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002db84);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002db74);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002db64);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002db44);
  return;
}



// Function: FUN_10007910 @ 0x10007910

void FUN_10007910(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x30; local_8 = local_8 + 1) {
    if ((((*(int *)(&DAT_1002db40 + local_8 * 4) != 0) && (local_8 != 0x11)) && (local_8 != 0xd)) &&
       ((local_8 != 9 && (local_8 != 1)))) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002db40 + local_8 * 4));
      FUN_10004a40(*(void **)(&DAT_1002db40 + local_8 * 4),2);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002db64);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002db74);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002db84);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002db44);
  return;
}



// Function: FUN_100079b0 @ 0x100079b0

void __cdecl FUN_100079b0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(&DAT_1002db40 + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_10003fb0((void *)0x18,2,0x1002af68,0xe1);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100079b0(0x11);
    if (*(int *)(&DAT_1002db40 + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_1002db40 + param_1 * 4) = lpCriticalSection;
    }
    else {
      FUN_10004a40(lpCriticalSection,2);
    }
    FUN_10007a50(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002db40 + param_1 * 4));
  return;
}



// Function: FUN_10007a50 @ 0x10007a50

void __cdecl FUN_10007a50(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1002db40 + param_1 * 4));
  return;
}



// Function: FUN_10007a70 @ 0x10007a70

void __cdecl FUN_10007a70(LPCSTR param_1)

{
  FatalAppExitA(0,param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}



// Function: __XcptFilter @ 0x10007a90

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
  
  pDVar4 = FUN_100039f0();
  piVar5 = FUN_10007c50(_ExceptionNum,(int *)pDVar4[0x14]);
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
      for (local_18 = DAT_1002dc78; local_18 < DAT_1002dc78 + _DAT_1002dc7c; local_18 = local_18 + 1
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



// Function: FUN_10007c50 @ 0x10007c50

int * __cdecl FUN_10007c50(int param_1,int *param_2)

{
  int *local_8;
  
  local_8 = param_2;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < param_2 + DAT_1002dc84 * 3);
  if ((param_2 + DAT_1002dc84 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}



// Function: _set_new_handler @ 0x10007cb0

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  FUN_100079b0(9);
  p_Var1 = DAT_1002f71c;
  DAT_1002f71c = param_1;
  FUN_10007a50(9);
  return p_Var1;
}



// Function: FUN_10007ce0 @ 0x10007ce0

undefined4 FUN_10007ce0(void)

{
  return DAT_1002f71c;
}



// Function: __callnewh @ 0x10007cf0

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Debug */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_1002f71c != (code *)0x0) && (iVar1 = (*DAT_1002f71c)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// Function: _memset @ 0x10007d20

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



// Function: FUN_10007d80 @ 0x10007d80

void __cdecl FUN_10007d80(void *param_1)

{
  __nh_malloc_base(param_1,(uint)param_1,DAT_1002f718);
  return;
}



// Function: __nh_malloc_base @ 0x10007da0

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
        local_8 = FUN_10007e00(this,param_1);
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



// Function: FUN_10007e00 @ 0x10007e00

int * __thiscall FUN_10007e00(void *this,uint param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_1002dc94) {
    FUN_100079b0(9);
    piVar1 = FUN_10008940(param_1);
    FUN_10007a50(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = HeapAlloc(DAT_10030ecc,0,param_1 + 0xf & 0xfffffff0);
  return piVar1;
}



// Function: FUN_10007e70 @ 0x10007e70

undefined4 FUN_10007e70(void)

{
  return 1;
}



// Function: FUN_10007e80 @ 0x10007e80

LPVOID __cdecl FUN_10007e80(LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_2 < 0xffffffe1) {
    FUN_100079b0(9);
    puVar1 = (uint *)FUN_100082b0((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_10007a50(9);
      if (param_2 == 0) {
        param_2 = 1;
      }
      local_8 = HeapReAlloc(DAT_10030ecc,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
    else {
      local_8 = (LPVOID)0x0;
      if (param_2 <= DAT_1002dc94) {
        iVar2 = FUN_10009180(puVar1,(int)param_1,param_2);
        if (iVar2 != 0) {
          local_8 = param_1;
        }
      }
      FUN_10007a50(9);
    }
  }
  else {
    local_8 = (LPVOID)0x0;
  }
  return local_8;
}



// Function: FUN_10007f30 @ 0x10007f30

int * __cdecl FUN_10007f30(int *param_1,void *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  void *local_18;
  void *local_14;
  int *local_c;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_10007d80(param_2);
  }
  else if (param_2 == (void *)0x0) {
    FUN_10008120(param_1,param_1);
    piVar1 = (int *)0x0;
  }
  else {
    do {
      local_c = (int *)0x0;
      if (param_2 < (void *)0xffffffe1) {
        FUN_100079b0(9);
        puVar2 = (uint *)FUN_100082b0((int)param_1);
        if (puVar2 == (uint *)0x0) {
          FUN_10007a50(9);
          if (param_2 == (void *)0x0) {
            param_2 = (void *)0x1;
          }
          param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
          local_c = HeapReAlloc(DAT_10030ecc,0,param_1,(SIZE_T)param_2);
        }
        else {
          if (param_2 <= DAT_1002dc94) {
            iVar3 = FUN_10009180(puVar2,(int)param_1,(int)param_2);
            if (iVar3 == 0) {
              local_c = FUN_10008940((int)param_2);
              if (local_c != (int *)0x0) {
                local_14 = (void *)(param_1[-1] - 1);
                if (param_2 <= local_14) {
                  local_14 = param_2;
                }
                FUN_1000a890(local_c,param_1,(uint)local_14);
                FUN_10008370(puVar2,(int)param_1);
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
            local_c = HeapAlloc(DAT_10030ecc,0,(SIZE_T)param_2);
            if (local_c != (int *)0x0) {
              local_18 = param_2;
              if ((void *)(param_1[-1] - 1U) < param_2) {
                local_18 = (void *)(param_1[-1] - 1U);
              }
              FUN_1000a890(local_c,param_1,(uint)local_18);
              FUN_10008370(puVar2,(int)param_1);
            }
          }
          FUN_10007a50(9);
        }
      }
      if (local_c != (int *)0x0) {
        return local_c;
      }
      if (DAT_1002f718 == 0) {
        return (int *)0x0;
      }
      iVar3 = __callnewh((size_t)param_2);
    } while (iVar3 != 0);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



// Function: FUN_10008120 @ 0x10008120

void __thiscall FUN_10008120(void *this,LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_100079b0(9);
    puVar1 = (uint *)FUN_100082b0((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_10007a50(9);
      HeapFree(DAT_10030ecc,0,param_1);
    }
    else {
      FUN_10008370(puVar1,(int)param_1);
      FUN_10007a50(9);
    }
  }
  return;
}



// Function: FUN_10008190 @ 0x10008190

undefined4 FUN_10008190(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  FUN_100079b0(9);
  iVar1 = FUN_100098a0();
  if (iVar1 < 0) {
    local_8 = 0xfffffffc;
  }
  FUN_10007a50(9);
  BVar2 = HeapValidate(DAT_10030ecc,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      pDVar4 = FUN_1000be90();
      *pDVar4 = 0x78;
      pDVar4 = FUN_1000be80();
      *pDVar4 = 0x28;
    }
    else {
      local_8 = 0xfffffffc;
    }
  }
  return local_8;
}



// Function: FUN_10008210 @ 0x10008210

void FUN_10008210(void)

{
  FUN_10008190();
  return;
}



// Function: FUN_10008220 @ 0x10008220

undefined4 FUN_10008220(void)

{
  return DAT_1002dc94;
}



// Function: FUN_10008230 @ 0x10008230

bool __cdecl FUN_10008230(uint param_1)

{
  if (param_1 < 0x3f9) {
    DAT_1002dc94 = param_1;
  }
  return param_1 < 0x3f9;
}



// Function: FUN_10008250 @ 0x10008250

bool FUN_10008250(void)

{
  DAT_10030ec8 = HeapAlloc(DAT_10030ecc,0,0x140);
  if (DAT_10030ec8 != (LPVOID)0x0) {
    DAT_10030ec0 = 0;
    DAT_10030ec4 = 0;
    DAT_10030ea8 = 0x10;
    DAT_10030ebc = DAT_10030ec8;
  }
  return DAT_10030ec8 != (LPVOID)0x0;
}



// Function: FUN_100082b0 @ 0x100082b0

uint __cdecl FUN_100082b0(int param_1)

{
  uint local_c;
  
  local_c = DAT_10030ec8;
  while( true ) {
    if (DAT_10030ec8 + DAT_10030ec4 * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}



// Function: FUN_10008310 @ 0x10008310

undefined4 __cdecl FUN_10008310(int param_1,int param_2)

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



// Function: FUN_10008370 @ 0x10008370

void __cdecl FUN_10008370(uint *param_1,int param_2)

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
    if (DAT_10030ec0 != (uint *)0x0) {
      VirtualFree((LPVOID)(DAT_10030ec0[3] + DAT_10030eb8 * 0x8000),0x8000,0x4000);
      DAT_10030ec0[2] = DAT_10030ec0[2] | 0x80000000U >> ((byte)DAT_10030eb8 & 0x1f);
      *(undefined4 *)(DAT_10030ec0[4] + 0xc4 + DAT_10030eb8 * 4) = 0;
      *(char *)(DAT_10030ec0[4] + 0x43) = *(char *)(DAT_10030ec0[4] + 0x43) + -1;
      if (*(char *)(DAT_10030ec0[4] + 0x43) == '\0') {
        DAT_10030ec0[1] = DAT_10030ec0[1] & 0xfffffffe;
      }
      if (DAT_10030ec0[2] == 0xffffffff) {
        VirtualFree((LPVOID)DAT_10030ec0[3],0,0x8000);
        HeapFree(DAT_10030ecc,0,(LPVOID)DAT_10030ec0[4]);
        FUN_1000bea0(DAT_10030ec0,DAT_10030ec0 + 5,
                     (DAT_10030ec8 + DAT_10030ec4 * 0x14) - (int)(DAT_10030ec0 + 5));
        DAT_10030ec4 = DAT_10030ec4 + -1;
        if (DAT_10030ec0 < param_1) {
          param_1 = param_1 + -5;
        }
        DAT_10030ebc = DAT_10030ec8;
      }
    }
    DAT_10030ec0 = param_1;
    DAT_10030eb8 = uVar8;
  }
  return;
}



// Function: FUN_10008940 @ 0x10008940

int * __cdecl FUN_10008940(int param_1)

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
  
  puVar7 = DAT_10030ec8 + DAT_10030ec4 * 5;
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
  for (local_1c = DAT_10030ebc;
      (local_1c < puVar7 && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
      local_1c = local_1c + 5) {
  }
  if (local_1c == puVar7) {
    for (local_1c = DAT_10030ec8;
        (local_1c < DAT_10030ebc && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
        local_1c = local_1c + 5) {
    }
    if (local_1c == DAT_10030ebc) {
      for (; (local_1c < puVar7 && (local_1c[2] == 0)); local_1c = local_1c + 5) {
      }
      if (local_1c == puVar7) {
        for (local_1c = DAT_10030ec8; (local_1c < DAT_10030ebc && (local_1c[2] == 0));
            local_1c = local_1c + 5) {
        }
        if ((local_1c == DAT_10030ebc) && (local_1c = FUN_10008e80(), local_1c == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar5 = FUN_10008f90((int)local_1c);
      *(int *)local_1c[4] = iVar5;
      if (*(int *)local_1c[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_10030ebc = local_1c;
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
  if (((iVar5 == 0) && (local_1c == DAT_10030ec0)) && (local_34 == DAT_10030eb8)) {
    DAT_10030ec0 = (uint *)0x0;
  }
  *piVar4 = local_34;
  return piVar8 + 1;
}



// Function: FUN_10008e80 @ 0x10008e80

undefined4 * FUN_10008e80(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10030ec4 == DAT_10030ea8) {
    pvVar1 = HeapReAlloc(DAT_10030ecc,0,DAT_10030ec8,(DAT_10030ea8 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10030ea8 = DAT_10030ea8 + 0x10;
    DAT_10030ec8 = pvVar1;
  }
  puVar2 = (undefined4 *)((int)DAT_10030ec8 + DAT_10030ec4 * 0x14);
  pvVar1 = HeapAlloc(DAT_10030ecc,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_10030ecc,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_10030ec4 = DAT_10030ec4 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}



// Function: FUN_10008f90 @ 0x10008f90

int __cdecl FUN_10008f90(int param_1)

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



// Function: FUN_10009180 @ 0x10009180

undefined4 __cdecl FUN_10009180(uint *param_1,int param_2,int param_3)

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



// Function: FUN_10009770 @ 0x10009770

void FUN_10009770(void)

{
  if (DAT_10030ec0 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_10030ec0[3] + DAT_10030eb8 * 0x8000),0x8000,0x4000);
    DAT_10030ec0[2] = DAT_10030ec0[2] | 0x80000000U >> ((byte)DAT_10030eb8 & 0x1f);
    *(undefined4 *)(DAT_10030ec0[4] + 0xc4 + DAT_10030eb8 * 4) = 0;
    *(char *)(DAT_10030ec0[4] + 0x43) = *(char *)(DAT_10030ec0[4] + 0x43) + -1;
    if (*(char *)(DAT_10030ec0[4] + 0x43) == '\0') {
      DAT_10030ec0[1] = DAT_10030ec0[1] & 0xfffffffe;
    }
    if ((DAT_10030ec0[2] == -1) && (1 < DAT_10030ec4)) {
      HeapFree(DAT_10030ecc,0,(LPVOID)DAT_10030ec0[4]);
      FUN_1000bea0(DAT_10030ec0,DAT_10030ec0 + 5,
                   (DAT_10030ec8 + DAT_10030ec4 * 0x14) - (int)(DAT_10030ec0 + 5));
      DAT_10030ec4 = DAT_10030ec4 + -1;
    }
    DAT_10030ec0 = (undefined4 *)0x0;
  }
  return;
}



// Function: FUN_100098a0 @ 0x100098a0

undefined4 FUN_100098a0(void)

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
  
  BVar2 = IsBadWritePtr(DAT_10030ec8,DAT_10030ec4 * 0x14);
  if (BVar2 == 0) {
    local_140 = DAT_10030ec8;
    for (local_124 = 0; local_124 < DAT_10030ec4; local_124 = local_124 + 1) {
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



// Function: FUN_10009ec0 @ 0x10009ec0

undefined4 __cdecl FUN_10009ec0(undefined1 *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_10003070(2,0x1002af04,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_2 == 0) &&
     (iVar2 = FUN_10003070(2,0x1002af04,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  iVar2 = FUN_1000af40((int *)&local_24,(byte *)param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000acc0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_10009fc0 @ 0x10009fc0

uint __cdecl FUN_10009fc0(int param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  CHAR local_10;
  CHAR local_f;
  undefined1 local_e;
  int local_c;
  uint local_8;
  
  if (param_1 + 1U < 0x101) {
    uVar1 = *(ushort *)(PTR_DAT_1002dc98 + param_1 * 2) & param_2;
  }
  else {
    if ((*(ushort *)(PTR_DAT_1002dc98 + (param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
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
    BVar2 = FUN_1000c1e0(1,&local_10,local_c,(LPWORD)&local_8,0,0,1);
    if (BVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_8 & 0xffff & param_2;
    }
  }
  return uVar1;
}



// Function: FUN_1000a080 @ 0x1000a080

undefined4 __cdecl FUN_1000a080(UINT param_1)

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
  
  FUN_100079b0(0x19);
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_10030c04) {
    FUN_10007a50(0x19);
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_1000a530();
    FUN_10007a50(0x19);
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(UINT *)(&DAT_1002deb8 + local_8 * 0x30) == CodePage) {
        for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
          (&DAT_10030da0)[local_28] = 0;
        }
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          for (local_c = &DAT_1002dec8 + local_10 * 8 + local_8 * 0x30;
              (*local_c != 0 && (local_c[1] != 0)); local_c = local_c + 2) {
            for (local_28 = (uint)*local_c; local_28 <= local_c[1]; local_28 = local_28 + 1) {
              (&DAT_10030da1)[local_28] = (&DAT_10030da1)[local_28] | (&DAT_1002deb0)[local_10];
            }
          }
        }
        DAT_10030c8c = 1;
        DAT_10030c04 = CodePage;
        DAT_10030ea4 = FUN_1000a430(CodePage);
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          *(undefined2 *)(&DAT_10030c80 + local_10 * 2) =
               *(undefined2 *)(&DAT_1002debc + local_10 * 2 + local_8 * 0x30);
        }
        FUN_1000a530();
        FUN_10007a50(0x19);
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&local_24);
    if (BVar2 == 1) {
      for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
        (&DAT_10030da0)[local_28] = 0;
      }
      DAT_10030ea4 = 0;
      if (local_24.MaxCharSize < 2) {
        DAT_10030c8c = 0;
        DAT_10030c04 = CodePage;
      }
      else {
        DAT_10030c04 = CodePage;
        for (local_2c = local_24.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (local_28 = (uint)*local_2c; local_28 <= local_2c[1]; local_28 = local_28 + 1) {
            (&DAT_10030da1)[local_28] = (&DAT_10030da1)[local_28] | 4;
          }
        }
        for (local_28 = 1; local_28 < 0xff; local_28 = local_28 + 1) {
          (&DAT_10030da1)[local_28] = (&DAT_10030da1)[local_28] | 8;
        }
        DAT_10030ea4 = FUN_1000a430(DAT_10030c04);
        DAT_10030c8c = 1;
      }
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(undefined2 *)(&DAT_10030c80 + local_10 * 2) = 0;
      }
      FUN_1000a530();
      FUN_10007a50(0x19);
      uVar1 = 0;
    }
    else if (DAT_1002f720 == 0) {
      FUN_10007a50(0x19);
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_1000a530();
      FUN_10007a50(0x19);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// Function: getSystemCP @ 0x1000a3d0

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_1002f720 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_1002f720 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_1002f720 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_1002f720 = 1;
    param_1 = DAT_1002f740;
  }
  return param_1;
}



// Function: FUN_1000a430 @ 0x1000a430

undefined4 __cdecl FUN_1000a430(undefined4 param_1)

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



// Function: setSBCS @ 0x1000a4b0

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_10030da0)[local_8] = 0;
  }
  DAT_10030c04 = 0;
  DAT_10030c8c = 0;
  DAT_10030ea4 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_10030c80 + local_8 * 2) = 0;
  }
  return;
}



// Function: FUN_1000a530 @ 0x1000a530

void FUN_1000a530(void)

{
  BOOL BVar1;
  uint local_520;
  WCHAR local_51c [128];
  WCHAR local_41c [128];
  _cpinfo local_31c;
  CHAR local_308 [256];
  WORD local_208 [256];
  BYTE *local_8;
  
  BVar1 = GetCPInfo(DAT_10030c04,&local_31c);
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
    FUN_1000c1e0(1,local_308,0x100,local_208,DAT_10030c04,DAT_10030ea4,0);
    FUN_1000c3a0(DAT_10030ea4,0x100,local_308,0x100,local_41c,0x100,DAT_10030c04,0);
    FUN_1000c3a0(DAT_10030ea4,0x200,local_308,0x100,local_51c,0x100,DAT_10030c04,0);
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_208[local_520] & 1) == 0) {
        if ((local_208[local_520] & 2) == 0) {
          (&DAT_10030ca0)[local_520] = 0;
        }
        else {
          (&DAT_10030da1)[local_520] = (&DAT_10030da1)[local_520] | 0x20;
          (&DAT_10030ca0)[local_520] = *(undefined1 *)((int)local_51c + local_520);
        }
      }
      else {
        (&DAT_10030da1)[local_520] = (&DAT_10030da1)[local_520] | 0x10;
        (&DAT_10030ca0)[local_520] = *(undefined1 *)((int)local_41c + local_520);
      }
    }
  }
  else {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_520 < 0x41) || (0x5a < local_520)) {
        if ((local_520 < 0x61) || (0x7a < local_520)) {
          (&DAT_10030ca0)[local_520] = 0;
        }
        else {
          (&DAT_10030da1)[local_520] = (&DAT_10030da1)[local_520] | 0x20;
          (&DAT_10030ca0)[local_520] = (char)local_520 + -0x20;
        }
      }
      else {
        (&DAT_10030da1)[local_520] = (&DAT_10030da1)[local_520] | 0x10;
        (&DAT_10030ca0)[local_520] = (char)local_520 + ' ';
      }
    }
  }
  return;
}



// Function: FUN_1000a840 @ 0x1000a840

undefined4 FUN_1000a840(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10030c04;
  if (DAT_10030c8c == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_1000a860 @ 0x1000a860

void FUN_1000a860(void)

{
  if (DAT_10031050 == 0) {
    FUN_1000a080(0xfffffffd);
    DAT_10031050 = 1;
  }
  return;
}



// Function: FUN_1000a890 @ 0x1000a890

undefined4 * __cdecl FUN_1000a890(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_1000aa47_caseD_2;
        case 3:
          goto switchD_1000aa47_caseD_3;
        }
        goto switchD_1000aa47_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1000aa47_caseD_0;
      case 1:
        goto switchD_1000aa47_caseD_1;
      case 2:
        goto switchD_1000aa47_caseD_2;
      case 3:
        goto switchD_1000aa47_caseD_3;
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
              goto switchD_1000aa47_caseD_2;
            case 3:
              goto switchD_1000aa47_caseD_3;
            }
            goto switchD_1000aa47_caseD_1;
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
              goto switchD_1000aa47_caseD_2;
            case 3:
              goto switchD_1000aa47_caseD_3;
            }
            goto switchD_1000aa47_caseD_1;
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
              goto switchD_1000aa47_caseD_2;
            case 3:
              goto switchD_1000aa47_caseD_3;
            }
            goto switchD_1000aa47_caseD_1;
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
switchD_1000aa47_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1000aa47_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1000aa47_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1000aa47_caseD_0:
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
        goto switchD_1000a8c5_caseD_2;
      case 3:
        goto switchD_1000a8c5_caseD_3;
      }
      goto switchD_1000a8c5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1000a8c5_caseD_0;
    case 1:
      goto switchD_1000a8c5_caseD_1;
    case 2:
      goto switchD_1000a8c5_caseD_2;
    case 3:
      goto switchD_1000a8c5_caseD_3;
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
            goto switchD_1000a8c5_caseD_2;
          case 3:
            goto switchD_1000a8c5_caseD_3;
          }
          goto switchD_1000a8c5_caseD_1;
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
            goto switchD_1000a8c5_caseD_2;
          case 3:
            goto switchD_1000a8c5_caseD_3;
          }
          goto switchD_1000a8c5_caseD_1;
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
            goto switchD_1000a8c5_caseD_2;
          case 3:
            goto switchD_1000a8c5_caseD_3;
          }
          goto switchD_1000a8c5_caseD_1;
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
switchD_1000a8c5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1000a8c5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1000a8c5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1000a8c5_caseD_0:
  return param_1;
}



// Function: __aulldiv @ 0x1000abd0

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



// Function: __aullrem @ 0x1000ac40

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



// Function: FUN_1000acc0 @ 0x1000acc0

uint __cdecl FUN_1000acc0(uint param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *local_18;
  uint local_10;
  uint local_8;
  
  if ((param_2 == (int *)0x0) &&
     (iVar3 = FUN_10003070(2,0x1002afb0,0x69,0,(byte *)"str != NULL"), iVar3 == 1)) {
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
       (((param_2 != (int *)&DAT_1002e140 && (param_2 != (int *)&DAT_1002e160)) ||
        (iVar3 = __isatty(uVar4), iVar3 == 0)))) {
      FUN_1000cb60(piVar2);
    }
    if ((piVar2[3] & 0x108U) == 0) {
      local_8 = 1;
      local_10 = FUN_1000c850(uVar4,(char *)&param_1,1);
    }
    else {
      if ((*piVar2 - piVar2[2] < 0) &&
         (iVar3 = FUN_10003070(2,0x1002afb0,0xa0,0,
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
          local_18 = &DAT_1002da60;
        }
        else {
          local_18 = (undefined *)((&DAT_10030f00)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x24);
        }
        if ((local_18[4] & 0x20) != 0) {
          FUN_1000c700(uVar4,0,2);
        }
      }
      else {
        local_10 = FUN_1000c850(uVar4,(char *)piVar2[2],local_8);
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



// Function: FUN_1000af40 @ 0x1000af40

int __cdecl FUN_1000af40(int *param_1,byte *param_2,undefined4 *param_3)

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
    local_1c = (int)(char)(&DAT_1002afc8)[local_294 * 8 + local_1c] >> 4;
    switch(local_1c) {
    case 0:
switchD_1000aff9_caseD_0:
      local_20 = 0;
      pbVar4 = pbVar5;
      if ((*(ushort *)(PTR_DAT_1002dc98 + (uint)bVar1 * 2) & 0x8000) != 0) {
        FUN_1000bc70((int)(char)bVar1,param_1,&local_230);
        stack0xffffffd4 = CONCAT31(uStack_2b,*pbVar5);
        pbVar4 = param_2 + 2;
        if ((*pbVar5 == 0) &&
           (iVar9 = FUN_10003070(2,0x1002b03c,0x186,0,(byte *)"ch != _T(\'\\0\')"), iVar9 == 1)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
      }
      param_2 = pbVar4;
      FUN_1000bc70((int)uStack_2d._1_1_,param_1,&local_230);
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
        local_248 = FUN_1000bd80((int *)&param_3);
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
        local_238 = FUN_1000bd80((int *)&param_3);
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
          goto switchD_1000aff9_caseD_0;
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
          uVar6 = FUN_1000bd80((int *)&param_3);
          local_24c._0_1_ = (undefined1)uVar6;
          local_22c[0]._0_1_ = (undefined1)local_24c;
          local_28 = 1;
          local_24c = (short)uVar6;
        }
        else {
          local_18 = FUN_1000bdc0((int *)&param_3);
          local_28 = FUN_1000cea0((LPSTR)local_22c,local_18);
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
        (*(code *)PTR___fptrap_1002e3a0)(&local_268,local_24,(int)uStack_2d._1_1_,local_238,local_c)
        ;
        if (((local_8 & 0x80) != 0) && (local_238 == 0)) {
          (*(code *)PTR___fptrap_1002e3ac)(local_24);
        }
        if ((uStack_2d._1_1_ == 'g') && ((local_8 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_1002e3a4)(local_24);
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
        local_24 = (short *)FUN_1000bd80((int *)&param_3);
        if ((local_8 & 0x810) == 0) {
          if (local_24 == (short *)0x0) {
            local_24 = (short *)PTR_DAT_1002dfb0;
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
            local_24 = (short *)PTR_DAT_1002dfb4;
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
        local_250 = (short *)FUN_1000bd80((int *)&param_3);
        if ((local_250 == (short *)0x0) || (*(int *)(local_250 + 2) == 0)) {
          local_24 = (short *)PTR_DAT_1002dfb0;
          local_28 = _strlen(PTR_DAT_1002dfb0);
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
        goto LAB_1000b705;
      case 0x6e:
        local_260 = (int *)FUN_1000bd80((int *)&param_3);
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
        goto LAB_1000b705;
      case 0x70:
        local_238 = 8;
      case 0x58:
        local_234 = 7;
        goto LAB_1000b6af;
      case 0x75:
        local_23c = 10;
        goto LAB_1000b705;
      case 0x78:
        local_234 = 0x27;
LAB_1000b6af:
        local_23c = 0x10;
        if ((local_8 & 0x80) != 0) {
          local_244 = '0';
          local_243 = (char)local_234 + 'Q';
          local_14 = 2;
        }
LAB_1000b705:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar7 = FUN_1000bd80((int *)&param_3);
              local_27c = (ulonglong)uVar7;
            }
            else {
              iVar9 = FUN_1000bd80((int *)&param_3);
              local_27c = (ulonglong)iVar9;
            }
          }
          else if ((local_8 & 0x40) == 0) {
            uVar7 = FUN_1000bd80((int *)&param_3);
            local_27c = (ulonglong)(uVar7 & 0xffff);
          }
          else {
            uVar6 = FUN_1000bd80((int *)&param_3);
            local_27c = (ulonglong)(int)(short)uVar6;
          }
        }
        else {
          local_27c = FUN_1000bda0((int *)&param_3);
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
          FUN_1000bcf0(0x20,local_280,param_1,&local_230);
        }
        FUN_1000bd30(&local_244,local_14,param_1,&local_230);
        if (((local_8 & 8) != 0) && ((local_8 & 4) == 0)) {
          FUN_1000bcf0(0x30,local_280,param_1,&local_230);
        }
        if ((local_20 == 0) || ((int)local_28 < 1)) {
          FUN_1000bd30((char *)local_24,local_28,param_1,&local_230);
        }
        else {
          local_284 = local_24;
          local_288 = local_28;
          while (sVar8 = local_288 - 1, bVar11 = local_288 != 0, local_288 = sVar8, bVar11) {
            sVar2 = *local_284;
            local_284 = local_284 + 1;
            iVar9 = FUN_1000cea0(local_28c,sVar2);
            if (iVar9 < 1) break;
            FUN_1000bd30(local_28c,iVar9,param_1,&local_230);
          }
        }
        if ((local_8 & 4) != 0) {
          FUN_1000bcf0(0x20,local_280,param_1,&local_230);
        }
      }
    }
  } while( true );
}



// Function: FUN_1000bc70 @ 0x1000bc70

void __cdecl FUN_1000bc70(uint param_1,int *param_2,int *param_3)

{
  uint local_8;
  
  param_2[1] = param_2[1] + -1;
  if (param_2[1] < 0) {
    local_8 = FUN_1000acc0(param_1,param_2);
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



// Function: FUN_1000bcf0 @ 0x1000bcf0

void __cdecl FUN_1000bcf0(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    FUN_1000bc70(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Function: FUN_1000bd30 @ 0x1000bd30

void __cdecl FUN_1000bd30(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1000bc70((int)cVar1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Function: FUN_1000bd80 @ 0x1000bd80

undefined4 __cdecl FUN_1000bd80(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



// Function: FUN_1000bda0 @ 0x1000bda0

undefined8 __cdecl FUN_1000bda0(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



// Function: FUN_1000bdc0 @ 0x1000bdc0

undefined2 __cdecl FUN_1000bdc0(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined2 *)(*param_1 + -4);
}



// Function: __dosmaperr @ 0x1000bde0

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  DWORD *pDVar1;
  uint local_8;
  
  pDVar1 = FUN_1000be90();
  *pDVar1 = param_1;
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          pDVar1 = FUN_1000be80();
          *pDVar1 = 0x16;
        }
        else {
          pDVar1 = FUN_1000be80();
          *pDVar1 = 8;
        }
      }
      else {
        pDVar1 = FUN_1000be80();
        *pDVar1 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_1002dfb8 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  pDVar1 = FUN_1000be80();
  *pDVar1 = *(DWORD *)(&DAT_1002dfbc + local_8 * 8);
  return;
}



// Function: FUN_1000be80 @ 0x1000be80

DWORD * FUN_1000be80(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100039f0();
  return pDVar1 + 2;
}



// Function: FUN_1000be90 @ 0x1000be90

DWORD * FUN_1000be90(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100039f0();
  return pDVar1 + 3;
}



// Function: FUN_1000bea0 @ 0x1000bea0

undefined4 * __cdecl FUN_1000bea0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_1000c057_caseD_2;
        case 3:
          goto switchD_1000c057_caseD_3;
        }
        goto switchD_1000c057_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1000c057_caseD_0;
      case 1:
        goto switchD_1000c057_caseD_1;
      case 2:
        goto switchD_1000c057_caseD_2;
      case 3:
        goto switchD_1000c057_caseD_3;
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
              goto switchD_1000c057_caseD_2;
            case 3:
              goto switchD_1000c057_caseD_3;
            }
            goto switchD_1000c057_caseD_1;
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
              goto switchD_1000c057_caseD_2;
            case 3:
              goto switchD_1000c057_caseD_3;
            }
            goto switchD_1000c057_caseD_1;
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
              goto switchD_1000c057_caseD_2;
            case 3:
              goto switchD_1000c057_caseD_3;
            }
            goto switchD_1000c057_caseD_1;
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
switchD_1000c057_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1000c057_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1000c057_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1000c057_caseD_0:
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
        goto switchD_1000bed5_caseD_2;
      case 3:
        goto switchD_1000bed5_caseD_3;
      }
      goto switchD_1000bed5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1000bed5_caseD_0;
    case 1:
      goto switchD_1000bed5_caseD_1;
    case 2:
      goto switchD_1000bed5_caseD_2;
    case 3:
      goto switchD_1000bed5_caseD_3;
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
            goto switchD_1000bed5_caseD_2;
          case 3:
            goto switchD_1000bed5_caseD_3;
          }
          goto switchD_1000bed5_caseD_1;
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
            goto switchD_1000bed5_caseD_2;
          case 3:
            goto switchD_1000bed5_caseD_3;
          }
          goto switchD_1000bed5_caseD_1;
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
            goto switchD_1000bed5_caseD_2;
          case 3:
            goto switchD_1000bed5_caseD_3;
          }
          goto switchD_1000bed5_caseD_1;
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
switchD_1000bed5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1000bed5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1000bed5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1000bed5_caseD_0:
  return param_1;
}



// Function: FUN_1000c1e0 @ 0x1000c1e0

BOOL __cdecl
FUN_1000c1e0(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1002b060;
  puStack_10 = &LAB_1000d0b8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc4;
  if (DAT_1002f724 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1002f724 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_1002f724 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_1002f724 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_1002f730;
    }
    BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  }
  else if (DAT_1002f724 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_1002f740;
    }
    iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar3 == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_10007150();
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



// Function: FUN_1000c3a0 @ 0x1000c3a0

int __cdecl
FUN_1000c3a0(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002b070;
  puStack_10 = &LAB_1000d0b8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1002f748 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1002f748 = 2;
    }
    else {
      DAT_1002f748 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000c6b0(param_3,param_4);
  }
  if (DAT_1002f748 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
  }
  else if (DAT_1002f748 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1002f740;
    }
    iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10007150();
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
            FUN_10007150();
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



// Function: FUN_1000c6b0 @ 0x1000c6b0

int __cdecl FUN_1000c6b0(char *param_1,int param_2)

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



// Function: FUN_1000c700 @ 0x1000c700

DWORD __cdecl FUN_1000c700(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  if ((param_1 < DAT_1003103c) &&
     ((*(byte *)((&DAT_10030f00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000d6a0(param_1);
    DVar2 = FUN_1000c790(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_1000be80();
    *pDVar1 = 9;
    pDVar1 = FUN_1000be90();
    *pDVar1 = 0;
    DVar2 = 0xffffffff;
  }
  return DVar2;
}



// Function: FUN_1000c790 @ 0x1000c790

DWORD __cdecl FUN_1000c790(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  ulong local_8;
  
  hFile = (HANDLE)FUN_1000d520(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_1000be80();
    *pDVar1 = 9;
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
      *(byte *)((&DAT_10030f00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
           *(byte *)((&DAT_10030f00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
    }
    else {
      __dosmaperr(local_8);
      DVar2 = 0xffffffff;
    }
  }
  return DVar2;
}



// Function: FUN_1000c850 @ 0x1000c850

int __cdecl FUN_1000c850(uint param_1,char *param_2,uint param_3)

{
  DWORD *pDVar1;
  int iVar2;
  
  if ((param_1 < DAT_1003103c) &&
     ((*(byte *)((&DAT_10030f00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000d6a0(param_1);
    iVar2 = FUN_1000c8e0(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_1000be80();
    *pDVar1 = 9;
    pDVar1 = FUN_1000be90();
    *pDVar1 = 0;
    iVar2 = -1;
  }
  return iVar2;
}



// Function: FUN_1000c8e0 @ 0x1000c8e0

int __cdecl FUN_1000c8e0(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  DWORD *pDVar3;
  int iVar4;
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
    iVar4 = (int)param_1 >> 5;
    if ((*(byte *)((&DAT_10030f00)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x20) != 0) {
      FUN_1000c790(param_1,0,2);
    }
    if (((int)*(char *)((&DAT_10030f00)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) == 0) {
      BVar2 = WriteFile(*(HANDLE *)((&DAT_10030f00)[iVar4] + (param_1 & 0x1f) * 0x24),param_2,
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
        BVar2 = WriteFile(*(HANDLE *)((&DAT_10030f00)[iVar4] + (param_1 & 0x1f) * 0x24),local_418,
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
        if (((*(byte *)((&DAT_10030f00)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) ||
           (*param_2 != '\x1a')) {
          pDVar3 = FUN_1000be80();
          *pDVar3 = 0x1c;
          pDVar3 = FUN_1000be90();
          *pDVar3 = 0;
          local_424 = -1;
        }
        else {
          local_424 = 0;
        }
      }
      else {
        if (local_10 == 5) {
          pDVar3 = FUN_1000be80();
          *pDVar3 = 9;
          pDVar3 = FUN_1000be90();
          *pDVar3 = local_10;
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



// Function: FUN_1000cb60 @ 0x1000cb60

void __cdecl FUN_1000cb60(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_10003070(2,0x1002b088,0x2e,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DAT_1002f74c = DAT_1002f74c + 1;
  uVar3 = FUN_10003fb0((void *)0x1000,2,0x1002b088,0x3b);
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



// Function: __isatty @ 0x1000cc30

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_1003103c) {
    uVar1 = (int)*(char *)((&DAT_10030f00)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) &
            0x40;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_1000cc70 @ 0x1000cc70

void FUN_1000cc70(void)

{
  uint local_8;
  
  if (DAT_10030c00 == 0) {
    DAT_10030c00 = 0x200;
  }
  else if (DAT_10030c00 < 0x14) {
    DAT_10030c00 = 0x14;
  }
  DAT_1002f8c0 = __calloc_dbg(DAT_10030c00,4,2,"_file.c",0x83);
  if (DAT_1002f8c0 == (undefined1 *)0x0) {
    DAT_10030c00 = 0x14;
    DAT_1002f8c0 = __calloc_dbg(0x14,4,2,"_file.c",0x86);
    if (DAT_1002f8c0 == (undefined1 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined ***)(DAT_1002f8c0 + local_8 * 4) = &PTR_DAT_1002e120 + local_8 * 8;
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_10030f00)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == -1) ||
       (*(int *)((&DAT_10030f00)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == 0)) {
      *(undefined4 *)(&DAT_1002e130 + local_8 * 0x20) = 0xffffffff;
    }
  }
  return;
}



// Function: FUN_1000cda0 @ 0x1000cda0

void FUN_1000cda0(void)

{
  FUN_1000d9a0();
  if (DAT_1002f568 != '\0') {
    FUN_1000d760();
  }
  return;
}



// Function: FUN_1000cdc0 @ 0x1000cdc0

void __cdecl FUN_1000cdc0(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1002e120) || (&DAT_1002e380 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_100079b0(((int)(param_1 + -0x400b848) >> 5) + 0x1c);
  }
  return;
}



// Function: FUN_1000ce00 @ 0x1000ce00

void __cdecl FUN_1000ce00(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100079b0(param_1 + 0x1c);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}



// Function: FUN_1000ce30 @ 0x1000ce30

void __cdecl FUN_1000ce30(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1002e120) || (&DAT_1002e380 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_10007a50(((int)(param_1 + -0x400b848) >> 5) + 0x1c);
  }
  return;
}



// Function: FUN_1000ce70 @ 0x1000ce70

void __cdecl FUN_1000ce70(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10007a50(param_1 + 0x1c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}



// Function: FUN_1000cea0 @ 0x1000cea0

int __cdecl FUN_1000cea0(LPSTR param_1,undefined2 param_2)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar3;
  int iVar2;
  bool bVar4;
  
  LVar1 = InterlockedIncrement(&DAT_1002f8bc);
  bVar4 = DAT_1002f8ac == 0;
  uVar3 = (short)((uint)LVar1 >> 0x10);
  if (!bVar4) {
    InterlockedDecrement(&DAT_1002f8bc);
    FUN_100079b0(0x13);
    uVar3 = extraout_var;
  }
  iVar2 = FUN_1000cf20(param_1,CONCAT22(uVar3,param_2));
  if (bVar4) {
    InterlockedDecrement(&DAT_1002f8bc);
  }
  else {
    FUN_10007a50(0x13);
  }
  return iVar2;
}



// Function: FUN_1000cf20 @ 0x1000cf20

int __cdecl FUN_1000cf20(LPSTR param_1,uint param_2)

{
  DWORD *pDVar1;
  BOOL local_c;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else if (DAT_1002f730 == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      local_8 = 1;
    }
    else {
      pDVar1 = FUN_1000be80();
      *pDVar1 = 0x2a;
      local_8 = -1;
    }
  }
  else {
    local_c = 0;
    local_8 = WideCharToMultiByte(DAT_1002f740,0x220,(LPCWSTR)&param_2,1,param_1,DAT_1002dea4,
                                  (LPCSTR)0x0,&local_c);
    if ((local_8 == 0) || (local_c != 0)) {
      pDVar1 = FUN_1000be80();
      *pDVar1 = 0x2a;
      local_8 = -1;
    }
  }
  return local_8;
}



// Function: __global_unwind2 @ 0x1000cfc0

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000cfd8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000d002

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
  puStack_18 = &LAB_1000cfe0;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000d096();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_1000d096 @ 0x1000d096

void FUN_1000d096(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1002e3c0 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1002e3bc = in_EAX;
  DAT_1002e3c4 = unaff_EBP;
  return;
}



// Function: FUN_1000d175 @ 0x1000d175

void FUN_1000d175(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_1000d190 @ 0x1000d190

uint FUN_1000d190(void)

{
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0xffffffff;
  FUN_100079b0(0x12);
  local_10 = 0;
  do {
    if (0x3f < local_10) {
LAB_1000d360:
      FUN_10007a50(0x12);
      return local_c;
    }
    if ((&DAT_10030f00)[local_10] == 0) {
      local_8 = (undefined4 *)FUN_10003fb0((void *)0x480,2,0x1002b09c,0x79);
      if (local_8 != (undefined4 *)0x0) {
        (&DAT_10030f00)[local_10] = local_8;
        DAT_1003103c = DAT_1003103c + 0x20;
        for (; local_8 < (undefined4 *)((&DAT_10030f00)[local_10] + 0x480); local_8 = local_8 + 9) {
          *(undefined1 *)(local_8 + 1) = 0;
          *local_8 = 0xffffffff;
          *(undefined1 *)((int)local_8 + 5) = 10;
          local_8[2] = 0;
        }
        local_c = local_10 << 5;
        FUN_1000d6a0(local_c);
      }
      goto LAB_1000d360;
    }
    for (local_8 = (undefined4 *)(&DAT_10030f00)[local_10];
        local_8 < (undefined4 *)((&DAT_10030f00)[local_10] + 0x480); local_8 = local_8 + 9) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        if (local_8[2] == 0) {
          FUN_100079b0(0x11);
          if (local_8[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
            local_8[2] = local_8[2] + 1;
          }
          FUN_10007a50(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
        if ((*(byte *)(local_8 + 1) & 1) == 0) {
          *local_8 = 0xffffffff;
          local_c = local_10 * 0x20 + ((int)local_8 - (&DAT_10030f00)[local_10]) / 0x24;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
      }
    }
    if (local_c != 0xffffffff) goto LAB_1000d360;
    local_10 = local_10 + 1;
  } while( true );
}



// Function: __set_osfhnd @ 0x1000d380

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (((uint)param_1 < DAT_1003103c) &&
     (*(int *)((&DAT_10030f00)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) == -1)) {
    if (DAT_1002f528 == 1) {
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
    *(intptr_t *)((&DAT_10030f00)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) = param_2;
    iVar1 = 0;
  }
  else {
    pDVar2 = FUN_1000be80();
    *pDVar2 = 9;
    pDVar2 = FUN_1000be90();
    *pDVar2 = 0;
    iVar1 = -1;
  }
  return iVar1;
}



// Function: FUN_1000d440 @ 0x1000d440

undefined4 __cdecl FUN_1000d440(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if (((param_1 < DAT_1003103c) &&
      (iVar3 = (int)param_1 >> 5,
      (*(byte *)((&DAT_10030f00)[iVar3] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) &&
     (*(int *)((&DAT_10030f00)[iVar3] + (param_1 & 0x1f) * 0x24) != -1)) {
    if (DAT_1002f528 == 1) {
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
    *(undefined4 *)((&DAT_10030f00)[iVar3] + (param_1 & 0x1f) * 0x24) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    pDVar2 = FUN_1000be80();
    *pDVar2 = 9;
    pDVar2 = FUN_1000be90();
    *pDVar2 = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: FUN_1000d520 @ 0x1000d520

undefined4 __cdecl FUN_1000d520(uint param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  
  if ((param_1 < DAT_1003103c) &&
     ((*(byte *)((&DAT_10030f00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    uVar2 = *(undefined4 *)((&DAT_10030f00)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  else {
    pDVar1 = FUN_1000be80();
    *pDVar1 = 9;
    pDVar1 = FUN_1000be90();
    *pDVar1 = 0;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// Function: FUN_1000d590 @ 0x1000d590

uint __cdecl FUN_1000d590(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint _Filehandle;
  DWORD *pDVar2;
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
    _Filehandle = FUN_1000d190();
    if (_Filehandle == 0xffffffff) {
      pDVar2 = FUN_1000be80();
      *pDVar2 = 0x18;
      pDVar2 = FUN_1000be90();
      *pDVar2 = 0;
      _Filehandle = 0xffffffff;
    }
    else {
      __set_osfhnd(_Filehandle,(intptr_t)param_1);
      *(byte *)((&DAT_10030f00)[(int)_Filehandle >> 5] + 4 + (_Filehandle & 0x1f) * 0x24) =
           local_10 | 1;
      __unlock_fhandle(_Filehandle);
    }
  }
  return _Filehandle;
}



// Function: FUN_1000d6a0 @ 0x1000d6a0

void __cdecl FUN_1000d6a0(uint param_1)

{
  int iVar1;
  
  iVar1 = (&DAT_10030f00)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_100079b0(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10007a50(0x11);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10030f00)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: __unlock_fhandle @ 0x1000d730

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10030f00)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}



// Function: FUN_1000d760 @ 0x1000d760

int FUN_1000d760(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_100079b0(2);
  for (local_c = 3; local_c < DAT_10030c00; local_c = local_c + 1) {
    if (*(int *)(DAT_1002f8c0 + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_1002f8c0 + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = FUN_1000e550(*(undefined ***)(DAT_1002f8c0 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_1002f8c0 + local_c * 4) + 0x20));
        FUN_10004a40(*(void **)(DAT_1002f8c0 + local_c * 4),2);
        *(undefined4 *)(DAT_1002f8c0 + local_c * 4) = 0;
      }
    }
  }
  FUN_10007a50(2);
  return local_8;
}



// Function: FUN_1000d840 @ 0x1000d840

int __cdecl FUN_1000d840(undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_1000d9b0(0);
  }
  else {
    FUN_1000cdc0(param_1);
    iVar1 = FUN_1000d890((int *)param_1);
    FUN_1000ce30(param_1);
  }
  return iVar1;
}



// Function: FUN_1000d890 @ 0x1000d890

int __cdecl FUN_1000d890(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_1000d8e0(param_1);
  if (iVar1 == 0) {
    if ((param_1[3] & 0x4000U) == 0) {
      iVar1 = 0;
    }
    else {
      DVar2 = FUN_1000e6a0(param_1[4]);
      iVar1 = -(uint)(DVar2 != 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// Function: FUN_1000d8e0 @ 0x1000d8e0

undefined4 __cdecl FUN_1000d8e0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((param_1[3] & 3U) == 2) && ((param_1[3] & 0x108U) != 0)) &&
     (uVar2 = *param_1 - param_1[2], 0 < (int)uVar2)) {
    uVar1 = FUN_1000c850(param_1[4],(char *)param_1[2],uVar2);
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



// Function: FUN_1000d9a0 @ 0x1000d9a0

void FUN_1000d9a0(void)

{
  FUN_1000d9b0(1);
  return;
}



// Function: FUN_1000d9b0 @ 0x1000d9b0

int __cdecl FUN_1000d9b0(int param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_100079b0(2);
  for (local_10 = 0; local_10 < DAT_10030c00; local_10 = local_10 + 1) {
    if ((*(int *)(DAT_1002f8c0 + local_10 * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_1002f8c0 + local_10 * 4) + 0xc) & 0x83) != 0)) {
      FUN_1000ce00(local_10,*(int *)(DAT_1002f8c0 + local_10 * 4));
      if ((*(uint *)(*(int *)(DAT_1002f8c0 + local_10 * 4) + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = FUN_1000d890(*(int **)(DAT_1002f8c0 + local_10 * 4));
          if (iVar1 != -1) {
            local_8 = local_8 + 1;
          }
        }
        else if (((param_1 == 0) &&
                 ((*(uint *)(*(int *)(DAT_1002f8c0 + local_10 * 4) + 0xc) & 2) != 0)) &&
                (iVar1 = FUN_1000d890(*(int **)(DAT_1002f8c0 + local_10 * 4)), iVar1 == -1)) {
          local_c = -1;
        }
      }
      FUN_1000ce70(local_10,*(int *)(DAT_1002f8c0 + local_10 * 4));
    }
  }
  FUN_10007a50(2);
  if (param_1 == 1) {
    local_c = local_8;
  }
  return local_c;
}



// Function: __fptrap @ 0x1000daf0

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Debug */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



// Function: FUN_1000db00 @ 0x1000db00

uint * __cdecl FUN_1000db00(int param_1,uint *param_2)

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
    FUN_100079b0(0x13);
    local_8 = 1;
    DAT_1002f8ac = DAT_1002f8ac + 1;
    while (DAT_1002f8bc != 0) {
      Sleep(1);
    }
    if (param_1 == 0) {
      local_18 = 1;
      local_10 = 0;
      if (param_2 == (uint *)0x0) {
        local_c = FUN_1000e090();
      }
      else if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
              (*(char *)((int)param_2 + 2) == '_')) {
        local_a0 = param_2;
        do {
          pbVar1 = FUN_1000fd50((byte *)local_a0,&DAT_1002b0ec);
          if (((pbVar1 == (byte *)0x0) || (sVar4 = (int)pbVar1 - (int)local_a0, sVar4 == 0)) ||
             (*pbVar1 == 0x3b)) {
            if (local_8 != 0) {
              FUN_10007a50(0x13);
              DAT_1002f8ac = DAT_1002f8ac + -1;
            }
            return (uint *)0x0;
          }
          local_14 = 1;
          while ((local_14 < 6 &&
                 ((iVar2 = _strncmp(*(char **)(local_14 * 0xc + 0x1002e4d8),(char *)local_a0,sVar4),
                  iVar2 != 0 ||
                  (sVar3 = _strlen(*(char **)(local_14 * 0xc + 0x1002e4d8)), sVar4 != sVar3))))) {
            local_14 = local_14 + 1;
          }
          pbVar1 = pbVar1 + 1;
          sVar4 = FUN_1000fcd0(pbVar1,&DAT_1002b0e8);
          if ((sVar4 == 0) && (*pbVar1 != 0x3b)) {
            if (local_8 != 0) {
              FUN_10007a50(0x13);
              DAT_1002f8ac = DAT_1002f8ac + -1;
            }
            return (uint *)0x0;
          }
          if (local_14 < 6) {
            _strncpy((char *)local_9c,(char *)pbVar1,sVar4);
            *(undefined1 *)((int)local_9c + sVar4) = 0;
            iVar2 = FUN_1000def0(local_14,local_9c);
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
          local_b0 = FUN_1000e090();
        }
        local_c = local_b0;
      }
      else {
        local_c = FUN_1000e190(param_2,local_9c,(undefined4 *)0x0,(undefined4 *)0x0);
        if (local_c != (uint *)0x0) {
          for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
            if (local_14 != 0) {
              iVar2 = _strcmp((char *)local_9c,(&DAT_1002e4dc)[local_14 * 3]);
              if (iVar2 == 0) {
                local_10 = local_10 + 1;
              }
              else {
                iVar2 = FUN_1000def0(local_14,local_9c);
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
              local_b4 = FUN_1000e090();
            }
            local_c = local_b4;
          }
          else {
            local_c = FUN_1000e090();
            FUN_10004a40(DAT_1002e4dc,2);
            DAT_1002e4dc = (void *)0x0;
          }
        }
      }
    }
    else {
      if (param_2 == (uint *)0x0) {
        local_ac = (&DAT_1002e4dc)[param_1 * 3];
      }
      else {
        local_ac = (uint *)FUN_1000def0(param_1,param_2);
      }
      local_c = local_ac;
    }
    if (local_8 != 0) {
      FUN_10007a50(0x13);
      DAT_1002f8ac = DAT_1002f8ac + -1;
    }
  }
  return local_c;
}



// Function: FUN_1000def0 @ 0x1000def0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000def0(int param_1,uint *param_2)

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
  
  puVar1 = FUN_1000e190(param_2,local_a0,local_ac,&local_a4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0x132;
    pcVar5 = "setlocal.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)local_a0);
    local_c = (uint *)FUN_10003fb0((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar6);
    if (local_c == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      local_10 = (undefined *)(&DAT_1002e4dc)[param_1 * 3];
      local_8 = *(undefined4 *)(&DAT_1002f728 + param_1 * 4);
      FUN_1000a890(local_18,(undefined4 *)(&DAT_1002f778 + param_1 * 6),6);
      local_1c = DAT_1002f740;
      puVar1 = FUN_10006f60(local_c,local_a0);
      (&DAT_1002e4dc)[param_1 * 3] = puVar1;
      *(uint *)(&DAT_1002f728 + param_1 * 4) = local_ac[0] & 0xffff;
      FUN_1000a890((undefined4 *)(&DAT_1002f778 + param_1 * 6),local_ac,6);
      if (param_1 == 2) {
        DAT_1002f740 = local_a4;
      }
      if (param_1 == 1) {
        _DAT_1002f744 = local_a4;
      }
      iVar6 = (**(code **)(&DAT_1002e4e0 + param_1 * 0xc))();
      if (iVar6 == 0) {
        if (local_10 != &DAT_1002e3c8) {
          FUN_10004a40(local_10,2);
        }
        uVar2 = (&DAT_1002e4dc)[param_1 * 3];
      }
      else {
        (&DAT_1002e4dc)[param_1 * 3] = local_10;
        FUN_10004a40(local_c,2);
        *(undefined4 *)(&DAT_1002f728 + param_1 * 4) = local_8;
        DAT_1002f740 = local_1c;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



// Function: FUN_1000e090 @ 0x1000e090

uint * FUN_1000e090(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int local_8;
  
  bVar1 = true;
  if (DAT_1002e4dc == (uint *)0x0) {
    DAT_1002e4dc = (uint *)FUN_10003fb0((void *)0x351,2,0x1002b0f0,0x167);
  }
  *(undefined1 *)DAT_1002e4dc = 0;
  for (local_8 = 1; __strcats(DAT_1002e4dc,3), local_8 < 5; local_8 = local_8 + 1) {
    FUN_10006f70(DAT_1002e4dc,(uint *)&DAT_1002b0e8);
    iVar2 = _strcmp((char *)(&DAT_1002e4dc)[local_8 * 3],(char *)(&DAT_1002e4dc)[(local_8 + 1) * 3])
    ;
    if (iVar2 != 0) {
      bVar1 = false;
    }
  }
  puVar3 = DAT_1002e4dc;
  if (bVar1) {
    FUN_10004a40(DAT_1002e4dc,2);
    DAT_1002e4dc = (uint *)0x0;
    puVar3 = (uint *)PTR_DAT_1002e4f4;
  }
  return puVar3;
}



// Function: FUN_1000e190 @ 0x1000e190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_1000e190(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

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
    iVar1 = _strcmp(&DAT_1002e450,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_1002e3cc,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_1000e380((char *)local_8c,(byte *)param_1);
      if (iVar1 != 0) {
        return (uint *)0x0;
      }
      iVar1 = FUN_1000fd90((char *)local_8c,(undefined2 *)&DAT_1002f750,(int)local_8c);
      if (iVar1 == 0) {
        return (uint *)0x0;
      }
      _DAT_1002f758 = (uint)DAT_1002f754;
      ___lc_lctostr((uint *)&DAT_1002e450,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_10006f60((uint *)&DAT_1002e3cc,(uint *)&DAT_1002e450);
      }
      else {
        FUN_10006f60((uint *)&DAT_1002e3cc,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_1000a890(param_3,(undefined4 *)&DAT_1002f750,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_1000a890(param_4,(undefined4 *)&DAT_1002f758,4);
    }
    FUN_10006f60(param_2,(uint *)&DAT_1002e450);
    param_2 = (uint *)&DAT_1002e450;
  }
  return param_2;
}



// Function: FUN_1000e320 @ 0x1000e320

undefined4 FUN_1000e320(void)

{
  return 0;
}



// Function: __strcats @ 0x1000e330

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Debug */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    FUN_10006f70(param_1,(uint *)*local_8);
    local_8 = local_8 + 1;
  }
  return;
}



// Function: FUN_1000e380 @ 0x1000e380

undefined4 __cdecl FUN_1000e380(char *param_1,byte *param_2)

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
    FUN_10006f60((uint *)(param_1 + 0x80),(uint *)(param_2 + 1));
    uVar2 = 0;
  }
  else {
    local_8 = 0;
    while (_Count = FUN_1000fcd0(param_2,&DAT_1002b100), _Count != 0) {
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



// Function: ___lc_lctostr @ 0x1000e4e0

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___lc_lctostr(uint *param_1,uint *param_2)

{
  FUN_10006f60(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    __strcats(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    __strcats(param_1,2);
  }
  return;
}



// Function: FUN_1000e550 @ 0x1000e550

undefined4 __cdecl FUN_1000e550(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10003070(2,0x1002b10c,0x3a,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uint)param_1[3] & 0x40) == 0) {
    FUN_1000cdc0(param_1);
    local_8 = FUN_1000e5e0((int *)param_1);
    FUN_1000ce30(param_1);
  }
  else {
    param_1[3] = (undefined *)0x0;
  }
  return local_8;
}



// Function: FUN_1000e5e0 @ 0x1000e5e0

undefined4 __cdecl FUN_1000e5e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_10003070(2,0x1002b10c,0x77,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_1[3] & 0x83U) != 0) {
    local_8 = FUN_1000d8e0(param_1);
    FUN_10010c60(param_1);
    iVar2 = FUN_10010b30(param_1[4]);
    if (iVar2 < 0) {
      local_8 = 0xffffffff;
    }
    else if (param_1[7] != 0) {
      FUN_10004a40((void *)param_1[7],2);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return local_8;
}



// Function: FUN_1000e6a0 @ 0x1000e6a0

DWORD __cdecl FUN_1000e6a0(uint param_1)

{
  DWORD *pDVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD local_8;
  
  if ((DAT_1003103c <= param_1) ||
     ((*(byte *)((&DAT_10030f00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    pDVar1 = FUN_1000be80();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  FUN_1000d6a0(param_1);
  if ((*(byte *)((&DAT_10030f00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0) {
    hFile = (HANDLE)FUN_1000d520(param_1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) goto LAB_1000e75f;
    pDVar1 = FUN_1000be90();
    *pDVar1 = local_8;
  }
  pDVar1 = FUN_1000be80();
  *pDVar1 = 9;
  local_8 = 0xffffffff;
LAB_1000e75f:
  __unlock_fhandle(param_1);
  return local_8;
}



// Function: ___init_time @ 0x1000e780

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_1002f73c == 0) {
    PTR_PTR_1002ec98 = (undefined *)&PTR_DAT_1002eca0;
    ___free_lc_time(DAT_1002f75c);
    FUN_10004a40(DAT_1002f75c,2);
    DAT_1002f75c = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = (int *)__calloc_dbg(1,0xac,2,"inittime.c",0x48);
    if (piVar1 == (int *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = FUN_1000e860(piVar1);
      if (uVar3 == 0) {
        PTR_PTR_1002ec98 = (undefined *)piVar1;
        ___free_lc_time(DAT_1002f75c);
        FUN_10004a40(DAT_1002f75c,2);
        iVar2 = 0;
        DAT_1002f75c = piVar1;
      }
      else {
        ___free_lc_time(piVar1);
        FUN_10004a40(piVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}



// Function: FUN_1000e860 @ 0x1000e860

uint __cdecl FUN_1000e860(int *param_1)

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
  
  uVar41 = (uint)DAT_1002f796;
  uVar1 = (uint)DAT_1002f798;
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10012170(1,uVar41,0x31,param_1 + 1);
    uVar3 = FUN_10012170(1,uVar41,0x32,param_1 + 2);
    uVar4 = FUN_10012170(1,uVar41,0x33,param_1 + 3);
    uVar5 = FUN_10012170(1,uVar41,0x34,param_1 + 4);
    uVar6 = FUN_10012170(1,uVar41,0x35,param_1 + 5);
    uVar7 = FUN_10012170(1,uVar41,0x36,param_1 + 6);
    uVar8 = FUN_10012170(1,uVar41,0x37,param_1);
    uVar9 = FUN_10012170(1,uVar41,0x2a,param_1 + 8);
    uVar10 = FUN_10012170(1,uVar41,0x2b,param_1 + 9);
    uVar11 = FUN_10012170(1,uVar41,0x2c,param_1 + 10);
    uVar12 = FUN_10012170(1,uVar41,0x2d,param_1 + 0xb);
    uVar13 = FUN_10012170(1,uVar41,0x2e,param_1 + 0xc);
    uVar14 = FUN_10012170(1,uVar41,0x2f,param_1 + 0xd);
    uVar15 = FUN_10012170(1,uVar41,0x30,param_1 + 7);
    uVar16 = FUN_10012170(1,uVar41,0x44,param_1 + 0xe);
    uVar17 = FUN_10012170(1,uVar41,0x45,param_1 + 0xf);
    uVar18 = FUN_10012170(1,uVar41,0x46,param_1 + 0x10);
    uVar19 = FUN_10012170(1,uVar41,0x47,param_1 + 0x11);
    uVar20 = FUN_10012170(1,uVar41,0x48,param_1 + 0x12);
    uVar21 = FUN_10012170(1,uVar41,0x49,param_1 + 0x13);
    uVar22 = FUN_10012170(1,uVar41,0x4a,param_1 + 0x14);
    uVar23 = FUN_10012170(1,uVar41,0x4b,param_1 + 0x15);
    uVar24 = FUN_10012170(1,uVar41,0x4c,param_1 + 0x16);
    uVar25 = FUN_10012170(1,uVar41,0x4d,param_1 + 0x17);
    uVar26 = FUN_10012170(1,uVar41,0x4e,param_1 + 0x18);
    uVar27 = FUN_10012170(1,uVar41,0x4f,param_1 + 0x19);
    uVar28 = FUN_10012170(1,uVar41,0x38,param_1 + 0x1a);
    uVar29 = FUN_10012170(1,uVar41,0x39,param_1 + 0x1b);
    uVar30 = FUN_10012170(1,uVar41,0x3a,param_1 + 0x1c);
    uVar31 = FUN_10012170(1,uVar41,0x3b,param_1 + 0x1d);
    uVar32 = FUN_10012170(1,uVar41,0x3c,param_1 + 0x1e);
    uVar33 = FUN_10012170(1,uVar41,0x3d,param_1 + 0x1f);
    uVar34 = FUN_10012170(1,uVar41,0x3e,param_1 + 0x20);
    uVar35 = FUN_10012170(1,uVar41,0x3f,param_1 + 0x21);
    uVar36 = FUN_10012170(1,uVar41,0x40,param_1 + 0x22);
    uVar37 = FUN_10012170(1,uVar41,0x41,param_1 + 0x23);
    uVar38 = FUN_10012170(1,uVar41,0x42,param_1 + 0x24);
    uVar39 = FUN_10012170(1,uVar41,0x43,param_1 + 0x25);
    uVar40 = FUN_10012170(1,uVar41,0x28,param_1 + 0x26);
    uVar41 = FUN_10012170(1,uVar41,0x29,param_1 + 0x27);
    uVar42 = FUN_10012170(1,uVar1,0x1f,param_1 + 0x28);
    uVar43 = FUN_10012170(1,uVar1,0x20,param_1 + 0x29);
    uVar1 = FUN_10012170(1,uVar1,0x1003,param_1 + 0x2a);
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
            uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31
            | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 |
            uVar41 | uVar42 | uVar43 | uVar1;
  }
  return uVar1;
}



// Function: ___free_lc_time @ 0x1000edf0

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_10004a40((void *)param_1[1],2);
    FUN_10004a40((void *)param_1[2],2);
    FUN_10004a40((void *)param_1[3],2);
    FUN_10004a40((void *)param_1[4],2);
    FUN_10004a40((void *)param_1[5],2);
    FUN_10004a40((void *)param_1[6],2);
    FUN_10004a40((void *)*param_1,2);
    FUN_10004a40((void *)param_1[8],2);
    FUN_10004a40((void *)param_1[9],2);
    FUN_10004a40((void *)param_1[10],2);
    FUN_10004a40((void *)param_1[0xb],2);
    FUN_10004a40((void *)param_1[0xc],2);
    FUN_10004a40((void *)param_1[0xd],2);
    FUN_10004a40((void *)param_1[7],2);
    FUN_10004a40((void *)param_1[0xe],2);
    FUN_10004a40((void *)param_1[0xf],2);
    FUN_10004a40((void *)param_1[0x10],2);
    FUN_10004a40((void *)param_1[0x11],2);
    FUN_10004a40((void *)param_1[0x12],2);
    FUN_10004a40((void *)param_1[0x13],2);
    FUN_10004a40((void *)param_1[0x14],2);
    FUN_10004a40((void *)param_1[0x15],2);
    FUN_10004a40((void *)param_1[0x16],2);
    FUN_10004a40((void *)param_1[0x17],2);
    FUN_10004a40((void *)param_1[0x18],2);
    FUN_10004a40((void *)param_1[0x19],2);
    FUN_10004a40((void *)param_1[0x1a],2);
    FUN_10004a40((void *)param_1[0x1b],2);
    FUN_10004a40((void *)param_1[0x1c],2);
    FUN_10004a40((void *)param_1[0x1d],2);
    FUN_10004a40((void *)param_1[0x1e],2);
    FUN_10004a40((void *)param_1[0x1f],2);
    FUN_10004a40((void *)param_1[0x20],2);
    FUN_10004a40((void *)param_1[0x21],2);
    FUN_10004a40((void *)param_1[0x22],2);
    FUN_10004a40((void *)param_1[0x23],2);
    FUN_10004a40((void *)param_1[0x24],2);
    FUN_10004a40((void *)param_1[0x25],2);
    FUN_10004a40((void *)param_1[0x26],2);
    FUN_10004a40((void *)param_1[0x27],2);
    FUN_10004a40((void *)param_1[0x28],2);
    FUN_10004a40((void *)param_1[0x29],2);
    FUN_10004a40((void *)param_1[0x2a],2);
  }
  return;
}



// Function: FUN_1000f100 @ 0x1000f100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000f100(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = (uint)DAT_1002f792;
  if (DAT_1002f738 == 0) {
    FUN_10004a40(DAT_1002f760,2);
    FUN_10004a40(DAT_1002f764,2);
    FUN_10004a40(DAT_1002f768,2);
    DAT_1002f760 = (void *)0x0;
    DAT_1002f764 = (void *)0x0;
    DAT_1002f768 = (char *)0x0;
    uVar5 = FUN_10003fb0((void *)0x2,2,0x1002b134,0x88);
    *(undefined4 *)PTR_PTR_1002ed88 = uVar5;
    if (*(int *)PTR_PTR_1002ed88 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      FUN_10006f60(*(uint **)PTR_PTR_1002ed88,(uint *)&DAT_1002b104);
      uVar5 = FUN_10003fb0((void *)0x2,2,0x1002b134,0x8d);
      *(undefined4 *)(PTR_PTR_1002ed88 + 4) = uVar5;
      if (*(int *)(PTR_PTR_1002ed88 + 4) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_1002ed88 + 4) = 0;
        uVar5 = FUN_10003fb0((void *)0x2,2,0x1002b134,0x92);
        *(undefined4 *)(PTR_PTR_1002ed88 + 8) = uVar5;
        if (*(int *)(PTR_PTR_1002ed88 + 8) == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_1002ed88 + 8) = 0;
          DAT_1002dea8 = **(undefined1 **)PTR_PTR_1002ed88;
          _DAT_1002deac = 1;
          uVar5 = 0;
        }
      }
    }
  }
  else {
    iVar2 = FUN_10012170(1,uVar1,0xe,(int *)&DAT_1002f760);
    iVar3 = FUN_10012170(1,uVar1,0xf,(int *)&DAT_1002f764);
    iVar4 = FUN_10012170(1,uVar1,0x10,(int *)&DAT_1002f768);
    fix_grouping(DAT_1002f768);
    if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) {
      if (*(undefined **)PTR_PTR_1002ed88 != &DAT_1002ed50) {
        FUN_10004a40(*(void **)PTR_PTR_1002ed88,2);
        FUN_10004a40(*(void **)(PTR_PTR_1002ed88 + 4),2);
        FUN_10004a40(*(void **)(PTR_PTR_1002ed88 + 8),2);
      }
      *(void **)PTR_PTR_1002ed88 = DAT_1002f760;
      *(void **)(PTR_PTR_1002ed88 + 4) = DAT_1002f764;
      *(char **)(PTR_PTR_1002ed88 + 8) = DAT_1002f768;
      DAT_1002dea8 = **(undefined1 **)PTR_PTR_1002ed88;
      _DAT_1002deac = 1;
      uVar5 = 0;
    }
    else {
      FUN_10004a40(DAT_1002f760,2);
      FUN_10004a40(DAT_1002f764,2);
      FUN_10004a40(DAT_1002f768,2);
      DAT_1002f760 = (void *)0x0;
      DAT_1002f764 = (void *)0x0;
      DAT_1002f768 = (char *)0x0;
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}



// Function: fix_grouping @ 0x1000f3b0

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



// Function: FUN_1000f430 @ 0x1000f430

undefined4 FUN_1000f430(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_1002f734 == 0) {
    PTR_DAT_1002ed58 = *(undefined **)PTR_PTR_1002ed88;
    PTR_DAT_1002ed5c = *(undefined **)(PTR_PTR_1002ed88 + 4);
    PTR_DAT_1002ed60 = *(undefined **)(PTR_PTR_1002ed88 + 8);
    PTR_PTR_1002ed88 = (undefined *)&PTR_DAT_1002ed58;
    FUN_1000f7f0((int)DAT_1002f76c);
    FUN_10004a40(DAT_1002f76c,2);
    DAT_1002f76c = (undefined4 *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)__calloc_dbg(1,0x30,2,"initmon.c",0x4a);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_1000f560((int)puVar1);
      if (uVar3 == 0) {
        *puVar1 = *(undefined4 *)PTR_PTR_1002ed88;
        puVar1[1] = *(undefined4 *)(PTR_PTR_1002ed88 + 4);
        puVar1[2] = *(undefined4 *)(PTR_PTR_1002ed88 + 8);
        PTR_PTR_1002ed88 = (undefined *)puVar1;
        FUN_1000f7f0((int)DAT_1002f76c);
        FUN_10004a40(DAT_1002f76c,2);
        uVar2 = 0;
        DAT_1002f76c = puVar1;
      }
      else {
        FUN_1000f7f0((int)puVar1);
        FUN_10004a40(puVar1,2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// Function: FUN_1000f560 @ 0x1000f560

uint __cdecl FUN_1000f560(int param_1)

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
  
  uVar1 = (uint)DAT_1002f78c;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10012170(1,uVar1,0x15,(int *)(param_1 + 0xc));
    uVar3 = FUN_10012170(1,uVar1,0x14,(int *)(param_1 + 0x10));
    uVar4 = FUN_10012170(1,uVar1,0x16,(int *)(param_1 + 0x14));
    uVar5 = FUN_10012170(1,uVar1,0x17,(int *)(param_1 + 0x18));
    uVar6 = FUN_10012170(1,uVar1,0x18,(int *)(param_1 + 0x1c));
    fix_grouping(*(char **)(param_1 + 0x1c));
    uVar7 = FUN_10012170(1,uVar1,0x50,(int *)(param_1 + 0x20));
    uVar8 = FUN_10012170(1,uVar1,0x51,(int *)(param_1 + 0x24));
    uVar9 = FUN_10012170(0,uVar1,0x1a,(int *)(param_1 + 0x28));
    uVar10 = FUN_10012170(0,uVar1,0x19,(int *)(param_1 + 0x29));
    uVar11 = FUN_10012170(0,uVar1,0x54,(int *)(param_1 + 0x2a));
    uVar12 = FUN_10012170(0,uVar1,0x55,(int *)(param_1 + 0x2b));
    uVar13 = FUN_10012170(0,uVar1,0x56,(int *)(param_1 + 0x2c));
    uVar14 = FUN_10012170(0,uVar1,0x57,(int *)(param_1 + 0x2d));
    uVar15 = FUN_10012170(0,uVar1,0x52,(int *)(param_1 + 0x2e));
    uVar1 = FUN_10012170(0,uVar1,0x53,(int *)(param_1 + 0x2f));
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar1;
  }
  return uVar1;
}



// Function: fix_grouping @ 0x1000f770

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



// Function: FUN_1000f7f0 @ 0x1000f7f0

void __cdecl FUN_1000f7f0(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_1002f7c8)) {
    FUN_10004a40(*(void **)(param_1 + 0xc),2);
    FUN_10004a40(*(void **)(param_1 + 0x10),2);
    FUN_10004a40(*(void **)(param_1 + 0x14),2);
    FUN_10004a40(*(void **)(param_1 + 0x18),2);
    FUN_10004a40(*(void **)(param_1 + 0x1c),2);
    FUN_10004a40(*(void **)(param_1 + 0x20),2);
    FUN_10004a40(*(void **)(param_1 + 0x24),2);
  }
  return;
}



// Function: FUN_1000f890 @ 0x1000f890

undefined4 FUN_1000f890(void)

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
  if (DAT_1002f730 == 0) {
    PTR_DAT_1002dc98 = &DAT_1002dca2;
    PTR_DAT_1002dc9c = &DAT_1002dca2;
    FUN_10004a40(DAT_1002f770,2);
    FUN_10004a40(DAT_1002f774,2);
    DAT_1002f770 = (void *)0x0;
    DAT_1002f774 = (void *)0x0;
    uVar3 = 0;
  }
  else {
    if ((DAT_1002f740 != 0) ||
       (iVar1 = FUN_10012170(0,(uint)DAT_1002f784,0x1004,(int *)&DAT_1002f740), iVar1 == 0)) {
      local_34 = (undefined2 *)FUN_10003fb0((void *)0x202,2,0x1002b14c,0x5c);
      local_20 = (undefined2 *)FUN_10003fb0((void *)0x202,2,0x1002b14c,0x5e);
      local_30 = (LPCSTR)FUN_10003fb0((void *)0x101,2,0x1002b14c,0x60);
      local_2c = (LPCWSTR)FUN_10003fb0((void *)0x202,2,0x1002b14c,0x62);
      if ((local_34 != (undefined2 *)0x0) &&
         (((local_20 != (undefined2 *)0x0 && (local_30 != (LPCSTR)0x0)) &&
          (local_2c != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)local_30;
        for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
          *local_1c = (CHAR)local_24;
          local_1c = local_1c + 1;
        }
        BVar2 = GetCPInfo(DAT_1002f740,&local_18);
        if ((BVar2 != 0) && (local_18.MaxCharSize < 3)) {
          DAT_1002dea4 = local_18.MaxCharSize & 0xffff;
          if (1 < DAT_1002dea4) {
            for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                  local_24 = local_24 + 1) {
                local_30[local_24] = '\0';
              }
            }
          }
          BVar2 = FUN_1000c1e0(1,local_30,0x100,local_34 + 1,0,0,0);
          if (BVar2 != 0) {
            *local_34 = 0;
            local_28 = local_2c;
            for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
              *local_28 = (WCHAR)local_24;
              local_28 = local_28 + 1;
            }
            BVar2 = FUN_10012410(1,local_2c,0x100,local_20 + 1,0,0);
            if (BVar2 != 0) {
              *local_20 = 0;
              if (1 < (int)DAT_1002dea4) {
                for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                      local_24 = local_24 + 1) {
                    local_34[local_24 + 1] = 0x8000;
                  }
                }
              }
              PTR_DAT_1002dc98 = (undefined *)(local_34 + 1);
              PTR_DAT_1002dc9c = (undefined *)(local_20 + 1);
              if (DAT_1002f770 != (void *)0x0) {
                FUN_10004a40(DAT_1002f770,2);
              }
              DAT_1002f770 = local_34;
              if (DAT_1002f774 != (void *)0x0) {
                FUN_10004a40(DAT_1002f774,2);
              }
              DAT_1002f774 = local_20;
              FUN_10004a40(local_30,2);
              FUN_10004a40(local_2c,2);
              return 0;
            }
          }
        }
      }
    }
    FUN_10004a40(local_34,2);
    FUN_10004a40(local_20,2);
    FUN_10004a40(local_30,2);
    FUN_10004a40(local_2c,2);
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_1000fc30 @ 0x1000fc30

undefined4 FUN_1000fc30(void)

{
  return 0;
}



// Function: _strcmp @ 0x1000fc40

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
      if (bVar4 != *_Str2) goto LAB_1000fc84;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1000fc50;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_1000fc84;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_1000fc84;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1000fc50:
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
LAB_1000fc84:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_1000fcd0 @ 0x1000fcd0

int __cdecl FUN_1000fcd0(byte *param_1,byte *param_2)

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



// Function: _strncmp @ 0x1000fd10

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



// Function: FUN_1000fd50 @ 0x1000fd50

byte * __cdecl FUN_1000fd50(byte *param_1,byte *param_2)

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



// Function: FUN_1000fd90 @ 0x1000fd90

undefined4 __cdecl FUN_1000fd90(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_1002f7bc == (code *)0x0) {
    iVar1 = FUN_10010860();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_1002f7bc = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_100106b0();
  }
  else {
    DAT_1002f7ac = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_1000ff90(0x1002ea90,0x40,(int *)&DAT_1002f7ac);
    }
    DAT_1002f7b0 = param_1 + 0x40;
    if ((DAT_1002f7b0 != (char *)0x0) && (*DAT_1002f7b0 != '\0')) {
      FUN_1000ff90(0x1002e9d8,0x16,(int *)&DAT_1002f7b0);
    }
    DAT_1002f7b4 = 0;
    if ((DAT_1002f7ac == (char *)0x0) || (*DAT_1002f7ac == '\0')) {
      if ((DAT_1002f7b0 == (char *)0x0) || (*DAT_1002f7b0 == '\0')) {
        FUN_100106b0();
      }
      else {
        FUN_100105b0();
      }
    }
    else if ((DAT_1002f7b0 == (char *)0x0) || (*DAT_1002f7b0 == '\0')) {
      FUN_10010410();
    }
    else {
      FUN_10010020();
    }
  }
  if (DAT_1002f7b4 == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_100106e0((byte *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_1002f79c,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_1002f79c;
          param_2[1] = (undefined2)DAT_1002f7b8;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_1002f7bc)(DAT_1002f79c,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_1002f7bc)(DAT_1002f7b8,0x1002,param_3 + 0x40,0x40);
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



// Function: FUN_1000ff90 @ 0x1000ff90

void __cdecl FUN_1000ff90(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_c = 1;
  local_10 = 0;
  while ((local_10 <= param_2 && (local_c != 0))) {
    iVar1 = (local_10 + param_2) / 2;
    local_c = FUN_10012680((byte *)*param_3,*(byte **)(param_1 + iVar1 * 8));
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



// Function: FUN_10010020 @ 0x10010020

void FUN_10010020(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_1002f7ac);
  DAT_1002f7a8 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_1002f7b0);
  DAT_1002f7a0 = (uint)(sVar1 == 3);
  DAT_1002f79c = 0;
  if (DAT_1002f7a8 == 0) {
    local_8 = _GetPrimaryLen(DAT_1002f7ac);
  }
  else {
    local_8 = 2;
  }
  DAT_1002f7a4 = local_8;
  EnumSystemLocalesA(FUN_100100e0,1);
  if ((((DAT_1002f7b4 & 0x100) == 0) || ((DAT_1002f7b4 & 0x200) == 0)) || ((DAT_1002f7b4 & 7) == 0))
  {
    DAT_1002f7b4 = 0;
  }
  return;
}



// Function: FUN_100100e0 @ 0x100100e0

bool FUN_100100e0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  byte local_7c [120];
  
  iVar2 = FUN_10010a40(param_1);
  iVar3 = (*DAT_1002f7bc)(iVar2,(-(uint)(DAT_1002f7a0 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_1002f7b4 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_10012680(DAT_1002f7b0,local_7c);
    if (uVar4 == 0) {
      iVar3 = (*DAT_1002f7bc)(iVar2,(-(uint)(DAT_1002f7a8 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_1002f7b4 = 0;
        return true;
      }
      uVar4 = FUN_10012680(DAT_1002f7ac,local_7c);
      if (uVar4 == 0) {
        DAT_1002f7b4 = DAT_1002f7b4 | 0x304;
        DAT_1002f79c = iVar2;
        DAT_1002f7b8 = iVar2;
      }
      else if ((DAT_1002f7b4 & 2) == 0) {
        if ((DAT_1002f7a4 == 0) ||
           (iVar3 = FUN_10012750(DAT_1002f7ac,(char *)local_7c,DAT_1002f7a4), iVar3 != 0)) {
          if (((DAT_1002f7b4 & 1) == 0) && (iVar3 = FUN_10010780((short)iVar2), iVar3 != 0)) {
            DAT_1002f7b4 = DAT_1002f7b4 | 1;
            DAT_1002f7b8 = iVar2;
          }
        }
        else {
          DAT_1002f7b4 = DAT_1002f7b4 | 2;
          DAT_1002f7b8 = iVar2;
          sVar5 = _strlen((char *)DAT_1002f7ac);
          if (sVar5 == DAT_1002f7a4) {
            DAT_1002f79c = iVar2;
          }
        }
      }
    }
    if ((DAT_1002f7b4 & 0x300) != 0x300) {
      iVar3 = (*DAT_1002f7bc)(iVar2,(-(uint)(DAT_1002f7a8 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_1002f7b4 = 0;
        return true;
      }
      uVar4 = FUN_10012680(DAT_1002f7ac,local_7c);
      if (uVar4 == 0) {
        uVar4 = DAT_1002f7b4 | 0x200;
        if (DAT_1002f7a8 == 0) {
          DAT_1002f7b4 = uVar4;
          if ((DAT_1002f7a4 == 0) || (sVar5 = _strlen((char *)DAT_1002f7ac), sVar5 != DAT_1002f7a4))
          {
            DAT_1002f7b4 = DAT_1002f7b4 | 0x100;
            if (DAT_1002f79c == 0) {
              DAT_1002f79c = iVar2;
            }
          }
          else {
            iVar3 = FUN_100107d0(iVar2,1);
            if ((iVar3 != 0) && (DAT_1002f7b4 = DAT_1002f7b4 | 0x100, DAT_1002f79c == 0)) {
              DAT_1002f79c = iVar2;
            }
          }
        }
        else {
          DAT_1002f7b4 = DAT_1002f7b4 | 0x300;
          if (DAT_1002f79c == 0) {
            DAT_1002f79c = iVar2;
          }
        }
      }
      else if ((((DAT_1002f7a8 == 0) && (DAT_1002f7a4 != 0)) &&
               (iVar3 = FUN_10012750(DAT_1002f7ac,(char *)local_7c,DAT_1002f7a4), iVar3 == 0)) &&
              ((iVar3 = FUN_100107d0(iVar2,0), iVar3 != 0 &&
               (DAT_1002f7b4 = DAT_1002f7b4 | 0x100, DAT_1002f79c == 0)))) {
        DAT_1002f79c = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_1002f7b4 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_10010410 @ 0x10010410

void FUN_10010410(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_1002f7ac);
  DAT_1002f7a8 = (uint)(sVar1 == 3);
  if (DAT_1002f7a8 == 0) {
    local_8 = _GetPrimaryLen(DAT_1002f7ac);
  }
  else {
    local_8 = 2;
  }
  DAT_1002f7a4 = local_8;
  EnumSystemLocalesA(FUN_10010490,1);
  if ((DAT_1002f7b4 & 4) == 0) {
    DAT_1002f7b4 = 0;
  }
  return;
}



// Function: FUN_10010490 @ 0x10010490

bool FUN_10010490(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_7c [120];
  
  iVar2 = FUN_10010a40(param_1);
  iVar3 = (*DAT_1002f7bc)(iVar2,(-(uint)(DAT_1002f7a8 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_1002f7b4 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_10012680(DAT_1002f7ac,local_7c);
    if (uVar4 == 0) {
      if ((DAT_1002f7a8 != 0) || (iVar3 = FUN_100107d0(iVar2,1), iVar3 != 0)) {
        DAT_1002f7b4 = DAT_1002f7b4 | 4;
        DAT_1002f79c = iVar2;
        DAT_1002f7b8 = iVar2;
      }
    }
    else if ((((DAT_1002f7a8 == 0) && (DAT_1002f7a4 != 0)) &&
             (iVar3 = FUN_10012750(DAT_1002f7ac,(char *)local_7c,DAT_1002f7a4), iVar3 == 0)) &&
            (iVar3 = FUN_100107d0(iVar2,0), iVar3 != 0)) {
      DAT_1002f7b4 = DAT_1002f7b4 | 4;
      DAT_1002f79c = iVar2;
      DAT_1002f7b8 = iVar2;
    }
    cVar1 = '\x01' - ((DAT_1002f7b4 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_100105b0 @ 0x100105b0

void FUN_100105b0(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_1002f7b0);
  DAT_1002f7a0 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_10010600,1);
  if ((DAT_1002f7b4 & 4) == 0) {
    DAT_1002f7b4 = 0;
  }
  return;
}



// Function: FUN_10010600 @ 0x10010600

bool FUN_10010600(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_7c [120];
  
  iVar2 = FUN_10010a40(param_1);
  iVar3 = (*DAT_1002f7bc)(iVar2,(-(uint)(DAT_1002f7a0 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_1002f7b4 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_10012680(DAT_1002f7b0,local_7c);
    if (uVar4 == 0) {
      iVar3 = FUN_10010780((short)iVar2);
      if (iVar3 != 0) {
        DAT_1002f7b4 = DAT_1002f7b4 | 4;
        DAT_1002f79c = iVar2;
        DAT_1002f7b8 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_1002f7b4 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_100106b0 @ 0x100106b0

void FUN_100106b0(void)

{
  DAT_1002f7b4 = DAT_1002f7b4 | 0x104;
  DAT_1002f7b8 = GetUserDefaultLCID();
  DAT_1002f79c = DAT_1002f7b8;
  return;
}



// Function: FUN_100106e0 @ 0x100106e0

int __cdecl FUN_100106e0(byte *param_1)

{
  int iVar1;
  byte local_c [8];
  
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    iVar1 = (*DAT_1002f7bc)(DAT_1002f7b8,0x1004,local_c,8);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = local_c;
  }
  else {
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 == 0) {
      iVar1 = (*DAT_1002f7bc)(DAT_1002f7b8,0xb,local_c,8);
      if (iVar1 == 0) {
        return 0;
      }
      param_1 = local_c;
    }
  }
  iVar1 = FUN_10012860(param_1);
  return iVar1;
}



// Function: FUN_10010780 @ 0x10010780

undefined4 __cdecl FUN_10010780(short param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_1002e9c4 + local_c * 2)) break;
    local_c = local_c + 1;
  }
  return 0;
}



// Function: FUN_100107d0 @ 0x100107d0

undefined4 __cdecl FUN_100107d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  char local_80 [120];
  uint local_8;
  
  local_8 = (uint)((ushort)param_1 & 0x3ff | 0x400);
  iVar1 = (*DAT_1002f7bc)(local_8,1,local_80,0x78);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_10010a40(local_80);
    if ((param_1 != iVar1) && (param_2 != 0)) {
      sVar3 = _GetPrimaryLen(DAT_1002f7ac);
      sVar4 = _strlen(DAT_1002f7ac);
      if (sVar3 == sVar4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_10010860 @ 0x10010860

undefined4 FUN_10010860(void)

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



// Function: crtGetLocaleInfoA @ 0x100108b0

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
LAB_10010a18:
      iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = (local_14 + local_8) / 2;
    if (param_1 == *(uint *)(&DAT_1002e520 + iVar1 * 0x2c)) {
      if (param_2 < 0xc) {
        if (param_2 == 0xb) {
          local_c = &DAT_1002e53c + iVar1 * 0x2c;
        }
        else if (param_2 == 1) {
          local_c = &DAT_1002e524 + iVar1 * 0x2c;
        }
        else if (param_2 == 3) {
          local_c = &DAT_1002e530 + iVar1 * 0x2c;
        }
        else if (param_2 == 7) {
          local_c = &DAT_1002e538 + iVar1 * 0x2c;
        }
      }
      else if (param_2 == 0x1001) {
        local_c = (&PTR_s_Spanish___Traditional_Sort_1002e52c)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1002) {
        local_c = (&PTR_s_Spain_1002e534)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1004) {
        local_c = &DAT_1002e544 + iVar1 * 0x2c;
      }
      if ((local_c != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,local_c,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      goto LAB_10010a18;
    }
    if (param_1 < *(uint *)(&DAT_1002e520 + iVar1 * 0x2c)) {
      local_8 = iVar1 + -1;
    }
    else {
      local_14 = iVar1 + 1;
    }
  } while( true );
}



// Function: FUN_10010a40 @ 0x10010a40

int __cdecl FUN_10010a40(char *param_1)

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



// Function: _GetPrimaryLen @ 0x10010ac0

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



// Function: FUN_10010b30 @ 0x10010b30

undefined4 __cdecl FUN_10010b30(uint param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  
  if ((param_1 < DAT_1003103c) &&
     ((*(byte *)((&DAT_10030f00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000d6a0(param_1);
    uVar2 = __close_lk(param_1);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_1000be80();
    *pDVar1 = 9;
    pDVar1 = FUN_1000be90();
    *pDVar1 = 0;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// Function: __close_lk @ 0x10010bb0

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
  
  iVar1 = FUN_1000d520(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000d520(1);
      iVar2 = FUN_1000d520(2);
      if (iVar1 == iVar2) goto LAB_10010c03;
    }
    hObject = (HANDLE)FUN_1000d520(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_10010c15;
    }
  }
LAB_10010c03:
  local_8 = 0;
LAB_10010c15:
  FUN_1000d440(param_1);
  *(undefined1 *)((&DAT_10030f00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// Function: FUN_10010c60 @ 0x10010c60

void __cdecl FUN_10010c60(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_10003070(2,0x1002b7e0,0x30,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_10004a40((void *)param_1[2],2);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



// Function: FUN_10010d00 @ 0x10010d00

undefined1 * FUN_10010d00(void)

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
  
  puVar1 = PTR_PTR_1002ec98;
  local_c = 0;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x1c));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_10003f90((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_10006f60((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_10006f60(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}



// Function: FUN_10010e30 @ 0x10010e30

undefined1 * FUN_10010e30(void)

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
  
  puVar1 = PTR_PTR_1002ec98;
  local_c = 0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x38));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x68));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_10003f90((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_10006f60((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_10006f60(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}



// Function: FUN_10010f60 @ 0x10010f60

undefined4 * FUN_10010f60(void)

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
  
  puVar1 = PTR_PTR_1002ec98;
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
           FUN_10003f90((void *)(sVar3 + local_c + sVar2 + sVar4 + sVar5 + sVar6 + 0xb1));
  if (puVar7 != (undefined4 *)0x0) {
    local_18 = puVar7 + 0x2b;
    FUN_1000a890(puVar7,(undefined4 *)PTR_PTR_1002ec98,0xac);
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      puVar7[local_14] = local_18;
      puVar8 = FUN_10006f60(local_18,*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 7] = local_18;
      puVar8 = FUN_10006f60(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      puVar7[local_14 + 0xe] = local_18;
      puVar8 = FUN_10006f60(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 0x1a] = local_18;
      puVar8 = FUN_10006f60(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    puVar7[0x26] = local_18;
    puVar8 = FUN_10006f60(local_18,*(uint **)(puVar1 + 0x98));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x27] = local_18;
    puVar8 = FUN_10006f60(local_18,*(uint **)(puVar1 + 0x9c));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x28] = local_18;
    puVar8 = FUN_10006f60(local_18,*(uint **)(puVar1 + 0xa0));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x29] = local_18;
    puVar8 = FUN_10006f60(local_18,*(uint **)(puVar1 + 0xa4));
    sVar2 = _strlen((char *)puVar8);
    puVar7[0x2a] = (int)local_18 + sVar2 + 1;
  }
  return puVar7;
}



// Function: FUN_100112d0 @ 0x100112d0

void __cdecl FUN_100112d0(byte *param_1,uint param_2,byte *param_3,int *param_4)

{
  FUN_100112f0(param_1,param_2,param_3,param_4,(undefined *)0x0);
  return;
}



// Function: FUN_100112f0 @ 0x100112f0

int __cdecl FUN_100112f0(byte *param_1,uint param_2,byte *param_3,int *param_4,undefined *param_5)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  undefined *local_14;
  uint local_10;
  int local_c;
  undefined *local_8;
  
  if (param_5 == (undefined *)0x0) {
    local_14 = PTR_PTR_1002ec98;
  }
  else {
    local_14 = param_5;
  }
  local_8 = local_14;
  local_10 = param_2;
  InterlockedIncrement(&DAT_1002f8bc);
  if (DAT_1002f8ac == 0) {
    local_c = 0;
  }
  else {
    InterlockedDecrement(&DAT_1002f8bc);
    FUN_100079b0(0x13);
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
      DAT_1002f898 = (uint)bVar3;
      FUN_10011480(*param_3,param_4,(int *)&param_1,&local_10,(int)local_8);
    }
    else {
      if (((*(ushort *)(PTR_DAT_1002dc98 + (uint)*param_3 * 2) & 0x8000) != 0) && (1 < local_10)) {
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
    InterlockedDecrement(&DAT_1002f8bc);
  }
  else {
    FUN_10007a50(0x13);
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



// Function: FUN_10011480 @ 0x10011480

void __cdecl FUN_10011480(undefined1 param_1,int *param_2,int *param_3,uint *param_4,int param_5)

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
    DAT_1002f8a8 = DAT_1002f898;
    FUN_10011af0(param_2[2],2,param_3,param_4);
    break;
  case 0x49:
    DAT_1002f8a8 = DAT_1002f898;
    local_8 = param_2[2] % 0xc;
    if (local_8 == 0) {
      local_8 = 0xc;
    }
    FUN_10011af0(local_8,2,param_3,param_4);
    break;
  case 0x4d:
    DAT_1002f8a8 = DAT_1002f898;
    FUN_10011af0(param_2[1],2,param_3,param_4);
    break;
  case 0x53:
    DAT_1002f8a8 = DAT_1002f898;
    FUN_10011af0(*param_2,2,param_3,param_4);
    break;
  case 0x55:
    local_c = param_2[6];
    goto LAB_1001182d;
  case 0x57:
    if (param_2[6] == 0) {
      local_c = 6;
    }
    else {
      local_c = param_2[6] + -1;
    }
LAB_1001182d:
    DAT_1002f8a8 = DAT_1002f898;
    if (param_2[7] < local_c) {
      local_8 = 0;
    }
    else {
      local_8 = param_2[7] / 7;
      if (local_c <= param_2[7] % 7) {
        local_8 = local_8 + 1;
      }
    }
    FUN_10011af0(local_8,2,param_3,param_4);
    break;
  case 0x58:
    DAT_1002f898 = 0;
    FUN_10011c50(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
    break;
  case 0x59:
    DAT_1002f8a8 = DAT_1002f898;
    FUN_10011af0((param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100,4,param_3,param_4);
    break;
  case 0x5a:
  case 0x7a:
    FUN_10012ab0();
    FID_conflict__store_str((&PTR_DAT_1002ee1c)[param_2[8] != 0],param_3,(int *)param_4);
    break;
  case 0x61:
    FID_conflict__store_str(*(char **)(param_5 + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x62:
    FID_conflict__store_str(*(char **)(param_5 + 0x38 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 99:
    if (DAT_1002f898 == 0) {
      FUN_10011c50(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_10011c50(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    else {
      DAT_1002f898 = 0;
      FUN_10011c50(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_10011c50(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    break;
  case 100:
    DAT_1002f8a8 = DAT_1002f898;
    FUN_10011af0(param_2[3],2,param_3,param_4);
    break;
  case 0x6a:
    DAT_1002f8a8 = DAT_1002f898;
    FUN_10011af0(param_2[7] + 1,3,param_3,param_4);
    break;
  case 0x6d:
    DAT_1002f8a8 = DAT_1002f898;
    FUN_10011af0(param_2[4] + 1,2,param_3,param_4);
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
    DAT_1002f8a8 = DAT_1002f898;
    FUN_10011af0(param_2[6],1,param_3,param_4);
    break;
  case 0x78:
    if (DAT_1002f898 == 0) {
      FUN_10011c50(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
    }
    else {
      DAT_1002f898 = 0;
      FUN_10011c50(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
    }
    break;
  case 0x79:
    DAT_1002f8a8 = DAT_1002f898;
    FUN_10011af0(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}



// Function: FID_conflict:_store_str @ 0x10011aa0

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



// Function: FUN_10011af0 @ 0x10011af0

void __cdecl FUN_10011af0(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_1002f8a8 == 0) {
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



// Function: FID_conflict:_store_number @ 0x10011ba0

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



// Function: FUN_10011c50 @ 0x10011c50

void __cdecl FUN_10011c50(byte *param_1,int param_2,int *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  byte *local_14;
  uint local_10;
  char local_c;
  byte *local_8;
  
LAB_10011c56:
  do {
    if ((*param_1 == 0) || (*param_4 == 0)) {
      return;
    }
    local_c = '\0';
    DAT_1002f8a8 = 0;
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
          if ((*param_1 == 0) || (*param_4 == 0)) goto LAB_10011c56;
          if (*param_1 == 0x27) break;
          if (((*(ushort *)(PTR_DAT_1002dc98 + (uint)*param_1 * 2) & 0x8000) != 0) && (1 < *param_4)
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
      goto LAB_10011c56;
    case 0x41:
    case 0x61:
      uVar1 = FUN_10012680(param_1,(byte *)"am/pm");
      if (uVar1 == 0) {
        local_8 = param_1 + 5;
      }
      else {
        uVar1 = FUN_10012680(param_1,&DAT_1002b910);
        if (uVar1 == 0) {
          local_8 = param_1 + 3;
        }
      }
      local_c = 'p';
      break;
    case 0x48:
      if (local_10 == 1) {
        DAT_1002f8a8 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'H';
      break;
    case 0x4d:
      switch(local_10) {
      case 1:
        DAT_1002f8a8 = 1;
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
        DAT_1002f8a8 = 1;
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
        DAT_1002f8a8 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'I';
      break;
    case 0x6d:
      if (local_10 == 1) {
        DAT_1002f8a8 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'M';
      break;
    case 0x73:
      if (local_10 == 1) {
        DAT_1002f8a8 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'S';
      break;
    case 0x74:
      goto switchD_10011ce1_caseD_74;
    case 0x79:
      if (local_10 == 2) {
        local_c = 'y';
      }
      else if (local_10 == 4) {
        local_c = 'Y';
      }
    }
    if (local_c == '\0') {
      if ((*(ushort *)(PTR_DAT_1002dc98 + (uint)*param_1 * 2) & 0x8000) != 0) {
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
      FUN_10011480(local_c,(int *)param_2,param_3,param_4,param_5);
      param_1 = local_8;
    }
  } while( true );
switchD_10011ce1_caseD_74:
  if (*(int *)(param_2 + 8) < 0xc) {
    local_14 = *(byte **)(param_5 + 0x98);
  }
  else {
    local_14 = *(byte **)(param_5 + 0x9c);
  }
  while ((param_1 = local_8, 0 < (int)local_10 && (*param_4 != 0))) {
    if (((*(ushort *)(PTR_DAT_1002dc98 + (uint)*local_14 * 2) & 0x8000) != 0) && (1 < *param_4)) {
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
  goto LAB_10011c56;
}



// Function: FUN_10012170 @ 0x10012170

undefined4 __cdecl FUN_10012170(int param_1,LCID param_2,LCTYPE param_3,int *param_4)

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
    iVar4 = FUN_100133f0(param_2,param_3,(LPWSTR)&DAT_1002f7c0,4,0);
    if (iVar4 != 0) {
      *(undefined1 *)param_4 = 0;
      local_a4 = 0;
      while( true ) {
        if (3 < local_a4) {
          return 0;
        }
        if (DAT_1002dea4 < 2) {
          bVar1 = (&DAT_1002f7c0)[local_a4 * 2];
          local_ac = *(ushort *)(PTR_DAT_1002dc98 + (uint)bVar1 * 2) & 4;
        }
        else {
          bVar1 = (&DAT_1002f7c0)[local_a4 * 2];
          local_ac = FUN_10009fc0((uint)bVar1,4);
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
  local_c = (void *)FUN_10013590(param_2,param_3,local_10,0x80,0);
  if (local_c == (void *)0x0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) ||
        (pvVar3 = (void *)FUN_10013590(param_2,param_3,(LPSTR)0x0,0,0), pvVar3 == (void *)0x0)) ||
       (local_10 = (LPSTR)FUN_10003fb0(pvVar3,2,0x1002b91c,0x58), local_10 == (LPSTR)0x0))
    goto LAB_100122bd;
    local_8 = 1;
    local_c = (void *)FUN_10013590(param_2,param_3,local_10,(int)pvVar3,0);
    if (local_c == (void *)0x0) goto LAB_100122bd;
  }
  iVar4 = FUN_10003fb0(local_c,2,0x1002b91c,99);
  *param_4 = iVar4;
  if (*param_4 != 0) {
    _strncpy((char *)*param_4,local_10,(size_t)local_c);
    if (local_8 != 0) {
      FUN_10004a40(local_10,2);
    }
    return 0;
  }
LAB_100122bd:
  if (local_8 != 0) {
    FUN_10004a40(local_10,2);
  }
  return 0xffffffff;
}



// Function: FUN_10012400 @ 0x10012400

undefined * FUN_10012400(void)

{
  return PTR_PTR_1002ed88;
}



// Function: FUN_10012410 @ 0x10012410

BOOL __cdecl
FUN_10012410(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

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
  puStack_c = &DAT_1002b928;
  puStack_10 = &LAB_1000d0b8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffbc;
  if (DAT_1002f7cc == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1002f7cc = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_1002f7cc = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_1002f7cc == 1) {
    BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_1002f7cc == 2) {
    if (param_5 == 0) {
      param_5 = DAT_1002f740;
    }
    _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (_Size == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_10007150();
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
          FUN_10007150();
          local_8 = 0xffffffff;
          if (&stack0x00000000 == (undefined1 *)0x44) {
            BVar2 = 0;
          }
          else {
            if (param_6 == 0) {
              param_6 = DAT_1002f730;
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
              FUN_1000bea0((undefined4 *)param_4,(undefined4 *)&stack0xffffffbc,param_3 << 1);
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



// Function: FUN_10012680 @ 0x10012680

uint __cdecl FUN_10012680(byte *param_1,byte *param_2)

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
  
  iVar2 = DAT_1002f8bc;
  if (DAT_1002f730 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_100126ce;
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
LAB_100126ce:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    DAT_1002f8bc = DAT_1002f8bc + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1002f8ac;
    if (bVar1) {
      LOCK();
      UNLOCK();
      DAT_1002f8bc = iVar2;
      FUN_100079b0(0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1001272f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_100137f0(uVar8);
      uVar7 = FUN_100137f0(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1001272f:
    if (uVar9 == 0) {
      LOCK();
      DAT_1002f8bc = DAT_1002f8bc + -1;
      UNLOCK();
    }
    else {
      FUN_10007a50(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_10012750 @ 0x10012750

undefined4 __cdecl FUN_10012750(byte *param_1,char *param_2,int param_3)

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
  
  iVar2 = DAT_1002f8bc;
  uVar6 = 0;
  if (param_3 != 0) {
    if (DAT_1002f730 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_100127af;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_100127af:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      DAT_1002f8bc = DAT_1002f8bc + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1002f8ac;
      if (bVar8) {
        LOCK();
        UNLOCK();
        DAT_1002f8bc = iVar2;
        FUN_100079b0(0x13);
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
        uVar7 = FUN_100137f0(uVar7);
        uVar5 = FUN_100137f0(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10012825;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10012825:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        DAT_1002f8bc = DAT_1002f8bc + -1;
        UNLOCK();
      }
      else {
        FUN_10007a50(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_10012860 @ 0x10012860

int __cdecl FUN_10012860(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_c;
  uint local_8;
  
  while( true ) {
    if (DAT_1002dea4 < 2) {
      local_14 = *(ushort *)(PTR_DAT_1002dc98 + (uint)*param_1 * 2) & 8;
    }
    else {
      local_14 = FUN_10009fc0((uint)*param_1,8);
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
    if (DAT_1002dea4 < 2) {
      local_18 = *(ushort *)(PTR_DAT_1002dc98 + local_8 * 2) & 4;
    }
    else {
      local_18 = FUN_10009fc0(local_8,4);
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



// Function: FUN_10012960 @ 0x10012960

void __cdecl FUN_10012960(byte *param_1)

{
  FUN_10012860(param_1);
  return;
}



// Function: FUN_10012980 @ 0x10012980

undefined8 __cdecl FUN_10012980(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  uint local_1c;
  uint local_18;
  undefined8 local_10;
  uint local_8;
  
  while( true ) {
    if (DAT_1002dea4 < 2) {
      local_18 = *(ushort *)(PTR_DAT_1002dc98 + (uint)*param_1 * 2) & 8;
    }
    else {
      local_18 = FUN_10009fc0((uint)*param_1,8);
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
    if (DAT_1002dea4 < 2) {
      local_1c = *(ushort *)(PTR_DAT_1002dc98 + local_8 * 2) & 4;
    }
    else {
      local_1c = FUN_10009fc0(local_8,4);
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



// Function: FUN_10012ab0 @ 0x10012ab0

void FUN_10012ab0(void)

{
  if (DAT_1002f888 == 0) {
    FUN_100079b0(0xb);
    if (DAT_1002f888 == 0) {
      FUN_10012b10();
      DAT_1002f888 = DAT_1002f888 + 1;
    }
    FUN_10007a50(0xb);
  }
  return;
}



// Function: FUN_10012af0 @ 0x10012af0

void FUN_10012af0(void)

{
  FUN_100079b0(0xb);
  FUN_10012b10();
  FUN_10007a50(0xb);
  return;
}



// Function: FUN_10012b10 @ 0x10012b10

void FUN_10012b10(void)

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
  FUN_100079b0(0xc);
  DAT_1002f7d0 = 0;
  DAT_1002ee38 = 0xffffffff;
  DAT_1002ee28 = 0xffffffff;
  _Str1 = (uint *)FID_conflict___getenv_lk("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_10007a50(0xc);
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1002f7d8);
    if (DVar1 != 0xffffffff) {
      DAT_1002f7d0 = 1;
      DAT_1002ed90 = DAT_1002f7d8 * 0x3c;
      if (DAT_1002f81e != 0) {
        DAT_1002ed90 = DAT_1002ed90 + DAT_1002f82c * 0x3c;
      }
      if ((DAT_1002f872 == 0) || (DAT_1002f880 == 0)) {
        DAT_1002ed94 = 0;
        DAT_1002ed98 = 0;
      }
      else {
        DAT_1002ed94 = 1;
        DAT_1002ed98 = (DAT_1002f880 - DAT_1002f82c) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(DAT_1002f740,0x220,(LPCWSTR)&DAT_1002f7dc,-1,PTR_DAT_1002ee1c,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_1002ee1c = 0;
      }
      else {
        PTR_DAT_1002ee1c[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(DAT_1002f740,0x220,(LPCWSTR)&DAT_1002f830,-1,PTR_DAT_1002ee20,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_1002ee20 = 0;
      }
      else {
        PTR_DAT_1002ee20[0x3f] = 0;
      }
    }
  }
  else if (((char)*_Str1 == '\0') ||
          ((DAT_1002f884 != (uint *)0x0 &&
           (iVar2 = _strcmp((char *)_Str1,(char *)DAT_1002f884), iVar2 == 0)))) {
    FUN_10007a50(0xc);
  }
  else {
    FUN_10004a40(DAT_1002f884,2);
    iVar2 = 0x10c;
    pcVar5 = "tzset.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)_Str1);
    DAT_1002f884 = (uint *)FUN_10003fb0((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar2);
    if (DAT_1002f884 == (uint *)0x0) {
      FUN_10007a50(0xc);
    }
    else {
      FUN_10006f60(DAT_1002f884,_Str1);
      FUN_10007a50(0xc);
      _strncpy(PTR_DAT_1002ee1c,(char *)_Str1,3);
      PTR_DAT_1002ee1c[3] = 0;
      local_10 = (uint *)((int)_Str1 + 3);
      if (*(char *)local_10 == '-') {
        local_8 = local_8 + 1;
        local_10 = _Str1 + 1;
      }
      iVar2 = FUN_10012860((byte *)local_10);
      DAT_1002ed90 = iVar2 * 0xe10;
      for (; ((char)*local_10 == '+' || (('/' < (char)*local_10 && ((char)*local_10 < ':'))));
          local_10 = (uint *)((int)local_10 + 1)) {
      }
      if ((char)*local_10 == ':') {
        local_10 = (uint *)((int)local_10 + 1);
        iVar2 = FUN_10012860((byte *)local_10);
        DAT_1002ed90 = DAT_1002ed90 + iVar2 * 0x3c;
        for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
            local_10 = (uint *)((int)local_10 + 1)) {
        }
        if ((char)*local_10 == ':') {
          local_10 = (uint *)((int)local_10 + 1);
          iVar2 = FUN_10012860((byte *)local_10);
          DAT_1002ed90 = DAT_1002ed90 + iVar2;
          for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
              local_10 = (uint *)((int)local_10 + 1)) {
          }
        }
      }
      if (local_8 != 0) {
        DAT_1002ed90 = -DAT_1002ed90;
      }
      DAT_1002ed94 = (int)(char)*local_10;
      if (DAT_1002ed94 == 0) {
        *PTR_DAT_1002ee20 = 0;
      }
      else {
        _strncpy(PTR_DAT_1002ee20,(char *)local_10,3);
        PTR_DAT_1002ee20[3] = 0;
      }
    }
  }
  return;
}



// Function: FUN_10012ec0 @ 0x10012ec0

undefined4 __cdecl FUN_10012ec0(int *param_1)

{
  undefined4 uVar1;
  
  FUN_100079b0(0xb);
  uVar1 = FUN_10012ef0(param_1);
  FUN_10007a50(0xb);
  return uVar1;
}



// Function: FUN_10012ef0 @ 0x10012ef0

undefined4 __cdecl FUN_10012ef0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_1002ed94 == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_1002ee28) || (param_1[5] != DAT_1002ee38)) {
    if (DAT_1002f7d0 == 0) {
      FUN_100131f0(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_100131f0(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_1002f870 == 0) {
        FUN_100131f0(1,1,param_1[5],(uint)DAT_1002f872,(uint)DAT_1002f876,(uint)DAT_1002f874,0,
                     (uint)DAT_1002f878,(uint)DAT_1002f87a,(uint)DAT_1002f87c,(uint)DAT_1002f87e);
      }
      else {
        FUN_100131f0(1,0,param_1[5],(uint)DAT_1002f872,0,0,(uint)DAT_1002f876,(uint)DAT_1002f878,
                     (uint)DAT_1002f87a,(uint)DAT_1002f87c,(uint)DAT_1002f87e);
      }
      if (DAT_1002f81c == 0) {
        FUN_100131f0(0,1,param_1[5],(uint)DAT_1002f81e,(uint)DAT_1002f822,(uint)DAT_1002f820,0,
                     (uint)DAT_1002f824,(uint)DAT_1002f826,(uint)DAT_1002f828,(uint)DAT_1002f82a);
      }
      else {
        FUN_100131f0(0,0,param_1[5],(uint)DAT_1002f81e,0,0,(uint)DAT_1002f822,(uint)DAT_1002f824,
                     (uint)DAT_1002f826,(uint)DAT_1002f828,(uint)DAT_1002f82a);
      }
    }
  }
  if (DAT_1002ee2c < DAT_1002ee3c) {
    if ((param_1[7] < DAT_1002ee2c) || (DAT_1002ee3c < param_1[7])) {
      return 0;
    }
    if ((DAT_1002ee2c < param_1[7]) && (param_1[7] < DAT_1002ee3c)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_1002ee3c) || (DAT_1002ee2c < param_1[7])) {
      return 1;
    }
    if ((DAT_1002ee3c < param_1[7]) && (param_1[7] < DAT_1002ee2c)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_1002ee2c) {
    if (iVar2 < DAT_1002ee30) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_1002ee40) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_100131f0 @ 0x100131f0

void __cdecl
FUN_100131f0(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      local_10 = *(int *)(&DAT_1002ee4c + param_4 * 4);
    }
    else {
      local_10 = *(int *)(&DAT_1002ee80 + param_4 * 4);
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
        local_14 = *(int *)(&DAT_1002ee50 + param_4 * 4);
      }
      else {
        local_14 = *(int *)(&DAT_1002ee84 + param_4 * 4);
      }
      if (local_14 < local_c) {
        local_c = local_c + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      local_18 = *(int *)(&DAT_1002ee4c + param_4 * 4);
    }
    else {
      local_18 = *(int *)(&DAT_1002ee80 + param_4 * 4);
    }
    local_c = local_18 + param_7;
  }
  if (param_1 == 1) {
    DAT_1002ee2c = local_c;
    DAT_1002ee30 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    DAT_1002ee28 = param_3;
  }
  else {
    DAT_1002ee3c = local_c;
    DAT_1002ee40 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000 +
                   DAT_1002ed98 * 1000;
    if (DAT_1002ee40 < 0) {
      DAT_1002ee40 = DAT_1002ee40 + 86400000;
      DAT_1002ee3c = local_c + -1;
    }
    else if (86399999 < DAT_1002ee40) {
      DAT_1002ee40 = DAT_1002ee40 + -86400000;
      DAT_1002ee3c = local_c + 1;
    }
    DAT_1002ee38 = param_3;
  }
  return;
}



// Function: FUN_100133f0 @ 0x100133f0

int __cdecl FUN_100133f0(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002b990;
  puStack_10 = &LAB_1000d0b8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1002f88c == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1002f88c = 2;
    }
    else {
      DAT_1002f88c = 1;
    }
  }
  if (DAT_1002f88c == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_1002f88c == 2) {
    if (param_5 == 0) {
      param_5 = DAT_1002f740;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10007150();
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



// Function: FUN_10013590 @ 0x10013590

int __cdecl FUN_10013590(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1002b9a0;
  puStack_10 = &LAB_1000d0b8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1002f890 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1002f890 = 2;
    }
    else {
      DAT_1002f890 = 1;
    }
  }
  if (DAT_1002f890 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  }
  else if (DAT_1002f890 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_1002f740;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10007150();
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



// Function: FUN_10013740 @ 0x10013740

int __cdecl FUN_10013740(int param_1)

{
  return param_1 + 0x20;
}



// Function: FUN_10013750 @ 0x10013750

uint __cdecl FUN_10013750(uint param_1)

{
  bool bVar1;
  
  if (DAT_1002f730 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_1002f8bc);
    bVar1 = DAT_1002f8ac == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_1002f8bc);
      FUN_100079b0(0x13);
    }
    param_1 = FUN_100137f0(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_1002f8bc);
    }
    else {
      FUN_10007a50(0x13);
    }
  }
  return param_1;
}



// Function: FUN_100137f0 @ 0x100137f0

uint __cdecl FUN_100137f0(uint param_1)

{
  int iVar1;
  uint local_14;
  uint local_10;
  char local_c;
  char local_b;
  undefined1 local_a;
  int local_8;
  
  if (DAT_1002f730 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_1002dea4 < 2) {
        local_14 = *(ushort *)(PTR_DAT_1002dc98 + param_1 * 2) & 1;
      }
      else {
        local_14 = FUN_10009fc0(param_1,1);
      }
      if (local_14 == 0) {
        return param_1;
      }
    }
    if ((*(ushort *)(PTR_DAT_1002dc98 + ((int)param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
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
    iVar1 = FUN_1000c3a0(DAT_1002f730,0x100,&local_c,local_8,(LPWSTR)&local_10,3,0,1);
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



// Function: __allmul @ 0x10013920

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



// Function: FUN_10013960 @ 0x10013960

char * __cdecl FUN_10013960(char *param_1)

{
  char *pcVar1;
  
  FUN_100079b0(0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_10007a50(0xc);
  return pcVar1;
}



// Function: FID_conflict:__getenv_lk @ 0x10013990

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
  
  local_c = DAT_1002f550;
  if (DAT_10031040 != 0) {
    if ((DAT_1002f550 == (int *)0x0) && (DAT_1002f558 != 0)) {
      iVar1 = FUN_10013ab0();
      if (iVar1 != 0) {
        return (char *)0x0;
      }
      local_c = DAT_1002f550;
    }
    DAT_1002f550 = local_c;
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



// Function: __mbsnbicoll @ 0x10013a60

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
    iVar1 = FUN_10013b60(DAT_10030ea4,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_10030c04);
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}



// Function: FUN_10013ab0 @ 0x10013ab0

undefined4 FUN_10013ab0(void)

{
  void *cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  int *local_8;
  
  local_8 = DAT_1002f558;
  while( true ) {
    if (*local_8 == 0) {
      return 0;
    }
    cbMultiByte = (void *)WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                              (LPBOOL)0x0);
    if (cbMultiByte == (void *)0x0) {
      return 0xffffffff;
    }
    lpMultiByteStr = (uint *)FUN_10003fb0(cbMultiByte,2,0x1002b9ac,0x3d);
    if (lpMultiByteStr == (uint *)0x0) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)lpMultiByteStr,(int)cbMultiByte,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    FUN_10013fb0(lpMultiByteStr,0);
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_10013b60 @ 0x10013b60

int __cdecl
FUN_10013b60(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
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
  puStack_c = &DAT_1002ba00;
  puStack_10 = &LAB_1000d0b8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  ExceptionList = &local_14;
  puVar2 = &stack0xffffffa8;
  if (DAT_1002f894 == 0) {
    ExceptionList = &local_14;
    iVar3 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar3 == 0) {
      iVar3 = CompareStringA(0,0,"",1,"",1);
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1002f894 = 2;
      puVar2 = local_1c;
    }
    else {
      DAT_1002f894 = 1;
      puVar2 = local_1c;
    }
  }
  local_1c = puVar2;
  if (0 < param_4) {
    param_4 = FUN_10013f60((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_10013f60((char *)param_5,param_6);
  }
  if (DAT_1002f894 == 2) {
    iVar3 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
  }
  else if (DAT_1002f894 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1002f740;
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
         (iVar3 = FUN_10003070(2,0x1002b9b8,0xb6,0,
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
      FUN_10007150();
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
            FUN_10007150();
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



// Function: FUN_10013f60 @ 0x10013f60

int __cdecl FUN_10013f60(char *param_1,int param_2)

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



// Function: FUN_10013fb0 @ 0x10013fb0

undefined4 __cdecl FUN_10013fb0(uint *param_1,int param_2)

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
      (puVar1 = (uint *)FUN_10014400((byte *)param_1,0x3d), puVar1 == (uint *)0x0)) ||
     (param_1 == puVar1)) {
    return 0xffffffff;
  }
  bVar6 = *(byte *)((int)puVar1 + 1) == 0;
  if (DAT_1002f550 == DAT_1002f554) {
    DAT_1002f550 = copy_environ(DAT_1002f550);
  }
  if (DAT_1002f550 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_1002f558 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_1002f550 = (int *)FUN_10003fb0((void *)0x4,2,0x1002ba18,0x87);
      if (DAT_1002f550 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_1002f550 = 0;
      if (DAT_1002f558 == (undefined4 *)0x0) {
        DAT_1002f558 = (undefined4 *)FUN_10003fb0((void *)0x4,2,0x1002ba18,0x8e);
        if (DAT_1002f558 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1002f558 = 0;
      }
    }
    else {
      iVar2 = FUN_10013ab0();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_1002f550;
  local_c = findenv((uchar *)param_1,(int)puVar1 - (int)param_1);
  if ((local_c < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (local_c < 0) {
      local_c = -local_c;
    }
    piVar3 = FUN_10004440(piVar3,(void *)(local_c * 4 + 8),2,0x1002ba18,0xce);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[local_c] = (int)param_1;
    piVar3[local_c + 1] = 0;
    DAT_1002f550 = piVar3;
  }
  else if (bVar6) {
    FUN_10004a40((void *)piVar3[local_c],2);
    for (; piVar3[local_c] != 0; local_c = local_c + 1) {
      piVar3[local_c] = piVar3[local_c + 1];
    }
    piVar3 = FUN_10004440(piVar3,(void *)(local_c << 2),2,0x1002ba18,0xb9);
    if (piVar3 != (int *)0x0) {
      DAT_1002f550 = piVar3;
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
    lpName = (uint *)FUN_10003fb0((void *)(sVar4 + 2),uVar7,(int)pcVar8,iVar2);
    if (lpName != (uint *)0x0) {
      FUN_10006f60(lpName,param_1);
      puVar5 = (undefined1 *)((int)lpName + ((int)puVar1 - (int)param_1));
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(puVar5 + 1)));
      FUN_10004a40(lpName,2);
    }
  }
  return 0;
}



// Function: findenv @ 0x10014290

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2003 Debug */

int __cdecl findenv(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = DAT_1002f550;
  while( true ) {
    if (*local_8 == 0) {
      return -((int)local_8 - (int)DAT_1002f550 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*local_8,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*local_8 + param_2) == '=' || (*(char *)(*local_8 + param_2) == '\0')))) break;
    local_8 = local_8 + 1;
  }
  return (int)local_8 - (int)DAT_1002f550 >> 2;
}



// Function: copy_environ @ 0x10014310

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
    piVar1 = (int *)FUN_10003fb0((void *)(local_14 * 4 + 4),2,0x1002ba18,0x146);
    if (piVar1 == (int *)0x0) {
      __amsg_exit(9);
    }
    local_c = piVar1;
    for (local_10 = param_1; *local_10 != 0; local_10 = local_10 + 1) {
      iVar5 = 0x14f;
      pcVar4 = "setenv.c";
      uVar3 = 2;
      sVar2 = _strlen((char *)*local_10);
      iVar5 = FUN_10003fb0((void *)(sVar2 + 1),uVar3,(int)pcVar4,iVar5);
      *local_c = iVar5;
      if (*local_c != 0) {
        FUN_10006f60((uint *)*local_c,(uint *)*local_10);
      }
      local_c = local_c + 1;
    }
    *local_c = 0;
  }
  return piVar1;
}



// Function: FUN_10014400 @ 0x10014400

byte * __cdecl FUN_10014400(byte *param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (DAT_10030c8c == 0) {
    param_1 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_100079b0(0x19);
    while( true ) {
      uVar1 = (ushort)*param_1;
      if (uVar1 == 0) break;
      if (((&DAT_10030da1)[uVar1] & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar1) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (*pbVar2 == 0) {
          FUN_10007a50(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(*param_1,*pbVar2)) {
          FUN_10007a50(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2;
      param_1 = param_1 + 1;
    }
    FUN_10007a50(0x19);
    if (param_2 != uVar1) {
      param_1 = (byte *)0x0;
    }
  }
  return param_1;
}



// Function: _strchr @ 0x10014500

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




// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

undefined4 FUN_10001000(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: FUN_10001020 @ 0x10001020

void __thiscall
FUN_10001020(void *this,char param_1,undefined4 param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,int param_13)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(undefined4 *)((int)this + 0x2a7) = param_2;
  *(undefined4 *)((int)this + 0x28c) = param_10;
  *(undefined4 *)((int)this + 0x2ab) = param_4;
  *(undefined4 *)((int)this + 0x284) = param_8;
  *(undefined4 *)((int)this + 0x288) = param_9;
  *(undefined4 *)((int)this + 0x290) = param_11;
  *(undefined4 *)((int)this + 0x294) = param_12;
  *(undefined4 *)((int)this + 0x280) = param_7;
  *(int *)((int)this + 0x2f1) = param_13 * 0xf;
  *(undefined1 *)((int)this + 0x2e8) = (undefined1)param_5;
  uVar2 = 0xffffffff;
  *(undefined1 *)((int)this + 0x2f5) = 1;
  *(int *)((int)this + 0x2e9) = param_6;
  *(undefined4 *)((int)this + 0x2fa) = 1;
  *(undefined1 *)((int)this + 0x2fe) = 1;
  do {
    pcVar4 = param_3;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)this + 0x298);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(char *)((int)this + 0x2af) = param_1;
  *(undefined4 *)((int)this + 700) = 300;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  if (param_1 != '\0') {
    return;
  }
  if (((param_6 == 0) || (param_6 == 1)) || (param_6 == 2)) {
    RegisterDynGroup((int)this + 0x2b0);
    CreateObject0(&DAT_1000d350,&DAT_1000d6b8,&DAT_1000d330,param_5,param_4,0);
    RemoveGroup(&DAT_1000d350,(int)this + 0x2b0);
  }
  if (param_6 == 0) {
    TakeWood((int)this + 0x2b0);
  }
  else if (param_6 != 1) {
    if (param_6 != 2) {
      *(undefined4 *)((int)this + 0x2ed) = 0xf;
      return;
    }
    goto LAB_1000119e;
  }
  TakeFood((int)this + 0x2b0);
LAB_1000119e:
  TakeStone((int)this + 0x2b0);
  *(undefined4 *)((int)this + 0x2ed) = 0xf;
  return;
}



// Function: FUN_100011c0 @ 0x100011c0

void __thiscall
FUN_100011c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)((int)this + 0x284) = param_3;
  *(undefined4 *)((int)this + 0x288) = param_4;
  *(undefined4 *)((int)this + 0x28c) = param_5;
  *(undefined4 *)((int)this + 0x290) = param_6;
  *(undefined4 *)((int)this + 0x294) = param_7;
  *(undefined4 *)((int)this + 0x280) = param_2;
  *(undefined4 *)((int)this + 0x2ab) = param_1;
  return;
}



// Function: FUN_10001210 @ 0x10001210

void __fastcall FUN_10001210(int param_1)

{
  if (*(char *)(param_1 + 0x2af) == '\0') {
    FUN_100012e0(param_1);
    FUN_100013e0(param_1);
  }
  return;
}



// Function: FUN_10001230 @ 0x10001230

void __fastcall FUN_10001230(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 100;
  *(undefined4 *)(param_1 + 0x2e4) = 300;
  *(undefined4 *)(param_1 + 0x2e0) = 300;
  *(undefined4 *)(param_1 + 0x2d0) = 100;
  *(undefined4 *)(param_1 + 0x2d8) = 100;
  *(undefined4 *)(param_1 + 0x2d4) = 200;
  *(undefined4 *)(param_1 + 0x2dc) = 500;
  iVar2 = 0xc;
  do {
    if (iVar1 < *(int *)(param_1 + 0x2b8)) {
      *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + -8;
    }
    if (iVar1 < *(int *)(param_1 + 0x2c0)) {
      *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + -8;
    }
    if (iVar1 < *(int *)(param_1 + 700)) {
      *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + -0x10;
    }
    if (iVar1 < *(int *)(param_1 + 0x2c8)) {
      *(int *)(param_1 + 0x2e0) = *(int *)(param_1 + 0x2e0) + -0x18;
    }
    if (iVar1 < *(int *)(param_1 + 0x2cc)) {
      *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + -0x18;
    }
    if (iVar1 < *(int *)(param_1 + 0x2c4)) {
      *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + -0x28;
    }
    iVar1 = iVar1 * 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// Function: FUN_100012e0 @ 0x100012e0

void __fastcall FUN_100012e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100014c0(param_1);
  iVar2 = 0;
  *(int *)(param_1 + 0x2ed) = iVar1;
  if (0 < iVar1) {
    do {
      if (*(char *)(param_1 + 0x2f5) == '\0') break;
      if ((0 < *(int *)(param_1 + 0x2f6)) && (4 < *(int *)(param_1 + 700))) {
        switch(*(undefined4 *)(param_1 + 0x2e9)) {
        case 0:
          *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 0x19;
          break;
        case 1:
          *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 0x14;
          break;
        case 2:
          *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 0x19;
          break;
        case 3:
          *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 5;
          break;
        case 4:
          *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0xf;
          break;
        case 5:
          *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2cc) + 0xf;
        }
        *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + -5;
        *(int *)(param_1 + 0x2f6) = *(int *)(param_1 + 0x2f6) + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(int *)(param_1 + 0x2f6) = *(int *)(param_1 + 0x2f6) + (3 - *(int *)(param_1 + 0x2fa)) * iVar1;
  AddResource(*(char *)(param_1 + 0x2e8) + -1,1,*(int *)(param_1 + 0x2fa) * iVar1);
  FUN_10001230(param_1);
  return;
}



// Function: FUN_100013e0 @ 0x100013e0

void __fastcall FUN_100013e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2f6) < 0x3e9) {
    return;
  }
  iVar1 = FUN_100014c0(param_1);
  if (*(int *)(param_1 + 0x2f1) <= iVar1) {
    return;
  }
  iVar1 = FUN_100014c0(param_1);
  *(int *)(param_1 + 0x2ed) = iVar1;
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) goto LAB_1000149f;
  CreateObject0(&DAT_1000d350,&DAT_1000d2f8,&DAT_1000d330,*(undefined1 *)(param_1 + 0x2e8),
                *(undefined4 *)(param_1 + 0x2ab),0);
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (iVar1 == 0) {
    TakeWood(&DAT_1000d350);
LAB_1000146e:
    TakeFood(&DAT_1000d350);
LAB_1000147c:
    TakeStone(&DAT_1000d350);
  }
  else {
    if (iVar1 == 1) goto LAB_1000146e;
    if (iVar1 == 2) goto LAB_1000147c;
  }
  RemoveGroup(&DAT_1000d350,param_1 + 0x2b0);
LAB_1000149f:
  *(int *)(param_1 + 0x2f6) = *(int *)(param_1 + 0x2f6) + -1000;
  *(int *)(param_1 + 0x2ed) = *(int *)(param_1 + 0x2ed) + 1;
  return;
}



// Function: FUN_100014c0 @ 0x100014c0

int __fastcall FUN_100014c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    iVar1 = GetTotalAmount0(param_1 + 0x2b0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2ed);
    if (*(int *)(param_1 + 0x2f1) <= iVar1) {
      return *(int *)(param_1 + 0x2f1);
    }
  }
  return iVar1;
}



// Function: FUN_10001500 @ 0x10001500

void __thiscall FUN_10001500(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)this + 0x2af) == '\0') {
    if ((*(char *)((int)this + 0x2fe) != '\0') &&
       (iVar1 = GetUnitsAmount2(*(undefined4 *)((int)this + 0x2ab),&DAT_1000d680,param_1),
       iVar1 != 0)) {
      uVar2 = AskMultilineQuestion(9,s__PAGE1_1000a048,0,s_VI1_1_VI1_2_VI1_3_VI1_4_1000a050);
      switch(uVar2) {
      case 0:
        FUN_100015e0((int)this);
        *(undefined1 *)((int)this + 0x2fe) = 1;
        break;
      case 1:
        uVar2 = FUN_10001680((int)this);
        *(char *)((int)this + 0x2fe) = (char)uVar2;
        break;
      case 2:
        uVar2 = FUN_100016b0(this);
        *(char *)((int)this + 0x2fe) = (char)uVar2;
        break;
      case 3:
        *(undefined1 *)((int)this + 0x2fe) = 0;
      }
    }
    if ((*(char *)((int)this + 0x2fe) == '\0') &&
       (iVar1 = GetUnitsAmount2(*(undefined4 *)((int)this + 0x2ab),&DAT_1000d680,param_1),
       iVar1 == 0)) {
      *(undefined1 *)((int)this + 0x2fe) = 1;
    }
  }
  return;
}



// Function: FUN_100015e0 @ 0x100015e0

void __fastcall FUN_100015e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100014c0(param_1);
  ShowPageParam(s__PAGE11_1000a068,param_1 + 0x298,
                (int)&DAT_1000d6c8 + *(int *)(param_1 + 0x2e9) * 0xf,&DAT_1000d6c8,
                *(undefined4 *)(param_1 + 0x2b8),&DAT_1000d6d7,*(undefined4 *)(param_1 + 700),
                &DAT_1000d6e6,*(undefined4 *)(param_1 + 0x2c0),&DAT_1000d6f5,
                *(undefined4 *)(param_1 + 0x2c4),&DAT_1000d704,*(undefined4 *)(param_1 + 0x2c8),
                &DAT_1000d713,*(undefined4 *)(param_1 + 0x2cc),
                (3 - *(int *)(param_1 + 0x2fa)) * iVar1,*(int *)(param_1 + 0x2fa) * iVar1,iVar1,
                *(undefined4 *)(param_1 + 0x2f6),iVar1);
  return;
}



// Function: FUN_10001680 @ 0x10001680

undefined4 __fastcall FUN_10001680(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = AskMultilineQuestion(9,s__PAGE12_1000a070,0,s_TPW1_0_TPW1_1_TPW1_2_TPW1_3_1000a078);
  *(undefined4 *)(param_1 + 0x2fa) = uVar1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



// Function: FUN_100016b0 @ 0x100016b0

undefined4 __fastcall FUN_100016b0(void *param_1)

{
  int iVar1;
  
  do {
    while( true ) {
      while (iVar1 = AskMultilineQuestion(9,s__PAGE13_1000a094,0,s_TR1_1_TR1_3_TR1_4_1000a09c),
            iVar1 == 0) {
        FUN_10001700(param_1);
      }
      if (iVar1 != 1) break;
      FUN_10001830(param_1);
    }
  } while (iVar1 != 2);
  return 1;
}



// Function: FUN_10001700 @ 0x10001700

void __fastcall FUN_10001700(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  
  uVar1 = AskMultilineQuestion(9,s__PAGE5_1000a0c4,0,s_R1_R2_R3_R4_R5_R6_1000a0cc);
  pvVar5 = param_1;
  switch(uVar1) {
  case 0:
    pvVar5 = (void *)0x0;
    break;
  case 1:
    pvVar5 = (void *)0x1;
    break;
  case 2:
    pvVar5 = (void *)0x2;
    break;
  case 3:
    pvVar5 = (void *)0x3;
    break;
  case 4:
    pvVar5 = (void *)0x4;
    break;
  case 5:
    pvVar5 = (void *)0x5;
  }
  uVar1 = AskMultilineQuestion(9,s__PAGE6_1000a0bc,0,s_R1_R2_R3_R4_R5_R6_1000a0cc);
  pvVar4 = param_1;
  switch(uVar1) {
  case 0:
    pvVar4 = (void *)0x0;
    break;
  case 1:
    pvVar4 = (void *)0x1;
    break;
  case 2:
    pvVar4 = (void *)0x2;
    break;
  case 3:
    pvVar4 = (void *)0x3;
    break;
  case 4:
    pvVar4 = (void *)0x4;
    break;
  case 5:
    pvVar4 = (void *)0x5;
  }
  FUN_10001230((int)param_1);
  iVar2 = FUN_10001f50(param_1,pvVar5);
  iVar3 = FUN_10001f50(param_1,pvVar4);
  ShowPageParam(s__PAGE131_1000a0b0,(int)&DAT_1000d6c8 + (int)pvVar5 * 0xf,100,
                (int)&DAT_1000d6c8 + (int)pvVar4 * 0xf,(iVar2 * 100) / iVar3);
  return;
}



// Function: FUN_10001830 @ 0x10001830

void __fastcall FUN_10001830(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar1 = AskMultilineQuestion(9,s__PAGE133_1000a120,0,s_NO1_1_NO1_2_NO1_3_NO1_4_NO1_5_NO_1000a12c);
  iVar2 = AskMultilineQuestion(9,s__PAGE1331_1000a100,0,s_OD1_0_OD1_1_OD1_2_1000a10c);
  if (iVar2 == 0) {
    pvVar3 = (void *)(iVar1 * 0x40 + (int)param_1);
    iVar1 = GetTotalAmount0(pvVar3);
    if (iVar1 != 0) {
      iVar1 = (int)&DAT_1000d6c8 + *(int *)((int)pvVar3 + 0x11) * 0xf;
      iVar2 = (int)&DAT_1000d6c8 + *(int *)((int)pvVar3 + 9) * 0xf;
      ShowPageParam(s__PAGE7_1000a0e8,(int)pvVar3 + 0x29,iVar2,iVar1,iVar2,
                    *(undefined4 *)((int)pvVar3 + 0xd),iVar1,*(undefined4 *)((int)pvVar3 + 0x15));
      return;
    }
    ShowPage(s__PAGE8_1000a0e0);
  }
  else {
    if (iVar2 == 1) {
      pvVar3 = (void *)(iVar1 * 0x40 + (int)param_1);
      iVar2 = GetTotalAmount0(pvVar3);
      if (iVar2 == 0) {
        FUN_100020b0(pvVar3,(char *)((int)param_1 + 0x298),*(undefined4 *)((int)param_1 + 0x2a7),
                     (uint)*(byte *)((int)param_1 + 0x2e8),*(undefined4 *)((int)param_1 + 0x2ab));
      }
      FUN_10001970(param_1,iVar1);
      return;
    }
    if (iVar2 == 2) {
      pvVar3 = (void *)(iVar1 * 0x40 + (int)param_1);
      iVar1 = GetTotalAmount0(pvVar3);
      if (iVar1 != 0) {
        SelectUnits(pvVar3,0);
        SelDie(*(undefined1 *)((int)pvVar3 + 8));
        ShowPage(s__PAGE3_1000a0f8);
        return;
      }
      ShowPage(s__PAGE2_1000a0f0);
      return;
    }
  }
  return;
}



// Function: FUN_10001970 @ 0x10001970

void __thiscall FUN_10001970(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = AskMultilineQuestion(9,s__PAGE4_1000a16c,0,*(undefined4 *)((int)this + 0x280));
  uVar2 = AskMultilineQuestion(9,s__PAGE5_1000a0c4,0,s_R1_R2_R3_R4_R5_R6_1000a0cc);
  iVar4 = param_1;
  switch(uVar2) {
  case 0:
    iVar4 = 0;
    break;
  case 1:
    iVar4 = 1;
    break;
  case 2:
    iVar4 = 2;
    break;
  case 3:
    iVar4 = 3;
    break;
  case 4:
    iVar4 = 4;
    break;
  case 5:
    iVar4 = 5;
  }
  uVar2 = AskMultilineQuestion(9,s__PAGE6_1000a0bc,0,s_R1_R2_R3_R4_R5_R6_1000a0cc);
  iVar3 = param_1;
  switch(uVar2) {
  case 0:
    iVar3 = 0;
    break;
  case 1:
    iVar3 = 1;
    break;
  case 2:
    iVar3 = 2;
    break;
  case 3:
    iVar3 = 3;
    break;
  case 4:
    iVar3 = 4;
    break;
  case 5:
    iVar3 = 5;
  }
  iVar1 = *(int *)((int)this + iVar1 * 4 + 0x284);
  this_00 = (void *)(param_1 * 0x40 + (int)this);
  FUN_10002120(this_00,(char *)(iVar1 + 0x298),*(undefined4 *)(iVar1 + 0x2a7),iVar4,iVar3);
  SelectUnits(this_00,0);
  SelSendTo(*(undefined1 *)((int)this_00 + 8),*(undefined4 *)((int)this + 0x2ab),0,0);
  *(undefined1 *)((int)this_00 + 0x19) = 0;
  return;
}



// Function: FUN_10001ab0 @ 0x10001ab0

uint __fastcall FUN_10001ab0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *piVar6;
  uint uStack_4;
  
  iVar1 = GetUnitsAmount2(*(undefined4 *)((int)param_1 + 0x2ab),&DAT_1000d358,
                          *(undefined1 *)((int)param_1 + 0x2e8));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  pvVar5 = param_1;
  do {
    if (*(char *)((int)pvVar5 + 0x19) == '\0') {
      iVar2 = GetUnitsAmount1(*(undefined4 *)((int)param_1 + 0x2ab),pvVar5);
      if (iVar2 != 0) {
        pvVar5 = (void *)(iVar1 * 0x40 + (int)param_1);
        *(undefined1 *)((int)pvVar5 + 0x19) = 1;
        FUN_10001be0(param_1,(int)pvVar5);
        FUN_10001c20(param_1,(int)pvVar5);
        uVar4 = FUN_10002af0((int)pvVar5,*(int *)((int)pvVar5 + 0x3c));
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
    }
    iVar1 = iVar1 + 1;
    pvVar5 = (void *)((int)pvVar5 + 0x40);
  } while (iVar1 < 10);
  uStack_4 = 0;
  piVar6 = (int *)((int)param_1 + 0x284);
  do {
    if (*piVar6 != 0) {
      iVar1 = 0;
      iVar2 = 0;
      do {
        if (*(char *)(*piVar6 + 0x19 + iVar2) != '\0') {
          iVar3 = GetUnitsAmount1(*(undefined4 *)((int)param_1 + 0x2ab),*piVar6 + iVar2);
          if (iVar3 != 0) {
            iVar1 = iVar1 * 0x40;
            *(undefined1 *)(*(int *)((int)param_1 + uStack_4 * 4 + 0x284) + 0x19 + iVar1) = 0;
            pvVar5 = *(void **)((int)param_1 + uStack_4 * 4 + 0x284);
            FUN_10001c80(param_1,(int)(iVar1 + (int)pvVar5),pvVar5);
            iVar2 = *(int *)((int)param_1 + uStack_4 * 4 + 0x284);
            uVar4 = FUN_10002af0(iVar2 + iVar1,*(int *)(iVar2 + 0x38 + iVar1));
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
        }
        iVar2 = iVar2 + 0x40;
        iVar1 = iVar1 + 1;
      } while (iVar2 < 0x280);
    }
    piVar6 = piVar6 + 1;
    uStack_4 = uStack_4 + 1;
  } while ((int)uStack_4 < 5);
  return uStack_4 & 0xffffff00;
}



// Function: FUN_10001be0 @ 0x10001be0

void __thiscall FUN_10001be0(void *this,int param_1)

{
  FUN_10001fc0(this,*(undefined4 *)(param_1 + 9),*(int *)(param_1 + 0xd));
  FUN_10001fc0(this,*(undefined4 *)(param_1 + 0x11),*(int *)(param_1 + 0x15));
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}



// Function: FUN_10001c20 @ 0x10001c20

void __thiscall FUN_10001c20(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10001ee0(this,*(undefined4 *)(param_1 + 9));
  if (99 < iVar1) {
    *(undefined4 *)(param_1 + 0xd) = 100;
    FUN_10001fc0(this,*(undefined4 *)(param_1 + 9),-100);
    return;
  }
  uVar2 = FUN_10001ee0(this,*(undefined4 *)(param_1 + 9));
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  iVar1 = FUN_10001ee0(this,*(undefined4 *)(param_1 + 9));
  FUN_10001fc0(this,*(undefined4 *)(param_1 + 9),-iVar1);
  return;
}



// Function: FUN_10001c80 @ 0x10001c80

void __thiscall FUN_10001c80(void *this,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)((int)this + 0x2af) == '\0') {
    iVar1 = FUN_10001f50(this,*(undefined4 *)(param_1 + 9));
    iVar1 = iVar1 * *(int *)(param_1 + 0xd);
    iVar2 = FUN_10001f50(this,*(undefined4 *)(param_1 + 0x11));
    iVar3 = FUN_10001ee0(this,*(undefined4 *)(param_1 + 0x11));
    iVar2 = iVar2 * iVar3;
    if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
      FUN_10001fc0(this,*(undefined4 *)(param_1 + 9),*(int *)(param_1 + 0xd));
      *(undefined4 *)(param_1 + 0xd) = 0;
      iVar2 = FUN_10001f50(this,*(undefined4 *)(param_1 + 0x11));
      *(int *)(param_1 + 0x15) = iVar1 / iVar2;
      FUN_10001fc0(this,*(undefined4 *)(param_1 + 0x11),-(iVar1 / iVar2));
      return;
    }
    uVar4 = FUN_10001ee0(this,*(undefined4 *)(param_1 + 0x11));
    *(undefined4 *)(param_1 + 0x15) = uVar4;
    iVar1 = FUN_10001ee0(this,*(undefined4 *)(param_1 + 0x11));
    FUN_10001fc0(this,*(undefined4 *)(param_1 + 0x11),-iVar1);
    iVar1 = FUN_10001f50(this,*(undefined4 *)(param_1 + 9));
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar2 / iVar1;
    iVar1 = FUN_10001f50(this,*(undefined4 *)(param_1 + 9));
    FUN_10001fc0(this,*(undefined4 *)(param_1 + 9),iVar2 / iVar1);
    return;
  }
  iVar1 = FUN_10001f50(param_2,*(undefined4 *)(param_1 + 9));
  iVar1 = iVar1 * *(int *)(param_1 + 0xd);
  iVar2 = FUN_10002090(*(int *)(param_1 + 0x11));
  iVar3 = GetResource(*(char *)((int)this + 0x2e8) + -1,iVar2);
  iVar2 = FUN_10001f50(param_2,*(undefined4 *)(param_1 + 0x11));
  iVar3 = iVar3 * iVar2;
  if (iVar1 <= iVar3) {
    uVar4 = *(undefined4 *)(param_1 + 0xd);
    iVar2 = FUN_10002090(*(int *)(param_1 + 9));
    AddResource(*(char *)((int)this + 0x2e8) + -1,iVar2,uVar4);
    *(undefined4 *)(param_1 + 0xd) = 0;
    iVar2 = FUN_10001f50(param_2,*(undefined4 *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = iVar1 / iVar2;
    iVar1 = FUN_10002090(*(int *)(param_1 + 0x11));
    iVar1 = GetResource(*(char *)((int)this + 0x2e8) + -1,iVar1);
    iVar1 = iVar1 - *(int *)(param_1 + 0x15);
    iVar2 = FUN_10002090(*(int *)(param_1 + 0x11));
    SetResource(*(char *)((int)this + 0x2e8) + -1,iVar2,iVar1);
    return;
  }
  iVar1 = FUN_10002090(*(int *)(param_1 + 0x11));
  uVar4 = GetResource(*(char *)((int)this + 0x2e8) + -1,iVar1);
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  uVar4 = 0;
  iVar1 = FUN_10002090(*(int *)(param_1 + 0x11));
  SetResource(*(char *)((int)this + 0x2e8) + -1,iVar1,uVar4);
  iVar1 = FUN_10001f50(param_2,*(undefined4 *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar3 / iVar1;
  iVar1 = FUN_10001f50(param_2,*(undefined4 *)(param_1 + 9));
  iVar3 = iVar3 / iVar1;
  iVar1 = FUN_10002090(*(int *)(param_1 + 9));
  AddResource(*(char *)((int)this + 0x2e8) + -1,iVar1,iVar3);
  return;
}



// Function: FUN_10001ee0 @ 0x10001ee0

undefined4 __thiscall FUN_10001ee0(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return *(undefined4 *)((int)this + 0x2b8);
  case 1:
    return *(undefined4 *)((int)this + 700);
  case 2:
    return *(undefined4 *)((int)this + 0x2c0);
  case 3:
    return *(undefined4 *)((int)this + 0x2c4);
  case 4:
    return *(undefined4 *)((int)this + 0x2c8);
  case 5:
    return *(undefined4 *)((int)this + 0x2cc);
  default:
    return 0;
  }
}



// Function: FUN_10001f50 @ 0x10001f50

undefined4 __thiscall FUN_10001f50(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return *(undefined4 *)((int)this + 0x2d0);
  case 1:
    return *(undefined4 *)((int)this + 0x2d4);
  case 2:
    return *(undefined4 *)((int)this + 0x2d8);
  case 3:
    return *(undefined4 *)((int)this + 0x2dc);
  case 4:
    return *(undefined4 *)((int)this + 0x2e0);
  case 5:
    return *(undefined4 *)((int)this + 0x2e4);
  default:
    return 0;
  }
}



// Function: FUN_10001fc0 @ 0x10001fc0

void __thiscall FUN_10001fc0(void *this,undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((int)this + 0x2b8) = *(int *)((int)this + 0x2b8) + param_2;
    return;
  case 1:
    *(int *)((int)this + 700) = *(int *)((int)this + 700) + param_2;
    return;
  case 2:
    *(int *)((int)this + 0x2c0) = *(int *)((int)this + 0x2c0) + param_2;
    return;
  case 3:
    *(int *)((int)this + 0x2c4) = *(int *)((int)this + 0x2c4) + param_2;
    return;
  case 4:
    *(int *)((int)this + 0x2c8) = *(int *)((int)this + 0x2c8) + param_2;
    return;
  case 5:
    *(int *)((int)this + 0x2cc) = *(int *)((int)this + 0x2cc) + param_2;
  }
  return;
}



// Function: FUN_10002070 @ 0x10002070

void __thiscall FUN_10002070(void *this,int param_1,undefined1 param_2)

{
  *(undefined1 *)((int)this + 0x2f5) = param_2;
  *(int *)((int)this + 0x2f1) = param_1 * 0xf;
  return;
}



// Function: FUN_10002090 @ 0x10002090

int FUN_10002090(int param_1)

{
  if (param_1 == 3) {
    return 1;
  }
  if (param_1 == 1) {
    param_1 = 3;
  }
  return param_1;
}



// Function: FUN_100020b0 @ 0x100020b0

void __thiscall
FUN_100020b0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  CreateObject0(this,&DAT_1000d2f8,&DAT_1000d358,param_3,param_4,0);
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)this + 0x1a);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)((int)this + 0x38) = param_2;
  *(char *)((int)this + 8) = (char)param_3;
  *(undefined1 *)((int)this + 0x19) = 0;
  *(undefined4 *)((int)this + 0x15) = 0;
  *(undefined4 *)((int)this + 0xd) = 0;
  return;
}



// Function: FUN_10002120 @ 0x10002120

void __thiscall
FUN_10002120(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)this + 0x29);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined1 *)((int)this + 0x19) = 0;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x15) = 0;
  *(undefined4 *)((int)this + 0xd) = 0;
  *(undefined4 *)((int)this + 9) = param_3;
  *(undefined4 *)((int)this + 0x11) = param_4;
  return;
}



// Function: OnInit @ 0x100021f0

void OnInit(void)

{
                    /* 0x21f0  1  OnInit */
  RegisterFormation(&DAT_1000d2f8,s__ALONE_1000a26c);
  RegisterFormation(&DAT_1000d6b8,s__LINE15PUS_1000a260);
  RegisterUnitType(&DAT_1000d358,s_GRUZ_UN__1000a254);
  RegisterUnitType(&DAT_1000d330,s_Krestian_Sved_en__1000a240);
  RegisterUnitType(&DAT_1000d680,s_Gusar_evro_en__1000a230);
  RegisterDynGroup(&DAT_1000d350);
  RegisterVar(&DAT_1000d350,8);
  RegisterVar(&DAT_1000cff8,0x2ff);
  RegisterZone(&DAT_1000cfe0,s_ZLondon_1000a228);
  DAT_1000d2a3 = &DAT_1000cfe0;
  RegisterUnits(&DAT_1000d348,s_GPopulation00_1000a218);
  RegisterUnits(&DAT_1000d698,s_GProduce00_1000a20c);
  RegisterVar(&DAT_1000d380,0x2ff);
  RegisterZone(&DAT_1000d368,s_ZSity_1000a204);
  DAT_1000d62b = &DAT_1000d368;
  RegisterVar(&PTR_DAT_1000a040,8);
  RegisterUnits(&DAT_1000d360,s_GLondonVorota_1000a1f4);
  RegisterUnits(&DAT_1000cfd8,s_GGiveWood_1000a1e8);
  RegisterZone(&DAT_1000d320,s_ZGiveWood_1000a1dc);
  RegisterZone(&DAT_1000d370,s_ZRazv01_1000a1d4);
  RegisterZone(&DAT_1000d378,s_ZRazv02_1000a1cc);
  RegisterZone(&DAT_1000d688,s_ZTolk_1000a1c4);
  RegisterUpgrade(&DAT_1000cfe8,s_AKA24EN_1000a1bc);
  RegisterUpgrade(&DAT_1000cff0,s_AKA24FR_1000a1b4);
  RegisterUpgrade(&DAT_1000d338,s_AKA23EN_1000a1ac);
  RegisterUpgrade(&DAT_1000d328,s_AKA23FR_1000a1a4);
  RegisterUpgrade(&DAT_1000d690,s_AKA08EN_1000a19c);
  RegisterUpgrade(&DAT_1000d6a8,s_AKA08FR_1000a194);
  RegisterUpgrade(&DAT_1000d6a0,s_MAINEN_1000a18c);
  RegisterUpgrade(&DAT_1000d6b0,s_MAINFR_1000a184);
  ChangeFriends(0,3);
  SetPlayerName(1,s_VILLAGE_1000a17c);
  SetPlayerName(2,s_FRANCE_1000a174);
  return;
}



// Function: ProcessScenary @ 0x100023b0

void ProcessScenary(void)

{
  int iVar1;
  char cVar2;
  FILE *pFVar3;
  uint *puVar4;
  uint *puVar5;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  code *pcVar13;
  undefined1 uVar14;
  char *pcVar15;
  
                    /* 0x23b0  2  ProcessScenary */
  if (DAT_1000d728 == '\0') {
    DAT_1000d728 = '\x01';
    pFVar3 = (FILE *)FUN_1000316f(s_Missions__miss_vic_txt_1000a324,&DAT_1000a33c);
    if (pFVar3 == (FILE *)0x0) {
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_1000a31c;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d6c8;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_1000a314;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d6d7;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = s_STONE_1000a30c;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d6e6;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_1000a304;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d6f5;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_1000a2fc;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d704;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_1000a2f4;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d713;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_1000a2ec;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d300;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_1000a2e4;
      do {
        pcVar12 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar12 = pcVar15 + 1;
        cVar2 = *pcVar15;
        pcVar15 = pcVar12;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar12 + -uVar9;
      pcVar12 = (char *)&DAT_1000d30f;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      FUN_10003085((int *)pFVar3,0,2);
      uVar9 = FUN_10002f02((char *)pFVar3);
      puVar4 = operator_new(uVar9 + 1);
      FUN_10003085((int *)pFVar3,0,0);
      FUN_10002ddd((char *)puVar4,1,uVar9,(int *)pFVar3);
      FUN_10002d60(pFVar3);
      iVar11 = 0;
      iVar8 = 0;
      do {
        if (iVar8 == 0) {
          pcVar15 = &DAT_1000a2dc;
LAB_1000258f:
          puVar5 = FUN_10002ce0(puVar4,pcVar15);
          iVar11 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar8 == 1) {
            pcVar15 = &DAT_1000a2d4;
            goto LAB_1000258f;
          }
          if (iVar8 == 2) {
            pcVar15 = &DAT_1000a2cc;
            goto LAB_1000258f;
          }
          if (iVar8 == 3) {
            pcVar15 = &DAT_1000a2c4;
            goto LAB_1000258f;
          }
          if (iVar8 == 4) {
            pcVar15 = &DAT_1000a2bc;
            goto LAB_1000258f;
          }
          if (iVar8 == 5) {
            pcVar15 = &DAT_1000a2b4;
            goto LAB_1000258f;
          }
        }
        iVar11 = iVar11 + 5;
        sVar6 = FUN_10002ca0((byte *)(iVar11 + (int)puVar4),&DAT_1000a2b0);
        iVar1 = iVar8 * 0xf;
        _strncpy((char *)((int)&DAT_1000d6c8 + iVar1),(char *)(iVar11 + (int)puVar4),sVar6);
        iVar8 = iVar8 + 1;
        *(undefined1 *)((int)&DAT_1000d6c8 + sVar6 + iVar1) = 0;
      } while (iVar8 < 6);
      iVar8 = 0;
      do {
        if (iVar8 == 0) {
          pcVar15 = &DAT_1000a2ec;
LAB_100025fe:
          puVar5 = FUN_10002ce0(puVar4,pcVar15);
          iVar11 = (int)puVar5 - (int)puVar4;
        }
        else if (iVar8 == 1) {
          pcVar15 = &DAT_1000a2e4;
          goto LAB_100025fe;
        }
        iVar11 = iVar11 + 10;
        sVar6 = FUN_10002ca0((byte *)(iVar11 + (int)puVar4),&DAT_1000a2b0);
        iVar1 = iVar8 * 0xf;
        _strncpy((char *)((int)&DAT_1000d300 + iVar1),(char *)(iVar11 + (int)puVar4),sVar6);
        iVar8 = iVar8 + 1;
        *(undefined1 *)((int)&DAT_1000d300 + sVar6 + iVar1) = 0;
      } while (iVar8 < 2);
      FUN_10002b90((undefined *)puVar4);
    }
  }
  cVar2 = Trigg(1);
  if (cVar2 != '\0') {
    SetTrigg(1,0);
    RunTimer(1,200);
    EnableMission(0x41);
    EnableMission(0x44);
    DisableMission(0x42);
    DisableMission(0x43);
    SelectUnits(&DAT_1000d360,0);
    SelOpenGates(1);
    SetResource(0,0,5000);
    SetResource(0,3,5000);
    SetResource(0,2,5000);
    SetResource(0,1,5000);
    SetResource(0,4,5000);
    SetResource(0,5,5000);
    SetResource(2,0,5000);
    SetResource(2,3,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,5000);
    DisableUpgrade(0,&DAT_1000cfe8);
    DisableUpgrade(0,&DAT_1000cff0);
    DisableUpgrade(0,&DAT_1000d338);
    DisableUpgrade(0,&DAT_1000d328);
    DisableUpgrade(0,&DAT_1000d690);
    DisableUpgrade(0,&DAT_1000d6a8);
    DisableUpgrade(0,&DAT_1000d6a0);
    DisableUpgrade(0,&DAT_1000d6b0);
    uVar7 = GetDiff(0);
    StartAI(2,s_FRANCE_0_1000a2a4,2,1,1,uVar7);
    FUN_10001020(&DAT_1000cff8,'\0',0,(char *)&DAT_1000d300,&DAT_1000cfe0,1,4,&DAT_1000a2a0,
                 &DAT_1000d380,0,0,0,0,3);
    FUN_10001020(&DAT_1000d380,'\x01',1,(char *)&DAT_1000d30f,&DAT_1000d368,1,3,&DAT_1000a29c,
                 &DAT_1000cff8,0,0,0,0,0);
    ShowPage(s__PAGE23_1000a294);
    RunTimer(2,10);
    RunTimer(3,10);
  }
  PTR_DAT_1000a040 = &DAT_1000cff8;
  PTR_DAT_1000a044 = &DAT_1000d380;
  FUN_100011c0(&DAT_1000cff8,&DAT_1000cfe0,&DAT_1000a2a0,&DAT_1000d380,0,0,0,0);
  iVar8 = GetTotalAmount0(&DAT_1000d698);
  uVar14 = iVar8 == 2;
  iVar8 = GetTotalAmount0(&DAT_1000d348);
  FUN_10002070(&DAT_1000cff8,iVar8,uVar14);
  FUN_100011c0(&DAT_1000d380,&DAT_1000d368,&DAT_1000a29c,&DAT_1000cff8,0,0,0,0);
  FUN_10001500(&DAT_1000cff8,0);
  FUN_10001500(&DAT_1000d380,0);
  cVar2 = TimerDone(2);
  if ((cVar2 != '\0') && (uVar7 = FUN_10001ab0(&DAT_1000cff8), (char)uVar7 != '\0')) {
    RunTimer(2,100);
  }
  cVar2 = TimerDone(2);
  if ((cVar2 != '\0') && (uVar7 = FUN_10001ab0(&DAT_1000d380), (char)uVar7 != '\0')) {
    RunTimer(3,100);
  }
  cVar2 = TimerDone(1);
  if (cVar2 != '\0') {
    FUN_10001210(0x1000cff8);
    FUN_10001210(0x1000d380);
    iVar8 = GetDiff(0);
    RunTimer(1,(iVar8 + 3) * 100);
  }
  cVar2 = Trigg(2);
  pcVar13 = ShowPage_exref;
  if ((cVar2 != '\0') &&
     (iVar8 = GetUnitsAmount0(&DAT_1000d688,0), pcVar13 = ShowPage_exref, iVar8 != 0)) {
    SetTrigg(2,0);
    pcVar13 = ShowPage_exref;
    ShowPage(s__PAGE9_1000a28c);
    EnableMission(0x42);
    EnableMission(0x44);
    DisableMission(0x41);
    EnableMission(0x43);
  }
  cVar2 = Trigg(3);
  if ((cVar2 != '\0') && (iVar8 = GetUnitsAmount0(&DAT_1000d320,0), iVar8 != 0)) {
    (*pcVar13)(s__PAGE24_1000a284);
    EnableUpgrade(0,&DAT_1000d690);
    SetTrigg(3,0);
  }
  cVar2 = NationIsErased(0);
  if (cVar2 != '\0') {
    (*pcVar13)(s__PAGE21_1000a27c);
    LooseGame();
  }
  cVar2 = NationIsErased(2);
  if (cVar2 != '\0') {
    (*pcVar13)(s__PAGE22_1000a274);
    ShowVictory();
  }
  iVar8 = GetResource(0,0);
  if (70000 < iVar8) {
    SetResource(0,0,70000);
  }
  iVar8 = GetResource(0,3);
  if (70000 < iVar8) {
    SetResource(0,3,70000);
  }
  iVar8 = GetResource(0,2);
  if (70000 < iVar8) {
    SetResource(0,2,70000);
  }
  iVar8 = GetResource(0,1);
  if (70000 < iVar8) {
    SetResource(0,1,70000);
  }
  iVar8 = GetResource(0,4);
  if (70000 < iVar8) {
    SetResource(0,4,70000);
  }
  iVar8 = GetResource(0,5);
  if (70000 < iVar8) {
    SetResource(0,5,70000);
  }
  return;
}



// Function: FUN_10002af0 @ 0x10002af0

void __cdecl FUN_10002af0(int param_1,int param_2)

{
  SelectUnits(param_1,0);
  if (param_2 != 0) {
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000d370,0,0);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000d378,0x28,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000a044 + 0x2ab),0x96,2);
    return;
  }
  SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000d378,0x78,0);
  SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000d370,0x96,2);
  SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000a040 + 0x2ab),0,2);
  return;
}



// Function: FUN_10002b90 @ 0x10002b90

void __cdecl FUN_10002b90(undefined *param_1)

{
  FUN_1000332b(param_1);
  return;
}



// Function: _strncpy @ 0x10002ba0

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
        goto joined_r0x10002bde;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10002c1b;
        goto LAB_10002c89;
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
joined_r0x10002c85:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10002c89:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10002c1b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10002c85;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10002c85;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10002c85;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10002bde:
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
LAB_10002c1b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10002ca0 @ 0x10002ca0

int __cdecl FUN_10002ca0(byte *param_1,byte *param_2)

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



// Function: FUN_10002ce0 @ 0x10002ce0

uint * __cdecl FUN_10002ce0(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((uint)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: FUN_10002d60 @ 0x10002d60

undefined4 __cdecl FUN_10002d60(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_100035a8((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_100035fa((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



// Function: __fclose_lk @ 0x10002d91

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10003785((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_1000364c(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_1000332b(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



// Function: FUN_10002ddd @ 0x10002ddd

uint __cdecl FUN_10002ddd(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_100035a8((uint)param_4);
  uVar1 = FUN_10002e0c(param_1,param_2,param_3,param_4);
  FUN_100035fa((uint)param_4);
  return uVar1;
}



// Function: FUN_10002e0c @ 0x10002e0c

uint __cdecl FUN_10002e0c(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  piVar1 = param_4;
  pcVar6 = (char *)(param_2 * param_3);
  if (pcVar6 == (char *)0x0) {
    param_3 = 0;
  }
  else {
    pcVar5 = param_1;
    param_1 = pcVar6;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((*(ushort *)(piVar1 + 3) & 0x10c) == 0) ||
         (pcVar2 = (char *)piVar1[1], pcVar2 == (char *)0x0)) {
        if (param_1 < param_4) {
          uVar4 = FUN_1000388e(piVar1);
          if (uVar4 == 0xffffffff) goto LAB_10002ee8;
          *pcVar5 = (char)uVar4;
          param_4 = (int *)piVar1[6];
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + -1;
        }
        else {
          pcVar2 = param_1;
          if (param_4 != (int *)0x0) {
            pcVar2 = param_1 + -((uint)param_1 % (uint)param_4);
          }
          iVar3 = FUN_1000396a(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_10002ee8:
            return (uint)((int)pcVar6 - (int)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10002ee8;
          }
          param_1 = param_1 + -iVar3;
          pcVar5 = pcVar5 + iVar3;
        }
      }
      else {
        pcVar7 = param_1;
        if (pcVar2 <= param_1) {
          pcVar7 = pcVar2;
        }
        FUN_10003bb0((undefined4 *)pcVar5,(undefined4 *)*piVar1,(uint)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}



// Function: operator_new @ 0x10002ef4

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



// Function: FUN_10002f02 @ 0x10002f02

int __cdecl FUN_10002f02(char *param_1)

{
  int iVar1;
  
  FUN_100035a8((uint)param_1);
  iVar1 = FUN_10002f24(param_1);
  FUN_100035fa((uint)param_1);
  return iVar1;
}



// Function: FUN_10002f24 @ 0x10002f24

int __cdecl FUN_10002f24(char *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  DWORD *pDVar4;
  char *pcVar5;
  DWORD DVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int local_c;
  DWORD local_8;
  
  pcVar8 = param_1;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(int *)(param_1 + 4) < 0) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  local_8 = FUN_100042b4(uVar1,0,1);
  if ((int)local_8 < 0) {
LAB_10002fb2:
    local_c = -1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    if ((uVar2 & 0x108) == 0) {
      return local_8 - *(int *)(param_1 + 4);
    }
    pcVar5 = *(char **)param_1;
    pcVar7 = *(char **)(param_1 + 8);
    local_c = (int)pcVar5 - (int)pcVar7;
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 0x80) == 0) {
        pDVar4 = FUN_10004092();
        *pDVar4 = 0x16;
        goto LAB_10002fb2;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_1000dd00)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
        for (; pcVar9 < pcVar5; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            local_c = local_c + 1;
          }
        }
      }
    }
    if (local_8 != 0) {
      if ((param_1[0xc] & 1U) != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          local_c = 0;
        }
        else {
          pcVar5 = pcVar5 + (*(int *)(param_1 + 4) - (int)pcVar7);
          iVar10 = (uVar1 & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + (&DAT_1000dd00)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_100042b4(uVar1,0,2);
            if (DVar6 == local_8) {
              pcVar7 = *(char **)(param_1 + 8);
              pcVar9 = pcVar5 + (int)pcVar7;
              param_1 = pcVar5;
              for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar3 = pcVar8[0xd] & 0x20;
            }
            else {
              FUN_100042b4(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + (&DAT_1000dd00)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar8;
            }
            pcVar5 = param_1;
            if (bVar3 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          local_8 = local_8 - (int)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}



// Function: FUN_10003085 @ 0x10003085

int __cdecl FUN_10003085(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_100035a8((uint)param_1);
  iVar1 = FUN_100030b1(param_1,param_2,param_3);
  FUN_100035fa((uint)param_1);
  return iVar1;
}



// Function: FUN_100030b1 @ 0x100030b1

int __cdecl FUN_100030b1(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10004092();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_10002f24((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10003785(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_100042b4(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}



// Function: FUN_1000313e @ 0x1000313e

undefined4 * __cdecl FUN_1000313e(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_100044fc();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_1000438c(param_1,param_2,param_3,puVar1);
  FUN_100035fa((uint)puVar1);
  return puVar2;
}



// Function: FUN_1000316f @ 0x1000316f

void __cdecl FUN_1000316f(LPCSTR param_1,char *param_2)

{
  FUN_1000313e(param_1,param_2,0x40);
  return;
}



// Function: FUN_10003182 @ 0x10003182

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10003182(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000d748 = GetVersion();
    iVar1 = FUN_10004e1b(1);
    if (iVar1 != 0) {
      _DAT_1000d754 = DAT_1000d748 >> 8 & 0xff;
      _DAT_1000d750 = DAT_1000d748 & 0xff;
      DAT_1000d748 = DAT_1000d748 >> 0x10;
      _DAT_1000d74c = _DAT_1000d750 * 0x100 + _DAT_1000d754;
      iVar1 = FUN_100046e2();
      if (iVar1 != 0) {
        DAT_1000ee24 = GetCommandLineA();
        DAT_1000d730 = FUN_10004b74();
        FUN_100040a4();
        FUN_10004927();
        FUN_1000486e();
        FUN_100045c4();
        DAT_1000d72c = DAT_1000d72c + 1;
        goto LAB_10003255;
      }
      FUN_10004e78();
    }
LAB_100031e2:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000d72c < 1) goto LAB_100031e2;
      DAT_1000d72c = DAT_1000d72c + -1;
      if (DAT_1000d780 == 0) {
        FUN_10004602();
      }
      FUN_10004260();
      FUN_10004736();
      FUN_10004e78();
    }
    else if (param_2 == 3) {
      FUN_100047ce((undefined *)0x0);
    }
LAB_10003255:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x1000325b

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000d72c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_100032a3;
    if ((DAT_1000ee28 != (code *)0x0) &&
       (iVar2 = (*DAT_1000ee28)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10003182(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_100032a3:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10003182(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10003182(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000ee28 != (code *)0x0) {
      iVar2 = (*DAT_1000ee28)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x100032f8

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000d738 == 1) || ((DAT_1000d738 == 0 && (DAT_1000d73c == 1)))) {
    FUN_10004f20();
  }
  FUN_10004f59(param_1);
  (*(code *)PTR___exit_1000a340)(0xff);
  return;
}



// Function: FUN_1000332b @ 0x1000332b

void __cdecl FUN_1000332b(undefined *param_1)

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
  puStack_c = &DAT_10009190;
  puStack_10 = &LAB_10006124;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1000dce8 == 3) {
    ExceptionList = &local_14;
    FUN_10005fb6(9);
    local_8 = 0;
    local_20 = (uint *)FUN_100050f4((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_1000511f(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10003395();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000dce8 != 2) goto LAB_100033f7;
    ExceptionList = &local_14;
    FUN_10005fb6(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10005b59(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10005bb0(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_100033ed();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_100033f7:
  HeapFree(DAT_1000dce4,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10003395 @ 0x10003395

void FUN_10003395(void)

{
  FUN_10006017(9);
  return;
}



// Function: FUN_100033ed @ 0x100033ed

void FUN_100033ed(void)

{
  FUN_10006017(9);
  return;
}



// Function: FUN_10003430 @ 0x10003430

uint * __cdecl FUN_10003430(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



// Function: FUN_100035a8 @ 0x100035a8

void __cdecl FUN_100035a8(uint param_1)

{
  if ((0x1000a34f < param_1) && (param_1 < 0x1000a5b1)) {
    FUN_10005fb6(((int)(param_1 + 0xefff5cb0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_100035d7 @ 0x100035d7

void __cdecl FUN_100035d7(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10005fb6(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_100035fa @ 0x100035fa

void __cdecl FUN_100035fa(uint param_1)

{
  if ((0x1000a34f < param_1) && (param_1 < 0x1000a5b1)) {
    FUN_10006017(((int)(param_1 + 0xefff5cb0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10003629 @ 0x10003629

void __cdecl FUN_10003629(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10006017(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_1000364c @ 0x1000364c

undefined4 __cdecl FUN_1000364c(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000de00) &&
     ((*(byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000661a(param_1);
    uVar1 = FUN_100036a9(param_1);
    FUN_10006679(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10004092();
  *pDVar2 = 9;
  pDVar2 = FUN_1000409b();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_100036a9 @ 0x100036a9

undefined4 __cdecl FUN_100036a9(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_100065d8(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100065d8(2);
      iVar2 = FUN_100065d8(1);
      if (iVar2 == iVar1) goto LAB_100036f7;
    }
    hObject = (HANDLE)FUN_100065d8(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_100036f9;
    }
  }
LAB_100036f7:
  DVar4 = 0;
LAB_100036f9:
  FUN_10006559(param_1);
  *(undefined1 *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1000401f(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: __freebuf @ 0x1000372c

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_1000332b(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Function: FUN_10003757 @ 0x10003757

int __cdecl FUN_10003757(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10003785(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000669b(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_10003785 @ 0x10003785

undefined4 __cdecl FUN_10003785(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_1000672e(param_1[4],(char *)param_1[2],uVar3);
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



// Function: FUN_100037ea @ 0x100037ea

int __cdecl FUN_100037ea(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10005fb6(2);
  iVar4 = 0;
  if (0 < DAT_1000ee20) {
    do {
      iVar2 = *(int *)(DAT_1000de04 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_100035d7(iVar4,iVar2);
        piVar1 = *(int **)(DAT_1000de04 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10003757(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10003757(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10003629(iVar4,*(int *)(DAT_1000de04 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_1000ee20);
  }
  FUN_10006017(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_1000388e @ 0x1000388e

uint __cdecl FUN_1000388e(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      param_1[3] = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        FUN_1000691e(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_1000396a(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_1000a738;
          }
          else {
            puVar4 = (undefined *)((&DAT_1000dd00)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            param_1[3] = param_1[3] | 0x2000;
          }
        }
        if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
          param_1[6] = 0x1000;
        }
        param_1[1] = iVar3 + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (uint)bVar1;
      }
      param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      param_1[1] = 0;
    }
    else {
      param_1[3] = uVar2 | 0x20;
    }
  }
  return 0xffffffff;
}



// Function: FUN_1000396a @ 0x1000396a

int __cdecl FUN_1000396a(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000de00) &&
     ((*(byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000661a(param_1);
    iVar1 = FUN_100039cf(param_1,param_2,param_3);
    FUN_10006679(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10004092();
  *pDVar2 = 9;
  pDVar2 = FUN_1000409b();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_100039cf @ 0x100039cf

int __cdecl FUN_100039cf(uint param_1,char *param_2,char *param_3)

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
    piVar1 = &DAT_1000dd00 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_1000dd00)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
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
          pDVar7 = FUN_10004092();
          *pDVar7 = 9;
          pDVar7 = FUN_1000409b();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_1000401f(DVar6);
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
                goto LAB_10003b5a;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_10003b74:
                *pcVar8 = '\r';
LAB_10003b77:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_10003b5a:
                  *pcVar8 = '\n';
                  goto LAB_10003b77;
                }
                FUN_10004319(param_1,-1,1);
                if (local_5 != '\n') goto LAB_10003b74;
              }
              else {
                if (local_5 == '\n') goto LAB_10003b5a;
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



// Function: FUN_10003bb0 @ 0x10003bb0

undefined4 * __cdecl FUN_10003bb0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10003d67_caseD_2;
        case 3:
          goto switchD_10003d67_caseD_3;
        }
        goto switchD_10003d67_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10003d67_caseD_0;
      case 1:
        goto switchD_10003d67_caseD_1;
      case 2:
        goto switchD_10003d67_caseD_2;
      case 3:
        goto switchD_10003d67_caseD_3;
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
              goto switchD_10003d67_caseD_2;
            case 3:
              goto switchD_10003d67_caseD_3;
            }
            goto switchD_10003d67_caseD_1;
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
              goto switchD_10003d67_caseD_2;
            case 3:
              goto switchD_10003d67_caseD_3;
            }
            goto switchD_10003d67_caseD_1;
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
              goto switchD_10003d67_caseD_2;
            case 3:
              goto switchD_10003d67_caseD_3;
            }
            goto switchD_10003d67_caseD_1;
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
switchD_10003d67_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10003d67_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10003d67_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10003d67_caseD_0:
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
        goto switchD_10003be5_caseD_2;
      case 3:
        goto switchD_10003be5_caseD_3;
      }
      goto switchD_10003be5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10003be5_caseD_0;
    case 1:
      goto switchD_10003be5_caseD_1;
    case 2:
      goto switchD_10003be5_caseD_2;
    case 3:
      goto switchD_10003be5_caseD_3;
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
            goto switchD_10003be5_caseD_2;
          case 3:
            goto switchD_10003be5_caseD_3;
          }
          goto switchD_10003be5_caseD_1;
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
            goto switchD_10003be5_caseD_2;
          case 3:
            goto switchD_10003be5_caseD_3;
          }
          goto switchD_10003be5_caseD_1;
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
            goto switchD_10003be5_caseD_2;
          case 3:
            goto switchD_10003be5_caseD_3;
          }
          goto switchD_10003be5_caseD_1;
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
switchD_10003be5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10003be5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10003be5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10003be5_caseD_0:
  return param_1;
}



// Function: _malloc @ 0x10003ee5

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000d8f8);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10003ef7

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10003f23((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10006962(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10003f23 @ 0x10003f23

void __cdecl FUN_10003f23(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100091a8;
  puStack_10 = &LAB_10006124;
  local_14 = ExceptionList;
  if (DAT_1000dce8 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1000dce0) {
      ExceptionList = &local_14;
      FUN_10005fb6(9);
      local_8 = 0;
      piVar1 = FUN_10005448(param_1);
      local_8 = 0xffffffff;
      FUN_10003f8a();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000dce8 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1000c81c) {
        ExceptionList = &local_14;
        FUN_10005fb6(9);
        local_8 = 1;
        piVar1 = FUN_10005bf5(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10003fe9();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10004002;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10004002:
  HeapAlloc(DAT_1000dce4,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10003f8a @ 0x10003f8a

void FUN_10003f8a(void)

{
  FUN_10006017(9);
  return;
}



// Function: FUN_10003fe9 @ 0x10003fe9

void FUN_10003fe9(void)

{
  FUN_10006017(9);
  return;
}



// Function: FUN_1000401f @ 0x1000401f

void __cdecl FUN_1000401f(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000409b();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1000a5d0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10004092();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1000a5d4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x1000a738);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10004092();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10004092();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10004092();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_10004092 @ 0x10004092

DWORD * FUN_10004092(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10004767();
  return pDVar1 + 2;
}



// Function: FUN_1000409b @ 0x1000409b

DWORD * FUN_1000409b(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10004767();
  return pDVar1 + 3;
}



// Function: FUN_100040a4 @ 0x100040a4

void FUN_100040a4(void)

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
  DAT_1000de00 = 0x20;
  DAT_1000dd00 = puVar2;
  for (; puVar2 < DAT_1000dd00 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000de00 < (int)UVar8) {
      puVar2 = &DAT_1000dd04;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000de00;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000de00 = DAT_1000de00 + 0x20;
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
      } while ((int)DAT_1000de00 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000dd00)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000dd00 + iVar6 * 9;
    if (DAT_1000dd00[iVar6 * 9] == -1) {
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
          goto LAB_10004249;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10004249:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000de00);
      return;
    }
  } while( true );
}



// Function: FUN_10004260 @ 0x10004260

void FUN_10004260(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000dd00;
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
      FUN_1000332b((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000de00);
  return;
}



// Function: FUN_100042b4 @ 0x100042b4

DWORD __cdecl FUN_100042b4(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000de00) &&
     ((*(byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000661a(param_1);
    DVar1 = FUN_10004319(param_1,param_2,param_3);
    FUN_10006679(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10004092();
  *pDVar2 = 9;
  pDVar2 = FUN_1000409b();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10004319 @ 0x10004319

DWORD __cdecl FUN_10004319(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_100065d8(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10004092();
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
      pbVar1 = (byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1000401f(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_1000438c @ 0x1000438c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_1000438c(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar4 = false;
  bVar3 = false;
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    uVar5 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar5 = 0;
      uVar6 = DAT_1000d900 | 1;
      goto LAB_100043cd;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_1000d900 | 2;
LAB_100043cd:
  bVar2 = true;
LAB_100043d0:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_1000697d(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_1000d740 = _DAT_1000d740 + 1;
    param_4[3] = uVar6;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = uVar5;
    return param_4;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((uVar5 & 0x1000) == 0) {
        uVar5 = uVar5 | 0x1000;
        goto LAB_100043d0;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_100043d0;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_100043d0;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_100043d0;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_100043d0;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_100044b0;
      uVar5 = uVar5 | 0x8000;
      goto LAB_100043d0;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_100043d0;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_100044b0;
        uVar5 = uVar5 | 0x4000;
        goto LAB_100043d0;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_100043d0;
      }
    }
  }
LAB_100044b0:
  bVar2 = false;
  goto LAB_100043d0;
}



// Function: FUN_100044fc @ 0x100044fc

undefined4 * FUN_100044fc(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_10005fb6(2);
  iVar3 = 0;
  if (0 < DAT_1000ee20) {
    do {
      iVar1 = *(int *)(DAT_1000de04 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_1000de04) = pvVar2;
        if (*(int *)(iVar3 + DAT_1000de04) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_1000de04) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_1000de04) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_1000de04);
LAB_100045a0:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_100035d7(iVar3,iVar1);
        iVar1 = *(int *)(DAT_1000de04 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_1000de04 + iVar3 * 4);
          goto LAB_100045a0;
        }
        FUN_10003629(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1000ee20);
  }
  FUN_10006017(2);
  return puVar4;
}



// Function: FUN_100045c4 @ 0x100045c4

void FUN_100045c4(void)

{
  if (DAT_1000dcfc != (code *)0x0) {
    (*DAT_1000dcfc)();
  }
  FUN_100046c8((undefined4 *)&DAT_1000a010,(undefined4 *)&DAT_1000a01c);
  FUN_100046c8((undefined4 *)&DAT_1000a000,(undefined4 *)&DAT_1000a00c);
  return;
}



// Function: __exit @ 0x100045f1

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10004611(_Code,1,0);
  return;
}



// Function: FUN_10004602 @ 0x10004602

void FUN_10004602(void)

{
  FUN_10004611(0,0,1);
  return;
}



// Function: FUN_10004611 @ 0x10004611

void __cdecl FUN_10004611(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100046b6();
  if (DAT_1000d784 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000d780 = 1;
  DAT_1000d77c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000dcf8 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000dcf4 - 4), DAT_1000dcf8 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000dcf8 <= puVar1);
    }
    FUN_100046c8((undefined4 *)&DAT_1000a020,(undefined4 *)&DAT_1000a028);
  }
  FUN_100046c8((undefined4 *)&DAT_1000a02c,(undefined4 *)&DAT_1000a030);
  if (param_3 == 0) {
    DAT_1000d784 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100046bf();
  return;
}



// Function: FUN_100046b6 @ 0x100046b6

void FUN_100046b6(void)

{
  FUN_10005fb6(0xd);
  return;
}



// Function: FUN_100046bf @ 0x100046bf

void FUN_100046bf(void)

{
  FUN_10006017(0xd);
  return;
}



// Function: FUN_100046c8 @ 0x100046c8

void __cdecl FUN_100046c8(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_100046e2 @ 0x100046e2

undefined4 FUN_100046e2(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10005f21();
  DAT_1000a75c = TlsAlloc();
  if (DAT_1000a75c != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100061fc(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000a75c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10004754((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_10004736 @ 0x10004736

void FUN_10004736(void)

{
  FUN_10005f4a();
  if (DAT_1000a75c != 0xffffffff) {
    TlsFree(DAT_1000a75c);
    DAT_1000a75c = 0xffffffff;
  }
  return;
}



// Function: FUN_10004754 @ 0x10004754

void __cdecl FUN_10004754(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000c8f0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10004767 @ 0x10004767

DWORD * FUN_10004767(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000a75c);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_100061fc(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000a75c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10004754((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_100047c2;
      }
    }
    __amsg_exit(0x10);
  }
LAB_100047c2:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_100047ce @ 0x100047ce

void __cdecl FUN_100047ce(undefined *param_1)

{
  if (DAT_1000a75c != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1000a75c), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1000332b(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1000332b(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1000332b(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1000332b(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1000332b(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1000332b(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1000c8f0) {
        FUN_1000332b(*(undefined **)(param_1 + 0x50));
      }
      FUN_1000332b(param_1);
    }
    TlsSetValue(DAT_1000a75c,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_1000486e @ 0x1000486e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000486e(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000dcf0 == 0) {
    FUN_10007193();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000d730; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1000d764 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000d730;
  puVar6 = DAT_1000d730;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10006c50((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1000332b((undefined *)DAT_1000d730);
  DAT_1000d730 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1000dcec = 1;
  return;
}



// Function: FUN_10004927 @ 0x10004927

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004927(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000dcf0 == 0) {
    FUN_10007193();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000d788,0x104);
  _DAT_1000d774 = &DAT_1000d788;
  pbVar2 = &DAT_1000d788;
  if (*DAT_1000ee24 != 0) {
    pbVar2 = DAT_1000ee24;
  }
  FUN_100049c0(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100049c0(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000d75c = puVar1;
  _DAT_1000d758 = local_8 + -1;
  return;
}



// Function: FUN_100049c0 @ 0x100049c0

void __cdecl FUN_100049c0(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000dbc0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000dbc0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10004a6b;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10004a6b:
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
          if ((*(byte *)((int)&DAT_1000dbc0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000dbc0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10004b74 @ 0x10004b74

LPSTR FUN_10004b74(void)

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
  if (DAT_1000d88c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000d88c = 1;
LAB_10004bcb:
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
        FUN_1000332b(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000d88c = 2;
  }
  else {
    if (DAT_1000d88c == 1) goto LAB_10004bcb;
    if (DAT_1000d88c != 2) {
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
    FUN_10003bb0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10004ca6 @ 0x10004ca6

void __cdecl FUN_10004ca6(undefined4 *param_1)

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



// Function: FUN_10004cd3 @ 0x10004cd3

int FUN_10004cd3(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *this;
  byte unaff_BL;
  undefined4 local_1230;
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_10007410();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = '-';
    aCStackY_18[1] = 'M';
    aCStackY_18[2] = '\0';
    aCStackY_18[3] = '\x10';
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",(LPSTR)&local_1230,0x1090);
    if (DVar4 != 0) {
      pcVar8 = (char *)&local_1230;
      while ((char)local_1230 != '\0') {
        cVar1 = *pcVar8;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar8 = cVar1 + -0x20;
        }
        pcVar8 = pcVar8 + 1;
        local_1230._0_1_ = *pcVar8;
      }
      aCStackY_18[0] = 'k';
      aCStackY_18[1] = 'M';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",(char *)&local_1230,0x16);
      if (iVar5 == 0) {
        puVar6 = &local_1230;
      }
      else {
        aCStackY_18[0] = -0x73;
        aCStackY_18[1] = 'M';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar8 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar8;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar8 = cVar1 + -0x20;
          }
          pcVar8 = pcVar8 + 1;
          local_1a0[0] = *pcVar8;
        }
        puVar6 = FUN_10002ce0(&local_1230,local_1a0);
      }
      if ((puVar6 != (uint *)0x0) && (puVar6 = FUN_10003430(puVar6,','), puVar6 != (uint *)0x0)) {
        pbVar7 = (byte *)((int)puVar6 + 1);
        bVar2 = *pbVar7;
        this = pbVar7;
        while (bVar2 != 0) {
          if (*this == 0x3b) {
            *this = 0;
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = -0xd;
        aCStackY_18[1] = 'M';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_100071af(this,pbVar7,(int *)0x0,(void *)0xa);
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
    FUN_10004ca6((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_10004e1b @ 0x10004e1b

undefined4 __cdecl FUN_10004e1b(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1000dce4 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000dce4 != (HANDLE)0x0) {
    DAT_1000dce8 = FUN_10004cd3();
    if (DAT_1000dce8 == 3) {
      ppuVar1 = (undefined **)FUN_100050ac(0x3f8);
    }
    else {
      if (DAT_1000dce8 != 2) {
        return 1;
      }
      ppuVar1 = FUN_100058fd();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1000dce4);
  }
  return 0;
}



// Function: FUN_10004e78 @ 0x10004e78

void FUN_10004e78(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1000dce8 == 3) {
    iVar1 = 0;
    if (0 < DAT_1000dcd8) {
      puVar2 = (undefined4 *)((int)DAT_1000dcdc + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1000dce4,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1000dcd8);
    }
    HeapFree(DAT_1000dce4,0,DAT_1000dcdc);
  }
  else if (DAT_1000dce8 == 2) {
    ppuVar3 = &PTR_LOOP_1000a7f8;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000a7f8);
  }
  HeapDestroy(DAT_1000dce4);
  return;
}



// Function: FUN_10004f20 @ 0x10004f20

void FUN_10004f20(void)

{
  if ((DAT_1000d738 == 1) || ((DAT_1000d738 == 0 && (DAT_1000d73c == 1)))) {
    FUN_10004f59(0xfc);
    if (DAT_1000d890 != (code *)0x0) {
      (*DAT_1000d890)();
    }
    FUN_10004f59(0xff);
  }
  return;
}



// Function: FUN_10004f59 @ 0x10004f59

void __cdecl FUN_10004f59(DWORD param_1)

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
  pDVar2 = &DAT_1000a768;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000a7f8);
  if (param_1 == (&DAT_1000a768)[iVar5 * 2]) {
    if ((DAT_1000d738 == 1) || ((DAT_1000d738 == 0 && (DAT_1000d73c == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000a76c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10006c50(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10006c50(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10006c60(local_a4,_Dest);
      FUN_10006c60(local_a4,(uint *)&DAT_100094a4);
      FUN_10006c60(local_a4,*(uint **)(iVar5 * 8 + 0x1000a76c));
      auStackY_1e3._3_4_ = 0x1000507d;
      FUN_1000743f(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_100050ac @ 0x100050ac

undefined4 __cdecl FUN_100050ac(undefined4 param_1)

{
  DAT_1000dcdc = HeapAlloc(DAT_1000dce4,0,0x140);
  if (DAT_1000dcdc == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000dcd4 = 0;
  DAT_1000dcd8 = 0;
  DAT_1000dcd0 = DAT_1000dcdc;
  DAT_1000dce0 = param_1;
  DAT_1000dcc8 = 0x10;
  return 1;
}



// Function: FUN_100050f4 @ 0x100050f4

uint __cdecl FUN_100050f4(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000dcdc;
  while( true ) {
    if (DAT_1000dcdc + DAT_1000dcd8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_1000511f @ 0x1000511f

void __cdecl FUN_1000511f(uint *param_1,int param_2)

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
      if (DAT_1000dcd4 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1000dccc * 0x8000 + DAT_1000dcd4[3]),0x8000,0x4000);
        DAT_1000dcd4[2] = DAT_1000dcd4[2] | 0x80000000U >> ((byte)DAT_1000dccc & 0x1f);
        *(undefined4 *)(DAT_1000dcd4[4] + 0xc4 + DAT_1000dccc * 4) = 0;
        *(char *)(DAT_1000dcd4[4] + 0x43) = *(char *)(DAT_1000dcd4[4] + 0x43) + -1;
        if (*(char *)(DAT_1000dcd4[4] + 0x43) == '\0') {
          DAT_1000dcd4[1] = DAT_1000dcd4[1] & 0xfffffffe;
        }
        if (DAT_1000dcd4[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1000dcd4[3],0,0x8000);
          HeapFree(DAT_1000dce4,0,(LPVOID)DAT_1000dcd4[4]);
          FUN_100074d0(DAT_1000dcd4,DAT_1000dcd4 + 5,
                       (DAT_1000dcd8 * 0x14 - (int)DAT_1000dcd4) + -0x14 + DAT_1000dcdc);
          DAT_1000dcd8 = DAT_1000dcd8 + -1;
          if (DAT_1000dcd4 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1000dcd0 = DAT_1000dcdc;
        }
      }
      DAT_1000dcd4 = param_1;
      DAT_1000dccc = uVar14;
    }
  }
  return;
}



// Function: FUN_10005448 @ 0x10005448

int * __cdecl FUN_10005448(uint *param_1)

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
  
  puVar8 = DAT_1000dcdc + DAT_1000dcd8 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000dcd0;
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
  puVar11 = DAT_1000dcdc;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000dcd0 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000dcd0) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000dcdc;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000dcd0 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000dcd0) && (param_1 = FUN_10005751(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10005802((int)param_1);
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
  DAT_1000dcd0 = param_1;
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
    if (iVar9 == 0) goto LAB_1000570e;
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
LAB_1000570e:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000dcd4)) && (local_8 == DAT_1000dccc)) {
    DAT_1000dcd4 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10005751 @ 0x10005751

undefined4 * FUN_10005751(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000dcd8 == DAT_1000dcc8) {
    pvVar2 = HeapReAlloc(DAT_1000dce4,0,DAT_1000dcdc,(DAT_1000dcc8 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000dcc8 = DAT_1000dcc8 + 0x10;
    DAT_1000dcdc = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000dcdc + DAT_1000dcd8 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000dce4,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000dcd8 = DAT_1000dcd8 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000dce4,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10005802 @ 0x10005802

int __cdecl FUN_10005802(int param_1)

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



// Function: FUN_100058fd @ 0x100058fd

undefined ** FUN_100058fd(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000a808 == -1) {
    lpMem = &PTR_LOOP_1000a7f8;
  }
  else {
    lpMem = HeapAlloc(DAT_1000dce4,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000a7f8) {
        if (PTR_LOOP_1000a7f8 == (undefined *)0x0) {
          PTR_LOOP_1000a7f8 = (undefined *)&PTR_LOOP_1000a7f8;
        }
        if (PTR_LOOP_1000a7fc == (undefined *)0x0) {
          PTR_LOOP_1000a7fc = (undefined *)&PTR_LOOP_1000a7f8;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000a7f8;
        lpMem[1] = PTR_LOOP_1000a7fc;
        PTR_LOOP_1000a7fc = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1000a7f8) {
    HeapFree(DAT_1000dce4,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_10005a41 @ 0x10005a41

void __cdecl FUN_10005a41(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1000c818 == param_1) {
    PTR_LOOP_1000c818 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000a7f8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1000dce4,0,param_1);
    return;
  }
  DAT_1000a808 = 0xffffffff;
  return;
}



// Function: FUN_10005a97 @ 0x10005a97

void __cdecl FUN_10005a97(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000a7fc;
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
            DAT_1000d894 = DAT_1000d894 + -1;
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
          FUN_10005a41(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000a7fc) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_10005b59 @ 0x10005b59

int __cdecl FUN_10005b59(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000a7f8;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000a7f8) {
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



// Function: FUN_10005bb0 @ 0x10005bb0

void __cdecl FUN_10005bb0(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1000d894 = DAT_1000d894 + 1, DAT_1000d894 == 0x20)) {
    FUN_10005a97(0x10);
  }
  return;
}



// Function: FUN_10005bf5 @ 0x10005bf5

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10005bf5(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_1000c818;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10005dfd(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10005cc0;
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
          piVar5 = (int *)FUN_10005dfd(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10005cc0:
            PTR_LOOP_1000c818 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_1000c818) {
      ppuVar9 = &PTR_LOOP_1000a7f8;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000a7f8) {
          ppuVar9 = FUN_100058fd();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1000c818 = (undefined *)ppuVar9;
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
      PTR_LOOP_1000c818 = (undefined *)ppuVar9;
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



// Function: FUN_10005dfd @ 0x10005dfd

int __cdecl FUN_10005dfd(int *param_1,uint param_2,uint param_3)

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
          goto LAB_10005f10;
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
LAB_10005f10:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_10005f21 @ 0x10005f21

void FUN_10005f21(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c864);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c854);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c844);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c824);
  return;
}



// Function: FUN_10005f4a @ 0x10005f4a

void FUN_10005f4a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000c820;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000c864)) && (ppuVar1 != &PTR_DAT_1000c854)) &&
       ((ppuVar1 != &PTR_DAT_1000c844 && (ppuVar1 != &PTR_DAT_1000c824)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000332b(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000c8e0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c844);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c854);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c864);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c824);
  return;
}



// Function: FUN_10005fb6 @ 0x10005fb6

void __cdecl FUN_10005fb6(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000c820 + param_1;
  if ((&DAT_1000c820)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10005fb6(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1000332b((undefined *)lpCriticalSection);
    }
    FUN_10006017(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10006017 @ 0x10006017

void __cdecl FUN_10006017(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000c820)[param_1]);
  return;
}



// Function: __global_unwind2 @ 0x1000602c

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10006044,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000606e

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
  puStack_18 = &LAB_1000604c;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10006102();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_10006102 @ 0x10006102

void FUN_10006102(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000c8e8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000c8e4 = in_EAX;
  DAT_1000c8ec = unaff_EBP;
  return;
}



// Function: FUN_100061e1 @ 0x100061e1

void FUN_100061e1(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_100061fc @ 0x100061fc

int * __cdecl FUN_100061fc(int param_1,int param_2)

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
  puStack_c = &DAT_100094e0;
  puStack_10 = &LAB_10006124;
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
      if (DAT_1000dce8 == 3) {
        if (puVar2 <= DAT_1000dce0) {
          FUN_10005fb6(9);
          local_8 = 0;
          local_24 = FUN_10005448(puVar2);
          local_8 = 0xffffffff;
          FUN_10006295();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_100062e9;
LAB_100062d8:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_100062e4:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1000dce8 != 2) || (DAT_1000c81c < puVar3)) goto LAB_100062e4;
        FUN_10005fb6(9);
        local_8 = 1;
        local_24 = FUN_10005bf5((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1000631e();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_100062d8;
      }
LAB_100062e9:
      local_24 = HeapAlloc(DAT_1000dce4,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1000d8f8 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10006962(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_10006295 @ 0x10006295

void FUN_10006295(void)

{
  FUN_10006017(9);
  return;
}



// Function: FUN_1000631e @ 0x1000631e

void FUN_1000631e(void)

{
  FUN_10006017(9);
  return;
}



// Function: FUN_100063ba @ 0x100063ba

uint FUN_100063ba(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  uVar4 = 0xffffffff;
  FUN_10005fb6(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_1000dd00;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_10005fb6(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_10006017(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          uVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (uVar4 != 0xffffffff) goto LAB_100064cc;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x1000ddff < (int)piVar3) goto LAB_100064cc;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_1000de00 = DAT_1000de00 + 0x20;
    (&DAT_1000dd00)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_1000dd00)[local_8];
    }
    uVar4 = local_8 << 5;
    FUN_1000661a(uVar4);
  }
LAB_100064cc:
  FUN_10006017(0x12);
  return uVar4;
}



// Function: FUN_100064dd @ 0x100064dd

undefined4 __cdecl FUN_100064dd(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1000de00) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_1000dd00)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_1000d73c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10006536;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_10006536:
      *(HANDLE *)((&DAT_1000dd00)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_10004092();
  *pDVar1 = 9;
  pDVar1 = FUN_1000409b();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_10006559 @ 0x10006559

undefined4 __cdecl FUN_10006559(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1000de00) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1000dd00)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1000d73c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100065b5;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100065b5:
      *(undefined4 *)((&DAT_1000dd00)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10004092();
  *pDVar2 = 9;
  pDVar2 = FUN_1000409b();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_100065d8 @ 0x100065d8

undefined4 __cdecl FUN_100065d8(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1000de00) &&
     ((*(byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1000dd00)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10004092();
  *pDVar1 = 9;
  pDVar1 = FUN_1000409b();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_1000661a @ 0x1000661a

void __cdecl FUN_1000661a(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1000dd00)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10005fb6(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10006017(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1000dd00)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_10006679 @ 0x10006679

void __cdecl FUN_10006679(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1000dd00)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_1000669b @ 0x1000669b

undefined4 __cdecl FUN_1000669b(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1000de00 <= param_1) {
LAB_1000671c:
    pDVar3 = FUN_10004092();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000671c;
  FUN_1000661a(param_1);
  if ((*(byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_100065d8(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10006711;
    pDVar3 = FUN_1000409b();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10004092();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10006711:
  FUN_10006679(param_1);
  return uVar5;
}



// Function: FUN_1000672e @ 0x1000672e

int __cdecl FUN_1000672e(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000de00) &&
     ((*(byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000661a(param_1);
    iVar1 = FUN_10006793(param_1,param_2,param_3);
    FUN_10006679(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10004092();
  *pDVar2 = 9;
  pDVar2 = FUN_1000409b();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10006793 @ 0x10006793

int __cdecl FUN_10006793(DWORD param_1,char *param_2,uint param_3)

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
LAB_100067ac:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_1000dd00 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10004319(param_1,0,2);
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
LAB_1000687b:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_100068ed;
      if (param_1 == 5) {
        pDVar7 = FUN_10004092();
        *pDVar7 = 9;
        pDVar7 = FUN_1000409b();
        *pDVar7 = 5;
      }
      else {
        FUN_1000401f(param_1);
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
            goto LAB_1000687b;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1000687b;
        } while( true );
      }
LAB_100068ed:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_100067ac;
      pDVar7 = FUN_10004092();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1000409b();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_1000691e @ 0x1000691e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000691e(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_1000d740 = _DAT_1000d740 + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}



// Function: FUN_10006962 @ 0x10006962

undefined4 __cdecl FUN_10006962(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000d8fc != (code *)0x0) {
    iVar1 = (*DAT_1000d8fc)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_1000697d @ 0x1000697d

uint __cdecl FUN_1000697d(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD *pDVar4;
  HANDLE hFile;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar8 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar8) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar8;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_1000d914 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) goto LAB_10006a81;
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) goto LAB_10006a81;
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_10006a9b;
      if (uVar2 != 0x300) goto LAB_10006a81;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_10006a9b:
        local_c = 5;
        goto LAB_10006aab;
      }
      if (uVar2 != 0x700) {
LAB_10006a81:
        pDVar4 = FUN_10004092();
        *pDVar4 = 0x16;
        pDVar4 = FUN_1000409b();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_10006aab:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_1000d744 & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_100063ba();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_10004092();
    *pDVar4 = 0x18;
    pDVar4 = FUN_1000409b();
    *pDVar4 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar5 = GetFileType(hFile);
    if (DVar5 != 0) {
      if (DVar5 == 2) {
        local_5 = local_5 | 0x40;
      }
      else if (DVar5 == 3) {
        local_5 = local_5 | 8;
      }
      FUN_100064dd(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_1000dd00)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_10004319(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_1000409b();
          if (*pDVar4 == 0x83) goto LAB_10006c25;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_100039cf(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) ||
              (iVar6 = FUN_10007868(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_10004319(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_10006c25;
        }
        FUN_1000364c(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_10006c25:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_1000dd00)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_10006c3e;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_1000401f(DVar5);
  uVar2 = 0xffffffff;
LAB_10006c3e:
  FUN_10006679(uVar3);
  return uVar2;
}



// Function: FUN_10006c50 @ 0x10006c50

uint * __cdecl FUN_10006c50(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10006d38;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10006d38:
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



// Function: FUN_10006c60 @ 0x10006c60

uint * __cdecl FUN_10006c60(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10006c7c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10006caf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10006ccb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10006c7c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10006ccb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10006ccb;
    }
  }
LAB_10006caf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10006ccb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10006d38:
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
    if (bVar1 == 0) goto LAB_10006d38;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x10006d40

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10006d60;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10006d93:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10006d60:
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
  goto LAB_10006d93;
}



// Function: FUN_10006dbb @ 0x10006dbb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10006dbb(int param_1)

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
  
  FUN_10005fb6(0x19);
  CodePage = FUN_10006f68(param_1);
  if (CodePage != DAT_1000da90) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000c988;
LAB_10006df8:
      if (*pUVar5 != CodePage) goto code_r0x10006dfc;
      local_8 = 0;
      puVar15 = &DAT_1000dbc0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000c998);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000c980)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000dbc0 + uVar8 + 1);
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
      _DAT_1000daac = 1;
      DAT_1000da90 = CodePage;
      DAT_1000dcc4 = FUN_10006fb2(CodePage);
      DAT_1000daa0 = *(undefined4 *)(iVar12 + 0x1000c98c);
      DAT_1000daa4 = *(undefined4 *)(iVar12 + 0x1000c990);
      DAT_1000daa8 = *(undefined4 *)(iVar12 + 0x1000c994);
      goto LAB_10006f4c;
    }
    goto LAB_10006f47;
  }
  goto LAB_10006de2;
code_r0x10006dfc:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1000ca77 < (int)pUVar5) goto code_r0x10006e07;
  goto LAB_10006df8;
code_r0x10006e07:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000dcc4 = 0;
    puVar15 = &DAT_1000dbc0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000daac = 0;
      DAT_1000da90 = CodePage;
    }
    else {
      DAT_1000da90 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000dbc0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000dbc0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000dcc4 = FUN_10006fb2(CodePage);
      _DAT_1000daac = 1;
    }
    DAT_1000daa0 = 0;
    DAT_1000daa4 = 0;
    DAT_1000daa8 = 0;
  }
  else {
    if (DAT_1000d904 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10006f59;
    }
LAB_10006f47:
    FUN_10006fe5();
  }
LAB_10006f4c:
  FUN_1000700e();
LAB_10006de2:
  uVar14 = 0;
LAB_10006f59:
  FUN_10006017(0x19);
  return uVar14;
}



// Function: FUN_10006f68 @ 0x10006f68

int __cdecl FUN_10006f68(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000d904 = 1;
                    /* WARNING: Could not recover jumptable at 0x10006f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000d904 = 1;
                    /* WARNING: Could not recover jumptable at 0x10006f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000d930;
  }
  DAT_1000d904 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10006fb2 @ 0x10006fb2

undefined4 __cdecl FUN_10006fb2(int param_1)

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



// Function: FUN_10006fe5 @ 0x10006fe5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006fe5(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000dbc0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000da90 = 0;
  _DAT_1000daac = 0;
  DAT_1000dcc4 = 0;
  DAT_1000daa0 = 0;
  DAT_1000daa4 = 0;
  DAT_1000daa8 = 0;
  return;
}



// Function: FUN_1000700e @ 0x1000700e

void FUN_1000700e(void)

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
  
  BVar2 = GetCPInfo(DAT_1000da90,&local_18);
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
    FUN_10007bdc(1,local_118,0x100,local_518,DAT_1000da90,DAT_1000dcc4,0);
    FUN_1000798d(DAT_1000dcc4,0x100,local_118,0x100,local_218,0x100,DAT_1000da90,0);
    FUN_1000798d(DAT_1000dcc4,0x200,local_118,0x100,local_318,0x100,DAT_1000da90,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000dbc0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000711a;
        }
        (&DAT_1000dac0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000dbc0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000711a:
        (&DAT_1000dac0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000dbc0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10007164;
        }
        (&DAT_1000dac0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000dbc0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10007164:
        (&DAT_1000dac0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10007193 @ 0x10007193

void FUN_10007193(void)

{
  if (DAT_1000dcf0 == 0) {
    FUN_10006dbb(-3);
    DAT_1000dcf0 = 1;
  }
  return;
}



// Function: FUN_100071af @ 0x100071af

void __thiscall FUN_100071af(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_100071c6(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_100071c6 @ 0x100071c6

void * __thiscall FUN_100071c6(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1000cc8c < 2) {
      uVar3 = (byte)PTR_DAT_1000ca80[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000ca80;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10007e60(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10007221:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10007221;
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
      goto LAB_1000728b;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_1000728b;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1000728b:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000cc8c < 2) {
      uVar5 = (byte)PTR_DAT_1000ca80[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10007e60(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000cc8c < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000ca80 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10007e60(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10007337:
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
          pDVar6 = FUN_10004092();
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
      uVar3 = FUN_10007d25((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10007337;
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



// Function: _strncmp @ 0x100073d0

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



// Function: FUN_10007410 @ 0x10007410

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10007410(void)

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



// Function: FUN_1000743f @ 0x1000743f

int __cdecl FUN_1000743f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000d908 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000d908 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000d908 != (FARPROC)0x0) {
        DAT_1000d90c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000d910 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000748e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000748e:
    if (DAT_1000d90c != (FARPROC)0x0) {
      iVar1 = (*DAT_1000d90c)();
      if ((iVar1 != 0) && (DAT_1000d910 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000d910)(iVar1);
      }
    }
    iVar1 = (*DAT_1000d908)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: FUN_100074d0 @ 0x100074d0

undefined4 * __cdecl FUN_100074d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10007687_caseD_2;
        case 3:
          goto switchD_10007687_caseD_3;
        }
        goto switchD_10007687_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10007687_caseD_0;
      case 1:
        goto switchD_10007687_caseD_1;
      case 2:
        goto switchD_10007687_caseD_2;
      case 3:
        goto switchD_10007687_caseD_3;
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
              goto switchD_10007687_caseD_2;
            case 3:
              goto switchD_10007687_caseD_3;
            }
            goto switchD_10007687_caseD_1;
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
              goto switchD_10007687_caseD_2;
            case 3:
              goto switchD_10007687_caseD_3;
            }
            goto switchD_10007687_caseD_1;
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
              goto switchD_10007687_caseD_2;
            case 3:
              goto switchD_10007687_caseD_3;
            }
            goto switchD_10007687_caseD_1;
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
switchD_10007687_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10007687_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10007687_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10007687_caseD_0:
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
        goto switchD_10007505_caseD_2;
      case 3:
        goto switchD_10007505_caseD_3;
      }
      goto switchD_10007505_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10007505_caseD_0;
    case 1:
      goto switchD_10007505_caseD_1;
    case 2:
      goto switchD_10007505_caseD_2;
    case 3:
      goto switchD_10007505_caseD_3;
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
            goto switchD_10007505_caseD_2;
          case 3:
            goto switchD_10007505_caseD_3;
          }
          goto switchD_10007505_caseD_1;
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
            goto switchD_10007505_caseD_2;
          case 3:
            goto switchD_10007505_caseD_3;
          }
          goto switchD_10007505_caseD_1;
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
            goto switchD_10007505_caseD_2;
          case 3:
            goto switchD_10007505_caseD_3;
          }
          goto switchD_10007505_caseD_1;
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
switchD_10007505_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10007505_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10007505_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10007505_caseD_0:
  return param_1;
}



// Function: _memset @ 0x10007810

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



// Function: FUN_10007868 @ 0x10007868

int __cdecl FUN_10007868(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  DWORD *pDVar6;
  HANDLE hFile;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_10007410();
  iVar8 = 0;
  DVar1 = FUN_10004319(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_10004319(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_10004319(param_1,param_2,0);
        hFile = (HANDLE)FUN_100065d8(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_10004092();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_1000409b();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x100078d5;
      iVar3 = FUN_10007ed5(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_10006793(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_1000409b();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_10004092();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_10007ed5(param_1,iVar3);
    }
    FUN_10004319(param_1,DVar1,0);
  }
  return iVar8;
}



// Function: FUN_1000798d @ 0x1000798d

int __cdecl
FUN_1000798d(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10009540;
  puStack_10 = &LAB_10006124;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000d938 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000d938 = 2;
    }
    else {
      DAT_1000d938 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10007bb1(param_3,param_4);
  }
  if (DAT_1000d938 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000d938 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000d930;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10007410();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10007410();
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



// Function: FUN_10007bb1 @ 0x10007bb1

int __cdecl FUN_10007bb1(char *param_1,int param_2)

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



// Function: FUN_10007bdc @ 0x10007bdc

BOOL __cdecl
FUN_10007bdc(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_10009558;
  puStack_10 = &LAB_10006124;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000d93c;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000d93c == 0) {
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
  DAT_1000d93c = iVar3;
  if (DAT_1000d93c != 2) {
    if (DAT_1000d93c == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000d930;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10007410();
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
    param_6 = DAT_1000d920;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10007d25 @ 0x10007d25

uint __cdecl FUN_10007d25(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1000d920 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1000da8c);
    bVar1 = DAT_1000da88 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1000da8c);
      this = (void *)0x13;
      FUN_10005fb6(0x13);
    }
    param_1 = FUN_10007d94(this,param_1);
    if (bVar1) {
      FUN_10006017(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1000da8c);
    }
  }
  return param_1;
}



// Function: FUN_10007d94 @ 0x10007d94

uint __thiscall FUN_10007d94(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000d920 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000cc8c < 2) {
        uVar2 = (byte)PTR_DAT_1000ca80[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10007e60(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000ca80[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000798d(DAT_1000d920,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_10007e60 @ 0x10007e60

uint __thiscall FUN_10007e60(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000ca80 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000ca80[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10007bdc(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10007ed5 @ 0x10007ed5

int __cdecl FUN_10007ed5(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_10004092();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_1000dd00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}



// Function: FUN_10007fd0 @ 0x10007fd0

byte * __cdecl FUN_10007fd0(byte *param_1,byte *param_2)

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



// Function: FUN_10008010 @ 0x10008010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10008010(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1000da8c;
  if (DAT_1000d920 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000805e;
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
LAB_1000805e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1000da8c = _DAT_1000da8c + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1000da88;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1000da8c = iVar2;
      FUN_10005fb6(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_100080bf;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_100082d5(this,uVar8);
      uVar7 = FUN_100082d5(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_100080bf:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1000da8c = _DAT_1000da8c + -1;
      UNLOCK();
    }
    else {
      FUN_10006017(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_100080e0 @ 0x100080e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100080e0(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1000da8c;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1000d920 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000813f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000813f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1000da8c = _DAT_1000da8c + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1000da88;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1000da8c = iVar2;
        FUN_10005fb6(0x13);
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
        uVar7 = FUN_100082d5(param_3,uVar7);
        uVar5 = FUN_100082d5(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_100081b5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_100081b5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1000da8c = _DAT_1000da8c + -1;
        UNLOCK();
      }
      else {
        FUN_10006017(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_100082d5 @ 0x100082d5

uint __thiscall FUN_100082d5(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000d920 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000cc8c < 2) {
        uVar2 = (byte)PTR_DAT_1000ca80[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10007e60(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000ca80[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000798d(DAT_1000d920,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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




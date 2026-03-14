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
FUN_10001020(void *this,int param_1,undefined4 param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,int param_13)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(undefined4 *)((int)this + 0x2cf) = param_2;
  *(undefined4 *)((int)this + 0x2b4) = param_10;
  *(undefined4 *)((int)this + 0x2d3) = param_4;
  *(undefined4 *)((int)this + 0x2ac) = param_8;
  *(undefined4 *)((int)this + 0x2b8) = param_11;
  *(undefined4 *)((int)this + 0x2b0) = param_9;
  *(int *)((int)this + 0x31c) = param_13 * 0xf;
  *(undefined4 *)((int)this + 700) = param_12;
  *(undefined4 *)((int)this + 0x2a8) = param_7;
  *(undefined1 *)((int)this + 0x313) = (undefined1)param_5;
  uVar2 = 0xffffffff;
  *(undefined1 *)((int)this + 800) = 1;
  *(undefined1 *)((int)this + 0x321) = 1;
  *(int *)((int)this + 0x314) = param_6;
  *(undefined4 *)((int)this + 0x326) = 1;
  *(undefined1 *)((int)this + 0x32a) = 1;
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
  pcVar5 = (char *)((int)this + 0x2c0);
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
  *(int *)((int)this + 0x2d7) = param_1;
  *(undefined4 *)((int)this + 0x2e7) = 1000;
  *(undefined4 *)((int)this + 0x2f7) = 0;
  *(undefined4 *)((int)this + 0x2f3) = 0;
  *(undefined4 *)((int)this + 0x2ef) = 0;
  *(undefined4 *)((int)this + 0x2eb) = 0;
  *(undefined4 *)((int)this + 0x2e3) = 0;
  if (param_1 == 0) {
    return;
  }
  if (((param_6 == 0) || (param_6 == 1)) || (param_6 == 2)) {
    RegisterDynGroup((int)this + 0x2db);
    CreateObject0(&DAT_100100a8,&DAT_100114b8,&DAT_1000fd18,param_5,param_4,0);
    RemoveGroup(&DAT_100100a8,(int)this + 0x2db);
  }
  if (param_6 == 0) {
    TakeWood((int)this + 0x2db);
  }
  else if (param_6 != 1) {
    if (param_6 != 2) {
      *(undefined4 *)((int)this + 0x318) = 0xf;
      return;
    }
    goto LAB_100011a4;
  }
  TakeFood((int)this + 0x2db);
LAB_100011a4:
  TakeStone((int)this + 0x2db);
  *(undefined4 *)((int)this + 0x318) = 0xf;
  return;
}



// Function: FUN_100011d0 @ 0x100011d0

void __thiscall
FUN_100011d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)((int)this + 0x2ac) = param_3;
  *(undefined4 *)((int)this + 0x2b0) = param_4;
  *(undefined4 *)((int)this + 0x2b4) = param_5;
  *(undefined4 *)((int)this + 0x2b8) = param_6;
  *(undefined4 *)((int)this + 700) = param_7;
  *(undefined4 *)((int)this + 0x2a8) = param_2;
  *(undefined4 *)((int)this + 0x2d3) = param_1;
  return;
}



// Function: FUN_10001220 @ 0x10001220

void __fastcall FUN_10001220(int param_1)

{
  if ((*(int *)(param_1 + 0x2d7) != 0) && (*(int *)(param_1 + 0x2d7) != 3)) {
    FUN_10001380(param_1);
    FUN_100014a0(param_1);
  }
  if (*(int *)(param_1 + 0x2d7) == 3) {
    if (3 < *(int *)(param_1 + 0x2e3)) {
      *(int *)(param_1 + 0x2e3) = *(int *)(param_1 + 0x2e3) + -2;
    }
    if (3 < *(int *)(param_1 + 0x2e7)) {
      *(int *)(param_1 + 0x2e7) = *(int *)(param_1 + 0x2e7) + -2;
    }
    if (3 < *(int *)(param_1 + 0x2eb)) {
      *(int *)(param_1 + 0x2eb) = *(int *)(param_1 + 0x2eb) + -2;
    }
    if (3 < *(int *)(param_1 + 0x2f7)) {
      *(int *)(param_1 + 0x2f7) = *(int *)(param_1 + 0x2f7) + -2;
    }
    if (3 < *(int *)(param_1 + 0x2f3)) {
      *(int *)(param_1 + 0x2f3) = *(int *)(param_1 + 0x2f3) + -2;
    }
    if (3 < *(int *)(param_1 + 0x2ef)) {
      *(int *)(param_1 + 0x2ef) = *(int *)(param_1 + 0x2ef) + -2;
    }
  }
  return;
}



// Function: FUN_100012d0 @ 0x100012d0

void __fastcall FUN_100012d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 100;
  *(undefined4 *)(param_1 + 0x30f) = 300;
  *(undefined4 *)(param_1 + 0x30b) = 300;
  *(undefined4 *)(param_1 + 0x2fb) = 100;
  *(undefined4 *)(param_1 + 0x303) = 100;
  *(undefined4 *)(param_1 + 0x2ff) = 200;
  *(undefined4 *)(param_1 + 0x307) = 500;
  iVar2 = 0xc;
  do {
    if (iVar1 < *(int *)(param_1 + 0x2e3)) {
      *(int *)(param_1 + 0x2fb) = *(int *)(param_1 + 0x2fb) + -8;
    }
    if (iVar1 < *(int *)(param_1 + 0x2eb)) {
      *(int *)(param_1 + 0x303) = *(int *)(param_1 + 0x303) + -8;
    }
    if (iVar1 < *(int *)(param_1 + 0x2e7)) {
      *(int *)(param_1 + 0x2ff) = *(int *)(param_1 + 0x2ff) + -0x10;
    }
    if (iVar1 < *(int *)(param_1 + 0x2f3)) {
      *(int *)(param_1 + 0x30b) = *(int *)(param_1 + 0x30b) + -0x18;
    }
    if (iVar1 < *(int *)(param_1 + 0x2f7)) {
      *(int *)(param_1 + 0x30f) = *(int *)(param_1 + 0x30f) + -0x18;
    }
    if (iVar1 < *(int *)(param_1 + 0x2ef)) {
      *(int *)(param_1 + 0x307) = *(int *)(param_1 + 0x307) + -0x28;
    }
    iVar1 = iVar1 * 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// Function: FUN_10001380 @ 0x10001380

void __fastcall FUN_10001380(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10001580(param_1);
  iVar2 = 0;
  *(int *)(param_1 + 0x318) = iVar1;
  if (0 < iVar1) {
    do {
      if (*(char *)(param_1 + 800) == '\0') break;
      if ((0 < *(int *)(param_1 + 0x322)) && (4 < *(int *)(param_1 + 0x2e7))) {
        switch(*(undefined4 *)(param_1 + 0x314)) {
        case 0:
          *(int *)(param_1 + 0x2e3) = *(int *)(param_1 + 0x2e3) + 0x19;
          break;
        case 1:
          *(int *)(param_1 + 0x2e7) = *(int *)(param_1 + 0x2e7) + 0x14;
          break;
        case 2:
          *(int *)(param_1 + 0x2eb) = *(int *)(param_1 + 0x2eb) + 0x19;
          break;
        case 3:
          *(int *)(param_1 + 0x2ef) = *(int *)(param_1 + 0x2ef) + 5;
          break;
        case 4:
          *(int *)(param_1 + 0x2f3) = *(int *)(param_1 + 0x2f3) + 0xf;
          break;
        case 5:
          *(int *)(param_1 + 0x2f7) = *(int *)(param_1 + 0x2f7) + 0xf;
        }
        *(int *)(param_1 + 0x2e7) = *(int *)(param_1 + 0x2e7) + -5;
        *(int *)(param_1 + 0x322) = *(int *)(param_1 + 0x322) + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (*(int *)(param_1 + 0x2d7) != 2) {
    *(int *)(param_1 + 0x322) = *(int *)(param_1 + 0x322) + (3 - *(int *)(param_1 + 0x326)) * iVar1;
    AddResource(*(char *)(param_1 + 0x313) + -1,1,*(int *)(param_1 + 0x326) * iVar1);
    FUN_100012d0(param_1);
    return;
  }
  *(int *)(param_1 + 0x322) = *(int *)(param_1 + 0x322) + iVar1;
  FUN_100012d0(param_1);
  return;
}



// Function: FUN_100014a0 @ 0x100014a0

void __fastcall FUN_100014a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x322) < 0x3e9) {
    return;
  }
  iVar1 = FUN_10001580(param_1);
  if (*(int *)(param_1 + 0x31c) <= iVar1) {
    return;
  }
  iVar1 = FUN_10001580(param_1);
  *(int *)(param_1 + 0x318) = iVar1;
  iVar1 = *(int *)(param_1 + 0x314);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) goto LAB_1000155f;
  CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_1000fd18,*(undefined1 *)(param_1 + 0x313),
                *(undefined4 *)(param_1 + 0x2d3),0);
  iVar1 = *(int *)(param_1 + 0x314);
  if (iVar1 == 0) {
    TakeWood(&DAT_100100a8);
LAB_1000152e:
    TakeFood(&DAT_100100a8);
LAB_1000153c:
    TakeStone(&DAT_100100a8);
  }
  else {
    if (iVar1 == 1) goto LAB_1000152e;
    if (iVar1 == 2) goto LAB_1000153c;
  }
  RemoveGroup(&DAT_100100a8,param_1 + 0x2db);
LAB_1000155f:
  *(int *)(param_1 + 0x322) = *(int *)(param_1 + 0x322) + -1000;
  *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
  return;
}



// Function: FUN_10001580 @ 0x10001580

int __fastcall FUN_10001580(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x314);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    iVar1 = GetTotalAmount0(param_1 + 0x2db);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x318);
    if (*(int *)(param_1 + 0x31c) <= iVar1) {
      return *(int *)(param_1 + 0x31c);
    }
  }
  return iVar1;
}



// Function: FUN_100015c0 @ 0x100015c0

void __thiscall FUN_100015c0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x2d7) == 0) {
    return;
  }
  if (*(char *)((int)this + 0x321) == '\0') {
    return;
  }
  if ((*(char *)((int)this + 0x32a) == '\0') ||
     (iVar1 = GetUnitsAmount2(*(undefined4 *)((int)this + 0x2d3),&DAT_10010ae0,param_1), iVar1 == 0)
     ) goto switchD_1000163a_default;
  iVar1 = *(int *)((int)this + 0x2d7);
  if (iVar1 == 1) {
    uVar2 = AskMultilineQuestion(9,s__PAGE1_1000c09c,0,s_VI1_1_VI1_2_VI1_3_VI1_4_1000c0a4);
    switch(uVar2) {
    case 0:
      goto switchD_1000163a_caseD_0;
    case 1:
      uVar2 = FUN_10001870((int)this);
      *(char *)((int)this + 0x32a) = (char)uVar2;
      break;
    case 2:
switchD_1000163a_caseD_2:
      uVar2 = FUN_100018a0(this);
      *(char *)((int)this + 0x32a) = (char)uVar2;
      break;
    case 3:
switchD_1000163a_caseD_3:
      *(undefined1 *)((int)this + 0x32a) = 0;
    }
  }
  else {
    if ((iVar1 != 2) && (iVar1 != 3)) goto switchD_1000163a_default;
    iVar1 = AskMultilineQuestion(9,s__PAGE1_1000c09c,0,s_VI1_1_VI1_3_VI1_4_1000c088);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 != 2) goto switchD_1000163a_default;
        goto switchD_1000163a_caseD_3;
      }
      goto switchD_1000163a_caseD_2;
    }
switchD_1000163a_caseD_0:
    FUN_100016e0((int)this);
    *(undefined1 *)((int)this + 0x32a) = 1;
  }
switchD_1000163a_default:
  if ((*(char *)((int)this + 0x32a) == '\0') &&
     (iVar1 = GetUnitsAmount2(*(undefined4 *)((int)this + 0x2d3),&DAT_10010ae0,param_1), iVar1 == 0)
     ) {
    *(undefined1 *)((int)this + 0x32a) = 1;
  }
  return;
}



// Function: FUN_100016e0 @ 0x100016e0

void __fastcall FUN_100016e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_10001580(param_1);
  iVar1 = *(int *)(param_1 + 0x2d7);
  if (iVar1 == 1) {
    ShowPageParam(s__PAGE11_1000c0cc,param_1 + 0x2c0,
                  (int)&DAT_10011540 + *(int *)(param_1 + 0x314) * 0xf,&DAT_10011540,
                  *(undefined4 *)(param_1 + 0x2e3),&DAT_1001154f,*(undefined4 *)(param_1 + 0x2e7),
                  &DAT_1001155e,*(undefined4 *)(param_1 + 0x2eb),&DAT_1001156d,
                  *(undefined4 *)(param_1 + 0x2ef),&DAT_1001157c,*(undefined4 *)(param_1 + 0x2f3),
                  &DAT_1001158b,*(undefined4 *)(param_1 + 0x2f7),
                  (3 - *(int *)(param_1 + 0x326)) * iVar2,*(int *)(param_1 + 0x326) * iVar2,iVar2,
                  *(undefined4 *)(param_1 + 0x322),iVar2);
    return;
  }
  if (iVar1 == 2) {
    ShowPageParam(s__PAGE40_1000c0c4,param_1 + 0x2c0,
                  (int)&DAT_10011540 + *(int *)(param_1 + 0x314) * 0xf,&DAT_10011540,
                  *(undefined4 *)(param_1 + 0x2e3),&DAT_1001154f,*(undefined4 *)(param_1 + 0x2e7),
                  &DAT_1001155e,*(undefined4 *)(param_1 + 0x2eb),&DAT_1001156d,
                  *(undefined4 *)(param_1 + 0x2ef),&DAT_1001157c,*(undefined4 *)(param_1 + 0x2f3),
                  &DAT_1001158b,*(undefined4 *)(param_1 + 0x2f7),*(undefined4 *)(param_1 + 0x322),
                  iVar2);
    return;
  }
  if (iVar1 == 3) {
    ShowPageParam(s__PAGE41_1000c0bc,param_1 + 0x2c0,&DAT_10011540,*(undefined4 *)(param_1 + 0x2e3),
                  &DAT_1001154f,*(undefined4 *)(param_1 + 0x2e7),&DAT_1001155e,
                  *(undefined4 *)(param_1 + 0x2eb),&DAT_1001156d,*(undefined4 *)(param_1 + 0x2ef),
                  &DAT_1001157c,*(undefined4 *)(param_1 + 0x2f3),&DAT_1001158b,
                  *(undefined4 *)(param_1 + 0x2f7));
  }
  return;
}



// Function: FUN_10001870 @ 0x10001870

undefined4 __fastcall FUN_10001870(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = AskMultilineQuestion(9,s__PAGE12_1000c0d4,0,s_TPW1_0_TPW1_1_TPW1_2_TPW1_3_1000c0dc);
  *(undefined4 *)(param_1 + 0x326) = uVar1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



// Function: FUN_100018a0 @ 0x100018a0

undefined4 __fastcall FUN_100018a0(void *param_1)

{
  int iVar1;
  
LAB_100018aa:
  while (iVar1 = *(int *)((int)param_1 + 0x2d7), iVar1 == 1) {
    iVar1 = AskMultilineQuestion(9,s__PAGE13_1000c110,0,s_TR1_1_TR1_3_TR1_4_1000c118);
    if (iVar1 == 0) {
LAB_100018f7:
      FUN_10001940(param_1);
    }
    else {
      if (iVar1 == 1) goto LAB_10001922;
      if (iVar1 == 2) {
        return 1;
      }
    }
  }
  if (iVar1 == 2) {
    iVar1 = AskMultilineQuestion(9,s__PAGE13_1000c110,0,s_TR1_1_TR1_4_1000c104);
    if (iVar1 == 0) goto LAB_100018f7;
  }
  else {
    if (iVar1 != 3) goto LAB_100018aa;
    iVar1 = AskMultilineQuestion(9,s__PAGE13_1000c110,0,s_TR1_3_TR1_4_1000c0f8);
    if (iVar1 == 0) {
LAB_10001922:
      FUN_10001a70(param_1);
      goto LAB_100018aa;
    }
  }
  if (iVar1 == 1) {
    return 1;
  }
  goto LAB_100018aa;
}



// Function: FUN_10001940 @ 0x10001940

void __fastcall FUN_10001940(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  
  uVar1 = AskMultilineQuestion(9,s__PAGE5_1000c140,0,s_R1_R2_R3_R4_R5_R6_1000c148);
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
  uVar1 = AskMultilineQuestion(9,s__PAGE6_1000c138,0,s_R1_R2_R3_R4_R5_R6_1000c148);
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
  FUN_100012d0((int)param_1);
  iVar2 = FUN_10002330(param_1,pvVar5);
  iVar3 = FUN_10002330(param_1,pvVar4);
  ShowPageParam(s__PAGE131_1000c12c,(int)&DAT_10011540 + (int)pvVar5 * 0xf,100,
                (int)&DAT_10011540 + (int)pvVar4 * 0xf,(iVar2 * 100) / iVar3);
  return;
}



// Function: FUN_10001a70 @ 0x10001a70

void __fastcall FUN_10001a70(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  iVar2 = AskMultilineQuestion(9,s__PAGE133_1000c19c,0,s_NO1_1_NO1_2_NO1_3_NO1_4_NO1_5_NO_1000c1a8);
  iVar3 = AskMultilineQuestion(9,s__PAGE1331_1000c17c,0,s_OD1_0_OD1_1_OD1_2_1000c188);
  if (iVar3 == 0) {
    pvVar1 = (void *)((int)param_1 + iVar2 * 0x44);
    iVar2 = GetTotalAmount0(pvVar1);
    if (iVar2 != 0) {
      iVar2 = (int)&DAT_10011540 + *(int *)((int)pvVar1 + 0x11) * 0xf;
      iVar3 = (int)&DAT_10011540 + *(int *)((int)pvVar1 + 9) * 0xf;
      ShowPageParam(s__PAGE7_1000c164,(int)pvVar1 + 0x29,iVar3,iVar2,iVar3,
                    *(undefined4 *)((int)pvVar1 + 0xd),iVar2,*(undefined4 *)((int)pvVar1 + 0x15));
      return;
    }
    ShowPage(s__PAGE8_1000c15c);
  }
  else {
    if (iVar3 == 1) {
      pvVar1 = (void *)((int)param_1 + iVar2 * 0x44);
      iVar3 = GetTotalAmount0(pvVar1);
      if (iVar3 == 0) {
        FUN_100024a0(pvVar1,*(undefined4 *)((int)param_1 + 0x2d7),(char *)((int)param_1 + 0x2c0),
                     *(undefined4 *)((int)param_1 + 0x2cf),
                     CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)((int)param_1 + 0x313))
                     ,*(undefined4 *)((int)param_1 + 0x2d3));
      }
      FUN_10001bc0(param_1,iVar2);
      return;
    }
    if (iVar3 == 2) {
      pvVar1 = (void *)((int)param_1 + iVar2 * 0x44);
      iVar2 = GetTotalAmount0(pvVar1);
      if (iVar2 != 0) {
        SelectUnits(pvVar1,0);
        SelDie(*(undefined1 *)((int)pvVar1 + 8));
        ShowPage(s__PAGE3_1000c174);
        return;
      }
      ShowPage(s__PAGE2_1000c16c);
      return;
    }
  }
  return;
}



// Function: FUN_10001bc0 @ 0x10001bc0

void __thiscall FUN_10001bc0(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = AskMultilineQuestion(9,s__PAGE4_1000c1e8,0,*(undefined4 *)((int)this + 0x2a8));
  uVar2 = AskMultilineQuestion(9,s__PAGE5_1000c140,0,s_R1_R2_R3_R4_R5_R6_1000c148);
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
  uVar2 = AskMultilineQuestion(9,s__PAGE6_1000c138,0,s_R1_R2_R3_R4_R5_R6_1000c148);
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
  iVar1 = *(int *)((int)this + iVar1 * 4 + 0x2ac);
  this_00 = (void *)((int)this + param_1 * 0x44);
  FUN_10002510(this_00,(char *)(iVar1 + 0x2c0),*(undefined4 *)(iVar1 + 0x2cf),iVar4,iVar3);
  SelectUnits(this_00,0);
  SelSendTo(*(undefined1 *)((int)this_00 + 8),*(undefined4 *)((int)this + 0x2d3),0,0);
  *(undefined1 *)((int)this_00 + 0x19) = 0;
  return;
}



// Function: FUN_10001d00 @ 0x10001d00

uint __fastcall FUN_10001d00(void *param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  uint uStack_8;
  undefined3 uVar6;
  
  uVar6 = (undefined3)((uint)in_EAX >> 8);
  uVar1 = CONCAT31(uVar6,*(char *)((int)param_1 + 0x321));
  if (*(char *)((int)param_1 + 0x321) != '\0') {
    iVar2 = GetUnitsAmount2(*(undefined4 *)((int)param_1 + 0x2d3),&DAT_100100d8,
                            CONCAT31(uVar6,*(undefined1 *)((int)param_1 + 0x313)));
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = 0;
      pvVar8 = param_1;
      do {
        if (*(char *)((int)pvVar8 + 0x19) == '\0') {
          iVar3 = GetUnitsAmount1(*(undefined4 *)((int)param_1 + 0x2d3),pvVar8);
          if (iVar3 != 0) {
            pvVar8 = (void *)((int)param_1 + iVar2 * 0x44);
            *(undefined1 *)((int)pvVar8 + 0x19) = 1;
            FUN_10001e90(param_1,(int)pvVar8);
            FUN_10001ed0(param_1,(int)pvVar8);
            uVar5 = FUN_10004540((int)pvVar8,*(undefined4 *)((int)pvVar8 + 0x38),
                                 *(int *)((int)pvVar8 + 0x3c));
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
        }
        iVar2 = iVar2 + 1;
        pvVar8 = (void *)((int)pvVar8 + 0x44);
      } while (iVar2 < 10);
      uStack_8 = 0;
      piVar7 = (int *)((int)param_1 + 0x2ac);
      do {
        if (*piVar7 != 0) {
          iVar3 = 0;
          iVar9 = 0;
          do {
            if (*(char *)(*piVar7 + iVar9 + 0x19) != '\0') {
              iVar4 = GetUnitsAmount1(*(undefined4 *)((int)param_1 + 0x2d3),*piVar7 + iVar9);
              if (iVar4 != 0) {
                iVar3 = iVar3 * 0x44;
                *(undefined1 *)(*(int *)((int)param_1 + uStack_8 * 4 + 0x2ac) + 0x19 + iVar3) = 0;
                if (*(int *)((int)param_1 + 0x2d7) == 3) {
                  pvVar8 = (void *)((int)param_1 + iVar2 * 0x44);
                  FUN_10001e90(param_1,(int)pvVar8);
                  FUN_10001ed0(param_1,(int)pvVar8);
                }
                else {
                  pvVar8 = *(void **)((int)param_1 + uStack_8 * 4 + 0x2ac);
                  FUN_10001f30(param_1,(int)(iVar3 + (int)pvVar8),pvVar8);
                }
                iVar3 = *(int *)((int)param_1 + uStack_8 * 4 + 0x2ac) + iVar3;
                uVar5 = FUN_10004540(iVar3,*(undefined4 *)(iVar3 + 0x3c),*(int *)(iVar3 + 0x38));
                return CONCAT31((int3)((uint)uVar5 >> 8),1);
              }
            }
            iVar9 = iVar9 + 0x44;
            iVar3 = iVar3 + 1;
          } while (iVar9 < 0x2a8);
        }
        piVar7 = piVar7 + 1;
        uStack_8 = uStack_8 + 1;
      } while ((int)uStack_8 < 5);
      return uStack_8 & 0xffffff00;
    }
  }
  return uVar1 & 0xffffff00;
}



// Function: FUN_10001e90 @ 0x10001e90

void __thiscall FUN_10001e90(void *this,int param_1)

{
  FUN_100023a0(this,*(undefined4 *)(param_1 + 9),*(int *)(param_1 + 0xd));
  FUN_100023a0(this,*(undefined4 *)(param_1 + 0x11),*(int *)(param_1 + 0x15));
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}



// Function: FUN_10001ed0 @ 0x10001ed0

void __thiscall FUN_10001ed0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100022c0(this,*(undefined4 *)(param_1 + 9));
  if (299 < iVar1) {
    *(undefined4 *)(param_1 + 0xd) = 300;
    FUN_100023a0(this,*(undefined4 *)(param_1 + 9),-300);
    return;
  }
  uVar2 = FUN_100022c0(this,*(undefined4 *)(param_1 + 9));
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  iVar1 = FUN_100022c0(this,*(undefined4 *)(param_1 + 9));
  FUN_100023a0(this,*(undefined4 *)(param_1 + 9),-iVar1);
  return;
}



// Function: FUN_10001f30 @ 0x10001f30

void __thiscall FUN_10001f30(void *this,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)((int)this + 0x2d7);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 1) {
      iVar1 = FUN_10002330(param_2,*(undefined4 *)(param_1 + 9));
      iVar1 = iVar1 * *(int *)(param_1 + 0xd);
      iVar2 = FUN_10002480(*(int *)(param_1 + 0x11));
      iVar3 = GetResource(*(char *)((int)this + 0x313) + -1,iVar2);
      iVar2 = FUN_10002330(param_2,*(undefined4 *)(param_1 + 0x11));
      iVar3 = iVar3 * iVar2;
      if (iVar1 <= iVar3) {
        uVar4 = *(undefined4 *)(param_1 + 0xd);
        iVar2 = FUN_10002480(*(int *)(param_1 + 9));
        AddResource(*(char *)((int)this + 0x313) + -1,iVar2,uVar4);
        *(undefined4 *)(param_1 + 0xd) = 0;
        iVar2 = FUN_10002330(param_2,*(undefined4 *)(param_1 + 0x11));
        *(int *)(param_1 + 0x15) = iVar1 / iVar2;
        iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
        iVar1 = GetResource(*(char *)((int)this + 0x313) + -1,iVar1);
        iVar1 = iVar1 - *(int *)(param_1 + 0x15);
        iVar2 = FUN_10002480(*(int *)(param_1 + 0x11));
        SetResource(*(char *)((int)this + 0x313) + -1,iVar2,iVar1);
        return;
      }
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      uVar4 = GetResource(*(char *)((int)this + 0x313) + -1,iVar1);
      *(undefined4 *)(param_1 + 0x15) = uVar4;
      uVar4 = 0;
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      SetResource(*(char *)((int)this + 0x313) + -1,iVar1,uVar4);
      iVar1 = FUN_10002330(param_2,*(undefined4 *)(param_1 + 9));
      *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar3 / iVar1;
      iVar1 = FUN_10002330(param_2,*(undefined4 *)(param_1 + 9));
      iVar3 = iVar3 / iVar1;
      iVar1 = FUN_10002480(*(int *)(param_1 + 9));
      AddResource(*(char *)((int)this + 0x313) + -1,iVar1,iVar3);
      return;
    }
    if ((iVar1 == 2) || (iVar1 == 3)) {
      uVar4 = *(undefined4 *)(param_1 + 0xd);
      iVar1 = FUN_10002480(*(int *)(param_1 + 9));
      AddResource(*(char *)((int)this + 0x313) + -1,iVar1,uVar4);
      uVar4 = *(undefined4 *)(param_1 + 0x15);
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      AddResource(*(char *)((int)this + 0x313) + -1,iVar1,uVar4);
      *(undefined4 *)(param_1 + 0x15) = 0;
      *(undefined4 *)(param_1 + 0xd) = 0;
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      iVar1 = GetResource(*(char *)((int)this + 0x313) + -1,iVar1);
      if (299 < iVar1) {
        *(undefined4 *)(param_1 + 0x15) = 300;
        iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
        iVar1 = GetResource(*(char *)((int)this + 0x313) + -1,iVar1);
        iVar1 = iVar1 + -300;
        iVar2 = FUN_10002480(*(int *)(param_1 + 0x11));
        SetResource(*(char *)((int)this + 0x313) + -1,iVar2,iVar1);
        return;
      }
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      uVar4 = GetResource(*(char *)((int)this + 0x313) + -1,iVar1);
      *(undefined4 *)(param_1 + 0x15) = uVar4;
      uVar4 = 0;
      iVar1 = FUN_10002480(*(int *)(param_1 + 0x11));
      SetResource(*(char *)((int)this + 0x313) + -1,iVar1,uVar4);
      return;
    }
  }
  else if ((iVar1 == 1) || (iVar1 == 2)) {
    iVar1 = FUN_10002330(this,*(undefined4 *)(param_1 + 9));
    iVar1 = iVar1 * *(int *)(param_1 + 0xd);
    iVar2 = FUN_10002330(this,*(undefined4 *)(param_1 + 0x11));
    iVar3 = FUN_100022c0(this,*(undefined4 *)(param_1 + 0x11));
    iVar2 = iVar2 * iVar3;
    if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
      FUN_100023a0(this,*(undefined4 *)(param_1 + 9),*(int *)(param_1 + 0xd));
      *(undefined4 *)(param_1 + 0xd) = 0;
      iVar2 = FUN_10002330(this,*(undefined4 *)(param_1 + 0x11));
      *(int *)(param_1 + 0x15) = iVar1 / iVar2;
      FUN_100023a0(this,*(undefined4 *)(param_1 + 0x11),-(iVar1 / iVar2));
      return;
    }
    uVar4 = FUN_100022c0(this,*(undefined4 *)(param_1 + 0x11));
    *(undefined4 *)(param_1 + 0x15) = uVar4;
    iVar1 = FUN_100022c0(this,*(undefined4 *)(param_1 + 0x11));
    FUN_100023a0(this,*(undefined4 *)(param_1 + 0x11),-iVar1);
    iVar1 = FUN_10002330(this,*(undefined4 *)(param_1 + 9));
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar2 / iVar1;
    iVar1 = FUN_10002330(this,*(undefined4 *)(param_1 + 9));
    FUN_100023a0(this,*(undefined4 *)(param_1 + 9),iVar2 / iVar1);
  }
  return;
}



// Function: FUN_100022c0 @ 0x100022c0

undefined4 __thiscall FUN_100022c0(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return *(undefined4 *)((int)this + 0x2e3);
  case 1:
    return *(undefined4 *)((int)this + 0x2e7);
  case 2:
    return *(undefined4 *)((int)this + 0x2eb);
  case 3:
    return *(undefined4 *)((int)this + 0x2ef);
  case 4:
    return *(undefined4 *)((int)this + 0x2f3);
  case 5:
    return *(undefined4 *)((int)this + 0x2f7);
  default:
    return 0;
  }
}



// Function: FUN_10002330 @ 0x10002330

undefined4 __thiscall FUN_10002330(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return *(undefined4 *)((int)this + 0x2fb);
  case 1:
    return *(undefined4 *)((int)this + 0x2ff);
  case 2:
    return *(undefined4 *)((int)this + 0x303);
  case 3:
    return *(undefined4 *)((int)this + 0x307);
  case 4:
    return *(undefined4 *)((int)this + 0x30b);
  case 5:
    return *(undefined4 *)((int)this + 0x30f);
  default:
    return 0;
  }
}



// Function: FUN_100023a0 @ 0x100023a0

void __thiscall FUN_100023a0(void *this,undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((int)this + 0x2e3) = *(int *)((int)this + 0x2e3) + param_2;
    return;
  case 1:
    *(int *)((int)this + 0x2e7) = *(int *)((int)this + 0x2e7) + param_2;
    return;
  case 2:
    *(int *)((int)this + 0x2eb) = *(int *)((int)this + 0x2eb) + param_2;
    return;
  case 3:
    *(int *)((int)this + 0x2ef) = *(int *)((int)this + 0x2ef) + param_2;
    return;
  case 4:
    *(int *)((int)this + 0x2f3) = *(int *)((int)this + 0x2f3) + param_2;
    return;
  case 5:
    *(int *)((int)this + 0x2f7) = *(int *)((int)this + 0x2f7) + param_2;
  }
  return;
}



// Function: FUN_10002450 @ 0x10002450

void __thiscall FUN_10002450(void *this,int param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)((int)this + 800) = param_2;
  *(int *)((int)this + 0x31c) = param_1 * 0xf;
  *(undefined1 *)((int)this + 0x321) = param_3;
  return;
}



// Function: FUN_10002480 @ 0x10002480

int FUN_10002480(int param_1)

{
  if (param_1 == 3) {
    return 1;
  }
  if (param_1 == 1) {
    param_1 = 3;
  }
  return param_1;
}



// Function: FUN_100024a0 @ 0x100024a0

void __thiscall
FUN_100024a0(void *this,undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  CreateObject0(this,&DAT_1000f890,&DAT_100100d8,param_4,param_5,0);
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
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
  *(undefined4 *)((int)this + 0x40) = param_1;
  *(undefined4 *)((int)this + 0x38) = param_3;
  *(char *)((int)this + 8) = (char)param_4;
  *(undefined1 *)((int)this + 0x19) = 0;
  *(undefined4 *)((int)this + 0x15) = 0;
  *(undefined4 *)((int)this + 0xd) = 0;
  return;
}



// Function: FUN_10002510 @ 0x10002510

void __thiscall
FUN_10002510(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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



// Function: FUN_10002560 @ 0x10002560

void __thiscall
FUN_10002560(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)((int)this + 8) = param_5;
  *(undefined4 *)this = param_4;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = param_6;
  *(undefined4 *)((int)this + 0x10) = param_7;
  *(undefined1 *)((int)this + 0x14) = 0;
  CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_10010ad8,param_4,param_1,0);
  RemoveGroup(&DAT_100100a8,(int)this + 0x15);
  CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_10010ad8,param_4,param_2,0);
  RemoveGroup(&DAT_100100a8,(int)this + 0x1d);
  CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_10010ad8,param_4,param_3,0);
  RemoveGroup(&DAT_100100a8,(int)this + 0x25);
  RunTimer(*(undefined1 *)((int)this + 0xc),10);
  RunTimer(*(undefined1 *)((int)this + 0x10),param_5);
  return;
}



// Function: FUN_10002630 @ 0x10002630

void __thiscall
FUN_10002630(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(*(undefined1 *)((int)this + 0xc));
  if ((cVar1 != '\0') && (*(int *)((int)this + 4) != 0)) {
    RunTimer(*(undefined1 *)((int)this + 0xc),0x14);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    iVar2 = GetTotalAmount0((int)this + 0x15);
    if (iVar2 != 0) {
      CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_100100a0,*(undefined1 *)this,param_1,0);
      SelectUnits(&DAT_100100a8,0);
      SelSendAndKill(*(undefined1 *)this,param_4,0,0);
      RemoveGroup(&DAT_100100a8,(int)this + 0x2d);
    }
    iVar2 = GetTotalAmount0((int)this + 0x1d);
    if (iVar2 != 0) {
      CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_100100a0,*(undefined1 *)this,param_2,0);
      SelectUnits(&DAT_100100a8,0);
      SelSendAndKill(*(undefined1 *)this,param_4,0,0);
      RemoveGroup(&DAT_100100a8,(int)this + 0x2d);
    }
    iVar2 = GetTotalAmount0((int)this + 0x25);
    if (iVar2 != 0) {
      CreateObject0(&DAT_100100a8,&DAT_1000f890,&DAT_1000fcc8,*(undefined1 *)this,param_3,0);
      SelectUnits(&DAT_100100a8,0);
      SelSendAndKill(*(undefined1 *)this,param_4,0,0);
      RemoveGroup(&DAT_100100a8,(int)this + 0x35);
    }
  }
  return;
}



// Function: FUN_10002780 @ 0x10002780

void __thiscall FUN_10002780(void *this,undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(*(undefined1 *)((int)this + 0x10));
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0((int)this + 0x2d);
    if (iVar2 < 0x33) {
      iVar2 = GetTotalAmount0((int)this + 0x35);
      if (iVar2 < 0x15) {
        *(undefined4 *)((int)this + 4) = param_1;
        *(undefined1 *)((int)this + 0x14) = 1;
        SelectUnits((int)this + 0x2d,0);
        SelectUnits((int)this + 0x35,1);
        SelSendAndKill(*(undefined1 *)this,param_2,0,0);
        RunTimer(*(undefined1 *)((int)this + 0x10),*(undefined4 *)((int)this + 8));
      }
    }
  }
  return;
}



// Function: OnInit @ 0x10002ac0

void OnInit(void)

{
                    /* 0x2ac0  1  OnInit */
  RegisterFormation(&DAT_1000f890,s__ALONE_1000c63c);
  RegisterFormation(&DAT_100114b8,s__LINE15PUS_1000c630);
  RegisterUnitType(&DAT_100100d8,s_GRUZ_Z_UN__1000c624);
  RegisterUnitType(&DAT_1000fd18,s_Krestian_Sved_en__1000c610);
  RegisterUnitType(&DAT_10010ae0,s_Gusar_evro_RU__1000c600);
  RegisterUnitType(&DAT_10010ad8,s_URTA_UN__1000c5f4);
  RegisterUnitType(&DAT_100100a0,s_Pehota_turki_AL__1000c5e0);
  RegisterUnitType(&DAT_1000fcc8,s_Strelec_Algir_AL__1000c5cc);
  RegisterDynGroup(&DAT_100100a8);
  RegisterVar(&DAT_100100a8,8);
  RegisterVar(&DAT_1000c060,1);
  RegisterVar(&DAT_100115a0,1);
  RegisterVar(&DAT_100115a1,1);
  RegisterVar(&DAT_1000fd28,0x32b);
  RegisterZone(&DAT_1000fcf8,s_ZGelpazar_1000c5c0);
  RegisterUnits(&DAT_1000fd08,s_GGelpazarLive_1000c5b0);
  RegisterUnits(&DAT_100107a0,s_GGelpazarProduse_1000c59c);
  RegisterUnits(&DAT_100114e0,s_GGelpazarTrade_1000c58c);
  RegisterZone(&DAT_1000f968,s_ZGelpazarTolk_1000c57c);
  RegisterZone(&DAT_10011518,s_ZG_S_1_1000c574);
  RegisterZone(&DAT_10011510,s_ZG_S_2_1000c56c);
  RegisterZone(&DAT_10011528,s_ZG_S_3_1000c564);
  RegisterZone(&DAT_10011520,s_ZG_S_4_1000c55c);
  RegisterZone(&DAT_10011538,s_ZG_S_5_1000c554);
  RegisterZone(&DAT_10011530,s_ZG_S_6_1000c54c);
  DAT_1000fffb = &DAT_1000fcf8;
  RegisterVar(&DAT_1000f978,0x32b);
  RegisterZone(&DAT_100100b0,s_ZSarikaya_1000c540);
  RegisterUnits(&DAT_100114f8,s_GSarikayaLive_1000c530);
  RegisterUnits(&DAT_1000f800,s_GSarikayaProduse_1000c51c);
  RegisterUnits(&DAT_100100b8,s_GSarikayaTrade_1000c50c);
  RegisterZone(&DAT_100100d0,s_ZSarikayaTolk_1000c4fc);
  RegisterZone(&DAT_1000f820,s_ZS_S_1_1000c4f4);
  RegisterZone(&DAT_1000f838,s_ZS_S_2_1000c4ec);
  RegisterZone(&DAT_1000f828,s_ZS_S_3_1000c4e4);
  RegisterZone(&DAT_1000f858,s_ZS_S_4_1000c4dc);
  RegisterZone(&DAT_1000f848,s_ZS_S_5_1000c4d4);
  RegisterZone(&DAT_1000f860,s_ZS_S_6_1000c4cc);
  DAT_1000fc4b = &DAT_100100b0;
  RegisterVar(&DAT_10010b28,0x32b);
  RegisterZone(&DAT_1000fd20,s_ZNalihan_1000c4c0);
  RegisterZone(&DAT_1000fd10,s_ZNalihanTolk_1000c4b0);
  RegisterZone(&DAT_1000f8c0,s_ZN_P1_1_1000c4a8);
  RegisterZone(&DAT_1000f8b8,s_ZN_P1_2_1000c4a0);
  RegisterZone(&DAT_1000f8b0,s_ZN_P1_3_1000c498);
  RegisterZone(&DAT_1000f8a8,s_ZN_P1_4_1000c490);
  RegisterZone(&DAT_1000f8a0,s_ZN_P1_5_1000c488);
  RegisterZone(&DAT_1000f898,s_ZN_P1_6_1000c480);
  DAT_10010dfb = &DAT_1000fd20;
  RegisterVar(&DAT_1000f4b8,0x32b);
  RegisterZone(&DAT_1000f7e8,s_ZMihalichik_1000c474);
  RegisterZone(&DAT_10010798,s_ZMihalichikTolk_1000c464);
  RegisterZone(&DAT_1000f880,s_ZM_P1_1_1000c45c);
  RegisterZone(&DAT_1000f878,s_ZM_P1_2_1000c454);
  RegisterZone(&DAT_1000f870,s_ZM_P1_3_1000c44c);
  RegisterZone(&DAT_1000f868,s_ZM_P1_4_1000c444);
  DAT_1000f78b = &DAT_1000f7e8;
  RegisterVar(&DAT_10010468,0x32b);
  RegisterZone(&DAT_100100c0,s_ZNalihanPost1_1000c434);
  RegisterZone(&DAT_1000fcf0,s_ZNPost1Tolk_1000c428);
  RegisterZone(&DAT_10010058,s_ZN_P1_P2_1_1000c41c);
  RegisterZone(&DAT_10010060,s_ZN_P1_P2_2_1000c410);
  RegisterZone(&DAT_10010090,s_ZN_P1_P2_3_1000c404);
  RegisterZone(&DAT_10010098,s_ZN_P1_P2_4_1000c3f8);
  RegisterZone(&DAT_10010080,s_ZN_P1_P2_5_1000c3ec);
  RegisterZone(&DAT_10010088,s_ZN_P1_P2_6_1000c3e0);
  RegisterZone(&DAT_10010070,s_ZN_P1_P2_7_1000c3d4);
  RegisterZone(&DAT_10010078,s_ZN_P1_P2_8_1000c3c8);
  RegisterZone(&DAT_10010068,s_ZN_P1_P2_9_1000c3bc);
  RegisterZone(&DAT_1000f950,s_ZN_P1_P2_10_1000c3b0);
  DAT_1001073b = &DAT_100100c0;
  RegisterVar(&DAT_10010138,0x32b);
  RegisterZone(&DAT_100100c8,s_ZNalihanPost2_1000c3a0);
  RegisterZone(&DAT_100114d0,s_ZNPost2Tolk_1000c394);
  DAT_1001040b = &DAT_100100c8;
  RegisterVar(&DAT_10010e58,0x32b);
  RegisterZone(&DAT_10010130,s_ZMihalichikPost1_1000c380);
  RegisterZone(&DAT_1000f7f0,s_ZMPost1Tolk_1000c374);
  RegisterZone(&DAT_1000fcb0,s_ZM_P1_P2_1_1000c368);
  RegisterZone(&DAT_1000fca8,s_ZM_P1_P2_2_1000c35c);
  RegisterZone(&DAT_1000fcc0,s_ZM_P1_P2_3_1000c350);
  RegisterZone(&DAT_1000fcb8,s_ZM_P1_P2_4_1000c344);
  RegisterZone(&DAT_1000f970,s_ZM_P1_P2_5_1000c338);
  DAT_1001112b = &DAT_10010130;
  RegisterVar(&DAT_10011188,0x32b);
  RegisterZone(&DAT_10010128,s_ZMihalichikPost2_1000c324);
  RegisterZone(&DAT_1000f960,s_ZMPost2Tolk_1000c318);
  DAT_1001145b = &DAT_10010128;
  RegisterVar(&DAT_100107a8,0x32b);
  RegisterZone(&DAT_10010120,s_ZSity_1000c310);
  DAT_10010a7b = &DAT_10010120;
  RegisterVar(&PTR_DAT_1000c064,0x24);
  RegisterVar(&DAT_100100e0,0x3d);
  RegisterZone(&DAT_1000f818,s_ZG_L_Tent1_1000c304);
  RegisterZone(&DAT_1000f810,s_ZG_L_Tent2_1000c2f8);
  RegisterZone(&DAT_1000f808,s_ZG_L_Tent3_1000c2ec);
  RegisterZone(&DAT_100114f0,s_ZG_L_Unit1_1000c2e0);
  RegisterZone(&DAT_100114e8,s_ZG_L_Unit2_1000c2d4);
  RegisterZone(&DAT_100114d8,s_ZG_L_Unit3_1000c2c8);
  RegisterZone(&DAT_100114c8,s_ZG_Sbor_1000c2c0);
  RegisterVar(&DAT_10010ae8,0x3d);
  RegisterZone(&DAT_1000fcd0,s_ZS_L_Tent1_1000c2b4);
  RegisterZone(&DAT_1000fcd8,s_ZS_L_Tent2_1000c2a8);
  RegisterZone(&DAT_1000fce0,s_ZS_L_Tent3_1000c29c);
  RegisterZone(&DAT_1000f830,s_ZS_L_Unit1_1000c290);
  RegisterZone(&DAT_1000f840,s_ZS_L_Unit2_1000c284);
  RegisterZone(&DAT_1000f850,s_ZS_L_Unit3_1000c278);
  RegisterZone(&DAT_10011508,s_ZS_Sbor_1000c270);
  RegisterZone(&DAT_1000f7f8,s_ZPolitika_1000c264);
  RegisterUnits(&DAT_1000fd00,s_GCommandCenter_1000c254);
  RegisterUnitType(&DAT_1000f958,s_WALL_UKR_RU__1000c244);
  RegisterUnitType(&DAT_10011500,s_WALL_KR_RU__1000c238);
  RegisterUpgrade(&DAT_1000f888,s_AKA24RU_1000c230);
  RegisterUpgrade(&DAT_1000fce8,s_AKA23RU_1000c228);
  RegisterUpgrade(&DAT_100114c0,s_AKA08RU_1000c220);
  SetPlayerName(1,s_VILLAGE_1000c218);
  SetPlayerName(2,s_ALGERIA_1000c210);
  SetPlayerName(3,s_TURKEY_1000c208);
  SetPlayerName(4,s_FREE_TRADERS_1000c1f8);
  SetPlayerName(5,s_ROBBERS_1000c1f0);
  return;
}



// Function: ProcessScenary @ 0x10003090

void ProcessScenary(void)

{
  int iVar1;
  char cVar2;
  FILE *pFVar3;
  uint *puVar4;
  uint *puVar5;
  size_t sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined *puVar15;
  undefined4 uVar16;
  char *pcVar17;
  
                    /* 0x3090  2  ProcessScenary */
  if (DAT_100115a2 == '\0') {
    DAT_100115a2 = '\x01';
    pFVar3 = (FILE *)FUN_1000540f(s_Missions__miss_vic_txt_1000c804,&DAT_1000c81c);
    if (pFVar3 == (FILE *)0x0) {
      uVar10 = 0xffffffff;
      pcVar17 = &DAT_1000c7fc;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_10011540;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = &DAT_1000c7f4;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1001154f;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = s_STONE_1000c7ec;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1001155e;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = &DAT_1000c7e4;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1001156d;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = &DAT_1000c7dc;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1001157c;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = &DAT_1000c7d4;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1001158b;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = &DAT_1000c7cc;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f8c8;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = s_GELPAZAR_1000c7c0;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f8d7;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = s_SARIKAYA_1000c7b4;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f8e6;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = s_NALIHAN_1000c7ac;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f8f5;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = s_MIHALCHIK_1000c7a0;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f904;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = s_NALIHANF_1000c794;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f913;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = s_NALIHANS_1000c788;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f922;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = &DAT_1000c780;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f931;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar17 = s_MIHALS_1000c778;
      do {
        pcVar12 = pcVar17;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar12 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar12;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar12 + -uVar10;
      pcVar12 = (char *)&DAT_1000f940;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      FUN_10005325((int *)pFVar3,0,2);
      uVar10 = FUN_100051a2((char *)pFVar3);
      puVar4 = operator_new(uVar10 + 1);
      FUN_10005325((int *)pFVar3,0,0);
      FUN_1000507d((char *)puVar4,1,uVar10,(int *)pFVar3);
      FUN_10005000(pFVar3);
      iVar9 = 0;
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          pcVar17 = &DAT_1000c770;
LAB_1000336a:
          puVar5 = FUN_10004f80(puVar4,pcVar17);
          iVar9 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar7 == 1) {
            pcVar17 = &DAT_1000c768;
            goto LAB_1000336a;
          }
          if (iVar7 == 2) {
            pcVar17 = &DAT_1000c760;
            goto LAB_1000336a;
          }
          if (iVar7 == 3) {
            pcVar17 = &DAT_1000c758;
            goto LAB_1000336a;
          }
          if (iVar7 == 4) {
            pcVar17 = &DAT_1000c750;
            goto LAB_1000336a;
          }
          if (iVar7 == 5) {
            pcVar17 = &DAT_1000c748;
            goto LAB_1000336a;
          }
        }
        iVar9 = iVar9 + 5;
        sVar6 = FUN_10004f40((byte *)(iVar9 + (int)puVar4),&DAT_1000c744);
        iVar1 = iVar7 * 0xf;
        _strncpy((char *)((int)&DAT_10011540 + iVar1),(char *)(iVar9 + (int)puVar4),sVar6);
        iVar7 = iVar7 + 1;
        *(undefined1 *)((int)&DAT_10011540 + sVar6 + iVar1) = 0;
      } while (iVar7 < 6);
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          pcVar17 = &DAT_1000c7cc;
LAB_1000342c:
          puVar5 = FUN_10004f80(puVar4,pcVar17);
          iVar9 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar7 == 1) {
            pcVar17 = s_GELPAZAR_1000c7c0;
            goto LAB_1000342c;
          }
          if (iVar7 == 2) {
            pcVar17 = s_SARIKAYA_1000c7b4;
            goto LAB_1000342c;
          }
          if (iVar7 == 3) {
            pcVar17 = s_NALIHAN_1000c7ac;
            goto LAB_1000342c;
          }
          if (iVar7 == 4) {
            pcVar17 = s_MIHALCHIK_1000c7a0;
            goto LAB_1000342c;
          }
          if (iVar7 == 5) {
            pcVar17 = s_NALIHANF_1000c794;
            goto LAB_1000342c;
          }
          if (iVar7 == 6) {
            pcVar17 = s_NALIHANS_1000c788;
            goto LAB_1000342c;
          }
          if (iVar7 == 7) {
            pcVar17 = &DAT_1000c780;
            goto LAB_1000342c;
          }
          if (iVar7 == 8) {
            pcVar17 = s_MIHALS_1000c778;
            goto LAB_1000342c;
          }
        }
        iVar9 = iVar9 + 10;
        sVar6 = FUN_10004f40((byte *)(iVar9 + (int)puVar4),&DAT_1000c744);
        iVar1 = iVar7 * 0xf;
        _strncpy((char *)((int)&DAT_1000f8c8 + iVar1),(char *)(iVar9 + (int)puVar4),sVar6);
        iVar7 = iVar7 + 1;
        *(undefined1 *)((int)&DAT_1000f8c8 + sVar6 + iVar1) = 0;
      } while (iVar7 < 9);
      FUN_10004e30((undefined *)puVar4);
    }
  }
  cVar2 = Trigg(1);
  if (cVar2 != '\0') {
    SetTrigg(1,0);
    ChangeFriends(0,1);
    ChangeFriends(1,3);
    ChangeFriends(2,4);
    ChangeFriends(3,8);
    ChangeFriends(4,0x3f);
    ChangeFriends(5,0x1c);
    ChangeFriends(6,0x40);
    ChangeFriends(7,0x80);
    RunTimer(1,200);
    RunTimer(6,0x14);
    RunTimer(10,0x14);
    RunTimer(0xb,0x14);
    RunTimer(0xc,0x14);
    RunTimer(0xd,0x14);
    RunTimer(0xe,0x14);
    RunTimer(0xf,0x14);
    RunTimer(0x10,0x14);
    RunTimer(0x11,0x14);
    RunTimer(0x12,0x14);
    EnableUnit(0,&DAT_1000f958,0);
    EnableUnit(0,&DAT_10011500,0);
    DisableUpgrade(0,&DAT_1000f888);
    DisableUpgrade(0,&DAT_1000fce8);
    DisableUpgrade(0,&DAT_100114c0);
    SetResource(0,0,5000);
    SetResource(0,3,5000);
    SetResource(0,2,5000);
    SetResource(0,1,5000);
    iVar7 = GetDiff(0);
    SetResource(0,4,(5 - iVar7) * 1000);
    iVar7 = GetDiff(0);
    SetResource(0,5,(5 - iVar7) * 1000);
    SetResource(2,0,5000);
    SetResource(2,3,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,5000);
    SetResource(3,0,5000);
    SetResource(3,3,5000);
    SetResource(3,2,5000);
    SetResource(3,1,5000);
    SetResource(3,4,5000);
    SetResource(3,5,5000);
    uVar8 = GetDiff(0);
    StartAI(2,s_ALGIR_0_1000c73c,1,1,1,uVar8);
    uVar8 = GetDiff(0);
    StartAI(3,s_TURKISH_0_1000c730,1,1,1,uVar8);
    FUN_10001020(&DAT_100107a8,0,0,(char *)&DAT_1000f8c8,&DAT_10010120,1,3,
                 s_V12_1_V12_2_V12_6_V12_8_1000c718,&DAT_1000fd28,&DAT_1000f978,&DAT_10010138,
                 &DAT_10011188,0,0);
    FUN_10001020(&DAT_1000fd28,1,1,(char *)&DAT_1000f8d7,&DAT_1000fcf8,1,4,s_V12_0_1000c710,
                 &DAT_100107a8,0,0,0,0,3);
    FUN_10001020(&DAT_1000f978,1,2,(char *)&DAT_1000f8e6,&DAT_100100b0,1,5,s_V12_0_1000c710,
                 &DAT_100107a8,0,0,0,0,3);
    FUN_10001020(&DAT_10010b28,2,3,(char *)&DAT_1000f8f5,&DAT_1000fd20,1,3,s_V12_5_1000c708,
                 &DAT_10010468,0,0,0,0,3);
    FUN_10001020(&DAT_1000f4b8,2,4,(char *)&DAT_1000f904,&DAT_1000f7e8,1,3,s_V12_7_1000c700,
                 &DAT_10010e58,0,0,0,0,3);
    FUN_10001020(&DAT_10010468,3,5,(char *)&DAT_1000f913,&DAT_100100c0,1,3,s_V12_3_V12_6_1000c6f4,
                 &DAT_10010b28,&DAT_10010138,0,0,0,0);
    FUN_10001020(&DAT_10010138,3,6,(char *)&DAT_1000f922,&DAT_100100c8,1,3,s_V12_6_V12_0_1000c6e8,
                 &DAT_10010468,&DAT_100107a8,0,0,0,0);
    FUN_10001020(&DAT_10010e58,3,7,(char *)&DAT_1000f931,&DAT_10010130,1,3,s_V12_4_V12_8_1000c6dc,
                 &DAT_1000f4b8,&DAT_10011188,0,0,0,0);
    FUN_10001020(&DAT_10011188,3,8,(char *)&DAT_1000f940,&DAT_10010128,1,3,s_V12_7_V12_0_1000c6d0,
                 &DAT_10010e58,&DAT_100107a8,0,0,0,0);
    ShowPage(s__PAGE23_1000c6c8);
    SetLightSpot(&DAT_1000fcf8,2,1);
    SetLightSpot(&DAT_100100b0,2,2);
    DisableMission(0x41);
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    EnableMission(0x45);
    EnableMission(0x46);
  }
  PTR_DAT_1000c064 = &DAT_100107a8;
  PTR_DAT_1000c068 = &DAT_1000fd28;
  PTR_DAT_1000c06c = &DAT_1000f978;
  PTR_DAT_1000c070 = &DAT_10010b28;
  PTR_DAT_1000c074 = &DAT_1000f4b8;
  PTR_DAT_1000c078 = &DAT_10010468;
  PTR_DAT_1000c07c = &DAT_10010138;
  PTR_DAT_1000c080 = &DAT_10010e58;
  PTR_DAT_1000c084 = &DAT_10011188;
  FUN_100011d0(&DAT_100107a8,&DAT_10010120,s_V12_1_V12_2_V12_6_V12_8_1000c718,&DAT_1000fd28,
               &DAT_1000f978,&DAT_10010138,&DAT_10011188,0);
  FUN_100011d0(&DAT_1000fd28,&DAT_1000fcf8,s_V12_0_1000c710,&DAT_100107a8,0,0,0,0);
  iVar7 = GetTotalAmount0(&DAT_100114e0);
  uVar13 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_100107a0);
  uVar14 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000fd08);
  FUN_10002450(&DAT_1000fd28,iVar7,uVar14,uVar13);
  FUN_100011d0(&DAT_1000f978,&DAT_100100b0,s_V12_0_1000c710,&DAT_100107a8,0,0,0,0);
  iVar7 = GetTotalAmount0(&DAT_100100b8);
  uVar13 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000f800);
  uVar14 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_100114f8);
  FUN_10002450(&DAT_1000f978,iVar7,uVar14,uVar13);
  FUN_100011d0(&DAT_10010b28,&DAT_1000fd20,s_V12_5_1000c708,&DAT_10010468,0,0,0,0);
  FUN_10002450(&DAT_10010b28,3,1,1);
  FUN_100011d0(&DAT_1000f4b8,&DAT_1000f7e8,s_V12_7_1000c700,&DAT_10010e58,0,0,0,0);
  FUN_10002450(&DAT_1000f4b8,3,1,1);
  FUN_100011d0(&DAT_10010468,&DAT_100100c0,s_V12_3_V12_6_1000c6f4,&DAT_10010b28,&DAT_10010138,0,0,0)
  ;
  FUN_10002450(&DAT_10010468,0,1,1);
  FUN_100011d0(&DAT_10010138,&DAT_100100c8,s_V12_6_V12_0_1000c6e8,&DAT_10010468,&DAT_100107a8,0,0,0)
  ;
  FUN_10002450(&DAT_10010138,0,1,1);
  FUN_100011d0(&DAT_10010e58,&DAT_10010130,s_V12_4_V12_8_1000c6dc,&DAT_1000f4b8,&DAT_10011188,0,0,0)
  ;
  iVar7 = GetTotalAmount0(&DAT_100114e0);
  uVar13 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_100107a0);
  uVar14 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000fd08);
  FUN_10002450(&DAT_10010e58,iVar7,uVar14,uVar13);
  FUN_100011d0(&DAT_10011188,&DAT_10010128,s_V12_7_V12_0_1000c6d0,&DAT_10010e58,&DAT_100107a8,0,0,0)
  ;
  FUN_10002450(&DAT_10011188,0,1,1);
  FUN_100015c0(&DAT_1000fd28,0);
  FUN_100015c0(&DAT_1000f978,0);
  FUN_100015c0(&DAT_10010b28,0);
  FUN_100015c0(&DAT_1000f4b8,0);
  FUN_100015c0(&DAT_10010468,0);
  FUN_100015c0(&DAT_10010138,0);
  FUN_100015c0(&DAT_10010e58,0);
  FUN_100015c0(&DAT_10011188,0);
  cVar2 = TimerDone(10);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_100107a8), (char)uVar8 != '\0')) {
    RunTimer(10,100);
  }
  cVar2 = TimerDone(0xb);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_1000fd28), (char)uVar8 != '\0')) {
    RunTimer(0xb,100);
  }
  cVar2 = TimerDone(0xc);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_1000f978), (char)uVar8 != '\0')) {
    RunTimer(0xc,100);
  }
  cVar2 = TimerDone(0xd);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_10010b28), (char)uVar8 != '\0')) {
    RunTimer(0xd,100);
  }
  cVar2 = TimerDone(0xe);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_1000f4b8), (char)uVar8 != '\0')) {
    RunTimer(0xe,100);
  }
  cVar2 = TimerDone(0xf);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_10010468), (char)uVar8 != '\0')) {
    RunTimer(0xf,100);
  }
  cVar2 = TimerDone(0x10);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_10010138), (char)uVar8 != '\0')) {
    RunTimer(0x10,100);
  }
  cVar2 = TimerDone(0x11);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_10010e58), (char)uVar8 != '\0')) {
    RunTimer(0x11,100);
  }
  cVar2 = TimerDone(0x12);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001d00(&DAT_10011188), (char)uVar8 != '\0')) {
    RunTimer(0x12,100);
  }
  puVar15 = &DAT_1000fcf8;
  iVar7 = GetDiff(0);
  FUN_10002780(&DAT_100100e0,iVar7 * 3 + 5,puVar15);
  puVar15 = &DAT_100100b0;
  iVar7 = GetDiff(0);
  FUN_10002780(&DAT_10010ae8,iVar7 * 3 + 5,puVar15);
  FUN_10002630(&DAT_100100e0,&DAT_100114f0,&DAT_100114e8,&DAT_100114d8,&DAT_100114c8);
  FUN_10002630(&DAT_10010ae8,&DAT_1000f830,&DAT_1000f840,&DAT_1000f850,&DAT_10011508);
  cVar2 = TimerDone(1);
  if (cVar2 != '\0') {
    FUN_10001220(0x1000fd28);
    FUN_10001220(0x1000f978);
    FUN_10001220(0x10010b28);
    FUN_10001220(0x1000f4b8);
    FUN_10001220(0x10010468);
    FUN_10001220(0x10010138);
    FUN_10001220(0x10010e58);
    FUN_10001220(0x10011188);
    iVar7 = GetDiff(0);
    RunTimer(1,(iVar7 + 4) * 0x32);
  }
  cVar2 = Trigg(0xb);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000f968,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0xb,0);
    ShowPage(s__PAGE9_1000c6c0);
    EnableMission(0x43);
    uVar16 = 0x15;
    uVar8 = 0x14;
    iVar7 = GetDiff(0);
    FUN_10002560(&DAT_100100e0,&DAT_1000f818,&DAT_1000f810,&DAT_1000f808,5,(5 - iVar7) * 1000,uVar8,
                 uVar16);
  }
  cVar2 = Trigg(0xc);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_100100d0,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0xc,0);
    ShowPage(s__PAGE10_1000c6b8);
    EnableMission(0x44);
    uVar16 = 0x17;
    uVar8 = 0x16;
    iVar7 = GetDiff(0);
    FUN_10002560(&DAT_10010ae8,&DAT_1000fcd0,&DAT_1000fcd8,&DAT_1000fce0,5,(5 - iVar7) * 1000,uVar8,
                 uVar16);
  }
  cVar2 = Trigg(0xd);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000fd10,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0xd,0);
    ShowPage(s__PAGE24_1000c6b0);
    EnableMission(0x41);
  }
  cVar2 = Trigg(0xe);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_10010798,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0xe,0);
    ShowPage(s__PAGE35_1000c6a8);
    EnableMission(0x41);
  }
  cVar2 = Trigg(0xf);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000fcf0,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0xf,0);
    ShowPageParam(s__PAGE36_1000c6a0,&DAT_1000f913);
    EnableMission(0x42);
  }
  cVar2 = Trigg(0x10);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_100114d0,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0x10,0);
    ShowPageParam(s__PAGE36_1000c6a0,&DAT_1000f922);
    EnableMission(0x42);
  }
  cVar2 = Trigg(0x11);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000f7f0,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0x11,0);
    ShowPageParam(s__PAGE36_1000c6a0,&DAT_1000f931);
    EnableMission(0x42);
  }
  cVar2 = Trigg(0x12);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000f960,&DAT_10010ae0,0), iVar7 != 0)) {
    SetTrigg(0x12,0);
    ShowPageParam(s__PAGE36_1000c6a0,&DAT_1000f940);
    EnableMission(0x42);
  }
  cVar2 = NationIsErased(0);
  if (cVar2 != '\0') {
    ShowPage(s__PAGE21_1000c698);
    LooseGame();
  }
  cVar2 = NationIsErased(2);
  if ((cVar2 != '\0') && (cVar2 = NationIsErased(3), cVar2 != '\0')) {
    ShowPage(s__PAGE22_1000c690);
    ShowVictory();
  }
  iVar7 = GetResource(0,0);
  if (70000 < iVar7) {
    SetResource(0,0,70000);
  }
  iVar7 = GetResource(0,3);
  if (70000 < iVar7) {
    SetResource(0,3,70000);
  }
  iVar7 = GetResource(0,2);
  if (70000 < iVar7) {
    SetResource(0,2,70000);
  }
  iVar7 = GetResource(0,1);
  if (70000 < iVar7) {
    SetResource(0,1,70000);
  }
  iVar7 = GetResource(0,4);
  if (70000 < iVar7) {
    SetResource(0,4,70000);
  }
  iVar7 = GetResource(0,5);
  if (70000 < iVar7) {
    SetResource(0,5,70000);
  }
  iVar7 = GetTotalAmount0(&DAT_1000fd00);
  if (iVar7 == 0) {
LAB_100044c1:
    if (DAT_1000c060 != '\0') goto LAB_100044ea;
  }
  else {
    if (DAT_1000c060 == '\0') goto LAB_100044ca;
    iVar7 = GetUnitsAmount2(&DAT_1000f7f8,&DAT_10010ae0,0);
    if (iVar7 == 0) goto LAB_100044c1;
    if (DAT_100115a0 == '\0') {
      if (DAT_100115a1 != '\0') {
        pcVar17 = s__PAGE26_1000c680;
        goto LAB_10004251;
      }
      iVar7 = AskMultilineQuestion(9,s__PAGE25_1000c664,0,s_P12_1_P12_2_1000c66c);
      if (iVar7 == 0) {
        iVar7 = GetDiff(0);
        ShowPageParam(s__PAGE28_1000c65c,(iVar7 + 5) * 1000);
        cVar2 = AskQuestion(s__PAGE29_1000c654);
        if (cVar2 != '\0') {
          iVar7 = GetDiff(0);
          iVar9 = GetResource(0,1);
          if ((iVar7 + 5) * 1000 <= iVar9) {
            ShowPage(s__PAGE32_1000c64c);
            iVar7 = GetDiff(0);
            RunTimer(6,(0x14 - iVar7) * 500);
            SetTrigg(6,0);
            iVar7 = GetDiff(0);
            iVar9 = GetResource(0,1);
            SetResource(0,1,iVar9 + (iVar7 + 5) * -1000);
            ChangeFriends(2,5);
            DAT_100115a0 = '\x01';
            DAT_100115a1 = '\0';
            ShowPage(s__PAGE32_1000c64c);
            DAT_1000c060 = '\0';
            goto LAB_100044ca;
          }
LAB_100044aa:
          ShowPage(s__PAGE30_1000c644);
        }
      }
      else if (iVar7 == 1) {
        iVar7 = GetDiff(0);
        ShowPageParam(s__PAGE28_1000c65c,(iVar7 + 5) * 1000);
        cVar2 = AskQuestion(s__PAGE29_1000c654);
        if (cVar2 != '\0') {
          iVar7 = GetDiff(0);
          iVar9 = GetResource(0,1);
          if (iVar9 < (iVar7 + 5) * 1000) goto LAB_100044aa;
          ShowPage(s__PAGE32_1000c64c);
          iVar7 = GetDiff(0);
          RunTimer(6,(0x14 - iVar7) * 500);
          SetTrigg(6,0);
          iVar7 = GetDiff(0);
          iVar9 = GetResource(0,1);
          SetResource(0,1,iVar9 + (iVar7 + 5) * -1000);
          ChangeFriends(3,9);
          DAT_100115a0 = '\0';
          DAT_100115a1 = '\x01';
          ShowPage(s__PAGE32_1000c64c);
          DAT_1000c060 = '\0';
          goto LAB_100044ca;
        }
      }
    }
    else {
      pcVar17 = s__PAGE27_1000c688;
LAB_10004251:
      cVar2 = AskQuestion(pcVar17);
      if (cVar2 != '\0') {
        ChangeFriends(2,4);
        ChangeFriends(3,8);
        ShowPage(s__PAGE34_1000c678);
        SetTrigg(6,1);
        DAT_100115a1 = '\0';
        DAT_100115a0 = '\0';
        DAT_1000c060 = '\0';
        goto LAB_100044ca;
      }
    }
    DAT_1000c060 = '\0';
  }
LAB_100044ca:
  iVar7 = GetUnitsAmount2(&DAT_1000f7f8,&DAT_10010ae0,0);
  if (iVar7 == 0) {
    DAT_1000c060 = '\x01';
  }
LAB_100044ea:
  cVar2 = TimerDoneFirst(6);
  if ((cVar2 != '\0') && (cVar2 = Trigg(6), cVar2 == '\0')) {
    ShowPage(s__PAGE34_1000c678);
    DAT_100115a0 = '\0';
    DAT_100115a1 = '\0';
    ChangeFriends(2,4);
    ChangeFriends(3,8);
  }
  return;
}



// Function: FUN_10004540 @ 0x10004540

void __cdecl FUN_10004540(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  SelectUnits(param_1,0);
  switch(param_2) {
  case 0:
    if (param_3 == 1) {
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011530,0xc0,0);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011538,0xc0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011520,0xc0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011528,0xd0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011510,0xf0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011518,0xc0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000c068 + 0x2d3),0x3c,2);
      return;
    }
    if (param_3 == 2) {
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f860,0x40,0);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f848,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f858,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f828,0x20,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f838,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f820,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000c06c + 0x2d3),0x3c,2);
      return;
    }
    if (param_3 == 6) {
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011530,0xc0,0);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011538,0xc0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011520,0xc0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011528,0xd0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011510,0xf0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000c07c + 0x2d3),0x3c,2);
      return;
    }
    if (param_3 == 8) {
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f860,0x40,0);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f848,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f858,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f828,0x20,2);
      uVar2 = 0x3c;
      puVar1 = PTR_DAT_1000c084;
      goto LAB_10004d7a;
    }
  case 1:
    if (param_3 == 0) {
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011518,0x50,0);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011510,0x70,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011528,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011520,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011538,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011530,0x40,2);
      uVar2 = 0x3c;
LAB_100047d7:
      SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000c064 + 0x2d3),uVar2,2);
      return;
    }
    break;
  case 2:
    if (param_3 == 0) {
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f820,0xc0,0);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f838,0x81,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f828,0xa0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f858,0xc0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f848,0xe0,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f860,0xc0,2);
      uVar2 = 0xa0;
      goto LAB_100047d7;
    }
    break;
  case 3:
    break;
  case 4:
    goto switchD_10004563_caseD_4;
  case 5:
    goto switchD_10004563_caseD_5;
  case 6:
    goto switchD_10004563_caseD_6;
  case 7:
    goto switchD_10004563_caseD_7;
  case 8:
    goto switchD_10004563_caseD_8;
  default:
    goto switchD_10004563_default;
  }
  if (param_3 == 5) {
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f8c0,0x40,0);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f8b8,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f8b0,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f8a8,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f8a0,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f898,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000c078 + 0x2d3),0xa0,2);
    return;
  }
switchD_10004563_caseD_4:
  if (param_3 == 7) {
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f880,0x80,0);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f878,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f870,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f868,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000c080 + 0x2d3),0xa0,2);
    return;
  }
switchD_10004563_caseD_5:
  if (param_3 == 3) {
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f898,0,0);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f8a0,0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f8a8,0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f8b0,0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f8b8,0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f8c0,0xc0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000c070 + 0x2d3),0xa0,2);
    return;
  }
  if (param_3 == 6) {
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010058,0x80,0);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010060,0x70,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010090,0x50,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010098,0x50,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010080,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010088,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010070,0xc0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010078,0xc0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010068,0x80,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f950,0x80,2);
    puVar1 = PTR_DAT_1000c07c;
  }
  else {
switchD_10004563_caseD_6:
    if (param_3 == 0) {
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011510,0x70,0);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011528,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011520,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011538,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10011530,0x40,2);
      SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000c064 + 0x2d3),0xa0,2);
      return;
    }
    if (param_3 != 5) {
switchD_10004563_caseD_7:
      if (param_3 == 4) {
        SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f868,0,0);
        SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f870,0,2);
        SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f878,0,2);
        SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f880,0,2);
        uVar2 = 0xa0;
        puVar1 = PTR_DAT_1000c074;
      }
      else {
        if (param_3 == 8) {
          SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000fcb0,0x80,0);
          SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000fca8,0xc0,2);
          SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000fcc0,0xc0,2);
          SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000fcb8,0x80,2);
          SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f970,0x80,2);
          SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000c084 + 0x2d3),0xa0,2);
          return;
        }
switchD_10004563_caseD_8:
        if (param_3 != 0) {
          if (param_3 == 7) {
            SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f970,0,0);
            SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000fcb8,0,2);
            SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000fcc0,0x40,2);
            SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000fca8,0x40,2);
            SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000fcb0,0,2);
            SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(PTR_DAT_1000c080 + 0x2d3),0xa0,2)
            ;
          }
switchD_10004563_default:
          return;
        }
        SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f828,0xa0,0);
        SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f858,0xc0,2);
        SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f848,0xe0,2);
        SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f860,0xc0,2);
        uVar2 = 0xa0;
        puVar1 = PTR_DAT_1000c064;
      }
LAB_10004d7a:
      SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(puVar1 + 0x2d3),uVar2,2);
      return;
    }
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_1000f950,0,0);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010068,0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010078,0x40,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010070,0x40,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010088,0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010080,0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010098,0xd0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010090,0xd0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010060,0xf0,2);
    SelSendTo(*(undefined1 *)(param_1 + 8),&DAT_10010058,0,2);
    puVar1 = PTR_DAT_1000c078;
  }
  SelSendTo(*(undefined1 *)(param_1 + 8),*(undefined4 *)(puVar1 + 0x2d3),0xa0,2);
  return;
}



// Function: FUN_10004e30 @ 0x10004e30

void __cdecl FUN_10004e30(undefined *param_1)

{
  FUN_100055cb(param_1);
  return;
}



// Function: _strncpy @ 0x10004e40

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
        goto joined_r0x10004e7e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10004ebb;
        goto LAB_10004f29;
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
joined_r0x10004f25:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10004f29:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10004ebb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10004f25;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10004f25;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10004f25;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10004e7e:
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
LAB_10004ebb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10004f40 @ 0x10004f40

int __cdecl FUN_10004f40(byte *param_1,byte *param_2)

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



// Function: FUN_10004f80 @ 0x10004f80

uint * __cdecl FUN_10004f80(uint *param_1,char *param_2)

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



// Function: FUN_10005000 @ 0x10005000

undefined4 __cdecl FUN_10005000(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10005848((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_1000589a((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



// Function: __fclose_lk @ 0x10005031

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10005a25((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_100058ec(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_100055cb(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



// Function: FUN_1000507d @ 0x1000507d

uint __cdecl FUN_1000507d(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_10005848((uint)param_4);
  uVar1 = FUN_100050ac(param_1,param_2,param_3,param_4);
  FUN_1000589a((uint)param_4);
  return uVar1;
}



// Function: FUN_100050ac @ 0x100050ac

uint __cdecl FUN_100050ac(char *param_1,uint param_2,uint param_3,int *param_4)

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
          uVar4 = FUN_10005b2e(piVar1);
          if (uVar4 == 0xffffffff) goto LAB_10005188;
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
          iVar3 = FUN_10005c0a(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_10005188:
            return (uint)((int)pcVar6 - (int)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10005188;
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
        FUN_10005e50((undefined4 *)pcVar5,(undefined4 *)*piVar1,(uint)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}



// Function: operator_new @ 0x10005194

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



// Function: FUN_100051a2 @ 0x100051a2

int __cdecl FUN_100051a2(char *param_1)

{
  int iVar1;
  
  FUN_10005848((uint)param_1);
  iVar1 = FUN_100051c4(param_1);
  FUN_1000589a((uint)param_1);
  return iVar1;
}



// Function: FUN_100051c4 @ 0x100051c4

int __cdecl FUN_100051c4(char *param_1)

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
  local_8 = FUN_10006554(uVar1,0,1);
  if ((int)local_8 < 0) {
LAB_10005252:
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
        pDVar4 = FUN_10006332();
        *pDVar4 = 0x16;
        goto LAB_10005252;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_10011b60)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
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
          if ((*(byte *)(iVar10 + 4 + (&DAT_10011b60)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_10006554(uVar1,0,2);
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
              FUN_10006554(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + (&DAT_10011b60)[(int)uVar1 >> 5]) & 4;
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



// Function: FUN_10005325 @ 0x10005325

int __cdecl FUN_10005325(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10005848((uint)param_1);
  iVar1 = FUN_10005351(param_1,param_2,param_3);
  FUN_1000589a((uint)param_1);
  return iVar1;
}



// Function: FUN_10005351 @ 0x10005351

int __cdecl FUN_10005351(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10006332();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_100051c4((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10005a25(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_10006554(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}



// Function: FUN_100053de @ 0x100053de

undefined4 * __cdecl FUN_100053de(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_1000679c();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_1000662c(param_1,param_2,param_3,puVar1);
  FUN_1000589a((uint)puVar1);
  return puVar2;
}



// Function: FUN_1000540f @ 0x1000540f

void __cdecl FUN_1000540f(LPCSTR param_1,char *param_2)

{
  FUN_100053de(param_1,param_2,0x40);
  return;
}



// Function: FUN_10005422 @ 0x10005422

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10005422(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100115c0 = GetVersion();
    iVar1 = FUN_100070bb(1);
    if (iVar1 != 0) {
      _DAT_100115cc = DAT_100115c0 >> 8 & 0xff;
      _DAT_100115c8 = DAT_100115c0 & 0xff;
      DAT_100115c0 = DAT_100115c0 >> 0x10;
      _DAT_100115c4 = _DAT_100115c8 * 0x100 + _DAT_100115cc;
      iVar1 = FUN_10006982();
      if (iVar1 != 0) {
        DAT_10012c84 = GetCommandLineA();
        DAT_100115a8 = FUN_10006e14();
        FUN_10006344();
        FUN_10006bc7();
        FUN_10006b0e();
        FUN_10006864();
        DAT_100115a4 = DAT_100115a4 + 1;
        goto LAB_100054f5;
      }
      FUN_10007118();
    }
LAB_10005482:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100115a4 < 1) goto LAB_10005482;
      DAT_100115a4 = DAT_100115a4 + -1;
      if (DAT_100115f8 == 0) {
        FUN_100068a2();
      }
      FUN_10006500();
      FUN_100069d6();
      FUN_10007118();
    }
    else if (param_2 == 3) {
      FUN_10006a6e((undefined *)0x0);
    }
LAB_100054f5:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100054fb

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100115a4;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10005543;
    if ((DAT_10012c88 != (code *)0x0) &&
       (iVar2 = (*DAT_10012c88)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10005422(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10005543:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10005422(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10005422(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10012c88 != (code *)0x0) {
      iVar2 = (*DAT_10012c88)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10005598

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100115b0 == 1) || ((DAT_100115b0 == 0 && (DAT_100115b4 == 1)))) {
    FUN_100071c0();
  }
  FUN_100071f9(param_1);
  (*(code *)PTR___exit_1000c820)(0xff);
  return;
}



// Function: FUN_100055cb @ 0x100055cb

void __cdecl FUN_100055cb(undefined *param_1)

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
  puStack_c = &DAT_1000b198;
  puStack_10 = &LAB_100083c4;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10011b48 == 3) {
    ExceptionList = &local_14;
    FUN_10008256(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10007394((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100073bf(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10005635();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10011b48 != 2) goto LAB_10005697;
    ExceptionList = &local_14;
    FUN_10008256(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10007df9(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10007e50(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000568d();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10005697:
  HeapFree(DAT_10011b44,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10005635 @ 0x10005635

void FUN_10005635(void)

{
  FUN_100082b7(9);
  return;
}



// Function: FUN_1000568d @ 0x1000568d

void FUN_1000568d(void)

{
  FUN_100082b7(9);
  return;
}



// Function: FUN_100056d0 @ 0x100056d0

uint * __cdecl FUN_100056d0(uint *param_1,char param_2)

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



// Function: FUN_10005848 @ 0x10005848

void __cdecl FUN_10005848(uint param_1)

{
  if ((0x1000c82f < param_1) && (param_1 < 0x1000ca91)) {
    FUN_10008256(((int)(param_1 + 0xefff37d0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10005877 @ 0x10005877

void __cdecl FUN_10005877(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10008256(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_1000589a @ 0x1000589a

void __cdecl FUN_1000589a(uint param_1)

{
  if ((0x1000c82f < param_1) && (param_1 < 0x1000ca91)) {
    FUN_100082b7(((int)(param_1 + 0xefff37d0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_100058c9 @ 0x100058c9

void __cdecl FUN_100058c9(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100082b7(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_100058ec @ 0x100058ec

undefined4 __cdecl FUN_100058ec(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10011c60) &&
     ((*(byte *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100088ba(param_1);
    uVar1 = FUN_10005949(param_1);
    FUN_10008919(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10006332();
  *pDVar2 = 9;
  pDVar2 = FUN_1000633b();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10005949 @ 0x10005949

undefined4 __cdecl FUN_10005949(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10008878(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10008878(2);
      iVar2 = FUN_10008878(1);
      if (iVar2 == iVar1) goto LAB_10005997;
    }
    hObject = (HANDLE)FUN_10008878(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10005999;
    }
  }
LAB_10005997:
  DVar4 = 0;
LAB_10005999:
  FUN_100087f9(param_1);
  *(undefined1 *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_100062bf(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: __freebuf @ 0x100059cc

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_100055cb(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Function: FUN_100059f7 @ 0x100059f7

int __cdecl FUN_100059f7(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10005a25(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000893b(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_10005a25 @ 0x10005a25

undefined4 __cdecl FUN_10005a25(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_100089ce(param_1[4],(char *)param_1[2],uVar3);
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



// Function: FUN_10005a8a @ 0x10005a8a

int __cdecl FUN_10005a8a(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10008256(2);
  iVar4 = 0;
  if (0 < DAT_10012c80) {
    do {
      iVar2 = *(int *)(DAT_10011c64 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10005877(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10011c64 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_100059f7(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_100059f7(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_100058c9(iVar4,*(int *)(DAT_10011c64 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10012c80);
  }
  FUN_100082b7(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_10005b2e @ 0x10005b2e

uint __cdecl FUN_10005b2e(undefined4 *param_1)

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
        FUN_10008bbe(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_10005c0a(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_1000cc18;
          }
          else {
            puVar4 = (undefined *)((&DAT_10011b60)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
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



// Function: FUN_10005c0a @ 0x10005c0a

int __cdecl FUN_10005c0a(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10011c60) &&
     ((*(byte *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100088ba(param_1);
    iVar1 = FUN_10005c6f(param_1,param_2,param_3);
    FUN_10008919(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10006332();
  *pDVar2 = 9;
  pDVar2 = FUN_1000633b();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10005c6f @ 0x10005c6f

int __cdecl FUN_10005c6f(uint param_1,char *param_2,char *param_3)

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
    piVar1 = &DAT_10011b60 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_10011b60)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_10011b60)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
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
          pDVar7 = FUN_10006332();
          *pDVar7 = 9;
          pDVar7 = FUN_1000633b();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_100062bf(DVar6);
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
                goto LAB_10005dfa;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_10005e14:
                *pcVar8 = '\r';
LAB_10005e17:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_10005dfa:
                  *pcVar8 = '\n';
                  goto LAB_10005e17;
                }
                FUN_100065b9(param_1,-1,1);
                if (local_5 != '\n') goto LAB_10005e14;
              }
              else {
                if (local_5 == '\n') goto LAB_10005dfa;
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



// Function: FUN_10005e50 @ 0x10005e50

undefined4 * __cdecl FUN_10005e50(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10006007_caseD_2;
        case 3:
          goto switchD_10006007_caseD_3;
        }
        goto switchD_10006007_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006007_caseD_0;
      case 1:
        goto switchD_10006007_caseD_1;
      case 2:
        goto switchD_10006007_caseD_2;
      case 3:
        goto switchD_10006007_caseD_3;
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
              goto switchD_10006007_caseD_2;
            case 3:
              goto switchD_10006007_caseD_3;
            }
            goto switchD_10006007_caseD_1;
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
              goto switchD_10006007_caseD_2;
            case 3:
              goto switchD_10006007_caseD_3;
            }
            goto switchD_10006007_caseD_1;
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
              goto switchD_10006007_caseD_2;
            case 3:
              goto switchD_10006007_caseD_3;
            }
            goto switchD_10006007_caseD_1;
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
switchD_10006007_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10006007_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10006007_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10006007_caseD_0:
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
        goto switchD_10005e85_caseD_2;
      case 3:
        goto switchD_10005e85_caseD_3;
      }
      goto switchD_10005e85_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005e85_caseD_0;
    case 1:
      goto switchD_10005e85_caseD_1;
    case 2:
      goto switchD_10005e85_caseD_2;
    case 3:
      goto switchD_10005e85_caseD_3;
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
            goto switchD_10005e85_caseD_2;
          case 3:
            goto switchD_10005e85_caseD_3;
          }
          goto switchD_10005e85_caseD_1;
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
            goto switchD_10005e85_caseD_2;
          case 3:
            goto switchD_10005e85_caseD_3;
          }
          goto switchD_10005e85_caseD_1;
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
            goto switchD_10005e85_caseD_2;
          case 3:
            goto switchD_10005e85_caseD_3;
          }
          goto switchD_10005e85_caseD_1;
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
switchD_10005e85_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005e85_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005e85_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005e85_caseD_0:
  return param_1;
}



// Function: _malloc @ 0x10006185

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10011770);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10006197

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_100061c3((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10008c02(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_100061c3 @ 0x100061c3

void __cdecl FUN_100061c3(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b1b0;
  puStack_10 = &LAB_100083c4;
  local_14 = ExceptionList;
  if (DAT_10011b48 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10011b40) {
      ExceptionList = &local_14;
      FUN_10008256(9);
      local_8 = 0;
      piVar1 = FUN_100076e8(param_1);
      local_8 = 0xffffffff;
      FUN_1000622a();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10011b48 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1000ecfc) {
        ExceptionList = &local_14;
        FUN_10008256(9);
        local_8 = 1;
        piVar1 = FUN_10007e95(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10006289();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_100062a2;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_100062a2:
  HeapAlloc(DAT_10011b44,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000622a @ 0x1000622a

void FUN_1000622a(void)

{
  FUN_100082b7(9);
  return;
}



// Function: FUN_10006289 @ 0x10006289

void FUN_10006289(void)

{
  FUN_100082b7(9);
  return;
}



// Function: FUN_100062bf @ 0x100062bf

void __cdecl FUN_100062bf(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000633b();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1000cab0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10006332();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1000cab4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x1000cc18);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10006332();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10006332();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10006332();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_10006332 @ 0x10006332

DWORD * FUN_10006332(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006a07();
  return pDVar1 + 2;
}



// Function: FUN_1000633b @ 0x1000633b

DWORD * FUN_1000633b(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006a07();
  return pDVar1 + 3;
}



// Function: FUN_10006344 @ 0x10006344

void FUN_10006344(void)

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
  DAT_10011c60 = 0x20;
  DAT_10011b60 = puVar2;
  for (; puVar2 < DAT_10011b60 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10011c60 < (int)UVar8) {
      puVar2 = &DAT_10011b64;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10011c60;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10011c60 = DAT_10011c60 + 0x20;
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
      } while ((int)DAT_10011c60 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10011b60)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10011b60 + iVar6 * 9;
    if (DAT_10011b60[iVar6 * 9] == -1) {
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
          goto LAB_100064e9;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_100064e9:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10011c60);
      return;
    }
  } while( true );
}



// Function: FUN_10006500 @ 0x10006500

void FUN_10006500(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10011b60;
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
      FUN_100055cb((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10011c60);
  return;
}



// Function: FUN_10006554 @ 0x10006554

DWORD __cdecl FUN_10006554(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10011c60) &&
     ((*(byte *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100088ba(param_1);
    DVar1 = FUN_100065b9(param_1,param_2,param_3);
    FUN_10008919(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10006332();
  *pDVar2 = 9;
  pDVar2 = FUN_1000633b();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_100065b9 @ 0x100065b9

DWORD __cdecl FUN_100065b9(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_10008878(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10006332();
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
      pbVar1 = (byte *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_100062bf(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_1000662c @ 0x1000662c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_1000662c(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

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
      uVar6 = DAT_10011778 | 1;
      goto LAB_1000666d;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_10011778 | 2;
LAB_1000666d:
  bVar2 = true;
LAB_10006670:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_10008c1d(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_100115b8 = _DAT_100115b8 + 1;
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
        goto LAB_10006670;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_10006670;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_10006670;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_10006670;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_10006670;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_10006750;
      uVar5 = uVar5 | 0x8000;
      goto LAB_10006670;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_10006670;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_10006750;
        uVar5 = uVar5 | 0x4000;
        goto LAB_10006670;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_10006670;
      }
    }
  }
LAB_10006750:
  bVar2 = false;
  goto LAB_10006670;
}



// Function: FUN_1000679c @ 0x1000679c

undefined4 * FUN_1000679c(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_10008256(2);
  iVar3 = 0;
  if (0 < DAT_10012c80) {
    do {
      iVar1 = *(int *)(DAT_10011c64 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_10011c64) = pvVar2;
        if (*(int *)(iVar3 + DAT_10011c64) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_10011c64) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_10011c64) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_10011c64);
LAB_10006840:
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
        FUN_10005877(iVar3,iVar1);
        iVar1 = *(int *)(DAT_10011c64 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_10011c64 + iVar3 * 4);
          goto LAB_10006840;
        }
        FUN_100058c9(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_10012c80);
  }
  FUN_100082b7(2);
  return puVar4;
}



// Function: FUN_10006864 @ 0x10006864

void FUN_10006864(void)

{
  if (DAT_10011b5c != (code *)0x0) {
    (*DAT_10011b5c)();
  }
  FUN_10006968((undefined4 *)&DAT_1000c034,(undefined4 *)&DAT_1000c040);
  FUN_10006968((undefined4 *)&DAT_1000c000,(undefined4 *)&DAT_1000c030);
  return;
}



// Function: __exit @ 0x10006891

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_100068b1(_Code,1,0);
  return;
}



// Function: FUN_100068a2 @ 0x100068a2

void FUN_100068a2(void)

{
  FUN_100068b1(0,0,1);
  return;
}



// Function: FUN_100068b1 @ 0x100068b1

void __cdecl FUN_100068b1(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10006956();
  if (DAT_100115fc == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100115f8 = 1;
  DAT_100115f4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10011b58 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10011b54 - 4), DAT_10011b58 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10011b58 <= puVar1);
    }
    FUN_10006968((undefined4 *)&DAT_1000c044,(undefined4 *)&DAT_1000c04c);
  }
  FUN_10006968((undefined4 *)&DAT_1000c050,(undefined4 *)&DAT_1000c054);
  if (param_3 == 0) {
    DAT_100115fc = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000695f();
  return;
}



// Function: FUN_10006956 @ 0x10006956

void FUN_10006956(void)

{
  FUN_10008256(0xd);
  return;
}



// Function: FUN_1000695f @ 0x1000695f

void FUN_1000695f(void)

{
  FUN_100082b7(0xd);
  return;
}



// Function: FUN_10006968 @ 0x10006968

void __cdecl FUN_10006968(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10006982 @ 0x10006982

undefined4 FUN_10006982(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100081c1();
  DAT_1000cc3c = TlsAlloc();
  if (DAT_1000cc3c != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000849c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000cc3c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100069f4((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_100069d6 @ 0x100069d6

void FUN_100069d6(void)

{
  FUN_100081ea();
  if (DAT_1000cc3c != 0xffffffff) {
    TlsFree(DAT_1000cc3c);
    DAT_1000cc3c = 0xffffffff;
  }
  return;
}



// Function: FUN_100069f4 @ 0x100069f4

void __cdecl FUN_100069f4(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000edd0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_10006a07 @ 0x10006a07

DWORD * FUN_10006a07(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000cc3c);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000849c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000cc3c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100069f4((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10006a62;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10006a62:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_10006a6e @ 0x10006a6e

void __cdecl FUN_10006a6e(undefined *param_1)

{
  if (DAT_1000cc3c != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1000cc3c), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_100055cb(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_100055cb(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_100055cb(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_100055cb(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_100055cb(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_100055cb(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1000edd0) {
        FUN_100055cb(*(undefined **)(param_1 + 0x50));
      }
      FUN_100055cb(param_1);
    }
    TlsSetValue(DAT_1000cc3c,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_10006b0e @ 0x10006b0e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b0e(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10011b50 == 0) {
    FUN_10009433();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100115a8; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_100115dc = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100115a8;
  puVar6 = DAT_100115a8;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10008ef0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100055cb((undefined *)DAT_100115a8);
  DAT_100115a8 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10011b4c = 1;
  return;
}



// Function: FUN_10006bc7 @ 0x10006bc7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006bc7(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10011b50 == 0) {
    FUN_10009433();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10011600,0x104);
  _DAT_100115ec = &DAT_10011600;
  pbVar2 = &DAT_10011600;
  if (*DAT_10012c84 != 0) {
    pbVar2 = DAT_10012c84;
  }
  FUN_10006c60(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10006c60(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_100115d4 = puVar1;
  _DAT_100115d0 = local_8 + -1;
  return;
}



// Function: FUN_10006c60 @ 0x10006c60

void __cdecl FUN_10006c60(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10011a20 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10011a20 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10006d0b;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10006d0b:
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
          if ((*(byte *)((int)&DAT_10011a20 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10011a20 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10006e14 @ 0x10006e14

LPSTR FUN_10006e14(void)

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
  if (DAT_10011704 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10011704 = 1;
LAB_10006e6b:
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
        FUN_100055cb(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10011704 = 2;
  }
  else {
    if (DAT_10011704 == 1) goto LAB_10006e6b;
    if (DAT_10011704 != 2) {
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
    FUN_10005e50((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10006f46 @ 0x10006f46

void __cdecl FUN_10006f46(undefined4 *param_1)

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



// Function: FUN_10006f73 @ 0x10006f73

int FUN_10006f73(void)

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
  
  FUN_100096b0();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x33;
    aCStackY_18[1] = 'o';
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
      aCStackY_18[0] = '\v';
      aCStackY_18[1] = 'p';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",(char *)&local_1230,0x16);
      if (iVar5 == 0) {
        puVar6 = &local_1230;
      }
      else {
        aCStackY_18[0] = '-';
        aCStackY_18[1] = 'p';
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
        puVar6 = FUN_10004f80(&local_1230,local_1a0);
      }
      if ((puVar6 != (uint *)0x0) && (puVar6 = FUN_100056d0(puVar6,','), puVar6 != (uint *)0x0)) {
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
        aCStackY_18[0] = -0x6d;
        aCStackY_18[1] = 'p';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_1000944f(this,pbVar7,(int *)0x0,(void *)0xa);
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
    FUN_10006f46((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_100070bb @ 0x100070bb

undefined4 __cdecl FUN_100070bb(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10011b44 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10011b44 != (HANDLE)0x0) {
    DAT_10011b48 = FUN_10006f73();
    if (DAT_10011b48 == 3) {
      ppuVar1 = (undefined **)FUN_1000734c(0x3f8);
    }
    else {
      if (DAT_10011b48 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10007b9d();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10011b44);
  }
  return 0;
}



// Function: FUN_10007118 @ 0x10007118

void FUN_10007118(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10011b48 == 3) {
    iVar1 = 0;
    if (0 < DAT_10011b38) {
      puVar2 = (undefined4 *)((int)DAT_10011b3c + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10011b44,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10011b38);
    }
    HeapFree(DAT_10011b44,0,DAT_10011b3c);
  }
  else if (DAT_10011b48 == 2) {
    ppuVar3 = &PTR_LOOP_1000ccd8;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000ccd8);
  }
  HeapDestroy(DAT_10011b44);
  return;
}



// Function: FUN_100071c0 @ 0x100071c0

void FUN_100071c0(void)

{
  if ((DAT_100115b0 == 1) || ((DAT_100115b0 == 0 && (DAT_100115b4 == 1)))) {
    FUN_100071f9(0xfc);
    if (DAT_10011708 != (code *)0x0) {
      (*DAT_10011708)();
    }
    FUN_100071f9(0xff);
  }
  return;
}



// Function: FUN_100071f9 @ 0x100071f9

void __cdecl FUN_100071f9(DWORD param_1)

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
  pDVar2 = &DAT_1000cc48;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000ccd8);
  if (param_1 == (&DAT_1000cc48)[iVar5 * 2]) {
    if ((DAT_100115b0 == 1) || ((DAT_100115b0 == 0 && (DAT_100115b4 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000cc4c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10008ef0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10008ef0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10008f00(local_a4,_Dest);
      FUN_10008f00(local_a4,(uint *)&DAT_1000b4ac);
      FUN_10008f00(local_a4,*(uint **)(iVar5 * 8 + 0x1000cc4c));
      auStackY_1e3._3_4_ = 0x1000731d;
      FUN_100096df(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_1000734c @ 0x1000734c

undefined4 __cdecl FUN_1000734c(undefined4 param_1)

{
  DAT_10011b3c = HeapAlloc(DAT_10011b44,0,0x140);
  if (DAT_10011b3c == (LPVOID)0x0) {
    return 0;
  }
  DAT_10011b34 = 0;
  DAT_10011b38 = 0;
  DAT_10011b30 = DAT_10011b3c;
  DAT_10011b40 = param_1;
  DAT_10011b28 = 0x10;
  return 1;
}



// Function: FUN_10007394 @ 0x10007394

uint __cdecl FUN_10007394(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10011b3c;
  while( true ) {
    if (DAT_10011b3c + DAT_10011b38 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_100073bf @ 0x100073bf

void __cdecl FUN_100073bf(uint *param_1,int param_2)

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
      if (DAT_10011b34 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10011b2c * 0x8000 + DAT_10011b34[3]),0x8000,0x4000);
        DAT_10011b34[2] = DAT_10011b34[2] | 0x80000000U >> ((byte)DAT_10011b2c & 0x1f);
        *(undefined4 *)(DAT_10011b34[4] + 0xc4 + DAT_10011b2c * 4) = 0;
        *(char *)(DAT_10011b34[4] + 0x43) = *(char *)(DAT_10011b34[4] + 0x43) + -1;
        if (*(char *)(DAT_10011b34[4] + 0x43) == '\0') {
          DAT_10011b34[1] = DAT_10011b34[1] & 0xfffffffe;
        }
        if (DAT_10011b34[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10011b34[3],0,0x8000);
          HeapFree(DAT_10011b44,0,(LPVOID)DAT_10011b34[4]);
          FUN_10009770(DAT_10011b34,DAT_10011b34 + 5,
                       (DAT_10011b38 * 0x14 - (int)DAT_10011b34) + -0x14 + DAT_10011b3c);
          DAT_10011b38 = DAT_10011b38 + -1;
          if (DAT_10011b34 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10011b30 = DAT_10011b3c;
        }
      }
      DAT_10011b34 = param_1;
      DAT_10011b2c = uVar14;
    }
  }
  return;
}



// Function: FUN_100076e8 @ 0x100076e8

int * __cdecl FUN_100076e8(uint *param_1)

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
  
  puVar8 = DAT_10011b3c + DAT_10011b38 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10011b30;
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
  puVar11 = DAT_10011b3c;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10011b30 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10011b30) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10011b3c;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10011b30 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10011b30) && (param_1 = FUN_100079f1(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10007aa2((int)param_1);
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
  DAT_10011b30 = param_1;
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
    if (iVar9 == 0) goto LAB_100079ae;
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
LAB_100079ae:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10011b34)) && (local_8 == DAT_10011b2c)) {
    DAT_10011b34 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_100079f1 @ 0x100079f1

undefined4 * FUN_100079f1(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10011b38 == DAT_10011b28) {
    pvVar2 = HeapReAlloc(DAT_10011b44,0,DAT_10011b3c,(DAT_10011b28 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10011b28 = DAT_10011b28 + 0x10;
    DAT_10011b3c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10011b3c + DAT_10011b38 * 0x14);
  pvVar2 = HeapAlloc(DAT_10011b44,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10011b38 = DAT_10011b38 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10011b44,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10007aa2 @ 0x10007aa2

int __cdecl FUN_10007aa2(int param_1)

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



// Function: FUN_10007b9d @ 0x10007b9d

undefined ** FUN_10007b9d(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000cce8 == -1) {
    lpMem = &PTR_LOOP_1000ccd8;
  }
  else {
    lpMem = HeapAlloc(DAT_10011b44,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000ccd8) {
        if (PTR_LOOP_1000ccd8 == (undefined *)0x0) {
          PTR_LOOP_1000ccd8 = (undefined *)&PTR_LOOP_1000ccd8;
        }
        if (PTR_LOOP_1000ccdc == (undefined *)0x0) {
          PTR_LOOP_1000ccdc = (undefined *)&PTR_LOOP_1000ccd8;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000ccd8;
        lpMem[1] = PTR_LOOP_1000ccdc;
        PTR_LOOP_1000ccdc = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1000ccd8) {
    HeapFree(DAT_10011b44,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_10007ce1 @ 0x10007ce1

void __cdecl FUN_10007ce1(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1000ecf8 == param_1) {
    PTR_LOOP_1000ecf8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000ccd8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10011b44,0,param_1);
    return;
  }
  DAT_1000cce8 = 0xffffffff;
  return;
}



// Function: FUN_10007d37 @ 0x10007d37

void __cdecl FUN_10007d37(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000ccdc;
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
            DAT_1001170c = DAT_1001170c + -1;
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
          FUN_10007ce1(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000ccdc) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_10007df9 @ 0x10007df9

int __cdecl FUN_10007df9(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000ccd8;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000ccd8) {
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



// Function: FUN_10007e50 @ 0x10007e50

void __cdecl FUN_10007e50(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1001170c = DAT_1001170c + 1, DAT_1001170c == 0x20)) {
    FUN_10007d37(0x10);
  }
  return;
}



// Function: FUN_10007e95 @ 0x10007e95

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10007e95(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_1000ecf8;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_1000809d(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10007f60;
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
          piVar5 = (int *)FUN_1000809d(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10007f60:
            PTR_LOOP_1000ecf8 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_1000ecf8) {
      ppuVar9 = &PTR_LOOP_1000ccd8;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000ccd8) {
          ppuVar9 = FUN_10007b9d();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1000ecf8 = (undefined *)ppuVar9;
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
      PTR_LOOP_1000ecf8 = (undefined *)ppuVar9;
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



// Function: FUN_1000809d @ 0x1000809d

int __cdecl FUN_1000809d(int *param_1,uint param_2,uint param_3)

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
          goto LAB_100081b0;
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
LAB_100081b0:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_100081c1 @ 0x100081c1

void FUN_100081c1(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000ed44);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000ed34);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000ed24);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000ed04);
  return;
}



// Function: FUN_100081ea @ 0x100081ea

void FUN_100081ea(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000ed00;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000ed44)) && (ppuVar1 != &PTR_DAT_1000ed34)) &&
       ((ppuVar1 != &PTR_DAT_1000ed24 && (ppuVar1 != &PTR_DAT_1000ed04)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100055cb(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000edc0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000ed24);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000ed34);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000ed44);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000ed04);
  return;
}



// Function: FUN_10008256 @ 0x10008256

void __cdecl FUN_10008256(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000ed00 + param_1;
  if ((&DAT_1000ed00)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10008256(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100055cb((undefined *)lpCriticalSection);
    }
    FUN_100082b7(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_100082b7 @ 0x100082b7

void __cdecl FUN_100082b7(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000ed00)[param_1]);
  return;
}



// Function: __global_unwind2 @ 0x100082cc

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100082e4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000830e

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
  puStack_18 = &LAB_100082ec;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100083a2();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_100083a2 @ 0x100083a2

void FUN_100083a2(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000edc8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000edc4 = in_EAX;
  DAT_1000edcc = unaff_EBP;
  return;
}



// Function: FUN_10008481 @ 0x10008481

void FUN_10008481(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_1000849c @ 0x1000849c

int * __cdecl FUN_1000849c(int param_1,int param_2)

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
  puStack_c = &DAT_1000b4e8;
  puStack_10 = &LAB_100083c4;
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
      if (DAT_10011b48 == 3) {
        if (puVar2 <= DAT_10011b40) {
          FUN_10008256(9);
          local_8 = 0;
          local_24 = FUN_100076e8(puVar2);
          local_8 = 0xffffffff;
          FUN_10008535();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10008589;
LAB_10008578:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10008584:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10011b48 != 2) || (DAT_1000ecfc < puVar3)) goto LAB_10008584;
        FUN_10008256(9);
        local_8 = 1;
        local_24 = FUN_10007e95((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_100085be();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10008578;
      }
LAB_10008589:
      local_24 = HeapAlloc(DAT_10011b44,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10011770 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10008c02(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_10008535 @ 0x10008535

void FUN_10008535(void)

{
  FUN_100082b7(9);
  return;
}



// Function: FUN_100085be @ 0x100085be

void FUN_100085be(void)

{
  FUN_100082b7(9);
  return;
}



// Function: FUN_1000865a @ 0x1000865a

uint FUN_1000865a(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  uVar4 = 0xffffffff;
  FUN_10008256(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_10011b60;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_10008256(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_100082b7(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          uVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (uVar4 != 0xffffffff) goto LAB_1000876c;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x10011c5f < (int)piVar3) goto LAB_1000876c;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_10011c60 = DAT_10011c60 + 0x20;
    (&DAT_10011b60)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_10011b60)[local_8];
    }
    uVar4 = local_8 << 5;
    FUN_100088ba(uVar4);
  }
LAB_1000876c:
  FUN_100082b7(0x12);
  return uVar4;
}



// Function: FUN_1000877d @ 0x1000877d

undefined4 __cdecl FUN_1000877d(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10011c60) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_10011b60)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_100115b4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100087d6;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_100087d6:
      *(HANDLE *)((&DAT_10011b60)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_10006332();
  *pDVar1 = 9;
  pDVar1 = FUN_1000633b();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_100087f9 @ 0x100087f9

undefined4 __cdecl FUN_100087f9(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10011c60) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10011b60)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_100115b4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10008855;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10008855:
      *(undefined4 *)((&DAT_10011b60)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10006332();
  *pDVar2 = 9;
  pDVar2 = FUN_1000633b();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10008878 @ 0x10008878

undefined4 __cdecl FUN_10008878(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10011c60) &&
     ((*(byte *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10011b60)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10006332();
  *pDVar1 = 9;
  pDVar1 = FUN_1000633b();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_100088ba @ 0x100088ba

void __cdecl FUN_100088ba(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10011b60)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10008256(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_100082b7(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10011b60)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_10008919 @ 0x10008919

void __cdecl FUN_10008919(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10011b60)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_1000893b @ 0x1000893b

undefined4 __cdecl FUN_1000893b(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10011c60 <= param_1) {
LAB_100089bc:
    pDVar3 = FUN_10006332();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_100089bc;
  FUN_100088ba(param_1);
  if ((*(byte *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10008878(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_100089b1;
    pDVar3 = FUN_1000633b();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10006332();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_100089b1:
  FUN_10008919(param_1);
  return uVar5;
}



// Function: FUN_100089ce @ 0x100089ce

int __cdecl FUN_100089ce(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10011c60) &&
     ((*(byte *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100088ba(param_1);
    iVar1 = FUN_10008a33(param_1,param_2,param_3);
    FUN_10008919(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10006332();
  *pDVar2 = 9;
  pDVar2 = FUN_1000633b();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10008a33 @ 0x10008a33

int __cdecl FUN_10008a33(DWORD param_1,char *param_2,uint param_3)

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
LAB_10008a4c:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10011b60 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_100065b9(param_1,0,2);
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
LAB_10008b1b:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10008b8d;
      if (param_1 == 5) {
        pDVar7 = FUN_10006332();
        *pDVar7 = 9;
        pDVar7 = FUN_1000633b();
        *pDVar7 = 5;
      }
      else {
        FUN_100062bf(param_1);
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
            goto LAB_10008b1b;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10008b1b;
        } while( true );
      }
LAB_10008b8d:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10008a4c;
      pDVar7 = FUN_10006332();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1000633b();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_10008bbe @ 0x10008bbe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10008bbe(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_100115b8 = _DAT_100115b8 + 1;
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



// Function: FUN_10008c02 @ 0x10008c02

undefined4 __cdecl FUN_10008c02(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10011774 != (code *)0x0) {
    iVar1 = (*DAT_10011774)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10008c1d @ 0x10008c1d

uint __cdecl FUN_10008c1d(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

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
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_1001178c != 0x8000)))) {
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
    if (uVar2 != 2) goto LAB_10008d21;
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
    if (param_3 != 0x40) goto LAB_10008d21;
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
      if (uVar2 == 0x200) goto LAB_10008d3b;
      if (uVar2 != 0x300) goto LAB_10008d21;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_10008d3b:
        local_c = 5;
        goto LAB_10008d4b;
      }
      if (uVar2 != 0x700) {
LAB_10008d21:
        pDVar4 = FUN_10006332();
        *pDVar4 = 0x16;
        pDVar4 = FUN_1000633b();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_10008d4b:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_100115bc & param_4 & 0x80) == 0)) {
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
  uVar3 = FUN_1000865a();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_10006332();
    *pDVar4 = 0x18;
    pDVar4 = FUN_1000633b();
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
      FUN_1000877d(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_10011b60)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_100065b9(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_1000633b();
          if (*pDVar4 == 0x83) goto LAB_10008ec5;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_10005c6f(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) ||
              (iVar6 = FUN_10009b08(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_100065b9(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_10008ec5;
        }
        FUN_100058ec(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_10008ec5:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_10011b60)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_10008ede;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_100062bf(DVar5);
  uVar2 = 0xffffffff;
LAB_10008ede:
  FUN_10008919(uVar3);
  return uVar2;
}



// Function: FUN_10008ef0 @ 0x10008ef0

uint * __cdecl FUN_10008ef0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10008fd8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10008fd8:
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



// Function: FUN_10008f00 @ 0x10008f00

uint * __cdecl FUN_10008f00(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10008f1c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10008f4f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10008f6b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10008f1c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10008f6b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10008f6b;
    }
  }
LAB_10008f4f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10008f6b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10008fd8:
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
    if (bVar1 == 0) goto LAB_10008fd8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x10008fe0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10009000;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10009033:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10009000:
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
  goto LAB_10009033;
}



// Function: FUN_1000905b @ 0x1000905b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000905b(int param_1)

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
  
  FUN_10008256(0x19);
  CodePage = FUN_10009208(param_1);
  if (CodePage != DAT_10011908) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000ee68;
LAB_10009098:
      if (*pUVar5 != CodePage) goto code_r0x1000909c;
      local_8 = 0;
      puVar15 = &DAT_10011a20;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000ee78);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000ee60)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10011a20 + uVar8 + 1);
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
      _DAT_1001191c = 1;
      DAT_10011908 = CodePage;
      DAT_10011b24 = FUN_10009252(CodePage);
      DAT_10011910 = *(undefined4 *)(iVar12 + 0x1000ee6c);
      DAT_10011914 = *(undefined4 *)(iVar12 + 0x1000ee70);
      DAT_10011918 = *(undefined4 *)(iVar12 + 0x1000ee74);
      goto LAB_100091ec;
    }
    goto LAB_100091e7;
  }
  goto LAB_10009082;
code_r0x1000909c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1000ef57 < (int)pUVar5) goto code_r0x100090a7;
  goto LAB_10009098;
code_r0x100090a7:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10011b24 = 0;
    puVar15 = &DAT_10011a20;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1001191c = 0;
      DAT_10011908 = CodePage;
    }
    else {
      DAT_10011908 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10011a20 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10011a20 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10011b24 = FUN_10009252(CodePage);
      _DAT_1001191c = 1;
    }
    DAT_10011910 = 0;
    DAT_10011914 = 0;
    DAT_10011918 = 0;
  }
  else {
    if (DAT_1001177c == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100091f9;
    }
LAB_100091e7:
    FUN_10009285();
  }
LAB_100091ec:
  FUN_100092ae();
LAB_10009082:
  uVar14 = 0;
LAB_100091f9:
  FUN_100082b7(0x19);
  return uVar14;
}



// Function: FUN_10009208 @ 0x10009208

int __cdecl FUN_10009208(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1001177c = 1;
                    /* WARNING: Could not recover jumptable at 0x10009222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1001177c = 1;
                    /* WARNING: Could not recover jumptable at 0x10009237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100117a8;
  }
  DAT_1001177c = (uint)bVar2;
  return param_1;
}



// Function: FUN_10009252 @ 0x10009252

undefined4 __cdecl FUN_10009252(int param_1)

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



// Function: FUN_10009285 @ 0x10009285

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009285(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10011a20;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10011908 = 0;
  _DAT_1001191c = 0;
  DAT_10011b24 = 0;
  DAT_10011910 = 0;
  DAT_10011914 = 0;
  DAT_10011918 = 0;
  return;
}



// Function: FUN_100092ae @ 0x100092ae

void FUN_100092ae(void)

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
  
  BVar2 = GetCPInfo(DAT_10011908,&local_18);
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
    FUN_10009e7c(1,local_118,0x100,local_518,DAT_10011908,DAT_10011b24,0);
    FUN_10009c2d(DAT_10011b24,0x100,local_118,0x100,local_218,0x100,DAT_10011908,0);
    FUN_10009c2d(DAT_10011b24,0x200,local_118,0x100,local_318,0x100,DAT_10011908,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10011a20 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_100093ba;
        }
        (&DAT_10011920)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10011a20 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_100093ba:
        (&DAT_10011920)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10011a20 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10009404;
        }
        (&DAT_10011920)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10011a20 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10009404:
        (&DAT_10011920)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10009433 @ 0x10009433

void FUN_10009433(void)

{
  if (DAT_10011b50 == 0) {
    FUN_1000905b(-3);
    DAT_10011b50 = 1;
  }
  return;
}



// Function: FUN_1000944f @ 0x1000944f

void __thiscall FUN_1000944f(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10009466(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_10009466 @ 0x10009466

void * __thiscall FUN_10009466(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1000f16c < 2) {
      uVar3 = (byte)PTR_DAT_1000ef60[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000ef60;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_1000a100(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_100094c1:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_100094c1;
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
      goto LAB_1000952b;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_1000952b;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1000952b:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000f16c < 2) {
      uVar5 = (byte)PTR_DAT_1000ef60[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_1000a100(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000f16c < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000ef60 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1000a100(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_100095d7:
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
          pDVar6 = FUN_10006332();
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
      uVar3 = FUN_10009fc5((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_100095d7;
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



// Function: _strncmp @ 0x10009670

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



// Function: FUN_100096b0 @ 0x100096b0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100096b0(void)

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



// Function: FUN_100096df @ 0x100096df

int __cdecl FUN_100096df(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10011780 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10011780 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10011780 != (FARPROC)0x0) {
        DAT_10011784 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10011788 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000972e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000972e:
    if (DAT_10011784 != (FARPROC)0x0) {
      iVar1 = (*DAT_10011784)();
      if ((iVar1 != 0) && (DAT_10011788 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10011788)(iVar1);
      }
    }
    iVar1 = (*DAT_10011780)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: FUN_10009770 @ 0x10009770

undefined4 * __cdecl FUN_10009770(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10009927_caseD_2;
        case 3:
          goto switchD_10009927_caseD_3;
        }
        goto switchD_10009927_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10009927_caseD_0;
      case 1:
        goto switchD_10009927_caseD_1;
      case 2:
        goto switchD_10009927_caseD_2;
      case 3:
        goto switchD_10009927_caseD_3;
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
              goto switchD_10009927_caseD_2;
            case 3:
              goto switchD_10009927_caseD_3;
            }
            goto switchD_10009927_caseD_1;
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
              goto switchD_10009927_caseD_2;
            case 3:
              goto switchD_10009927_caseD_3;
            }
            goto switchD_10009927_caseD_1;
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
              goto switchD_10009927_caseD_2;
            case 3:
              goto switchD_10009927_caseD_3;
            }
            goto switchD_10009927_caseD_1;
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
switchD_10009927_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10009927_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10009927_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10009927_caseD_0:
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
        goto switchD_100097a5_caseD_2;
      case 3:
        goto switchD_100097a5_caseD_3;
      }
      goto switchD_100097a5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100097a5_caseD_0;
    case 1:
      goto switchD_100097a5_caseD_1;
    case 2:
      goto switchD_100097a5_caseD_2;
    case 3:
      goto switchD_100097a5_caseD_3;
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
            goto switchD_100097a5_caseD_2;
          case 3:
            goto switchD_100097a5_caseD_3;
          }
          goto switchD_100097a5_caseD_1;
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
            goto switchD_100097a5_caseD_2;
          case 3:
            goto switchD_100097a5_caseD_3;
          }
          goto switchD_100097a5_caseD_1;
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
            goto switchD_100097a5_caseD_2;
          case 3:
            goto switchD_100097a5_caseD_3;
          }
          goto switchD_100097a5_caseD_1;
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
switchD_100097a5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100097a5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100097a5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100097a5_caseD_0:
  return param_1;
}



// Function: _memset @ 0x10009ab0

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



// Function: FUN_10009b08 @ 0x10009b08

int __cdecl FUN_10009b08(uint param_1,int param_2)

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
  
  FUN_100096b0();
  iVar8 = 0;
  DVar1 = FUN_100065b9(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_100065b9(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_100065b9(param_1,param_2,0);
        hFile = (HANDLE)FUN_10008878(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_10006332();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_1000633b();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x10009b75;
      iVar3 = FUN_1000a175(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_10008a33(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_1000633b();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_10006332();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_1000a175(param_1,iVar3);
    }
    FUN_100065b9(param_1,DVar1,0);
  }
  return iVar8;
}



// Function: FUN_10009c2d @ 0x10009c2d

int __cdecl
FUN_10009c2d(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b548;
  puStack_10 = &LAB_100083c4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_100117b0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100117b0 = 2;
    }
    else {
      DAT_100117b0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10009e51(param_3,param_4);
  }
  if (DAT_100117b0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_100117b0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100117a8;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_100096b0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_100096b0();
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



// Function: FUN_10009e51 @ 0x10009e51

int __cdecl FUN_10009e51(char *param_1,int param_2)

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



// Function: FUN_10009e7c @ 0x10009e7c

BOOL __cdecl
FUN_10009e7c(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000b560;
  puStack_10 = &LAB_100083c4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_100117b4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_100117b4 == 0) {
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
  DAT_100117b4 = iVar3;
  if (DAT_100117b4 != 2) {
    if (DAT_100117b4 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_100117a8;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_100096b0();
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
    param_6 = DAT_10011798;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10009fc5 @ 0x10009fc5

uint __cdecl FUN_10009fc5(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10011798 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10011904);
    bVar1 = DAT_10011900 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10011904);
      this = (void *)0x13;
      FUN_10008256(0x13);
    }
    param_1 = FUN_1000a034(this,param_1);
    if (bVar1) {
      FUN_100082b7(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10011904);
    }
  }
  return param_1;
}



// Function: FUN_1000a034 @ 0x1000a034

uint __thiscall FUN_1000a034(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10011798 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000f16c < 2) {
        uVar2 = (byte)PTR_DAT_1000ef60[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1000a100(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000ef60[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10009c2d(DAT_10011798,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_1000a100 @ 0x1000a100

uint __thiscall FUN_1000a100(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000ef60 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000ef60[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10009e7c(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_1000a175 @ 0x1000a175

int __cdecl FUN_1000a175(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_10006332();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_10011b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}



// Function: FUN_1000a270 @ 0x1000a270

byte * __cdecl FUN_1000a270(byte *param_1,byte *param_2)

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



// Function: FUN_1000a2b0 @ 0x1000a2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000a2b0(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_10011904;
  if (DAT_10011798 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000a2fe;
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
LAB_1000a2fe:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10011904 = _DAT_10011904 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10011900;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10011904 = iVar2;
      FUN_10008256(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000a35f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1000a575(this,uVar8);
      uVar7 = FUN_1000a575(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000a35f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10011904 = _DAT_10011904 + -1;
      UNLOCK();
    }
    else {
      FUN_100082b7(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_1000a380 @ 0x1000a380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000a380(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_10011904;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_10011798 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000a3df;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000a3df:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10011904 = _DAT_10011904 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10011900;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10011904 = iVar2;
        FUN_10008256(0x13);
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
        uVar7 = FUN_1000a575(param_3,uVar7);
        uVar5 = FUN_1000a575(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000a455;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000a455:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10011904 = _DAT_10011904 + -1;
        UNLOCK();
      }
      else {
        FUN_100082b7(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_1000a575 @ 0x1000a575

uint __thiscall FUN_1000a575(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10011798 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000f16c < 2) {
        uVar2 = (byte)PTR_DAT_1000ef60[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1000a100(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000ef60[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10009c2d(DAT_10011798,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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




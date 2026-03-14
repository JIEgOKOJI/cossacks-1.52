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
  
  *(undefined4 *)((int)this + 0x323) = 100;
  *(undefined4 *)((int)this + 0x32b) = 100;
  *(undefined4 *)((int)this + 0x2d4) = param_8;
  *(undefined4 *)((int)this + 0x337) = 300;
  *(undefined4 *)((int)this + 0x333) = 300;
  *(undefined4 *)((int)this + 0x2f7) = param_2;
  *(undefined4 *)((int)this + 0x2dc) = param_10;
  *(undefined4 *)((int)this + 0x2fb) = param_4;
  *(undefined4 *)((int)this + 0x2e0) = param_11;
  *(undefined4 *)((int)this + 0x2d8) = param_9;
  *(int *)((int)this + 0x344) = param_13 * 0xf;
  *(undefined4 *)((int)this + 0x2e4) = param_12;
  *(undefined4 *)((int)this + 0x2d0) = param_7;
  *(undefined1 *)((int)this + 0x33b) = (undefined1)param_5;
  uVar2 = 0xffffffff;
  *(undefined4 *)((int)this + 0x327) = 200;
  *(undefined4 *)((int)this + 0x32f) = 500;
  *(undefined1 *)((int)this + 0x348) = 1;
  *(undefined1 *)((int)this + 0x349) = 1;
  *(int *)((int)this + 0x33c) = param_6;
  *(undefined4 *)((int)this + 0x34e) = 1;
  *(undefined1 *)((int)this + 0x352) = 1;
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
  pcVar5 = (char *)((int)this + 0x2e8);
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
  *(int *)((int)this + 0x2ff) = param_1;
  *(undefined4 *)((int)this + 0x30f) = 2000;
  *(undefined4 *)((int)this + 799) = 0;
  *(undefined4 *)((int)this + 0x31b) = 0;
  *(undefined4 *)((int)this + 0x317) = 0;
  *(undefined4 *)((int)this + 0x313) = 0;
  *(undefined4 *)((int)this + 0x30b) = 0;
  if (param_1 == 0) {
    return;
  }
  if (((param_6 == 0) || (param_6 == 1)) || (param_6 == 2)) {
    RegisterDynGroup((int)this + 0x303);
    CreateObject0(&DAT_1000f2b8,&DAT_1000f700,&DAT_1000ef38,param_5,param_4,0);
    RemoveGroup(&DAT_1000f2b8,(int)this + 0x303);
  }
  if (param_6 == 0) {
    TakeWood((int)this + 0x303);
  }
  else if (param_6 != 1) {
    if (param_6 != 2) {
      *(undefined4 *)((int)this + 0x340) = 0xf;
      return;
    }
    goto LAB_100011da;
  }
  TakeFood((int)this + 0x303);
LAB_100011da:
  TakeStone((int)this + 0x303);
  *(undefined4 *)((int)this + 0x340) = 0xf;
  return;
}



// Function: FUN_10001200 @ 0x10001200

void __thiscall
FUN_10001200(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)((int)this + 0x2d4) = param_3;
  *(undefined4 *)((int)this + 0x2d8) = param_4;
  *(undefined4 *)((int)this + 0x2dc) = param_5;
  *(undefined4 *)((int)this + 0x2e0) = param_6;
  *(undefined4 *)((int)this + 0x2e4) = param_7;
  *(undefined4 *)((int)this + 0x2d0) = param_2;
  *(undefined4 *)((int)this + 0x2fb) = param_1;
  return;
}



// Function: FUN_10001250 @ 0x10001250

void __fastcall FUN_10001250(int param_1)

{
  if (*(int *)(param_1 + 0x2ff) == 1) {
    FUN_10001330(param_1);
    FUN_100014c0(param_1);
  }
  return;
}



// Function: FUN_10001270 @ 0x10001270

void __fastcall FUN_10001270(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 100;
  *(undefined4 *)(param_1 + 0x337) = 300;
  *(undefined4 *)(param_1 + 0x333) = 300;
  *(undefined4 *)(param_1 + 0x323) = 100;
  *(undefined4 *)(param_1 + 0x32b) = 100;
  *(undefined4 *)(param_1 + 0x327) = 200;
  *(undefined4 *)(param_1 + 0x32f) = 500;
  if (*(int *)(param_1 + 0x2ff) == 1) {
    iVar2 = 0xc;
    do {
      if (iVar1 < *(int *)(param_1 + 0x30b)) {
        *(int *)(param_1 + 0x323) = *(int *)(param_1 + 0x323) + -8;
      }
      if (iVar1 < *(int *)(param_1 + 0x313)) {
        *(int *)(param_1 + 0x32b) = *(int *)(param_1 + 0x32b) + -8;
      }
      if (iVar1 < *(int *)(param_1 + 0x30f)) {
        *(int *)(param_1 + 0x327) = *(int *)(param_1 + 0x327) + -0x10;
      }
      if (iVar1 < *(int *)(param_1 + 0x31b)) {
        *(int *)(param_1 + 0x333) = *(int *)(param_1 + 0x333) + -0x18;
      }
      if (iVar1 < *(int *)(param_1 + 799)) {
        *(int *)(param_1 + 0x337) = *(int *)(param_1 + 0x337) + -0x18;
      }
      if (iVar1 < *(int *)(param_1 + 0x317)) {
        *(int *)(param_1 + 0x32f) = *(int *)(param_1 + 0x32f) + -0x28;
      }
      iVar1 = iVar1 * 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



// Function: FUN_10001330 @ 0x10001330

void __fastcall FUN_10001330(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100015a0(param_1);
  iVar2 = 0;
  *(int *)(param_1 + 0x340) = iVar1;
  if (0 < iVar1) {
    do {
      if (*(char *)(param_1 + 0x348) == '\0') break;
      if ((0 < *(int *)(param_1 + 0x34a)) &&
         ((((4 < *(int *)(param_1 + 0x30b) || (4 < *(int *)(param_1 + 0x313))) ||
           (4 < *(int *)(param_1 + 0x317))) ||
          ((4 < *(int *)(param_1 + 799) || (4 < *(int *)(param_1 + 0x31b))))))) {
        switch(*(undefined4 *)(param_1 + 0x33c)) {
        case 0:
          *(int *)(param_1 + 0x30b) = *(int *)(param_1 + 0x30b) + 0x19;
          break;
        case 1:
          *(int *)(param_1 + 0x30f) = *(int *)(param_1 + 0x30f) + 0x14;
          break;
        case 2:
          *(int *)(param_1 + 0x313) = *(int *)(param_1 + 0x313) + 0x19;
          break;
        case 3:
          *(int *)(param_1 + 0x317) = *(int *)(param_1 + 0x317) + 5;
          break;
        case 4:
          *(int *)(param_1 + 0x31b) = *(int *)(param_1 + 0x31b) + 0xf;
          break;
        case 5:
          *(int *)(param_1 + 799) = *(int *)(param_1 + 799) + 0xf;
        }
        if (*(int *)(param_1 + 0x30b) < 5) {
          if (*(int *)(param_1 + 0x313) < 5) {
            if (*(int *)(param_1 + 0x317) < 5) {
              if (*(int *)(param_1 + 0x31b) < 5) {
                if (4 < *(int *)(param_1 + 799)) {
                  *(int *)(param_1 + 799) = *(int *)(param_1 + 799) + -3;
                }
              }
              else {
                *(int *)(param_1 + 0x31b) = *(int *)(param_1 + 0x31b) + -3;
              }
            }
            else {
              *(int *)(param_1 + 0x317) = *(int *)(param_1 + 0x317) + -2;
            }
          }
          else {
            *(int *)(param_1 + 0x313) = *(int *)(param_1 + 0x313) + -5;
          }
        }
        else {
          *(int *)(param_1 + 0x30b) = *(int *)(param_1 + 0x30b) + -5;
        }
        *(int *)(param_1 + 0x34a) = *(int *)(param_1 + 0x34a) + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = *(int *)(param_1 + 0x34e) * iVar1;
  *(int *)(param_1 + 0x34a) = *(int *)(param_1 + 0x34a) + (3 - *(int *)(param_1 + 0x34e)) * iVar1;
  AddResource(CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(param_1 + 0x33b) + -1),1,iVar2);
  FUN_10001270(param_1);
  return;
}



// Function: FUN_100014c0 @ 0x100014c0

void __fastcall FUN_100014c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x34a) < 0x3e9) {
    return;
  }
  iVar1 = FUN_100015a0(param_1);
  if (*(int *)(param_1 + 0x344) <= iVar1) {
    return;
  }
  uVar2 = FUN_100015a0(param_1);
  *(undefined4 *)(param_1 + 0x340) = uVar2;
  iVar1 = *(int *)(param_1 + 0x33c);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) goto LAB_1000157f;
  CreateObject0(&DAT_1000f2b8,&DAT_1000eab0,&DAT_1000ef38,*(undefined1 *)(param_1 + 0x33b),
                *(undefined4 *)(param_1 + 0x2fb),0);
  iVar1 = *(int *)(param_1 + 0x33c);
  if (iVar1 == 0) {
    TakeWood(&DAT_1000f2b8);
LAB_1000154e:
    TakeFood(&DAT_1000f2b8);
LAB_1000155c:
    TakeStone(&DAT_1000f2b8);
  }
  else {
    if (iVar1 == 1) goto LAB_1000154e;
    if (iVar1 == 2) goto LAB_1000155c;
  }
  RemoveGroup(&DAT_1000f2b8,param_1 + 0x303);
LAB_1000157f:
  *(int *)(param_1 + 0x34a) = *(int *)(param_1 + 0x34a) + -1000;
  *(int *)(param_1 + 0x340) = *(int *)(param_1 + 0x340) + 1;
  return;
}



// Function: FUN_100015a0 @ 0x100015a0

void __fastcall FUN_100015a0(int param_1)

{
  GetTotalAmount0(param_1 + 0x303);
  return;
}



// Function: FUN_100015c0 @ 0x100015c0

void __thiscall FUN_100015c0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)((int)this + 0x2ff) != 0) && (*(char *)((int)this + 0x349) != '\0')) {
    if ((*(char *)((int)this + 0x352) != '\0') &&
       (((iVar1 = GetUnitsAmount2(*(undefined4 *)((int)this + 0x2fb),&DAT_1000f6d8,param_1),
         iVar1 != 0 ||
         (iVar1 = GetUnitsAmount2(*(undefined4 *)((int)this + 0x2fb),&DAT_1000f6d0,param_1),
         iVar1 != 0)) && (*(int *)((int)this + 0x2ff) == 1)))) {
      uVar2 = AskMultilineQuestion(9,s__PAGE1_1000b058,0,s_VI1_1_VI1_2_VI1_3_VI1_4_1000b060);
      switch(uVar2) {
      case 0:
        FUN_100016e0((int)this);
        *(undefined1 *)((int)this + 0x352) = 1;
        break;
      case 1:
        uVar2 = FUN_10001790((int)this);
        *(char *)((int)this + 0x352) = (char)uVar2;
        break;
      case 2:
        uVar2 = FUN_100017c0(this);
        *(char *)((int)this + 0x352) = (char)uVar2;
        break;
      case 3:
        *(undefined1 *)((int)this + 0x352) = 0;
      }
    }
    if (((*(char *)((int)this + 0x352) == '\0') &&
        (iVar1 = GetUnitsAmount2(*(undefined4 *)((int)this + 0x2fb),&DAT_1000f6d8,param_1),
        iVar1 == 0)) &&
       (iVar1 = GetUnitsAmount2(*(undefined4 *)((int)this + 0x2fb),&DAT_1000f6d0,param_1),
       iVar1 == 0)) {
      *(undefined1 *)((int)this + 0x352) = 1;
    }
  }
  return;
}



// Function: FUN_100016e0 @ 0x100016e0

void __fastcall FUN_100016e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2ff) == 1) {
    iVar1 = FUN_100015a0(param_1);
    ShowPageParam(s__PAGE11_1000b078,param_1 + 0x2e8,&DAT_1000f728 + *(int *)(param_1 + 0x33c) * 5,
                  &DAT_1000f728,*(undefined4 *)(param_1 + 0x30b),&DAT_1000f73c,
                  *(undefined4 *)(param_1 + 0x30f),&DAT_1000f750,*(undefined4 *)(param_1 + 0x313),
                  &DAT_1000f764,*(undefined4 *)(param_1 + 0x317),&DAT_1000f778,
                  *(undefined4 *)(param_1 + 0x31b),&DAT_1000f78c,*(undefined4 *)(param_1 + 799),
                  (3 - *(int *)(param_1 + 0x34e)) * iVar1,*(int *)(param_1 + 0x34e) * iVar1,iVar1,
                  *(undefined4 *)(param_1 + 0x34a),iVar1);
  }
  return;
}



// Function: FUN_10001790 @ 0x10001790

undefined4 __fastcall FUN_10001790(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = AskMultilineQuestion(9,s__PAGE12_1000b080,0,s_TPW1_0_TPW1_1_TPW1_2_TPW1_3_1000b088);
  *(undefined4 *)(param_1 + 0x34e) = uVar1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



// Function: FUN_100017c0 @ 0x100017c0

undefined4 __fastcall FUN_100017c0(void *param_1)

{
  int iVar1;
  
  do {
    while( true ) {
      while( true ) {
        do {
        } while (*(int *)((int)param_1 + 0x2ff) != 1);
        iVar1 = AskMultilineQuestion(9,s__PAGE13_1000b0a4,0,s_TR1_1_TR1_3_TR1_4_1000b0ac);
        if (iVar1 != 0) break;
        FUN_10001810(param_1);
      }
      if (iVar1 != 1) break;
      FUN_10001940(param_1);
    }
  } while (iVar1 != 2);
  return 1;
}



// Function: FUN_10001810 @ 0x10001810

void __fastcall FUN_10001810(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  
  uVar1 = AskMultilineQuestion(9,s__PAGE5_1000b0d4,0,s_R1_R2_R3_R4_R5_R6_1000b0dc);
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
  uVar1 = AskMultilineQuestion(9,s__PAGE6_1000b0cc,0,s_R1_R2_R3_R4_R5_R6_1000b0dc);
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
  FUN_10001270((int)param_1);
  iVar2 = FUN_10002060(param_1,pvVar5);
  iVar3 = FUN_10002060(param_1,pvVar4);
  ShowPageParam(s__PAGE131_1000b0c0,&DAT_1000f728 + (int)pvVar5 * 5,100,
                &DAT_1000f728 + (int)pvVar4 * 5,(iVar2 * 100) / iVar3);
  return;
}



// Function: FUN_10001940 @ 0x10001940

void __fastcall FUN_10001940(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  iVar2 = AskMultilineQuestion(9,s__PAGE133_1000b130,0,s_NO1_1_NO1_2_NO1_3_NO1_4_NO1_5_NO_1000b13c);
  iVar3 = AskMultilineQuestion(9,s__PAGE1331_1000b110,0,s_OD1_0_OD1_1_OD1_2_1000b11c);
  if (iVar3 == 0) {
    pvVar1 = (void *)((int)param_1 + iVar2 * 0x48);
    iVar2 = GetTotalAmount0(pvVar1);
    if (iVar2 != 0) {
      ShowPageParam(s__PAGE7_1000b0f8,(int)pvVar1 + 0x29,
                    &DAT_1000f728 + *(int *)((int)pvVar1 + 9) * 5,
                    &DAT_1000f728 + *(int *)((int)pvVar1 + 0x11) * 5,
                    &DAT_1000f728 + *(int *)((int)pvVar1 + 9) * 5,*(undefined4 *)((int)pvVar1 + 0xd)
                    ,&DAT_1000f728 + *(int *)((int)pvVar1 + 0x11) * 5,
                    *(undefined4 *)((int)pvVar1 + 0x15));
      return;
    }
    ShowPage(s__PAGE8_1000b0f0);
  }
  else {
    if (iVar3 == 1) {
      pvVar1 = (void *)((int)param_1 + iVar2 * 0x48);
      iVar3 = GetTotalAmount0(pvVar1);
      if (iVar3 == 0) {
        FUN_100021d0(pvVar1,*(undefined4 *)((int)param_1 + 0x2ff),(char *)((int)param_1 + 0x2e8),
                     *(undefined4 *)((int)param_1 + 0x2f7),
                     CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)((int)param_1 + 0x33b))
                     ,*(undefined4 *)((int)param_1 + 0x2fb));
      }
      FUN_10001a80(param_1,iVar2);
      return;
    }
    if (iVar3 == 2) {
      pvVar1 = (void *)((int)param_1 + iVar2 * 0x48);
      iVar2 = GetTotalAmount0(pvVar1);
      if (iVar2 != 0) {
        SelectUnits(pvVar1,0);
        SelDie(*(undefined1 *)((int)pvVar1 + 8));
        ShowPage(s__PAGE3_1000b108);
        return;
      }
      ShowPage(s__PAGE2_1000b100);
      return;
    }
  }
  return;
}



// Function: FUN_10001a80 @ 0x10001a80

void __thiscall FUN_10001a80(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = AskMultilineQuestion(9,s__PAGE4_1000b17c,0,*(undefined4 *)((int)this + 0x2d0));
  uVar2 = AskMultilineQuestion(9,s__PAGE5_1000b0d4,0,s_R1_R2_R3_R4_R5_R6_1000b0dc);
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
  uVar2 = AskMultilineQuestion(9,s__PAGE6_1000b0cc,0,s_R1_R2_R3_R4_R5_R6_1000b0dc);
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
  iVar1 = *(int *)((int)this + iVar1 * 4 + 0x2d4);
  FUN_10002240((void *)((int)this + param_1 * 0x48),(char *)(iVar1 + 0x2e8),
               *(undefined4 *)(iVar1 + 0x2f7),iVar4,iVar3);
  return;
}



// Function: FUN_10001b90 @ 0x10001b90

uint __fastcall FUN_10001b90(void *param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar7;
  int *piVar8;
  uint uStack_4;
  undefined3 uVar6;
  
  uVar6 = (undefined3)((uint)in_EAX >> 8);
  uVar1 = CONCAT31(uVar6,*(char *)((int)param_1 + 0x349));
  if (*(char *)((int)param_1 + 0x349) != '\0') {
    iVar2 = GetUnitsAmount2(*(undefined4 *)((int)param_1 + 0x2fb),&DAT_1000f300,
                            CONCAT31(uVar6,*(undefined1 *)((int)param_1 + 0x33b)));
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = 0;
      pvVar7 = param_1;
      do {
        if (*(char *)((int)pvVar7 + 0x19) == '\0') {
          iVar3 = GetUnitsAmount1(*(undefined4 *)((int)param_1 + 0x2fb),pvVar7);
          if (iVar3 != 0) {
            pvVar7 = (void *)((int)param_1 + iVar2 * 0x48);
            *(undefined1 *)((int)pvVar7 + 0x19) = 1;
            FUN_10001ce0(param_1,(int)pvVar7);
            FUN_10001d20(param_1,(int)pvVar7);
            uVar5 = FUN_100037f0(pvVar7,*(undefined4 *)((int)pvVar7 + 0x38),
                                 *(int *)((int)pvVar7 + 0x3c));
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
        }
        iVar2 = iVar2 + 1;
        pvVar7 = (void *)((int)pvVar7 + 0x48);
      } while (iVar2 < 10);
      uStack_4 = 0;
      piVar8 = (int *)((int)param_1 + 0x2d4);
      do {
        if (*piVar8 != 0) {
          iVar2 = 0;
          iVar3 = 0;
          do {
            if (*(char *)(*piVar8 + iVar3 + 0x19) != '\0') {
              iVar4 = GetUnitsAmount1(*(undefined4 *)((int)param_1 + 0x2fb),*piVar8 + iVar3);
              if (iVar4 != 0) {
                iVar2 = iVar2 * 0x48;
                *(undefined1 *)(*(int *)((int)param_1 + uStack_4 * 4 + 0x2d4) + 0x19 + iVar2) = 0;
                pvVar7 = *(void **)((int)param_1 + uStack_4 * 4 + 0x2d4);
                FUN_10001d90(param_1,(int)((int)pvVar7 + iVar2),pvVar7);
                iVar4 = *(int *)((int)param_1 + uStack_4 * 4 + 0x2d4);
                iVar3 = iVar4 + iVar2;
                uVar5 = FUN_100037f0(iVar3,*(undefined4 *)(iVar3 + 0x3c),
                                     *(int *)(iVar4 + 0x38 + iVar2));
                return CONCAT31((int3)((uint)uVar5 >> 8),1);
              }
            }
            iVar3 = iVar3 + 0x48;
            iVar2 = iVar2 + 1;
          } while (iVar3 < 0x2d0);
        }
        piVar8 = piVar8 + 1;
        uStack_4 = uStack_4 + 1;
      } while ((int)uStack_4 < 5);
      return uStack_4 & 0xffffff00;
    }
  }
  return uVar1 & 0xffffff00;
}



// Function: FUN_10001ce0 @ 0x10001ce0

void __thiscall FUN_10001ce0(void *this,int param_1)

{
  FUN_100020d0(this,*(undefined4 *)(param_1 + 9),*(int *)(param_1 + 0xd));
  FUN_100020d0(this,*(undefined4 *)(param_1 + 0x11),*(int *)(param_1 + 0x15));
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}



// Function: FUN_10001d20 @ 0x10001d20

void __thiscall FUN_10001d20(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10001ff0(this,*(undefined4 *)(param_1 + 9));
  if (DAT_1000b040 <= iVar1) {
    *(int *)(param_1 + 0xd) = DAT_1000b040;
    FUN_100020d0(this,*(undefined4 *)(param_1 + 9),-DAT_1000b040);
    return;
  }
  uVar2 = FUN_10001ff0(this,*(undefined4 *)(param_1 + 9));
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  iVar1 = FUN_10001ff0(this,*(undefined4 *)(param_1 + 9));
  FUN_100020d0(this,*(undefined4 *)(param_1 + 9),-iVar1);
  return;
}



// Function: FUN_10001d90 @ 0x10001d90

void __thiscall FUN_10001d90(void *this,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x2ff) != 0) {
    iVar1 = FUN_10002060(this,*(undefined4 *)(param_1 + 9));
    iVar1 = iVar1 * *(int *)(param_1 + 0xd);
    iVar2 = FUN_10001ff0(this,*(undefined4 *)(param_1 + 0x11));
    iVar3 = FUN_10002060(this,*(undefined4 *)(param_1 + 0x11));
    iVar2 = iVar2 * iVar3;
    if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
      FUN_100020d0(this,*(undefined4 *)(param_1 + 9),*(int *)(param_1 + 0xd));
      *(undefined4 *)(param_1 + 0xd) = 0;
      iVar2 = FUN_10002060(this,*(undefined4 *)(param_1 + 0x11));
      *(int *)(param_1 + 0x15) = iVar1 / iVar2;
      FUN_100020d0(this,*(undefined4 *)(param_1 + 0x11),-(iVar1 / iVar2));
      return;
    }
    uVar4 = FUN_10001ff0(this,*(undefined4 *)(param_1 + 0x11));
    *(undefined4 *)(param_1 + 0x15) = uVar4;
    iVar1 = FUN_10001ff0(this,*(undefined4 *)(param_1 + 0x11));
    FUN_100020d0(this,*(undefined4 *)(param_1 + 0x11),-iVar1);
    iVar1 = FUN_10002060(this,*(undefined4 *)(param_1 + 9));
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar2 / iVar1;
    iVar1 = FUN_10002060(this,*(undefined4 *)(param_1 + 9));
    FUN_100020d0(this,*(undefined4 *)(param_1 + 9),iVar2 / iVar1);
    return;
  }
  iVar1 = FUN_10002060(param_2,*(undefined4 *)(param_1 + 9));
  iVar1 = iVar1 * *(int *)(param_1 + 0xd);
  iVar2 = FUN_100021b0(*(int *)(param_1 + 0x11));
  iVar3 = GetResource(*(char *)((int)this + 0x33b) + -1,iVar2);
  iVar2 = FUN_10002060(param_2,*(undefined4 *)(param_1 + 0x11));
  iVar3 = iVar3 * iVar2;
  if (iVar1 <= iVar3) {
    uVar4 = *(undefined4 *)(param_1 + 0xd);
    iVar2 = FUN_100021b0(*(int *)(param_1 + 9));
    AddResource(*(char *)((int)this + 0x33b) + -1,iVar2,uVar4);
    *(undefined4 *)(param_1 + 0xd) = 0;
    iVar2 = FUN_10002060(param_2,*(undefined4 *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = iVar1 / iVar2;
    iVar1 = FUN_100021b0(*(int *)(param_1 + 0x11));
    iVar1 = GetResource(*(char *)((int)this + 0x33b) + -1,iVar1);
    iVar1 = iVar1 - *(int *)(param_1 + 0x15);
    iVar2 = FUN_100021b0(*(int *)(param_1 + 0x11));
    SetResource(*(char *)((int)this + 0x33b) + -1,iVar2,iVar1);
    return;
  }
  iVar1 = FUN_100021b0(*(int *)(param_1 + 0x11));
  uVar4 = GetResource(*(char *)((int)this + 0x33b) + -1,iVar1);
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  uVar4 = 0;
  iVar1 = FUN_100021b0(*(int *)(param_1 + 0x11));
  SetResource(*(char *)((int)this + 0x33b) + -1,iVar1,uVar4);
  iVar1 = FUN_10002060(param_2,*(undefined4 *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar3 / iVar1;
  iVar1 = FUN_10002060(param_2,*(undefined4 *)(param_1 + 9));
  iVar3 = iVar3 / iVar1;
  iVar1 = FUN_100021b0(*(int *)(param_1 + 9));
  AddResource(*(char *)((int)this + 0x33b) + -1,iVar1,iVar3);
  return;
}



// Function: FUN_10001ff0 @ 0x10001ff0

undefined4 __thiscall FUN_10001ff0(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return *(undefined4 *)((int)this + 0x30b);
  case 1:
    return *(undefined4 *)((int)this + 0x30f);
  case 2:
    return *(undefined4 *)((int)this + 0x313);
  case 3:
    return *(undefined4 *)((int)this + 0x317);
  case 4:
    return *(undefined4 *)((int)this + 0x31b);
  case 5:
    return *(undefined4 *)((int)this + 799);
  default:
    return 0;
  }
}



// Function: FUN_10002060 @ 0x10002060

undefined4 __thiscall FUN_10002060(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return *(undefined4 *)((int)this + 0x323);
  case 1:
    return *(undefined4 *)((int)this + 0x327);
  case 2:
    return *(undefined4 *)((int)this + 0x32b);
  case 3:
    return *(undefined4 *)((int)this + 0x32f);
  case 4:
    return *(undefined4 *)((int)this + 0x333);
  case 5:
    return *(undefined4 *)((int)this + 0x337);
  default:
    return 0;
  }
}



// Function: FUN_100020d0 @ 0x100020d0

void __thiscall FUN_100020d0(void *this,undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((int)this + 0x30b) = *(int *)((int)this + 0x30b) + param_2;
    return;
  case 1:
    *(int *)((int)this + 0x30f) = *(int *)((int)this + 0x30f) + param_2;
    return;
  case 2:
    *(int *)((int)this + 0x313) = *(int *)((int)this + 0x313) + param_2;
    return;
  case 3:
    *(int *)((int)this + 0x317) = *(int *)((int)this + 0x317) + param_2;
    return;
  case 4:
    *(int *)((int)this + 0x31b) = *(int *)((int)this + 0x31b) + param_2;
    return;
  case 5:
    *(int *)((int)this + 799) = *(int *)((int)this + 799) + param_2;
  }
  return;
}



// Function: FUN_10002180 @ 0x10002180

void __thiscall FUN_10002180(void *this,int param_1,undefined1 param_2,undefined1 param_3)

{
  *(undefined1 *)((int)this + 0x348) = param_2;
  *(int *)((int)this + 0x344) = param_1 * 0xf;
  *(undefined1 *)((int)this + 0x349) = param_3;
  return;
}



// Function: FUN_100021b0 @ 0x100021b0

int FUN_100021b0(int param_1)

{
  if (param_1 == 3) {
    return 1;
  }
  if (param_1 == 1) {
    param_1 = 3;
  }
  return param_1;
}



// Function: FUN_100021d0 @ 0x100021d0

void __thiscall
FUN_100021d0(void *this,undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  CreateObject0(this,&DAT_1000eab0,&DAT_1000f300,param_4,param_5,0);
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
  *(undefined4 *)((int)this + 0x44) = param_1;
  *(undefined4 *)((int)this + 0x38) = param_3;
  *(char *)((int)this + 8) = (char)param_4;
  *(undefined1 *)((int)this + 0x19) = 0;
  *(undefined4 *)((int)this + 0x15) = 0;
  *(undefined4 *)((int)this + 0xd) = 0;
  return;
}



// Function: FUN_10002240 @ 0x10002240

void __thiscall
FUN_10002240(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  *(undefined4 *)((int)this + 0x15) = 0;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0xd) = 0;
  *(undefined4 *)((int)this + 9) = param_3;
  *(undefined4 *)((int)this + 0x11) = param_4;
  return;
}



// Function: OnInit @ 0x100023d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OnInit(void)

{
                    /* 0x23d0  1  OnInit */
  RegisterFormation(&DAT_1000eab0,s__ALONE_1000b510);
  RegisterFormation(&DAT_1000f700,s__LINE15PUS_1000b504);
  RegisterUnitType(&DAT_1000f300,s_GRUZ_Z_UN__1000b4f8);
  RegisterUnitType(&DAT_1000ef38,s_Kreposnoi_portugal_sp__1000b4e0);
  RegisterUnitType(&DAT_1000f6d8,s_Gusar_evro_sp__1000b4d0);
  RegisterUnitType(&DAT_1000f6d0,s_Gusar_evro_PO__1000b4c0);
  RegisterDynGroup(&DAT_1000f2b8);
  RegisterVar(&DAT_1000f2b8,8);
  RegisterVar(&DAT_1000ef60,0x353);
  RegisterVar(&DAT_1000eba8,0x353);
  RegisterVar(&DAT_1000e740,0x353);
  RegisterVar(&DAT_1000e3c8,0x353);
  RegisterVar(&DAT_1000f340,0x353);
  RegisterVar(&DAT_1000b040,4);
  RegisterZone(&DAT_1000f2d8,s_ZOrsera_1000b4b8);
  RegisterZone(&DAT_1000eb68,s_ZAlkaras_1000b4ac);
  RegisterZone(&DAT_1000f6f8,s_ZBalasote_1000b4a0);
  RegisterZone(&DAT_1000f7a0,s_ZSpainTrade_1000b494);
  RegisterZone(&DAT_1000f708,s_ZPortugalTrade_1000b484);
  RegisterUnits(&DAT_1000eb48,s_GOrseraTrade_1000b474);
  RegisterUnits(&DAT_1000f6f0,s_GOrseraLive_1000b468);
  RegisterUnits(&DAT_1000f2e8,s_GOrseraProduce_1000b458);
  RegisterUnits(&DAT_1000f328,s_GAlkarasTrade_1000b448);
  RegisterUnits(&DAT_1000ef50,s_GAlkarasLive_1000b438);
  RegisterUnits(&DAT_1000f6e8,s_GAlkarasProduce_1000b428);
  RegisterUnits(&DAT_1000f318,s_GBalasoteTrade_1000b418);
  RegisterUnits(&DAT_1000eac0,s_GBalasoteLive_1000b408);
  RegisterUnits(&DAT_1000f6a0,s_GBalasoteProduce_1000b3f4);
  RegisterUnits(&DAT_1000f720,s_GSpainTrade_1000b3e8);
  RegisterUnits(&DAT_1000eb40,s_GPortugalTrade_1000b3d8);
  _DAT_1000f25b = &DAT_1000f7a0;
  _DAT_1000eea3 = &DAT_1000f708;
  _DAT_1000ea3b = &DAT_1000f2d8;
  _DAT_1000e6c3 = &DAT_1000eb68;
  _DAT_1000f63b = &DAT_1000f6f8;
  RegisterVar(&PTR_DAT_1000b044,0x14);
  SetPlayerName(2,s_SPAIN_1000b3d0);
  SetPlayerName(3,s_ENGLAND_1000b3c8);
  SetPlayerName(4,s_FRANCE_1000b3c0);
  SetPlayerName(6,s_TURKISH_1000b3b8);
  RegisterUnitType(&DAT_1000f2d0,s_Rinok_sp__1000b3ac);
  RegisterUnitType(&DAT_1000ef40,s_Rinok_PO__1000b3a0);
  RegisterUnitType(&DAT_1000f2e0,s_Rinok_Turki_TU__1000b390);
  RegisterUnitType(&DAT_1000eb98,s_Melnica_sp__1000b384);
  RegisterUnitType(&DAT_1000eb80,s_Melnica_PO__1000b378);
  RegisterUnitType(&DAT_1000f6e0,s_Kreposnoi_portugal_sp__1000b4e0);
  RegisterUnitType(&DAT_1000f698,s_Kreposnoi_portugal_PO__1000b360);
  RegisterUnitType(&DAT_1000f6c8,s_Lodka_sp__1000b354);
  RegisterUnitType(&DAT_1000f6a8,s_Lodka_PO__1000b348);
  RegisterUnitType(&DAT_1000eab8,s_Port_TU__1000b33c);
  RegisterUpgrade(&DAT_1000f310,s_Melnica_sp_GETRES_1000b328);
  RegisterUpgrade(&DAT_1000f2c0,s_Melnica_sp_GETRES2_1000b314);
  RegisterUpgrade(&DAT_1000ef48,s_AKA01SP_1000b30c);
  RegisterUpgrade(&DAT_1000ef18,s_AKA02SP_1000b304);
  RegisterUpgrade(&DAT_1000eb70,s_AKA03SP_1000b2fc);
  RegisterUpgrade(&DAT_1000eb50,s_AKA04SP_1000b2f4);
  RegisterUpgrade(&DAT_1000eac8,s_KUZ01SP_1000b2ec);
  RegisterUpgrade(&DAT_1000f320,s_Melnica_PO_GETRES_1000b2d8);
  RegisterUpgrade(&DAT_1000f2c8,s_Melnica_PO_GETRES2_1000b2c4);
  RegisterUpgrade(&DAT_1000ef58,s_AKA01PO_1000b2bc);
  RegisterUpgrade(&DAT_1000ef28,s_AKA02PO_1000b2b4);
  RegisterUpgrade(&DAT_1000eba0,s_AKA03PO_1000b2ac);
  RegisterUpgrade(&DAT_1000eb58,s_AKA04PO_1000b2a4);
  RegisterUpgrade(&DAT_1000eb38,s_KUZ01PO_1000b29c);
  RegisterUpgrade(&DAT_1000eaa0,s_AKA08SP_1000b294);
  RegisterUpgrade(&DAT_1000f308,s_AKA23SP_1000b28c);
  RegisterUpgrade(&DAT_1000f338,s_AKA24SP_1000b284);
  RegisterUpgrade(&DAT_1000ea98,s_AKA08PO_1000b27c);
  RegisterUpgrade(&DAT_1000f2f8,s_AKA23PO_1000b274);
  RegisterUpgrade(&DAT_1000f330,s_AKA24PO_1000b26c);
  RegisterUnits(&DAT_1000f720,s_GSpainTrade_1000b3e8);
  RegisterUnits(&DAT_1000eb40,s_GPortugalTrade_1000b3d8);
  RegisterZone(&DAT_1000f7a0,s_ZSpainTrade_1000b494);
  RegisterZone(&DAT_1000f708,s_ZPortugalTrade_1000b484);
  RegisterZone(&DAT_1000f2f0,s_ZAlert_1000b264);
  RegisterZone(&DAT_1000e730,s_ZAlert1_1000b25c);
  RegisterZone(&DAT_1000e728,s_ZAlert2_1000b254);
  RegisterZone(&DAT_1000e720,s_ZAlert3_1000b24c);
  RegisterZone(&DAT_1000e738,s_ZAlert4_1000b244);
  RegisterZone(&DAT_1000f718,s_Z0_3Way01_1000b238);
  RegisterZone(&DAT_1000eb90,s_Z1_3Way01_1000b22c);
  RegisterZone(&DAT_1000eb88,s_Z1_3Way02_1000b220);
  RegisterZone(&DAT_1000eb78,s_Z1_3Way03_1000b214);
  RegisterZone(&DAT_1000eb60,s_Z1_4Way01_1000b208);
  RegisterZone(&DAT_1000f6c0,s_Z2_4Way01_1000b1fc);
  RegisterZone(&DAT_1000f6b8,s_Z2_4Way02_1000b1f0);
  RegisterZone(&DAT_1000f6b0,s_Z2_4Way03_1000b1e4);
  RegisterUnits(&DAT_1000ef00,s_GPiasant_1000b1d8);
  RegisterUnits(&DAT_1000ef30,s_GWorota_1000b1d0);
  RegisterDynGroup(&DAT_1000eaa8);
  RegisterVar(&DAT_1000eaa8,8);
  RegisterZone(&DAT_1000e3c0,s_ZGetMoney01_1000b1c4);
  RegisterZone(&DAT_1000e3b8,s_ZGetMoney02_1000b1b8);
  RegisterZone(&DAT_1000ef20,s_ZAttack01_1000b1ac);
  RegisterZone(&DAT_1000ef08,s_ZAttack02_1000b1a0);
  RegisterZone(&DAT_1000ef10,s_ZAttack03_1000b194);
  RegisterUnits(&DAT_1000f7b0,s_GBashni_1000b18c);
  RegisterUnits(&DAT_1000f7a8,s_G18_VEC_1000b184);
  RegisterDynGroup(&DAT_1000f710);
  RegisterVar(&DAT_1000f710,8);
  return;
}



// Function: ProcessScenary @ 0x100028c0

void ProcessScenary(void)

{
  char cVar1;
  FILE *pFVar2;
  uint *puVar3;
  uint *puVar4;
  size_t sVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  code *pcVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  char *pcVar16;
  
                    /* 0x28c0  2  ProcessScenary */
  if (DAT_1000f7bc == '\0') {
    DAT_1000f7bc = '\x01';
    pFVar2 = (FILE *)FUN_10003fff(s_Missions__miss_vic_txt_1000b6f8,&DAT_1000b710);
    if (pFVar2 == (FILE *)0x0) {
      uVar8 = 0xffffffff;
      pcVar16 = &DAT_1000b6f0;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f728;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar16 = &DAT_1000b6e8;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f73c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar16 = s_STONE_1000b6e0;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f750;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar16 = &DAT_1000b6d8;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f764;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar16 = &DAT_1000b6d0;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f778;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar16 = &DAT_1000b6c8;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000f78c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar16 = s_ORSERA_1000b6c0;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000ead0;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar16 = s_ALKARAS_1000b6b8;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000eae4;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar16 = s_BALASOTE_1000b6ac;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000eaf8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar16 = s_SPAIN_1000b3d0;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000eb0c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar16 = s_PORTUGAL_1000b6a0;
      do {
        pcVar12 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar16 = pcVar12 + -uVar8;
      pcVar12 = (char *)&DAT_1000eb20;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
    else {
      FUN_10003f15((int *)pFVar2,0,2);
      uVar8 = FUN_10003d92((char *)pFVar2);
      puVar3 = operator_new(uVar8 + 1);
      FUN_10003f15((int *)pFVar2,0,0);
      FUN_10003c6d((char *)puVar3,1,uVar8,(int *)pFVar2);
      FUN_10003bf0(pFVar2);
      iVar11 = 0;
      iVar6 = 0;
      do {
        if (iVar6 == 0) {
          pcVar16 = &DAT_1000b698;
LAB_10002b0a:
          puVar4 = FUN_10003b70(puVar3,pcVar16);
          iVar11 = (int)puVar4 - (int)puVar3;
        }
        else {
          if (iVar6 == 1) {
            pcVar16 = &DAT_1000b690;
            goto LAB_10002b0a;
          }
          if (iVar6 == 2) {
            pcVar16 = &DAT_1000b688;
            goto LAB_10002b0a;
          }
          if (iVar6 == 3) {
            pcVar16 = &DAT_1000b680;
            goto LAB_10002b0a;
          }
          if (iVar6 == 4) {
            pcVar16 = &DAT_1000b678;
            goto LAB_10002b0a;
          }
          if (iVar6 == 5) {
            pcVar16 = &DAT_1000b670;
            goto LAB_10002b0a;
          }
        }
        iVar11 = iVar11 + 5;
        sVar5 = FUN_10003b30((byte *)(iVar11 + (int)puVar3),&DAT_1000b66c);
        iVar10 = iVar6 * 0x14;
        _strncpy((char *)(&DAT_1000f728 + iVar6 * 5),(char *)(iVar11 + (int)puVar3),sVar5);
        iVar6 = iVar6 + 1;
        *(undefined1 *)((int)&DAT_1000f728 + sVar5 + iVar10) = 0;
      } while (iVar6 < 6);
      iVar6 = 0;
      do {
        if (iVar6 == 0) {
          pcVar16 = s_ORSERA_1000b6c0;
LAB_10002b9d:
          puVar4 = FUN_10003b70(puVar3,pcVar16);
          iVar11 = (int)puVar4 - (int)puVar3;
        }
        else {
          if (iVar6 == 1) {
            pcVar16 = s_ALKARAS_1000b6b8;
            goto LAB_10002b9d;
          }
          if (iVar6 == 2) {
            pcVar16 = s_BALASOTE_1000b6ac;
            goto LAB_10002b9d;
          }
          if (iVar6 == 3) {
            pcVar16 = s_SPAIN_1000b3d0;
            goto LAB_10002b9d;
          }
          if (iVar6 == 4) {
            pcVar16 = s_PORTUGAL_1000b6a0;
            goto LAB_10002b9d;
          }
        }
        iVar11 = iVar11 + 10;
        sVar5 = FUN_10003b30((byte *)(iVar11 + (int)puVar3),&DAT_1000b66c);
        iVar10 = iVar6 * 0x14;
        _strncpy((char *)(&DAT_1000ead0 + iVar6 * 5),(char *)(iVar11 + (int)puVar3),sVar5);
        iVar6 = iVar6 + 1;
        *(undefined1 *)((int)&DAT_1000ead0 + sVar5 + iVar10) = 0;
      } while (iVar6 < 5);
      FUN_10003a20((undefined *)puVar3);
    }
  }
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    SetResource(0,0,5000);
    SetResource(0,3,5000);
    SetResource(0,2,5000);
    SetResource(0,1,5000);
    iVar6 = GetDiff(0);
    SetResource(0,4,(5 - iVar6) * 1000);
    iVar6 = GetDiff(0);
    SetResource(0,5,(5 - iVar6) * 1000);
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
    ChangeFriends(0,3);
    ChangeFriends(2,0xc);
    ChangeFriends(5,0x28);
    EnableUnit(0,&DAT_1000f2d0,0);
    EnableUnit(0,&DAT_1000ef40,0);
    EnableUnit(0,&DAT_1000f2e0,0);
    EnableUnit(0,&DAT_1000eb98,0);
    EnableUnit(0,&DAT_1000eb80,0);
    EnableUnit(0,&DAT_1000f6c8,0);
    EnableUnit(0,&DAT_1000f6a8,0);
    EnableUnit(0,&DAT_1000eab8,0);
    DisableUpgrade(0,&DAT_1000f310);
    DisableUpgrade(0,&DAT_1000f2c0);
    DisableUpgrade(0,&DAT_1000ef48);
    DisableUpgrade(0,&DAT_1000ef18);
    DisableUpgrade(0,&DAT_1000eb70);
    DisableUpgrade(0,&DAT_1000eb50);
    DisableUpgrade(0,&DAT_1000eac8);
    DisableUpgrade(0,&DAT_1000f320);
    DisableUpgrade(0,&DAT_1000f2c8);
    DisableUpgrade(0,&DAT_1000ef58);
    DisableUpgrade(0,&DAT_1000ef28);
    DisableUpgrade(0,&DAT_1000eba0);
    DisableUpgrade(0,&DAT_1000eb58);
    DisableUpgrade(0,&DAT_1000eb38);
    iVar6 = GetDiff(0);
    if (1 < iVar6) {
      DisableUpgrade(0,&DAT_1000f338);
      DisableUpgrade(0,&DAT_1000f330);
      iVar6 = GetDiff(0);
      if (iVar6 == 3) {
        DisableUpgrade(0,&DAT_1000eaa0);
        DisableUpgrade(0,&DAT_1000f308);
        DisableUpgrade(0,&DAT_1000ea98);
        DisableUpgrade(0,&DAT_1000f2f8);
      }
    }
    InitialUpgrade(s_GOrseraTrade_1000b474,s_KUZ01SP_1000b2ec);
    InitialUpgrade(s_GOrseraTrade_1000b474,s_AKA04SP_1000b2f4);
    uVar7 = GetDiff(0);
    StartAI(2,s_ENGLAND_0_1000b660,2,1,1,uVar7);
    uVar7 = GetDiff(0);
    StartAI(3,s_FRANCE_0_1000b654,2,1,1,uVar7);
    FUN_10001020(&DAT_1000e740,1,0,(char *)&DAT_1000ead0,&DAT_1000f2d8,1,1,s_V14_3_1000b64c,
                 &DAT_1000ef60,0,0,0,0,3);
    FUN_10001020(&DAT_1000e3c8,1,1,(char *)&DAT_1000eae4,&DAT_1000eb68,1,1,s_V14_3_V14_4_1000b640,
                 &DAT_1000ef60,&DAT_1000eba8,0,0,0,5);
    FUN_10001020(&DAT_1000f340,1,2,(char *)&DAT_1000eaf8,&DAT_1000f6f8,1,1,s_V14_4_1000b638,
                 &DAT_1000eba8,0,0,0,0,3);
    FUN_10001020(&DAT_1000ef60,0,3,(char *)&DAT_1000eb0c,&DAT_1000f7a0,1,1,s_V14_0_V14_1_1000b62c,
                 &DAT_1000e740,&DAT_1000e3c8,0,0,0,0);
    FUN_10001020(&DAT_1000eba8,0,4,(char *)&DAT_1000eb20,&DAT_1000f708,1,1,s_V14_1_V14_2_1000b620,
                 &DAT_1000e3c8,&DAT_1000f340,0,0,0,0);
    RunTimer(10,0x32);
    RunTimer(0xb,0x32);
    RunTimer(0xc,0x32);
    RunTimer(0xd,0x32);
    RunTimer(0xe,0x32);
    RunTimer(1,100);
    SetTrigg(3,0);
    SelectUnits(&DAT_1000ef30,0);
    SelOpenGates(0);
    ClearSelection(0);
    TakeStone(&DAT_1000ef00);
    iVar6 = GetDiff(0);
    if (0 < iVar6) {
      InitialUpgrade(s_Bashni_1000b604,s_Bashnia_3_TU_PAUSE_1000b60c);
      InitialUpgrade(s_Bashni_1000b604,s_Bashnia_3_TU_PAUSE3_1000b5f0);
      DAT_1000b040 = DAT_1000b040 + -100;
    }
    iVar6 = GetDiff(0);
    if (1 < iVar6) {
      InitialUpgrade(s_Bashni_1000b604,s_Bashnia_3_TU_PAUSE4_1000b5dc);
      InitialUpgrade(s_Bashni_1000b604,s_Bashnia_3_TU_PAUSE5_1000b5c8);
      DAT_1000b040 = DAT_1000b040 + -200;
    }
    iVar6 = GetDiff(0);
    if (iVar6 == 3) {
      InitialUpgrade(s_Bashni_1000b604,s_Bashnia_3_TU_PAUSE6_1000b5b4);
      InitialUpgrade(s_Bashni_1000b604,s_Bashnia_3_TU_PAUSE7_1000b5a0);
      DAT_1000b040 = DAT_1000b040 + -200;
    }
    ShowPage(s__PAGE23_1000b598);
    EnableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x43);
  }
  SaveSelectedUnits(0,&DAT_1000f710,0);
  FUN_100037a0(&DAT_1000e730,&DAT_1000f2f0,0,&DAT_1000f6e0);
  FUN_100037a0(&DAT_1000e728,&DAT_1000f2f0,0,&DAT_1000f6e0);
  FUN_100037a0(&DAT_1000e720,&DAT_1000f2f0,0,&DAT_1000f6e0);
  FUN_100037a0(&DAT_1000e738,&DAT_1000f2f0,0,&DAT_1000f6e0);
  FUN_100037a0(&DAT_1000e730,&DAT_1000f2f0,0,&DAT_1000f698);
  FUN_100037a0(&DAT_1000e728,&DAT_1000f2f0,0,&DAT_1000f698);
  FUN_100037a0(&DAT_1000e720,&DAT_1000f2f0,0,&DAT_1000f698);
  FUN_100037a0(&DAT_1000e738,&DAT_1000f2f0,0,&DAT_1000f698);
  SelectUnits(&DAT_1000f710,0);
  PTR_DAT_1000b044 = &DAT_1000e740;
  PTR_DAT_1000b048 = &DAT_1000e3c8;
  PTR_DAT_1000b04c = &DAT_1000f340;
  PTR_DAT_1000b050 = &DAT_1000ef60;
  PTR_DAT_1000b054 = &DAT_1000eba8;
  FUN_10001200(&DAT_1000e740,&DAT_1000f2d8,s_V14_3_1000b64c,&DAT_1000ef60,0,0,0,0);
  FUN_10001200(&DAT_1000e3c8,&DAT_1000eb68,s_V14_3_V14_4_1000b640,&DAT_1000ef60,&DAT_1000eba8,0,0,0)
  ;
  FUN_10001200(&DAT_1000f340,&DAT_1000f6f8,s_V14_4_1000b638,&DAT_1000eba8,0,0,0,0);
  FUN_10001200(&DAT_1000ef60,&DAT_1000f7a0,s_V14_0_V14_1_1000b62c,&DAT_1000e740,&DAT_1000e3c8,0,0,0)
  ;
  FUN_10001200(&DAT_1000eba8,&DAT_1000f708,s_V14_1_V14_2_1000b620,&DAT_1000e3c8,&DAT_1000f340,0,0,0)
  ;
  FUN_10001250(0x1000e740);
  FUN_10001250(0x1000e3c8);
  FUN_10001250(0x1000f340);
  iVar6 = GetTotalAmount0(&DAT_1000eb48);
  uVar14 = iVar6 == 1;
  iVar6 = GetTotalAmount0(&DAT_1000f2e8);
  uVar15 = iVar6 == 1;
  iVar6 = GetTotalAmount0(&DAT_1000f6f0);
  FUN_10002180(&DAT_1000e740,iVar6,uVar15,uVar14);
  iVar6 = GetTotalAmount0(&DAT_1000f328);
  uVar15 = iVar6 == 1;
  iVar6 = GetTotalAmount0(&DAT_1000f6e8);
  uVar14 = iVar6 < 3;
  iVar6 = GetTotalAmount0(&DAT_1000ef50);
  FUN_10002180(&DAT_1000e3c8,iVar6,uVar14,uVar15);
  iVar6 = GetTotalAmount0(&DAT_1000f318);
  uVar14 = iVar6 == 1;
  iVar6 = GetTotalAmount0(&DAT_1000f6a0);
  uVar15 = iVar6 == 1;
  iVar6 = GetTotalAmount0(&DAT_1000eac0);
  FUN_10002180(&DAT_1000f340,iVar6,uVar15,uVar14);
  iVar6 = GetTotalAmount0(&DAT_1000f720);
  FUN_10002180(&DAT_1000ef60,0,0,iVar6 == 1);
  iVar6 = GetTotalAmount0(&DAT_1000eb40);
  FUN_10002180(&DAT_1000eba8,0,0,iVar6 == 1);
  FUN_100015c0(&DAT_1000e740,0);
  FUN_100015c0(&DAT_1000e3c8,0);
  FUN_100015c0(&DAT_1000f340,0);
  cVar1 = TimerDone(10);
  if ((cVar1 != '\0') && (uVar7 = FUN_10001b90(&DAT_1000e740), (char)uVar7 != '\0')) {
    RunTimer(10,100);
  }
  cVar1 = TimerDone(0xb);
  if ((cVar1 != '\0') && (uVar7 = FUN_10001b90(&DAT_1000e3c8), (char)uVar7 != '\0')) {
    RunTimer(0xb,100);
  }
  cVar1 = TimerDone(0xc);
  if ((cVar1 != '\0') && (uVar7 = FUN_10001b90(&DAT_1000f340), (char)uVar7 != '\0')) {
    RunTimer(0xc,100);
  }
  cVar1 = TimerDone(0xd);
  if ((cVar1 != '\0') && (uVar7 = FUN_10001b90(&DAT_1000ef60), (char)uVar7 != '\0')) {
    RunTimer(0xd,100);
  }
  cVar1 = TimerDone(0xe);
  if ((cVar1 != '\0') && (uVar7 = FUN_10001b90(&DAT_1000eba8), (char)uVar7 != '\0')) {
    RunTimer(0xe,100);
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage(s__PAGE21_1000b590);
    LooseGame();
  }
  cVar1 = NationIsErased(3);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage(s__PAGE22_1000b588);
    SetTrigg(4,0);
    SetTrigg(5,0);
    ShowVictory();
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage(s__PAGE24_1000b580);
    SetTrigg(4,0);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage(s__PAGE25_1000b578);
    SetTrigg(5,0);
  }
  iVar6 = GetTotalAmount0(&DAT_1000f7b0);
  if (iVar6 != 0) {
    cVar1 = TimerDone(1);
    pcVar13 = GetUnitsAmount0_exref;
    if (cVar1 != '\0') {
      cVar1 = Trigg(3);
      if (((cVar1 == '\0') && (cVar1 = Trigg(2), cVar1 != '\0')) &&
         ((iVar6 = GetUnitsAmount0(&DAT_1000e3c0,0), iVar6 != 0 ||
          (iVar6 = GetUnitsAmount0(&DAT_1000e3b8,0), iVar6 != 0)))) {
        SetTrigg(2,0);
        cVar1 = AskQuestion(s__PAGE550_1000b56c);
        if (cVar1 != '\0') {
          iVar6 = GetResource(0,1);
          if (iVar6 < 0x18704) {
            ShowPage(s__PAGE552_1000b554);
          }
          else {
            ChangeFriends(5,0x2a);
            ShowPage(s__PAGE551_1000b560);
            iVar6 = GetResource(0,1);
            SetResource(0,1,iVar6 + -100000);
            SetTrigg(3,1);
            iVar6 = GetDiff(0);
            RunTimer(1,iVar6 * -8000 + 50000);
          }
        }
      }
      cVar1 = Trigg(2);
      pcVar13 = GetUnitsAmount0_exref;
      if (((cVar1 == '\0') && (iVar6 = GetUnitsAmount0(&DAT_1000e3c0,0), iVar6 == 0)) &&
         (iVar6 = GetUnitsAmount0(&DAT_1000e3b8,0), iVar6 == 0)) {
        SetTrigg(2,1);
      }
    }
    cVar1 = Trigg(3);
    if ((cVar1 != '\0') &&
       (((iVar6 = (*pcVar13)(&DAT_1000ef20,0), iVar6 != 0 ||
         (iVar6 = (*pcVar13)(&DAT_1000ef08,0), iVar6 != 0)) ||
        (iVar6 = (*pcVar13)(&DAT_1000ef10,0), iVar6 != 0)))) {
      ShowPage(s__PAGE553_1000b548);
      ChangeFriends(5,0x28);
      RunTimer(1,10);
      SetTrigg(3,0);
    }
  }
  cVar1 = Trigg(6);
  if (((cVar1 != '\0') && (iVar6 = GetTotalAmount0(&DAT_1000f7a8), iVar6 == 0)) &&
     (iVar6 = GetTotalAmount0(&DAT_1000f720), iVar6 != 0)) {
    SetTrigg(6,0);
    InitialUpgrade(s_GSpainTrade_1000b3e8,s_AKA25SP_1000b540);
    ShowPage(s__PAGE554_1000b534);
    iVar6 = GetDiff(0);
    if (iVar6 < 3) {
      InitialUpgrade(s_GSpainTrade_1000b3e8,s_MAINSP_1000b52c);
      InitialUpgrade(s_GSpainTrade_1000b3e8,s_MAINPO_1000b524);
      ShowPage(s__PAGE555_1000b518);
    }
  }
  return;
}



// Function: FUN_100037a0 @ 0x100037a0

void __cdecl
FUN_100037a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = GetUnitsAmount2(param_1,param_4,param_3);
  if (iVar1 != 0) {
    SelectTypeOfUnitsInZone(param_1,param_4,param_3,0);
    SelSendTo(param_3,param_2,0,0);
    ClearSelection(param_3);
  }
  return;
}



// Function: FUN_100037f0 @ 0x100037f0

void __cdecl FUN_100037f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  SelectUnits(param_1,0);
  switch(param_2) {
  case 0:
    if (param_3 == 3) {
      SelSendTo(1,&DAT_1000f718,0,0);
      SelSendTo(1,&DAT_1000f7a0,0,2);
      return;
    }
    break;
  case 1:
    if (param_3 == 3) {
      SelSendTo(1,&DAT_1000eb78,0x50,0);
      SelSendTo(1,&DAT_1000eb88,0x80,2);
      SelSendTo(1,&DAT_1000eb90,0x80,2);
      SelSendTo(1,&DAT_1000f7a0,0,2);
      return;
    }
    if (param_3 == 4) {
      SelSendTo(1,&DAT_1000eb60,0,0);
      SelSendTo(1,&DAT_1000f708,0,2);
      return;
    }
    break;
  case 2:
    if (param_3 == 4) {
      SelSendTo(1,&DAT_1000f6b0,0x80,0);
      SelSendTo(1,&DAT_1000f6b8,0x80,2);
      SelSendTo(1,&DAT_1000f6c0,0x80,2);
      SelSendTo(1,&DAT_1000f708,0,2);
      return;
    }
    break;
  case 3:
    if (param_3 == 0) {
      SelSendTo(1,&DAT_1000f718,0x80,0);
      SelSendTo(1,&DAT_1000f2d8,0,2);
      return;
    }
    if (param_3 == 1) {
      SelSendTo(1,&DAT_1000eb90,0,0);
      SelSendTo(1,&DAT_1000eb88,0xf0,2);
      SelSendTo(1,&DAT_1000eb78,0xc0,2);
      SelSendTo(1,&DAT_1000eb68,0,2);
      return;
    }
    break;
  case 4:
    if (param_3 == 1) {
      SelSendTo(1,&DAT_1000eb60,0xa0,0);
      SelSendTo(1,&DAT_1000eb68,0,2);
      return;
    }
    if (param_3 == 2) {
      SelSendTo(1,&DAT_1000f6c0,0,0);
      SelSendTo(1,&DAT_1000f6b8,0,2);
      SelSendTo(1,&DAT_1000f6b0,0xf0,2);
      SelSendTo(1,&DAT_1000f6f8,0,2);
    }
  }
  return;
}



// Function: FUN_10003a20 @ 0x10003a20

void __cdecl FUN_10003a20(undefined *param_1)

{
  FUN_100041bb(param_1);
  return;
}



// Function: _strncpy @ 0x10003a30

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
        goto joined_r0x10003a6e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10003aab;
        goto LAB_10003b19;
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
joined_r0x10003b15:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10003b19:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10003aab;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10003b15;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10003b15;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10003b15;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10003a6e:
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
LAB_10003aab:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10003b30 @ 0x10003b30

int __cdecl FUN_10003b30(byte *param_1,byte *param_2)

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



// Function: FUN_10003b70 @ 0x10003b70

uint * __cdecl FUN_10003b70(uint *param_1,char *param_2)

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



// Function: FUN_10003bf0 @ 0x10003bf0

undefined4 __cdecl FUN_10003bf0(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10004438((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_1000448a((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



// Function: __fclose_lk @ 0x10003c21

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10004615((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_100044dc(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_100041bb(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



// Function: FUN_10003c6d @ 0x10003c6d

uint __cdecl FUN_10003c6d(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_10004438((uint)param_4);
  uVar1 = FUN_10003c9c(param_1,param_2,param_3,param_4);
  FUN_1000448a((uint)param_4);
  return uVar1;
}



// Function: FUN_10003c9c @ 0x10003c9c

uint __cdecl FUN_10003c9c(char *param_1,uint param_2,uint param_3,int *param_4)

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
          uVar4 = FUN_1000471e(piVar1);
          if (uVar4 == 0xffffffff) goto LAB_10003d78;
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
          iVar3 = FUN_100047fa(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_10003d78:
            return (uint)((int)pcVar6 - (int)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10003d78;
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
        FUN_10004a40((undefined4 *)pcVar5,(undefined4 *)*piVar1,(uint)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}



// Function: operator_new @ 0x10003d84

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



// Function: FUN_10003d92 @ 0x10003d92

int __cdecl FUN_10003d92(char *param_1)

{
  int iVar1;
  
  FUN_10004438((uint)param_1);
  iVar1 = FUN_10003db4(param_1);
  FUN_1000448a((uint)param_1);
  return iVar1;
}



// Function: FUN_10003db4 @ 0x10003db4

int __cdecl FUN_10003db4(char *param_1)

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
  local_8 = FUN_10005144(uVar1,0,1);
  if ((int)local_8 < 0) {
LAB_10003e42:
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
        pDVar4 = FUN_10004f22();
        *pDVar4 = 0x16;
        goto LAB_10003e42;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_1000fd80)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
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
          if ((*(byte *)(iVar10 + 4 + (&DAT_1000fd80)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_10005144(uVar1,0,2);
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
              FUN_10005144(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + (&DAT_1000fd80)[(int)uVar1 >> 5]) & 4;
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



// Function: FUN_10003f15 @ 0x10003f15

int __cdecl FUN_10003f15(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10004438((uint)param_1);
  iVar1 = FUN_10003f41(param_1,param_2,param_3);
  FUN_1000448a((uint)param_1);
  return iVar1;
}



// Function: FUN_10003f41 @ 0x10003f41

int __cdecl FUN_10003f41(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10004f22();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_10003db4((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10004615(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_10005144(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}



// Function: FUN_10003fce @ 0x10003fce

undefined4 * __cdecl FUN_10003fce(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_1000538c();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_1000521c(param_1,param_2,param_3,puVar1);
  FUN_1000448a((uint)puVar1);
  return puVar2;
}



// Function: FUN_10003fff @ 0x10003fff

void __cdecl FUN_10003fff(LPCSTR param_1,char *param_2)

{
  FUN_10003fce(param_1,param_2,0x40);
  return;
}



// Function: FUN_10004012 @ 0x10004012

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004012(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000f7dc = GetVersion();
    iVar1 = FUN_10005cab(1);
    if (iVar1 != 0) {
      _DAT_1000f7e8 = DAT_1000f7dc >> 8 & 0xff;
      _DAT_1000f7e4 = DAT_1000f7dc & 0xff;
      DAT_1000f7dc = DAT_1000f7dc >> 0x10;
      _DAT_1000f7e0 = _DAT_1000f7e4 * 0x100 + _DAT_1000f7e8;
      iVar1 = FUN_10005572();
      if (iVar1 != 0) {
        DAT_10010ea4 = GetCommandLineA();
        DAT_1000f7c4 = FUN_10005a04();
        FUN_10004f34();
        FUN_100057b7();
        FUN_100056fe();
        FUN_10005454();
        DAT_1000f7c0 = DAT_1000f7c0 + 1;
        goto LAB_100040e5;
      }
      FUN_10005d08();
    }
LAB_10004072:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000f7c0 < 1) goto LAB_10004072;
      DAT_1000f7c0 = DAT_1000f7c0 + -1;
      if (DAT_1000f814 == 0) {
        FUN_10005492();
      }
      FUN_100050f0();
      FUN_100055c6();
      FUN_10005d08();
    }
    else if (param_2 == 3) {
      FUN_1000565e((undefined *)0x0);
    }
LAB_100040e5:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x100040eb

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000f7c0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10004133;
    if ((DAT_10010ea8 != (code *)0x0) &&
       (iVar2 = (*DAT_10010ea8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10004012(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10004133:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10004012(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10004012(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10010ea8 != (code *)0x0) {
      iVar2 = (*DAT_10010ea8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10004188

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000f7cc == 1) || ((DAT_1000f7cc == 0 && (DAT_1000f7d0 == 1)))) {
    FUN_10005db0();
  }
  FUN_10005de9(param_1);
  (*(code *)PTR___exit_1000b720)(0xff);
  return;
}



// Function: FUN_100041bb @ 0x100041bb

void __cdecl FUN_100041bb(undefined *param_1)

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
  puStack_c = &DAT_1000a1a0;
  puStack_10 = &LAB_10006fb4;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1000fd68 == 3) {
    ExceptionList = &local_14;
    FUN_10006e46(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10005f84((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10005faf(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10004225();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000fd68 != 2) goto LAB_10004287;
    ExceptionList = &local_14;
    FUN_10006e46(9);
    local_8 = 1;
    local_28 = (uint *)FUN_100069e9(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10006a40(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000427d();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10004287:
  HeapFree(DAT_1000fd64,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10004225 @ 0x10004225

void FUN_10004225(void)

{
  FUN_10006ea7(9);
  return;
}



// Function: FUN_1000427d @ 0x1000427d

void FUN_1000427d(void)

{
  FUN_10006ea7(9);
  return;
}



// Function: FUN_100042c0 @ 0x100042c0

uint * __cdecl FUN_100042c0(uint *param_1,char param_2)

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



// Function: FUN_10004438 @ 0x10004438

void __cdecl FUN_10004438(uint param_1)

{
  if ((0x1000b72f < param_1) && (param_1 < 0x1000b991)) {
    FUN_10006e46(((int)(param_1 + 0xefff48d0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10004467 @ 0x10004467

void __cdecl FUN_10004467(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10006e46(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_1000448a @ 0x1000448a

void __cdecl FUN_1000448a(uint param_1)

{
  if ((0x1000b72f < param_1) && (param_1 < 0x1000b991)) {
    FUN_10006ea7(((int)(param_1 + 0xefff48d0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_100044b9 @ 0x100044b9

void __cdecl FUN_100044b9(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10006ea7(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_100044dc @ 0x100044dc

undefined4 __cdecl FUN_100044dc(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000fe80) &&
     ((*(byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100074aa(param_1);
    uVar1 = FUN_10004539(param_1);
    FUN_10007509(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10004f22();
  *pDVar2 = 9;
  pDVar2 = FUN_10004f2b();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10004539 @ 0x10004539

undefined4 __cdecl FUN_10004539(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10007468(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10007468(2);
      iVar2 = FUN_10007468(1);
      if (iVar2 == iVar1) goto LAB_10004587;
    }
    hObject = (HANDLE)FUN_10007468(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10004589;
    }
  }
LAB_10004587:
  DVar4 = 0;
LAB_10004589:
  FUN_100073e9(param_1);
  *(undefined1 *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10004eaf(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: __freebuf @ 0x100045bc

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_100041bb(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Function: FUN_100045e7 @ 0x100045e7

int __cdecl FUN_100045e7(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10004615(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000752b(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_10004615 @ 0x10004615

undefined4 __cdecl FUN_10004615(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_100075be(param_1[4],(char *)param_1[2],uVar3);
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



// Function: FUN_1000467a @ 0x1000467a

int __cdecl FUN_1000467a(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10006e46(2);
  iVar4 = 0;
  if (0 < DAT_10010ea0) {
    do {
      iVar2 = *(int *)(DAT_1000fe84 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10004467(iVar4,iVar2);
        piVar1 = *(int **)(DAT_1000fe84 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_100045e7(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_100045e7(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_100044b9(iVar4,*(int *)(DAT_1000fe84 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10010ea0);
  }
  FUN_10006ea7(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_1000471e @ 0x1000471e

uint __cdecl FUN_1000471e(undefined4 *param_1)

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
        FUN_100077ae(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_100047fa(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_1000bb18;
          }
          else {
            puVar4 = (undefined *)((&DAT_1000fd80)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
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



// Function: FUN_100047fa @ 0x100047fa

int __cdecl FUN_100047fa(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000fe80) &&
     ((*(byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100074aa(param_1);
    iVar1 = FUN_1000485f(param_1,param_2,param_3);
    FUN_10007509(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10004f22();
  *pDVar2 = 9;
  pDVar2 = FUN_10004f2b();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_1000485f @ 0x1000485f

int __cdecl FUN_1000485f(uint param_1,char *param_2,char *param_3)

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
    piVar1 = &DAT_1000fd80 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_1000fd80)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
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
          pDVar7 = FUN_10004f22();
          *pDVar7 = 9;
          pDVar7 = FUN_10004f2b();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_10004eaf(DVar6);
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
                goto LAB_100049ea;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_10004a04:
                *pcVar8 = '\r';
LAB_10004a07:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_100049ea:
                  *pcVar8 = '\n';
                  goto LAB_10004a07;
                }
                FUN_100051a9(param_1,-1,1);
                if (local_5 != '\n') goto LAB_10004a04;
              }
              else {
                if (local_5 == '\n') goto LAB_100049ea;
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



// Function: FUN_10004a40 @ 0x10004a40

undefined4 * __cdecl FUN_10004a40(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10004bf7_caseD_2;
        case 3:
          goto switchD_10004bf7_caseD_3;
        }
        goto switchD_10004bf7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10004bf7_caseD_0;
      case 1:
        goto switchD_10004bf7_caseD_1;
      case 2:
        goto switchD_10004bf7_caseD_2;
      case 3:
        goto switchD_10004bf7_caseD_3;
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
              goto switchD_10004bf7_caseD_2;
            case 3:
              goto switchD_10004bf7_caseD_3;
            }
            goto switchD_10004bf7_caseD_1;
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
              goto switchD_10004bf7_caseD_2;
            case 3:
              goto switchD_10004bf7_caseD_3;
            }
            goto switchD_10004bf7_caseD_1;
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
              goto switchD_10004bf7_caseD_2;
            case 3:
              goto switchD_10004bf7_caseD_3;
            }
            goto switchD_10004bf7_caseD_1;
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
switchD_10004bf7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10004bf7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10004bf7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10004bf7_caseD_0:
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
        goto switchD_10004a75_caseD_2;
      case 3:
        goto switchD_10004a75_caseD_3;
      }
      goto switchD_10004a75_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004a75_caseD_0;
    case 1:
      goto switchD_10004a75_caseD_1;
    case 2:
      goto switchD_10004a75_caseD_2;
    case 3:
      goto switchD_10004a75_caseD_3;
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
            goto switchD_10004a75_caseD_2;
          case 3:
            goto switchD_10004a75_caseD_3;
          }
          goto switchD_10004a75_caseD_1;
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
            goto switchD_10004a75_caseD_2;
          case 3:
            goto switchD_10004a75_caseD_3;
          }
          goto switchD_10004a75_caseD_1;
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
            goto switchD_10004a75_caseD_2;
          case 3:
            goto switchD_10004a75_caseD_3;
          }
          goto switchD_10004a75_caseD_1;
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
switchD_10004a75_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004a75_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004a75_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004a75_caseD_0:
  return param_1;
}



// Function: _malloc @ 0x10004d75

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000f990);
  return pvVar1;
}



// Function: __nh_malloc @ 0x10004d87

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10004db3((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_100077f2(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10004db3 @ 0x10004db3

void __cdecl FUN_10004db3(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000a1b8;
  puStack_10 = &LAB_10006fb4;
  local_14 = ExceptionList;
  if (DAT_1000fd68 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1000fd60) {
      ExceptionList = &local_14;
      FUN_10006e46(9);
      local_8 = 0;
      piVar1 = FUN_100062d8(param_1);
      local_8 = 0xffffffff;
      FUN_10004e1a();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000fd68 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1000dbfc) {
        ExceptionList = &local_14;
        FUN_10006e46(9);
        local_8 = 1;
        piVar1 = FUN_10006a85(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10004e79();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10004e92;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10004e92:
  HeapAlloc(DAT_1000fd64,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10004e1a @ 0x10004e1a

void FUN_10004e1a(void)

{
  FUN_10006ea7(9);
  return;
}



// Function: FUN_10004e79 @ 0x10004e79

void FUN_10004e79(void)

{
  FUN_10006ea7(9);
  return;
}



// Function: FUN_10004eaf @ 0x10004eaf

void __cdecl FUN_10004eaf(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10004f2b();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1000b9b0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10004f22();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1000b9b4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x1000bb18);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10004f22();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10004f22();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10004f22();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_10004f22 @ 0x10004f22

DWORD * FUN_10004f22(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100055f7();
  return pDVar1 + 2;
}



// Function: FUN_10004f2b @ 0x10004f2b

DWORD * FUN_10004f2b(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100055f7();
  return pDVar1 + 3;
}



// Function: FUN_10004f34 @ 0x10004f34

void FUN_10004f34(void)

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
  DAT_1000fe80 = 0x20;
  DAT_1000fd80 = puVar2;
  for (; puVar2 < DAT_1000fd80 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000fe80 < (int)UVar8) {
      puVar2 = &DAT_1000fd84;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000fe80;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000fe80 = DAT_1000fe80 + 0x20;
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
      } while ((int)DAT_1000fe80 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000fd80)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000fd80 + iVar6 * 9;
    if (DAT_1000fd80[iVar6 * 9] == -1) {
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
          goto LAB_100050d9;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_100050d9:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000fe80);
      return;
    }
  } while( true );
}



// Function: FUN_100050f0 @ 0x100050f0

void FUN_100050f0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000fd80;
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
      FUN_100041bb((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000fe80);
  return;
}



// Function: FUN_10005144 @ 0x10005144

DWORD __cdecl FUN_10005144(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000fe80) &&
     ((*(byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100074aa(param_1);
    DVar1 = FUN_100051a9(param_1,param_2,param_3);
    FUN_10007509(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10004f22();
  *pDVar2 = 9;
  pDVar2 = FUN_10004f2b();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_100051a9 @ 0x100051a9

DWORD __cdecl FUN_100051a9(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_10007468(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10004f22();
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
      pbVar1 = (byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10004eaf(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_1000521c @ 0x1000521c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_1000521c(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

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
      uVar6 = DAT_1000f998 | 1;
      goto LAB_1000525d;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_1000f998 | 2;
LAB_1000525d:
  bVar2 = true;
LAB_10005260:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_1000780d(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_1000f7d4 = _DAT_1000f7d4 + 1;
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
        goto LAB_10005260;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_10005260;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_10005260;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_10005260;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_10005260;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_10005340;
      uVar5 = uVar5 | 0x8000;
      goto LAB_10005260;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_10005260;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_10005340;
        uVar5 = uVar5 | 0x4000;
        goto LAB_10005260;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_10005260;
      }
    }
  }
LAB_10005340:
  bVar2 = false;
  goto LAB_10005260;
}



// Function: FUN_1000538c @ 0x1000538c

undefined4 * FUN_1000538c(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_10006e46(2);
  iVar3 = 0;
  if (0 < DAT_10010ea0) {
    do {
      iVar1 = *(int *)(DAT_1000fe84 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_1000fe84) = pvVar2;
        if (*(int *)(iVar3 + DAT_1000fe84) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_1000fe84) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_1000fe84) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_1000fe84);
LAB_10005430:
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
        FUN_10004467(iVar3,iVar1);
        iVar1 = *(int *)(DAT_1000fe84 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_1000fe84 + iVar3 * 4);
          goto LAB_10005430;
        }
        FUN_100044b9(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_10010ea0);
  }
  FUN_10006ea7(2);
  return puVar4;
}



// Function: FUN_10005454 @ 0x10005454

void FUN_10005454(void)

{
  if (DAT_1000fd7c != (code *)0x0) {
    (*DAT_1000fd7c)();
  }
  FUN_10005558((undefined4 *)&DAT_1000b01c,(undefined4 *)&DAT_1000b028);
  FUN_10005558((undefined4 *)&DAT_1000b000,(undefined4 *)&DAT_1000b018);
  return;
}



// Function: __exit @ 0x10005481

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_100054a1(_Code,1,0);
  return;
}



// Function: FUN_10005492 @ 0x10005492

void FUN_10005492(void)

{
  FUN_100054a1(0,0,1);
  return;
}



// Function: FUN_100054a1 @ 0x100054a1

void __cdecl FUN_100054a1(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10005546();
  if (DAT_1000f818 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000f814 = 1;
  DAT_1000f810 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000fd78 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000fd74 - 4), DAT_1000fd78 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000fd78 <= puVar1);
    }
    FUN_10005558((undefined4 *)&DAT_1000b02c,(undefined4 *)&DAT_1000b034);
  }
  FUN_10005558((undefined4 *)&DAT_1000b038,(undefined4 *)&DAT_1000b03c);
  if (param_3 == 0) {
    DAT_1000f818 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000554f();
  return;
}



// Function: FUN_10005546 @ 0x10005546

void FUN_10005546(void)

{
  FUN_10006e46(0xd);
  return;
}



// Function: FUN_1000554f @ 0x1000554f

void FUN_1000554f(void)

{
  FUN_10006ea7(0xd);
  return;
}



// Function: FUN_10005558 @ 0x10005558

void __cdecl FUN_10005558(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_10005572 @ 0x10005572

undefined4 FUN_10005572(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10006db1();
  DAT_1000bb3c = TlsAlloc();
  if (DAT_1000bb3c != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000708c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000bb3c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100055e4((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_100055c6 @ 0x100055c6

void FUN_100055c6(void)

{
  FUN_10006dda();
  if (DAT_1000bb3c != 0xffffffff) {
    TlsFree(DAT_1000bb3c);
    DAT_1000bb3c = 0xffffffff;
  }
  return;
}



// Function: FUN_100055e4 @ 0x100055e4

void __cdecl FUN_100055e4(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000dcd0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_100055f7 @ 0x100055f7

DWORD * FUN_100055f7(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000bb3c);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000708c(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000bb3c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100055e4((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10005652;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10005652:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_1000565e @ 0x1000565e

void __cdecl FUN_1000565e(undefined *param_1)

{
  if (DAT_1000bb3c != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1000bb3c), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_100041bb(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_100041bb(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_100041bb(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_100041bb(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_100041bb(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_100041bb(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1000dcd0) {
        FUN_100041bb(*(undefined **)(param_1 + 0x50));
      }
      FUN_100041bb(param_1);
    }
    TlsSetValue(DAT_1000bb3c,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_100056fe @ 0x100056fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100056fe(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000fd70 == 0) {
    FUN_10008023();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000f7c4; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1000f7f8 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000f7c4;
  puVar6 = DAT_1000f7c4;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10007ae0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100041bb((undefined *)DAT_1000f7c4);
  DAT_1000f7c4 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1000fd6c = 1;
  return;
}



// Function: FUN_100057b7 @ 0x100057b7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100057b7(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000fd70 == 0) {
    FUN_10008023();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000f81c,0x104);
  _DAT_1000f808 = &DAT_1000f81c;
  pbVar2 = &DAT_1000f81c;
  if (*DAT_10010ea4 != 0) {
    pbVar2 = DAT_10010ea4;
  }
  FUN_10005850(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10005850(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000f7f0 = puVar1;
  _DAT_1000f7ec = local_8 + -1;
  return;
}



// Function: FUN_10005850 @ 0x10005850

void __cdecl FUN_10005850(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000fc40 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000fc40 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_100058fb;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_100058fb:
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
          if ((*(byte *)((int)&DAT_1000fc40 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000fc40 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10005a04 @ 0x10005a04

LPSTR FUN_10005a04(void)

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
  if (DAT_1000f920 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000f920 = 1;
LAB_10005a5b:
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
        FUN_100041bb(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000f920 = 2;
  }
  else {
    if (DAT_1000f920 == 1) goto LAB_10005a5b;
    if (DAT_1000f920 != 2) {
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
    FUN_10004a40((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_10005b36 @ 0x10005b36

void __cdecl FUN_10005b36(undefined4 *param_1)

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



// Function: FUN_10005b63 @ 0x10005b63

int FUN_10005b63(void)

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
  
  FUN_100082a0();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x43;
    aCStackY_18[1] = '[';
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
      aCStackY_18[0] = -5;
      aCStackY_18[1] = '[';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",(char *)&local_1230,0x16);
      if (iVar5 == 0) {
        puVar6 = &local_1230;
      }
      else {
        aCStackY_18[0] = '\x1d';
        aCStackY_18[1] = '\\';
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
        puVar6 = FUN_10003b70(&local_1230,local_1a0);
      }
      if ((puVar6 != (uint *)0x0) && (puVar6 = FUN_100042c0(puVar6,','), puVar6 != (uint *)0x0)) {
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
        aCStackY_18[0] = -0x7d;
        aCStackY_18[1] = '\\';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_1000803f(this,pbVar7,(int *)0x0,(void *)0xa);
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
    FUN_10005b36((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_10005cab @ 0x10005cab

undefined4 __cdecl FUN_10005cab(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1000fd64 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000fd64 != (HANDLE)0x0) {
    DAT_1000fd68 = FUN_10005b63();
    if (DAT_1000fd68 == 3) {
      ppuVar1 = (undefined **)FUN_10005f3c(0x3f8);
    }
    else {
      if (DAT_1000fd68 != 2) {
        return 1;
      }
      ppuVar1 = FUN_1000678d();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1000fd64);
  }
  return 0;
}



// Function: FUN_10005d08 @ 0x10005d08

void FUN_10005d08(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1000fd68 == 3) {
    iVar1 = 0;
    if (0 < DAT_1000fd58) {
      puVar2 = (undefined4 *)((int)DAT_1000fd5c + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1000fd64,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1000fd58);
    }
    HeapFree(DAT_1000fd64,0,DAT_1000fd5c);
  }
  else if (DAT_1000fd68 == 2) {
    ppuVar3 = &PTR_LOOP_1000bbd8;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000bbd8);
  }
  HeapDestroy(DAT_1000fd64);
  return;
}



// Function: FUN_10005db0 @ 0x10005db0

void FUN_10005db0(void)

{
  if ((DAT_1000f7cc == 1) || ((DAT_1000f7cc == 0 && (DAT_1000f7d0 == 1)))) {
    FUN_10005de9(0xfc);
    if (DAT_1000f924 != (code *)0x0) {
      (*DAT_1000f924)();
    }
    FUN_10005de9(0xff);
  }
  return;
}



// Function: FUN_10005de9 @ 0x10005de9

void __cdecl FUN_10005de9(DWORD param_1)

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
  pDVar2 = &DAT_1000bb48;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000bbd8);
  if (param_1 == (&DAT_1000bb48)[iVar5 * 2]) {
    if ((DAT_1000f7cc == 1) || ((DAT_1000f7cc == 0 && (DAT_1000f7d0 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000bb4c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10007ae0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10007ae0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10007af0(local_a4,_Dest);
      FUN_10007af0(local_a4,(uint *)&DAT_1000a4b4);
      FUN_10007af0(local_a4,*(uint **)(iVar5 * 8 + 0x1000bb4c));
      auStackY_1e3._3_4_ = 0x10005f0d;
      FUN_100082cf(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_10005f3c @ 0x10005f3c

undefined4 __cdecl FUN_10005f3c(undefined4 param_1)

{
  DAT_1000fd5c = HeapAlloc(DAT_1000fd64,0,0x140);
  if (DAT_1000fd5c == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000fd54 = 0;
  DAT_1000fd58 = 0;
  DAT_1000fd50 = DAT_1000fd5c;
  DAT_1000fd60 = param_1;
  DAT_1000fd48 = 0x10;
  return 1;
}



// Function: FUN_10005f84 @ 0x10005f84

uint __cdecl FUN_10005f84(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000fd5c;
  while( true ) {
    if (DAT_1000fd5c + DAT_1000fd58 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_10005faf @ 0x10005faf

void __cdecl FUN_10005faf(uint *param_1,int param_2)

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
      if (DAT_1000fd54 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1000fd4c * 0x8000 + DAT_1000fd54[3]),0x8000,0x4000);
        DAT_1000fd54[2] = DAT_1000fd54[2] | 0x80000000U >> ((byte)DAT_1000fd4c & 0x1f);
        *(undefined4 *)(DAT_1000fd54[4] + 0xc4 + DAT_1000fd4c * 4) = 0;
        *(char *)(DAT_1000fd54[4] + 0x43) = *(char *)(DAT_1000fd54[4] + 0x43) + -1;
        if (*(char *)(DAT_1000fd54[4] + 0x43) == '\0') {
          DAT_1000fd54[1] = DAT_1000fd54[1] & 0xfffffffe;
        }
        if (DAT_1000fd54[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1000fd54[3],0,0x8000);
          HeapFree(DAT_1000fd64,0,(LPVOID)DAT_1000fd54[4]);
          FUN_10008360(DAT_1000fd54,DAT_1000fd54 + 5,
                       (DAT_1000fd58 * 0x14 - (int)DAT_1000fd54) + -0x14 + DAT_1000fd5c);
          DAT_1000fd58 = DAT_1000fd58 + -1;
          if (DAT_1000fd54 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1000fd50 = DAT_1000fd5c;
        }
      }
      DAT_1000fd54 = param_1;
      DAT_1000fd4c = uVar14;
    }
  }
  return;
}



// Function: FUN_100062d8 @ 0x100062d8

int * __cdecl FUN_100062d8(uint *param_1)

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
  
  puVar8 = DAT_1000fd5c + DAT_1000fd58 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000fd50;
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
  puVar11 = DAT_1000fd5c;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000fd50 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000fd50) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000fd5c;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000fd50 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000fd50) && (param_1 = FUN_100065e1(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10006692((int)param_1);
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
  DAT_1000fd50 = param_1;
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
    if (iVar9 == 0) goto LAB_1000659e;
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
LAB_1000659e:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000fd54)) && (local_8 == DAT_1000fd4c)) {
    DAT_1000fd54 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_100065e1 @ 0x100065e1

undefined4 * FUN_100065e1(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000fd58 == DAT_1000fd48) {
    pvVar2 = HeapReAlloc(DAT_1000fd64,0,DAT_1000fd5c,(DAT_1000fd48 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000fd48 = DAT_1000fd48 + 0x10;
    DAT_1000fd5c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000fd5c + DAT_1000fd58 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000fd64,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000fd58 = DAT_1000fd58 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000fd64,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10006692 @ 0x10006692

int __cdecl FUN_10006692(int param_1)

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



// Function: FUN_1000678d @ 0x1000678d

undefined ** FUN_1000678d(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000bbe8 == -1) {
    lpMem = &PTR_LOOP_1000bbd8;
  }
  else {
    lpMem = HeapAlloc(DAT_1000fd64,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000bbd8) {
        if (PTR_LOOP_1000bbd8 == (undefined *)0x0) {
          PTR_LOOP_1000bbd8 = (undefined *)&PTR_LOOP_1000bbd8;
        }
        if (PTR_LOOP_1000bbdc == (undefined *)0x0) {
          PTR_LOOP_1000bbdc = (undefined *)&PTR_LOOP_1000bbd8;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000bbd8;
        lpMem[1] = PTR_LOOP_1000bbdc;
        PTR_LOOP_1000bbdc = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1000bbd8) {
    HeapFree(DAT_1000fd64,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_100068d1 @ 0x100068d1

void __cdecl FUN_100068d1(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1000dbf8 == param_1) {
    PTR_LOOP_1000dbf8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000bbd8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1000fd64,0,param_1);
    return;
  }
  DAT_1000bbe8 = 0xffffffff;
  return;
}



// Function: FUN_10006927 @ 0x10006927

void __cdecl FUN_10006927(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000bbdc;
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
            DAT_1000f928 = DAT_1000f928 + -1;
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
          FUN_100068d1(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000bbdc) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_100069e9 @ 0x100069e9

int __cdecl FUN_100069e9(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000bbd8;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000bbd8) {
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



// Function: FUN_10006a40 @ 0x10006a40

void __cdecl FUN_10006a40(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1000f928 = DAT_1000f928 + 1, DAT_1000f928 == 0x20)) {
    FUN_10006927(0x10);
  }
  return;
}



// Function: FUN_10006a85 @ 0x10006a85

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10006a85(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_1000dbf8;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10006c8d(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10006b50;
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
          piVar5 = (int *)FUN_10006c8d(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10006b50:
            PTR_LOOP_1000dbf8 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_1000dbf8) {
      ppuVar9 = &PTR_LOOP_1000bbd8;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000bbd8) {
          ppuVar9 = FUN_1000678d();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1000dbf8 = (undefined *)ppuVar9;
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
      PTR_LOOP_1000dbf8 = (undefined *)ppuVar9;
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



// Function: FUN_10006c8d @ 0x10006c8d

int __cdecl FUN_10006c8d(int *param_1,uint param_2,uint param_3)

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
          goto LAB_10006da0;
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
LAB_10006da0:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_10006db1 @ 0x10006db1

void FUN_10006db1(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dc44);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dc34);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dc24);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dc04);
  return;
}



// Function: FUN_10006dda @ 0x10006dda

void FUN_10006dda(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000dc00;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000dc44)) && (ppuVar1 != &PTR_DAT_1000dc34)) &&
       ((ppuVar1 != &PTR_DAT_1000dc24 && (ppuVar1 != &PTR_DAT_1000dc04)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100041bb(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000dcc0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dc24);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dc34);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dc44);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dc04);
  return;
}



// Function: FUN_10006e46 @ 0x10006e46

void __cdecl FUN_10006e46(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000dc00 + param_1;
  if ((&DAT_1000dc00)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10006e46(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100041bb((undefined *)lpCriticalSection);
    }
    FUN_10006ea7(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_10006ea7 @ 0x10006ea7

void __cdecl FUN_10006ea7(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000dc00)[param_1]);
  return;
}



// Function: __global_unwind2 @ 0x10006ebc

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10006ed4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10006efe

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
  puStack_18 = &LAB_10006edc;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10006f92();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: FUN_10006f92 @ 0x10006f92

void FUN_10006f92(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000dcc8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000dcc4 = in_EAX;
  DAT_1000dccc = unaff_EBP;
  return;
}



// Function: FUN_10007071 @ 0x10007071

void FUN_10007071(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_1000708c @ 0x1000708c

int * __cdecl FUN_1000708c(int param_1,int param_2)

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
  puStack_c = &DAT_1000a4f0;
  puStack_10 = &LAB_10006fb4;
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
      if (DAT_1000fd68 == 3) {
        if (puVar2 <= DAT_1000fd60) {
          FUN_10006e46(9);
          local_8 = 0;
          local_24 = FUN_100062d8(puVar2);
          local_8 = 0xffffffff;
          FUN_10007125();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10007179;
LAB_10007168:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10007174:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1000fd68 != 2) || (DAT_1000dbfc < puVar3)) goto LAB_10007174;
        FUN_10006e46(9);
        local_8 = 1;
        local_24 = FUN_10006a85((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_100071ae();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10007168;
      }
LAB_10007179:
      local_24 = HeapAlloc(DAT_1000fd64,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1000f990 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_100077f2(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_10007125 @ 0x10007125

void FUN_10007125(void)

{
  FUN_10006ea7(9);
  return;
}



// Function: FUN_100071ae @ 0x100071ae

void FUN_100071ae(void)

{
  FUN_10006ea7(9);
  return;
}



// Function: FUN_1000724a @ 0x1000724a

uint FUN_1000724a(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  uVar4 = 0xffffffff;
  FUN_10006e46(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_1000fd80;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_10006e46(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_10006ea7(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          uVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (uVar4 != 0xffffffff) goto LAB_1000735c;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x1000fe7f < (int)piVar3) goto LAB_1000735c;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_1000fe80 = DAT_1000fe80 + 0x20;
    (&DAT_1000fd80)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_1000fd80)[local_8];
    }
    uVar4 = local_8 << 5;
    FUN_100074aa(uVar4);
  }
LAB_1000735c:
  FUN_10006ea7(0x12);
  return uVar4;
}



// Function: FUN_1000736d @ 0x1000736d

undefined4 __cdecl FUN_1000736d(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1000fe80) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_1000fd80)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_1000f7d0 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100073c6;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_100073c6:
      *(HANDLE *)((&DAT_1000fd80)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_10004f22();
  *pDVar1 = 9;
  pDVar1 = FUN_10004f2b();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_100073e9 @ 0x100073e9

undefined4 __cdecl FUN_100073e9(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1000fe80) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1000fd80)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1000f7d0 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10007445;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10007445:
      *(undefined4 *)((&DAT_1000fd80)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10004f22();
  *pDVar2 = 9;
  pDVar2 = FUN_10004f2b();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10007468 @ 0x10007468

undefined4 __cdecl FUN_10007468(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1000fe80) &&
     ((*(byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1000fd80)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10004f22();
  *pDVar1 = 9;
  pDVar1 = FUN_10004f2b();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_100074aa @ 0x100074aa

void __cdecl FUN_100074aa(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1000fd80)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10006e46(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10006ea7(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1000fd80)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_10007509 @ 0x10007509

void __cdecl FUN_10007509(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1000fd80)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_1000752b @ 0x1000752b

undefined4 __cdecl FUN_1000752b(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1000fe80 <= param_1) {
LAB_100075ac:
    pDVar3 = FUN_10004f22();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_100075ac;
  FUN_100074aa(param_1);
  if ((*(byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10007468(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_100075a1;
    pDVar3 = FUN_10004f2b();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10004f22();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_100075a1:
  FUN_10007509(param_1);
  return uVar5;
}



// Function: FUN_100075be @ 0x100075be

int __cdecl FUN_100075be(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000fe80) &&
     ((*(byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100074aa(param_1);
    iVar1 = FUN_10007623(param_1,param_2,param_3);
    FUN_10007509(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10004f22();
  *pDVar2 = 9;
  pDVar2 = FUN_10004f2b();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10007623 @ 0x10007623

int __cdecl FUN_10007623(DWORD param_1,char *param_2,uint param_3)

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
LAB_1000763c:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_1000fd80 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_100051a9(param_1,0,2);
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
LAB_1000770b:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_1000777d;
      if (param_1 == 5) {
        pDVar7 = FUN_10004f22();
        *pDVar7 = 9;
        pDVar7 = FUN_10004f2b();
        *pDVar7 = 5;
      }
      else {
        FUN_10004eaf(param_1);
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
            goto LAB_1000770b;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1000770b;
        } while( true );
      }
LAB_1000777d:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_1000763c;
      pDVar7 = FUN_10004f22();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10004f2b();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_100077ae @ 0x100077ae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100077ae(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_1000f7d4 = _DAT_1000f7d4 + 1;
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



// Function: FUN_100077f2 @ 0x100077f2

undefined4 __cdecl FUN_100077f2(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000f994 != (code *)0x0) {
    iVar1 = (*DAT_1000f994)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_1000780d @ 0x1000780d

uint __cdecl FUN_1000780d(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

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
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_1000f9ac != 0x8000)))) {
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
    if (uVar2 != 2) goto LAB_10007911;
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
    if (param_3 != 0x40) goto LAB_10007911;
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
      if (uVar2 == 0x200) goto LAB_1000792b;
      if (uVar2 != 0x300) goto LAB_10007911;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_1000792b:
        local_c = 5;
        goto LAB_1000793b;
      }
      if (uVar2 != 0x700) {
LAB_10007911:
        pDVar4 = FUN_10004f22();
        *pDVar4 = 0x16;
        pDVar4 = FUN_10004f2b();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_1000793b:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_1000f7d8 & param_4 & 0x80) == 0)) {
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
  uVar3 = FUN_1000724a();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_10004f22();
    *pDVar4 = 0x18;
    pDVar4 = FUN_10004f2b();
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
      FUN_1000736d(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_1000fd80)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_100051a9(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_10004f2b();
          if (*pDVar4 == 0x83) goto LAB_10007ab5;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_1000485f(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) ||
              (iVar6 = FUN_100086f8(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_100051a9(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_10007ab5;
        }
        FUN_100044dc(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_10007ab5:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_1000fd80)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_10007ace;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_10004eaf(DVar5);
  uVar2 = 0xffffffff;
LAB_10007ace:
  FUN_10007509(uVar3);
  return uVar2;
}



// Function: FUN_10007ae0 @ 0x10007ae0

uint * __cdecl FUN_10007ae0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10007bc8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10007bc8:
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



// Function: FUN_10007af0 @ 0x10007af0

uint * __cdecl FUN_10007af0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10007b0c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10007b3f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10007b5b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10007b0c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10007b5b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10007b5b;
    }
  }
LAB_10007b3f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10007b5b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10007bc8:
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
    if (bVar1 == 0) goto LAB_10007bc8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: _strlen @ 0x10007bd0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10007bf0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10007c23:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10007bf0:
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
  goto LAB_10007c23;
}



// Function: FUN_10007c4b @ 0x10007c4b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10007c4b(int param_1)

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
  
  FUN_10006e46(0x19);
  CodePage = FUN_10007df8(param_1);
  if (CodePage != DAT_1000fb28) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000dd68;
LAB_10007c88:
      if (*pUVar5 != CodePage) goto code_r0x10007c8c;
      local_8 = 0;
      puVar15 = &DAT_1000fc40;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000dd78);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000dd60)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000fc40 + uVar8 + 1);
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
      _DAT_1000fb3c = 1;
      DAT_1000fb28 = CodePage;
      DAT_1000fd44 = FUN_10007e42(CodePage);
      DAT_1000fb30 = *(undefined4 *)(iVar12 + 0x1000dd6c);
      DAT_1000fb34 = *(undefined4 *)(iVar12 + 0x1000dd70);
      DAT_1000fb38 = *(undefined4 *)(iVar12 + 0x1000dd74);
      goto LAB_10007ddc;
    }
    goto LAB_10007dd7;
  }
  goto LAB_10007c72;
code_r0x10007c8c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1000de57 < (int)pUVar5) goto code_r0x10007c97;
  goto LAB_10007c88;
code_r0x10007c97:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000fd44 = 0;
    puVar15 = &DAT_1000fc40;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000fb3c = 0;
      DAT_1000fb28 = CodePage;
    }
    else {
      DAT_1000fb28 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000fc40 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000fc40 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000fd44 = FUN_10007e42(CodePage);
      _DAT_1000fb3c = 1;
    }
    DAT_1000fb30 = 0;
    DAT_1000fb34 = 0;
    DAT_1000fb38 = 0;
  }
  else {
    if (DAT_1000f99c == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10007de9;
    }
LAB_10007dd7:
    FUN_10007e75();
  }
LAB_10007ddc:
  FUN_10007e9e();
LAB_10007c72:
  uVar14 = 0;
LAB_10007de9:
  FUN_10006ea7(0x19);
  return uVar14;
}



// Function: FUN_10007df8 @ 0x10007df8

int __cdecl FUN_10007df8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000f99c = 1;
                    /* WARNING: Could not recover jumptable at 0x10007e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000f99c = 1;
                    /* WARNING: Could not recover jumptable at 0x10007e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000f9c8;
  }
  DAT_1000f99c = (uint)bVar2;
  return param_1;
}



// Function: FUN_10007e42 @ 0x10007e42

undefined4 __cdecl FUN_10007e42(int param_1)

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



// Function: FUN_10007e75 @ 0x10007e75

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007e75(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000fc40;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000fb28 = 0;
  _DAT_1000fb3c = 0;
  DAT_1000fd44 = 0;
  DAT_1000fb30 = 0;
  DAT_1000fb34 = 0;
  DAT_1000fb38 = 0;
  return;
}



// Function: FUN_10007e9e @ 0x10007e9e

void FUN_10007e9e(void)

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
  
  BVar2 = GetCPInfo(DAT_1000fb28,&local_18);
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
    FUN_10008a6c(1,local_118,0x100,local_518,DAT_1000fb28,DAT_1000fd44,0);
    FUN_1000881d(DAT_1000fd44,0x100,local_118,0x100,local_218,0x100,DAT_1000fb28,0);
    FUN_1000881d(DAT_1000fd44,0x200,local_118,0x100,local_318,0x100,DAT_1000fb28,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000fc40 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10007faa;
        }
        (&DAT_1000fb40)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000fc40 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10007faa:
        (&DAT_1000fb40)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000fc40 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10007ff4;
        }
        (&DAT_1000fb40)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000fc40 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10007ff4:
        (&DAT_1000fb40)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10008023 @ 0x10008023

void FUN_10008023(void)

{
  if (DAT_1000fd70 == 0) {
    FUN_10007c4b(-3);
    DAT_1000fd70 = 1;
  }
  return;
}



// Function: FUN_1000803f @ 0x1000803f

void __thiscall FUN_1000803f(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10008056(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_10008056 @ 0x10008056

void * __thiscall FUN_10008056(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1000e06c < 2) {
      uVar3 = (byte)PTR_DAT_1000de60[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000de60;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10008cf0(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_100080b1:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_100080b1;
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
      goto LAB_1000811b;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_1000811b;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1000811b:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000e06c < 2) {
      uVar5 = (byte)PTR_DAT_1000de60[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10008cf0(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000e06c < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000de60 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10008cf0(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_100081c7:
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
          pDVar6 = FUN_10004f22();
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
      uVar3 = FUN_10008bb5((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_100081c7;
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



// Function: _strncmp @ 0x10008260

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



// Function: FUN_100082a0 @ 0x100082a0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100082a0(void)

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



// Function: FUN_100082cf @ 0x100082cf

int __cdecl FUN_100082cf(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000f9a0 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000f9a0 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000f9a0 != (FARPROC)0x0) {
        DAT_1000f9a4 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000f9a8 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000831e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000831e:
    if (DAT_1000f9a4 != (FARPROC)0x0) {
      iVar1 = (*DAT_1000f9a4)();
      if ((iVar1 != 0) && (DAT_1000f9a8 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000f9a8)(iVar1);
      }
    }
    iVar1 = (*DAT_1000f9a0)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: FUN_10008360 @ 0x10008360

undefined4 * __cdecl FUN_10008360(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10008517_caseD_2;
        case 3:
          goto switchD_10008517_caseD_3;
        }
        goto switchD_10008517_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10008517_caseD_0;
      case 1:
        goto switchD_10008517_caseD_1;
      case 2:
        goto switchD_10008517_caseD_2;
      case 3:
        goto switchD_10008517_caseD_3;
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
              goto switchD_10008517_caseD_2;
            case 3:
              goto switchD_10008517_caseD_3;
            }
            goto switchD_10008517_caseD_1;
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
              goto switchD_10008517_caseD_2;
            case 3:
              goto switchD_10008517_caseD_3;
            }
            goto switchD_10008517_caseD_1;
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
              goto switchD_10008517_caseD_2;
            case 3:
              goto switchD_10008517_caseD_3;
            }
            goto switchD_10008517_caseD_1;
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
switchD_10008517_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10008517_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10008517_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10008517_caseD_0:
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
        goto switchD_10008395_caseD_2;
      case 3:
        goto switchD_10008395_caseD_3;
      }
      goto switchD_10008395_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10008395_caseD_0;
    case 1:
      goto switchD_10008395_caseD_1;
    case 2:
      goto switchD_10008395_caseD_2;
    case 3:
      goto switchD_10008395_caseD_3;
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
            goto switchD_10008395_caseD_2;
          case 3:
            goto switchD_10008395_caseD_3;
          }
          goto switchD_10008395_caseD_1;
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
            goto switchD_10008395_caseD_2;
          case 3:
            goto switchD_10008395_caseD_3;
          }
          goto switchD_10008395_caseD_1;
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
            goto switchD_10008395_caseD_2;
          case 3:
            goto switchD_10008395_caseD_3;
          }
          goto switchD_10008395_caseD_1;
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
switchD_10008395_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10008395_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10008395_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10008395_caseD_0:
  return param_1;
}



// Function: _memset @ 0x100086a0

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



// Function: FUN_100086f8 @ 0x100086f8

int __cdecl FUN_100086f8(uint param_1,int param_2)

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
  
  FUN_100082a0();
  iVar8 = 0;
  DVar1 = FUN_100051a9(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_100051a9(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_100051a9(param_1,param_2,0);
        hFile = (HANDLE)FUN_10007468(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_10004f22();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_10004f2b();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x10008765;
      iVar3 = FUN_10008d65(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_10007623(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_10004f2b();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_10004f22();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_10008d65(param_1,iVar3);
    }
    FUN_100051a9(param_1,DVar1,0);
  }
  return iVar8;
}



// Function: FUN_1000881d @ 0x1000881d

int __cdecl
FUN_1000881d(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000a550;
  puStack_10 = &LAB_10006fb4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000f9d0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000f9d0 = 2;
    }
    else {
      DAT_1000f9d0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10008a41(param_3,param_4);
  }
  if (DAT_1000f9d0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000f9d0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000f9c8;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_100082a0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_100082a0();
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



// Function: FUN_10008a41 @ 0x10008a41

int __cdecl FUN_10008a41(char *param_1,int param_2)

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



// Function: FUN_10008a6c @ 0x10008a6c

BOOL __cdecl
FUN_10008a6c(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000a568;
  puStack_10 = &LAB_10006fb4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000f9d4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000f9d4 == 0) {
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
  DAT_1000f9d4 = iVar3;
  if (DAT_1000f9d4 != 2) {
    if (DAT_1000f9d4 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000f9c8;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_100082a0();
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
    param_6 = DAT_1000f9b8;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_10008bb5 @ 0x10008bb5

uint __cdecl FUN_10008bb5(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1000f9b8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1000fb24);
    bVar1 = DAT_1000fb20 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1000fb24);
      this = (void *)0x13;
      FUN_10006e46(0x13);
    }
    param_1 = FUN_10008c24(this,param_1);
    if (bVar1) {
      FUN_10006ea7(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1000fb24);
    }
  }
  return param_1;
}



// Function: FUN_10008c24 @ 0x10008c24

uint __thiscall FUN_10008c24(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000f9b8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000e06c < 2) {
        uVar2 = (byte)PTR_DAT_1000de60[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10008cf0(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000de60[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000881d(DAT_1000f9b8,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_10008cf0 @ 0x10008cf0

uint __thiscall FUN_10008cf0(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000de60 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000de60[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10008a6c(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_10008d65 @ 0x10008d65

int __cdecl FUN_10008d65(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_10004f22();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_1000fd80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}



// Function: FUN_10008e60 @ 0x10008e60

byte * __cdecl FUN_10008e60(byte *param_1,byte *param_2)

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



// Function: FUN_10008ea0 @ 0x10008ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10008ea0(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1000fb24;
  if (DAT_1000f9b8 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_10008eee;
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
LAB_10008eee:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1000fb24 = _DAT_1000fb24 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1000fb20;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1000fb24 = iVar2;
      FUN_10006e46(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_10008f4f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10009165(this,uVar8);
      uVar7 = FUN_10009165(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_10008f4f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1000fb24 = _DAT_1000fb24 + -1;
      UNLOCK();
    }
    else {
      FUN_10006ea7(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_10008f70 @ 0x10008f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10008f70(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1000fb24;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1000f9b8 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_10008fcf;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_10008fcf:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1000fb24 = _DAT_1000fb24 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1000fb20;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1000fb24 = iVar2;
        FUN_10006e46(0x13);
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
        uVar7 = FUN_10009165(param_3,uVar7);
        uVar5 = FUN_10009165(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10009045;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10009045:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1000fb24 = _DAT_1000fb24 + -1;
        UNLOCK();
      }
      else {
        FUN_10006ea7(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_10009165 @ 0x10009165

uint __thiscall FUN_10009165(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000f9b8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000e06c < 2) {
        uVar2 = (byte)PTR_DAT_1000de60[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10008cf0(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000de60[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000881d(DAT_1000f9b8,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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




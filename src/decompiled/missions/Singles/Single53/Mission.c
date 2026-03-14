// Decompiled from: Mission.dll

// Function: FUN_10001000 @ 0x10001000

char __cdecl FUN_10001000(uint param_1,uint param_2)

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
    iVar1 = FUN_100046f7(iVar1 * 0x100,iVar3);
    cVar2 = (&DAT_100148f8)[iVar1 * 2];
  }
  else {
    iVar1 = FUN_100046f7(iVar3 * 0x100,iVar1);
    cVar2 = '@' - (&DAT_100148f8)[iVar1 * 2];
  }
  if ((int)param_1 < 0) {
    cVar2 = -0x80 - cVar2;
  }
  if ((int)param_2 < 0) {
    cVar2 = -cVar2;
  }
  return cVar2;
}



// Function: FUN_100010c0 @ 0x100010c0

undefined4 __fastcall FUN_100010c0(undefined4 param_1)

{
  RegisterFormation(param_1,s__ALONE_10011084);
  return param_1;
}



// Function: FUN_100010e0 @ 0x100010e0

void __cdecl FUN_100010e0(int param_1)

{
  if (*(int *)(&DAT_10015094 + param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(&DAT_10015090 + param_1 * 8);
  }
  SaveSelectedUnits(param_1,&DAT_10015090 + param_1 * 8,0);
  ClearSelection(param_1);
  return;
}



// Function: FUN_10001120 @ 0x10001120

void __cdecl FUN_10001120(int param_1)

{
  ClearSelection(param_1);
  SelectUnits(&DAT_10015090 + param_1 * 8,0);
  return;
}



// Function: FUN_10001160 @ 0x10001160

void FUN_10001160(void)

{
  FUN_1000cc81();
  return;
}



// Function: FUN_10001170 @ 0x10001170

void FUN_10001170(void)

{
  FUN_1000479a(&LAB_10001180);
  return;
}



// Function: FUN_100011a0 @ 0x100011a0

int __fastcall FUN_100011a0(int param_1)

{
  RegisterDynGroup(param_1 + 4);
  RegisterDynGroup(param_1 + 0x34);
  RegisterDynGroup(param_1 + 0x3c);
  RegisterDynGroup(param_1 + 0x44);
  RegisterDynGroup(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x58) = 4000;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  RegisterDynGroup(param_1 + 0x60);
  return param_1;
}



// Function: FUN_100011f0 @ 0x100011f0

void __thiscall FUN_100011f0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x54) = param_1;
  return;
}



// Function: FUN_10001200 @ 0x10001200

void __thiscall FUN_10001200(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return;
}



// Function: FUN_10001210 @ 0x10001210

void __thiscall FUN_10001210(void *this,undefined4 param_1)

{
  undefined1 local_8 [8];
  
  RegisterUnits(local_8,param_1);
  RemoveGroup(local_8,(int)this + 4);
  return;
}



// Function: FUN_10001240 @ 0x10001240

void __thiscall FUN_10001240(void *this,undefined4 param_1)

{
  RegisterUnits((int)this + 0xc,param_1);
  return;
}



// Function: FUN_10001260 @ 0x10001260

void __thiscall FUN_10001260(void *this,undefined4 param_1)

{
  RegisterUnitType((int)this + 0x1c,param_1);
  return;
}



// Function: FUN_10001280 @ 0x10001280

void __thiscall FUN_10001280(void *this,undefined4 param_1)

{
  RegisterUnitType((int)this + 0x24,param_1);
  return;
}



// Function: FUN_100012a0 @ 0x100012a0

void __thiscall FUN_100012a0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = GetTotalAmount0((int)this + 0x34);
  if ((((iVar2 != 0) || (iVar2 = GetTotalAmount0((int)this + 0x3c), iVar2 != 0)) ||
      (cVar1 = CheckProduction((int)this + 0xc), cVar1 == '\0')) &&
     (iVar2 = GetGlobalTime(), iVar2 <= *(int *)((int)this + 0x5c))) {
    return;
  }
  iVar2 = GetGlobalTime();
  *(int *)((int)this + 0x5c) = iVar2 + *(int *)((int)this + 0x58);
  iVar2 = GetUnitsByNation((int)this + 4,*(undefined1 *)this);
  iVar3 = (iVar2 + 1) * *(int *)((int)this + 0x54);
  iVar2 = iVar3 / 3;
  if (0 < iVar2) {
    do {
      ProduceUnitFast((int)this + 0xc,(int)this + 0x1c,(int)this + 0x34,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (0 < iVar3) {
    do {
      ProduceUnitFast((int)this + 0xc,(int)this + 0x24,(int)this + 0x3c,0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar2 = GetDiff(0);
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + iVar2 * param_1;
  return;
}



// Function: FUN_10001380 @ 0x10001380

void __thiscall FUN_10001380(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  ClearSelection(*(undefined1 *)this);
  SelectUnits((int)this + 0x4c,0);
  SelectUnits((int)this + 0x44,1);
  uVar2 = 0;
  iVar1 = _rand();
  SelSendAndKill(*(undefined1 *)this,param_1,iVar1,uVar2);
  return;
}



// Function: FUN_100013d0 @ 0x100013d0

undefined4 __fastcall FUN_100013d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = CheckProduction(param_1 + 0xc);
  if ((char)uVar1 != '\0') {
    RemoveGroup(param_1 + 0x34,param_1 + 0x44);
    uVar2 = RemoveGroup(param_1 + 0x3c,param_1 + 0x4c);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}



// Function: FUN_10001430 @ 0x10001430

void __thiscall FUN_10001430(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 1) = param_1;
  return;
}



// Function: FUN_10001440 @ 0x10001440

void __thiscall FUN_10001440(void *this,undefined4 param_1,undefined4 param_2)

{
  RegisterUnits((int)this + 5,param_1);
  *(undefined4 *)((int)this + 0xd) = param_2;
  return;
}



// Function: FUN_10001460 @ 0x10001460

void __thiscall FUN_10001460(void *this,undefined4 param_1)

{
  RegisterUnits((int)this + 0x11,param_1);
  return;
}



// Function: FUN_10001480 @ 0x10001480

void __thiscall FUN_10001480(void *this,undefined4 param_1)

{
  RegisterZone((int)this + *(int *)((int)this + 0x166) * 8 + 0x22,param_1);
  *(int *)((int)this + 0x166) = *(int *)((int)this + 0x166) + 1;
  return;
}



// Function: FUN_100014b0 @ 0x100014b0

void __thiscall FUN_100014b0(void *this,undefined4 param_1)

{
  RegisterUnits((int)this + *(int *)((int)this + 0x166) * 8 + 0xc2,param_1);
  *(int *)((int)this + 0x166) = *(int *)((int)this + 0x166) + 1;
  return;
}



// Function: FUN_100014e0 @ 0x100014e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100014e0(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  longlong lVar6;
  undefined4 uStack_6c;
  undefined1 auStack_58 [24];
  int iStack_40;
  undefined1 auStack_2c [24];
  int iStack_14;
  
  bVar3 = FUN_10001770((int)param_1);
  if (bVar3) {
    if (*(int *)(param_1 + 0x162) == *(int *)(param_1 + 0x166)) {
      return 0;
    }
    *param_1 = '\0';
    *(int *)(param_1 + 0x162) = *(int *)(param_1 + 0x162) + 1;
  }
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    if (*(int *)(param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc6) == 0x554e4954) {
      ClearSelection(param_1[1]);
      SelectUnits(param_1 + 5,0);
      SelAttackGroup(param_1[1],param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2);
      UnitsCenter(param_1 + 0x19,param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2,
                  CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0xd)));
      ClearSelection(param_1[1]);
      SelectUnits(param_1 + 0x11,0);
      SelSendAndKill(param_1[1],param_1 + 0x19,0,0);
      param_1[0x21] = '\0';
      return 0;
    }
    ClearSelection(CONCAT31((int3)((uint)*(int *)(param_1 + 0x162) >> 8),param_1[1]));
    SelectUnits(param_1 + 5,0);
    SelectUnits(param_1 + 0x11,1);
    SelSendAndKill(param_1[1],param_1 + *(int *)(param_1 + 0x162) * 8 + 0x22,0,0);
    return 0;
  }
  if (*(int *)(param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc6) == 0x554e4954) {
    ClearSelection(param_1[1]);
    SelectUnits1(param_1[1],param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2,0);
    SelDie(param_1[1]);
    pcVar1 = param_1 + 5;
    SelectUnits(pcVar1,0);
    SelAttackGroup(param_1[1],param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2);
    if (param_1[0x21] == '\0') {
      pcVar2 = param_1 + 0x19;
      iVar5 = GetUnitsAmount1(pcVar2,param_1 + 0x11);
      if (0 < iVar5) {
        UnitsCenter(pcVar2,pcVar1,CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 0xd)));
        ClearSelection(param_1[1]);
        SelectUnits(param_1 + 0x11,0);
        GetUnitInfo(param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2,0,auStack_58);
        GetUnitInfo(pcVar1,0,auStack_2c);
        FUN_10004810();
        lVar6 = __ftol();
        cVar4 = (char)lVar6;
        if ((double)(iStack_40 - iStack_14) < _DAT_1000f210) {
          cVar4 = cVar4 + '\x7f';
        }
        uStack_6c = CONCAT31((int3)((uint)(iStack_40 - iStack_14) >> 8),cVar4);
        SelSendAndKill(param_1[1],pcVar2,uStack_6c,0);
        param_1[0x21] = '\x01';
      }
    }
  }
  return 0;
}



// Function: FUN_10001770 @ 0x10001770

bool __fastcall FUN_10001770(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc6 + *(int *)(param_1 + 0x162) * 8) == 0x554e4954) {
    iVar1 = GetTotalAmount0(param_1 + *(int *)(param_1 + 0x162) * 8 + 0xc2);
    return iVar1 < 1;
  }
  iVar1 = param_1 + 0x11;
  iVar2 = GetTotalAmount0(iVar1);
  iVar3 = GetTotalAmount0(iVar1);
  iVar4 = GetUnitsAmount1(param_1 + 0x22 + *(int *)(param_1 + 0x162) * 8,param_1 + 5);
  iVar1 = GetUnitsAmount1(param_1 + 0x22 + *(int *)(param_1 + 0x162) * 8,iVar1);
  return ((iVar3 + iVar2) * 8) / 10 < iVar4 + iVar1;
}



// Function: FUN_10001830 @ 0x10001830

void __thiscall FUN_10001830(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return;
}



// Function: FUN_10001840 @ 0x10001840

undefined4 __thiscall FUN_10001840(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x59);
  if (iVar1 == 10) {
    return 0;
  }
  *(int *)((int)this + 0x59) = iVar1 + 1;
  RegisterUnits((int)this + iVar1 * 8 + 9,param_1);
  return 1;
}



// Function: FUN_10001870 @ 0x10001870

undefined1 __fastcall FUN_10001870(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_8 [8];
  
  iVar2 = 0;
  puVar3 = param_1 + 9;
  do {
    if (*(int *)(puVar3 + 4) != 0x554e4954) break;
    iVar1 = GetTotalAmount0(puVar3);
    if (iVar1 != 0) {
      UnitsCenter(auStack_8,puVar3,*(undefined2 *)(param_1 + 4));
      iVar1 = GetUnitsAmount0(auStack_8,*param_1);
      if (iVar1 != 0) {
        param_1[8] = 1;
      }
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 8;
  } while (iVar2 < 10);
  return param_1[8];
}



// Function: FUN_100018f0 @ 0x100018f0

undefined4 __thiscall
FUN_100018f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x140) == 0x14) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x140) + 1;
  *(int *)((int)this + 0x140) = iVar1;
  RegisterZone((void *)((int)this + iVar1 * 8),param_1);
  *(undefined4 *)((int)this + *(int *)((int)this + 0x140) * 4 + 0xa0) = param_2;
  *(undefined4 *)((int)this + *(int *)((int)this + 0x140) * 4 + 0xf0) = param_3;
  return 1;
}



// Function: FUN_10001950 @ 0x10001950

void __fastcall FUN_10001950(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  if (0 < iVar1) {
    puVar3 = (undefined4 *)(param_1 + 0xf0);
    iVar4 = param_1;
    do {
      SetLightSpot(iVar4,*puVar3,CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(puVar3 + -0x14)))
      ;
      iVar1 = *(int *)(param_1 + 0x140);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar2 < iVar1);
  }
  return;
}



// Function: FUN_100019a0 @ 0x100019a0

void __fastcall FUN_100019a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  if (0 < iVar1) {
    puVar3 = (undefined1 *)(param_1 + 0xa0);
    do {
      ClearLightSpot(CONCAT31((int3)((uint)iVar1 >> 8),*puVar3));
      iVar1 = *(int *)(param_1 + 0x140);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar2 < iVar1);
  }
  return;
}



// Function: FUN_100019f0 @ 0x100019f0

void __thiscall FUN_100019f0(void *this,undefined4 param_1)

{
  RegisterUnits((int)this + 4,param_1);
  return;
}



// Function: FUN_10001a10 @ 0x10001a10

undefined4 __thiscall FUN_10001a10(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xac);
  if (iVar1 == 0x14) {
    return 0;
  }
  *(int *)((int)this + 0xac) = iVar1 + 1;
  RegisterUnits((int)this + iVar1 * 8 + 0xc,param_1);
  return 1;
}



// Function: FUN_10001a50 @ 0x10001a50

void __fastcall FUN_10001a50(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_8 [8];
  
  UnitsCenter(local_8,param_1 + 4,0x96);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xac)) {
    puVar4 = param_1 + 0xc;
    do {
      iVar1 = GetTotalAmount0(puVar4);
      iVar2 = GetUnitsAmount1(local_8,puVar4);
      if (iVar2 != iVar1) {
        ClearSelection(*param_1);
        SelectUnits(puVar4,0);
        SelSendTo(*param_1,local_8,0,0);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0xac));
  }
  return;
}



// Function: FUN_10001ae0 @ 0x10001ae0

void __fastcall FUN_10001ae0(int param_1)

{
  *(undefined4 *)(param_1 + 800) = 0;
  return;
}



// Function: FUN_10001af0 @ 0x10001af0

undefined4 __thiscall FUN_10001af0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((int)this + 800);
  if (iVar1 == 100) {
    return 0;
  }
  *(int *)((int)this + 800) = iVar1 + 1;
  uVar2 = RegisterZone((void *)((int)this + iVar1 * 8),param_1);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



// Function: FUN_10001b20 @ 0x10001b20

int __thiscall FUN_10001b20(void *this,int param_1)

{
  return (int)(void *)((int)this + param_1 * 8);
}



// Function: FUN_10001bc0 @ 0x10001bc0

void FUN_10001bc0(void)

{
  RegisterVar(&DAT_10015c28,0xf424);
  RegisterVar(&DAT_100157a0,0x294);
  RegisterVar(&DAT_100256f8,0x3cf0);
  RegisterVar(&DAT_100293e8,4);
  return;
}



// Function: FUN_10001c00 @ 0x10001c00

undefined4 * __fastcall FUN_10001c00(undefined4 *param_1)

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



// Function: FUN_10001c30 @ 0x10001c30

undefined4 __thiscall FUN_10001c30(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_2c [20];
  int iStack_18;
  int iStack_14;
  
  iVar5 = 0;
  piVar6 = (int *)((int)this + 0x1c);
  piVar4 = piVar6;
  do {
    iVar1 = GetResource(0,iVar5);
    if (iVar1 < *piVar4) {
      uVar3 = ShowPage(s__LittleMoney_1001108c);
      return uVar3 & 0xffffff00;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 6);
  iVar5 = 0;
  do {
    AddResource(0,iVar5,-*piVar6);
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar5 < 6);
  iVar5 = _rand();
  CreateObject0((int)this + 0xc,&DAT_10015798,(int)this + 4,*(undefined1 *)this,param_1,iVar5);
  GetUnitInfo((int)this + 0xc,0,auStack_2c);
  iStack_18 = iStack_18 + 100;
  iStack_14 = iStack_14 + 100;
  uVar2 = SetUnitInfo(auStack_2c);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



// Function: FUN_10001d00 @ 0x10001d00

undefined4 __thiscall FUN_10001d00(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)this == param_1) {
    return 0;
  }
  FUN_100010e0(*(int *)this);
  SelectUnits((int)this + 0xc,0);
  SelChangeNation(*(undefined1 *)this,param_1);
  uVar1 = FUN_10001120(*(int *)this);
  *(int *)this = param_1;
  return uVar1;
}



// Function: FUN_10001d50 @ 0x10001d50

void __thiscall
FUN_10001d50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined4 *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0x2c) = param_5;
  *(undefined4 *)((int)this + 0x30) = param_6;
  return;
}



// Function: FUN_10001d80 @ 0x10001d80

void __thiscall FUN_10001d80(void *this,undefined4 param_1)

{
  RegisterUnitType((int)this + 4,param_1);
  return;
}



// Function: FUN_10001da0 @ 0x10001da0

bool __fastcall FUN_10001da0(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 0xc);
  return 0 < iVar1;
}



// Function: FUN_10001dc0 @ 0x10001dc0

undefined4 __fastcall FUN_10001dc0(int *param_1)

{
  undefined *puVar1;
  uint uVar2;
  short asStack_58 [22];
  short asStack_2c [22];
  
  puVar1 = &DAT_10015090 + *param_1 * 8;
  if (*(int *)(&DAT_10015094 + *param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(puVar1);
  }
  SaveSelectedUnits((char)*param_1,puVar1,0);
  uVar2 = GetTotalAmount0(puVar1);
  if (uVar2 == 1) {
    GetUnitInfo(param_1 + 3,0,asStack_58);
    uVar2 = GetUnitInfo(puVar1,0,asStack_2c);
    if (asStack_58[0] == asStack_2c[0]) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}



// Function: FUN_10001e40 @ 0x10001e40

undefined4 * __fastcall FUN_10001e40(undefined4 *param_1)

{
  FUN_10001c00(param_1);
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1;
}



// Function: FUN_10001e50 @ 0x10001e50

undefined4 __thiscall FUN_10001e50(void *this,char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  undefined3 uVar3;
  
  bVar1 = FUN_10001da0((int)this);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    uVar2 = FUN_10001dc0(this);
    if ((char)uVar2 != '\0') {
      uVar3 = (undefined3)(uVar2 >> 8);
      uVar2 = CONCAT31(uVar3,param_1);
      if (param_1 != '\0') {
        uVar2 = CONCAT31(uVar3,*(char *)((int)this + 0x34));
        if (*(char *)((int)this + 0x34) != '\0') {
          *(undefined1 *)((int)this + 0x34) = 0;
          return CONCAT31(uVar3,1);
        }
        goto LAB_10001e84;
      }
    }
    *(undefined1 *)((int)this + 0x34) = 1;
  }
LAB_10001e84:
  return uVar2 & 0xffffff00;
}



// Function: FUN_10001e90 @ 0x10001e90

undefined4 __thiscall FUN_10001e90(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10001c30(this,param_1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



// Function: FUN_10001ea0 @ 0x10001ea0

void __thiscall FUN_10001ea0(void *this,undefined4 param_1)

{
  RegisterUnits((int)this + 0xc,param_1);
  UnitsCenter((int)this + 0x34,(int)this + 0xc,400);
  return;
}



// Function: FUN_10001ed0 @ 0x10001ed0

void __thiscall FUN_10001ed0(void *this,undefined4 param_1)

{
  FUN_10001af0((void *)((int)this + 0x7c),param_1);
  return;
}



// Function: FUN_10001ee0 @ 0x10001ee0

void __thiscall
FUN_10001ee0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x40) = param_2;
  *(undefined4 *)((int)this + 0x44) = param_3;
  *(undefined4 *)((int)this + 0x48) = param_4;
  *(undefined4 *)((int)this + 0x4c) = param_5;
  *(undefined4 *)((int)this + 0x50) = param_6;
  return;
}



// Function: FUN_10001f10 @ 0x10001f10

void __thiscall
FUN_10001f10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 0x54) = param_1;
  *(undefined4 *)((int)this + 0x58) = param_2;
  *(undefined4 *)((int)this + 0x5c) = param_3;
  *(undefined4 *)((int)this + 0x60) = param_4;
  *(undefined4 *)((int)this + 100) = param_5;
  *(undefined4 *)((int)this + 0x68) = param_6;
  return;
}



// Function: FUN_10001f40 @ 0x10001f40

undefined4 * __fastcall FUN_10001f40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10001e40(param_1);
  FUN_10001c00((undefined4 *)((int)param_1 + 0x3d));
  FUN_10002860((int)param_1 + 0xa9);
  puVar2 = (undefined4 *)((int)param_1 + 0x3e5);
  iVar1 = 100;
  do {
    FUN_10001c00(puVar2);
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



// Function: FUN_10001fc0 @ 0x10001fc0

undefined4 __thiscall FUN_10001fc0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10001c30(this,param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  *(undefined1 *)((int)this + 0x184d) = 1;
  *(undefined4 *)((int)this + 0x1845) = 0;
  *(undefined4 *)((int)this + 0x184e) = 0;
  return 1;
}



// Function: FUN_10001ff0 @ 0x10001ff0

void __thiscall FUN_10001ff0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x3e1) = param_1;
  return;
}



// Function: FUN_10002000 @ 0x10002000

void __thiscall FUN_10002000(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x3d);
  for (iVar1 = 0xe9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// Function: FUN_10002020 @ 0x10002020

void __thiscall FUN_10002020(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1841) = param_1;
  return;
}



// Function: FUN_10002030 @ 0x10002030

undefined4 __fastcall FUN_10002030(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x1835);
  if (0 < iVar2) {
    iVar4 = param_1 + 0x3f1;
    do {
      bVar1 = FUN_10001da0(iVar4 + -0xc);
      if (bVar1) {
        iVar2 = GetUnitsAmount1(param_1 + 0x1839,iVar4);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = *(int *)(param_1 + 0x1835);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x34;
    } while (iVar3 < iVar2);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



// Function: FUN_10002090 @ 0x10002090

int __fastcall FUN_10002090(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1835)) {
    iVar2 = param_1 + 0x3e5;
    do {
      bVar1 = FUN_10001da0(iVar2);
      if (bVar1) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x34;
    } while (iVar4 < *(int *)(param_1 + 0x1835));
    return iVar3;
  }
  return 0;
}



// Function: FUN_100020e0 @ 0x100020e0

undefined4 __fastcall FUN_100020e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int local_1c;
  int local_18 [6];
  
  iVar1 = FUN_10002090(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  local_1c = 100000;
  iVar1 = 0;
  piVar5 = local_18;
  piVar4 = (int *)(param_1 + 0x91);
  do {
    if (*piVar4 != 0) {
      iVar2 = GetResource(0,iVar1);
      iVar2 = iVar2 / *piVar4;
      *piVar5 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar2 <= local_1c) {
        local_1c = iVar2;
      }
    }
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar1 < 6);
  iVar1 = FUN_10002090(param_1);
  if (iVar1 < local_1c) {
    local_1c = FUN_10002090(param_1);
  }
  *(int *)(param_1 + 0x184e) = local_1c;
  iVar1 = 0;
  piVar4 = (int *)(param_1 + 0x91);
  do {
    uVar3 = AddResource(0,iVar1,-(*piVar4 * *(int *)(param_1 + 0x184e)));
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar1 < 6);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}



// Function: FUN_100021a0 @ 0x100021a0

undefined4 __fastcall FUN_100021a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x184e);
  iVar1 = FUN_10002090(param_1);
  if (iVar1 <= iVar2) {
    iVar2 = FUN_10002090(param_1);
  }
  piVar3 = (int *)(param_1 + 0x79);
  ShowPageParam(s__MerchantSucsess_1001109c,iVar2 * *piVar3,*(int *)(param_1 + 0x7d) * iVar2,
                *(int *)(param_1 + 0x81) * iVar2,*(int *)(param_1 + 0x85) * iVar2,
                *(int *)(param_1 + 0x89) * iVar2,*(int *)(param_1 + 0x8d) * iVar2);
  iVar1 = 0;
  do {
    AddResource(0,iVar1,*piVar3 * iVar2);
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 6);
  iVar2 = *(int *)(param_1 + 0x1856) + 1;
  *(undefined4 *)(param_1 + 0x184e) = 0;
  *(int *)(param_1 + 0x1856) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



// Function: FUN_10002250 @ 0x10002250

void __thiscall FUN_10002250(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1852) = param_1;
  return;
}



// Function: FUN_10002260 @ 0x10002260

void __fastcall FUN_10002260(int *param_1)

{
  int *piVar1;
  void *this;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iStack_4;
  
  if ((*(int *)((int)param_1 + 0x1845) == 4) && (bVar2 = FUN_10001da0((int)param_1), bVar2)) {
    *(undefined4 *)((int)param_1 + 0x1845) = 0;
  }
  bVar2 = FUN_10001da0((int)param_1);
  if ((!bVar2) && (*(int *)((int)param_1 + 0x1845) != 4)) {
    if (*(char *)((int)param_1 + 0x184d) != '\0') {
      ShowPage(s__MerchantDie_100110b0);
      *(undefined1 *)((int)param_1 + 0x184d) = 0;
      RemoveGroup(param_1 + 3,(int)param_1 + 0x1862);
    }
    ClearLightSpot(*(undefined1 *)((int)param_1 + 0x1852));
    return;
  }
  piVar1 = param_1 + 3;
  UnitsCenter((int)param_1 + 0x1839,piVar1,100);
  SetLightSpot((int)param_1 + 0x1839,1,*(undefined1 *)((int)param_1 + 0x1852));
  switch(*(undefined4 *)((int)param_1 + 0x1845)) {
  case 0:
    iVar4 = GetUnitsAmount1(&DAT_100157d9 + *(int *)((int)param_1 + 0x3e1) * 0x42,piVar1);
    if (iVar4 == 0) {
      FUN_100010e0(*(int *)((int)param_1 + 0x1841));
      SelectUnits(piVar1,0);
      uVar3 = 0;
      iVar4 = _rand();
      SelSendTo(*(undefined1 *)((int)param_1 + 0x1841),
                &DAT_100157d9 + *(int *)((int)param_1 + 0x3e1) * 0x42,iVar4,uVar3);
      FUN_10001120(*(int *)((int)param_1 + 0x1841));
    }
    break;
  case 1:
    iVar4 = GetUnitsAmount1((int)param_1 + 0x71,piVar1);
    if ((iVar4 != 0) && (uVar3 = FUN_10002030((int)param_1), (char)uVar3 != '\0')) {
      *(undefined4 *)((int)param_1 + 0x1845) = 2;
      iVar4 = GetGlobalTime();
      *(int *)((int)param_1 + 0x1849) = iVar4 + 500;
    }
    break;
  case 2:
    iVar4 = GetGlobalTime();
    if (*(int *)((int)param_1 + 0x1849) < iVar4) {
      *(undefined4 *)((int)param_1 + 0x1845) = 3;
      this = (void *)((int)param_1 + 0xa9);
      FUN_10001830(this,*(undefined4 *)(&DAT_100157d9 + *(int *)((int)param_1 + 0x3e1) * 0x42),
                   *(undefined4 *)(&DAT_100157dd + *(int *)((int)param_1 + 0x3e1) * 0x42));
      FUN_100029c0(this,(int)param_1,*(int *)((int)param_1 + 0x1841),1);
      iStack_4 = 0;
      if (0 < *(int *)((int)param_1 + 0x1835)) {
        piVar5 = (int *)((int)param_1 + 0x3e5);
        do {
          bVar2 = FUN_10001da0((int)piVar5);
          if (bVar2) {
            FUN_100029c0(this,(int)piVar5,*piVar5,1);
          }
          iStack_4 = iStack_4 + 1;
          piVar5 = piVar5 + 0xd;
        } while (iStack_4 < *(int *)((int)param_1 + 0x1835));
      }
    }
    break;
  case 3:
    iVar4 = GetUnitsAmount1(&DAT_100157d9 + *(int *)((int)param_1 + 0x3e1) * 0x42,piVar1);
    if (iVar4 != 0) {
      FUN_100021a0((int)param_1);
      *(undefined4 *)((int)param_1 + 0x1845) = 0;
    }
    bVar2 = FUN_10001da0((int)(&DAT_100157a0 + *(int *)((int)param_1 + 0x3e1) * 0x42));
    if (!bVar2) {
      *(undefined4 *)((int)param_1 + 0x1845) = 0;
    }
  }
  FUN_100010e0(*param_1);
  FUN_100010e0(*(int *)((int)param_1 + 0x1841));
  SelectUnits(piVar1,0);
  iVar4 = GetUnitsAmount1(&DAT_100157d9 + *(int *)((int)param_1 + 0x3e1) * 0x42,piVar1);
  if ((((iVar4 == 0) || (*(int *)((int)param_1 + 0x1845) != 0)) &&
      (*(int *)((int)param_1 + 0x1845) != 5)) && (*(int *)((int)param_1 + 0x1845) != 6)) {
    uVar7 = *(undefined1 *)((int)param_1 + 0x1841);
    uVar6 = (undefined1)*param_1;
  }
  else {
    uVar7 = (undefined1)*param_1;
    uVar6 = *(undefined1 *)((int)param_1 + 0x1841);
  }
  SelChangeNation(uVar6,uVar7);
  FUN_10001120(*param_1);
  FUN_10001120(*(int *)((int)param_1 + 0x1841));
  return;
}



// Function: FUN_10002590 @ 0x10002590

void __thiscall
FUN_10002590(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *this_00;
  int local_4;
  
  local_4 = 100;
  this_00 = (void *)((int)this + 0x3e5);
  do {
    FUN_10001d80(this_00,s_GRUZ_UN__100110c0);
    FUN_10001d00(this_00,*(int *)((int)this + 0x1841));
    FUN_10001d50(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
    this_00 = (void *)((int)this_00 + 0x34);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}



// Function: FUN_10002600 @ 0x10002600

uint __fastcall FUN_10002600(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x1835);
  if (uVar3 != 100) {
    uVar1 = FUN_10001e90((void *)(param_1 + 0x3e5 + uVar3 * 0x34),param_1 + 0x1839);
    if ((char)uVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0x1835) + 1;
      *(int *)(param_1 + 0x1835) = iVar2;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    uVar3 = ShowPage(s__LittleMoney_1001108c);
  }
  return uVar3 & 0xffffff00;
}



// Function: FUN_10002650 @ 0x10002650

uint __fastcall FUN_10002650(int *param_1)

{
  void *this;
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = *(uint *)((int)param_1 + 0x1845);
  if (uVar3 == 0) {
    uVar2 = FUN_100020e0((int)param_1);
    if ((char)uVar2 != '\0') {
      this = (void *)((int)param_1 + 0xa9);
      *(undefined4 *)((int)param_1 + 0x1845) = 1;
      FUN_10002880(this,*(undefined4 *)((int)param_1 + 0x71),*(undefined4 *)((int)param_1 + 0x75));
      FUN_100028a0(this,(int)param_1,*param_1,1);
      iVar4 = *(int *)((int)param_1 + 0x1835);
      iVar5 = 0;
      if (0 < iVar4) {
        piVar6 = (int *)((int)param_1 + 0x3e5);
        do {
          bVar1 = FUN_10001da0((int)piVar6);
          if (bVar1) {
            FUN_100028a0(this,(int)piVar6,*piVar6,1);
          }
          iVar4 = *(int *)((int)param_1 + 0x1835);
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 0xd;
        } while (iVar5 < iVar4);
      }
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
    uVar3 = ShowPage(s__LittleMoney_1001108c);
  }
  return uVar3 & 0xffffff00;
}



// Function: FUN_100026f0 @ 0x100026f0

undefined4 * __fastcall FUN_100026f0(undefined4 *param_1)

{
  FUN_10001e40(param_1);
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return param_1;
}



// Function: FUN_10002710 @ 0x10002710

void __thiscall FUN_10002710(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x35) = param_1;
  return;
}



// Function: FUN_10002720 @ 0x10002720

void __fastcall FUN_10002720(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  
  piVar1 = param_1 + 1;
  iVar2 = GetTotalAmount1(piVar1,(char)*param_1);
  if (iVar2 == 0) {
    uVar3 = (undefined1)*param_1;
  }
  else {
    uVar3 = (undefined1)*param_1;
  }
  EnableUnit(uVar3,piVar1,iVar2 == 0);
  iVar2 = GetReadyAmount(piVar1,(char)*param_1);
  if (iVar2 == 0) {
    if (*(char *)((int)param_1 + 0x41) != '\0') {
      *(undefined1 *)((int)param_1 + 0x41) = 0;
      *(undefined4 *)(&DAT_1001746d + *(int *)((int)param_1 + 0x35) * 0x186a) = 5;
      ShowPage(s__MarketLost_100110dc);
      return;
    }
  }
  else {
    iVar2 = GetTotalAmount1(piVar1,(char)*param_1);
    if (iVar2 < 2) {
      if (*(char *)((int)param_1 + 0x41) == '\0') {
        *(undefined1 *)((int)param_1 + 0x41) = 1;
        *(undefined4 *)(&DAT_1001746d + *(int *)((int)param_1 + 0x35) * 0x186a) = 0;
        ShowPage(s__MarketBuilt_100110cc);
        FUN_100010e0(*param_1);
        SelectUnitsType(piVar1,(char)*param_1,0);
        SaveSelectedUnits((char)*param_1,param_1 + 3,0);
        UnitsCenter((int)param_1 + 0x39,param_1 + 3,400);
        FUN_10001120(*param_1);
      }
      FUN_10001da0((int)(&DAT_10015c28 + *(int *)((int)param_1 + 0x35) * 0x186a));
    }
  }
  return;
}



// Function: FUN_10002860 @ 0x10002860

int __fastcall FUN_10002860(int param_1)

{
  FUN_10001ae0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x334) = 0;
  return param_1;
}



// Function: FUN_10002880 @ 0x10002880

void __thiscall FUN_10002880(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return;
}



// Function: FUN_100028a0 @ 0x100028a0

bool __thiscall FUN_100028a0(void *this,int param_1,int param_2,int param_3)

{
  void *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iStack_8;
  int iStack_4;
  
  iVar5 = param_2;
  if ((char)param_3 != '\0') {
    FUN_100010e0(param_2);
    SelectUnits(param_1 + 0xc,0);
    this_00 = (void *)((int)this + 0x10);
    uVar7 = 0;
    iVar2 = _rand();
    iVar3 = FUN_10001b20(this_00,0);
    SelSendTo(iVar5,iVar3,iVar2,uVar7);
    iVar2 = 1;
    if (1 < *(int *)((int)this + 0x330)) {
      do {
        piVar8 = &param_2;
        piVar6 = &iStack_4;
        iVar3 = FUN_10001b20(this_00,iVar2 + -1);
        GetZoneCoor(iVar3,piVar6,piVar8);
        piVar8 = &param_3;
        piVar6 = &iStack_8;
        iVar3 = FUN_10001b20(this_00,iVar2);
        GetZoneCoor(iVar3,piVar6,piVar8);
        cVar1 = FUN_10001000(iStack_8 - iStack_4,param_3 - param_2);
        uVar4 = CONCAT31(extraout_var,cVar1) & 0xffff;
        uVar7 = 2;
        iVar3 = FUN_10001b20(this_00,iVar2);
        SelSendTo(iVar5,iVar3,uVar4,uVar7);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 0x330));
    }
    uVar7 = 2;
    iVar2 = _rand();
    SelSendTo(iVar5,(int)this + 8,iVar2,uVar7);
    FUN_10001120(iVar5);
  }
  iVar5 = GetUnitsAmount1((int)this + 8,param_1 + 0xc);
  return iVar5 != 0;
}



// Function: FUN_100029c0 @ 0x100029c0

bool __thiscall FUN_100029c0(void *this,int param_1,int param_2,int param_3)

{
  void *this_00;
  char cVar1;
  int iVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int iStack_c;
  int iStack_8;
  void *local_4;
  
  iVar4 = param_2;
  local_4 = this;
  if ((char)param_3 != '\0') {
    FUN_100010e0(param_2);
    SelectUnits(param_1 + 0xc,0);
    iVar5 = *(int *)((int)this + 0x330) + -1;
    this_00 = (void *)((int)this + 0x10);
    uVar9 = 0;
    uVar7 = 0;
    uVar6 = *(int *)((int)this + 0x330) - 2;
    iVar2 = FUN_10001b20(this_00,iVar5);
    SelSendTo(iVar4,iVar2,uVar7,uVar9);
    if (-1 < (int)uVar6) {
      do {
        piVar10 = &param_2;
        piVar8 = &iStack_8;
        iVar2 = FUN_10001b20(this_00,iVar5);
        GetZoneCoor(iVar2,piVar8,piVar10);
        piVar10 = &param_3;
        piVar8 = &iStack_c;
        iVar2 = FUN_10001b20(this_00,uVar6);
        GetZoneCoor(iVar2,piVar8,piVar10);
        cVar1 = FUN_10001000(iStack_c - iStack_8,param_3 - param_2);
        uVar3 = CONCAT31(extraout_var,cVar1) & 0xffff;
        uVar7 = 2;
        iVar2 = FUN_10001b20(this_00,uVar6);
        SelSendTo(iVar4,iVar2,uVar3,uVar7);
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -1;
        this = local_4;
      } while (uVar6 < 0x80000000);
    }
    uVar7 = 2;
    iVar2 = _rand();
    SelSendTo(iVar4,this,iVar2,uVar7);
    FUN_10001120(iVar4);
  }
  iVar4 = GetUnitsAmount1(this,param_1 + 0xc);
  return iVar4 != 0;
}



// Function: FUN_10002ae0 @ 0x10002ae0

void __thiscall
FUN_10002ae0(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

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



// Function: FUN_10002b90 @ 0x10002b90

void __thiscall FUN_10002b90(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x50) = param_1;
  return;
}



// Function: FUN_10002ba0 @ 0x10002ba0

void __thiscall FUN_10002ba0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x58) = param_1;
  return;
}



// Function: FUN_10002bb0 @ 0x10002bb0

void __thiscall FUN_10002bb0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x5c) = param_1;
  return;
}



// Function: FUN_10002bc0 @ 0x10002bc0

void __thiscall FUN_10002bc0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x60) = param_1;
  return;
}



// Function: FUN_10002bd0 @ 0x10002bd0

void __thiscall FUN_10002bd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RegisterUnitType((int)this + 0x28,param_1);
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x34) = param_3;
  return;
}



// Function: FUN_10002c00 @ 0x10002c00

void __thiscall FUN_10002c00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RegisterUnitType((int)this + 0x3c,param_1);
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = param_3;
  return;
}



// Function: FUN_10002c30 @ 0x10002c30

void __thiscall FUN_10002c30(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 100) = *param_1;
  *(undefined4 *)((int)this + 0x68) = param_1[1];
  return;
}



// Function: FUN_10002c50 @ 0x10002c50

bool __fastcall FUN_10002c50(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 4);
  return iVar1 != 0;
}



// Function: FUN_10002c70 @ 0x10002c70

undefined4 __fastcall FUN_10002c70(int param_1)

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
  bVar1 = FUN_10002c50(param_1);
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



// Function: FUN_10002d60 @ 0x10002d60

void __fastcall FUN_10002d60(int param_1)

{
  GetTotalAmount0(param_1 + 0x14);
  return;
}



// Function: FUN_10002d70 @ 0x10002d70

undefined4 __fastcall FUN_10002d70(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_10002c50(param_1);
  if (bVar1) {
    iVar2 = GetTotalAmount0(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x58) <= iVar2) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_10002da0 @ 0x10002da0

void __fastcall FUN_10002da0(int param_1)

{
  GetNUnits(param_1 + 0x1c);
  RemoveGroup(param_1 + 0x1c,param_1 + 0x6c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c);
  return;
}



// Function: FUN_10002dd0 @ 0x10002dd0

void __fastcall FUN_10002dd0(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = FUN_10002c50((int)param_1);
  if (bVar1) {
    FUN_10002c70((int)param_1);
    uVar2 = FUN_10002d70((int)param_1);
    if ((char)uVar2 != '\0') {
      FUN_100010e0(*param_1);
      SelectUnits(param_1 + 7,0);
      uVar2 = 0;
      iVar3 = _rand();
      SelSendAndKill((char)*param_1,param_1 + 0x19,iVar3,uVar2);
      FUN_10001120(*param_1);
      FUN_10002da0((int)param_1);
    }
  }
  return;
}



// Function: FUN_10002e30 @ 0x10002e30

void __thiscall FUN_10002e30(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_10002d70((int)this);
  if ((char)uVar1 != '\0') {
    uVar2 = _rand();
    if ((uVar2 & 0xff) < 0xa0) {
      FUN_10002c30(this,param_1);
      FUN_10002dd0(this);
      return;
    }
    FUN_10002c30(this,param_2);
  }
  FUN_10002dd0(this);
  return;
}



// Function: FUN_10003010 @ 0x10003010

void __cdecl FUN_10003010(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    SetResource(param_1,iVar1,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}



// Function: OnInit @ 0x10003040

void OnInit(void)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
                    /* 0x3040  1  OnInit */
  RegisterUnits(&DAT_10025338,s_del_diff_more_2_100115cc);
  RegisterUnits(&DAT_10025340,s_del_diff_more_1_100115bc);
  RegisterUnits(&DAT_10015788,s_del_diff_less_2_100115ac);
  RegisterUnits(&DAT_10015790,s_del_diff_less_3_1001159c);
  iVar1 = GetDiff(0);
  ClearSelection(5);
  if (iVar1 < 2) {
    SelectUnits(&DAT_10015788,1);
  }
  SelErase(5);
  ClearSelection(0);
  if (iVar1 < 3) {
    SelectUnits(&DAT_10015790,1);
  }
  SelErase(0);
  DVar2 = FUN_100048db((int *)0x0);
  FUN_100047db(DVar2);
  RegisterDynGroup(&DAT_100156c0);
  RegisterZone(&DAT_10015780,s_Z_way0_10011594);
  RegisterZone(&DAT_10015778,s_Z_way1_1001158c);
  RegisterZone(&DAT_10015bf8,s_Z_gold_10011584);
  RegisterZone(&DAT_10025068,s_Z_iron_1001157c);
  RegisterZone(&DAT_100150d8,s_Z_coal_10011574);
  RegisterZone(&DAT_10025058,s_z_stone0_10011568);
  RegisterZone(&DAT_10025050,s_z_stone1_1001155c);
  RegisterUnitType(&DAT_10015be8,s_shahta_SV__10011550);
  RegisterUnitType(&DAT_10025330,s_shahta_FE_SV__10011540);
  RegisterUnitType(&DAT_10015be0,s_shahta_UG_SV__10011530);
  RegisterUnitType(&DAT_10025348,s_Rinok_SV__10011524);
  RegisterUnits(&DAT_10015c00,s_commander_10011518);
  RegisterVar(&DAT_10025070,0x68);
  FUN_10001200(&DAT_10025070,5);
  FUN_10001240(&DAT_10025070,s_5_band0_barrack_10011508);
  FUN_10001210(&DAT_10025070,s_5_band0_house0_100114f8);
  FUN_10001210(&DAT_10025070,s_5_band0_house1_100114e8);
  FUN_10001210(&DAT_10025070,s_5_band0_house2_100114d8);
  FUN_10001260(&DAT_10025070,s_Strelec_Algir_DIP_fr__100114c0);
  FUN_10001280(&DAT_10025070,s_Rundashir_Avstria_DIP_fr__100114a4);
  iVar1 = GetDiff(0);
  FUN_100011f0(&DAT_10025070,iVar1 * 2 + 1);
  RegisterVar(&DAT_100250d8,0x74);
  FUN_10002ae0(&DAT_100250d8,5,s_5_band1_barrack_10011494,0,100);
  uVar3 = 200;
  iVar1 = GetDiff(0);
  FUN_10002bd0(&DAT_100250d8,s_Rundashir_Avstria_DIP_fr__100114a4,(4 - iVar1) * 0x4b,uVar3);
  uVar3 = 0xaa;
  iVar1 = GetDiff(0);
  FUN_10002c00(&DAT_100250d8,s_Strelec_Algir_DIP_fr__100114c0,(4 - iVar1) * 0x1e,uVar3);
  iVar1 = GetDiff(0);
  FUN_10002ba0(&DAT_100250d8,iVar1 / 2 + 4);
  iVar1 = GetDiff(0);
  FUN_10002bb0(&DAT_100250d8,iVar1 + 1);
  FUN_10002bc0(&DAT_100250d8,2000);
  RegisterVar(&DAT_10025150,0x74);
  FUN_10002ae0(&DAT_10025150,5,s_band2_barrack_10011484,0,100);
  uVar3 = 0xe6;
  iVar1 = GetDiff(0);
  FUN_10002bd0(&DAT_10025150,s_Rundashir_Avstria_DIP_sp__10011468,(4 - iVar1) * 0x32,uVar3);
  uVar3 = 0x78;
  iVar1 = GetDiff(0);
  FUN_10002c00(&DAT_10025150,s_Strelec_Algir_DIP_sp__10011450,(4 - iVar1) * 0x19,uVar3);
  iVar1 = GetDiff(0);
  FUN_10002ba0(&DAT_10025150,iVar1 + 6);
  uVar3 = GetDiff(0);
  FUN_10002bb0(&DAT_10025150,uVar3);
  FUN_10002bc0(&DAT_10025150,10000);
  RegisterVar(&DAT_100251c8,0x74);
  FUN_10002ae0(&DAT_100251c8,5,s_band3_barrack_10011440,0,100);
  uVar3 = 0xe6;
  iVar1 = GetDiff(0);
  FUN_10002bd0(&DAT_100251c8,s_Rundashir_Avstria_DIP_PL__10011424,(4 - iVar1) * 100,uVar3);
  uVar3 = 0x78;
  iVar1 = GetDiff(0);
  FUN_10002c00(&DAT_100251c8,s_Strelec_Algir_DIP_PL__1001140c,(4 - iVar1) * 0x28,uVar3);
  FUN_10002ba0(&DAT_100251c8,0xe);
  uVar3 = GetDiff(0);
  FUN_10002bb0(&DAT_100251c8,uVar3);
  FUN_10002bc0(&DAT_100251c8,2000);
  RegisterVar(&DAT_10025240,0x74);
  FUN_10002ae0(&DAT_10025240,5,s_band4_barrack_100113fc,0,100);
  uVar3 = 0xe6;
  iVar1 = GetDiff(0);
  FUN_10002bd0(&DAT_10025240,s_Rundashir_Avstria_DIP_BA__100113e0,(4 - iVar1) * 0x32,uVar3);
  uVar3 = 0x78;
  iVar1 = GetDiff(0);
  FUN_10002c00(&DAT_10025240,s_Strelec_Algir_DIP_BA__100113c8,(4 - iVar1) * 0x19,uVar3);
  iVar1 = GetDiff(0);
  FUN_10002ba0(&DAT_10025240,iVar1 * 2 + 5);
  iVar1 = GetDiff(0);
  FUN_10002bb0(&DAT_10025240,iVar1 / 2);
  FUN_10002bc0(&DAT_10025240,2000);
  RegisterVar(&DAT_100252b8,0x74);
  FUN_10002ae0(&DAT_100252b8,5,s_band5_barrack_100113b8,0,100);
  uVar3 = 0xe6;
  iVar1 = GetDiff(0);
  FUN_10002bd0(&DAT_100252b8,s_Rundashir_Avstria_DIP_fr__100114a4,(4 - iVar1) * 0x46,uVar3);
  uVar3 = 0x78;
  iVar1 = GetDiff(0);
  FUN_10002c00(&DAT_100252b8,s_Strelec_Algir_DIP_fr__100114c0,(4 - iVar1) * 0x23,uVar3);
  FUN_10002ba0(&DAT_100252b8,7);
  iVar1 = GetDiff(0);
  FUN_10002bb0(&DAT_100252b8,iVar1 / 2);
  FUN_10002bc0(&DAT_100252b8,2000);
  RegisterVar(&DAT_100150f0,0x16a);
  FUN_10001430(&DAT_100150f0,5);
  FUN_10001440(&DAT_100150f0,s_5_assault0_destr_100113a4,600);
  FUN_10001460(&DAT_100150f0,s_5_assault0_guard_10011390);
  FUN_100014b0(&DAT_100150f0,s_3_tower0_10011384);
  FUN_100014b0(&DAT_100150f0,&DAT_1001137c);
  FUN_100014b0(&DAT_100150f0,s_forge_10011374);
  FUN_100014b0(&DAT_100150f0,s_barrack_1001136c);
  FUN_100014b0(&DAT_100150f0,s_stable_10011364);
  FUN_100014b0(&DAT_100150f0,s_sklad_1001135c);
  FUN_100014b0(&DAT_100150f0,s_market_10011354);
  FUN_100014b0(&DAT_100150f0,s_academy_1001134c);
  FUN_100014b0(&DAT_100150f0,s_center_10011344);
  FUN_100014b0(&DAT_100150f0,s_church_1001133c);
  FUN_100014b0(&DAT_100150f0,s_diplomatic_10011330);
  FUN_100014b0(&DAT_100150f0,&DAT_10011328);
  FUN_10001480(&DAT_100150f0,s_Z_gold_10011584);
  RegisterVar(&DAT_10015260,0x16a);
  FUN_10001430(&DAT_10015260,5);
  FUN_10001440(&DAT_10015260,s_5_assault1_destr_10011314,600);
  FUN_10001460(&DAT_10015260,s_5_assault1_guard_10011300);
  FUN_100014b0(&DAT_10015260,s_3_coal0_100112f8);
  FUN_100014b0(&DAT_10015260,s_3_coal1_100112f0);
  FUN_100014b0(&DAT_10015260,s_3_coal2_100112e8);
  FUN_100014b0(&DAT_10015260,s_stable_10011364);
  FUN_100014b0(&DAT_10015260,&DAT_1001137c);
  FUN_100014b0(&DAT_10015260,s_forge_10011374);
  FUN_100014b0(&DAT_10015260,s_sklad_1001135c);
  FUN_100014b0(&DAT_10015260,s_market_10011354);
  FUN_100014b0(&DAT_10015260,&DAT_10011328);
  FUN_100014b0(&DAT_10015260,s_barrack_1001136c);
  FUN_100014b0(&DAT_10015260,s_academy_1001134c);
  FUN_100014b0(&DAT_10015260,s_center_10011344);
  FUN_100014b0(&DAT_10015260,s_church_1001133c);
  FUN_100014b0(&DAT_10015260,s_diplomatic_10011330);
  FUN_10001480(&DAT_10015260,s_Z_coal_10011574);
  RegisterVar(&DAT_100153d0,0x16a);
  FUN_10001430(&DAT_100153d0,5);
  FUN_10001440(&DAT_100153d0,s_5_assault2_destr_100112d4,600);
  FUN_10001460(&DAT_100153d0,s_5_assault2_guard_100112c0);
  FUN_100014b0(&DAT_100153d0,s_3_gold0_100112b8);
  FUN_100014b0(&DAT_100153d0,s_barrack_1001136c);
  FUN_100014b0(&DAT_100153d0,&DAT_1001137c);
  FUN_100014b0(&DAT_100153d0,s_forge_10011374);
  FUN_100014b0(&DAT_100153d0,s_stable_10011364);
  FUN_100014b0(&DAT_100153d0,s_sklad_1001135c);
  FUN_100014b0(&DAT_100153d0,s_market_10011354);
  FUN_100014b0(&DAT_100153d0,s_academy_1001134c);
  FUN_100014b0(&DAT_100153d0,s_center_10011344);
  FUN_100014b0(&DAT_100153d0,s_church_1001133c);
  FUN_100014b0(&DAT_100153d0,s_diplomatic_10011330);
  FUN_100014b0(&DAT_100153d0,&DAT_10011328);
  FUN_10001480(&DAT_100153d0,s_Z_way0_10011594);
  RegisterVar(&DAT_10015540,0x16a);
  FUN_10001430(&DAT_10015540,5);
  FUN_10001440(&DAT_10015540,s_5_assault3_destr_100112a4,600);
  FUN_10001460(&DAT_10015540,s_5_assault3_guard_10011290);
  FUN_100014b0(&DAT_10015540,s_3_iron0_10011288);
  FUN_100014b0(&DAT_10015540,s_3_iron1_10011280);
  FUN_100014b0(&DAT_10015540,s_3_iron2_10011278);
  FUN_100014b0(&DAT_10015540,s_diplomatic_10011330);
  FUN_100014b0(&DAT_10015540,s_center_10011344);
  FUN_100014b0(&DAT_10015540,s_church_1001133c);
  FUN_100014b0(&DAT_10015540,s_market_10011354);
  FUN_100014b0(&DAT_10015540,s_academy_1001134c);
  FUN_100014b0(&DAT_10015540,s_barrack_1001136c);
  FUN_100014b0(&DAT_10015540,s_forge_10011374);
  FUN_100014b0(&DAT_10015540,&DAT_1001137c);
  FUN_100014b0(&DAT_10015540,s_stable_10011364);
  FUN_100014b0(&DAT_10015540,s_sklad_1001135c);
  FUN_100014b0(&DAT_10015540,&DAT_10011328);
  FUN_10001480(&DAT_10015540,s_Z_iron_1001157c);
  RegisterVar(&DAT_10014f68,0x5d);
  FUN_10001830(&DAT_10014f68,0,0x6a4);
  FUN_10001840(&DAT_10014f68,s_allert0_0_1001126c);
  FUN_10001840(&DAT_10014f68,s_alert0_2_10011260);
  FUN_10001840(&DAT_10014f68,s_alert0_3_10011254);
  FUN_10001840(&DAT_10014f68,s_alert0_4_10011248);
  FUN_10001840(&DAT_10014f68,s_alert0_5_1001123c);
  FUN_10001840(&DAT_10014f68,s_alert0_6_10011230);
  FUN_10001840(&DAT_10014f68,s_alert0_7_10011224);
  RegisterVar(&DAT_10015a38,0x144);
  FUN_100018f0(&DAT_10015a38,s_light0_0_10011218,0,1);
  FUN_100018f0(&DAT_10015a38,s_light0_1_1001120c,1,1);
  FUN_100018f0(&DAT_10015a38,s_light0_3_10011200,3,1);
  FUN_100018f0(&DAT_10015a38,s_light0_4_100111f4,4,1);
  FUN_100018f0(&DAT_10015a38,s_light0_5_100111e8,5,1);
  FUN_100018f0(&DAT_10015a38,s_light0_6_100111dc,6,1);
  FUN_100018f0(&DAT_10015a38,s_light0_7_100111d0,7,3);
  RegisterVar(&DAT_100156c8,0xb0);
  FUN_10001200(&DAT_100156c8,3);
  FUN_100019f0(&DAT_100156c8,s_commander_10011518);
  FUN_10001a10(&DAT_100156c8,s_messager_100111c4);
  RegisterVar(&DAT_10014f08,0x5d);
  FUN_10001830(&DAT_10014f08,0,0x708);
  FUN_10001840(&DAT_10014f08,s_messager_100111c4);
  RegisterVar(&DAT_10014fc8,0x5d);
  FUN_10001830(&DAT_10014fc8,0,300);
  FUN_10001840(&DAT_10014fc8,s_messager_100111c4);
  RegisterVar(&DAT_10015b80,0x5d);
  FUN_10001830(&DAT_10015b80,0,1000);
  FUN_10001840(&DAT_10015b80,s_tran_mill_100111b8);
  FUN_10001840(&DAT_10015b80,s_center_10011344);
  FUN_10001840(&DAT_10015b80,s_church_1001133c);
  FUN_10001840(&DAT_10015b80,s_market_10011354);
  FUN_10001840(&DAT_10015b80,s_academy_1001134c);
  FUN_10001bc0();
  RegisterVar(&DAT_10025350,0x3a4);
  FUN_10001ea0(&DAT_10025350,s_4_Market_100111ac);
  FUN_10001ee0(&DAT_10025350,0,800,0,0,0,0);
  FUN_10001f10(&DAT_10025350,0,0,0,800,0x96,0x96);
  FUN_10001ed0(&DAT_10025350,s_trip0_1_100111a4);
  FUN_10001ed0(&DAT_10025350,s_trip0_2_1001119c);
  FUN_10001ed0(&DAT_10025350,s_trip0_3_10011194);
  FUN_10001ed0(&DAT_10025350,s_trip0_4_1001118c);
  FUN_10001ed0(&DAT_10025350,s_trip0_5_10011184);
  FUN_10001ed0(&DAT_10025350,s_trip0_6_1001117c);
  FUN_10001ed0(&DAT_10025350,s_trip0_7_10011174);
  FUN_10001ed0(&DAT_10025350,s_trip0_8_1001116c);
  FUN_10001ed0(&DAT_10025350,s_trip0_9_10011164);
  FUN_10001ed0(&DAT_10025350,s_trip0_10_10011158);
  FUN_10001ed0(&DAT_10025350,s_trip0_11_1001114c);
  FUN_10001ed0(&DAT_10025350,s_trip0_12_10011140);
  DAT_10025060 = &DAT_100157a0;
  FUN_10001d80(&DAT_100157a0,s_Rinok_SV__10011524);
  FUN_10002710(DAT_10025060,0);
  DAT_10015c08 = &DAT_10015c28;
  FUN_10001d80(&DAT_10015c28,s_KUPEC_UN__10011134);
  FUN_10002020(DAT_10015c08,3);
  FUN_10001ff0(DAT_10015c08,0);
  FUN_10002590(DAT_10015c08,0,10,0,200,100,0);
  FUN_10002000(DAT_10015c08,(undefined4 *)&DAT_10025350);
  FUN_10001d50(DAT_10015c08,0,500,0,200,500,0);
  FUN_10002250(DAT_10015c08,10);
  RegisterUnits(&DAT_100156b8,s_transfer_10011128);
  RegisterUnits(&DAT_100150d0,s_peasant_10011120);
  RegisterUnits(&DAT_100156b0,s_tran_pike_10011114);
  RegisterUnits(&DAT_10015bf0,&DAT_10011328);
  ChangeFriends(2,0x24);
  ChangeFriends(3,5);
  ChangeFriends(4,5);
  SetPlayerName(2,s_HOLLAND_1001110c);
  SetPlayerName(3,s_SVEDES_10011104);
  SetPlayerName(4,s_NEIRBORG_100110f8);
  SetPlayerName(5,s_ROBBERS_100110f0);
  RegisterUpgrade(&DAT_100150e0,s_AKA24SV_100110e8);
  DisableUpgrade(0,&DAT_100150e0);
  RegisterZone(&DAT_10015c18,s_Z_iron_1001157c);
  return;
}



// Function: FUN_10003e10 @ 0x10003e10

void FUN_10003e10(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  do {
    while( true ) {
      RefreshScreen();
      iVar2 = AskMultilineQuestion
                        (9,s__MerchantMainMenu_10011658,0,
                         s_V02_MerchMain_0_V02_MerchMain_1__1001166c);
      RefreshScreen();
      if (iVar2 == 0) break;
      if (iVar2 == 1) {
        iVar2 = FUN_10002090((int)DAT_10015c08);
        if (iVar2 == 0) {
          ShowPage(s__KaravanEmpty_10011648);
        }
        else {
          uVar3 = FUN_10002650(DAT_10015c08);
          if ((char)uVar3 != '\0') {
            return;
          }
          ShowPage(s__LittleMoney_1001108c);
        }
      }
      else if (1 < iVar2) {
        return;
      }
    }
LAB_10003e89:
    do {
      iVar2 = FUN_10002090((int)DAT_10015c08);
      RefreshScreen();
      iVar4 = AskMultilineQuestion
                        (9,s__MerchantInfoMenu_10011604,0,
                         s_V02_MerchInfo_0_V02_MerchInfo_1__10011618);
      RefreshScreen();
      if (iVar4 == 0) {
        ShowPageParam(s__Buiznes_100115dc,iVar2,*(undefined4 *)((int)DAT_10015c08 + 0x401),
                      *(undefined4 *)((int)DAT_10015c08 + 0x405),
                      *(undefined4 *)((int)DAT_10015c08 + 0x409),
                      *(undefined4 *)((int)DAT_10015c08 + 0x40d),
                      *(undefined4 *)((int)DAT_10015c08 + 0x411),
                      *(undefined4 *)((int)DAT_10015c08 + 0x415),
                      *(int *)((int)DAT_10015c08 + 0x91) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x95) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x99) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x9d) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0xa1) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0xa5) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x79) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x7d) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x81) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x85) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x89) * iVar2,
                      *(int *)((int)DAT_10015c08 + 0x8d) * iVar2);
      }
      else if (iVar4 == 1) {
        if (iVar2 < 10) {
          cVar1 = AskQuestion(s__MakeOboz_100115f8);
          if (cVar1 != '\0') {
            FUN_10002600((int)DAT_10015c08);
          }
        }
        else {
          ShowPage(s__TooManyOboz_100115e8);
        }
        goto LAB_10003e89;
      }
    } while (iVar4 < 2);
  } while( true );
}



// Function: ProcessScenary @ 0x10003fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProcessScenary(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined *puVar8;
  
                    /* 0x3fc0  2  ProcessScenary */
  iVar3 = GetDiff(0);
  SaveSelectedUnits(0,&DAT_100156c0,0);
  ClearSelection(5);
  SelectUnitsType(&DAT_10015be8,5,0);
  SelectUnitsType(&DAT_10025330,5,1);
  SelectUnitsType(&DAT_10015be0,5,1);
  SelDie(5);
  cVar1 = Trigg(0);
  if (cVar1 != '\0') {
    SetTrigg(0,0);
    iVar4 = GetDiff(0);
    FUN_10003010(_DAT_100293ec,(5 - iVar4) * 1000);
    iVar4 = GetDiff(0);
    FUN_10003010(_DAT_10011080,(iVar4 + 4) * 1000);
    StartAI(2,s_DENMARK_0_10011720,0,2,2,0xffffffff);
    ShowPage(s__Entry0_10011718);
    DisableMission(0x52);
    iVar4 = GetDiff(0);
    if (0 < iVar4) {
      DisableMission(0x45);
      DisableMission(0x54);
    }
    iVar4 = GetDiff(0);
    if (1 < iVar4) {
      DisableMission(0x59);
    }
    DisableMission(0x55);
    DisableMission(0x49);
    iVar4 = GetDiff(0);
    ClearSelection(3);
    if (1 < iVar4) {
      SelectUnits(&DAT_10025340,1);
    }
    if (2 < iVar4) {
      SelectUnits(&DAT_10025338,1);
    }
    SelErase(3);
  }
  cVar1 = FUN_10001870(&DAT_10014f68);
  if (cVar1 != '\0') {
    cVar1 = Trigg(1);
    if (cVar1 != '\0') {
      SetTrigg(1,0);
      ShowPage(s__Allert0_1001170c);
      FUN_10001950(0x10015a38);
      RunTimer(1,6000);
    }
    FUN_100014e0(&DAT_100150f0);
    FUN_100014e0(&DAT_10015260);
    FUN_100014e0(&DAT_100153d0);
    FUN_100014e0(&DAT_10015540);
    cVar1 = TimerDone(1);
    if ((cVar1 != '\0') && (uVar5 = FUN_100013d0(0x10025070), (char)uVar5 != '\0')) {
      iVar4 = GetDiff(0);
      RunTimer(1,(0xc - iVar4) * 500);
      FUN_100012a0(&DAT_10025070,1);
      uVar6 = _rand();
      if ((uVar6 & 1) == 0) {
        puVar8 = &DAT_10015780;
      }
      else {
        puVar8 = &DAT_10025068;
      }
      FUN_10001380(&DAT_10025070,puVar8);
    }
  }
  FUN_10002b90(&DAT_100250d8,1);
  iVar4 = FUN_10002d60(0x100250d8);
  if (iVar4 < 0x14) {
    FUN_10002b90(&DAT_100250d8,4);
  }
  iVar4 = FUN_10002d60(0x100250d8);
  if (0x32 < iVar4) {
    FUN_10002b90(&DAT_100250d8,0);
  }
  FUN_10002e30(&DAT_100250d8,(undefined4 *)&DAT_10015bf8,(undefined4 *)&DAT_10025058);
  FUN_10002b90(&DAT_10025150,1);
  iVar4 = FUN_10002d60(0x10025150);
  if (iVar4 < 0x14) {
    FUN_10002b90(&DAT_10025150,4);
  }
  iVar4 = FUN_10002d60(0x10025150);
  if (0x32 < iVar4) {
    FUN_10002b90(&DAT_10025150,0);
  }
  if (0 < iVar3) {
    FUN_10002e30(&DAT_10025150,(undefined4 *)&DAT_10015bf8,(undefined4 *)&DAT_10025068);
  }
  FUN_10002b90(&DAT_100251c8,1);
  iVar4 = FUN_10002d60(0x100251c8);
  if (iVar4 < 0x14) {
    FUN_10002b90(&DAT_100251c8,4);
  }
  iVar4 = FUN_10002d60(0x100251c8);
  if (0x3c < iVar4) {
    FUN_10002b90(&DAT_100251c8,0);
  }
  FUN_10002e30(&DAT_100251c8,(undefined4 *)&DAT_10015780,(undefined4 *)&DAT_10025050);
  FUN_10002b90(&DAT_10025240,1);
  iVar4 = FUN_10002d60(0x10025240);
  if (iVar4 < 0x14) {
    FUN_10002b90(&DAT_10025240,4);
  }
  iVar4 = FUN_10002d60(0x10025240);
  if (0x46 < iVar4) {
    FUN_10002b90(&DAT_10025240,0);
  }
  if (0 < iVar3) {
    FUN_10002e30(&DAT_10025240,(undefined4 *)&DAT_10015bf8,(undefined4 *)&DAT_10025058);
  }
  FUN_10002b90(&DAT_100252b8,1);
  iVar3 = FUN_10002d60(0x100252b8);
  if (iVar3 < 10) {
    FUN_10002b90(&DAT_100252b8,4);
  }
  iVar3 = FUN_10002d60(0x100252b8);
  if (0x28 < iVar3) {
    FUN_10002b90(&DAT_100252b8,0);
  }
  FUN_10002e30(&DAT_100252b8,(undefined4 *)&DAT_100150d8,(undefined4 *)&DAT_10025050);
  FUN_10002720(DAT_10025060);
  bVar2 = FUN_10001da0((int)(&DAT_10015c28 + *(int *)((int)DAT_10025060 + 0x35) * 0x186a));
  uVar5 = FUN_10001e50(DAT_10025060,!bVar2);
  pcVar7 = ShowPage_exref;
  if ((char)uVar5 != '\0') {
    ShowPageParam(s__MerchantPrice_100116fc,DAT_10015c08[7],DAT_10015c08[8],DAT_10015c08[9],
                  DAT_10015c08[10],DAT_10015c08[0xb],DAT_10015c08[0xc]);
    cVar1 = AskQuestion(s__MarketMainMenu_100116ec);
    pcVar7 = ShowPage_exref;
    if ((cVar1 != '\0') &&
       (uVar5 = FUN_10001fc0(&DAT_10015c28 + *(int *)((int)DAT_10025060 + 0x35) * 0x186a,
                             (int)DAT_10025060 + 0x39), pcVar7 = ShowPage_exref, (char)uVar5 == '\0'
       )) {
      ShowPage(s__LittleMoney_1001108c);
    }
  }
  uVar5 = FUN_10001e50(DAT_10015c08,'\x01');
  if ((char)uVar5 != '\0') {
    if (*(int *)((int)DAT_10015c08 + 0x1845) == 0) {
      FUN_10003e10();
    }
    else {
      cVar1 = AskQuestion(s__CancelTrading_100116dc);
      if (cVar1 != '\0') {
        *(undefined4 *)((int)DAT_10015c08 + 0x1845) = 0;
      }
    }
  }
  FUN_10002260(DAT_10015c08);
  cVar1 = FUN_10001870(&DAT_10014f08);
  if (cVar1 != '\0') {
    cVar1 = FUN_10001870(&DAT_10015b80);
    if (cVar1 == '\0') {
      FUN_10001a50(&DAT_100156c8);
    }
    cVar1 = FUN_10001870(&DAT_10014fc8);
    if ((cVar1 != '\0') && (cVar1 = Trigg(2), cVar1 != '\0')) {
      SetTrigg(2,0);
      (*pcVar7)(s__Allert1_100116d0);
      (*pcVar7)(s__Allert1_0_100116c4);
    }
  }
  cVar1 = FUN_10001870(&DAT_10015b80);
  if ((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 != '\0')) {
    SetTrigg(3,0);
    (*pcVar7)(s__Trans_100116bc);
    (*pcVar7)(s__Target0_100116b0);
    ClearSelection(3);
    SelectUnits(&DAT_100156b8,0);
    SelectUnits(&DAT_100150d0,1);
    SelectUnits(&DAT_100156b0,1);
    SelectUnits(&DAT_10015bf0,1);
    SelectUnits(&DAT_10025340,1);
    SelectUnits(&DAT_10025338,1);
    SelChangeNation(3,0);
    FUN_100019a0(0x10015a38);
    uVar5 = GetGlobalTime();
    FUN_10002bc0(&DAT_10025150,uVar5);
    uVar5 = GetGlobalTime();
    FUN_10002bc0(&DAT_10025240,uVar5);
    DisableMission(0x57);
    DisableMission(0x54);
    EnableMission(0x49);
    iVar3 = GetDiff(0);
    if (iVar3 < 2) {
      EnableMission(0x45);
      EnableMission(0x55);
      EnableMission(0x52);
    }
  }
  cVar1 = NationIsErased(_DAT_100293ec & 0xff);
  if (cVar1 != '\0') {
    (*pcVar7)(s__Defeat_100116a8);
    LooseGame();
  }
  cVar1 = NationIsErased(_DAT_10011080 & 0xff);
  if (cVar1 != '\0') {
    (*pcVar7)(s__Victory_1001169c);
    ShowVictory();
  }
  return;
}



// Function: FUN_10004660 @ 0x10004660

undefined4 FUN_10004660(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    OnInit();
  }
  return 1;
}



// Function: FUN_10004680 @ 0x10004680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004680(void)

{
  void *extraout_ECX;
  
  FUN_10004698();
  _DAT_100293f4 = FUN_10004bb0();
  FUN_10004b60(extraout_ECX);
  return;
}



// Function: FUN_10004698 @ 0x10004698

void FUN_10004698(void)

{
  PTR_LAB_10011750 = &LAB_10004c33;
  PTR_LAB_1001174c = __cfltcvt;
  PTR_LAB_10011754 = __fassign;
  PTR_LAB_10011758 = FUN_10004bd9;
  PTR_LAB_1001175c = &LAB_10004c81;
  PTR_LAB_10011760 = __cfltcvt;
  return;
}



// Function: __ftol @ 0x100046d0

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Function: FUN_100046f7 @ 0x100046f7

int __cdecl FUN_100046f7(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// Function: FUN_1000471c @ 0x1000471c

undefined4 __cdecl FUN_1000471c(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_100050f1();
  pbVar1 = (byte *)FUN_1000544c(DAT_1002ab50);
  if (pbVar1 < DAT_1002ab4c + (4 - (int)DAT_1002ab50)) {
    SVar2 = FUN_1000544c(DAT_1002ab50);
    pbVar1 = FUN_1000511d(DAT_1002ab50,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10004791;
    }
    DAT_1002ab4c = pbVar1 + ((int)DAT_1002ab4c - (int)DAT_1002ab50 >> 2) * 4;
    DAT_1002ab50 = pbVar1;
  }
  *(undefined4 *)DAT_1002ab4c = param_1;
  DAT_1002ab4c = DAT_1002ab4c + 4;
LAB_10004791:
  FUN_100050fa();
  return param_1;
}



// Function: FUN_1000479a @ 0x1000479a

int __cdecl FUN_1000479a(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000471c(param_1);
  return (iVar1 != 0) - 1;
}



// Function: FUN_100047db @ 0x100047db

void __cdecl FUN_100047db(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100056f9();
  pDVar1[5] = param_1;
  return;
}



// Function: _rand @ 0x100047e8

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_100056f9();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



// Function: FUN_10004810 @ 0x10004810

void FUN_10004810(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10005ab8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1000482d(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}



// Function: FUN_1000482d @ 0x1000482d

void __cdecl FUN_1000482d(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_10005a5c();
    }
LAB_100048bc:
    if (DAT_100293f0 == 0) {
      __startOneArgErrorHandling(&DAT_10011740,0xd,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_10005a45();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_100048bc;
    if (DAT_100293f0 == 0) {
      __math_exit(&DAT_10011740,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}



// Function: FUN_100048db @ 0x100048db

void __cdecl FUN_100048db(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_10029408._2_2_) {
    if (local_24.wHour == (WORD)DAT_10029408) {
      if (local_24.wDay == DAT_10029404._2_2_) {
        if (local_24.wMonth == DAT_10029400._2_2_) {
          if (local_24.wYear == (WORD)DAT_10029400) goto LAB_10004985;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_100293f8 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_100293f8 = 1;
  }
  else {
    DAT_100293f8 = 0;
  }
  DAT_10029400._0_2_ = local_24.wYear;
  DAT_10029400._2_2_ = local_24.wMonth;
  DAT_10029404._0_2_ = local_24.wDayOfWeek;
  DAT_10029404._2_2_ = local_24.wDay;
  DAT_10029408._0_2_ = local_24.wHour;
  DAT_10029408._2_2_ = local_24.wMinute;
  DAT_1002940c._0_2_ = local_24.wSecond;
  DAT_1002940c._2_2_ = local_24.wMilliseconds;
LAB_10004985:
  iVar2 = FUN_10005bbc((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_100293f8);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}



// Function: FUN_100049b7 @ 0x100049b7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100049b7(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10029428 = GetVersion();
    iVar1 = FUN_1000643b(1);
    if (iVar1 != 0) {
      _DAT_10029434 = DAT_10029428 >> 8 & 0xff;
      _DAT_10029430 = DAT_10029428 & 0xff;
      DAT_10029428 = DAT_10029428 >> 0x10;
      _DAT_1002942c = _DAT_10029430 * 0x100 + _DAT_10029434;
      iVar1 = FUN_10005674();
      if (iVar1 != 0) {
        DAT_1002ab54 = GetCommandLineA();
        DAT_10029414 = FUN_10006194();
        FUN_10005c7e();
        FUN_10005f47();
        FUN_10005e8e();
        FUN_10004fff();
        DAT_10029410 = DAT_10029410 + 1;
        goto LAB_10004a8a;
      }
      FUN_10006498();
    }
LAB_10004a17:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10029410 < 1) goto LAB_10004a17;
      DAT_10029410 = DAT_10029410 + -1;
      if (DAT_10029460 == 0) {
        FUN_1000503d();
      }
      FUN_10005e3a();
      FUN_100056c8();
      FUN_10006498();
    }
    else if (param_2 == 3) {
      FUN_10005760((undefined *)0x0);
    }
LAB_10004a8a:
    uVar2 = 1;
  }
  return uVar2;
}



// Function: entry @ 0x10004a90

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10029410;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10004ad8;
    if ((DAT_1002ab58 != (code *)0x0) &&
       (iVar2 = (*DAT_1002ab58)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100049b7(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10004ad8:
  iVar2 = FUN_10004660(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100049b7(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100049b7(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1002ab58 != (code *)0x0) {
      iVar2 = (*DAT_1002ab58)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// Function: __amsg_exit @ 0x10004b2d

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1002941c == 1) || ((DAT_1002941c == 0 && (DAT_10029420 == 1)))) {
    FUN_10006540();
  }
  FUN_10006579(param_1);
  (*(code *)PTR___exit_10011748)(0xff);
  return;
}



// Function: FUN_10004b60 @ 0x10004b60

void __fastcall FUN_10004b60(void *param_1)

{
  FUN_10006701(param_1,0x10000,0x30000);
  return;
}



// Function: FUN_10004b72 @ 0x10004b72

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004b72(void)

{
  if (_DAT_1000f220 < _DAT_1000f228 - (_DAT_1000f228 / _DAT_1000f230) * _DAT_1000f230) {
    return 1;
  }
  return 0;
}



// Function: FUN_10004bb0 @ 0x10004bb0

void FUN_10004bb0(void)

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
  FUN_10004b72();
  return;
}



// Function: FUN_10004bd9 @ 0x10004bd9

void __cdecl FUN_10004bd9(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_100068a7((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10011858 < 2) {
        uVar3 = (byte)PTR_DAT_10011864[*param_1 * 2] & 4;
        this = PTR_DAT_10011864;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_10006832(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1001185c;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __fassign @ 0x10004c99

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
    FUN_10006d73(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_10006da0(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// Function: FUN_10004cd7 @ 0x10004cd7

undefined1 * __cdecl FUN_10004cd7(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10006e44((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10006dcd(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10004d38(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// Function: FUN_10004d38 @ 0x10004d38

undefined1 * __cdecl
FUN_10004d38(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_10004fda(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_1001185c;
  }
  puVar3 = FUN_10006f60((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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



// Function: FUN_10004dfa @ 0x10004dfa

char * __cdecl FUN_10004dfa(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10006e44((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10006dcd(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10004e4f(param_2,param_3,&local_14,'\0');
  return param_2;
}



// Function: FUN_10004e4f @ 0x10004e4f

char * __cdecl FUN_10004e4f(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_10004fda(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_10004fda(pcVar3,1);
    *pcVar3 = DAT_1001185c;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_10004fda(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// Function: FUN_10004ef6 @ 0x10004ef6

void __cdecl FUN_10004ef6(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10006e44((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10006dcd(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10004d38(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_10004e4f(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x10004f89

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_10004cd7(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10004dfa(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_10004ef6(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// Function: FUN_10004fda @ 0x10004fda

void __cdecl FUN_10004fda(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_100070b0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_10004fff @ 0x10004fff

void FUN_10004fff(void)

{
  if (PTR_FUN_10011734 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10011734)();
  }
  FUN_10005103((undefined4 *)&DAT_1001104c,(undefined4 *)&DAT_10011060);
  FUN_10005103((undefined4 *)&DAT_10011000,(undefined4 *)&DAT_10011048);
  return;
}



// Function: __exit @ 0x1000502c

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000504c(_Code,1,0);
  return;
}



// Function: FUN_1000503d @ 0x1000503d

void FUN_1000503d(void)

{
  FUN_1000504c(0,0,1);
  return;
}



// Function: FUN_1000504c @ 0x1000504c

void __cdecl FUN_1000504c(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100050f1();
  if (DAT_10029464 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10029460 = 1;
  DAT_1002945c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1002ab50 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1002ab4c - 4), DAT_1002ab50 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1002ab50 <= puVar1);
    }
    FUN_10005103((undefined4 *)&DAT_10011064,(undefined4 *)&DAT_1001106c);
  }
  FUN_10005103((undefined4 *)&DAT_10011070,(undefined4 *)&DAT_10011078);
  if (param_3 == 0) {
    DAT_10029464 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100050fa();
  return;
}



// Function: FUN_100050f1 @ 0x100050f1

void FUN_100050f1(void)

{
  FUN_10007509(0xd);
  return;
}



// Function: FUN_100050fa @ 0x100050fa

void FUN_100050fa(void)

{
  FUN_1000756a(0xd);
  return;
}



// Function: FUN_10005103 @ 0x10005103

void __cdecl FUN_10005103(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Function: FUN_1000511d @ 0x1000511d

byte * __cdecl FUN_1000511d(byte *param_1,uint *param_2)

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
  puStack_c = &DAT_1000f268;
  puStack_10 = &LAB_10008cc8;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_10008ae5(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_1002aa24 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10007509(9);
            local_8 = 0;
            local_2c = (uint *)FUN_100075c7((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_1002aa1c) {
                iVar1 = FUN_10007dd0(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_1000791b(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_100087b0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_100075c7((int)param_1);
                    FUN_100075f2(local_2c,(int)param_1);
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
                local_28 = HeapAlloc(DAT_1002aa20,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_100087b0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_100075f2(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_100052a8();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_1002aa20,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_100295e0 == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_10008793(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_1002aa24 == 2) {
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
              FUN_10007509(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_10008322(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_1002aa20,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_10013b84) {
                  iVar1 = FUN_100086ea(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_100083be((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_100087b0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_10008379(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_1002aa20,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_100087b0((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10008379(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_100053f6();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_100295e0 == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_10008793(param_2);
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
              pbVar3 = HeapReAlloc(DAT_1002aa20,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_100295e0 == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_10008793(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



// Function: FUN_100052a8 @ 0x100052a8

void FUN_100052a8(void)

{
  FUN_1000756a(9);
  return;
}



// Function: FUN_100053f6 @ 0x100053f6

void FUN_100053f6(void)

{
  FUN_1000756a(9);
  return;
}



// Function: FUN_1000544c @ 0x1000544c

SIZE_T __cdecl FUN_1000544c(undefined *param_1)

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
  puStack_c = &DAT_1000f280;
  puStack_10 = &LAB_10008cc8;
  local_14 = ExceptionList;
  if (DAT_1002aa24 == 3) {
    ExceptionList = &local_14;
    FUN_10007509(9);
    local_8 = 0;
    local_20 = (byte *)FUN_100075c7((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_100054b6();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1002aa24 != 2) goto LAB_1000550a;
    ExceptionList = &local_14;
    FUN_10007509(9);
    local_8 = 1;
    local_2c = (byte *)FUN_10008322(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10005531();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_1000550a:
  SVar2 = HeapSize(DAT_1002aa20,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}



// Function: FUN_100054b6 @ 0x100054b6

void FUN_100054b6(void)

{
  FUN_1000756a(9);
  return;
}



// Function: FUN_10005531 @ 0x10005531

void FUN_10005531(void)

{
  FUN_1000756a(9);
  return;
}



// Function: _malloc @ 0x1000553a

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_100295e0);
  return pvVar1;
}



// Function: __nh_malloc @ 0x1000554c

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10005578((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10008793(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// Function: FUN_10005578 @ 0x10005578

void __cdecl FUN_10005578(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000f298;
  puStack_10 = &LAB_10008cc8;
  local_14 = ExceptionList;
  if (DAT_1002aa24 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1002aa1c) {
      ExceptionList = &local_14;
      FUN_10007509(9);
      local_8 = 0;
      piVar1 = FUN_1000791b(param_1);
      local_8 = 0xffffffff;
      FUN_100055df();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1002aa24 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10013b84) {
        ExceptionList = &local_14;
        FUN_10007509(9);
        local_8 = 1;
        piVar1 = FUN_100083be(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_1000563e();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10005657;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10005657:
  HeapAlloc(DAT_1002aa20,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// Function: FUN_100055df @ 0x100055df

void FUN_100055df(void)

{
  FUN_1000756a(9);
  return;
}



// Function: FUN_1000563e @ 0x1000563e

void FUN_1000563e(void)

{
  FUN_1000756a(9);
  return;
}



// Function: FUN_10005674 @ 0x10005674

undefined4 FUN_10005674(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10007474();
  DAT_1001176c = TlsAlloc();
  if (DAT_1001176c != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100092b5(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1001176c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100056e6((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_100056c8 @ 0x100056c8

void FUN_100056c8(void)

{
  FUN_1000749d();
  if (DAT_1001176c != 0xffffffff) {
    TlsFree(DAT_1001176c);
    DAT_1001176c = 0xffffffff;
  }
  return;
}



// Function: FUN_100056e6 @ 0x100056e6

void __cdecl FUN_100056e6(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10013e20;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_100056f9 @ 0x100056f9

DWORD * FUN_100056f9(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1001176c);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_100092b5(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1001176c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100056e6((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10005754;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10005754:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// Function: FUN_10005760 @ 0x10005760

void __cdecl FUN_10005760(undefined *param_1)

{
  if (DAT_1001176c != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1001176c), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10008ae5(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10008ae5(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10008ae5(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10008ae5(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10008ae5(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10008ae5(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10013e20) {
        FUN_10008ae5(*(undefined **)(param_1 + 0x50));
      }
      FUN_10008ae5(param_1);
    }
    TlsSetValue(DAT_1001176c,(LPVOID)0x0);
    return;
  }
  return;
}



// Function: FUN_100059d0 @ 0x100059d0

float10 __fastcall
FUN_100059d0(undefined4 param_1,uint param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  FUN_100093f2(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}



// Function: __startOneArgErrorHandling @ 0x100059e7

/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,uint param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  FUN_100093f2(param_2,&local_24,&param_3);
  return (float10)local_c;
}



// Function: FUN_10005a45 @ 0x10005a45

void FUN_10005a45(void)

{
  return;
}



// Function: FUN_10005a5c @ 0x10005a5c

undefined4 FUN_10005a5c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}



// Function: FUN_10005ab8 @ 0x10005ab8

uint __cdecl FUN_10005ab8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}



// Function: __math_exit @ 0x10005adb

/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __fastcall
__math_exit(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
           )

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
    return;
  }
  return;
}



// Function: FUN_10005bbc @ 0x10005bbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_10005bbc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

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
    iVar4 = *(int *)(&DAT_10013f8c + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_100094c2();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5)
            * 0x3c + DAT_10013ea8 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_10013eac != 0)) &&
        (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_10009777(local_28),
        CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + _DAT_10013eb0;
    }
  }
  return iVar2;
}



// Function: FUN_10005c7e @ 0x10005c7e

void FUN_10005c7e(void)

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
  DAT_1002ab40 = 0x20;
  DAT_1002aa40 = puVar2;
  for (; puVar2 < DAT_1002aa40 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1002ab40 < (int)UVar8) {
      puVar2 = &DAT_1002aa44;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1002ab40;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1002ab40 = DAT_1002ab40 + 0x20;
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
      } while ((int)DAT_1002ab40 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1002aa40)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1002aa40 + iVar6 * 9;
    if (DAT_1002aa40[iVar6 * 9] == -1) {
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
          goto LAB_10005e23;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10005e23:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1002ab40);
      return;
    }
  } while( true );
}



// Function: FUN_10005e3a @ 0x10005e3a

void FUN_10005e3a(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1002aa40;
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
      FUN_10008ae5((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1002ab40);
  return;
}



// Function: FUN_10005e8e @ 0x10005e8e

void FUN_10005e8e(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1002ab48 == 0) {
    FUN_10009e5c();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10029414; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_10029444 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10029414;
  puVar6 = DAT_10029414;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10006f60((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10008ae5((undefined *)DAT_10029414);
  DAT_10029414 = (uint *)0x0;
  *puVar3 = 0;
  DAT_1002ab44 = 1;
  return;
}



// Function: FUN_10005f47 @ 0x10005f47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005f47(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1002ab48 == 0) {
    FUN_10009e5c();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10029468,0x104);
  _DAT_10029454 = &DAT_10029468;
  pbVar2 = &DAT_10029468;
  if (*DAT_1002ab54 != 0) {
    pbVar2 = DAT_1002ab54;
  }
  FUN_10005fe0(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10005fe0(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1002943c = puVar1;
  _DAT_10029438 = local_8 + -1;
  return;
}



// Function: FUN_10005fe0 @ 0x10005fe0

void __cdecl FUN_10005fe0(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_100298e0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_100298e0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_1000608b;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_1000608b:
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
          if ((*(byte *)((int)&DAT_100298e0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_100298e0 + bVar1 + 1) & 4) != 0) {
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



// Function: FUN_10006194 @ 0x10006194

LPSTR FUN_10006194(void)

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
  if (DAT_1002956c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1002956c = 1;
LAB_100061eb:
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
        FUN_10008ae5(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1002956c = 2;
  }
  else {
    if (DAT_1002956c == 1) goto LAB_100061eb;
    if (DAT_1002956c != 2) {
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
    FUN_100087b0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// Function: FUN_100062c6 @ 0x100062c6

void __cdecl FUN_100062c6(undefined4 *param_1)

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



// Function: FUN_100062f3 @ 0x100062f3

int FUN_100062f3(void)

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
  
  FUN_1000a230();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = 'M';
    aCStackY_18[1] = 'c';
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
      aCStackY_18[0] = -0x75;
      aCStackY_18[1] = 'c';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -0x53;
        aCStackY_18[1] = 'c';
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
        aCStackY_18[0] = '\x13';
        aCStackY_18[1] = 'd';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10009e78(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_100062c6((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// Function: FUN_1000643b @ 0x1000643b

undefined4 __cdecl FUN_1000643b(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1002aa20 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1002aa20 != (HANDLE)0x0) {
    DAT_1002aa24 = FUN_100062f3();
    if (DAT_1002aa24 == 3) {
      ppuVar1 = (undefined **)FUN_1000757f(0x3f8);
    }
    else {
      if (DAT_1002aa24 != 2) {
        return 1;
      }
      ppuVar1 = FUN_100080c6();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1002aa20);
  }
  return 0;
}



// Function: FUN_10006498 @ 0x10006498

void FUN_10006498(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1002aa24 == 3) {
    iVar1 = 0;
    if (0 < DAT_1002aa14) {
      puVar2 = (undefined4 *)((int)DAT_1002aa18 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1002aa20,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1002aa14);
    }
    HeapFree(DAT_1002aa20,0,DAT_1002aa18);
  }
  else if (DAT_1002aa24 == 2) {
    ppuVar3 = &PTR_LOOP_10011b60;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10011b60);
  }
  HeapDestroy(DAT_1002aa20);
  return;
}



// Function: FUN_10006540 @ 0x10006540

void FUN_10006540(void)

{
  if ((DAT_1002941c == 1) || ((DAT_1002941c == 0 && (DAT_10029420 == 1)))) {
    FUN_10006579(0xfc);
    if (DAT_10029570 != (code *)0x0) {
      (*DAT_10029570)();
    }
    FUN_10006579(0xff);
  }
  return;
}



// Function: FUN_10006579 @ 0x10006579

void __cdecl FUN_10006579(DWORD param_1)

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
  pDVar2 = &DAT_100117c8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10011858);
  if (param_1 == (&DAT_100117c8)[iVar5 * 2]) {
    if ((DAT_1002941c == 1) || ((DAT_1002941c == 0 && (DAT_10029420 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100117cc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10006f60(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10006f60(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10006f70(local_a4,_Dest);
      FUN_10006f70(local_a4,(uint *)&DAT_1000f658);
      FUN_10006f70(local_a4,*(uint **)(iVar5 * 8 + 0x100117cc));
      auStackY_1e3._3_4_ = 0x1000669d;
      FUN_1000a25f(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: FUN_100066cc @ 0x100066cc

uint __thiscall FUN_100066cc(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10006717(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_100067a9(uVar1);
  return uVar1;
}



// Function: FUN_10006701 @ 0x10006701

void __thiscall FUN_10006701(void *this,uint param_1,uint param_2)

{
  FUN_100066cc(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// Function: FUN_10006717 @ 0x10006717

uint __cdecl FUN_10006717(uint param_1)

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



// Function: FUN_100067a9 @ 0x100067a9

uint __cdecl FUN_100067a9(uint param_1)

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



// Function: FUN_10006832 @ 0x10006832

uint __thiscall FUN_10006832(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10011864 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10011864[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000a5ad(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// Function: FUN_100068a7 @ 0x100068a7

uint __cdecl FUN_100068a7(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100296e0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100297c8);
    bVar1 = DAT_100297c4 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_100297c8);
      this = (void *)0x13;
      FUN_10007509(0x13);
    }
    param_1 = FUN_10006916(this,param_1);
    if (bVar1) {
      FUN_1000756a(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_100297c8);
    }
  }
  return param_1;
}



// Function: FUN_10006916 @ 0x10006916

uint __thiscall FUN_10006916(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100296e0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10011858 < 2) {
        uVar2 = (byte)PTR_DAT_10011864[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10006832(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10011864[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000a6f6(DAT_100296e0,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_100069e1 @ 0x100069e1

undefined4 __cdecl FUN_100069e1(int param_1,int param_2)

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



// Function: FUN_10006a2a @ 0x10006a2a

void __cdecl FUN_10006a2a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1000a945(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1000a945(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Function: FUN_10006a80 @ 0x10006a80

undefined4 __cdecl FUN_10006a80(int param_1,int param_2)

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
     (iVar2 = FUN_100069e1(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10006a2a(param_1,param_2 + -1);
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



// Function: FUN_10006b0c @ 0x10006b0c

void __cdecl FUN_10006b0c(int param_1,undefined4 *param_2)

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



// Function: FUN_10006b27 @ 0x10006b27

void __cdecl FUN_10006b27(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Function: FUN_10006b33 @ 0x10006b33

undefined4 __cdecl FUN_10006b33(int *param_1)

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



// Function: FUN_10006b4e @ 0x10006b4e

void __cdecl FUN_10006b4e(uint *param_1,uint param_2)

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



// Function: FUN_10006bdb @ 0x10006bdb

undefined4 __cdecl FUN_10006bdb(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_10006b33((int *)&local_10);
    if (iVar2 != 0) {
LAB_10006d07:
      uVar5 = 0;
      goto LAB_10006d09;
    }
    FUN_10006b27(&local_10);
  }
  else {
    FUN_10006b0c((int)local_1c,&local_10);
    iVar2 = FUN_10006a80((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10006b27(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10006b27(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10006b4e(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10006d09;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10006b4e(&local_10,param_3[3]);
        goto LAB_10006d07;
      }
      FUN_10006b0c((int)&local_10,local_1c);
      FUN_10006b4e(&local_10,iVar2 - iVar4);
      FUN_10006a80((int)&local_10,param_3[2]);
      FUN_10006b4e(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10006d09:
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



// Function: FUN_10006d47 @ 0x10006d47

void __cdecl FUN_10006d47(ushort *param_1,uint *param_2)

{
  FUN_10006bdb(param_1,param_2,(int *)&DAT_10011a70);
  return;
}



// Function: FUN_10006d5d @ 0x10006d5d

void __cdecl FUN_10006d5d(ushort *param_1,uint *param_2)

{
  FUN_10006bdb(param_1,param_2,(int *)&DAT_10011a88);
  return;
}



// Function: FUN_10006d73 @ 0x10006d73

void __thiscall FUN_10006d73(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000aae6(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10006d47(local_10,param_1);
  return;
}



// Function: FUN_10006da0 @ 0x10006da0

void __thiscall FUN_10006da0(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000aae6(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10006d5d(local_10,param_1);
  return;
}



// Function: FUN_10006dcd @ 0x10006dcd

void __cdecl FUN_10006dcd(char *param_1,int param_2,int param_3)

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
    FUN_100070b0((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// Function: FUN_10006e44 @ 0x10006e44

int * __cdecl FUN_10006e44(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_10006ea0(&local_10,&param_1);
  iVar3 = FUN_1000afb7(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10006f60(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// Function: FUN_10006ea0 @ 0x10006ea0

void __cdecl FUN_10006ea0(uint *param_1,uint *param_2)

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



// Function: _memset @ 0x10007050

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



// Function: FUN_100070b0 @ 0x100070b0

undefined4 * __cdecl FUN_100070b0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10007267_caseD_2;
        case 3:
          goto switchD_10007267_caseD_3;
        }
        goto switchD_10007267_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10007267_caseD_0;
      case 1:
        goto switchD_10007267_caseD_1;
      case 2:
        goto switchD_10007267_caseD_2;
      case 3:
        goto switchD_10007267_caseD_3;
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
              goto switchD_10007267_caseD_2;
            case 3:
              goto switchD_10007267_caseD_3;
            }
            goto switchD_10007267_caseD_1;
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
              goto switchD_10007267_caseD_2;
            case 3:
              goto switchD_10007267_caseD_3;
            }
            goto switchD_10007267_caseD_1;
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
              goto switchD_10007267_caseD_2;
            case 3:
              goto switchD_10007267_caseD_3;
            }
            goto switchD_10007267_caseD_1;
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
switchD_10007267_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10007267_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10007267_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10007267_caseD_0:
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
        goto switchD_100070e5_caseD_2;
      case 3:
        goto switchD_100070e5_caseD_3;
      }
      goto switchD_100070e5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100070e5_caseD_0;
    case 1:
      goto switchD_100070e5_caseD_1;
    case 2:
      goto switchD_100070e5_caseD_2;
    case 3:
      goto switchD_100070e5_caseD_3;
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
            goto switchD_100070e5_caseD_2;
          case 3:
            goto switchD_100070e5_caseD_3;
          }
          goto switchD_100070e5_caseD_1;
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
            goto switchD_100070e5_caseD_2;
          case 3:
            goto switchD_100070e5_caseD_3;
          }
          goto switchD_100070e5_caseD_1;
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
            goto switchD_100070e5_caseD_2;
          case 3:
            goto switchD_100070e5_caseD_3;
          }
          goto switchD_100070e5_caseD_1;
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
switchD_100070e5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100070e5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100070e5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100070e5_caseD_0:
  return param_1;
}



// Function: _strlen @ 0x100073f0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10007410;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10007443:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10007410:
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
  goto LAB_10007443;
}



// Function: FUN_10007474 @ 0x10007474

void FUN_10007474(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011ae4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011ad4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011ac4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011aa4);
  return;
}



// Function: FUN_1000749d @ 0x1000749d

void FUN_1000749d(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10011aa0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10011ae4)) && (ppuVar1 != &PTR_DAT_10011ad4)) &&
       ((ppuVar1 != &PTR_DAT_10011ac4 && (ppuVar1 != &PTR_DAT_10011aa4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10008ae5(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10011b60);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011ac4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011ad4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011ae4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011aa4);
  return;
}



// Function: FUN_10007509 @ 0x10007509

void __cdecl FUN_10007509(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10011aa0 + param_1;
  if ((&DAT_10011aa0)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10007509(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10008ae5((undefined *)lpCriticalSection);
    }
    FUN_1000756a(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// Function: FUN_1000756a @ 0x1000756a

void __cdecl FUN_1000756a(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10011aa0)[param_1]);
  return;
}



// Function: FUN_1000757f @ 0x1000757f

undefined4 __cdecl FUN_1000757f(undefined4 param_1)

{
  DAT_1002aa18 = HeapAlloc(DAT_1002aa20,0,0x140);
  if (DAT_1002aa18 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1002aa10 = 0;
  DAT_1002aa14 = 0;
  DAT_1002aa0c = DAT_1002aa18;
  DAT_1002aa1c = param_1;
  DAT_1002aa04 = 0x10;
  return 1;
}



// Function: FUN_100075c7 @ 0x100075c7

uint __cdecl FUN_100075c7(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1002aa18;
  while( true ) {
    if (DAT_1002aa18 + DAT_1002aa14 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// Function: FUN_100075f2 @ 0x100075f2

void __cdecl FUN_100075f2(uint *param_1,int param_2)

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
      if (DAT_1002aa10 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1002aa08 * 0x8000 + DAT_1002aa10[3]),0x8000,0x4000);
        DAT_1002aa10[2] = DAT_1002aa10[2] | 0x80000000U >> ((byte)DAT_1002aa08 & 0x1f);
        *(undefined4 *)(DAT_1002aa10[4] + 0xc4 + DAT_1002aa08 * 4) = 0;
        *(char *)(DAT_1002aa10[4] + 0x43) = *(char *)(DAT_1002aa10[4] + 0x43) + -1;
        if (*(char *)(DAT_1002aa10[4] + 0x43) == '\0') {
          DAT_1002aa10[1] = DAT_1002aa10[1] & 0xfffffffe;
        }
        if (DAT_1002aa10[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1002aa10[3],0,0x8000);
          HeapFree(DAT_1002aa20,0,(LPVOID)DAT_1002aa10[4]);
          FUN_100070b0(DAT_1002aa10,DAT_1002aa10 + 5,
                       (DAT_1002aa14 * 0x14 - (int)DAT_1002aa10) + -0x14 + DAT_1002aa18);
          DAT_1002aa14 = DAT_1002aa14 + -1;
          if (DAT_1002aa10 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1002aa0c = DAT_1002aa18;
        }
      }
      DAT_1002aa10 = param_1;
      DAT_1002aa08 = uVar14;
    }
  }
  return;
}



// Function: FUN_1000791b @ 0x1000791b

int * __cdecl FUN_1000791b(uint *param_1)

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
  
  puVar8 = DAT_1002aa18 + DAT_1002aa14 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1002aa0c;
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
  puVar11 = DAT_1002aa18;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1002aa0c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1002aa0c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1002aa18;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1002aa0c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1002aa0c) && (param_1 = FUN_10007c24(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10007cd5((int)param_1);
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
  DAT_1002aa0c = param_1;
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
    if (iVar9 == 0) goto LAB_10007be1;
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
LAB_10007be1:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1002aa10)) && (local_8 == DAT_1002aa08)) {
    DAT_1002aa10 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// Function: FUN_10007c24 @ 0x10007c24

undefined4 * FUN_10007c24(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1002aa14 == DAT_1002aa04) {
    pvVar2 = HeapReAlloc(DAT_1002aa20,0,DAT_1002aa18,(DAT_1002aa04 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1002aa04 = DAT_1002aa04 + 0x10;
    DAT_1002aa18 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1002aa18 + DAT_1002aa14 * 0x14);
  pvVar2 = HeapAlloc(DAT_1002aa20,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1002aa14 = DAT_1002aa14 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1002aa20,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// Function: FUN_10007cd5 @ 0x10007cd5

int __cdecl FUN_10007cd5(int param_1)

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



// Function: FUN_10007dd0 @ 0x10007dd0

undefined4 __cdecl FUN_10007dd0(uint *param_1,int param_2,int param_3)

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



// Function: FUN_100080c6 @ 0x100080c6

undefined ** FUN_100080c6(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10011b70 == -1) {
    lpMem = &PTR_LOOP_10011b60;
  }
  else {
    lpMem = HeapAlloc(DAT_1002aa20,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10011b60) {
        if (PTR_LOOP_10011b60 == (undefined *)0x0) {
          PTR_LOOP_10011b60 = (undefined *)&PTR_LOOP_10011b60;
        }
        if (PTR_LOOP_10011b64 == (undefined *)0x0) {
          PTR_LOOP_10011b64 = (undefined *)&PTR_LOOP_10011b60;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10011b60;
        lpMem[1] = PTR_LOOP_10011b64;
        PTR_LOOP_10011b64 = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_10011b60) {
    HeapFree(DAT_1002aa20,0,lpMem);
  }
  return (undefined **)0x0;
}



// Function: FUN_1000820a @ 0x1000820a

void __cdecl FUN_1000820a(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10013b80 == param_1) {
    PTR_LOOP_10013b80 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10011b60) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1002aa20,0,param_1);
    return;
  }
  DAT_10011b70 = 0xffffffff;
  return;
}



// Function: FUN_10008260 @ 0x10008260

void __cdecl FUN_10008260(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_10011b64;
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
            DAT_100295d8 = DAT_100295d8 + -1;
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
          FUN_1000820a(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_10011b64) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// Function: FUN_10008322 @ 0x10008322

int __cdecl FUN_10008322(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10011b60;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10011b60) {
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



// Function: FUN_10008379 @ 0x10008379

void __cdecl FUN_10008379(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_100295d8 = DAT_100295d8 + 1, DAT_100295d8 == 0x20)) {
    FUN_10008260(0x10);
  }
  return;
}



// Function: FUN_100083be @ 0x100083be

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_100083be(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_10013b80;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_100085c6(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10008489;
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
          piVar5 = (int *)FUN_100085c6(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10008489:
            PTR_LOOP_10013b80 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_10013b80) {
      ppuVar9 = &PTR_LOOP_10011b60;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_10011b60) {
          ppuVar9 = FUN_100080c6();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10013b80 = (undefined *)ppuVar9;
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
      PTR_LOOP_10013b80 = (undefined *)ppuVar9;
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



// Function: FUN_100085c6 @ 0x100085c6

int __cdecl FUN_100085c6(int *param_1,uint param_2,uint param_3)

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
          goto LAB_100086d9;
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
LAB_100086d9:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// Function: FUN_100086ea @ 0x100086ea

undefined4 __cdecl FUN_100086ea(int param_1,int *param_2,byte *param_3,uint param_4)

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



// Function: FUN_10008793 @ 0x10008793

undefined4 __cdecl FUN_10008793(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100295dc != (code *)0x0) {
    iVar1 = (*DAT_100295dc)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// Function: FUN_100087b0 @ 0x100087b0

undefined4 * __cdecl FUN_100087b0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10008967_caseD_2;
        case 3:
          goto switchD_10008967_caseD_3;
        }
        goto switchD_10008967_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10008967_caseD_0;
      case 1:
        goto switchD_10008967_caseD_1;
      case 2:
        goto switchD_10008967_caseD_2;
      case 3:
        goto switchD_10008967_caseD_3;
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
              goto switchD_10008967_caseD_2;
            case 3:
              goto switchD_10008967_caseD_3;
            }
            goto switchD_10008967_caseD_1;
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
              goto switchD_10008967_caseD_2;
            case 3:
              goto switchD_10008967_caseD_3;
            }
            goto switchD_10008967_caseD_1;
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
              goto switchD_10008967_caseD_2;
            case 3:
              goto switchD_10008967_caseD_3;
            }
            goto switchD_10008967_caseD_1;
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
switchD_10008967_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10008967_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10008967_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10008967_caseD_0:
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
        goto switchD_100087e5_caseD_2;
      case 3:
        goto switchD_100087e5_caseD_3;
      }
      goto switchD_100087e5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100087e5_caseD_0;
    case 1:
      goto switchD_100087e5_caseD_1;
    case 2:
      goto switchD_100087e5_caseD_2;
    case 3:
      goto switchD_100087e5_caseD_3;
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
            goto switchD_100087e5_caseD_2;
          case 3:
            goto switchD_100087e5_caseD_3;
          }
          goto switchD_100087e5_caseD_1;
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
            goto switchD_100087e5_caseD_2;
          case 3:
            goto switchD_100087e5_caseD_3;
          }
          goto switchD_100087e5_caseD_1;
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
            goto switchD_100087e5_caseD_2;
          case 3:
            goto switchD_100087e5_caseD_3;
          }
          goto switchD_100087e5_caseD_1;
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
switchD_100087e5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100087e5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100087e5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100087e5_caseD_0:
  return param_1;
}



// Function: FUN_10008ae5 @ 0x10008ae5

void __cdecl FUN_10008ae5(undefined *param_1)

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
  puStack_c = &DAT_1000f698;
  puStack_10 = &LAB_10008cc8;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1002aa24 == 3) {
    ExceptionList = &local_14;
    FUN_10007509(9);
    local_8 = 0;
    local_20 = (uint *)FUN_100075c7((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100075f2(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10008b4f();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1002aa24 != 2) goto LAB_10008bb1;
    ExceptionList = &local_14;
    FUN_10007509(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10008322(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10008379(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10008ba7();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10008bb1:
  HeapFree(DAT_1002aa20,0,param_1);
  ExceptionList = local_14;
  return;
}



// Function: FUN_10008b4f @ 0x10008b4f

void FUN_10008b4f(void)

{
  FUN_1000756a(9);
  return;
}



// Function: FUN_10008ba7 @ 0x10008ba7

void FUN_10008ba7(void)

{
  FUN_1000756a(9);
  return;
}



// Function: __global_unwind2 @ 0x10008bd0

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10008be8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10008c12

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
  puStack_18 = &LAB_10008bf0;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10008ca6();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: __abnormal_termination @ 0x10008c7a

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10008bf0) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// Function: __NLG_Notify1 @ 0x10008c9d

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10013b98 = param_1;
  DAT_10013b94 = in_EAX;
  DAT_10013b9c = unaff_EBP;
  return;
}



// Function: FUN_10008ca6 @ 0x10008ca6

void FUN_10008ca6(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10013b98 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10013b94 = in_EAX;
  DAT_10013b9c = unaff_EBP;
  return;
}



// Function: FUN_10008d85 @ 0x10008d85

void FUN_10008d85(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10008da0 @ 0x10008da0

DWORD __cdecl FUN_10008da0(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1002ab40) &&
     ((*(byte *)((&DAT_1002aa40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000b390(param_1);
    DVar1 = FUN_10008e05(param_1,param_2,param_3);
    FUN_1000b3ef(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1000b2bd();
  *pDVar2 = 9;
  pDVar2 = FUN_1000b2c6();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_10008e05 @ 0x10008e05

DWORD __cdecl FUN_10008e05(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_1000b34e(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000b2bd();
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
      pbVar1 = (byte *)((&DAT_1002aa40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1000b24a(uVar4);
  }
  return 0xffffffff;
}



// Function: FUN_10008e78 @ 0x10008e78

int __cdecl FUN_10008e78(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1002ab40) &&
     ((*(byte *)((&DAT_1002aa40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000b390(param_1);
    iVar1 = FUN_10008edd(param_1,param_2,param_3);
    FUN_1000b3ef(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000b2bd();
  *pDVar2 = 9;
  pDVar2 = FUN_1000b2c6();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_10008edd @ 0x10008edd

int __cdecl FUN_10008edd(DWORD param_1,char *param_2,uint param_3)

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
LAB_10008ef6:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_1002aa40 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10008e05(param_1,0,2);
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
LAB_10008fc5:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10009037;
      if (param_1 == 5) {
        pDVar7 = FUN_1000b2bd();
        *pDVar7 = 9;
        pDVar7 = FUN_1000b2c6();
        *pDVar7 = 5;
      }
      else {
        FUN_1000b24a(param_1);
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
            goto LAB_10008fc5;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10008fc5;
        } while( true );
      }
LAB_10009037:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10008ef6;
      pDVar7 = FUN_1000b2bd();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1000b2c6();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// Function: FUN_10009124 @ 0x10009124

void __cdecl FUN_10009124(uint param_1)

{
  if ((0x10013b9f < param_1) && (param_1 < 0x10013e01)) {
    FUN_10007509(((int)(param_1 + 0xeffec460) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_10009153 @ 0x10009153

void __cdecl FUN_10009153(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10007509(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_10009176 @ 0x10009176

void __cdecl FUN_10009176(uint param_1)

{
  if ((0x10013b9f < param_1) && (param_1 < 0x10013e01)) {
    FUN_1000756a(((int)(param_1 + 0xeffec460) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// Function: FUN_100091a5 @ 0x100091a5

void __cdecl FUN_100091a5(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000756a(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// Function: FUN_100092b5 @ 0x100092b5

int * __cdecl FUN_100092b5(int param_1,int param_2)

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
  puStack_c = &DAT_1000f6b0;
  puStack_10 = &LAB_10008cc8;
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
      if (DAT_1002aa24 == 3) {
        if (puVar2 <= DAT_1002aa1c) {
          FUN_10007509(9);
          local_8 = 0;
          local_24 = FUN_1000791b(puVar2);
          local_8 = 0xffffffff;
          FUN_1000934e();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_100093a2;
LAB_10009391:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1000939d:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1002aa24 != 2) || (DAT_10013b84 < puVar3)) goto LAB_1000939d;
        FUN_10007509(9);
        local_8 = 1;
        local_24 = FUN_100083be((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_100093d7();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10009391;
      }
LAB_100093a2:
      local_24 = HeapAlloc(DAT_1002aa20,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100295e0 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10008793(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// Function: FUN_1000934e @ 0x1000934e

void FUN_1000934e(void)

{
  FUN_1000756a(9);
  return;
}



// Function: FUN_100093d7 @ 0x100093d7

void FUN_100093d7(void)

{
  FUN_1000756a(9);
  return;
}



// Function: FUN_100093f2 @ 0x100093f2

void __cdecl FUN_100093f2(uint param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_5c [10];
  undefined8 local_34;
  uint local_24;
  
  param_3 = (ushort *)(uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_10009437:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_10009437;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_1000948d;
    }
    if (iVar2 != 8) goto LAB_1000948d;
    uVar3 = 0x10;
  }
  bVar1 = FUN_1000b87c(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_1000b5c9(local_5c,(uint *)&param_3,uVar3,param_1,(undefined8 *)(param_2 + 2),
                 (undefined8 *)(param_2 + 6));
  }
LAB_1000948d:
  FUN_1000badb();
  if (((*param_2 != 8) && (DAT_10014410 == 0)) && (iVar2 = FUN_1000babb(), iVar2 != 0)) {
    return;
  }
  FUN_1000ba93(*param_2);
  return;
}



// Function: FUN_100094c2 @ 0x100094c2

void FUN_100094c2(void)

{
  if (DAT_100296a0 == 0) {
    FUN_10007509(0xb);
    if (DAT_100296a0 == 0) {
      FUN_100094f0();
      DAT_100296a0 = DAT_100296a0 + 1;
    }
    FUN_1000756a(0xb);
  }
  return;
}



// Function: FUN_100094f0 @ 0x100094f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100094f0(void)

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
  
  FUN_10007509(0xc);
  DAT_10013f50 = 0xffffffff;
  DAT_10013f40 = 0xffffffff;
  DAT_100295e8 = 0;
  _Str1 = (uint *)FUN_1000bc64("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_1000756a(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_100295f0);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_10013ea8 = (void *)(DAT_100295f0 * 0x3c);
    DAT_100295e8 = 1;
    if (DAT_10029636 != 0) {
      DAT_10013ea8 = (void *)((int)DAT_10013ea8 + DAT_10029644 * 0x3c);
    }
    if ((DAT_1002968a == 0) || (DAT_10029698 == 0)) {
      DAT_10013eac = 0;
      _DAT_10013eb0 = 0;
    }
    else {
      DAT_10013eac = 1;
      _DAT_10013eb0 = (DAT_10029698 - DAT_10029644) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_100296f0,0x220,(LPCWSTR)&DAT_100295f4,-1,PTR_DAT_10013f34,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_10013f34 = 0;
    }
    else {
      PTR_DAT_10013f34[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_100296f0,0x220,(LPCWSTR)&DAT_10029648,-1,PTR_DAT_10013f38,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_10013f38[0x3f] = 0;
      return;
    }
LAB_10009761:
    *PTR_DAT_10013f38 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_1002969c == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_1002969c), iVar4 != 0)))) {
      FUN_10008ae5((undefined *)DAT_1002969c);
      sVar5 = _strlen((char *)_Str1);
      DAT_1002969c = _malloc(sVar5 + 1);
      if (DAT_1002969c != (uint *)0x0) {
        FUN_10006f60(DAT_1002969c,_Str1);
        FUN_1000756a(0xc);
        _strncpy(PTR_DAT_10013f34,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_10013f34[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_1000bb54(this,(byte *)_Source);
        DAT_10013ea8 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_1000bb54(DAT_10013ea8,(byte *)_Source);
          DAT_10013ea8 = (void *)((int)DAT_10013ea8 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_1000bb54(DAT_10013ea8,(byte *)_Source);
            DAT_10013ea8 = (void *)((int)DAT_10013ea8 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_10013ea8 = (void *)-(int)DAT_10013ea8;
        }
        DAT_10013eac = (int)(char)*_Source;
        if (DAT_10013eac != 0) {
          _strncpy(PTR_DAT_10013f38,(char *)_Source,3);
          PTR_DAT_10013f38[3] = 0;
          return;
        }
        goto LAB_10009761;
      }
    }
    FUN_1000756a(0xc);
  }
  return;
}



// Function: FUN_10009777 @ 0x10009777

bool __cdecl FUN_10009777(int *param_1)

{
  bool bVar1;
  
  FUN_10007509(0xb);
  bVar1 = FUN_10009798(param_1);
  FUN_1000756a(0xb);
  return bVar1;
}



// Function: FUN_10009798 @ 0x10009798

bool __cdecl FUN_10009798(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_10013eac != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_10013f40) || (uVar5 != DAT_10013f50)) {
      if (DAT_100295e8 == 0) {
        FUN_10009944(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_10009944(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_10029688 != 0) {
          uVar6 = (uint)DAT_1002968e;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_1002968c;
          uVar6 = 0;
          uVar4 = (uint)DAT_1002968e;
        }
        FUN_10009944(1,(uint)(DAT_10029688 == 0),uVar5,(uint)DAT_1002968a,uVar4,uVar3,uVar6,
                     (uint)DAT_10029690,(uint)DAT_10029692,(uint)DAT_10029694,(uint)DAT_10029696);
        if (DAT_10029634 != 0) {
          uVar6 = (uint)DAT_1002963a;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_10029638;
          uVar6 = 0;
          uVar4 = (uint)DAT_1002963a;
          uVar5 = param_1[5];
        }
        FUN_10009944(0,(uint)(DAT_10029634 == 0),uVar5,(uint)DAT_10029636,uVar4,uVar3,uVar6,
                     (uint)DAT_1002963c,(uint)DAT_1002963e,(uint)DAT_10029640,(uint)DAT_10029642);
      }
    }
    iVar1 = param_1[7];
    if (DAT_10013f44 < DAT_10013f54) {
      if ((DAT_10013f44 <= iVar1) && (iVar1 <= DAT_10013f54)) {
        if ((DAT_10013f44 < iVar1) && (iVar1 < DAT_10013f54)) {
          return true;
        }
LAB_10009910:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_10013f44) {
          return DAT_10013f48 <= iVar2;
        }
        return iVar2 < DAT_10013f58;
      }
    }
    else {
      if (iVar1 < DAT_10013f54) {
        return true;
      }
      if (DAT_10013f44 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_10013f54) || (DAT_10013f44 <= iVar1)) goto LAB_10009910;
    }
  }
  return false;
}



// Function: FUN_10009944 @ 0x10009944

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10009944(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_10013f58)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_10013f8c + param_4 * 4);
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
        iVar2 = *(int *)(&DAT_10013f5c + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_10013f90 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_10013f58)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_10013f8c + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_10013f40 = param_3;
    DAT_10013f48 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_10013f44 = iVar1;
  }
  else {
    DAT_10013f58 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_10013eb0 + param_10) * 1000 + param_11;
    if (DAT_10013f58 < 0) {
      DAT_10013f58 = DAT_10013f58 + 86400000;
      DAT_10013f54 = iVar1 + -1;
    }
    else {
      DAT_10013f54 = iVar1;
      if (86399999 < DAT_10013f58) {
        DAT_10013f58 = DAT_10013f58 + -86400000;
        DAT_10013f54 = iVar1 + 1;
      }
    }
    DAT_10013f50 = param_3;
  }
  return;
}



// Function: FUN_10009a84 @ 0x10009a84

undefined4 __cdecl FUN_10009a84(int param_1)

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
  
  FUN_10007509(0x19);
  CodePage = FUN_10009c31(param_1);
  if (CodePage != DAT_100297cc) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10013fd0;
LAB_10009ac1:
      if (*pUVar5 != CodePage) goto code_r0x10009ac5;
      local_8 = 0;
      puVar15 = &DAT_100298e0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10013fe0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10013fc8)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_100298e0 + uVar8 + 1);
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
      DAT_100297dc = 1;
      DAT_100297cc = CodePage;
      DAT_100299e4 = FUN_10009c7b(CodePage);
      DAT_100297d0 = *(undefined4 *)(iVar12 + 0x10013fd4);
      DAT_100297d4 = *(undefined4 *)(iVar12 + 0x10013fd8);
      DAT_100297d8 = *(undefined4 *)(iVar12 + 0x10013fdc);
      goto LAB_10009c15;
    }
    goto LAB_10009c10;
  }
  goto LAB_10009aab;
code_r0x10009ac5:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100140bf < (int)pUVar5) goto code_r0x10009ad0;
  goto LAB_10009ac1;
code_r0x10009ad0:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_100299e4 = 0;
    puVar15 = &DAT_100298e0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_100297dc = 0;
      DAT_100297cc = CodePage;
    }
    else {
      DAT_100297cc = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_100298e0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_100298e0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_100299e4 = FUN_10009c7b(CodePage);
      DAT_100297dc = 1;
    }
    DAT_100297d0 = 0;
    DAT_100297d4 = 0;
    DAT_100297d8 = 0;
  }
  else {
    if (DAT_100296a4 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10009c22;
    }
LAB_10009c10:
    FUN_10009cae();
  }
LAB_10009c15:
  FUN_10009cd7();
LAB_10009aab:
  uVar14 = 0;
LAB_10009c22:
  FUN_1000756a(0x19);
  return uVar14;
}



// Function: FUN_10009c31 @ 0x10009c31

int __cdecl FUN_10009c31(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_100296a4 = 1;
                    /* WARNING: Could not recover jumptable at 0x10009c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_100296a4 = 1;
                    /* WARNING: Could not recover jumptable at 0x10009c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100296f0;
  }
  DAT_100296a4 = (uint)bVar2;
  return param_1;
}



// Function: FUN_10009c7b @ 0x10009c7b

undefined4 __cdecl FUN_10009c7b(int param_1)

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



// Function: FUN_10009cae @ 0x10009cae

void FUN_10009cae(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100298e0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_100297cc = 0;
  DAT_100297dc = 0;
  DAT_100299e4 = 0;
  DAT_100297d0 = 0;
  DAT_100297d4 = 0;
  DAT_100297d8 = 0;
  return;
}



// Function: FUN_10009cd7 @ 0x10009cd7

void FUN_10009cd7(void)

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
  
  BVar2 = GetCPInfo(DAT_100297cc,&local_18);
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
    FUN_1000a5ad(1,local_118,0x100,local_518,DAT_100297cc,DAT_100299e4,0);
    FUN_1000a6f6(DAT_100299e4,0x100,local_118,0x100,local_218,0x100,DAT_100297cc,0);
    FUN_1000a6f6(DAT_100299e4,0x200,local_118,0x100,local_318,0x100,DAT_100297cc,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_100298e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10009de3;
        }
        (&DAT_100297e0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100298e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10009de3:
        (&DAT_100297e0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_100298e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10009e2d;
        }
        (&DAT_100297e0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100298e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10009e2d:
        (&DAT_100297e0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// Function: FUN_10009e5c @ 0x10009e5c

void FUN_10009e5c(void)

{
  if (DAT_1002ab48 == 0) {
    FUN_10009a84(-3);
    DAT_1002ab48 = 1;
  }
  return;
}



// Function: FUN_10009e78 @ 0x10009e78

void __thiscall FUN_10009e78(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10009e8f(this,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_10009e8f @ 0x10009e8f

void * __thiscall FUN_10009e8f(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_10011858 < 2) {
      uVar3 = (byte)PTR_DAT_10011864[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_10011864;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10006832(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10009eea:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10009eea;
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
      goto LAB_10009f54;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10009f54;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10009f54:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_10011858 < 2) {
      uVar5 = (byte)PTR_DAT_10011864[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10006832(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_10011858 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_10011864 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10006832(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_1000a000:
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
          pDVar6 = FUN_1000b2bd();
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
      uVar3 = FUN_1000bce1((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_1000a000;
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



// Function: _strchr @ 0x1000a0b0

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



// Function: _strstr @ 0x1000a170

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
LAB_1000a1e3:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_1000a1e3;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// Function: _strncmp @ 0x1000a1f0

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



// Function: FUN_1000a230 @ 0x1000a230

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000a230(void)

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



// Function: FUN_1000a25f @ 0x1000a25f

int __cdecl FUN_1000a25f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100296a8 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100296a8 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100296a8 != (FARPROC)0x0) {
        DAT_100296ac = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100296b0 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000a2ae;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000a2ae:
    if (DAT_100296ac != (FARPROC)0x0) {
      iVar1 = (*DAT_100296ac)();
      if ((iVar1 != 0) && (DAT_100296b0 != (FARPROC)0x0)) {
        iVar1 = (*DAT_100296b0)(iVar1);
      }
    }
    iVar1 = (*DAT_100296a8)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x1000a2f0

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
        goto joined_r0x1000a32e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000a36b;
        goto LAB_1000a3d9;
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
joined_r0x1000a3d5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1000a3d9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000a36b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1000a3d5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1000a3d5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1000a3d5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000a32e:
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
LAB_1000a36b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_1000a3ee @ 0x1000a3ee

undefined4 __cdecl FUN_1000a3ee(DWORD *param_1)

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
    puVar7 = &DAT_100296b4;
    pcVar6 = DAT_100296b4;
LAB_1000a474:
    bVar1 = true;
    FUN_10007509(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_100296c0;
        pcVar6 = DAT_100296c0;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_100296b8;
        pcVar6 = DAT_100296b8;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_100296bc;
        pcVar6 = DAT_100296bc;
      }
      goto LAB_1000a474;
    }
    pDVar2 = FUN_100056f9();
    uVar3 = FUN_1000a570((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_1000756a(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_1000756a(1);
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
      goto LAB_1000a4e8;
    }
  }
  else {
LAB_1000a4e8:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_10013e98 < DAT_10013e9c + DAT_10013e98) {
        iVar4 = DAT_10013e98 * 0xc;
        iVar5 = DAT_10013e98;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_10013e9c + DAT_10013e98);
      }
      goto LAB_1000a526;
    }
  }
  *puVar7 = 0;
LAB_1000a526:
  if (bVar1) {
    FUN_1000756a(1);
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



// Function: FUN_1000a570 @ 0x1000a570

uint __cdecl FUN_1000a570(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_10013ea4 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_10013ea4 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000a5ad @ 0x1000a5ad

BOOL __cdecl
FUN_1000a5ad(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000f750;
  puStack_10 = &LAB_10008cc8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_100296c8;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_100296c8 == 0) {
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
  DAT_100296c8 = iVar3;
  if (DAT_100296c8 != 2) {
    if (DAT_100296c8 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_100296f0;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_1000a230();
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
    param_6 = DAT_100296e0;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// Function: FUN_1000a6f6 @ 0x1000a6f6

int __cdecl
FUN_1000a6f6(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000f760;
  puStack_10 = &LAB_10008cc8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_100296f8 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100296f8 = 2;
    }
    else {
      DAT_100296f8 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000a91a(param_3,param_4);
  }
  if (DAT_100296f8 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_100296f8 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100296f0;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_1000a230();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_1000a230();
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



// Function: FUN_1000a91a @ 0x1000a91a

int __cdecl FUN_1000a91a(char *param_1,int param_2)

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



// Function: FUN_1000a945 @ 0x1000a945

undefined4 __cdecl FUN_1000a945(uint param_1,uint param_2,uint *param_3)

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



// Function: ___add_12 @ 0x1000a966

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000a945(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1000a945(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1000a945(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1000a945(param_1[2],param_2[2],param_1 + 2);
  return;
}



// Function: FUN_1000a9c4 @ 0x1000a9c4

void __cdecl FUN_1000a9c4(uint *param_1)

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



// Function: FUN_1000a9f2 @ 0x1000a9f2

void __cdecl FUN_1000a9f2(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// Function: FUN_1000aa1f @ 0x1000aa1f

void __cdecl FUN_1000aa1f(char *param_1,int param_2,uint *param_3)

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
      FUN_1000a9c4(puVar1);
      FUN_1000a9c4(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1000a9c4(puVar1);
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
    FUN_1000a9c4(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// Function: FUN_1000aae6 @ 0x1000aae6

undefined4 __thiscall
FUN_1000aae6(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_1000ab3d:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1000ab5a:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1000ad7f;
    }
    if (bVar6 == DAT_1001185c) goto LAB_1000ab69;
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
      if (bVar6 != 0x30) goto LAB_1000ae59;
    }
    goto LAB_1000ab3d;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1000ab5a;
    iVar9 = iVar1;
    if (bVar6 != DAT_1001185c) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1000abee;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1000abc7;
    }
    goto LAB_1000ab3d;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1000ab5a;
    if (bVar6 == DAT_1001185c) {
LAB_1000ab69:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000ae5e;
    }
    goto LAB_1000ab3d;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10011858 < 2) {
        uVar3 = (byte)PTR_DAT_10011864[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10011864;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10006832(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_1001185c) goto LAB_1000acdb;
    goto LAB_1000ab3d;
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
      if (DAT_10011858 < 2) {
        uVar3 = (byte)PTR_DAT_10011864[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10011864;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10006832(this,(uint)bVar6,4);
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
LAB_1000acdb:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1000abee:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1000abc7:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1000ae59;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1000ab3d;
  case 5:
    local_28 = iVar5;
    if (DAT_10011858 < 2) {
      uVar3 = (byte)PTR_DAT_10011864[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10011864;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10006832(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1000ad7f;
    goto LAB_1000ae5e;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1000adb4;
      if (bVar6 == 0x2d) goto LAB_1000ada8;
      if (bVar6 != 0x30) goto LAB_1000ae5e;
LAB_1000ad4d:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1000ab3d;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1000ad4d;
      goto LAB_1000ae5e;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1000ae59;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1000addf;
  default:
    goto switchD_1000ab49_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1000adb4:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1000ae5e;
LAB_1000ada8:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1000ab3d;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_1000ab49_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1000ab3d;
    goto LAB_1000ae5e;
  }
  iVar9 = 9;
LAB_1000ad7f:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1000ab3d;
LAB_1000addf:
  if (DAT_10011858 < 2) {
    uVar3 = (byte)PTR_DAT_10011864[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_10011864;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_10006832(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1000ae29;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1000ae21;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1000addf;
LAB_1000ae21:
  pbVar7 = (byte *)0x1451;
LAB_1000ae29:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_10011858 < 2) {
      uVar3 = (byte)PTR_DAT_10011864[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10011864;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10006832(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1000ae59:
  pbVar7 = pbVar8 + -1;
LAB_1000ae5e:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000af6c;
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
    FUN_1000aa1f(local_60,local_8,(uint *)&local_44);
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
        FUN_1000c0ba((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1000aef1;
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
LAB_1000aef1:
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
LAB_1000af6c:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// Function: FUN_1000afb7 @ 0x1000afb7

undefined4 __cdecl
FUN_1000afb7(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000b0ac;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000b0ac:
            pcVar11 = "1#QNAN";
            goto LAB_1000b0b1;
          }
          pcVar11 = "1#IND";
        }
        FUN_10006f60((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1000b0b1:
        FUN_10006f60((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1000c0ba((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000be9a((int *)&local_14,(int *)&local_20);
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
        FUN_1000a9c4((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1000a9f2((uint *)&local_14);
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
          FUN_1000a9c4((uint *)&local_14);
          FUN_1000a9c4((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1000a9c4((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_1000b209;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1000b209:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000b20b:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1000b20b;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1000b241;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1000b241:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// Function: FUN_1000b24a @ 0x1000b24a

void __cdecl FUN_1000b24a(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000b2c6();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_100141d0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000b2bd();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x100141d4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10014338);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000b2bd();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000b2bd();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000b2bd();
  *pDVar1 = 0x16;
  return;
}



// Function: FUN_1000b2bd @ 0x1000b2bd

DWORD * FUN_1000b2bd(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100056f9();
  return pDVar1 + 2;
}



// Function: FUN_1000b2c6 @ 0x1000b2c6

DWORD * FUN_1000b2c6(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100056f9();
  return pDVar1 + 3;
}



// Function: FUN_1000b2cf @ 0x1000b2cf

undefined4 __cdecl FUN_1000b2cf(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1002ab40) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1002aa40)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10029420 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000b32b;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000b32b:
      *(undefined4 *)((&DAT_1002aa40)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000b2bd();
  *pDVar2 = 9;
  pDVar2 = FUN_1000b2c6();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_1000b34e @ 0x1000b34e

undefined4 __cdecl FUN_1000b34e(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1002ab40) &&
     ((*(byte *)((&DAT_1002aa40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1002aa40)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000b2bd();
  *pDVar1 = 9;
  pDVar1 = FUN_1000b2c6();
  *pDVar1 = 0;
  return 0xffffffff;
}



// Function: FUN_1000b390 @ 0x1000b390

void __cdecl FUN_1000b390(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1002aa40)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10007509(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000756a(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1002aa40)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// Function: FUN_1000b3ef @ 0x1000b3ef

void __cdecl FUN_1000b3ef(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1002aa40)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: FUN_1000b492 @ 0x1000b492

int __cdecl FUN_1000b492(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000b4c0(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000c1b3(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// Function: FUN_1000b4c0 @ 0x1000b4c0

undefined4 __cdecl FUN_1000b4c0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10008e78(param_1[4],(char *)param_1[2],uVar3);
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



// Function: FUN_1000b525 @ 0x1000b525

int __cdecl FUN_1000b525(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10007509(2);
  iVar4 = 0;
  if (0 < DAT_1002aa00) {
    do {
      iVar2 = *(int *)(DAT_100299e8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10009153(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100299e8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1000b492(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1000b492(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_100091a5(iVar4,*(int *)(DAT_100299e8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_1002aa00);
  }
  FUN_1000756a(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// Function: FUN_1000b5c9 @ 0x1000b5c9

void __cdecl
FUN_1000b5c9(uint *param_1,uint *param_2,uint param_3,uint param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_3 = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((uVar3 & 2) != 0) {
    param_3 = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((uVar3 & 1) != 0) {
    param_3 = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((uVar3 & 4) != 0) {
    param_3 = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_3 = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = (~*param_2 & 1) << 4 | param_1[2] & 0xffffffef;
  param_1[2] = (~*param_2 & 4) << 1 | param_1[2] & 0xfffffff7;
  param_1[2] = ~*param_2 >> 1 & 4 | param_1[2] & 0xfffffffb;
  param_1[2] = ~*param_2 >> 3 & 2 | param_1[2] & 0xfffffffd;
  param_1[2] = ~*param_2 >> 5 & 1 | param_1[2] & 0xfffffffe;
  uVar3 = FUN_1000babe();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_1000b73e;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_1000b73e:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_1000b774:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_1000b774;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = (param_4 & 0xfff) << 5 | *param_1 & 0xfffe001f;
  param_1[8] = param_1[8] | 1;
  param_1[8] = param_1[8] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 4) = *param_5;
  param_1[0x14] = param_1[0x14] | 1;
  param_1[0x14] = param_1[0x14] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 0x10) = *param_6;
  FUN_1000bacc();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) | 0xc;
        }
        goto LAB_1000b849;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_1000b849:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_1000b872;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_1000b872:
  *puVar2 = *(undefined8 *)(param_1 + 0x10);
  return;
}



// Function: FUN_1000b87c @ 0x1000b87c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_1000b87c(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  undefined8 local_10;
  int local_8;
  
  uVar3 = param_1 & 0x1f;
  bVar2 = true;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_1000bafe();
    uVar3 = param_1 & 0x17;
    goto LAB_1000ba71;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_1000bafe();
    uVar3 = param_1 & 0x1b;
    goto LAB_1000ba71;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      dVar1 = *param_2;
      if (dVar1 != _DAT_1000f210) {
        fVar5 = FUN_1000c26f(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20),&local_8);
        local_8 = local_8 + -0x600;
        if (local_8 < -0x432) {
          local_10 = 0.0;
          bVar4 = bVar2;
        }
        else {
          local_10 = (double)(ulonglong)
                             (SUB87((double)fVar5,0) & 0xfffffffffffff | 0x10000000000000);
          if (local_8 < -0x3fd) {
            local_8 = -0x3fd - local_8;
            do {
              if ((((ulonglong)local_10 & 1) != 0) && (!bVar4)) {
                bVar4 = bVar2;
              }
              uVar3 = (uint)local_10 >> 1;
              if (((ulonglong)local_10 & 0x100000000) != 0) {
                local_10._3_1_ = (byte)((ulonglong)local_10 >> 0x18) >> 1;
                local_10._0_3_ = (undefined3)uVar3;
                local_10._0_4_ = CONCAT13(local_10._3_1_,(undefined3)local_10) | 0x80000000;
                uVar3 = (uint)local_10;
              }
              local_10._0_4_ = uVar3;
              local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
          }
          if ((double)fVar5 < _DAT_1000f210) {
            local_10 = -local_10;
          }
        }
        *param_2 = local_10;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_1000bafe();
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_1000ba71;
  }
  FUN_1000bafe();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_10014430;
  if (uVar3 == 0) {
    if (*param_2 <= _DAT_1000f210) {
      dVar1 = -_DAT_10014430;
    }
LAB_1000b991:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_10014440;
      if (*param_2 <= _DAT_1000f210) {
        dVar1 = -_DAT_10014430;
      }
      goto LAB_1000b991;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= _DAT_1000f210) {
        dVar1 = -_DAT_10014440;
      }
      goto LAB_1000b991;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_10014440;
      if (*param_2 <= _DAT_1000f210) {
        dVar1 = -_DAT_10014440;
      }
      goto LAB_1000b991;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_1000ba71:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_1000bafe();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}



// Function: FUN_1000ba93 @ 0x1000ba93

void __cdecl FUN_1000ba93(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_1000b2bd();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_1000b2bd();
    *pDVar1 = 0x22;
    return;
  }
  return;
}



// Function: FUN_1000babb @ 0x1000babb

undefined4 FUN_1000babb(void)

{
  return 0;
}



// Function: FUN_1000babe @ 0x1000babe

int FUN_1000babe(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



// Function: FUN_1000bacc @ 0x1000bacc

int FUN_1000bacc(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



// Function: FUN_1000badb @ 0x1000badb

int FUN_1000badb(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



// Function: FUN_1000bafe @ 0x1000bafe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000bafe(void)

{
  return;
}



// Function: FUN_1000bb54 @ 0x1000bb54

int __thiscall FUN_1000bb54(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_10011858 < 2) {
      uVar1 = (byte)PTR_DAT_10011864[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_10011864;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_10006832(this,(uint)*param_1,8);
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
    if (DAT_10011858 < 2) {
      uVar2 = (byte)PTR_DAT_10011864[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_10006832(this,uVar4,4);
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



// Function: _strcmp @ 0x1000bbe0

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
      if (bVar4 != *_Str2) goto LAB_1000bc24;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1000bbf0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_1000bc24;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_1000bc24;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1000bbf0:
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
LAB_1000bc24:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_1000bc64 @ 0x1000bc64

int __cdecl FUN_1000bc64(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_1002ab44 != 0) &&
      ((DAT_10029444 != (int *)0x0 ||
       (((DAT_1002944c != 0 && (iVar1 = FUN_1000c3a3(), iVar1 == 0)) && (DAT_10029444 != (int *)0x0)
        ))))) && (piVar3 = DAT_10029444, param_1 != (uchar *)0x0)) {
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



// Function: FUN_1000bce1 @ 0x1000bce1

uint __cdecl FUN_1000bce1(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100296e0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100297c8);
    bVar1 = DAT_100297c4 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_100297c8);
      this = (void *)0x13;
      FUN_10007509(0x13);
    }
    param_1 = FUN_1000bd50(this,param_1);
    if (bVar1) {
      FUN_1000756a(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_100297c8);
    }
  }
  return param_1;
}



// Function: FUN_1000bd50 @ 0x1000bd50

uint __thiscall FUN_1000bd50(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100296e0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10011858 < 2) {
        uVar2 = (byte)PTR_DAT_10011864[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10006832(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10011864[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000a6f6(DAT_100296e0,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



// Function: FUN_1000be20 @ 0x1000be20

int __cdecl FUN_1000be20(byte *param_1,byte *param_2)

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



// Function: FUN_1000be60 @ 0x1000be60

byte * __cdecl FUN_1000be60(byte *param_1,byte *param_2)

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



// Function: FUN_1000be9a @ 0x1000be9a

void __cdecl FUN_1000be9a(int *param_1,int *param_2)

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
LAB_1000bf3d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000bf3d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_1000a945(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_1000bff1:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1000a9f2((uint *)&local_28);
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
          FUN_1000a9c4((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000bff1;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1000c09a;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000c09a:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// Function: FUN_1000c0ba @ 0x1000c0ba

void __cdecl FUN_1000c0ba(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_10014500;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10014660;
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
        FUN_1000be9a(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



// Function: FUN_1000c136 @ 0x1000c136

undefined4 __cdecl FUN_1000c136(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_10009124((uint)param_1);
    uVar1 = FUN_1000c167(param_1);
    FUN_10009176((uint)param_1);
  }
  else {
    param_1[3] = 0;
  }
  return uVar1;
}



// Function: FUN_1000c167 @ 0x1000c167

undefined4 __cdecl FUN_1000c167(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_1000b4c0(param_1);
    FUN_1000c6d1(param_1);
    iVar1 = FUN_1000c5f1(param_1[4]);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_10008ae5((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



// Function: FUN_1000c1b3 @ 0x1000c1b3

undefined4 __cdecl FUN_1000c1b3(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1002ab40 <= param_1) {
LAB_1000c234:
    pDVar3 = FUN_1000b2bd();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1002aa40)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000c234;
  FUN_1000b390(param_1);
  if ((*(byte *)((&DAT_1002aa40)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000b34e(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000c229;
    pDVar3 = FUN_1000b2c6();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000b2bd();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000c229:
  FUN_1000b3ef(param_1);
  return uVar5;
}



// Function: FUN_1000c246 @ 0x1000c246

float10 __cdecl FUN_1000c246(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}



// Function: FUN_1000c26f @ 0x1000c26f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1000c26f(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  undefined8 local_c;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      _DAT_1000f210) {
    iVar4 = 0;
    local_c = 0.0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    iVar4 = -0x3fd;
    if (_DAT_1000f210 <=
        (double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar2 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar2;
      param_2._2_1_ = (byte)((uint)iVar2 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar2 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
      iVar4 = iVar4 + -1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar3) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    fVar5 = FUN_1000c246(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
  }
  else {
    fVar5 = FUN_1000c246(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
    iVar4 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
  }
  *param_3 = iVar4;
  return (float10)local_c;
}



// Function: __mbsnbicoll @ 0x1000c364

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_1000c6fc(DAT_100299e4,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_100297cc);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



// Function: FUN_1000c3a3 @ 0x1000c3a3

undefined4 FUN_1000c3a3(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_1002944c;
  puVar2 = DAT_1002944c;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_1000c979(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_1000c420 @ 0x1000c420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000c420(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_100297c8;
  if (DAT_100296e0 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000c46e;
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
LAB_1000c46e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_100297c8 = _DAT_100297c8 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_100297c4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_100297c8 = iVar2;
      FUN_10007509(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000c4cf;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10006916(this,uVar8);
      uVar7 = FUN_10006916(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000c4cf:
    if (uVar9 == 0) {
      LOCK();
      _DAT_100297c8 = _DAT_100297c8 + -1;
      UNLOCK();
    }
    else {
      FUN_1000756a(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_1000c4f0 @ 0x1000c4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000c4f0(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_100297c8;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_100296e0 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000c54f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000c54f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_100297c8 = _DAT_100297c8 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_100297c4;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_100297c8 = iVar2;
        FUN_10007509(0x13);
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
        uVar7 = FUN_10006916(param_3,uVar7);
        uVar5 = FUN_10006916(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000c5c5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000c5c5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_100297c8 = _DAT_100297c8 + -1;
        UNLOCK();
      }
      else {
        FUN_1000756a(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_1000c5f1 @ 0x1000c5f1

undefined4 __cdecl FUN_1000c5f1(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1002ab40) &&
     ((*(byte *)((&DAT_1002aa40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000b390(param_1);
    uVar1 = FUN_1000c64e(param_1);
    FUN_1000b3ef(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000b2bd();
  *pDVar2 = 9;
  pDVar2 = FUN_1000b2c6();
  *pDVar2 = 0;
  return 0xffffffff;
}



// Function: FUN_1000c64e @ 0x1000c64e

undefined4 __cdecl FUN_1000c64e(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1000b34e(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000b34e(2);
      iVar2 = FUN_1000b34e(1);
      if (iVar2 == iVar1) goto LAB_1000c69c;
    }
    hObject = (HANDLE)FUN_1000b34e(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000c69e;
    }
  }
LAB_1000c69c:
  DVar4 = 0;
LAB_1000c69e:
  FUN_1000b2cf(param_1);
  *(undefined1 *)((&DAT_1002aa40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1000b24a(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// Function: FUN_1000c6d1 @ 0x1000c6d1

void __cdecl FUN_1000c6d1(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_10008ae5((undefined *)param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



// Function: FUN_1000c6fc @ 0x1000c6fc

int __cdecl
FUN_1000c6fc(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
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
  puStack_c = &DAT_1000f970;
  puStack_10 = &LAB_10008cc8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_10029770 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10029770 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10029770 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_1000a91a((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_1000a91a((char *)param_5,param_6);
  }
  if (DAT_10029770 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_10029770 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100296f0;
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
      FUN_1000a230();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_1000a230();
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



// Function: FUN_1000c979 @ 0x1000c979

undefined4 __cdecl FUN_1000c979(uint *param_1,int param_2)

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
  puVar2 = (uint *)FUN_1000cbbf((byte *)param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar7 = *(byte *)((int)puVar2 + 1) == 0;
  if (DAT_10029444 == DAT_10029448) {
    DAT_10029444 = (byte *)FUN_1000cb58((int *)DAT_10029444);
  }
  if (DAT_10029444 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_1002944c == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_10029444 = _malloc(4);
      if (DAT_10029444 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_10029444 + 1;
      pbVar6 = DAT_10029444 + 2;
      pbVar1 = DAT_10029444 + 3;
      DAT_10029444[0] = 0;
      *pbVar4 = 0;
      *pbVar6 = 0;
      *pbVar1 = 0;
      if (DAT_1002944c == (undefined4 *)0x0) {
        DAT_1002944c = _malloc(4);
        if (DAT_1002944c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1002944c = 0;
      }
    }
    else {
      iVar3 = FUN_1000c3a3();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_10029444;
  iVar3 = FUN_1000cb00((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_1000511d(pbVar4,(uint *)(iVar3 * 4 + 8));
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
      goto LAB_1000caad;
    }
    pbVar6 = pbVar4 + iVar3 * 4;
    FUN_10008ae5(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar6 != 0; pbVar6 = pbVar6 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar6 = *(int *)(pbVar6 + 4);
    }
    pbVar4 = FUN_1000511d(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_1000caad;
  }
  DAT_10029444 = pbVar4;
LAB_1000caad:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_10006f60(lpName,param_1);
      pbVar4 = (byte *)(((int)lpName - (int)param_1) + (int)puVar2);
      *pbVar4 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(pbVar4 + 1)));
      FUN_10008ae5((undefined *)lpName);
    }
  }
  return 0;
}



// Function: FUN_1000cb00 @ 0x1000cb00

int __cdecl FUN_1000cb00(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_10029444;
  piVar2 = DAT_10029444;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_10029444 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_10029444 >> 2;
}



// Function: FUN_1000cb58 @ 0x1000cb58

undefined4 * __cdecl FUN_1000cb58(int *param_1)

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
      puVar4 = FUN_1000cc56(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



// Function: FUN_1000cbbf @ 0x1000cbbf

byte * __cdecl FUN_1000cbbf(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (DAT_100297dc == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_10007509(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_100298e0 + uVar3 + 1) & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_1000756a(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_1000756a(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2 + 1;
    }
    FUN_1000756a(0x19);
    pbVar2 = (byte *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return pbVar2;
}



// Function: FUN_1000cc56 @ 0x1000cc56

uint * __cdecl FUN_1000cc56(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10006f60(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}



// Function: FUN_1000cc81 @ 0x1000cc81

int * FUN_1000cc81(void)

{
  undefined4 *puVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000da78();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    *extraout_ECX = (int)&DAT_1000f998;
    extraout_ECX[3] = (int)&DAT_1000f990;
    FUN_1000cd55(extraout_ECX + 5);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  puVar1 = operator_new(0x54);
  *(undefined4 **)(unaff_EBP + 8) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1000cf35(puVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_1000ce73();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000f98c;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  *(undefined4 *)(*(int *)(*extraout_ECX + 4) + 0x1c + (int)extraout_ECX) = 1;
  return extraout_ECX;
}



// Function: FUN_1000cd42 @ 0x1000cd42

void __fastcall FUN_1000cd42(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x14) + 4) + -0x14 + param_1) = &PTR_LAB_1000f98c;
  FUN_1000cee8();
  return;
}



// Function: FUN_1000cd55 @ 0x1000cd55

undefined4 * __fastcall FUN_1000cd55(undefined4 *param_1)

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
  *param_1 = &PTR_FUN_1000f9b0;
  param_1[2] = 4;
  param_1[10] = 6;
  *(undefined1 *)(param_1 + 0xb) = 0x20;
  FUN_1000d2db((LPCRITICAL_SECTION)(param_1 + 0xe));
  iVar1 = DAT_100297b8;
  DAT_100297b8 = DAT_100297b8 + 1;
  if (iVar1 == 0) {
    FUN_1000d2db((LPCRITICAL_SECTION)&DAT_10029780);
  }
  return param_1;
}



// Function: FUN_1000cdb3 @ 0x1000cdb3

undefined4 * __thiscall FUN_1000cdb3(void *this,byte param_1)

{
  FUN_1000cdcf(this);
  if ((param_1 & 1) != 0) {
    FUN_1000d72d(this);
  }
  return this;
}



// Function: FUN_1000cdcf @ 0x1000cdcf

void __fastcall FUN_1000cdcf(undefined4 *param_1)

{
  param_1[0xd] = 0xffffffff;
  *param_1 = &PTR_FUN_1000f9b0;
  DAT_100297b8 = DAT_100297b8 + -1;
  if (DAT_100297b8 == 0) {
    FUN_1000d2e6((LPCRITICAL_SECTION)&DAT_10029780);
  }
  FUN_1000d2e6((LPCRITICAL_SECTION)(param_1 + 0xe));
  if ((param_1[7] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  param_1[2] = 4;
  return;
}



// Function: FUN_1000ce19 @ 0x1000ce19

void __thiscall FUN_1000ce19(void *this,int param_1)

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



// Function: FUN_1000ce73 @ 0x1000ce73

int * FUN_1000ce73(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000da78();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000f9c4;
    extraout_ECX[3] = (int)&DAT_1000f9bc;
    FUN_1000cd55(extraout_ECX + 5);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  FUN_1000d332();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_1000d407();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000f9b8;
  return extraout_ECX;
}



// Function: FUN_1000cee8 @ 0x1000cee8

void FUN_1000cee8(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_1000da78();
  iVar1 = *(int *)(extraout_ECX + -0x14);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined ***)(*(int *)(iVar1 + 4) + -0x14 + extraout_ECX) = &PTR_LAB_1000f9b8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1000d46c((-(uint)(extraout_ECX != 0x14) & extraout_ECX - 8U) + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1000d3a8(extraout_ECX - 8U);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// Function: FUN_1000cf35 @ 0x1000cf35

undefined4 * __fastcall FUN_1000cf35(undefined4 *param_1)

{
  FUN_1000d47b(param_1);
  param_1[0x14] = 0;
  param_1[0x13] = 0xffffffff;
  *param_1 = &PTR_FUN_1000f9e8;
  return param_1;
}



// Function: FUN_1000cf4f @ 0x1000cf4f

undefined * __thiscall FUN_1000cf4f(void *this,byte param_1)

{
  FUN_1000cf6b();
  if ((param_1 & 1) != 0) {
    FUN_1000d72d(this);
  }
  return this;
}



// Function: FUN_1000cf6b @ 0x1000cf6b

void FUN_1000cf6b(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000da78();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = (int)&PTR_FUN_1000f9e8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[0xc] < 0) {
    FUN_1000d2f1((LPCRITICAL_SECTION)(extraout_ECX + 0xd));
  }
  if (extraout_ECX[0x14] == 0) {
    FUN_1000d19c((int)extraout_ECX);
  }
  else {
    FUN_1000cfc2(extraout_ECX);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1000d4d6(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// Function: FUN_1000cfc2 @ 0x1000cfc2

int * __fastcall FUN_1000cfc2(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x13] != -1) {
    if (param_1[0xc] < 0) {
      FUN_1000d2f1((LPCRITICAL_SECTION)(param_1 + 0xd));
    }
    iVar1 = (**(code **)(*param_1 + 4))();
    iVar2 = FUN_1000c5f1(param_1[0x13]);
    if ((iVar2 != -1) && (iVar1 != -1)) {
      param_1[0x13] = -1;
      if (-1 < param_1[0xc]) {
        return param_1;
      }
      FUN_1000d2fc((LPCRITICAL_SECTION)(param_1 + 0xd));
      return param_1;
    }
    if (param_1[0xc] < 0) {
      FUN_1000d2fc((LPCRITICAL_SECTION)(param_1 + 0xd));
    }
  }
  return (int *)0x0;
}



// Function: FUN_1000d025 @ 0x1000d025

undefined4 __thiscall FUN_1000d025(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000d63e(this);
  if ((iVar1 != -1) && (iVar1 = FUN_1000d19c((int)this), iVar1 != -1)) {
    if (*(int *)((int)this + 8) == 0) {
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x14);
    }
    if (param_1 != 0xffffffff) {
      if ((*(int *)((int)this + 8) == 0) &&
         (*(uint *)((int)this + 0x1c) < *(uint *)((int)this + 0x20))) {
        FUN_1000d096(this,param_1);
      }
      else {
        iVar1 = FUN_10008e78(*(uint *)((int)this + 0x4c),(char *)&param_1,1);
        if (iVar1 != 1) {
          return 0xffffffff;
        }
      }
    }
    return 1;
  }
  return 0xffffffff;
}



// Function: FUN_1000d096 @ 0x1000d096

uint __thiscall FUN_1000d096(void *this,uint param_1)

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



// Function: FUN_1000d0b8 @ 0x1000d0b8

uint __fastcall FUN_1000d0b8(int *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  iVar3 = FUN_1000d148((int)param_1);
  if (iVar3 != 0) {
    return (uint)*(byte *)param_1[10];
  }
  iVar3 = FUN_1000d63e(param_1);
  if ((iVar3 != -1) && (iVar3 = FUN_1000d19c((int)param_1), iVar3 != -1)) {
    if (param_1[2] == 0) {
      pcVar1 = (char *)param_1[4];
      if (pcVar1 < (char *)param_1[5]) {
        pcVar4 = (char *)param_1[5] + -(int)pcVar1;
      }
      else {
        pcVar4 = (char *)0x0;
      }
      iVar3 = FUN_1000da97(param_1[0x13],pcVar1,pcVar4);
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
      iVar3 = FUN_1000da97(param_1[0x13],(char *)((int)&uStack_8 + 3),(char *)0x1);
      if (0 < iVar3) {
        return (uint)uStack_8 >> 0x18;
      }
    }
  }
  return 0xffffffff;
}



// Function: FUN_1000d148 @ 0x1000d148

int __fastcall FUN_1000d148(int param_1)

{
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
    return *(uint *)(param_1 + 0x2c) - *(uint *)(param_1 + 0x28);
  }
  return 0;
}



// Function: FUN_1000d19c @ 0x1000d19c

undefined4 __fastcall FUN_1000d19c(int param_1)

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
       (uVar2 = FUN_10008e78(*(uint *)(param_1 + 0x4c),pcVar5,uVar6), uVar2 != uVar6)) {
      if (0 < (int)uVar2) {
        if (*(int *)(param_1 + 0x20) != 0) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar2;
        }
        FUN_100070b0(*(undefined4 **)(param_1 + 0x18),
                     (undefined4 *)(uVar2 + (int)*(undefined4 **)(param_1 + 0x18)),uVar6 - uVar2);
      }
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar3 = FUN_1000d148(param_1);
    if (0 < iVar3) {
      uVar6 = *(uint *)(param_1 + 0x4c);
      bVar1 = *(byte *)((&DAT_1002aa40)[(int)uVar6 >> 5] + 4 + (uVar6 & 0x1f) * 0x24);
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
      DVar4 = FUN_10008da0(uVar6,-iVar3,1);
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



// Function: FUN_1000d277 @ 0x1000d277

void * __thiscall FUN_1000d277(void *this,int param_1,int param_2)

{
  if ((*(int *)((int)this + 0x4c) == -1) || (*(int *)((int)this + 0x14) == 0)) {
    if ((param_1 == 0) || (param_2 < 1)) {
      *(undefined4 *)((int)this + 8) = 1;
    }
    else {
      if (*(int *)((int)this + 0x30) < 0) {
        FUN_1000d2f1((LPCRITICAL_SECTION)((int)this + 0x34));
      }
      FUN_1000d689(this,param_1,param_1 + param_2,0);
      if (*(int *)((int)this + 0x30) < 0) {
        FUN_1000d2fc((LPCRITICAL_SECTION)((int)this + 0x34));
      }
    }
  }
  else {
    this = (void *)0x0;
  }
  return this;
}



// Function: FUN_1000d2db @ 0x1000d2db

void __cdecl FUN_1000d2db(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return;
}



// Function: FUN_1000d2e6 @ 0x1000d2e6

void __cdecl FUN_1000d2e6(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}



// Function: FUN_1000d2f1 @ 0x1000d2f1

void __cdecl FUN_1000d2f1(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}



// Function: FUN_1000d2fc @ 0x1000d2fc

void __cdecl FUN_1000d2fc(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}



// Function: FUN_1000d332 @ 0x1000d332

int * FUN_1000d332(void)

{
  uint *puVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000da78();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000fa1c;
    FUN_1000cd55(extraout_ECX + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000fa18;
  FUN_1000ce19((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  puVar1 = (uint *)(*(int *)(*extraout_ECX + 4) + 0x24 + (int)extraout_ECX);
  *puVar1 = *puVar1 | 1;
  extraout_ECX[2] = 0;
  extraout_ECX[1] = 0;
  return extraout_ECX;
}



// Function: FUN_1000d3a8 @ 0x1000d3a8

void __fastcall FUN_1000d3a8(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0xc) + 4) + -0xc + param_1) = &PTR_LAB_1000fa18;
  return;
}



// Function: FUN_1000d3b7 @ 0x1000d3b7

int __thiscall FUN_1000d3b7(void *this,char param_1)

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



// Function: FUN_1000d407 @ 0x1000d407

int * FUN_1000d407(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000da78();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000fa2c;
    FUN_1000cd55(extraout_ECX + 2);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000fa28;
  FUN_1000ce19((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),iVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[1] = 0;
  return extraout_ECX;
}



// Function: FUN_1000d46c @ 0x1000d46c

void __fastcall FUN_1000d46c(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -8) + 4) + -8 + param_1) = &PTR_LAB_1000fa28;
  return;
}



// Function: FUN_1000d47b @ 0x1000d47b

undefined4 * __fastcall FUN_1000d47b(undefined4 *param_1)

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
  *param_1 = &PTR_FUN_1000fa38;
  FUN_1000d2db((LPCRITICAL_SECTION)(param_1 + 0xd));
  return param_1;
}



// Function: FUN_1000d4ba @ 0x1000d4ba

undefined4 * __thiscall FUN_1000d4ba(void *this,byte param_1)

{
  FUN_1000d4d6(this);
  if ((param_1 & 1) != 0) {
    FUN_1000d72d(this);
  }
  return this;
}



// Function: FUN_1000d4d6 @ 0x1000d4d6

void __fastcall FUN_1000d4d6(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000fa38;
  FUN_1000d2e6((LPCRITICAL_SECTION)(param_1 + 0xd));
  FUN_1000d627((int)param_1);
  if ((param_1[1] != 0) && ((undefined *)param_1[4] != (undefined *)0x0)) {
    FUN_1000d72d((undefined *)param_1[4]);
  }
  return;
}



// Function: FUN_1000d53a @ 0x1000d53a

int __thiscall FUN_1000d53a(void *this,undefined1 *param_1,int param_2)

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



// Function: FUN_1000d590 @ 0x1000d590

int __thiscall FUN_1000d590(void *this,undefined4 *param_1,uint param_2)

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
        FUN_100087b0(param_1,*(undefined4 **)((int)this + 0x28),uVar3);
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



// Function: FUN_1000d627 @ 0x1000d627

undefined4 __fastcall FUN_1000d627(int param_1)

{
  if ((*(uint *)(param_1 + 0x2c) <= *(uint *)(param_1 + 0x28)) &&
     (*(uint *)(param_1 + 0x1c) <= *(uint *)(param_1 + 0x18))) {
    return 0;
  }
  return 0xffffffff;
}



// Function: FUN_1000d63e @ 0x1000d63e

int __fastcall FUN_1000d63e(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] == 0) && (param_1[4] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x28))();
    return (-(uint)(iVar1 != -1) & 2) - 1;
  }
  return 0;
}



// Function: FUN_1000d65c @ 0x1000d65c

undefined4 __fastcall FUN_1000d65c(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x200);
  if (pvVar1 == (void *)0x0) {
    return 0xffffffff;
  }
  FUN_1000d689(param_1,pvVar1,(int)pvVar1 + 0x200,1);
  return 1;
}



// Function: FUN_1000d689 @ 0x1000d689

void __thiscall FUN_1000d689(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(int *)((int)this + 4) != 0) && (*(undefined **)((int)this + 0x10) != (undefined *)0x0)) {
    FUN_1000d72d(*(undefined **)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}



// Function: FUN_1000d6d1 @ 0x1000d6d1

int __thiscall FUN_1000d6d1(void *this,char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(uint *)((int)this + 0x24) < *(uint *)((int)this + 0x28)) {
    iVar2 = FUN_1000d3b7(this,param_1);
  }
  else {
    iVar2 = 1;
    iVar3 = (**(code **)(*(int *)this + 0xc))(0xffffffff,1);
    if (iVar3 == -1) {
      iVar2 = -1;
    }
    else if ((*(int *)((int)this + 8) == 0) && (*(int *)((int)this + 0x2c) != 0)) {
      puVar1 = *(undefined4 **)((int)this + 0x28);
      FUN_100070b0((undefined4 *)((int)puVar1 + 1),puVar1,
                   (*(int *)((int)this + 0x2c) - (int)puVar1) - 1);
      **(undefined1 **)((int)this + 0x28) = (char)iVar2;
    }
  }
  return iVar2;
}



// Function: FUN_1000d72d @ 0x1000d72d

void __cdecl FUN_1000d72d(undefined *param_1)

{
  FUN_10008ae5(param_1);
  return;
}



// Function: FUN_1000d73e @ 0x1000d73e

void __fastcall FUN_1000d73e(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_10007509(0x1b);
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_10008ae5((undefined *)param_1[1]);
  }
  FUN_1000756a(0x1b);
  return;
}



// Function: FUN_1000d767 @ 0x1000d767

undefined4 * __thiscall FUN_1000d767(void *this,byte param_1)

{
  FUN_1000d73e(this);
  if ((param_1 & 1) != 0) {
    FUN_1000d72d(this);
  }
  return this;
}



// Function: operator_new @ 0x1000d783

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



// Function: FUN_1000d791 @ 0x1000d791

void FUN_1000d791(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000d7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000d7c5 @ 0x1000d7c5

void FUN_1000d7c5(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000d7ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000d7cc @ 0x1000d7cc

void FUN_1000d7cc(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000d7d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000d7d3 @ 0x1000d7d3

void FUN_1000d7d3(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000d7fb,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// Function: FUN_1000d822 @ 0x1000d822

undefined4 __cdecl
FUN_1000d822(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_1000dcde(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



// Function: FUN_1000d858 @ 0x1000d858

undefined4 __cdecl
FUN_1000d858(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_1000d8ac;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// Function: FUN_1000d8ac @ 0x1000d8ac

void __cdecl FUN_1000d8ac(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_1000dcde(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



// Function: FUN_1000d8d1 @ 0x1000d8d1

undefined4 __cdecl
FUN_1000d8d1(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_28 = FUN_1000d987;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x1000d959;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_100056f9();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// Function: FUN_1000d987 @ 0x1000d987

undefined4 __cdecl FUN_1000d987(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_1000dcde(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1000d7d3(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1000d9f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// Function: FUN_1000d9fc @ 0x1000d9fc

int __cdecl FUN_1000d9fc(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

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
      FUN_1000e5ad();
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
    FUN_1000e5ad();
  }
  return iVar1 + uVar5 * 0x14;
}



// Function: FUN_1000da78 @ 0x1000da78

void FUN_1000da78(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}



// Function: FUN_1000da97 @ 0x1000da97

int __cdecl FUN_1000da97(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1002ab40) &&
     ((*(byte *)((&DAT_1002aa40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000b390(param_1);
    iVar1 = FUN_1000dafc(param_1,param_2,param_3);
    FUN_1000b3ef(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000b2bd();
  *pDVar2 = 9;
  pDVar2 = FUN_1000b2c6();
  *pDVar2 = 0;
  return -1;
}



// Function: FUN_1000dafc @ 0x1000dafc

int __cdecl FUN_1000dafc(uint param_1,char *param_2,char *param_3)

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
    piVar1 = &DAT_1002aa40 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_1002aa40)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_1002aa40)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
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
          pDVar7 = FUN_1000b2bd();
          *pDVar7 = 9;
          pDVar7 = FUN_1000b2c6();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_1000b24a(DVar6);
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
                goto LAB_1000dc87;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_1000dca1:
                *pcVar8 = '\r';
LAB_1000dca4:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_1000dc87:
                  *pcVar8 = '\n';
                  goto LAB_1000dca4;
                }
                FUN_10008e05(param_1,-1,1);
                if (local_5 != '\n') goto LAB_1000dca1;
              }
              else {
                if (local_5 == '\n') goto LAB_1000dc87;
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



// Function: FUN_1000dcde @ 0x1000dcde

undefined4 __cdecl
FUN_1000dcde(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_1000e5ad();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_1000dd79(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_1000e033((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// Function: FUN_1000dd79 @ 0x1000dd79

void __cdecl
FUN_1000dd79(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
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
    FUN_1000e5ad();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_100056f9();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_100056f9();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_100056f9();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_1000e667(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_1000e5ad();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_1000df01;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_1000e5ad();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_1000d9fc(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_1000e46b((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_1000dfd6(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1000e0e7(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                iVar5 = local_14;
                goto LAB_1000dee1;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_1000dee1:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_1000df01:
  if (param_6 == '\0') {
    FUN_1000df2c(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_1000e54c();
  return;
}



// Function: FUN_1000df2c @ 0x1000df2c

void __cdecl
FUN_1000df2c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_100056f9();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_1000d8d1(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_1000d9fc(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1000e0e7(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



// Function: FUN_1000dfd6 @ 0x1000dfd6

undefined4 __cdecl FUN_1000dfd6(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1000e02d:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1000e007:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1000e02d;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1000e007;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000e033 @ 0x1000e033

void __cdecl FUN_1000e033(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000fa70;
  puStack_10 = &LAB_10008cc8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_1000e5ad();
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



// Function: FUN_1000e0e7 @ 0x1000e0e7

void __cdecl
FUN_1000e0e7(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_1000e2a7((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_1000d7d3(param_10,param_1);
  FUN_1000e033((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_1000e162((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000d791(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// Function: FUN_1000e162 @ 0x1000e162

undefined4 __cdecl
FUN_1000e162(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000fa80;
  puStack_10 = &LAB_10008cc8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_100056f9();
  FUN_100056f9();
  pDVar1 = FUN_100056f9();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_100056f9();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_1000d858(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_1000e22f();
  ExceptionList = local_14;
  return uVar2;
}



// Function: FUN_1000e22f @ 0x1000e22f

void FUN_1000e22f(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_100056f9();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_100056f9();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_1000e46b((int)unaff_EDI);
  }
  return;
}



// Function: FUN_1000e2a7 @ 0x1000e2a7

void __cdecl FUN_1000e2a7(int param_1,int param_2,byte *param_3,byte *param_4)

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
  
  puStack_c = &DAT_1000fa98;
  puStack_10 = &LAB_10008cc8;
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
        bVar2 = FUN_1000e667(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_1000e683(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_1000e4d2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_100070b0(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_1000e667(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_1000e683(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_1000e69f(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_1000e4d2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_1000d7cc(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_1000e4d2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1000d7c5(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_1000e667(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_1000e683(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_100070b0(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_1000e335;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_1000e667(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_1000e683(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_1000e335:
      iVar3 = FUN_1000e4d2(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_1000e5ad();
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000e46b @ 0x1000e46b

void __cdecl FUN_1000e46b(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000faa8;
  puStack_10 = &LAB_10008cc8;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_1000d7c5(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



// Function: FUN_1000e4d2 @ 0x1000e4d2

int __cdecl FUN_1000e4d2(int param_1,int *param_2)

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



// Function: __CallSettingFrame@12 @ 0x1000e500

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



// Function: FUN_1000e54c @ 0x1000e54c

void FUN_1000e54c(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000fab8;
  puStack_10 = &LAB_10008cc8;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_100056f9();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_100056f9();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_1000e6b7();
  return;
}



// Function: FUN_1000e5ad @ 0x1000e5ad

void FUN_1000e5ad(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000fad0;
  puStack_10 = &LAB_10008cc8;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_100148f0 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_100148f0)();
  }
  local_8 = 0xffffffff;
  FUN_1000e54c();
  return;
}



// Function: FUN_1000e603 @ 0x1000e603

int FUN_1000e603(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_1000e54c();
    return iVar3;
  }
  if ((DAT_100297c0 != (FARPROC)0x0) &&
     (bVar2 = FUN_1000e69f(DAT_100297c0), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_100297c0)(param_1);
    return iVar3;
  }
  return 0;
}



// Function: FUN_1000e667 @ 0x1000e667

bool __cdecl FUN_1000e667(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_1000e683 @ 0x1000e683

bool __cdecl FUN_1000e683(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_1000e69f @ 0x1000e69f

bool __cdecl FUN_1000e69f(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



// Function: FUN_1000e6b7 @ 0x1000e6b7

void FUN_1000e6b7(void)

{
  FUN_10006579(10);
  FUN_1000a3ee((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// Function: Unwind@1000e6d0 @ 0x1000e6d0

void Unwind_1000e6d0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000cdcf((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



// Function: Unwind@1000e6ea @ 0x1000e6ea

void Unwind_1000e6ea(void)

{
  int unaff_EBP;
  
  FUN_1000d72d(*(undefined **)(unaff_EBP + 8));
  return;
}



// Function: Unwind@1000e700 @ 0x1000e700

void Unwind_1000e700(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000cdcf((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14));
    return;
  }
  return;
}



// Function: Unwind@1000e71a @ 0x1000e71a

void Unwind_1000e71a(void)

{
  int unaff_EBP;
  
  FUN_1000d3a8(*(int *)(unaff_EBP + -0x14) + 0xc);
  return;
}



// Function: Unwind@1000e730 @ 0x1000e730

void Unwind_1000e730(void)

{
  int unaff_EBP;
  
  FUN_1000d3a8(*(int *)(unaff_EBP + -0x10) + -8);
  return;
}



// Function: Unwind@1000e748 @ 0x1000e748

void Unwind_1000e748(void)

{
  int unaff_EBP;
  
  FUN_1000d4d6(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



// Function: Unwind@1000e75c @ 0x1000e75c

void Unwind_1000e75c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000cdcf((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc));
    return;
  }
  return;
}



// Function: Unwind@1000e780 @ 0x1000e780

void Unwind_1000e780(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_1000cdcf((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8));
    return;
  }
  return;
}




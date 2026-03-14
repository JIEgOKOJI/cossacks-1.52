// Decompiled from: Mission.dll

// Function: FUN_100015e0 @ 0x100015e0

void __cdecl FUN_100015e0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_88 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30 [20];
  int local_1c;
  int local_18;
  undefined4 uStack_8;
  
  puVar2 = local_88;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_38 = 0;
  local_34 = 0;
  GetTotalAmount0(param_1);
  local_3c = __chkesp();
  if (0 < local_3c) {
    local_40 = 0;
    local_44 = 0;
    for (local_48 = 0; local_48 < local_3c; local_48 = local_48 + 1) {
      GetUnitInfo(param_1,local_48,local_30);
      __chkesp();
      local_40 = local_40 + local_1c;
      local_44 = local_44 + local_18;
    }
    local_38 = local_40 / local_3c;
    local_34 = local_44 / local_3c;
  }
  uStack_8 = 0x100016af;
  __chkesp();
  return;
}



// Function: FUN_100016f0 @ 0x100016f0

void __cdecl FUN_100016f0(undefined4 param_1,ushort param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8c [16];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30 [18];
  ushort local_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  int local_18;
  undefined4 uStack_8;
  
  puVar2 = local_8c;
  for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_38 = 0;
  local_34 = 0;
  GetTotalAmount0(param_1);
  local_3c = __chkesp();
  local_40 = 0;
  if (0 < local_3c) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_3c; local_4c = local_4c + 1) {
      GetUnitInfo(param_1,local_4c,local_30);
      __chkesp();
      if ((local_1e & 0xff) == (param_2 & 0xff)) {
        local_44 = local_44 + CONCAT22(uStack_1a,uStack_1c);
        local_48 = local_48 + local_18;
        local_40 = local_40 + 1;
      }
    }
    if (0 < local_40) {
      local_38 = local_44 / local_40;
      local_34 = local_48 / local_40;
    }
  }
  uStack_8 = 0x100017ee;
  __chkesp();
  return;
}



// Function: FUN_10001840 @ 0x10001840

void __cdecl FUN_10001840(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined8 local_14;
  undefined1 local_c [4];
  undefined4 uStack_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  RegisterDynGroup(local_c);
  __chkesp();
  SelectUnitsInZone(param_1,param_2,0);
  __chkesp();
  SaveSelectedUnits(param_2,local_c,0);
  __chkesp();
  local_14 = thunk_FUN_100016f0(local_c,(ushort)CONCAT31((int3)((uint)extraout_EDX >> 8),param_3));
  uStack_8 = 0x100018cf;
  __chkesp();
  return;
}



// Function: FUN_10001900 @ 0x10001900

void __cdecl FUN_10001900(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined8 local_14;
  undefined1 local_c [4];
  undefined4 uStack_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  RegisterDynGroup(local_c);
  __chkesp();
  SelectUnitsInZone(param_1,param_2,0);
  __chkesp();
  SaveSelectedUnits(param_2,local_c,0);
  __chkesp();
  local_14 = thunk_FUN_100015e0(local_c);
  uStack_8 = 0x1000198b;
  __chkesp();
  return;
}



// Function: FUN_100019c0 @ 0x100019c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100019c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  longlong lVar4;
  undefined4 local_80 [16];
  double local_40;
  double local_38;
  int local_30;
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = local_80;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_3;
  local_c = param_4;
  local_10 = param_1;
  local_14 = param_2;
  local_2c = (void *)(param_2 - param_4);
  local_30 = param_1 - param_3;
  fVar3 = (float10)FUN_100098d4(local_2c,SUB84((double)(int)local_2c / (double)local_30,0));
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = _DAT_1003a040 + local_1c;
  }
  lVar4 = __ftol();
  local_20 = (undefined4)lVar4;
  local_38 = (double)param_5;
  FUN_10009824(local_1c._4_4_,SUB84(local_1c,0));
  lVar4 = __ftol();
  local_28 = (undefined4)lVar4;
  local_40 = (double)param_5;
  FUN_10009774((void *)local_1c,(int)(void *)local_1c);
  lVar4 = __ftol();
  local_24 = (undefined4)lVar4;
  __chkesp();
  return;
}



// Function: FUN_10001ae0 @ 0x10001ae0

void __fastcall FUN_10001ae0(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined1 *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  local_8 = param_1;
  thunk_FUN_10002370(param_1,8,3,0x15,0,200,3,0x50);
  thunk_FUN_10002370(local_8,8,3,0x18,0,200,3,0x50);
  thunk_FUN_10002370(local_8,8,2,0x14,0,100,3,0x32);
  thunk_FUN_10002370(local_8,8,2,8,0,0x5a,3,0x32);
  thunk_FUN_10002370(local_8,8,2,0x14,0,100,3,0x32);
  thunk_FUN_10002370(local_8,8,2,0x16,0,0x1e,3,0x32);
  thunk_FUN_10002370(local_8,8,3,0x17,0,1000,3,0x5a);
  thunk_FUN_10002370(local_8,8,3,0xf,0,1000,3,0x5a);
  thunk_FUN_10002370(local_8,0x15,2,0xf,0,300,3,0x1e);
  thunk_FUN_10002370(local_8,0x15,2,0x14,0,300,3,0x1e);
  thunk_FUN_10002370(local_8,0x15,2,0x15,0,300,3,0x1e);
  thunk_FUN_10002370(local_8,0x15,2,0x18,0,300,3,0x1e);
  thunk_FUN_10002370(local_8,0x15,2,0x16,0,300,3,0x1e);
  thunk_FUN_10002370(local_8,0x15,2,0xb,0,300,3,0x1e);
  thunk_FUN_10002370(local_8,0x15,2,8,0,300,3,0x1e);
  thunk_FUN_10002370(local_8,0x15,3,0x17,0,1000,3,0x5a);
  thunk_FUN_10002370(local_8,0x15,2,10,0,500,3,0x1e);
  thunk_FUN_10002370(local_8,0x15,1,0x16,1,0x14,4,0x50);
  thunk_FUN_10002370(local_8,0x15,1,0x14,1,10,4,0x50);
  thunk_FUN_10002370(local_8,0x15,2,8,1,0x1e,4,0x50);
  thunk_FUN_10002370(local_8,0x15,2,0x15,1,100,4,0x50);
  thunk_FUN_10002370(local_8,0x14,2,0x14,0,500,3,0x50);
  thunk_FUN_10002370(local_8,0x14,2,0x16,0,500,3,0x50);
  thunk_FUN_10002370(local_8,0x14,2,0x15,0,500,3,0x50);
  thunk_FUN_10002370(local_8,0x14,3,0x17,0,1000,3,0x5a);
  thunk_FUN_10002370(local_8,0xf,2,0x15,0,300,3,0x50);
  thunk_FUN_10002370(local_8,0xf,2,0x14,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0xf,2,8,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0xf,2,0x14,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0xf,2,0x16,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0xf,2,0x17,0,300,3,0x5a);
  thunk_FUN_10002370(local_8,0xf,2,0xf,0,300,3,0x5a);
  thunk_FUN_10002370(local_8,0xf,2,0x18,0,300,3,0x1e);
  thunk_FUN_10002370(local_8,0xb,2,0x15,0,300,3,0x50);
  thunk_FUN_10002370(local_8,0xb,2,0x18,0,300,3,0x50);
  thunk_FUN_10002370(local_8,0xb,2,0x14,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0xb,2,8,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0xb,2,0x14,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0xb,2,0x16,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0xb,2,0x17,0,300,3,0x5a);
  thunk_FUN_10002370(local_8,0xb,2,0xf,0,300,3,0x5a);
  thunk_FUN_10002370(local_8,0xb,2,0xb,0,300,3,0x1e);
  thunk_FUN_10002370(local_8,0xb,2,10,0,500,3,0x1e);
  thunk_FUN_10002370(local_8,0x18,2,0x15,0,300,3,0x50);
  thunk_FUN_10002370(local_8,0x18,2,0x18,0,300,3,0x50);
  thunk_FUN_10002370(local_8,0x18,2,0x14,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0x18,2,8,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0x18,2,0x14,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0x18,2,0x16,0,300,3,0x32);
  thunk_FUN_10002370(local_8,0x18,2,0x17,0,300,3,0x5a);
  thunk_FUN_10002370(local_8,0x18,2,0xf,0,300,3,0x5a);
  thunk_FUN_10002370(local_8,0x16,2,0x15,0,500,3,0x50);
  thunk_FUN_10002370(local_8,0x16,2,0x18,0,500,3,0x50);
  thunk_FUN_10002370(local_8,0x16,2,0x14,0,500,3,0x32);
  thunk_FUN_10002370(local_8,0x16,2,8,0,500,3,0x32);
  thunk_FUN_10002370(local_8,0x16,2,0xb,0,500,3,0x32);
  thunk_FUN_10002370(local_8,0x16,2,0x16,0,500,3,0x32);
  thunk_FUN_10002370(local_8,0x16,2,0x17,0,500,3,0x5a);
  thunk_FUN_10002370(local_8,0x16,2,0xf,0,500,3,0x5a);
  thunk_FUN_10002370(local_8,0x16,2,0xb,0,500,3,0x1e);
  thunk_FUN_10002370(local_8,0x16,2,10,0,500,2,0x1e);
  thunk_FUN_10002370(local_8,0x20,3,8,1,10,4,0x32);
  local_8 = (undefined1 *)0x1000213c;
  __chkesp();
  return;
}



// Function: FUN_100022e0 @ 0x100022e0

undefined1 * __thiscall
FUN_100022e0(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined2 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)this = param_1;
  *(undefined1 *)((int)this + 1) = param_2;
  *(undefined1 *)((int)this + 2) = param_3;
  *(undefined2 *)((int)this + 3) = param_5;
  *(undefined1 *)((int)this + 5) = param_6;
  *(undefined1 *)((int)this + 6) = param_7;
  *(undefined1 *)((int)this + 7) = param_4;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}



// Function: FUN_10002370 @ 0x10002370

void __thiscall
FUN_10002370(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined2 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_60 [16];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100280ab;
  local_10 = ExceptionList;
  puVar2 = local_60;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_14 = this;
  if (*(int *)((int)this + 8) == 0) {
    ExceptionList = &local_10;
    local_1c = (void *)FUN_10009af0((void *)0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (undefined1 *)0x0;
    }
    else {
      local_20 = thunk_FUN_100022e0(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(undefined1 **)((int)local_14 + 8) = local_20;
  }
  else {
    ExceptionList = &local_10;
    thunk_FUN_10002370(*(void **)((int)this + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  ExceptionList = local_10;
  local_8 = 0x1000244d;
  __chkesp();
  return;
}



// Function: FUN_10002490 @ 0x10002490

void __thiscall FUN_10002490(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar5 = local_4c;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_c = 0;
  pvVar4 = (void *)(uint)*(byte *)this;
  pvVar1 = this;
  if (pvVar4 == (void *)(param_1 & 0xff)) {
    pvVar4 = (void *)(uint)*(byte *)((int)this + 1);
    if (pvVar4 == (void *)(param_2 & 0xff)) {
      pvVar4 = (void *)(uint)*(byte *)((int)this + 2);
      if (pvVar4 == (void *)(param_3 & 0xff)) {
        pvVar4 = (void *)0x0;
        if ((*(char *)((int)this + 7) != '\0') &&
           (pvVar4 = (void *)(uint)*(ushort *)((int)this + 3), pvVar4 < (void *)(param_4 & 0xffff)))
        {
LAB_1000253a:
          local_c = (uint)*(byte *)((int)this + 5) * 100 + (uint)*(byte *)((int)this + 6);
          goto LAB_1000257c;
        }
        pvVar1 = (void *)(uint)*(byte *)((int)this + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(uint)*(ushort *)((int)this + 3);
          if (pvVar4 < pvVar1) goto LAB_1000253a;
        }
      }
    }
  }
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = CONCAT22((short)((uint)pvVar1 >> 0x10),(undefined2)param_4);
    local_8 = this;
    local_c = thunk_FUN_10002490(*(void **)((int)this + 8),
                                 CONCAT31((int3)(uVar2 >> 8),(undefined1)param_1),
                                 CONCAT31((int3)((uint)this >> 8),(undefined1)param_2),
                                 CONCAT31((int3)((uint)pvVar4 >> 8),(undefined1)param_3),uVar2);
  }
LAB_1000257c:
  local_8 = (void *)0x1000258c;
  __chkesp();
  return;
}



// Function: FUN_100025e0 @ 0x100025e0

void __fastcall FUN_100025e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    local_10 = *(int *)(param_1 + 8);
    local_c = local_10;
    if (local_10 == 0) {
      local_14 = 0;
    }
    else {
      local_8 = param_1;
      local_14 = thunk_FUN_10002660(1);
    }
  }
  local_8 = 0x1000263e;
  __chkesp();
  return;
}



// Function: FUN_10002660 @ 0x10002660

void FUN_10002660(uint param_1)

{
  void *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = in_ECX;
  thunk_FUN_100025e0((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10009a40(local_8,local_8);
  }
  local_8 = (void *)0x100026ab;
  __chkesp();
  return;
}



// Function: FUN_100026d0 @ 0x100026d0

void __fastcall FUN_100026d0(int param_1)

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
  local_8 = param_1;
  RegisterDynGroup(param_1 + 0x20);
  __chkesp();
  local_8 = 0x10002716;
  __chkesp();
  return;
}



// Function: FUN_10002730 @ 0x10002730

uint * __thiscall FUN_10002730(void *this,uint *param_1,byte param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_54 [16];
  int local_14;
  uint local_10;
  undefined1 uStack_c;
  
  puVar3 = local_54;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_10 = (uint)param_2;
  uStack_c = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if ((&DAT_1003dd60)[local_14] == param_2) {
      uVar1 = *(undefined4 *)((int)this + local_14 * 4);
      local_10._1_3_ = (undefined3)uVar1;
      uStack_c = (undefined1)((uint)uVar1 >> 0x18);
      local_14 = 8;
    }
  }
  *param_1 = local_10;
  *(undefined1 *)(param_1 + 1) = uStack_c;
  return param_1;
}



// Function: FUN_100027e0 @ 0x100027e0

void __thiscall FUN_100027e0(void *this,undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_80 [16];
  int *local_40;
  undefined1 local_3c [18];
  char local_2a;
  int local_10;
  int local_c;
  void *local_8;
  
  iVar1 = -0x33333334;
  puVar4 = local_80;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_c = 0;
  while (local_c < 8) {
    *(undefined4 *)((int)this + local_c * 4) = 0;
    iVar1 = local_c + 1;
    local_c = iVar1;
  }
  local_8 = this;
  SelectUnitsInZone(param_1,CONCAT31((int3)((uint)iVar1 >> 8),param_2),0);
  __chkesp();
  SaveSelectedUnits(param_2,(int)local_8 + 0x20,0);
  __chkesp();
  GetTotalAmount0((int)local_8 + 0x20);
  local_10 = __chkesp();
  for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
    GetUnitInfo((int)local_8 + 0x20,local_c,local_3c);
    __chkesp();
    uVar2 = thunk_FUN_10002940(local_2a);
    local_40 = (int *)((int)local_8 + (uVar2 & 0xff) * 4);
    *local_40 = *local_40 + 1;
  }
  local_8 = (void *)0x100028ec;
  __chkesp();
  return;
}



// Function: FUN_10002940 @ 0x10002940

undefined4 FUN_10002940(char param_1)

{
  byte bVar1;
  undefined3 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_50 [16];
  byte local_10;
  byte local_c;
  
  uVar2 = 0xcccccc;
  puVar4 = local_50;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_c = 0;
  bVar1 = 0;
  while (bVar1 < 8) {
    uVar2 = 0;
    local_10 = bVar1;
    if ((&DAT_1003dd60)[bVar1] == param_1) {
      local_10 = 8;
      local_c = bVar1;
    }
    bVar1 = local_10 + 1;
  }
  return CONCAT31(uVar2,local_c);
}



// Function: FUN_100029d0 @ 0x100029d0

void FUN_100029d0(void)

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
  FUN_10002a10();
  uStack_8 = 0x100029fa;
  __chkesp();
  return;
}



// Function: FUN_10002a10 @ 0x10002a10

void FUN_10002a10(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_6c [16];
  undefined1 local_2c [36];
  undefined4 uStack_8;
  
  puVar1 = local_6c;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)thunk_FUN_100026d0((int)local_2c);
  puVar3 = &DAT_1003fd10;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = 0x10002a4b;
  __chkesp();
  return;
}



// Function: FUN_10002a60 @ 0x10002a60

void FUN_10002a60(void)

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
  FUN_10002aa0();
  FUN_10002ae0();
  uStack_8 = 0x10002a8f;
  __chkesp();
  return;
}



// Function: FUN_10002aa0 @ 0x10002aa0

void FUN_10002aa0(void)

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
  thunk_FUN_10001ae0(&DAT_1003fd00);
  uStack_8 = 0x10002acf;
  __chkesp();
  return;
}



// Function: FUN_10002ae0 @ 0x10002ae0

void FUN_10002ae0(void)

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
  FUN_1000a0a0(0x10002b30);
  uStack_8 = 0x10002b12;
  __chkesp();
  return;
}



// Function: FUN_10002b30 @ 0x10002b30

void FUN_10002b30(void)

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
  if ((DAT_1003fd38 & 1) == 0) {
    DAT_1003fd38 = DAT_1003fd38 | 1;
    thunk_FUN_100025e0(0x1003fd00);
  }
  uStack_8 = 0x10002b7c;
  __chkesp();
  return;
}



// Function: FUN_10002ba0 @ 0x10002ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002ba0(undefined4 param_1,undefined1 param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 local_98 [16];
  ushort local_58;
  undefined2 uStack_56;
  float local_54;
  int local_50;
  ushort local_4c;
  undefined2 uStack_4a;
  int local_48;
  ushort local_44;
  undefined2 uStack_42;
  int local_40;
  undefined1 local_3c [18];
  undefined1 local_2a;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  puVar4 = local_98;
  for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_c = local_c & 0xffff0000;
  GetTotalAmount0(param_1);
  local_10 = __chkesp();
  GetUnitInfo(param_1,0,local_3c);
  __chkesp();
  UnitsCenter(local_8,param_1,500);
  __chkesp();
  thunk_FUN_100027e0(&DAT_1003fd10,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)(&DAT_1003fd10)[local_40]) {
      uVar2 = ((&DAT_1003fd10)[local_40] * 100) / local_10;
      uVar1 = thunk_FUN_10002490(&DAT_1003fd00,CONCAT31((int3)(uVar2 >> 8),local_2a),1,
                                 CONCAT31((int3)((uint)(((&DAT_1003fd10)[local_40] * 100) % local_10
                                                       ) >> 8),(&DAT_1003dd60)[local_40]),uVar2);
      _local_44 = CONCAT22(uStack_42,uVar1);
      if ((local_c & 0xffff) / 100 < uVar1 / 100) {
        local_c = CONCAT22(local_c._2_2_,uVar1);
      }
      if (uVar1 / 100 == (local_c & 0xffff) / 100) {
        local_c = CONCAT22(local_c._2_2_,(short)(((local_c & 0xffff) + (uint)uVar1) / 2));
      }
    }
  }
  if ((local_c & 0xffff) == 0) {
    UnitsCenter(local_8,param_1,1000);
    __chkesp();
    thunk_FUN_100027e0(&DAT_1003fd10,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)(&DAT_1003fd10)[local_48]) {
        uVar2 = ((&DAT_1003fd10)[local_48] * 100) / local_10;
        uVar1 = thunk_FUN_10002490(&DAT_1003fd00,CONCAT31((int3)((uint)local_48 >> 8),local_2a),2,
                                   CONCAT31((int3)(uVar2 >> 8),(&DAT_1003dd60)[local_48]),uVar2);
        _local_4c = CONCAT22(uStack_4a,uVar1);
        if ((local_c & 0xffff) / 100 < uVar1 / 100) {
          local_c = CONCAT22(local_c._2_2_,uVar1);
        }
        if (uVar1 / 100 == (local_c & 0xffff) / 100) {
          local_c = CONCAT22(local_c._2_2_,(short)(((local_c & 0xffff) + (uint)uVar1) / 2));
        }
      }
    }
  }
  if ((local_c & 0xffff) == 0) {
    UnitsCenter(local_8,param_1,2000);
    __chkesp();
    thunk_FUN_100027e0(&DAT_1003fd10,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)(&DAT_1003fd10)[local_50]) {
        local_54 = ((float)(int)(&DAT_1003fd10)[local_50] * _DAT_1003a050) / (float)local_10;
        if (local_54 < _DAT_1003a04c) {
          local_54 = 1.0;
        }
        lVar5 = __ftol();
        uVar1 = thunk_FUN_10002490(&DAT_1003fd00,CONCAT31((int3)((uint)extraout_ECX >> 8),local_2a),
                                   3,CONCAT31((int3)((ulonglong)lVar5 >> 8),
                                              (&DAT_1003dd60)[local_50]),(uint)lVar5);
        _local_58 = CONCAT22(uStack_56,uVar1);
        if ((local_c & 0xffff) / 100 < uVar1 / 100) {
          local_c = CONCAT22(local_c._2_2_,uVar1);
        }
        if (uVar1 / 100 == (local_c & 0xffff) / 100) {
          local_c = CONCAT22(local_c._2_2_,(short)(((local_c & 0xffff) + (uint)uVar1) / 2));
        }
      }
    }
  }
  local_8 = 0x10002f5f;
  __chkesp();
  return;
}



// Function: FUN_10003060 @ 0x10003060

void FUN_10003060(void)

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
  FUN_100030a0();
  uStack_8 = 0x1000308a;
  __chkesp();
  return;
}



// Function: FUN_100030a0 @ 0x100030a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100030a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  _DAT_1003fcf8 = local_c;
  _DAT_1003fcfc = local_8;
  return;
}



// Function: FUN_100030e0 @ 0x100030e0

void __fastcall FUN_100030e0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  RegisterDynGroup(param_1);
  __chkesp();
  local_8 = 0x10003123;
  __chkesp();
  return;
}



// Function: FUN_10003140 @ 0x10003140

void __fastcall FUN_10003140(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined1 local_c;
  int local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  GetUnitsAmount1(param_1 + 0x10,param_1);
  iVar2 = __chkesp();
  GetTotalAmount0(local_8);
  iVar1 = __chkesp();
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = 0x100031ae;
  __chkesp();
  return;
}



// Function: FUN_100031d0 @ 0x100031d0

void __fastcall FUN_100031d0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_a4 [16];
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  int local_8;
  
  puVar4 = local_a4;
  for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_8 = param_1;
  if (param_1 == -0x10) {
    UnitsCenter(0,0xfffffff0,1000);
    __chkesp();
  }
  GetTotalAmount0(local_8);
  iVar3 = __chkesp();
  if (0 < iVar3) {
    UnitsCenter(local_8 + 8,local_8,1000);
    __chkesp();
    cVar1 = thunk_FUN_10003140(local_8);
    if (cVar1 == '\0') {
      GetUnitsAmount0(local_8 + 8,*(undefined1 *)(local_8 + 0x1e));
      iVar3 = __chkesp();
      if (iVar3 < 4) {
        SelectUnits(local_8,0);
        __chkesp();
        SelSendAndKill(*(undefined1 *)(local_8 + 0x1d),local_8 + 0x10,
                       *(undefined1 *)(local_8 + 0x18),0);
        __chkesp();
        goto LAB_10003642;
      }
    }
    uVar2 = thunk_FUN_10002ba0(local_8,*(undefined1 *)(local_8 + 0x1e));
    local_64 = (uVar2 & 0xffff) / 100 - 1;
    switch(local_64) {
    case 0:
      SelectUnits(local_8,0);
      __chkesp();
      SetStandGround(*(undefined1 *)(local_8 + 0x1d),1);
      __chkesp();
      break;
    case 1:
      SelectUnits(local_8,0);
      __chkesp();
      SelSendAndKill(*(undefined1 *)(local_8 + 0x1d),local_8 + 0x10,*(undefined1 *)(local_8 + 0x18),
                     0);
      __chkesp();
      break;
    case 2:
      AttackEnemyInZone(local_8,local_8 + 8,
                        CONCAT31((int3)((uint)local_64 >> 8),*(undefined1 *)(local_8 + 0x1e)));
      __chkesp();
      break;
    case 3:
      local_28 = thunk_FUN_10001840(local_8 + 8,*(undefined1 *)(local_8 + 0x1d),0x14);
      local_10 = local_28;
      if ((int)local_28 == 0) {
        local_30 = thunk_FUN_10001840(local_8 + 8,*(undefined1 *)(local_8 + 0x1d),0xf);
        local_10 = local_30;
      }
      bVar5 = (int)local_10 == 0;
      if (bVar5) {
        local_38 = thunk_FUN_10001840(local_8 + 8,*(undefined1 *)(local_8 + 0x1d),0xb);
        local_10 = local_38;
      }
      bVar5 = (int)local_10 == 0;
      if (bVar5) {
        local_40 = thunk_FUN_10001840(local_8 + 8,*(undefined1 *)(local_8 + 0x1d),0x16);
        local_10 = local_40;
      }
      local_48 = thunk_FUN_10001900(local_8 + 8,*(undefined1 *)(local_8 + 0x1e));
      local_18 = local_48;
      local_50 = thunk_FUN_100019c0((int)local_10,local_10._4_4_,(int)local_48,
                                    (int)((ulonglong)local_48 >> 0x20),400);
      local_20._0_2_ = (undefined2)local_50;
      *(undefined2 *)(local_8 + 8) = (undefined2)local_20;
      local_20._4_2_ = (undefined2)((ulonglong)local_50 >> 0x20);
      *(undefined2 *)(local_8 + 10) = local_20._4_2_;
      local_20 = local_50;
      SelectUnits(local_8,0);
      __chkesp();
      SelSendTo(*(undefined1 *)(local_8 + 0x1d),local_8 + 8,*(undefined1 *)(local_8 + 0x18),0);
      __chkesp();
      break;
    case 4:
      local_10._0_4_ = *(ushort *)(local_8 + 8) - 0x96;
      local_10._4_4_ = *(ushort *)(local_8 + 10) - 0x96;
      local_58 = thunk_FUN_10001900(local_8 + 8,0);
      local_18 = local_58;
      local_60 = thunk_FUN_100019c0((int)local_10,local_10._4_4_,(int)local_58,
                                    (int)((ulonglong)local_58 >> 0x20),800);
      local_20._0_2_ = (undefined2)local_60;
      *(undefined2 *)(local_8 + 8) = (undefined2)local_20;
      local_20._4_2_ = (undefined2)((ulonglong)local_60 >> 0x20);
      *(undefined2 *)(local_8 + 10) = local_20._4_2_;
      local_20 = local_60;
      SelectUnits(local_8,0);
      __chkesp();
      SelSendTo(*(undefined1 *)(local_8 + 0x1d),local_8 + 8,*(undefined1 *)(local_8 + 0x18),0);
      __chkesp();
      break;
    default:
      SelectUnits(local_8,0);
      __chkesp();
      SelSendAndKill(*(undefined1 *)(local_8 + 0x1d),local_8 + 0x10,*(undefined1 *)(local_8 + 0x18),
                     0);
      __chkesp();
    }
  }
LAB_10003642:
  local_8 = 0x10003652;
  __chkesp();
  return;
}



// Function: FUN_10003790 @ 0x10003790

void FUN_10003790(undefined4 param_1,int param_2)

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
  local_8 = 0x100037cd;
  __chkesp();
  return;
}



// Function: FUN_100037f0 @ 0x100037f0

void FUN_100037f0(void)

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
  FUN_10003830();
  uStack_8 = 0x1000381a;
  __chkesp();
  return;
}



// Function: FUN_10003830 @ 0x10003830

void FUN_10003830(void)

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
  thunk_FUN_100038d0(&DAT_1003ffa0,0x41,0x14,&LAB_100012a3);
  uStack_8 = 0x10003868;
  __chkesp();
  return;
}



// Function: FUN_10003880 @ 0x10003880

void __fastcall FUN_10003880(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  thunk_FUN_10008dc0(param_1);
  local_8 = 0x100038b5;
  __chkesp();
  return;
}



// Function: FUN_100038d0 @ 0x100038d0

void FUN_100038d0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

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
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*(code *)param_4)();
    __chkesp();
  }
  uStack_8 = 0x1000391e;
  __chkesp();
  return;
}



// Function: FUN_10003940 @ 0x10003940

void FUN_10003940(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  int local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  DVar1 = FUN_1000a160((int *)0x0);
  FUN_1000a110(DVar1);
  SetPlayerName(0,"RUSSIA");
  __chkesp();
  SetPlayerName(1,"BAVARIA");
  __chkesp();
  RegisterZone(&DAT_1003fe38,&DAT_1003a294);
  __chkesp();
  RegisterZone(&DAT_1003fdf8,&DAT_1003a290);
  __chkesp();
  RegisterZone(&DAT_1003fe00,&DAT_1003a28c);
  __chkesp();
  RegisterZone(&DAT_1003fe08,&DAT_1003a288);
  __chkesp();
  RegisterZone(&DAT_1003fe10,&DAT_1003a284);
  __chkesp();
  RegisterFormation(&DAT_1003fed0,"#ODIN");
  __chkesp();
  RegisterUnitType(&DAT_1003ff98,"FregatNEW(BA)");
  __chkesp();
  RegisterUnitType(&DAT_1003fea8,"Fregat(BA)");
  __chkesp();
  RegisterUnitType(&DAT_1003feb0,"KECH(BA)");
  __chkesp();
  RegisterUnitType(&DAT_1003feb8,"Linkor(BA)");
  __chkesp();
  RegisterUnitType(&DAT_1003fec0,"FregatNEW(BA)");
  __chkesp();
  RegisterUnitType(&DAT_1003fe60,"Yahta(RU)");
  __chkesp();
  RegisterUnitType(&DAT_1003fe68,"Linkor(RU)");
  __chkesp();
  RegisterUnitType(&DAT_1003fe70,"PERES_KOR(RU)");
  __chkesp();
  RegisterUnitType(&DAT_1003fe78,"Fregat(RU)");
  __chkesp();
  RegisterUnitType(&DAT_1003fe80,"GALERA(RU)");
  __chkesp();
  RegisterUnitType(&DAT_1003fe88,"FregatNEW(RU)");
  __chkesp();
  RegisterUnitType(&DAT_1003fe90,"KECH(RU)");
  __chkesp();
  RegisterUnitType(&DAT_1003fe98,"KUTTER(RU)");
  __chkesp();
  RegisterUnitType(&DAT_1003fea0,"Victoria(RU)");
  __chkesp();
  RegisterUnitType(&DAT_1003ff90,"Melnica_rus(RU)");
  __chkesp();
  RegisterDynGroup(&DAT_1003fd48);
  __chkesp();
  RegisterDynGroup(&DAT_1003fed8);
  __chkesp();
  RegisterVar(&DAT_1003fd48,8);
  __chkesp();
  RegisterVar(&DAT_1003fed8,8);
  __chkesp();
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    RegisterUnitType(&DAT_1003fd58 + local_8 * 8,(&PTR_s_PorR_RU__1003dd6c)[local_8]);
    __chkesp();
  }
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    thunk_FUN_10009570(&DAT_1003ffa0 + local_8 * 0x41);
    thunk_FUN_10009430(&DAT_1003ffa0 + local_8 * 0x41,&DAT_1003fd48);
    thunk_FUN_100093f0(&DAT_1003ffa0 + local_8 * 0x41,1);
    RegisterVar(&DAT_1003ffa0 + local_8 * 0x41,0x41);
    __chkesp();
  }
  RegisterVar(&DAT_1003ff88,4);
  __chkesp();
  local_8 = 0x10003d25;
  __chkesp();
  return;
}



// Function: FUN_10003e30 @ 0x10003e30

void FUN_10003e30(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 local_50 [16];
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar5 = local_50;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  while ((local_8 & 0xff) < 0x14) {
    cVar1 = thunk_FUN_10009200(&DAT_1003ffa0 + (local_8 & 0xff) * 0x41);
    if (cVar1 == '\0') {
      uVar2 = _rand();
      uVar2 = uVar2 & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      local_c = CONCAT31(local_c._1_3_,(char)uVar2);
      uVar2 = _rand();
      uVar2 = uVar2 & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      local_10 = CONCAT31(local_10._1_3_,(char)uVar2);
      iVar4 = _rand();
      iVar4 = iVar4 % 0xff;
      puVar9 = &DAT_1003fdf8 + (local_10 & 0xff) * 8;
      uVar8 = 1;
      puVar7 = &DAT_1003fea8 + (local_c & 0xff) * 8;
      puVar6 = &DAT_1003fed0;
      uVar3 = thunk_FUN_10009070(&DAT_1003ffa0 + (local_8 & 0xff) * 0x41);
      CreateObject0(uVar3,puVar6,puVar7,uVar8,puVar9,iVar4);
      __chkesp();
      local_8 = CONCAT31(local_8._1_3_,0x14);
    }
    local_8 = CONCAT31(local_8._1_3_,(char)local_8 + '\x01');
  }
  local_8 = 0x10003f2b;
  __chkesp();
  return;
}



// Function: FUN_10003f70 @ 0x10003f70

void __cdecl FUN_10003f70(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_80 [16];
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  ushort uStack_2c;
  ushort local_2a;
  undefined4 uStack_8;
  
  puVar2 = local_80;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  GetTotalAmount0(param_1);
  local_34 = __chkesp();
  if (0 < local_34) {
    local_38 = 0;
    GetUnitInfo(param_1,0,&local_30);
    __chkesp();
    local_3c = (uint)local_2a - (uint)uStack_2c;
    for (local_40 = 1; local_40 < local_34; local_40 = local_40 + 1) {
      GetUnitInfo(param_1,local_40,&local_30);
      __chkesp();
      if (local_3c < (int)((uint)local_2a - (uint)uStack_2c)) {
        local_3c = (uint)local_2a - (uint)uStack_2c;
        local_38 = local_30 & 0xffff;
      }
    }
    thunk_FUN_10005240(param_1);
    InsertUnitToGroup(0,param_1,local_38);
    __chkesp();
  }
  uStack_8 = 0x10004091;
  __chkesp();
  return;
}



// Function: FUN_100040e0 @ 0x100040e0

void __cdecl FUN_100040e0(undefined4 param_1)

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
  ClearSelection(0);
  __chkesp();
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    SelectUnitsType(&DAT_1003fd58 + local_8 * 8,0,1);
    __chkesp();
  }
  SaveSelectedUnits(0,param_1,0);
  __chkesp();
  local_8 = 0x1000416e;
  __chkesp();
  return;
}



// Function: FUN_100041a0 @ 0x100041a0

void __cdecl FUN_100041a0(ushort *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_94 [16];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44 [5];
  int local_30;
  int local_2c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  puVar2 = local_94;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_100040e0(param_2);
  GetTotalAmount0(param_2);
  local_8 = __chkesp();
  local_c = 0;
  local_10 = 0xfffa;
  local_14 = (uint)*param_1;
  local_18 = (uint)param_1[1];
  if (0 < local_8) {
    for (local_48 = 0; local_48 < local_8; local_48 = local_48 + 1) {
      GetUnitInfo(param_2,local_48,local_44);
      __chkesp();
      local_4c = local_30 - local_14;
      local_50 = local_2c - local_18;
      local_54 = thunk_FUN_100052e0();
      if (local_54 < local_10) {
        local_c = local_44[0] & 0xffff;
        local_10 = local_54;
      }
    }
    thunk_FUN_10005240(param_2);
    InsertUnitToGroup(0,param_2,local_c);
    __chkesp();
  }
  local_8 = 0x100042c3;
  __chkesp();
  return;
}



// Function: FUN_10004310 @ 0x10004310

void FUN_10004310(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_50 [16];
  int local_10;
  uint local_c;
  uint local_8;
  
  puVar4 = local_50;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  ClearSelection(1);
  __chkesp();
  GetUnitsAmount0(&DAT_1003fd50,1);
  iVar3 = __chkesp();
  local_8 = CONCAT31(local_8._1_3_,0 < iVar3);
  local_c = local_c & 0xffffff00;
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    cVar1 = thunk_FUN_10009200(&DAT_1003ffa0 + local_10 * 0x41);
    if (cVar1 != '\0') {
      if ((local_8 & 0xff) == 0) {
        uVar5 = 1;
        uVar2 = thunk_FUN_10009070(&DAT_1003ffa0 + local_10 * 0x41);
        SelectUnits(uVar2,uVar5);
        __chkesp();
      }
      else {
        cVar1 = thunk_FUN_10009360(&DAT_1003ffa0 + local_10 * 0x41,&DAT_1003fd50);
        if (cVar1 != '\0') {
          uVar5 = 1;
          uVar2 = thunk_FUN_10009070(&DAT_1003ffa0 + local_10 * 0x41);
          SelectUnits(uVar2,uVar5);
          __chkesp();
        }
      }
      local_c = CONCAT31(local_c._1_3_,1);
    }
  }
  if ((local_c & 0xff) != 0) {
    SelCenter(&DAT_1003fd50,1,2000);
    __chkesp();
  }
  local_8 = 0x10004453;
  __chkesp();
  return;
}



// Function: FUN_100044b0 @ 0x100044b0

void __cdecl FUN_100044b0(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_48 [16];
  uint local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  uVar4 = 0;
  uVar1 = thunk_FUN_10008df0(param_1,2000);
  GetUnitsAmount0(uVar1,uVar4);
  iVar2 = __chkesp();
  if (0 < iVar2) {
    uVar5 = 0;
    uVar4 = 0;
    uVar1 = thunk_FUN_10008df0(param_1,2000);
    SelectUnitsInZone(uVar1,uVar4,uVar5);
    __chkesp();
    SaveSelectedUnits(0,&DAT_1003fd48,0);
    __chkesp();
    thunk_FUN_10003f70(&DAT_1003fd48);
  }
  local_8 = 0x10004552;
  __chkesp();
  return;
}



// Function: FUN_10004580 @ 0x10004580

void FUN_10004580(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  int local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    cVar1 = thunk_FUN_10009200(&DAT_1003ffa0 + local_8 * 0x41);
    if (cVar1 != '\0') {
      cVar1 = thunk_FUN_10009360(&DAT_1003ffa0 + local_8 * 0x41,&DAT_1003fd50);
      if (cVar1 == '\0') {
        thunk_FUN_10009020(&DAT_1003ffa0 + local_8 * 0x41,&DAT_1003fd50);
      }
    }
  }
  local_8 = 0x1000460e;
  __chkesp();
  return;
}



// Function: FUN_10004640 @ 0x10004640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10004640(ushort *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  longlong lVar4;
  undefined4 local_64 [16];
  void *local_24;
  int local_20;
  double local_1c;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  puVar2 = local_64;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = (uint)*param_1;
  local_c = (uint)param_1[1];
  local_10 = param_2;
  local_14 = param_3;
  local_20 = param_3 - local_c;
  local_24 = (void *)(param_2 - local_8);
  fVar3 = (float10)FUN_100098d4(local_24,SUB84((double)local_20 / (double)(int)local_24,0));
  local_1c = (double)fVar3;
  if ((int)(local_10 - local_8) < 0) {
    local_1c = _DAT_1003a040 + local_1c;
  }
  FUN_10009824(local_1c._0_4_,(int)local_1c._0_4_);
  lVar4 = __ftol();
  *param_1 = (ushort)lVar4;
  FUN_10009774(local_1c._0_4_,(int)local_1c._0_4_);
  lVar4 = __ftol();
  param_1[1] = (ushort)lVar4;
  __chkesp();
  return;
}



// Function: FUN_10004750 @ 0x10004750

void FUN_10004750(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_88 [16];
  int local_48;
  ushort *local_44;
  int local_40;
  undefined1 local_3c [20];
  int local_28;
  int local_24;
  int local_10;
  int local_c;
  uint local_8;
  
  puVar4 = local_88;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  local_c = 0;
  while ((local_c < 0x14 && ((local_8 & 0xff) == 0))) {
    cVar1 = thunk_FUN_10009200(&DAT_1003ffa0 + local_c * 0x41);
    if ((cVar1 != '\0') &&
       (cVar1 = thunk_FUN_100044b0(&DAT_1003ffa0 + local_c * 0x41), cVar1 != '\0')) {
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    local_c = local_c + 1;
  }
  if ((DAT_100404b8 != '\0') && ((local_8 & 0xff) != 0)) {
    DAT_100404b8 = '\0';
    for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
      cVar1 = thunk_FUN_10009200(&DAT_1003ffa0 + local_10 * 0x41);
      if (cVar1 != '\0') {
        uVar2 = thunk_FUN_10008e60(&DAT_1003ffa0 + local_10 * 0x41);
        thunk_FUN_10009020(&DAT_1003ffa0 + local_10 * 0x41,uVar2);
        thunk_FUN_10009510((int)(&DAT_1003ffa0 + local_10 * 0x41));
      }
    }
  }
  if ((local_8 & 0xff) == 0) {
    DAT_100404b8 = '\x01';
    thunk_FUN_100041a0((ushort *)&DAT_1003fd50,&DAT_1003fd48);
    GetUnitInfo(&DAT_1003fd48,0,local_3c);
    __chkesp();
    for (local_40 = 0; local_40 < 0x14; local_40 = local_40 + 1) {
      cVar1 = thunk_FUN_10009200(&DAT_1003ffa0 + local_40 * 0x41);
      if (cVar1 != '\0') {
        local_44 = (ushort *)thunk_FUN_10008e60(&DAT_1003ffa0 + local_40 * 0x41);
        local_48 = thunk_FUN_100052e0();
        if (5000 < local_48) {
          thunk_FUN_10004640(local_44,local_28,local_24);
          thunk_FUN_10009020(&DAT_1003ffa0 + local_40 * 0x41,local_44);
        }
      }
    }
  }
  else {
    thunk_FUN_10004310();
  }
  local_8 = 0x1000495e;
  __chkesp();
  return;
}



// Function: FUN_100049f0 @ 0x100049f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100049f0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_50 [16];
  int local_10;
  int local_c;
  int local_8;
  
  puVar4 = local_50;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  Trigg(99);
  uVar2 = __chkesp();
  if ((uVar2 & 0xff) != 0) {
    GetDiff(0);
    DAT_1003ff88 = __chkesp();
    SetResource(0,3,DAT_1003ff88 * -3000 + 14000);
    __chkesp();
    SetResource(0,1,DAT_1003ff88 * -3000 + 14000);
    __chkesp();
    SetResource(0,0,DAT_1003ff88 * -3000 + 14000);
    __chkesp();
    SetResource(0,2,DAT_1003ff88 * -3000 + 14000);
    __chkesp();
    SetResource(0,5,DAT_1003ff88 * -3000 + 14000);
    __chkesp();
    SetResource(0,4,DAT_1003ff88 * -3000 + 14000);
    __chkesp();
    _DAT_1003fd50 = 3000;
    _DAT_1003fd52 = 3000;
    DAT_1003fd54 = 0x40000064;
    RunTimer(1,100);
    __chkesp();
    RunTimer(2,0x32);
    __chkesp();
    RunTimer(3,0x14);
    __chkesp();
    RunTimer(5,(4 - DAT_1003ff88) * 2000);
    __chkesp();
    EnableUnit(0,&DAT_1003ff90,0);
    __chkesp();
    RunTimer(0x1e,0x96);
    __chkesp();
    SetTrigg(99,0);
    __chkesp();
  }
  TimerDoneFirst(0x1e);
  uVar2 = __chkesp();
  if ((uVar2 & 0xff) != 0) {
    ShowPage("#PAGE0");
    __chkesp();
    if (DAT_1003ff88 < 2) {
      SetLightSpot(&DAT_1003fe38,6,1);
      __chkesp();
    }
  }
  TimerDoneFirst(5);
  uVar2 = __chkesp();
  if ((uVar2 & 0xff) != 0) {
    if (0 < DAT_1003ff88) {
      thunk_FUN_10003e30();
    }
    if (1 < DAT_1003ff88) {
      thunk_FUN_10003e30();
      InitialUpgrade(&DAT_1003a2d8,"AKA17BA");
      __chkesp();
    }
    if (2 < DAT_1003ff88) {
      thunk_FUN_10003e30();
      InitialUpgrade(&DAT_1003a2d8,"AKA20BA");
      __chkesp();
    }
    thunk_FUN_10004310();
    RunTimer(4,(3 - DAT_1003ff88) * 3000 + 5000);
    __chkesp();
  }
  Trigg(100);
  uVar2 = __chkesp();
  if ((uVar2 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_1003fed8,0);
    __chkesp();
    TimerDoneFirst(1);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      thunk_FUN_10004750();
      RunTimer(1,0x32);
      __chkesp();
    }
    TimerDoneFirst(2);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      thunk_FUN_10004310();
      RunTimer(2,100);
      __chkesp();
    }
    TimerDoneFirst(3);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
        cVar1 = thunk_FUN_10009200(&DAT_1003ffa0 + local_8 * 0x41);
        if ((cVar1 != '\0') &&
           (cVar1 = thunk_FUN_10009360(&DAT_1003ffa0 + local_8 * 0x41,&DAT_1003fd50), cVar1 != '\0')
           ) {
          thunk_FUN_10009510((int)(&DAT_1003ffa0 + local_8 * 0x41));
        }
      }
      RunTimer(3,0x32);
      __chkesp();
    }
    TimerDoneFirst(4);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      thunk_FUN_10003e30();
      thunk_FUN_10004310();
      local_c = 0;
      for (local_10 = 0; local_10 < 9; local_10 = local_10 + 1) {
        GetReadyAmount(&DAT_1003fe60 + local_10 * 8,0);
        iVar3 = __chkesp();
        local_c = local_c + iVar3;
      }
      local_c = (4 - DAT_1003ff88) * 3000 - local_c * 10 * DAT_1003ff88;
      if (local_c < 1) {
        local_c = 10;
      }
      RunTimer(4,local_c);
      __chkesp();
    }
    NationIsErased(1);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      ShowPage("#PAGE2");
      __chkesp();
      ShowVictory();
      __chkesp();
      SetTrigg(100,0);
      __chkesp();
    }
    GetReadyAmount(&DAT_1003fd58,0);
    iVar3 = __chkesp();
    if (iVar3 == 0) {
      ShowPage("#PAGE1");
      __chkesp();
      LooseGame();
      __chkesp();
      SetTrigg(100,0);
      __chkesp();
    }
    ClearSelection(0);
    __chkesp();
    SelectUnits(&DAT_1003fed8,0);
    __chkesp();
  }
  local_8 = 0x1000500f;
  __chkesp();
  return;
}



// Function: FUN_100051a0 @ 0x100051a0

void __cdecl FUN_100051a0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  uint local_c;
  uint local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  local_c = local_c & 0xffffff00;
  while ((local_c & 0xff) < 8) {
    GetUnitsByNation(param_1,local_c & 0xff);
    iVar1 = __chkesp();
    if (0 < iVar1) {
      local_8 = CONCAT31(local_8._1_3_,(char)local_c);
      local_c = CONCAT31(local_c._1_3_,8);
    }
    local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
  }
  local_8 = 0x10005212;
  __chkesp();
  return;
}



// Function: FUN_10005240 @ 0x10005240

void __cdecl FUN_10005240(undefined4 param_1)

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
  while( true ) {
    GetTotalAmount0(param_1);
    iVar1 = __chkesp();
    if (iVar1 == 0) break;
    RemoveUnitFromGroup(param_1,0);
    __chkesp();
  }
  GetTotalAmount0(param_1);
  __chkesp();
  uStack_8 = 0x100052b4;
  __chkesp();
  return;
}



// Function: FUN_100052e0 @ 0x100052e0

void FUN_100052e0(void)

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
  uStack_8 = 0x10005329;
  __chkesp();
  return;
}



// Function: FUN_10005340 @ 0x10005340

void __fastcall FUN_10005340(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  SelectUnits(param_1,0);
  __chkesp();
  local_8 = 0x10005382;
  __chkesp();
  return;
}



// Function: FUN_100053a0 @ 0x100053a0

void __fastcall FUN_100053a0(int param_1)

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
  local_8 = param_1;
  thunk_FUN_10005340(param_1);
  SelDie(*(undefined1 *)(local_8 + 0x10));
  __chkesp();
  local_8 = 0x100053eb;
  __chkesp();
  return;
}



// Function: FUN_10005410 @ 0x10005410

void __fastcall FUN_10005410(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  GetTotalAmount0(param_1);
  __chkesp();
  local_8 = 0x10005450;
  __chkesp();
  return;
}



// Function: FUN_10005470 @ 0x10005470

void __fastcall FUN_10005470(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined1 local_c;
  undefined4 local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  iVar1 = thunk_FUN_10005410(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = 0x100054b1;
  __chkesp();
  return;
}



// Function: FUN_100054d0 @ 0x100054d0

undefined4 __fastcall FUN_100054d0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



// Function: FUN_10005500 @ 0x10005500

void __fastcall FUN_10005500(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  RegisterDynGroup(param_1);
  __chkesp();
  local_8 = 0x10005543;
  __chkesp();
  return;
}



// Function: FUN_10005560 @ 0x10005560

void __thiscall FUN_10005560(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  return;
}



// Function: FUN_100055a0 @ 0x100055a0

void __thiscall FUN_100055a0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  CreateZoneNearGroup((int)this + 8,*(undefined4 *)((int)this + 0x14),this,param_1);
  __chkesp();
  local_8 = (void *)0x100055f8;
  __chkesp();
  return;
}



// Function: FUN_10005620 @ 0x10005620

void __thiscall FUN_10005620(void *this,undefined4 param_1,int param_2)

{
  undefined3 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  iVar2 = thunk_FUN_10005410(this);
  if (iVar2 == 0) {
    ClearSelection(*(undefined1 *)((int)local_8 + 0x10));
    __chkesp();
    for (local_c = 0; uVar1 = (undefined3)((uint)local_c >> 8), local_c < param_2;
        local_c = local_c + 1) {
      CreateObject0(local_8,*(undefined4 *)((int)local_8 + 0x1c),
                    *(undefined4 *)((int)local_8 + 0x18),
                    CONCAT31(uVar1,*(undefined1 *)((int)local_8 + 0x10)),param_1,0);
      __chkesp();
      SelectUnits(local_8,1);
      __chkesp();
    }
    SaveSelectedUnits(CONCAT31(uVar1,*(undefined1 *)((int)local_8 + 0x10)),local_8,0);
    __chkesp();
  }
  local_8 = (void *)0x100056f7;
  __chkesp();
  return;
}



// Function: FUN_10005740 @ 0x10005740

void __thiscall FUN_10005740(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  return;
}



// Function: FUN_10005780 @ 0x10005780

void __thiscall FUN_10005780(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x1c) = param_1;
  return;
}



// Function: FUN_100057c0 @ 0x100057c0

void __fastcall FUN_100057c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  for (local_10 = 0; (int)local_10 < 8; local_10 = local_10 + 1) {
    GetUnitsByNation(local_8,local_10 & 0xff);
    iVar1 = __chkesp();
    if (0 < iVar1) {
      local_c = local_10;
      local_10 = 8;
    }
  }
  *(uint *)(local_8 + 0x10) = local_c;
  local_8 = 0x1000583f;
  __chkesp();
  return;
}



// Function: FUN_10005870 @ 0x10005870

void __thiscall FUN_10005870(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  return;
}



// Function: FUN_100058b0 @ 0x100058b0

void __thiscall FUN_100058b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  return;
}



// Function: FUN_10005910 @ 0x10005910

void __thiscall FUN_10005910(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_74 [16];
  undefined1 local_34 [4];
  ushort local_30;
  ushort uStack_2e;
  void *local_8;
  
  puVar2 = local_74;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  GetUnitInfo(this,0,local_34);
  __chkesp();
  if ((int)((uint)local_30 + param_1) < (int)(uint)uStack_2e) {
    local_30 = local_30 + (short)param_1;
  }
  if ((int)(uint)uStack_2e <= (int)((uint)local_30 + param_1)) {
    local_30 = uStack_2e;
  }
  SetUnitInfo(local_34);
  __chkesp();
  local_8 = (void *)0x100059b0;
  __chkesp();
  return;
}



// Function: FUN_100059e0 @ 0x100059e0

void __fastcall FUN_100059e0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_7c [16];
  uint local_3c;
  uint local_38;
  undefined1 local_34 [4];
  ushort local_30;
  ushort uStack_2e;
  undefined4 local_8;
  
  puVar2 = local_7c;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  GetUnitInfo(param_1,0,local_34);
  __chkesp();
  local_38 = (uint)local_30;
  local_3c = (uint)uStack_2e;
  __ftol();
  local_8 = 0x10005a4e;
  __chkesp();
  return;
}



// Function: FUN_10005a70 @ 0x10005a70

void __thiscall FUN_10005a70(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_10005340(this);
  SelChangeNation(*(undefined1 *)((int)local_8 + 0x10),param_1 & 0xff);
  __chkesp();
  *(uint *)((int)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10005ac8;
  __chkesp();
  return;
}



// Function: FUN_10005af0 @ 0x10005af0

undefined4 __fastcall FUN_10005af0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



// Function: FUN_10005b20 @ 0x10005b20

void __thiscall FUN_10005b20(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_10005340(this);
  SelSendTo(*(undefined1 *)((int)local_8 + 0x10),param_1,0,0);
  __chkesp();
  *(undefined4 *)((int)local_8 + 0x20) = param_1;
  local_8 = (void *)0x10005b7c;
  __chkesp();
  return;
}



// Function: FUN_10005ba0 @ 0x10005ba0

void __thiscall FUN_10005ba0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_10005340(this);
  Patrol(*(undefined1 *)((int)local_8 + 0x10),param_1,0);
  __chkesp();
  local_8 = (void *)0x10005bf1;
  __chkesp();
  return;
}



// Function: FUN_10005c10 @ 0x10005c10

void __fastcall FUN_10005c10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined1 local_c;
  int local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  GetUnitsAmount1(*(undefined4 *)(param_1 + 0x20),param_1);
  iVar1 = __chkesp();
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = 0x10005c66;
  __chkesp();
  return;
}



// Function: FUN_10005c80 @ 0x10005c80

void __thiscall FUN_10005c80(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined1 local_c;
  void *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_8 = this;
  GetUnitsAmount1(param_1,this);
  iVar1 = __chkesp();
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10005cd3;
  __chkesp();
  return;
}



// Function: FUN_10005cf0 @ 0x10005cf0

void __thiscall FUN_10005cf0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x20) = param_1;
  return;
}



// Function: FUN_10005d30 @ 0x10005d30

void __fastcall FUN_10005d30(int param_1)

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
  local_8 = param_1;
  thunk_FUN_10005340(param_1);
  SetStandGround(*(undefined1 *)(local_8 + 0x10),1);
  __chkesp();
  local_8 = 0x10005d7d;
  __chkesp();
  return;
}



// Function: FUN_10005da0 @ 0x10005da0

void __fastcall FUN_10005da0(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  cVar1 = thunk_FUN_10005470(param_1);
  if (cVar1 != '\0') {
    thunk_FUN_10005e80(local_8);
    iVar2 = thunk_FUN_100059e0(local_8);
    if (iVar2 < 10) {
      thunk_FUN_10005b20(local_8,*(undefined4 *)((int)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x10005dff;
  __chkesp();
  return;
}



// Function: FUN_10005e20 @ 0x10005e20

void __thiscall FUN_10005e20(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  AttackEnemyInZone(this,param_1,0);
  __chkesp();
  local_8 = (void *)0x10005e66;
  __chkesp();
  return;
}



// Function: FUN_10005e80 @ 0x10005e80

void __fastcall FUN_10005e80(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_4c [16];
  undefined1 local_c;
  void *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  uVar4 = 0;
  local_8 = param_1;
  uVar1 = thunk_FUN_100055a0(param_1,2000);
  GetUnitsAmount0(uVar1,uVar4);
  iVar2 = __chkesp();
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10005edb;
  __chkesp();
  return;
}



// Function: FUN_10005f00 @ 0x10005f00

void __thiscall FUN_10005f00(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x2c) = param_1;
  return;
}



// Function: FUN_10005f40 @ 0x10005f40

void __fastcall FUN_10005f40(int param_1)

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
  local_8 = param_1;
  thunk_FUN_10005f90(param_1);
  *(undefined1 *)(local_8 + 0x2c) = 1;
  local_8 = 0x10005f7c;
  __chkesp();
  return;
}



// Function: FUN_10005f90 @ 0x10005f90

void __fastcall FUN_10005f90(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  thunk_FUN_10005500(param_1);
  local_8 = 0x10005fc5;
  __chkesp();
  return;
}



// Function: FUN_10005fe0 @ 0x10005fe0

void __thiscall FUN_10005fe0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_2;
  return;
}



// Function: FUN_10006030 @ 0x10006030

void __fastcall FUN_10006030(void *param_1)

{
  char cVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 local_50 [16];
  int local_10;
  undefined4 local_c;
  void *local_8;
  
  puVar4 = local_50;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (((*(char *)((int)param_1 + 0x2c) != '\0') &&
      (local_8 = param_1, cVar1 = thunk_FUN_10005470(param_1), cVar1 != '\0')) &&
     (*(int *)((int)local_8 + 0x10) != 0)) {
    if (*(int *)((int)local_8 + 0x10) == 6) {
      uVar6 = 0;
      uVar2 = thunk_FUN_100055a0(local_8,600);
      GetUnitsAmount0(uVar2,uVar6);
      iVar3 = __chkesp();
      if ((0 < iVar3) && (*(int *)((int)local_8 + 0x28) != 0)) {
        local_c = *(undefined4 *)((int)local_8 + 0x24);
        switch(local_c) {
        case 0:
          ShowPageParam("#PAGE1_0",*(undefined4 *)((int)local_8 + 0x28));
          __chkesp();
          break;
        case 1:
          ShowPageParam("#PAGE1_1",*(undefined4 *)((int)local_8 + 0x28));
          __chkesp();
          break;
        case 2:
          ShowPageParam("#PAGE1_2",*(undefined4 *)((int)local_8 + 0x28));
          __chkesp();
          break;
        case 3:
          ShowPageParam("#PAGE1_3",*(undefined4 *)((int)local_8 + 0x28));
          __chkesp();
          break;
        case 4:
          ShowPageParam("#PAGE1_4",*(undefined4 *)((int)local_8 + 0x28));
          __chkesp();
          break;
        case 5:
          ShowPageParam("#PAGE1_5",*(undefined4 *)((int)local_8 + 0x28));
          __chkesp();
        }
        AskMultilineQuestion(7,"#PAGE3",0,"FM10_A|FM10_B");
        local_10 = __chkesp();
        if (local_10 == 0) {
          thunk_FUN_10005a70(local_8,0);
        }
        else if (local_10 == 1) {
          thunk_FUN_100053a0((int)local_8);
        }
        AddResource(0,*(undefined1 *)((int)local_8 + 0x24),*(undefined4 *)((int)local_8 + 0x28));
        __chkesp();
        thunk_FUN_10005fe0(local_8,0,0);
      }
    }
    else {
      iVar3 = thunk_FUN_100059e0(local_8);
      if (iVar3 < 0x32) {
        thunk_FUN_10006320(local_8);
      }
      cVar1 = thunk_FUN_10005c10((int)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        this = (void *)thunk_FUN_10006500(*(short **)((int)local_8 + 0x20));
        thunk_FUN_10006660(this,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10006262;
  __chkesp();
  return;
}



// Function: FUN_10006320 @ 0x10006320

void __fastcall FUN_10006320(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  thunk_FUN_10005a70(param_1,6);
  thunk_FUN_10005340(local_8);
  uVar5 = 0;
  uVar4 = 0;
  uVar1 = thunk_FUN_100055a0(local_8,100);
  SelSendTo(*(undefined1 *)((int)local_8 + 0x10),uVar1,uVar4,uVar5);
  __chkesp();
  thunk_FUN_10005d30((int)local_8);
  local_8 = (void *)0x1000638c;
  __chkesp();
  return;
}



// Function: FUN_100063b0 @ 0x100063b0

void __thiscall FUN_100063b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_100058b0(this,param_1,param_2,param_3);
  *(undefined1 *)((int)local_8 + 0x2c) = 1;
  local_8 = (void *)0x100063f5;
  __chkesp();
  return;
}



// Function: FUN_10006410 @ 0x10006410

void __fastcall FUN_10006410(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_4c [16];
  undefined1 local_c;
  void *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  uVar4 = 0;
  local_8 = param_1;
  uVar1 = thunk_FUN_100055a0(param_1,2000);
  GetUnitsAmount0(uVar1,uVar4);
  iVar2 = __chkesp();
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000646b;
  __chkesp();
  return;
}



// Function: FUN_10006490 @ 0x10006490

void __thiscall FUN_10006490(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 4) = param_1;
  (&DAT_10040638)[DAT_10040688] = this;
  DAT_10040688 = DAT_10040688 + 1;
  return;
}



// Function: FUN_10006500 @ 0x10006500

void __cdecl FUN_10006500(short *param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  int local_c;
  undefined4 local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = DAT_10040638;
  for (local_c = 0; local_c < DAT_10040688; local_c = local_c + 1) {
    psVar1 = (short *)thunk_FUN_100066d0((&DAT_10040638)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = (&DAT_10040638)[local_c];
    }
  }
  local_8 = 0x1000657c;
  __chkesp();
  return;
}



// Function: FUN_100065a0 @ 0x100065a0

void __thiscall FUN_100065a0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return;
}



// Function: FUN_100065e0 @ 0x100065e0

void __thiscall FUN_100065e0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0xc) = param_1;
  return;
}



// Function: FUN_10006620 @ 0x10006620

void __thiscall FUN_10006620(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  return;
}



// Function: FUN_10006660 @ 0x10006660

void __thiscall FUN_10006660(void *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_10005fe0(param_1,*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x10));
  thunk_FUN_10005b20(param_1,*(undefined4 *)((int)local_8 + 8));
  local_8 = (void *)0x100066af;
  __chkesp();
  return;
}



// Function: FUN_100066d0 @ 0x100066d0

undefined4 __fastcall FUN_100066d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(param_1 + 4);
}



// Function: FUN_10006710 @ 0x10006710

undefined4 __fastcall FUN_10006710(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



// Function: FUN_10006740 @ 0x10006740

void __fastcall FUN_10006740(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  iVar2 = thunk_FUN_10006d10((int)param_1);
  if ((0 < iVar2) && (*(int *)((int)local_8 + 0x1c) + 1 < *(int *)((int)local_8 + 0x20))) {
    if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      cVar1 = thunk_FUN_10006d80(local_8,*(undefined4 *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        thunk_FUN_100073d0((int)local_8 + 0xc,
                           *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),
                           *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      cVar1 = thunk_FUN_10006d80(local_8,*(undefined4 *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
      ;
      if (cVar1 != '\0') {
        *(int *)((int)local_8 + 0x1c) = *(int *)((int)local_8 + 0x1c) + 1;
        SelectUnits((int)local_8 + 0xc,0);
        __chkesp();
        SelSendTo(*(undefined1 *)((int)local_8 + 0x24),
                  *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),0,0);
        __chkesp();
      }
    }
    else if ((*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x34) == 2) ||
            (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x34) == 1)) {
      SelectUnits((int)local_8 + 0xc,0);
      __chkesp();
      *(int *)((int)local_8 + 0x1c) = *(int *)((int)local_8 + 0x1c) + 1;
      SelSendTo(*(undefined1 *)((int)local_8 + 0x24),
                *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),0,2);
      __chkesp();
    }
    else if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x34) == 0) {
      SelectUnits((int)local_8 + 0xc,0);
      __chkesp();
      *(int *)((int)local_8 + 0x1c) = *(int *)((int)local_8 + 0x1c) + 1;
      SelSendTo(*(undefined1 *)((int)local_8 + 0x24),
                *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),0,0);
      __chkesp();
    }
  }
  local_8 = (void *)0x10006942;
  __chkesp();
  return;
}



// Function: FUN_100069d0 @ 0x100069d0

undefined4 FUN_100069d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return 0;
}



// Function: FUN_10006a00 @ 0x10006a00

void __thiscall FUN_10006a00(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + *(int *)((int)this + 0x20) * 8 + 0x28) = param_1;
  *(undefined4 *)((int)this + *(int *)((int)this + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  return;
}



// Function: FUN_10006a70 @ 0x10006a70

void __thiscall FUN_10006a70(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + *(int *)((int)this + 0x20) * 8 + 0x28) = param_1;
  *(undefined4 *)((int)this + *(int *)((int)this + 0x20) * 8 + 0x2c) = 2;
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  return;
}



// Function: FUN_10006ae0 @ 0x10006ae0

void __thiscall FUN_10006ae0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  RegisterDynGroup((int)this + 0xc);
  __chkesp();
  *local_8 = param_1;
  local_8[1] = param_2;
  local_8[7] = 0;
  local_8[8] = 0;
  local_8[9] = param_3;
  local_8 = (undefined4 *)0x10006b51;
  __chkesp();
  return;
}



// Function: FUN_10006b80 @ 0x10006b80

void __thiscall FUN_10006b80(void *this,undefined4 param_1,int param_2)

{
  undefined3 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  int local_c;
  undefined4 *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  iVar2 = thunk_FUN_10006d10((int)this);
  if (iVar2 == 0) {
    ClearSelection(*(undefined1 *)(local_8 + 9));
    __chkesp();
    for (local_c = 0; uVar1 = (undefined3)((uint)local_c >> 8), local_c < param_2;
        local_c = local_c + 1) {
      CreateObject0(local_8 + 3,local_8[1],*local_8,CONCAT31(uVar1,*(undefined1 *)(local_8 + 9)),
                    param_1,0);
      __chkesp();
      SelectUnits(local_8 + 3,1);
      __chkesp();
    }
    SaveSelectedUnits(CONCAT31(uVar1,*(undefined1 *)(local_8 + 9)),local_8 + 3,0);
    __chkesp();
    local_8[8] = 0;
    thunk_FUN_10006a00(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (undefined4 *)0x10006c81;
  __chkesp();
  return;
}



// Function: FUN_10006cd0 @ 0x10006cd0

int __fastcall FUN_10006cd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1 + 0xc;
}



// Function: FUN_10006d10 @ 0x10006d10

void __fastcall FUN_10006d10(int param_1)

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
  local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(undefined1 *)(param_1 + 0x24));
  __chkesp();
  local_8 = 0x10006d5a;
  __chkesp();
  return;
}



// Function: FUN_10006d80 @ 0x10006d80

void __thiscall FUN_10006d80(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined1 local_c;
  void *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  local_8 = this;
  GetUnitsAmount1(param_1,(int)this + 0xc);
  iVar2 = __chkesp();
  iVar1 = thunk_FUN_10006d10((int)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10006de0;
  __chkesp();
  return;
}



// Function: FUN_10006e00 @ 0x10006e00

void __thiscall FUN_10006e00(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  RegisterUnits((int)this + 0xc,param_1);
  __chkesp();
  uVar1 = thunk_FUN_100051a0((int)local_8 + 0xc);
  *(uint *)((int)local_8 + 0x18) = uVar1 & 0xff;
  *(undefined4 *)((int)local_8 + 0x14) = 0;
  *(undefined4 *)((int)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10006e74;
  __chkesp();
  return;
}



// Function: FUN_10006ea0 @ 0x10006ea0

bool __fastcall FUN_10006ea0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [18];
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(int *)(param_1 + 0x14) == 0;
}



// Function: FUN_10006ef0 @ 0x10006ef0

void __thiscall FUN_10006ef0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  bVar1 = thunk_FUN_10006ea0((int)this);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    __chkesp();
    SelSendTo(*(undefined1 *)(local_8 + 6),*local_8,0,0);
    __chkesp();
    local_8[5] = 1;
  }
  local_8 = (undefined4 *)0x10006f8d;
  __chkesp();
  return;
}



// Function: FUN_10006fc0 @ 0x10006fc0

void __fastcall FUN_10006fc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined1 local_c;
  int local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  __chkesp();
  local_c = 0;
  GetTotalAmount0(*(undefined4 *)(local_8 + 8));
  iVar2 = __chkesp();
  GetNInside(*(undefined1 *)(local_8 + 0x18));
  iVar1 = __chkesp();
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = 0x10007048;
  __chkesp();
  return;
}



// Function: FUN_10007070 @ 0x10007070

void __fastcall FUN_10007070(int param_1)

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
  local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  __chkesp();
  SelectUnits(*(undefined4 *)(local_8 + 8),1);
  __chkesp();
  SendUnitsToTransport(*(undefined1 *)(local_8 + 0x18));
  __chkesp();
  local_8 = 0x100070e9;
  __chkesp();
  return;
}



// Function: FUN_10007110 @ 0x10007110

void __fastcall FUN_10007110(int param_1)

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
  local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  __chkesp();
  PushAllUnitsAway(*(undefined1 *)(local_8 + 0x18));
  __chkesp();
  local_8 = 0x1000716e;
  __chkesp();
  return;
}



// Function: FUN_10007190 @ 0x10007190

void __fastcall FUN_10007190(int param_1)

{
  char cVar1;
  undefined3 uVar3;
  uint uVar2;
  int iVar4;
  undefined3 uVar5;
  undefined4 *puVar6;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  puVar6 = local_4c;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  __chkesp();
  local_c = *(int *)(local_8 + 0x14) + -1;
  uVar5 = (undefined3)((uint)*(int *)(local_8 + 0x14) >> 8);
  uVar3 = (undefined3)((uint)local_c >> 8);
  switch(local_c) {
  case 0:
    CheckLeaveAbility(CONCAT31(uVar3,*(undefined1 *)(local_8 + 0x18)));
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      thunk_FUN_10007070(local_8);
      *(undefined4 *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    cVar1 = thunk_FUN_10006fc0(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(undefined1 *)(local_8 + 0x18),*(undefined4 *)(local_8 + 4),0,0);
      __chkesp();
      *(undefined4 *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    CheckLeaveAbility(CONCAT31(uVar5,*(undefined1 *)(local_8 + 0x18)));
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      thunk_FUN_10007110(local_8);
      *(undefined4 *)(local_8 + 0x14) = 4;
    }
    break;
  case 3:
    GetNInside(CONCAT31(uVar5,*(undefined1 *)(local_8 + 0x18)));
    iVar4 = __chkesp();
    if (iVar4 == 0) {
      RunTimer(*(undefined1 *)(local_8 + 0x1c),100);
      __chkesp();
      *(undefined4 *)(local_8 + 0x14) = 5;
    }
    break;
  case 4:
    TimerDoneFirst(CONCAT31(uVar3,*(undefined1 *)(local_8 + 0x1c)));
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      *(undefined4 *)(local_8 + 0x14) = 0;
    }
  }
  local_8 = 0x1000731e;
  __chkesp();
  return;
}



// Function: FUN_100073a0 @ 0x100073a0

void __cdecl FUN_100073a0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  DAT_1004068c = param_1;
  return;
}



// Function: FUN_100073d0 @ 0x100073d0

void __cdecl FUN_100073d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (DAT_1004068c != (void *)0x0) {
    bVar1 = thunk_FUN_10006ea0((int)DAT_1004068c);
    if (bVar1) {
      thunk_FUN_10006ef0(DAT_1004068c,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10007429;
  __chkesp();
  return;
}



// Function: FUN_10007450 @ 0x10007450

void __fastcall FUN_10007450(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  char local_c;
  int local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  cVar1 = thunk_FUN_10007850(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      cVar1 = thunk_FUN_100077b0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        __chkesp();
        SelSendAndKill(DAT_10040690,local_8 + 0x14,*(undefined1 *)(local_8 + 8),0);
        __chkesp();
      }
    }
    else if (local_c == '\x02') {
      if (DAT_10040694 == 0) {
        cVar1 = thunk_FUN_100077b0(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          __chkesp();
          SelSendAndKill(DAT_10040690,local_8 + 0x14,*(undefined1 *)(local_8 + 8),0);
          __chkesp();
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_10040694,3);
        __chkesp();
        AttackEnemyInZone(local_8 + 0xc,DAT_10040694,0);
        __chkesp();
      }
    }
    else {
      cVar1 = thunk_FUN_100077b0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        __chkesp();
        SelSendTo(DAT_10040690,local_8 + 0x14,*(undefined1 *)(local_8 + 8),0);
        __chkesp();
      }
    }
  }
  local_8 = 0x10007601;
  __chkesp();
  return;
}



// Function: FUN_10007680 @ 0x10007680

void __thiscall FUN_10007680(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8c [16];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [20];
  int local_20;
  int local_1c;
  void *local_8;
  
  puVar2 = local_8c;
  for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_3c = 0;
  local_38 = 0;
  local_8 = this;
  GetTotalAmount0((int)this + 0xc);
  local_40 = __chkesp();
  if (0 < local_40) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_40; local_4c = local_4c + 1) {
      GetUnitInfo((int)local_8 + 0xc,local_4c,local_34);
      __chkesp();
      local_44 = local_44 + local_20;
      local_48 = local_48 + local_1c;
    }
    local_3c = local_44 / local_40;
    local_38 = local_48 / local_40;
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  local_8 = (void *)0x10007765;
  __chkesp();
  return;
}



// Function: FUN_100077b0 @ 0x100077b0

void __fastcall FUN_100077b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined1 local_c;
  int local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  GetUnitsAmount1(param_1 + 0x14,param_1 + 0xc);
  iVar2 = __chkesp();
  GetTotalAmount0(local_8 + 0xc);
  iVar1 = __chkesp();
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = 0x10007824;
  __chkesp();
  return;
}



// Function: FUN_10007850 @ 0x10007850

void __fastcall FUN_10007850(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined1 local_c;
  int local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  GetTotalAmount0(param_1 + 0xc);
  iVar1 = __chkesp();
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = 0x100078a2;
  __chkesp();
  return;
}



// Function: FUN_100078c0 @ 0x100078c0

int __fastcall FUN_100078c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1 + 0xc;
}



// Function: FUN_10007900 @ 0x10007900

void __thiscall FUN_10007900(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  RegisterUnits((int)this + 0xd,param_1);
  __chkesp();
  local_8 = (void *)0x10007947;
  __chkesp();
  return;
}



// Function: FUN_10007960 @ 0x10007960

void __fastcall FUN_10007960(void *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_58 [16];
  int local_18 [2];
  int local_10 [2];
  void *local_8;
  
  puVar2 = local_58;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  cVar1 = thunk_FUN_10007ea0((int)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((int)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      puVar2 = (undefined4 *)thunk_FUN_10007f50(local_8,local_10);
      thunk_FUN_10007d00((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      GetUnitsAmount0((int)local_8 + 0x15,0);
      iVar3 = __chkesp();
      if (iVar3 < 1) {
        *(undefined1 *)((int)local_8 + 0xc) = 2;
      }
      else {
        cVar1 = thunk_FUN_10007e00((int)local_8);
        if (cVar1 == '\0') {
          SelectUnits((int)local_8 + 0xd,0);
          __chkesp();
          SelSendTo(DAT_1003ddcc,(int)local_8 + 0x1d,*(undefined1 *)((int)local_8 + 8),0);
          __chkesp();
        }
      }
    }
    if (*(char *)((int)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      puVar2 = (undefined4 *)thunk_FUN_10007f50(local_8,local_18);
      thunk_FUN_10007d00((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      GetUnitsAmount0((int)local_8 + 0x15,0);
      iVar3 = __chkesp();
      if (iVar3 < 1) {
        SelectUnits((int)local_8 + 0xd,0);
        __chkesp();
        SelSendTo(DAT_1003ddcc,DAT_10040698,*(undefined1 *)((int)local_8 + 8),0);
        __chkesp();
      }
      else {
        *(undefined1 *)((int)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x10007af9;
  __chkesp();
  return;
}



// Function: FUN_10007b70 @ 0x10007b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10007b70(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  undefined4 *puVar3;
  float10 fVar4;
  longlong lVar5;
  undefined4 local_8c [16];
  double local_4c;
  double local_44;
  int local_3c;
  int local_38;
  int local_34 [2];
  int local_2c;
  undefined8 local_28;
  void *local_20;
  int local_1c;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  puVar3 = local_8c;
  for (iVar2 = 0x22; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = param_1;
  local_10 = param_2;
  local_8 = this;
  piVar1 = (int *)thunk_FUN_10007f50(this,local_34);
  local_1c = *piVar1;
  local_20 = (void *)piVar1[1];
  local_38 = (int)local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (float10)FUN_100098d4(local_20,SUB84((double)local_38 / (double)local_3c,0));
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = _DAT_1003a040 + local_28;
  }
  lVar5 = __ftol();
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_10009824(this_00,SUB84(local_28,0));
  lVar5 = __ftol();
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_10009774(local_28._4_4_,(int)local_28);
  lVar5 = __ftol();
  local_14 = (void *)lVar5;
  thunk_FUN_10007d00((int)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((int)local_8 + 8) = local_2c + 0x80;
  thunk_FUN_10007960(local_8);
  __chkesp();
  return;
}



// Function: FUN_10007d00 @ 0x10007d00

void FUN_10007d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_7c [16];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [20];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_8;
  
  puVar2 = local_7c;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  GetUnitInfo(DAT_1004069c,0,local_34);
  __chkesp();
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  __chkesp();
  CreateZoneNearGroup(param_1,DAT_10040698,DAT_1004069c,param_4);
  __chkesp();
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  __chkesp();
  local_8 = 0x10007dc0;
  __chkesp();
  return;
}



// Function: FUN_10007e00 @ 0x10007e00

void __fastcall FUN_10007e00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined1 local_c;
  int local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  GetUnitsAmount1(param_1 + 0x1d,param_1 + 0xd);
  iVar2 = __chkesp();
  GetTotalAmount0(local_8 + 0xd);
  iVar1 = __chkesp();
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = 0x10007e74;
  __chkesp();
  return;
}



// Function: FUN_10007ea0 @ 0x10007ea0

void __fastcall FUN_10007ea0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined1 local_c;
  int local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  GetTotalAmount0(param_1 + 0xd);
  iVar1 = __chkesp();
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = 0x10007ef2;
  __chkesp();
  return;
}



// Function: FUN_10007f10 @ 0x10007f10

int __fastcall FUN_10007f10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1 + 0xd;
}



// Function: FUN_10007f50 @ 0x10007f50

void __thiscall FUN_10007f50(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8c [16];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [20];
  int local_20;
  int local_1c;
  void *local_8;
  
  puVar2 = local_8c;
  for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_3c = 0;
  local_38 = 0;
  local_8 = this;
  GetTotalAmount0((int)this + 0xd);
  local_40 = __chkesp();
  if (0 < local_40) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_40; local_4c = local_4c + 1) {
      GetUnitInfo((int)local_8 + 0xd,local_4c,local_34);
      __chkesp();
      local_44 = local_44 + local_20;
      local_48 = local_48 + local_1c;
    }
    local_3c = local_44 / local_40;
    local_38 = local_48 / local_40;
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  local_8 = (void *)0x10008035;
  __chkesp();
  return;
}



// Function: FUN_10008080 @ 0x10008080

void __fastcall FUN_10008080(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  int local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  cVar1 = thunk_FUN_100082b0(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_100406a0,local_8,DAT_1003ddd0);
    __chkesp();
    GetUnitsAmount0(local_8 + 8,0);
    iVar2 = __chkesp();
    if (iVar2 < 1) {
      cVar1 = thunk_FUN_10008220(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        __chkesp();
        SelSendAndKill(DAT_1003ddd4,*(undefined4 *)(local_8 + 0x10),0,0);
        __chkesp();
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
      __chkesp();
    }
  }
  local_8 = 0x10008176;
  __chkesp();
  return;
}



// Function: FUN_100081c0 @ 0x100081c0

void __thiscall FUN_100081c0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  RegisterUnits(this,param_1);
  __chkesp();
  local_8 = (void *)0x10008204;
  __chkesp();
  return;
}



// Function: FUN_10008220 @ 0x10008220

void __fastcall FUN_10008220(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined1 local_c;
  int local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  GetUnitsAmount1(*(undefined4 *)(param_1 + 0x10),param_1);
  iVar2 = __chkesp();
  GetTotalAmount0(local_8);
  iVar1 = __chkesp();
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = 0x1000828e;
  __chkesp();
  return;
}



// Function: FUN_100082b0 @ 0x100082b0

void __fastcall FUN_100082b0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined1 local_c;
  undefined4 local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  GetTotalAmount0(param_1);
  iVar1 = __chkesp();
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = 0x100082ff;
  __chkesp();
  return;
}



// Function: FUN_10008320 @ 0x10008320

void __thiscall
FUN_10008320(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  undefined1 *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 6) = param_1;
  *(undefined4 *)((int)this + 10) = param_2;
  local_8 = this;
  uVar1 = thunk_FUN_100051a0(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(undefined4 *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  __chkesp();
  local_8 = (undefined1 *)0x10008398;
  __chkesp();
  return;
}



// Function: FUN_100083c0 @ 0x100083c0

void __thiscall
FUN_100083c0(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  RegisterUnits((int)this + 0x16,param_1);
  __chkesp();
  RegisterZone((int)local_8 + 0x1e,param_2);
  __chkesp();
  thunk_FUN_10008320(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10008442;
  __chkesp();
  return;
}



// Function: FUN_10008470 @ 0x10008470

void __thiscall FUN_10008470(void *this,undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  RegisterUnits((int)this + 0x16,param_1);
  __chkesp();
  CreateZoneNearGroup((int)local_8 + 0x1e,DAT_100406a4,(int)local_8 + 0x16,300);
  __chkesp();
  thunk_FUN_10008320(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x10008500;
  __chkesp();
  return;
}



// Function: FUN_10008530 @ 0x10008530

void __fastcall FUN_10008530(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  undefined1 *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  Trigg(param_1[2]);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) != 0) {
    GetUnitsAmount0(*(undefined4 *)(local_8 + 10),*local_8);
    iVar2 = __chkesp();
    if (0 < iVar2) {
      thunk_FUN_10008670(local_8);
      SetTrigg(local_8[2],0);
      __chkesp();
    }
  }
  Trigg(local_8[2]);
  uVar1 = __chkesp();
  if ((uVar1 & 0xff) == 0) {
    GetUnitsAmount0(*(undefined4 *)(local_8 + 10),*local_8);
    iVar2 = __chkesp();
    if (iVar2 < 1) {
      thunk_FUN_10008740(local_8);
      SetTrigg(local_8[2],1);
      __chkesp();
    }
  }
  local_8 = (undefined1 *)0x1000862b;
  __chkesp();
  return;
}



// Function: FUN_10008670 @ 0x10008670

void __fastcall FUN_10008670(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined1 *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  SaveSelectedUnits(*param_1,param_1 + 0xe,0);
  __chkesp();
  SelectUnits(*(undefined4 *)(local_8 + 6),0);
  __chkesp();
  SelOpenGates(local_8[1]);
  __chkesp();
  SelectUnits(local_8 + 0xe,0);
  __chkesp();
  local_8 = (undefined1 *)0x1000870a;
  __chkesp();
  return;
}



// Function: FUN_10008740 @ 0x10008740

void __fastcall FUN_10008740(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined1 *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  SaveSelectedUnits(*param_1,param_1 + 0xe,0);
  __chkesp();
  SelectUnits(*(undefined4 *)(local_8 + 6),0);
  __chkesp();
  SelCloseGates(local_8[1]);
  __chkesp();
  SelectUnits(local_8 + 0xe,0);
  __chkesp();
  local_8 = (undefined1 *)0x100087da;
  __chkesp();
  return;
}



// Function: FUN_10008810 @ 0x10008810

int __fastcall FUN_10008810(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  return param_1;
}



// Function: FUN_10008850 @ 0x10008850

void __thiscall FUN_10008850(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  RegisterUnits((int)this + 0x30,param_1);
  __chkesp();
  local_8 = (void *)0x10008897;
  __chkesp();
  return;
}



// Function: FUN_100088b0 @ 0x100088b0

void __thiscall FUN_100088b0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  RegisterDynGroup((int)this + 0x30);
  __chkesp();
  RemoveGroup(param_1,(int)local_8 + 0x30);
  __chkesp();
  local_8 = (void *)0x10008910;
  __chkesp();
  return;
}



// Function: FUN_10008930 @ 0x10008930

void __thiscall FUN_10008930(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined1 local_c;
  ushort *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_8 = this;
  if (*(int *)((int)this + 0x2c) == -1) {
    GetUnitInfo((int)this + 0x30,0,this);
    __chkesp();
    *(uint *)(local_8 + 0x16) = (uint)*local_8;
  }
  GetTotalAmount0(param_1);
  iVar1 = __chkesp();
  if (iVar1 == 1) {
    GetUnitInfo(param_1,0,local_8);
    __chkesp();
    if ((uint)*local_8 == *(uint *)(local_8 + 0x16)) {
      local_c = 1;
    }
  }
  local_8 = (ushort *)0x100089e2;
  __chkesp();
  return;
}



// Function: FUN_10008a20 @ 0x10008a20

void __thiscall FUN_10008a20(void *this,undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined1 local_c;
  void *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  local_8 = this;
  cVar1 = thunk_FUN_10008930(this,param_1);
  if (cVar1 != '\0') {
    GetUnitsAmount1(param_2,param_1);
    iVar2 = __chkesp();
    if (0 < iVar2) {
      local_c = 1;
    }
  }
  local_8 = (void *)0x10008a88;
  __chkesp();
  return;
}



// Function: FUN_10008ab0 @ 0x10008ab0

int __fastcall FUN_10008ab0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1 + 0x30;
}



// Function: FUN_10008af0 @ 0x10008af0

void __thiscall
FUN_10008af0(void *this,undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  undefined1 local_10 [8];
  void *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x45) = param_1;
  *(undefined1 *)((int)this + 0x38) = param_2;
  *(undefined4 *)((int)this + 0x39) = param_3;
  *(undefined4 *)((int)this + 0x3d) = param_4;
  *(undefined4 *)((int)this + 0x41) = param_5;
  local_8 = this;
  UnitsCenter(local_10,*(undefined4 *)((int)this + 0x45),500);
  __chkesp();
  SelSendTo(0,local_10,0,0);
  __chkesp();
  local_8 = (void *)0x10008b85;
  __chkesp();
  return;
}



// Function: FUN_10008bc0 @ 0x10008bc0

void __fastcall FUN_10008bc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  short local_10;
  undefined2 local_e;
  int local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  SelectUnits(*(undefined4 *)(param_1 + 0x45),0);
  __chkesp();
  UnitsCenter(&local_10,*(undefined4 *)(local_8 + 0x45),700);
  __chkesp();
  if (*(int *)(local_8 + 0x39) != 0) {
    local_10 = local_10 + *(short *)(local_8 + 0x39);
  }
  if (*(int *)(local_8 + 0x3d) != 0) {
    local_e = *(undefined2 *)(local_8 + 0x3d);
  }
  if (*(char *)(local_8 + 0x38) == '\0') {
    SelSendTo(3,&local_10,*(undefined1 *)(local_8 + 0x41),0);
    __chkesp();
  }
  if (*(char *)(local_8 + 0x38) == '\x01') {
    SelSendAndKill(3,&local_10,*(undefined1 *)(local_8 + 0x41),0);
    __chkesp();
  }
  *(undefined4 *)(local_8 + 0x45) = 0;
  local_8 = 0x10008cb8;
  __chkesp();
  return;
}



// Function: FUN_10008d00 @ 0x10008d00

void __fastcall FUN_10008d00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined1 local_14 [8];
  undefined1 local_c;
  int local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  if (*(int *)(param_1 + 0x45) != 0) {
    local_8 = param_1;
    UnitsCenter(local_14,*(undefined4 *)(param_1 + 0x45),500);
    __chkesp();
    iVar1 = thunk_FUN_10008ab0(local_8);
    GetUnitsAmount1(local_14,iVar1);
    iVar1 = __chkesp();
    if (0 < iVar1) {
      thunk_FUN_10008bc0(local_8);
      local_c = 1;
    }
  }
  local_8 = 0x10008d8b;
  __chkesp();
  return;
}



// Function: FUN_10008dc0 @ 0x10008dc0

undefined4 __fastcall FUN_10008dc0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



// Function: FUN_10008df0 @ 0x10008df0

void __thiscall FUN_10008df0(void *this,undefined2 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  UnitsCenter((int)this + 8,this,CONCAT22(0xcccc,param_1));
  __chkesp();
  local_8 = (void *)0x10008e42;
  __chkesp();
  return;
}



// Function: FUN_10008e60 @ 0x10008e60

void __fastcall FUN_10008e60(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  thunk_FUN_10008df0(param_1,300);
  local_8 = (void *)0x10008e97;
  __chkesp();
  return;
}



// Function: FUN_10008eb0 @ 0x10008eb0

void __thiscall FUN_10008eb0(void *this,uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  uint local_10;
  uint local_c;
  void *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_10008e60(this);
  local_10 = (uint)*(ushort *)((int)local_8 + 8);
  local_c = (uint)*(ushort *)((int)local_8 + 10);
  *param_1 = local_10;
  param_1[1] = local_c;
  local_8 = (void *)0x10008f0b;
  __chkesp();
  return;
}



// Function: FUN_10008f30 @ 0x10008f30

void __thiscall FUN_10008f30(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_100090a0(this);
  SelSendAndKill(*(undefined1 *)((int)local_8 + 0x3c),param_1,0,0);
  __chkesp();
  local_8 = (void *)0x10008f83;
  __chkesp();
  return;
}



// Function: FUN_10008fa0 @ 0x10008fa0

void __thiscall FUN_10008fa0(void *this,undefined4 param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  thunk_FUN_100090a0(this);
  uVar1 = (uint)param_2;
  iVar2 = _rand();
  SelSendTo(*(undefined1 *)((int)local_8 + 0x3c),param_1,iVar2 % 0xff,uVar1);
  __chkesp();
  local_8 = (void *)0x10009001;
  __chkesp();
  return;
}



// Function: FUN_10009020 @ 0x10009020

void __thiscall FUN_10009020(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_10008fa0(this,param_1,0);
  local_8 = (void *)0x10009058;
  __chkesp();
  return;
}



// Function: FUN_10009070 @ 0x10009070

undefined4 __fastcall FUN_10009070(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



// Function: FUN_100090a0 @ 0x100090a0

void __fastcall FUN_100090a0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  SelectUnits(param_1,0);
  __chkesp();
  local_8 = 0x100090e2;
  __chkesp();
  return;
}



// Function: FUN_10009100 @ 0x10009100

void __fastcall FUN_10009100(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  uint local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_10 = local_10 & 0xffffff00;
  local_8 = param_1;
  while ((local_10 & 0xff) < 8) {
    GetUnitsByNation(local_8,local_10 & 0xff);
    iVar1 = __chkesp();
    if (0 < iVar1) {
      local_c = (char)local_10;
      local_10 = CONCAT31(local_10._1_3_,8);
    }
    local_10 = CONCAT31(local_10._1_3_,(char)local_10 + '\x01');
  }
  local_8 = 0x10009177;
  __chkesp();
  return;
}



// Function: FUN_100091a0 @ 0x100091a0

void __fastcall FUN_100091a0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  GetTotalAmount0(param_1);
  __chkesp();
  local_8 = 0x100091e0;
  __chkesp();
  return;
}



// Function: FUN_10009200 @ 0x10009200

void __fastcall FUN_10009200(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined1 local_c;
  undefined4 local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_8 = param_1;
  iVar1 = thunk_FUN_100091a0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = 0x10009241;
  __chkesp();
  return;
}



// Function: FUN_10009260 @ 0x10009260

void __thiscall FUN_10009260(void *this,undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  RegisterUnits(this,param_1);
  __chkesp();
  uVar1 = thunk_FUN_10009100(local_8);
  *(undefined1 *)((int)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x100092b2;
  __chkesp();
  return;
}



// Function: FUN_100092d0 @ 0x100092d0

void __thiscall FUN_100092d0(void *this,undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  RegisterDynGroup(this);
  __chkesp();
  RemoveGroup(param_1,local_8);
  __chkesp();
  uVar1 = thunk_FUN_10009100(local_8);
  *(undefined1 *)((int)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x10009338;
  __chkesp();
  return;
}



// Function: FUN_10009360 @ 0x10009360

void __thiscall FUN_10009360(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  undefined1 local_c;
  void *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  local_8 = this;
  GetTotalAmount0(this);
  iVar2 = __chkesp();
  GetUnitsAmount1(param_1,local_8);
  iVar1 = __chkesp();
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x100093cb;
  __chkesp();
  return;
}



// Function: FUN_100093f0 @ 0x100093f0

void __thiscall FUN_100093f0(void *this,undefined1 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((int)this + 0x3c) = param_1;
  return;
}



// Function: FUN_10009430 @ 0x10009430

void __thiscall FUN_10009430(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x3d) = param_1;
  return;
}



// Function: FUN_10009470 @ 0x10009470

void FUN_10009470(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  GetTotalAmount0(param_1);
  iVar2 = __chkesp();
  if (0 < iVar2) {
    uVar4 = 0;
    uVar1 = thunk_FUN_10009070(local_8);
    SelectUnits(uVar1,uVar4);
    __chkesp();
    SelAttackGroup(1,param_1);
    __chkesp();
  }
  local_8 = 0x100094e9;
  __chkesp();
  return;
}



// Function: FUN_10009510 @ 0x10009510

void __fastcall FUN_10009510(int param_1)

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
  if (*(int *)(param_1 + 0x3d) != 0) {
    local_8 = param_1;
    thunk_FUN_10009470(*(undefined4 *)(param_1 + 0x3d));
  }
  local_8 = 0x10009552;
  __chkesp();
  return;
}



// Function: FUN_10009570 @ 0x10009570

void __fastcall FUN_10009570(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  uVar1 = thunk_FUN_10009070(param_1);
  RegisterDynGroup(uVar1);
  __chkesp();
  local_8 = 0x100095b5;
  __chkesp();
  return;
}



// Function: __chkesp @ 0x10009720

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
  iVar2 = FUN_1000a680(1,0x1003a350,0x2a,&DAT_1003a360,
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



// Function: FUN_10009760 @ 0x10009760

void FUN_10009760(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000af78(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1000977d(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}



// Function: FUN_10009774 @ 0x10009774

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10009774(void *this,int param_1)

{
  uint uVar1;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1000af1c();
    }
    if (DAT_100406c0 == 0) {
      __startOneArgErrorHandling
                (&DAT_1003dde0,0x1e,in_FPUControlWord,unaff_retaddr,param_1,in_stack_00000008);
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fsin(extraout_ST0);
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / _DAT_1003a6ca) * _DAT_1003a6ca;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_100406c0 == 0) {
      uVar1 = __math_exit(&DAT_1003dde0,0x1e,unaff_retaddr,param_1,in_stack_00000008);
      return uVar1;
    }
  }
  return uVar1;
}



// Function: FUN_1000977d @ 0x1000977d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1000977d(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1000af1c();
    }
    if (DAT_100406c0 == 0) {
      __startOneArgErrorHandling(&DAT_1003dde0,0x1e,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fsin(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / _DAT_1003a6ca) * _DAT_1003a6ca;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_100406c0 == 0) {
      uVar1 = __math_exit(&DAT_1003dde0,0x1e,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}



// Function: FUN_10009810 @ 0x10009810

void FUN_10009810(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000af78(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1000982d(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}



// Function: FUN_10009824 @ 0x10009824

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10009824(void *this,int param_1)

{
  uint uVar1;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 extraout_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1000af1c();
    }
    if (DAT_100406c0 == 0) {
      __startOneArgErrorHandling
                (&DAT_1003ddf0,0x12,in_FPUControlWord,unaff_retaddr,param_1,in_stack_00000008);
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fcos(extraout_ST0);
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / _DAT_1003a6ca) * _DAT_1003a6ca;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_100406c0 == 0) {
      uVar1 = __math_exit(&DAT_1003ddf0,0x12,unaff_retaddr,param_1,in_stack_00000008);
      return uVar1;
    }
  }
  return uVar1;
}



// Function: FUN_1000982d @ 0x1000982d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1000982d(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1000af1c();
    }
    if (DAT_100406c0 == 0) {
      __startOneArgErrorHandling(&DAT_1003ddf0,0x12,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fcos(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / _DAT_1003a6ca) * _DAT_1003a6ca;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_100406c0 == 0) {
      uVar1 = __math_exit(&DAT_1003ddf0,0x12,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}



// Function: FUN_100098c0 @ 0x100098c0

void FUN_100098c0(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000af78(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_100098dd(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}



// Function: FUN_100098d4 @ 0x100098d4

void __thiscall FUN_100098d4(void *this,int param_1)

{
  uint uVar1;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  unkbyte10 extraout_ST0;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000008;
  
  uVar1 = __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_1000af1c();
      if (DAT_100406c0 != 0) {
        return;
      }
      __startOneArgErrorHandling
                (&DAT_1003de00,0xf,in_FPUControlWord,unaff_retaddr,param_1,in_stack_00000008);
      return;
    }
  }
  else {
    fpatan(extraout_ST0,(float10)1);
  }
  if (DAT_100406c0 != 0) {
    return;
  }
  __math_exit(&DAT_1003de00,0xf,unaff_retaddr,param_1,in_stack_00000008);
  return;
}



// Function: FUN_100098dd @ 0x100098dd

void __cdecl FUN_100098dd(int param_1,undefined4 param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  unkbyte10 in_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_1000af1c();
      if (DAT_100406c0 != 0) {
        return;
      }
      __startOneArgErrorHandling(&DAT_1003de00,0xf,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    fpatan(in_ST0,(float10)1);
  }
  if (DAT_100406c0 != 0) {
    return;
  }
  __math_exit(&DAT_1003de00,0xf,unaff_retaddr,param_1,param_2);
  return;
}



// Function: FUN_10009960 @ 0x10009960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009960(void)

{
  FUN_100099a0();
  _DAT_100406c4 = __ms_p5_mp_test_fdiv();
  __setdefaultprecision();
  return;
}



// Function: FUN_10009990 @ 0x10009990

void FUN_10009990(void)

{
  return;
}



// Function: FUN_100099a0 @ 0x100099a0

void FUN_100099a0(void)

{
  PTR___fptrap_1003de90 = __cfltcvt;
  PTR___fptrap_1003de94 = __cropzeros;
  PTR___fptrap_1003de98 = __fassign;
  PTR___fptrap_1003de9c = FUN_1000b1b0;
  PTR___fptrap_1003dea0 = __positive;
  PTR___fptrap_1003dea4 = __cfltcvt;
  return;
}



// Function: FUN_100099f0 @ 0x100099f0

undefined4 __cdecl FUN_100099f0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_100406c0;
  DAT_100406c0 = param_1;
  return uVar1;
}



// Function: __ftol @ 0x10009a0c

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Function: FUN_10009a40 @ 0x10009a40

void __thiscall FUN_10009a40(void *this,void *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000b9c0(this,9);
    if (((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
        && ((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((int)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1000a680(2,0x1003a440,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_1000c550(param_1,*(int *)((int)param_1 + -0xc));
    FUN_1000ba60(9);
  }
  return;
}



// Function: FUN_10009af0 @ 0x10009af0

void __cdecl FUN_10009af0(void *param_1)

{
  FUN_1000baf0(param_1,1);
  return;
}



// Function: FUN_10009b10 @ 0x10009b10

void FUN_10009b10(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x10009b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: _CallMemberFunction0 @ 0x10009b50

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10009b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}



// Function: FUN_10009b60 @ 0x10009b60

void FUN_10009b60(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10009b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_10009b70 @ 0x10009b70

void FUN_10009b70(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x10009b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_10009b80 @ 0x10009b80

void FUN_10009b80(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x10009bac,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// Function: FID_conflict:___CxxFrameHandler3 @ 0x10009be0

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_1000da30(param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}



// Function: ___CxxLongjmpUnwind@4 @ 0x10009c20

/* Library Function - Single Match
    ___CxxLongjmpUnwind@4
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

void ___CxxLongjmpUnwind_4(int param_1)

{
  FUN_1000dfa0(*(int *)(param_1 + 0x18),0,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_10009c50 @ 0x10009c50

undefined4 __cdecl
FUN_10009c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = FUN_10009cc0;
  local_10 = param_2;
  local_c = param_1;
  local_8 = param_4 + 1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// Function: FUN_10009cc0 @ 0x10009cc0

void __cdecl FUN_10009cc0(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3)

{
  FUN_1000da30(param_1,*(EHRegistrationNode **)(param_2 + 0xc),param_3,(void *)0x0,
               *(_s_FuncInfo **)(param_2 + 8),*(int *)(param_2 + 0x10),param_2,'\0');
  return;
}



// Function: FUN_10009d00 @ 0x10009d00

undefined4 __cdecl
FUN_10009d00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_28 = FUN_10009dd0;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x10009d9c;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_1000e7c0();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// Function: FUN_10009dd0 @ 0x10009dd0

undefined4 __cdecl FUN_10009dd0(PEXCEPTION_RECORD param_1,PVOID param_2,_CONTEXT *param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_1000da30((EHExceptionRecord *)param_1,*(EHRegistrationNode **)((int)param_2 + 0xc),param_3,
               (void *)0x0,*(_s_FuncInfo **)((int)param_2 + 8),*(int *)((int)param_2 + 0x10),
               *(EHRegistrationNode **)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_10009b80(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x10009e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// Function: FUN_10009e60 @ 0x10009e60

int __cdecl FUN_10009e60(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar5 = uVar6;
  uVar4 = uVar6;
  while (uVar3 = uVar5, -1 < param_2) {
    if (uVar6 == 0xffffffff) {
      FUN_1000ea40();
    }
    uVar6 = uVar6 - 1;
    iVar1 = iVar2 + uVar6 * 0x14;
    if (((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) ||
       (uVar5 = uVar3, uVar6 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar5 = uVar6;
      uVar4 = uVar3;
    }
  }
  uVar6 = uVar6 + 1;
  *param_4 = uVar6;
  *param_5 = uVar4;
  if ((*(uint *)(param_1 + 0xc) < uVar4) || (uVar4 < uVar6)) {
    FUN_1000ea40();
  }
  return iVar2 + uVar6 * 0x14;
}



// Function: __global_unwind2 @ 0x10009ef0

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10009f08,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x10009f32

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
  puStack_18 = &LAB_10009f10;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10009fc6();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: __abnormal_termination @ 0x10009f9a

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10009f10) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// Function: __NLG_Notify1 @ 0x10009fbd

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1003de24 = param_1;
  DAT_1003de20 = in_EAX;
  DAT_1003de28 = unaff_EBP;
  return;
}



// Function: FUN_10009fc6 @ 0x10009fc6

void FUN_10009fc6(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1003de24 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1003de20 = in_EAX;
  DAT_1003de28 = unaff_EBP;
  return;
}



// Function: FUN_10009fe0 @ 0x10009fe0

int __cdecl FUN_10009fe0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  void *this;
  void *this_00;
  void *this_01;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  
  FUN_1000ec80();
  pvVar1 = (void *)FUN_1000c990(this,(int)DAT_100421f8,2);
  this_00 = (void *)((int)DAT_100421f4 + (4 - (int)DAT_100421f8));
  if (pvVar1 < this_00) {
    iVar6 = 0x68;
    pcVar5 = "onexit.c";
    uVar4 = 2;
    iVar2 = FUN_1000c990(this_00,(int)DAT_100421f8,2);
    piVar3 = FUN_1000bf50(this_01,DAT_100421f8,(void *)(iVar2 + 0x10),uVar4,(int)pcVar5,iVar6);
    if (piVar3 == (int *)0x0) {
      FUN_1000ec90();
      return 0;
    }
    DAT_100421f4 = piVar3 + ((int)DAT_100421f4 - (int)DAT_100421f8 >> 2);
    DAT_100421f8 = piVar3;
  }
  *DAT_100421f4 = param_1;
  DAT_100421f4 = DAT_100421f4 + 1;
  FUN_1000ec90();
  return param_1;
}



// Function: FUN_1000a0a0 @ 0x1000a0a0

int __cdecl FUN_1000a0a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009fe0(param_1);
  return (iVar1 != 0) - 1;
}



// Function: FUN_1000a0c0 @ 0x1000a0c0

void FUN_1000a0c0(void)

{
  DAT_100421f8 = (undefined4 *)FUN_1000bac0((void *)0x80,2,0x1003a474,0xb6);
  if (DAT_100421f8 == (undefined4 *)0x0) {
    __amsg_exit(0x18);
  }
  *DAT_100421f8 = 0;
  DAT_100421f4 = DAT_100421f8;
  return;
}



// Function: FUN_1000a110 @ 0x1000a110

void __cdecl FUN_1000a110(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000e7c0();
  pDVar1[5] = param_1;
  return;
}



// Function: _rand @ 0x1000a120

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000e7c0();
  pDVar1[5] = pDVar1[5] * 0x343fd + 0x269ec3;
  return pDVar1[5] >> 0x10 & 0x7fff;
}



// Function: FUN_1000a160 @ 0x1000a160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_1000a160(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  int local_dc;
  _TIME_ZONE_INFORMATION local_d4;
  _SYSTEMTIME local_28;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_28);
  GetSystemTime(&local_14);
  if (((((uint)local_14.wMinute == _DAT_100406d8 >> 0x10) && (local_14.wHour == DAT_100406d8)) &&
      (local_14.wDay == DAT_100406d6)) &&
     ((local_14.wMonth == DAT_100406d2 && (local_14.wYear == DAT_100406d0)))) {
    local_dc = DAT_100406c8;
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
    _DAT_100406d0 = CONCAT22(local_14.wMonth,local_14.wYear);
    _DAT_100406d4 = CONCAT22(local_14.wDay,local_14.wDayOfWeek);
    _DAT_100406d8 = CONCAT22(local_14.wMinute,local_14.wHour);
    _DAT_100406dc = CONCAT22(local_14.wMilliseconds,local_14.wSecond);
  }
  DAT_100406c8 = local_dc;
  iVar2 = FUN_1000ecd0((uint)local_28.wYear,(uint)local_28.wMonth,(uint)local_28.wDay,
                       (uint)local_28.wHour,(uint)local_28.wMinute,(uint)local_28.wSecond,local_dc);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return iVar2;
}



// Function: FUN_1000a2f0 @ 0x1000a2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000a2f0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  
  if (param_2 == 1) {
    DAT_10040770 = GetVersion();
    iVar1 = FUN_1000fa10(1);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_1004077c = DAT_10040770 >> 8 & 0xff;
    DAT_10040778 = DAT_10040770 & 0xff;
    _DAT_10040774 = DAT_10040778 * 0x100 + _DAT_1004077c;
    DAT_10040770 = DAT_10040770 >> 0x10;
    iVar1 = FUN_1000e6e0();
    if (iVar1 == 0) {
      FUN_1000fa60();
      return 0;
    }
    DAT_10042214 = GetCommandLineA();
    DAT_100406e4 = FUN_1000f7f0();
    FUN_1000edc0();
    FUN_1000f2e0(extraout_ECX);
    FUN_1000f190(extraout_ECX_00);
    FUN_1000ead0();
    DAT_100406e0 = DAT_100406e0 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_100406e0 < 1) {
      return 0;
    }
    DAT_100406e0 = DAT_100406e0 + -1;
    if (DAT_100407a8 == 0) {
      FUN_1000eb50();
    }
    uVar2 = FUN_1000cfd0(-1);
    if ((uVar2 & 0x20) != 0) {
      FUN_1000d8e0();
    }
    __ioterm();
    FUN_1000e770();
    FUN_1000fa60();
  }
  else if (param_2 == 3) {
    FUN_1000e860((LPVOID)0x0);
  }
  return 1;
}



// Function: entry @ 0x1000a430

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  if ((param_2 == 0) && (DAT_100406e0 == 0)) {
    local_8 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_10042224 != (code *)0x0) {
        local_8 = (*DAT_10042224)(param_1,param_2,param_3);
      }
      if (local_8 != 0) {
        local_8 = FUN_1000a2f0(param_1,param_2);
      }
      if (local_8 == 0) {
        return 0;
      }
    }
    local_8 = thunk_FUN_10003790(param_1,param_2);
    if ((param_2 == 1) && (local_8 == 0)) {
      FUN_1000a2f0(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = FUN_1000a2f0(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 0;
      }
      if ((local_8 != 0) && (DAT_10042224 != (code *)0x0)) {
        local_8 = (*DAT_10042224)(param_1,param_2,param_3);
      }
    }
  }
  return local_8;
}



// Function: __amsg_exit @ 0x1000a530

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100406ec == 1) || ((DAT_100406ec == 0 && (DAT_100406f0 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_1000fb50(param_1);
  (*(code *)PTR___exit_1003de2c)(0xff);
  return;
}



// Function: FUN_1000a570 @ 0x1000a570

void FUN_1000a570(void)

{
  DebugBreak();
  return;
}



// Function: FUN_1000a580 @ 0x1000a580

undefined4 __cdecl FUN_1000a580(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0xffffffff) {
    uVar1 = *(undefined4 *)(&DAT_1003de34 + param_1 * 4);
  }
  else if ((param_2 & 0xfffffff8) == 0) {
    uVar1 = *(undefined4 *)(&DAT_1003de34 + param_1 * 4);
    *(uint *)(&DAT_1003de34 + param_1 * 4) = param_2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: __CrtSetReportFile @ 0x1000a5e0

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
    uVar1 = *(undefined4 *)(&DAT_1003de40 + param_1 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_1003de40 + param_1 * 4);
    if (param_2 == -4) {
      pvVar2 = GetStdHandle(0xfffffff5);
      *(HANDLE *)(&DAT_1003de40 + param_1 * 4) = pvVar2;
    }
    else if (param_2 == -5) {
      pvVar2 = GetStdHandle(0xfffffff4);
      *(HANDLE *)(&DAT_1003de40 + param_1 * 4) = pvVar2;
    }
    else {
      *(int *)(&DAT_1003de40 + param_1 * 4) = param_2;
    }
  }
  return uVar1;
}



// Function: FUN_1000a660 @ 0x1000a660

undefined4 __cdecl FUN_1000a660(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10042208;
  DAT_10042208 = param_1;
  return uVar1;
}



// Function: FUN_1000a680 @ 0x1000a680

undefined4 __cdecl
FUN_1000a680(int param_1,int param_2,int param_3,undefined4 param_4,byte *param_5)

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
  
  FUN_100103c0();
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
  else if ((param_1 == 2) && (LVar2 = InterlockedIncrement((LONG *)&DAT_1003de30), 0 < LVar2)) {
    if ((DAT_100406f4 == (FARPROC)0x0) &&
       ((local_3010 = LoadLibraryA("user32.dll"), local_3010 == (HMODULE)0x0 ||
        (DAT_100406f4 = GetProcAddress(local_3010,"wsprintfA"), DAT_100406f4 == (FARPROC)0x0)))) {
      local_100c = 0xffffffff;
    }
    else {
      (*DAT_100406f4)();
      OutputDebugStringA(&local_200c);
      InterlockedDecrement((LONG *)&DAT_1003de30);
      FUN_1000a570();
      local_100c = 0xffffffff;
    }
  }
  else {
    if ((param_5 != (byte *)0x0) &&
       (iVar3 = FUN_100102c0(&local_1004,0xfed,param_5,local_1008), iVar3 < 0)) {
      FUN_100101d0((uint *)&local_1004,(uint *)"_CrtDbgReport: String too long or IO Error");
    }
    if (param_1 == 2) {
      if (param_5 == (byte *)0x0) {
        local_302c = (uint *)0x1003a4b8;
      }
      else {
        local_302c = (uint *)0x1003a4cc;
      }
      FUN_100101d0((uint *)&local_300c,local_302c);
    }
    FUN_100101e0((uint *)&local_300c,(uint *)&local_1004);
    if (param_1 == 2) {
      if ((uRam1003de3c & 1) != 0) {
        FUN_100101e0((uint *)&local_300c,(uint *)&DAT_1003a4b4);
      }
      FUN_100101e0((uint *)&local_300c,(uint *)&DAT_1003a4b0);
    }
    if (param_2 == 0) {
      FUN_100101d0((uint *)&local_200c,(uint *)&local_300c);
    }
    else {
      uStackY_24 = 0x1000a895;
      iVar3 = FUN_100100d0(&local_200c,0x1000,(byte *)"%s(%d) : %s");
      if (iVar3 < 0) {
        FUN_100101d0((uint *)&local_200c,(uint *)"_CrtDbgReport: String too long or IO Error");
      }
    }
    if ((DAT_10042208 == (code *)0x0) || (iVar3 = (*DAT_10042208)(), iVar3 == 0)) {
      if (((*(uint *)(&DAT_1003de34 + param_1 * 4) & 1) != 0) &&
         (*(int *)(&DAT_1003de40 + param_1 * 4) != -1)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_3014;
        nNumberOfBytesToWrite = _strlen(&local_200c);
        WriteFile(*(HANDLE *)(&DAT_1003de40 + param_1 * 4),&local_200c,nNumberOfBytesToWrite,
                  lpNumberOfBytesWritten,lpOverlapped);
      }
      if ((*(uint *)(&DAT_1003de34 + param_1 * 4) & 2) != 0) {
        OutputDebugStringA(&local_200c);
      }
      if ((*(uint *)(&DAT_1003de34 + param_1 * 4) & 4) == 0) {
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1003de30);
        }
        local_100c = 0;
      }
      else {
        if (param_3 != 0) {
          __itoa(param_3,local_3028,10);
        }
        bVar1 = FUN_1000aa10();
        local_100c = CONCAT31(extraout_var,bVar1);
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1003de30);
        }
      }
    }
    else if (param_1 == 2) {
      InterlockedDecrement((LONG *)&DAT_1003de30);
    }
  }
  return local_100c;
}



// Function: FUN_1000aa10 @ 0x1000aa10

bool FUN_1000aa10(void)

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
  
  FUN_100103c0();
  if ((in_stack_00000014 == 0) &&
     (iVar1 = FUN_1000a680(2,0x1003a690,0x1da,0,(byte *)"szUserMessage != NULL"), iVar1 == 1)) {
    FUN_1000a570();
  }
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_10c,0x104);
  if (DVar2 == 0) {
    FUN_100101d0(local_10c,(uint *)"<program name unknown>");
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
  uStackY_44 = 0x1000acb2;
  iVar1 = FUN_100100d0((undefined1 *)local_1110,0x1000,
                       (byte *)
                       "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)"
                      );
  if (iVar1 < 0) {
    FUN_100101d0(local_1110,(uint *)"_CrtDbgReport: String too long or IO Error");
  }
  local_110 = FUN_10010980(local_1110,"Microsoft Visual C++ Debug Library",0x12012);
  if (local_110 == 3) {
    FUN_100106c0(0x16);
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  return local_110 == 4;
}



// Function: FUN_1000af1c @ 0x1000af1c

undefined4 FUN_1000af1c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}



// Function: __fload_withFB @ 0x1000af35

/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}



// Function: FUN_1000af78 @ 0x1000af78

uint __cdecl FUN_1000af78(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}



// Function: __math_exit @ 0x1000af9b

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



// Function: FUN_1000b080 @ 0x1000b080

float10 __fastcall
FUN_1000b080(char *param_1,uint param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  _exception local_24;
  
  local_24.arg2._0_4_ = param_7;
  local_24.arg2._4_4_ = param_8;
  local_24.retval = (double)in_ST0;
  local_24.arg1._0_4_ = param_5;
  local_24.arg1._4_4_ = param_6;
  local_24.name = param_1;
  FUN_10010b40(param_2,&local_24,&param_3);
  return (float10)local_24.retval;
}



// Function: __startOneArgErrorHandling @ 0x1000b097

/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __fastcall
__startOneArgErrorHandling
          (char *param_1,uint param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  _exception local_24;
  
  local_24.retval = (double)in_ST0;
  local_24.arg1._0_4_ = param_5;
  local_24.arg1._4_4_ = param_6;
  local_24.name = param_1;
  FUN_10010b40(param_2,&local_24,&param_3);
  return (float10)local_24.retval;
}



// Function: __setdefaultprecision @ 0x1000b0e0

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2003 Debug */

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}



// Function: FUN_1000b100 @ 0x1000b100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1000b100(void)

{
  uint local_20;
  
  local_20 = (uint)(_DAT_1003a708 < 0.0);
  return local_20;
}



// Function: __ms_p5_mp_test_fdiv @ 0x1000b160

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
  FUN_1000b100();
  return;
}



// Function: FUN_1000b1b0 @ 0x1000b1b0

void __cdecl FUN_1000b1b0(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint local_10;
  char local_c;
  
  uVar2 = FUN_10011230((int)*param_1);
  if (uVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1003e050 < 2) {
        local_10 = *(ushort *)(PTR_DAT_1003e05c + *param_1 * 2) & 4;
      }
      else {
        local_10 = FUN_10011160((int)*param_1,4);
      }
    } while (local_10 != 0);
  }
  local_c = *param_1;
  *param_1 = DAT_1003e054;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = local_c;
    local_c = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __cropzeros @ 0x1000b260

/* Library Function - Single Match
    __cropzeros
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __cropzeros(char *_Buf)

{
  char *pcVar1;
  char *local_8;
  
  for (; (*_Buf != '\0' && (*_Buf != DAT_1003e054)); _Buf = _Buf + 1) {
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
    if (*_Buf == DAT_1003e054) {
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



// Function: __positive @ 0x1000b340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __positive
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl __positive(double *arg)

{
  uint local_8;
  
  local_8 = (uint)(_DAT_1003a738 <= *arg);
  return local_8;
}



// Function: __fassign @ 0x1000b370

/* Library Function - Single Match
    __fassign
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FUN_10011ba0(&local_10,(byte *)number);
    *(uint *)argument = local_10;
  }
  else {
    FUN_10011b20(&local_c,(byte *)number);
    *(uint *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}



// Function: FUN_1000b3c0 @ 0x1000b3c0

undefined1 * __cdecl FUN_1000b3c0(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_10011ce0(*param_1,param_1[1],local_18,local_30);
  FUN_10011be0(param_2 + (uint)(0 < param_3) + (uint)(*local_8 == 0x2d),param_3 + 1,(int)local_8);
  FUN_1000b440(param_2,param_3,param_4,local_8,'\0');
  return param_2;
}



// Function: FUN_1000b440 @ 0x1000b440

undefined1 * __cdecl
FUN_1000b440(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

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
    *local_8 = DAT_1003e054;
  }
  puVar1 = FUN_100101d0((uint *)(local_8 + (uint)(param_5 == '\0') + param_2),(uint *)"e+000");
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



// Function: FUN_1000b5b0 @ 0x1000b5b0

char * __cdecl FUN_1000b5b0(undefined4 *param_1,char *param_2,size_t param_3)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_10011ce0(*param_1,param_1[1],local_18,local_30);
  FUN_10011be0(param_2 + (*local_8 == 0x2d),param_3 + local_8[1],(int)local_8);
  FUN_1000b620(param_2,param_3,local_8,'\0');
  return param_2;
}



// Function: FUN_1000b620 @ 0x1000b620

char * __cdecl FUN_1000b620(char *param_1,size_t param_2,int *param_3,char param_4)

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
    *local_8 = DAT_1003e054;
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



// Function: FUN_1000b760 @ 0x1000b760

void __cdecl FUN_1000b760(undefined4 *param_1,char *param_2,size_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  uint local_30 [6];
  int local_18;
  int local_14;
  char *local_8;
  
  FUN_10011ce0(*param_1,param_1[1],&local_18,local_30);
  iVar2 = local_14 + -1;
  local_8 = param_2 + (local_18 == 0x2d);
  FUN_10011be0(local_8,param_3,(int)&local_18);
  if ((local_14 + -1 < -4) || ((int)param_3 <= local_14 + -1)) {
    FUN_1000b440(param_2,param_3,param_4,&local_18,'\x01');
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
    FUN_1000b620(param_2,param_3,&local_18,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x1000b850

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    pcVar1 = FUN_1000b3c0((undefined4 *)arg,buffer,format,precision);
  }
  else if (sizeInBytes == 0x66) {
    pcVar1 = FUN_1000b5b0((undefined4 *)arg,buffer,format);
  }
  else {
    pcVar1 = (char *)FUN_1000b760((undefined4 *)arg,buffer,format,precision);
  }
  return (errno_t)pcVar1;
}



// Function: __shift @ 0x1000b8b0

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio */

void __cdecl __shift(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10011f30((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_1000b8e0 @ 0x1000b8e0

void FUN_1000b8e0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003deec);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003dedc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003decc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003deac);
  return;
}



// Function: FUN_1000b920 @ 0x1000b920

void FUN_1000b920(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x30; local_8 = local_8 + 1) {
    if ((((*(int *)(&DAT_1003dea8 + local_8 * 4) != 0) && (local_8 != 0x11)) && (local_8 != 0xd)) &&
       ((local_8 != 9 && (local_8 != 1)))) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1003dea8 + local_8 * 4));
      FUN_1000c550(*(void **)(&DAT_1003dea8 + local_8 * 4),2);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003decc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003dedc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003deec);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003deac);
  return;
}



// Function: FUN_1000b9c0 @ 0x1000b9c0

void __thiscall FUN_1000b9c0(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  
  if (*(int *)(&DAT_1003dea8 + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_1000bac0((void *)0x18,2,0x1003a748,0xe1);
    this_00 = extraout_ECX;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
      this_00 = extraout_ECX_00;
    }
    FUN_1000b9c0(this_00,0x11);
    if (*(int *)(&DAT_1003dea8 + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_1003dea8 + param_1 * 4) = lpCriticalSection;
    }
    else {
      FUN_1000c550(lpCriticalSection,2);
    }
    FUN_1000ba60(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1003dea8 + param_1 * 4));
  return;
}



// Function: FUN_1000ba60 @ 0x1000ba60

void __cdecl FUN_1000ba60(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1003dea8 + param_1 * 4));
  return;
}



// Function: FUN_1000ba80 @ 0x1000ba80

void __cdecl FUN_1000ba80(LPCSTR param_1)

{
  FatalAppExitA(0,param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}



// Function: FUN_1000baa0 @ 0x1000baa0

void __cdecl FUN_1000baa0(void *param_1)

{
  FUN_1000bb10(param_1,(uint)param_1,DAT_100408e0,1,0,0);
  return;
}



// Function: FUN_1000bac0 @ 0x1000bac0

void __cdecl FUN_1000bac0(void *param_1,uint param_2,int param_3,int param_4)

{
  FUN_1000bb10(param_1,(uint)param_1,DAT_100408e0,param_2,param_3,param_4);
  return;
}



// Function: FUN_1000baf0 @ 0x1000baf0

void __cdecl FUN_1000baf0(void *param_1,int param_2)

{
  FUN_1000bb10(param_1,(uint)param_1,param_2,1,0,0);
  return;
}



// Function: FUN_1000bb10 @ 0x1000bb10

int * __thiscall
FUN_1000bb10(void *this,uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  void *extraout_ECX;
  
  while( true ) {
    FUN_1000b9c0(this,9);
    piVar1 = FUN_1000bb90(param_1,param_3,param_4,param_5);
    FUN_1000ba60(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (param_2 == 0) break;
    iVar2 = __callnewh(param_1);
    this = extraout_ECX;
    if (iVar2 == 0) {
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



// Function: FUN_1000bb70 @ 0x1000bb70

void __cdecl FUN_1000bb70(uint param_1)

{
  FUN_1000bb90(param_1,1,0,0);
  return;
}



// Function: FUN_1000bb90 @ 0x1000bb90

int * __cdecl FUN_1000bb90(uint param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  bVar2 = false;
  if ((((DAT_1003df68 & 4) != 0) && (iVar4 = FUN_1000cc60(), iVar4 == 0)) &&
     (iVar4 = FUN_1000a680(2,0x1003a82c,0x141,0,(byte *)"_CrtCheckMemory()"), iVar4 == 1)) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar4 = DAT_1003df6c;
  if (DAT_1003df6c == DAT_1003df70) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar6 = (*(code *)PTR_FUN_1003e2a0)(1,0,param_1,param_2,DAT_1003df6c,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == 0) {
      iVar4 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    else {
      iVar4 = FUN_1000a680(0,0,0,0,(byte *)"Client hook allocation failure at file %hs line %d.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    piVar5 = (int *)0x0;
  }
  else {
    if (((param_2 & 0xffff) != 2) && ((DAT_1003df68 & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < 0xffffffe1) && (param_1 + 0x24 < 0xffffffe1)) {
      if (((((param_2 & 0xffff) != 4) && (param_2 != 1)) && ((param_2 & 0xffff) != 2)) &&
         ((param_2 != 3 && (iVar6 = FUN_1000a680(1,0,0,0,&DAT_1003a7cc), iVar6 == 1)))) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = FUN_10012370((void *)(param_1 + 0x24),param_1 + 0x24);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        DAT_1003df6c = DAT_1003df6c + 1;
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
          DAT_1004075c = DAT_1004075c + param_1;
          DAT_10040764 = DAT_10040764 + param_1;
          if (DAT_10040768 < DAT_10040764) {
            DAT_10040768 = DAT_10040764;
          }
          piVar3 = piVar5;
          if (DAT_10040760 != (int *)0x0) {
            DAT_10040760[1] = (int)piVar5;
            piVar3 = DAT_10040758;
          }
          DAT_10040758 = piVar3;
          *piVar5 = (int)DAT_10040760;
          piVar5[1] = 0;
          piVar5[2] = param_3;
          piVar5[3] = param_4;
          piVar5[4] = param_1;
          piVar5[5] = param_2;
          piVar5[6] = iVar4;
          DAT_10040760 = piVar5;
        }
        _memset(piVar5 + 7,(uint)DAT_1003df74,4);
        _memset((void *)((int)piVar5 + param_1 + 0x20),(uint)DAT_1003df74,4);
        _memset(piVar5 + 8,(uint)DAT_1003df76,param_1);
        piVar5 = piVar5 + 8;
      }
    }
    else {
      iVar4 = FUN_1000a680(1,0,0,0,(byte *)"Invalid allocation size: %u bytes.\n");
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



// Function: FUN_1000beb0 @ 0x1000beb0

void __cdecl FUN_1000beb0(int param_1,int param_2)

{
  __calloc_dbg(param_1,param_2,1,0,0);
  return;
}



// Function: __calloc_dbg @ 0x1000bed0

/* Library Function - Single Match
    __calloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined1 * __cdecl __calloc_dbg(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 *local_10;
  
  puVar1 = (undefined1 *)FUN_1000bac0((void *)(param_2 * param_1),param_3,param_4,param_5);
  if (puVar1 != (undefined1 *)0x0) {
    for (local_10 = puVar1; local_10 < puVar1 + param_2 * param_1; local_10 = local_10 + 1) {
      *local_10 = 0;
    }
  }
  return puVar1;
}



// Function: FUN_1000bf30 @ 0x1000bf30

void __cdecl FUN_1000bf30(void *param_1,void *param_2)

{
  FUN_1000bf50(param_1,param_1,param_2,1,0,0);
  return;
}



// Function: FUN_1000bf50 @ 0x1000bf50

int * __thiscall
FUN_1000bf50(void *this,void *param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_1000b9c0(this,9);
  piVar1 = FUN_1000bf90(param_1,param_2,param_3,param_4,param_5,1);
  FUN_1000ba60(9);
  return piVar1;
}



// Function: FUN_1000bf90 @ 0x1000bf90

int * __cdecl
FUN_1000bf90(void *param_1,void *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  BOOL BVar6;
  void *this;
  void *extraout_ECX;
  bool bVar7;
  int *local_10;
  
  if (param_1 == (void *)0x0) {
    piVar2 = (int *)FUN_1000bac0(param_2,param_3,param_4,param_5);
  }
  else if ((param_6 == 0) || (param_2 != (void *)0x0)) {
    if (((DAT_1003df68 & 4) != 0) &&
       ((iVar3 = FUN_1000cc60(), iVar3 == 0 &&
        (iVar3 = FUN_1000a680(2,0x1003a82c,0x239,0,(byte *)"_CrtCheckMemory()"), iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar3 = DAT_1003df6c;
    if (DAT_1003df6c == DAT_1003df70) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar5 = (*(code *)PTR_FUN_1003e2a0)(2,param_1,param_2,param_3,DAT_1003df6c,param_4,param_5);
    if (iVar5 == 0) {
      if (param_4 == 0) {
        iVar3 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        iVar3 = FUN_1000a680(0,0,0,0,(byte *)
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
         (iVar5 = FUN_1000a680(1,0,0,0,&DAT_1003a7cc), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      BVar6 = FUN_1000d0c0((int)param_1);
      if ((BVar6 == 0) &&
         (iVar5 = FUN_1000a680(2,0x1003a82c,0x261,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar4 = (int *)((int)param_1 + -0x20);
      bVar7 = *(int *)((int)param_1 + -0xc) == 3;
      if (bVar7) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar5 = FUN_1000a680(2,0x1003a82c,0x26b,0,
                                    (byte *)
                                    "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ"
                                   ), iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
        this = (void *)0x0;
      }
      else {
        if (((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2) && ((param_3 & 0xffff) == 1)) {
          param_3 = 2;
        }
        this = (void *)(param_3 & 0xffff);
        if (((void *)(*(uint *)((int)param_1 + -0xc) & 0xffff) != this) &&
           (iVar5 = FUN_1000a680(2,0x1003a82c,0x272,0,
                                 (byte *)"_BLOCK_TYPE(pOldBlock->nBlockUse)==_BLOCK_TYPE(nBlockUse)"
                                ), this = extraout_ECX, iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      if (param_6 == 0) {
        local_10 = FUN_100123f0(this,piVar4,(int)param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_10 = FUN_100124a0(piVar4,piVar4,(void *)((int)param_2 + 0x24));
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      DAT_1003df6c = DAT_1003df6c + 1;
      if (!bVar7) {
        DAT_1004075c = (DAT_1004075c - local_10[4]) + (int)param_2;
        DAT_10040764 = (DAT_10040764 - local_10[4]) + (int)param_2;
        if (DAT_10040768 < DAT_10040764) {
          DAT_10040768 = DAT_10040764;
        }
      }
      piVar2 = local_10 + 8;
      if ((void *)local_10[4] < param_2) {
        _memset((void *)((int)piVar2 + local_10[4]),(uint)DAT_1003df76,(int)param_2 - local_10[4]);
      }
      _memset((void *)((int)piVar2 + (int)param_2),(uint)DAT_1003df74,4);
      if (!bVar7) {
        local_10[2] = param_4;
        local_10[3] = param_5;
        local_10[6] = iVar3;
      }
      local_10[4] = (int)param_2;
      if (((param_6 == 0) && (local_10 != piVar4)) &&
         (iVar3 = FUN_1000a680(2,0x1003a82c,0x2a8,0,
                               (byte *)"fRealloc || (!fRealloc && pNewBlock == pOldBlock)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      if ((local_10 != piVar4) && (!bVar7)) {
        if (*local_10 == 0) {
          if ((DAT_10040758 != piVar4) &&
             (iVar3 = FUN_1000a680(2,0x1003a82c,0x2b7,0,(byte *)"_pLastBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10040758 = (int *)local_10[1];
        }
        else {
          *(int *)(*local_10 + 4) = local_10[1];
        }
        if (local_10[1] == 0) {
          if ((DAT_10040760 != piVar4) &&
             (iVar3 = FUN_1000a680(2,0x1003a82c,0x2c2,0,(byte *)"_pFirstBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10040760 = (int *)*local_10;
        }
        else {
          *(int *)local_10[1] = *local_10;
        }
        if (DAT_10040760 == (int *)0x0) {
          DAT_10040758 = local_10;
        }
        else {
          DAT_10040760[1] = (int)local_10;
        }
        *local_10 = (int)DAT_10040760;
        local_10[1] = 0;
        DAT_10040760 = local_10;
      }
    }
    else {
      iVar3 = FUN_1000a680(1,0,0,0,(byte *)"Allocation too large or negative: %u bytes.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    FUN_1000c550(param_1,param_3);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



// Function: FUN_1000c4b0 @ 0x1000c4b0

void __cdecl FUN_1000c4b0(void *param_1,void *param_2)

{
  FUN_1000c4d0(param_1,param_1,param_2,1,0,0);
  return;
}



// Function: FUN_1000c4d0 @ 0x1000c4d0

int * __thiscall
FUN_1000c4d0(void *this,void *param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_1000b9c0(this,9);
  piVar1 = FUN_1000bf90(param_1,param_2,param_3,param_4,param_5,0);
  FUN_1000ba60(9);
  return piVar1;
}



// Function: FUN_1000c510 @ 0x1000c510

void __cdecl FUN_1000c510(void *param_1)

{
  FUN_1000c550(param_1,1);
  return;
}



// Function: FUN_1000c530 @ 0x1000c530

void __cdecl FUN_1000c530(void *param_1)

{
  FUN_1000c580(param_1,1);
  return;
}



// Function: FUN_1000c550 @ 0x1000c550

void __cdecl FUN_1000c550(void *param_1,int param_2)

{
  void *in_ECX;
  
  FUN_1000b9c0(in_ECX,9);
  FUN_1000c580(param_1,param_2);
  FUN_1000ba60(9);
  return;
}



// Function: FUN_1000c580 @ 0x1000c580

void __cdecl FUN_1000c580(void *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int *_Dst;
  void *this;
  void *this_00;
  
  if ((((DAT_1003df68 & 4) != 0) && (iVar2 = FUN_1000cc60(), iVar2 == 0)) &&
     (iVar2 = FUN_1000a680(2,0x1003a82c,0x3e1,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (void *)0x0) {
    iVar2 = (*(code *)PTR_FUN_1003e2a0)(3,param_1,0,param_2,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      BVar3 = FUN_1000d0c0((int)param_1);
      if ((BVar3 == 0) &&
         (iVar2 = FUN_1000a680(2,0x1003a82c,0x3f3,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = (int *)((int)param_1 + -0x20);
      if ((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
         && (((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2 &&
             ((*(int *)((int)param_1 + -0xc) != 3 &&
              (iVar2 = FUN_1000a680(2,0x1003a82c,0x3f9,0,
                                    (byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))
             ))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((DAT_1003df68 & 4) == 0) {
        iVar2 = FUN_1000cbd0((char *)((int)param_1 + -4),DAT_1003df74,4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_1000a680(1,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar2 = FUN_1000cbd0((char *)((int)param_1 + *(int *)((int)param_1 + -0x10)),DAT_1003df74,4)
        ;
        if ((iVar2 == 0) &&
           (iVar2 = FUN_1000a680(1,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((int)param_1 + -0xc) == 3) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar2 = FUN_1000a680(2,0x1003a82c,0x40e,0,
                                    (byte *)
                                    "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ"),
              iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _memset(_Dst,(uint)DAT_1003df75,*(int *)((int)param_1 + -0x10) + 0x24);
        FUN_10012690(this,_Dst);
      }
      else {
        if ((*(int *)((int)param_1 + -0xc) == 2) && (param_2 == 1)) {
          param_2 = 2;
        }
        if ((*(int *)((int)param_1 + -0xc) != param_2) &&
           (iVar2 = FUN_1000a680(2,0x1003a82c,0x41b,0,(byte *)"pHead->nBlockUse == nBlockUse"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_10040764 = DAT_10040764 - *(int *)((int)param_1 + -0x10);
        if ((DAT_1003df68 & 2) == 0) {
          if (*_Dst == 0) {
            if ((DAT_10040758 != _Dst) &&
               (iVar2 = FUN_1000a680(2,0x1003a82c,0x42a,0,(byte *)"_pLastBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10040758 = *(int **)((int)param_1 + -0x1c);
          }
          else {
            *(undefined4 *)(*_Dst + 4) = *(undefined4 *)((int)param_1 + -0x1c);
          }
          if (*(int *)((int)param_1 + -0x1c) == 0) {
            if ((DAT_10040760 != _Dst) &&
               (iVar2 = FUN_1000a680(2,0x1003a82c,0x434,0,(byte *)"_pFirstBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10040760 = (int *)*_Dst;
          }
          else {
            **(int **)((int)param_1 + -0x1c) = *_Dst;
          }
          _memset(_Dst,(uint)DAT_1003df75,*(int *)((int)param_1 + -0x10) + 0x24);
          FUN_10012690(this_00,_Dst);
        }
        else {
          *(undefined4 *)((int)param_1 + -0xc) = 0;
          _memset(param_1,(uint)DAT_1003df75,*(size_t *)((int)param_1 + -0x10));
        }
      }
    }
  }
  return;
}



// Function: FUN_1000c970 @ 0x1000c970

void __thiscall FUN_1000c970(void *this,int param_1)

{
  FUN_1000c990(this,param_1,1);
  return;
}



// Function: FUN_1000c990 @ 0x1000c990

undefined4 __thiscall FUN_1000c990(void *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  
  if ((DAT_1003df68 & 4) != 0) {
    iVar2 = FUN_1000cc60();
    if ((iVar2 == 0) &&
       (iVar2 = FUN_1000a680(2,0x1003a82c,0x47c,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    this = (void *)0x0;
  }
  FUN_1000b9c0(this,9);
  BVar4 = FUN_1000d0c0(param_1);
  if ((BVar4 == 0) &&
     (iVar2 = FUN_1000a680(2,0x1003a82c,0x485,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
      ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
     ((*(int *)(param_1 + -0xc) != 3 &&
      (iVar2 = FUN_1000a680(2,0x1003a82c,0x48b,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
      iVar2 == 1)))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((*(int *)(param_1 + -0xc) == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if (((*(int *)(param_1 + -0xc) != 3) && (*(int *)(param_1 + -0xc) != param_2)) &&
     (iVar2 = FUN_1000a680(2,0x1003a82c,0x492,0,(byte *)"pHead->nBlockUse == nBlockUse"), iVar2 == 1
     )) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + -0x10);
  FUN_1000ba60(9);
  return uVar3;
}



// Function: FUN_1000caf0 @ 0x1000caf0

undefined4 __cdecl FUN_1000caf0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1003df70;
  DAT_1003df70 = param_1;
  return uVar1;
}



// Function: FUN_1000cb10 @ 0x1000cb10

void __thiscall FUN_1000cb10(void *this,int param_1,undefined4 param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  FUN_1000b9c0(this,9);
  BVar2 = FUN_1000d0c0(param_1);
  if (BVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)(param_1 + -0xc) != 3 &&
        (iVar3 = FUN_1000a680(2,0x1003a82c,0x4d3,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)")
        , iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  FUN_1000ba60(9);
  return;
}



// Function: FUN_1000cbb0 @ 0x1000cbb0

undefined * __cdecl FUN_1000cbb0(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_1003e2a0;
  PTR_FUN_1003e2a0 = param_1;
  return puVar1;
}



// Function: FUN_1000cbd0 @ 0x1000cbd0

undefined4 __cdecl FUN_1000cbd0(char *param_1,char param_2,int param_3)

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
    iVar4 = FUN_1000a680(0,0,0,0,(byte *)
                                 "memory check error at 0x%08X = 0x%02X, should be 0x%02X.\n");
    if (iVar4 == 1) break;
    local_8 = 0;
  }
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}



// Function: FUN_1000cc60 @ 0x1000cc60

undefined4 FUN_1000cc60(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  void *in_ECX;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = 1;
  if ((DAT_1003df68 & 1) == 0) {
    local_8 = 1;
  }
  else {
    FUN_1000b9c0(in_ECX,9);
    iVar3 = FUN_10012700();
    if ((iVar3 == -1) || (iVar3 == -2)) {
      for (local_c = DAT_10040760; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
        bVar2 = true;
        iVar3 = FUN_1000cbd0((char *)(local_c + 7),DAT_1003df74,4);
        if (iVar3 == 0) {
          iVar3 = FUN_1000a680(0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        iVar3 = FUN_1000cbd0((char *)((int)local_c + local_c[4] + 0x20),DAT_1003df74,4);
        if (iVar3 == 0) {
          iVar3 = FUN_1000a680(0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if ((local_c[5] == 0) &&
           (iVar3 = FUN_1000cbd0((char *)(local_c + 8),DAT_1003df75,local_c[4]), iVar3 == 0)) {
          iVar3 = FUN_1000a680(0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if (!bVar2) {
          if ((local_c[2] != 0) &&
             (iVar3 = FUN_1000a680(0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar3 == 1))
          {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          iVar3 = FUN_1000a680(0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          local_8 = 0;
        }
      }
      FUN_1000ba60(9);
    }
    else {
      switch(iVar3) {
      case -6:
        iVar3 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -5:
        iVar3 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -4:
        iVar3 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -3:
        iVar3 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      default:
        iVar3 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      FUN_1000ba60(9);
      local_8 = 0;
    }
  }
  return local_8;
}



// Function: FUN_1000cfd0 @ 0x1000cfd0

int __cdecl FUN_1000cfd0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1003df68;
  if (param_1 != -1) {
    DAT_1003df68 = param_1;
  }
  return iVar1;
}



// Function: FUN_1000d000 @ 0x1000d000

void __thiscall FUN_1000d000(void *this,undefined *param_1,undefined4 param_2)

{
  undefined4 *local_8;
  
  if ((DAT_1003df68 & 1) != 0) {
    FUN_1000b9c0(this,9);
    for (local_8 = DAT_10040760; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      if ((local_8[5] & 0xffff) == 4) {
        (*(code *)param_1)(local_8 + 8,param_2);
      }
    }
    FUN_1000ba60(9);
  }
  return;
}



// Function: FID_conflict:AtlIsValidAddress @ 0x1000d070

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



// Function: FUN_1000d0c0 @ 0x1000d0c0

BOOL __cdecl FUN_1000d0c0(int param_1)

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
      uVar3 = FUN_10012820(param_1 + -0x20);
      if (uVar3 == 0) {
        if ((DAT_10040770 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_1004208c,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = FUN_10012880(uVar3,param_1 + -0x20);
      }
    }
  }
  return BVar1;
}



// Function: FUN_1000d150 @ 0x1000d150

undefined4 __cdecl
FUN_1000d150(void *param_1,UINT_PTR param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  void *this;
  
  BVar1 = FUN_1000d0c0((int)param_1);
  if (BVar1 != 0) {
    FUN_1000b9c0(this,9);
    if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) || (*(int *)((int)param_1 + -0xc) == 1))
         || ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
        (*(int *)((int)param_1 + -0xc) == 3)) &&
       (((iVar2 = FID_conflict_AtlIsValidAddress(param_1,param_2,1), iVar2 != 0 &&
         (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
        (*(int *)((int)param_1 + -8) <= DAT_1003df6c)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)((int)param_1 + -0x14);
      }
      FUN_1000ba60(9);
      return 1;
    }
    FUN_1000ba60(9);
  }
  return 0;
}



// Function: FUN_1000d240 @ 0x1000d240

undefined4 __cdecl FUN_1000d240(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_100421fc;
  DAT_100421fc = param_1;
  return uVar1;
}



// Function: FUN_1000d260 @ 0x1000d260

void __cdecl FUN_1000d260(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  void *in_ECX;
  undefined4 *local_c;
  int local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FUN_1000b9c0(in_ECX,9);
    *param_1 = DAT_10040760;
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      param_1[local_8 + 6] = 0;
      param_1[local_8 + 1] = 0;
    }
    for (local_c = DAT_10040760; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
      if ((local_c[5] & 0xffff) < 5) {
        param_1[(local_c[5] & 0xffff) + 1] = param_1[(local_c[5] & 0xffff) + 1] + 1;
        param_1[(local_c[5] & 0xffff) + 6] = param_1[(local_c[5] & 0xffff) + 6] + local_c[4];
      }
      else {
        iVar2 = FUN_1000a680(0,0,0,0,(byte *)"Bad memory block found at 0x%08X.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    param_1[0xb] = DAT_10040768;
    param_1[0xc] = DAT_1004075c;
    FUN_1000ba60(9);
  }
  return;
}



// Function: FUN_1000d3d0 @ 0x1000d3d0

undefined4 __cdecl FUN_1000d3d0(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar2 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
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
         ((local_8 != 0 && ((local_8 != 2 || ((DAT_1003df68 & 0x10) != 0)))))) {
        local_c = 1;
      }
    }
    param_1[0xb] = *(int *)(param_3 + 0x2c) - *(int *)(param_2 + 0x2c);
    param_1[0xc] = *(int *)(param_3 + 0x30) - *(int *)(param_2 + 0x30);
    *param_1 = 0;
  }
  return local_c;
}



// Function: FUN_1000d500 @ 0x1000d500

void __cdecl FUN_1000d500(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  void *in_ECX;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_1000b9c0(in_ECX,9);
  iVar2 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
  }
  local_8 = DAT_10040760;
  do {
    if ((local_8 == (undefined4 *)0x0) || (local_8 == local_c)) {
      FUN_1000ba60(9);
      iVar2 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
    if ((((local_8[5] & 0xffff) != 3) && ((local_8[5] & 0xffff) != 0)) &&
       (((local_8[5] & 0xffff) != 2 || ((DAT_1003df68 & 0x10) != 0)))) {
      if (local_8[2] != 0) {
        iVar2 = FID_conflict_AtlIsValidAddress((void *)local_8[2],1,0);
        if (iVar2 == 0) {
          iVar2 = FUN_1000a680(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = FUN_1000a680(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = FUN_1000a680(0,0,0,0,(byte *)"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_8[5] & 0xffff) == 4) {
        iVar2 = FUN_1000a680(0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n")
        ;
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_100421fc == (code *)0x0) {
          FUN_1000d7c0((int)local_8);
        }
        else {
          (*DAT_100421fc)(local_8 + 8,local_8[4]);
        }
      }
      else if (local_8[5] == 1) {
        iVar2 = FUN_1000a680(0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_1000d7c0((int)local_8);
      }
      else if ((local_8[5] & 0xffff) == 2) {
        iVar2 = FUN_1000a680(0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_1000d7c0((int)local_8);
      }
    }
    local_8 = (undefined4 *)*local_8;
  } while( true );
}



// Function: FUN_1000d7c0 @ 0x1000d7c0

void __cdecl FUN_1000d7c0(int param_1)

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
    if (DAT_1003e050 < 2) {
      local_5c = *(ushort *)(PTR_DAT_1003e05c + (uint)bVar1 * 2) & 0x157;
    }
    else {
      local_5c = FUN_10011160((uint)bVar1,0x157);
    }
    if (local_5c == 0) {
      bVar1 = 0x20;
    }
    local_4c[local_50] = bVar1;
    FUN_10014430(local_38 + local_50 * 3,0x1003add0);
    local_50 = local_50 + 1;
  }
  local_4c[local_50] = 0;
  iVar3 = FUN_1000a680(0,0,0,0,(byte *)" Data: <%s> %s\n");
  if (iVar3 == 1) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}



// Function: FUN_1000d8e0 @ 0x1000d8e0

undefined4 FUN_1000d8e0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  FUN_1000d260(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_1003df68 & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_1000a680(0,0,0,0,&DAT_1003a7cc);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_1000d500((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_1000d960 @ 0x1000d960

void __cdecl FUN_1000d960(int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  if (param_1 != 0) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      iVar2 = FUN_1000a680(0,0,0,0,(byte *)"%ld bytes in %ld %hs Blocks.\n");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = FUN_1000a680(0,0,0,0,(byte *)"Largest number used: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FUN_1000a680(0,0,0,0,(byte *)"Total allocations: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



// Function: FUN_1000da30 @ 0x1000da30

undefined4 __cdecl
FUN_1000da30(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,char param_8)

{
  undefined4 uVar1;
  
  if (param_5->magicNumber_and_bbtFlags == 0x19930520) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1000ea40();
  }
  if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
    if (param_5->nTryBlocks != 0) {
      if (((*(int *)param_1 == -0x1f928c9d) && (0x19930520 < *(uint *)(param_1 + 0x14))) &&
         (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)) {
        uVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar1);
        return uVar1;
      }
      FUN_1000db20(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5->maxState != 0) && (param_6 == 0)) {
    FUN_1000dfa0((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// Function: FUN_1000db20 @ 0x1000db20

void __cdecl
FUN_1000db20(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,char param_6,int param_7,EHRegistrationNode *param_8)

{
  bool bVar1;
  DWORD *pDVar2;
  undefined3 extraout_var;
  int iVar3;
  int local_28;
  int local_24;
  _s_HandlerType *local_20;
  undefined4 *local_1c;
  uint local_18;
  _s_TryBlockMapEntry *local_14;
  uint local_10;
  uchar local_c;
  int local_8;
  
  local_c = '\0';
  local_8 = *(int *)(param_2 + 8);
  if ((local_8 < -1) || (param_5->maxState <= local_8)) {
    FUN_1000ea40();
  }
  if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
      (*(int *)(param_1 + 0x14) == 0x19930520)) && (*(int *)(param_1 + 0x1c) == 0)) {
    pDVar2 = FUN_1000e7c0();
    if (pDVar2[0x1b] == 0) {
      return;
    }
    pDVar2 = FUN_1000e7c0();
    param_1 = (EHExceptionRecord *)pDVar2[0x1b];
    pDVar2 = FUN_1000e7c0();
    param_3 = (_CONTEXT *)pDVar2[0x1c];
    local_c = '\x01';
    bVar1 = FUN_100145d0(param_1,1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_1000ea40();
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
       ((*(int *)(param_1 + 0x14) == 0x19930520 && (*(int *)(param_1 + 0x1c) == 0)))) {
      FUN_1000ea40();
    }
  }
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     (*(int *)(param_1 + 0x14) == 0x19930520)) {
    local_14 = (_s_TryBlockMapEntry *)FUN_10009e60((int)param_5,param_7,local_8,&local_18,&local_10)
    ;
    for (; local_18 < local_10; local_18 = local_18 + 1) {
      if ((local_14->tryLow <= local_8) && (local_8 <= local_14->tryHigh)) {
        local_20 = local_14->pHandlerArray;
        for (local_28 = local_14->nCatches; 0 < local_28; local_28 = local_28 + -1) {
          local_1c = *(undefined4 **)(*(int *)(param_1 + 0x1c) + 0xc);
          for (local_24 = **(int **)(*(int *)(param_1 + 0x1c) + 0xc); local_1c = local_1c + 1,
              0 < local_24; local_24 = local_24 + -1) {
            iVar3 = FUN_1000dee0(&local_20->adjectives,(uint *)*local_1c,*(uint **)(param_1 + 0x1c))
            ;
            if (iVar3 != 0) {
              CatchIt(param_1,param_2,param_3,param_4,param_5,local_20,(_s_CatchableType *)*local_1c
                      ,local_14,param_7,param_8,local_c);
              goto LAB_1000dc62;
            }
          }
          local_20 = local_20 + 1;
        }
      }
LAB_1000dc62:
      local_14 = local_14 + 1;
    }
    if (param_6 != '\0') {
      ___DestructExceptionObject((int)param_1);
    }
  }
  else if (param_6 == '\0') {
    FUN_1000ddc0(param_1,param_2,param_3,param_4,param_5,local_8,param_7,param_8);
  }
  else {
    FUN_1000e990();
  }
  return;
}



// Function: FUN_1000ddc0 @ 0x1000ddc0

void __cdecl
FUN_1000ddc0(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  DWORD *pDVar1;
  int iVar2;
  uint local_10;
  _s_TryBlockMapEntry *local_c;
  uint local_8;
  
  pDVar1 = FUN_1000e7c0();
  if ((pDVar1[0x1a] == 0) ||
     (iVar2 = FUN_10009d00((undefined4 *)param_1,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 == 0)) {
    local_c = (_s_TryBlockMapEntry *)FUN_10009e60((int)param_5,param_7,param_6,&local_10,&local_8);
    for (; local_10 < local_8; local_10 = local_10 + 1) {
      if (((local_c->tryLow <= param_6) && (param_6 <= local_c->tryHigh)) &&
         ((local_c->pHandlerArray[local_c->nCatches + -1].pType == (TypeDescriptor *)0x0 ||
          ((char)local_c->pHandlerArray[local_c->nCatches + -1].pType[1].hash == '\0')))) {
        CatchIt(param_1,param_2,param_3,param_4,param_5,
                local_c->pHandlerArray + local_c->nCatches + -1,(_s_CatchableType *)0x0,local_c,
                param_7,param_8,'\x01');
      }
      local_c = local_c + 1;
    }
  }
  return;
}



// Function: FUN_1000dee0 @ 0x1000dee0

undefined4 __cdecl FUN_1000dee0(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  undefined4 local_8;
  
  if ((param_1[1] == 0) || (*(char *)(param_1[1] + 8) == '\0')) {
    local_8 = 1;
  }
  else if ((param_1[1] == param_2[1]) ||
          (iVar1 = _strcmp((char *)(param_1[1] + 8),(char *)(param_2[1] + 8)), iVar1 == 0)) {
    if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
        (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
       (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) {
      local_8 = 1;
    }
    else {
      local_8 = 0;
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



// Function: FUN_1000dfa0 @ 0x1000dfa0

void __cdecl FUN_1000dfa0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1003ae58;
  puStack_10 = &LAB_100146ec;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (local_20 = *(int *)(param_1 + 8); local_8 = 0xffffffff, local_20 != param_4;
      local_20 = *(int *)(*(int *)(param_3 + 8) + local_20 * 8)) {
    if ((local_20 < 0) || (*(int *)(param_3 + 4) <= local_20)) {
      FUN_1000ea40();
    }
    local_8 = 0;
    if (*(int *)(*(int *)(param_3 + 8) + 4 + local_20 * 8) != 0) {
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + local_20 * 8),param_1,0x103)
      ;
    }
  }
  if (local_20 != param_4) {
    FUN_1000ea40();
  }
  *(int *)(param_1 + 8) = local_20;
  ExceptionList = local_14;
  return;
}



// Function: ArrayUnwindFilter @ 0x1000e0a0

/* Library Function - Single Match
    int __cdecl ArrayUnwindFilter(struct _EXCEPTION_POINTERS *)
   
   Library: Visual Studio */

int __cdecl ArrayUnwindFilter(_EXCEPTION_POINTERS *param_1)

{
  if (param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) {
    FUN_1000e990();
  }
  return 0;
}



// Function: CatchIt @ 0x1000e0d0

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (_s_CatchableType *)0x0) {
    FUN_1000e330((int)param_1,(int)param_2,&param_6->adjectives,(uint *)param_7);
  }
  if (param_10 == (EHRegistrationNode *)0x0) {
    FUN_10009b80(param_2,(PEXCEPTION_RECORD)param_1);
  }
  else {
    FUN_10009b80(param_10,(PEXCEPTION_RECORD)param_1);
  }
  FUN_1000dfa0((int)param_2,param_4,(int)param_5,param_8->tryLow);
  *(__ehstate_t *)(param_2 + 8) = param_8->tryHigh + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_1000e190((DWORD)param_1,param_2,(DWORD)param_3,param_5,param_6->addressOfHandler,param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_10009b10(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// Function: FUN_1000e190 @ 0x1000e190

void FUN_1000e190(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1003ae68;
  puStack_10 = &LAB_100146ec;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_1000e7c0();
  FUN_1000e7c0();
  pDVar1 = FUN_1000e7c0();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_1000e7c0();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  FUN_10009c50(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_1000e26d();
  FUN_1000e2cb();
  return;
}



// Function: FUN_1000e26d @ 0x1000e26d

void FUN_1000e26d(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_1000e7c0();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_1000e7c0();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((**(int **)(unaff_EBP + 8) == -0x1f928c9d) &&
       (*(int *)(*(int *)(unaff_EBP + 8) + 0x10) == 3)) &&
      (*(int *)(*(int *)(unaff_EBP + 8) + 0x14) == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    ___DestructExceptionObject(*(int *)(unaff_EBP + 8));
  }
  return;
}



// Function: FUN_1000e2cb @ 0x1000e2cb

undefined4 FUN_1000e2cb(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x2c);
}



// Function: FUN_1000e2e0 @ 0x1000e2e0

undefined4 __cdecl FUN_1000e2e0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)*param_1;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     (piVar1[7] == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000e330 @ 0x1000e330

void __cdecl FUN_1000e330(int param_1,int param_2,uint *param_3,uint *param_4)

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
  uint uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1003ae80;
  puStack_10 = &LAB_100146ec;
  local_14 = ExceptionList;
  if (((param_3[1] != 0) && (*(char *)(param_3[1] + 8) != '\0')) && (param_3[2] != 0)) {
    piVar1 = (int *)(param_2 + 0xc + param_3[2]);
    local_8 = 0;
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        if (param_4[6] == 0) {
          ExceptionList = &local_14;
          bVar2 = FUN_100145d0(*(void **)(param_1 + 0x18),1);
          if ((CONCAT31(extraout_var_03,bVar2) == 0) ||
             (bVar2 = FUN_10014600(piVar1,1), CONCAT31(extraout_var_04,bVar2) == 0)) {
            FUN_1000ea40();
          }
          else {
            uVar5 = param_4[5];
            puVar4 = (undefined4 *)
                     FID_conflict____AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
            FUN_10011f30(piVar1,puVar4,uVar5);
          }
        }
        else {
          ExceptionList = &local_14;
          bVar2 = FUN_100145d0(*(void **)(param_1 + 0x18),1);
          if (((CONCAT31(extraout_var_05,bVar2) == 0) ||
              (bVar2 = FUN_10014600(piVar1,1), CONCAT31(extraout_var_06,bVar2) == 0)) ||
             (iVar3 = _ValidateExecute((_func_int *)param_4[6]), iVar3 == 0)) {
            FUN_1000ea40();
          }
          else if ((*param_4 & 4) == 0) {
            FID_conflict____AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
            FUN_10009b60(piVar1,(undefined *)param_4[6]);
          }
          else {
            FID_conflict____AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
            FUN_10009b70(piVar1,(undefined *)param_4[6]);
          }
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_100145d0(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_01,bVar2) == 0) ||
           (bVar2 = FUN_10014600(piVar1,1), CONCAT31(extraout_var_02,bVar2) == 0)) {
          FUN_1000ea40();
        }
        else {
          FUN_10011f30(piVar1,*(undefined4 **)(param_1 + 0x18),param_4[5]);
          if ((param_4[5] == 4) && (*piVar1 != 0)) {
            iVar3 = FID_conflict____AdjustPointer(*piVar1,(int *)(param_4 + 2));
            *piVar1 = iVar3;
          }
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_100145d0(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var,bVar2) == 0) ||
         (bVar2 = FUN_10014600(piVar1,1), CONCAT31(extraout_var_00,bVar2) == 0)) {
        FUN_1000ea40();
      }
      else {
        *piVar1 = *(int *)(param_1 + 0x18);
        iVar3 = FID_conflict____AdjustPointer(*piVar1,(int *)(param_4 + 2));
        *piVar1 = iVar3;
      }
    }
  }
  ExceptionList = local_14;
  return;
}



// Function: ___DestructExceptionObject @ 0x1000e5b0

/* Library Function - Single Match
    ___DestructExceptionObject
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl ___DestructExceptionObject(int param_1)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1003ae90;
  puStack_10 = &LAB_100146ec;
  local_14 = ExceptionList;
  if ((param_1 != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 4) != 0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    _CallMemberFunction0(*(void **)(param_1 + 0x18),*(void **)(*(int *)(param_1 + 0x1c) + 4));
  }
  ExceptionList = local_14;
  return;
}



// Function: FID_conflict:___AdjustPointer @ 0x1000e640

/* Library Function - Multiple Matches With Different Base Names
    void * __cdecl AdjustPointer(void *,struct PMD const &)
    ___AdjustPointer
   
   Library: Visual Studio */

int __cdecl FID_conflict____AdjustPointer(int param_1,int *param_2)

{
  int local_8;
  
  local_8 = param_1 + *param_2;
  if (-1 < param_2[1]) {
    local_8 = local_8 + *(int *)(*(int *)(param_1 + param_2[1]) + param_2[2]) + param_2[1];
  }
  return local_8;
}



// Function: __CallSettingFrame@12 @ 0x1000e690

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



// Function: FUN_1000e6e0 @ 0x1000e6e0

undefined4 FUN_1000e6e0(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000b8e0();
  DAT_1003df90 = TlsAlloc();
  if (((DAT_1003df90 != 0xffffffff) &&
      (lpTlsValue = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0x61), lpTlsValue != (DWORD *)0x0))
     && (BVar1 = TlsSetValue(DAT_1003df90,lpTlsValue), BVar1 != 0)) {
    FUN_1000e7a0((int)lpTlsValue);
    DVar2 = GetCurrentThreadId();
    *lpTlsValue = DVar2;
    lpTlsValue[1] = 0xffffffff;
    return 1;
  }
  return 0;
}



// Function: FUN_1000e770 @ 0x1000e770

void FUN_1000e770(void)

{
  FUN_1000b920();
  if (DAT_1003df90 != 0xffffffff) {
    TlsFree(DAT_1003df90);
    DAT_1003df90 = 0xffffffff;
  }
  return;
}



// Function: FUN_1000e7a0 @ 0x1000e7a0

void __cdecl FUN_1000e7a0(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1003e2b0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_1000e7c0 @ 0x1000e7c0

DWORD * FUN_1000e7c0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *local_8;
  
  dwErrCode = GetLastError();
  local_8 = TlsGetValue(DAT_1003df90);
  if (local_8 == (DWORD *)0x0) {
    local_8 = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0xe7);
    if (local_8 != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1003df90,local_8);
      if (BVar1 != 0) {
        FUN_1000e7a0((int)local_8);
        DVar2 = GetCurrentThreadId();
        *local_8 = DVar2;
        local_8[1] = 0xffffffff;
        goto LAB_1000e847;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1000e847:
  SetLastError(dwErrCode);
  return local_8;
}



// Function: FUN_1000e860 @ 0x1000e860

void __cdecl FUN_1000e860(LPVOID param_1)

{
  if (DAT_1003df90 != 0xffffffff) {
    if (param_1 == (LPVOID)0x0) {
      param_1 = TlsGetValue(DAT_1003df90);
    }
    if (param_1 != (LPVOID)0x0) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_1000c550(*(void **)((int)param_1 + 0x24),2);
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_1000c550(*(void **)((int)param_1 + 0x28),2);
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_1000c550(*(void **)((int)param_1 + 0x30),2);
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_1000c550(*(void **)((int)param_1 + 0x38),2);
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_1000c550(*(void **)((int)param_1 + 0x40),2);
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_1000c550(*(void **)((int)param_1 + 0x44),2);
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_1003e2b0) {
        FUN_1000c550(*(void **)((int)param_1 + 0x50),2);
      }
      FUN_1000c550(param_1,2);
    }
    TlsSetValue(DAT_1003df90,(LPVOID)0x0);
  }
  return;
}



// Function: FUN_1000e970 @ 0x1000e970

void FUN_1000e970(void)

{
  GetCurrentThreadId();
  return;
}



// Function: FUN_1000e980 @ 0x1000e980

void FUN_1000e980(void)

{
  GetCurrentThread();
  return;
}



// Function: FUN_1000e990 @ 0x1000e990

void FUN_1000e990(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1003aea8;
  puStack_10 = &LAB_100146ec;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_1000e7c0();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_1000e7c0();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _abort();
}



// Function: FUN_1000ea20 @ 0x1000ea20

void FUN_1000ea20(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000e7c0();
  if (pDVar1[0x19] != 0) {
    pDVar1 = FUN_1000e7c0();
    (*(code *)pDVar1[0x19])();
  }
  FUN_1000e990();
  return;
}



// Function: FUN_1000ea40 @ 0x1000ea40

void FUN_1000ea40(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1003aec0;
  puStack_10 = &LAB_100146ec;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_1003df94 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_1003df94)();
  }
  local_8 = 0xffffffff;
  FUN_1000eaaa();
  FUN_1000eab0();
  return;
}



// Function: FUN_1000eaaa @ 0x1000eaaa

void FUN_1000eaaa(void)

{
  FUN_1000e990();
  return;
}



// Function: FUN_1000eab0 @ 0x1000eab0

void FUN_1000eab0(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}



// Function: FUN_1000ead0 @ 0x1000ead0

void FUN_1000ead0(void)

{
  if (PTR_FUN_1003de10 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1003de10)();
  }
  __initterm((int *)&DAT_1003d320,(int *)&DAT_1003d638);
  __initterm((int *)&DAT_1003d000,(int *)&DAT_1003d21c);
  return;
}



// Function: FUN_1000eb10 @ 0x1000eb10

void __cdecl FUN_1000eb10(UINT param_1)

{
  FUN_1000eb90(param_1,0,0);
  return;
}



// Function: __exit @ 0x1000eb30

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __exit(int _Code)

{
  FUN_1000eb90(_Code,1,0);
  return;
}



// Function: FUN_1000eb50 @ 0x1000eb50

void FUN_1000eb50(void)

{
  FUN_1000eb90(0,0,1);
  return;
}



// Function: FUN_1000eb70 @ 0x1000eb70

void FUN_1000eb70(void)

{
  FUN_1000eb90(0,1,1);
  return;
}



// Function: FUN_1000eb90 @ 0x1000eb90

void __cdecl FUN_1000eb90(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  FUN_1000ec80();
  if (DAT_100407ac == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100407a8 = 1;
  DAT_100407a4 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_100421f8 != (int *)0x0) {
      local_8 = DAT_100421f4;
      while (local_8 = local_8 + -1, DAT_100421f8 <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_1003d73c,(int *)&DAT_1003d944);
  }
  __initterm((int *)&DAT_1003da48,(int *)&DAT_1003dc50);
  if ((DAT_100407b0 == 0) && (uVar1 = FUN_1000cfd0(-1), (uVar1 & 0x20) != 0)) {
    DAT_100407b0 = 1;
    FUN_1000d8e0();
  }
  if (param_3 == 0) {
    DAT_100407ac = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000ec90();
  return;
}



// Function: FUN_1000ec80 @ 0x1000ec80

void FUN_1000ec80(void)

{
  void *in_ECX;
  
  FUN_1000b9c0(in_ECX,0xd);
  return;
}



// Function: FUN_1000ec90 @ 0x1000ec90

void FUN_1000ec90(void)

{
  FUN_1000ba60(0xd);
  return;
}



// Function: __initterm @ 0x1000eca0

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



// Function: FUN_1000ecd0 @ 0x1000ecd0

int __cdecl
FUN_1000ecd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int local_30;
  int local_2c [2];
  int local_24;
  void *local_1c;
  uint local_18;
  int local_10;
  int local_8;
  
  uVar1 = param_1 - 0x76c;
  if (((int)uVar1 < 0x46) || (0x8a < (int)uVar1)) {
    local_8 = -1;
  }
  else {
    local_30 = param_3 + *(int *)(&DAT_1003e41c + param_2 * 4);
    if (((uVar1 & 3) == 0) && (2 < param_2)) {
      local_30 = local_30 + 1;
    }
    pvVar3 = (void *)(local_30 + (param_1 + -0x7b2) * 0x16d);
    local_8 = ((((param_1 + -0x76d >> 2) + -0x11 + (int)pvVar3) * 0x18 + param_4) * 0x3c + param_5)
              * 0x3c + param_6;
    FUN_10014a10(pvVar3);
    local_8 = local_8 + DAT_1003e338;
    local_10 = local_30;
    local_1c = (void *)(param_2 + -1);
    local_24 = param_4;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_1003e33c != 0)) &&
        (local_18 = uVar1, iVar2 = FUN_10014e20(local_1c,local_2c), iVar2 != 0)))) {
      local_8 = local_8 + DAT_1003e340;
    }
  }
  return local_8;
}



// Function: FUN_1000edc0 @ 0x1000edc0

void FUN_1000edc0(void)

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
  
  local_54 = (undefined4 *)FUN_1000bac0((void *)0x480,2,0x1003aed8,0x81);
  if (local_54 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_100421dc = 0x20;
  DAT_100420a0 = local_54;
  for (; local_54 < DAT_100420a0 + 0x120; local_54 = local_54 + 9) {
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
    while ((int)DAT_100421dc < (int)local_6c) {
      local_54 = (undefined4 *)FUN_1000bac0((void *)0x480,2,0x1003aed8,0xb6);
      if (local_54 == (undefined4 *)0x0) {
        local_68 = DAT_100421dc;
        break;
      }
      (&DAT_100420a0)[local_60] = local_54;
      DAT_100421dc = DAT_100421dc + 0x20;
      for (; local_54 < (undefined4 *)((int)(&DAT_100420a0)[local_60] + 0x480);
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
        puVar2 = (undefined4 *)((int)(&DAT_100420a0)[(int)local_5c >> 5] + (local_5c & 0x1f) * 0x24)
        ;
        *puVar2 = *(undefined4 *)local_64;
        *(byte *)(puVar2 + 1) = *local_8;
      }
      local_8 = local_8 + 1;
      local_64 = local_64 + 4;
    }
  }
  for (local_5c = 0; (int)local_5c < 3; local_5c = local_5c + 1) {
    piVar3 = DAT_100420a0 + local_5c * 9;
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
  SetHandleCount(DAT_100421dc);
  return;
}



// Function: __ioterm @ 0x1000f0f0

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio */

void __cdecl __ioterm(void)

{
  int local_c;
  uint local_8;
  
  for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
    if ((&DAT_100420a0)[local_c] != 0) {
      for (local_8 = (&DAT_100420a0)[local_c]; local_8 < (&DAT_100420a0)[local_c] + 0x480;
          local_8 = local_8 + 0x24) {
        if (*(int *)(local_8 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(local_8 + 0xc));
        }
      }
      FUN_1000c550((void *)(&DAT_100420a0)[local_c],2);
      (&DAT_100420a0)[local_c] = 0;
    }
  }
  return;
}



// Function: FUN_1000f190 @ 0x1000f190

void __fastcall FUN_1000f190(void *param_1)

{
  size_t sVar1;
  int iVar2;
  int *local_10;
  int local_c;
  uint *local_8;
  
  if (DAT_100421f0 == 0) {
    FUN_10015b30(param_1);
  }
  local_c = 0;
  for (local_8 = DAT_100406e4; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    if ((char)*local_8 != '=') {
      local_c = local_c + 1;
    }
    sVar1 = _strlen((char *)local_8);
  }
  local_10 = (int *)FUN_1000bac0((void *)(local_c * 4 + 4),2,0x1003aee4,0x6d);
  DAT_1004078c = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (local_8 = DAT_100406e4; (char)*local_8 != '\0';
      local_8 = (uint *)((int)local_8 + (int)(sVar1 + 1))) {
    sVar1 = _strlen((char *)local_8);
    if ((char)*local_8 != '=') {
      iVar2 = FUN_1000bac0((void *)(sVar1 + 1),2,0x1003aee4,0x79);
      *local_10 = iVar2;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_100101d0((uint *)*local_10,local_8);
      local_10 = local_10 + 1;
    }
  }
  FUN_1000c550(DAT_100406e4,2);
  DAT_100406e4 = (uint *)0x0;
  *local_10 = 0;
  DAT_100421e0 = 1;
  return;
}



// Function: FUN_1000f2e0 @ 0x1000f2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000f2e0(void *param_1)

{
  byte *local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_100421f0 == 0) {
    FUN_10015b30(param_1);
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100407b4,0x104);
  DAT_1004079c = &DAT_100407b4;
  if (*DAT_10042214 == 0) {
    local_18 = &DAT_100407b4;
  }
  else {
    local_18 = DAT_10042214;
  }
  FUN_1000f3c0(local_18,(undefined4 *)0x0,(byte *)0x0,&local_10,&local_8);
  local_c = (undefined4 *)FUN_1000bac0((void *)(local_8 + local_10 * 4),2,0x1003aef0,0x80);
  if (local_c == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000f3c0(local_18,local_c,(byte *)(local_c + local_10),&local_10,&local_8);
  _DAT_10040780 = local_10 + -1;
  _DAT_10040784 = local_c;
  return;
}



// Function: FUN_1000f3c0 @ 0x1000f3c0

void __cdecl FUN_1000f3c0(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if ((((&DAT_10041f61)[*pbVar3] & 4) != 0) && (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)
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
      if (((&DAT_10041f61)[bVar1] & 4) != 0) {
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
          if (((&DAT_10041f61)[*local_8] & 4) != 0) {
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if (((&DAT_10041f61)[*local_8] & 4) != 0) {
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



// Function: FUN_1000f7f0 @ 0x1000f7f0

LPSTR FUN_1000f7f0(void)

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
  if (DAT_100408b8 == 0) {
    local_18 = GetEnvironmentStringsW();
    if (local_18 == (LPWCH)0x0) {
      local_1c = GetEnvironmentStrings();
      if (local_1c == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_100408b8 = 2;
    }
    else {
      DAT_100408b8 = 1;
    }
  }
  if (DAT_100408b8 == 1) {
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
         (local_1c = (LPCH)FUN_1000bac0(cbMultiByte,2,0x1003aefc,100), local_1c == (LPSTR)0x0)) {
        FreeEnvironmentStringsW(local_18);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,local_18,iVar4,local_1c,(int)cbMultiByte,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar4 == 0) {
          FUN_1000c550(local_1c,2);
          local_1c = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(local_18);
        pCVar3 = local_1c;
      }
    }
  }
  else if (DAT_100408b8 == 2) {
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
      pCVar3 = (LPSTR)FUN_1000bac0(local_10 + (1 - (int)local_1c),2,0x1003aefc,0x8f);
      if (pCVar3 == (LPSTR)0x0) {
        FreeEnvironmentStringsA(local_1c);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        FUN_10015b60((undefined4 *)pCVar3,(undefined4 *)local_1c,
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



// Function: FUN_1000fa10 @ 0x1000fa10

undefined4 __cdecl FUN_1000fa10(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  DAT_1004208c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1004208c == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_100127c0();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      HeapDestroy(DAT_1004208c);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// Function: FUN_1000fa60 @ 0x1000fa60

void FUN_1000fa60(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = DAT_10042088;
  for (local_8 = 0; local_8 < DAT_10042084; local_8 = local_8 + 1) {
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
    HeapFree(DAT_1004208c,0,*(LPVOID *)((int)local_c + 0x10));
    local_c = (LPVOID)((int)local_c + 0x14);
  }
  HeapFree(DAT_1004208c,0,DAT_10042088);
  HeapDestroy(DAT_1004208c);
  return;
}



// Function: __FF_MSGBANNER @ 0x1000fb00

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_100406ec == 1) || ((DAT_100406ec == 0 && (DAT_100406f0 == 1)))) {
    FUN_1000fb50(0xfc);
    if (DAT_100408bc != (code *)0x0) {
      (*DAT_100408bc)();
    }
    FUN_1000fb50(0xff);
  }
  return;
}



// Function: FUN_1000fb50 @ 0x1000fb50

void __cdecl FUN_1000fb50(int param_1)

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
  
  for (local_c = 0; (local_c < 0x12 && (param_1 != *(int *)(&DAT_1003dfc0 + local_c * 8)));
      local_c = local_c + 1) {
  }
  if (param_1 == *(int *)(&DAT_1003dfc0 + local_c * 8)) {
    if ((param_1 != 0xfc) &&
       (iVar2 = FUN_1000a680(1,0,0,0,(&PTR_s_R6002___floating_point_not_loade_1003dfc4)[local_c * 2]
                            ), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((DAT_100406ec == 1) || ((DAT_100406ec == 0 && (DAT_100406f0 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_8;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_1003dfc4)[local_c * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_1003dfc4)[local_c * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar4 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_114,0x104);
      if (DVar4 == 0) {
        FUN_100101d0(local_114,(uint *)"<program name unknown>");
      }
      local_10 = local_114;
      sVar3 = _strlen((char *)local_10);
      if (0x3c < sVar3 + 1) {
        sVar3 = _strlen((char *)local_114);
        local_10 = (uint *)((int)local_10 + (sVar3 - 0x3b));
        _strncpy((char *)local_10,"...",3);
      }
      FUN_100101d0(local_1b4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_100101e0(local_1b4,local_10);
      FUN_100101e0(local_1b4,(uint *)&DAT_1003a5ec);
      FUN_100101e0(local_1b4,(uint *)(&PTR_s_R6002___floating_point_not_loade_1003dfc4)[local_c * 2]
                  );
      FUN_10010980(local_1b4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: __GET_RTERRMSG @ 0x1000fd10

/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2003 Debug */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  wchar_t *pwVar1;
  uint local_8;
  
  for (local_8 = 0; (local_8 < 0x12 && (param_1 != *(int *)(&DAT_1003dfc0 + local_8 * 8)));
      local_8 = local_8 + 1) {
  }
  if (param_1 == *(int *)(&DAT_1003dfc0 + local_8 * 8)) {
    pwVar1 = (wchar_t *)(&PTR_s_R6002___floating_point_not_loade_1003dfc4)[local_8 * 2];
  }
  else {
    pwVar1 = (wchar_t *)0x0;
  }
  return pwVar1;
}



// Function: __itoa @ 0x1000fd60

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



// Function: xtoa @ 0x1000fdb0

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



// Function: __ltoa @ 0x1000fe80

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



// Function: __ultoa @ 0x1000fec0

/* Library Function - Single Match
    __ultoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Value,_Dest,_Radix,0);
  return _Dest;
}



// Function: __i64toa @ 0x1000fee0

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



// Function: x64toa @ 0x1000ff30

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



// Function: __ui64toa @ 0x10010030

/* Library Function - Single Match
    __ui64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  x64toa(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}



// Function: _strlen @ 0x10010050

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10010070;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100100a3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10010070:
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
  goto LAB_100100a3;
}



// Function: FUN_100100d0 @ 0x100100d0

int __cdecl FUN_100100d0(undefined1 *param_1,int param_2,byte *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_1000a680(2,0x1003b1e4,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte *)0x0) &&
     (iVar2 = FUN_1000a680(2,0x1003b1e4,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_10016210((int *)&local_24,param_3,(undefined4 *)&stack0x00000010);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10015f90(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_100101d0 @ 0x100101d0

uint * __cdecl FUN_100101d0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_100102b8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100102b8:
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



// Function: FUN_100101e0 @ 0x100101e0

uint * __cdecl FUN_100101e0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_100101fc;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1001022f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1001024b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_100101fc:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1001024b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1001024b;
    }
  }
LAB_1001022f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1001024b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100102b8:
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
    if (bVar1 == 0) goto LAB_100102b8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: FUN_100102c0 @ 0x100102c0

int __cdecl FUN_100102c0(undefined1 *param_1,int param_2,byte *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_1000a680(2,0x1003b200,0x5a,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte *)0x0) &&
     (iVar2 = FUN_1000a680(2,0x1003b200,0x5b,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_10016210((int *)&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10015f90(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_100103c0 @ 0x100103c0

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100103c0(void)

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



// Function: FUN_100103f0 @ 0x100103f0

int __thiscall FUN_100103f0(void *this,int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int local_10;
  uint local_c;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_1000b9c0(this,1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_100408d0 == 0)) {
        BVar2 = SetConsoleCtrlHandler(FUN_10010620,1);
        if (BVar2 != 1) {
          DVar3 = GetLastError();
          pDVar4 = FUN_10017160();
          *pDVar4 = DVar3;
          FUN_1000ba60(1);
          goto LAB_100105d8;
        }
        DAT_100408d0 = 1;
      }
      switch(param_1) {
      case 2:
        local_10 = DAT_100408c0;
        DAT_100408c0 = param_2;
        break;
      case 0xf:
        local_10 = DAT_100408cc;
        DAT_100408cc = param_2;
        break;
      case 0x15:
        local_10 = DAT_100408c4;
        DAT_100408c4 = param_2;
        break;
      case 0x16:
        local_10 = DAT_100408c8;
        DAT_100408c8 = param_2;
      }
      FUN_1000ba60(1);
      return local_10;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar4 = FUN_1000e7c0();
      if ((undefined *)pDVar4[0x14] == &DAT_1003e2b0) {
        DVar3 = FUN_1000bac0(DAT_1003e330,2,0x1003b20c,0x133);
        pDVar4[0x14] = DVar3;
        if (pDVar4[0x14] == 0) goto LAB_100105d8;
        FUN_10015b60((undefined4 *)pDVar4[0x14],(undefined4 *)&DAT_1003e2b0,(uint)DAT_1003e330);
      }
      local_c = FUN_10010900(param_1,pDVar4[0x14]);
      if (local_c != 0) {
        iVar1 = *(int *)(local_c + 8);
        do {
          if (*(int *)(local_c + 4) != param_1) {
            return iVar1;
          }
          *(int *)(local_c + 8) = param_2;
          local_c = local_c + 0xc;
        } while (local_c < pDVar4[0x14] + DAT_1003e334 * 0xc);
        return iVar1;
      }
    }
  }
LAB_100105d8:
  pDVar4 = FUN_10017150();
  *pDVar4 = 0x16;
  return -1;
}



// Function: FUN_10010620 @ 0x10010620

undefined4 __thiscall FUN_10010620(void *this,int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  FUN_1000b9c0(this,1);
  if (param_1 == 0) {
    local_c = &DAT_100408c0;
    local_10 = DAT_100408c0;
    local_8 = 2;
  }
  else {
    local_c = &DAT_100408c4;
    local_10 = DAT_100408c4;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    FUN_1000ba60(1);
    uVar1 = 0;
  }
  else {
    if (local_10 == (code *)0x1) {
      FUN_1000ba60(1);
    }
    else {
      *local_c = 0;
      FUN_1000ba60(1);
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_100106c0 @ 0x100106c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100106c0(int param_1)

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
    local_1c = &DAT_100408c0;
    local_20 = DAT_100408c0;
    bVar1 = true;
    break;
  default:
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    local_8 = FUN_1000e7c0();
    uVar2 = FUN_10010900(param_1,local_8[0x14]);
    local_1c = (undefined4 *)(uVar2 + 8);
    local_20 = (code *)*local_1c;
    break;
  case 0xf:
    local_1c = &DAT_100408cc;
    local_20 = DAT_100408cc;
    bVar1 = true;
    break;
  case 0x15:
    local_1c = &DAT_100408c4;
    local_20 = DAT_100408c4;
    bVar1 = true;
    break;
  case 0x16:
    local_1c = &DAT_100408c8;
    local_20 = DAT_100408c8;
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1000b9c0(local_1c,1);
  }
  if (local_20 != (code *)0x1) {
    if (local_20 == (code *)0x0) {
      if (bVar1) {
        FUN_1000ba60(1);
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
      for (local_14 = DAT_1003e328; local_14 < DAT_1003e328 + _DAT_1003e32c; local_14 = local_14 + 1
          ) {
        *(undefined4 *)(local_8[0x14] + 8 + local_14 * 0xc) = 0;
      }
    }
    else {
      *local_1c = 0;
    }
    if (bVar1) {
      FUN_1000ba60(1);
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
    FUN_1000ba60(1);
  }
  return 0;
}



// Function: FUN_10010900 @ 0x10010900

uint __cdecl FUN_10010900(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < param_2 + DAT_1003e334 * 0xc);
  if ((param_2 + DAT_1003e334 * 0xc <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}



// Function: FUN_10010960 @ 0x10010960

DWORD * FUN_10010960(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000e7c0();
  return pDVar1 + 0x16;
}



// Function: FUN_10010970 @ 0x10010970

DWORD * FUN_10010970(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000e7c0();
  return pDVar1 + 0x15;
}



// Function: FUN_10010980 @ 0x10010980

int __cdecl FUN_10010980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_100408d4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100408d4 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100408d4 != (FARPROC)0x0) {
        DAT_100408d8 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100408dc = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100109f3;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100109f3:
    if (DAT_100408d8 != (FARPROC)0x0) {
      local_8 = (*DAT_100408d8)();
    }
    if ((local_8 != 0) && (DAT_100408dc != (FARPROC)0x0)) {
      local_8 = (*DAT_100408dc)(local_8);
    }
    iVar1 = (*DAT_100408d4)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x10010a40

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
        goto joined_r0x10010a7e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10010abb;
        goto LAB_10010b29;
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
joined_r0x10010b25:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10010b29:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10010abb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10010b25;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10010b25;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10010b25;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10010a7e:
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
LAB_10010abb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_10010b40 @ 0x10010b40

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_10010b40(uint param_1,_exception *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_6c [10];
  undefined4 local_44;
  undefined4 local_40;
  uint local_34;
  uint local_14;
  uint *local_10;
  int local_c;
  uint local_8;
  
  local_14 = (uint)*param_3;
  local_10 = &local_14;
  switch(param_2->type) {
  case 1:
  case 5:
    local_8 = 8;
    break;
  case 2:
    local_8 = 4;
    break;
  case 3:
    local_8 = 0x11;
    break;
  case 4:
    local_8 = 0x12;
    break;
  case 7:
    param_2->type = 1;
  default:
    local_8 = 0;
    break;
  case 8:
    local_8 = 0x10;
  }
  if ((local_8 != 0) &&
     (bVar1 = FUN_100178a0(local_8,&param_2->retval,local_14), CONCAT31(extraout_var,bVar1) == 0)) {
    if ((param_1 == 0x10) || ((param_1 == 0x16 || (param_1 == 0x1d)))) {
      local_34 = local_34 & 0xffffffe1 | 3;
      local_44 = *(undefined4 *)&param_2->arg2;
      local_40 = *(undefined4 *)((int)&param_2->arg2 + 4);
    }
    else {
      local_34 = local_34 & 0xfffffffe;
    }
    FUN_100173d0(local_6c,local_10,local_8,param_1,(uint *)&param_2->arg1,(uint *)&param_2->retval);
  }
  FUN_10017e10();
  local_c = 0;
  if ((param_2->type != 8) && (DAT_1003e798 == 0)) {
    local_c = __matherr(param_2);
  }
  if (local_c == 0) {
    FID_conflict___set_errno_from_matherr(param_2->type);
  }
  return;
}



// Function: FUN_10010cc0 @ 0x10010cc0

void FUN_10010cc0(void)

{
  undefined4 in_EAX;
  undefined2 in_FPUStatusWord;
  
  FUN_100110b0(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUStatusWord));
  return;
}



// Function: FUN_10010ce0 @ 0x10010ce0

void FUN_10010ce0(void)

{
  undefined4 in_EAX;
  undefined2 in_FPUStatusWord;
  
  FUN_100110b0(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUStatusWord));
  return;
}



// Function: FUN_10010d00 @ 0x10010d00

uint __cdecl FUN_10010d00(uint param_1,uint param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined2 in_FPUControlWord;
  
  uVar1 = FUN_10010dd0(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUControlWord));
  uVar1 = param_1 & param_2 | uVar1 & ~param_2;
  FUN_10010f50(uVar1);
  return uVar1;
}



// Function: __controlfp @ 0x10010d50

/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = FUN_10010d00(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}



// Function: FUN_10010d70 @ 0x10010d70

void FUN_10010d70(void)

{
  DWORD DVar1;
  int iVar2;
  DWORD *pDVar3;
  
  pDVar3 = FUN_10010970();
  DVar1 = *pDVar3;
  __setdefaultprecision();
  if ((DVar1 != 0) && ((**(uint **)(DVar1 + 4) & 0x10008) != 0)) {
    iVar2 = *(int *)(DVar1 + 4);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0xffff;
  }
  return;
}



// Function: FUN_10010dd0 @ 0x10010dd0

uint __cdecl FUN_10010dd0(uint param_1)

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



// Function: FUN_10010f50 @ 0x10010f50

undefined4 __cdecl FUN_10010f50(uint param_1)

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



// Function: FUN_100110b0 @ 0x100110b0

uint __cdecl FUN_100110b0(uint param_1)

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



// Function: FUN_10011160 @ 0x10011160

uint __cdecl FUN_10011160(int param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  CHAR local_10;
  CHAR local_f;
  undefined1 local_e;
  int local_c;
  uint local_8;
  
  if (param_1 + 1U < 0x101) {
    uVar1 = *(ushort *)(PTR_DAT_1003e05c + param_1 * 2) & param_2;
  }
  else {
    if ((*(ushort *)(PTR_DAT_1003e05c + (param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
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
    BVar2 = FUN_10017ed0(1,&local_10,local_c,(LPWORD)&local_8,0,0,1);
    if (BVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_8 & 0xffff & param_2;
    }
  }
  return uVar1;
}



// Function: FUN_10011220 @ 0x10011220

int __cdecl FUN_10011220(int param_1)

{
  return param_1 + 0x20;
}



// Function: FUN_10011230 @ 0x10011230

uint __cdecl FUN_10011230(uint param_1)

{
  void *this;
  bool bVar1;
  
  if (DAT_100409c8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_10041dd4);
    bVar1 = DAT_10041dc4 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_10041dd4);
      FUN_1000b9c0(this,0x13);
    }
    param_1 = FUN_100112d0(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_10041dd4);
    }
    else {
      FUN_1000ba60(0x13);
    }
  }
  return param_1;
}



// Function: FUN_100112d0 @ 0x100112d0

uint __cdecl FUN_100112d0(uint param_1)

{
  int iVar1;
  uint local_14;
  uint local_10;
  char local_c;
  char local_b;
  undefined1 local_a;
  int local_8;
  
  if (DAT_100409c8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_1003e050 < 2) {
        local_14 = *(ushort *)(PTR_DAT_1003e05c + param_1 * 2) & 1;
      }
      else {
        local_14 = FUN_10011160(param_1,1);
      }
      if (local_14 == 0) {
        return param_1;
      }
    }
    if ((*(ushort *)(PTR_DAT_1003e05c + ((int)param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
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
    iVar1 = FUN_10018ae0(DAT_100409c8,0x100,&local_c,local_8,(LPWSTR)&local_10,3,0,1);
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



// Function: FUN_10011400 @ 0x10011400

undefined4 __cdecl FUN_10011400(int param_1,int param_2)

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



// Function: __IncMan @ 0x10011490

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



// Function: FUN_10011540 @ 0x10011540

int __cdecl FUN_10011540(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int local_1c;
  int local_14;
  
  local_1c = 0;
  local_14 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = 0x1f - ((byte)param_2 & 0x1f);
  if (((*(uint *)(param_1 + local_14 * 4) & 1 << (bVar2 & 0x1f)) != 0) &&
     (iVar1 = FUN_10011400(param_1,param_2 + 1), iVar1 == 0)) {
    local_1c = __IncMan(param_1,param_2 + -1);
  }
  *(uint *)(param_1 + local_14 * 4) = *(uint *)(param_1 + local_14 * 4) & -1 << (bVar2 & 0x1f);
  while (local_14 = local_14 + 1, local_14 < 3) {
    *(undefined4 *)(param_1 + local_14 * 4) = 0;
  }
  return local_1c;
}



// Function: __CopyMan @ 0x10011620

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



// Function: __FillZeroMan @ 0x10011670

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



// Function: __IsZeroMan @ 0x100116a0

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



// Function: __ShrMan @ 0x100116e0

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



// Function: FUN_100117d0 @ 0x100117d0

undefined4 __cdecl FUN_100117d0(ushort *param_1,uint *param_2,int *param_3)

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
    iVar1 = FUN_10011540((int)&local_1c,param_3[2]);
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
      FUN_10011540((int)&local_1c,param_3[2]);
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



// Function: FUN_10011a20 @ 0x10011a20

void __cdecl FUN_10011a20(ushort *param_1,uint *param_2)

{
  FUN_100117d0(param_1,param_2,(int *)&DAT_1003e268);
  return;
}



// Function: FUN_10011a40 @ 0x10011a40

void __cdecl FUN_10011a40(ushort *param_1,uint *param_2)

{
  FUN_100117d0(param_1,param_2,(int *)&DAT_1003e280);
  return;
}



// Function: FUN_10011a60 @ 0x10011a60

bool __cdecl FUN_10011a60(ushort *param_1,undefined4 *param_2)

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
  iVar2 = FUN_10011540((int)&local_14,0x40);
  if (iVar2 != 0) {
    local_14 = 0x80000000;
    local_8 = (uint)(ushort)((short)local_8 + 1);
  }
  param_2[1] = local_14;
  *param_2 = local_10;
  *(ushort *)(param_2 + 2) = uVar1 & 0x8000 | (ushort)local_8;
  return (local_8 & 0xffff) == 0x7fff;
}



// Function: FUN_10011b20 @ 0x10011b20

void __cdecl FUN_10011b20(uint *param_1,byte *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_10019140(local_10,&local_14,param_2,0,0,0,0);
  FUN_10011a20(local_10,param_1);
  return;
}



// Function: FUN_10011b60 @ 0x10011b60

void __cdecl FUN_10011b60(undefined4 *param_1,byte *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_10019140(local_10,&local_14,param_2,1,0,0,0);
  FUN_10011a60(local_10,param_1);
  return;
}



// Function: FUN_10011ba0 @ 0x10011ba0

void __cdecl FUN_10011ba0(uint *param_1,byte *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_10019140(local_10,&local_14,param_2,0,0,0,0);
  FUN_10011a40(local_10,param_1);
  return;
}



// Function: FUN_10011be0 @ 0x10011be0

void __cdecl FUN_10011be0(char *param_1,int param_2,int param_3)

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
    FUN_10011f30((undefined4 *)param_1,(undefined4 *)(param_1 + 1),sVar3 + 1);
  }
  return;
}



// Function: FUN_10011ce0 @ 0x10011ce0

int * __cdecl FUN_10011ce0(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int iVar1;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint local_c;
  ushort local_8;
  
  FUN_10011d60(&local_10,&param_1);
  iVar1 = FUN_10019cc0(local_10,local_c,local_8,0x11,0,&local_2c);
  param_3[2] = iVar1;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_100101d0(param_4,local_28);
  param_3[3] = (int)param_4;
  return param_3;
}



// Function: FUN_10011d60 @ 0x10011d60

void __cdecl FUN_10011d60(uint *param_1,uint *param_2)

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



// Function: _memset @ 0x10011ed0

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



// Function: FUN_10011f30 @ 0x10011f30

undefined4 * __cdecl FUN_10011f30(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100120e7_caseD_2;
        case 3:
          goto switchD_100120e7_caseD_3;
        }
        goto switchD_100120e7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100120e7_caseD_0;
      case 1:
        goto switchD_100120e7_caseD_1;
      case 2:
        goto switchD_100120e7_caseD_2;
      case 3:
        goto switchD_100120e7_caseD_3;
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
              goto switchD_100120e7_caseD_2;
            case 3:
              goto switchD_100120e7_caseD_3;
            }
            goto switchD_100120e7_caseD_1;
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
              goto switchD_100120e7_caseD_2;
            case 3:
              goto switchD_100120e7_caseD_3;
            }
            goto switchD_100120e7_caseD_1;
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
              goto switchD_100120e7_caseD_2;
            case 3:
              goto switchD_100120e7_caseD_3;
            }
            goto switchD_100120e7_caseD_1;
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
switchD_100120e7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100120e7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100120e7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100120e7_caseD_0:
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
        goto switchD_10011f65_caseD_2;
      case 3:
        goto switchD_10011f65_caseD_3;
      }
      goto switchD_10011f65_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10011f65_caseD_0;
    case 1:
      goto switchD_10011f65_caseD_1;
    case 2:
      goto switchD_10011f65_caseD_2;
    case 3:
      goto switchD_10011f65_caseD_3;
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
            goto switchD_10011f65_caseD_2;
          case 3:
            goto switchD_10011f65_caseD_3;
          }
          goto switchD_10011f65_caseD_1;
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
            goto switchD_10011f65_caseD_2;
          case 3:
            goto switchD_10011f65_caseD_3;
          }
          goto switchD_10011f65_caseD_1;
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
            goto switchD_10011f65_caseD_2;
          case 3:
            goto switchD_10011f65_caseD_3;
          }
          goto switchD_10011f65_caseD_1;
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
switchD_10011f65_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10011f65_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10011f65_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10011f65_caseD_0:
  return param_1;
}



// Function: __fptrap @ 0x10012270

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Debug */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



// Function: _set_new_handler @ 0x10012280

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  void *in_ECX;
  
  FUN_1000b9c0(in_ECX,9);
  p_Var1 = DAT_100408e4;
  DAT_100408e4 = param_1;
  FUN_1000ba60(9);
  return p_Var1;
}



// Function: FUN_100122b0 @ 0x100122b0

undefined4 FUN_100122b0(void)

{
  return DAT_100408e4;
}



// Function: __callnewh @ 0x100122c0

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Debug */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_100408e4 != (code *)0x0) && (iVar1 = (*DAT_100408e4)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// Function: FUN_100122f0 @ 0x100122f0

void __cdecl FUN_100122f0(void *param_1)

{
  __nh_malloc_base(param_1,(uint)param_1,DAT_100408e0);
  return;
}



// Function: __nh_malloc_base @ 0x10012310

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
        local_8 = FUN_10012370(this,param_1);
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



// Function: FUN_10012370 @ 0x10012370

int * __thiscall FUN_10012370(void *this,uint param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_1003e2a4) {
    FUN_1000b9c0(this,9);
    piVar1 = FUN_10012eb0(param_1);
    FUN_1000ba60(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = HeapAlloc(DAT_1004208c,0,param_1 + 0xf & 0xfffffff0);
  return piVar1;
}



// Function: FUN_100123e0 @ 0x100123e0

undefined4 FUN_100123e0(void)

{
  return 1;
}



// Function: FUN_100123f0 @ 0x100123f0

LPVOID __thiscall FUN_100123f0(void *this,LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_2 < 0xffffffe1) {
    FUN_1000b9c0(this,9);
    puVar1 = (uint *)FUN_10012820((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_1000ba60(9);
      if (param_2 == 0) {
        param_2 = 1;
      }
      local_8 = HeapReAlloc(DAT_1004208c,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
    else {
      local_8 = (LPVOID)0x0;
      if (param_2 <= DAT_1003e2a4) {
        iVar2 = FUN_100136f0(puVar1,(int)param_1,param_2);
        if (iVar2 != 0) {
          local_8 = param_1;
        }
      }
      FUN_1000ba60(9);
    }
  }
  else {
    local_8 = (LPVOID)0x0;
  }
  return local_8;
}



// Function: FUN_100124a0 @ 0x100124a0

int * __thiscall FUN_100124a0(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  void *extraout_ECX;
  void *local_18;
  void *local_14;
  int *local_c;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_100122f0(param_2);
  }
  else if (param_2 == (void *)0x0) {
    FUN_10012690(param_1,param_1);
    piVar1 = (int *)0x0;
  }
  else {
    do {
      local_c = (int *)0x0;
      if (param_2 < (void *)0xffffffe1) {
        FUN_1000b9c0(this,9);
        puVar2 = (uint *)FUN_10012820((int)param_1);
        if (puVar2 == (uint *)0x0) {
          FUN_1000ba60(9);
          if (param_2 == (void *)0x0) {
            param_2 = (void *)0x1;
          }
          param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
          local_c = HeapReAlloc(DAT_1004208c,0,param_1,(SIZE_T)param_2);
        }
        else {
          if (param_2 <= DAT_1003e2a4) {
            iVar3 = FUN_100136f0(puVar2,(int)param_1,(int)param_2);
            if (iVar3 == 0) {
              local_c = FUN_10012eb0((int)param_2);
              if (local_c != (int *)0x0) {
                local_14 = (void *)(param_1[-1] - 1);
                if (param_2 <= local_14) {
                  local_14 = param_2;
                }
                FUN_10015b60(local_c,param_1,(uint)local_14);
                FUN_100128e0(puVar2,(int)param_1);
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
            local_c = HeapAlloc(DAT_1004208c,0,(SIZE_T)param_2);
            if (local_c != (int *)0x0) {
              local_18 = param_2;
              if ((void *)(param_1[-1] - 1U) < param_2) {
                local_18 = (void *)(param_1[-1] - 1U);
              }
              FUN_10015b60(local_c,param_1,(uint)local_18);
              FUN_100128e0(puVar2,(int)param_1);
            }
          }
          FUN_1000ba60(9);
        }
      }
      if (local_c != (int *)0x0) {
        return local_c;
      }
      if (DAT_100408e0 == 0) {
        return (int *)0x0;
      }
      iVar3 = __callnewh((size_t)param_2);
      this = extraout_ECX;
    } while (iVar3 != 0);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



// Function: FUN_10012690 @ 0x10012690

void __thiscall FUN_10012690(void *this,LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_1000b9c0(this,9);
    puVar1 = (uint *)FUN_10012820((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_1000ba60(9);
      HeapFree(DAT_1004208c,0,param_1);
    }
    else {
      FUN_100128e0(puVar1,(int)param_1);
      FUN_1000ba60(9);
    }
  }
  return;
}



// Function: FUN_10012700 @ 0x10012700

undefined4 FUN_10012700(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  void *in_ECX;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  FUN_1000b9c0(in_ECX,9);
  iVar1 = FUN_10013e10();
  if (iVar1 < 0) {
    local_8 = 0xfffffffc;
  }
  FUN_1000ba60(9);
  BVar2 = HeapValidate(DAT_1004208c,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      pDVar4 = FUN_10017160();
      *pDVar4 = 0x78;
      pDVar4 = FUN_10017150();
      *pDVar4 = 0x28;
    }
    else {
      local_8 = 0xfffffffc;
    }
  }
  return local_8;
}



// Function: FUN_10012780 @ 0x10012780

void FUN_10012780(void)

{
  FUN_10012700();
  return;
}



// Function: FUN_10012790 @ 0x10012790

undefined4 FUN_10012790(void)

{
  return DAT_1003e2a4;
}



// Function: FUN_100127a0 @ 0x100127a0

bool __cdecl FUN_100127a0(uint param_1)

{
  if (param_1 < 0x3f9) {
    DAT_1003e2a4 = param_1;
  }
  return param_1 < 0x3f9;
}



// Function: FUN_100127c0 @ 0x100127c0

bool FUN_100127c0(void)

{
  DAT_10042088 = HeapAlloc(DAT_1004208c,0,0x140);
  if (DAT_10042088 != (LPVOID)0x0) {
    DAT_10042080 = 0;
    DAT_10042084 = 0;
    DAT_10042068 = 0x10;
    DAT_1004207c = DAT_10042088;
  }
  return DAT_10042088 != (LPVOID)0x0;
}



// Function: FUN_10012820 @ 0x10012820

uint __cdecl FUN_10012820(int param_1)

{
  uint local_c;
  
  local_c = DAT_10042088;
  while( true ) {
    if (DAT_10042088 + DAT_10042084 * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}



// Function: FUN_10012880 @ 0x10012880

undefined4 __cdecl FUN_10012880(int param_1,int param_2)

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



// Function: FUN_100128e0 @ 0x100128e0

void __cdecl FUN_100128e0(uint *param_1,int param_2)

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
    if (DAT_10042080 != (uint *)0x0) {
      VirtualFree((LPVOID)(DAT_10042080[3] + DAT_10042078 * 0x8000),0x8000,0x4000);
      DAT_10042080[2] = DAT_10042080[2] | 0x80000000U >> ((byte)DAT_10042078 & 0x1f);
      *(undefined4 *)(DAT_10042080[4] + 0xc4 + DAT_10042078 * 4) = 0;
      *(char *)(DAT_10042080[4] + 0x43) = *(char *)(DAT_10042080[4] + 0x43) + -1;
      if (*(char *)(DAT_10042080[4] + 0x43) == '\0') {
        DAT_10042080[1] = DAT_10042080[1] & 0xfffffffe;
      }
      if (DAT_10042080[2] == 0xffffffff) {
        VirtualFree((LPVOID)DAT_10042080[3],0,0x8000);
        HeapFree(DAT_1004208c,0,(LPVOID)DAT_10042080[4]);
        FUN_10011f30(DAT_10042080,DAT_10042080 + 5,
                     (DAT_10042088 + DAT_10042084 * 0x14) - (int)(DAT_10042080 + 5));
        DAT_10042084 = DAT_10042084 + -1;
        if (DAT_10042080 < param_1) {
          param_1 = param_1 + -5;
        }
        DAT_1004207c = DAT_10042088;
      }
    }
    DAT_10042080 = param_1;
    DAT_10042078 = uVar8;
  }
  return;
}



// Function: FUN_10012eb0 @ 0x10012eb0

int * __cdecl FUN_10012eb0(int param_1)

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
  
  puVar7 = DAT_10042088 + DAT_10042084 * 5;
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
  for (local_1c = DAT_1004207c;
      (local_1c < puVar7 && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
      local_1c = local_1c + 5) {
  }
  if (local_1c == puVar7) {
    for (local_1c = DAT_10042088;
        (local_1c < DAT_1004207c && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
        local_1c = local_1c + 5) {
    }
    if (local_1c == DAT_1004207c) {
      for (; (local_1c < puVar7 && (local_1c[2] == 0)); local_1c = local_1c + 5) {
      }
      if (local_1c == puVar7) {
        for (local_1c = DAT_10042088; (local_1c < DAT_1004207c && (local_1c[2] == 0));
            local_1c = local_1c + 5) {
        }
        if ((local_1c == DAT_1004207c) && (local_1c = FUN_100133f0(), local_1c == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar5 = FUN_10013500((int)local_1c);
      *(int *)local_1c[4] = iVar5;
      if (*(int *)local_1c[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_1004207c = local_1c;
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
  if (((iVar5 == 0) && (local_1c == DAT_10042080)) && (local_34 == DAT_10042078)) {
    DAT_10042080 = (uint *)0x0;
  }
  *piVar4 = local_34;
  return piVar8 + 1;
}



// Function: FUN_100133f0 @ 0x100133f0

undefined4 * FUN_100133f0(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10042084 == DAT_10042068) {
    pvVar1 = HeapReAlloc(DAT_1004208c,0,DAT_10042088,(DAT_10042068 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10042068 = DAT_10042068 + 0x10;
    DAT_10042088 = pvVar1;
  }
  puVar2 = (undefined4 *)((int)DAT_10042088 + DAT_10042084 * 0x14);
  pvVar1 = HeapAlloc(DAT_1004208c,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_1004208c,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_10042084 = DAT_10042084 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}



// Function: FUN_10013500 @ 0x10013500

int __cdecl FUN_10013500(int param_1)

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



// Function: FUN_100136f0 @ 0x100136f0

undefined4 __cdecl FUN_100136f0(uint *param_1,int param_2,int param_3)

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



// Function: FUN_10013ce0 @ 0x10013ce0

void FUN_10013ce0(void)

{
  if (DAT_10042080 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_10042080[3] + DAT_10042078 * 0x8000),0x8000,0x4000);
    DAT_10042080[2] = DAT_10042080[2] | 0x80000000U >> ((byte)DAT_10042078 & 0x1f);
    *(undefined4 *)(DAT_10042080[4] + 0xc4 + DAT_10042078 * 4) = 0;
    *(char *)(DAT_10042080[4] + 0x43) = *(char *)(DAT_10042080[4] + 0x43) + -1;
    if (*(char *)(DAT_10042080[4] + 0x43) == '\0') {
      DAT_10042080[1] = DAT_10042080[1] & 0xfffffffe;
    }
    if ((DAT_10042080[2] == -1) && (1 < DAT_10042084)) {
      HeapFree(DAT_1004208c,0,(LPVOID)DAT_10042080[4]);
      FUN_10011f30(DAT_10042080,DAT_10042080 + 5,
                   (DAT_10042088 + DAT_10042084 * 0x14) - (int)(DAT_10042080 + 5));
      DAT_10042084 = DAT_10042084 + -1;
    }
    DAT_10042080 = (undefined4 *)0x0;
  }
  return;
}



// Function: FUN_10013e10 @ 0x10013e10

undefined4 FUN_10013e10(void)

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
  
  BVar2 = IsBadWritePtr(DAT_10042088,DAT_10042084 * 0x14);
  if (BVar2 == 0) {
    local_140 = DAT_10042088;
    for (local_124 = 0; local_124 < DAT_10042084; local_124 = local_124 + 1) {
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



// Function: FUN_10014430 @ 0x10014430

undefined4 __cdecl FUN_10014430(undefined1 *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_1000a680(2,0x1003b1e4,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_2 == 0) &&
     (iVar2 = FUN_1000a680(2,0x1003b1e4,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  iVar2 = FUN_10016210((int *)&local_24,(byte *)param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10015f90(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_10014530 @ 0x10014530

int FUN_10014530(int *param_1)

{
  int iVar1;
  
  if (((*(int *)*param_1 == -0x1f928c9d) && (*(int *)(*param_1 + 0x10) == 3)) &&
     (*(int *)(*param_1 + 0x14) == 0x19930520)) {
    FUN_1000e990();
  }
  if ((DAT_100408e8 != (_func_int *)0x0) && (iVar1 = _ValidateExecute(DAT_100408e8), iVar1 != 0)) {
    iVar1 = (*DAT_100408e8)(param_1);
    return iVar1;
  }
  return 0;
}



// Function: FUN_10014590 @ 0x10014590

void FUN_10014590(void)

{
  DAT_100408e8 = SetUnhandledExceptionFilter(FUN_10014530);
  return;
}



// Function: FUN_100145b0 @ 0x100145b0

void FUN_100145b0(void)

{
  SetUnhandledExceptionFilter(DAT_100408e8);
  return;
}



// Function: FUN_100145d0 @ 0x100145d0

bool __cdecl FUN_100145d0(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_10014600 @ 0x10014600

bool __cdecl FUN_10014600(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: _ValidateExecute @ 0x10014630

/* Library Function - Single Match
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl _ValidateExecute(_func_int *param_1)

{
  BOOL BVar1;
  uint local_8;
  
  BVar1 = IsBadCodePtr((FARPROC)param_1);
  local_8 = (uint)(BVar1 == 0);
  return local_8;
}



// Function: _strcmp @ 0x10014660

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
      if (bVar4 != *_Str2) goto LAB_100146a4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10014670;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_100146a4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_100146a4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10014670:
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
LAB_100146a4:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_100147a9 @ 0x100147a9

void FUN_100147a9(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: __XcptFilter @ 0x100147d0

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
  
  pDVar4 = FUN_1000e7c0();
  piVar5 = FUN_10014990(_ExceptionNum,(int *)pDVar4[0x14]);
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
      for (local_18 = DAT_1003e328; local_18 < DAT_1003e328 + _DAT_1003e32c; local_18 = local_18 + 1
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



// Function: FUN_10014990 @ 0x10014990

int * __cdecl FUN_10014990(int param_1,int *param_2)

{
  int *local_8;
  
  local_8 = param_2;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < param_2 + DAT_1003e334 * 3);
  if ((param_2 + DAT_1003e334 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}



// Function: _abort @ 0x100149f0

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2003 Debug */

void __cdecl _abort(void)

{
  FUN_1000fb50(10);
  FUN_100106c0(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// Function: FUN_10014a10 @ 0x10014a10

void __fastcall FUN_10014a10(void *param_1)

{
  void *extraout_ECX;
  
  if (DAT_100409a8 == 0) {
    FUN_1000b9c0(param_1,0xb);
    if (DAT_100409a8 == 0) {
      FUN_10014a70(extraout_ECX);
      DAT_100409a8 = DAT_100409a8 + 1;
    }
    FUN_1000ba60(0xb);
  }
  return;
}



// Function: FUN_10014a50 @ 0x10014a50

void __fastcall FUN_10014a50(void *param_1)

{
  void *extraout_ECX;
  
  FUN_1000b9c0(param_1,0xb);
  FUN_10014a70(extraout_ECX);
  FUN_1000ba60(0xb);
  return;
}



// Function: FUN_10014a70 @ 0x10014a70

void __fastcall FUN_10014a70(void *param_1)

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
  FUN_1000b9c0(param_1,0xc);
  DAT_100408f0 = 0;
  DAT_1003e3e0 = 0xffffffff;
  DAT_1003e3d0 = 0xffffffff;
  _Str1 = (uint *)FID_conflict___getenv_lk("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_1000ba60(0xc);
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_100408f8);
    if (DVar1 != 0xffffffff) {
      DAT_100408f0 = 1;
      DAT_1003e338 = DAT_100408f8 * 0x3c;
      if (DAT_1004093e != 0) {
        DAT_1003e338 = DAT_1003e338 + DAT_1004094c * 0x3c;
      }
      if ((DAT_10040992 == 0) || (DAT_100409a0 == 0)) {
        DAT_1003e33c = 0;
        DAT_1003e340 = 0;
      }
      else {
        DAT_1003e33c = 1;
        DAT_1003e340 = (DAT_100409a0 - DAT_1004094c) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(DAT_100409d8,0x220,(LPCWSTR)&DAT_100408fc,-1,PTR_DAT_1003e3c4,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_1003e3c4 = 0;
      }
      else {
        PTR_DAT_1003e3c4[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(DAT_100409d8,0x220,(LPCWSTR)&DAT_10040950,-1,PTR_DAT_1003e3c8,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_1003e3c8 = 0;
      }
      else {
        PTR_DAT_1003e3c8[0x3f] = 0;
      }
    }
  }
  else if (((char)*_Str1 == '\0') ||
          ((DAT_100409a4 != (uint *)0x0 &&
           (iVar2 = _strcmp((char *)_Str1,(char *)DAT_100409a4), iVar2 == 0)))) {
    FUN_1000ba60(0xc);
  }
  else {
    FUN_1000c550(DAT_100409a4,2);
    iVar2 = 0x10c;
    pcVar5 = "tzset.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)_Str1);
    DAT_100409a4 = (uint *)FUN_1000bac0((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar2);
    if (DAT_100409a4 == (uint *)0x0) {
      FUN_1000ba60(0xc);
    }
    else {
      FUN_100101d0(DAT_100409a4,_Str1);
      FUN_1000ba60(0xc);
      _strncpy(PTR_DAT_1003e3c4,(char *)_Str1,3);
      PTR_DAT_1003e3c4[3] = 0;
      local_10 = (uint *)((int)_Str1 + 3);
      if (*(char *)local_10 == '-') {
        local_8 = local_8 + 1;
        local_10 = _Str1 + 1;
      }
      iVar2 = FUN_1001a1e0((byte *)local_10);
      DAT_1003e338 = iVar2 * 0xe10;
      for (; ((char)*local_10 == '+' || (('/' < (char)*local_10 && ((char)*local_10 < ':'))));
          local_10 = (uint *)((int)local_10 + 1)) {
      }
      if ((char)*local_10 == ':') {
        local_10 = (uint *)((int)local_10 + 1);
        iVar2 = FUN_1001a1e0((byte *)local_10);
        DAT_1003e338 = DAT_1003e338 + iVar2 * 0x3c;
        for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
            local_10 = (uint *)((int)local_10 + 1)) {
        }
        if ((char)*local_10 == ':') {
          local_10 = (uint *)((int)local_10 + 1);
          iVar2 = FUN_1001a1e0((byte *)local_10);
          DAT_1003e338 = DAT_1003e338 + iVar2;
          for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
              local_10 = (uint *)((int)local_10 + 1)) {
          }
        }
      }
      if (local_8 != 0) {
        DAT_1003e338 = -DAT_1003e338;
      }
      DAT_1003e33c = (int)(char)*local_10;
      if (DAT_1003e33c == 0) {
        *PTR_DAT_1003e3c8 = 0;
      }
      else {
        _strncpy(PTR_DAT_1003e3c8,(char *)local_10,3);
        PTR_DAT_1003e3c8[3] = 0;
      }
    }
  }
  return;
}



// Function: FUN_10014e20 @ 0x10014e20

undefined4 __thiscall FUN_10014e20(void *this,int *param_1)

{
  undefined4 uVar1;
  
  FUN_1000b9c0(this,0xb);
  uVar1 = FUN_10014e50(param_1);
  FUN_1000ba60(0xb);
  return uVar1;
}



// Function: FUN_10014e50 @ 0x10014e50

undefined4 __cdecl FUN_10014e50(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_1003e33c == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_1003e3d0) || (param_1[5] != DAT_1003e3e0)) {
    if (DAT_100408f0 == 0) {
      FUN_10015150(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_10015150(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_10040990 == 0) {
        FUN_10015150(1,1,param_1[5],(uint)DAT_10040992,(uint)DAT_10040996,(uint)DAT_10040994,0,
                     (uint)DAT_10040998,(uint)DAT_1004099a,(uint)DAT_1004099c,(uint)DAT_1004099e);
      }
      else {
        FUN_10015150(1,0,param_1[5],(uint)DAT_10040992,0,0,(uint)DAT_10040996,(uint)DAT_10040998,
                     (uint)DAT_1004099a,(uint)DAT_1004099c,(uint)DAT_1004099e);
      }
      if (DAT_1004093c == 0) {
        FUN_10015150(0,1,param_1[5],(uint)DAT_1004093e,(uint)DAT_10040942,(uint)DAT_10040940,0,
                     (uint)DAT_10040944,(uint)DAT_10040946,(uint)DAT_10040948,(uint)DAT_1004094a);
      }
      else {
        FUN_10015150(0,0,param_1[5],(uint)DAT_1004093e,0,0,(uint)DAT_10040942,(uint)DAT_10040944,
                     (uint)DAT_10040946,(uint)DAT_10040948,(uint)DAT_1004094a);
      }
    }
  }
  if (DAT_1003e3d4 < DAT_1003e3e4) {
    if ((param_1[7] < DAT_1003e3d4) || (DAT_1003e3e4 < param_1[7])) {
      return 0;
    }
    if ((DAT_1003e3d4 < param_1[7]) && (param_1[7] < DAT_1003e3e4)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_1003e3e4) || (DAT_1003e3d4 < param_1[7])) {
      return 1;
    }
    if ((DAT_1003e3e4 < param_1[7]) && (param_1[7] < DAT_1003e3d4)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_1003e3d4) {
    if (iVar2 < DAT_1003e3d8) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_1003e3e8) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_10015150 @ 0x10015150

void __cdecl
FUN_10015150(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      local_10 = (&DAT_1003e3e8)[param_4];
    }
    else {
      local_10 = *(int *)(&DAT_1003e41c + param_4 * 4);
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
        local_14 = *(int *)(&DAT_1003e3ec + param_4 * 4);
      }
      else {
        local_14 = *(int *)(&DAT_1003e420 + param_4 * 4);
      }
      if (local_14 < local_c) {
        local_c = local_c + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      local_18 = (&DAT_1003e3e8)[param_4];
    }
    else {
      local_18 = *(int *)(&DAT_1003e41c + param_4 * 4);
    }
    local_c = local_18 + param_7;
  }
  if (param_1 == 1) {
    DAT_1003e3d4 = local_c;
    DAT_1003e3d8 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    DAT_1003e3d0 = param_3;
  }
  else {
    DAT_1003e3e4 = local_c;
    DAT_1003e3e8 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000 +
                   DAT_1003e340 * 1000;
    if (DAT_1003e3e8 < 0) {
      DAT_1003e3e8 = DAT_1003e3e8 + 86400000;
      DAT_1003e3e4 = local_c + -1;
    }
    else if (86399999 < DAT_1003e3e8) {
      DAT_1003e3e8 = DAT_1003e3e8 + -86400000;
      DAT_1003e3e4 = local_c + 1;
    }
    DAT_1003e3e0 = param_3;
  }
  return;
}



// Function: FUN_10015350 @ 0x10015350

undefined4 __thiscall FUN_10015350(void *this,UINT param_1)

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
  
  FUN_1000b9c0(this,0x19);
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_10041dd8) {
    FUN_1000ba60(0x19);
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_10015800();
    FUN_1000ba60(0x19);
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(UINT *)(&DAT_1003e460 + local_8 * 0x30) == CodePage) {
        for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
          (&DAT_10041f60)[local_28] = 0;
        }
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          for (local_c = &DAT_1003e470 + local_10 * 8 + local_8 * 0x30;
              (*local_c != 0 && (local_c[1] != 0)); local_c = local_c + 2) {
            for (local_28 = (uint)*local_c; local_28 <= local_c[1]; local_28 = local_28 + 1) {
              (&DAT_10041f61)[local_28] = (&DAT_10041f61)[local_28] | (&DAT_1003e458)[local_10];
            }
          }
        }
        DAT_10041e5c = 1;
        DAT_10041dd8 = CodePage;
        DAT_10042064 = FUN_10015700(CodePage);
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          *(undefined2 *)(&DAT_10041e50 + local_10 * 2) =
               *(undefined2 *)(&DAT_1003e464 + local_10 * 2 + local_8 * 0x30);
        }
        FUN_10015800();
        FUN_1000ba60(0x19);
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&local_24);
    if (BVar2 == 1) {
      for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
        (&DAT_10041f60)[local_28] = 0;
      }
      DAT_10042064 = 0;
      if (local_24.MaxCharSize < 2) {
        DAT_10041e5c = 0;
        DAT_10041dd8 = CodePage;
      }
      else {
        DAT_10041dd8 = CodePage;
        for (local_2c = local_24.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (local_28 = (uint)*local_2c; local_28 <= local_2c[1]; local_28 = local_28 + 1) {
            (&DAT_10041f61)[local_28] = (&DAT_10041f61)[local_28] | 4;
          }
        }
        for (local_28 = 1; local_28 < 0xff; local_28 = local_28 + 1) {
          (&DAT_10041f61)[local_28] = (&DAT_10041f61)[local_28] | 8;
        }
        DAT_10042064 = FUN_10015700(DAT_10041dd8);
        DAT_10041e5c = 1;
      }
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(undefined2 *)(&DAT_10041e50 + local_10 * 2) = 0;
      }
      FUN_10015800();
      FUN_1000ba60(0x19);
      uVar1 = 0;
    }
    else if (DAT_100409ac == 0) {
      FUN_1000ba60(0x19);
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_10015800();
      FUN_1000ba60(0x19);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// Function: getSystemCP @ 0x100156a0

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_100409ac = 0;
  if (param_1 == 0xfffffffe) {
    DAT_100409ac = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_100409ac = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_100409ac = 1;
    param_1 = DAT_100409d8;
  }
  return param_1;
}



// Function: FUN_10015700 @ 0x10015700

undefined4 __cdecl FUN_10015700(undefined4 param_1)

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



// Function: setSBCS @ 0x10015780

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_10041f60)[local_8] = 0;
  }
  DAT_10041dd8 = 0;
  DAT_10041e5c = 0;
  DAT_10042064 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_10041e50 + local_8 * 2) = 0;
  }
  return;
}



// Function: FUN_10015800 @ 0x10015800

void FUN_10015800(void)

{
  BOOL BVar1;
  uint local_520;
  WCHAR local_51c [128];
  WCHAR local_41c [128];
  _cpinfo local_31c;
  CHAR local_308 [256];
  WORD local_208 [256];
  BYTE *local_8;
  
  BVar1 = GetCPInfo(DAT_10041dd8,&local_31c);
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
    FUN_10017ed0(1,local_308,0x100,local_208,DAT_10041dd8,DAT_10042064,0);
    FUN_10018ae0(DAT_10042064,0x100,local_308,0x100,local_41c,0x100,DAT_10041dd8,0);
    FUN_10018ae0(DAT_10042064,0x200,local_308,0x100,local_51c,0x100,DAT_10041dd8,0);
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_208[local_520] & 1) == 0) {
        if ((local_208[local_520] & 2) == 0) {
          (&DAT_10041e60)[local_520] = 0;
        }
        else {
          (&DAT_10041f61)[local_520] = (&DAT_10041f61)[local_520] | 0x20;
          (&DAT_10041e60)[local_520] = *(undefined1 *)((int)local_51c + local_520);
        }
      }
      else {
        (&DAT_10041f61)[local_520] = (&DAT_10041f61)[local_520] | 0x10;
        (&DAT_10041e60)[local_520] = *(undefined1 *)((int)local_41c + local_520);
      }
    }
  }
  else {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_520 < 0x41) || (0x5a < local_520)) {
        if ((local_520 < 0x61) || (0x7a < local_520)) {
          (&DAT_10041e60)[local_520] = 0;
        }
        else {
          (&DAT_10041f61)[local_520] = (&DAT_10041f61)[local_520] | 0x20;
          (&DAT_10041e60)[local_520] = (char)local_520 + -0x20;
        }
      }
      else {
        (&DAT_10041f61)[local_520] = (&DAT_10041f61)[local_520] | 0x10;
        (&DAT_10041e60)[local_520] = (char)local_520 + ' ';
      }
    }
  }
  return;
}



// Function: FUN_10015b10 @ 0x10015b10

undefined4 FUN_10015b10(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10041dd8;
  if (DAT_10041e5c == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_10015b30 @ 0x10015b30

void __fastcall FUN_10015b30(void *param_1)

{
  if (DAT_100421f0 == 0) {
    FUN_10015350(param_1,0xfffffffd);
    DAT_100421f0 = 1;
  }
  return;
}



// Function: FUN_10015b60 @ 0x10015b60

undefined4 * __cdecl FUN_10015b60(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10015d17_caseD_2;
        case 3:
          goto switchD_10015d17_caseD_3;
        }
        goto switchD_10015d17_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10015d17_caseD_0;
      case 1:
        goto switchD_10015d17_caseD_1;
      case 2:
        goto switchD_10015d17_caseD_2;
      case 3:
        goto switchD_10015d17_caseD_3;
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
              goto switchD_10015d17_caseD_2;
            case 3:
              goto switchD_10015d17_caseD_3;
            }
            goto switchD_10015d17_caseD_1;
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
              goto switchD_10015d17_caseD_2;
            case 3:
              goto switchD_10015d17_caseD_3;
            }
            goto switchD_10015d17_caseD_1;
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
              goto switchD_10015d17_caseD_2;
            case 3:
              goto switchD_10015d17_caseD_3;
            }
            goto switchD_10015d17_caseD_1;
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
switchD_10015d17_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10015d17_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10015d17_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10015d17_caseD_0:
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
        goto switchD_10015b95_caseD_2;
      case 3:
        goto switchD_10015b95_caseD_3;
      }
      goto switchD_10015b95_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10015b95_caseD_0;
    case 1:
      goto switchD_10015b95_caseD_1;
    case 2:
      goto switchD_10015b95_caseD_2;
    case 3:
      goto switchD_10015b95_caseD_3;
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
            goto switchD_10015b95_caseD_2;
          case 3:
            goto switchD_10015b95_caseD_3;
          }
          goto switchD_10015b95_caseD_1;
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
            goto switchD_10015b95_caseD_2;
          case 3:
            goto switchD_10015b95_caseD_3;
          }
          goto switchD_10015b95_caseD_1;
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
            goto switchD_10015b95_caseD_2;
          case 3:
            goto switchD_10015b95_caseD_3;
          }
          goto switchD_10015b95_caseD_1;
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
switchD_10015b95_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10015b95_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10015b95_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10015b95_caseD_0:
  return param_1;
}



// Function: __aulldiv @ 0x10015ea0

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



// Function: __aullrem @ 0x10015f10

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



// Function: FUN_10015f90 @ 0x10015f90

uint __cdecl FUN_10015f90(uint param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *local_18;
  uint local_10;
  uint local_8;
  
  if ((param_2 == (int *)0x0) &&
     (iVar3 = FUN_1000a680(2,0x1003b2d4,0x69,0,(byte *)"str != NULL"), iVar3 == 1)) {
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
       (((param_2 != (int *)&DAT_1003e928 && (param_2 != (int *)&DAT_1003e948)) ||
        (iVar3 = __isatty(uVar4), iVar3 == 0)))) {
      FUN_1001a990(piVar2);
    }
    if ((piVar2[3] & 0x108U) == 0) {
      local_8 = 1;
      local_10 = FUN_1001a680(uVar4,(char *)&param_1,1);
    }
    else {
      if ((*piVar2 - piVar2[2] < 0) &&
         (iVar3 = FUN_1000a680(2,0x1003b2d4,0xa0,0,
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
          local_18 = &DAT_1003df98;
        }
        else {
          local_18 = (undefined *)((&DAT_100420a0)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x24);
        }
        if ((local_18[4] & 0x20) != 0) {
          FUN_1001a530(uVar4,0,2);
        }
      }
      else {
        local_10 = FUN_1001a680(uVar4,(char *)piVar2[2],local_8);
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



// Function: FUN_10016210 @ 0x10016210

int __cdecl FUN_10016210(int *param_1,byte *param_2,undefined4 *param_3)

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
    local_1c = (int)(char)(&DAT_1003b2ec)[local_294 * 8 + local_1c] >> 4;
    switch(local_1c) {
    case 0:
switchD_100162c9_caseD_0:
      local_20 = 0;
      pbVar4 = pbVar5;
      if ((*(ushort *)(PTR_DAT_1003e05c + (uint)bVar1 * 2) & 0x8000) != 0) {
        FUN_10016f40((int)(char)bVar1,param_1,&local_230);
        stack0xffffffd4 = CONCAT31(uStack_2b,*pbVar5);
        pbVar4 = param_2 + 2;
        if ((*pbVar5 == 0) &&
           (iVar9 = FUN_1000a680(2,0x1003b360,0x186,0,(byte *)"ch != _T(\'\\0\')"), iVar9 == 1)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
      }
      param_2 = pbVar4;
      FUN_10016f40((int)uStack_2d._1_1_,param_1,&local_230);
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
        local_248 = FUN_10017050((int *)&param_3);
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
        local_238 = FUN_10017050((int *)&param_3);
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
          goto switchD_100162c9_caseD_0;
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
          uVar6 = FUN_10017050((int *)&param_3);
          local_24c._0_1_ = (undefined1)uVar6;
          local_22c[0]._0_1_ = (undefined1)local_24c;
          local_28 = 1;
          local_24c = (short)uVar6;
        }
        else {
          local_18 = FUN_10017090((int *)&param_3);
          local_28 = FUN_1001acd0((LPSTR)local_22c,local_18);
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
        (*(code *)PTR___fptrap_1003de90)(&local_268,local_24,(int)uStack_2d._1_1_,local_238,local_c)
        ;
        if (((local_8 & 0x80) != 0) && (local_238 == 0)) {
          (*(code *)PTR___fptrap_1003de9c)(local_24);
        }
        if ((uStack_2d._1_1_ == 'g') && ((local_8 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_1003de94)(local_24);
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
        local_24 = (short *)FUN_10017050((int *)&param_3);
        if ((local_8 & 0x810) == 0) {
          if (local_24 == (short *)0x0) {
            local_24 = (short *)PTR_DAT_1003e550;
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
            local_24 = (short *)PTR_DAT_1003e554;
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
        local_250 = (short *)FUN_10017050((int *)&param_3);
        if ((local_250 == (short *)0x0) || (*(int *)(local_250 + 2) == 0)) {
          local_24 = (short *)PTR_DAT_1003e550;
          local_28 = _strlen(PTR_DAT_1003e550);
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
        goto LAB_100169d5;
      case 0x6e:
        local_260 = (int *)FUN_10017050((int *)&param_3);
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
        goto LAB_100169d5;
      case 0x70:
        local_238 = 8;
      case 0x58:
        local_234 = 7;
        goto LAB_1001697f;
      case 0x75:
        local_23c = 10;
        goto LAB_100169d5;
      case 0x78:
        local_234 = 0x27;
LAB_1001697f:
        local_23c = 0x10;
        if ((local_8 & 0x80) != 0) {
          local_244 = '0';
          local_243 = (char)local_234 + 'Q';
          local_14 = 2;
        }
LAB_100169d5:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar7 = FUN_10017050((int *)&param_3);
              local_27c = (ulonglong)uVar7;
            }
            else {
              iVar9 = FUN_10017050((int *)&param_3);
              local_27c = (ulonglong)iVar9;
            }
          }
          else if ((local_8 & 0x40) == 0) {
            uVar7 = FUN_10017050((int *)&param_3);
            local_27c = (ulonglong)(uVar7 & 0xffff);
          }
          else {
            uVar6 = FUN_10017050((int *)&param_3);
            local_27c = (ulonglong)(int)(short)uVar6;
          }
        }
        else {
          local_27c = FUN_10017070((int *)&param_3);
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
          FUN_10016fc0(0x20,local_280,param_1,&local_230);
        }
        FUN_10017000(&local_244,local_14,param_1,&local_230);
        if (((local_8 & 8) != 0) && ((local_8 & 4) == 0)) {
          FUN_10016fc0(0x30,local_280,param_1,&local_230);
        }
        if ((local_20 == 0) || ((int)local_28 < 1)) {
          FUN_10017000((char *)local_24,local_28,param_1,&local_230);
        }
        else {
          local_284 = local_24;
          local_288 = local_28;
          while (sVar8 = local_288 - 1, bVar11 = local_288 != 0, local_288 = sVar8, bVar11) {
            sVar2 = *local_284;
            local_284 = local_284 + 1;
            iVar9 = FUN_1001acd0(local_28c,sVar2);
            if (iVar9 < 1) break;
            FUN_10017000(local_28c,iVar9,param_1,&local_230);
          }
        }
        if ((local_8 & 4) != 0) {
          FUN_10016fc0(0x20,local_280,param_1,&local_230);
        }
      }
    }
  } while( true );
}



// Function: FUN_10016f40 @ 0x10016f40

void __cdecl FUN_10016f40(uint param_1,int *param_2,int *param_3)

{
  uint local_8;
  
  param_2[1] = param_2[1] + -1;
  if (param_2[1] < 0) {
    local_8 = FUN_10015f90(param_1,param_2);
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



// Function: FUN_10016fc0 @ 0x10016fc0

void __cdecl FUN_10016fc0(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    FUN_10016f40(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Function: FUN_10017000 @ 0x10017000

void __cdecl FUN_10017000(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_10016f40((int)cVar1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Function: FUN_10017050 @ 0x10017050

undefined4 __cdecl FUN_10017050(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



// Function: FUN_10017070 @ 0x10017070

undefined8 __cdecl FUN_10017070(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



// Function: FUN_10017090 @ 0x10017090

undefined2 __cdecl FUN_10017090(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined2 *)(*param_1 + -4);
}



// Function: __dosmaperr @ 0x100170b0

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  DWORD *pDVar1;
  uint local_8;
  
  pDVar1 = FUN_10017160();
  *pDVar1 = param_1;
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          pDVar1 = FUN_10017150();
          *pDVar1 = 0x16;
        }
        else {
          pDVar1 = FUN_10017150();
          *pDVar1 = 8;
        }
      }
      else {
        pDVar1 = FUN_10017150();
        *pDVar1 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_1003e558 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  pDVar1 = FUN_10017150();
  *pDVar1 = *(DWORD *)(&DAT_1003e55c + local_8 * 8);
  return;
}



// Function: FUN_10017150 @ 0x10017150

DWORD * FUN_10017150(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000e7c0();
  return pDVar1 + 2;
}



// Function: FUN_10017160 @ 0x10017160

DWORD * FUN_10017160(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000e7c0();
  return pDVar1 + 3;
}



// Function: FUN_10017170 @ 0x10017170

float10 __cdecl FUN_10017170(int param_1,undefined4 param_2,undefined4 param_3)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_1003e798 == 0) {
    fVar2 = __umatherr(1,param_1,param_2,param_3,0,0,param_2,param_3);
  }
  else {
    pDVar1 = FUN_10017150();
    *pDVar1 = 0x21;
    FUN_10017e10();
    fVar2 = (float10)(double)CONCAT44(param_3,param_2);
  }
  return fVar2;
}



// Function: FUN_100171d0 @ 0x100171d0

float10 __cdecl
FUN_100171d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  double dVar1;
  DWORD *pDVar2;
  float10 fVar3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  dVar1 = (double)CONCAT44(param_3,param_2) + (double)CONCAT44(param_5,param_4);
  if (DAT_1003e798 == 0) {
    uStack_8 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_c = SUB84(dVar1,0);
    fVar3 = __umatherr(1,param_1,param_2,param_3,param_4,param_5,local_c,uStack_8);
  }
  else {
    pDVar2 = FUN_10017150();
    *pDVar2 = 0x21;
    FUN_10017e10();
    fVar3 = (float10)dVar1;
  }
  return fVar3;
}



// Function: FUN_10017240 @ 0x10017240

float10 __cdecl
FUN_10017240(uint param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  float10 fVar2;
  uint local_60 [14];
  uint local_28;
  int local_8;
  
  bVar1 = FUN_100178a0(param_1,(double *)&param_5,param_7);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_28 = local_28 & 0xfffffffe;
    FUN_100173d0(local_60,&param_7,param_1,param_2,&param_3,&param_5);
  }
  local_8 = FUN_10017d40(param_1);
  if ((DAT_1003e798 == 0) && (local_8 != 0)) {
    fVar2 = __umatherr(local_8,param_2,param_3,param_4,0,0,param_5,param_6);
  }
  else {
    FID_conflict___set_errno_from_matherr(local_8);
    FUN_10017e10();
    fVar2 = (float10)(double)CONCAT44(param_6,param_5);
  }
  return fVar2;
}



// Function: FUN_10017300 @ 0x10017300

float10 __cdecl
FUN_10017300(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,uint param_9)

{
  bool bVar1;
  undefined3 extraout_var;
  float10 fVar2;
  uint local_60 [10];
  undefined4 local_38;
  undefined4 local_34;
  uint local_28;
  int local_8;
  
  bVar1 = FUN_100178a0(param_1,(double *)&param_7,param_9);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_28 = local_28 & 0xffffffe1 | 3;
    local_38 = param_5;
    local_34 = param_6;
    FUN_100173d0(local_60,&param_9,param_1,param_2,&param_3,&param_7);
  }
  local_8 = FUN_10017d40(param_1);
  if ((DAT_1003e798 == 0) && (local_8 != 0)) {
    fVar2 = __umatherr(local_8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FID_conflict___set_errno_from_matherr(local_8);
    FUN_10017e10();
    fVar2 = (float10)(double)CONCAT44(param_8,param_7);
  }
  return fVar2;
}



// Function: FUN_100173d0 @ 0x100173d0

void __cdecl
FUN_100173d0(uint *param_1,uint *param_2,uint param_3,uint param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  DWORD local_8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    local_8 = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    local_8 = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    local_8 = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    local_8 = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    local_8 = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] & 0xffffffef | (uint)((*param_2 & 1) == 0) << 4;
  param_1[2] = param_1[2] & 0xfffffff7 | (uint)((*param_2 & 4) == 0) << 3;
  param_1[2] = param_1[2] & 0xfffffffb | (uint)((*param_2 & 8) == 0) << 2;
  param_1[2] = param_1[2] & 0xfffffffd | (uint)((*param_2 & 0x10) == 0) << 1;
  param_1[2] = param_1[2] & 0xfffffffe | (uint)((*param_2 & 0x20) == 0);
  uVar1 = FUN_10017dd0();
  if ((uVar1 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar1 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar1 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar1 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar1 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar1 = *param_2 & 0xc00;
  if (uVar1 < 0x801) {
    if (uVar1 == 0x800) {
      *param_1 = *param_1 & 0xfffffffc | 2;
    }
    else if (uVar1 == 0) {
      *param_1 = *param_1 & 0xfffffffc;
    }
    else if (uVar1 == 0x400) {
      *param_1 = *param_1 & 0xfffffffc | 1;
    }
  }
  else if (uVar1 == 0xc00) {
    *param_1 = *param_1 | 3;
  }
  uVar1 = *param_2 & 0x300;
  if (uVar1 == 0) {
    *param_1 = *param_1 & 0xffffffe3 | 8;
  }
  else if (uVar1 == 0x200) {
    *param_1 = *param_1 & 0xffffffe3 | 4;
  }
  else if (uVar1 == 0x300) {
    *param_1 = *param_1 & 0xffffffe3;
  }
  *param_1 = *param_1 & 0xfffe001f | (param_4 & 0xfff) << 5;
  param_1[8] = param_1[8] | 1;
  param_1[8] = param_1[8] & 0xffffffe1 | 2;
  param_1[4] = *param_5;
  param_1[5] = param_5[1];
  param_1[0x14] = param_1[0x14] | 1;
  param_1[0x14] = param_1[0x14] & 0xffffffe1 | 2;
  param_1[0x10] = *param_6;
  param_1[0x11] = param_6[1];
  FUN_10017df0();
  RaiseException(local_8,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] >> 4 & 1) != 0) {
    *param_2 = *param_2 & 0xfffffffe;
  }
  if ((param_1[2] >> 3 & 1) != 0) {
    *param_2 = *param_2 & 0xfffffffb;
  }
  if ((param_1[2] >> 2 & 1) != 0) {
    *param_2 = *param_2 & 0xfffffff7;
  }
  if ((param_1[2] >> 1 & 1) != 0) {
    *param_2 = *param_2 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  switch(*param_1 & 3) {
  case 0:
    *param_2 = *param_2 & 0xfffff3ff;
    break;
  case 1:
    *param_2 = *param_2 & 0xfffff3ff | 0x400;
    break;
  case 2:
    *param_2 = *param_2 & 0xfffff3ff | 0x800;
    break;
  case 3:
    *param_2 = *param_2 & 0xfffff3ff | 0xc00;
  }
  uVar1 = *param_1 >> 2 & 7;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xfffff3ff | 0x300;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xfffff3ff | 0x200;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xfffff3ff;
  }
  *param_6 = param_1[0x10];
  param_6[1] = param_1[0x11];
  return;
}



// Function: FUN_100178a0 @ 0x100178a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_100178a0(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  ulonglong uVar2;
  uint uVar3;
  float10 fVar4;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  int local_1c;
  int local_18;
  undefined8 local_14;
  uint local_c;
  uint local_8;
  
  local_8 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || ((param_3 & 1) == 0)) {
    if (((param_1 & 4) == 0) || ((param_3 & 4) == 0)) {
      if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
        if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
          local_c = (uint)((param_1 & 0x10) != 0);
          if (*param_2 == _DAT_1003a738) {
            local_c = 1;
          }
          else {
            fVar4 = FUN_1001af60(*(uint *)param_2,*(uint *)((int)param_2 + 4),&local_1c);
            dVar1 = (double)fVar4;
            local_18 = local_1c + -0x600;
            if (local_18 < -0x432) {
              local_14 = dVar1 * _DAT_1003a738;
              local_c = 1;
            }
            else {
              local_14 = (double)((ulonglong)dVar1 & 0xfffffffffffff);
              local_14 = (double)((ulonglong)local_14 | 0x10000000000000);
              for (; local_18 < -0x3fd; local_18 = local_18 + 1) {
                if ((((ulonglong)local_14 & 1) != 0) && (local_c == 0)) {
                  local_c = 1;
                }
                uVar3 = (uint)local_14 >> 1;
                uVar2 = (ulonglong)local_14 & 0x100000000;
                local_14._0_4_ = uVar3;
                if (uVar2 != 0) {
                  local_14._0_4_ = uVar3 | 0x80000000;
                }
                local_14 = (double)CONCAT44(local_14._4_4_ >> 1,(uint)local_14);
              }
              if (dVar1 < _DAT_1003a738) {
                local_14 = -local_14;
              }
            }
            *(uint *)param_2 = (uint)local_14;
            *(uint *)((int)param_2 + 4) = local_14._4_4_;
          }
          if (local_c != 0) {
            FUN_10017e50();
          }
          local_8 = local_8 & 0xfffffffd;
        }
      }
      else {
        FUN_10017e50();
        uVar3 = param_3 & 0xc00;
        if (uVar3 < 0x801) {
          if (uVar3 == 0x800) {
            if (*param_2 <= _DAT_1003a738) {
              local_34 = -(double)CONCAT44(DAT_1003eb9c,DAT_1003eb98);
            }
            else {
              local_34 = (double)CONCAT44(DAT_1003eb8c,DAT_1003eb88);
            }
            *(undefined4 *)param_2 = (undefined4)local_34;
            *(undefined4 *)((int)param_2 + 4) = local_34._4_4_;
          }
          else if (uVar3 == 0) {
            if (*param_2 <= _DAT_1003a738) {
              local_2c = -(double)CONCAT44(DAT_1003eb8c,DAT_1003eb88);
            }
            else {
              local_2c = (double)CONCAT44(DAT_1003eb8c,DAT_1003eb88);
            }
            *(undefined4 *)param_2 = (undefined4)local_2c;
            *(undefined4 *)((int)param_2 + 4) = local_2c._4_4_;
          }
          else if (uVar3 == 0x400) {
            if (*param_2 <= _DAT_1003a738) {
              local_3c = -(double)CONCAT44(DAT_1003eb8c,DAT_1003eb88);
            }
            else {
              local_3c = (double)CONCAT44(DAT_1003eb9c,DAT_1003eb98);
            }
            *(undefined4 *)param_2 = (undefined4)local_3c;
            *(undefined4 *)((int)param_2 + 4) = local_3c._4_4_;
          }
        }
        else if (uVar3 == 0xc00) {
          if (*param_2 <= _DAT_1003a738) {
            local_44 = -(double)CONCAT44(DAT_1003eb9c,DAT_1003eb98);
          }
          else {
            local_44 = (double)CONCAT44(DAT_1003eb9c,DAT_1003eb98);
          }
          *(undefined4 *)param_2 = (undefined4)local_44;
          *(undefined4 *)((int)param_2 + 4) = local_44._4_4_;
        }
        local_8 = local_8 & 0xfffffffe;
      }
    }
    else {
      FUN_10017e50();
      local_8 = local_8 & 0xfffffffb;
    }
  }
  else {
    FUN_10017e50();
    local_8 = local_8 & 0xfffffff7;
  }
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_10017e50();
    local_8 = local_8 & 0xffffffef;
  }
  return local_8 == 0;
}



// Function: __umatherr @ 0x10017c20

/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio */

float10 __cdecl
__umatherr(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  double dVar1;
  int iVar2;
  _exception local_24;
  
  local_24.name = __get_fname(param_2);
  if (local_24.name == (char *)0x0) {
    FUN_10017e10();
    FID_conflict___set_errno_from_matherr(param_1);
    dVar1 = (double)CONCAT44(param_8,param_7);
  }
  else {
    local_24.type = param_1;
    local_24.arg1._0_4_ = param_3;
    local_24.arg1._4_4_ = param_4;
    local_24.arg2._0_4_ = param_5;
    local_24.arg2._4_4_ = param_6;
    local_24.retval._0_4_ = param_7;
    local_24.retval._4_4_ = param_8;
    FUN_10017e10();
    iVar2 = __matherr(&local_24);
    if (iVar2 == 0) {
      FID_conflict___set_errno_from_matherr(param_1);
    }
    dVar1 = (double)CONCAT44(local_24.retval._4_4_,local_24.retval._0_4_);
  }
  return (float10)dVar1;
}



// Function: FID_conflict:__set_errno_from_matherr @ 0x10017cc0

/* Library Function - Multiple Matches With Different Base Names
    __set_errno
    __set_errno_from_matherr
   
   Library: Visual Studio */

errno_t __cdecl FID_conflict___set_errno_from_matherr(int _Value)

{
  if (_Value == 1) {
    _Value = (int)FUN_10017150();
    *(DWORD *)_Value = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    _Value = (int)FUN_10017150();
    *(DWORD *)_Value = 0x22;
  }
  return _Value;
}



// Function: __get_fname @ 0x10017d00

/* Library Function - Single Match
    __get_fname
   
   Library: Visual Studio */

undefined * __cdecl __get_fname(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x1a < local_8) {
      return (undefined *)0x0;
    }
    if (*(int *)(&DAT_1003e6c0 + local_8 * 8) == param_1) break;
    local_8 = local_8 + 1;
  }
  return (&PTR_DAT_1003e6c4)[local_8 * 2];
}



// Function: FUN_10017d40 @ 0x10017d40

undefined4 __cdecl FUN_10017d40(uint param_1)

{
  undefined4 local_8;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          if ((param_1 & 2) == 0) {
            local_8 = 0;
          }
          else {
            local_8 = 4;
          }
        }
        else {
          local_8 = 3;
        }
      }
      else {
        local_8 = 2;
      }
    }
    else {
      local_8 = 1;
    }
  }
  else {
    local_8 = 5;
  }
  return local_8;
}



// Function: __matherr @ 0x10017dc0

/* Library Function - Single Match
    __matherr
   
   Library: Visual Studio */

int __cdecl __matherr(_exception *_Except)

{
  return 0;
}



// Function: FUN_10017dd0 @ 0x10017dd0

int FUN_10017dd0(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



// Function: FUN_10017df0 @ 0x10017df0

int FUN_10017df0(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



// Function: FUN_10017e10 @ 0x10017e10

int FUN_10017e10(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



// Function: FUN_10017e50 @ 0x10017e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10017e50(void)

{
  return;
}



// Function: FUN_10017ed0 @ 0x10017ed0

BOOL __cdecl
FUN_10017ed0(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1003b438;
  puStack_10 = &LAB_100146ec;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc4;
  if (DAT_100409b0 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100409b0 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_100409b0 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_100409b0 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_100409c8;
    }
    BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  }
  else if (DAT_100409b0 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_100409d8;
    }
    iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar3 == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_100103c0();
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



// Function: FUN_10018090 @ 0x10018090

uint * __thiscall FUN_10018090(void *this,int param_1,uint *param_2)

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
    FUN_1000b9c0(this,0x13);
    local_8 = 1;
    DAT_10041dc4 = DAT_10041dc4 + 1;
    while (DAT_10041dd4 != 0) {
      Sleep(1);
    }
    if (param_1 == 0) {
      local_18 = 1;
      local_10 = 0;
      if (param_2 == (uint *)0x0) {
        local_c = FUN_10018620();
      }
      else if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
              (*(char *)((int)param_2 + 2) == '_')) {
        local_a0 = param_2;
        do {
          pbVar1 = FUN_1001c5e0((byte *)local_a0,&DAT_1003b488);
          if (((pbVar1 == (byte *)0x0) || (sVar4 = (int)pbVar1 - (int)local_a0, sVar4 == 0)) ||
             (*pbVar1 == 0x3b)) {
            if (local_8 != 0) {
              FUN_1000ba60(0x13);
              DAT_10041dc4 = DAT_10041dc4 + -1;
            }
            return (uint *)0x0;
          }
          local_14 = 1;
          while ((local_14 < 6 &&
                 ((iVar2 = _strncmp(*(char **)(local_14 * 0xc + 0x1003e8c0),(char *)local_a0,sVar4),
                  iVar2 != 0 ||
                  (sVar3 = _strlen(*(char **)(local_14 * 0xc + 0x1003e8c0)), sVar4 != sVar3))))) {
            local_14 = local_14 + 1;
          }
          pbVar1 = pbVar1 + 1;
          sVar4 = FUN_1001c560(pbVar1,&DAT_1003b484);
          if ((sVar4 == 0) && (*pbVar1 != 0x3b)) {
            if (local_8 != 0) {
              FUN_1000ba60(0x13);
              DAT_10041dc4 = DAT_10041dc4 + -1;
            }
            return (uint *)0x0;
          }
          if (local_14 < 6) {
            _strncpy((char *)local_9c,(char *)pbVar1,sVar4);
            *(undefined1 *)((int)local_9c + sVar4) = 0;
            iVar2 = FUN_10018480(local_14,local_9c);
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
          local_b0 = FUN_10018620();
        }
        local_c = local_b0;
      }
      else {
        local_c = FUN_10018720(param_2,local_9c,(undefined4 *)0x0,(undefined4 *)0x0);
        if (local_c != (uint *)0x0) {
          for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
            if (local_14 != 0) {
              iVar2 = _strcmp((char *)local_9c,(&DAT_1003e8c4)[local_14 * 3]);
              if (iVar2 == 0) {
                local_10 = local_10 + 1;
              }
              else {
                iVar2 = FUN_10018480(local_14,local_9c);
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
              local_b4 = FUN_10018620();
            }
            local_c = local_b4;
          }
          else {
            local_c = FUN_10018620();
            FUN_1000c550(DAT_1003e8c4,2);
            DAT_1003e8c4 = (void *)0x0;
          }
        }
      }
    }
    else {
      if (param_2 == (uint *)0x0) {
        local_ac = (&DAT_1003e8c4)[param_1 * 3];
      }
      else {
        local_ac = (uint *)FUN_10018480(param_1,param_2);
      }
      local_c = local_ac;
    }
    if (local_8 != 0) {
      FUN_1000ba60(0x13);
      DAT_10041dc4 = DAT_10041dc4 + -1;
    }
  }
  return local_c;
}



// Function: FUN_10018480 @ 0x10018480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10018480(int param_1,uint *param_2)

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
  
  puVar1 = FUN_10018720(param_2,local_a0,local_ac,&local_a4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0x132;
    pcVar5 = "setlocal.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)local_a0);
    local_c = (uint *)FUN_1000bac0((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar6);
    if (local_c == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      local_10 = (undefined *)(&DAT_1003e8c4)[param_1 * 3];
      local_8 = *(undefined4 *)(&DAT_100409c0 + param_1 * 4);
      FUN_10015b60(local_18,(undefined4 *)(&DAT_10040a04 + param_1 * 6),6);
      local_1c = DAT_100409d8;
      puVar1 = FUN_100101d0(local_c,local_a0);
      (&DAT_1003e8c4)[param_1 * 3] = puVar1;
      *(uint *)(&DAT_100409c0 + param_1 * 4) = local_ac[0] & 0xffff;
      FUN_10015b60((undefined4 *)(&DAT_10040a04 + param_1 * 6),local_ac,6);
      if (param_1 == 2) {
        DAT_100409d8 = local_a4;
      }
      if (param_1 == 1) {
        _DAT_100409dc = local_a4;
      }
      iVar6 = (**(code **)(&DAT_1003e8c8 + param_1 * 0xc))();
      if (iVar6 == 0) {
        if (local_10 != &DAT_1003e7b4) {
          FUN_1000c550(local_10,2);
        }
        uVar2 = (&DAT_1003e8c4)[param_1 * 3];
      }
      else {
        (&DAT_1003e8c4)[param_1 * 3] = local_10;
        FUN_1000c550(local_c,2);
        *(undefined4 *)(&DAT_100409c0 + param_1 * 4) = local_8;
        DAT_100409d8 = local_1c;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



// Function: FUN_10018620 @ 0x10018620

uint * FUN_10018620(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int local_8;
  
  bVar1 = true;
  if (DAT_1003e8c4 == (uint *)0x0) {
    DAT_1003e8c4 = (uint *)FUN_1000bac0((void *)0x351,2,0x1003b48c,0x167);
  }
  *(undefined1 *)DAT_1003e8c4 = 0;
  for (local_8 = 1; __strcats(DAT_1003e8c4,3), local_8 < 5; local_8 = local_8 + 1) {
    FUN_100101e0(DAT_1003e8c4,(uint *)&DAT_1003b484);
    iVar2 = _strcmp((char *)(&DAT_1003e8c4)[local_8 * 3],(char *)(&DAT_1003e8c4)[(local_8 + 1) * 3])
    ;
    if (iVar2 != 0) {
      bVar1 = false;
    }
  }
  puVar3 = DAT_1003e8c4;
  if (bVar1) {
    FUN_1000c550(DAT_1003e8c4,2);
    DAT_1003e8c4 = (uint *)0x0;
    puVar3 = (uint *)PTR_DAT_1003e8dc;
  }
  return puVar3;
}



// Function: FUN_10018720 @ 0x10018720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_10018720(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

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
    iVar1 = _strcmp(&DAT_1003e83c,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_1003e7b8,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_10018910((char *)local_8c,(byte *)param_1);
      if (iVar1 != 0) {
        return (uint *)0x0;
      }
      iVar1 = FUN_1001c620((char *)local_8c,(undefined2 *)&DAT_100409b4,(int)local_8c);
      if (iVar1 == 0) {
        return (uint *)0x0;
      }
      _DAT_100409bc = (uint)DAT_100409b8;
      ___lc_lctostr((uint *)&DAT_1003e83c,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_100101d0((uint *)&DAT_1003e7b8,(uint *)&DAT_1003e83c);
      }
      else {
        FUN_100101d0((uint *)&DAT_1003e7b8,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_10015b60(param_3,(undefined4 *)&DAT_100409b4,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_10015b60(param_4,(undefined4 *)&DAT_100409bc,4);
    }
    FUN_100101d0(param_2,(uint *)&DAT_1003e83c);
    param_2 = (uint *)&DAT_1003e83c;
  }
  return param_2;
}



// Function: FUN_100188b0 @ 0x100188b0

undefined4 FUN_100188b0(void)

{
  return 0;
}



// Function: __strcats @ 0x100188c0

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Debug */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    FUN_100101e0(param_1,(uint *)*local_8);
    local_8 = local_8 + 1;
  }
  return;
}



// Function: FUN_10018910 @ 0x10018910

undefined4 __cdecl FUN_10018910(char *param_1,byte *param_2)

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
    FUN_100101d0((uint *)(param_1 + 0x80),(uint *)(param_2 + 1));
    uVar2 = 0;
  }
  else {
    local_8 = 0;
    while (_Count = FUN_1001c560(param_2,&DAT_1003b49c), _Count != 0) {
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



// Function: ___lc_lctostr @ 0x10018a70

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___lc_lctostr(uint *param_1,uint *param_2)

{
  FUN_100101d0(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    __strcats(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    __strcats(param_1,2);
  }
  return;
}



// Function: FUN_10018ae0 @ 0x10018ae0

int __cdecl
FUN_10018ae0(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1003b4a8;
  puStack_10 = &LAB_100146ec;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_100409e0 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100409e0 = 2;
    }
    else {
      DAT_100409e0 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10018df0(param_3,param_4);
  }
  if (DAT_100409e0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
  }
  else if (DAT_100409e0 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100409d8;
    }
    iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_100103c0();
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
            FUN_100103c0();
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



// Function: FUN_10018df0 @ 0x10018df0

int __cdecl FUN_10018df0(char *param_1,int param_2)

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



// Function: ___addl @ 0x10018e40

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



// Function: ___add_12 @ 0x10018e80

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



// Function: ___shl_12 @ 0x10018f30

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



// Function: ___shr_12 @ 0x10018f90

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



// Function: FUN_10019000 @ 0x10019000

void __cdecl FUN_10019000(char *param_1,int param_2,uint *param_3)

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



// Function: FUN_10019140 @ 0x10019140

uint __cdecl
FUN_10019140(undefined2 *param_1,undefined4 *param_2,byte *param_3,int param_4,int param_5,
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
          FUN_10019000(local_3c,local_74,(uint *)&local_64);
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
              FUN_1001d800((int *)&local_64,local_18,param_4);
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
        if (bVar1 == DAT_1003e054) {
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
        if (bVar1 == DAT_1003e054) {
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
        if (bVar1 == DAT_1003e054) {
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
        if (DAT_1003e050 < 2) {
          local_94 = *(ushort *)(PTR_DAT_1003e05c + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_94 = FUN_10011160(local_40 & 0xff,4);
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
      if ((byte)local_40 == DAT_1003e054) {
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
        if (DAT_1003e050 < 2) {
          local_9c = *(ushort *)(PTR_DAT_1003e05c + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_9c = FUN_10011160(local_40 & 0xff,4);
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
      if (DAT_1003e050 < 2) {
        local_a4 = *(ushort *)(PTR_DAT_1003e05c + (uint)bVar1 * 2) & 4;
        local_8 = pbVar3;
      }
      else {
        local_8 = pbVar3;
        local_a4 = FUN_10011160((uint)bVar1,4);
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
        if (DAT_1003e050 < 2) {
          local_b0 = *(ushort *)(PTR_DAT_1003e05c + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_b0 = FUN_10011160(local_40 & 0xff,4);
        }
        if (local_b0 == 0) goto LAB_10019867;
        local_80 = local_80 * 10 + -0x30 + (int)(char)(byte)local_40;
        if (0x1450 < local_80) break;
        local_40 = CONCAT31(local_40._1_3_,*local_8);
        local_8 = local_8 + 1;
      }
      local_80 = 0x1451;
LAB_10019867:
      local_18 = local_80;
      while( true ) {
        if (DAT_1003e050 < 2) {
          local_b4 = *(ushort *)(PTR_DAT_1003e05c + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_b4 = FUN_10011160(local_40 & 0xff,4);
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



// Function: FUN_10019c70 @ 0x10019c70

uint __cdecl FUN_10019c70(undefined4 *param_1,undefined4 *param_2,byte *param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_18;
  ushort local_10 [6];
  
  local_18 = FUN_10019140(local_10,param_2,param_3,param_4,0,0,0);
  bVar1 = FUN_10011a60(local_10,param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    local_18 = local_18 | 2;
  }
  return local_18;
}



// Function: FUN_10019cc0 @ 0x10019cc0

undefined4 __cdecl
FUN_10019cc0(int param_1,uint param_2,ushort param_3,int param_4,uint param_5,short *param_6)

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
          FUN_100101d0((uint *)(param_6 + 2),(uint *)"1#INF");
          *(undefined1 *)((int)param_6 + 3) = 5;
        }
        else {
          FUN_100101d0((uint *)(param_6 + 2),(uint *)"1#QNAN");
          *(undefined1 *)((int)param_6 + 3) = 6;
        }
      }
      else {
        FUN_100101d0((uint *)(param_6 + 2),(uint *)"1#IND");
        *(undefined1 *)((int)param_6 + 3) = 5;
      }
    }
    else {
      FUN_100101d0((uint *)(param_6 + 2),(uint *)"1#SNAN");
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
    FUN_1001d800((int *)&local_3c,-(int)local_60,1);
    if (0x3ffe < CONCAT11(cStack_31,local_32)) {
      local_60 = local_60 + 1;
      FUN_1001d3c0((int *)&local_3c,(int *)&local_58);
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



// Function: FUN_1001a1e0 @ 0x1001a1e0

int __cdecl FUN_1001a1e0(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_c;
  uint local_8;
  
  while( true ) {
    if (DAT_1003e050 < 2) {
      local_14 = *(ushort *)(PTR_DAT_1003e05c + (uint)*param_1 * 2) & 8;
    }
    else {
      local_14 = FUN_10011160((uint)*param_1,8);
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
    if (DAT_1003e050 < 2) {
      local_18 = *(ushort *)(PTR_DAT_1003e05c + local_8 * 2) & 4;
    }
    else {
      local_18 = FUN_10011160(local_8,4);
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



// Function: FUN_1001a2e0 @ 0x1001a2e0

void __cdecl FUN_1001a2e0(byte *param_1)

{
  FUN_1001a1e0(param_1);
  return;
}



// Function: FUN_1001a300 @ 0x1001a300

undefined8 __cdecl FUN_1001a300(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  uint local_1c;
  uint local_18;
  undefined8 local_10;
  uint local_8;
  
  while( true ) {
    if (DAT_1003e050 < 2) {
      local_18 = *(ushort *)(PTR_DAT_1003e05c + (uint)*param_1 * 2) & 8;
    }
    else {
      local_18 = FUN_10011160((uint)*param_1,8);
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
    if (DAT_1003e050 < 2) {
      local_1c = *(ushort *)(PTR_DAT_1003e05c + local_8 * 2) & 4;
    }
    else {
      local_1c = FUN_10011160(local_8,4);
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



// Function: FUN_1001a430 @ 0x1001a430

char * __thiscall FUN_1001a430(void *this,char *param_1)

{
  char *pcVar1;
  
  FUN_1000b9c0(this,0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_1000ba60(0xc);
  return pcVar1;
}



// Function: FID_conflict:__getenv_lk @ 0x1001a460

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
  
  local_c = DAT_1004078c;
  if (DAT_100421e0 != 0) {
    if ((DAT_1004078c == (int *)0x0) && (DAT_10040794 != 0)) {
      iVar1 = FUN_1001d960();
      if (iVar1 != 0) {
        return (char *)0x0;
      }
      local_c = DAT_1004078c;
    }
    DAT_1004078c = local_c;
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



// Function: FUN_1001a530 @ 0x1001a530

DWORD __cdecl FUN_1001a530(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  if ((param_1 < DAT_100421dc) &&
     ((*(byte *)((&DAT_100420a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001df20(param_1);
    DVar2 = FUN_1001a5c0(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_10017150();
    *pDVar1 = 9;
    pDVar1 = FUN_10017160();
    *pDVar1 = 0;
    DVar2 = 0xffffffff;
  }
  return DVar2;
}



// Function: FUN_1001a5c0 @ 0x1001a5c0

DWORD __cdecl FUN_1001a5c0(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  ulong local_8;
  
  hFile = (HANDLE)FUN_1001dda0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_10017150();
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
      *(byte *)((&DAT_100420a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
           *(byte *)((&DAT_100420a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
    }
    else {
      __dosmaperr(local_8);
      DVar2 = 0xffffffff;
    }
  }
  return DVar2;
}



// Function: FUN_1001a680 @ 0x1001a680

int __cdecl FUN_1001a680(uint param_1,char *param_2,uint param_3)

{
  DWORD *pDVar1;
  int iVar2;
  
  if ((param_1 < DAT_100421dc) &&
     ((*(byte *)((&DAT_100420a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001df20(param_1);
    iVar2 = FUN_1001a710(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_10017150();
    *pDVar1 = 9;
    pDVar1 = FUN_10017160();
    *pDVar1 = 0;
    iVar2 = -1;
  }
  return iVar2;
}



// Function: FUN_1001a710 @ 0x1001a710

int __cdecl FUN_1001a710(uint param_1,char *param_2,uint param_3)

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
    if ((*(byte *)((&DAT_100420a0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x20) != 0) {
      FUN_1001a5c0(param_1,0,2);
    }
    if (((int)*(char *)((&DAT_100420a0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) == 0) {
      BVar2 = WriteFile(*(HANDLE *)((&DAT_100420a0)[iVar4] + (param_1 & 0x1f) * 0x24),param_2,
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
        BVar2 = WriteFile(*(HANDLE *)((&DAT_100420a0)[iVar4] + (param_1 & 0x1f) * 0x24),local_418,
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
        if (((*(byte *)((&DAT_100420a0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) ||
           (*param_2 != '\x1a')) {
          pDVar3 = FUN_10017150();
          *pDVar3 = 0x1c;
          pDVar3 = FUN_10017160();
          *pDVar3 = 0;
          local_424 = -1;
        }
        else {
          local_424 = 0;
        }
      }
      else {
        if (local_10 == 5) {
          pDVar3 = FUN_10017150();
          *pDVar3 = 9;
          pDVar3 = FUN_10017160();
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



// Function: FUN_1001a990 @ 0x1001a990

void __cdecl FUN_1001a990(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_1000a680(2,0x1003b4e0,0x2e,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DAT_100409e4 = DAT_100409e4 + 1;
  uVar3 = FUN_1000bac0((void *)0x1000,2,0x1003b4e0,0x3b);
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



// Function: __isatty @ 0x1001aa60

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_100421dc) {
    uVar1 = (int)*(char *)((&DAT_100420a0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) &
            0x40;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_1001aaa0 @ 0x1001aaa0

void FUN_1001aaa0(void)

{
  uint local_8;
  
  if (DAT_10041dc0 == 0) {
    DAT_10041dc0 = 0x200;
  }
  else if (DAT_10041dc0 < 0x14) {
    DAT_10041dc0 = 0x14;
  }
  DAT_10040a7c = __calloc_dbg(DAT_10041dc0,4,2,"_file.c",0x83);
  if (DAT_10040a7c == (undefined1 *)0x0) {
    DAT_10041dc0 = 0x14;
    DAT_10040a7c = __calloc_dbg(0x14,4,2,"_file.c",0x86);
    if (DAT_10040a7c == (undefined1 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined ***)(DAT_10040a7c + local_8 * 4) = &PTR_DAT_1003e908 + local_8 * 8;
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_100420a0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == -1) ||
       (*(int *)((&DAT_100420a0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == 0)) {
      *(undefined4 *)(&DAT_1003e918 + local_8 * 0x20) = 0xffffffff;
    }
  }
  return;
}



// Function: FUN_1001abd0 @ 0x1001abd0

void __fastcall FUN_1001abd0(void *param_1)

{
  void *extraout_ECX;
  
  FUN_1001e220(param_1);
  if (DAT_100407a4 != '\0') {
    FUN_1001dfe0(extraout_ECX);
  }
  return;
}



// Function: FUN_1001abf0 @ 0x1001abf0

void __thiscall FUN_1001abf0(void *this,undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1003e908) || (&DAT_1003eb68 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_1000b9c0(this,((int)(param_1 + -0x400fa42) >> 5) + 0x1c);
  }
  return;
}



// Function: FUN_1001ac30 @ 0x1001ac30

void __thiscall FUN_1001ac30(void *this,int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000b9c0(this,param_1 + 0x1c);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}



// Function: FUN_1001ac60 @ 0x1001ac60

void __cdecl FUN_1001ac60(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1003e908) || (&DAT_1003eb68 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_1000ba60(((int)(param_1 + -0x400fa42) >> 5) + 0x1c);
  }
  return;
}



// Function: FUN_1001aca0 @ 0x1001aca0

void __cdecl FUN_1001aca0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000ba60(param_1 + 0x1c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}



// Function: FUN_1001acd0 @ 0x1001acd0

int __cdecl FUN_1001acd0(LPSTR param_1,undefined2 param_2)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar3;
  int iVar2;
  void *this;
  bool bVar4;
  
  LVar1 = InterlockedIncrement(&DAT_10041dd4);
  bVar4 = DAT_10041dc4 == 0;
  uVar3 = (short)((uint)LVar1 >> 0x10);
  if (!bVar4) {
    InterlockedDecrement(&DAT_10041dd4);
    FUN_1000b9c0(this,0x13);
    uVar3 = extraout_var;
  }
  iVar2 = FUN_1001ad50(param_1,CONCAT22(uVar3,param_2));
  if (bVar4) {
    InterlockedDecrement(&DAT_10041dd4);
  }
  else {
    FUN_1000ba60(0x13);
  }
  return iVar2;
}



// Function: FUN_1001ad50 @ 0x1001ad50

int __cdecl FUN_1001ad50(LPSTR param_1,uint param_2)

{
  DWORD *pDVar1;
  BOOL local_c;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else if (DAT_100409c8 == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      local_8 = 1;
    }
    else {
      pDVar1 = FUN_10017150();
      *pDVar1 = 0x2a;
      local_8 = -1;
    }
  }
  else {
    local_c = 0;
    local_8 = WideCharToMultiByte(DAT_100409d8,0x220,(LPCWSTR)&param_2,1,param_1,DAT_1003e050,
                                  (LPCSTR)0x0,&local_c);
    if ((local_8 == 0) || (local_c != 0)) {
      pDVar1 = FUN_10017150();
      *pDVar1 = 0x2a;
      local_8 = -1;
    }
  }
  return local_8;
}



// Function: FUN_1001adf0 @ 0x1001adf0

float10 __cdecl FUN_1001adf0(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_c;
  
  uStack_c = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_2._2_2_ & 0x800f | (param_3 + 0x3fe) * 0x10,
                                   CONCAT24(uStack_c,param_1));
}



// Function: FUN_1001ae30 @ 0x1001ae30

int __cdecl FUN_1001ae30(undefined4 param_1,undefined8 param_2)

{
  undefined2 local_8;
  
  local_8 = (short)((int)(param_2._2_4_ & 0x7ff0) >> 4);
  return (int)(short)(local_8 + -0x3fe);
}



// Function: FUN_1001ae60 @ 0x1001ae60

void __cdecl FUN_1001ae60(undefined4 param_1,uint param_2,short param_3)

{
  FUN_1001adf0(param_1,param_2,(short)((int)(param_2 >> 0x10 & 0x7ff0) >> 4) + -0x3fe + param_3);
  return;
}



// Function: FUN_1001aea0 @ 0x1001aea0

float10 __cdecl FUN_1001aea0(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_8;
  
  uStack_8 = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_2._2_2_ & 0x800f | param_3 << 4,CONCAT24(uStack_8,param_1))
  ;
}



// Function: FUN_1001aee0 @ 0x1001aee0

undefined4 __cdecl FUN_1001aee0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0x7ff00000) && (param_1 == 0)) {
    uVar1 = 1;
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    uVar1 = 2;
  }
  else if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uVar1 = 3;
  }
  else if (((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_1001af60 @ 0x1001af60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1001af60(uint param_1,uint param_2,int *param_3)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  double local_10;
  int local_8;
  
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((ushort)param_2,param_1)) == _DAT_1003a738) {
    local_10 = 0.0;
    local_8 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    local_8 = -0x3fd;
    dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((ushort)param_2,param_1));
    uVar2 = param_2;
    while( true ) {
      param_2._2_2_ = (ushort)(uVar2 >> 0x10);
      param_2._0_2_ = (ushort)uVar2;
      if ((uVar2 & 0x100000) != 0) break;
      param_2._0_2_ = (ushort)(uVar2 << 1);
      param_2._2_2_ = (ushort)((uVar2 << 1) >> 0x10);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      uVar2 = CONCAT22(param_2._2_2_,(ushort)param_2);
      param_1 = param_1 << 1;
      local_8 = local_8 + -1;
    }
    param_2._2_2_ = param_2._2_2_ & 0xffef;
    if (dVar1 < _DAT_1003a738) {
      param_2._2_2_ = param_2._2_2_ | 0x8000;
    }
    fVar3 = FUN_1001adf0(param_1,CONCAT22(param_2._2_2_,(ushort)param_2),0);
    local_10 = (double)fVar3;
  }
  else {
    fVar3 = FUN_1001adf0(param_1,param_2,0);
    local_10 = (double)fVar3;
    local_8 = (short)((int)(param_2._2_2_ & 0x7ff0) >> 4) + -0x3fe;
  }
  *param_3 = local_8;
  return (float10)local_10;
}



// Function: ___init_time @ 0x1001b0a0

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_100409d4 == 0) {
    PTR_PTR_1003f330 = (undefined *)&PTR_DAT_1003f338;
    ___free_lc_time(DAT_100409e8);
    FUN_1000c550(DAT_100409e8,2);
    DAT_100409e8 = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = (int *)__calloc_dbg(1,0xac,2,"inittime.c",0x48);
    if (piVar1 == (int *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = FUN_1001b180(piVar1);
      if (uVar3 == 0) {
        PTR_PTR_1003f330 = (undefined *)piVar1;
        ___free_lc_time(DAT_100409e8);
        FUN_1000c550(DAT_100409e8,2);
        iVar2 = 0;
        DAT_100409e8 = piVar1;
      }
      else {
        ___free_lc_time(piVar1);
        FUN_1000c550(piVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}



// Function: FUN_1001b180 @ 0x1001b180

uint __cdecl FUN_1001b180(int *param_1)

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
  
  uVar41 = (uint)DAT_10040a22;
  uVar1 = (uint)DAT_10040a24;
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1001f7e0(1,uVar41,0x31,param_1 + 1);
    uVar3 = FUN_1001f7e0(1,uVar41,0x32,param_1 + 2);
    uVar4 = FUN_1001f7e0(1,uVar41,0x33,param_1 + 3);
    uVar5 = FUN_1001f7e0(1,uVar41,0x34,param_1 + 4);
    uVar6 = FUN_1001f7e0(1,uVar41,0x35,param_1 + 5);
    uVar7 = FUN_1001f7e0(1,uVar41,0x36,param_1 + 6);
    uVar8 = FUN_1001f7e0(1,uVar41,0x37,param_1);
    uVar9 = FUN_1001f7e0(1,uVar41,0x2a,param_1 + 8);
    uVar10 = FUN_1001f7e0(1,uVar41,0x2b,param_1 + 9);
    uVar11 = FUN_1001f7e0(1,uVar41,0x2c,param_1 + 10);
    uVar12 = FUN_1001f7e0(1,uVar41,0x2d,param_1 + 0xb);
    uVar13 = FUN_1001f7e0(1,uVar41,0x2e,param_1 + 0xc);
    uVar14 = FUN_1001f7e0(1,uVar41,0x2f,param_1 + 0xd);
    uVar15 = FUN_1001f7e0(1,uVar41,0x30,param_1 + 7);
    uVar16 = FUN_1001f7e0(1,uVar41,0x44,param_1 + 0xe);
    uVar17 = FUN_1001f7e0(1,uVar41,0x45,param_1 + 0xf);
    uVar18 = FUN_1001f7e0(1,uVar41,0x46,param_1 + 0x10);
    uVar19 = FUN_1001f7e0(1,uVar41,0x47,param_1 + 0x11);
    uVar20 = FUN_1001f7e0(1,uVar41,0x48,param_1 + 0x12);
    uVar21 = FUN_1001f7e0(1,uVar41,0x49,param_1 + 0x13);
    uVar22 = FUN_1001f7e0(1,uVar41,0x4a,param_1 + 0x14);
    uVar23 = FUN_1001f7e0(1,uVar41,0x4b,param_1 + 0x15);
    uVar24 = FUN_1001f7e0(1,uVar41,0x4c,param_1 + 0x16);
    uVar25 = FUN_1001f7e0(1,uVar41,0x4d,param_1 + 0x17);
    uVar26 = FUN_1001f7e0(1,uVar41,0x4e,param_1 + 0x18);
    uVar27 = FUN_1001f7e0(1,uVar41,0x4f,param_1 + 0x19);
    uVar28 = FUN_1001f7e0(1,uVar41,0x38,param_1 + 0x1a);
    uVar29 = FUN_1001f7e0(1,uVar41,0x39,param_1 + 0x1b);
    uVar30 = FUN_1001f7e0(1,uVar41,0x3a,param_1 + 0x1c);
    uVar31 = FUN_1001f7e0(1,uVar41,0x3b,param_1 + 0x1d);
    uVar32 = FUN_1001f7e0(1,uVar41,0x3c,param_1 + 0x1e);
    uVar33 = FUN_1001f7e0(1,uVar41,0x3d,param_1 + 0x1f);
    uVar34 = FUN_1001f7e0(1,uVar41,0x3e,param_1 + 0x20);
    uVar35 = FUN_1001f7e0(1,uVar41,0x3f,param_1 + 0x21);
    uVar36 = FUN_1001f7e0(1,uVar41,0x40,param_1 + 0x22);
    uVar37 = FUN_1001f7e0(1,uVar41,0x41,param_1 + 0x23);
    uVar38 = FUN_1001f7e0(1,uVar41,0x42,param_1 + 0x24);
    uVar39 = FUN_1001f7e0(1,uVar41,0x43,param_1 + 0x25);
    uVar40 = FUN_1001f7e0(1,uVar41,0x28,param_1 + 0x26);
    uVar41 = FUN_1001f7e0(1,uVar41,0x29,param_1 + 0x27);
    uVar42 = FUN_1001f7e0(1,uVar1,0x1f,param_1 + 0x28);
    uVar43 = FUN_1001f7e0(1,uVar1,0x20,param_1 + 0x29);
    uVar1 = FUN_1001f7e0(1,uVar1,0x1003,param_1 + 0x2a);
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
            uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31
            | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 |
            uVar41 | uVar42 | uVar43 | uVar1;
  }
  return uVar1;
}



// Function: ___free_lc_time @ 0x1001b710

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_1000c550((void *)param_1[1],2);
    FUN_1000c550((void *)param_1[2],2);
    FUN_1000c550((void *)param_1[3],2);
    FUN_1000c550((void *)param_1[4],2);
    FUN_1000c550((void *)param_1[5],2);
    FUN_1000c550((void *)param_1[6],2);
    FUN_1000c550((void *)*param_1,2);
    FUN_1000c550((void *)param_1[8],2);
    FUN_1000c550((void *)param_1[9],2);
    FUN_1000c550((void *)param_1[10],2);
    FUN_1000c550((void *)param_1[0xb],2);
    FUN_1000c550((void *)param_1[0xc],2);
    FUN_1000c550((void *)param_1[0xd],2);
    FUN_1000c550((void *)param_1[7],2);
    FUN_1000c550((void *)param_1[0xe],2);
    FUN_1000c550((void *)param_1[0xf],2);
    FUN_1000c550((void *)param_1[0x10],2);
    FUN_1000c550((void *)param_1[0x11],2);
    FUN_1000c550((void *)param_1[0x12],2);
    FUN_1000c550((void *)param_1[0x13],2);
    FUN_1000c550((void *)param_1[0x14],2);
    FUN_1000c550((void *)param_1[0x15],2);
    FUN_1000c550((void *)param_1[0x16],2);
    FUN_1000c550((void *)param_1[0x17],2);
    FUN_1000c550((void *)param_1[0x18],2);
    FUN_1000c550((void *)param_1[0x19],2);
    FUN_1000c550((void *)param_1[0x1a],2);
    FUN_1000c550((void *)param_1[0x1b],2);
    FUN_1000c550((void *)param_1[0x1c],2);
    FUN_1000c550((void *)param_1[0x1d],2);
    FUN_1000c550((void *)param_1[0x1e],2);
    FUN_1000c550((void *)param_1[0x1f],2);
    FUN_1000c550((void *)param_1[0x20],2);
    FUN_1000c550((void *)param_1[0x21],2);
    FUN_1000c550((void *)param_1[0x22],2);
    FUN_1000c550((void *)param_1[0x23],2);
    FUN_1000c550((void *)param_1[0x24],2);
    FUN_1000c550((void *)param_1[0x25],2);
    FUN_1000c550((void *)param_1[0x26],2);
    FUN_1000c550((void *)param_1[0x27],2);
    FUN_1000c550((void *)param_1[0x28],2);
    FUN_1000c550((void *)param_1[0x29],2);
    FUN_1000c550((void *)param_1[0x2a],2);
  }
  return;
}



// Function: FUN_1001ba20 @ 0x1001ba20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001ba20(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = (uint)DAT_10040a1e;
  if (DAT_100409d0 == 0) {
    FUN_1000c550(DAT_100409ec,2);
    FUN_1000c550(DAT_100409f0,2);
    FUN_1000c550(DAT_100409f4,2);
    DAT_100409ec = (void *)0x0;
    DAT_100409f0 = (void *)0x0;
    DAT_100409f4 = (char *)0x0;
    uVar5 = FUN_1000bac0((void *)0x2,2,0x1003b500,0x88);
    *(undefined4 *)PTR_PTR_1003f420 = uVar5;
    if (*(int *)PTR_PTR_1003f420 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      FUN_100101d0(*(uint **)PTR_PTR_1003f420,(uint *)&DAT_1003b4a0);
      uVar5 = FUN_1000bac0((void *)0x2,2,0x1003b500,0x8d);
      *(undefined4 *)(PTR_PTR_1003f420 + 4) = uVar5;
      if (*(int *)(PTR_PTR_1003f420 + 4) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_1003f420 + 4) = 0;
        uVar5 = FUN_1000bac0((void *)0x2,2,0x1003b500,0x92);
        *(undefined4 *)(PTR_PTR_1003f420 + 8) = uVar5;
        if (*(int *)(PTR_PTR_1003f420 + 8) == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_1003f420 + 8) = 0;
          DAT_1003e054 = **(undefined1 **)PTR_PTR_1003f420;
          _DAT_1003e058 = 1;
          uVar5 = 0;
        }
      }
    }
  }
  else {
    iVar2 = FUN_1001f7e0(1,uVar1,0xe,(int *)&DAT_100409ec);
    iVar3 = FUN_1001f7e0(1,uVar1,0xf,(int *)&DAT_100409f0);
    iVar4 = FUN_1001f7e0(1,uVar1,0x10,(int *)&DAT_100409f4);
    fix_grouping(DAT_100409f4);
    if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) {
      if (*(undefined **)PTR_PTR_1003f420 != &DAT_1003f3e8) {
        FUN_1000c550(*(void **)PTR_PTR_1003f420,2);
        FUN_1000c550(*(void **)(PTR_PTR_1003f420 + 4),2);
        FUN_1000c550(*(void **)(PTR_PTR_1003f420 + 8),2);
      }
      *(void **)PTR_PTR_1003f420 = DAT_100409ec;
      *(void **)(PTR_PTR_1003f420 + 4) = DAT_100409f0;
      *(char **)(PTR_PTR_1003f420 + 8) = DAT_100409f4;
      DAT_1003e054 = **(undefined1 **)PTR_PTR_1003f420;
      _DAT_1003e058 = 1;
      uVar5 = 0;
    }
    else {
      FUN_1000c550(DAT_100409ec,2);
      FUN_1000c550(DAT_100409f0,2);
      FUN_1000c550(DAT_100409f4,2);
      DAT_100409ec = (void *)0x0;
      DAT_100409f0 = (void *)0x0;
      DAT_100409f4 = (char *)0x0;
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}



// Function: fix_grouping @ 0x1001bcd0

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



// Function: FUN_1001bd50 @ 0x1001bd50

undefined4 FUN_1001bd50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_100409cc == 0) {
    PTR_DAT_1003f3f0 = *(undefined **)PTR_PTR_1003f420;
    PTR_DAT_1003f3f4 = *(undefined **)(PTR_PTR_1003f420 + 4);
    PTR_DAT_1003f3f8 = *(undefined **)(PTR_PTR_1003f420 + 8);
    PTR_PTR_1003f420 = (undefined *)&PTR_DAT_1003f3f0;
    FUN_1001c110((int)DAT_100409f8);
    FUN_1000c550(DAT_100409f8,2);
    DAT_100409f8 = (undefined4 *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)__calloc_dbg(1,0x30,2,"initmon.c",0x4a);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_1001be80((int)puVar1);
      if (uVar3 == 0) {
        *puVar1 = *(undefined4 *)PTR_PTR_1003f420;
        puVar1[1] = *(undefined4 *)(PTR_PTR_1003f420 + 4);
        puVar1[2] = *(undefined4 *)(PTR_PTR_1003f420 + 8);
        PTR_PTR_1003f420 = (undefined *)puVar1;
        FUN_1001c110((int)DAT_100409f8);
        FUN_1000c550(DAT_100409f8,2);
        uVar2 = 0;
        DAT_100409f8 = puVar1;
      }
      else {
        FUN_1001c110((int)puVar1);
        FUN_1000c550(puVar1,2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// Function: FUN_1001be80 @ 0x1001be80

uint __cdecl FUN_1001be80(int param_1)

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
  
  uVar1 = (uint)DAT_10040a18;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1001f7e0(1,uVar1,0x15,(int *)(param_1 + 0xc));
    uVar3 = FUN_1001f7e0(1,uVar1,0x14,(int *)(param_1 + 0x10));
    uVar4 = FUN_1001f7e0(1,uVar1,0x16,(int *)(param_1 + 0x14));
    uVar5 = FUN_1001f7e0(1,uVar1,0x17,(int *)(param_1 + 0x18));
    uVar6 = FUN_1001f7e0(1,uVar1,0x18,(int *)(param_1 + 0x1c));
    fix_grouping(*(char **)(param_1 + 0x1c));
    uVar7 = FUN_1001f7e0(1,uVar1,0x50,(int *)(param_1 + 0x20));
    uVar8 = FUN_1001f7e0(1,uVar1,0x51,(int *)(param_1 + 0x24));
    uVar9 = FUN_1001f7e0(0,uVar1,0x1a,(int *)(param_1 + 0x28));
    uVar10 = FUN_1001f7e0(0,uVar1,0x19,(int *)(param_1 + 0x29));
    uVar11 = FUN_1001f7e0(0,uVar1,0x54,(int *)(param_1 + 0x2a));
    uVar12 = FUN_1001f7e0(0,uVar1,0x55,(int *)(param_1 + 0x2b));
    uVar13 = FUN_1001f7e0(0,uVar1,0x56,(int *)(param_1 + 0x2c));
    uVar14 = FUN_1001f7e0(0,uVar1,0x57,(int *)(param_1 + 0x2d));
    uVar15 = FUN_1001f7e0(0,uVar1,0x52,(int *)(param_1 + 0x2e));
    uVar1 = FUN_1001f7e0(0,uVar1,0x53,(int *)(param_1 + 0x2f));
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar1;
  }
  return uVar1;
}



// Function: fix_grouping @ 0x1001c090

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



// Function: FUN_1001c110 @ 0x1001c110

void __cdecl FUN_1001c110(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_10040a54)) {
    FUN_1000c550(*(void **)(param_1 + 0xc),2);
    FUN_1000c550(*(void **)(param_1 + 0x10),2);
    FUN_1000c550(*(void **)(param_1 + 0x14),2);
    FUN_1000c550(*(void **)(param_1 + 0x18),2);
    FUN_1000c550(*(void **)(param_1 + 0x1c),2);
    FUN_1000c550(*(void **)(param_1 + 0x20),2);
    FUN_1000c550(*(void **)(param_1 + 0x24),2);
  }
  return;
}



// Function: FUN_1001c1b0 @ 0x1001c1b0

undefined4 FUN_1001c1b0(void)

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
  if (DAT_100409c8 == 0) {
    PTR_DAT_1003e05c = &DAT_1003e066;
    PTR_DAT_1003e060 = &DAT_1003e066;
    FUN_1000c550(DAT_100409fc,2);
    FUN_1000c550(DAT_10040a00,2);
    DAT_100409fc = (void *)0x0;
    DAT_10040a00 = (void *)0x0;
    uVar3 = 0;
  }
  else {
    if ((DAT_100409d8 != 0) ||
       (iVar1 = FUN_1001f7e0(0,(uint)DAT_10040a10,0x1004,(int *)&DAT_100409d8), iVar1 == 0)) {
      local_34 = (undefined2 *)FUN_1000bac0((void *)0x202,2,0x1003b518,0x5c);
      local_20 = (undefined2 *)FUN_1000bac0((void *)0x202,2,0x1003b518,0x5e);
      local_30 = (LPCSTR)FUN_1000bac0((void *)0x101,2,0x1003b518,0x60);
      local_2c = (LPCWSTR)FUN_1000bac0((void *)0x202,2,0x1003b518,0x62);
      if ((local_34 != (undefined2 *)0x0) &&
         (((local_20 != (undefined2 *)0x0 && (local_30 != (LPCSTR)0x0)) &&
          (local_2c != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)local_30;
        for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
          *local_1c = (CHAR)local_24;
          local_1c = local_1c + 1;
        }
        BVar2 = GetCPInfo(DAT_100409d8,&local_18);
        if ((BVar2 != 0) && (local_18.MaxCharSize < 3)) {
          DAT_1003e050 = local_18.MaxCharSize & 0xffff;
          if (1 < DAT_1003e050) {
            for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                  local_24 = local_24 + 1) {
                local_30[local_24] = '\0';
              }
            }
          }
          BVar2 = FUN_10017ed0(1,local_30,0x100,local_34 + 1,0,0,0);
          if (BVar2 != 0) {
            *local_34 = 0;
            local_28 = local_2c;
            for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
              *local_28 = (WCHAR)local_24;
              local_28 = local_28 + 1;
            }
            BVar2 = FUN_1001fa80(1,local_2c,0x100,local_20 + 1,0,0);
            if (BVar2 != 0) {
              *local_20 = 0;
              if (1 < (int)DAT_1003e050) {
                for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                      local_24 = local_24 + 1) {
                    local_34[local_24 + 1] = 0x8000;
                  }
                }
              }
              PTR_DAT_1003e05c = (undefined *)(local_34 + 1);
              PTR_DAT_1003e060 = (undefined *)(local_20 + 1);
              if (DAT_100409fc != (void *)0x0) {
                FUN_1000c550(DAT_100409fc,2);
              }
              DAT_100409fc = local_34;
              if (DAT_10040a00 != (void *)0x0) {
                FUN_1000c550(DAT_10040a00,2);
              }
              DAT_10040a00 = local_20;
              FUN_1000c550(local_30,2);
              FUN_1000c550(local_2c,2);
              return 0;
            }
          }
        }
      }
    }
    FUN_1000c550(local_34,2);
    FUN_1000c550(local_20,2);
    FUN_1000c550(local_30,2);
    FUN_1000c550(local_2c,2);
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_1001c550 @ 0x1001c550

undefined4 FUN_1001c550(void)

{
  return 0;
}



// Function: FUN_1001c560 @ 0x1001c560

int __cdecl FUN_1001c560(byte *param_1,byte *param_2)

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



// Function: _strncmp @ 0x1001c5a0

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



// Function: FUN_1001c5e0 @ 0x1001c5e0

byte * __cdecl FUN_1001c5e0(byte *param_1,byte *param_2)

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



// Function: FUN_1001c620 @ 0x1001c620

undefined4 __cdecl FUN_1001c620(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_10040a48 == (code *)0x0) {
    iVar1 = FUN_1001d0f0();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_10040a48 = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_1001cf40();
  }
  else {
    DAT_10040a38 = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_1001c820(0x1003f120,0x40,(int *)&DAT_10040a38);
    }
    DAT_10040a3c = param_1 + 0x40;
    if ((DAT_10040a3c != (char *)0x0) && (*DAT_10040a3c != '\0')) {
      FUN_1001c820(0x1003f068,0x16,(int *)&DAT_10040a3c);
    }
    DAT_10040a40 = 0;
    if ((DAT_10040a38 == (char *)0x0) || (*DAT_10040a38 == '\0')) {
      if ((DAT_10040a3c == (char *)0x0) || (*DAT_10040a3c == '\0')) {
        FUN_1001cf40();
      }
      else {
        FUN_1001ce40();
      }
    }
    else if ((DAT_10040a3c == (char *)0x0) || (*DAT_10040a3c == '\0')) {
      FUN_1001cca0();
    }
    else {
      FUN_1001c8b0();
    }
  }
  if (DAT_10040a40 == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_1001cf70((byte *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_10040a28,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_10040a28;
          param_2[1] = (undefined2)DAT_10040a44;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_10040a48)(DAT_10040a28,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_10040a48)(DAT_10040a44,0x1002,param_3 + 0x40,0x40);
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



// Function: FUN_1001c820 @ 0x1001c820

void __cdecl FUN_1001c820(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_c = 1;
  local_10 = 0;
  while ((local_10 <= param_2 && (local_c != 0))) {
    iVar1 = (local_10 + param_2) / 2;
    local_c = FUN_1001fcf0(param_3,(byte *)*param_3,*(byte **)(param_1 + iVar1 * 8));
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



// Function: FUN_1001c8b0 @ 0x1001c8b0

void FUN_1001c8b0(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_10040a38);
  DAT_10040a34 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_10040a3c);
  DAT_10040a2c = (uint)(sVar1 == 3);
  DAT_10040a28 = 0;
  if (DAT_10040a34 == 0) {
    local_8 = _GetPrimaryLen(DAT_10040a38);
  }
  else {
    local_8 = 2;
  }
  DAT_10040a30 = local_8;
  EnumSystemLocalesA(FUN_1001c970,1);
  if ((((DAT_10040a40 & 0x100) == 0) || ((DAT_10040a40 & 0x200) == 0)) || ((DAT_10040a40 & 7) == 0))
  {
    DAT_10040a40 = 0;
  }
  return;
}



// Function: FUN_1001c970 @ 0x1001c970

bool FUN_1001c970(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  byte local_7c [120];
  
  iVar2 = FUN_1001d2d0(param_1);
  iVar3 = (*DAT_10040a48)(iVar2,(-(uint)(DAT_10040a2c != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10040a40 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_1001fcf0(local_7c,DAT_10040a3c,local_7c);
    if (uVar4 == 0) {
      iVar3 = (*DAT_10040a48)(iVar2,(-(uint)(DAT_10040a34 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10040a40 = 0;
        return true;
      }
      uVar4 = FUN_1001fcf0(DAT_10040a38,DAT_10040a38,local_7c);
      if (uVar4 == 0) {
        DAT_10040a40 = DAT_10040a40 | 0x304;
        DAT_10040a28 = iVar2;
        DAT_10040a44 = iVar2;
      }
      else if ((DAT_10040a40 & 2) == 0) {
        if ((DAT_10040a30 == (void *)0x0) ||
           (iVar3 = FUN_1001fdc0(DAT_10040a38,(char *)local_7c,DAT_10040a30), iVar3 != 0)) {
          if (((DAT_10040a40 & 1) == 0) && (iVar3 = FUN_1001d010((short)iVar2), iVar3 != 0)) {
            DAT_10040a40 = DAT_10040a40 | 1;
            DAT_10040a44 = iVar2;
          }
        }
        else {
          DAT_10040a40 = DAT_10040a40 | 2;
          DAT_10040a44 = iVar2;
          pvVar5 = (void *)_strlen((char *)DAT_10040a38);
          if (pvVar5 == DAT_10040a30) {
            DAT_10040a28 = iVar2;
          }
        }
      }
    }
    if ((DAT_10040a40 & 0x300) != 0x300) {
      iVar3 = (*DAT_10040a48)(iVar2,(-(uint)(DAT_10040a34 != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10040a40 = 0;
        return true;
      }
      uVar4 = FUN_1001fcf0(DAT_10040a38,DAT_10040a38,local_7c);
      if (uVar4 == 0) {
        uVar4 = DAT_10040a40 | 0x200;
        if (DAT_10040a34 == 0) {
          DAT_10040a40 = uVar4;
          if ((DAT_10040a30 == (void *)0x0) ||
             (pvVar5 = (void *)_strlen((char *)DAT_10040a38), pvVar5 != DAT_10040a30)) {
            DAT_10040a40 = DAT_10040a40 | 0x100;
            if (DAT_10040a28 == 0) {
              DAT_10040a28 = iVar2;
            }
          }
          else {
            iVar3 = FUN_1001d060(iVar2,1);
            if ((iVar3 != 0) && (DAT_10040a40 = DAT_10040a40 | 0x100, DAT_10040a28 == 0)) {
              DAT_10040a28 = iVar2;
            }
          }
        }
        else {
          DAT_10040a40 = DAT_10040a40 | 0x300;
          if (DAT_10040a28 == 0) {
            DAT_10040a28 = iVar2;
          }
        }
      }
      else if ((((DAT_10040a34 == 0) && (DAT_10040a30 != (void *)0x0)) &&
               (iVar3 = FUN_1001fdc0(DAT_10040a38,(char *)local_7c,DAT_10040a30), iVar3 == 0)) &&
              ((iVar3 = FUN_1001d060(iVar2,0), iVar3 != 0 &&
               (DAT_10040a40 = DAT_10040a40 | 0x100, DAT_10040a28 == 0)))) {
        DAT_10040a28 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10040a40 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_1001cca0 @ 0x1001cca0

void FUN_1001cca0(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_10040a38);
  DAT_10040a34 = (uint)(sVar1 == 3);
  if (DAT_10040a34 == 0) {
    local_8 = _GetPrimaryLen(DAT_10040a38);
  }
  else {
    local_8 = 2;
  }
  DAT_10040a30 = local_8;
  EnumSystemLocalesA(FUN_1001cd20,1);
  if ((DAT_10040a40 & 4) == 0) {
    DAT_10040a40 = 0;
  }
  return;
}



// Function: FUN_1001cd20 @ 0x1001cd20

bool FUN_1001cd20(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char local_7c [120];
  
  iVar2 = FUN_1001d2d0(param_1);
  iVar3 = (*DAT_10040a48)(iVar2,(-(uint)(DAT_10040a34 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10040a40 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_1001fcf0(local_7c,DAT_10040a38,(byte *)local_7c);
    if (uVar4 == 0) {
      if ((DAT_10040a34 != 0) || (iVar3 = FUN_1001d060(iVar2,1), iVar3 != 0)) {
        DAT_10040a40 = DAT_10040a40 | 4;
        DAT_10040a28 = iVar2;
        DAT_10040a44 = iVar2;
      }
    }
    else if ((((DAT_10040a34 == 0) && (DAT_10040a30 != (void *)0x0)) &&
             (iVar3 = FUN_1001fdc0(DAT_10040a38,local_7c,DAT_10040a30), iVar3 == 0)) &&
            (iVar3 = FUN_1001d060(iVar2,0), iVar3 != 0)) {
      DAT_10040a40 = DAT_10040a40 | 4;
      DAT_10040a28 = iVar2;
      DAT_10040a44 = iVar2;
    }
    cVar1 = '\x01' - ((DAT_10040a40 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_1001ce40 @ 0x1001ce40

void FUN_1001ce40(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_10040a3c);
  DAT_10040a2c = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_1001ce90,1);
  if ((DAT_10040a40 & 4) == 0) {
    DAT_10040a40 = 0;
  }
  return;
}



// Function: FUN_1001ce90 @ 0x1001ce90

bool FUN_1001ce90(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_7c [120];
  
  iVar2 = FUN_1001d2d0(param_1);
  iVar3 = (*DAT_10040a48)(iVar2,(-(uint)(DAT_10040a2c != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10040a40 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_1001fcf0(local_7c,DAT_10040a3c,local_7c);
    if (uVar4 == 0) {
      iVar3 = FUN_1001d010((short)iVar2);
      if (iVar3 != 0) {
        DAT_10040a40 = DAT_10040a40 | 4;
        DAT_10040a28 = iVar2;
        DAT_10040a44 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10040a40 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_1001cf40 @ 0x1001cf40

void FUN_1001cf40(void)

{
  DAT_10040a40 = DAT_10040a40 | 0x104;
  DAT_10040a44 = GetUserDefaultLCID();
  DAT_10040a28 = DAT_10040a44;
  return;
}



// Function: FUN_1001cf70 @ 0x1001cf70

int __cdecl FUN_1001cf70(byte *param_1)

{
  int iVar1;
  byte local_c [8];
  
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    iVar1 = (*DAT_10040a48)(DAT_10040a44,0x1004,local_c,8);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = local_c;
  }
  else {
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 == 0) {
      iVar1 = (*DAT_10040a48)(DAT_10040a44,0xb,local_c,8);
      if (iVar1 == 0) {
        return 0;
      }
      param_1 = local_c;
    }
  }
  iVar1 = FUN_1001a1e0(param_1);
  return iVar1;
}



// Function: FUN_1001d010 @ 0x1001d010

undefined4 __cdecl FUN_1001d010(short param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_1003f054 + local_c * 2)) break;
    local_c = local_c + 1;
  }
  return 0;
}



// Function: FUN_1001d060 @ 0x1001d060

undefined4 __cdecl FUN_1001d060(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  char local_80 [120];
  uint local_8;
  
  local_8 = (uint)((ushort)param_1 & 0x3ff | 0x400);
  iVar1 = (*DAT_10040a48)(local_8,1,local_80,0x78);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_1001d2d0(local_80);
    if ((param_1 != iVar1) && (param_2 != 0)) {
      sVar3 = _GetPrimaryLen(DAT_10040a38);
      sVar4 = _strlen(DAT_10040a38);
      if (sVar3 == sVar4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_1001d0f0 @ 0x1001d0f0

undefined4 FUN_1001d0f0(void)

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



// Function: crtGetLocaleInfoA @ 0x1001d140

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
LAB_1001d2a8:
      iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = (local_14 + local_8) / 2;
    if (param_1 == *(uint *)(&DAT_1003ebb0 + iVar1 * 0x2c)) {
      if (param_2 < 0xc) {
        if (param_2 == 0xb) {
          local_c = &DAT_1003ebcc + iVar1 * 0x2c;
        }
        else if (param_2 == 1) {
          local_c = &DAT_1003ebb4 + iVar1 * 0x2c;
        }
        else if (param_2 == 3) {
          local_c = &DAT_1003ebc0 + iVar1 * 0x2c;
        }
        else if (param_2 == 7) {
          local_c = &DAT_1003ebc8 + iVar1 * 0x2c;
        }
      }
      else if (param_2 == 0x1001) {
        local_c = (&PTR_s_Spanish___Traditional_Sort_1003ebbc)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1002) {
        local_c = (&PTR_s_Spain_1003ebc4)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1004) {
        local_c = &DAT_1003ebd4 + iVar1 * 0x2c;
      }
      if ((local_c != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,local_c,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      goto LAB_1001d2a8;
    }
    if (param_1 < *(uint *)(&DAT_1003ebb0 + iVar1 * 0x2c)) {
      local_8 = iVar1 + -1;
    }
    else {
      local_14 = iVar1 + 1;
    }
  } while( true );
}



// Function: FUN_1001d2d0 @ 0x1001d2d0

int __cdecl FUN_1001d2d0(char *param_1)

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



// Function: _GetPrimaryLen @ 0x1001d350

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



// Function: FUN_1001d3c0 @ 0x1001d3c0

void __cdecl FUN_1001d3c0(int *param_1,int *param_2)

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



// Function: FUN_1001d800 @ 0x1001d800

void __cdecl FUN_1001d800(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined2 local_18;
  undefined4 uStack_16;
  undefined2 uStack_12;
  undefined *local_10;
  undefined **local_c;
  undefined **local_8;
  
  local_8 = &PTR_DAT_1003f3d0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      local_8 = (undefined **)&DAT_1003f530;
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
        FUN_1001d3c0(param_1,(int *)local_c);
      }
    }
  }
  return;
}



// Function: __allmul @ 0x1001d8d0

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



// Function: __mbsnbicoll @ 0x1001d910

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
    iVar1 = FUN_1001fed0(DAT_10042064,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_10041dd8);
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}



// Function: FUN_1001d960 @ 0x1001d960

undefined4 FUN_1001d960(void)

{
  void *cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  void *this;
  int *local_8;
  
  local_8 = DAT_10040794;
  while( true ) {
    if (*local_8 == 0) {
      return 0;
    }
    cbMultiByte = (void *)WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                              (LPBOOL)0x0);
    if (cbMultiByte == (void *)0x0) {
      return 0xffffffff;
    }
    lpMultiByteStr = (uint *)FUN_1000bac0(cbMultiByte,2,0x1003bbac,0x3d);
    if (lpMultiByteStr == (uint *)0x0) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)lpMultiByteStr,(int)cbMultiByte,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    FUN_10020320(this,lpMultiByteStr,0);
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_1001da10 @ 0x1001da10

uint __fastcall FUN_1001da10(void *param_1)

{
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0xffffffff;
  FUN_1000b9c0(param_1,0x12);
  local_10 = 0;
  do {
    if (0x3f < local_10) {
LAB_1001dbe0:
      FUN_1000ba60(0x12);
      return local_c;
    }
    if ((&DAT_100420a0)[local_10] == 0) {
      local_8 = (undefined4 *)FUN_1000bac0((void *)0x480,2,0x1003bbb8,0x79);
      if (local_8 != (undefined4 *)0x0) {
        (&DAT_100420a0)[local_10] = local_8;
        DAT_100421dc = DAT_100421dc + 0x20;
        for (; local_8 < (undefined4 *)((&DAT_100420a0)[local_10] + 0x480); local_8 = local_8 + 9) {
          *(undefined1 *)(local_8 + 1) = 0;
          *local_8 = 0xffffffff;
          *(undefined1 *)((int)local_8 + 5) = 10;
          local_8[2] = 0;
        }
        local_c = local_10 << 5;
        FUN_1001df20(local_c);
      }
      goto LAB_1001dbe0;
    }
    for (local_8 = (undefined4 *)(&DAT_100420a0)[local_10];
        local_8 < (undefined4 *)((&DAT_100420a0)[local_10] + 0x480); local_8 = local_8 + 9) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        if (local_8[2] == 0) {
          FUN_1000b9c0(local_8,0x11);
          if (local_8[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
            local_8[2] = local_8[2] + 1;
          }
          FUN_1000ba60(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
        if ((*(byte *)(local_8 + 1) & 1) == 0) {
          *local_8 = 0xffffffff;
          local_c = local_10 * 0x20 + ((int)local_8 - (&DAT_100420a0)[local_10]) / 0x24;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
      }
    }
    if (local_c != 0xffffffff) goto LAB_1001dbe0;
    local_10 = local_10 + 1;
  } while( true );
}



// Function: __set_osfhnd @ 0x1001dc00

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (((uint)param_1 < DAT_100421dc) &&
     (*(int *)((&DAT_100420a0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) == -1)) {
    if (DAT_100406f0 == 1) {
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
    *(intptr_t *)((&DAT_100420a0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) = param_2;
    iVar1 = 0;
  }
  else {
    pDVar2 = FUN_10017150();
    *pDVar2 = 9;
    pDVar2 = FUN_10017160();
    *pDVar2 = 0;
    iVar1 = -1;
  }
  return iVar1;
}



// Function: FUN_1001dcc0 @ 0x1001dcc0

undefined4 __cdecl FUN_1001dcc0(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if (((param_1 < DAT_100421dc) &&
      (iVar3 = (int)param_1 >> 5,
      (*(byte *)((&DAT_100420a0)[iVar3] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) &&
     (*(int *)((&DAT_100420a0)[iVar3] + (param_1 & 0x1f) * 0x24) != -1)) {
    if (DAT_100406f0 == 1) {
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
    *(undefined4 *)((&DAT_100420a0)[iVar3] + (param_1 & 0x1f) * 0x24) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    pDVar2 = FUN_10017150();
    *pDVar2 = 9;
    pDVar2 = FUN_10017160();
    *pDVar2 = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: FUN_1001dda0 @ 0x1001dda0

undefined4 __cdecl FUN_1001dda0(uint param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  
  if ((param_1 < DAT_100421dc) &&
     ((*(byte *)((&DAT_100420a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    uVar2 = *(undefined4 *)((&DAT_100420a0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  else {
    pDVar1 = FUN_10017150();
    *pDVar1 = 9;
    pDVar1 = FUN_10017160();
    *pDVar1 = 0;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// Function: FUN_1001de10 @ 0x1001de10

uint __cdecl FUN_1001de10(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint _Filehandle;
  DWORD *pDVar2;
  void *extraout_ECX;
  void *pvVar3;
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
      pvVar3 = (void *)(CONCAT31((int3)((uint)extraout_ECX >> 8),local_10) | 0x40);
      local_10 = (byte)pvVar3;
    }
    else {
      pvVar3 = extraout_ECX;
      if (DVar1 == 3) {
        local_10 = local_10 | 8;
      }
    }
    _Filehandle = FUN_1001da10(pvVar3);
    if (_Filehandle == 0xffffffff) {
      pDVar2 = FUN_10017150();
      *pDVar2 = 0x18;
      pDVar2 = FUN_10017160();
      *pDVar2 = 0;
      _Filehandle = 0xffffffff;
    }
    else {
      __set_osfhnd(_Filehandle,(intptr_t)param_1);
      *(byte *)((&DAT_100420a0)[(int)_Filehandle >> 5] + 4 + (_Filehandle & 0x1f) * 0x24) =
           local_10 | 1;
      __unlock_fhandle(_Filehandle);
    }
  }
  return _Filehandle;
}



// Function: FUN_1001df20 @ 0x1001df20

void __cdecl FUN_1001df20(uint param_1)

{
  int iVar1;
  void *this;
  
  this = (void *)((param_1 & 0x1f) * 0x24);
  iVar1 = (&DAT_100420a0)[(int)param_1 >> 5];
  if (*(int *)((int)this + iVar1 + 8) == 0) {
    FUN_1000b9c0(this,0x11);
    if (*(int *)((int)this + iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + iVar1 + 0xc));
      *(int *)((int)this + iVar1 + 8) = *(int *)((int)this + iVar1 + 8) + 1;
    }
    FUN_1000ba60(0x11);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_100420a0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: __unlock_fhandle @ 0x1001dfb0

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_100420a0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}



// Function: FUN_1001dfe0 @ 0x1001dfe0

int __fastcall FUN_1001dfe0(void *param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_1000b9c0(param_1,2);
  for (local_c = 3; local_c < DAT_10041dc0; local_c = local_c + 1) {
    if (*(int *)(DAT_10040a7c + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_10040a7c + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = FUN_10020770(*(undefined ***)(DAT_10040a7c + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10040a7c + local_c * 4) + 0x20));
        FUN_1000c550(*(void **)(DAT_10040a7c + local_c * 4),2);
        *(undefined4 *)(DAT_10040a7c + local_c * 4) = 0;
      }
    }
  }
  FUN_1000ba60(2);
  return local_8;
}



// Function: FUN_1001e0c0 @ 0x1001e0c0

int __thiscall FUN_1001e0c0(void *this,undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_1001e230(this,0);
  }
  else {
    FUN_1001abf0(this,param_1);
    iVar1 = FUN_1001e110((int *)param_1);
    FUN_1001ac60(param_1);
  }
  return iVar1;
}



// Function: FUN_1001e110 @ 0x1001e110

int __cdecl FUN_1001e110(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_1001e160(param_1);
  if (iVar1 == 0) {
    if ((param_1[3] & 0x4000U) == 0) {
      iVar1 = 0;
    }
    else {
      DVar2 = FUN_100208c0(param_1[4]);
      iVar1 = -(uint)(DVar2 != 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// Function: FUN_1001e160 @ 0x1001e160

undefined4 __cdecl FUN_1001e160(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((param_1[3] & 3U) == 2) && ((param_1[3] & 0x108U) != 0)) &&
     (uVar2 = *param_1 - param_1[2], 0 < (int)uVar2)) {
    uVar1 = FUN_1001a680(param_1[4],(char *)param_1[2],uVar2);
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



// Function: FUN_1001e220 @ 0x1001e220

void __fastcall FUN_1001e220(void *param_1)

{
  FUN_1001e230(param_1,1);
  return;
}



// Function: FUN_1001e230 @ 0x1001e230

int __thiscall FUN_1001e230(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_1000b9c0(this,2);
  for (local_10 = 0; local_10 < DAT_10041dc0; local_10 = local_10 + 1) {
    if ((*(int *)(DAT_10040a7c + local_10 * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_10040a7c + local_10 * 4) + 0xc) & 0x83) != 0)) {
      this_00 = *(void **)(DAT_10040a7c + local_10 * 4);
      FUN_1001ac30(this_00,local_10,(int)this_00);
      if ((*(uint *)(*(int *)(DAT_10040a7c + local_10 * 4) + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = FUN_1001e110(*(int **)(DAT_10040a7c + local_10 * 4));
          if (iVar1 != -1) {
            local_8 = local_8 + 1;
          }
        }
        else if (((param_1 == 0) &&
                 ((*(uint *)(*(int *)(DAT_10040a7c + local_10 * 4) + 0xc) & 2) != 0)) &&
                (iVar1 = FUN_1001e110(*(int **)(DAT_10040a7c + local_10 * 4)), iVar1 == -1)) {
          local_c = -1;
        }
      }
      FUN_1001aca0(local_10,*(int *)(DAT_10040a7c + local_10 * 4));
    }
  }
  FUN_1000ba60(2);
  if (param_1 == 1) {
    local_c = local_8;
  }
  return local_c;
}



// Function: FUN_1001e370 @ 0x1001e370

undefined1 * FUN_1001e370(void)

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
  
  puVar1 = PTR_PTR_1003f330;
  local_c = 0;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x1c));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_1000baa0((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_100101d0((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_100101d0(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}



// Function: FUN_1001e4a0 @ 0x1001e4a0

undefined1 * FUN_1001e4a0(void)

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
  
  puVar1 = PTR_PTR_1003f330;
  local_c = 0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x38));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x68));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_1000baa0((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_100101d0((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_100101d0(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}



// Function: FUN_1001e5d0 @ 0x1001e5d0

undefined4 * FUN_1001e5d0(void)

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
  
  puVar1 = PTR_PTR_1003f330;
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
           FUN_1000baa0((void *)(sVar3 + local_c + sVar2 + sVar4 + sVar5 + sVar6 + 0xb1));
  if (puVar7 != (undefined4 *)0x0) {
    local_18 = puVar7 + 0x2b;
    FUN_10015b60(puVar7,(undefined4 *)PTR_PTR_1003f330,0xac);
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      puVar7[local_14] = local_18;
      puVar8 = FUN_100101d0(local_18,*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 7] = local_18;
      puVar8 = FUN_100101d0(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      puVar7[local_14 + 0xe] = local_18;
      puVar8 = FUN_100101d0(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 0x1a] = local_18;
      puVar8 = FUN_100101d0(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    puVar7[0x26] = local_18;
    puVar8 = FUN_100101d0(local_18,*(uint **)(puVar1 + 0x98));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x27] = local_18;
    puVar8 = FUN_100101d0(local_18,*(uint **)(puVar1 + 0x9c));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x28] = local_18;
    puVar8 = FUN_100101d0(local_18,*(uint **)(puVar1 + 0xa0));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x29] = local_18;
    puVar8 = FUN_100101d0(local_18,*(uint **)(puVar1 + 0xa4));
    sVar2 = _strlen((char *)puVar8);
    puVar7[0x2a] = (int)local_18 + sVar2 + 1;
  }
  return puVar7;
}



// Function: FUN_1001e940 @ 0x1001e940

void __cdecl FUN_1001e940(byte *param_1,uint param_2,byte *param_3,int *param_4)

{
  FUN_1001e960(param_1,param_2,param_3,param_4,(undefined *)0x0);
  return;
}



// Function: FUN_1001e960 @ 0x1001e960

int __cdecl FUN_1001e960(byte *param_1,uint param_2,byte *param_3,int *param_4,undefined *param_5)

{
  byte *pbVar1;
  int iVar2;
  void *this;
  bool bVar3;
  undefined *local_14;
  uint local_10;
  int local_c;
  undefined *local_8;
  
  if (param_5 == (undefined *)0x0) {
    local_14 = PTR_PTR_1003f330;
  }
  else {
    local_14 = param_5;
  }
  local_8 = local_14;
  local_10 = param_2;
  InterlockedIncrement(&DAT_10041dd4);
  if (DAT_10041dc4 == 0) {
    local_c = 0;
  }
  else {
    InterlockedDecrement(&DAT_10041dd4);
    FUN_1000b9c0(this,0x13);
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
      DAT_10040a68 = (uint)bVar3;
      FUN_1001eaf0(*param_3,param_4,(int *)&param_1,&local_10,(int)local_8);
    }
    else {
      if (((*(ushort *)(PTR_DAT_1003e05c + (uint)*param_3 * 2) & 0x8000) != 0) && (1 < local_10)) {
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
    InterlockedDecrement(&DAT_10041dd4);
  }
  else {
    FUN_1000ba60(0x13);
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



// Function: FUN_1001eaf0 @ 0x1001eaf0

void __cdecl FUN_1001eaf0(char param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  int local_c;
  int local_8;
  
  switch(param_1) {
  case '%':
    *(undefined1 *)*param_3 = 0x25;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 - 1;
    break;
  case 'A':
    FID_conflict__store_str(*(char **)(param_5 + 0x1c + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 'B':
    FID_conflict__store_str(*(char **)(param_5 + 0x68 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 'H':
    DAT_10040a78 = DAT_10040a68;
    FUN_1001f160(param_2[2],2,param_3,param_4);
    break;
  case 'I':
    DAT_10040a78 = DAT_10040a68;
    local_8 = param_2[2] % 0xc;
    if (local_8 == 0) {
      local_8 = 0xc;
    }
    FUN_1001f160(local_8,2,param_3,param_4);
    break;
  case 'M':
    DAT_10040a78 = DAT_10040a68;
    FUN_1001f160(param_2[1],2,param_3,param_4);
    break;
  case 'S':
    DAT_10040a78 = DAT_10040a68;
    FUN_1001f160(*param_2,2,param_3,param_4);
    break;
  case 'U':
    local_c = param_2[6];
    goto LAB_1001ee9d;
  case 'W':
    if (param_2[6] == 0) {
      local_c = 6;
    }
    else {
      local_c = param_2[6] + -1;
    }
LAB_1001ee9d:
    DAT_10040a78 = DAT_10040a68;
    if (param_2[7] < local_c) {
      local_8 = 0;
    }
    else {
      local_8 = param_2[7] / 7;
      if (local_c <= param_2[7] % 7) {
        local_8 = local_8 + 1;
      }
    }
    FUN_1001f160(local_8,2,param_3,param_4);
    break;
  case 'X':
    DAT_10040a68 = 0;
    FUN_1001f2c0(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
    break;
  case 'Y':
    DAT_10040a78 = DAT_10040a68;
    FUN_1001f160((param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100,4,param_3,param_4);
    break;
  case 'Z':
  case 'z':
    FUN_10014a10((void *)(param_1 + -0x25));
    FID_conflict__store_str((&PTR_DAT_1003e3c4)[param_2[8] != 0],param_3,(int *)param_4);
    break;
  case 'a':
    FID_conflict__store_str(*(char **)(param_5 + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 'b':
    FID_conflict__store_str(*(char **)(param_5 + 0x38 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 'c':
    if (DAT_10040a68 == 0) {
      FUN_1001f2c0(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_1001f2c0(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    else {
      DAT_10040a68 = 0;
      FUN_1001f2c0(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_1001f2c0(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    break;
  case 'd':
    DAT_10040a78 = DAT_10040a68;
    FUN_1001f160(param_2[3],2,param_3,param_4);
    break;
  case 'j':
    DAT_10040a78 = DAT_10040a68;
    FUN_1001f160(param_2[7] + 1,3,param_3,param_4);
    break;
  case 'm':
    DAT_10040a78 = DAT_10040a68;
    FUN_1001f160(param_2[4] + 1,2,param_3,param_4);
    break;
  case 'p':
    if (param_2[2] < 0xc) {
      FID_conflict__store_str(*(char **)(param_5 + 0x98),param_3,(int *)param_4);
    }
    else {
      FID_conflict__store_str(*(char **)(param_5 + 0x9c),param_3,(int *)param_4);
    }
    break;
  case 'w':
    DAT_10040a78 = DAT_10040a68;
    FUN_1001f160(param_2[6],1,param_3,param_4);
    break;
  case 'x':
    if (DAT_10040a68 == 0) {
      FUN_1001f2c0(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
    }
    else {
      DAT_10040a68 = 0;
      FUN_1001f2c0(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
    }
    break;
  case 'y':
    DAT_10040a78 = DAT_10040a68;
    FUN_1001f160(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}



// Function: FID_conflict:_store_str @ 0x1001f110

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



// Function: FUN_1001f160 @ 0x1001f160

void __cdecl FUN_1001f160(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_10040a78 == 0) {
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



// Function: FID_conflict:_store_number @ 0x1001f210

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



// Function: FUN_1001f2c0 @ 0x1001f2c0

void __cdecl FUN_1001f2c0(byte *param_1,int param_2,int *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  void *this;
  byte *local_14;
  uint local_10;
  char local_c;
  byte *local_8;
  
LAB_1001f2c6:
  do {
    if ((*param_1 == 0) || (*param_4 == 0)) {
      return;
    }
    local_c = '\0';
    DAT_10040a78 = 0;
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
          if ((*param_1 == 0) || (*param_4 == 0)) goto LAB_1001f2c6;
          if (*param_1 == 0x27) break;
          if (((*(ushort *)(PTR_DAT_1003e05c + (uint)*param_1 * 2) & 0x8000) != 0) && (1 < *param_4)
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
      goto LAB_1001f2c6;
    case 0x41:
    case 0x61:
      uVar1 = FUN_1001fcf0(param_1,param_1,(byte *)"am/pm");
      if (uVar1 == 0) {
        local_8 = param_1 + 5;
      }
      else {
        uVar1 = FUN_1001fcf0(this,param_1,&DAT_1003bce8);
        if (uVar1 == 0) {
          local_8 = param_1 + 3;
        }
      }
      local_c = 'p';
      break;
    case 0x48:
      if (local_10 == 1) {
        DAT_10040a78 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'H';
      break;
    case 0x4d:
      switch(local_10) {
      case 1:
        DAT_10040a78 = 1;
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
        DAT_10040a78 = 1;
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
        DAT_10040a78 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'I';
      break;
    case 0x6d:
      if (local_10 == 1) {
        DAT_10040a78 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'M';
      break;
    case 0x73:
      if (local_10 == 1) {
        DAT_10040a78 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'S';
      break;
    case 0x74:
      goto switchD_1001f351_caseD_74;
    case 0x79:
      if (local_10 == 2) {
        local_c = 'y';
      }
      else if (local_10 == 4) {
        local_c = 'Y';
      }
    }
    if (local_c == '\0') {
      if ((*(ushort *)(PTR_DAT_1003e05c + (uint)*param_1 * 2) & 0x8000) != 0) {
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
      FUN_1001eaf0(local_c,(int *)param_2,param_3,param_4,param_5);
      param_1 = local_8;
    }
  } while( true );
switchD_1001f351_caseD_74:
  if (*(int *)(param_2 + 8) < 0xc) {
    local_14 = *(byte **)(param_5 + 0x98);
  }
  else {
    local_14 = *(byte **)(param_5 + 0x9c);
  }
  while ((param_1 = local_8, 0 < (int)local_10 && (*param_4 != 0))) {
    if (((*(ushort *)(PTR_DAT_1003e05c + (uint)*local_14 * 2) & 0x8000) != 0) && (1 < *param_4)) {
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
  goto LAB_1001f2c6;
}



// Function: FUN_1001f7e0 @ 0x1001f7e0

undefined4 __cdecl FUN_1001f7e0(int param_1,LCID param_2,LCTYPE param_3,int *param_4)

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
    iVar4 = FUN_100209a0(param_2,param_3,(LPWSTR)&DAT_10040a4c,4,0);
    if (iVar4 != 0) {
      *(undefined1 *)param_4 = 0;
      local_a4 = 0;
      while( true ) {
        if (3 < local_a4) {
          return 0;
        }
        if (DAT_1003e050 < 2) {
          bVar1 = (&DAT_10040a4c)[local_a4 * 2];
          local_ac = *(ushort *)(PTR_DAT_1003e05c + (uint)bVar1 * 2) & 4;
        }
        else {
          bVar1 = (&DAT_10040a4c)[local_a4 * 2];
          local_ac = FUN_10011160((uint)bVar1,4);
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
  local_c = (void *)FUN_10020b40(param_2,param_3,local_10,0x80,0);
  if (local_c == (void *)0x0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) ||
        (pvVar3 = (void *)FUN_10020b40(param_2,param_3,(LPSTR)0x0,0,0), pvVar3 == (void *)0x0)) ||
       (local_10 = (LPSTR)FUN_1000bac0(pvVar3,2,0x1003bcf4,0x58), local_10 == (LPSTR)0x0))
    goto LAB_1001f92d;
    local_8 = 1;
    local_c = (void *)FUN_10020b40(param_2,param_3,local_10,(int)pvVar3,0);
    if (local_c == (void *)0x0) goto LAB_1001f92d;
  }
  iVar4 = FUN_1000bac0(local_c,2,0x1003bcf4,99);
  *param_4 = iVar4;
  if (*param_4 != 0) {
    _strncpy((char *)*param_4,local_10,(size_t)local_c);
    if (local_8 != 0) {
      FUN_1000c550(local_10,2);
    }
    return 0;
  }
LAB_1001f92d:
  if (local_8 != 0) {
    FUN_1000c550(local_10,2);
  }
  return 0xffffffff;
}



// Function: FUN_1001fa70 @ 0x1001fa70

undefined * FUN_1001fa70(void)

{
  return PTR_PTR_1003f420;
}



// Function: FUN_1001fa80 @ 0x1001fa80

BOOL __cdecl
FUN_1001fa80(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

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
  puStack_c = &DAT_1003bd00;
  puStack_10 = &LAB_100146ec;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffbc;
  if (DAT_10040a58 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10040a58 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10040a58 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_10040a58 == 1) {
    BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10040a58 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_100409d8;
    }
    _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (_Size == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_100103c0();
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
          FUN_100103c0();
          local_8 = 0xffffffff;
          if (&stack0x00000000 == (undefined1 *)0x44) {
            BVar2 = 0;
          }
          else {
            if (param_6 == 0) {
              param_6 = DAT_100409c8;
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
              FUN_10011f30((undefined4 *)param_4,(undefined4 *)&stack0xffffffbc,param_3 << 1);
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



// Function: FUN_1001fcf0 @ 0x1001fcf0

uint __thiscall FUN_1001fcf0(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = DAT_10041dd4;
  if (DAT_100409c8 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1001fd3e;
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
LAB_1001fd3e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    DAT_10041dd4 = DAT_10041dd4 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10041dc4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      DAT_10041dd4 = iVar2;
      FUN_1000b9c0(this,0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1001fd9f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_100112d0(uVar8);
      uVar7 = FUN_100112d0(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1001fd9f:
    if (uVar9 == 0) {
      LOCK();
      DAT_10041dd4 = DAT_10041dd4 + -1;
      UNLOCK();
    }
    else {
      FUN_1000ba60(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_1001fdc0 @ 0x1001fdc0

undefined4 __cdecl FUN_1001fdc0(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = DAT_10041dd4;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_100409c8 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1001fe1f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1001fe1f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      DAT_10041dd4 = DAT_10041dd4 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10041dc4;
      if (bVar8) {
        LOCK();
        UNLOCK();
        DAT_10041dd4 = iVar2;
        FUN_1000b9c0(param_3,0x13);
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
        uVar7 = FUN_100112d0(uVar7);
        uVar5 = FUN_100112d0(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1001fe95;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1001fe95:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        DAT_10041dd4 = DAT_10041dd4 + -1;
        UNLOCK();
      }
      else {
        FUN_1000ba60(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_1001fed0 @ 0x1001fed0

int __cdecl
FUN_1001fed0(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
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
  puStack_c = &DAT_1003bd60;
  puStack_10 = &LAB_100146ec;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  ExceptionList = &local_14;
  puVar2 = &stack0xffffffa8;
  if (DAT_10040a5c == 0) {
    ExceptionList = &local_14;
    iVar3 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar3 == 0) {
      iVar3 = CompareStringA(0,0,"",1,"",1);
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10040a5c = 2;
      puVar2 = local_1c;
    }
    else {
      DAT_10040a5c = 1;
      puVar2 = local_1c;
    }
  }
  local_1c = puVar2;
  if (0 < param_4) {
    param_4 = FUN_100202d0((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_100202d0((char *)param_5,param_6);
  }
  if (DAT_10040a5c == 2) {
    iVar3 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
  }
  else if (DAT_10040a5c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100409d8;
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
         (iVar3 = FUN_1000a680(2,0x1003bd18,0xb6,0,
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
      FUN_100103c0();
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
            FUN_100103c0();
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



// Function: FUN_100202d0 @ 0x100202d0

int __cdecl FUN_100202d0(char *param_1,int param_2)

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



// Function: FUN_10020320 @ 0x10020320

undefined4 __thiscall FUN_10020320(void *this,uint *param_1,int param_2)

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
  void *local_c;
  
  if (((param_1 == (uint *)0x0) ||
      (puVar1 = (uint *)FUN_10020cf0(this,(byte *)param_1,0x3d), puVar1 == (uint *)0x0)) ||
     (param_1 == puVar1)) {
    return 0xffffffff;
  }
  bVar6 = *(byte *)((int)puVar1 + 1) == 0;
  if (DAT_1004078c == DAT_10040790) {
    DAT_1004078c = copy_environ(DAT_1004078c);
  }
  if (DAT_1004078c == (int *)0x0) {
    if ((param_2 == 0) || (DAT_10040794 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_1004078c = (int *)FUN_1000bac0((void *)0x4,2,0x1003bd78,0x87);
      if (DAT_1004078c == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_1004078c = 0;
      if (DAT_10040794 == (undefined4 *)0x0) {
        DAT_10040794 = (undefined4 *)FUN_1000bac0((void *)0x4,2,0x1003bd78,0x8e);
        if (DAT_10040794 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_10040794 = 0;
      }
    }
    else {
      iVar2 = FUN_1001d960();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_1004078c;
  local_c = (void *)findenv((uchar *)param_1,(int)puVar1 - (int)param_1);
  if (((int)local_c < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if ((int)local_c < 0) {
      local_c = (void *)-(int)local_c;
    }
    piVar3 = FUN_1000bf50(local_c,piVar3,(void *)((int)local_c * 4 + 8),2,0x1003bd78,0xce);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[(int)local_c] = (int)param_1;
    piVar3[(int)local_c + 1] = 0;
    DAT_1004078c = piVar3;
  }
  else if (bVar6) {
    FUN_1000c550((void *)piVar3[(int)local_c],2);
    for (; piVar3[(int)local_c] != 0; local_c = (void *)((int)local_c + 1)) {
      piVar3[(int)local_c] = piVar3[(int)local_c + 1];
    }
    piVar3 = FUN_1000bf50(piVar3,piVar3,(void *)((int)local_c << 2),2,0x1003bd78,0xb9);
    if (piVar3 != (int *)0x0) {
      DAT_1004078c = piVar3;
    }
  }
  else {
    piVar3[(int)local_c] = (int)param_1;
  }
  if (param_2 != 0) {
    iVar2 = 0xe5;
    pcVar8 = "setenv.c";
    uVar7 = 2;
    sVar4 = _strlen((char *)param_1);
    lpName = (uint *)FUN_1000bac0((void *)(sVar4 + 2),uVar7,(int)pcVar8,iVar2);
    if (lpName != (uint *)0x0) {
      FUN_100101d0(lpName,param_1);
      puVar5 = (undefined1 *)((int)lpName + ((int)puVar1 - (int)param_1));
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(puVar5 + 1)));
      FUN_1000c550(lpName,2);
    }
  }
  return 0;
}



// Function: findenv @ 0x10020600

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2003 Debug */

int __cdecl findenv(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = DAT_1004078c;
  while( true ) {
    if (*local_8 == 0) {
      return -((int)local_8 - (int)DAT_1004078c >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*local_8,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*local_8 + param_2) == '=' || (*(char *)(*local_8 + param_2) == '\0')))) break;
    local_8 = local_8 + 1;
  }
  return (int)local_8 - (int)DAT_1004078c >> 2;
}



// Function: copy_environ @ 0x10020680

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
    piVar1 = (int *)FUN_1000bac0((void *)(local_14 * 4 + 4),2,0x1003bd78,0x146);
    if (piVar1 == (int *)0x0) {
      __amsg_exit(9);
    }
    local_c = piVar1;
    for (local_10 = param_1; *local_10 != 0; local_10 = local_10 + 1) {
      iVar5 = 0x14f;
      pcVar4 = "setenv.c";
      uVar3 = 2;
      sVar2 = _strlen((char *)*local_10);
      iVar5 = FUN_1000bac0((void *)(sVar2 + 1),uVar3,(int)pcVar4,iVar5);
      *local_c = iVar5;
      if (*local_c != 0) {
        FUN_100101d0((uint *)*local_c,(uint *)*local_10);
      }
      local_c = local_c + 1;
    }
    *local_c = 0;
  }
  return piVar1;
}



// Function: FUN_10020770 @ 0x10020770

undefined4 __cdecl FUN_10020770(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_1000a680(2,0x1003bd84,0x3a,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uint)param_1[3] & 0x40) == 0) {
    FUN_1001abf0(param_1,param_1);
    local_8 = FUN_10020800((int *)param_1);
    FUN_1001ac60(param_1);
  }
  else {
    param_1[3] = (undefined *)0x0;
  }
  return local_8;
}



// Function: FUN_10020800 @ 0x10020800

undefined4 __cdecl FUN_10020800(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_1000a680(2,0x1003bd84,0x77,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_1[3] & 0x83U) != 0) {
    local_8 = FUN_1001e160(param_1);
    FUN_10020f10(param_1);
    iVar2 = FUN_10020de0(param_1[4]);
    if (iVar2 < 0) {
      local_8 = 0xffffffff;
    }
    else if (param_1[7] != 0) {
      FUN_1000c550((void *)param_1[7],2);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return local_8;
}



// Function: FUN_100208c0 @ 0x100208c0

DWORD __cdecl FUN_100208c0(uint param_1)

{
  DWORD *pDVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD local_8;
  
  if ((DAT_100421dc <= param_1) ||
     ((*(byte *)((&DAT_100420a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    pDVar1 = FUN_10017150();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  FUN_1001df20(param_1);
  if ((*(byte *)((&DAT_100420a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0) {
    hFile = (HANDLE)FUN_1001dda0(param_1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) goto LAB_1002097f;
    pDVar1 = FUN_10017160();
    *pDVar1 = local_8;
  }
  pDVar1 = FUN_10017150();
  *pDVar1 = 9;
  local_8 = 0xffffffff;
LAB_1002097f:
  __unlock_fhandle(param_1);
  return local_8;
}



// Function: FUN_100209a0 @ 0x100209a0

int __cdecl FUN_100209a0(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1003bda0;
  puStack_10 = &LAB_100146ec;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10040a60 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10040a60 = 2;
    }
    else {
      DAT_10040a60 = 1;
    }
  }
  if (DAT_10040a60 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10040a60 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_100409d8;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_100103c0();
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



// Function: FUN_10020b40 @ 0x10020b40

int __cdecl FUN_10020b40(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1003bdb0;
  puStack_10 = &LAB_100146ec;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10040a64 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10040a64 = 2;
    }
    else {
      DAT_10040a64 = 1;
    }
  }
  if (DAT_10040a64 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10040a64 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_100409d8;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_100103c0();
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



// Function: FUN_10020cf0 @ 0x10020cf0

byte * __thiscall FUN_10020cf0(void *this,byte *param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (DAT_10041e5c == 0) {
    param_1 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_1000b9c0(this,0x19);
    while( true ) {
      uVar1 = (ushort)*param_1;
      if (uVar1 == 0) break;
      if (((&DAT_10041f61)[uVar1] & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar1) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (*pbVar2 == 0) {
          FUN_1000ba60(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(*param_1,*pbVar2)) {
          FUN_1000ba60(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2;
      param_1 = param_1 + 1;
    }
    FUN_1000ba60(0x19);
    if (param_2 != uVar1) {
      param_1 = (byte *)0x0;
    }
  }
  return param_1;
}



// Function: FUN_10020de0 @ 0x10020de0

undefined4 __cdecl FUN_10020de0(uint param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  
  if ((param_1 < DAT_100421dc) &&
     ((*(byte *)((&DAT_100420a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001df20(param_1);
    uVar2 = __close_lk(param_1);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_10017150();
    *pDVar1 = 9;
    pDVar1 = FUN_10017160();
    *pDVar1 = 0;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// Function: __close_lk @ 0x10020e60

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
  
  iVar1 = FUN_1001dda0(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1001dda0(1);
      iVar2 = FUN_1001dda0(2);
      if (iVar1 == iVar2) goto LAB_10020eb3;
    }
    hObject = (HANDLE)FUN_1001dda0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_10020ec5;
    }
  }
LAB_10020eb3:
  local_8 = 0;
LAB_10020ec5:
  FUN_1001dcc0(param_1);
  *(undefined1 *)((&DAT_100420a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// Function: FUN_10020f10 @ 0x10020f10

void __cdecl FUN_10020f10(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_1000a680(2,0x1003bdbc,0x30,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_1000c550((void *)param_1[2],2);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



// Function: _strchr @ 0x10020fc0

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



// Function: Unwind@100280a0 @ 0x100280a0

void __fastcall Unwind_100280a0(void *param_1)

{
  int unaff_EBP;
  
  FUN_10009a40(param_1,*(void **)(unaff_EBP + -0x18));
  return;
}




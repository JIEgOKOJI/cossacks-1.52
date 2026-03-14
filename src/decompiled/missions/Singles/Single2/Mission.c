// Decompiled from: Mission.dll

// Function: FUN_100015d0 @ 0x100015d0

void __cdecl FUN_100015d0(undefined4 param_1)

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
  uStack_8 = 0x1000169f;
  __chkesp();
  return;
}



// Function: FUN_100016e0 @ 0x100016e0

void __cdecl FUN_100016e0(undefined4 param_1,ushort param_2)

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
  uStack_8 = 0x100017de;
  __chkesp();
  return;
}



// Function: FUN_10001830 @ 0x10001830

void __cdecl FUN_10001830(undefined4 param_1,undefined1 param_2,undefined1 param_3)

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
  local_14 = thunk_FUN_100016e0(local_c,(ushort)CONCAT31((int3)((uint)extraout_EDX >> 8),param_3));
  uStack_8 = 0x100018bf;
  __chkesp();
  return;
}



// Function: FUN_100018f0 @ 0x100018f0

void __cdecl FUN_100018f0(undefined4 param_1,undefined1 param_2)

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
  local_14 = thunk_FUN_100015d0(local_c);
  uStack_8 = 0x1000197b;
  __chkesp();
  return;
}



// Function: FUN_100019b0 @ 0x100019b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100019b0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  longlong lVar4;
  undefined4 local_80 [16];
  double local_40;
  double local_38;
  int local_30;
  int local_2c;
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
  local_2c = param_2 - param_4;
  local_30 = param_1 - param_3;
  fVar3 = (float10)FUN_1000a634(local_2c);
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = _DAT_1003b040 + local_1c;
  }
  lVar4 = __ftol();
  local_20 = (undefined4)lVar4;
  local_38 = (double)param_5;
  FUN_1000a584(local_1c._4_4_);
  lVar4 = __ftol();
  local_28 = (undefined4)lVar4;
  local_40 = (double)param_5;
  FUN_1000a4d4((undefined4)local_1c);
  lVar4 = __ftol();
  local_24 = (undefined4)lVar4;
  local_8 = 0x10001a93;
  __chkesp();
  return;
}



// Function: FUN_10001ad0 @ 0x10001ad0

void __fastcall FUN_10001ad0(undefined1 *param_1)

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
  thunk_FUN_10002360(param_1,8,3,0x15,0,200,3,0x50);
  thunk_FUN_10002360(local_8,8,3,0x18,0,200,3,0x50);
  thunk_FUN_10002360(local_8,8,2,0x14,0,100,3,0x32);
  thunk_FUN_10002360(local_8,8,2,8,0,0x5a,3,0x32);
  thunk_FUN_10002360(local_8,8,2,0x14,0,100,3,0x32);
  thunk_FUN_10002360(local_8,8,2,0x16,0,0x1e,3,0x32);
  thunk_FUN_10002360(local_8,8,3,0x17,0,1000,3,0x5a);
  thunk_FUN_10002360(local_8,8,3,0xf,0,1000,3,0x5a);
  thunk_FUN_10002360(local_8,0x15,2,0xf,0,300,3,0x1e);
  thunk_FUN_10002360(local_8,0x15,2,0x14,0,300,3,0x1e);
  thunk_FUN_10002360(local_8,0x15,2,0x15,0,300,3,0x1e);
  thunk_FUN_10002360(local_8,0x15,2,0x18,0,300,3,0x1e);
  thunk_FUN_10002360(local_8,0x15,2,0x16,0,300,3,0x1e);
  thunk_FUN_10002360(local_8,0x15,2,0xb,0,300,3,0x1e);
  thunk_FUN_10002360(local_8,0x15,2,8,0,300,3,0x1e);
  thunk_FUN_10002360(local_8,0x15,3,0x17,0,1000,3,0x5a);
  thunk_FUN_10002360(local_8,0x15,2,10,0,500,3,0x1e);
  thunk_FUN_10002360(local_8,0x15,1,0x16,1,0x14,4,0x50);
  thunk_FUN_10002360(local_8,0x15,1,0x14,1,10,4,0x50);
  thunk_FUN_10002360(local_8,0x15,2,8,1,0x1e,4,0x50);
  thunk_FUN_10002360(local_8,0x15,2,0x15,1,100,4,0x50);
  thunk_FUN_10002360(local_8,0x14,2,0x14,0,500,3,0x50);
  thunk_FUN_10002360(local_8,0x14,2,0x16,0,500,3,0x50);
  thunk_FUN_10002360(local_8,0x14,2,0x15,0,500,3,0x50);
  thunk_FUN_10002360(local_8,0x14,3,0x17,0,1000,3,0x5a);
  thunk_FUN_10002360(local_8,0xf,2,0x15,0,300,3,0x50);
  thunk_FUN_10002360(local_8,0xf,2,0x14,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0xf,2,8,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0xf,2,0x14,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0xf,2,0x16,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0xf,2,0x17,0,300,3,0x5a);
  thunk_FUN_10002360(local_8,0xf,2,0xf,0,300,3,0x5a);
  thunk_FUN_10002360(local_8,0xf,2,0x18,0,300,3,0x1e);
  thunk_FUN_10002360(local_8,0xb,2,0x15,0,300,3,0x50);
  thunk_FUN_10002360(local_8,0xb,2,0x18,0,300,3,0x50);
  thunk_FUN_10002360(local_8,0xb,2,0x14,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0xb,2,8,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0xb,2,0x14,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0xb,2,0x16,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0xb,2,0x17,0,300,3,0x5a);
  thunk_FUN_10002360(local_8,0xb,2,0xf,0,300,3,0x5a);
  thunk_FUN_10002360(local_8,0xb,2,0xb,0,300,3,0x1e);
  thunk_FUN_10002360(local_8,0xb,2,10,0,500,3,0x1e);
  thunk_FUN_10002360(local_8,0x18,2,0x15,0,300,3,0x50);
  thunk_FUN_10002360(local_8,0x18,2,0x18,0,300,3,0x50);
  thunk_FUN_10002360(local_8,0x18,2,0x14,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0x18,2,8,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0x18,2,0x14,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0x18,2,0x16,0,300,3,0x32);
  thunk_FUN_10002360(local_8,0x18,2,0x17,0,300,3,0x5a);
  thunk_FUN_10002360(local_8,0x18,2,0xf,0,300,3,0x5a);
  thunk_FUN_10002360(local_8,0x16,2,0x15,0,500,3,0x50);
  thunk_FUN_10002360(local_8,0x16,2,0x18,0,500,3,0x50);
  thunk_FUN_10002360(local_8,0x16,2,0x14,0,500,3,0x32);
  thunk_FUN_10002360(local_8,0x16,2,8,0,500,3,0x32);
  thunk_FUN_10002360(local_8,0x16,2,0xb,0,500,3,0x32);
  thunk_FUN_10002360(local_8,0x16,2,0x16,0,500,3,0x32);
  thunk_FUN_10002360(local_8,0x16,2,0x17,0,500,3,0x5a);
  thunk_FUN_10002360(local_8,0x16,2,0xf,0,500,3,0x5a);
  thunk_FUN_10002360(local_8,0x16,2,0xb,0,500,3,0x1e);
  thunk_FUN_10002360(local_8,0x16,2,10,0,500,2,0x1e);
  thunk_FUN_10002360(local_8,0x20,3,8,1,10,4,0x32);
  local_8 = (undefined1 *)0x1000212c;
  __chkesp();
  return;
}



// Function: FUN_100022d0 @ 0x100022d0

undefined1 * __thiscall
FUN_100022d0(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
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



// Function: FUN_10002360 @ 0x10002360

void __thiscall
FUN_10002360(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
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
  puStack_c = &LAB_10028e1b;
  local_10 = ExceptionList;
  puVar2 = local_60;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_14 = this;
  if (*(int *)((int)this + 8) == 0) {
    ExceptionList = &local_10;
    local_1c = (void *)FUN_1000a850((void *)0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (undefined1 *)0x0;
    }
    else {
      local_20 = thunk_FUN_100022d0(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(undefined1 **)((int)local_14 + 8) = local_20;
  }
  else {
    ExceptionList = &local_10;
    thunk_FUN_10002360(*(void **)((int)this + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  ExceptionList = local_10;
  local_8 = 0x1000243d;
  __chkesp();
  return;
}



// Function: FUN_10002480 @ 0x10002480

void __thiscall FUN_10002480(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_1000252a:
          local_c = (uint)*(byte *)((int)this + 5) * 100 + (uint)*(byte *)((int)this + 6);
          goto LAB_1000256c;
        }
        pvVar1 = (void *)(uint)*(byte *)((int)this + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(uint)*(ushort *)((int)this + 3);
          if (pvVar4 < pvVar1) goto LAB_1000252a;
        }
      }
    }
  }
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = CONCAT22((short)((uint)pvVar1 >> 0x10),(undefined2)param_4);
    local_8 = this;
    local_c = thunk_FUN_10002480(*(void **)((int)this + 8),
                                 CONCAT31((int3)(uVar2 >> 8),(undefined1)param_1),
                                 CONCAT31((int3)((uint)this >> 8),(undefined1)param_2),
                                 CONCAT31((int3)((uint)pvVar4 >> 8),(undefined1)param_3),uVar2);
  }
LAB_1000256c:
  local_8 = (void *)0x1000257c;
  __chkesp();
  return;
}



// Function: FUN_100025d0 @ 0x100025d0

void __fastcall FUN_100025d0(int param_1)

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
      local_14 = thunk_FUN_10002650(1);
    }
  }
  local_8 = 0x1000262e;
  __chkesp();
  return;
}



// Function: FUN_10002650 @ 0x10002650

void FUN_10002650(uint param_1)

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
  thunk_FUN_100025d0((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_1000a7a0(local_8,local_8);
  }
  local_8 = (void *)0x1000269b;
  __chkesp();
  return;
}



// Function: FUN_100026c0 @ 0x100026c0

void __fastcall FUN_100026c0(int param_1)

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
  local_8 = 0x10002706;
  __chkesp();
  return;
}



// Function: FUN_10002720 @ 0x10002720

uint * __thiscall FUN_10002720(void *this,uint *param_1,byte param_2)

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
    if ((&DAT_1003ed50)[local_14] == param_2) {
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



// Function: FUN_100027d0 @ 0x100027d0

void __thiscall FUN_100027d0(void *this,undefined4 param_1,undefined1 param_2)

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
    uVar2 = thunk_FUN_10002930(local_2a);
    local_40 = (int *)((int)local_8 + (uVar2 & 0xff) * 4);
    *local_40 = *local_40 + 1;
  }
  local_8 = (void *)0x100028dc;
  __chkesp();
  return;
}



// Function: FUN_10002930 @ 0x10002930

undefined4 FUN_10002930(char param_1)

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
    if ((&DAT_1003ed50)[bVar1] == param_1) {
      local_10 = 8;
      local_c = bVar1;
    }
    bVar1 = local_10 + 1;
  }
  return CONCAT31(uVar2,local_c);
}



// Function: FUN_100029c0 @ 0x100029c0

void FUN_100029c0(void)

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
  FUN_10002a00();
  uStack_8 = 0x100029ea;
  __chkesp();
  return;
}



// Function: FUN_10002a00 @ 0x10002a00

void FUN_10002a00(void)

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
  puVar1 = (undefined4 *)thunk_FUN_100026c0((int)local_2c);
  puVar3 = &DAT_10040ca0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = 0x10002a3b;
  __chkesp();
  return;
}



// Function: FUN_10002a50 @ 0x10002a50

void FUN_10002a50(void)

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
  FUN_10002a90();
  FUN_10002ad0();
  uStack_8 = 0x10002a7f;
  __chkesp();
  return;
}



// Function: FUN_10002a90 @ 0x10002a90

void FUN_10002a90(void)

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
  thunk_FUN_10001ad0(&DAT_10040c90);
  uStack_8 = 0x10002abf;
  __chkesp();
  return;
}



// Function: FUN_10002ad0 @ 0x10002ad0

void FUN_10002ad0(void)

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
  FUN_1000ae00(0x10002b20);
  uStack_8 = 0x10002b02;
  __chkesp();
  return;
}



// Function: FUN_10002b20 @ 0x10002b20

void FUN_10002b20(void)

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
  if ((DAT_10040cc8 & 1) == 0) {
    DAT_10040cc8 = DAT_10040cc8 | 1;
    thunk_FUN_100025d0(0x10040c90);
  }
  uStack_8 = 0x10002b6c;
  __chkesp();
  return;
}



// Function: FUN_10002b90 @ 0x10002b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002b90(undefined4 param_1,undefined1 param_2)

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
  thunk_FUN_100027d0(&DAT_10040ca0,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)(&DAT_10040ca0)[local_40]) {
      uVar2 = ((&DAT_10040ca0)[local_40] * 100) / local_10;
      uVar1 = thunk_FUN_10002480(&DAT_10040c90,CONCAT31((int3)(uVar2 >> 8),local_2a),1,
                                 CONCAT31((int3)((uint)(((&DAT_10040ca0)[local_40] * 100) % local_10
                                                       ) >> 8),(&DAT_1003ed50)[local_40]),uVar2);
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
    thunk_FUN_100027d0(&DAT_10040ca0,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)(&DAT_10040ca0)[local_48]) {
        uVar2 = ((&DAT_10040ca0)[local_48] * 100) / local_10;
        uVar1 = thunk_FUN_10002480(&DAT_10040c90,CONCAT31((int3)((uint)local_48 >> 8),local_2a),2,
                                   CONCAT31((int3)(uVar2 >> 8),(&DAT_1003ed50)[local_48]),uVar2);
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
    thunk_FUN_100027d0(&DAT_10040ca0,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)(&DAT_10040ca0)[local_50]) {
        local_54 = ((float)(int)(&DAT_10040ca0)[local_50] * _DAT_1003b050) / (float)local_10;
        if (local_54 < _DAT_1003b04c) {
          local_54 = 1.0;
        }
        lVar5 = __ftol();
        uVar1 = thunk_FUN_10002480(&DAT_10040c90,CONCAT31((int3)((uint)extraout_ECX >> 8),local_2a),
                                   3,CONCAT31((int3)((ulonglong)lVar5 >> 8),
                                              (&DAT_1003ed50)[local_50]),(uint)lVar5);
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
  local_8 = 0x10002f4f;
  __chkesp();
  return;
}



// Function: FUN_10003050 @ 0x10003050

void FUN_10003050(void)

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
  FUN_10003090();
  uStack_8 = 0x1000307a;
  __chkesp();
  return;
}



// Function: FUN_10003090 @ 0x10003090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003090(void)

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
  _DAT_10040c88 = local_c;
  _DAT_10040c8c = local_8;
  return;
}



// Function: FUN_100030d0 @ 0x100030d0

void __fastcall FUN_100030d0(undefined4 param_1)

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
  local_8 = 0x10003113;
  __chkesp();
  return;
}



// Function: FUN_10003130 @ 0x10003130

void __fastcall FUN_10003130(int param_1)

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
  local_8 = 0x1000319e;
  __chkesp();
  return;
}



// Function: FUN_100031c0 @ 0x100031c0

void __fastcall FUN_100031c0(int param_1)

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
    cVar1 = thunk_FUN_10003130(local_8);
    if (cVar1 == '\0') {
      GetUnitsAmount0(local_8 + 8,*(undefined1 *)(local_8 + 0x1e));
      iVar3 = __chkesp();
      if (iVar3 < 4) {
        SelectUnits(local_8,0);
        __chkesp();
        SelSendAndKill(*(undefined1 *)(local_8 + 0x1d),local_8 + 0x10,
                       *(undefined1 *)(local_8 + 0x18),0);
        __chkesp();
        goto LAB_10003632;
      }
    }
    uVar2 = thunk_FUN_10002b90(local_8,*(undefined1 *)(local_8 + 0x1e));
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
      local_28 = thunk_FUN_10001830(local_8 + 8,*(undefined1 *)(local_8 + 0x1d),0x14);
      local_10 = local_28;
      if ((int)local_28 == 0) {
        local_30 = thunk_FUN_10001830(local_8 + 8,*(undefined1 *)(local_8 + 0x1d),0xf);
        local_10 = local_30;
      }
      bVar5 = (int)local_10 == 0;
      if (bVar5) {
        local_38 = thunk_FUN_10001830(local_8 + 8,*(undefined1 *)(local_8 + 0x1d),0xb);
        local_10 = local_38;
      }
      bVar5 = (int)local_10 == 0;
      if (bVar5) {
        local_40 = thunk_FUN_10001830(local_8 + 8,*(undefined1 *)(local_8 + 0x1d),0x16);
        local_10 = local_40;
      }
      local_48 = thunk_FUN_100018f0(local_8 + 8,*(undefined1 *)(local_8 + 0x1e));
      local_18 = local_48;
      local_50 = thunk_FUN_100019b0((int)local_10,local_10._4_4_,(int)local_48,
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
      local_58 = thunk_FUN_100018f0(local_8 + 8,0);
      local_18 = local_58;
      local_60 = thunk_FUN_100019b0((int)local_10,local_10._4_4_,(int)local_58,
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
LAB_10003632:
  local_8 = 0x10003642;
  __chkesp();
  return;
}



// Function: FUN_10003780 @ 0x10003780

void FUN_10003780(undefined4 param_1,int param_2)

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
  local_8 = 0x100037bd;
  __chkesp();
  return;
}



// Function: FUN_100037e0 @ 0x100037e0

void FUN_100037e0(void)

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
  DVar1 = FUN_1000aec0((int *)0x0);
  FUN_1000ae70(DVar1);
  SetPlayerName(0,"RUSSIA");
  __chkesp();
  SetPlayerName(1,"RUSSIA");
  __chkesp();
  SetPlayerName(2,"RUSSIA");
  __chkesp();
  RegisterZone(&DAT_100410b8,&DAT_1003b12c);
  __chkesp();
  RegisterZone(&DAT_100410e0,&DAT_1003b128);
  __chkesp();
  RegisterZone(&DAT_100410c0,&DAT_1003b124);
  __chkesp();
  RegisterZone(&DAT_100410e8,&DAT_1003b120);
  __chkesp();
  RegisterZone(&DAT_100410c8,&DAT_1003b11c);
  __chkesp();
  RegisterZone(&DAT_100410d0,&DAT_1003b118);
  __chkesp();
  RegisterZone(&DAT_100410d8,&DAT_1003b114);
  __chkesp();
  RegisterUnits(&DAT_10041010,&DAT_1003b110);
  __chkesp();
  RegisterUnits(&DAT_10041108,&DAT_1003b10c);
  __chkesp();
  RegisterUnits(&DAT_10041110,&DAT_1003b108);
  __chkesp();
  RegisterUnits(&DAT_10041118,&DAT_1003b104);
  __chkesp();
  RegisterUnits(&DAT_10041120,&DAT_1003b100);
  __chkesp();
  RegisterUnits(&DAT_10041128,&DAT_1003b0fc);
  __chkesp();
  RegisterUnits(&DAT_10041130,&DAT_1003b0f8);
  __chkesp();
  RegisterDynGroup(&DAT_10041160);
  __chkesp();
  RegisterFormation(&DAT_10041218,"#ODIN");
  __chkesp();
  RegisterFormation(&DAT_10041008,"#LINE6");
  __chkesp();
  RegisterDynGroup(&DAT_10041100);
  __chkesp();
  RegisterDynGroup(&DAT_10040cd8);
  __chkesp();
  RegisterVar(&DAT_10041160,8);
  __chkesp();
  RegisterVar(&DAT_10041100,8);
  __chkesp();
  RegisterVar(&DAT_10040cd8,8);
  __chkesp();
  RegisterUpgrade(&DAT_10041228,"Strelec(RU)ATTACK");
  __chkesp();
  RegisterUpgrade(&DAT_10041230,"Strelec(RU)SHIELD");
  __chkesp();
  RegisterUnitType(&DAT_10041150,"Strelec(RU)");
  __chkesp();
  RegisterUnitType(&DAT_10041138,"Tiagoli_koval_rus(RU)");
  __chkesp();
  RegisterUnitType(&DAT_10041140,"Tiagoli_kozak(RU)");
  __chkesp();
  RegisterUnitType(&DAT_10040ce0,"Kreposnoi(RU)");
  __chkesp();
  RegisterUnitType(&DAT_10041220,"Pik_rus(RU)");
  __chkesp();
  for (local_8 = 0; local_8 < 0x32; local_8 = local_8 + 1) {
    RegisterDynGroup(&DAT_10040ce8 + local_8 * 0x10);
    __chkesp();
    RegisterVar(&DAT_10040ce8 + local_8 * 0x10,0x10);
    __chkesp();
  }
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    RegisterDynGroup(&DAT_10041018 + local_8 * 0x10);
    __chkesp();
    RegisterVar(&DAT_10041018 + local_8 * 0x10,0x10);
    __chkesp();
  }
  DAT_10041148 = 0;
  DAT_1004114a = 0;
  DAT_1004114c = 0x40000000;
  RegisterDynGroup(&DAT_10041158);
  __chkesp();
  RegisterVar(&DAT_10041210,4);
  __chkesp();
  local_8 = 0x10003c77;
  __chkesp();
  return;
}



// Function: FUN_10003db0 @ 0x10003db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10003db0(ushort *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 local_6c [16];
  double local_2c;
  double local_24;
  int local_1c;
  float local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = *(uint *)(param_1 + 2) & 0xffffff;
  local_c = (uint)*param_1;
  local_10 = (uint)param_1[1];
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_1c = _rand();
    local_1c = local_1c % 10000;
    local_18 = ((float)local_1c * _DAT_1003b13c + (float)local_1c * _DAT_1003b13c) / _DAT_1003b138;
    local_24 = (double)(int)local_8;
    FUN_1000a4d4(10000);
    lVar3 = __ftol();
    param_1[1] = (short)local_10 + (short)lVar3;
    local_2c = (double)(int)local_8;
    FUN_1000a584(extraout_ECX);
    lVar3 = __ftol();
    *param_1 = (short)local_c + (short)lVar3;
    if (local_14 % 3 == 0) {
      iVar1 = _rand();
      CreateObject0(&DAT_10040ce8 + local_14 * 0x10,&DAT_10041218,&DAT_10041220,1,param_1,
                    iVar1 % 0xff);
      __chkesp();
    }
    else {
      iVar1 = _rand();
      CreateObject0(&DAT_10040ce8 + local_14 * 0x10,&DAT_10041218,&DAT_10041150,1,param_1,
                    iVar1 % 0xff);
      __chkesp();
    }
  }
  local_8 = 0x10003f20;
  __chkesp();
  return;
}



// Function: FUN_10003f90 @ 0x10003f90

void __cdecl FUN_10003f90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  uint local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  GetTotalAmount0(param_1);
  iVar1 = __chkesp();
  if (0 < iVar1) {
    UnitsCenter(param_1 + 8,param_1,0x96);
    __chkesp();
    GetUnitsAmount1(param_1 + 8,&DAT_10041100);
    __chkesp();
  }
  local_8 = 0x1000401e;
  __chkesp();
  return;
}



// Function: FUN_10004050 @ 0x10004050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10004050(ushort *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 local_6c [16];
  double local_2c;
  double local_24;
  int local_1c;
  float local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = *(uint *)(param_1 + 2) & 0xffffff;
  local_c = (uint)*param_1;
  local_10 = (uint)param_1[1];
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_1c = _rand();
    local_1c = local_1c % 10000;
    local_18 = ((float)local_1c * _DAT_1003b13c + (float)local_1c * _DAT_1003b13c) / _DAT_1003b138;
    local_24 = (double)(int)local_8;
    FUN_1000a4d4(10000);
    lVar3 = __ftol();
    param_1[1] = (short)local_10 + (short)lVar3;
    local_2c = (double)(int)local_8;
    FUN_1000a584(extraout_ECX);
    lVar3 = __ftol();
    *param_1 = (short)local_c + (short)lVar3;
    iVar1 = _rand();
    CreateObject0(&DAT_10041018 + local_14 * 0x10,&DAT_10041008,&DAT_10041140,3,param_1,iVar1 % 0xff
                 );
    __chkesp();
  }
  local_8 = 0x10004173;
  __chkesp();
  return;
}



// Function: FUN_100041c0 @ 0x100041c0

void __cdecl FUN_100041c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_48 [16];
  uint local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  GetUnitsByNation(param_1,3);
  iVar1 = __chkesp();
  if (0 < iVar1) {
    UnitsCenter(param_1 + 8,param_1,1000);
    __chkesp();
    if (param_2 != 0) {
      GetUnitsAmount0(param_1 + 8,1);
      iVar1 = __chkesp();
      if (0 < iVar1) {
        SelectUnitsInZone(param_1 + 8,1,0);
        __chkesp();
        SelCenter(&DAT_10041148,1,100);
        __chkesp();
        *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (*(short *)(param_1 + 8) - DAT_10041148)
        ;
        *(short *)(param_1 + 10) =
             *(short *)(param_1 + 10) + (*(short *)(param_1 + 10) - DAT_1004114a);
        SelectUnits(param_1,0);
        __chkesp();
        uVar3 = 0;
        iVar1 = _rand();
        SelSendTo(3,param_1 + 8,iVar1 % 0xff,uVar3);
        __chkesp();
      }
    }
    GetUnitsAmount1(param_1 + 8,&DAT_10041100);
    iVar1 = __chkesp();
    if (0 < iVar1) {
      UnitsCenter(param_1 + 8,&DAT_10041100,200);
      __chkesp();
      uVar3 = 0;
      iVar1 = _rand();
      SelSendTo(3,param_1 + 8,iVar1 % 0xff,uVar3);
      __chkesp();
      UnitsCenter(param_1 + 8,param_1,200);
      __chkesp();
      GetUnitsAmount1(param_1 + 8,&DAT_10041100);
      iVar1 = __chkesp();
      if (0 < iVar1) {
        SelectUnits(param_1,0);
        __chkesp();
        SelChangeNation(3,0);
        __chkesp();
        AddResource(0,3,500);
        __chkesp();
      }
    }
  }
  local_8 = 0x10004425;
  __chkesp();
  return;
}



// Function: FUN_100044d0 @ 0x100044d0

void __cdecl FUN_100044d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  GetUnitsByNation(param_1,3);
  iVar1 = __chkesp();
  if (0 < iVar1) {
    UnitsCenter(param_1 + 8,param_1,400);
    __chkesp();
    iVar1 = _rand();
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (1000 - (short)(iVar1 % 2000));
    iVar1 = _rand();
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + (1000 - (short)(iVar1 % 2000));
    SelectUnits(param_1,0);
    __chkesp();
    iVar1 = _rand();
    if (iVar1 % 5 == 0) {
      SelectUnits(&DAT_10041100,0);
      __chkesp();
      SelCenter(param_1 + 8,0,400);
      __chkesp();
    }
    uVar3 = 0;
    iVar1 = _rand();
    SelSendAndKill(3,param_1 + 8,iVar1 % 0xff,uVar3);
    __chkesp();
  }
  uStack_8 = 0x1000460e;
  __chkesp();
  return;
}



// Function: FUN_10004670 @ 0x10004670

void __cdecl FUN_10004670(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  uint local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  UnitsCenter(param_1 + 8,param_1,0x96);
  __chkesp();
  GetUnitsAmount0(param_1 + 8,0);
  __chkesp();
  local_8 = 0x100046e1;
  __chkesp();
  return;
}



// Function: FUN_10004710 @ 0x10004710

void __cdecl FUN_10004710(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar3 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  cVar1 = thunk_FUN_10004670(param_1);
  if (cVar1 == '\0') {
    UnitsCenter(param_1 + 8,param_1,400);
    __chkesp();
    iVar2 = _rand();
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (200 - (short)(iVar2 % 400));
    iVar2 = _rand();
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + (200 - (short)(iVar2 % 400));
    SelectUnits(param_1,0);
    __chkesp();
    uVar4 = 0;
    iVar2 = _rand();
    SelSendTo(1,param_1 + 8,iVar2 % 0xff,uVar4);
    __chkesp();
  }
  uStack_8 = 0x100047fd;
  __chkesp();
  return;
}



// Function: FUN_10004840 @ 0x10004840

void FUN_10004840(void)

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
  thunk_FUN_10005e10(&DAT_10041160);
  SelectTypeOfUnitsInZone(&DAT_100410c0,&DAT_10040ce0,3,0);
  __chkesp();
  SelectTypeOfUnitsInZone(&DAT_100410c8,&DAT_10040ce0,3,1);
  __chkesp();
  SelectTypeOfUnitsInZone(&DAT_100410d0,&DAT_10040ce0,3,1);
  __chkesp();
  SelectTypeOfUnitsInZone(&DAT_100410d8,&DAT_10040ce0,3,1);
  __chkesp();
  SelectTypeOfUnitsInZone(&DAT_100410e0,&DAT_10040ce0,3,1);
  __chkesp();
  SelectTypeOfUnitsInZone(&DAT_100410e8,&DAT_10040ce0,3,1);
  __chkesp();
  SaveSelectedUnits(3,&DAT_10041160,0);
  __chkesp();
  TakeWood(&DAT_10041160);
  __chkesp();
  uStack_8 = 0x10004964;
  __chkesp();
  return;
}



// Function: FUN_100049c0 @ 0x100049c0

void __cdecl FUN_100049c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  uint local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  GetUnitsAmount0(param_1,1);
  iVar1 = __chkesp();
  if (iVar1 == 0) {
    SelectTypeOfUnitsInZone(param_1,&DAT_10040ce0,3,0);
    __chkesp();
    SelChangeNation(3,0);
    __chkesp();
    SelectUnits(param_2,0);
    __chkesp();
    SelChangeNation(3,0);
    __chkesp();
  }
  local_8 = 0x10004a6f;
  __chkesp();
  return;
}



// Function: FUN_10004aa0 @ 0x10004aa0

void FUN_10004aa0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_58 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar5 = local_58;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  Trigg(99);
  uVar2 = __chkesp();
  if ((uVar2 & 0xff) != 0) {
    GetDiff(0);
    DAT_10041210 = __chkesp();
    SetResource(0,3,100);
    __chkesp();
    SetResource(0,1,0);
    __chkesp();
    SetResource(0,0,0);
    __chkesp();
    SetResource(0,2,0);
    __chkesp();
    SetResource(0,5,0);
    __chkesp();
    SetResource(0,4,0);
    __chkesp();
    ChangeFriends(3,0xb);
    __chkesp();
    ChangeFriends(1,0xb);
    __chkesp();
    EnableUnit(0,&DAT_10041150,0);
    __chkesp();
    DisableUpgrade(0,&DAT_10041228);
    __chkesp();
    DisableUpgrade(0,&DAT_10041230);
    __chkesp();
    SelectUnits(&DAT_10041010,0);
    __chkesp();
    SaveSelectedUnits(0,&DAT_10041100,0);
    __chkesp();
    DisableMission(0x44);
    __chkesp();
    DisableMission(0x45);
    __chkesp();
    DisableMission(0x46);
    __chkesp();
    DisableMission(0x47);
    __chkesp();
    DisableMission(0x48);
    __chkesp();
    DisableMission(0x49);
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
    DAT_10041148 = 0x21ca;
    DAT_1004114a = 0x1ce8;
    DAT_1004114c = (DAT_1004114c & 0xff000000) + 0x5dc;
    DAT_1003ed5c = DAT_10041210 * 5 + 0x23;
    thunk_FUN_10003db0(&DAT_10041148,DAT_1003ed5c);
    DAT_10041148 = 9000;
    DAT_1004114a = 8000;
    DAT_1004114c = (DAT_1004114c & 0xff000000) + 0x16a8;
    thunk_FUN_10004050(&DAT_10041148,10);
    thunk_FUN_10004840();
    RunTimer(1,200);
    __chkesp();
    RunTimer(2,200);
    __chkesp();
  }
  Trigg(100);
  uVar2 = __chkesp();
  if ((uVar2 & 0xff) == 0) goto LAB_10005995;
  SaveSelectedUnits(0,&DAT_10041158,0);
  __chkesp();
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    Trigg(0xd);
    uVar2 = __chkesp();
    cVar1 = thunk_FUN_100041c0((int)(&DAT_10041018 + local_8 * 0x10),uVar2 & 0xff);
    if (cVar1 != '\0') {
      Trigg(0xb);
      uVar2 = __chkesp();
      if ((uVar2 & 0xff) != 0) {
        DisableMission(0x45);
        __chkesp();
        EnableMission(0x46);
        __chkesp();
        EnableMission(0x47);
        __chkesp();
        ShowPage("#PAGE5");
        __chkesp();
        UnitsCenter(&DAT_10041148,&DAT_10041100,100);
        __chkesp();
        SelectUnits(&DAT_10041100,0);
        __chkesp();
        SelErase(0);
        __chkesp();
        iVar3 = _rand();
        CreateObject0(&DAT_10041100,&DAT_10041218,&DAT_10041138,0,&DAT_10041148,iVar3 % 0xff);
        __chkesp();
        SetTrigg(0xb,0);
        __chkesp();
        if (DAT_10041210 < 1) {
          SetLightSpot(&DAT_100410c0,0,2);
          __chkesp();
          SetLightSpot(&DAT_100410c8,0,3);
          __chkesp();
          SetLightSpot(&DAT_100410d0,0,4);
          __chkesp();
          SetLightSpot(&DAT_100410d8,0,5);
          __chkesp();
          SetLightSpot(&DAT_100410e0,0,6);
          __chkesp();
          SetLightSpot(&DAT_100410e8,0,7);
          __chkesp();
        }
      }
    }
  }
  TimerDoneFirst(2);
  uVar2 = __chkesp();
  if ((uVar2 & 0xff) != 0) {
    for (local_c = 0; local_c < 10; local_c = local_c + 1) {
      iVar4 = local_c % 3;
      GetGlobalTime();
      iVar3 = __chkesp();
      if (iVar4 == iVar3 % 3) {
        thunk_FUN_100044d0((int)(&DAT_10041018 + local_c * 0x10));
      }
    }
    RunTimer(2,300);
    __chkesp();
  }
  Trigg(0xd);
  uVar2 = __chkesp();
  if ((uVar2 & 0xff) != 0) {
    TimerDoneFirst(1);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      for (local_10 = 0; local_10 < DAT_1003ed5c; local_10 = local_10 + 1) {
        iVar4 = local_10 % 3;
        GetGlobalTime();
        iVar3 = __chkesp();
        if (iVar4 == iVar3 % 3) {
          thunk_FUN_10004710((int)(&DAT_10040ce8 + local_10 * 0x10));
        }
      }
      RunTimer(1,0x96);
      __chkesp();
    }
    Trigg(2);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      GetUnitsAmount1(&DAT_100410b8,&DAT_10041100);
      iVar3 = __chkesp();
      if (iVar3 == 0) {
        RunTimer(3,1000);
        __chkesp();
        DisableMission(0x43);
        __chkesp();
        EnableMission(0x44);
        __chkesp();
        EnableMission(0x45);
        __chkesp();
        SetTrigg(2,0);
        __chkesp();
      }
    }
    TimerDoneFirst(3);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      ChangeFriends(1,2);
      __chkesp();
      SetTrigg(5,0);
      __chkesp();
      ShowPage("#PAGE6");
      __chkesp();
      for (local_14 = 0; local_14 < DAT_10041210 * 2 + 4; local_14 = local_14 + 1) {
        iVar3 = _rand();
        CreateObject0(&DAT_10041160,&DAT_10041218,&DAT_10041150,1,&DAT_100410b8,iVar3 % 0xff);
        __chkesp();
        RemoveGroup(&DAT_10041160,&DAT_10040cd8);
        __chkesp();
      }
      RunTimer(7,(3 - DAT_10041210) * 100 + 1000);
      __chkesp();
    }
    TimerDoneFirst(7);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      SelectUnits(&DAT_10040cd8,0);
      __chkesp();
      UnitsCenter(&DAT_10041148,&DAT_10041100,300);
      __chkesp();
      uVar6 = 2;
      iVar3 = _rand();
      SelSendAndKill(1,&DAT_10041148,iVar3 % 0xff,uVar6);
      __chkesp();
      RunTimer(7,(3 - DAT_10041210) * 100 + 1000);
      __chkesp();
    }
    Trigg(5);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      for (local_18 = 0; local_18 < DAT_1003ed5c; local_18 = local_18 + 1) {
        cVar1 = thunk_FUN_10003f90((int)(&DAT_10040ce8 + local_18 * 0x10));
        if (cVar1 != '\0') {
          ShowPage("#PAGE8");
          __chkesp();
          ChangeFriends(1,2);
          __chkesp();
          SetTrigg(5,0);
          __chkesp();
        }
      }
    }
    cVar1 = thunk_FUN_100049c0(&DAT_100410c0,&DAT_10041108);
    if (cVar1 == '\0') {
      cVar1 = thunk_FUN_100049c0(&DAT_100410c8,&DAT_10041110);
      if (cVar1 == '\0') {
        cVar1 = thunk_FUN_100049c0(&DAT_100410d0,&DAT_10041118);
        if (cVar1 == '\0') {
          cVar1 = thunk_FUN_100049c0(&DAT_100410d8,&DAT_10041120);
          if (cVar1 == '\0') {
            cVar1 = thunk_FUN_100049c0(&DAT_100410e0,&DAT_10041128);
            if (cVar1 == '\0') {
              cVar1 = thunk_FUN_100049c0(&DAT_100410e8,&DAT_10041130);
              if (cVar1 == '\0') goto LAB_100057cb;
            }
          }
        }
      }
    }
    DisableMission(0x47);
    __chkesp();
    EnableMission(0x48);
    __chkesp();
    EnableMission(0x49);
    __chkesp();
    ChangeFriends(3,9);
    __chkesp();
    SetTrigg(0xd,0);
    __chkesp();
    AddResource(0,3,DAT_10041210 * -3000 + 10000);
    __chkesp();
    SetResource(0,1,DAT_10041210 * -3000 + 10000);
    __chkesp();
    SetResource(0,0,DAT_10041210 * -3000 + 10000);
    __chkesp();
    SetResource(0,2,DAT_10041210 * -3000 + 10000);
    __chkesp();
    SetResource(0,5,0);
    __chkesp();
    SetResource(0,4,DAT_10041210 * -3000 + 10000);
    __chkesp();
    SetResource(1,3,3000);
    __chkesp();
    SetResource(1,1,3000);
    __chkesp();
    SetResource(1,0,3000);
    __chkesp();
    SetResource(1,2,3000);
    __chkesp();
    SetResource(1,5,10000);
    __chkesp();
    SetResource(1,4,3000);
    __chkesp();
    if (DAT_10041210 < 1) {
      ClearLightSpot(2);
      __chkesp();
      ClearLightSpot(3);
      __chkesp();
      ClearLightSpot(4);
      __chkesp();
      ClearLightSpot(5);
      __chkesp();
      ClearLightSpot(6);
      __chkesp();
      ClearLightSpot(7);
      __chkesp();
    }
    ShowPage("#PAGE7");
    __chkesp();
    StartAI(1,"RUSSIA.0",0,0,0,DAT_10041210);
    __chkesp();
  }
LAB_100057cb:
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
  Trigg(5);
  uVar2 = __chkesp();
  if ((uVar2 & 0xff) == 0) {
    GetUnitsByNation(&DAT_10041100,1);
    iVar3 = __chkesp();
    if (iVar3 == 1) {
      ShowPage("#PAGE1");
      __chkesp();
      LooseGame();
      __chkesp();
      SetTrigg(100,0);
      __chkesp();
    }
  }
  GetTotalAmount0(&DAT_10041100);
  iVar3 = __chkesp();
  if (iVar3 == 0) {
    ShowPage("#PAGE3");
    __chkesp();
    LooseGame();
    __chkesp();
    SetTrigg(100,0);
    __chkesp();
  }
  Trigg(0xd);
  uVar2 = __chkesp();
  if ((uVar2 & 0xff) == 0) {
    NationIsErased(0);
    uVar2 = __chkesp();
    if ((uVar2 & 0xff) != 0) {
      ShowPage("#PAGE4");
      __chkesp();
      LooseGame();
      __chkesp();
      SetTrigg(100,0);
      __chkesp();
    }
  }
  ClearSelection(0);
  __chkesp();
  SelectUnits(&DAT_10041158,0);
  __chkesp();
LAB_10005995:
  local_8 = 0x100059a2;
  __chkesp();
  return;
}



// Function: FUN_10005d70 @ 0x10005d70

void __cdecl FUN_10005d70(undefined4 param_1)

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
  local_8 = 0x10005de2;
  __chkesp();
  return;
}



// Function: FUN_10005e10 @ 0x10005e10

void __cdecl FUN_10005e10(undefined4 param_1)

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
  uStack_8 = 0x10005e84;
  __chkesp();
  return;
}



// Function: FUN_10005eb0 @ 0x10005eb0

void FUN_10005eb0(void)

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
  uStack_8 = 0x10005ef9;
  __chkesp();
  return;
}



// Function: FUN_10005f10 @ 0x10005f10

void __fastcall FUN_10005f10(undefined4 param_1)

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
  local_8 = 0x10005f52;
  __chkesp();
  return;
}



// Function: FUN_10005f70 @ 0x10005f70

void __fastcall FUN_10005f70(int param_1)

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
  thunk_FUN_10005f10(param_1);
  SelDie(*(undefined1 *)(local_8 + 0x10));
  __chkesp();
  local_8 = 0x10005fbb;
  __chkesp();
  return;
}



// Function: FUN_10005fe0 @ 0x10005fe0

void __fastcall FUN_10005fe0(undefined4 param_1)

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
  local_8 = 0x10006020;
  __chkesp();
  return;
}



// Function: FUN_10006040 @ 0x10006040

void __fastcall FUN_10006040(undefined4 param_1)

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
  iVar1 = thunk_FUN_10005fe0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = 0x10006081;
  __chkesp();
  return;
}



// Function: FUN_100060a0 @ 0x100060a0

undefined4 __fastcall FUN_100060a0(undefined4 param_1)

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



// Function: FUN_100060d0 @ 0x100060d0

void __fastcall FUN_100060d0(undefined4 param_1)

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
  local_8 = 0x10006113;
  __chkesp();
  return;
}



// Function: FUN_10006130 @ 0x10006130

void __thiscall FUN_10006130(void *this,undefined4 param_1)

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



// Function: FUN_10006170 @ 0x10006170

void __thiscall FUN_10006170(void *this,undefined4 param_1)

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
  local_8 = (void *)0x100061c8;
  __chkesp();
  return;
}



// Function: FUN_100061f0 @ 0x100061f0

void __thiscall FUN_100061f0(void *this,undefined4 param_1,int param_2)

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
  iVar2 = thunk_FUN_10005fe0(this);
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
  local_8 = (void *)0x100062c7;
  __chkesp();
  return;
}



// Function: FUN_10006310 @ 0x10006310

void __thiscall FUN_10006310(void *this,undefined4 param_1)

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



// Function: FUN_10006350 @ 0x10006350

void __thiscall FUN_10006350(void *this,undefined4 param_1)

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



// Function: FUN_10006390 @ 0x10006390

void __fastcall FUN_10006390(int param_1)

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
  local_8 = 0x1000640f;
  __chkesp();
  return;
}



// Function: FUN_10006440 @ 0x10006440

void __thiscall FUN_10006440(void *this,undefined4 param_1)

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



// Function: FUN_10006480 @ 0x10006480

void __thiscall FUN_10006480(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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



// Function: FUN_100064e0 @ 0x100064e0

void __thiscall FUN_100064e0(void *this,int param_1)

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
  local_8 = (void *)0x10006580;
  __chkesp();
  return;
}



// Function: FUN_100065b0 @ 0x100065b0

void __fastcall FUN_100065b0(undefined4 param_1)

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
  local_8 = 0x1000661e;
  __chkesp();
  return;
}



// Function: FUN_10006640 @ 0x10006640

void __thiscall FUN_10006640(void *this,uint param_1)

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
  thunk_FUN_10005f10(this);
  SelChangeNation(*(undefined1 *)((int)local_8 + 0x10),param_1 & 0xff);
  __chkesp();
  *(uint *)((int)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10006698;
  __chkesp();
  return;
}



// Function: FUN_100066c0 @ 0x100066c0

undefined4 __fastcall FUN_100066c0(undefined4 param_1)

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



// Function: FUN_100066f0 @ 0x100066f0

void __thiscall FUN_100066f0(void *this,undefined4 param_1)

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
  thunk_FUN_10005f10(this);
  SelSendTo(*(undefined1 *)((int)local_8 + 0x10),param_1,0,0);
  __chkesp();
  *(undefined4 *)((int)local_8 + 0x20) = param_1;
  local_8 = (void *)0x1000674c;
  __chkesp();
  return;
}



// Function: FUN_10006770 @ 0x10006770

void __thiscall FUN_10006770(void *this,undefined4 param_1)

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
  thunk_FUN_10005f10(this);
  Patrol(*(undefined1 *)((int)local_8 + 0x10),param_1,0);
  __chkesp();
  local_8 = (void *)0x100067c1;
  __chkesp();
  return;
}



// Function: FUN_100067e0 @ 0x100067e0

void __fastcall FUN_100067e0(int param_1)

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
  local_8 = 0x10006836;
  __chkesp();
  return;
}



// Function: FUN_10006850 @ 0x10006850

void __thiscall FUN_10006850(void *this,undefined4 param_1)

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
  local_8 = (void *)0x100068a3;
  __chkesp();
  return;
}



// Function: FUN_100068c0 @ 0x100068c0

void __thiscall FUN_100068c0(void *this,undefined4 param_1)

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



// Function: FUN_10006900 @ 0x10006900

void __fastcall FUN_10006900(int param_1)

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
  thunk_FUN_10005f10(param_1);
  SetStandGround(*(undefined1 *)(local_8 + 0x10),1);
  __chkesp();
  local_8 = 0x1000694d;
  __chkesp();
  return;
}



// Function: FUN_10006970 @ 0x10006970

void __fastcall FUN_10006970(void *param_1)

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
  cVar1 = thunk_FUN_10006040(param_1);
  if (cVar1 != '\0') {
    thunk_FUN_10006a50(local_8);
    iVar2 = thunk_FUN_100065b0(local_8);
    if (iVar2 < 10) {
      thunk_FUN_100066f0(local_8,*(undefined4 *)((int)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x100069cf;
  __chkesp();
  return;
}



// Function: FUN_100069f0 @ 0x100069f0

void __thiscall FUN_100069f0(void *this,undefined4 param_1)

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
  local_8 = (void *)0x10006a36;
  __chkesp();
  return;
}



// Function: FUN_10006a50 @ 0x10006a50

void __fastcall FUN_10006a50(void *param_1)

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
  uVar1 = thunk_FUN_10006170(param_1,2000);
  GetUnitsAmount0(uVar1,uVar4);
  iVar2 = __chkesp();
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10006aab;
  __chkesp();
  return;
}



// Function: FUN_10006ad0 @ 0x10006ad0

void __thiscall FUN_10006ad0(void *this,undefined4 param_1)

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



// Function: FUN_10006b10 @ 0x10006b10

void __fastcall FUN_10006b10(int param_1)

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
  thunk_FUN_10006b60(param_1);
  *(undefined1 *)(local_8 + 0x2c) = 1;
  local_8 = 0x10006b4c;
  __chkesp();
  return;
}



// Function: FUN_10006b60 @ 0x10006b60

void __fastcall FUN_10006b60(undefined4 param_1)

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
  thunk_FUN_100060d0(param_1);
  local_8 = 0x10006b95;
  __chkesp();
  return;
}



// Function: FUN_10006bb0 @ 0x10006bb0

void __thiscall FUN_10006bb0(void *this,undefined4 param_1,undefined4 param_2)

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



// Function: FUN_10006c00 @ 0x10006c00

void __fastcall FUN_10006c00(void *param_1)

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
      (local_8 = param_1, cVar1 = thunk_FUN_10006040(param_1), cVar1 != '\0')) &&
     (*(int *)((int)local_8 + 0x10) != 0)) {
    if (*(int *)((int)local_8 + 0x10) == 6) {
      uVar6 = 0;
      uVar2 = thunk_FUN_10006170(local_8,600);
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
          thunk_FUN_10006640(local_8,0);
        }
        else if (local_10 == 1) {
          thunk_FUN_10005f70((int)local_8);
        }
        AddResource(0,*(undefined1 *)((int)local_8 + 0x24),*(undefined4 *)((int)local_8 + 0x28));
        __chkesp();
        thunk_FUN_10006bb0(local_8,0,0);
      }
    }
    else {
      iVar3 = thunk_FUN_100065b0(local_8);
      if (iVar3 < 0x32) {
        thunk_FUN_10006ef0(local_8);
      }
      cVar1 = thunk_FUN_100067e0((int)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        this = (void *)thunk_FUN_100070d0(*(short **)((int)local_8 + 0x20));
        thunk_FUN_10007230(this,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10006e32;
  __chkesp();
  return;
}



// Function: FUN_10006ef0 @ 0x10006ef0

void __fastcall FUN_10006ef0(void *param_1)

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
  thunk_FUN_10006640(param_1,6);
  thunk_FUN_10005f10(local_8);
  uVar5 = 0;
  uVar4 = 0;
  uVar1 = thunk_FUN_10006170(local_8,100);
  SelSendTo(*(undefined1 *)((int)local_8 + 0x10),uVar1,uVar4,uVar5);
  __chkesp();
  thunk_FUN_10006900((int)local_8);
  local_8 = (void *)0x10006f5c;
  __chkesp();
  return;
}



// Function: FUN_10006f80 @ 0x10006f80

void __thiscall FUN_10006f80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  thunk_FUN_10006480(this,param_1,param_2,param_3);
  *(undefined1 *)((int)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10006fc5;
  __chkesp();
  return;
}



// Function: FUN_10006fe0 @ 0x10006fe0

void __fastcall FUN_10006fe0(void *param_1)

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
  uVar1 = thunk_FUN_10006170(param_1,2000);
  GetUnitsAmount0(uVar1,uVar4);
  iVar2 = __chkesp();
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000703b;
  __chkesp();
  return;
}



// Function: FUN_10007060 @ 0x10007060

void __thiscall FUN_10007060(void *this,undefined4 param_1)

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
  (&DAT_10041350)[DAT_100413a0] = this;
  DAT_100413a0 = DAT_100413a0 + 1;
  return;
}



// Function: FUN_100070d0 @ 0x100070d0

void __cdecl FUN_100070d0(short *param_1)

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
  local_8 = DAT_10041350;
  for (local_c = 0; local_c < DAT_100413a0; local_c = local_c + 1) {
    psVar1 = (short *)thunk_FUN_100072a0((&DAT_10041350)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = (&DAT_10041350)[local_c];
    }
  }
  local_8 = 0x1000714c;
  __chkesp();
  return;
}



// Function: FUN_10007170 @ 0x10007170

void __thiscall FUN_10007170(void *this,undefined4 param_1)

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



// Function: FUN_100071b0 @ 0x100071b0

void __thiscall FUN_100071b0(void *this,undefined4 param_1)

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



// Function: FUN_100071f0 @ 0x100071f0

void __thiscall FUN_100071f0(void *this,undefined4 param_1)

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



// Function: FUN_10007230 @ 0x10007230

void __thiscall FUN_10007230(void *this,void *param_1)

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
  thunk_FUN_10006bb0(param_1,*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x10));
  thunk_FUN_100066f0(param_1,*(undefined4 *)((int)local_8 + 8));
  local_8 = (void *)0x1000727f;
  __chkesp();
  return;
}



// Function: FUN_100072a0 @ 0x100072a0

undefined4 __fastcall FUN_100072a0(int param_1)

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



// Function: FUN_100072e0 @ 0x100072e0

undefined4 __fastcall FUN_100072e0(undefined4 param_1)

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



// Function: FUN_10007310 @ 0x10007310

void __fastcall FUN_10007310(void *param_1)

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
  iVar2 = thunk_FUN_100078e0((int)param_1);
  if ((0 < iVar2) && (*(int *)((int)local_8 + 0x1c) + 1 < *(int *)((int)local_8 + 0x20))) {
    if (*(int *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      cVar1 = thunk_FUN_10007950(local_8,*(undefined4 *)
                                          ((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        thunk_FUN_10007fa0((int)local_8 + 0xc,
                           *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x28),
                           *(undefined4 *)((int)local_8 + *(int *)((int)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      cVar1 = thunk_FUN_10007950(local_8,*(undefined4 *)
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
  local_8 = (void *)0x10007512;
  __chkesp();
  return;
}



// Function: FUN_100075a0 @ 0x100075a0

undefined4 FUN_100075a0(void)

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



// Function: FUN_100075d0 @ 0x100075d0

void __thiscall FUN_100075d0(void *this,undefined4 param_1,undefined4 param_2)

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



// Function: FUN_10007640 @ 0x10007640

void __thiscall FUN_10007640(void *this,undefined4 param_1)

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



// Function: FUN_100076b0 @ 0x100076b0

void __thiscall FUN_100076b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  local_8 = (undefined4 *)0x10007721;
  __chkesp();
  return;
}



// Function: FUN_10007750 @ 0x10007750

void __thiscall FUN_10007750(void *this,undefined4 param_1,int param_2)

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
  iVar2 = thunk_FUN_100078e0((int)this);
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
    thunk_FUN_100075d0(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (undefined4 *)0x10007851;
  __chkesp();
  return;
}



// Function: FUN_100078a0 @ 0x100078a0

int __fastcall FUN_100078a0(int param_1)

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



// Function: FUN_100078e0 @ 0x100078e0

void __fastcall FUN_100078e0(int param_1)

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
  local_8 = 0x1000792a;
  __chkesp();
  return;
}



// Function: FUN_10007950 @ 0x10007950

void __thiscall FUN_10007950(void *this,undefined4 param_1)

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
  iVar1 = thunk_FUN_100078e0((int)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x100079b0;
  __chkesp();
  return;
}



// Function: FUN_100079d0 @ 0x100079d0

void __thiscall FUN_100079d0(void *this,undefined4 param_1,undefined4 param_2)

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
  uVar1 = thunk_FUN_10005d70((int)local_8 + 0xc);
  *(uint *)((int)local_8 + 0x18) = uVar1 & 0xff;
  *(undefined4 *)((int)local_8 + 0x14) = 0;
  *(undefined4 *)((int)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10007a44;
  __chkesp();
  return;
}



// Function: FUN_10007a70 @ 0x10007a70

bool __fastcall FUN_10007a70(int param_1)

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



// Function: FUN_10007ac0 @ 0x10007ac0

void __thiscall FUN_10007ac0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  bVar1 = thunk_FUN_10007a70((int)this);
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
  local_8 = (undefined4 *)0x10007b5d;
  __chkesp();
  return;
}



// Function: FUN_10007b90 @ 0x10007b90

void __fastcall FUN_10007b90(int param_1)

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
  local_8 = 0x10007c18;
  __chkesp();
  return;
}



// Function: FUN_10007c40 @ 0x10007c40

void __fastcall FUN_10007c40(int param_1)

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
  local_8 = 0x10007cb9;
  __chkesp();
  return;
}



// Function: FUN_10007ce0 @ 0x10007ce0

void __fastcall FUN_10007ce0(int param_1)

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
  local_8 = 0x10007d3e;
  __chkesp();
  return;
}



// Function: FUN_10007d60 @ 0x10007d60

void __fastcall FUN_10007d60(int param_1)

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
      thunk_FUN_10007c40(local_8);
      *(undefined4 *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    cVar1 = thunk_FUN_10007b90(local_8);
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
      thunk_FUN_10007ce0(local_8);
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
  local_8 = 0x10007eee;
  __chkesp();
  return;
}



// Function: FUN_10007f70 @ 0x10007f70

void __cdecl FUN_10007f70(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  DAT_100413a4 = param_1;
  return;
}



// Function: FUN_10007fa0 @ 0x10007fa0

void __cdecl FUN_10007fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (DAT_100413a4 != (void *)0x0) {
    bVar1 = thunk_FUN_10007a70((int)DAT_100413a4);
    if (bVar1) {
      thunk_FUN_10007ac0(DAT_100413a4,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10007ff9;
  __chkesp();
  return;
}



// Function: FUN_10008020 @ 0x10008020

void __fastcall FUN_10008020(int param_1)

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
  cVar1 = thunk_FUN_10008420(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      cVar1 = thunk_FUN_10008380(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        __chkesp();
        SelSendAndKill(DAT_100413a8,local_8 + 0x14,*(undefined1 *)(local_8 + 8),0);
        __chkesp();
      }
    }
    else if (local_c == '\x02') {
      if (DAT_100413ac == 0) {
        cVar1 = thunk_FUN_10008380(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          __chkesp();
          SelSendAndKill(DAT_100413a8,local_8 + 0x14,*(undefined1 *)(local_8 + 8),0);
          __chkesp();
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_100413ac,3);
        __chkesp();
        AttackEnemyInZone(local_8 + 0xc,DAT_100413ac,0);
        __chkesp();
      }
    }
    else {
      cVar1 = thunk_FUN_10008380(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        __chkesp();
        SelSendTo(DAT_100413a8,local_8 + 0x14,*(undefined1 *)(local_8 + 8),0);
        __chkesp();
      }
    }
  }
  local_8 = 0x100081d1;
  __chkesp();
  return;
}



// Function: FUN_10008250 @ 0x10008250

void __thiscall FUN_10008250(void *this,int *param_1)

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
  local_8 = (void *)0x10008335;
  __chkesp();
  return;
}



// Function: FUN_10008380 @ 0x10008380

void __fastcall FUN_10008380(int param_1)

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
  local_8 = 0x100083f4;
  __chkesp();
  return;
}



// Function: FUN_10008420 @ 0x10008420

void __fastcall FUN_10008420(int param_1)

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
  local_8 = 0x10008472;
  __chkesp();
  return;
}



// Function: FUN_10008490 @ 0x10008490

int __fastcall FUN_10008490(int param_1)

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



// Function: FUN_100084d0 @ 0x100084d0

void __thiscall FUN_100084d0(void *this,undefined4 param_1)

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
  local_8 = (void *)0x10008517;
  __chkesp();
  return;
}



// Function: FUN_10008530 @ 0x10008530

void __fastcall FUN_10008530(void *param_1)

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
  cVar1 = thunk_FUN_10008a70((int)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((int)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      puVar2 = (undefined4 *)thunk_FUN_10008b20(local_8,local_10);
      thunk_FUN_100088d0((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      GetUnitsAmount0((int)local_8 + 0x15,0);
      iVar3 = __chkesp();
      if (iVar3 < 1) {
        *(undefined1 *)((int)local_8 + 0xc) = 2;
      }
      else {
        cVar1 = thunk_FUN_100089d0((int)local_8);
        if (cVar1 == '\0') {
          SelectUnits((int)local_8 + 0xd,0);
          __chkesp();
          SelSendTo(DAT_1003ed60,(int)local_8 + 0x1d,*(undefined1 *)((int)local_8 + 8),0);
          __chkesp();
        }
      }
    }
    if (*(char *)((int)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      puVar2 = (undefined4 *)thunk_FUN_10008b20(local_8,local_18);
      thunk_FUN_100088d0((int)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      GetUnitsAmount0((int)local_8 + 0x15,0);
      iVar3 = __chkesp();
      if (iVar3 < 1) {
        SelectUnits((int)local_8 + 0xd,0);
        __chkesp();
        SelSendTo(DAT_1003ed60,DAT_100413b0,*(undefined1 *)((int)local_8 + 8),0);
        __chkesp();
      }
      else {
        *(undefined1 *)((int)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x100086c9;
  __chkesp();
  return;
}



// Function: FUN_10008740 @ 0x10008740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10008740(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
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
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
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
  piVar1 = (int *)thunk_FUN_10008b20(this,local_34);
  local_1c = *piVar1;
  local_20 = piVar1[1];
  local_38 = local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (float10)FUN_1000a634(local_20);
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = _DAT_1003b040 + local_28;
  }
  lVar5 = __ftol();
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_1000a584(extraout_ECX);
  lVar5 = __ftol();
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_1000a4d4(local_28._4_4_);
  lVar5 = __ftol();
  local_14 = (int)lVar5;
  thunk_FUN_100088d0((int)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((int)local_8 + 8) = local_2c + 0x80;
  thunk_FUN_10008530(local_8);
  local_8 = (void *)0x10008871;
  __chkesp();
  return;
}



// Function: FUN_100088d0 @ 0x100088d0

void FUN_100088d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  GetUnitInfo(DAT_100413b4,0,local_34);
  __chkesp();
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  __chkesp();
  CreateZoneNearGroup(param_1,DAT_100413b0,DAT_100413b4,param_4);
  __chkesp();
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  __chkesp();
  local_8 = 0x10008990;
  __chkesp();
  return;
}



// Function: FUN_100089d0 @ 0x100089d0

void __fastcall FUN_100089d0(int param_1)

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
  local_8 = 0x10008a44;
  __chkesp();
  return;
}



// Function: FUN_10008a70 @ 0x10008a70

void __fastcall FUN_10008a70(int param_1)

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
  local_8 = 0x10008ac2;
  __chkesp();
  return;
}



// Function: FUN_10008ae0 @ 0x10008ae0

int __fastcall FUN_10008ae0(int param_1)

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



// Function: FUN_10008b20 @ 0x10008b20

void __thiscall FUN_10008b20(void *this,int *param_1)

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
  local_8 = (void *)0x10008c05;
  __chkesp();
  return;
}



// Function: FUN_10008c50 @ 0x10008c50

void __fastcall FUN_10008c50(int param_1)

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
  cVar1 = thunk_FUN_10008e80(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_100413b8,local_8,DAT_1003ed64);
    __chkesp();
    GetUnitsAmount0(local_8 + 8,0);
    iVar2 = __chkesp();
    if (iVar2 < 1) {
      cVar1 = thunk_FUN_10008df0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        __chkesp();
        SelSendAndKill(DAT_1003ed68,*(undefined4 *)(local_8 + 0x10),0,0);
        __chkesp();
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
      __chkesp();
    }
  }
  local_8 = 0x10008d46;
  __chkesp();
  return;
}



// Function: FUN_10008d90 @ 0x10008d90

void __thiscall FUN_10008d90(void *this,undefined4 param_1)

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
  local_8 = (void *)0x10008dd4;
  __chkesp();
  return;
}



// Function: FUN_10008df0 @ 0x10008df0

void __fastcall FUN_10008df0(int param_1)

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
  local_8 = 0x10008e5e;
  __chkesp();
  return;
}



// Function: FUN_10008e80 @ 0x10008e80

void __fastcall FUN_10008e80(undefined4 param_1)

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
  local_8 = 0x10008ecf;
  __chkesp();
  return;
}



// Function: FUN_10008ef0 @ 0x10008ef0

void __thiscall
FUN_10008ef0(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

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
  uVar1 = thunk_FUN_10005d70(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(undefined4 *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  __chkesp();
  local_8 = (undefined1 *)0x10008f68;
  __chkesp();
  return;
}



// Function: FUN_10008f90 @ 0x10008f90

void __thiscall
FUN_10008f90(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

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
  thunk_FUN_10008ef0(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10009012;
  __chkesp();
  return;
}



// Function: FUN_10009040 @ 0x10009040

void __thiscall FUN_10009040(void *this,undefined4 param_1,undefined1 param_2,undefined4 param_3)

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
  CreateZoneNearGroup((int)local_8 + 0x1e,DAT_100413bc,(int)local_8 + 0x16,300);
  __chkesp();
  thunk_FUN_10008ef0(local_8,(int)local_8 + 0x16,(int)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x100090d0;
  __chkesp();
  return;
}



// Function: FUN_10009100 @ 0x10009100

void __fastcall FUN_10009100(undefined1 *param_1)

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
      thunk_FUN_10009240(local_8);
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
      thunk_FUN_10009310(local_8);
      SetTrigg(local_8[2],1);
      __chkesp();
    }
  }
  local_8 = (undefined1 *)0x100091fb;
  __chkesp();
  return;
}



// Function: FUN_10009240 @ 0x10009240

void __fastcall FUN_10009240(undefined1 *param_1)

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
  local_8 = (undefined1 *)0x100092da;
  __chkesp();
  return;
}



// Function: FUN_10009310 @ 0x10009310

void __fastcall FUN_10009310(undefined1 *param_1)

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
  local_8 = (undefined1 *)0x100093aa;
  __chkesp();
  return;
}



// Function: FUN_100093e0 @ 0x100093e0

int __fastcall FUN_100093e0(int param_1)

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



// Function: FUN_10009420 @ 0x10009420

void __thiscall FUN_10009420(void *this,undefined4 param_1)

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
  local_8 = (void *)0x10009467;
  __chkesp();
  return;
}



// Function: FUN_10009480 @ 0x10009480

void __thiscall FUN_10009480(void *this,undefined4 param_1)

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
  local_8 = (void *)0x100094e0;
  __chkesp();
  return;
}



// Function: FUN_10009500 @ 0x10009500

void __thiscall FUN_10009500(void *this,undefined4 param_1)

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
  local_8 = (ushort *)0x100095b2;
  __chkesp();
  return;
}



// Function: FUN_100095f0 @ 0x100095f0

void __thiscall FUN_100095f0(void *this,undefined4 param_1,undefined4 param_2)

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
  cVar1 = thunk_FUN_10009500(this,param_1);
  if (cVar1 != '\0') {
    GetUnitsAmount1(param_2,param_1);
    iVar2 = __chkesp();
    if (0 < iVar2) {
      local_c = 1;
    }
  }
  local_8 = (void *)0x10009658;
  __chkesp();
  return;
}



// Function: FUN_10009680 @ 0x10009680

int __fastcall FUN_10009680(int param_1)

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



// Function: FUN_100096c0 @ 0x100096c0

void __thiscall
FUN_100096c0(void *this,undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
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
  local_8 = (void *)0x10009755;
  __chkesp();
  return;
}



// Function: FUN_10009790 @ 0x10009790

void __fastcall FUN_10009790(int param_1)

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
  local_8 = 0x10009888;
  __chkesp();
  return;
}



// Function: FUN_100098d0 @ 0x100098d0

void __fastcall FUN_100098d0(int param_1)

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
    iVar1 = thunk_FUN_10009680(local_8);
    GetUnitsAmount1(local_14,iVar1);
    iVar1 = __chkesp();
    if (0 < iVar1) {
      thunk_FUN_10009790(local_8);
      local_c = 1;
    }
  }
  local_8 = 0x1000995b;
  __chkesp();
  return;
}



// Function: FUN_10009990 @ 0x10009990

undefined4 __fastcall FUN_10009990(undefined4 param_1)

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



// Function: FUN_100099c0 @ 0x100099c0

void __thiscall FUN_100099c0(void *this,undefined4 param_1)

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
  thunk_FUN_10009c80(this);
  SelCenter((int)local_8 + 8,*(undefined1 *)((int)local_8 + 0x3c),param_1);
  __chkesp();
  local_8 = (void *)0x10009a1c;
  __chkesp();
  return;
}



// Function: FUN_10009a40 @ 0x10009a40

void __fastcall FUN_10009a40(void *param_1)

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
  thunk_FUN_100099c0(param_1,300);
  local_8 = (void *)0x10009a77;
  __chkesp();
  return;
}



// Function: FUN_10009a90 @ 0x10009a90

void __thiscall FUN_10009a90(void *this,uint *param_1)

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
  thunk_FUN_10009a40(this);
  local_10 = (uint)*(ushort *)((int)local_8 + 8);
  local_c = (uint)*(ushort *)((int)local_8 + 10);
  *param_1 = local_10;
  param_1[1] = local_c;
  local_8 = (void *)0x10009aeb;
  __chkesp();
  return;
}



// Function: FUN_10009b10 @ 0x10009b10

void __thiscall FUN_10009b10(void *this,undefined4 param_1)

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
  thunk_FUN_10009c80(this);
  SelSendAndKill(*(undefined1 *)((int)local_8 + 0x3c),param_1,0,0);
  __chkesp();
  local_8 = (void *)0x10009b63;
  __chkesp();
  return;
}



// Function: FUN_10009b80 @ 0x10009b80

void __thiscall FUN_10009b80(void *this,undefined4 param_1,byte param_2)

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
  thunk_FUN_10009c80(this);
  uVar1 = (uint)param_2;
  iVar2 = _rand();
  SelSendTo(*(undefined1 *)((int)local_8 + 0x3c),param_1,iVar2 % 0xff,uVar1);
  __chkesp();
  local_8 = (void *)0x10009be1;
  __chkesp();
  return;
}



// Function: FUN_10009c00 @ 0x10009c00

void __thiscall FUN_10009c00(void *this,undefined4 param_1)

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
  thunk_FUN_10009b80(this,param_1,0);
  local_8 = (void *)0x10009c38;
  __chkesp();
  return;
}



// Function: FUN_10009c50 @ 0x10009c50

undefined4 __fastcall FUN_10009c50(undefined4 param_1)

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



// Function: FUN_10009c80 @ 0x10009c80

void __fastcall FUN_10009c80(undefined4 param_1)

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
  local_8 = 0x10009cc2;
  __chkesp();
  return;
}



// Function: FUN_10009ce0 @ 0x10009ce0

void __fastcall FUN_10009ce0(undefined4 param_1)

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
  local_8 = 0x10009d57;
  __chkesp();
  return;
}



// Function: FUN_10009d80 @ 0x10009d80

void __fastcall FUN_10009d80(undefined4 param_1)

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
  local_8 = 0x10009dc0;
  __chkesp();
  return;
}



// Function: FUN_10009de0 @ 0x10009de0

void __fastcall FUN_10009de0(undefined4 param_1)

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
  iVar1 = thunk_FUN_10009d80(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = 0x10009e21;
  __chkesp();
  return;
}



// Function: FUN_10009e40 @ 0x10009e40

void __thiscall FUN_10009e40(void *this,undefined4 param_1)

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
  uVar1 = thunk_FUN_10009ce0(local_8);
  *(undefined1 *)((int)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x10009e92;
  __chkesp();
  return;
}



// Function: FUN_10009eb0 @ 0x10009eb0

void __thiscall FUN_10009eb0(void *this,undefined4 param_1)

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
  uVar1 = thunk_FUN_10009ce0(local_8);
  *(undefined1 *)((int)local_8 + 0x3c) = uVar1;
  local_8 = (void *)0x10009f18;
  __chkesp();
  return;
}



// Function: FUN_10009f40 @ 0x10009f40

void __thiscall FUN_10009f40(void *this,undefined4 param_1)

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
  local_8 = (void *)0x10009fab;
  __chkesp();
  return;
}



// Function: FUN_10009fd0 @ 0x10009fd0

void __thiscall FUN_10009fd0(void *this,undefined1 param_1)

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



// Function: FUN_1000a010 @ 0x1000a010

void FUN_1000a010(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return;
}



// Function: FUN_1000a040 @ 0x1000a040

void FUN_1000a040(undefined4 param_1)

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
    uVar1 = thunk_FUN_10009c50(local_8);
    SelectUnits(uVar1,uVar4);
    __chkesp();
    SelAttackGroup(1,param_1);
    __chkesp();
  }
  local_8 = 0x1000a0b9;
  __chkesp();
  return;
}



// Function: FUN_1000a0e0 @ 0x1000a0e0

void __fastcall FUN_1000a0e0(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar4 = local_48;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_8 = param_1;
  cVar1 = thunk_FUN_10009de0(param_1);
  if (cVar1 != '\0') {
    uVar5 = 0;
    uVar2 = thunk_FUN_100099c0(local_8,3000);
    GetUnitsAmount0(uVar2,uVar5);
    iVar3 = __chkesp();
    if (0 < iVar3) {
      uVar6 = 0;
      uVar5 = 0;
      uVar2 = thunk_FUN_100099c0(local_8,3000);
      SelectUnitsInZone(uVar2,uVar5,uVar6);
      __chkesp();
      SaveSelectedUnits(0,(int)local_8 + 0x3d,0);
      __chkesp();
      thunk_FUN_1000a040((int)local_8 + 0x3d);
    }
  }
  local_8 = (void *)0x1000a191;
  __chkesp();
  return;
}



// Function: FUN_1000a1d0 @ 0x1000a1d0

void __fastcall FUN_1000a1d0(int param_1)

{
  undefined4 uVar1;
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
  uVar1 = thunk_FUN_10009c50(param_1);
  RegisterDynGroup(uVar1);
  __chkesp();
  RegisterDynGroup(local_8 + 0x3d);
  __chkesp();
  local_8 = 0x1000a22e;
  __chkesp();
  return;
}



// Function: FUN_1000a250 @ 0x1000a250

void __fastcall FUN_1000a250(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_50 [16];
  undefined1 local_10 [8];
  undefined4 local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  SelectUnits(param_1,0);
  __chkesp();
  SelCenter(local_10,1,300);
  __chkesp();
  uVar3 = 0;
  iVar1 = _rand();
  SelSendAndKill(1,local_10,iVar1 % 0xff,uVar3);
  __chkesp();
  local_8 = 0x1000a2d7;
  __chkesp();
  return;
}



// Function: __chkesp @ 0x1000a480

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
  iVar2 = FUN_1000b3e0(1,0x1003b1ec,0x2a,&DAT_1003b1fc,
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



// Function: FUN_1000a4c0 @ 0x1000a4c0

void FUN_1000a4c0(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000bcd8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1000a4dd(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}



// Function: FUN_1000a4d4 @ 0x1000a4d4

void __fastcall FUN_1000a4d4(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  __fload_withFB(param_1,(int)&stack0x00000004);
}



// Function: FUN_1000a4dd @ 0x1000a4dd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1000a4dd(int param_1,undefined4 param_2)

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
      uVar1 = FUN_1000bc7c();
    }
    if (DAT_100413d8 == 0) {
      __startOneArgErrorHandling(&DAT_1003ed70,0x1e,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fsin(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / _DAT_1003b55a) * _DAT_1003b55a;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_100413d8 == 0) {
      uVar1 = __math_exit(&DAT_1003ed70,0x1e,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}



// Function: FUN_1000a570 @ 0x1000a570

void FUN_1000a570(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000bcd8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1000a58d(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}



// Function: FUN_1000a584 @ 0x1000a584

void __fastcall FUN_1000a584(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  __fload_withFB(param_1,(int)&stack0x00000004);
}



// Function: FUN_1000a58d @ 0x1000a58d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_1000a58d(int param_1,undefined4 param_2)

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
      uVar1 = FUN_1000bc7c();
    }
    if (DAT_100413d8 == 0) {
      __startOneArgErrorHandling(&DAT_1003ed80,0x12,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return extraout_EAX;
    }
  }
  else {
    fVar2 = (float10)fcos(in_ST0);
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / _DAT_1003b55a) * _DAT_1003b55a;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_100413d8 == 0) {
      uVar1 = __math_exit(&DAT_1003ed80,0x12,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}



// Function: FUN_1000a620 @ 0x1000a620

void FUN_1000a620(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000bcd8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1000a63d(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}



// Function: FUN_1000a634 @ 0x1000a634

void __fastcall FUN_1000a634(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  __fload_withFB(param_1,(int)&stack0x00000004);
}



// Function: FUN_1000a63d @ 0x1000a63d

void __cdecl FUN_1000a63d(int param_1,undefined4 param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  unkbyte10 in_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_1000bc7c();
      if (DAT_100413d8 != 0) {
        return;
      }
      __startOneArgErrorHandling(&DAT_1003ed90,0xf,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    fpatan(in_ST0,(float10)1);
  }
  if (DAT_100413d8 != 0) {
    return;
  }
  __math_exit(&DAT_1003ed90,0xf,unaff_retaddr,param_1,param_2);
  return;
}



// Function: FUN_1000a6c0 @ 0x1000a6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a6c0(void)

{
  FUN_1000a700();
  _DAT_100413dc = __ms_p5_mp_test_fdiv();
  __setdefaultprecision();
  return;
}



// Function: FUN_1000a6f0 @ 0x1000a6f0

void FUN_1000a6f0(void)

{
  return;
}



// Function: FUN_1000a700 @ 0x1000a700

void FUN_1000a700(void)

{
  PTR___fptrap_1003ee20 = __cfltcvt;
  PTR___fptrap_1003ee24 = __cropzeros;
  PTR___fptrap_1003ee28 = __fassign;
  PTR___fptrap_1003ee2c = FUN_1000bf10;
  PTR___fptrap_1003ee30 = __positive;
  PTR___fptrap_1003ee34 = __cfltcvt;
  return;
}



// Function: FUN_1000a750 @ 0x1000a750

undefined4 __cdecl FUN_1000a750(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_100413d8;
  DAT_100413d8 = param_1;
  return uVar1;
}



// Function: __ftol @ 0x1000a76c

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Function: FUN_1000a7a0 @ 0x1000a7a0

void __thiscall FUN_1000a7a0(void *this,void *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000c720(this,9);
    if (((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
        && ((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((int)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1000b3e0(2,0x1003b2dc,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_1000d2b0(param_1,*(int *)((int)param_1 + -0xc));
    FUN_1000c7c0(9);
  }
  return;
}



// Function: FUN_1000a850 @ 0x1000a850

void __cdecl FUN_1000a850(void *param_1)

{
  FUN_1000c850(param_1,1);
  return;
}



// Function: FUN_1000a870 @ 0x1000a870

void FUN_1000a870(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000a89b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: _CallMemberFunction0 @ 0x1000a8b0

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000a8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}



// Function: FUN_1000a8c0 @ 0x1000a8c0

void FUN_1000a8c0(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000a8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000a8d0 @ 0x1000a8d0

void FUN_1000a8d0(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000a8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_1000a8e0 @ 0x1000a8e0

void FUN_1000a8e0(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000a90c,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// Function: FID_conflict:___CxxFrameHandler3 @ 0x1000a940

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
  
  uVar1 = FUN_1000e790(param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}



// Function: ___CxxLongjmpUnwind@4 @ 0x1000a980

/* Library Function - Single Match
    ___CxxLongjmpUnwind@4
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

void ___CxxLongjmpUnwind_4(int param_1)

{
  FUN_1000ed00(*(int *)(param_1 + 0x18),0,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x1c));
  return;
}



// Function: FUN_1000a9b0 @ 0x1000a9b0

undefined4 __cdecl
FUN_1000a9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = FUN_1000aa20;
  local_10 = param_2;
  local_c = param_1;
  local_8 = param_4 + 1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// Function: FUN_1000aa20 @ 0x1000aa20

void __cdecl FUN_1000aa20(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3)

{
  FUN_1000e790(param_1,*(EHRegistrationNode **)(param_2 + 0xc),param_3,(void *)0x0,
               *(_s_FuncInfo **)(param_2 + 8),*(int *)(param_2 + 0x10),param_2,'\0');
  return;
}



// Function: FUN_1000aa60 @ 0x1000aa60

undefined4 __cdecl
FUN_1000aa60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_28 = FUN_1000ab30;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x1000aafc;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_1000f520();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// Function: FUN_1000ab30 @ 0x1000ab30

undefined4 __cdecl FUN_1000ab30(PEXCEPTION_RECORD param_1,PVOID param_2,_CONTEXT *param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_1000e790((EHExceptionRecord *)param_1,*(EHRegistrationNode **)((int)param_2 + 0xc),param_3,
               (void *)0x0,*(_s_FuncInfo **)((int)param_2 + 8),*(int *)((int)param_2 + 0x10),
               *(EHRegistrationNode **)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1000a8e0(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1000aba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// Function: FUN_1000abc0 @ 0x1000abc0

int __cdecl FUN_1000abc0(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

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
      FUN_1000f7a0();
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
    FUN_1000f7a0();
  }
  return iVar2 + uVar6 * 0x14;
}



// Function: __global_unwind2 @ 0x1000ac50

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000ac68,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Function: __local_unwind2 @ 0x1000ac92

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
  puStack_18 = &LAB_1000ac70;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000ad26();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// Function: __abnormal_termination @ 0x1000acfa

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_1000ac70) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// Function: __NLG_Notify1 @ 0x1000ad1d

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1003edb4 = param_1;
  DAT_1003edb0 = in_EAX;
  DAT_1003edb8 = unaff_EBP;
  return;
}



// Function: FUN_1000ad26 @ 0x1000ad26

void FUN_1000ad26(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1003edb4 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1003edb0 = in_EAX;
  DAT_1003edb8 = unaff_EBP;
  return;
}



// Function: FUN_1000ad40 @ 0x1000ad40

int __cdecl FUN_1000ad40(int param_1)

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
  
  FUN_1000f9e0();
  pvVar1 = (void *)FUN_1000d6f0(this,(int)DAT_10042f18,2);
  this_00 = (void *)((int)DAT_10042f14 + (4 - (int)DAT_10042f18));
  if (pvVar1 < this_00) {
    iVar6 = 0x68;
    pcVar5 = "onexit.c";
    uVar4 = 2;
    iVar2 = FUN_1000d6f0(this_00,(int)DAT_10042f18,2);
    piVar3 = FUN_1000ccb0(this_01,DAT_10042f18,(void *)(iVar2 + 0x10),uVar4,(int)pcVar5,iVar6);
    if (piVar3 == (int *)0x0) {
      FUN_1000f9f0();
      return 0;
    }
    DAT_10042f14 = piVar3 + ((int)DAT_10042f14 - (int)DAT_10042f18 >> 2);
    DAT_10042f18 = piVar3;
  }
  *DAT_10042f14 = param_1;
  DAT_10042f14 = DAT_10042f14 + 1;
  FUN_1000f9f0();
  return param_1;
}



// Function: FUN_1000ae00 @ 0x1000ae00

int __cdecl FUN_1000ae00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000ad40(param_1);
  return (iVar1 != 0) - 1;
}



// Function: FUN_1000ae20 @ 0x1000ae20

void FUN_1000ae20(void)

{
  DAT_10042f18 = (undefined4 *)FUN_1000c820((void *)0x80,2,0x1003b310,0xb6);
  if (DAT_10042f18 == (undefined4 *)0x0) {
    __amsg_exit(0x18);
  }
  *DAT_10042f18 = 0;
  DAT_10042f14 = DAT_10042f18;
  return;
}



// Function: FUN_1000ae70 @ 0x1000ae70

void __cdecl FUN_1000ae70(DWORD param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000f520();
  pDVar1[5] = param_1;
  return;
}



// Function: _rand @ 0x1000ae80

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000f520();
  pDVar1[5] = pDVar1[5] * 0x343fd + 0x269ec3;
  return pDVar1[5] >> 0x10 & 0x7fff;
}



// Function: FUN_1000aec0 @ 0x1000aec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_1000aec0(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  int local_dc;
  _TIME_ZONE_INFORMATION local_d4;
  _SYSTEMTIME local_28;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_28);
  GetSystemTime(&local_14);
  if (((((uint)local_14.wMinute == _DAT_100413f0 >> 0x10) && (local_14.wHour == DAT_100413f0)) &&
      (local_14.wDay == DAT_100413ee)) &&
     ((local_14.wMonth == DAT_100413ea && (local_14.wYear == DAT_100413e8)))) {
    local_dc = DAT_100413e0;
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
    _DAT_100413e8 = CONCAT22(local_14.wMonth,local_14.wYear);
    _DAT_100413ec = CONCAT22(local_14.wDay,local_14.wDayOfWeek);
    _DAT_100413f0 = CONCAT22(local_14.wMinute,local_14.wHour);
    _DAT_100413f4 = CONCAT22(local_14.wMilliseconds,local_14.wSecond);
  }
  DAT_100413e0 = local_dc;
  iVar2 = FUN_1000fa30((uint)local_28.wYear,(uint)local_28.wMonth,(uint)local_28.wDay,
                       (uint)local_28.wHour,(uint)local_28.wMinute,(uint)local_28.wSecond,local_dc);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return iVar2;
}



// Function: FUN_1000b050 @ 0x1000b050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000b050(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  
  if (param_2 == 1) {
    DAT_10041488 = GetVersion();
    iVar1 = FUN_10010770(1);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_10041494 = DAT_10041488 >> 8 & 0xff;
    DAT_10041490 = DAT_10041488 & 0xff;
    _DAT_1004148c = DAT_10041490 * 0x100 + _DAT_10041494;
    DAT_10041488 = DAT_10041488 >> 0x10;
    iVar1 = FUN_1000f440();
    if (iVar1 == 0) {
      FUN_100107c0();
      return 0;
    }
    DAT_10042f34 = GetCommandLineA();
    DAT_100413fc = FUN_10010550();
    FUN_1000fb20();
    FUN_10010040(extraout_ECX);
    FUN_1000fef0(extraout_ECX_00);
    FUN_1000f830();
    DAT_100413f8 = DAT_100413f8 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_100413f8 < 1) {
      return 0;
    }
    DAT_100413f8 = DAT_100413f8 + -1;
    if (DAT_100414c0 == 0) {
      FUN_1000f8b0();
    }
    uVar2 = FUN_1000dd30(-1);
    if ((uVar2 & 0x20) != 0) {
      FUN_1000e640();
    }
    __ioterm();
    FUN_1000f4d0();
    FUN_100107c0();
  }
  else if (param_2 == 3) {
    FUN_1000f5c0((LPVOID)0x0);
  }
  return 1;
}



// Function: entry @ 0x1000b190

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 1;
  if ((param_2 == 0) && (DAT_100413f8 == 0)) {
    local_8 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_10042f44 != (code *)0x0) {
        local_8 = (*DAT_10042f44)(param_1,param_2,param_3);
      }
      if (local_8 != 0) {
        local_8 = FUN_1000b050(param_1,param_2);
      }
      if (local_8 == 0) {
        return 0;
      }
    }
    local_8 = thunk_FUN_10003780(param_1,param_2);
    if ((param_2 == 1) && (local_8 == 0)) {
      FUN_1000b050(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = FUN_1000b050(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 0;
      }
      if ((local_8 != 0) && (DAT_10042f44 != (code *)0x0)) {
        local_8 = (*DAT_10042f44)(param_1,param_2,param_3);
      }
    }
  }
  return local_8;
}



// Function: __amsg_exit @ 0x1000b290

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10041404 == 1) || ((DAT_10041404 == 0 && (DAT_10041408 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_100108b0(param_1);
  (*(code *)PTR___exit_1003edbc)(0xff);
  return;
}



// Function: FUN_1000b2d0 @ 0x1000b2d0

void FUN_1000b2d0(void)

{
  DebugBreak();
  return;
}



// Function: FUN_1000b2e0 @ 0x1000b2e0

undefined4 __cdecl FUN_1000b2e0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 0xffffffff) {
    uVar1 = *(undefined4 *)(&DAT_1003edc4 + param_1 * 4);
  }
  else if ((param_2 & 0xfffffff8) == 0) {
    uVar1 = *(undefined4 *)(&DAT_1003edc4 + param_1 * 4);
    *(uint *)(&DAT_1003edc4 + param_1 * 4) = param_2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: __CrtSetReportFile @ 0x1000b340

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
    uVar1 = *(undefined4 *)(&DAT_1003edd0 + param_1 * 4);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_1003edd0 + param_1 * 4);
    if (param_2 == -4) {
      pvVar2 = GetStdHandle(0xfffffff5);
      *(HANDLE *)(&DAT_1003edd0 + param_1 * 4) = pvVar2;
    }
    else if (param_2 == -5) {
      pvVar2 = GetStdHandle(0xfffffff4);
      *(HANDLE *)(&DAT_1003edd0 + param_1 * 4) = pvVar2;
    }
    else {
      *(int *)(&DAT_1003edd0 + param_1 * 4) = param_2;
    }
  }
  return uVar1;
}



// Function: FUN_1000b3c0 @ 0x1000b3c0

undefined4 __cdecl FUN_1000b3c0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10042f28;
  DAT_10042f28 = param_1;
  return uVar1;
}



// Function: FUN_1000b3e0 @ 0x1000b3e0

undefined4 __cdecl
FUN_1000b3e0(int param_1,int param_2,int param_3,undefined4 param_4,byte *param_5)

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
  
  FUN_10011120();
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
  else if ((param_1 == 2) && (LVar2 = InterlockedIncrement((LONG *)&DAT_1003edc0), 0 < LVar2)) {
    if ((DAT_1004140c == (FARPROC)0x0) &&
       ((local_3010 = LoadLibraryA("user32.dll"), local_3010 == (HMODULE)0x0 ||
        (DAT_1004140c = GetProcAddress(local_3010,"wsprintfA"), DAT_1004140c == (FARPROC)0x0)))) {
      local_100c = 0xffffffff;
    }
    else {
      (*DAT_1004140c)();
      OutputDebugStringA(&local_200c);
      InterlockedDecrement((LONG *)&DAT_1003edc0);
      FUN_1000b2d0();
      local_100c = 0xffffffff;
    }
  }
  else {
    if ((param_5 != (byte *)0x0) &&
       (iVar3 = FUN_10011020(&local_1004,0xfed,param_5,local_1008), iVar3 < 0)) {
      FUN_10010f30((uint *)&local_1004,(uint *)"_CrtDbgReport: String too long or IO Error");
    }
    if (param_1 == 2) {
      if (param_5 == (byte *)0x0) {
        local_302c = (uint *)0x1003b354;
      }
      else {
        local_302c = (uint *)0x1003b368;
      }
      FUN_10010f30((uint *)&local_300c,local_302c);
    }
    FUN_10010f40((uint *)&local_300c,(uint *)&local_1004);
    if (param_1 == 2) {
      if ((uRam1003edcc & 1) != 0) {
        FUN_10010f40((uint *)&local_300c,(uint *)&DAT_1003b350);
      }
      FUN_10010f40((uint *)&local_300c,(uint *)&DAT_1003b34c);
    }
    if (param_2 == 0) {
      FUN_10010f30((uint *)&local_200c,(uint *)&local_300c);
    }
    else {
      uStackY_24 = 0x1000b5f5;
      iVar3 = FUN_10010e30(&local_200c,0x1000,(byte *)"%s(%d) : %s");
      if (iVar3 < 0) {
        FUN_10010f30((uint *)&local_200c,(uint *)"_CrtDbgReport: String too long or IO Error");
      }
    }
    if ((DAT_10042f28 == (code *)0x0) || (iVar3 = (*DAT_10042f28)(), iVar3 == 0)) {
      if (((*(uint *)(&DAT_1003edc4 + param_1 * 4) & 1) != 0) &&
         (*(int *)(&DAT_1003edd0 + param_1 * 4) != -1)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_3014;
        nNumberOfBytesToWrite = _strlen(&local_200c);
        WriteFile(*(HANDLE *)(&DAT_1003edd0 + param_1 * 4),&local_200c,nNumberOfBytesToWrite,
                  lpNumberOfBytesWritten,lpOverlapped);
      }
      if ((*(uint *)(&DAT_1003edc4 + param_1 * 4) & 2) != 0) {
        OutputDebugStringA(&local_200c);
      }
      if ((*(uint *)(&DAT_1003edc4 + param_1 * 4) & 4) == 0) {
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1003edc0);
        }
        local_100c = 0;
      }
      else {
        if (param_3 != 0) {
          __itoa(param_3,local_3028,10);
        }
        bVar1 = FUN_1000b770();
        local_100c = CONCAT31(extraout_var,bVar1);
        if (param_1 == 2) {
          InterlockedDecrement((LONG *)&DAT_1003edc0);
        }
      }
    }
    else if (param_1 == 2) {
      InterlockedDecrement((LONG *)&DAT_1003edc0);
    }
  }
  return local_100c;
}



// Function: FUN_1000b770 @ 0x1000b770

bool FUN_1000b770(void)

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
  
  FUN_10011120();
  if ((in_stack_00000014 == 0) &&
     (iVar1 = FUN_1000b3e0(2,0x1003b52c,0x1da,0,(byte *)"szUserMessage != NULL"), iVar1 == 1)) {
    FUN_1000b2d0();
  }
  DVar2 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_10c,0x104);
  if (DVar2 == 0) {
    FUN_10010f30(local_10c,(uint *)"<program name unknown>");
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
  uStackY_44 = 0x1000ba12;
  iVar1 = FUN_10010e30((undefined1 *)local_1110,0x1000,
                       (byte *)
                       "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)"
                      );
  if (iVar1 < 0) {
    FUN_10010f30(local_1110,(uint *)"_CrtDbgReport: String too long or IO Error");
  }
  local_110 = FUN_100116e0(local_1110,"Microsoft Visual C++ Debug Library",0x12012);
  if (local_110 == 3) {
    FUN_10011420(0x16);
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  return local_110 == 4;
}



// Function: FUN_1000bc7c @ 0x1000bc7c

undefined4 FUN_1000bc7c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}



// Function: __fload_withFB @ 0x1000bc95

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



// Function: FUN_1000bcd8 @ 0x1000bcd8

uint __cdecl FUN_1000bcd8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}



// Function: __math_exit @ 0x1000bcfb

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



// Function: FUN_1000bde0 @ 0x1000bde0

float10 __fastcall
FUN_1000bde0(char *param_1,uint param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,
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
  FUN_100118a0(param_2,&local_24,&param_3);
  return (float10)local_24.retval;
}



// Function: __startOneArgErrorHandling @ 0x1000bdf7

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
  FUN_100118a0(param_2,&local_24,&param_3);
  return (float10)local_24.retval;
}



// Function: __setdefaultprecision @ 0x1000be40

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2003 Debug */

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}



// Function: FUN_1000be60 @ 0x1000be60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1000be60(void)

{
  uint local_20;
  
  local_20 = (uint)(_DAT_1003b598 < 0.0);
  return local_20;
}



// Function: __ms_p5_mp_test_fdiv @ 0x1000bec0

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
  FUN_1000be60();
  return;
}



// Function: FUN_1000bf10 @ 0x1000bf10

void __cdecl FUN_1000bf10(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint local_10;
  char local_c;
  
  uVar2 = FUN_10011f90((int)*param_1);
  if (uVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1003efe0 < 2) {
        local_10 = *(ushort *)(PTR_DAT_1003efec + *param_1 * 2) & 4;
      }
      else {
        local_10 = FUN_10011ec0((int)*param_1,4);
      }
    } while (local_10 != 0);
  }
  local_c = *param_1;
  *param_1 = DAT_1003efe4;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = local_c;
    local_c = cVar1;
  } while (*param_1 != '\0');
  return;
}



// Function: __cropzeros @ 0x1000bfc0

/* Library Function - Single Match
    __cropzeros
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __cropzeros(char *_Buf)

{
  char *pcVar1;
  char *local_8;
  
  for (; (*_Buf != '\0' && (*_Buf != DAT_1003efe4)); _Buf = _Buf + 1) {
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
    if (*_Buf == DAT_1003efe4) {
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



// Function: __positive @ 0x1000c0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __positive
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl __positive(double *arg)

{
  uint local_8;
  
  local_8 = (uint)(_DAT_1003b5c8 <= *arg);
  return local_8;
}



// Function: __fassign @ 0x1000c0d0

/* Library Function - Single Match
    __fassign
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FUN_10012900(&local_10,(byte *)number);
    *(uint *)argument = local_10;
  }
  else {
    FUN_10012880(&local_c,(byte *)number);
    *(uint *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}



// Function: FUN_1000c120 @ 0x1000c120

undefined1 * __cdecl FUN_1000c120(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_10012a40(*param_1,param_1[1],local_18,local_30);
  FUN_10012940(param_2 + (uint)(0 < param_3) + (uint)(*local_8 == 0x2d),param_3 + 1,(int)local_8);
  FUN_1000c1a0(param_2,param_3,param_4,local_8,'\0');
  return param_2;
}



// Function: FUN_1000c1a0 @ 0x1000c1a0

undefined1 * __cdecl
FUN_1000c1a0(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

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
    *local_8 = DAT_1003efe4;
  }
  puVar1 = FUN_10010f30((uint *)(local_8 + (uint)(param_5 == '\0') + param_2),(uint *)"e+000");
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



// Function: FUN_1000c310 @ 0x1000c310

char * __cdecl FUN_1000c310(undefined4 *param_1,char *param_2,size_t param_3)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_10012a40(*param_1,param_1[1],local_18,local_30);
  FUN_10012940(param_2 + (*local_8 == 0x2d),param_3 + local_8[1],(int)local_8);
  FUN_1000c380(param_2,param_3,local_8,'\0');
  return param_2;
}



// Function: FUN_1000c380 @ 0x1000c380

char * __cdecl FUN_1000c380(char *param_1,size_t param_2,int *param_3,char param_4)

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
    *local_8 = DAT_1003efe4;
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



// Function: FUN_1000c4c0 @ 0x1000c4c0

void __cdecl FUN_1000c4c0(undefined4 *param_1,char *param_2,size_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  uint local_30 [6];
  int local_18;
  int local_14;
  char *local_8;
  
  FUN_10012a40(*param_1,param_1[1],&local_18,local_30);
  iVar2 = local_14 + -1;
  local_8 = param_2 + (local_18 == 0x2d);
  FUN_10012940(local_8,param_3,(int)&local_18);
  if ((local_14 + -1 < -4) || ((int)param_3 <= local_14 + -1)) {
    FUN_1000c1a0(param_2,param_3,param_4,&local_18,'\x01');
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
    FUN_1000c380(param_2,param_3,&local_18,'\x01');
  }
  return;
}



// Function: __cfltcvt @ 0x1000c5b0

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    pcVar1 = FUN_1000c120((undefined4 *)arg,buffer,format,precision);
  }
  else if (sizeInBytes == 0x66) {
    pcVar1 = FUN_1000c310((undefined4 *)arg,buffer,format);
  }
  else {
    pcVar1 = (char *)FUN_1000c4c0((undefined4 *)arg,buffer,format,precision);
  }
  return (errno_t)pcVar1;
}



// Function: __shift @ 0x1000c610

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio */

void __cdecl __shift(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10012c90((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// Function: FUN_1000c640 @ 0x1000c640

void FUN_1000c640(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003ee7c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003ee6c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003ee5c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003ee3c);
  return;
}



// Function: FUN_1000c680 @ 0x1000c680

void FUN_1000c680(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x30; local_8 = local_8 + 1) {
    if ((((*(int *)(&DAT_1003ee38 + local_8 * 4) != 0) && (local_8 != 0x11)) && (local_8 != 0xd)) &&
       ((local_8 != 9 && (local_8 != 1)))) {
      DeleteCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1003ee38 + local_8 * 4));
      FUN_1000d2b0(*(void **)(&DAT_1003ee38 + local_8 * 4),2);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003ee5c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003ee6c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003ee7c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1003ee3c);
  return;
}



// Function: FUN_1000c720 @ 0x1000c720

void __thiscall FUN_1000c720(void *this,int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  
  if (*(int *)(&DAT_1003ee38 + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_1000c820((void *)0x18,2,0x1003b5d8,0xe1);
    this_00 = extraout_ECX;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
      this_00 = extraout_ECX_00;
    }
    FUN_1000c720(this_00,0x11);
    if (*(int *)(&DAT_1003ee38 + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_1003ee38 + param_1 * 4) = lpCriticalSection;
    }
    else {
      FUN_1000d2b0(lpCriticalSection,2);
    }
    FUN_1000c7c0(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1003ee38 + param_1 * 4));
  return;
}



// Function: FUN_1000c7c0 @ 0x1000c7c0

void __cdecl FUN_1000c7c0(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_1003ee38 + param_1 * 4));
  return;
}



// Function: FUN_1000c7e0 @ 0x1000c7e0

void __cdecl FUN_1000c7e0(LPCSTR param_1)

{
  FatalAppExitA(0,param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}



// Function: FUN_1000c800 @ 0x1000c800

void __cdecl FUN_1000c800(void *param_1)

{
  FUN_1000c870(param_1,(uint)param_1,DAT_100415f8,1,0,0);
  return;
}



// Function: FUN_1000c820 @ 0x1000c820

void __cdecl FUN_1000c820(void *param_1,uint param_2,int param_3,int param_4)

{
  FUN_1000c870(param_1,(uint)param_1,DAT_100415f8,param_2,param_3,param_4);
  return;
}



// Function: FUN_1000c850 @ 0x1000c850

void __cdecl FUN_1000c850(void *param_1,int param_2)

{
  FUN_1000c870(param_1,(uint)param_1,param_2,1,0,0);
  return;
}



// Function: FUN_1000c870 @ 0x1000c870

int * __thiscall
FUN_1000c870(void *this,uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  void *extraout_ECX;
  
  while( true ) {
    FUN_1000c720(this,9);
    piVar1 = FUN_1000c8f0(param_1,param_3,param_4,param_5);
    FUN_1000c7c0(9);
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



// Function: FUN_1000c8d0 @ 0x1000c8d0

void __cdecl FUN_1000c8d0(uint param_1)

{
  FUN_1000c8f0(param_1,1,0,0);
  return;
}



// Function: FUN_1000c8f0 @ 0x1000c8f0

int * __cdecl FUN_1000c8f0(uint param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  bVar2 = false;
  if ((((DAT_1003eef8 & 4) != 0) && (iVar4 = FUN_1000d9c0(), iVar4 == 0)) &&
     (iVar4 = FUN_1000b3e0(2,0x1003b6bc,0x141,0,(byte *)"_CrtCheckMemory()"), iVar4 == 1)) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar4 = DAT_1003eefc;
  if (DAT_1003eefc == DAT_1003ef00) {
    pcVar1 = (code *)swi(3);
    piVar5 = (int *)(*pcVar1)();
    return piVar5;
  }
  iVar6 = (*(code *)PTR_FUN_1003f230)(1,0,param_1,param_2,DAT_1003eefc,param_3,param_4);
  if (iVar6 == 0) {
    if (param_3 == 0) {
      iVar4 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    else {
      iVar4 = FUN_1000b3e0(0,0,0,0,(byte *)"Client hook allocation failure at file %hs line %d.\n");
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
    }
    piVar5 = (int *)0x0;
  }
  else {
    if (((param_2 & 0xffff) != 2) && ((DAT_1003eef8 & 1) == 0)) {
      bVar2 = true;
    }
    if ((param_1 < 0xffffffe1) && (param_1 + 0x24 < 0xffffffe1)) {
      if (((((param_2 & 0xffff) != 4) && (param_2 != 1)) && ((param_2 & 0xffff) != 2)) &&
         ((param_2 != 3 && (iVar6 = FUN_1000b3e0(1,0,0,0,&DAT_1003b65c), iVar6 == 1)))) {
        pcVar1 = (code *)swi(3);
        piVar5 = (int *)(*pcVar1)();
        return piVar5;
      }
      piVar5 = FUN_100130d0((void *)(param_1 + 0x24),param_1 + 0x24);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        DAT_1003eefc = DAT_1003eefc + 1;
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
          DAT_10041474 = DAT_10041474 + param_1;
          DAT_1004147c = DAT_1004147c + param_1;
          if (DAT_10041480 < DAT_1004147c) {
            DAT_10041480 = DAT_1004147c;
          }
          piVar3 = piVar5;
          if (DAT_10041478 != (int *)0x0) {
            DAT_10041478[1] = (int)piVar5;
            piVar3 = DAT_10041470;
          }
          DAT_10041470 = piVar3;
          *piVar5 = (int)DAT_10041478;
          piVar5[1] = 0;
          piVar5[2] = param_3;
          piVar5[3] = param_4;
          piVar5[4] = param_1;
          piVar5[5] = param_2;
          piVar5[6] = iVar4;
          DAT_10041478 = piVar5;
        }
        _memset(piVar5 + 7,(uint)DAT_1003ef04,4);
        _memset((void *)((int)piVar5 + param_1 + 0x20),(uint)DAT_1003ef04,4);
        _memset(piVar5 + 8,(uint)DAT_1003ef06,param_1);
        piVar5 = piVar5 + 8;
      }
    }
    else {
      iVar4 = FUN_1000b3e0(1,0,0,0,(byte *)"Invalid allocation size: %u bytes.\n");
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



// Function: FUN_1000cc10 @ 0x1000cc10

void __cdecl FUN_1000cc10(int param_1,int param_2)

{
  __calloc_dbg(param_1,param_2,1,0,0);
  return;
}



// Function: __calloc_dbg @ 0x1000cc30

/* Library Function - Single Match
    __calloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined1 * __cdecl __calloc_dbg(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 *local_10;
  
  puVar1 = (undefined1 *)FUN_1000c820((void *)(param_2 * param_1),param_3,param_4,param_5);
  if (puVar1 != (undefined1 *)0x0) {
    for (local_10 = puVar1; local_10 < puVar1 + param_2 * param_1; local_10 = local_10 + 1) {
      *local_10 = 0;
    }
  }
  return puVar1;
}



// Function: FUN_1000cc90 @ 0x1000cc90

void __cdecl FUN_1000cc90(void *param_1,void *param_2)

{
  FUN_1000ccb0(param_1,param_1,param_2,1,0,0);
  return;
}



// Function: FUN_1000ccb0 @ 0x1000ccb0

int * __thiscall
FUN_1000ccb0(void *this,void *param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_1000c720(this,9);
  piVar1 = FUN_1000ccf0(param_1,param_2,param_3,param_4,param_5,1);
  FUN_1000c7c0(9);
  return piVar1;
}



// Function: FUN_1000ccf0 @ 0x1000ccf0

int * __cdecl
FUN_1000ccf0(void *param_1,void *param_2,uint param_3,int param_4,int param_5,int param_6)

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
    piVar2 = (int *)FUN_1000c820(param_2,param_3,param_4,param_5);
  }
  else if ((param_6 == 0) || (param_2 != (void *)0x0)) {
    if (((DAT_1003eef8 & 4) != 0) &&
       ((iVar3 = FUN_1000d9c0(), iVar3 == 0 &&
        (iVar3 = FUN_1000b3e0(2,0x1003b6bc,0x239,0,(byte *)"_CrtCheckMemory()"), iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar3 = DAT_1003eefc;
    if (DAT_1003eefc == DAT_1003ef00) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    iVar5 = (*(code *)PTR_FUN_1003f230)(2,param_1,param_2,param_3,DAT_1003eefc,param_4,param_5);
    if (iVar5 == 0) {
      if (param_4 == 0) {
        iVar3 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        iVar3 = FUN_1000b3e0(0,0,0,0,(byte *)
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
         (iVar5 = FUN_1000b3e0(1,0,0,0,&DAT_1003b65c), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      BVar6 = FUN_1000de20((int)param_1);
      if ((BVar6 == 0) &&
         (iVar5 = FUN_1000b3e0(2,0x1003b6bc,0x261,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar4 = (int *)((int)param_1 + -0x20);
      bVar7 = *(int *)((int)param_1 + -0xc) == 3;
      if (bVar7) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar5 = FUN_1000b3e0(2,0x1003b6bc,0x26b,0,
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
           (iVar5 = FUN_1000b3e0(2,0x1003b6bc,0x272,0,
                                 (byte *)"_BLOCK_TYPE(pOldBlock->nBlockUse)==_BLOCK_TYPE(nBlockUse)"
                                ), this = extraout_ECX, iVar5 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      if (param_6 == 0) {
        local_10 = FUN_10013150(this,piVar4,(int)param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_10 = FUN_10013200(piVar4,piVar4,(void *)((int)param_2 + 0x24));
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      DAT_1003eefc = DAT_1003eefc + 1;
      if (!bVar7) {
        DAT_10041474 = (DAT_10041474 - local_10[4]) + (int)param_2;
        DAT_1004147c = (DAT_1004147c - local_10[4]) + (int)param_2;
        if (DAT_10041480 < DAT_1004147c) {
          DAT_10041480 = DAT_1004147c;
        }
      }
      piVar2 = local_10 + 8;
      if ((void *)local_10[4] < param_2) {
        _memset((void *)((int)piVar2 + local_10[4]),(uint)DAT_1003ef06,(int)param_2 - local_10[4]);
      }
      _memset((void *)((int)piVar2 + (int)param_2),(uint)DAT_1003ef04,4);
      if (!bVar7) {
        local_10[2] = param_4;
        local_10[3] = param_5;
        local_10[6] = iVar3;
      }
      local_10[4] = (int)param_2;
      if (((param_6 == 0) && (local_10 != piVar4)) &&
         (iVar3 = FUN_1000b3e0(2,0x1003b6bc,0x2a8,0,
                               (byte *)"fRealloc || (!fRealloc && pNewBlock == pOldBlock)"),
         iVar3 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      if ((local_10 != piVar4) && (!bVar7)) {
        if (*local_10 == 0) {
          if ((DAT_10041470 != piVar4) &&
             (iVar3 = FUN_1000b3e0(2,0x1003b6bc,0x2b7,0,(byte *)"_pLastBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10041470 = (int *)local_10[1];
        }
        else {
          *(int *)(*local_10 + 4) = local_10[1];
        }
        if (local_10[1] == 0) {
          if ((DAT_10041478 != piVar4) &&
             (iVar3 = FUN_1000b3e0(2,0x1003b6bc,0x2c2,0,(byte *)"_pFirstBlock == pOldBlock"),
             iVar3 == 1)) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_10041478 = (int *)*local_10;
        }
        else {
          *(int *)local_10[1] = *local_10;
        }
        if (DAT_10041478 == (int *)0x0) {
          DAT_10041470 = local_10;
        }
        else {
          DAT_10041478[1] = (int)local_10;
        }
        *local_10 = (int)DAT_10041478;
        local_10[1] = 0;
        DAT_10041478 = local_10;
      }
    }
    else {
      iVar3 = FUN_1000b3e0(1,0,0,0,(byte *)"Allocation too large or negative: %u bytes.\n");
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    FUN_1000d2b0(param_1,param_3);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



// Function: FUN_1000d210 @ 0x1000d210

void __cdecl FUN_1000d210(void *param_1,void *param_2)

{
  FUN_1000d230(param_1,param_1,param_2,1,0,0);
  return;
}



// Function: FUN_1000d230 @ 0x1000d230

int * __thiscall
FUN_1000d230(void *this,void *param_1,void *param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  
  FUN_1000c720(this,9);
  piVar1 = FUN_1000ccf0(param_1,param_2,param_3,param_4,param_5,0);
  FUN_1000c7c0(9);
  return piVar1;
}



// Function: FUN_1000d270 @ 0x1000d270

void __cdecl FUN_1000d270(void *param_1)

{
  FUN_1000d2b0(param_1,1);
  return;
}



// Function: FUN_1000d290 @ 0x1000d290

void __cdecl FUN_1000d290(void *param_1)

{
  FUN_1000d2e0(param_1,1);
  return;
}



// Function: FUN_1000d2b0 @ 0x1000d2b0

void __cdecl FUN_1000d2b0(void *param_1,int param_2)

{
  void *in_ECX;
  
  FUN_1000c720(in_ECX,9);
  FUN_1000d2e0(param_1,param_2);
  FUN_1000c7c0(9);
  return;
}



// Function: FUN_1000d2e0 @ 0x1000d2e0

void __cdecl FUN_1000d2e0(void *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int *_Dst;
  void *this;
  void *this_00;
  
  if ((((DAT_1003eef8 & 4) != 0) && (iVar2 = FUN_1000d9c0(), iVar2 == 0)) &&
     (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x3e1,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (void *)0x0) {
    iVar2 = (*(code *)PTR_FUN_1003f230)(3,param_1,0,param_2,0,0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      BVar3 = FUN_1000de20((int)param_1);
      if ((BVar3 == 0) &&
         (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x3f3,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
         iVar2 == 1)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = (int *)((int)param_1 + -0x20);
      if ((((*(uint *)((int)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((int)param_1 + -0xc) != 1))
         && (((*(uint *)((int)param_1 + -0xc) & 0xffff) != 2 &&
             ((*(int *)((int)param_1 + -0xc) != 3 &&
              (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x3f9,0,
                                    (byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"), iVar2 == 1)))
             ))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((DAT_1003eef8 & 4) == 0) {
        iVar2 = FUN_1000d930((char *)((int)param_1 + -4),DAT_1003ef04,4);
        if ((iVar2 == 0) &&
           (iVar2 = FUN_1000b3e0(1,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar2 = FUN_1000d930((char *)((int)param_1 + *(int *)((int)param_1 + -0x10)),DAT_1003ef04,4)
        ;
        if ((iVar2 == 0) &&
           (iVar2 = FUN_1000b3e0(1,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)((int)param_1 + -0xc) == 3) {
        if (((*(int *)((int)param_1 + -0x14) != -0x1234544) || (*(int *)((int)param_1 + -8) != 0))
           && (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x40e,0,
                                    (byte *)
                                    "pHead->nLine == IGNORE_LINE && pHead->lRequest == IGNORE_REQ"),
              iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        _memset(_Dst,(uint)DAT_1003ef05,*(int *)((int)param_1 + -0x10) + 0x24);
        FUN_100133f0(this,_Dst);
      }
      else {
        if ((*(int *)((int)param_1 + -0xc) == 2) && (param_2 == 1)) {
          param_2 = 2;
        }
        if ((*(int *)((int)param_1 + -0xc) != param_2) &&
           (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x41b,0,(byte *)"pHead->nBlockUse == nBlockUse"),
           iVar2 == 1)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        DAT_1004147c = DAT_1004147c - *(int *)((int)param_1 + -0x10);
        if ((DAT_1003eef8 & 2) == 0) {
          if (*_Dst == 0) {
            if ((DAT_10041470 != _Dst) &&
               (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x42a,0,(byte *)"_pLastBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10041470 = *(int **)((int)param_1 + -0x1c);
          }
          else {
            *(undefined4 *)(*_Dst + 4) = *(undefined4 *)((int)param_1 + -0x1c);
          }
          if (*(int *)((int)param_1 + -0x1c) == 0) {
            if ((DAT_10041478 != _Dst) &&
               (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x434,0,(byte *)"_pFirstBlock == pHead"),
               iVar2 == 1)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            DAT_10041478 = (int *)*_Dst;
          }
          else {
            **(int **)((int)param_1 + -0x1c) = *_Dst;
          }
          _memset(_Dst,(uint)DAT_1003ef05,*(int *)((int)param_1 + -0x10) + 0x24);
          FUN_100133f0(this_00,_Dst);
        }
        else {
          *(undefined4 *)((int)param_1 + -0xc) = 0;
          _memset(param_1,(uint)DAT_1003ef05,*(size_t *)((int)param_1 + -0x10));
        }
      }
    }
  }
  return;
}



// Function: FUN_1000d6d0 @ 0x1000d6d0

void __thiscall FUN_1000d6d0(void *this,int param_1)

{
  FUN_1000d6f0(this,param_1,1);
  return;
}



// Function: FUN_1000d6f0 @ 0x1000d6f0

undefined4 __thiscall FUN_1000d6f0(void *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  
  if ((DAT_1003eef8 & 4) != 0) {
    iVar2 = FUN_1000d9c0();
    if ((iVar2 == 0) &&
       (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x47c,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    this = (void *)0x0;
  }
  FUN_1000c720(this,9);
  BVar4 = FUN_1000de20(param_1);
  if ((BVar4 == 0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x485,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
      ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
     ((*(int *)(param_1 + -0xc) != 3 &&
      (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x48b,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
      iVar2 == 1)))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((*(int *)(param_1 + -0xc) == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if (((*(int *)(param_1 + -0xc) != 3) && (*(int *)(param_1 + -0xc) != param_2)) &&
     (iVar2 = FUN_1000b3e0(2,0x1003b6bc,0x492,0,(byte *)"pHead->nBlockUse == nBlockUse"), iVar2 == 1
     )) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + -0x10);
  FUN_1000c7c0(9);
  return uVar3;
}



// Function: FUN_1000d850 @ 0x1000d850

undefined4 __cdecl FUN_1000d850(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1003ef00;
  DAT_1003ef00 = param_1;
  return uVar1;
}



// Function: FUN_1000d870 @ 0x1000d870

void __thiscall FUN_1000d870(void *this,int param_1,undefined4 param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  FUN_1000c720(this,9);
  BVar2 = FUN_1000de20(param_1);
  if (BVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)(param_1 + -0xc) != 3 &&
        (iVar3 = FUN_1000b3e0(2,0x1003b6bc,0x4d3,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)")
        , iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  FUN_1000c7c0(9);
  return;
}



// Function: FUN_1000d910 @ 0x1000d910

undefined * __cdecl FUN_1000d910(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_1003f230;
  PTR_FUN_1003f230 = param_1;
  return puVar1;
}



// Function: FUN_1000d930 @ 0x1000d930

undefined4 __cdecl FUN_1000d930(char *param_1,char param_2,int param_3)

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
    iVar4 = FUN_1000b3e0(0,0,0,0,(byte *)
                                 "memory check error at 0x%08X = 0x%02X, should be 0x%02X.\n");
    if (iVar4 == 1) break;
    local_8 = 0;
  }
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}



// Function: FUN_1000d9c0 @ 0x1000d9c0

undefined4 FUN_1000d9c0(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  void *in_ECX;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_8 = 1;
  if ((DAT_1003eef8 & 1) == 0) {
    local_8 = 1;
  }
  else {
    FUN_1000c720(in_ECX,9);
    iVar3 = FUN_10013460();
    if ((iVar3 == -1) || (iVar3 == -2)) {
      for (local_c = DAT_10041478; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
        bVar2 = true;
        iVar3 = FUN_1000d930((char *)(local_c + 7),DAT_1003ef04,4);
        if (iVar3 == 0) {
          iVar3 = FUN_1000b3e0(0,0,0,0,(byte *)"DAMAGE: before %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        iVar3 = FUN_1000d930((char *)((int)local_c + local_c[4] + 0x20),DAT_1003ef04,4);
        if (iVar3 == 0) {
          iVar3 = FUN_1000b3e0(0,0,0,0,(byte *)"DAMAGE: after %hs block (#%d) at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if ((local_c[5] == 0) &&
           (iVar3 = FUN_1000d930((char *)(local_c + 8),DAT_1003ef05,local_c[4]), iVar3 == 0)) {
          iVar3 = FUN_1000b3e0(0,0,0,0,(byte *)"DAMAGE: on top of Free block at 0x%08X.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          bVar2 = false;
        }
        if (!bVar2) {
          if ((local_c[2] != 0) &&
             (iVar3 = FUN_1000b3e0(0,0,0,0,(byte *)"%hs allocated at file %hs(%d).\n"), iVar3 == 1))
          {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          iVar3 = FUN_1000b3e0(0,0,0,0,(byte *)"%hs located at 0x%08X is %u bytes long.\n");
          if (iVar3 == 1) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return uVar4;
          }
          local_8 = 0;
        }
      }
      FUN_1000c7c0(9);
    }
    else {
      switch(iVar3) {
      case -6:
        iVar3 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -5:
        iVar3 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -4:
        iVar3 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      case -3:
        iVar3 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        break;
      default:
        iVar3 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      FUN_1000c7c0(9);
      local_8 = 0;
    }
  }
  return local_8;
}



// Function: FUN_1000dd30 @ 0x1000dd30

int __cdecl FUN_1000dd30(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1003eef8;
  if (param_1 != -1) {
    DAT_1003eef8 = param_1;
  }
  return iVar1;
}



// Function: FUN_1000dd60 @ 0x1000dd60

void __thiscall FUN_1000dd60(void *this,undefined *param_1,undefined4 param_2)

{
  undefined4 *local_8;
  
  if ((DAT_1003eef8 & 1) != 0) {
    FUN_1000c720(this,9);
    for (local_8 = DAT_10041478; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
      if ((local_8[5] & 0xffff) == 4) {
        (*(code *)param_1)(local_8 + 8,param_2);
      }
    }
    FUN_1000c7c0(9);
  }
  return;
}



// Function: FID_conflict:AtlIsValidAddress @ 0x1000ddd0

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



// Function: FUN_1000de20 @ 0x1000de20

BOOL __cdecl FUN_1000de20(int param_1)

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
      uVar3 = FUN_10013580(param_1 + -0x20);
      if (uVar3 == 0) {
        if ((DAT_10041488 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_10042dac,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = FUN_100135e0(uVar3,param_1 + -0x20);
      }
    }
  }
  return BVar1;
}



// Function: FUN_1000deb0 @ 0x1000deb0

undefined4 __cdecl
FUN_1000deb0(void *param_1,UINT_PTR param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  BOOL BVar1;
  int iVar2;
  void *this;
  
  BVar1 = FUN_1000de20((int)param_1);
  if (BVar1 != 0) {
    FUN_1000c720(this,9);
    if ((((((*(uint *)((int)param_1 + -0xc) & 0xffff) == 4) || (*(int *)((int)param_1 + -0xc) == 1))
         || ((*(uint *)((int)param_1 + -0xc) & 0xffff) == 2)) ||
        (*(int *)((int)param_1 + -0xc) == 3)) &&
       (((iVar2 = FID_conflict_AtlIsValidAddress(param_1,param_2,1), iVar2 != 0 &&
         (*(UINT_PTR *)((int)param_1 + -0x10) == param_2)) &&
        (*(int *)((int)param_1 + -8) <= DAT_1003eefc)))) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)param_1 + -8);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)((int)param_1 + -0x18);
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = *(undefined4 *)((int)param_1 + -0x14);
      }
      FUN_1000c7c0(9);
      return 1;
    }
    FUN_1000c7c0(9);
  }
  return 0;
}



// Function: FUN_1000dfa0 @ 0x1000dfa0

undefined4 __cdecl FUN_1000dfa0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10042f1c;
  DAT_10042f1c = param_1;
  return uVar1;
}



// Function: FUN_1000dfc0 @ 0x1000dfc0

void __cdecl FUN_1000dfc0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  void *in_ECX;
  undefined4 *local_c;
  int local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FUN_1000c720(in_ECX,9);
    *param_1 = DAT_10041478;
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      param_1[local_8 + 6] = 0;
      param_1[local_8 + 1] = 0;
    }
    for (local_c = DAT_10041478; local_c != (undefined4 *)0x0; local_c = (undefined4 *)*local_c) {
      if ((local_c[5] & 0xffff) < 5) {
        param_1[(local_c[5] & 0xffff) + 1] = param_1[(local_c[5] & 0xffff) + 1] + 1;
        param_1[(local_c[5] & 0xffff) + 6] = param_1[(local_c[5] & 0xffff) + 6] + local_c[4];
      }
      else {
        iVar2 = FUN_1000b3e0(0,0,0,0,(byte *)"Bad memory block found at 0x%08X.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    param_1[0xb] = DAT_10041480;
    param_1[0xc] = DAT_10041474;
    FUN_1000c7c0(9);
  }
  return;
}



// Function: FUN_1000e130 @ 0x1000e130

undefined4 __cdecl FUN_1000e130(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    iVar2 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
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
         ((local_8 != 0 && ((local_8 != 2 || ((DAT_1003eef8 & 0x10) != 0)))))) {
        local_c = 1;
      }
    }
    param_1[0xb] = *(int *)(param_3 + 0x2c) - *(int *)(param_2 + 0x2c);
    param_1[0xc] = *(int *)(param_3 + 0x30) - *(int *)(param_2 + 0x30);
    *param_1 = 0;
  }
  return local_c;
}



// Function: FUN_1000e260 @ 0x1000e260

void __cdecl FUN_1000e260(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  void *in_ECX;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  FUN_1000c720(in_ECX,9);
  iVar2 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
  if (iVar2 == 1) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_1;
  }
  local_8 = DAT_10041478;
  do {
    if ((local_8 == (undefined4 *)0x0) || (local_8 == local_c)) {
      FUN_1000c7c0(9);
      iVar2 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      return;
    }
    if ((((local_8[5] & 0xffff) != 3) && ((local_8[5] & 0xffff) != 0)) &&
       (((local_8[5] & 0xffff) != 2 || ((DAT_1003eef8 & 0x10) != 0)))) {
      if (local_8[2] != 0) {
        iVar2 = FID_conflict_AtlIsValidAddress((void *)local_8[2],1,0);
        if (iVar2 == 0) {
          iVar2 = FUN_1000b3e0(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          iVar2 = FUN_1000b3e0(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar2 == 1) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      iVar2 = FUN_1000b3e0(0,0,0,0,(byte *)"{%ld} ");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_8[5] & 0xffff) == 4) {
        iVar2 = FUN_1000b3e0(0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n")
        ;
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_10042f1c == (code *)0x0) {
          FUN_1000e520((int)local_8);
        }
        else {
          (*DAT_10042f1c)(local_8 + 8,local_8[4]);
        }
      }
      else if (local_8[5] == 1) {
        iVar2 = FUN_1000b3e0(0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_1000e520((int)local_8);
      }
      else if ((local_8[5] & 0xffff) == 2) {
        iVar2 = FUN_1000b3e0(0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar2 == 1) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_1000e520((int)local_8);
      }
    }
    local_8 = (undefined4 *)*local_8;
  } while( true );
}



// Function: FUN_1000e520 @ 0x1000e520

void __cdecl FUN_1000e520(int param_1)

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
    if (DAT_1003efe0 < 2) {
      local_5c = *(ushort *)(PTR_DAT_1003efec + (uint)bVar1 * 2) & 0x157;
    }
    else {
      local_5c = FUN_10011ec0((uint)bVar1,0x157);
    }
    if (local_5c == 0) {
      bVar1 = 0x20;
    }
    local_4c[local_50] = bVar1;
    FUN_10015190(local_38 + local_50 * 3,(byte *)"%.2X ");
    local_50 = local_50 + 1;
  }
  local_4c[local_50] = 0;
  iVar3 = FUN_1000b3e0(0,0,0,0,(byte *)" Data: <%s> %s\n");
  if (iVar3 == 1) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}



// Function: FUN_1000e640 @ 0x1000e640

undefined4 FUN_1000e640(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  FUN_1000dfc0(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_1003eef8 & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_1000b3e0(0,0,0,0,&DAT_1003b65c);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_1000e260((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_1000e6c0 @ 0x1000e6c0

void __cdecl FUN_1000e6c0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  
  if (param_1 != 0) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      iVar2 = FUN_1000b3e0(0,0,0,0,(byte *)"%ld bytes in %ld %hs Blocks.\n");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = FUN_1000b3e0(0,0,0,0,(byte *)"Largest number used: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = FUN_1000b3e0(0,0,0,0,(byte *)"Total allocations: %ld bytes.\n");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



// Function: FUN_1000e790 @ 0x1000e790

undefined4 __cdecl
FUN_1000e790(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,char param_8)

{
  undefined4 uVar1;
  
  if (param_5->magicNumber_and_bbtFlags == 0x19930520) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1000f7a0();
  }
  if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
    if (param_5->nTryBlocks != 0) {
      if (((*(int *)param_1 == -0x1f928c9d) && (0x19930520 < *(uint *)(param_1 + 0x14))) &&
         (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)) {
        uVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar1);
        return uVar1;
      }
      FUN_1000e880(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5->maxState != 0) && (param_6 == 0)) {
    FUN_1000ed00((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// Function: FUN_1000e880 @ 0x1000e880

void __cdecl
FUN_1000e880(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
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
    FUN_1000f7a0();
  }
  if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
      (*(int *)(param_1 + 0x14) == 0x19930520)) && (*(int *)(param_1 + 0x1c) == 0)) {
    pDVar2 = FUN_1000f520();
    if (pDVar2[0x1b] == 0) {
      return;
    }
    pDVar2 = FUN_1000f520();
    param_1 = (EHExceptionRecord *)pDVar2[0x1b];
    pDVar2 = FUN_1000f520();
    param_3 = (_CONTEXT *)pDVar2[0x1c];
    local_c = '\x01';
    bVar1 = FUN_10015330(param_1,1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_1000f7a0();
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
       ((*(int *)(param_1 + 0x14) == 0x19930520 && (*(int *)(param_1 + 0x1c) == 0)))) {
      FUN_1000f7a0();
    }
  }
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     (*(int *)(param_1 + 0x14) == 0x19930520)) {
    local_14 = (_s_TryBlockMapEntry *)FUN_1000abc0((int)param_5,param_7,local_8,&local_18,&local_10)
    ;
    for (; local_18 < local_10; local_18 = local_18 + 1) {
      if ((local_14->tryLow <= local_8) && (local_8 <= local_14->tryHigh)) {
        local_20 = local_14->pHandlerArray;
        for (local_28 = local_14->nCatches; 0 < local_28; local_28 = local_28 + -1) {
          local_1c = *(undefined4 **)(*(int *)(param_1 + 0x1c) + 0xc);
          for (local_24 = **(int **)(*(int *)(param_1 + 0x1c) + 0xc); local_1c = local_1c + 1,
              0 < local_24; local_24 = local_24 + -1) {
            iVar3 = FUN_1000ec40(&local_20->adjectives,(uint *)*local_1c,*(uint **)(param_1 + 0x1c))
            ;
            if (iVar3 != 0) {
              CatchIt(param_1,param_2,param_3,param_4,param_5,local_20,(_s_CatchableType *)*local_1c
                      ,local_14,param_7,param_8,local_c);
              goto LAB_1000e9c2;
            }
          }
          local_20 = local_20 + 1;
        }
      }
LAB_1000e9c2:
      local_14 = local_14 + 1;
    }
    if (param_6 != '\0') {
      ___DestructExceptionObject((int)param_1);
    }
  }
  else if (param_6 == '\0') {
    FUN_1000eb20(param_1,param_2,param_3,param_4,param_5,local_8,param_7,param_8);
  }
  else {
    FUN_1000f6f0();
  }
  return;
}



// Function: FUN_1000eb20 @ 0x1000eb20

void __cdecl
FUN_1000eb20(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
            _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  DWORD *pDVar1;
  int iVar2;
  uint local_10;
  _s_TryBlockMapEntry *local_c;
  uint local_8;
  
  pDVar1 = FUN_1000f520();
  if ((pDVar1[0x1a] == 0) ||
     (iVar2 = FUN_1000aa60((undefined4 *)param_1,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 == 0)) {
    local_c = (_s_TryBlockMapEntry *)FUN_1000abc0((int)param_5,param_7,param_6,&local_10,&local_8);
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



// Function: FUN_1000ec40 @ 0x1000ec40

undefined4 __cdecl FUN_1000ec40(uint *param_1,uint *param_2,uint *param_3)

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



// Function: FUN_1000ed00 @ 0x1000ed00

void __cdecl FUN_1000ed00(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1003bce8;
  puStack_10 = &LAB_1001544c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (local_20 = *(int *)(param_1 + 8); local_8 = 0xffffffff, local_20 != param_4;
      local_20 = *(int *)(*(int *)(param_3 + 8) + local_20 * 8)) {
    if ((local_20 < 0) || (*(int *)(param_3 + 4) <= local_20)) {
      FUN_1000f7a0();
    }
    local_8 = 0;
    if (*(int *)(*(int *)(param_3 + 8) + 4 + local_20 * 8) != 0) {
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + local_20 * 8),param_1,0x103)
      ;
    }
  }
  if (local_20 != param_4) {
    FUN_1000f7a0();
  }
  *(int *)(param_1 + 8) = local_20;
  ExceptionList = local_14;
  return;
}



// Function: ArrayUnwindFilter @ 0x1000ee00

/* Library Function - Single Match
    int __cdecl ArrayUnwindFilter(struct _EXCEPTION_POINTERS *)
   
   Library: Visual Studio */

int __cdecl ArrayUnwindFilter(_EXCEPTION_POINTERS *param_1)

{
  if (param_1->ExceptionRecord->ExceptionCode == 0xe06d7363) {
    FUN_1000f6f0();
  }
  return 0;
}



// Function: CatchIt @ 0x1000ee30

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
    FUN_1000f090((int)param_1,(int)param_2,&param_6->adjectives,(uint *)param_7);
  }
  if (param_10 == (EHRegistrationNode *)0x0) {
    FUN_1000a8e0(param_2,(PEXCEPTION_RECORD)param_1);
  }
  else {
    FUN_1000a8e0(param_10,(PEXCEPTION_RECORD)param_1);
  }
  FUN_1000ed00((int)param_2,param_4,(int)param_5,param_8->tryLow);
  *(__ehstate_t *)(param_2 + 8) = param_8->tryHigh + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_1000eef0((DWORD)param_1,param_2,(DWORD)param_3,param_5,param_6->addressOfHandler,param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000a870(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// Function: FUN_1000eef0 @ 0x1000eef0

void FUN_1000eef0(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1003bcf8;
  puStack_10 = &LAB_1001544c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_1000f520();
  FUN_1000f520();
  pDVar1 = FUN_1000f520();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_1000f520();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  FUN_1000a9b0(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_1000efcd();
  FUN_1000f02b();
  return;
}



// Function: FUN_1000efcd @ 0x1000efcd

void FUN_1000efcd(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_1000f520();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_1000f520();
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



// Function: FUN_1000f02b @ 0x1000f02b

undefined4 FUN_1000f02b(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x2c);
}



// Function: FUN_1000f040 @ 0x1000f040

undefined4 __cdecl FUN_1000f040(int *param_1)

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



// Function: FUN_1000f090 @ 0x1000f090

void __cdecl FUN_1000f090(int param_1,int param_2,uint *param_3,uint *param_4)

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
  
  puStack_c = &DAT_1003bd10;
  puStack_10 = &LAB_1001544c;
  local_14 = ExceptionList;
  if (((param_3[1] != 0) && (*(char *)(param_3[1] + 8) != '\0')) && (param_3[2] != 0)) {
    piVar1 = (int *)(param_2 + 0xc + param_3[2]);
    local_8 = 0;
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        if (param_4[6] == 0) {
          ExceptionList = &local_14;
          bVar2 = FUN_10015330(*(void **)(param_1 + 0x18),1);
          if ((CONCAT31(extraout_var_03,bVar2) == 0) ||
             (bVar2 = FUN_10015360(piVar1,1), CONCAT31(extraout_var_04,bVar2) == 0)) {
            FUN_1000f7a0();
          }
          else {
            uVar5 = param_4[5];
            puVar4 = (undefined4 *)
                     FID_conflict____AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
            FUN_10012c90(piVar1,puVar4,uVar5);
          }
        }
        else {
          ExceptionList = &local_14;
          bVar2 = FUN_10015330(*(void **)(param_1 + 0x18),1);
          if (((CONCAT31(extraout_var_05,bVar2) == 0) ||
              (bVar2 = FUN_10015360(piVar1,1), CONCAT31(extraout_var_06,bVar2) == 0)) ||
             (iVar3 = _ValidateExecute((_func_int *)param_4[6]), iVar3 == 0)) {
            FUN_1000f7a0();
          }
          else if ((*param_4 & 4) == 0) {
            FID_conflict____AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
            FUN_1000a8c0(piVar1,(undefined *)param_4[6]);
          }
          else {
            FID_conflict____AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 2));
            FUN_1000a8d0(piVar1,(undefined *)param_4[6]);
          }
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_10015330(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_01,bVar2) == 0) ||
           (bVar2 = FUN_10015360(piVar1,1), CONCAT31(extraout_var_02,bVar2) == 0)) {
          FUN_1000f7a0();
        }
        else {
          FUN_10012c90(piVar1,*(undefined4 **)(param_1 + 0x18),param_4[5]);
          if ((param_4[5] == 4) && (*piVar1 != 0)) {
            iVar3 = FID_conflict____AdjustPointer(*piVar1,(int *)(param_4 + 2));
            *piVar1 = iVar3;
          }
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_10015330(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var,bVar2) == 0) ||
         (bVar2 = FUN_10015360(piVar1,1), CONCAT31(extraout_var_00,bVar2) == 0)) {
        FUN_1000f7a0();
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



// Function: ___DestructExceptionObject @ 0x1000f310

/* Library Function - Single Match
    ___DestructExceptionObject
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl ___DestructExceptionObject(int param_1)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1003bd20;
  puStack_10 = &LAB_1001544c;
  local_14 = ExceptionList;
  if ((param_1 != 0) && (*(int *)(*(int *)(param_1 + 0x1c) + 4) != 0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    _CallMemberFunction0(*(void **)(param_1 + 0x18),*(void **)(*(int *)(param_1 + 0x1c) + 4));
  }
  ExceptionList = local_14;
  return;
}



// Function: FID_conflict:___AdjustPointer @ 0x1000f3a0

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



// Function: __CallSettingFrame@12 @ 0x1000f3f0

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



// Function: FUN_1000f440 @ 0x1000f440

undefined4 FUN_1000f440(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000c640();
  DAT_1003ef20 = TlsAlloc();
  if (((DAT_1003ef20 != 0xffffffff) &&
      (lpTlsValue = (DWORD *)__calloc_dbg(1,0x74,2,0x1003bd2c,0x61), lpTlsValue != (DWORD *)0x0)) &&
     (BVar1 = TlsSetValue(DAT_1003ef20,lpTlsValue), BVar1 != 0)) {
    FUN_1000f500((int)lpTlsValue);
    DVar2 = GetCurrentThreadId();
    *lpTlsValue = DVar2;
    lpTlsValue[1] = 0xffffffff;
    return 1;
  }
  return 0;
}



// Function: FUN_1000f4d0 @ 0x1000f4d0

void FUN_1000f4d0(void)

{
  FUN_1000c680();
  if (DAT_1003ef20 != 0xffffffff) {
    TlsFree(DAT_1003ef20);
    DAT_1003ef20 = 0xffffffff;
  }
  return;
}



// Function: FUN_1000f500 @ 0x1000f500

void __cdecl FUN_1000f500(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1003f240;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



// Function: FUN_1000f520 @ 0x1000f520

DWORD * FUN_1000f520(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *local_8;
  
  dwErrCode = GetLastError();
  local_8 = TlsGetValue(DAT_1003ef20);
  if (local_8 == (DWORD *)0x0) {
    local_8 = (DWORD *)__calloc_dbg(1,0x74,2,0x1003bd2c,0xe7);
    if (local_8 != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1003ef20,local_8);
      if (BVar1 != 0) {
        FUN_1000f500((int)local_8);
        DVar2 = GetCurrentThreadId();
        *local_8 = DVar2;
        local_8[1] = 0xffffffff;
        goto LAB_1000f5a7;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1000f5a7:
  SetLastError(dwErrCode);
  return local_8;
}



// Function: FUN_1000f5c0 @ 0x1000f5c0

void __cdecl FUN_1000f5c0(LPVOID param_1)

{
  if (DAT_1003ef20 != 0xffffffff) {
    if (param_1 == (LPVOID)0x0) {
      param_1 = TlsGetValue(DAT_1003ef20);
    }
    if (param_1 != (LPVOID)0x0) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_1000d2b0(*(void **)((int)param_1 + 0x24),2);
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_1000d2b0(*(void **)((int)param_1 + 0x28),2);
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_1000d2b0(*(void **)((int)param_1 + 0x30),2);
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_1000d2b0(*(void **)((int)param_1 + 0x38),2);
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_1000d2b0(*(void **)((int)param_1 + 0x40),2);
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_1000d2b0(*(void **)((int)param_1 + 0x44),2);
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_1003f240) {
        FUN_1000d2b0(*(void **)((int)param_1 + 0x50),2);
      }
      FUN_1000d2b0(param_1,2);
    }
    TlsSetValue(DAT_1003ef20,(LPVOID)0x0);
  }
  return;
}



// Function: FUN_1000f6d0 @ 0x1000f6d0

void FUN_1000f6d0(void)

{
  GetCurrentThreadId();
  return;
}



// Function: FUN_1000f6e0 @ 0x1000f6e0

void FUN_1000f6e0(void)

{
  GetCurrentThread();
  return;
}



// Function: FUN_1000f6f0 @ 0x1000f6f0

void FUN_1000f6f0(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1003bd38;
  puStack_10 = &LAB_1001544c;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_1000f520();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_1000f520();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _abort();
}



// Function: FUN_1000f780 @ 0x1000f780

void FUN_1000f780(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000f520();
  if (pDVar1[0x19] != 0) {
    pDVar1 = FUN_1000f520();
    (*(code *)pDVar1[0x19])();
  }
  FUN_1000f6f0();
  return;
}



// Function: FUN_1000f7a0 @ 0x1000f7a0

void FUN_1000f7a0(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1003bd50;
  puStack_10 = &LAB_1001544c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_1003ef24 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_1003ef24)();
  }
  local_8 = 0xffffffff;
  FUN_1000f80a();
  FUN_1000f810();
  return;
}



// Function: FUN_1000f80a @ 0x1000f80a

void FUN_1000f80a(void)

{
  FUN_1000f6f0();
  return;
}



// Function: FUN_1000f810 @ 0x1000f810

void FUN_1000f810(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}



// Function: FUN_1000f830 @ 0x1000f830

void FUN_1000f830(void)

{
  if (PTR_FUN_1003eda0 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1003eda0)();
  }
  __initterm((int *)&DAT_1003e318,(int *)&DAT_1003e630);
  __initterm((int *)&DAT_1003e000,(int *)&DAT_1003e214);
  return;
}



// Function: FUN_1000f870 @ 0x1000f870

void __cdecl FUN_1000f870(UINT param_1)

{
  FUN_1000f8f0(param_1,0,0);
  return;
}



// Function: __exit @ 0x1000f890

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __exit(int _Code)

{
  FUN_1000f8f0(_Code,1,0);
  return;
}



// Function: FUN_1000f8b0 @ 0x1000f8b0

void FUN_1000f8b0(void)

{
  FUN_1000f8f0(0,0,1);
  return;
}



// Function: FUN_1000f8d0 @ 0x1000f8d0

void FUN_1000f8d0(void)

{
  FUN_1000f8f0(0,1,1);
  return;
}



// Function: FUN_1000f8f0 @ 0x1000f8f0

void __cdecl FUN_1000f8f0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  FUN_1000f9e0();
  if (DAT_100414c4 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100414c0 = 1;
  DAT_100414bc = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_10042f18 != (int *)0x0) {
      local_8 = DAT_10042f14;
      while (local_8 = local_8 + -1, DAT_10042f18 <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_1003e734,(int *)&DAT_1003e93c);
  }
  __initterm((int *)&DAT_1003ea40,(int *)&DAT_1003ec48);
  if ((DAT_100414c8 == 0) && (uVar1 = FUN_1000dd30(-1), (uVar1 & 0x20) != 0)) {
    DAT_100414c8 = 1;
    FUN_1000e640();
  }
  if (param_3 == 0) {
    DAT_100414c4 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000f9f0();
  return;
}



// Function: FUN_1000f9e0 @ 0x1000f9e0

void FUN_1000f9e0(void)

{
  void *in_ECX;
  
  FUN_1000c720(in_ECX,0xd);
  return;
}



// Function: FUN_1000f9f0 @ 0x1000f9f0

void FUN_1000f9f0(void)

{
  FUN_1000c7c0(0xd);
  return;
}



// Function: __initterm @ 0x1000fa00

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



// Function: FUN_1000fa30 @ 0x1000fa30

int __cdecl
FUN_1000fa30(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

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
    local_30 = param_3 + *(int *)(&DAT_1003f3ac + param_2 * 4);
    if (((uVar1 & 3) == 0) && (2 < param_2)) {
      local_30 = local_30 + 1;
    }
    pvVar3 = (void *)(local_30 + (param_1 + -0x7b2) * 0x16d);
    local_8 = ((((param_1 + -0x76d >> 2) + -0x11 + (int)pvVar3) * 0x18 + param_4) * 0x3c + param_5)
              * 0x3c + param_6;
    FUN_10015770(pvVar3);
    local_8 = local_8 + DAT_1003f2c8;
    local_10 = local_30;
    local_1c = (void *)(param_2 + -1);
    local_24 = param_4;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_1003f2cc != 0)) &&
        (local_18 = uVar1, iVar2 = FUN_10015b80(local_1c,local_2c), iVar2 != 0)))) {
      local_8 = local_8 + DAT_1003f2d0;
    }
  }
  return local_8;
}



// Function: FUN_1000fb20 @ 0x1000fb20

void FUN_1000fb20(void)

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
  
  local_54 = (undefined4 *)FUN_1000c820((void *)0x480,2,0x1003bd68,0x81);
  if (local_54 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_10042efc = 0x20;
  DAT_10042dc0 = local_54;
  for (; local_54 < DAT_10042dc0 + 0x120; local_54 = local_54 + 9) {
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
    while ((int)DAT_10042efc < (int)local_6c) {
      local_54 = (undefined4 *)FUN_1000c820((void *)0x480,2,0x1003bd68,0xb6);
      if (local_54 == (undefined4 *)0x0) {
        local_68 = DAT_10042efc;
        break;
      }
      (&DAT_10042dc0)[local_60] = local_54;
      DAT_10042efc = DAT_10042efc + 0x20;
      for (; local_54 < (undefined4 *)((int)(&DAT_10042dc0)[local_60] + 0x480);
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
        puVar2 = (undefined4 *)((int)(&DAT_10042dc0)[(int)local_5c >> 5] + (local_5c & 0x1f) * 0x24)
        ;
        *puVar2 = *(undefined4 *)local_64;
        *(byte *)(puVar2 + 1) = *local_8;
      }
      local_8 = local_8 + 1;
      local_64 = local_64 + 4;
    }
  }
  for (local_5c = 0; (int)local_5c < 3; local_5c = local_5c + 1) {
    piVar3 = DAT_10042dc0 + local_5c * 9;
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
  SetHandleCount(DAT_10042efc);
  return;
}



// Function: __ioterm @ 0x1000fe50

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio */

void __cdecl __ioterm(void)

{
  int local_c;
  uint local_8;
  
  for (local_c = 0; local_c < 0x40; local_c = local_c + 1) {
    if ((&DAT_10042dc0)[local_c] != 0) {
      for (local_8 = (&DAT_10042dc0)[local_c]; local_8 < (&DAT_10042dc0)[local_c] + 0x480;
          local_8 = local_8 + 0x24) {
        if (*(int *)(local_8 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(local_8 + 0xc));
        }
      }
      FUN_1000d2b0((void *)(&DAT_10042dc0)[local_c],2);
      (&DAT_10042dc0)[local_c] = 0;
    }
  }
  return;
}



// Function: FUN_1000fef0 @ 0x1000fef0

void __fastcall FUN_1000fef0(void *param_1)

{
  size_t sVar1;
  int iVar2;
  int *local_10;
  int local_c;
  uint *local_8;
  
  if (DAT_10042f10 == 0) {
    FUN_10016890(param_1);
  }
  local_c = 0;
  for (local_8 = DAT_100413fc; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    if ((char)*local_8 != '=') {
      local_c = local_c + 1;
    }
    sVar1 = _strlen((char *)local_8);
  }
  local_10 = (int *)FUN_1000c820((void *)(local_c * 4 + 4),2,0x1003bd74,0x6d);
  DAT_100414a4 = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (local_8 = DAT_100413fc; (char)*local_8 != '\0';
      local_8 = (uint *)((int)local_8 + (int)(sVar1 + 1))) {
    sVar1 = _strlen((char *)local_8);
    if ((char)*local_8 != '=') {
      iVar2 = FUN_1000c820((void *)(sVar1 + 1),2,0x1003bd74,0x79);
      *local_10 = iVar2;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_10010f30((uint *)*local_10,local_8);
      local_10 = local_10 + 1;
    }
  }
  FUN_1000d2b0(DAT_100413fc,2);
  DAT_100413fc = (uint *)0x0;
  *local_10 = 0;
  DAT_10042f00 = 1;
  return;
}



// Function: FUN_10010040 @ 0x10010040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10010040(void *param_1)

{
  byte *local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_10042f10 == 0) {
    FUN_10016890(param_1);
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100414cc,0x104);
  DAT_100414b4 = &DAT_100414cc;
  if (*DAT_10042f34 == 0) {
    local_18 = &DAT_100414cc;
  }
  else {
    local_18 = DAT_10042f34;
  }
  FUN_10010120(local_18,(undefined4 *)0x0,(byte *)0x0,&local_10,&local_8);
  local_c = (undefined4 *)FUN_1000c820((void *)(local_8 + local_10 * 4),2,0x1003bd80,0x80);
  if (local_c == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10010120(local_18,local_c,(byte *)(local_c + local_10),&local_10,&local_8);
  _DAT_10041498 = local_10 + -1;
  _DAT_1004149c = local_c;
  return;
}



// Function: FUN_10010120 @ 0x10010120

void __cdecl FUN_10010120(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if ((((&DAT_10042c81)[*pbVar3] & 4) != 0) && (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)
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
      if (((&DAT_10042c81)[bVar1] & 4) != 0) {
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
          if (((&DAT_10042c81)[*local_8] & 4) != 0) {
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if (((&DAT_10042c81)[*local_8] & 4) != 0) {
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



// Function: FUN_10010550 @ 0x10010550

LPSTR FUN_10010550(void)

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
  if (DAT_100415d0 == 0) {
    local_18 = GetEnvironmentStringsW();
    if (local_18 == (LPWCH)0x0) {
      local_1c = GetEnvironmentStrings();
      if (local_1c == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_100415d0 = 2;
    }
    else {
      DAT_100415d0 = 1;
    }
  }
  if (DAT_100415d0 == 1) {
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
         (local_1c = (LPCH)FUN_1000c820(cbMultiByte,2,0x1003bd8c,100), local_1c == (LPSTR)0x0)) {
        FreeEnvironmentStringsW(local_18);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        iVar4 = WideCharToMultiByte(0,0,local_18,iVar4,local_1c,(int)cbMultiByte,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar4 == 0) {
          FUN_1000d2b0(local_1c,2);
          local_1c = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(local_18);
        pCVar3 = local_1c;
      }
    }
  }
  else if (DAT_100415d0 == 2) {
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
      pCVar3 = (LPSTR)FUN_1000c820(local_10 + (1 - (int)local_1c),2,0x1003bd8c,0x8f);
      if (pCVar3 == (LPSTR)0x0) {
        FreeEnvironmentStringsA(local_1c);
        pCVar3 = (LPSTR)0x0;
      }
      else {
        FUN_100168c0((undefined4 *)pCVar3,(undefined4 *)local_1c,
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



// Function: FUN_10010770 @ 0x10010770

undefined4 __cdecl FUN_10010770(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  DAT_10042dac = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10042dac == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_10013520();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      HeapDestroy(DAT_10042dac);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// Function: FUN_100107c0 @ 0x100107c0

void FUN_100107c0(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = DAT_10042da8;
  for (local_8 = 0; local_8 < DAT_10042da4; local_8 = local_8 + 1) {
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
    HeapFree(DAT_10042dac,0,*(LPVOID *)((int)local_c + 0x10));
    local_c = (LPVOID)((int)local_c + 0x14);
  }
  HeapFree(DAT_10042dac,0,DAT_10042da8);
  HeapDestroy(DAT_10042dac);
  return;
}



// Function: __FF_MSGBANNER @ 0x10010860

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2003 Debug */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_10041404 == 1) || ((DAT_10041404 == 0 && (DAT_10041408 == 1)))) {
    FUN_100108b0(0xfc);
    if (DAT_100415d4 != (code *)0x0) {
      (*DAT_100415d4)();
    }
    FUN_100108b0(0xff);
  }
  return;
}



// Function: FUN_100108b0 @ 0x100108b0

void __cdecl FUN_100108b0(int param_1)

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
  
  for (local_c = 0; (local_c < 0x12 && (param_1 != *(int *)(&DAT_1003ef50 + local_c * 8)));
      local_c = local_c + 1) {
  }
  if (param_1 == *(int *)(&DAT_1003ef50 + local_c * 8)) {
    if ((param_1 != 0xfc) &&
       (iVar2 = FUN_1000b3e0(1,0,0,0,(&PTR_s_R6002___floating_point_not_loade_1003ef54)[local_c * 2]
                            ), iVar2 == 1)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((DAT_10041404 == 1) || ((DAT_10041404 == 0 && (DAT_10041408 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_8;
      sVar3 = _strlen((&PTR_s_R6002___floating_point_not_loade_1003ef54)[local_c * 2]);
      lpBuffer = (&PTR_s_R6002___floating_point_not_loade_1003ef54)[local_c * 2];
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar3,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar4 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_114,0x104);
      if (DVar4 == 0) {
        FUN_10010f30(local_114,(uint *)"<program name unknown>");
      }
      local_10 = local_114;
      sVar3 = _strlen((char *)local_10);
      if (0x3c < sVar3 + 1) {
        sVar3 = _strlen((char *)local_114);
        local_10 = (uint *)((int)local_10 + (sVar3 - 0x3b));
        _strncpy((char *)local_10,"...",3);
      }
      FUN_10010f30(local_1b4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10010f40(local_1b4,local_10);
      FUN_10010f40(local_1b4,(uint *)&DAT_1003b488);
      FUN_10010f40(local_1b4,(uint *)(&PTR_s_R6002___floating_point_not_loade_1003ef54)[local_c * 2]
                  );
      FUN_100116e0(local_1b4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// Function: __GET_RTERRMSG @ 0x10010a70

/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2003 Debug */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  wchar_t *pwVar1;
  uint local_8;
  
  for (local_8 = 0; (local_8 < 0x12 && (param_1 != *(int *)(&DAT_1003ef50 + local_8 * 8)));
      local_8 = local_8 + 1) {
  }
  if (param_1 == *(int *)(&DAT_1003ef50 + local_8 * 8)) {
    pwVar1 = (wchar_t *)(&PTR_s_R6002___floating_point_not_loade_1003ef54)[local_8 * 2];
  }
  else {
    pwVar1 = (wchar_t *)0x0;
  }
  return pwVar1;
}



// Function: __itoa @ 0x10010ac0

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



// Function: xtoa @ 0x10010b10

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



// Function: __ltoa @ 0x10010be0

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



// Function: __ultoa @ 0x10010c20

/* Library Function - Single Match
    __ultoa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Value,_Dest,_Radix,0);
  return _Dest;
}



// Function: __i64toa @ 0x10010c40

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



// Function: x64toa @ 0x10010c90

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



// Function: __ui64toa @ 0x10010d90

/* Library Function - Single Match
    __ui64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  x64toa(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}



// Function: _strlen @ 0x10010db0

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
    if (((uint)puVar2 & 3) == 0) goto LAB_10010dd0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10010e03:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10010dd0:
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
  goto LAB_10010e03;
}



// Function: FUN_10010e30 @ 0x10010e30

int __cdecl FUN_10010e30(undefined1 *param_1,int param_2,byte *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003c074,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte *)0x0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003c074,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_10016f70((int *)&local_24,param_3,(undefined4 *)&stack0x00000010);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10016cf0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_10010f30 @ 0x10010f30

uint * __cdecl FUN_10010f30(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10011018;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10011018:
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



// Function: FUN_10010f40 @ 0x10010f40

uint * __cdecl FUN_10010f40(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10010f5c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10010f8f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10010fab;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10010f5c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10010fab;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10010fab;
    }
  }
LAB_10010f8f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10010fab:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10011018:
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
    if (bVar1 == 0) goto LAB_10011018;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// Function: FUN_10011020 @ 0x10011020

int __cdecl FUN_10011020(undefined1 *param_1,int param_2,byte *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003c090,0x5a,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_3 == (byte *)0x0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003c090,0x5b,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  iVar2 = FUN_10016f70((int *)&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10016cf0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_10011120 @ 0x10011120

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10011120(void)

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



// Function: FUN_10011150 @ 0x10011150

int __thiscall FUN_10011150(void *this,int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int local_10;
  uint local_c;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_1000c720(this,1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_100415e8 == 0)) {
        BVar2 = SetConsoleCtrlHandler(FUN_10011380,1);
        if (BVar2 != 1) {
          DVar3 = GetLastError();
          pDVar4 = FUN_10017ec0();
          *pDVar4 = DVar3;
          FUN_1000c7c0(1);
          goto LAB_10011338;
        }
        DAT_100415e8 = 1;
      }
      switch(param_1) {
      case 2:
        local_10 = DAT_100415d8;
        DAT_100415d8 = param_2;
        break;
      case 0xf:
        local_10 = DAT_100415e4;
        DAT_100415e4 = param_2;
        break;
      case 0x15:
        local_10 = DAT_100415dc;
        DAT_100415dc = param_2;
        break;
      case 0x16:
        local_10 = DAT_100415e0;
        DAT_100415e0 = param_2;
      }
      FUN_1000c7c0(1);
      return local_10;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar4 = FUN_1000f520();
      if ((undefined *)pDVar4[0x14] == &DAT_1003f240) {
        DVar3 = FUN_1000c820(DAT_1003f2c0,2,0x1003c09c,0x133);
        pDVar4[0x14] = DVar3;
        if (pDVar4[0x14] == 0) goto LAB_10011338;
        FUN_100168c0((undefined4 *)pDVar4[0x14],(undefined4 *)&DAT_1003f240,(uint)DAT_1003f2c0);
      }
      local_c = FUN_10011660(param_1,pDVar4[0x14]);
      if (local_c != 0) {
        iVar1 = *(int *)(local_c + 8);
        do {
          if (*(int *)(local_c + 4) != param_1) {
            return iVar1;
          }
          *(int *)(local_c + 8) = param_2;
          local_c = local_c + 0xc;
        } while (local_c < pDVar4[0x14] + DAT_1003f2c4 * 0xc);
        return iVar1;
      }
    }
  }
LAB_10011338:
  pDVar4 = FUN_10017eb0();
  *pDVar4 = 0x16;
  return -1;
}



// Function: FUN_10011380 @ 0x10011380

undefined4 __thiscall FUN_10011380(void *this,int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  FUN_1000c720(this,1);
  if (param_1 == 0) {
    local_c = &DAT_100415d8;
    local_10 = DAT_100415d8;
    local_8 = 2;
  }
  else {
    local_c = &DAT_100415dc;
    local_10 = DAT_100415dc;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    FUN_1000c7c0(1);
    uVar1 = 0;
  }
  else {
    if (local_10 == (code *)0x1) {
      FUN_1000c7c0(1);
    }
    else {
      *local_c = 0;
      FUN_1000c7c0(1);
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_10011420 @ 0x10011420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10011420(int param_1)

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
    local_1c = &DAT_100415d8;
    local_20 = DAT_100415d8;
    bVar1 = true;
    break;
  default:
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    local_8 = FUN_1000f520();
    uVar2 = FUN_10011660(param_1,local_8[0x14]);
    local_1c = (undefined4 *)(uVar2 + 8);
    local_20 = (code *)*local_1c;
    break;
  case 0xf:
    local_1c = &DAT_100415e4;
    local_20 = DAT_100415e4;
    bVar1 = true;
    break;
  case 0x15:
    local_1c = &DAT_100415dc;
    local_20 = DAT_100415dc;
    bVar1 = true;
    break;
  case 0x16:
    local_1c = &DAT_100415e0;
    local_20 = DAT_100415e0;
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1000c720(local_1c,1);
  }
  if (local_20 != (code *)0x1) {
    if (local_20 == (code *)0x0) {
      if (bVar1) {
        FUN_1000c7c0(1);
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
      for (local_14 = DAT_1003f2b8; local_14 < DAT_1003f2b8 + _DAT_1003f2bc; local_14 = local_14 + 1
          ) {
        *(undefined4 *)(local_8[0x14] + 8 + local_14 * 0xc) = 0;
      }
    }
    else {
      *local_1c = 0;
    }
    if (bVar1) {
      FUN_1000c7c0(1);
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
    FUN_1000c7c0(1);
  }
  return 0;
}



// Function: FUN_10011660 @ 0x10011660

uint __cdecl FUN_10011660(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < param_2 + DAT_1003f2c4 * 0xc);
  if ((param_2 + DAT_1003f2c4 * 0xc <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}



// Function: FUN_100116c0 @ 0x100116c0

DWORD * FUN_100116c0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000f520();
  return pDVar1 + 0x16;
}



// Function: FUN_100116d0 @ 0x100116d0

DWORD * FUN_100116d0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000f520();
  return pDVar1 + 0x15;
}



// Function: FUN_100116e0 @ 0x100116e0

int __cdecl FUN_100116e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_100415ec == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100415ec = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100415ec != (FARPROC)0x0) {
        DAT_100415f0 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100415f4 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10011753;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10011753:
    if (DAT_100415f0 != (FARPROC)0x0) {
      local_8 = (*DAT_100415f0)();
    }
    if ((local_8 != 0) && (DAT_100415f4 != (FARPROC)0x0)) {
      local_8 = (*DAT_100415f4)(local_8);
    }
    iVar1 = (*DAT_100415ec)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}



// Function: _strncpy @ 0x100117a0

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
        goto joined_r0x100117de;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1001181b;
        goto LAB_10011889;
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
joined_r0x10011885:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10011889:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1001181b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10011885;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10011885;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10011885;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x100117de:
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
LAB_1001181b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// Function: FUN_100118a0 @ 0x100118a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_100118a0(uint param_1,_exception *param_2,ushort *param_3)

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
     (bVar1 = FUN_10018600(local_8,&param_2->retval,local_14), CONCAT31(extraout_var,bVar1) == 0)) {
    if ((param_1 == 0x10) || ((param_1 == 0x16 || (param_1 == 0x1d)))) {
      local_34 = local_34 & 0xffffffe1 | 3;
      local_44 = *(undefined4 *)&param_2->arg2;
      local_40 = *(undefined4 *)((int)&param_2->arg2 + 4);
    }
    else {
      local_34 = local_34 & 0xfffffffe;
    }
    FUN_10018130(local_6c,local_10,local_8,param_1,(uint *)&param_2->arg1,(uint *)&param_2->retval);
  }
  FUN_10018b70();
  local_c = 0;
  if ((param_2->type != 8) && (DAT_1003f728 == 0)) {
    local_c = __matherr(param_2);
  }
  if (local_c == 0) {
    FID_conflict___set_errno_from_matherr(param_2->type);
  }
  return;
}



// Function: FUN_10011a20 @ 0x10011a20

void FUN_10011a20(void)

{
  undefined4 in_EAX;
  undefined2 in_FPUStatusWord;
  
  FUN_10011e10(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUStatusWord));
  return;
}



// Function: FUN_10011a40 @ 0x10011a40

void FUN_10011a40(void)

{
  undefined4 in_EAX;
  undefined2 in_FPUStatusWord;
  
  FUN_10011e10(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUStatusWord));
  return;
}



// Function: FUN_10011a60 @ 0x10011a60

uint __cdecl FUN_10011a60(uint param_1,uint param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined2 in_FPUControlWord;
  
  uVar1 = FUN_10011b30(CONCAT22((short)((uint)in_EAX >> 0x10),in_FPUControlWord));
  uVar1 = param_1 & param_2 | uVar1 & ~param_2;
  FUN_10011cb0(uVar1);
  return uVar1;
}



// Function: __controlfp @ 0x10011ab0

/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = FUN_10011a60(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}



// Function: FUN_10011ad0 @ 0x10011ad0

void FUN_10011ad0(void)

{
  DWORD DVar1;
  int iVar2;
  DWORD *pDVar3;
  
  pDVar3 = FUN_100116d0();
  DVar1 = *pDVar3;
  __setdefaultprecision();
  if ((DVar1 != 0) && ((**(uint **)(DVar1 + 4) & 0x10008) != 0)) {
    iVar2 = *(int *)(DVar1 + 4);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0xffff;
  }
  return;
}



// Function: FUN_10011b30 @ 0x10011b30

uint __cdecl FUN_10011b30(uint param_1)

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



// Function: FUN_10011cb0 @ 0x10011cb0

undefined4 __cdecl FUN_10011cb0(uint param_1)

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



// Function: FUN_10011e10 @ 0x10011e10

uint __cdecl FUN_10011e10(uint param_1)

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



// Function: FUN_10011ec0 @ 0x10011ec0

uint __cdecl FUN_10011ec0(int param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  CHAR local_10;
  CHAR local_f;
  undefined1 local_e;
  int local_c;
  uint local_8;
  
  if (param_1 + 1U < 0x101) {
    uVar1 = *(ushort *)(PTR_DAT_1003efec + param_1 * 2) & param_2;
  }
  else {
    if ((*(ushort *)(PTR_DAT_1003efec + (param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
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
    BVar2 = FUN_10018c30(1,&local_10,local_c,(LPWORD)&local_8,0,0,1);
    if (BVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_8 & 0xffff & param_2;
    }
  }
  return uVar1;
}



// Function: FUN_10011f80 @ 0x10011f80

int __cdecl FUN_10011f80(int param_1)

{
  return param_1 + 0x20;
}



// Function: FUN_10011f90 @ 0x10011f90

uint __cdecl FUN_10011f90(uint param_1)

{
  void *this;
  bool bVar1;
  
  if (DAT_100416e0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_10042af4);
    bVar1 = DAT_10042ae4 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_10042af4);
      FUN_1000c720(this,0x13);
    }
    param_1 = FUN_10012030(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_10042af4);
    }
    else {
      FUN_1000c7c0(0x13);
    }
  }
  return param_1;
}



// Function: FUN_10012030 @ 0x10012030

uint __cdecl FUN_10012030(uint param_1)

{
  int iVar1;
  uint local_14;
  uint local_10;
  char local_c;
  char local_b;
  undefined1 local_a;
  int local_8;
  
  if (DAT_100416e0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_1003efe0 < 2) {
        local_14 = *(ushort *)(PTR_DAT_1003efec + param_1 * 2) & 1;
      }
      else {
        local_14 = FUN_10011ec0(param_1,1);
      }
      if (local_14 == 0) {
        return param_1;
      }
    }
    if ((*(ushort *)(PTR_DAT_1003efec + ((int)param_1 >> 8 & 0xffU) * 2) & 0x8000) == 0) {
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
    iVar1 = FUN_10019840(DAT_100416e0,0x100,&local_c,local_8,(LPWSTR)&local_10,3,0,1);
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



// Function: FUN_10012160 @ 0x10012160

undefined4 __cdecl FUN_10012160(int param_1,int param_2)

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



// Function: __IncMan @ 0x100121f0

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



// Function: FUN_100122a0 @ 0x100122a0

int __cdecl FUN_100122a0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int local_1c;
  int local_14;
  
  local_1c = 0;
  local_14 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = 0x1f - ((byte)param_2 & 0x1f);
  if (((*(uint *)(param_1 + local_14 * 4) & 1 << (bVar2 & 0x1f)) != 0) &&
     (iVar1 = FUN_10012160(param_1,param_2 + 1), iVar1 == 0)) {
    local_1c = __IncMan(param_1,param_2 + -1);
  }
  *(uint *)(param_1 + local_14 * 4) = *(uint *)(param_1 + local_14 * 4) & -1 << (bVar2 & 0x1f);
  while (local_14 = local_14 + 1, local_14 < 3) {
    *(undefined4 *)(param_1 + local_14 * 4) = 0;
  }
  return local_1c;
}



// Function: __CopyMan @ 0x10012380

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



// Function: __FillZeroMan @ 0x100123d0

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



// Function: __IsZeroMan @ 0x10012400

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



// Function: __ShrMan @ 0x10012440

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



// Function: FUN_10012530 @ 0x10012530

undefined4 __cdecl FUN_10012530(ushort *param_1,uint *param_2,int *param_3)

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
    iVar1 = FUN_100122a0((int)&local_1c,param_3[2]);
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
      FUN_100122a0((int)&local_1c,param_3[2]);
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



// Function: FUN_10012780 @ 0x10012780

void __cdecl FUN_10012780(ushort *param_1,uint *param_2)

{
  FUN_10012530(param_1,param_2,(int *)&DAT_1003f1f8);
  return;
}



// Function: FUN_100127a0 @ 0x100127a0

void __cdecl FUN_100127a0(ushort *param_1,uint *param_2)

{
  FUN_10012530(param_1,param_2,(int *)&DAT_1003f210);
  return;
}



// Function: FUN_100127c0 @ 0x100127c0

bool __cdecl FUN_100127c0(ushort *param_1,undefined4 *param_2)

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
  iVar2 = FUN_100122a0((int)&local_14,0x40);
  if (iVar2 != 0) {
    local_14 = 0x80000000;
    local_8 = (uint)(ushort)((short)local_8 + 1);
  }
  param_2[1] = local_14;
  *param_2 = local_10;
  *(ushort *)(param_2 + 2) = uVar1 & 0x8000 | (ushort)local_8;
  return (local_8 & 0xffff) == 0x7fff;
}



// Function: FUN_10012880 @ 0x10012880

void __cdecl FUN_10012880(uint *param_1,byte *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_10019ea0(local_10,&local_14,param_2,0,0,0,0);
  FUN_10012780(local_10,param_1);
  return;
}



// Function: FUN_100128c0 @ 0x100128c0

void __cdecl FUN_100128c0(undefined4 *param_1,byte *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_10019ea0(local_10,&local_14,param_2,1,0,0,0);
  FUN_100127c0(local_10,param_1);
  return;
}



// Function: FUN_10012900 @ 0x10012900

void __cdecl FUN_10012900(uint *param_1,byte *param_2)

{
  undefined4 local_14;
  ushort local_10 [6];
  
  FUN_10019ea0(local_10,&local_14,param_2,0,0,0,0);
  FUN_100127a0(local_10,param_1);
  return;
}



// Function: FUN_10012940 @ 0x10012940

void __cdecl FUN_10012940(char *param_1,int param_2,int param_3)

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
    FUN_10012c90((undefined4 *)param_1,(undefined4 *)(param_1 + 1),sVar3 + 1);
  }
  return;
}



// Function: FUN_10012a40 @ 0x10012a40

int * __cdecl FUN_10012a40(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int iVar1;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint local_c;
  ushort local_8;
  
  FUN_10012ac0(&local_10,&param_1);
  iVar1 = FUN_1001aa20(local_10,local_c,local_8,0x11,0,&local_2c);
  param_3[2] = iVar1;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10010f30(param_4,local_28);
  param_3[3] = (int)param_4;
  return param_3;
}



// Function: FUN_10012ac0 @ 0x10012ac0

void __cdecl FUN_10012ac0(uint *param_1,uint *param_2)

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



// Function: _memset @ 0x10012c30

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



// Function: FUN_10012c90 @ 0x10012c90

undefined4 * __cdecl FUN_10012c90(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10012e47_caseD_2;
        case 3:
          goto switchD_10012e47_caseD_3;
        }
        goto switchD_10012e47_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10012e47_caseD_0;
      case 1:
        goto switchD_10012e47_caseD_1;
      case 2:
        goto switchD_10012e47_caseD_2;
      case 3:
        goto switchD_10012e47_caseD_3;
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
              goto switchD_10012e47_caseD_2;
            case 3:
              goto switchD_10012e47_caseD_3;
            }
            goto switchD_10012e47_caseD_1;
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
              goto switchD_10012e47_caseD_2;
            case 3:
              goto switchD_10012e47_caseD_3;
            }
            goto switchD_10012e47_caseD_1;
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
              goto switchD_10012e47_caseD_2;
            case 3:
              goto switchD_10012e47_caseD_3;
            }
            goto switchD_10012e47_caseD_1;
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
switchD_10012e47_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10012e47_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10012e47_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10012e47_caseD_0:
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
        goto switchD_10012cc5_caseD_2;
      case 3:
        goto switchD_10012cc5_caseD_3;
      }
      goto switchD_10012cc5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10012cc5_caseD_0;
    case 1:
      goto switchD_10012cc5_caseD_1;
    case 2:
      goto switchD_10012cc5_caseD_2;
    case 3:
      goto switchD_10012cc5_caseD_3;
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
            goto switchD_10012cc5_caseD_2;
          case 3:
            goto switchD_10012cc5_caseD_3;
          }
          goto switchD_10012cc5_caseD_1;
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
            goto switchD_10012cc5_caseD_2;
          case 3:
            goto switchD_10012cc5_caseD_3;
          }
          goto switchD_10012cc5_caseD_1;
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
            goto switchD_10012cc5_caseD_2;
          case 3:
            goto switchD_10012cc5_caseD_3;
          }
          goto switchD_10012cc5_caseD_1;
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
switchD_10012cc5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10012cc5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10012cc5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10012cc5_caseD_0:
  return param_1;
}



// Function: __fptrap @ 0x10012fd0

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Debug */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



// Function: _set_new_handler @ 0x10012fe0

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  void *in_ECX;
  
  FUN_1000c720(in_ECX,9);
  p_Var1 = DAT_100415fc;
  DAT_100415fc = param_1;
  FUN_1000c7c0(9);
  return p_Var1;
}



// Function: FUN_10013010 @ 0x10013010

undefined4 FUN_10013010(void)

{
  return DAT_100415fc;
}



// Function: __callnewh @ 0x10013020

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Debug */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_100415fc != (code *)0x0) && (iVar1 = (*DAT_100415fc)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// Function: FUN_10013050 @ 0x10013050

void __cdecl FUN_10013050(void *param_1)

{
  __nh_malloc_base(param_1,(uint)param_1,DAT_100415f8);
  return;
}



// Function: __nh_malloc_base @ 0x10013070

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
        local_8 = FUN_100130d0(this,param_1);
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



// Function: FUN_100130d0 @ 0x100130d0

int * __thiscall FUN_100130d0(void *this,uint param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_1003f234) {
    FUN_1000c720(this,9);
    piVar1 = FUN_10013c10(param_1);
    FUN_1000c7c0(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  piVar1 = HeapAlloc(DAT_10042dac,0,param_1 + 0xf & 0xfffffff0);
  return piVar1;
}



// Function: FUN_10013140 @ 0x10013140

undefined4 FUN_10013140(void)

{
  return 1;
}



// Function: FUN_10013150 @ 0x10013150

LPVOID __thiscall FUN_10013150(void *this,LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_2 < 0xffffffe1) {
    FUN_1000c720(this,9);
    puVar1 = (uint *)FUN_10013580((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_1000c7c0(9);
      if (param_2 == 0) {
        param_2 = 1;
      }
      local_8 = HeapReAlloc(DAT_10042dac,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
    else {
      local_8 = (LPVOID)0x0;
      if (param_2 <= DAT_1003f234) {
        iVar2 = FUN_10014450(puVar1,(int)param_1,param_2);
        if (iVar2 != 0) {
          local_8 = param_1;
        }
      }
      FUN_1000c7c0(9);
    }
  }
  else {
    local_8 = (LPVOID)0x0;
  }
  return local_8;
}



// Function: FUN_10013200 @ 0x10013200

int * __thiscall FUN_10013200(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  void *extraout_ECX;
  void *local_18;
  void *local_14;
  int *local_c;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_10013050(param_2);
  }
  else if (param_2 == (void *)0x0) {
    FUN_100133f0(param_1,param_1);
    piVar1 = (int *)0x0;
  }
  else {
    do {
      local_c = (int *)0x0;
      if (param_2 < (void *)0xffffffe1) {
        FUN_1000c720(this,9);
        puVar2 = (uint *)FUN_10013580((int)param_1);
        if (puVar2 == (uint *)0x0) {
          FUN_1000c7c0(9);
          if (param_2 == (void *)0x0) {
            param_2 = (void *)0x1;
          }
          param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
          local_c = HeapReAlloc(DAT_10042dac,0,param_1,(SIZE_T)param_2);
        }
        else {
          if (param_2 <= DAT_1003f234) {
            iVar3 = FUN_10014450(puVar2,(int)param_1,(int)param_2);
            if (iVar3 == 0) {
              local_c = FUN_10013c10((int)param_2);
              if (local_c != (int *)0x0) {
                local_14 = (void *)(param_1[-1] - 1);
                if (param_2 <= local_14) {
                  local_14 = param_2;
                }
                FUN_100168c0(local_c,param_1,(uint)local_14);
                FUN_10013640(puVar2,(int)param_1);
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
            local_c = HeapAlloc(DAT_10042dac,0,(SIZE_T)param_2);
            if (local_c != (int *)0x0) {
              local_18 = param_2;
              if ((void *)(param_1[-1] - 1U) < param_2) {
                local_18 = (void *)(param_1[-1] - 1U);
              }
              FUN_100168c0(local_c,param_1,(uint)local_18);
              FUN_10013640(puVar2,(int)param_1);
            }
          }
          FUN_1000c7c0(9);
        }
      }
      if (local_c != (int *)0x0) {
        return local_c;
      }
      if (DAT_100415f8 == 0) {
        return (int *)0x0;
      }
      iVar3 = __callnewh((size_t)param_2);
      this = extraout_ECX;
    } while (iVar3 != 0);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



// Function: FUN_100133f0 @ 0x100133f0

void __thiscall FUN_100133f0(void *this,LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_1000c720(this,9);
    puVar1 = (uint *)FUN_10013580((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_1000c7c0(9);
      HeapFree(DAT_10042dac,0,param_1);
    }
    else {
      FUN_10013640(puVar1,(int)param_1);
      FUN_1000c7c0(9);
    }
  }
  return;
}



// Function: FUN_10013460 @ 0x10013460

undefined4 FUN_10013460(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  void *in_ECX;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  FUN_1000c720(in_ECX,9);
  iVar1 = FUN_10014b70();
  if (iVar1 < 0) {
    local_8 = 0xfffffffc;
  }
  FUN_1000c7c0(9);
  BVar2 = HeapValidate(DAT_10042dac,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      pDVar4 = FUN_10017ec0();
      *pDVar4 = 0x78;
      pDVar4 = FUN_10017eb0();
      *pDVar4 = 0x28;
    }
    else {
      local_8 = 0xfffffffc;
    }
  }
  return local_8;
}



// Function: FUN_100134e0 @ 0x100134e0

void FUN_100134e0(void)

{
  FUN_10013460();
  return;
}



// Function: FUN_100134f0 @ 0x100134f0

undefined4 FUN_100134f0(void)

{
  return DAT_1003f234;
}



// Function: FUN_10013500 @ 0x10013500

bool __cdecl FUN_10013500(uint param_1)

{
  if (param_1 < 0x3f9) {
    DAT_1003f234 = param_1;
  }
  return param_1 < 0x3f9;
}



// Function: FUN_10013520 @ 0x10013520

bool FUN_10013520(void)

{
  DAT_10042da8 = HeapAlloc(DAT_10042dac,0,0x140);
  if (DAT_10042da8 != (LPVOID)0x0) {
    DAT_10042da0 = 0;
    DAT_10042da4 = 0;
    DAT_10042d88 = 0x10;
    DAT_10042d9c = DAT_10042da8;
  }
  return DAT_10042da8 != (LPVOID)0x0;
}



// Function: FUN_10013580 @ 0x10013580

uint __cdecl FUN_10013580(int param_1)

{
  uint local_c;
  
  local_c = DAT_10042da8;
  while( true ) {
    if (DAT_10042da8 + DAT_10042da4 * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}



// Function: FUN_100135e0 @ 0x100135e0

undefined4 __cdecl FUN_100135e0(int param_1,int param_2)

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



// Function: FUN_10013640 @ 0x10013640

void __cdecl FUN_10013640(uint *param_1,int param_2)

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
    if (DAT_10042da0 != (uint *)0x0) {
      VirtualFree((LPVOID)(DAT_10042da0[3] + DAT_10042d98 * 0x8000),0x8000,0x4000);
      DAT_10042da0[2] = DAT_10042da0[2] | 0x80000000U >> ((byte)DAT_10042d98 & 0x1f);
      *(undefined4 *)(DAT_10042da0[4] + 0xc4 + DAT_10042d98 * 4) = 0;
      *(char *)(DAT_10042da0[4] + 0x43) = *(char *)(DAT_10042da0[4] + 0x43) + -1;
      if (*(char *)(DAT_10042da0[4] + 0x43) == '\0') {
        DAT_10042da0[1] = DAT_10042da0[1] & 0xfffffffe;
      }
      if (DAT_10042da0[2] == 0xffffffff) {
        VirtualFree((LPVOID)DAT_10042da0[3],0,0x8000);
        HeapFree(DAT_10042dac,0,(LPVOID)DAT_10042da0[4]);
        FUN_10012c90(DAT_10042da0,DAT_10042da0 + 5,
                     (DAT_10042da8 + DAT_10042da4 * 0x14) - (int)(DAT_10042da0 + 5));
        DAT_10042da4 = DAT_10042da4 + -1;
        if (DAT_10042da0 < param_1) {
          param_1 = param_1 + -5;
        }
        DAT_10042d9c = DAT_10042da8;
      }
    }
    DAT_10042da0 = param_1;
    DAT_10042d98 = uVar8;
  }
  return;
}



// Function: FUN_10013c10 @ 0x10013c10

int * __cdecl FUN_10013c10(int param_1)

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
  
  puVar7 = DAT_10042da8 + DAT_10042da4 * 5;
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
  for (local_1c = DAT_10042d9c;
      (local_1c < puVar7 && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
      local_1c = local_1c + 5) {
  }
  if (local_1c == puVar7) {
    for (local_1c = DAT_10042da8;
        (local_1c < DAT_10042d9c && ((local_28 & *local_1c) == 0 && (local_38 & local_1c[1]) == 0));
        local_1c = local_1c + 5) {
    }
    if (local_1c == DAT_10042d9c) {
      for (; (local_1c < puVar7 && (local_1c[2] == 0)); local_1c = local_1c + 5) {
      }
      if (local_1c == puVar7) {
        for (local_1c = DAT_10042da8; (local_1c < DAT_10042d9c && (local_1c[2] == 0));
            local_1c = local_1c + 5) {
        }
        if ((local_1c == DAT_10042d9c) && (local_1c = FUN_10014150(), local_1c == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar5 = FUN_10014260((int)local_1c);
      *(int *)local_1c[4] = iVar5;
      if (*(int *)local_1c[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  DAT_10042d9c = local_1c;
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
  if (((iVar5 == 0) && (local_1c == DAT_10042da0)) && (local_34 == DAT_10042d98)) {
    DAT_10042da0 = (uint *)0x0;
  }
  *piVar4 = local_34;
  return piVar8 + 1;
}



// Function: FUN_10014150 @ 0x10014150

undefined4 * FUN_10014150(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_10042da4 == DAT_10042d88) {
    pvVar1 = HeapReAlloc(DAT_10042dac,0,DAT_10042da8,(DAT_10042d88 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10042d88 = DAT_10042d88 + 0x10;
    DAT_10042da8 = pvVar1;
  }
  puVar2 = (undefined4 *)((int)DAT_10042da8 + DAT_10042da4 * 0x14);
  pvVar1 = HeapAlloc(DAT_10042dac,8,0x41c4);
  puVar2[4] = pvVar1;
  if (puVar2[4] == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (puVar2[3] == 0) {
      HeapFree(DAT_10042dac,0,(LPVOID)puVar2[4]);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      DAT_10042da4 = DAT_10042da4 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
    }
  }
  return puVar2;
}



// Function: FUN_10014260 @ 0x10014260

int __cdecl FUN_10014260(int param_1)

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



// Function: FUN_10014450 @ 0x10014450

undefined4 __cdecl FUN_10014450(uint *param_1,int param_2,int param_3)

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



// Function: FUN_10014a40 @ 0x10014a40

void FUN_10014a40(void)

{
  if (DAT_10042da0 != (undefined4 *)0x0) {
    VirtualFree((LPVOID)(DAT_10042da0[3] + DAT_10042d98 * 0x8000),0x8000,0x4000);
    DAT_10042da0[2] = DAT_10042da0[2] | 0x80000000U >> ((byte)DAT_10042d98 & 0x1f);
    *(undefined4 *)(DAT_10042da0[4] + 0xc4 + DAT_10042d98 * 4) = 0;
    *(char *)(DAT_10042da0[4] + 0x43) = *(char *)(DAT_10042da0[4] + 0x43) + -1;
    if (*(char *)(DAT_10042da0[4] + 0x43) == '\0') {
      DAT_10042da0[1] = DAT_10042da0[1] & 0xfffffffe;
    }
    if ((DAT_10042da0[2] == -1) && (1 < DAT_10042da4)) {
      HeapFree(DAT_10042dac,0,(LPVOID)DAT_10042da0[4]);
      FUN_10012c90(DAT_10042da0,DAT_10042da0 + 5,
                   (DAT_10042da8 + DAT_10042da4 * 0x14) - (int)(DAT_10042da0 + 5));
      DAT_10042da4 = DAT_10042da4 + -1;
    }
    DAT_10042da0 = (undefined4 *)0x0;
  }
  return;
}



// Function: FUN_10014b70 @ 0x10014b70

undefined4 FUN_10014b70(void)

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
  
  BVar2 = IsBadWritePtr(DAT_10042da8,DAT_10042da4 * 0x14);
  if (BVar2 == 0) {
    local_140 = DAT_10042da8;
    for (local_124 = 0; local_124 < DAT_10042da4; local_124 = local_124 + 1) {
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



// Function: FUN_10015190 @ 0x10015190

int __cdecl FUN_10015190(undefined1 *param_1,byte *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003c074,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003c074,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  iVar2 = FUN_10016f70((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10016cf0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}



// Function: FUN_10015290 @ 0x10015290

int FUN_10015290(int *param_1)

{
  int iVar1;
  
  if (((*(int *)*param_1 == -0x1f928c9d) && (*(int *)(*param_1 + 0x10) == 3)) &&
     (*(int *)(*param_1 + 0x14) == 0x19930520)) {
    FUN_1000f6f0();
  }
  if ((DAT_10041600 != (_func_int *)0x0) && (iVar1 = _ValidateExecute(DAT_10041600), iVar1 != 0)) {
    iVar1 = (*DAT_10041600)(param_1);
    return iVar1;
  }
  return 0;
}



// Function: FUN_100152f0 @ 0x100152f0

void FUN_100152f0(void)

{
  DAT_10041600 = SetUnhandledExceptionFilter(FUN_10015290);
  return;
}



// Function: FUN_10015310 @ 0x10015310

void FUN_10015310(void)

{
  SetUnhandledExceptionFilter(DAT_10041600);
  return;
}



// Function: FUN_10015330 @ 0x10015330

bool __cdecl FUN_10015330(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: FUN_10015360 @ 0x10015360

bool __cdecl FUN_10015360(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// Function: _ValidateExecute @ 0x10015390

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



// Function: _strcmp @ 0x100153c0

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
      if (bVar4 != *_Str2) goto LAB_10015404;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_100153d0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10015404;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10015404;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_100153d0:
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
LAB_10015404:
  return (uint)bVar5 * -2 + 1;
}



// Function: FUN_10015509 @ 0x10015509

void FUN_10015509(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// Function: __XcptFilter @ 0x10015530

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
  
  pDVar4 = FUN_1000f520();
  piVar5 = FUN_100156f0(_ExceptionNum,(int *)pDVar4[0x14]);
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
      for (local_18 = DAT_1003f2b8; local_18 < DAT_1003f2b8 + _DAT_1003f2bc; local_18 = local_18 + 1
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



// Function: FUN_100156f0 @ 0x100156f0

int * __cdecl FUN_100156f0(int param_1,int *param_2)

{
  int *local_8;
  
  local_8 = param_2;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < param_2 + DAT_1003f2c4 * 3);
  if ((param_2 + DAT_1003f2c4 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}



// Function: _abort @ 0x10015750

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2003 Debug */

void __cdecl _abort(void)

{
  FUN_100108b0(10);
  FUN_10011420(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// Function: FUN_10015770 @ 0x10015770

void __fastcall FUN_10015770(void *param_1)

{
  void *extraout_ECX;
  
  if (DAT_100416c0 == 0) {
    FUN_1000c720(param_1,0xb);
    if (DAT_100416c0 == 0) {
      FUN_100157d0(extraout_ECX);
      DAT_100416c0 = DAT_100416c0 + 1;
    }
    FUN_1000c7c0(0xb);
  }
  return;
}



// Function: FUN_100157b0 @ 0x100157b0

void __fastcall FUN_100157b0(void *param_1)

{
  void *extraout_ECX;
  
  FUN_1000c720(param_1,0xb);
  FUN_100157d0(extraout_ECX);
  FUN_1000c7c0(0xb);
  return;
}



// Function: FUN_100157d0 @ 0x100157d0

void __fastcall FUN_100157d0(void *param_1)

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
  FUN_1000c720(param_1,0xc);
  DAT_10041608 = 0;
  DAT_1003f370 = 0xffffffff;
  DAT_1003f360 = 0xffffffff;
  _Str1 = (uint *)FID_conflict___getenv_lk("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_1000c7c0(0xc);
    DVar1 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10041610);
    if (DVar1 != 0xffffffff) {
      DAT_10041608 = 1;
      DAT_1003f2c8 = DAT_10041610 * 0x3c;
      if (DAT_10041656 != 0) {
        DAT_1003f2c8 = DAT_1003f2c8 + DAT_10041664 * 0x3c;
      }
      if ((DAT_100416aa == 0) || (DAT_100416b8 == 0)) {
        DAT_1003f2cc = 0;
        DAT_1003f2d0 = 0;
      }
      else {
        DAT_1003f2cc = 1;
        DAT_1003f2d0 = (DAT_100416b8 - DAT_10041664) * 0x3c;
      }
      iVar2 = WideCharToMultiByte(DAT_100416f0,0x220,(LPCWSTR)&DAT_10041614,-1,PTR_DAT_1003f354,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_1003f354 = 0;
      }
      else {
        PTR_DAT_1003f354[0x3f] = 0;
      }
      iVar2 = WideCharToMultiByte(DAT_100416f0,0x220,(LPCWSTR)&DAT_10041668,-1,PTR_DAT_1003f358,0x3f
                                  ,(LPCSTR)0x0,&local_c);
      if ((iVar2 == 0) || (local_c != 0)) {
        *PTR_DAT_1003f358 = 0;
      }
      else {
        PTR_DAT_1003f358[0x3f] = 0;
      }
    }
  }
  else if (((char)*_Str1 == '\0') ||
          ((DAT_100416bc != (uint *)0x0 &&
           (iVar2 = _strcmp((char *)_Str1,(char *)DAT_100416bc), iVar2 == 0)))) {
    FUN_1000c7c0(0xc);
  }
  else {
    FUN_1000d2b0(DAT_100416bc,2);
    iVar2 = 0x10c;
    pcVar5 = "tzset.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)_Str1);
    DAT_100416bc = (uint *)FUN_1000c820((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar2);
    if (DAT_100416bc == (uint *)0x0) {
      FUN_1000c7c0(0xc);
    }
    else {
      FUN_10010f30(DAT_100416bc,_Str1);
      FUN_1000c7c0(0xc);
      _strncpy(PTR_DAT_1003f354,(char *)_Str1,3);
      PTR_DAT_1003f354[3] = 0;
      local_10 = (uint *)((int)_Str1 + 3);
      if (*(char *)local_10 == '-') {
        local_8 = local_8 + 1;
        local_10 = _Str1 + 1;
      }
      iVar2 = FUN_1001af40((byte *)local_10);
      DAT_1003f2c8 = iVar2 * 0xe10;
      for (; ((char)*local_10 == '+' || (('/' < (char)*local_10 && ((char)*local_10 < ':'))));
          local_10 = (uint *)((int)local_10 + 1)) {
      }
      if ((char)*local_10 == ':') {
        local_10 = (uint *)((int)local_10 + 1);
        iVar2 = FUN_1001af40((byte *)local_10);
        DAT_1003f2c8 = DAT_1003f2c8 + iVar2 * 0x3c;
        for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
            local_10 = (uint *)((int)local_10 + 1)) {
        }
        if ((char)*local_10 == ':') {
          local_10 = (uint *)((int)local_10 + 1);
          iVar2 = FUN_1001af40((byte *)local_10);
          DAT_1003f2c8 = DAT_1003f2c8 + iVar2;
          for (; ('/' < (char)*local_10 && ((char)*local_10 < ':'));
              local_10 = (uint *)((int)local_10 + 1)) {
          }
        }
      }
      if (local_8 != 0) {
        DAT_1003f2c8 = -DAT_1003f2c8;
      }
      DAT_1003f2cc = (int)(char)*local_10;
      if (DAT_1003f2cc == 0) {
        *PTR_DAT_1003f358 = 0;
      }
      else {
        _strncpy(PTR_DAT_1003f358,(char *)local_10,3);
        PTR_DAT_1003f358[3] = 0;
      }
    }
  }
  return;
}



// Function: FUN_10015b80 @ 0x10015b80

undefined4 __thiscall FUN_10015b80(void *this,int *param_1)

{
  undefined4 uVar1;
  
  FUN_1000c720(this,0xb);
  uVar1 = FUN_10015bb0(param_1);
  FUN_1000c7c0(0xb);
  return uVar1;
}



// Function: FUN_10015bb0 @ 0x10015bb0

undefined4 __cdecl FUN_10015bb0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_1003f2cc == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_1003f360) || (param_1[5] != DAT_1003f370)) {
    if (DAT_10041608 == 0) {
      FUN_10015eb0(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_10015eb0(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_100416a8 == 0) {
        FUN_10015eb0(1,1,param_1[5],(uint)DAT_100416aa,(uint)DAT_100416ae,(uint)DAT_100416ac,0,
                     (uint)DAT_100416b0,(uint)DAT_100416b2,(uint)DAT_100416b4,(uint)DAT_100416b6);
      }
      else {
        FUN_10015eb0(1,0,param_1[5],(uint)DAT_100416aa,0,0,(uint)DAT_100416ae,(uint)DAT_100416b0,
                     (uint)DAT_100416b2,(uint)DAT_100416b4,(uint)DAT_100416b6);
      }
      if (DAT_10041654 == 0) {
        FUN_10015eb0(0,1,param_1[5],(uint)DAT_10041656,(uint)DAT_1004165a,(uint)DAT_10041658,0,
                     (uint)DAT_1004165c,(uint)DAT_1004165e,(uint)DAT_10041660,(uint)DAT_10041662);
      }
      else {
        FUN_10015eb0(0,0,param_1[5],(uint)DAT_10041656,0,0,(uint)DAT_1004165a,(uint)DAT_1004165c,
                     (uint)DAT_1004165e,(uint)DAT_10041660,(uint)DAT_10041662);
      }
    }
  }
  if (DAT_1003f364 < DAT_1003f374) {
    if ((param_1[7] < DAT_1003f364) || (DAT_1003f374 < param_1[7])) {
      return 0;
    }
    if ((DAT_1003f364 < param_1[7]) && (param_1[7] < DAT_1003f374)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_1003f374) || (DAT_1003f364 < param_1[7])) {
      return 1;
    }
    if ((DAT_1003f374 < param_1[7]) && (param_1[7] < DAT_1003f364)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_1003f364) {
    if (iVar2 < DAT_1003f368) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_1003f378) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_10015eb0 @ 0x10015eb0

void __cdecl
FUN_10015eb0(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      local_10 = (&DAT_1003f378)[param_4];
    }
    else {
      local_10 = *(int *)(&DAT_1003f3ac + param_4 * 4);
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
        local_14 = *(int *)(&DAT_1003f37c + param_4 * 4);
      }
      else {
        local_14 = *(int *)(&DAT_1003f3b0 + param_4 * 4);
      }
      if (local_14 < local_c) {
        local_c = local_c + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      local_18 = (&DAT_1003f378)[param_4];
    }
    else {
      local_18 = *(int *)(&DAT_1003f3ac + param_4 * 4);
    }
    local_c = local_18 + param_7;
  }
  if (param_1 == 1) {
    DAT_1003f364 = local_c;
    DAT_1003f368 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    DAT_1003f360 = param_3;
  }
  else {
    DAT_1003f374 = local_c;
    DAT_1003f378 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000 +
                   DAT_1003f2d0 * 1000;
    if (DAT_1003f378 < 0) {
      DAT_1003f378 = DAT_1003f378 + 86400000;
      DAT_1003f374 = local_c + -1;
    }
    else if (86399999 < DAT_1003f378) {
      DAT_1003f378 = DAT_1003f378 + -86400000;
      DAT_1003f374 = local_c + 1;
    }
    DAT_1003f370 = param_3;
  }
  return;
}



// Function: FUN_100160b0 @ 0x100160b0

undefined4 __thiscall FUN_100160b0(void *this,UINT param_1)

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
  
  FUN_1000c720(this,0x19);
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_10042af8) {
    FUN_1000c7c0(0x19);
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_10016560();
    FUN_1000c7c0(0x19);
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(UINT *)(&DAT_1003f3f0 + local_8 * 0x30) == CodePage) {
        for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
          (&DAT_10042c80)[local_28] = 0;
        }
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          for (local_c = &DAT_1003f400 + local_10 * 8 + local_8 * 0x30;
              (*local_c != 0 && (local_c[1] != 0)); local_c = local_c + 2) {
            for (local_28 = (uint)*local_c; local_28 <= local_c[1]; local_28 = local_28 + 1) {
              (&DAT_10042c81)[local_28] = (&DAT_10042c81)[local_28] | (&DAT_1003f3e8)[local_10];
            }
          }
        }
        DAT_10042b7c = 1;
        DAT_10042af8 = CodePage;
        DAT_10042d84 = FUN_10016460(CodePage);
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          *(undefined2 *)(&DAT_10042b70 + local_10 * 2) =
               *(undefined2 *)(&DAT_1003f3f4 + local_10 * 2 + local_8 * 0x30);
        }
        FUN_10016560();
        FUN_1000c7c0(0x19);
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&local_24);
    if (BVar2 == 1) {
      for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
        (&DAT_10042c80)[local_28] = 0;
      }
      DAT_10042d84 = 0;
      if (local_24.MaxCharSize < 2) {
        DAT_10042b7c = 0;
        DAT_10042af8 = CodePage;
      }
      else {
        DAT_10042af8 = CodePage;
        for (local_2c = local_24.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (local_28 = (uint)*local_2c; local_28 <= local_2c[1]; local_28 = local_28 + 1) {
            (&DAT_10042c81)[local_28] = (&DAT_10042c81)[local_28] | 4;
          }
        }
        for (local_28 = 1; local_28 < 0xff; local_28 = local_28 + 1) {
          (&DAT_10042c81)[local_28] = (&DAT_10042c81)[local_28] | 8;
        }
        DAT_10042d84 = FUN_10016460(DAT_10042af8);
        DAT_10042b7c = 1;
      }
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(undefined2 *)(&DAT_10042b70 + local_10 * 2) = 0;
      }
      FUN_10016560();
      FUN_1000c7c0(0x19);
      uVar1 = 0;
    }
    else if (DAT_100416c4 == 0) {
      FUN_1000c7c0(0x19);
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_10016560();
      FUN_1000c7c0(0x19);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// Function: getSystemCP @ 0x10016400

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_100416c4 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_100416c4 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_100416c4 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_100416c4 = 1;
    param_1 = DAT_100416f0;
  }
  return param_1;
}



// Function: FUN_10016460 @ 0x10016460

undefined4 __cdecl FUN_10016460(undefined4 param_1)

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



// Function: setSBCS @ 0x100164e0

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_10042c80)[local_8] = 0;
  }
  DAT_10042af8 = 0;
  DAT_10042b7c = 0;
  DAT_10042d84 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_10042b70 + local_8 * 2) = 0;
  }
  return;
}



// Function: FUN_10016560 @ 0x10016560

void FUN_10016560(void)

{
  BOOL BVar1;
  uint local_520;
  WCHAR local_51c [128];
  WCHAR local_41c [128];
  _cpinfo local_31c;
  CHAR local_308 [256];
  WORD local_208 [256];
  BYTE *local_8;
  
  BVar1 = GetCPInfo(DAT_10042af8,&local_31c);
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
    FUN_10018c30(1,local_308,0x100,local_208,DAT_10042af8,DAT_10042d84,0);
    FUN_10019840(DAT_10042d84,0x100,local_308,0x100,local_41c,0x100,DAT_10042af8,0);
    FUN_10019840(DAT_10042d84,0x200,local_308,0x100,local_51c,0x100,DAT_10042af8,0);
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_208[local_520] & 1) == 0) {
        if ((local_208[local_520] & 2) == 0) {
          (&DAT_10042b80)[local_520] = 0;
        }
        else {
          (&DAT_10042c81)[local_520] = (&DAT_10042c81)[local_520] | 0x20;
          (&DAT_10042b80)[local_520] = *(undefined1 *)((int)local_51c + local_520);
        }
      }
      else {
        (&DAT_10042c81)[local_520] = (&DAT_10042c81)[local_520] | 0x10;
        (&DAT_10042b80)[local_520] = *(undefined1 *)((int)local_41c + local_520);
      }
    }
  }
  else {
    for (local_520 = 0; local_520 < 0x100; local_520 = local_520 + 1) {
      if ((local_520 < 0x41) || (0x5a < local_520)) {
        if ((local_520 < 0x61) || (0x7a < local_520)) {
          (&DAT_10042b80)[local_520] = 0;
        }
        else {
          (&DAT_10042c81)[local_520] = (&DAT_10042c81)[local_520] | 0x20;
          (&DAT_10042b80)[local_520] = (char)local_520 + -0x20;
        }
      }
      else {
        (&DAT_10042c81)[local_520] = (&DAT_10042c81)[local_520] | 0x10;
        (&DAT_10042b80)[local_520] = (char)local_520 + ' ';
      }
    }
  }
  return;
}



// Function: FUN_10016870 @ 0x10016870

undefined4 FUN_10016870(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10042af8;
  if (DAT_10042b7c == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_10016890 @ 0x10016890

void __fastcall FUN_10016890(void *param_1)

{
  if (DAT_10042f10 == 0) {
    FUN_100160b0(param_1,0xfffffffd);
    DAT_10042f10 = 1;
  }
  return;
}



// Function: FUN_100168c0 @ 0x100168c0

undefined4 * __cdecl FUN_100168c0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10016a77_caseD_2;
        case 3:
          goto switchD_10016a77_caseD_3;
        }
        goto switchD_10016a77_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10016a77_caseD_0;
      case 1:
        goto switchD_10016a77_caseD_1;
      case 2:
        goto switchD_10016a77_caseD_2;
      case 3:
        goto switchD_10016a77_caseD_3;
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
              goto switchD_10016a77_caseD_2;
            case 3:
              goto switchD_10016a77_caseD_3;
            }
            goto switchD_10016a77_caseD_1;
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
              goto switchD_10016a77_caseD_2;
            case 3:
              goto switchD_10016a77_caseD_3;
            }
            goto switchD_10016a77_caseD_1;
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
              goto switchD_10016a77_caseD_2;
            case 3:
              goto switchD_10016a77_caseD_3;
            }
            goto switchD_10016a77_caseD_1;
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
switchD_10016a77_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10016a77_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10016a77_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10016a77_caseD_0:
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
        goto switchD_100168f5_caseD_2;
      case 3:
        goto switchD_100168f5_caseD_3;
      }
      goto switchD_100168f5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100168f5_caseD_0;
    case 1:
      goto switchD_100168f5_caseD_1;
    case 2:
      goto switchD_100168f5_caseD_2;
    case 3:
      goto switchD_100168f5_caseD_3;
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
            goto switchD_100168f5_caseD_2;
          case 3:
            goto switchD_100168f5_caseD_3;
          }
          goto switchD_100168f5_caseD_1;
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
            goto switchD_100168f5_caseD_2;
          case 3:
            goto switchD_100168f5_caseD_3;
          }
          goto switchD_100168f5_caseD_1;
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
            goto switchD_100168f5_caseD_2;
          case 3:
            goto switchD_100168f5_caseD_3;
          }
          goto switchD_100168f5_caseD_1;
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
switchD_100168f5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100168f5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100168f5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100168f5_caseD_0:
  return param_1;
}



// Function: __aulldiv @ 0x10016c00

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



// Function: __aullrem @ 0x10016c70

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



// Function: FUN_10016cf0 @ 0x10016cf0

uint __cdecl FUN_10016cf0(uint param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *local_18;
  uint local_10;
  uint local_8;
  
  if ((param_2 == (int *)0x0) &&
     (iVar3 = FUN_1000b3e0(2,0x1003c164,0x69,0,(byte *)"str != NULL"), iVar3 == 1)) {
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
       (((param_2 != (int *)&DAT_1003f8b8 && (param_2 != (int *)&DAT_1003f8d8)) ||
        (iVar3 = __isatty(uVar4), iVar3 == 0)))) {
      FUN_1001b6f0(piVar2);
    }
    if ((piVar2[3] & 0x108U) == 0) {
      local_8 = 1;
      local_10 = FUN_1001b3e0(uVar4,(char *)&param_1,1);
    }
    else {
      if ((*piVar2 - piVar2[2] < 0) &&
         (iVar3 = FUN_1000b3e0(2,0x1003c164,0xa0,0,
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
          local_18 = &DAT_1003ef28;
        }
        else {
          local_18 = (undefined *)((&DAT_10042dc0)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x24);
        }
        if ((local_18[4] & 0x20) != 0) {
          FUN_1001b290(uVar4,0,2);
        }
      }
      else {
        local_10 = FUN_1001b3e0(uVar4,(char *)piVar2[2],local_8);
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



// Function: FUN_10016f70 @ 0x10016f70

int __cdecl FUN_10016f70(int *param_1,byte *param_2,undefined4 *param_3)

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
    local_1c = (int)(char)(&DAT_1003c17c)[local_294 * 8 + local_1c] >> 4;
    switch(local_1c) {
    case 0:
switchD_10017029_caseD_0:
      local_20 = 0;
      pbVar4 = pbVar5;
      if ((*(ushort *)(PTR_DAT_1003efec + (uint)bVar1 * 2) & 0x8000) != 0) {
        FUN_10017ca0((int)(char)bVar1,param_1,&local_230);
        stack0xffffffd4 = CONCAT31(uStack_2b,*pbVar5);
        pbVar4 = param_2 + 2;
        if ((*pbVar5 == 0) &&
           (iVar9 = FUN_1000b3e0(2,0x1003c1f0,0x186,0,(byte *)"ch != _T(\'\\0\')"), iVar9 == 1)) {
          pcVar3 = (code *)swi(3);
          iVar9 = (*pcVar3)();
          return iVar9;
        }
      }
      param_2 = pbVar4;
      FUN_10017ca0((int)uStack_2d._1_1_,param_1,&local_230);
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
        local_248 = FUN_10017db0((int *)&param_3);
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
        local_238 = FUN_10017db0((int *)&param_3);
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
          goto switchD_10017029_caseD_0;
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
          uVar6 = FUN_10017db0((int *)&param_3);
          local_24c._0_1_ = (undefined1)uVar6;
          local_22c[0]._0_1_ = (undefined1)local_24c;
          local_28 = 1;
          local_24c = (short)uVar6;
        }
        else {
          local_18 = FUN_10017df0((int *)&param_3);
          local_28 = FUN_1001ba30((LPSTR)local_22c,local_18);
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
        (*(code *)PTR___fptrap_1003ee20)(&local_268,local_24,(int)uStack_2d._1_1_,local_238,local_c)
        ;
        if (((local_8 & 0x80) != 0) && (local_238 == 0)) {
          (*(code *)PTR___fptrap_1003ee2c)(local_24);
        }
        if ((uStack_2d._1_1_ == 'g') && ((local_8 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_1003ee24)(local_24);
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
        local_24 = (short *)FUN_10017db0((int *)&param_3);
        if ((local_8 & 0x810) == 0) {
          if (local_24 == (short *)0x0) {
            local_24 = (short *)PTR_DAT_1003f4e0;
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
            local_24 = (short *)PTR_DAT_1003f4e4;
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
        local_250 = (short *)FUN_10017db0((int *)&param_3);
        if ((local_250 == (short *)0x0) || (*(int *)(local_250 + 2) == 0)) {
          local_24 = (short *)PTR_DAT_1003f4e0;
          local_28 = _strlen(PTR_DAT_1003f4e0);
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
        goto LAB_10017735;
      case 0x6e:
        local_260 = (int *)FUN_10017db0((int *)&param_3);
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
        goto LAB_10017735;
      case 0x70:
        local_238 = 8;
      case 0x58:
        local_234 = 7;
        goto LAB_100176df;
      case 0x75:
        local_23c = 10;
        goto LAB_10017735;
      case 0x78:
        local_234 = 0x27;
LAB_100176df:
        local_23c = 0x10;
        if ((local_8 & 0x80) != 0) {
          local_244 = '0';
          local_243 = (char)local_234 + 'Q';
          local_14 = 2;
        }
LAB_10017735:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar7 = FUN_10017db0((int *)&param_3);
              local_27c = (ulonglong)uVar7;
            }
            else {
              iVar9 = FUN_10017db0((int *)&param_3);
              local_27c = (ulonglong)iVar9;
            }
          }
          else if ((local_8 & 0x40) == 0) {
            uVar7 = FUN_10017db0((int *)&param_3);
            local_27c = (ulonglong)(uVar7 & 0xffff);
          }
          else {
            uVar6 = FUN_10017db0((int *)&param_3);
            local_27c = (ulonglong)(int)(short)uVar6;
          }
        }
        else {
          local_27c = FUN_10017dd0((int *)&param_3);
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
          FUN_10017d20(0x20,local_280,param_1,&local_230);
        }
        FUN_10017d60(&local_244,local_14,param_1,&local_230);
        if (((local_8 & 8) != 0) && ((local_8 & 4) == 0)) {
          FUN_10017d20(0x30,local_280,param_1,&local_230);
        }
        if ((local_20 == 0) || ((int)local_28 < 1)) {
          FUN_10017d60((char *)local_24,local_28,param_1,&local_230);
        }
        else {
          local_284 = local_24;
          local_288 = local_28;
          while (sVar8 = local_288 - 1, bVar11 = local_288 != 0, local_288 = sVar8, bVar11) {
            sVar2 = *local_284;
            local_284 = local_284 + 1;
            iVar9 = FUN_1001ba30(local_28c,sVar2);
            if (iVar9 < 1) break;
            FUN_10017d60(local_28c,iVar9,param_1,&local_230);
          }
        }
        if ((local_8 & 4) != 0) {
          FUN_10017d20(0x20,local_280,param_1,&local_230);
        }
      }
    }
  } while( true );
}



// Function: FUN_10017ca0 @ 0x10017ca0

void __cdecl FUN_10017ca0(uint param_1,int *param_2,int *param_3)

{
  uint local_8;
  
  param_2[1] = param_2[1] + -1;
  if (param_2[1] < 0) {
    local_8 = FUN_10016cf0(param_1,param_2);
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



// Function: FUN_10017d20 @ 0x10017d20

void __cdecl FUN_10017d20(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    FUN_10017ca0(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Function: FUN_10017d60 @ 0x10017d60

void __cdecl FUN_10017d60(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_10017ca0((int)cVar1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Function: FUN_10017db0 @ 0x10017db0

undefined4 __cdecl FUN_10017db0(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



// Function: FUN_10017dd0 @ 0x10017dd0

undefined8 __cdecl FUN_10017dd0(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



// Function: FUN_10017df0 @ 0x10017df0

undefined2 __cdecl FUN_10017df0(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined2 *)(*param_1 + -4);
}



// Function: __dosmaperr @ 0x10017e10

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  DWORD *pDVar1;
  uint local_8;
  
  pDVar1 = FUN_10017ec0();
  *pDVar1 = param_1;
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          pDVar1 = FUN_10017eb0();
          *pDVar1 = 0x16;
        }
        else {
          pDVar1 = FUN_10017eb0();
          *pDVar1 = 8;
        }
      }
      else {
        pDVar1 = FUN_10017eb0();
        *pDVar1 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_1003f4e8 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  pDVar1 = FUN_10017eb0();
  *pDVar1 = *(DWORD *)(&DAT_1003f4ec + local_8 * 8);
  return;
}



// Function: FUN_10017eb0 @ 0x10017eb0

DWORD * FUN_10017eb0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000f520();
  return pDVar1 + 2;
}



// Function: FUN_10017ec0 @ 0x10017ec0

DWORD * FUN_10017ec0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000f520();
  return pDVar1 + 3;
}



// Function: FUN_10017ed0 @ 0x10017ed0

float10 __cdecl FUN_10017ed0(int param_1,undefined4 param_2,undefined4 param_3)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_1003f728 == 0) {
    fVar2 = __umatherr(1,param_1,param_2,param_3,0,0,param_2,param_3);
  }
  else {
    pDVar1 = FUN_10017eb0();
    *pDVar1 = 0x21;
    FUN_10018b70();
    fVar2 = (float10)(double)CONCAT44(param_3,param_2);
  }
  return fVar2;
}



// Function: FUN_10017f30 @ 0x10017f30

float10 __cdecl
FUN_10017f30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  double dVar1;
  DWORD *pDVar2;
  float10 fVar3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  dVar1 = (double)CONCAT44(param_3,param_2) + (double)CONCAT44(param_5,param_4);
  if (DAT_1003f728 == 0) {
    uStack_8 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_c = SUB84(dVar1,0);
    fVar3 = __umatherr(1,param_1,param_2,param_3,param_4,param_5,local_c,uStack_8);
  }
  else {
    pDVar2 = FUN_10017eb0();
    *pDVar2 = 0x21;
    FUN_10018b70();
    fVar3 = (float10)dVar1;
  }
  return fVar3;
}



// Function: FUN_10017fa0 @ 0x10017fa0

float10 __cdecl
FUN_10017fa0(uint param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  float10 fVar2;
  uint local_60 [14];
  uint local_28;
  int local_8;
  
  bVar1 = FUN_10018600(param_1,(double *)&param_5,param_7);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_28 = local_28 & 0xfffffffe;
    FUN_10018130(local_60,&param_7,param_1,param_2,&param_3,&param_5);
  }
  local_8 = FUN_10018aa0(param_1);
  if ((DAT_1003f728 == 0) && (local_8 != 0)) {
    fVar2 = __umatherr(local_8,param_2,param_3,param_4,0,0,param_5,param_6);
  }
  else {
    FID_conflict___set_errno_from_matherr(local_8);
    FUN_10018b70();
    fVar2 = (float10)(double)CONCAT44(param_6,param_5);
  }
  return fVar2;
}



// Function: FUN_10018060 @ 0x10018060

float10 __cdecl
FUN_10018060(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
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
  
  bVar1 = FUN_10018600(param_1,(double *)&param_7,param_9);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_28 = local_28 & 0xffffffe1 | 3;
    local_38 = param_5;
    local_34 = param_6;
    FUN_10018130(local_60,&param_9,param_1,param_2,&param_3,&param_7);
  }
  local_8 = FUN_10018aa0(param_1);
  if ((DAT_1003f728 == 0) && (local_8 != 0)) {
    fVar2 = __umatherr(local_8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FID_conflict___set_errno_from_matherr(local_8);
    FUN_10018b70();
    fVar2 = (float10)(double)CONCAT44(param_8,param_7);
  }
  return fVar2;
}



// Function: FUN_10018130 @ 0x10018130

void __cdecl
FUN_10018130(uint *param_1,uint *param_2,uint param_3,uint param_4,uint *param_5,uint *param_6)

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
  uVar1 = FUN_10018b30();
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
  FUN_10018b50();
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



// Function: FUN_10018600 @ 0x10018600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_10018600(uint param_1,double *param_2,uint param_3)

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
          if (*param_2 == _DAT_1003b5c8) {
            local_c = 1;
          }
          else {
            fVar4 = FUN_1001bcc0(*(uint *)param_2,*(uint *)((int)param_2 + 4),&local_1c);
            dVar1 = (double)fVar4;
            local_18 = local_1c + -0x600;
            if (local_18 < -0x432) {
              local_14 = dVar1 * _DAT_1003b5c8;
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
              if (dVar1 < _DAT_1003b5c8) {
                local_14 = -local_14;
              }
            }
            *(uint *)param_2 = (uint)local_14;
            *(uint *)((int)param_2 + 4) = local_14._4_4_;
          }
          if (local_c != 0) {
            FUN_10018bb0();
          }
          local_8 = local_8 & 0xfffffffd;
        }
      }
      else {
        FUN_10018bb0();
        uVar3 = param_3 & 0xc00;
        if (uVar3 < 0x801) {
          if (uVar3 == 0x800) {
            if (*param_2 <= _DAT_1003b5c8) {
              local_34 = -(double)CONCAT44(DAT_1003fb2c,DAT_1003fb28);
            }
            else {
              local_34 = (double)CONCAT44(DAT_1003fb1c,DAT_1003fb18);
            }
            *(undefined4 *)param_2 = (undefined4)local_34;
            *(undefined4 *)((int)param_2 + 4) = local_34._4_4_;
          }
          else if (uVar3 == 0) {
            if (*param_2 <= _DAT_1003b5c8) {
              local_2c = -(double)CONCAT44(DAT_1003fb1c,DAT_1003fb18);
            }
            else {
              local_2c = (double)CONCAT44(DAT_1003fb1c,DAT_1003fb18);
            }
            *(undefined4 *)param_2 = (undefined4)local_2c;
            *(undefined4 *)((int)param_2 + 4) = local_2c._4_4_;
          }
          else if (uVar3 == 0x400) {
            if (*param_2 <= _DAT_1003b5c8) {
              local_3c = -(double)CONCAT44(DAT_1003fb1c,DAT_1003fb18);
            }
            else {
              local_3c = (double)CONCAT44(DAT_1003fb2c,DAT_1003fb28);
            }
            *(undefined4 *)param_2 = (undefined4)local_3c;
            *(undefined4 *)((int)param_2 + 4) = local_3c._4_4_;
          }
        }
        else if (uVar3 == 0xc00) {
          if (*param_2 <= _DAT_1003b5c8) {
            local_44 = -(double)CONCAT44(DAT_1003fb2c,DAT_1003fb28);
          }
          else {
            local_44 = (double)CONCAT44(DAT_1003fb2c,DAT_1003fb28);
          }
          *(undefined4 *)param_2 = (undefined4)local_44;
          *(undefined4 *)((int)param_2 + 4) = local_44._4_4_;
        }
        local_8 = local_8 & 0xfffffffe;
      }
    }
    else {
      FUN_10018bb0();
      local_8 = local_8 & 0xfffffffb;
    }
  }
  else {
    FUN_10018bb0();
    local_8 = local_8 & 0xfffffff7;
  }
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_10018bb0();
    local_8 = local_8 & 0xffffffef;
  }
  return local_8 == 0;
}



// Function: __umatherr @ 0x10018980

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
    FUN_10018b70();
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
    FUN_10018b70();
    iVar2 = __matherr(&local_24);
    if (iVar2 == 0) {
      FID_conflict___set_errno_from_matherr(param_1);
    }
    dVar1 = (double)CONCAT44(local_24.retval._4_4_,local_24.retval._0_4_);
  }
  return (float10)dVar1;
}



// Function: FID_conflict:__set_errno_from_matherr @ 0x10018a20

/* Library Function - Multiple Matches With Different Base Names
    __set_errno
    __set_errno_from_matherr
   
   Library: Visual Studio */

errno_t __cdecl FID_conflict___set_errno_from_matherr(int _Value)

{
  if (_Value == 1) {
    _Value = (int)FUN_10017eb0();
    *(DWORD *)_Value = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    _Value = (int)FUN_10017eb0();
    *(DWORD *)_Value = 0x22;
  }
  return _Value;
}



// Function: __get_fname @ 0x10018a60

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
    if (*(int *)(&DAT_1003f650 + local_8 * 8) == param_1) break;
    local_8 = local_8 + 1;
  }
  return (&PTR_DAT_1003f654)[local_8 * 2];
}



// Function: FUN_10018aa0 @ 0x10018aa0

undefined4 __cdecl FUN_10018aa0(uint param_1)

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



// Function: __matherr @ 0x10018b20

/* Library Function - Single Match
    __matherr
   
   Library: Visual Studio */

int __cdecl __matherr(_exception *_Except)

{
  return 0;
}



// Function: FUN_10018b30 @ 0x10018b30

int FUN_10018b30(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



// Function: FUN_10018b50 @ 0x10018b50

int FUN_10018b50(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



// Function: FUN_10018b70 @ 0x10018b70

int FUN_10018b70(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



// Function: FUN_10018bb0 @ 0x10018bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018bb0(void)

{
  return;
}



// Function: FUN_10018c30 @ 0x10018c30

BOOL __cdecl
FUN_10018c30(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1003c2c8;
  puStack_10 = &LAB_1001544c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc4;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc4;
  if (DAT_100416c8 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100416c8 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_100416c8 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_100416c8 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_100416e0;
    }
    BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  }
  else if (DAT_100416c8 == 1) {
    if (param_5 == 0) {
      param_5 = DAT_100416f0;
    }
    iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar3 == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_10011120();
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



// Function: FUN_10018df0 @ 0x10018df0

uint * __thiscall FUN_10018df0(void *this,int param_1,uint *param_2)

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
    FUN_1000c720(this,0x13);
    local_8 = 1;
    DAT_10042ae4 = DAT_10042ae4 + 1;
    while (DAT_10042af4 != 0) {
      Sleep(1);
    }
    if (param_1 == 0) {
      local_18 = 1;
      local_10 = 0;
      if (param_2 == (uint *)0x0) {
        local_c = FUN_10019380();
      }
      else if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
              (*(char *)((int)param_2 + 2) == '_')) {
        local_a0 = param_2;
        do {
          pbVar1 = FUN_1001d340((byte *)local_a0,&DAT_1003c318);
          if (((pbVar1 == (byte *)0x0) || (sVar4 = (int)pbVar1 - (int)local_a0, sVar4 == 0)) ||
             (*pbVar1 == 0x3b)) {
            if (local_8 != 0) {
              FUN_1000c7c0(0x13);
              DAT_10042ae4 = DAT_10042ae4 + -1;
            }
            return (uint *)0x0;
          }
          local_14 = 1;
          while ((local_14 < 6 &&
                 ((iVar2 = _strncmp(*(char **)(local_14 * 0xc + 0x1003f850),(char *)local_a0,sVar4),
                  iVar2 != 0 ||
                  (sVar3 = _strlen(*(char **)(local_14 * 0xc + 0x1003f850)), sVar4 != sVar3))))) {
            local_14 = local_14 + 1;
          }
          pbVar1 = pbVar1 + 1;
          sVar4 = FUN_1001d2c0(pbVar1,&DAT_1003c314);
          if ((sVar4 == 0) && (*pbVar1 != 0x3b)) {
            if (local_8 != 0) {
              FUN_1000c7c0(0x13);
              DAT_10042ae4 = DAT_10042ae4 + -1;
            }
            return (uint *)0x0;
          }
          if (local_14 < 6) {
            _strncpy((char *)local_9c,(char *)pbVar1,sVar4);
            *(undefined1 *)((int)local_9c + sVar4) = 0;
            iVar2 = FUN_100191e0(local_14,local_9c);
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
          local_b0 = FUN_10019380();
        }
        local_c = local_b0;
      }
      else {
        local_c = FUN_10019480(param_2,local_9c,(undefined4 *)0x0,(undefined4 *)0x0);
        if (local_c != (uint *)0x0) {
          for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
            if (local_14 != 0) {
              iVar2 = _strcmp((char *)local_9c,(&DAT_1003f854)[local_14 * 3]);
              if (iVar2 == 0) {
                local_10 = local_10 + 1;
              }
              else {
                iVar2 = FUN_100191e0(local_14,local_9c);
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
              local_b4 = FUN_10019380();
            }
            local_c = local_b4;
          }
          else {
            local_c = FUN_10019380();
            FUN_1000d2b0(DAT_1003f854,2);
            DAT_1003f854 = (void *)0x0;
          }
        }
      }
    }
    else {
      if (param_2 == (uint *)0x0) {
        local_ac = (&DAT_1003f854)[param_1 * 3];
      }
      else {
        local_ac = (uint *)FUN_100191e0(param_1,param_2);
      }
      local_c = local_ac;
    }
    if (local_8 != 0) {
      FUN_1000c7c0(0x13);
      DAT_10042ae4 = DAT_10042ae4 + -1;
    }
  }
  return local_c;
}



// Function: FUN_100191e0 @ 0x100191e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100191e0(int param_1,uint *param_2)

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
  
  puVar1 = FUN_10019480(param_2,local_a0,local_ac,&local_a4);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0x132;
    pcVar5 = "setlocal.c";
    uVar4 = 2;
    sVar3 = _strlen((char *)local_a0);
    local_c = (uint *)FUN_1000c820((void *)(sVar3 + 1),uVar4,(int)pcVar5,iVar6);
    if (local_c == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      local_10 = (undefined *)(&DAT_1003f854)[param_1 * 3];
      local_8 = *(undefined4 *)(&DAT_100416d8 + param_1 * 4);
      FUN_100168c0(local_18,(undefined4 *)(&DAT_1004171c + param_1 * 6),6);
      local_1c = DAT_100416f0;
      puVar1 = FUN_10010f30(local_c,local_a0);
      (&DAT_1003f854)[param_1 * 3] = puVar1;
      *(uint *)(&DAT_100416d8 + param_1 * 4) = local_ac[0] & 0xffff;
      FUN_100168c0((undefined4 *)(&DAT_1004171c + param_1 * 6),local_ac,6);
      if (param_1 == 2) {
        DAT_100416f0 = local_a4;
      }
      if (param_1 == 1) {
        _DAT_100416f4 = local_a4;
      }
      iVar6 = (**(code **)(&DAT_1003f858 + param_1 * 0xc))();
      if (iVar6 == 0) {
        if (local_10 != &DAT_1003f744) {
          FUN_1000d2b0(local_10,2);
        }
        uVar2 = (&DAT_1003f854)[param_1 * 3];
      }
      else {
        (&DAT_1003f854)[param_1 * 3] = local_10;
        FUN_1000d2b0(local_c,2);
        *(undefined4 *)(&DAT_100416d8 + param_1 * 4) = local_8;
        DAT_100416f0 = local_1c;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



// Function: FUN_10019380 @ 0x10019380

uint * FUN_10019380(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int local_8;
  
  bVar1 = true;
  if (DAT_1003f854 == (uint *)0x0) {
    DAT_1003f854 = (uint *)FUN_1000c820((void *)0x351,2,0x1003c31c,0x167);
  }
  *(undefined1 *)DAT_1003f854 = 0;
  for (local_8 = 1; __strcats(DAT_1003f854,3), local_8 < 5; local_8 = local_8 + 1) {
    FUN_10010f40(DAT_1003f854,(uint *)&DAT_1003c314);
    iVar2 = _strcmp((char *)(&DAT_1003f854)[local_8 * 3],(char *)(&DAT_1003f854)[(local_8 + 1) * 3])
    ;
    if (iVar2 != 0) {
      bVar1 = false;
    }
  }
  puVar3 = DAT_1003f854;
  if (bVar1) {
    FUN_1000d2b0(DAT_1003f854,2);
    DAT_1003f854 = (uint *)0x0;
    puVar3 = (uint *)PTR_DAT_1003f86c;
  }
  return puVar3;
}



// Function: FUN_10019480 @ 0x10019480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_10019480(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

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
    iVar1 = _strcmp(&DAT_1003f7cc,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_1003f748,(char *)param_1), iVar1 != 0)) {
      iVar1 = FUN_10019670((char *)local_8c,(byte *)param_1);
      if (iVar1 != 0) {
        return (uint *)0x0;
      }
      iVar1 = FUN_1001d380((char *)local_8c,(undefined2 *)&DAT_100416cc,(int)local_8c);
      if (iVar1 == 0) {
        return (uint *)0x0;
      }
      _DAT_100416d4 = (uint)DAT_100416d0;
      ___lc_lctostr((uint *)&DAT_1003f7cc,local_8c);
      if ((char)*param_1 == '\0') {
        FUN_10010f30((uint *)&DAT_1003f748,(uint *)&DAT_1003f7cc);
      }
      else {
        FUN_10010f30((uint *)&DAT_1003f748,param_1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_100168c0(param_3,(undefined4 *)&DAT_100416cc,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_100168c0(param_4,(undefined4 *)&DAT_100416d4,4);
    }
    FUN_10010f30(param_2,(uint *)&DAT_1003f7cc);
    param_2 = (uint *)&DAT_1003f7cc;
  }
  return param_2;
}



// Function: FUN_10019610 @ 0x10019610

undefined4 FUN_10019610(void)

{
  return 0;
}



// Function: __strcats @ 0x10019620

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Debug */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    FUN_10010f40(param_1,(uint *)*local_8);
    local_8 = local_8 + 1;
  }
  return;
}



// Function: FUN_10019670 @ 0x10019670

undefined4 __cdecl FUN_10019670(char *param_1,byte *param_2)

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
    FUN_10010f30((uint *)(param_1 + 0x80),(uint *)(param_2 + 1));
    uVar2 = 0;
  }
  else {
    local_8 = 0;
    while (_Count = FUN_1001d2c0(param_2,&DAT_1003c32c), _Count != 0) {
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



// Function: ___lc_lctostr @ 0x100197d0

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___lc_lctostr(uint *param_1,uint *param_2)

{
  FUN_10010f30(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    __strcats(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    __strcats(param_1,2);
  }
  return;
}



// Function: FUN_10019840 @ 0x10019840

int __cdecl
FUN_10019840(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1003c338;
  puStack_10 = &LAB_1001544c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_100416f8 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100416f8 = 2;
    }
    else {
      DAT_100416f8 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10019b50(param_3,param_4);
  }
  if (DAT_100416f8 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
  }
  else if (DAT_100416f8 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100416f0;
    }
    iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10011120();
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
            FUN_10011120();
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



// Function: FUN_10019b50 @ 0x10019b50

int __cdecl FUN_10019b50(char *param_1,int param_2)

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



// Function: ___addl @ 0x10019ba0

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



// Function: ___add_12 @ 0x10019be0

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



// Function: ___shl_12 @ 0x10019c90

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



// Function: ___shr_12 @ 0x10019cf0

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



// Function: FUN_10019d60 @ 0x10019d60

void __cdecl FUN_10019d60(char *param_1,int param_2,uint *param_3)

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



// Function: FUN_10019ea0 @ 0x10019ea0

uint __cdecl
FUN_10019ea0(undefined2 *param_1,undefined4 *param_2,byte *param_3,int param_4,int param_5,
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
          FUN_10019d60(local_3c,local_74,(uint *)&local_64);
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
              FUN_1001e560((int *)&local_64,local_18,param_4);
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
        if (bVar1 == DAT_1003efe4) {
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
        if (bVar1 == DAT_1003efe4) {
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
        if (bVar1 == DAT_1003efe4) {
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
        if (DAT_1003efe0 < 2) {
          local_94 = *(ushort *)(PTR_DAT_1003efec + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_94 = FUN_10011ec0(local_40 & 0xff,4);
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
      if ((byte)local_40 == DAT_1003efe4) {
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
        if (DAT_1003efe0 < 2) {
          local_9c = *(ushort *)(PTR_DAT_1003efec + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_9c = FUN_10011ec0(local_40 & 0xff,4);
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
      if (DAT_1003efe0 < 2) {
        local_a4 = *(ushort *)(PTR_DAT_1003efec + (uint)bVar1 * 2) & 4;
        local_8 = pbVar3;
      }
      else {
        local_8 = pbVar3;
        local_a4 = FUN_10011ec0((uint)bVar1,4);
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
        if (DAT_1003efe0 < 2) {
          local_b0 = *(ushort *)(PTR_DAT_1003efec + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_b0 = FUN_10011ec0(local_40 & 0xff,4);
        }
        if (local_b0 == 0) goto LAB_1001a5c7;
        local_80 = local_80 * 10 + -0x30 + (int)(char)(byte)local_40;
        if (0x1450 < local_80) break;
        local_40 = CONCAT31(local_40._1_3_,*local_8);
        local_8 = local_8 + 1;
      }
      local_80 = 0x1451;
LAB_1001a5c7:
      local_18 = local_80;
      while( true ) {
        if (DAT_1003efe0 < 2) {
          local_b4 = *(ushort *)(PTR_DAT_1003efec + (local_40 & 0xff) * 2) & 4;
        }
        else {
          local_b4 = FUN_10011ec0(local_40 & 0xff,4);
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



// Function: FUN_1001a9d0 @ 0x1001a9d0

uint __cdecl FUN_1001a9d0(undefined4 *param_1,undefined4 *param_2,byte *param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_18;
  ushort local_10 [6];
  
  local_18 = FUN_10019ea0(local_10,param_2,param_3,param_4,0,0,0);
  bVar1 = FUN_100127c0(local_10,param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    local_18 = local_18 | 2;
  }
  return local_18;
}



// Function: FUN_1001aa20 @ 0x1001aa20

undefined4 __cdecl
FUN_1001aa20(int param_1,uint param_2,ushort param_3,int param_4,uint param_5,short *param_6)

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
          FUN_10010f30((uint *)(param_6 + 2),(uint *)"1#INF");
          *(undefined1 *)((int)param_6 + 3) = 5;
        }
        else {
          FUN_10010f30((uint *)(param_6 + 2),(uint *)"1#QNAN");
          *(undefined1 *)((int)param_6 + 3) = 6;
        }
      }
      else {
        FUN_10010f30((uint *)(param_6 + 2),(uint *)"1#IND");
        *(undefined1 *)((int)param_6 + 3) = 5;
      }
    }
    else {
      FUN_10010f30((uint *)(param_6 + 2),(uint *)"1#SNAN");
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
    FUN_1001e560((int *)&local_3c,-(int)local_60,1);
    if (0x3ffe < CONCAT11(cStack_31,local_32)) {
      local_60 = local_60 + 1;
      FUN_1001e120((int *)&local_3c,(int *)&local_58);
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



// Function: FUN_1001af40 @ 0x1001af40

int __cdecl FUN_1001af40(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_c;
  uint local_8;
  
  while( true ) {
    if (DAT_1003efe0 < 2) {
      local_14 = *(ushort *)(PTR_DAT_1003efec + (uint)*param_1 * 2) & 8;
    }
    else {
      local_14 = FUN_10011ec0((uint)*param_1,8);
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
    if (DAT_1003efe0 < 2) {
      local_18 = *(ushort *)(PTR_DAT_1003efec + local_8 * 2) & 4;
    }
    else {
      local_18 = FUN_10011ec0(local_8,4);
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



// Function: FUN_1001b040 @ 0x1001b040

void __cdecl FUN_1001b040(byte *param_1)

{
  FUN_1001af40(param_1);
  return;
}



// Function: FUN_1001b060 @ 0x1001b060

undefined8 __cdecl FUN_1001b060(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  uint local_1c;
  uint local_18;
  undefined8 local_10;
  uint local_8;
  
  while( true ) {
    if (DAT_1003efe0 < 2) {
      local_18 = *(ushort *)(PTR_DAT_1003efec + (uint)*param_1 * 2) & 8;
    }
    else {
      local_18 = FUN_10011ec0((uint)*param_1,8);
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
    if (DAT_1003efe0 < 2) {
      local_1c = *(ushort *)(PTR_DAT_1003efec + local_8 * 2) & 4;
    }
    else {
      local_1c = FUN_10011ec0(local_8,4);
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



// Function: FUN_1001b190 @ 0x1001b190

char * __thiscall FUN_1001b190(void *this,char *param_1)

{
  char *pcVar1;
  
  FUN_1000c720(this,0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_1000c7c0(0xc);
  return pcVar1;
}



// Function: FID_conflict:__getenv_lk @ 0x1001b1c0

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
  
  local_c = DAT_100414a4;
  if (DAT_10042f00 != 0) {
    if ((DAT_100414a4 == (int *)0x0) && (DAT_100414ac != 0)) {
      iVar1 = FUN_1001e6c0();
      if (iVar1 != 0) {
        return (char *)0x0;
      }
      local_c = DAT_100414a4;
    }
    DAT_100414a4 = local_c;
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



// Function: FUN_1001b290 @ 0x1001b290

DWORD __cdecl FUN_1001b290(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  if ((param_1 < DAT_10042efc) &&
     ((*(byte *)((&DAT_10042dc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001ec80(param_1);
    DVar2 = FUN_1001b320(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_10017eb0();
    *pDVar1 = 9;
    pDVar1 = FUN_10017ec0();
    *pDVar1 = 0;
    DVar2 = 0xffffffff;
  }
  return DVar2;
}



// Function: FUN_1001b320 @ 0x1001b320

DWORD __cdecl FUN_1001b320(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  ulong local_8;
  
  hFile = (HANDLE)FUN_1001eb00(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_10017eb0();
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
      *(byte *)((&DAT_10042dc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
           *(byte *)((&DAT_10042dc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
    }
    else {
      __dosmaperr(local_8);
      DVar2 = 0xffffffff;
    }
  }
  return DVar2;
}



// Function: FUN_1001b3e0 @ 0x1001b3e0

int __cdecl FUN_1001b3e0(uint param_1,char *param_2,uint param_3)

{
  DWORD *pDVar1;
  int iVar2;
  
  if ((param_1 < DAT_10042efc) &&
     ((*(byte *)((&DAT_10042dc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001ec80(param_1);
    iVar2 = FUN_1001b470(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_10017eb0();
    *pDVar1 = 9;
    pDVar1 = FUN_10017ec0();
    *pDVar1 = 0;
    iVar2 = -1;
  }
  return iVar2;
}



// Function: FUN_1001b470 @ 0x1001b470

int __cdecl FUN_1001b470(uint param_1,char *param_2,uint param_3)

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
    if ((*(byte *)((&DAT_10042dc0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x20) != 0) {
      FUN_1001b320(param_1,0,2);
    }
    if (((int)*(char *)((&DAT_10042dc0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x80U) == 0) {
      BVar2 = WriteFile(*(HANDLE *)((&DAT_10042dc0)[iVar4] + (param_1 & 0x1f) * 0x24),param_2,
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
        BVar2 = WriteFile(*(HANDLE *)((&DAT_10042dc0)[iVar4] + (param_1 & 0x1f) * 0x24),local_418,
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
        if (((*(byte *)((&DAT_10042dc0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 0x40) == 0) ||
           (*param_2 != '\x1a')) {
          pDVar3 = FUN_10017eb0();
          *pDVar3 = 0x1c;
          pDVar3 = FUN_10017ec0();
          *pDVar3 = 0;
          local_424 = -1;
        }
        else {
          local_424 = 0;
        }
      }
      else {
        if (local_10 == 5) {
          pDVar3 = FUN_10017eb0();
          *pDVar3 = 9;
          pDVar3 = FUN_10017ec0();
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



// Function: FUN_1001b6f0 @ 0x1001b6f0

void __cdecl FUN_1001b6f0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003c370,0x2e,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DAT_100416fc = DAT_100416fc + 1;
  uVar3 = FUN_1000c820((void *)0x1000,2,0x1003c370,0x3b);
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



// Function: __isatty @ 0x1001b7c0

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_10042efc) {
    uVar1 = (int)*(char *)((&DAT_10042dc0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) &
            0x40;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_1001b800 @ 0x1001b800

void FUN_1001b800(void)

{
  uint local_8;
  
  if (DAT_10042ae0 == 0) {
    DAT_10042ae0 = 0x200;
  }
  else if (DAT_10042ae0 < 0x14) {
    DAT_10042ae0 = 0x14;
  }
  DAT_10041794 = __calloc_dbg(DAT_10042ae0,4,2,0x1003c37c,0x83);
  if (DAT_10041794 == (undefined1 *)0x0) {
    DAT_10042ae0 = 0x14;
    DAT_10041794 = __calloc_dbg(0x14,4,2,0x1003c37c,0x86);
    if (DAT_10041794 == (undefined1 *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  for (local_8 = 0; (int)local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined ***)(DAT_10041794 + local_8 * 4) = &PTR_DAT_1003f898 + local_8 * 8;
  }
  for (local_8 = 0; (int)local_8 < 3; local_8 = local_8 + 1) {
    if ((*(int *)((&DAT_10042dc0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == -1) ||
       (*(int *)((&DAT_10042dc0)[(int)local_8 >> 5] + (local_8 & 0x1f) * 0x24) == 0)) {
      *(undefined4 *)(&DAT_1003f8a8 + local_8 * 0x20) = 0xffffffff;
    }
  }
  return;
}



// Function: FUN_1001b930 @ 0x1001b930

void __fastcall FUN_1001b930(void *param_1)

{
  void *extraout_ECX;
  
  FUN_1001ef80(param_1);
  if (DAT_100414bc != '\0') {
    FUN_1001ed40(extraout_ECX);
  }
  return;
}



// Function: FUN_1001b950 @ 0x1001b950

void __thiscall FUN_1001b950(void *this,undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1003f898) || (&DAT_1003faf8 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_1000c720(this,((int)(param_1 + -0x400fe26) >> 5) + 0x1c);
  }
  return;
}



// Function: FUN_1001b990 @ 0x1001b990

void __thiscall FUN_1001b990(void *this,int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000c720(this,param_1 + 0x1c);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}



// Function: FUN_1001b9c0 @ 0x1001b9c0

void __cdecl FUN_1001b9c0(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_1003f898) || (&DAT_1003faf8 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_1000c7c0(((int)(param_1 + -0x400fe26) >> 5) + 0x1c);
  }
  return;
}



// Function: FUN_1001ba00 @ 0x1001ba00

void __cdecl FUN_1001ba00(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000c7c0(param_1 + 0x1c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}



// Function: FUN_1001ba30 @ 0x1001ba30

int __cdecl FUN_1001ba30(LPSTR param_1,undefined2 param_2)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar3;
  int iVar2;
  void *this;
  bool bVar4;
  
  LVar1 = InterlockedIncrement(&DAT_10042af4);
  bVar4 = DAT_10042ae4 == 0;
  uVar3 = (short)((uint)LVar1 >> 0x10);
  if (!bVar4) {
    InterlockedDecrement(&DAT_10042af4);
    FUN_1000c720(this,0x13);
    uVar3 = extraout_var;
  }
  iVar2 = FUN_1001bab0(param_1,CONCAT22(uVar3,param_2));
  if (bVar4) {
    InterlockedDecrement(&DAT_10042af4);
  }
  else {
    FUN_1000c7c0(0x13);
  }
  return iVar2;
}



// Function: FUN_1001bab0 @ 0x1001bab0

int __cdecl FUN_1001bab0(LPSTR param_1,uint param_2)

{
  DWORD *pDVar1;
  BOOL local_c;
  int local_8;
  
  if (param_1 == (LPSTR)0x0) {
    local_8 = 0;
  }
  else if (DAT_100416e0 == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      local_8 = 1;
    }
    else {
      pDVar1 = FUN_10017eb0();
      *pDVar1 = 0x2a;
      local_8 = -1;
    }
  }
  else {
    local_c = 0;
    local_8 = WideCharToMultiByte(DAT_100416f0,0x220,(LPCWSTR)&param_2,1,param_1,DAT_1003efe0,
                                  (LPCSTR)0x0,&local_c);
    if ((local_8 == 0) || (local_c != 0)) {
      pDVar1 = FUN_10017eb0();
      *pDVar1 = 0x2a;
      local_8 = -1;
    }
  }
  return local_8;
}



// Function: FUN_1001bb50 @ 0x1001bb50

float10 __cdecl FUN_1001bb50(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_c;
  
  uStack_c = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_2._2_2_ & 0x800f | (param_3 + 0x3fe) * 0x10,
                                   CONCAT24(uStack_c,param_1));
}



// Function: FUN_1001bb90 @ 0x1001bb90

int __cdecl FUN_1001bb90(undefined4 param_1,undefined8 param_2)

{
  undefined2 local_8;
  
  local_8 = (short)((int)(param_2._2_4_ & 0x7ff0) >> 4);
  return (int)(short)(local_8 + -0x3fe);
}



// Function: FUN_1001bbc0 @ 0x1001bbc0

void __cdecl FUN_1001bbc0(undefined4 param_1,uint param_2,short param_3)

{
  FUN_1001bb50(param_1,param_2,(short)((int)(param_2 >> 0x10 & 0x7ff0) >> 4) + -0x3fe + param_3);
  return;
}



// Function: FUN_1001bc00 @ 0x1001bc00

float10 __cdecl FUN_1001bc00(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_8;
  
  uStack_8 = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_2._2_2_ & 0x800f | param_3 << 4,CONCAT24(uStack_8,param_1))
  ;
}



// Function: FUN_1001bc40 @ 0x1001bc40

undefined4 __cdecl FUN_1001bc40(int param_1,uint param_2)

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



// Function: FUN_1001bcc0 @ 0x1001bcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1001bcc0(uint param_1,uint param_2,int *param_3)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  double local_10;
  int local_8;
  
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((ushort)param_2,param_1)) == _DAT_1003b5c8) {
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
    if (dVar1 < _DAT_1003b5c8) {
      param_2._2_2_ = param_2._2_2_ | 0x8000;
    }
    fVar3 = FUN_1001bb50(param_1,CONCAT22(param_2._2_2_,(ushort)param_2),0);
    local_10 = (double)fVar3;
  }
  else {
    fVar3 = FUN_1001bb50(param_1,param_2,0);
    local_10 = (double)fVar3;
    local_8 = (short)((int)(param_2._2_2_ & 0x7ff0) >> 4) + -0x3fe;
  }
  *param_3 = local_8;
  return (float10)local_10;
}



// Function: ___init_time @ 0x1001be00

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2003 Debug */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_100416ec == 0) {
    PTR_PTR_100402c0 = (undefined *)&PTR_DAT_100402c8;
    ___free_lc_time(DAT_10041700);
    FUN_1000d2b0(DAT_10041700,2);
    DAT_10041700 = (int *)0x0;
    iVar2 = 0;
  }
  else {
    piVar1 = (int *)__calloc_dbg(1,0xac,2,0x1003c384,0x48);
    if (piVar1 == (int *)0x0) {
      iVar2 = 1;
    }
    else {
      uVar3 = FUN_1001bee0(piVar1);
      if (uVar3 == 0) {
        PTR_PTR_100402c0 = (undefined *)piVar1;
        ___free_lc_time(DAT_10041700);
        FUN_1000d2b0(DAT_10041700,2);
        iVar2 = 0;
        DAT_10041700 = piVar1;
      }
      else {
        ___free_lc_time(piVar1);
        FUN_1000d2b0(piVar1,2);
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}



// Function: FUN_1001bee0 @ 0x1001bee0

uint __cdecl FUN_1001bee0(int *param_1)

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
  
  uVar41 = (uint)DAT_1004173a;
  uVar1 = (uint)DAT_1004173c;
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10020540(1,uVar41,0x31,param_1 + 1);
    uVar3 = FUN_10020540(1,uVar41,0x32,param_1 + 2);
    uVar4 = FUN_10020540(1,uVar41,0x33,param_1 + 3);
    uVar5 = FUN_10020540(1,uVar41,0x34,param_1 + 4);
    uVar6 = FUN_10020540(1,uVar41,0x35,param_1 + 5);
    uVar7 = FUN_10020540(1,uVar41,0x36,param_1 + 6);
    uVar8 = FUN_10020540(1,uVar41,0x37,param_1);
    uVar9 = FUN_10020540(1,uVar41,0x2a,param_1 + 8);
    uVar10 = FUN_10020540(1,uVar41,0x2b,param_1 + 9);
    uVar11 = FUN_10020540(1,uVar41,0x2c,param_1 + 10);
    uVar12 = FUN_10020540(1,uVar41,0x2d,param_1 + 0xb);
    uVar13 = FUN_10020540(1,uVar41,0x2e,param_1 + 0xc);
    uVar14 = FUN_10020540(1,uVar41,0x2f,param_1 + 0xd);
    uVar15 = FUN_10020540(1,uVar41,0x30,param_1 + 7);
    uVar16 = FUN_10020540(1,uVar41,0x44,param_1 + 0xe);
    uVar17 = FUN_10020540(1,uVar41,0x45,param_1 + 0xf);
    uVar18 = FUN_10020540(1,uVar41,0x46,param_1 + 0x10);
    uVar19 = FUN_10020540(1,uVar41,0x47,param_1 + 0x11);
    uVar20 = FUN_10020540(1,uVar41,0x48,param_1 + 0x12);
    uVar21 = FUN_10020540(1,uVar41,0x49,param_1 + 0x13);
    uVar22 = FUN_10020540(1,uVar41,0x4a,param_1 + 0x14);
    uVar23 = FUN_10020540(1,uVar41,0x4b,param_1 + 0x15);
    uVar24 = FUN_10020540(1,uVar41,0x4c,param_1 + 0x16);
    uVar25 = FUN_10020540(1,uVar41,0x4d,param_1 + 0x17);
    uVar26 = FUN_10020540(1,uVar41,0x4e,param_1 + 0x18);
    uVar27 = FUN_10020540(1,uVar41,0x4f,param_1 + 0x19);
    uVar28 = FUN_10020540(1,uVar41,0x38,param_1 + 0x1a);
    uVar29 = FUN_10020540(1,uVar41,0x39,param_1 + 0x1b);
    uVar30 = FUN_10020540(1,uVar41,0x3a,param_1 + 0x1c);
    uVar31 = FUN_10020540(1,uVar41,0x3b,param_1 + 0x1d);
    uVar32 = FUN_10020540(1,uVar41,0x3c,param_1 + 0x1e);
    uVar33 = FUN_10020540(1,uVar41,0x3d,param_1 + 0x1f);
    uVar34 = FUN_10020540(1,uVar41,0x3e,param_1 + 0x20);
    uVar35 = FUN_10020540(1,uVar41,0x3f,param_1 + 0x21);
    uVar36 = FUN_10020540(1,uVar41,0x40,param_1 + 0x22);
    uVar37 = FUN_10020540(1,uVar41,0x41,param_1 + 0x23);
    uVar38 = FUN_10020540(1,uVar41,0x42,param_1 + 0x24);
    uVar39 = FUN_10020540(1,uVar41,0x43,param_1 + 0x25);
    uVar40 = FUN_10020540(1,uVar41,0x28,param_1 + 0x26);
    uVar41 = FUN_10020540(1,uVar41,0x29,param_1 + 0x27);
    uVar42 = FUN_10020540(1,uVar1,0x1f,param_1 + 0x28);
    uVar43 = FUN_10020540(1,uVar1,0x20,param_1 + 0x29);
    uVar1 = FUN_10020540(1,uVar1,0x1003,param_1 + 0x2a);
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
            uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31
            | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 |
            uVar41 | uVar42 | uVar43 | uVar1;
  }
  return uVar1;
}



// Function: ___free_lc_time @ 0x1001c470

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2003 Debug */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_1000d2b0((void *)param_1[1],2);
    FUN_1000d2b0((void *)param_1[2],2);
    FUN_1000d2b0((void *)param_1[3],2);
    FUN_1000d2b0((void *)param_1[4],2);
    FUN_1000d2b0((void *)param_1[5],2);
    FUN_1000d2b0((void *)param_1[6],2);
    FUN_1000d2b0((void *)*param_1,2);
    FUN_1000d2b0((void *)param_1[8],2);
    FUN_1000d2b0((void *)param_1[9],2);
    FUN_1000d2b0((void *)param_1[10],2);
    FUN_1000d2b0((void *)param_1[0xb],2);
    FUN_1000d2b0((void *)param_1[0xc],2);
    FUN_1000d2b0((void *)param_1[0xd],2);
    FUN_1000d2b0((void *)param_1[7],2);
    FUN_1000d2b0((void *)param_1[0xe],2);
    FUN_1000d2b0((void *)param_1[0xf],2);
    FUN_1000d2b0((void *)param_1[0x10],2);
    FUN_1000d2b0((void *)param_1[0x11],2);
    FUN_1000d2b0((void *)param_1[0x12],2);
    FUN_1000d2b0((void *)param_1[0x13],2);
    FUN_1000d2b0((void *)param_1[0x14],2);
    FUN_1000d2b0((void *)param_1[0x15],2);
    FUN_1000d2b0((void *)param_1[0x16],2);
    FUN_1000d2b0((void *)param_1[0x17],2);
    FUN_1000d2b0((void *)param_1[0x18],2);
    FUN_1000d2b0((void *)param_1[0x19],2);
    FUN_1000d2b0((void *)param_1[0x1a],2);
    FUN_1000d2b0((void *)param_1[0x1b],2);
    FUN_1000d2b0((void *)param_1[0x1c],2);
    FUN_1000d2b0((void *)param_1[0x1d],2);
    FUN_1000d2b0((void *)param_1[0x1e],2);
    FUN_1000d2b0((void *)param_1[0x1f],2);
    FUN_1000d2b0((void *)param_1[0x20],2);
    FUN_1000d2b0((void *)param_1[0x21],2);
    FUN_1000d2b0((void *)param_1[0x22],2);
    FUN_1000d2b0((void *)param_1[0x23],2);
    FUN_1000d2b0((void *)param_1[0x24],2);
    FUN_1000d2b0((void *)param_1[0x25],2);
    FUN_1000d2b0((void *)param_1[0x26],2);
    FUN_1000d2b0((void *)param_1[0x27],2);
    FUN_1000d2b0((void *)param_1[0x28],2);
    FUN_1000d2b0((void *)param_1[0x29],2);
    FUN_1000d2b0((void *)param_1[0x2a],2);
  }
  return;
}



// Function: FUN_1001c780 @ 0x1001c780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001c780(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = (uint)DAT_10041736;
  if (DAT_100416e8 == 0) {
    FUN_1000d2b0(DAT_10041704,2);
    FUN_1000d2b0(DAT_10041708,2);
    FUN_1000d2b0(DAT_1004170c,2);
    DAT_10041704 = (void *)0x0;
    DAT_10041708 = (void *)0x0;
    DAT_1004170c = (char *)0x0;
    uVar5 = FUN_1000c820((void *)0x2,2,0x1003c390,0x88);
    *(undefined4 *)PTR_PTR_100403b0 = uVar5;
    if (*(int *)PTR_PTR_100403b0 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      FUN_10010f30(*(uint **)PTR_PTR_100403b0,(uint *)&DAT_1003c330);
      uVar5 = FUN_1000c820((void *)0x2,2,0x1003c390,0x8d);
      *(undefined4 *)(PTR_PTR_100403b0 + 4) = uVar5;
      if (*(int *)(PTR_PTR_100403b0 + 4) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_100403b0 + 4) = 0;
        uVar5 = FUN_1000c820((void *)0x2,2,0x1003c390,0x92);
        *(undefined4 *)(PTR_PTR_100403b0 + 8) = uVar5;
        if (*(int *)(PTR_PTR_100403b0 + 8) == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_100403b0 + 8) = 0;
          DAT_1003efe4 = **(undefined1 **)PTR_PTR_100403b0;
          _DAT_1003efe8 = 1;
          uVar5 = 0;
        }
      }
    }
  }
  else {
    iVar2 = FUN_10020540(1,uVar1,0xe,(int *)&DAT_10041704);
    iVar3 = FUN_10020540(1,uVar1,0xf,(int *)&DAT_10041708);
    iVar4 = FUN_10020540(1,uVar1,0x10,(int *)&DAT_1004170c);
    fix_grouping(DAT_1004170c);
    if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) {
      if (*(undefined **)PTR_PTR_100403b0 != &DAT_10040378) {
        FUN_1000d2b0(*(void **)PTR_PTR_100403b0,2);
        FUN_1000d2b0(*(void **)(PTR_PTR_100403b0 + 4),2);
        FUN_1000d2b0(*(void **)(PTR_PTR_100403b0 + 8),2);
      }
      *(void **)PTR_PTR_100403b0 = DAT_10041704;
      *(void **)(PTR_PTR_100403b0 + 4) = DAT_10041708;
      *(char **)(PTR_PTR_100403b0 + 8) = DAT_1004170c;
      DAT_1003efe4 = **(undefined1 **)PTR_PTR_100403b0;
      _DAT_1003efe8 = 1;
      uVar5 = 0;
    }
    else {
      FUN_1000d2b0(DAT_10041704,2);
      FUN_1000d2b0(DAT_10041708,2);
      FUN_1000d2b0(DAT_1004170c,2);
      DAT_10041704 = (void *)0x0;
      DAT_10041708 = (void *)0x0;
      DAT_1004170c = (char *)0x0;
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}



// Function: fix_grouping @ 0x1001ca30

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



// Function: FUN_1001cab0 @ 0x1001cab0

undefined4 FUN_1001cab0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_100416e4 == 0) {
    PTR_DAT_10040380 = *(undefined **)PTR_PTR_100403b0;
    PTR_DAT_10040384 = *(undefined **)(PTR_PTR_100403b0 + 4);
    PTR_DAT_10040388 = *(undefined **)(PTR_PTR_100403b0 + 8);
    PTR_PTR_100403b0 = (undefined *)&PTR_DAT_10040380;
    FUN_1001ce70((int)DAT_10041710);
    FUN_1000d2b0(DAT_10041710,2);
    DAT_10041710 = (undefined4 *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)__calloc_dbg(1,0x30,2,0x1003c39c,0x4a);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_1001cbe0((int)puVar1);
      if (uVar3 == 0) {
        *puVar1 = *(undefined4 *)PTR_PTR_100403b0;
        puVar1[1] = *(undefined4 *)(PTR_PTR_100403b0 + 4);
        puVar1[2] = *(undefined4 *)(PTR_PTR_100403b0 + 8);
        PTR_PTR_100403b0 = (undefined *)puVar1;
        FUN_1001ce70((int)DAT_10041710);
        FUN_1000d2b0(DAT_10041710,2);
        uVar2 = 0;
        DAT_10041710 = puVar1;
      }
      else {
        FUN_1001ce70((int)puVar1);
        FUN_1000d2b0(puVar1,2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// Function: FUN_1001cbe0 @ 0x1001cbe0

uint __cdecl FUN_1001cbe0(int param_1)

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
  
  uVar1 = (uint)DAT_10041730;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10020540(1,uVar1,0x15,(int *)(param_1 + 0xc));
    uVar3 = FUN_10020540(1,uVar1,0x14,(int *)(param_1 + 0x10));
    uVar4 = FUN_10020540(1,uVar1,0x16,(int *)(param_1 + 0x14));
    uVar5 = FUN_10020540(1,uVar1,0x17,(int *)(param_1 + 0x18));
    uVar6 = FUN_10020540(1,uVar1,0x18,(int *)(param_1 + 0x1c));
    fix_grouping(*(char **)(param_1 + 0x1c));
    uVar7 = FUN_10020540(1,uVar1,0x50,(int *)(param_1 + 0x20));
    uVar8 = FUN_10020540(1,uVar1,0x51,(int *)(param_1 + 0x24));
    uVar9 = FUN_10020540(0,uVar1,0x1a,(int *)(param_1 + 0x28));
    uVar10 = FUN_10020540(0,uVar1,0x19,(int *)(param_1 + 0x29));
    uVar11 = FUN_10020540(0,uVar1,0x54,(int *)(param_1 + 0x2a));
    uVar12 = FUN_10020540(0,uVar1,0x55,(int *)(param_1 + 0x2b));
    uVar13 = FUN_10020540(0,uVar1,0x56,(int *)(param_1 + 0x2c));
    uVar14 = FUN_10020540(0,uVar1,0x57,(int *)(param_1 + 0x2d));
    uVar15 = FUN_10020540(0,uVar1,0x52,(int *)(param_1 + 0x2e));
    uVar1 = FUN_10020540(0,uVar1,0x53,(int *)(param_1 + 0x2f));
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar1;
  }
  return uVar1;
}



// Function: fix_grouping @ 0x1001cdf0

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



// Function: FUN_1001ce70 @ 0x1001ce70

void __cdecl FUN_1001ce70(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_1004176c)) {
    FUN_1000d2b0(*(void **)(param_1 + 0xc),2);
    FUN_1000d2b0(*(void **)(param_1 + 0x10),2);
    FUN_1000d2b0(*(void **)(param_1 + 0x14),2);
    FUN_1000d2b0(*(void **)(param_1 + 0x18),2);
    FUN_1000d2b0(*(void **)(param_1 + 0x1c),2);
    FUN_1000d2b0(*(void **)(param_1 + 0x20),2);
    FUN_1000d2b0(*(void **)(param_1 + 0x24),2);
  }
  return;
}



// Function: FUN_1001cf10 @ 0x1001cf10

undefined4 FUN_1001cf10(void)

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
  if (DAT_100416e0 == 0) {
    PTR_DAT_1003efec = &DAT_1003eff6;
    PTR_DAT_1003eff0 = &DAT_1003eff6;
    FUN_1000d2b0(DAT_10041714,2);
    FUN_1000d2b0(DAT_10041718,2);
    DAT_10041714 = (void *)0x0;
    DAT_10041718 = (void *)0x0;
    uVar3 = 0;
  }
  else {
    if ((DAT_100416f0 != 0) ||
       (iVar1 = FUN_10020540(0,(uint)DAT_10041728,0x1004,(int *)&DAT_100416f0), iVar1 == 0)) {
      local_34 = (undefined2 *)FUN_1000c820((void *)0x202,2,0x1003c3a8,0x5c);
      local_20 = (undefined2 *)FUN_1000c820((void *)0x202,2,0x1003c3a8,0x5e);
      local_30 = (LPCSTR)FUN_1000c820((void *)0x101,2,0x1003c3a8,0x60);
      local_2c = (LPCWSTR)FUN_1000c820((void *)0x202,2,0x1003c3a8,0x62);
      if ((local_34 != (undefined2 *)0x0) &&
         (((local_20 != (undefined2 *)0x0 && (local_30 != (LPCSTR)0x0)) &&
          (local_2c != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)local_30;
        for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
          *local_1c = (CHAR)local_24;
          local_1c = local_1c + 1;
        }
        BVar2 = GetCPInfo(DAT_100416f0,&local_18);
        if ((BVar2 != 0) && (local_18.MaxCharSize < 3)) {
          DAT_1003efe0 = local_18.MaxCharSize & 0xffff;
          if (1 < DAT_1003efe0) {
            for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                  local_24 = local_24 + 1) {
                local_30[local_24] = '\0';
              }
            }
          }
          BVar2 = FUN_10018c30(1,local_30,0x100,local_34 + 1,0,0,0);
          if (BVar2 != 0) {
            *local_34 = 0;
            local_28 = local_2c;
            for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
              *local_28 = (WCHAR)local_24;
              local_28 = local_28 + 1;
            }
            BVar2 = FUN_100207e0(1,local_2c,0x100,local_20 + 1,0,0);
            if (BVar2 != 0) {
              *local_20 = 0;
              if (1 < (int)DAT_1003efe0) {
                for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                      local_24 = local_24 + 1) {
                    local_34[local_24 + 1] = 0x8000;
                  }
                }
              }
              PTR_DAT_1003efec = (undefined *)(local_34 + 1);
              PTR_DAT_1003eff0 = (undefined *)(local_20 + 1);
              if (DAT_10041714 != (void *)0x0) {
                FUN_1000d2b0(DAT_10041714,2);
              }
              DAT_10041714 = local_34;
              if (DAT_10041718 != (void *)0x0) {
                FUN_1000d2b0(DAT_10041718,2);
              }
              DAT_10041718 = local_20;
              FUN_1000d2b0(local_30,2);
              FUN_1000d2b0(local_2c,2);
              return 0;
            }
          }
        }
      }
    }
    FUN_1000d2b0(local_34,2);
    FUN_1000d2b0(local_20,2);
    FUN_1000d2b0(local_30,2);
    FUN_1000d2b0(local_2c,2);
    uVar3 = 1;
  }
  return uVar3;
}



// Function: FUN_1001d2b0 @ 0x1001d2b0

undefined4 FUN_1001d2b0(void)

{
  return 0;
}



// Function: FUN_1001d2c0 @ 0x1001d2c0

int __cdecl FUN_1001d2c0(byte *param_1,byte *param_2)

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



// Function: _strncmp @ 0x1001d300

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



// Function: FUN_1001d340 @ 0x1001d340

byte * __cdecl FUN_1001d340(byte *param_1,byte *param_2)

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



// Function: FUN_1001d380 @ 0x1001d380

undefined4 __cdecl FUN_1001d380(char *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint _Value;
  BOOL BVar3;
  code *local_c;
  undefined2 local_8;
  
  if (DAT_10041760 == (code *)0x0) {
    iVar1 = FUN_1001de50();
    if (iVar1 == 0) {
      local_c = crtGetLocaleInfoA;
    }
    else {
      local_c = GetLocaleInfoA_exref;
    }
    DAT_10041760 = local_c;
  }
  if (param_1 == (char *)0x0) {
    FUN_1001dca0();
  }
  else {
    DAT_10041750 = param_1;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      FUN_1001d580(0x100400b0,0x40,(int *)&DAT_10041750);
    }
    DAT_10041754 = param_1 + 0x40;
    if ((DAT_10041754 != (char *)0x0) && (*DAT_10041754 != '\0')) {
      FUN_1001d580(0x1003fff8,0x16,(int *)&DAT_10041754);
    }
    DAT_10041758 = 0;
    if ((DAT_10041750 == (char *)0x0) || (*DAT_10041750 == '\0')) {
      if ((DAT_10041754 == (char *)0x0) || (*DAT_10041754 == '\0')) {
        FUN_1001dca0();
      }
      else {
        FUN_1001dba0();
      }
    }
    else if ((DAT_10041754 == (char *)0x0) || (*DAT_10041754 == '\0')) {
      FUN_1001da00();
    }
    else {
      FUN_1001d610();
    }
  }
  if (DAT_10041758 == 0) {
    uVar2 = 0;
  }
  else {
    _Value = FUN_1001dcd0((byte *)(param_1 + 0x80));
    if ((_Value == 0) || (BVar3 = IsValidCodePage(_Value & 0xffff), BVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      BVar3 = IsValidLocale(DAT_10041740,1);
      if (BVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = (undefined2)DAT_10041740;
          param_2[1] = (undefined2)DAT_1004175c;
          local_8 = (undefined2)_Value;
          param_2[2] = local_8;
        }
        if (param_3 != 0) {
          iVar1 = (*DAT_10041760)(DAT_10041740,0x1001,param_3,0x40);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = (*DAT_10041760)(DAT_1004175c,0x1002,param_3 + 0x40,0x40);
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



// Function: FUN_1001d580 @ 0x1001d580

void __cdecl FUN_1001d580(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_c = 1;
  local_10 = 0;
  while ((local_10 <= param_2 && (local_c != 0))) {
    iVar1 = (local_10 + param_2) / 2;
    local_c = FUN_10020a50(param_3,(byte *)*param_3,*(byte **)(param_1 + iVar1 * 8));
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



// Function: FUN_1001d610 @ 0x1001d610

void FUN_1001d610(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_10041750);
  DAT_1004174c = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_10041754);
  DAT_10041744 = (uint)(sVar1 == 3);
  DAT_10041740 = 0;
  if (DAT_1004174c == 0) {
    local_8 = _GetPrimaryLen(DAT_10041750);
  }
  else {
    local_8 = 2;
  }
  DAT_10041748 = local_8;
  EnumSystemLocalesA(FUN_1001d6d0,1);
  if ((((DAT_10041758 & 0x100) == 0) || ((DAT_10041758 & 0x200) == 0)) || ((DAT_10041758 & 7) == 0))
  {
    DAT_10041758 = 0;
  }
  return;
}



// Function: FUN_1001d6d0 @ 0x1001d6d0

bool FUN_1001d6d0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  byte local_7c [120];
  
  iVar2 = FUN_1001e030(param_1);
  iVar3 = (*DAT_10041760)(iVar2,(-(uint)(DAT_10041744 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10041758 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_10020a50(local_7c,DAT_10041754,local_7c);
    if (uVar4 == 0) {
      iVar3 = (*DAT_10041760)(iVar2,(-(uint)(DAT_1004174c != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10041758 = 0;
        return true;
      }
      uVar4 = FUN_10020a50(DAT_10041750,DAT_10041750,local_7c);
      if (uVar4 == 0) {
        DAT_10041758 = DAT_10041758 | 0x304;
        DAT_10041740 = iVar2;
        DAT_1004175c = iVar2;
      }
      else if ((DAT_10041758 & 2) == 0) {
        if ((DAT_10041748 == (void *)0x0) ||
           (iVar3 = FUN_10020b20(DAT_10041750,(char *)local_7c,DAT_10041748), iVar3 != 0)) {
          if (((DAT_10041758 & 1) == 0) && (iVar3 = FUN_1001dd70((short)iVar2), iVar3 != 0)) {
            DAT_10041758 = DAT_10041758 | 1;
            DAT_1004175c = iVar2;
          }
        }
        else {
          DAT_10041758 = DAT_10041758 | 2;
          DAT_1004175c = iVar2;
          pvVar5 = (void *)_strlen((char *)DAT_10041750);
          if (pvVar5 == DAT_10041748) {
            DAT_10041740 = iVar2;
          }
        }
      }
    }
    if ((DAT_10041758 & 0x300) != 0x300) {
      iVar3 = (*DAT_10041760)(iVar2,(-(uint)(DAT_1004174c != 0) & 0xfffff002) + 0x1001,local_7c,0x78
                             );
      if (iVar3 == 0) {
        DAT_10041758 = 0;
        return true;
      }
      uVar4 = FUN_10020a50(DAT_10041750,DAT_10041750,local_7c);
      if (uVar4 == 0) {
        uVar4 = DAT_10041758 | 0x200;
        if (DAT_1004174c == 0) {
          DAT_10041758 = uVar4;
          if ((DAT_10041748 == (void *)0x0) ||
             (pvVar5 = (void *)_strlen((char *)DAT_10041750), pvVar5 != DAT_10041748)) {
            DAT_10041758 = DAT_10041758 | 0x100;
            if (DAT_10041740 == 0) {
              DAT_10041740 = iVar2;
            }
          }
          else {
            iVar3 = FUN_1001ddc0(iVar2,1);
            if ((iVar3 != 0) && (DAT_10041758 = DAT_10041758 | 0x100, DAT_10041740 == 0)) {
              DAT_10041740 = iVar2;
            }
          }
        }
        else {
          DAT_10041758 = DAT_10041758 | 0x300;
          if (DAT_10041740 == 0) {
            DAT_10041740 = iVar2;
          }
        }
      }
      else if ((((DAT_1004174c == 0) && (DAT_10041748 != (void *)0x0)) &&
               (iVar3 = FUN_10020b20(DAT_10041750,(char *)local_7c,DAT_10041748), iVar3 == 0)) &&
              ((iVar3 = FUN_1001ddc0(iVar2,0), iVar3 != 0 &&
               (DAT_10041758 = DAT_10041758 | 0x100, DAT_10041740 == 0)))) {
        DAT_10041740 = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10041758 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_1001da00 @ 0x1001da00

void FUN_1001da00(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_10041750);
  DAT_1004174c = (uint)(sVar1 == 3);
  if (DAT_1004174c == 0) {
    local_8 = _GetPrimaryLen(DAT_10041750);
  }
  else {
    local_8 = 2;
  }
  DAT_10041748 = local_8;
  EnumSystemLocalesA(FUN_1001da80,1);
  if ((DAT_10041758 & 4) == 0) {
    DAT_10041758 = 0;
  }
  return;
}



// Function: FUN_1001da80 @ 0x1001da80

bool FUN_1001da80(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char local_7c [120];
  
  iVar2 = FUN_1001e030(param_1);
  iVar3 = (*DAT_10041760)(iVar2,(-(uint)(DAT_1004174c != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10041758 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_10020a50(local_7c,DAT_10041750,(byte *)local_7c);
    if (uVar4 == 0) {
      if ((DAT_1004174c != 0) || (iVar3 = FUN_1001ddc0(iVar2,1), iVar3 != 0)) {
        DAT_10041758 = DAT_10041758 | 4;
        DAT_10041740 = iVar2;
        DAT_1004175c = iVar2;
      }
    }
    else if ((((DAT_1004174c == 0) && (DAT_10041748 != (void *)0x0)) &&
             (iVar3 = FUN_10020b20(DAT_10041750,local_7c,DAT_10041748), iVar3 == 0)) &&
            (iVar3 = FUN_1001ddc0(iVar2,0), iVar3 != 0)) {
      DAT_10041758 = DAT_10041758 | 4;
      DAT_10041740 = iVar2;
      DAT_1004175c = iVar2;
    }
    cVar1 = '\x01' - ((DAT_10041758 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_1001dba0 @ 0x1001dba0

void FUN_1001dba0(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_10041754);
  DAT_10041744 = (uint)(sVar1 == 3);
  EnumSystemLocalesA(FUN_1001dbf0,1);
  if ((DAT_10041758 & 4) == 0) {
    DAT_10041758 = 0;
  }
  return;
}



// Function: FUN_1001dbf0 @ 0x1001dbf0

bool FUN_1001dbf0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_7c [120];
  
  iVar2 = FUN_1001e030(param_1);
  iVar3 = (*DAT_10041760)(iVar2,(-(uint)(DAT_10041744 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar3 == 0) {
    DAT_10041758 = 0;
    cVar1 = '\x01';
  }
  else {
    uVar4 = FUN_10020a50(local_7c,DAT_10041754,local_7c);
    if (uVar4 == 0) {
      iVar3 = FUN_1001dd70((short)iVar2);
      if (iVar3 != 0) {
        DAT_10041758 = DAT_10041758 | 4;
        DAT_10041740 = iVar2;
        DAT_1004175c = iVar2;
      }
    }
    cVar1 = '\x01' - ((DAT_10041758 & 4) != 0);
  }
  return (bool)cVar1;
}



// Function: FUN_1001dca0 @ 0x1001dca0

void FUN_1001dca0(void)

{
  DAT_10041758 = DAT_10041758 | 0x104;
  DAT_1004175c = GetUserDefaultLCID();
  DAT_10041740 = DAT_1004175c;
  return;
}



// Function: FUN_1001dcd0 @ 0x1001dcd0

int __cdecl FUN_1001dcd0(byte *param_1)

{
  int iVar1;
  byte local_c [8];
  
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) ||
     (iVar1 = _strcmp((char *)param_1,"ACP"), iVar1 == 0)) {
    iVar1 = (*DAT_10041760)(DAT_1004175c,0x1004,local_c,8);
    if (iVar1 == 0) {
      return 0;
    }
    param_1 = local_c;
  }
  else {
    iVar1 = _strcmp((char *)param_1,"OCP");
    if (iVar1 == 0) {
      iVar1 = (*DAT_10041760)(DAT_1004175c,0xb,local_c,8);
      if (iVar1 == 0) {
        return 0;
      }
      param_1 = local_c;
    }
  }
  iVar1 = FUN_1001af40(param_1);
  return iVar1;
}



// Function: FUN_1001dd70 @ 0x1001dd70

undefined4 __cdecl FUN_1001dd70(short param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_1003ffe4 + local_c * 2)) break;
    local_c = local_c + 1;
  }
  return 0;
}



// Function: FUN_1001ddc0 @ 0x1001ddc0

undefined4 __cdecl FUN_1001ddc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  char local_80 [120];
  uint local_8;
  
  local_8 = (uint)((ushort)param_1 & 0x3ff | 0x400);
  iVar1 = (*DAT_10041760)(local_8,1,local_80,0x78);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_1001e030(local_80);
    if ((param_1 != iVar1) && (param_2 != 0)) {
      sVar3 = _GetPrimaryLen(DAT_10041750);
      sVar4 = _strlen(DAT_10041750);
      if (sVar3 == sVar4) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_1001de50 @ 0x1001de50

undefined4 FUN_1001de50(void)

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



// Function: crtGetLocaleInfoA @ 0x1001dea0

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
LAB_1001e008:
      iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = (local_14 + local_8) / 2;
    if (param_1 == *(uint *)(&DAT_1003fb40 + iVar1 * 0x2c)) {
      if (param_2 < 0xc) {
        if (param_2 == 0xb) {
          local_c = &DAT_1003fb5c + iVar1 * 0x2c;
        }
        else if (param_2 == 1) {
          local_c = &DAT_1003fb44 + iVar1 * 0x2c;
        }
        else if (param_2 == 3) {
          local_c = &DAT_1003fb50 + iVar1 * 0x2c;
        }
        else if (param_2 == 7) {
          local_c = &DAT_1003fb58 + iVar1 * 0x2c;
        }
      }
      else if (param_2 == 0x1001) {
        local_c = (&PTR_s_Spanish___Traditional_Sort_1003fb4c)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1002) {
        local_c = (&PTR_s_Spain_1003fb54)[iVar1 * 0xb];
      }
      else if (param_2 == 0x1004) {
        local_c = &DAT_1003fb64 + iVar1 * 0x2c;
      }
      if ((local_c != (char *)0x0) && (0 < param_4)) {
        _strncpy(param_3,local_c,param_4 - 1);
        param_3[param_4 + -1] = '\0';
        return 1;
      }
      goto LAB_1001e008;
    }
    if (param_1 < *(uint *)(&DAT_1003fb40 + iVar1 * 0x2c)) {
      local_8 = iVar1 + -1;
    }
    else {
      local_14 = iVar1 + 1;
    }
  } while( true );
}



// Function: FUN_1001e030 @ 0x1001e030

int __cdecl FUN_1001e030(char *param_1)

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



// Function: _GetPrimaryLen @ 0x1001e0b0

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



// Function: FUN_1001e120 @ 0x1001e120

void __cdecl FUN_1001e120(int *param_1,int *param_2)

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



// Function: FUN_1001e560 @ 0x1001e560

void __cdecl FUN_1001e560(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined2 local_18;
  undefined4 uStack_16;
  undefined2 uStack_12;
  undefined *local_10;
  undefined **local_c;
  undefined **local_8;
  
  local_8 = &PTR_DAT_10040360;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      local_8 = (undefined **)&DAT_100404c0;
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
        FUN_1001e120(param_1,(int *)local_c);
      }
    }
  }
  return;
}



// Function: __allmul @ 0x1001e630

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



// Function: __mbsnbicoll @ 0x1001e670

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
    iVar1 = FUN_10020c30(DAT_10042d84,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_10042af8);
    if (iVar1 == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}



// Function: FUN_1001e6c0 @ 0x1001e6c0

undefined4 FUN_1001e6c0(void)

{
  void *cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  void *this;
  int *local_8;
  
  local_8 = DAT_100414ac;
  while( true ) {
    if (*local_8 == 0) {
      return 0;
    }
    cbMultiByte = (void *)WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                              (LPBOOL)0x0);
    if (cbMultiByte == (void *)0x0) {
      return 0xffffffff;
    }
    lpMultiByteStr = (uint *)FUN_1000c820(cbMultiByte,2,0x1003ca3c,0x3d);
    if (lpMultiByteStr == (uint *)0x0) {
      return 0xffffffff;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*local_8,-1,(LPSTR)lpMultiByteStr,(int)cbMultiByte,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    FUN_10021080(this,lpMultiByteStr,0);
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}



// Function: FUN_1001e770 @ 0x1001e770

uint __fastcall FUN_1001e770(void *param_1)

{
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0xffffffff;
  FUN_1000c720(param_1,0x12);
  local_10 = 0;
  do {
    if (0x3f < local_10) {
LAB_1001e940:
      FUN_1000c7c0(0x12);
      return local_c;
    }
    if ((&DAT_10042dc0)[local_10] == 0) {
      local_8 = (undefined4 *)FUN_1000c820((void *)0x480,2,0x1003ca48,0x79);
      if (local_8 != (undefined4 *)0x0) {
        (&DAT_10042dc0)[local_10] = local_8;
        DAT_10042efc = DAT_10042efc + 0x20;
        for (; local_8 < (undefined4 *)((&DAT_10042dc0)[local_10] + 0x480); local_8 = local_8 + 9) {
          *(undefined1 *)(local_8 + 1) = 0;
          *local_8 = 0xffffffff;
          *(undefined1 *)((int)local_8 + 5) = 10;
          local_8[2] = 0;
        }
        local_c = local_10 << 5;
        FUN_1001ec80(local_c);
      }
      goto LAB_1001e940;
    }
    for (local_8 = (undefined4 *)(&DAT_10042dc0)[local_10];
        local_8 < (undefined4 *)((&DAT_10042dc0)[local_10] + 0x480); local_8 = local_8 + 9) {
      if ((*(byte *)(local_8 + 1) & 1) == 0) {
        if (local_8[2] == 0) {
          FUN_1000c720(local_8,0x11);
          if (local_8[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
            local_8[2] = local_8[2] + 1;
          }
          FUN_1000c7c0(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
        if ((*(byte *)(local_8 + 1) & 1) == 0) {
          *local_8 = 0xffffffff;
          local_c = local_10 * 0x20 + ((int)local_8 - (&DAT_10042dc0)[local_10]) / 0x24;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 3));
      }
    }
    if (local_c != 0xffffffff) goto LAB_1001e940;
    local_10 = local_10 + 1;
  } while( true );
}



// Function: __set_osfhnd @ 0x1001e960

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Debug */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (((uint)param_1 < DAT_10042efc) &&
     (*(int *)((&DAT_10042dc0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) == -1)) {
    if (DAT_10041408 == 1) {
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
    *(intptr_t *)((&DAT_10042dc0)[param_1 >> 5] + (param_1 & 0x1fU) * 0x24) = param_2;
    iVar1 = 0;
  }
  else {
    pDVar2 = FUN_10017eb0();
    *pDVar2 = 9;
    pDVar2 = FUN_10017ec0();
    *pDVar2 = 0;
    iVar1 = -1;
  }
  return iVar1;
}



// Function: FUN_1001ea20 @ 0x1001ea20

undefined4 __cdecl FUN_1001ea20(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if (((param_1 < DAT_10042efc) &&
      (iVar3 = (int)param_1 >> 5,
      (*(byte *)((&DAT_10042dc0)[iVar3] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) &&
     (*(int *)((&DAT_10042dc0)[iVar3] + (param_1 & 0x1f) * 0x24) != -1)) {
    if (DAT_10041408 == 1) {
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
    *(undefined4 *)((&DAT_10042dc0)[iVar3] + (param_1 & 0x1f) * 0x24) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    pDVar2 = FUN_10017eb0();
    *pDVar2 = 9;
    pDVar2 = FUN_10017ec0();
    *pDVar2 = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: FUN_1001eb00 @ 0x1001eb00

undefined4 __cdecl FUN_1001eb00(uint param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  
  if ((param_1 < DAT_10042efc) &&
     ((*(byte *)((&DAT_10042dc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    uVar2 = *(undefined4 *)((&DAT_10042dc0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  else {
    pDVar1 = FUN_10017eb0();
    *pDVar1 = 9;
    pDVar1 = FUN_10017ec0();
    *pDVar1 = 0;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// Function: FUN_1001eb70 @ 0x1001eb70

uint __cdecl FUN_1001eb70(HANDLE param_1,uint param_2)

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
    _Filehandle = FUN_1001e770(pvVar3);
    if (_Filehandle == 0xffffffff) {
      pDVar2 = FUN_10017eb0();
      *pDVar2 = 0x18;
      pDVar2 = FUN_10017ec0();
      *pDVar2 = 0;
      _Filehandle = 0xffffffff;
    }
    else {
      __set_osfhnd(_Filehandle,(intptr_t)param_1);
      *(byte *)((&DAT_10042dc0)[(int)_Filehandle >> 5] + 4 + (_Filehandle & 0x1f) * 0x24) =
           local_10 | 1;
      __unlock_fhandle(_Filehandle);
    }
  }
  return _Filehandle;
}



// Function: FUN_1001ec80 @ 0x1001ec80

void __cdecl FUN_1001ec80(uint param_1)

{
  int iVar1;
  void *this;
  
  this = (void *)((param_1 & 0x1f) * 0x24);
  iVar1 = (&DAT_10042dc0)[(int)param_1 >> 5];
  if (*(int *)((int)this + iVar1 + 8) == 0) {
    FUN_1000c720(this,0x11);
    if (*(int *)((int)this + iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + iVar1 + 0xc));
      *(int *)((int)this + iVar1 + 8) = *(int *)((int)this + iVar1 + 8) + 1;
    }
    FUN_1000c7c0(0x11);
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10042dc0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// Function: __unlock_fhandle @ 0x1001ed10

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10042dc0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}



// Function: FUN_1001ed40 @ 0x1001ed40

int __fastcall FUN_1001ed40(void *param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_1000c720(param_1,2);
  for (local_c = 3; local_c < DAT_10042ae0; local_c = local_c + 1) {
    if (*(int *)(DAT_10041794 + local_c * 4) != 0) {
      if ((*(uint *)(*(int *)(DAT_10041794 + local_c * 4) + 0xc) & 0x83) != 0) {
        iVar1 = FUN_100214d0(*(undefined ***)(DAT_10041794 + local_c * 4));
        if (iVar1 != -1) {
          local_8 = local_8 + 1;
        }
      }
      if (0x13 < local_c) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_10041794 + local_c * 4) + 0x20));
        FUN_1000d2b0(*(void **)(DAT_10041794 + local_c * 4),2);
        *(undefined4 *)(DAT_10041794 + local_c * 4) = 0;
      }
    }
  }
  FUN_1000c7c0(2);
  return local_8;
}



// Function: FUN_1001ee20 @ 0x1001ee20

int __thiscall FUN_1001ee20(void *this,undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_1001ef90(this,0);
  }
  else {
    FUN_1001b950(this,param_1);
    iVar1 = FUN_1001ee70((int *)param_1);
    FUN_1001b9c0(param_1);
  }
  return iVar1;
}



// Function: FUN_1001ee70 @ 0x1001ee70

int __cdecl FUN_1001ee70(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_1001eec0(param_1);
  if (iVar1 == 0) {
    if ((param_1[3] & 0x4000U) == 0) {
      iVar1 = 0;
    }
    else {
      DVar2 = FUN_10021620(param_1[4]);
      iVar1 = -(uint)(DVar2 != 0);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// Function: FUN_1001eec0 @ 0x1001eec0

undefined4 __cdecl FUN_1001eec0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((param_1[3] & 3U) == 2) && ((param_1[3] & 0x108U) != 0)) &&
     (uVar2 = *param_1 - param_1[2], 0 < (int)uVar2)) {
    uVar1 = FUN_1001b3e0(param_1[4],(char *)param_1[2],uVar2);
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



// Function: FUN_1001ef80 @ 0x1001ef80

void __fastcall FUN_1001ef80(void *param_1)

{
  FUN_1001ef90(param_1,1);
  return;
}



// Function: FUN_1001ef90 @ 0x1001ef90

int __thiscall FUN_1001ef90(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_1000c720(this,2);
  for (local_10 = 0; local_10 < DAT_10042ae0; local_10 = local_10 + 1) {
    if ((*(int *)(DAT_10041794 + local_10 * 4) != 0) &&
       ((*(uint *)(*(int *)(DAT_10041794 + local_10 * 4) + 0xc) & 0x83) != 0)) {
      this_00 = *(void **)(DAT_10041794 + local_10 * 4);
      FUN_1001b990(this_00,local_10,(int)this_00);
      if ((*(uint *)(*(int *)(DAT_10041794 + local_10 * 4) + 0xc) & 0x83) != 0) {
        if (param_1 == 1) {
          iVar1 = FUN_1001ee70(*(int **)(DAT_10041794 + local_10 * 4));
          if (iVar1 != -1) {
            local_8 = local_8 + 1;
          }
        }
        else if (((param_1 == 0) &&
                 ((*(uint *)(*(int *)(DAT_10041794 + local_10 * 4) + 0xc) & 2) != 0)) &&
                (iVar1 = FUN_1001ee70(*(int **)(DAT_10041794 + local_10 * 4)), iVar1 == -1)) {
          local_c = -1;
        }
      }
      FUN_1001ba00(local_10,*(int *)(DAT_10041794 + local_10 * 4));
    }
  }
  FUN_1000c7c0(2);
  if (param_1 == 1) {
    local_c = local_8;
  }
  return local_c;
}



// Function: FUN_1001f0d0 @ 0x1001f0d0

undefined1 * FUN_1001f0d0(void)

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
  
  puVar1 = PTR_PTR_100402c0;
  local_c = 0;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x1c));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_1000c800((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_10010f30((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_10010f30(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}



// Function: FUN_1001f200 @ 0x1001f200

undefined1 * FUN_1001f200(void)

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
  
  puVar1 = PTR_PTR_100402c0;
  local_c = 0;
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    sVar2 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x38));
    sVar3 = _strlen(*(char **)(puVar1 + local_14 * 4 + 0x68));
    local_c = sVar3 + local_c + 2 + sVar2;
  }
  puVar4 = (undefined1 *)FUN_1000c800((void *)(local_c + 1));
  if (puVar4 != (undefined1 *)0x0) {
    local_18 = puVar4;
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      *local_18 = 0x3a;
      puVar5 = FUN_10010f30((uint *)(local_18 + 1),*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar5);
      puVar6 = (undefined1 *)((int)(local_18 + 1) + sVar2);
      *puVar6 = 0x3a;
      puVar5 = (uint *)(puVar6 + 1);
      _Str = FUN_10010f30(puVar5,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)_Str);
      local_18 = (undefined1 *)((int)puVar5 + sVar2);
    }
    *local_18 = 0;
  }
  return puVar4;
}



// Function: FUN_1001f330 @ 0x1001f330

undefined4 * FUN_1001f330(void)

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
  
  puVar1 = PTR_PTR_100402c0;
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
           FUN_1000c800((void *)(sVar3 + local_c + sVar2 + sVar4 + sVar5 + sVar6 + 0xb1));
  if (puVar7 != (undefined4 *)0x0) {
    local_18 = puVar7 + 0x2b;
    FUN_100168c0(puVar7,(undefined4 *)PTR_PTR_100402c0,0xac);
    for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
      puVar7[local_14] = local_18;
      puVar8 = FUN_10010f30(local_18,*(uint **)(puVar1 + local_14 * 4));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 7] = local_18;
      puVar8 = FUN_10010f30(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x1c));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      puVar7[local_14 + 0xe] = local_18;
      puVar8 = FUN_10010f30(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x38));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
      puVar7[local_14 + 0x1a] = local_18;
      puVar8 = FUN_10010f30(local_18,*(uint **)(puVar1 + local_14 * 4 + 0x68));
      sVar2 = _strlen((char *)puVar8);
      local_18 = (uint *)((int)local_18 + sVar2 + 1);
    }
    puVar7[0x26] = local_18;
    puVar8 = FUN_10010f30(local_18,*(uint **)(puVar1 + 0x98));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x27] = local_18;
    puVar8 = FUN_10010f30(local_18,*(uint **)(puVar1 + 0x9c));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x28] = local_18;
    puVar8 = FUN_10010f30(local_18,*(uint **)(puVar1 + 0xa0));
    sVar2 = _strlen((char *)puVar8);
    local_18 = (uint *)((int)local_18 + sVar2 + 1);
    puVar7[0x29] = local_18;
    puVar8 = FUN_10010f30(local_18,*(uint **)(puVar1 + 0xa4));
    sVar2 = _strlen((char *)puVar8);
    puVar7[0x2a] = (int)local_18 + sVar2 + 1;
  }
  return puVar7;
}



// Function: FUN_1001f6a0 @ 0x1001f6a0

void __cdecl FUN_1001f6a0(byte *param_1,uint param_2,byte *param_3,int *param_4)

{
  FUN_1001f6c0(param_1,param_2,param_3,param_4,(undefined *)0x0);
  return;
}



// Function: FUN_1001f6c0 @ 0x1001f6c0

int __cdecl FUN_1001f6c0(byte *param_1,uint param_2,byte *param_3,int *param_4,undefined *param_5)

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
    local_14 = PTR_PTR_100402c0;
  }
  else {
    local_14 = param_5;
  }
  local_8 = local_14;
  local_10 = param_2;
  InterlockedIncrement(&DAT_10042af4);
  if (DAT_10042ae4 == 0) {
    local_c = 0;
  }
  else {
    InterlockedDecrement(&DAT_10042af4);
    FUN_1000c720(this,0x13);
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
      DAT_10041780 = (uint)bVar3;
      FUN_1001f850(*param_3,param_4,(int *)&param_1,&local_10,(int)local_8);
    }
    else {
      if (((*(ushort *)(PTR_DAT_1003efec + (uint)*param_3 * 2) & 0x8000) != 0) && (1 < local_10)) {
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
    InterlockedDecrement(&DAT_10042af4);
  }
  else {
    FUN_1000c7c0(0x13);
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



// Function: FUN_1001f850 @ 0x1001f850

void __cdecl FUN_1001f850(char param_1,int *param_2,int *param_3,uint *param_4,int param_5)

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
    DAT_10041790 = DAT_10041780;
    FUN_1001fec0(param_2[2],2,param_3,param_4);
    break;
  case 'I':
    DAT_10041790 = DAT_10041780;
    local_8 = param_2[2] % 0xc;
    if (local_8 == 0) {
      local_8 = 0xc;
    }
    FUN_1001fec0(local_8,2,param_3,param_4);
    break;
  case 'M':
    DAT_10041790 = DAT_10041780;
    FUN_1001fec0(param_2[1],2,param_3,param_4);
    break;
  case 'S':
    DAT_10041790 = DAT_10041780;
    FUN_1001fec0(*param_2,2,param_3,param_4);
    break;
  case 'U':
    local_c = param_2[6];
    goto LAB_1001fbfd;
  case 'W':
    if (param_2[6] == 0) {
      local_c = 6;
    }
    else {
      local_c = param_2[6] + -1;
    }
LAB_1001fbfd:
    DAT_10041790 = DAT_10041780;
    if (param_2[7] < local_c) {
      local_8 = 0;
    }
    else {
      local_8 = param_2[7] / 7;
      if (local_c <= param_2[7] % 7) {
        local_8 = local_8 + 1;
      }
    }
    FUN_1001fec0(local_8,2,param_3,param_4);
    break;
  case 'X':
    DAT_10041780 = 0;
    FUN_10020020(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
    break;
  case 'Y':
    DAT_10041790 = DAT_10041780;
    FUN_1001fec0((param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100,4,param_3,param_4);
    break;
  case 'Z':
  case 'z':
    FUN_10015770((void *)(param_1 + -0x25));
    FID_conflict__store_str((&PTR_DAT_1003f354)[param_2[8] != 0],param_3,(int *)param_4);
    break;
  case 'a':
    FID_conflict__store_str(*(char **)(param_5 + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 'b':
    FID_conflict__store_str(*(char **)(param_5 + 0x38 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 'c':
    if (DAT_10041780 == 0) {
      FUN_10020020(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_10020020(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    else {
      DAT_10041780 = 0;
      FUN_10020020(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_10020020(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    break;
  case 'd':
    DAT_10041790 = DAT_10041780;
    FUN_1001fec0(param_2[3],2,param_3,param_4);
    break;
  case 'j':
    DAT_10041790 = DAT_10041780;
    FUN_1001fec0(param_2[7] + 1,3,param_3,param_4);
    break;
  case 'm':
    DAT_10041790 = DAT_10041780;
    FUN_1001fec0(param_2[4] + 1,2,param_3,param_4);
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
    DAT_10041790 = DAT_10041780;
    FUN_1001fec0(param_2[6],1,param_3,param_4);
    break;
  case 'x':
    if (DAT_10041780 == 0) {
      FUN_10020020(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
    }
    else {
      DAT_10041780 = 0;
      FUN_10020020(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
    }
    break;
  case 'y':
    DAT_10041790 = DAT_10041780;
    FUN_1001fec0(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}



// Function: FID_conflict:_store_str @ 0x1001fe70

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



// Function: FUN_1001fec0 @ 0x1001fec0

void __cdecl FUN_1001fec0(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_10041790 == 0) {
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



// Function: FID_conflict:_store_number @ 0x1001ff70

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



// Function: FUN_10020020 @ 0x10020020

void __cdecl FUN_10020020(byte *param_1,int param_2,int *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  void *this;
  byte *local_14;
  uint local_10;
  char local_c;
  byte *local_8;
  
LAB_10020026:
  do {
    if ((*param_1 == 0) || (*param_4 == 0)) {
      return;
    }
    local_c = '\0';
    DAT_10041790 = 0;
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
          if ((*param_1 == 0) || (*param_4 == 0)) goto LAB_10020026;
          if (*param_1 == 0x27) break;
          if (((*(ushort *)(PTR_DAT_1003efec + (uint)*param_1 * 2) & 0x8000) != 0) && (1 < *param_4)
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
      goto LAB_10020026;
    case 0x41:
    case 0x61:
      uVar1 = FUN_10020a50(param_1,param_1,(byte *)"am/pm");
      if (uVar1 == 0) {
        local_8 = param_1 + 5;
      }
      else {
        uVar1 = FUN_10020a50(this,param_1,&DAT_1003cb78);
        if (uVar1 == 0) {
          local_8 = param_1 + 3;
        }
      }
      local_c = 'p';
      break;
    case 0x48:
      if (local_10 == 1) {
        DAT_10041790 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'H';
      break;
    case 0x4d:
      switch(local_10) {
      case 1:
        DAT_10041790 = 1;
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
        DAT_10041790 = 1;
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
        DAT_10041790 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'I';
      break;
    case 0x6d:
      if (local_10 == 1) {
        DAT_10041790 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'M';
      break;
    case 0x73:
      if (local_10 == 1) {
        DAT_10041790 = 1;
      }
      else if (local_10 != 2) break;
      local_c = 'S';
      break;
    case 0x74:
      goto switchD_100200b1_caseD_74;
    case 0x79:
      if (local_10 == 2) {
        local_c = 'y';
      }
      else if (local_10 == 4) {
        local_c = 'Y';
      }
    }
    if (local_c == '\0') {
      if ((*(ushort *)(PTR_DAT_1003efec + (uint)*param_1 * 2) & 0x8000) != 0) {
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
      FUN_1001f850(local_c,(int *)param_2,param_3,param_4,param_5);
      param_1 = local_8;
    }
  } while( true );
switchD_100200b1_caseD_74:
  if (*(int *)(param_2 + 8) < 0xc) {
    local_14 = *(byte **)(param_5 + 0x98);
  }
  else {
    local_14 = *(byte **)(param_5 + 0x9c);
  }
  while ((param_1 = local_8, 0 < (int)local_10 && (*param_4 != 0))) {
    if (((*(ushort *)(PTR_DAT_1003efec + (uint)*local_14 * 2) & 0x8000) != 0) && (1 < *param_4)) {
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
  goto LAB_10020026;
}



// Function: FUN_10020540 @ 0x10020540

undefined4 __cdecl FUN_10020540(int param_1,LCID param_2,LCTYPE param_3,int *param_4)

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
    iVar4 = FUN_10021700(param_2,param_3,(LPWSTR)&DAT_10041764,4,0);
    if (iVar4 != 0) {
      *(undefined1 *)param_4 = 0;
      local_a4 = 0;
      while( true ) {
        if (3 < local_a4) {
          return 0;
        }
        if (DAT_1003efe0 < 2) {
          bVar1 = (&DAT_10041764)[local_a4 * 2];
          local_ac = *(ushort *)(PTR_DAT_1003efec + (uint)bVar1 * 2) & 4;
        }
        else {
          bVar1 = (&DAT_10041764)[local_a4 * 2];
          local_ac = FUN_10011ec0((uint)bVar1,4);
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
  local_c = (void *)FUN_100218a0(param_2,param_3,local_10,0x80,0);
  if (local_c == (void *)0x0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) ||
        (pvVar3 = (void *)FUN_100218a0(param_2,param_3,(LPSTR)0x0,0,0), pvVar3 == (void *)0x0)) ||
       (local_10 = (LPSTR)FUN_1000c820(pvVar3,2,0x1003cb84,0x58), local_10 == (LPSTR)0x0))
    goto LAB_1002068d;
    local_8 = 1;
    local_c = (void *)FUN_100218a0(param_2,param_3,local_10,(int)pvVar3,0);
    if (local_c == (void *)0x0) goto LAB_1002068d;
  }
  iVar4 = FUN_1000c820(local_c,2,0x1003cb84,99);
  *param_4 = iVar4;
  if (*param_4 != 0) {
    _strncpy((char *)*param_4,local_10,(size_t)local_c);
    if (local_8 != 0) {
      FUN_1000d2b0(local_10,2);
    }
    return 0;
  }
LAB_1002068d:
  if (local_8 != 0) {
    FUN_1000d2b0(local_10,2);
  }
  return 0xffffffff;
}



// Function: FUN_100207d0 @ 0x100207d0

undefined * FUN_100207d0(void)

{
  return PTR_PTR_100403b0;
}



// Function: FUN_100207e0 @ 0x100207e0

BOOL __cdecl
FUN_100207e0(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

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
  puStack_c = &DAT_1003cb90;
  puStack_10 = &LAB_1001544c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffbc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffbc;
  if (DAT_10041770 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10041770 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10041770 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (DAT_10041770 == 1) {
    BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10041770 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_100416f0;
    }
    _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (_Size == 0) {
      BVar2 = 0;
    }
    else {
      local_8 = 0;
      FUN_10011120();
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
          FUN_10011120();
          local_8 = 0xffffffff;
          if (&stack0x00000000 == (undefined1 *)0x44) {
            BVar2 = 0;
          }
          else {
            if (param_6 == 0) {
              param_6 = DAT_100416e0;
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
              FUN_10012c90((undefined4 *)param_4,(undefined4 *)&stack0xffffffbc,param_3 << 1);
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



// Function: FUN_10020a50 @ 0x10020a50

uint __thiscall FUN_10020a50(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = DAT_10042af4;
  if (DAT_100416e0 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_10020a9e;
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
LAB_10020a9e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    DAT_10042af4 = DAT_10042af4 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10042ae4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      DAT_10042af4 = iVar2;
      FUN_1000c720(this,0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_10020aff;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10012030(uVar8);
      uVar7 = FUN_10012030(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_10020aff:
    if (uVar9 == 0) {
      LOCK();
      DAT_10042af4 = DAT_10042af4 + -1;
      UNLOCK();
    }
    else {
      FUN_1000c7c0(0x13);
    }
  }
  return uVar7;
}



// Function: FUN_10020b20 @ 0x10020b20

undefined4 __cdecl FUN_10020b20(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = DAT_10042af4;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_100416e0 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_10020b7f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_10020b7f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      DAT_10042af4 = DAT_10042af4 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10042ae4;
      if (bVar8) {
        LOCK();
        UNLOCK();
        DAT_10042af4 = iVar2;
        FUN_1000c720(param_3,0x13);
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
        uVar7 = FUN_10012030(uVar7);
        uVar5 = FUN_10012030(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10020bf5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10020bf5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        DAT_10042af4 = DAT_10042af4 + -1;
        UNLOCK();
      }
      else {
        FUN_1000c7c0(0x13);
      }
    }
  }
  return uVar6;
}



// Function: FUN_10020c30 @ 0x10020c30

int __cdecl
FUN_10020c30(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
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
  puStack_c = &DAT_1003cbf0;
  puStack_10 = &LAB_1001544c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  ExceptionList = &local_14;
  puVar2 = &stack0xffffffa8;
  if (DAT_10041774 == 0) {
    ExceptionList = &local_14;
    iVar3 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar3 == 0) {
      iVar3 = CompareStringA(0,0,"",1,"",1);
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10041774 = 2;
      puVar2 = local_1c;
    }
    else {
      DAT_10041774 = 1;
      puVar2 = local_1c;
    }
  }
  local_1c = puVar2;
  if (0 < param_4) {
    param_4 = FUN_10021030((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_10021030((char *)param_5,param_6);
  }
  if (DAT_10041774 == 2) {
    iVar3 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
  }
  else if (DAT_10041774 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100416f0;
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
         (iVar3 = FUN_1000b3e0(2,0x1003cba8,0xb6,0,
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
      FUN_10011120();
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
            FUN_10011120();
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



// Function: FUN_10021030 @ 0x10021030

int __cdecl FUN_10021030(char *param_1,int param_2)

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



// Function: FUN_10021080 @ 0x10021080

undefined4 __thiscall FUN_10021080(void *this,uint *param_1,int param_2)

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
      (puVar1 = (uint *)FUN_10021a50(this,(byte *)param_1,0x3d), puVar1 == (uint *)0x0)) ||
     (param_1 == puVar1)) {
    return 0xffffffff;
  }
  bVar6 = *(byte *)((int)puVar1 + 1) == 0;
  if (DAT_100414a4 == DAT_100414a8) {
    DAT_100414a4 = copy_environ(DAT_100414a4);
  }
  if (DAT_100414a4 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_100414ac == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_100414a4 = (int *)FUN_1000c820((void *)0x4,2,0x1003cc08,0x87);
      if (DAT_100414a4 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_100414a4 = 0;
      if (DAT_100414ac == (undefined4 *)0x0) {
        DAT_100414ac = (undefined4 *)FUN_1000c820((void *)0x4,2,0x1003cc08,0x8e);
        if (DAT_100414ac == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_100414ac = 0;
      }
    }
    else {
      iVar2 = FUN_1001e6c0();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_100414a4;
  local_c = (void *)findenv((uchar *)param_1,(int)puVar1 - (int)param_1);
  if (((int)local_c < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if ((int)local_c < 0) {
      local_c = (void *)-(int)local_c;
    }
    piVar3 = FUN_1000ccb0(local_c,piVar3,(void *)((int)local_c * 4 + 8),2,0x1003cc08,0xce);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[(int)local_c] = (int)param_1;
    piVar3[(int)local_c + 1] = 0;
    DAT_100414a4 = piVar3;
  }
  else if (bVar6) {
    FUN_1000d2b0((void *)piVar3[(int)local_c],2);
    for (; piVar3[(int)local_c] != 0; local_c = (void *)((int)local_c + 1)) {
      piVar3[(int)local_c] = piVar3[(int)local_c + 1];
    }
    piVar3 = FUN_1000ccb0(piVar3,piVar3,(void *)((int)local_c << 2),2,0x1003cc08,0xb9);
    if (piVar3 != (int *)0x0) {
      DAT_100414a4 = piVar3;
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
    lpName = (uint *)FUN_1000c820((void *)(sVar4 + 2),uVar7,(int)pcVar8,iVar2);
    if (lpName != (uint *)0x0) {
      FUN_10010f30(lpName,param_1);
      puVar5 = (undefined1 *)((int)lpName + ((int)puVar1 - (int)param_1));
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(puVar5 + 1)));
      FUN_1000d2b0(lpName,2);
    }
  }
  return 0;
}



// Function: findenv @ 0x10021360

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2003 Debug */

int __cdecl findenv(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = DAT_100414a4;
  while( true ) {
    if (*local_8 == 0) {
      return -((int)local_8 - (int)DAT_100414a4 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*local_8,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*local_8 + param_2) == '=' || (*(char *)(*local_8 + param_2) == '\0')))) break;
    local_8 = local_8 + 1;
  }
  return (int)local_8 - (int)DAT_100414a4 >> 2;
}



// Function: copy_environ @ 0x100213e0

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
    piVar1 = (int *)FUN_1000c820((void *)(local_14 * 4 + 4),2,0x1003cc08,0x146);
    if (piVar1 == (int *)0x0) {
      __amsg_exit(9);
    }
    local_c = piVar1;
    for (local_10 = param_1; *local_10 != 0; local_10 = local_10 + 1) {
      iVar5 = 0x14f;
      pcVar4 = "setenv.c";
      uVar3 = 2;
      sVar2 = _strlen((char *)*local_10);
      iVar5 = FUN_1000c820((void *)(sVar2 + 1),uVar3,(int)pcVar4,iVar5);
      *local_c = iVar5;
      if (*local_c != 0) {
        FUN_10010f30((uint *)*local_c,(uint *)*local_10);
      }
      local_c = local_c + 1;
    }
    *local_c = 0;
  }
  return piVar1;
}



// Function: FUN_100214d0 @ 0x100214d0

undefined4 __cdecl FUN_100214d0(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003cc14,0x3a,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uint)param_1[3] & 0x40) == 0) {
    FUN_1001b950(param_1,param_1);
    local_8 = FUN_10021560((int *)param_1);
    FUN_1001b9c0(param_1);
  }
  else {
    param_1[3] = (undefined *)0x0;
  }
  return local_8;
}



// Function: FUN_10021560 @ 0x10021560

undefined4 __cdecl FUN_10021560(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (int *)0x0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003cc14,0x77,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((param_1[3] & 0x83U) != 0) {
    local_8 = FUN_1001eec0(param_1);
    FUN_10021c70(param_1);
    iVar2 = FUN_10021b40(param_1[4]);
    if (iVar2 < 0) {
      local_8 = 0xffffffff;
    }
    else if (param_1[7] != 0) {
      FUN_1000d2b0((void *)param_1[7],2);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return local_8;
}



// Function: FUN_10021620 @ 0x10021620

DWORD __cdecl FUN_10021620(uint param_1)

{
  DWORD *pDVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD local_8;
  
  if ((DAT_10042efc <= param_1) ||
     ((*(byte *)((&DAT_10042dc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    pDVar1 = FUN_10017eb0();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  FUN_1001ec80(param_1);
  if ((*(byte *)((&DAT_10042dc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0) {
    hFile = (HANDLE)FUN_1001eb00(param_1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) goto LAB_100216df;
    pDVar1 = FUN_10017ec0();
    *pDVar1 = local_8;
  }
  pDVar1 = FUN_10017eb0();
  *pDVar1 = 9;
  local_8 = 0xffffffff;
LAB_100216df:
  __unlock_fhandle(param_1);
  return local_8;
}



// Function: FUN_10021700 @ 0x10021700

int __cdecl FUN_10021700(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1003cc30;
  puStack_10 = &LAB_1001544c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10041778 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10041778 = 2;
    }
    else {
      DAT_10041778 = 1;
    }
  }
  if (DAT_10041778 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  }
  else if (DAT_10041778 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_100416f0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10011120();
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



// Function: FUN_100218a0 @ 0x100218a0

int __cdecl FUN_100218a0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1003cc40;
  puStack_10 = &LAB_1001544c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1004177c == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1004177c = 2;
    }
    else {
      DAT_1004177c = 1;
    }
  }
  if (DAT_1004177c == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
  }
  else if (DAT_1004177c == 1) {
    if (param_5 == 0) {
      param_5 = DAT_100416f0;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      local_8 = 0;
      FUN_10011120();
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



// Function: FUN_10021a50 @ 0x10021a50

byte * __thiscall FUN_10021a50(void *this,byte *param_1,uint param_2)

{
  ushort uVar1;
  byte *pbVar2;
  
  if (DAT_10042b7c == 0) {
    param_1 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_1000c720(this,0x19);
    while( true ) {
      uVar1 = (ushort)*param_1;
      if (uVar1 == 0) break;
      if (((&DAT_10042c81)[uVar1] & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar1) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (*pbVar2 == 0) {
          FUN_1000c7c0(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(*param_1,*pbVar2)) {
          FUN_1000c7c0(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2;
      param_1 = param_1 + 1;
    }
    FUN_1000c7c0(0x19);
    if (param_2 != uVar1) {
      param_1 = (byte *)0x0;
    }
  }
  return param_1;
}



// Function: FUN_10021b40 @ 0x10021b40

undefined4 __cdecl FUN_10021b40(uint param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  
  if ((param_1 < DAT_10042efc) &&
     ((*(byte *)((&DAT_10042dc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001ec80(param_1);
    uVar2 = __close_lk(param_1);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_10017eb0();
    *pDVar1 = 9;
    pDVar1 = FUN_10017ec0();
    *pDVar1 = 0;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// Function: __close_lk @ 0x10021bc0

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
  
  iVar1 = FUN_1001eb00(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1001eb00(1);
      iVar2 = FUN_1001eb00(2);
      if (iVar1 == iVar2) goto LAB_10021c13;
    }
    hObject = (HANDLE)FUN_1001eb00(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_10021c25;
    }
  }
LAB_10021c13:
  local_8 = 0;
LAB_10021c25:
  FUN_1001ea20(param_1);
  *(undefined1 *)((&DAT_10042dc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// Function: FUN_10021c70 @ 0x10021c70

void __cdecl FUN_10021c70(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_1000b3e0(2,0x1003cc4c,0x30,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_1000d2b0((void *)param_1[2],2);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



// Function: _strchr @ 0x10021d20

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



// Function: Unwind@10028e10 @ 0x10028e10

void __fastcall Unwind_10028e10(void *param_1)

{
  int unaff_EBP;
  
  FUN_1000a7a0(param_1,*(void **)(unaff_EBP + -0x18));
  return;
}




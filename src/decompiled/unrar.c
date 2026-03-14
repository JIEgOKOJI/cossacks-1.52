// Decompiled from: unrar.dll

// Function: entry @ 0x00401000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 entry(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 in_FS;
  undefined4 in_stack_00000004;
  uint in_stack_00000008;
  
  _DAT_0040b05e = DAT_0040b05a << 2;
  if (in_stack_00000008 == 1) {
    if (DAT_0040b072 != '\0') {
      GetVersion();
      FUN_00409960();
      uVar2 = 0;
      goto LAB_00401145;
    }
    DAT_0040b072 = '\x01';
    puVar4 = &DAT_0040c57c;
    for (iVar3 = 0x36d8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    piVar1 = (int *)segment(in_FS,4);
    DAT_0040b06e = *piVar1;
    DAT_0040b066 = *(undefined4 *)(DAT_0040b06e + -8);
    DAT_0040b06a = *(undefined4 *)(DAT_0040b06e + -4);
    _DAT_0040c98c = DAT_0040b06e + -4;
    FUN_0040637a();
    if (DAT_0040cc3c == (code *)0x0) goto LAB_004010ef;
    iVar3 = (*DAT_0040cc3c)();
    uVar2 = 0;
    if (iVar3 != 0) goto LAB_004010b3;
  }
  else {
LAB_004010b3:
    if ((in_stack_00000008 == 0) && (piVar1 = (int *)segment(in_FS,4), *piVar1 != DAT_0040b06e)) {
      piVar1 = (int *)segment(in_FS,4);
      _DAT_0040c98c = *piVar1;
      DAT_0040b066 = *(undefined4 *)(_DAT_0040c98c + -8);
      DAT_0040b06a = *(undefined4 *)(_DAT_0040c98c + -4);
      _DAT_0040c98c = _DAT_0040c98c + -4;
      FUN_0040637a();
    }
LAB_004010ef:
    _DAT_0040b062 = in_stack_00000004;
    uVar2 = FUN_0040a260();
  }
  if ((in_stack_00000008 == 0) && (uVar2 = 0, DAT_0040cc3c != (code *)0x0)) {
    uVar2 = (*DAT_0040cc3c)();
  }
  if ((in_stack_00000008 & 0xfffffffe) == 0) {
    piVar1 = (int *)segment(in_FS,4);
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + -8) = DAT_0040b066;
    *(undefined4 *)(iVar3 + -4) = DAT_0040b06a;
  }
LAB_00401145:
  if (in_stack_00000008 == 0) {
    uVar2 = FUN_00409758();
  }
  return uVar2;
}



// Function: FUN_0040115c @ 0x0040115c

undefined4 FUN_0040115c(void)

{
  int iVar1;
  LPCSTR in_stack_00000004;
  DWORD in_stack_00000008;
  
  iVar1 = FUN_0040868c();
  if (iVar1 == 0) {
    SetFileAttributesA(in_stack_00000004,in_stack_00000008);
    return 0;
  }
  return 0xffffffff;
}



// Function: FUN_00401184 @ 0x00401184

void FUN_00401184(void)

{
  FUN_004011b4();
  return;
}



// Function: FUN_0040119c @ 0x0040119c

void FUN_0040119c(void)

{
  FUN_004081b8();
  return;
}



// Function: FUN_004011b4 @ 0x004011b4

void FUN_004011b4(void)

{
  FUN_004067a8();
  FUN_004081d8();
  return;
}



// Function: FUN_004011e0 @ 0x004011e0

void FUN_004011e0(void)

{
  return;
}



// Function: FUN_004011e8 @ 0x004011e8

bool FUN_004011e8(void)

{
  int in_stack_00000004;
  
  return (*(ushort *)(in_stack_00000004 + 0x17) & 0xe0) == 0xe0;
}



// Function: FUN_00401208 @ 0x00401208

undefined4 FUN_00401208(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0x23) < 3) && ((*(byte *)(in_stack_00000004 + 0x30) & 8) != 0))
  {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00401228 @ 0x00401228

void FUN_00401228(void)

{
  int in_stack_00000004;
  
  if (2 < *(byte *)(in_stack_00000004 + 0x23)) {
    if (*(byte *)(in_stack_00000004 + 0x23) == 3) {
      if ((*(ushort *)(in_stack_00000004 + 0x17) & 0xe0) == 0xe0) {
        *(undefined4 *)(in_stack_00000004 + 0x30) = 0x10;
        return;
      }
      *(undefined4 *)(in_stack_00000004 + 0x30) = 0x20;
      return;
    }
    if ((*(ushort *)(in_stack_00000004 + 0x17) & 0xe0) == 0xe0) {
      *(undefined4 *)(in_stack_00000004 + 0x30) = 0x10;
      return;
    }
    *(undefined4 *)(in_stack_00000004 + 0x30) = 0x20;
  }
  return;
}



// Function: FUN_00401284 @ 0x00401284

undefined4 FUN_00401284(void)

{
  int in_stack_00000004;
  
  if ((in_stack_00000004 != 0x5c) && (in_stack_00000004 != 0x2f)) {
    return 0;
  }
  return 1;
}



// Function: FUN_004012a0 @ 0x004012a0

void FUN_004012a0(void)

{
  int iVar1;
  char *pcVar2;
  int in_stack_00000004;
  
  if (3 < *(byte *)(in_stack_00000004 + 0x23)) {
    *(undefined1 *)(in_stack_00000004 + 0x23) = 0;
    if ((*(ushort *)(in_stack_00000004 + 0x17) & 0xe0) == 0xe0) {
      *(undefined4 *)(in_stack_00000004 + 0x30) = 0x10;
    }
    else {
      *(undefined4 *)(in_stack_00000004 + 0x30) = 0x20;
    }
  }
  for (pcVar2 = (char *)(in_stack_00000004 + 0x15e); *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
    iVar1 = FUN_00401284();
    if (iVar1 != 0) {
      *pcVar2 = '\\';
    }
  }
  return;
}



// Function: FUN_004012f8 @ 0x004012f8

uint FUN_004012f8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_stack_00000004;
  int in_stack_0000000c;
  uint local_8;
  
  iVar2 = 0;
  local_8 = 0;
  while (in_stack_0000000c != 0) {
    if (*(int *)(in_stack_00000004 + 0x262) == 0) {
      return 0;
    }
    iVar2 = FUN_004014a4();
    local_8 = local_8 + iVar2;
    in_stack_0000000c = in_stack_0000000c - iVar2;
    *(int *)(in_stack_00000004 + 0x456) = *(int *)(in_stack_00000004 + 0x456) - iVar2;
    if ((*(int *)(in_stack_00000004 + 0x456) != 0) ||
       ((*(byte *)(in_stack_00000004 + 0x17) & 2) == 0)) break;
    iVar1 = FUN_00403f6c();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  if (*(int *)(in_stack_00000004 + 0x326) == 0) {
    return local_8;
  }
  uVar3 = 0;
  if (local_8 == 0) {
    return 0;
  }
  do {
    FUN_004031a4();
    uVar3 = uVar3 + 0x10;
  } while (uVar3 < local_8);
  return local_8;
}



// Function: FUN_004013bc @ 0x004013bc

uint FUN_004013bc(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  uint in_stack_0000000c;
  
  *(undefined4 *)(in_stack_00000004 + 0x462) = in_stack_00000008;
  *(uint *)(in_stack_00000004 + 0x45e) = in_stack_0000000c;
  if (*(int *)(in_stack_00000004 + 0x44e) == 0) {
    in_stack_0000000c = FUN_0040145c();
  }
  *(uint *)(in_stack_00000004 + 0x45a) = *(int *)(in_stack_00000004 + 0x45a) + in_stack_0000000c;
  uVar1 = FUN_004035cc();
  *(undefined4 *)(in_stack_00000004 + 0x466) = uVar1;
  if (((*(int *)(in_stack_00000004 + 0x26e) != 0) && (*(int *)(in_stack_00000004 + 0x27e) != 0)) &&
     (iVar2 = (**(code **)(in_stack_00000004 + 0x26e))(), iVar2 == 0)) {
    *(undefined4 *)(in_stack_00000004 + 0x27a) = 10;
    in_stack_0000000c = 0;
  }
  return in_stack_0000000c;
}



// Function: FUN_0040145c @ 0x0040145c

uint FUN_0040145c(void)

{
  uint *puVar1;
  uint uVar2;
  int in_stack_00000004;
  
  puVar1 = FUN_004098f8();
  *puVar1 = 0;
  FUN_004066f4();
  uVar2 = FUN_00406e88();
  puVar1 = FUN_004098f8();
  if ((*puVar1 == 0x1c) || ((*(byte *)(in_stack_00000004 + 0x12) & 0x10) != 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_004014a4 @ 0x004014a4

void FUN_004014a4(void)

{
  FUN_00406ce8();
  return;
}



// Function: FUN_004014c0 @ 0x004014c0

undefined4 FUN_004014c0(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00406d88();
  }
  return uVar1;
}



// Function: FUN_004014e8 @ 0x004014e8

DWORD FUN_004014e8(void)

{
  DWORD DVar1;
  
  FUN_00406dfc();
  FUN_004014c0();
  DVar1 = FUN_00406dfc();
  FUN_004014c0();
  return DVar1;
}



// Function: FUN_00401524 @ 0x00401524

int FUN_00401524(void)

{
  undefined2 uVar1;
  ushort uVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  int in_stack_00000004;
  uint in_stack_00000008;
  undefined4 local_28 [8];
  int local_8;
  
  bVar9 = 0;
  local_8 = 0;
  *(undefined4 *)(in_stack_00000004 + 0x286) = 0;
  puVar7 = (undefined4 *)(in_stack_00000004 + 0x14);
  puVar8 = local_28;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((in_stack_00000008 & 0x8000) != 0) {
    local_8 = 1;
  }
  uVar6 = in_stack_00000008 & 0xff;
  do {
    DVar3 = FUN_00406dfc();
    *(DWORD *)(in_stack_00000004 + 0x292) = DVar3;
    iVar4 = FUN_0040171c();
    if (iVar4 == 0) {
      DVar3 = FUN_004014e8();
      if ((int)DVar3 < *(int *)(in_stack_00000004 + 0x296)) {
        *(undefined4 *)(in_stack_00000004 + 0x286) = 1;
      }
    }
    else {
      if (*(ushort *)(in_stack_00000004 + 0x19) < 7) {
        return 0;
      }
      iVar5 = (uint)*(ushort *)(in_stack_00000004 + 0x19) + *(int *)(in_stack_00000004 + 0x292);
      *(int *)(in_stack_00000004 + 0x296) = iVar5;
      if ((*(byte *)(in_stack_00000004 + 0x18) & 0x80) != 0) {
        *(int *)(in_stack_00000004 + 0x296) = iVar5 + *(int *)(in_stack_00000004 + 0x1b);
      }
      if (*(int *)(in_stack_00000004 + 0x296) <= *(int *)(in_stack_00000004 + 0x292)) {
        return 0;
      }
    }
    if ((0 < iVar4) && (uVar6 != 0x77)) {
      *(uint *)(in_stack_00000004 + 0x282) = uVar6;
    }
    if ((((iVar4 == 0) || (uVar6 == 0)) || (uVar6 == *(byte *)(in_stack_00000004 + 0x16))) ||
       (((*(char *)(in_stack_00000004 + 0x16) == 'w' && (local_8 != 0)) &&
        (uVar6 == *(uint *)(in_stack_00000004 + 0x282))))) {
      *(undefined2 *)(in_stack_00000004 + 0x34) = *(undefined2 *)(in_stack_00000004 + 0x14);
      *(undefined1 *)(in_stack_00000004 + 0x36) = *(undefined1 *)(in_stack_00000004 + 0x16);
      *(undefined2 *)(in_stack_00000004 + 0x37) = *(undefined2 *)(in_stack_00000004 + 0x17);
      *(undefined2 *)(in_stack_00000004 + 0x39) = *(undefined2 *)(in_stack_00000004 + 0x19);
      *(undefined4 *)(in_stack_00000004 + 0x3b) = *(undefined4 *)(in_stack_00000004 + 0x1b);
      if (uVar6 != *(byte *)(in_stack_00000004 + 0x16)) {
        uVar6 = 0;
      }
      if (uVar6 == 0x74) {
        if (0 < iVar4) {
          if (*(ushort *)(in_stack_00000004 + 0x2e) < 0x103) {
            uVar1 = *(undefined2 *)(in_stack_00000004 + 0x2e);
          }
          else {
            uVar1 = 0x103;
          }
          *(undefined2 *)(in_stack_00000004 + 0x2e) = uVar1;
          FUN_004014a4();
          *(undefined1 *)(in_stack_00000004 + 0x15e + (uint)*(ushort *)(in_stack_00000004 + 0x2e)) =
               0;
          uVar2 = FUN_004035cc();
          if ((ushort)~uVar2 != *(ushort *)(in_stack_00000004 + 0x14)) {
            *(undefined4 *)(in_stack_00000004 + 0x286) = 1;
          }
          iVar4 = iVar4 + (uint)*(ushort *)(in_stack_00000004 + 0x2e);
          FUN_004012a0();
        }
      }
      else {
        puVar7 = local_28;
        puVar8 = (undefined4 *)(in_stack_00000004 + 0x14);
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        FUN_004014c0();
      }
      return iVar4;
    }
    FUN_00406d88();
  } while( true );
}



// Function: FUN_0040171c @ 0x0040171c

int FUN_0040171c(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  if (in_stack_00000008 < 0x75) {
    if (in_stack_00000008 == 0x74) {
      unaff_ESI = FUN_004014a4();
      *(ushort *)(in_stack_00000004 + 0x14) = (ushort)local_44 + (ushort)local_43 * 0x100;
      *(undefined1 *)(in_stack_00000004 + 0x16) = local_42;
      *(ushort *)(in_stack_00000004 + 0x17) = (ushort)local_41 + (ushort)local_40 * 0x100;
      *(ushort *)(in_stack_00000004 + 0x19) = (ushort)local_3f + (ushort)local_3e * 0x100;
      *(uint *)(in_stack_00000004 + 0x1b) =
           (uint)local_3d + (uint)local_3c * 0x100 + (uint)local_3b * 0x10000 +
           (uint)local_3a * 0x1000000;
      *(uint *)(in_stack_00000004 + 0x1f) =
           (uint)local_39 + (uint)local_38 * 0x100 + (uint)local_37 * 0x10000 +
           (uint)local_36 * 0x1000000;
      *(undefined1 *)(in_stack_00000004 + 0x23) = local_35;
      *(uint *)(in_stack_00000004 + 0x24) =
           (uint)local_34 + (uint)local_33 * 0x100 + (uint)local_32 * 0x10000 +
           (uint)local_31 * 0x1000000;
      *(uint *)(in_stack_00000004 + 0x28) =
           (uint)local_30 + (uint)local_2f * 0x100 + (uint)local_2e * 0x10000 +
           (uint)local_2d * 0x1000000;
      *(undefined1 *)(in_stack_00000004 + 0x2c) = local_2c;
      *(undefined1 *)(in_stack_00000004 + 0x2d) = local_2b;
      *(ushort *)(in_stack_00000004 + 0x2e) = (ushort)local_2a + (ushort)local_29 * 0x100;
      *(uint *)(in_stack_00000004 + 0x30) =
           (uint)local_28 + (uint)local_27 * 0x100 + (uint)local_26 * 0x10000 +
           (uint)local_25 * 0x1000000;
      uVar1 = FUN_004035cc();
      *(undefined4 *)(in_stack_00000004 + 0x29a) = uVar1;
    }
    else if (in_stack_00000008 == 0) {
      unaff_ESI = FUN_004014a4();
      *(ushort *)(in_stack_00000004 + 0x34) = (ushort)local_44 + (ushort)local_43 * 0x100;
      *(undefined1 *)(in_stack_00000004 + 0x36) = local_42;
      *(ushort *)(in_stack_00000004 + 0x37) = (ushort)local_41 + (ushort)local_40 * 0x100;
      *(ushort *)(in_stack_00000004 + 0x39) = (ushort)local_3f + (ushort)local_3e * 0x100;
      if ((*(byte *)(in_stack_00000004 + 0x38) & 0x80) != 0) {
        iVar2 = FUN_004014a4();
        unaff_ESI = unaff_ESI + iVar2;
        *(uint *)(in_stack_00000004 + 0x3b) =
             (uint)local_3d + (uint)local_3c * 0x100 + (uint)local_3b * 0x10000 +
             (uint)local_3a * 0x1000000;
      }
    }
    else if (in_stack_00000008 == 0x73) {
      unaff_ESI = FUN_004014a4();
      *(ushort *)(in_stack_00000004 + 7) = (ushort)local_44 + (ushort)local_43 * 0x100;
      *(undefined1 *)(in_stack_00000004 + 9) = local_42;
      *(ushort *)(in_stack_00000004 + 10) = (ushort)local_41 + (ushort)local_40 * 0x100;
      *(ushort *)(in_stack_00000004 + 0xc) = (ushort)local_3f + (ushort)local_3e * 0x100;
      *(ushort *)(in_stack_00000004 + 0xe) = (ushort)local_3d + (ushort)local_3c * 0x100;
      *(uint *)(in_stack_00000004 + 0x10) =
           (uint)local_3b + (uint)local_3a * 0x100 + (uint)local_39 * 0x10000 +
           (uint)local_38 * 0x1000000;
      uVar1 = FUN_004035cc();
      *(undefined4 *)(in_stack_00000004 + 0x29a) = uVar1;
    }
  }
  else if (in_stack_00000008 == 0x75) {
    unaff_ESI = FUN_004014a4();
    *(ushort *)(in_stack_00000004 + 0x3f) = (ushort)local_44 + (ushort)local_43 * 0x100;
    *(undefined1 *)(in_stack_00000004 + 0x41) = local_42;
    *(ushort *)(in_stack_00000004 + 0x42) = (ushort)local_41 + (ushort)local_40 * 0x100;
    *(ushort *)(in_stack_00000004 + 0x44) = (ushort)local_3f + (ushort)local_3e * 0x100;
    *(ushort *)(in_stack_00000004 + 0x46) = (ushort)local_3d + (ushort)local_3c * 0x100;
    *(byte *)(in_stack_00000004 + 0x48) = local_3b;
    *(byte *)(in_stack_00000004 + 0x49) = local_3a;
    *(ushort *)(in_stack_00000004 + 0x4a) = (ushort)local_39 + (ushort)local_38 * 0x100;
    uVar1 = FUN_004035cc();
    *(undefined4 *)(in_stack_00000004 + 0x29a) = uVar1;
  }
  else if (in_stack_00000008 == 0x76) {
    unaff_ESI = FUN_004014a4();
    *(ushort *)(in_stack_00000004 + 0x4c) = (ushort)local_44 + (ushort)local_43 * 0x100;
    *(undefined1 *)(in_stack_00000004 + 0x4e) = local_42;
    *(ushort *)(in_stack_00000004 + 0x4f) = (ushort)local_41 + (ushort)local_40 * 0x100;
    *(ushort *)(in_stack_00000004 + 0x51) = (ushort)local_3f + (ushort)local_3e * 0x100;
    *(byte *)(in_stack_00000004 + 0x53) = local_3d;
    *(byte *)(in_stack_00000004 + 0x54) = local_3c;
    *(byte *)(in_stack_00000004 + 0x55) = local_3b;
    *(uint *)(in_stack_00000004 + 0x56) =
         (uint)local_3a + (uint)local_39 * 0x100 + (uint)local_38 * 0x10000 +
         (uint)local_37 * 0x1000000;
    uVar1 = FUN_004035cc();
    *(undefined4 *)(in_stack_00000004 + 0x29a) = uVar1;
  }
  return unaff_ESI;
}



// Function: FUN_00401b64 @ 0x00401b64

uint FUN_00401b64(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 *in_stack_00000010;
  
  *in_stack_00000010 = 0;
  if ((*(byte *)(in_stack_00000004 + 10) & 2) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00406dfc();
    *in_stack_00000010 = 1;
    iVar3 = FUN_0040171c();
    if (((iVar3 < 7) || (*(char *)(in_stack_00000004 + 0x41) != 'u')) ||
       (*(ushort *)(in_stack_00000004 + 0x44) < 7)) {
      *in_stack_00000010 = 0xc;
      FUN_004014c0();
      uVar2 = 0;
    }
    else if ((ushort)~*(ushort *)(in_stack_00000004 + 0x29a) ==
             *(ushort *)(in_stack_00000004 + 0x3f)) {
      uVar5 = *(ushort *)(in_stack_00000004 + 0x44) - 0xd;
      if (*(char *)(in_stack_00000004 + 0x49) == '0') {
        uVar2 = uVar5;
        if (in_stack_0000000c < uVar5) {
          uVar2 = in_stack_0000000c;
        }
        FUN_004014a4();
        if (uVar2 + 1 < in_stack_0000000c) {
          *(undefined1 *)(in_stack_00000008 + uVar2) = 0;
        }
        else {
          *(undefined1 *)(in_stack_00000008 + -1 + in_stack_0000000c) = 0;
        }
        FUN_004014c0();
        if (uVar2 < uVar5) {
          *in_stack_00000010 = 0x14;
        }
        else {
          uVar1 = FUN_004035cc();
          if ((ushort)~uVar1 != *(ushort *)(in_stack_00000004 + 0x4a)) {
            *in_stack_00000010 = 0xc;
          }
        }
      }
      else if ((*(char *)(in_stack_00000004 + 0x48) == '\x14') &&
              (*(byte *)(in_stack_00000004 + 0x49) < 0x36)) {
        puVar4 = FUN_00409440();
        if (puVar4 == (uint *)0x0) {
          *in_stack_00000010 = 0xb;
          FUN_004014c0();
          uVar2 = 0;
        }
        else {
          *(undefined4 *)(in_stack_00000004 + 0x44e) = 1;
          *(undefined4 *)(in_stack_00000004 + 0x326) = 0;
          *(uint *)(in_stack_00000004 + 0x452) = (uint)*(ushort *)(in_stack_00000004 + 0x46);
          *(uint *)(in_stack_00000004 + 0x456) = uVar5;
          *(undefined4 *)(in_stack_00000004 + 0x466) = 0xffffffff;
          FUN_004020e0();
          uVar2 = in_stack_0000000c;
          if (*(uint *)(in_stack_00000004 + 0x45e) <= in_stack_0000000c) {
            uVar2 = *(uint *)(in_stack_00000004 + 0x45e);
          }
          FUN_00404134();
          if (uVar2 + 1 < in_stack_0000000c) {
            *(undefined1 *)(in_stack_00000008 + uVar2) = 0;
          }
          else {
            *(undefined1 *)(in_stack_00000008 + -1 + in_stack_0000000c) = 0;
          }
          FUN_0040932c();
          FUN_004014c0();
          if ((ushort)~*(ushort *)(in_stack_00000004 + 0x466) !=
              *(ushort *)(in_stack_00000004 + 0x4a)) {
            *in_stack_00000010 = 0xc;
          }
        }
      }
      else {
        *in_stack_00000010 = 0xe;
        FUN_004014c0();
        uVar2 = 0;
      }
    }
    else {
      *in_stack_00000010 = 0xc;
      FUN_004014c0();
      uVar2 = 0;
    }
  }
  return uVar2;
}



// Function: FUN_00401dd8 @ 0x00401dd8

uint FUN_00401dd8(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 *in_stack_00000010;
  
  *in_stack_00000010 = 0;
  if ((*(byte *)(in_stack_00000004 + 0x17) & 8) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00406dfc();
    *in_stack_00000010 = 1;
    iVar3 = FUN_0040171c();
    if (((iVar3 < 7) || (*(char *)(in_stack_00000004 + 0x41) != 'u')) ||
       (*(ushort *)(in_stack_00000004 + 0x44) < 7)) {
      *in_stack_00000010 = 0xc;
      FUN_004014c0();
      uVar2 = 0;
    }
    else if ((ushort)~*(ushort *)(in_stack_00000004 + 0x29a) ==
             *(ushort *)(in_stack_00000004 + 0x3f)) {
      if ((*(byte *)(in_stack_00000004 + 0x48) < 0x15) &&
         (*(byte *)(in_stack_00000004 + 0x49) < 0x31)) {
        uVar2 = in_stack_0000000c;
        if (*(ushort *)(in_stack_00000004 + 0x46) <= in_stack_0000000c) {
          uVar2 = (uint)*(ushort *)(in_stack_00000004 + 0x46);
        }
        FUN_004014a4();
        if (uVar2 < *(ushort *)(in_stack_00000004 + 0x46)) {
          *in_stack_00000010 = 0x14;
        }
        else {
          uVar1 = FUN_004035cc();
          if ((ushort)~uVar1 != *(ushort *)(in_stack_00000004 + 0x4a)) {
            *in_stack_00000010 = 0xc;
          }
        }
        if (uVar2 + 1 < in_stack_0000000c) {
          *(undefined1 *)(in_stack_00000008 + uVar2) = 0;
        }
        else {
          *(undefined1 *)(in_stack_00000008 + -1 + in_stack_0000000c) = 0;
        }
        FUN_004014c0();
      }
      else {
        *in_stack_00000010 = 0xe;
        FUN_004014c0();
        uVar2 = 0;
      }
    }
    else {
      *in_stack_00000010 = 0xc;
      FUN_004014c0();
      uVar2 = 0;
    }
  }
  return uVar2;
}



// Function: FUN_00401f38 @ 0x00401f38

int FUN_00401f38(void)

{
  int iVar1;
  uint *puVar2;
  DWORD DVar3;
  uint *puVar4;
  uint *puVar5;
  char *in_stack_00000004;
  int iVar6;
  
  in_stack_00000004[0x28e] = '\0';
  in_stack_00000004[0x28f] = '\0';
  in_stack_00000004[0x290] = '\0';
  in_stack_00000004[0x291] = '\0';
  in_stack_00000004[0x28a] = '\0';
  in_stack_00000004[0x28b] = '\0';
  in_stack_00000004[0x28c] = '\0';
  in_stack_00000004[0x28d] = '\0';
  iVar6 = 0;
  iVar1 = FUN_004014a4();
  if (iVar1 != 7) {
    return 0;
  }
  if (((((*in_stack_00000004 == 'R') && (in_stack_00000004[1] == 'a')) &&
       (in_stack_00000004[2] == 'r')) &&
      ((in_stack_00000004[3] == '!' && (in_stack_00000004[4] == '\x1a')))) &&
     ((in_stack_00000004[5] == '\a' && (in_stack_00000004[6] == '\0')))) {
    iVar1 = FUN_0040171c();
    if (iVar1 != 0xd) {
      return 0;
    }
    iVar6 = 1;
  }
  else {
    puVar2 = FUN_00409440();
    if (puVar2 == (uint *)0x0) {
      return 0;
    }
    DVar3 = FUN_00406dfc();
    iVar1 = FUN_004014a4();
    puVar5 = puVar2;
    while (((iVar6 == 0 && (puVar5 != (uint *)0x0)) && (puVar5 < (uint *)(iVar1 + (int)puVar2)))) {
      puVar4 = (uint *)FUN_00404114();
      puVar5 = puVar4;
      if ((((puVar4 != (uint *)0x0) && (puVar5 = (uint *)((int)puVar4 + 1), *(char *)puVar5 == 'a'))
          && (*(char *)((int)puVar4 + 2) == 'r')) &&
         (((*(char *)((int)puVar4 + 3) == '!' && ((char)puVar4[1] == '\x1a')) &&
          ((*(char *)((int)puVar4 + 5) == '\a' &&
           ((*(char *)((int)puVar4 + 6) == '\0' && (*(char *)((int)puVar4 + 9) == 's')))))))) {
        *(char **)(in_stack_00000004 + 0x28e) = (char *)((int)puVar5 + (DVar3 - (int)puVar2) + -1);
        FUN_004014c0();
        FUN_004014a4();
        FUN_0040171c();
        iVar6 = 1;
      }
    }
    FUN_0040932c();
    if (iVar6 == 0) {
      return 0;
    }
  }
  if ((ushort)~*(ushort *)(in_stack_00000004 + 0x29a) != *(ushort *)(in_stack_00000004 + 7)) {
    in_stack_00000004[0x28a] = '\x01';
    in_stack_00000004[0x28b] = '\0';
    in_stack_00000004[0x28c] = '\0';
    in_stack_00000004[0x28d] = '\0';
  }
  return iVar6;
}



// Function: FUN_004020e0 @ 0x004020e0

undefined4 FUN_004020e0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_00402d3c();
  iVar1 = FUN_00402530();
  if ((iVar1 != 0) && ((in_stack_0000000c != 0 || (iVar1 = FUN_00402670(), iVar1 != 0)))) {
    *(int *)(in_stack_00000004 + 0x452) = *(int *)(in_stack_00000004 + 0x452) + -1;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              if (*(int *)(in_stack_00000004 + 0x452) < 0) {
                iVar1 = FUN_004029dc();
                if (iVar1 == 0) {
                  return 0x12;
                }
                iVar1 = FUN_004025d4();
                if (iVar1 == 0) {
                  return 0x13;
                }
                return 0;
              }
              *(uint *)(in_stack_00000004 + 0x8a6) = *(uint *)(in_stack_00000004 + 0x8a6) & 0xfffff;
              if ((0x1fe2 < *(uint *)(in_stack_00000004 + 0x86e)) &&
                 (iVar1 = FUN_00402530(), iVar1 == 0)) {
                return 0x12;
              }
              if ((((*(int *)(in_stack_00000004 + 0x8aa) - *(int *)(in_stack_00000004 + 0x8a6) &
                    0xfffffU) < 0x10e) &&
                  (*(int *)(in_stack_00000004 + 0x8a6) != *(int *)(in_stack_00000004 + 0x8aa))) &&
                 (iVar1 = FUN_004025d4(), iVar1 == 0)) {
                return 0x13;
              }
              if (*(int *)(in_stack_00000004 + 0x896) == 0) break;
              uVar2 = FUN_00402b54();
              if (uVar2 == 0x100) {
                iVar1 = FUN_00402670();
                if (iVar1 == 0) {
                  return 0x12;
                }
              }
              else {
                uVar3 = FUN_00402de4();
                iVar1 = *(int *)(in_stack_00000004 + 0x8a6);
                *(int *)(in_stack_00000004 + 0x8a6) = *(int *)(in_stack_00000004 + 0x8a6) + 1;
                *(char *)(in_stack_00000008 + iVar1) = (char)uVar3;
                *(int *)(in_stack_00000004 + 0x89e) = *(int *)(in_stack_00000004 + 0x89e) + 1;
                if (*(int *)(in_stack_00000004 + 0x89e) == *(int *)(in_stack_00000004 + 0x89a)) {
                  *(undefined4 *)(in_stack_00000004 + 0x89e) = 0;
                }
                *(int *)(in_stack_00000004 + 0x452) = *(int *)(in_stack_00000004 + 0x452) + -1;
              }
            }
            uVar2 = FUN_00402b54();
            if (0xff < uVar2) break;
            iVar1 = *(int *)(in_stack_00000004 + 0x8a6);
            *(int *)(in_stack_00000004 + 0x8a6) = *(int *)(in_stack_00000004 + 0x8a6) + 1;
            *(char *)(in_stack_00000008 + iVar1) = (char)uVar2;
            *(int *)(in_stack_00000004 + 0x452) = *(int *)(in_stack_00000004 + 0x452) + -1;
          }
          if (uVar2 < 0x10e) break;
          uVar2 = (uint)(byte)(&DAT_0040afd6)[uVar2];
          if (uVar2 != 0) {
            FUN_00402c68();
            *(int *)(in_stack_00000004 + 0x86e) =
                 *(int *)(in_stack_00000004 + 0x86e) +
                 (*(int *)(in_stack_00000004 + 0x872) + uVar2 >> 3);
            *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + uVar2 & 7;
          }
          uVar2 = FUN_00402b54();
          uVar2 = (uint)(byte)(&DAT_0040b1c0)[uVar2];
          if (uVar2 != 0) {
            FUN_00402c68();
            *(int *)(in_stack_00000004 + 0x86e) =
                 *(int *)(in_stack_00000004 + 0x86e) +
                 (*(int *)(in_stack_00000004 + 0x872) + uVar2 >> 3);
            *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + uVar2 & 7;
          }
          FUN_00402cc0();
        }
        if (uVar2 == 0x10d) break;
        if (uVar2 == 0x100) {
          FUN_00402cc0();
        }
        else if (uVar2 < 0x105) {
          uVar2 = FUN_00402b54();
          uVar2 = (uint)(byte)(&DAT_0040b0e4)[uVar2];
          if (uVar2 != 0) {
            FUN_00402c68();
            *(int *)(in_stack_00000004 + 0x86e) =
                 *(int *)(in_stack_00000004 + 0x86e) +
                 (*(int *)(in_stack_00000004 + 0x872) + uVar2 >> 3);
            *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + uVar2 & 7;
          }
          FUN_00402cc0();
        }
        else if (uVar2 < 0x10e) {
          uVar2 = (uint)(byte)(&DAT_0040b0f3)[uVar2];
          if (uVar2 != 0) {
            FUN_00402c68();
            *(int *)(in_stack_00000004 + 0x86e) =
                 *(int *)(in_stack_00000004 + 0x86e) +
                 (*(int *)(in_stack_00000004 + 0x872) + uVar2 >> 3);
            *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + uVar2 & 7;
          }
          FUN_00402cc0();
        }
      }
      iVar1 = FUN_00402670();
    } while (iVar1 != 0);
  }
  return 0x12;
}



// Function: FUN_00402530 @ 0x00402530

undefined4 FUN_00402530(void)

{
  uint uVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    FUN_00404134();
    *(uint *)(in_stack_00000004 + 0x86e) = *(uint *)(in_stack_00000004 + 0x86e) & 0x1f;
    uVar1 = FUN_004012f8();
    if (uVar1 == 0xffffffff) {
      return 0;
    }
    if ((int)uVar1 < 1) {
      *(undefined4 *)(in_stack_00000004 + 0x876) = *(undefined4 *)(in_stack_00000004 + 0x86e);
    }
    else {
      *(uint *)(in_stack_00000004 + 0x876) = uVar1 + 0x20;
    }
  }
  else {
    uVar1 = FUN_004012f8();
    *(uint *)(in_stack_00000004 + 0x876) = uVar1;
    if (uVar1 == 0xffffffff) {
      return 0;
    }
    *(undefined4 *)(in_stack_00000004 + 0x86e) = 0;
  }
  return 1;
}



// Function: FUN_004025d4 @ 0x004025d4

undefined4 FUN_004025d4(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_stack_00000004;
  
  if (*(uint *)(in_stack_00000004 + 0x8a6) < *(uint *)(in_stack_00000004 + 0x8aa)) {
    iVar1 = *(int *)(in_stack_00000004 + 0x8aa);
    uVar3 = FUN_004013bc();
    if (uVar3 != (-iVar1 & 0xfffffU)) {
      return 0;
    }
    uVar3 = FUN_004013bc();
    if (uVar3 != *(uint *)(in_stack_00000004 + 0x8a6)) {
      return 0;
    }
  }
  else {
    iVar1 = *(int *)(in_stack_00000004 + 0x8a6);
    iVar2 = *(int *)(in_stack_00000004 + 0x8aa);
    uVar3 = FUN_004013bc();
    if (uVar3 != iVar1 - iVar2) {
      return 0;
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0x8aa) = *(undefined4 *)(in_stack_00000004 + 0x8a6);
  return 1;
}



// Function: FUN_00402670 @ 0x00402670

undefined4 FUN_00402670(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  int in_stack_00000004;
  byte local_4f0 [1028];
  undefined1 local_ec [228];
  int local_8;
  
  if ((*(uint *)(in_stack_00000004 + 0x86e) < 0x1fe8) || (iVar1 = FUN_00402530(), iVar1 != 0)) {
    uVar3 = FUN_00402c68();
    *(uint *)(in_stack_00000004 + 0x896) = uVar3 & 0x8000;
    *(int *)(in_stack_00000004 + 0x86e) =
         *(int *)(in_stack_00000004 + 0x86e) + (*(int *)(in_stack_00000004 + 0x872) + 1U >> 3);
    *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + 1U & 7;
    uVar3 = FUN_00402c68();
    if ((uVar3 & 0x8000) == 0) {
      FUN_004041a4();
    }
    *(int *)(in_stack_00000004 + 0x86e) =
         *(int *)(in_stack_00000004 + 0x86e) + (*(int *)(in_stack_00000004 + 0x872) + 1U >> 3);
    *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + 1U & 7;
    if (*(int *)(in_stack_00000004 + 0x896) == 0) {
      local_8 = 0x176;
    }
    else {
      uVar3 = FUN_00402c68();
      iVar1 = (uVar3 >> 0xe & 3) + 1;
      *(int *)(in_stack_00000004 + 0x89a) = iVar1;
      if (iVar1 <= *(int *)(in_stack_00000004 + 0x89e)) {
        *(undefined4 *)(in_stack_00000004 + 0x89e) = 0;
      }
      *(int *)(in_stack_00000004 + 0x86e) =
           *(int *)(in_stack_00000004 + 0x86e) + (*(int *)(in_stack_00000004 + 0x872) + 2U >> 3);
      *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + 2U & 7;
      local_8 = *(int *)(in_stack_00000004 + 0x89a) * 0x101;
    }
    iVar1 = 0;
    puVar6 = local_ec;
    do {
      uVar3 = FUN_00402c68();
      *puVar6 = (char)(uVar3 >> 0xc);
      puVar6 = puVar6 + 1;
      iVar1 = iVar1 + 1;
      *(int *)(in_stack_00000004 + 0x86e) =
           *(int *)(in_stack_00000004 + 0x86e) + (*(int *)(in_stack_00000004 + 0x872) + 4U >> 3);
      *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + 4U & 7;
    } while (iVar1 < 0x13);
    FUN_00402a68();
    iVar1 = 0;
    if (0 < local_8) {
      do {
        if ((0x1ffb < *(uint *)(in_stack_00000004 + 0x86e)) && (iVar4 = FUN_00402530(), iVar4 == 0))
        {
          return 0;
        }
        uVar3 = FUN_00402b54();
        if (uVar3 < 0x10) {
          local_4f0[iVar1] = (char)uVar3 + *(char *)(in_stack_00000004 + 0x46a + iVar1) & 0xf;
          iVar1 = iVar1 + 1;
        }
        else if (uVar3 == 0x10) {
          uVar3 = FUN_00402c68();
          *(int *)(in_stack_00000004 + 0x86e) =
               *(int *)(in_stack_00000004 + 0x86e) + (*(int *)(in_stack_00000004 + 0x872) + 2U >> 3)
          ;
          pbVar5 = local_4f0 + iVar1 + -1;
          *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + 2U & 7;
          iVar4 = (uVar3 >> 0xe) + 3;
          for (; (0 < iVar4 && (iVar1 < local_8)); iVar1 = iVar1 + 1) {
            pbVar5[1] = *pbVar5;
            pbVar5 = pbVar5 + 1;
            iVar4 = iVar4 + -1;
          }
        }
        else {
          if (uVar3 == 0x11) {
            uVar3 = FUN_00402c68();
            *(int *)(in_stack_00000004 + 0x86e) =
                 *(int *)(in_stack_00000004 + 0x86e) +
                 (*(int *)(in_stack_00000004 + 0x872) + 3U >> 3);
            iVar4 = (uVar3 >> 0xd) + 3;
            *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + 3U & 7;
          }
          else {
            uVar3 = FUN_00402c68();
            *(int *)(in_stack_00000004 + 0x86e) =
                 *(int *)(in_stack_00000004 + 0x86e) +
                 (*(int *)(in_stack_00000004 + 0x872) + 7U >> 3);
            iVar4 = (uVar3 >> 9) + 0xb;
            *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + 7U & 7;
          }
          pbVar5 = local_4f0 + iVar1;
          for (; (0 < iVar4 && (iVar1 < local_8)); iVar1 = iVar1 + 1) {
            *pbVar5 = 0;
            pbVar5 = pbVar5 + 1;
            iVar4 = iVar4 + -1;
          }
        }
      } while (iVar1 < local_8);
    }
    if (*(int *)(in_stack_00000004 + 0x896) == 0) {
      FUN_00402a68();
      FUN_00402a68();
      FUN_00402a68();
    }
    else {
      for (iVar1 = 0; iVar1 < *(int *)(in_stack_00000004 + 0x89a); iVar1 = iVar1 + 1) {
        FUN_00402a68();
      }
    }
    FUN_00404134();
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_004029dc @ 0x004029dc

undefined4 FUN_004029dc(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x86e) + 5U <= *(uint *)(in_stack_00000004 + 0x876)) {
    if (*(int *)(in_stack_00000004 + 0x896) == 0) {
      uVar1 = FUN_00402b54();
      if (uVar1 == 0x10d) {
        iVar2 = FUN_00402670();
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
    else {
      uVar1 = FUN_00402b54();
      if (uVar1 == 0x100) {
        iVar2 = FUN_00402670();
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}



// Function: FUN_00402a68 @ 0x00402a68

void FUN_00402a68(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  byte *in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int local_88 [16];
  int local_48 [16];
  int *local_8;
  
  FUN_004041a4();
  iVar3 = 0;
  pbVar6 = in_stack_00000004;
  if (0 < in_stack_0000000c) {
    do {
      iVar3 = iVar3 + 1;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      local_48[bVar2 & 0xf] = local_48[bVar2 & 0xf] + 1;
    } while (iVar3 < in_stack_0000000c);
  }
  local_48[0] = 0;
  iVar3 = 0;
  piVar8 = local_48;
  in_stack_00000008[1] = 0;
  in_stack_00000008[0x11] = 0;
  local_88[0] = 0;
  iVar4 = 1;
  local_8 = local_88 + 1;
  piVar7 = in_stack_00000008 + 2;
  do {
    piVar8 = piVar8 + 1;
    iVar3 = (iVar3 + *piVar8) * 2;
    iVar9 = iVar3 << (0xfU - (char)iVar4 & 0x1f);
    if (0xffff < iVar9) {
      iVar9 = 0xffff;
    }
    *piVar7 = iVar9;
    iVar4 = iVar4 + 1;
    iVar9 = piVar8[-1];
    piVar1 = piVar7 + 0xf;
    piVar7[0x10] = iVar9 + *piVar1;
    piVar7 = piVar7 + 1;
    *local_8 = iVar9 + *piVar1;
    local_8 = local_8 + 1;
  } while (iVar4 < 0x10);
  iVar3 = 0;
  if (0 < in_stack_0000000c) {
    do {
      if (*in_stack_00000004 != 0) {
        uVar5 = *in_stack_00000004 & 0xf;
        iVar4 = local_88[uVar5];
        local_88[uVar5] = local_88[uVar5] + 1;
        in_stack_00000008[iVar4 + 0x21] = iVar3;
      }
      iVar3 = iVar3 + 1;
      in_stack_00000004 = in_stack_00000004 + 1;
    } while (iVar3 < in_stack_0000000c);
  }
  *in_stack_00000008 = in_stack_0000000c;
  return;
}



// Function: FUN_00402b54 @ 0x00402b54

uint FUN_00402b54(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  uVar1 = FUN_00402c68();
  uVar1 = uVar1 & 0xfffe;
  if (uVar1 < in_stack_00000008[9]) {
    if (uVar1 < in_stack_00000008[5]) {
      if (uVar1 < in_stack_00000008[3]) {
        if (uVar1 < in_stack_00000008[2]) {
          iVar2 = 1;
        }
        else {
          iVar2 = 2;
        }
      }
      else if (uVar1 < in_stack_00000008[4]) {
        iVar2 = 3;
      }
      else {
        iVar2 = 4;
      }
    }
    else if (uVar1 < in_stack_00000008[7]) {
      if (uVar1 < in_stack_00000008[6]) {
        iVar2 = 5;
      }
      else {
        iVar2 = 6;
      }
    }
    else if (uVar1 < in_stack_00000008[8]) {
      iVar2 = 7;
    }
    else {
      iVar2 = 8;
    }
  }
  else if (uVar1 < in_stack_00000008[0xd]) {
    if (uVar1 < in_stack_00000008[0xb]) {
      if (uVar1 < in_stack_00000008[10]) {
        iVar2 = 9;
      }
      else {
        iVar2 = 10;
      }
    }
    else if (uVar1 < in_stack_00000008[0xc]) {
      iVar2 = 0xb;
    }
    else {
      iVar2 = 0xc;
    }
  }
  else if (uVar1 < in_stack_00000008[0xf]) {
    if (uVar1 < in_stack_00000008[0xe]) {
      iVar2 = 0xd;
    }
    else {
      iVar2 = 0xe;
    }
  }
  else {
    iVar2 = 0xf;
  }
  *(int *)(in_stack_00000004 + 0x86e) =
       *(int *)(in_stack_00000004 + 0x86e) +
       ((uint)(*(int *)(in_stack_00000004 + 0x872) + iVar2) >> 3);
  *(uint *)(in_stack_00000004 + 0x872) = *(int *)(in_stack_00000004 + 0x872) + iVar2 & 7;
  uVar1 = (uVar1 - in_stack_00000008[iVar2] >> (0x10U - (char)iVar2 & 0x1f)) +
          in_stack_00000008[iVar2 + 0x11];
  if (*in_stack_00000008 <= uVar1) {
    uVar1 = 0;
  }
  return in_stack_00000008[uVar1 + 0x21];
}



// Function: FUN_00402c68 @ 0x00402c68

uint FUN_00402c68(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x86e);
  return ((uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2a2) + iVar1) << 0x10 |
          (uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2a2) + 1 + iVar1) << 8 |
         (uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2a2) + 2 + iVar1)) >>
         (8U - (char)*(undefined4 *)(in_stack_00000004 + 0x872) & 0x1f) & 0xffff;
}



// Function: FUN_00402cc0 @ 0x00402cc0

void FUN_00402cc0(void)

{
  uint uVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  uVar1 = *(uint *)(in_stack_00000004 + 0x892);
  *(int *)(in_stack_00000004 + 0x892) = *(int *)(in_stack_00000004 + 0x892) + 1;
  *(int *)(in_stack_00000004 + 0x882 + (uVar1 & 3) * 4) = in_stack_00000010;
  *(int *)(in_stack_00000004 + 0x87a) = in_stack_00000010;
  *(int *)(in_stack_00000004 + 0x87e) = in_stack_0000000c;
  *(int *)(in_stack_00000004 + 0x452) = *(int *)(in_stack_00000004 + 0x452) - in_stack_0000000c;
  while (in_stack_0000000c != 0) {
    *(undefined1 *)(in_stack_00000008 + *(int *)(in_stack_00000004 + 0x8a6)) =
         *(undefined1 *)
          (in_stack_00000008 + (*(int *)(in_stack_00000004 + 0x8a6) - in_stack_00000010 & 0xfffffU))
    ;
    *(uint *)(in_stack_00000004 + 0x8a6) = *(int *)(in_stack_00000004 + 0x8a6) + 1U & 0xfffff;
    in_stack_0000000c = in_stack_0000000c + -1;
  }
  return;
}



// Function: FUN_00402d3c @ 0x00402d3c

void FUN_00402d3c(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 0x872) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x86e) = 0;
  if (in_stack_00000008 == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x89e) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x8a2) = 0;
    FUN_004041a4();
    FUN_004041a4();
    *(undefined4 *)(in_stack_00000004 + 0x892) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x87e) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x87a) = 0;
    FUN_004041a4();
    FUN_004041a4();
    *(undefined4 *)(in_stack_00000004 + 0x8aa) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x8a6) = 0;
  }
  return;
}



// Function: FUN_00402de4 @ 0x00402de4

undefined4 FUN_00402de4(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_c;
  char local_8;
  
  iVar3 = *(int *)(in_stack_00000004 + 0x89e) * 0x5c + in_stack_00000004;
  piVar4 = (int *)(iVar3 + 0x8ae);
  *(int *)(iVar3 + 0x902) = *(int *)(iVar3 + 0x902) + 1;
  *(undefined4 *)(iVar3 + 0x8ce) = *(undefined4 *)(iVar3 + 0x8ca);
  *(undefined4 *)(iVar3 + 0x8ca) = *(undefined4 *)(iVar3 + 0x8c6);
  *(int *)(iVar3 + 0x8c6) = *(int *)(iVar3 + 0x8d2) - *(int *)(iVar3 + 0x8c2);
  *(int *)(iVar3 + 0x8c2) = *(int *)(iVar3 + 0x8d2);
  uVar7 = (char)in_stack_00000008 * 8;
  local_c = (*(int *)(iVar3 + 0x906) * 8 + *piVar4 * *(int *)(iVar3 + 0x8d2) +
             *(int *)(iVar3 + 0x8b2) * *(int *)(iVar3 + 0x8c6) +
             *(int *)(iVar3 + 0x8b6) * *(int *)(iVar3 + 0x8ca) +
             *(int *)(iVar3 + 0x8ba) * *(int *)(iVar3 + 0x8ce) +
             *(int *)(in_stack_00000004 + 0x8a2) * *(int *)(iVar3 + 0x8be) >> 3 & 0xffU) -
            in_stack_00000008;
  *(int *)(iVar3 + 0x8d6) =
       *(int *)(iVar3 + 0x8d6) + ((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f));
  uVar1 = uVar7 - *(int *)(iVar3 + 0x8c2);
  uVar5 = (int)uVar1 >> 0x1f;
  *(int *)(iVar3 + 0x8da) = *(int *)(iVar3 + 0x8da) + ((uVar1 ^ uVar5) - uVar5);
  uVar1 = *(int *)(iVar3 + 0x8c2) + uVar7;
  uVar5 = (int)uVar1 >> 0x1f;
  *(int *)(iVar3 + 0x8de) = *(int *)(iVar3 + 0x8de) + ((uVar1 ^ uVar5) - uVar5);
  uVar1 = uVar7 - *(int *)(iVar3 + 0x8c6);
  uVar5 = (int)uVar1 >> 0x1f;
  *(int *)(iVar3 + 0x8e2) = *(int *)(iVar3 + 0x8e2) + ((uVar1 ^ uVar5) - uVar5);
  uVar1 = *(int *)(iVar3 + 0x8c6) + uVar7;
  uVar5 = (int)uVar1 >> 0x1f;
  *(int *)(iVar3 + 0x8e6) = *(int *)(iVar3 + 0x8e6) + ((uVar1 ^ uVar5) - uVar5);
  uVar1 = uVar7 - *(int *)(iVar3 + 0x8ca);
  uVar5 = (int)uVar1 >> 0x1f;
  *(int *)(iVar3 + 0x8ea) = *(int *)(iVar3 + 0x8ea) + ((uVar1 ^ uVar5) - uVar5);
  uVar1 = *(int *)(iVar3 + 0x8ca) + uVar7;
  uVar5 = (int)uVar1 >> 0x1f;
  *(int *)(iVar3 + 0x8ee) = *(int *)(iVar3 + 0x8ee) + ((uVar1 ^ uVar5) - uVar5);
  uVar1 = uVar7 - *(int *)(iVar3 + 0x8ce);
  uVar5 = (int)uVar1 >> 0x1f;
  *(int *)(iVar3 + 0x8f2) = *(int *)(iVar3 + 0x8f2) + ((uVar1 ^ uVar5) - uVar5);
  uVar1 = *(int *)(iVar3 + 0x8ce) + uVar7;
  uVar5 = (int)uVar1 >> 0x1f;
  *(int *)(iVar3 + 0x8f6) = *(int *)(iVar3 + 0x8f6) + ((uVar1 ^ uVar5) - uVar5);
  uVar1 = uVar7 - *(int *)(in_stack_00000004 + 0x8a2);
  uVar5 = (int)uVar1 >> 0x1f;
  *(int *)(iVar3 + 0x8fa) = *(int *)(iVar3 + 0x8fa) + ((uVar1 ^ uVar5) - uVar5);
  uVar7 = *(int *)(in_stack_00000004 + 0x8a2) + uVar7;
  uVar1 = (int)uVar7 >> 0x1f;
  *(int *)(iVar3 + 0x8fe) = *(int *)(iVar3 + 0x8fe) + ((uVar7 ^ uVar1) - uVar1);
  local_8 = (char)local_c;
  iVar6 = (int)(char)(local_8 - *(char *)(iVar3 + 0x906));
  *(int *)(iVar3 + 0x8d2) = iVar6;
  *(int *)(in_stack_00000004 + 0x8a2) = iVar6;
  *(int *)(iVar3 + 0x906) = local_c;
  if ((*(byte *)(iVar3 + 0x902) & 0x1f) == 0) {
    uVar1 = *(uint *)(iVar3 + 0x8d6);
    local_c = 0;
    *(undefined4 *)(iVar3 + 0x8d6) = 0;
    iVar6 = 1;
    puVar2 = (uint *)(iVar3 + 0x8da);
    do {
      if (*puVar2 < uVar1) {
        uVar1 = *puVar2;
        local_c = iVar6;
      }
      iVar6 = iVar6 + 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (iVar6 < 0xb);
    switch(local_c) {
    case 1:
      if (-0x11 < *piVar4) {
        *piVar4 = *piVar4 + -1;
      }
      break;
    case 2:
      if (*piVar4 < 0x10) {
        *piVar4 = *piVar4 + 1;
      }
      break;
    case 3:
      if (-0x11 < *(int *)(iVar3 + 0x8b2)) {
        *(int *)(iVar3 + 0x8b2) = *(int *)(iVar3 + 0x8b2) + -1;
      }
      break;
    case 4:
      if (*(int *)(iVar3 + 0x8b2) < 0x10) {
        *(int *)(iVar3 + 0x8b2) = *(int *)(iVar3 + 0x8b2) + 1;
      }
      break;
    case 5:
      if (-0x11 < *(int *)(iVar3 + 0x8b6)) {
        *(int *)(iVar3 + 0x8b6) = *(int *)(iVar3 + 0x8b6) + -1;
      }
      break;
    case 6:
      if (*(int *)(iVar3 + 0x8b6) < 0x10) {
        *(int *)(iVar3 + 0x8b6) = *(int *)(iVar3 + 0x8b6) + 1;
      }
      break;
    case 7:
      if (-0x11 < *(int *)(iVar3 + 0x8ba)) {
        *(int *)(iVar3 + 0x8ba) = *(int *)(iVar3 + 0x8ba) + -1;
      }
      break;
    case 8:
      if (*(int *)(iVar3 + 0x8ba) < 0x10) {
        *(int *)(iVar3 + 0x8ba) = *(int *)(iVar3 + 0x8ba) + 1;
      }
      break;
    case 9:
      if (-0x11 < *(int *)(iVar3 + 0x8be)) {
        *(int *)(iVar3 + 0x8be) = *(int *)(iVar3 + 0x8be) + -1;
      }
      break;
    case 10:
      if (*(int *)(iVar3 + 0x8be) < 0x10) {
        *(int *)(iVar3 + 0x8be) = *(int *)(iVar3 + 0x8be) + 1;
      }
    }
  }
  return CONCAT31((int3)((uint)local_c >> 8),local_8);
}



// Function: FUN_00403008 @ 0x00403008

void FUN_00403008(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_stack_00000004;
  uint *in_stack_00000008;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  uVar2 = in_stack_00000008[2] ^ *(uint *)(in_stack_00000004 + 0x332);
  uVar3 = in_stack_00000008[3] ^ *(uint *)(in_stack_00000004 + 0x336);
  local_10 = in_stack_00000008[1] ^ *(uint *)(in_stack_00000004 + 0x32e);
  local_c = *in_stack_00000008 ^ *(uint *)(in_stack_00000004 + 0x32a);
  do {
    uVar4 = uVar3;
    uVar1 = uVar2;
    uVar2 = (uVar4 << 0xb | uVar4 >> 0x15) + uVar1 ^
            *(uint *)(in_stack_00000004 + 0x32a + (local_8 & 3) * 4);
    uVar2 = CONCAT13(*(undefined1 *)(in_stack_00000004 + 0x34e + (uVar2 >> 0x18)),
                     CONCAT12(*(undefined1 *)(in_stack_00000004 + 0x34e + (uVar2 >> 0x10 & 0xff)),
                              CONCAT11(*(undefined1 *)
                                        (in_stack_00000004 + 0x34e + (uVar2 >> 8 & 0xff)),
                                       *(undefined1 *)(in_stack_00000004 + 0x34e + (uVar2 & 0xff))))
                    ) ^ local_c;
    uVar3 = ((uVar1 << 0x11 | uVar1 >> 0xf) ^ uVar4) +
            *(int *)(in_stack_00000004 + 0x32a + (local_8 & 3) * 4);
    uVar3 = CONCAT13(*(undefined1 *)(in_stack_00000004 + 0x34e + (uVar3 >> 0x18)),
                     CONCAT12(*(undefined1 *)(in_stack_00000004 + 0x34e + (uVar3 >> 0x10 & 0xff)),
                              CONCAT11(*(undefined1 *)
                                        (in_stack_00000004 + 0x34e + (uVar3 >> 8 & 0xff)),
                                       *(undefined1 *)(in_stack_00000004 + 0x34e + (uVar3 & 0xff))))
                    ) ^ local_10;
    local_8 = local_8 + 1;
    local_10 = uVar4;
    local_c = uVar1;
  } while ((int)local_8 < 0x20);
  *in_stack_00000008 = uVar2 ^ *(uint *)(in_stack_00000004 + 0x32a);
  in_stack_00000008[1] = uVar3 ^ *(uint *)(in_stack_00000004 + 0x32e);
  in_stack_00000008[2] = uVar1 ^ *(uint *)(in_stack_00000004 + 0x332);
  in_stack_00000008[3] = uVar4 ^ *(uint *)(in_stack_00000004 + 0x336);
  FUN_00403350();
  return;
}



// Function: FUN_004031a4 @ 0x004031a4

void FUN_004031a4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_stack_00000004;
  uint *in_stack_00000008;
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_00404134();
  local_8 = 0x1f;
  uVar1 = in_stack_00000008[3] ^ *(uint *)(in_stack_00000004 + 0x336);
  uVar4 = in_stack_00000008[2] ^ *(uint *)(in_stack_00000004 + 0x332);
  local_10 = in_stack_00000008[1] ^ *(uint *)(in_stack_00000004 + 0x32e);
  local_c = *in_stack_00000008 ^ *(uint *)(in_stack_00000004 + 0x32a);
  do {
    uVar3 = uVar4;
    uVar2 = uVar1;
    uVar1 = (uVar2 << 0xb | uVar2 >> 0x15) + uVar3 ^
            *(uint *)(in_stack_00000004 + 0x32a + (local_8 & 3) * 4);
    uVar4 = CONCAT13(*(undefined1 *)(in_stack_00000004 + 0x34e + (uVar1 >> 0x18)),
                     CONCAT12(*(undefined1 *)(in_stack_00000004 + 0x34e + (uVar1 >> 0x10 & 0xff)),
                              CONCAT11(*(undefined1 *)
                                        (in_stack_00000004 + 0x34e + (uVar1 >> 8 & 0xff)),
                                       *(undefined1 *)(in_stack_00000004 + 0x34e + (uVar1 & 0xff))))
                    ) ^ local_c;
    uVar1 = ((uVar3 << 0x11 | uVar3 >> 0xf) ^ uVar2) +
            *(int *)(in_stack_00000004 + 0x32a + (local_8 & 3) * 4);
    uVar1 = CONCAT13(*(undefined1 *)(in_stack_00000004 + 0x34e + (uVar1 >> 0x18)),
                     CONCAT12(*(undefined1 *)(in_stack_00000004 + 0x34e + (uVar1 >> 0x10 & 0xff)),
                              CONCAT11(*(undefined1 *)
                                        (in_stack_00000004 + 0x34e + (uVar1 >> 8 & 0xff)),
                                       *(undefined1 *)(in_stack_00000004 + 0x34e + (uVar1 & 0xff))))
                    ) ^ local_10;
    local_8 = local_8 - 1;
    local_10 = uVar2;
    local_c = uVar3;
  } while (-1 < (int)local_8);
  *in_stack_00000008 = uVar4 ^ *(uint *)(in_stack_00000004 + 0x32a);
  in_stack_00000008[1] = uVar1 ^ *(uint *)(in_stack_00000004 + 0x32e);
  in_stack_00000008[2] = uVar3 ^ *(uint *)(in_stack_00000004 + 0x332);
  in_stack_00000008[3] = uVar2 ^ *(uint *)(in_stack_00000004 + 0x336);
  FUN_00403350();
  return;
}



// Function: FUN_00403350 @ 0x00403350

void FUN_00403350(void)

{
  byte *pbVar1;
  int iVar2;
  int in_stack_00000004;
  byte *in_stack_00000008;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 4;
    *(uint *)(in_stack_00000004 + 0x32a) =
         *(uint *)(in_stack_00000004 + 0x32a) ^ (&DAT_0040c57c)[*in_stack_00000008];
    *(uint *)(in_stack_00000004 + 0x32e) =
         *(uint *)(in_stack_00000004 + 0x32e) ^ (&DAT_0040c57c)[in_stack_00000008[1]];
    *(uint *)(in_stack_00000004 + 0x332) =
         *(uint *)(in_stack_00000004 + 0x332) ^ (&DAT_0040c57c)[in_stack_00000008[2]];
    pbVar1 = in_stack_00000008 + 3;
    in_stack_00000008 = in_stack_00000008 + 4;
    *(uint *)(in_stack_00000004 + 0x336) =
         *(uint *)(in_stack_00000004 + 0x336) ^ (&DAT_0040c57c)[*pbVar1];
  } while (iVar2 < 0x10);
  return;
}



// Function: FUN_004033a4 @ 0x004033a4

void FUN_004033a4(void)

{
  undefined1 uVar1;
  undefined1 *in_stack_00000004;
  undefined1 *in_stack_00000008;
  
  uVar1 = *in_stack_00000004;
  *in_stack_00000004 = *in_stack_00000008;
  *in_stack_00000008 = uVar1;
  return;
}



// Function: FUN_004033bc @ 0x004033bc

void FUN_004033bc(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000004;
  char *in_stack_00000008;
  char local_118;
  byte local_117 [255];
  byte *local_18;
  char local_11;
  uint local_10;
  uint local_c;
  uint local_8;
  
  bVar6 = 0;
  *(undefined4 *)(in_stack_00000004 + 0x32a) = 0xd3a3b879;
  *(undefined4 *)(in_stack_00000004 + 0x32e) = 0x3f6d12f7;
  *(undefined4 *)(in_stack_00000004 + 0x332) = 0x7515a235;
  *(undefined4 *)(in_stack_00000004 + 0x336) = 0xa4e7f123;
  FUN_004041a4();
  uVar1 = 0xffffffff;
  do {
    pcVar4 = in_stack_00000008;
    if (uVar1 == 0) break;
    uVar1 = uVar1 - 1;
    pcVar4 = in_stack_00000008 + (uint)bVar6 * -2 + 1;
    cVar3 = *in_stack_00000008;
    in_stack_00000008 = pcVar4;
  } while (cVar3 != '\0');
  uVar1 = ~uVar1;
  pcVar4 = pcVar4 + -uVar1;
  pcVar5 = &local_118;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  }
  local_10 = FUN_0040423c();
  FUN_00404134();
  local_c = 0;
  do {
    local_18 = local_117;
    local_8 = 0;
    if (local_10 != 0) {
      do {
        local_11 = *(char *)(&DAT_0040c57c + (*local_18 + local_c & 0xff));
        cVar3 = *(char *)(&DAT_0040c57c + (local_18[-1] - local_c & 0xff));
        if (cVar3 != local_11) {
          do {
            FUN_004033a4();
            cVar3 = cVar3 + '\x01';
          } while (cVar3 != local_11);
        }
        local_8 = local_8 + 2;
        local_18 = local_18 + 2;
      } while (local_8 < local_10);
    }
    local_c = local_c + 1;
  } while (local_c < 0x100);
  local_8 = 0;
  if (local_10 != 0) {
    do {
      FUN_00403008();
      local_8 = local_8 + 0x10;
    } while (local_8 < local_10);
  }
  return;
}



// Function: FUN_00403530 @ 0x00403530

void FUN_00403530(void)

{
  int in_stack_00000004;
  
  FUN_00404134();
  *(undefined4 *)(in_stack_00000004 + 0x34a) = *(undefined4 *)(in_stack_00000004 + 0x326);
  return;
}



// Function: FUN_00403560 @ 0x00403560

void FUN_00403560(void)

{
  int in_stack_00000004;
  
  FUN_00404134();
  *(undefined4 *)(in_stack_00000004 + 0x326) = *(undefined4 *)(in_stack_00000004 + 0x34a);
  return;
}



// Function: FUN_00403590 @ 0x00403590

void FUN_00403590(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar1 = 0;
  puVar3 = &DAT_0040c57c;
  do {
    iVar2 = 0;
    uVar4 = uVar1;
    do {
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar4 >> 1;
      }
      else {
        uVar4 = uVar4 >> 1 ^ 0xedb88320;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    *puVar3 = uVar4;
    uVar1 = uVar1 + 1;
    puVar3 = puVar3 + 1;
  } while ((int)uVar1 < 0x100);
  return;
}



// Function: FUN_004035cc @ 0x004035cc

void FUN_004035cc(void)

{
  FUN_004035e8();
  return;
}



// Function: FUN_004035e8 @ 0x004035e8

void FUN_004035e8(void)

{
  uint uVar1;
  uint in_stack_0000000c;
  
  for (uVar1 = 0; uVar1 < in_stack_0000000c; uVar1 = uVar1 + 1) {
  }
  return;
}



// Function: RAROpenArchive @ 0x0040361c

uint * RAROpenArchive(void)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  undefined4 *in_stack_00000004;
  
                    /* 0x361c  1  RAROpenArchive */
  bVar9 = 0;
  FUN_00403590();
  puVar2 = FUN_00408cc4();
  if (puVar2 == (uint *)0x0) {
    in_stack_00000004[2] = 0xb;
    puVar2 = (uint *)0x0;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar7 = (char *)*in_stack_00000004;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = (char *)((int)puVar2 + 0x5a);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + ((uint)bVar9 * -2 + 1) * 4;
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    }
    *(undefined4 *)((int)puVar2 + 0x272) = in_stack_00000004[1];
    *(undefined4 *)((int)puVar2 + 0x276) = 1;
    puVar3 = FUN_00409440();
    *(uint **)((int)puVar2 + 0x2a2) = puVar3;
    if (puVar3 == (uint *)0x0) {
      FUN_0040932c();
      in_stack_00000004[2] = 0xb;
      puVar2 = (uint *)0x0;
    }
    else {
      iVar4 = FUN_00406a54();
      *(int *)((int)puVar2 + 0x262) = iVar4;
      if (iVar4 == 0) {
        FUN_0040932c();
        FUN_0040932c();
        in_stack_00000004[2] = 0xf;
        puVar2 = (uint *)0x0;
      }
      else {
        FUN_00401f38();
        if (iVar4 == 0) {
          FUN_00406704();
          FUN_0040932c();
          FUN_0040932c();
          in_stack_00000004[2] = 0xd;
          puVar2 = (uint *)0x0;
        }
        else if (*(int *)((int)puVar2 + 0x28a) == 0) {
          if ((in_stack_00000004[3] == 0) || (in_stack_00000004[4] == 0)) {
            in_stack_00000004[6] = 0;
            in_stack_00000004[5] = 0;
          }
          else {
            uVar5 = FUN_00401b64();
            in_stack_00000004[5] = uVar5;
          }
          if (*(int *)((int)puVar2 + 0x272) == 1) {
            puVar3 = FUN_00409440();
            *(uint **)((int)puVar2 + 0x29e) = puVar3;
            if (puVar3 == (uint *)0x0) {
              FUN_00406704();
              FUN_0040932c();
              FUN_0040932c();
              in_stack_00000004[2] = 0xb;
              return (uint *)0x0;
            }
          }
          in_stack_00000004[2] = 0;
        }
        else {
          FUN_00406704();
          FUN_0040932c();
          FUN_0040932c();
          in_stack_00000004[2] = 0xc;
          puVar2 = (uint *)0x0;
        }
      }
    }
  }
  return puVar2;
}



// Function: RARCloseArchive @ 0x004037e4

undefined4 RARCloseArchive(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  
                    /* 0x37e4  2  RARCloseArchive */
  if (in_stack_00000004 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_00406704();
    if (*(int *)(in_stack_00000004 + 0x266) != 0) {
      FUN_00406704();
    }
    FUN_0040932c();
    FUN_0040932c();
    FUN_004041a4();
    FUN_0040932c();
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 0x11;
    }
  }
  return uVar1;
}



// Function: RARReadHeader @ 0x00403854

undefined4 RARReadHeader(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  int in_stack_00000004;
  char *in_stack_00000008;
  
                    /* 0x3854  3  RARReadHeader */
  bVar8 = 0;
  if (*(int *)(in_stack_00000004 + 0x276) == 0) {
    FUN_00406dfc();
    FUN_004014c0();
  }
  *(undefined4 *)(in_stack_00000004 + 0x276) = 0;
  iVar2 = FUN_00401524();
  uVar4 = 0xffffffff;
  pcVar6 = (char *)(in_stack_00000004 + 0x5a);
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = in_stack_00000008;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = (char *)(in_stack_00000004 + 0x15e);
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = in_stack_00000008 + 0x104;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  }
  *(uint *)(in_stack_00000008 + 0x208) = (uint)*(ushort *)(in_stack_00000004 + 0x17);
  *(undefined4 *)(in_stack_00000008 + 0x20c) = *(undefined4 *)(in_stack_00000004 + 0x1b);
  *(undefined4 *)(in_stack_00000008 + 0x210) = *(undefined4 *)(in_stack_00000004 + 0x1f);
  *(uint *)(in_stack_00000008 + 0x214) = (uint)*(byte *)(in_stack_00000004 + 0x23);
  *(undefined4 *)(in_stack_00000008 + 0x218) = *(undefined4 *)(in_stack_00000004 + 0x24);
  *(undefined4 *)(in_stack_00000008 + 0x21c) = *(undefined4 *)(in_stack_00000004 + 0x28);
  *(uint *)(in_stack_00000008 + 0x220) = (uint)*(byte *)(in_stack_00000004 + 0x2c);
  *(uint *)(in_stack_00000008 + 0x224) = (uint)*(byte *)(in_stack_00000004 + 0x2d);
  *(undefined4 *)(in_stack_00000008 + 0x228) = *(undefined4 *)(in_stack_00000004 + 0x30);
  if ((*(int *)(in_stack_00000008 + 0x22c) == 0) || (*(int *)(in_stack_00000008 + 0x230) == 0)) {
    in_stack_00000008[0x238] = '\0';
    in_stack_00000008[0x239] = '\0';
    in_stack_00000008[0x23a] = '\0';
    in_stack_00000008[0x23b] = '\0';
    in_stack_00000008[0x234] = '\0';
    in_stack_00000008[0x235] = '\0';
    in_stack_00000008[0x236] = '\0';
    in_stack_00000008[0x237] = '\0';
  }
  else {
    uVar4 = FUN_00401dd8();
    *(uint *)(in_stack_00000008 + 0x234) = uVar4;
  }
  FUN_004014c0();
  if (*(int *)(in_stack_00000004 + 0x286) == 0) {
    uVar3 = 10;
    if (iVar2 != 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xc;
  }
  return uVar3;
}



// Function: RARProcessFile @ 0x004039d0

int RARProcessFile(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
                    /* 0x39d0  4  RARProcessFile */
  iVar3 = 0;
  if (*(int *)(in_stack_00000004 + 0x276) == 1) {
    iVar2 = FUN_00401524();
    if (iVar2 == 0) {
      return 10;
    }
    FUN_004014c0();
  }
  *(undefined4 *)(in_stack_00000004 + 0x276) = 1;
  if (((*(byte *)(in_stack_00000004 + 0x17) & 2) == 0) ||
     (bVar1 = FUN_004011e8(), CONCAT31(extraout_var,bVar1) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((*(int *)(in_stack_00000004 + 0x272) != 1) || (bVar1)) ||
     (((*(byte *)(in_stack_00000004 + 10) & 8) == 0 && (in_stack_00000008 == 0)))) {
    do {
      if ((*(byte *)(in_stack_00000004 + 0x17) & 2) == 0) {
        FUN_004014c0();
        goto LAB_00403ab5;
      }
      iVar2 = FUN_00403f6c();
    } while (iVar2 != 0);
    iVar3 = *(int *)(in_stack_00000004 + 0x27a);
  }
  else {
    iVar3 = FUN_00403b34();
    FUN_004014c0();
LAB_00403ab5:
    if (*(int *)(in_stack_00000004 + 0x27a) != 0) {
      iVar3 = *(int *)(in_stack_00000004 + 0x27a);
    }
  }
  return iVar3;
}



// Function: RARSetChangeVolProc @ 0x00403ad0

void RARSetChangeVolProc(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
                    /* 0x3ad0  5  RARSetChangeVolProc */
  *(undefined4 *)(in_stack_00000004 + 0x26a) = in_stack_00000008;
  return;
}



// Function: RARSetProcessDataProc @ 0x00403ae4

void RARSetProcessDataProc(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
                    /* 0x3ae4  6  RARSetProcessDataProc */
  *(undefined4 *)(in_stack_00000004 + 0x26e) = in_stack_00000008;
  return;
}



// Function: RARSetPassword @ 0x00403af8

char * RARSetPassword(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int in_stack_00000004;
  char *in_stack_00000008;
  
                    /* 0x3af8  7  RARSetPassword */
  uVar2 = 0xffffffff;
  do {
    pcVar4 = in_stack_00000008;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = in_stack_00000008 + 1;
    cVar1 = *in_stack_00000008;
    in_stack_00000008 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)(in_stack_00000004 + 0x2a6);
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
  return (char *)(in_stack_00000004 + 0x2a6);
}



// Function: FUN_00403b34 @ 0x00403b34

int FUN_00403b34(void)

{
  char cVar1;
  bool bVar2;
  BOOL BVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined3 extraout_var_00;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int in_stack_00000004;
  int in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  char local_108 [260];
  
  if (in_stack_00000010 == (char *)0x0) {
    if (in_stack_0000000c == (char *)0x0) {
      uVar7 = 0xffffffff;
      pcVar9 = (char *)(in_stack_00000004 + 0x15e);
      do {
        pcVar10 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar10 + -uVar7;
      pcVar10 = local_108;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    else {
      uVar7 = 0xffffffff;
      do {
        pcVar9 = in_stack_0000000c;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar9 = in_stack_0000000c + 1;
        cVar1 = *in_stack_0000000c;
        in_stack_0000000c = pcVar9;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar9 + -uVar7;
      pcVar10 = local_108;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      iVar4 = FUN_0040423c();
      if (((0 < iVar4) && (local_108[iVar4 + -1] != ':')) && (local_108[iVar4 + -1] != '\\')) {
        FUN_004041d4();
      }
      FUN_004041d4();
    }
  }
  else {
    uVar7 = 0xffffffff;
    do {
      pcVar9 = in_stack_00000010;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar9 = in_stack_00000010 + 1;
      cVar1 = *in_stack_00000010;
      in_stack_00000010 = pcVar9;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar9 + -uVar7;
    pcVar10 = local_108;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  BVar3 = AreFileApisANSI();
  if (BVar3 != 0) {
    OemToCharA(local_108,local_108);
  }
  if (((*(byte *)(in_stack_00000004 + 0x17) & 1) == 0) ||
     (bVar2 = FUN_004011e8(), CONCAT31(extraout_var,bVar2) != 0)) {
    if (*(char *)(in_stack_00000004 + 0x2c) == '\x14') {
      iVar4 = FUN_00401208();
      if (iVar4 == 0) {
        bVar2 = FUN_004011e8();
        if (CONCAT31(extraout_var_00,bVar2) == 0) {
          *(undefined4 *)(in_stack_00000004 + 0x466) = 0xffffffff;
          FUN_00401228();
          if (in_stack_00000008 == 2) {
            *(undefined4 *)(in_stack_00000004 + 0x44e) = 0;
            iVar4 = FUN_00406a54();
            *(int *)(in_stack_00000004 + 0x266) = iVar4;
            if (iVar4 == 0) {
              FUN_00403e84();
              iVar4 = FUN_00406a54();
              *(int *)(in_stack_00000004 + 0x266) = iVar4;
              if (iVar4 == 0) {
                return 0x10;
              }
            }
          }
          else {
            *(undefined4 *)(in_stack_00000004 + 0x44e) = 1;
          }
          if ((*(char *)(in_stack_00000004 + 0x2a6) == '\0') ||
             ((*(byte *)(in_stack_00000004 + 0x17) & 4) == 0)) {
            *(undefined4 *)(in_stack_00000004 + 0x326) = 0;
          }
          else {
            *(uint *)(in_stack_00000004 + 0x326) = (uint)*(byte *)(in_stack_00000004 + 0x2c);
          }
          if (*(int *)(in_stack_00000004 + 0x326) != 0) {
            FUN_004033bc();
          }
          *(undefined4 *)(in_stack_00000004 + 0x456) = *(undefined4 *)(in_stack_00000004 + 0x1b);
          *(undefined4 *)(in_stack_00000004 + 0x452) = *(undefined4 *)(in_stack_00000004 + 0x1f);
          *(undefined4 *)(in_stack_00000004 + 0x27e) = 1;
          if (*(char *)(in_stack_00000004 + 0x2d) == '0') {
            iVar4 = FUN_00404064();
          }
          else {
            iVar4 = FUN_004020e0();
          }
          *(undefined4 *)(in_stack_00000004 + 0x27e) = 0;
          if (in_stack_00000008 == 2) {
            FUN_00401184();
            iVar6 = FUN_00406704();
            if (iVar6 != 0) {
              return 0x11;
            }
            *(undefined4 *)(in_stack_00000004 + 0x266) = 0;
            FUN_0040119c();
          }
          iVar6 = *(int *)(in_stack_00000004 + 0x27a);
          if (((*(int *)(in_stack_00000004 + 0x27a) == 0) && (iVar6 = iVar4, iVar4 == 0)) &&
             (iVar6 = 0,
             ~*(uint *)(in_stack_00000004 + 0x24) != *(uint *)(in_stack_00000004 + 0x466))) {
            iVar6 = 0xc;
          }
        }
        else {
          if (((in_stack_00000008 == 2) && (iVar4 = FUN_0040115c(), iVar4 == -1)) &&
             (puVar5 = FUN_004098f8(), *puVar5 != 0x23)) {
            FUN_00403e84();
            iVar4 = FUN_0040115c();
            if (((iVar4 == -1) && (puVar5 = FUN_004098f8(), *puVar5 != 0x23)) &&
               (puVar5 = FUN_004098f8(), *puVar5 != 5)) {
              return 0x10;
            }
          }
          iVar6 = 0;
        }
      }
      else {
        iVar6 = 0;
      }
    }
    else {
      iVar6 = 0xe;
      if (*(int *)(in_stack_00000004 + 0x272) != 1) {
        iVar6 = 0;
      }
    }
  }
  else {
    iVar6 = 0xe;
  }
  return iVar6;
}



// Function: FUN_00403e84 @ 0x00403e84

void FUN_00403e84(void)

{
  int iVar1;
  char *in_stack_00000004;
  
  for (; *in_stack_00000004 != '\0'; in_stack_00000004 = in_stack_00000004 + 1) {
    iVar1 = FUN_00401284();
    if (iVar1 != 0) {
      *in_stack_00000004 = '\0';
      FUN_0040115c();
      *in_stack_00000004 = '\\';
    }
  }
  return;
}



// Function: FUN_00403ec0 @ 0x00403ec0

char * FUN_00403ec0(void)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  
  bVar3 = 0;
  pcVar1 = FUN_004042e4();
  if (pcVar1 == (char *)0x0) {
    FUN_004041d4();
    pcVar1 = FUN_004042e4();
    pcVar2 = pcVar1;
  }
  else {
    pcVar2 = (char *)FUN_0040429c();
    if (pcVar2 == (char *)0x0) {
      *(undefined4 *)(pcVar1 + 1) = DAT_0040b316;
      pcVar2 = pcVar1 + 1;
    }
  }
  if ((((&DAT_0040c21d)[(byte)pcVar1[2]] & 2) == 0) || (((&DAT_0040c21d)[(byte)pcVar1[3]] & 2) == 0)
     ) {
    pcVar2 = pcVar1 + 2;
    *(undefined2 *)pcVar2 = DAT_0040b31a;
    pcVar1[(uint)bVar3 * -4 + 4] = (&DAT_0040b31c)[(uint)bVar3 * -4];
  }
  else {
    for (pcVar1 = pcVar1 + 3; *pcVar1 = *pcVar1 + '\x01', *pcVar1 == ':'; pcVar1 = pcVar1 + -1) {
      if (pcVar1[-1] == '.') {
        *pcVar1 = 'A';
        return pcVar2;
      }
      *pcVar1 = '0';
    }
  }
  return pcVar2;
}



// Function: FUN_00403f6c @ 0x00403f6c

undefined4 FUN_00403f6c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  FUN_00406704();
  FUN_00403ec0();
  do {
    iVar1 = FUN_00406a54();
    *(int *)(in_stack_00000004 + 0x262) = iVar1;
    if (iVar1 != 0) {
      FUN_00401f38();
      if (iVar1 == 0) {
        *(undefined4 *)(in_stack_00000004 + 0x27a) = 0xd;
        return 0;
      }
      if (*(int *)(in_stack_00000004 + 0x26a) != 0) {
        iVar1 = (**(code **)(in_stack_00000004 + 0x26a))();
        if (iVar1 == 0) {
          *(undefined4 *)(in_stack_00000004 + 0x27a) = 0xf;
          return 0;
        }
      }
      FUN_004014c0();
      FUN_00401524();
      FUN_004014c0();
      *(undefined4 *)(in_stack_00000004 + 0x456) = *(undefined4 *)(in_stack_00000004 + 0x1b);
      return 1;
    }
    if (*(int *)(in_stack_00000004 + 0x26a) == 0) break;
    iVar1 = (**(code **)(in_stack_00000004 + 0x26a))();
  } while (iVar1 != 0);
  *(undefined4 *)(in_stack_00000004 + 0x27a) = 0xf;
  return 0;
}



// Function: FUN_00404064 @ 0x00404064

undefined4 FUN_00404064(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_stack_00000004;
  
  puVar1 = FUN_00409440();
  if (puVar1 != (uint *)0x0) {
    while (uVar2 = FUN_004012f8(), uVar2 != 0xffffffff) {
      if (uVar2 == 0) {
        FUN_0040932c();
        return 0;
      }
      if (*(uint *)(in_stack_00000004 + 0x452) <= uVar2) {
        uVar2 = *(uint *)(in_stack_00000004 + 0x452);
      }
      uVar3 = FUN_004013bc();
      if (uVar3 != uVar2) {
        FUN_0040932c();
        return 0x13;
      }
      if (-1 < *(int *)(in_stack_00000004 + 0x452)) {
        *(int *)(in_stack_00000004 + 0x452) = *(int *)(in_stack_00000004 + 0x452) - uVar2;
      }
    }
    FUN_0040932c();
  }
  return 0x12;
}



// Function: FUN_00404114 @ 0x00404114

char * FUN_00404114(void)

{
  char *pcVar1;
  undefined1 in_ZF;
  char *in_stack_00000004;
  char in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_0000000c != 0) {
    do {
      pcVar1 = in_stack_00000004;
      if (in_stack_0000000c == 0) break;
      in_stack_0000000c = in_stack_0000000c + -1;
      pcVar1 = in_stack_00000004 + 1;
      in_ZF = in_stack_00000008 == *in_stack_00000004;
      in_stack_00000004 = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}



// Function: FUN_00404134 @ 0x00404134

undefined4 * FUN_00404134(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint in_stack_0000000c;
  
  puVar2 = in_stack_00000004;
  for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)in_stack_00000008;
    in_stack_00000008 = (undefined4 *)((int)in_stack_00000008 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return in_stack_00000004;
}



// Function: FUN_00404158 @ 0x00404158

undefined4 * FUN_00404158(void)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint in_stack_0000000c;
  
  if (in_stack_00000004 < in_stack_00000008) {
    puVar3 = in_stack_00000004;
    for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)in_stack_00000008;
      in_stack_00000008 = (undefined4 *)((int)in_stack_00000008 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  else if (in_stack_00000004 != in_stack_00000008) {
    puVar2 = (undefined1 *)((int)in_stack_00000008 + (in_stack_0000000c - 1));
    puVar4 = (undefined1 *)((int)in_stack_00000004 + (in_stack_0000000c - 1));
    for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
    }
    puVar3 = (undefined4 *)(puVar2 + -3);
    puVar5 = (undefined4 *)(puVar4 + -3);
    for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
    }
  }
  return in_stack_00000004;
}



// Function: FUN_004041a4 @ 0x004041a4

undefined4 * FUN_004041a4(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  undefined1 in_stack_00000008;
  uint in_stack_0000000c;
  
  puVar2 = in_stack_00000004;
  for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = CONCAT22(CONCAT11(in_stack_00000008,in_stack_00000008),
                       CONCAT11(in_stack_00000008,in_stack_00000008));
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = in_stack_00000008;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return in_stack_00000004;
}



// Function: FUN_004041d4 @ 0x004041d4

char * FUN_004041d4(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  iVar2 = -1;
  pcVar5 = in_stack_00000004;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  do {
    pcVar5 = in_stack_00000008;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = in_stack_00000008 + 1;
    cVar1 = *in_stack_00000008;
    in_stack_00000008 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = pcVar6 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return in_stack_00000004;
}



// Function: FUN_00404210 @ 0x00404210

int FUN_00404210(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  uVar3 = 0xffffffff;
  pcVar4 = in_stack_00000008;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  do {
    pcVar4 = in_stack_00000004;
    pcVar5 = in_stack_00000008;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = in_stack_00000008 + 1;
    pcVar4 = in_stack_00000004 + 1;
    cVar2 = *in_stack_00000008;
    cVar1 = *in_stack_00000004;
    in_stack_00000004 = pcVar4;
    in_stack_00000008 = pcVar5;
  } while (cVar1 == cVar2);
  return (uint)(byte)pcVar4[-1] - (uint)(byte)pcVar5[-1];
}



// Function: FUN_0040423c @ 0x0040423c

int FUN_0040423c(void)

{
  char cVar1;
  uint uVar2;
  char *in_stack_00000004;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *in_stack_00000004;
    in_stack_00000004 = in_stack_00000004 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}



// Function: FUN_00404258 @ 0x00404258

int FUN_00404258(void)

{
  byte *in_stack_00000004;
  byte *in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 0) {
    return 0;
  }
  while( true ) {
    if (in_stack_0000000c == 0) {
      return (uint)in_stack_00000004[-1] - (uint)in_stack_00000008[-1];
    }
    if (*in_stack_00000004 != *in_stack_00000008) break;
    in_stack_00000004 = in_stack_00000004 + 1;
    in_stack_00000008 = in_stack_00000008 + 1;
    in_stack_0000000c = in_stack_0000000c + -1;
  }
  return (uint)*in_stack_00000004 - (uint)*in_stack_00000008;
}



// Function: FUN_0040429c @ 0x0040429c

int FUN_0040429c(void)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = FUN_00408b14();
    uVar2 = FUN_00408b14();
    if ((char)uVar1 != (char)uVar2) break;
  } while ((char)uVar1 != '\0');
  return (uVar1 & 0xff) - (uVar2 & 0xff);
}



// Function: FUN_004042e4 @ 0x004042e4

char * FUN_004042e4(void)

{
  int iVar1;
  char *pcVar2;
  char *in_stack_00000004;
  char in_stack_00000008;
  
  iVar1 = FUN_0040423c();
  pcVar2 = in_stack_00000004 + iVar1;
  while( true ) {
    if (in_stack_00000008 == *pcVar2) {
      return pcVar2;
    }
    if (in_stack_00000004 == pcVar2) break;
    pcVar2 = pcVar2 + -1;
  }
  return (char *)0x0;
}



// Function: FUN_00404310 @ 0x00404310

int FUN_00404310(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = FUN_0040423c();
  FUN_00404134();
  return iVar1 + in_stack_00000004;
}



// Function: FUN_0040433c @ 0x0040433c

void FUN_0040433c(undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00404340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// Function: FUN_00404343 @ 0x00404343

char * FUN_00404343(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    return s_<notype>_0040b418;
  }
  return (char *)(in_stack_00000004 + (uint)*(ushort *)(in_stack_00000004 + 6));
}



// Function: FUN_0040435c @ 0x0040435c

void FUN_0040435c(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int in_FS_OFFSET;
  
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x30) = 0;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x2c) = 0;
    if (**(int **)(*(int *)(in_FS_OFFSET + 4) + -8) == 0) {
      ___lockDebuggerData_qv();
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = 0xb;
      (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
      ___unlockDebuggerData_qv();
      return;
    }
    ___lockDebuggerData_qv();
    for (piVar3 = (int *)**(undefined4 **)(*(int *)(in_FS_OFFSET + 4) + -8); piVar3 != (int *)0x0;
        piVar3 = (int *)*piVar3) {
      uVar4 = 10;
      if (*piVar3 == 0) {
        uVar4 = 9;
      }
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = uVar4;
      if ((char)piVar3[0x11] == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)piVar3 + 0x46;
      }
      *(int *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x18) = iVar5;
      if (piVar3[1] == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = FUN_00404343();
      }
      *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28) = pcVar6;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24) = 0;
      pcVar6 = *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28);
      while ((pcVar6 != (char *)0x0 && (cVar2 = *pcVar6, pcVar6 = pcVar6 + 1, cVar2 != '\0'))) {
        piVar1 = (int *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24);
        *piVar1 = *piVar1 + 1;
      }
      *(int **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x20) = piVar3;
      (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
    }
    ___unlockDebuggerData_qv();
  }
  return;
}



// Function: FUN_004044ae @ 0x004044ae

undefined4 FUN_004044ae(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if (in_stack_00000008 == in_stack_00000004) {
    return 1;
  }
  if (((short)in_stack_00000004[1] == (short)in_stack_00000008[1]) &&
     (*in_stack_00000004 == *in_stack_00000008)) {
    if (((*(ushort *)(in_stack_00000004 + 1) | *(ushort *)(in_stack_00000008 + 1)) & 0x80) != 0) {
      return 0;
    }
    pcVar3 = (char *)((int)in_stack_00000004 + (uint)*(ushort *)((int)in_stack_00000004 + 6));
    pcVar4 = (char *)((int)in_stack_00000008 + (uint)*(ushort *)((int)in_stack_00000008 + 6));
    do {
      cVar1 = *pcVar3;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
      if (cVar2 != cVar1) {
        return 0;
      }
    } while (cVar1 != '\0');
    return 1;
  }
  return 0;
}



// Function: FUN_00404514 @ 0x00404514

undefined4 FUN_00404514(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int in_stack_00000004;
  int in_stack_00000010;
  
  piVar4 = (int *)((uint)*(ushort *)(in_stack_00000004 + 0x12) + in_stack_00000004);
  do {
    iVar2 = *piVar4;
    if (iVar2 == 0) {
      piVar4 = (int *)((uint)*(ushort *)(in_stack_00000004 + 0x10) + in_stack_00000004);
      while( true ) {
        iVar2 = *piVar4;
        if (iVar2 == 0) {
          return 0;
        }
        if ((in_stack_00000010 == 0) || ((piVar4[2] & 3U) != 3)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        iVar1 = FUN_004044ae();
        if ((iVar1 != 0) && (bVar3)) break;
        if (((*(byte *)(iVar2 + 0xc) & 4) != 0) && (iVar2 = FUN_00404514(), iVar2 != 0)) {
          return 1;
        }
        piVar4 = piVar4 + 3;
      }
      return 1;
    }
    if ((*(byte *)(piVar4 + 2) & 8) == 0) {
      if ((in_stack_00000010 == 0) || ((piVar4[2] & 3U) != 3)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      iVar1 = FUN_004044ae();
      if ((iVar1 != 0) && (bVar3)) {
        return 1;
      }
      if (((*(byte *)(iVar2 + 0xc) & 4) != 0) && (iVar2 = FUN_00404514(), iVar2 != 0)) {
        return 1;
      }
    }
    piVar4 = piVar4 + 3;
  } while( true );
}



// Function: FUN_0040460e @ 0x0040460e

undefined4 FUN_0040460e(void)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  while( true ) {
    while( true ) {
      if (in_stack_00000008 == in_stack_00000004) {
        return 1;
      }
      uVar2 = *(ushort *)(in_stack_00000004 + 4);
      uVar3 = *(ushort *)(in_stack_00000008 + 4);
      if ((uVar3 & uVar2 & 0x10) == 0) break;
      uVar6 = uVar2 & 0x300;
      uVar1 = uVar3 & 0x300;
      if (uVar6 != uVar1) {
        if ((in_stack_0000000c != 0) || (uVar6 == uVar1)) {
          return 0;
        }
        if ((byte)(~(byte)(uVar1 >> 8) & (byte)(uVar6 >> 8)) != 0) {
          return 0;
        }
      }
      in_stack_0000000c = 1;
      in_stack_00000004 = *(int *)(in_stack_00000004 + 8);
      in_stack_00000008 = *(int *)(in_stack_00000008 + 8);
    }
    if ((uVar3 & uVar2 & 0x400) == 0) break;
    if ((*(int *)(in_stack_00000004 + 0xc) != *(int *)(in_stack_00000008 + 0xc)) &&
       ((in_stack_0000000c != 0 ||
        (*(int *)(in_stack_00000004 + 0xc) != 0 || *(int *)(in_stack_00000008 + 0xc) != 0)))) {
      return 0;
    }
    in_stack_0000000c = 1;
    in_stack_00000004 = *(int *)(in_stack_00000004 + 8);
    in_stack_00000008 = *(int *)(in_stack_00000008 + 8);
  }
  iVar4 = FUN_004044ae();
  if (iVar4 != 0) {
    return 1;
  }
  if ((((uVar2 & 2) != 0) && ((uVar3 & 1) != 0)) && ((*(byte *)(in_stack_00000004 + 0xc) & 4) != 0))
  {
    uVar5 = FUN_00404514();
    return uVar5;
  }
  return 0;
}



// Function: FUN_0040471d @ 0x0040471d

uint * FUN_0040471d(void)

{
  uint *puVar1;
  int in_FS_OFFSET;
  uint in_stack_00000004;
  
  puVar1 = FUN_00409440();
  if (puVar1 == (uint *)0x0) {
    if ((0x80 < in_stack_00000004) ||
       ((*(byte *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4) & 1) != 0)) {
      FUN_00409b8c();
    }
    puVar1 = (uint *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4);
    *puVar1 = *puVar1 | 1;
    return *(uint **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x28);
  }
  return puVar1;
}



// Function: FUN_0040476c @ 0x0040476c

void FUN_0040476c(void)

{
  uint *puVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  if (in_stack_00000004 == *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x28)) {
    puVar1 = (uint *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
    return;
  }
  FUN_0040932c();
  return;
}



// Function: FUN_00404799 @ 0x00404799

bool FUN_00404799(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_0000000c;
  byte in_stack_00000010;
  
  iVar3 = FUN_0040460e();
  if (iVar3 != 0) {
    return true;
  }
  uVar1 = *(ushort *)(in_stack_00000004 + 4);
  uVar2 = *(ushort *)(in_stack_0000000c + 4);
  if ((uVar2 & 0x20) != 0) {
    iVar3 = FUN_0040460e();
    if (iVar3 != 0) {
      return true;
    }
    uVar2 = *(ushort *)(*(int *)(in_stack_0000000c + 8) + 4);
    if ((uVar2 & 0x10) == 0) {
      return false;
    }
    iVar3 = FUN_0040460e();
    if (iVar3 != 0) {
      return true;
    }
  }
  if ((uVar2 & 0x10) != 0) {
    if ((in_stack_00000010 & 1) != 0) {
      return true;
    }
    if ((uVar1 & 0x10) == 0) {
      return false;
    }
    if ((uVar2 & 0x40) != 0) {
      return (uVar1 & 0x300) == (uVar2 & 0x300);
    }
  }
  return false;
}



// Function: FUN_0040485b @ 0x0040485b

void FUN_0040485b(void)

{
  uint uVar1;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  code *in_stack_0000000c;
  uint in_stack_00000010;
  
  if ((in_stack_00000010 & 0x1000) == 0) {
    uVar1 = in_stack_00000010 & 7;
    if (uVar1 == 1) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 2) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 3) {
      (*in_stack_0000000c)(in_stack_00000004,in_stack_00000008);
      return;
    }
    if (uVar1 != 5) {
      return;
    }
    (*in_stack_0000000c)();
  }
  else {
    uVar1 = in_stack_00000010 & 7;
    if (uVar1 == 1) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 2) {
      (*in_stack_0000000c)();
      return;
    }
    if (uVar1 == 3) {
      (*in_stack_0000000c)(0,in_stack_00000008,in_stack_00000004);
      return;
    }
    if (uVar1 == 5) {
      (*in_stack_0000000c)();
      return;
    }
  }
  return;
}



// Function: FUN_004048e2 @ 0x004048e2

void FUN_004048e2(void)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_FS_OFFSET;
  undefined4 in_stack_00000004;
  code *in_stack_0000000c;
  uint in_stack_00000010;
  int in_stack_00000014;
  
  uVar5 = 2;
  if (in_stack_00000014 == 0) {
    uVar5 = 0;
  }
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    ___lockDebuggerData_qv();
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = 3;
    *(code **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x18) =
         in_stack_0000000c;
    pcVar3 = FUN_00404343();
    *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28) = pcVar3;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24) = 0;
    pcVar3 = *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28);
    while ((pcVar3 != (char *)0x0 && (cVar2 = *pcVar3, pcVar3 = pcVar3 + 1, cVar2 != '\0'))) {
      piVar1 = (int *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24);
      *piVar1 = *piVar1 + 1;
    }
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x1c) =
         in_stack_00000004;
    (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
    ___unlockDebuggerData_qv();
  }
  uVar4 = in_stack_00000010 & 7;
  if (uVar4 == 1) {
    (*in_stack_0000000c)();
  }
  else if (uVar4 == 2) {
    (*in_stack_0000000c)();
  }
  else if (uVar4 == 3) {
    (*in_stack_0000000c)(uVar5,in_stack_00000004);
  }
  else if (uVar4 == 5) {
    (*in_stack_0000000c)();
  }
  return;
}



// Function: FUN_004049e6 @ 0x004049e6

void FUN_004049e6(void)

{
  uint uVar1;
  undefined4 in_stack_00000004;
  code *in_stack_00000008;
  uint in_stack_0000000c;
  
  uVar1 = in_stack_0000000c & 7;
  if (uVar1 == 1) {
    (*in_stack_00000008)();
    return;
  }
  if (uVar1 == 2) {
    (*in_stack_00000008)();
    return;
  }
  if (uVar1 == 3) {
    (*in_stack_00000008)(in_stack_00000004);
    return;
  }
  if (uVar1 != 5) {
    return;
  }
  (*in_stack_00000008)();
  return;
}



// Function: FUN_00404a20 @ 0x00404a20

void FUN_00404a20(void)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  uint *in_stack_00000004;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  ULONG_PTR local_40 [2];
  uint *local_38;
  undefined4 local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  undefined4 local_24;
  undefined2 local_14;
  
  FUN_00406198(0x40b364);
  local_28 = in_stack_00000004;
  *(uint *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x24) =
       (uint)*(ushort *)((int)in_stack_00000004 + 6) + (int)in_stack_00000004;
  *(uint *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x20) = in_stack_0000001c;
  *(uint *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x1c) = in_stack_00000020;
  uVar5 = *in_stack_00000004;
  uVar3 = (ushort)in_stack_00000004[1];
  if ((uVar3 & 2) == 0) {
    local_2c = 0;
  }
  else {
    local_2c = in_stack_00000004[3];
  }
  if ((uVar3 & 0x30) != 0) {
    in_stack_00000004 = (uint *)in_stack_00000004[2];
  }
  local_30 = FUN_0040471d();
  *local_30 = **(uint **)(in_FS_OFFSET[1] + -8);
  **(undefined4 **)(in_FS_OFFSET[1] + -8) = local_30;
  local_30[1] = (uint)local_28;
  local_30[3] = in_stack_00000018;
  local_30[4] = uVar5;
  *(ushort *)(local_30 + 6) = uVar3;
  *(undefined2 *)((int)local_30 + 0x1a) = (undefined2)local_2c;
  local_30[5] = (uint)in_stack_00000004;
  local_30[2] = in_stack_0000000c;
  local_30[10] = 0;
  local_30[0xb] = 0;
  local_30[7] = (uint)FUN_0040476c;
  local_30[0xd] = in_stack_0000001c;
  local_30[0xe] = in_stack_00000020;
  local_30[8] = in_stack_00000010;
  local_30[9] = in_stack_00000014;
  *(undefined1 *)((int)local_30 + 0x45) = 0;
  *(undefined1 *)(local_30 + 0x11) = 1;
  FUN_00404134();
  if (**(int **)(*(int *)(in_FS_OFFSET[1] + -8) + 0xc) != 0) {
    FUN_0040435c();
    if (in_stack_00000028 == 0) {
      ___lockDebuggerData_qv();
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x30) = 0;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x2c) = 0;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x14) = 1;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x18) = in_stack_00000024;
      *(uint **)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x20) = local_30;
      pcVar4 = FUN_00404343();
      *(char **)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x28) = pcVar4;
      if ((char)local_30[0x11] == '\0') {
        uVar5 = local_30[0x10];
      }
      else {
        uVar5 = (int)local_30 + 0x46;
      }
      *(uint *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x1c) = uVar5;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x24) = 0;
      pcVar4 = *(char **)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x28);
      while (pcVar4 != (char *)0x0) {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        if (cVar2 == '\0') break;
        piVar1 = (int *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x24);
        *piVar1 = *piVar1 + 1;
      }
      (**(code **)(*(int *)(in_FS_OFFSET[1] + -8) + 8))();
      ___unlockDebuggerData_qv();
    }
  }
  if ((local_2c & 1) != 0) {
    local_34 = *(undefined4 *)(in_FS_OFFSET[1] + -4);
    local_14 = 8;
    FUN_0040485b();
    local_14 = 0;
    *(undefined4 *)(in_FS_OFFSET[1] + -4) = local_34;
  }
  if ((in_stack_00000028 == 0) && ((local_2c & 2) != 0)) {
    local_14 = 0x14;
    FUN_004048e2();
    local_14 = 0;
  }
  local_40[0] = *(ULONG_PTR *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x24);
  local_38 = local_30;
  RaiseException(0xeefface,1,3,local_40);
  *in_FS_OFFSET = local_24;
  return;
}



// Function: FUN_00404d44 @ 0x00404d44

void FUN_00404d44(void)

{
  FUN_00404a20();
  return;
}



// Function: FUN_00404d71 @ 0x00404d71

void FUN_00404d71(void)

{
  int in_FS_OFFSET;
  
  if (**(int **)(*(int *)(in_FS_OFFSET + 4) + -8) == 0) {
    FUN_00406203();
  }
  FUN_00404a20();
  return;
}



// Function: FUN_00404dc2 @ 0x00404dc2

void FUN_00404dc2(void)

{
  PVOID in_stack_00000004;
  PEXCEPTION_RECORD in_stack_00000008;
  EXCEPTION_RECORD local_54;
  
  if (in_stack_00000008 == (PEXCEPTION_RECORD)0x0) {
    local_54.ExceptionCode = 0x26;
    local_54.ExceptionFlags = 2;
    in_stack_00000008 = &local_54;
    local_54.NumberParameters = 0;
  }
  in_stack_00000008->ExceptionFlags = in_stack_00000008->ExceptionFlags | 2;
  FUN_00406606(in_stack_00000004,in_stack_00000008);
  return;
}



// Function: FUN_00404e01 @ 0x00404e01

void FUN_00404e01(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_24;
  
  FUN_00406198(0x40b3a4);
  FUN_004048e2();
  *in_FS_OFFSET = local_24;
  return;
}



// Function: FUN_00404e53 @ 0x00404e53

void FUN_00404e53(void)

{
  undefined4 uVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + 0x44) != '\0') {
    if ((*(byte *)(in_stack_00000004 + 0x1a) & 2) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(in_FS_OFFSET + 4) + -4);
      FUN_00404e01();
      *(undefined4 *)(*(int *)(in_FS_OFFSET + 4) + -4) = uVar1;
    }
    *(undefined1 *)(in_stack_00000004 + 0x44) = 0;
  }
  if (*(char *)(in_stack_00000004 + 0x45) != '\0') {
    if (((*(byte *)(*(int *)(in_stack_00000004 + 0x3c) + 4) & 2) != 0) &&
       ((*(byte *)(*(int *)(in_stack_00000004 + 0x3c) + 0xc) & 2) != 0)) {
      FUN_00404e01();
    }
    *(undefined1 *)(in_stack_00000004 + 0x45) = 0;
  }
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    FUN_0040435c();
  }
  return;
}



// Function: FUN_00404f30 @ 0x00404f30

undefined4 FUN_00404f30(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  int *in_stack_00000010;
  int *local_8;
  
  while( true ) {
    iVar2 = *in_stack_00000004;
    if (iVar2 == 0) {
      return 0;
    }
    local_8 = (int *)(*in_stack_00000010 + in_stack_00000004[1]);
    if (in_stack_00000008 != 0) {
      local_8 = (int *)*local_8;
    }
    iVar1 = FUN_004044ae();
    if (iVar1 != 0) break;
    if ((((*(byte *)(iVar2 + 4) & 2) != 0) && ((uint)*(ushort *)(iVar2 + 0x10) + iVar2 != 0)) &&
       (iVar2 = FUN_00404f30(), iVar2 != 0)) {
      *in_stack_00000010 = (int)local_8;
      return 1;
    }
    in_stack_00000004 = in_stack_00000004 + 3;
  }
  *in_stack_00000010 = (int)local_8;
  return 1;
}



// Function: FUN_00404fb6 @ 0x00404fb6

int FUN_00404fb6(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (((in_stack_00000004 != 0) && (iVar1 = FUN_00404f30(), iVar1 == 0)) &&
     (iVar1 = FUN_00404f30(), iVar1 == 0)) {
    in_stack_00000004 = 0;
  }
  return in_stack_00000004;
}



// Function: FUN_00405010 @ 0x00405010

void FUN_00405010(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort uVar4;
  int iVar5;
  int in_FS_OFFSET;
  bool bVar6;
  bool bVar7;
  int in_stack_00000004;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int in_stack_00000014;
  undefined4 *local_8;
  
  iVar5 = *(int *)(in_stack_00000004 + 4);
  *(int *)(in_stack_0000000c + 0x3c) = iVar5;
  if ((iVar5 != 0) && ((*(byte *)(in_stack_00000004 + 8) & 0x80) == 0)) {
    bVar6 = (*(byte *)(in_stack_00000004 + 8) & 1) == 0;
    local_8 = (undefined4 *)(in_stack_0000000c + 0x46);
    *(undefined1 *)(in_stack_0000000c + 0x45) = 1;
    *(int *)(in_stack_0000000c + 0x40) = *in_stack_00000010 + in_stack_00000014;
    uVar1 = *(ushort *)(iVar5 + 4);
    uVar4 = uVar1;
    if ((uVar1 & 0x30) != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      uVar4 = *(ushort *)(iVar5 + 4);
    }
    if (((uVar1 & 0x10) == 0) || ((*(byte *)(in_stack_0000000c + 0xc) & 1) == 0)) {
      if (((uVar4 & 1) == 0) || ((uVar1 & 0x30) == 0)) {
        if ((*(byte *)(in_stack_0000000c + 0x18) & 1) == 0) {
          if ((uVar1 & 0x20) == 0) {
            FUN_00404134();
          }
          else {
            FUN_00404134();
            bVar6 = true;
          }
        }
        else {
          iVar2 = FUN_004044ae();
          if (iVar2 == 0) {
            FUN_00404fb6();
          }
          bVar6 = iVar2 == 0 || bVar6;
          if ((*(byte *)(iVar5 + 0xc) & 1) == 0) {
            FUN_00404134();
          }
          else {
            FUN_0040485b();
            bVar6 = true;
          }
        }
      }
      else {
        bVar7 = (uVar1 & 0x20) == 0;
        if (bVar7) {
          local_8 = (undefined4 *)*local_8;
        }
        bVar6 = !bVar7 || bVar6;
        iVar2 = FUN_004044ae();
        if ((iVar2 == 0) && (puVar3 = (undefined4 *)FUN_00404fb6(), puVar3 != local_8)) {
          bVar6 = true;
        }
        FUN_00404134();
      }
    }
    else {
      FUN_004041a4();
      bVar6 = true;
    }
    if (!bVar6) {
      if ((*(byte *)(iVar5 + 0xc) & 2) != 0) {
        FUN_00404e01();
      }
      *(undefined1 *)(in_stack_0000000c + 0x44) = 0;
    }
    if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
      FUN_0040435c();
    }
  }
  return;
}



// Function: FUN_004051d9 @ 0x004051d9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004051d9(void)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int in_FS_OFFSET;
  int in_stack_00000004;
  uint in_stack_00000008;
  
  iVar2 = *(int *)(in_stack_00000004 + 8);
  uVar1 = *(ushort *)(in_stack_00000004 + 0x10);
  do {
    while( true ) {
      do {
        while( true ) {
          uVar6 = (uint)uVar1;
          if ((uVar6 == 0) || (uVar6 == in_stack_00000008)) {
            return;
          }
          uVar1 = *(ushort *)(iVar2 + uVar6);
          uVar5 = (uint)*(ushort *)(iVar2 + uVar6 + 2);
          *(ushort *)(in_stack_00000004 + 0x10) = uVar1;
          if (uVar5 != 0) break;
          _DAT_0040c97c = *(undefined4 *)(iVar2 + uVar6 + 8);
          *(undefined2 *)(in_stack_00000004 + 0x12) = 1;
          FUN_0040661b();
          *(undefined2 *)(in_stack_00000004 + 0x12) = 0;
        }
      } while (uVar5 - 1 < 3);
      if (uVar5 == 4) break;
      if (uVar5 - 1 == 4) {
        FUN_00405a9e();
      }
    }
    piVar3 = *(int **)(*(int *)(in_FS_OFFSET + 4) + -8);
    do {
      piVar4 = piVar3;
      piVar3 = (int *)*piVar4;
      if (piVar3 == (int *)0x0) break;
    } while ((piVar3[10] != in_stack_00000004) || (uVar6 != piVar3[0xc]));
    *piVar4 = *piVar3;
    if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
      FUN_0040435c();
    }
    FUN_00404e53();
    (*(code *)piVar3[7])();
  } while( true );
}



// Function: FUN_00405308 @ 0x00405308

void FUN_00405308(void)

{
  FUN_004051d9();
  return;
}



// Function: FUN_0040531b @ 0x0040531b

void FUN_0040531b(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  
  FUN_004051d9();
  *in_FS_OFFSET = *in_stack_00000004;
  return;
}



// Function: FUN_00405338 @ 0x00405338

int * FUN_00405338(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int in_stack_00000004;
  
  piVar2 = (int *)(in_stack_00000004 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if (piVar2[1] == 0) break;
    bVar1 = FUN_00404799();
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}



// Function: FUN_00405794 @ 0x00405794

void FUN_00405794(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_24;
  
  FUN_00406198(0x40b3f8);
  FUN_004048e2();
  *in_FS_OFFSET = local_24;
  return;
}



// Function: FUN_00405802 @ 0x00405802

void FUN_00405802(void)

{
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  while (in_stack_00000008 = in_stack_00000008 + -3, in_stack_0000000c <= in_stack_00000008) {
    if ((*(byte *)(*in_stack_00000008 + 0xc) & 2) != 0) {
      FUN_00405847();
    }
  }
  return;
}



// Function: FUN_00405847 @ 0x00405847

void FUN_00405847(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint local_18;
  int *local_10;
  
  if (in_stack_00000010 == 0) {
    uVar2 = *(uint *)(in_stack_00000008 + 0x24);
  }
  else {
    uVar2 = *(uint *)(in_stack_00000008 + 0x20);
  }
  if ((in_stack_0000000c == 0) || (uVar2 <= in_stack_0000000c)) {
    FUN_00405794();
  }
  else {
    local_10 = (int *)((uint)*(ushort *)(in_stack_00000008 + 0x12) + in_stack_00000008);
    if (in_stack_00000010 != 0) {
      for (; iVar1 = *local_10, iVar1 != 0; local_10 = local_10 + 3) {
        if ((*(byte *)(iVar1 + 0xc) & 2) != 0) {
          if (in_stack_0000000c <= *(uint *)(iVar1 + 0x24)) {
            FUN_00405802();
            return;
          }
          in_stack_0000000c = in_stack_0000000c - *(uint *)(iVar1 + 0x24);
        }
      }
    }
    for (piVar4 = (int *)((uint)*(ushort *)(in_stack_00000008 + 0x10) + in_stack_00000008);
        iVar1 = *piVar4, iVar1 != 0; piVar4 = piVar4 + 3) {
      if ((*(byte *)(iVar1 + 0xc) & 2) != 0) {
        if (in_stack_0000000c <= *(uint *)(iVar1 + 0x24)) {
          FUN_00405802();
          if (in_stack_00000010 == 0) {
            return;
          }
          FUN_00405802();
          return;
        }
        in_stack_0000000c = in_stack_0000000c - *(uint *)(iVar1 + 0x24);
      }
    }
    piVar3 = (int *)((uint)*(ushort *)(in_stack_00000008 + 0x2e) + in_stack_00000008);
    piVar4 = piVar3;
    while( true ) {
      iVar1 = *piVar4;
      local_18 = 1;
      if ((*(byte *)(iVar1 + 5) & 4) != 0) {
        local_18 = *(uint *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 8);
      }
      uVar2 = *(int *)(iVar1 + 0x20) * local_18;
      if (in_stack_0000000c <= uVar2) break;
      in_stack_0000000c = in_stack_0000000c - uVar2;
      piVar4 = piVar4 + 2;
    }
    do {
      if (local_18 < 2) {
        FUN_00405847();
      }
      else {
        FUN_004059ed();
      }
      piVar4 = piVar4 + -2;
    } while (piVar3 <= piVar4);
    FUN_00405802();
    if (in_stack_00000010 != 0) {
      FUN_00405802();
    }
  }
  return;
}



// Function: FUN_004059ed @ 0x004059ed

void FUN_004059ed(void)

{
  uint uVar1;
  int in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 local_8;
  
  uVar1 = *(uint *)(*(int *)(in_stack_00000008 + 8) + 0x20);
  if (in_stack_0000000c == 0) {
    in_stack_0000000c = uVar1 * *(int *)(in_stack_00000008 + 0xc);
  }
  local_8 = in_stack_0000000c / uVar1;
  if (in_stack_0000000c != local_8 * uVar1) {
    FUN_00405847();
  }
  while (local_8 != 0) {
    FUN_00405847();
    local_8 = local_8 - 1;
  }
  return;
}



// Function: FUN_00405a60 @ 0x00405a60

int FUN_00405a60(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  iVar1 = *in_stack_00000008;
  if ((*(uint *)(iVar1 + 0xc) & 0x50) != 0x50) {
    return in_stack_00000004;
  }
  if (*(int *)(iVar1 + 8) == -1) {
    return in_stack_00000004;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 8) + in_stack_00000004);
  iVar2 = *(int *)(iVar1 + -8);
  *in_stack_00000008 = *(int *)((iVar1 - *(int *)(iVar1 + -4)) + -0xc);
  return in_stack_00000004 - iVar2;
}



// Function: FUN_00405a9e @ 0x00405a9e

undefined4 FUN_00405a9e(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int in_FS_OFFSET;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_14;
  int local_c;
  
  bVar2 = false;
  if (in_stack_00000004 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar7 = (*(int *)(*(int *)(in_FS_OFFSET + 4) + -4) - *(int *)(in_stack_0000000c + 0x1c)) -
            in_stack_00000008;
    if ((*(byte *)(in_stack_00000004 + 1) & 0x20) != 0) {
      uVar7 = *(uint *)(*(int *)(*in_stack_00000004 + 8) + 0x20);
    }
    if ((*(byte *)((int)in_stack_00000004 + 5) & 1) == 0) {
      piVar4 = in_stack_00000004;
      if ((int)uVar7 < 1) {
        if ((in_stack_00000004[1] & 3U) != 3) {
          return 0;
        }
        bVar2 = true;
      }
      else {
        for (; *piVar4 != 0; piVar4 = piVar4 + 3) {
          local_c = *piVar4;
          iVar5 = 1;
          if (((((*(byte *)(local_c + 4) & 0x10) != 0) &&
               (local_c = *(int *)(local_c + 8), (*(byte *)(local_c + 4) & 2) != 0)) &&
              ((*(byte *)(local_c + 0xc) & 0x20) != 0)) && ((*(byte *)(piVar4 + 1) & 8) != 0)) {
            FUN_00405a60();
          }
          if ((*(byte *)(local_c + 5) & 4) != 0) {
            iVar5 = *(int *)(local_c + 0xc);
            local_c = *(int *)(local_c + 8);
          }
          uVar6 = iVar5 * *(int *)(local_c + 0x20);
          if (uVar7 <= uVar6) goto LAB_00405bbf;
          uVar7 = uVar7 - uVar6;
        }
        piVar4 = piVar4 + -3;
      }
LAB_00405bbf:
      do {
        local_14 = *piVar4;
        uVar7 = piVar4[1];
        if ((((uVar7 & 0x11) != 0) &&
            (local_14 = *(int *)(local_14 + 8), (*(byte *)(local_14 + 4) & 2) != 0)) &&
           (((*(byte *)(local_14 + 0xc) & 0x20) != 0 && ((uVar7 & 8) != 0)))) {
          FUN_00405a60();
        }
        if (!bVar2) {
          if ((*(byte *)(local_14 + 5) & 4) == 0) {
            FUN_00405847();
          }
          else {
            FUN_004059ed();
          }
        }
        if ((uVar7 & 3) == 3) {
          if ((*(byte *)(local_14 + 5) & 4) == 0) {
            if (*(int *)(local_14 + 0x14) == 0) {
              FUN_004097d0();
            }
            else {
              FUN_004049e6();
            }
          }
          else if (*(int *)(*(int *)(local_14 + 8) + 0x1c) == 0) {
            FUN_004097e0();
          }
          else {
            FUN_004049e6();
          }
        }
        bVar1 = in_stack_00000004 < piVar4;
        piVar4 = piVar4 + -3;
      } while (bVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*in_stack_00000004 + 0x24);
    }
  }
  return uVar3;
}



// Function: FUN_00405d0d @ 0x00405d0d

uint FUN_00405d0d(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_00404258();
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(in_stack_00000004 + 0x10);
}



// Function: FUN_00406198 @ 0x00406198

void FUN_00406198(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined2 in_FS;
  
  puVar3 = (undefined4 *)(unaff_EBP + *(int *)(param_1 + 4));
  puVar3[2] = param_1;
  puVar3[3] = &stack0x00000004;
  puVar3[1] = &LAB_00405385;
  puVar3[4] = 0;
  *(undefined4 *)((int)puVar3 + 0x12) = 0;
  piVar1 = (int *)segment(in_FS,4);
  puVar3[7] = *(undefined4 *)(*piVar1 + -4);
  puVar2 = (undefined4 *)segment(in_FS,0);
  *puVar3 = *puVar2;
  puVar2 = (undefined4 *)segment(in_FS,0);
  *puVar2 = puVar3;
  return;
}



// Function: FUN_004061de @ 0x004061de

undefined4 FUN_004061de(void)

{
  undefined4 uVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x14);
  if (in_stack_00000004 != 0) {
    *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x14) = in_stack_00000004;
  }
  return uVar1;
}



// Function: FUN_00406203 @ 0x00406203

void FUN_00406203(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_24;
  
  FUN_00406198(0x40b50c);
  if ((**(int **)(*(int *)(in_FS_OFFSET[1] + -8) + 0xc) != 0) && (DAT_0040b320 == 0)) {
    ___lockDebuggerData_qv();
    *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x14) = 5;
    *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x18) =
         *(undefined4 *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x14);
    (**(code **)(*(int *)(in_FS_OFFSET[1] + -8) + 8))();
    ___unlockDebuggerData_qv();
    DAT_0040b320 = 0;
  }
  thunk_FUN_00407d10();
  (**(code **)(*(int *)(in_FS_OFFSET[1] + -8) + 0x14))();
  FUN_00409b8c();
  *in_FS_OFFSET = local_24;
  return;
}



// Function: FUN_004062c2 @ 0x004062c2

undefined4 FUN_004062c2(void)

{
  undefined4 uVar1;
  int in_FS_OFFSET;
  int in_stack_00000004;
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18);
  if (in_stack_00000004 != 0) {
    *(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18) = in_stack_00000004;
  }
  return uVar1;
}



// Function: FUN_004062e7 @ 0x004062e7

void FUN_004062e7(void)

{
  int in_FS_OFFSET;
  
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    ___lockDebuggerData_qv();
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = 4;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x18) =
         *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18);
    DAT_0040b320 = 1;
    (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
    ___unlockDebuggerData_qv();
  }
  (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18))();
  FUN_00409b8c();
  return;
}



// Function: FUN_0040635b @ 0x0040635b

undefined4 FUN_0040635b(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000004 == 0) {
    return 0;
  }
  return *(undefined4 *)
          (*(int *)((*(int *)(in_stack_00000004 + in_stack_00000008) -
                    *(int *)(*(int *)(in_stack_00000004 + in_stack_00000008) + -4)) + -0xc) + 0x20);
}



// Function: FUN_0040637a @ 0x0040637a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040637a(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int in_FS_OFFSET;
  bool bVar2;
  int in_stack_00000004;
  uint local_c;
  int local_8;
  
  bVar2 = in_stack_00000004 == 0;
  if (in_stack_00000004 == 0) {
    if (DAT_0040b058 != '\0') {
      pFVar1 = (FARPROC)0x0;
      hModule = GetModuleHandleA((LPCSTR)0x0);
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,s___GetExceptDLLinfo_0040b59c);
      }
      if (((pFVar1 != (FARPROC)0x0) && ((*pFVar1)(), 0x82727348 < local_c)) &&
         (local_c < 0x8272735a)) {
        in_stack_00000004 = local_8;
      }
    }
    if (in_stack_00000004 == 0) {
      FUN_0040645c();
      in_stack_00000004 = local_8;
    }
  }
  else {
    *(undefined1 **)(in_stack_00000004 + 0x14) = &LAB_004061d8;
    *(undefined1 **)(in_stack_00000004 + 0x18) = &LAB_004062bc;
  }
  *(int *)(*(int *)(in_FS_OFFSET + 4) + -8) = in_stack_00000004;
  if (bVar2) {
    _DAT_0040c98c = *(int *)(in_FS_OFFSET + 4) + -4;
  }
  else {
    *(undefined **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) = &DAT_0040b534;
    *(undefined **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) = &__DebuggerHookData;
  }
  *(undefined4 *)(*(int *)(in_FS_OFFSET + 4) + -4) = 0;
  *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 4) = 0;
  return;
}



// Function: FUN_0040645c @ 0x0040645c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040645c(void)

{
  int in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  
  _DAT_0040b464 = *(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x30;
  _DAT_0040b448 = &DAT_0040b534;
  _DAT_0040b44c = &__DebuggerHookData;
  *in_stack_00000004 = 0x82727349;
  in_stack_00000004[1] = &DAT_0040b43c;
  return;
}



// Function: @__lockDebuggerData$qv @ 0x00406498

void ___lockDebuggerData_qv(void)

{
                    /* 0x6498  9  @__lockDebuggerData$qv */
  if (DAT_0040c9a8 == 0) {
    DAT_0040c9a8 = 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0040c990);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0040c990);
  return;
}



// Function: @__unlockDebuggerData$qv @ 0x004064c0

void ___unlockDebuggerData_qv(void)

{
                    /* 0x64c0  10  @__unlockDebuggerData$qv */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0040c990);
  return;
}



// Function: FUN_00406574 @ 0x00406574

void FUN_00406574(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = &LAB_004064d8;
  FUN_00406624();
  return;
}



// Function: FUN_00406590 @ 0x00406590

void FUN_00406590(void)

{
  FUN_00406639();
  return;
}



// Function: FUN_004065a0 @ 0x004065a0

undefined4 FUN_004065a0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000004;
  
  uVar1 = DAT_0040c9b0;
  DAT_0040c9b0 = in_stack_00000004;
  return uVar1;
}



// Function: FUN_004065ec @ 0x004065ec

void FUN_004065ec(void)

{
  if (DAT_0040cc0c != 0) {
    FUN_00406574();
  }
  return;
}



// Function: FUN_00406606 @ 0x00406606

void FUN_00406606(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x406617,param_2,(PVOID)0x0);
  return;
}



// Function: FUN_0040661b @ 0x0040661b

void FUN_0040661b(void)

{
  undefined4 *unaff_EBX;
  
  (*(code *)*unaff_EBX)();
  return;
}



// Function: FUN_00406624 @ 0x00406624

void FUN_00406624(void)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 *in_stack_00000004;
  
  puVar1 = (undefined4 *)segment(in_FS,0);
  *in_stack_00000004 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = in_stack_00000004;
  return;
}



// Function: FUN_00406639 @ 0x00406639

void FUN_00406639(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined2 in_FS;
  undefined4 *in_stack_00000004;
  
  piVar1 = (int *)segment(in_FS,0);
  puVar2 = (undefined4 *)*piVar1;
  if (in_stack_00000004 == puVar2) {
    puVar2 = (undefined4 *)segment(in_FS,0);
    *puVar2 = *in_stack_00000004;
  }
  else {
    for (; puVar2 != (undefined4 *)0xffffffff; puVar2 = (undefined4 *)*puVar2) {
      if ((undefined4 *)*puVar2 == in_stack_00000004) {
        *puVar2 = *in_stack_00000004;
        return;
      }
    }
  }
  return;
}



// Function: FUN_00406674 @ 0x00406674

undefined4 FUN_00406674(void)

{
  int *in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if ((*(byte *)((int)in_stack_00000004 + 0x12) & 4) != 0) {
    FUN_0040932c();
  }
  *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfff3;
  in_stack_00000004[3] = 0;
  in_stack_00000004[1] = (int)in_stack_00000004 + 0x17;
  *in_stack_00000004 = (int)in_stack_00000004 + 0x17;
  if ((in_stack_0000000c != 2) && (in_stack_00000010 != 0)) {
    PTR_FUN_0040c470 = &LAB_00407cc8;
    if (in_stack_00000008 == (uint *)0x0) {
      in_stack_00000008 = FUN_00409440();
      if (in_stack_00000008 == (uint *)0x0) {
        return 0xffffffff;
      }
      *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 4;
    }
    *in_stack_00000004 = (int)in_stack_00000008;
    in_stack_00000004[1] = (int)in_stack_00000008;
    in_stack_00000004[3] = in_stack_00000010;
    if (in_stack_0000000c == 1) {
      *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 8;
    }
  }
  return 0;
}



// Function: FUN_004066f4 @ 0x004066f4

void FUN_004066f4(void)

{
  int in_stack_00000004;
  
  *(ushort *)(in_stack_00000004 + 0x12) = *(ushort *)(in_stack_00000004 + 0x12) & 0xffcf;
  return;
}



// Function: FUN_00406704 @ 0x00406704

undefined4 FUN_00406704(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  
  if ((in_stack_00000004 == 0) || (*(short *)(in_stack_00000004 + 0x14) != (short)in_stack_00000004)
     ) {
    return 0xffffffff;
  }
  FUN_004074a8();
  if (*(int *)(in_stack_00000004 + 0xc) != 0) {
    if ((*(int *)(in_stack_00000004 + 8) < 0) && (iVar1 = FUN_004067a8(), iVar1 != 0)) {
      uVar2 = 0xffffffff;
      goto LAB_00406799;
    }
    if ((*(byte *)(in_stack_00000004 + 0x12) & 4) != 0) {
      FUN_0040932c();
    }
  }
  uVar2 = FUN_004087c8();
  *(undefined2 *)(in_stack_00000004 + 0x12) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined1 *)(in_stack_00000004 + 0x16) = 0xff;
  if (*(short *)(in_stack_00000004 + 0x10) != 0) {
    FUN_00407140();
    FUN_00408af4();
    *(undefined2 *)(in_stack_00000004 + 0x10) = 0;
  }
LAB_00406799:
  FUN_00407570();
  return uVar2;
}



// Function: FUN_004067a8 @ 0x004067a8

undefined4 FUN_004067a8(void)

{
  undefined4 uVar1;
  DWORD DVar2;
  DWORD DVar3;
  int *in_stack_00000004;
  
  if (in_stack_00000004 == (int *)0x0) {
    FUN_00406840();
    uVar1 = 0;
  }
  else if ((short)in_stack_00000004[5] == (short)in_stack_00000004) {
    FUN_004074a8();
    if (in_stack_00000004[2] < 0) {
      DVar3 = in_stack_00000004[3] + in_stack_00000004[2] + 1;
      in_stack_00000004[2] = in_stack_00000004[2] - DVar3;
      *in_stack_00000004 = in_stack_00000004[1];
      DVar2 = FUN_00408070();
      if ((DVar3 == DVar2) || ((*(byte *)((int)in_stack_00000004 + 0x13) & 2) != 0)) {
        uVar1 = 0;
      }
      else {
        *(ushort *)((int)in_stack_00000004 + 0x12) =
             *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10;
        uVar1 = 0xffffffff;
      }
    }
    else {
      if ((((*(byte *)((int)in_stack_00000004 + 0x12) & 8) != 0) ||
          ((int)in_stack_00000004 + 0x17 == *in_stack_00000004)) &&
         (in_stack_00000004[2] = 0, (int)in_stack_00000004 + 0x17 == *in_stack_00000004)) {
        *in_stack_00000004 = in_stack_00000004[1];
      }
      uVar1 = 0;
    }
    FUN_00407570();
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: FUN_00406840 @ 0x00406840

int FUN_00406840(void)

{
  DWORD DVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  
  FUN_00407488();
  iVar3 = 0;
  puVar2 = &DAT_0040b5c4;
  iVar5 = DAT_0040ba74;
  while (iVar5 != 0) {
    if ((int)puVar2[2] < 0) {
      DVar4 = puVar2[3] + puVar2[2] + 1;
      puVar2[2] = puVar2[2] - DVar4;
      *puVar2 = puVar2[1];
      DVar1 = FUN_00408070();
      if ((DVar4 != DVar1) && ((*(byte *)((int)puVar2 + 0x13) & 2) == 0)) {
        *(ushort *)((int)puVar2 + 0x12) = *(ushort *)((int)puVar2 + 0x12) | 0x10;
      }
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar2 + 6;
    iVar5 = iVar5 + -1;
  }
  FUN_00407498();
  return iVar3;
}



// Function: FUN_004068a4 @ 0x004068a4

void FUN_004068a4(void)

{
  undefined *in_stack_00000004;
  
  PTR_DAT_0040bb44 = in_stack_00000004;
  return;
}



// Function: FUN_004068b4 @ 0x004068b4

uint FUN_004068b4(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *in_stack_00000004;
  uint *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  
  uVar4 = 0;
  cVar1 = *in_stack_00000004;
  if (cVar1 == 'r') {
    uVar3 = 0;
    uVar2 = 1;
  }
  else if (cVar1 == 'w') {
    uVar3 = 0x301;
    uVar4 = 0x80;
    uVar2 = 2;
  }
  else {
    if (cVar1 != 'a') {
      return 0;
    }
    uVar3 = 0x901;
    uVar4 = 0x80;
    uVar2 = 2;
  }
  cVar1 = in_stack_00000004[1];
  if ((cVar1 == '+') || ((in_stack_00000004[2] == '+' && ((cVar1 == 't' || (cVar1 == 'b')))))) {
    if (cVar1 == '+') {
      cVar1 = in_stack_00000004[2];
    }
    uVar4 = 0x180;
    uVar3 = uVar3 & 0xfffffffe | 2;
    uVar2 = 3;
  }
  if (cVar1 == 't') {
    uVar3 = uVar3 | 0x4000;
  }
  else if (cVar1 == 'b') {
    uVar3 = uVar3 | 0x8000;
    uVar2 = uVar2 | 0x40;
  }
  else {
    if ((cVar1 != '+') && (cVar1 != '\0')) {
      return 0;
    }
    uVar3 = uVar3 | *(uint *)PTR_DAT_0040bb44 & 0xc000;
    if ((*(uint *)PTR_DAT_0040bb44 & 0x8000) != 0) {
      uVar2 = uVar2 | 0x40;
    }
  }
  PTR_FUN_0040c474 = &LAB_00407c90;
  *in_stack_00000008 = uVar3;
  *in_stack_0000000c = uVar4;
  return uVar2;
}



// Function: FUN_00406980 @ 0x00406980

int FUN_00406980(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  
  uVar1 = FUN_004068b4();
  *(short *)(in_stack_00000004 + 0x12) = (short)uVar1;
  if ((short)uVar1 == 0) {
LAB_004069cb:
    *(undefined1 *)(in_stack_00000004 + 0x16) = 0xff;
    *(undefined2 *)(in_stack_00000004 + 0x12) = 0;
    in_stack_00000004 = 0;
  }
  else {
    if (*(char *)(in_stack_00000004 + 0x16) < '\0') {
      iVar2 = FUN_004088f4();
      *(char *)(in_stack_00000004 + 0x16) = (char)iVar2;
      if ((char)iVar2 < '\0') goto LAB_004069cb;
    }
    if ((*(byte *)((int)&DAT_0040ba78 + *(char *)(in_stack_00000004 + 0x16) * 4 + 1) & 0x20) != 0) {
      *(ushort *)(in_stack_00000004 + 0x12) = *(ushort *)(in_stack_00000004 + 0x12) | 0x200;
    }
    iVar2 = FUN_00407260();
    if (iVar2 == 0) {
      *(undefined2 *)(in_stack_00000004 + 0x10) = 0;
    }
    else {
      FUN_00406704();
      in_stack_00000004 = 0;
    }
  }
  return in_stack_00000004;
}



// Function: FUN_00406a28 @ 0x00406a28

undefined4 * FUN_00406a28(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_0040b5c4;
  while( true ) {
    if (*(char *)((int)puVar1 + 0x16) < '\0') {
      return puVar1;
    }
    if (&DAT_0040b5c4 + DAT_0040ba74 * 6 <= puVar1) break;
    puVar1 = puVar1 + 6;
  }
  return (undefined4 *)0x0;
}



// Function: FUN_00406a54 @ 0x00406a54

int FUN_00406a54(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00407488();
  puVar1 = FUN_00406a28();
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00406980();
  }
  FUN_00407498();
  return iVar2;
}



// Function: FUN_00406a88 @ 0x00406a88

uint FUN_00406a88(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  DWORD DVar4;
  uint in_stack_00000008;
  int *in_stack_0000000c;
  
  uVar1 = in_stack_00000008;
  if ((*(byte *)((int)in_stack_0000000c + 0x12) & 8) == 0) {
    uVar1 = in_stack_0000000c[3];
    if ((uVar1 == 0) || (uVar1 < in_stack_00000008)) {
      if ((in_stack_0000000c[3] == 0) ||
         ((in_stack_0000000c[2] == 0 || (iVar3 = FUN_004067a8(), iVar3 == 0)))) {
        DVar4 = FUN_00408070();
        if ((DVar4 == 0xffffffff) || (DVar4 < in_stack_00000008)) {
          in_stack_00000008 = 0;
        }
      }
      else {
        in_stack_00000008 = 0;
      }
    }
    else {
      if (-1 < (int)(in_stack_0000000c[2] + in_stack_00000008)) {
        if (in_stack_0000000c[2] == 0) {
          in_stack_0000000c[2] = -1 - uVar1;
        }
        else {
          iVar3 = FUN_004067a8();
          if (iVar3 != 0) {
            return 0;
          }
        }
      }
      FUN_00404134();
      in_stack_0000000c[2] = in_stack_0000000c[2] + in_stack_00000008;
      *in_stack_0000000c = *in_stack_0000000c + in_stack_00000008;
    }
  }
  else {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar2 = FUN_0040704c();
      if (uVar2 == 0xffffffff) {
        return 0;
      }
    }
  }
  return in_stack_00000008;
}



// Function: FUN_00406bb8 @ 0x00406bb8

char * FUN_00406bb8(void)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  char *unaff_ESI;
  char *pcVar5;
  undefined1 *in_stack_00000004;
  char *in_stack_00000008;
  int *in_stack_0000000c;
  undefined1 *local_c;
  uint local_8;
  
  local_c = in_stack_00000004;
  if (in_stack_0000000c[3] != 0) {
LAB_00406bd7:
    if (in_stack_00000008 == (char *)0x0) {
      return unaff_ESI;
    }
    do {
      pcVar3 = (char *)in_stack_0000000c[2];
      if (pcVar3 != (char *)0x0) {
        pcVar5 = in_stack_00000008;
        if (pcVar3 < in_stack_00000008) {
          pcVar5 = pcVar3;
        }
        FUN_00404134();
        *in_stack_0000000c = (int)(pcVar5 + *in_stack_0000000c);
        in_stack_0000000c[2] = in_stack_0000000c[2] - (int)pcVar5;
        if (in_stack_00000008 == pcVar5) {
          return unaff_ESI;
        }
        local_c = local_c + (int)pcVar5;
        in_stack_00000008 = in_stack_00000008 + -(int)pcVar5;
      }
      if ((char *)in_stack_0000000c[3] <= in_stack_00000008) {
        pcVar5 = in_stack_00000008 + -((uint)in_stack_00000008 % (uint)in_stack_0000000c[3]);
        pcVar3 = FUN_00407e70();
        if (in_stack_00000008 == pcVar3) {
          return unaff_ESI;
        }
        if (pcVar3 == (char *)0xffffffff) {
          *(ushort *)((int)in_stack_0000000c + 0x12) =
               *(ushort *)((int)in_stack_0000000c + 0x12) | 0x10;
          return unaff_ESI;
        }
        local_c = local_c + (int)pcVar3;
        in_stack_00000008 = in_stack_00000008 + -(int)pcVar3;
        if (pcVar5 != pcVar3) goto code_r0x00406c64;
      }
      uVar4 = FUN_00406f7c();
      if (uVar4 == 0xffffffff) {
        *(ushort *)((int)in_stack_0000000c + 0x12) =
             *(ushort *)((int)in_stack_0000000c + 0x12) | 0x20;
        return unaff_ESI;
      }
      local_8._0_1_ = (undefined1)uVar4;
      *local_c = (undefined1)local_8;
      local_c = local_c + 1;
      in_stack_00000008 = in_stack_00000008 + -1;
      if (in_stack_00000008 == (char *)0x0) {
        return unaff_ESI;
      }
    } while( true );
  }
  for (; in_stack_00000008 != (char *)0x0; in_stack_00000008 = in_stack_00000008 + -1) {
    piVar1 = in_stack_0000000c + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_8 = FUN_00406f68();
    }
    else {
      pbVar2 = (byte *)*in_stack_0000000c;
      *in_stack_0000000c = *in_stack_0000000c + 1;
      local_8 = (uint)*pbVar2;
    }
    if (local_8 == 0xffffffff) break;
    *local_c = (undefined1)local_8;
    local_c = local_c + 1;
  }
  if (local_8 == 0xffffffff) {
    *(ushort *)((int)in_stack_0000000c + 0x12) = *(ushort *)((int)in_stack_0000000c + 0x12) | 0x20;
  }
  return unaff_ESI;
code_r0x00406c64:
  if (((*(byte *)((int)in_stack_0000000c + 0x12) & 0x40) != 0) || (pcVar3 == (char *)0x0)) {
    *(ushort *)((int)in_stack_0000000c + 0x12) = *(ushort *)((int)in_stack_0000000c + 0x12) | 0x20;
    return unaff_ESI;
  }
  goto LAB_00406bd7;
}



// Function: FUN_00406ce8 @ 0x00406ce8

uint FUN_00406ce8(void)

{
  uint uVar1;
  char *pcVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_00000008 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_004074a8();
    pcVar2 = FUN_00406bb8();
    FUN_00407570();
    uVar1 = (uint)(in_stack_00000008 * in_stack_0000000c - in_stack_00000004) / (uint)pcVar2;
  }
  return uVar1;
}



// Function: FUN_00406d2c @ 0x00406d2c

int FUN_00406d2c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *in_stack_00000004;
  
  iVar2 = in_stack_00000004[2];
  if (iVar2 < 0) {
    iVar2 = in_stack_00000004[3] + iVar2 + 1;
  }
  if ((*(byte *)((int)in_stack_00000004 + 0x12) & 0x40) == 0) {
    pcVar6 = (char *)*in_stack_00000004;
    iVar3 = iVar2;
    iVar5 = iVar2;
    if ((int)in_stack_00000004[2] < 0) {
      while (iVar3 = iVar2 + -1, iVar2 != 0) {
        pcVar6 = pcVar6 + -1;
        iVar2 = iVar3;
        if (*pcVar6 == '\n') {
          iVar5 = iVar5 + 1;
        }
      }
    }
    else {
      while (iVar4 = iVar3 + -1, iVar5 = iVar2, iVar3 != 0) {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar4;
        if (cVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    return iVar5;
  }
  return iVar2;
}



// Function: FUN_00406d88 @ 0x00406d88

undefined4 FUN_00406d88(void)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  
  FUN_004074a8();
  iVar1 = FUN_004067a8();
  if (iVar1 == 0) {
    if ((in_stack_0000000c == 1) && (0 < (int)in_stack_00000004[2])) {
      FUN_00406d2c();
    }
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfe5f
    ;
    in_stack_00000004[2] = 0;
    *in_stack_00000004 = in_stack_00000004[1];
    DVar2 = FUN_00408870();
    if (DVar2 == 0xffffffff) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  FUN_00407570();
  return uVar3;
}



// Function: FUN_00406dfc @ 0x00406dfc

DWORD FUN_00406dfc(void)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  int in_stack_00000004;
  
  FUN_004074a8();
  DVar1 = FUN_00408870();
  if (DVar1 != 0xffffffff) {
    if (*(int *)(in_stack_00000004 + 8) < 0) {
      if ((*(byte *)((int)&DAT_0040ba78 + *(char *)(in_stack_00000004 + 0x16) * 4 + 1) & 8) != 0) {
        DVar1 = FUN_00408870();
        if (DVar1 == 0xffffffff) goto LAB_00406e7a;
        DVar2 = FUN_00408870();
        if (DVar2 == 0xffffffff) {
          DVar1 = 0xffffffff;
          goto LAB_00406e7a;
        }
      }
      iVar3 = FUN_00406d2c();
      DVar1 = DVar1 + iVar3;
    }
    else {
      iVar3 = FUN_00406d2c();
      DVar1 = DVar1 - iVar3;
    }
  }
LAB_00406e7a:
  FUN_00407570();
  return DVar1;
}



// Function: FUN_00406e88 @ 0x00406e88

uint FUN_00406e88(void)

{
  uint uVar1;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  if (in_stack_00000008 != 0) {
    FUN_004074a8();
    uVar1 = FUN_00406a88();
    in_stack_0000000c = uVar1 / in_stack_00000008;
    FUN_00407570();
  }
  return in_stack_0000000c;
}



// Function: FUN_00406ed0 @ 0x00406ed0

void FUN_00406ed0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_0040b5c4;
  iVar2 = 0x32;
  while (iVar2 != 0) {
    if ((*(ushort *)((int)puVar1 + 0x12) & 0x300) == 0x300) {
      FUN_004067a8();
    }
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return;
}



// Function: FUN_00406f04 @ 0x00406f04

undefined4 FUN_00406f04(void)

{
  char *pcVar1;
  undefined4 *in_stack_00000004;
  
  if ((*(byte *)((int)in_stack_00000004 + 0x13) & 2) != 0) {
    FUN_00406ed0();
  }
  *in_stack_00000004 = in_stack_00000004[1];
  pcVar1 = FUN_00407e70();
  in_stack_00000004[2] = pcVar1;
  if (0 < (int)pcVar1) {
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xffdf
    ;
    return 0;
  }
  if (in_stack_00000004[2] == 0) {
    *(ushort *)((int)in_stack_00000004 + 0x12) =
         *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfe7f | 0x20;
  }
  else {
    in_stack_00000004[2] = 0;
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10;
  }
  return 0xffffffff;
}



// Function: FUN_00406f68 @ 0x00406f68

void FUN_00406f68(void)

{
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 8) = *(int *)(in_stack_00000004 + 8) + 1;
  FUN_00408168();
  return;
}



// Function: FUN_00406f7c @ 0x00406f7c

uint FUN_00406f7c(void)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int *in_stack_00000004;
  
  if (in_stack_00000004 == (int *)0x0) {
    return 0xffffffff;
  }
  if (0 < in_stack_00000004[2]) {
    in_stack_00000004[2] = in_stack_00000004[2] + -1;
    pbVar1 = (byte *)*in_stack_00000004;
    *in_stack_00000004 = *in_stack_00000004 + 1;
    return (uint)*pbVar1;
  }
  if (((in_stack_00000004[2] < 0) || ((*(ushort *)((int)in_stack_00000004 + 0x12) & 0x110) != 0)) ||
     ((*(byte *)((int)in_stack_00000004 + 0x12) & 1) == 0)) {
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10;
    return 0xffffffff;
  }
  *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x80;
  if (in_stack_00000004[3] != 0) {
    iVar2 = FUN_00406f04();
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    in_stack_00000004[2] = in_stack_00000004[2] + -1;
    pbVar1 = (byte *)*in_stack_00000004;
    *in_stack_00000004 = *in_stack_00000004 + 1;
    return (uint)*pbVar1;
  }
  if ((*(byte *)((int)in_stack_00000004 + 0x13) & 2) != 0) {
    FUN_00406ed0();
  }
  pcVar3 = FUN_00407e70();
  if (pcVar3 == (char *)0x0) {
    uVar4 = FUN_00407d6c();
    if (uVar4 == 1) {
      *(ushort *)((int)in_stack_00000004 + 0x12) =
           *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfe7f | 0x20;
    }
    else {
      *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10
      ;
    }
    return 0xffffffff;
  }
  *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xffdf;
  return (uint)DAT_0040cb44;
}



// Function: FUN_0040704c @ 0x0040704c

uint FUN_0040704c(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  byte in_stack_00000004;
  int *in_stack_00000008;
  
  if (in_stack_00000008[2] < -1) {
    in_stack_00000008[2] = in_stack_00000008[2] + 1;
    pbVar1 = (byte *)*in_stack_00000008;
    *in_stack_00000008 = *in_stack_00000008 + 1;
    *pbVar1 = in_stack_00000004;
    if ((((*(byte *)((int)in_stack_00000008 + 0x12) & 8) != 0) &&
        ((in_stack_00000004 == 10 || (in_stack_00000004 == 0xd)))) &&
       (iVar2 = FUN_004067a8(), iVar2 != 0)) {
      return 0xffffffff;
    }
    uVar3 = (uint)in_stack_00000004;
  }
  else if (((*(ushort *)((int)in_stack_00000008 + 0x12) & 0x90) == 0) &&
          ((*(ushort *)((int)in_stack_00000008 + 0x12) & 2) != 0)) {
    *(ushort *)((int)in_stack_00000008 + 0x12) = *(ushort *)((int)in_stack_00000008 + 0x12) | 0x100;
    if (in_stack_00000008[3] == 0) {
      DVar4 = FUN_00408070();
      if ((DVar4 == 1) || ((*(byte *)((int)in_stack_00000008 + 0x13) & 2) != 0)) {
        uVar3 = (uint)in_stack_00000004;
      }
      else {
        *(ushort *)((int)in_stack_00000008 + 0x12) =
             *(ushort *)((int)in_stack_00000008 + 0x12) | 0x10;
        uVar3 = 0xffffffff;
      }
    }
    else {
      if ((in_stack_00000008[2] != 0) && (iVar2 = FUN_004067a8(), iVar2 != 0)) {
        return 0xffffffff;
      }
      in_stack_00000008[2] = -in_stack_00000008[3];
      pbVar1 = (byte *)*in_stack_00000008;
      *in_stack_00000008 = *in_stack_00000008 + 1;
      *pbVar1 = in_stack_00000004;
      if (((*(byte *)((int)in_stack_00000008 + 0x12) & 8) != 0) &&
         (((in_stack_00000004 == 10 || (in_stack_00000004 == 0xd)) &&
          (iVar2 = FUN_004067a8(), iVar2 != 0)))) {
        return 0xffffffff;
      }
      uVar3 = (uint)in_stack_00000004;
    }
  }
  else {
    *(ushort *)((int)in_stack_00000008 + 0x12) = *(ushort *)((int)in_stack_00000008 + 0x12) | 0x10;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// Function: FUN_00407140 @ 0x00407140

uint * FUN_00407140(void)

{
  uint *in_stack_00000004;
  
  if (in_stack_00000004 == (uint *)0x0) {
    in_stack_00000004 = FUN_0040a720();
  }
  FUN_00404310();
  FUN_00408c34();
  FUN_004041d4();
  return in_stack_00000004;
}



// Function: FUN_00407198 @ 0x00407198

uint * FUN_00407198(void)

{
  uint *puVar1;
  int iVar2;
  short *in_stack_00000008;
  
  do {
    *in_stack_00000008 = *in_stack_00000008 + 1;
    if (*in_stack_00000008 == 0) {
      *in_stack_00000008 = 1;
    }
    puVar1 = FUN_00407140();
    iVar2 = FUN_00408788();
  } while (iVar2 == 0);
  return puVar1;
}



// Function: FUN_00407260 @ 0x00407260

undefined4 FUN_00407260(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  int in_stack_0000000c;
  uint in_stack_00000010;
  
  if (((*(short *)(in_stack_00000004 + 0x14) == (short)in_stack_00000004) && (in_stack_0000000c < 3)
      ) && (in_stack_00000010 < 0x80000000)) {
    FUN_004074a8();
    if (*(int *)(in_stack_00000004 + 8) != 0) {
      FUN_00406d88();
    }
    uVar1 = FUN_00406674();
    FUN_00407570();
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// Function: FUN_004072ec @ 0x004072ec

void FUN_004072ec(void)

{
  undefined1 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  FUN_00407630();
  return;
}



// Function: FUN_00407310 @ 0x00407310

void FUN_00407310(void)

{
  undefined1 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  FUN_00407630();
  return;
}



// Function: FUN_00407348 @ 0x00407348

void FUN_00407348(void)

{
  undefined1 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  FUN_00407630();
  return;
}



// Function: FUN_00407488 @ 0x00407488

void FUN_00407488(void)

{
  FUN_0040a648();
  return;
}



// Function: FUN_00407498 @ 0x00407498

void FUN_00407498(void)

{
  FUN_0040a658();
  return;
}



// Function: FUN_004074a8 @ 0x004074a8

void FUN_004074a8(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = (in_stack_00000004 + -0x40b5c4) / 0x18;
  if ((DAT_0040cb58 == (uint *)0x0) || (DAT_0040cb58[iVar1] == 0)) {
    FUN_00407488();
    if (DAT_0040cb58 == (uint *)0x0) {
      DAT_0040cb58 = FUN_00409440();
      if (DAT_0040cb58 == (uint *)0x0) {
        FUN_0040a668();
      }
      FUN_004041a4();
    }
    if (DAT_0040cb58[iVar1] == 0) {
      FUN_0040a5e4();
    }
    FUN_00407498();
  }
  FUN_0040a648();
  return;
}



// Function: FUN_0040754c @ 0x0040754c

void FUN_0040754c(void)

{
  if (DAT_0040cb58 != 0) {
    FUN_0040932c();
    DAT_0040cb58 = 0;
  }
  DAT_0040bfd0 = 1;
  return;
}



// Function: FUN_00407570 @ 0x00407570

void FUN_00407570(void)

{
  FUN_0040a658();
  if (DAT_0040bfd0 != 0) {
    FUN_0040754c();
  }
  return;
}



// Function: FUN_004075a4 @ 0x004075a4

void FUN_004075a4(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x50) != 0) {
    iVar1 = (**(code **)(in_stack_00000004 + 0x54))();
    if (iVar1 == 0) {
      *(undefined4 *)(in_stack_00000004 + 0x60) = 1;
    }
    *(undefined4 *)(in_stack_00000004 + 0x50) = 0;
  }
  return;
}



// Function: FUN_004075d4 @ 0x004075d4

void FUN_004075d4(void)

{
  undefined1 in_stack_00000004;
  int in_stack_00000008;
  
  if (0x4f < *(int *)(in_stack_00000008 + 0x50)) {
    FUN_004075a4();
  }
  *(undefined1 *)(in_stack_00000008 + *(int *)(in_stack_00000008 + 0x50)) = in_stack_00000004;
  *(int *)(in_stack_00000008 + 0x50) = *(int *)(in_stack_00000008 + 0x50) + 1;
  *(int *)(in_stack_00000008 + 0x5c) = *(int *)(in_stack_00000008 + 0x5c) + 1;
  return;
}



// Function: FUN_004075fc @ 0x004075fc

void FUN_004075fc(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = 7;
  pcVar1 = (char *)(in_stack_00000008 + 7);
  do {
    cVar3 = (char)(in_stack_00000004 & 0xf);
    if ((in_stack_00000004 & 0xf) < 10) {
      *pcVar1 = cVar3 + '0';
    }
    else {
      *pcVar1 = cVar3 + '7';
    }
    in_stack_00000004 = in_stack_00000004 >> 4;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar1 + -1;
  } while (-1 < iVar2);
  return;
}



// Function: FUN_00407630 @ 0x00407630

/* WARNING: Removing unreachable block (ram,0x00407c7e) */

undefined4 FUN_00407630(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  char cVar10;
  char *pcVar11;
  uint uVar12;
  bool bVar13;
  char *in_stack_0000000c;
  uint *in_stack_00000010;
  char local_5c [8];
  undefined1 local_54;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  char *local_20;
  char local_19;
  char *local_18;
  int local_14;
  char local_d;
  uint local_c;
  uint local_8;
  
LAB_00407656:
  pcVar11 = in_stack_0000000c;
  in_stack_0000000c = pcVar11 + 1;
  if (*pcVar11 != '\0') {
    if (*pcVar11 == '%') {
      if (*in_stack_0000000c != '%') {
        uVar9 = 0;
        local_d = '\0';
        local_14 = 0;
        local_c = 0xffffffff;
        local_8 = 0xffffffff;
        uVar12 = 0;
        bVar7 = false;
        bVar13 = false;
        bVar6 = false;
        bVar5 = false;
switchD_004076bd_default:
        bVar4 = false;
        cVar10 = *in_stack_0000000c;
        in_stack_0000000c = in_stack_0000000c + 1;
        local_18 = pcVar11;
        if (cVar10 < ' ') goto switchD_004076bd_caseD_13;
        switch(s_allocating_stream_lock_table_0040bff0[cVar10 + 0x1b]) {
        case '\0':
          local_18 = pcVar11;
          if (uVar9 != 0) goto switchD_004076bd_caseD_13;
          if (local_d != '+') {
            local_d = cVar10;
          }
          goto switchD_004076bd_default;
        case '\x01':
          local_18 = pcVar11;
          if (uVar9 != 0) goto switchD_004076bd_caseD_13;
          uVar12 = 1;
          goto switchD_004076bd_default;
        case '\x02':
          uVar3 = *in_stack_00000010;
          if (uVar9 < 2) {
            local_8 = uVar3;
            if ((int)uVar3 < 0) {
              bVar5 = true;
              local_8 = -uVar3;
            }
            uVar9 = 3;
            in_stack_00000010 = in_stack_00000010 + 1;
          }
          else {
            local_18 = pcVar11;
            if (uVar9 != 4) goto switchD_004076bd_caseD_13;
            uVar9 = 5;
            in_stack_00000010 = in_stack_00000010 + 1;
            local_c = uVar3;
          }
          goto switchD_004076bd_default;
        case '\x03':
          local_18 = pcVar11;
          if (uVar9 != 0) goto switchD_004076bd_caseD_13;
          bVar5 = true;
          goto switchD_004076bd_default;
        case '\x04':
          local_18 = pcVar11;
          if (3 < uVar9) goto switchD_004076bd_caseD_13;
          uVar9 = 4;
          local_c = local_c + 1;
          goto switchD_004076bd_default;
        case '\x05':
          goto switchD_004076bd_caseD_5;
        case '\x06':
          bVar6 = true;
          uVar9 = 5;
          goto switchD_004076bd_default;
        case '\a':
          uVar9 = 5;
          bVar6 = false;
          goto switchD_004076bd_default;
        case '\b':
          uVar9 = 5;
          bVar7 = true;
          bVar6 = false;
          goto switchD_004076bd_default;
        case '\t':
          if (uVar9 == 0) {
            if (!bVar5) {
              bVar13 = true;
              uVar9 = 1;
            }
          }
          else {
switchD_004076bd_caseD_5:
            cVar10 = cVar10 + -0x30;
            if (uVar9 < 3) {
              uVar9 = 2;
              if (local_8 == 0xffffffff) {
                local_8 = (uint)cVar10;
              }
              else {
                local_8 = local_8 * 10 + (int)cVar10;
              }
            }
            else {
              local_18 = pcVar11;
              if (uVar9 != 4) goto switchD_004076bd_caseD_13;
              local_c = local_c * 10 + (int)cVar10;
            }
          }
          goto switchD_004076bd_default;
        case '\n':
          goto switchD_004076bd_caseD_a;
        case '\v':
          local_24 = 8;
          break;
        case '\f':
          local_24 = 10;
          break;
        case '\r':
          local_24 = 0x10;
          local_19 = cVar10 + -0x17;
          break;
        case '\x0e':
          local_20 = (char *)*in_stack_00000010;
          FUN_004075fc();
          local_54 = 0;
          local_20 = local_5c;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_00407a50;
        case '\x0f':
          local_20 = local_5c + 1;
          thunk_FUN_00408ba8();
          in_stack_00000010 = (uint *)thunk_FUN_00408ba8();
          goto LAB_00407a50;
        case '\x10':
          local_20 = local_5c;
          local_5c[0] = (char)*in_stack_00000010;
          local_5c[1] = 0;
          local_2c = 1;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_00407ac1;
        case '\x11':
          puVar1 = in_stack_00000010 + 1;
          local_20 = (char *)*in_stack_00000010;
          if (local_20 == (char *)0x0) {
            local_20 = &DAT_0040c024;
          }
          local_2c = FUN_0040423c();
          in_stack_00000010 = puVar1;
          if (((int)local_c < (int)local_2c) && (-1 < (int)local_c)) {
            local_2c = local_c;
          }
          goto LAB_00407ac1;
        case '\x12':
          puVar1 = in_stack_00000010 + 1;
          local_20 = (char *)*in_stack_00000010;
          in_stack_00000010 = puVar1;
          if (bVar6) {
            local_20[0] = '\0';
            local_20[1] = '\0';
            local_20[2] = '\0';
            local_20[3] = '\0';
          }
          else if (bVar7) {
            local_20[0] = '\0';
            local_20[1] = '\0';
          }
          else {
            local_20[0] = '\0';
            local_20[1] = '\0';
            local_20[2] = '\0';
            local_20[3] = '\0';
          }
          goto LAB_00407656;
        case '\x13':
        case '\x14':
        case '\x15':
          goto switchD_004076bd_caseD_13;
        case '\x16':
          uVar9 = 5;
          goto switchD_004076bd_default;
        case '\x17':
          uVar9 = 5;
        default:
          goto switchD_004076bd_default;
        }
        local_d = '\0';
        bVar8 = false;
        goto LAB_0040789d;
      }
      in_stack_0000000c = pcVar11 + 2;
    }
    FUN_004075d4();
    goto LAB_00407656;
  }
  goto LAB_00407c6b;
switchD_004076bd_caseD_a:
  local_24 = 10;
  bVar8 = true;
LAB_0040789d:
  if (bVar6) {
    uVar9 = *in_stack_00000010;
  }
  else if (bVar7) {
    if (bVar8) {
      uVar9 = (uint)(short)(ushort)*in_stack_00000010;
    }
    else {
      uVar9 = (uint)(ushort)*in_stack_00000010;
    }
  }
  else {
    uVar9 = *in_stack_00000010;
  }
  in_stack_00000010 = in_stack_00000010 + 1;
  local_20 = local_5c + 1;
  if (uVar9 == 0) {
    if (local_c == 0) {
      local_5c[1] = 0;
      goto LAB_00407911;
    }
  }
  else {
    uVar12 = uVar12 | 4;
  }
  FUN_00408bc0();
LAB_00407911:
  if ((int)local_c < 0) {
LAB_00407a50:
    if ((bVar13) && (0 < (int)local_8)) {
      local_2c = FUN_0040423c();
      if (*local_20 == '-') {
        local_2c = local_2c + -1;
      }
      if ((int)local_2c < (int)local_8) {
        local_14 = local_8 - local_2c;
      }
    }
    if ((*local_20 == '-') || (local_d != '\0')) {
      if (*local_20 != '-') {
        local_20 = local_20 + -1;
        *local_20 = local_d;
      }
      if ((0 < local_14) && ((int)local_c < 0)) {
        local_14 = local_14 + -1;
      }
    }
    local_2c = FUN_0040423c();
  }
  else {
    local_28 = FUN_0040423c();
    local_2c = local_28;
    if (*local_20 == '-') {
      local_28 = local_28 - 1;
    }
    else if (local_d != '\0') {
      local_2c = local_28 + 1;
      local_20 = local_20 + -1;
      *local_20 = local_d;
    }
    if ((int)local_28 < (int)local_c) {
      local_14 = local_c - local_28;
    }
  }
LAB_00407ac1:
  if (uVar12 == 5) {
    if (cVar10 == 'o') {
      if (local_14 < 1) {
        local_14 = 1;
      }
    }
    else if ((cVar10 == 'x') || (cVar10 == 'X')) {
      bVar4 = true;
      local_8 = local_8 - 2;
      local_14 = local_14 + -2;
      if (local_14 < 0) {
        local_14 = 0;
      }
    }
  }
  local_2c = local_2c + local_14;
  if ((!bVar5) && ((int)local_2c < (int)local_8)) {
    do {
      FUN_004075d4();
      local_8 = local_8 - 1;
    } while ((int)local_2c < (int)local_8);
  }
  if (bVar4) {
    FUN_004075d4();
    FUN_004075d4();
  }
  if (0 < local_14) {
    local_2c = local_2c - local_14;
    local_8 = local_8 - local_14;
    cVar10 = *local_20;
    if (((cVar10 == '-') || (cVar10 == ' ')) || (cVar10 == '+')) {
      local_20 = local_20 + 1;
      FUN_004075d4();
      local_2c = local_2c + -1;
      local_8 = local_8 - 1;
    }
    while (iVar2 = local_14 + -1, bVar13 = local_14 != 0, local_14 = iVar2, bVar13) {
      FUN_004075d4();
    }
  }
  if (local_2c != 0) {
    local_8 = local_8 - local_2c;
    while (local_2c != 0) {
      local_20 = local_20 + 1;
      local_2c = local_2c + -1;
      FUN_004075d4();
    }
    local_2c = -1;
  }
  while (uVar12 = local_8 - 1, bVar13 = 0 < (int)local_8, local_8 = uVar12, bVar13) {
    FUN_004075d4();
  }
  goto LAB_00407656;
switchD_004076bd_caseD_13:
  while (pcVar11 = local_18 + 1, cVar10 = *local_18, local_18 = pcVar11, cVar10 != '\0') {
    FUN_004075d4();
  }
LAB_00407c6b:
  FUN_004075a4();
  return 0;
}



// Function: FUN_00407d10 @ 0x00407d10

int FUN_00407d10(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_00407488();
  iVar3 = 0;
  puVar1 = &DAT_0040b5c4;
  iVar2 = DAT_0040ba74;
  while (iVar2 != 0) {
    if (((*(byte *)((int)puVar1 + 0x12) & 3) != 0) && (puVar1[2] != 0)) {
      FUN_004067a8();
      iVar3 = iVar3 + 1;
    }
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  FUN_00407498();
  return iVar3;
}



// Function: FUN_00407d6c @ 0x00407d6c

uint FUN_00407d6c(void)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint in_stack_00000004;
  
  if (in_stack_00000004 < DAT_0040ba74) {
    FUN_00408290();
    if (((&DAT_0040ba78)[in_stack_00000004] & 0x200) == 0) {
      if (((&DAT_0040ba78)[in_stack_00000004] & 0x2000) == 0) {
        DVar2 = FUN_00408870();
        if (DVar2 == 0xffffffff) {
          uVar1 = 0xffffffff;
        }
        else {
          DVar3 = FUN_00408870();
          if (DVar3 == 0xffffffff) {
            uVar1 = 0xffffffff;
          }
          else {
            DVar4 = FUN_00408870();
            if (DVar4 == 0xffffffff) {
              uVar1 = 0xffffffff;
            }
            else {
              uVar1 = (uint)((int)DVar3 <= (int)DVar2);
            }
          }
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
    FUN_00408324();
  }
  else {
    uVar1 = FUN_0040860c();
  }
  return uVar1;
}



// Function: FUN_00407e04 @ 0x00407e04

char * FUN_00407e04(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000004;
  int in_stack_00000008;
  
  pcVar3 = in_stack_00000004;
  pcVar4 = in_stack_00000004;
  while( true ) {
    pcVar1 = FUN_00404114();
    if (pcVar1 == (char *)0x0) {
      pcVar1 = in_stack_00000004 + in_stack_00000008;
    }
    iVar2 = (int)pcVar1 - (int)pcVar3;
    if (pcVar4 != pcVar3) {
      FUN_00404134();
    }
    if (in_stack_00000004 + in_stack_00000008 + -1 <= pcVar1) break;
    pcVar3 = pcVar1 + 1;
    pcVar4 = pcVar4 + iVar2;
  }
  return pcVar4 + (iVar2 - (int)in_stack_00000004);
}



// Function: FUN_00407e70 @ 0x00407e70

char * FUN_00407e70(void)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  DWORD extraout_ECX;
  uint in_stack_00000004;
  LPVOID in_stack_00000008;
  char *in_stack_0000000c;
  
  if (in_stack_00000004 < DAT_0040ba74) {
    if (in_stack_0000000c + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else {
      FUN_00408290();
      if ((*(byte *)((int)&DAT_0040ba78 + in_stack_00000004 * 4 + 1) & 0x40) == 0) {
        pcVar1 = (char *)FUN_004086c0(in_stack_0000000c,in_stack_00000004,in_stack_00000004,
                                      in_stack_00000004,in_stack_00000008,(DWORD)in_stack_0000000c);
      }
      else if ((*(byte *)((int)&DAT_0040ba78 + in_stack_00000004 * 4 + 1) & 2) == 0) {
        pcVar1 = (char *)0x0;
        if (in_stack_0000000c != (char *)0x0) {
          while( true ) {
            uVar6 = (int)in_stack_0000000c - (int)pcVar1;
            uVar2 = FUN_004086c0(uVar6,in_stack_00000004,uVar6,in_stack_00000004,in_stack_00000008,
                                 uVar6);
            if (uVar2 == 0xffffffff) {
              pcVar1 = (char *)0xffffffff;
              goto LAB_00407fa3;
            }
            if (uVar2 == 0) goto LAB_00407fa3;
            pcVar3 = FUN_00404114();
            if (pcVar3 != (char *)0x0) {
              (&DAT_0040ba78)[in_stack_00000004] = (&DAT_0040ba78)[in_stack_00000004] | 0x200;
              uVar2 = (int)pcVar3 - (int)in_stack_00000008;
              if (uVar2 == 0) goto LAB_00407fa3;
            }
            if ((*(char *)((int)in_stack_00000008 + (uVar2 - 1)) == '\r') &&
               (iVar4 = (uVar2 - 1) + (int)in_stack_00000008,
               iVar4 = FUN_004086c0(iVar4,in_stack_00000004,extraout_ECX,in_stack_00000004,
                                    (LPVOID)iVar4,1), iVar4 == -1)) break;
            pcVar5 = FUN_00407e04();
            pcVar1 = pcVar1 + (int)pcVar5;
            if ((((uVar2 < uVar6) &&
                 ((*(byte *)((int)&DAT_0040ba78 + in_stack_00000004 * 4 + 1) & 0x20) != 0)) ||
                (pcVar3 != (char *)0x0)) ||
               ((pcVar5 != (char *)0x0 || (in_stack_0000000c <= pcVar1)))) goto LAB_00407fa3;
          }
          pcVar1 = (char *)0xffffffff;
        }
      }
      else {
        pcVar1 = (char *)0x0;
      }
LAB_00407fa3:
      FUN_00408324();
    }
  }
  else {
    pcVar1 = (char *)FUN_0040860c();
  }
  return pcVar1;
}



// Function: FUN_00407fb8 @ 0x00407fb8

/* WARNING: Type propagation algorithm not settling */

int FUN_00407fb8(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined1 *in_stack_0000000c;
  int in_stack_00000010;
  int local_14;
  
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = 0;
  local_14 = 0;
  puVar5 = in_stack_0000000c;
  iVar6 = in_stack_00000004;
  while( true ) {
    pcVar4 = (char *)(in_stack_00000004 + (iVar1 - iVar6));
    pcVar2 = FUN_00404114();
    if (pcVar2 != (char *)0x0) {
      pcVar4 = pcVar2 + -iVar6;
    }
    pcVar3 = in_stack_0000000c + (in_stack_00000010 - (int)puVar5);
    if (pcVar3 < pcVar4) break;
    FUN_00404134();
    puVar5 = puVar5 + (int)pcVar4;
    if ((pcVar2 == (char *)0x0) ||
       ((int)(in_stack_0000000c + (in_stack_00000010 - (int)puVar5)) < 2)) {
      *in_stack_00000008 = (int)(pcVar4 + *in_stack_00000008);
LAB_00408068:
      return local_14 + (int)pcVar4;
    }
    *puVar5 = 0xd;
    puVar5[1] = 10;
    puVar5 = puVar5 + 2;
    local_14 = local_14 + (int)(pcVar4 + 2);
    iVar6 = iVar6 + (int)(pcVar4 + 1);
    *in_stack_00000008 = (int)(pcVar4 + 1 + *in_stack_00000008);
  }
  FUN_00404134();
  *in_stack_00000008 = (int)(pcVar3 + *in_stack_00000008);
  pcVar4 = pcVar3;
  goto LAB_00408068;
}



// Function: FUN_00408070 @ 0x00408070

DWORD FUN_00408070(void)

{
  DWORD DVar1;
  int iVar2;
  DWORD DVar3;
  DWORD extraout_ECX;
  uint in_stack_00000004;
  int in_stack_00000008;
  DWORD in_stack_0000000c;
  undefined1 local_8c [128];
  DWORD local_c;
  DWORD local_8;
  
  if (in_stack_00000004 < DAT_0040ba74) {
    if (in_stack_0000000c + 1 < 2) {
      in_stack_0000000c = 0;
    }
    else {
      FUN_00408290();
      if ((*(byte *)((int)&DAT_0040ba78 + in_stack_00000004 * 4 + 1) & 8) != 0) {
        FUN_00408870();
      }
      DVar1 = in_stack_0000000c;
      iVar2 = in_stack_00000008;
      if ((*(byte *)((int)&DAT_0040ba78 + in_stack_00000004 * 4 + 1) & 0x40) == 0) {
        in_stack_0000000c =
             FUN_00408724(in_stack_00000008,in_stack_00000004,in_stack_0000000c,in_stack_00000004,
                          (LPCVOID)in_stack_00000008,in_stack_0000000c);
      }
      else {
        for (; DVar1 != 0; DVar1 = DVar1 - local_8) {
          local_8 = DVar1;
          DVar3 = FUN_00407fb8();
          local_c = FUN_00408724(local_8c,in_stack_00000004,extraout_ECX,in_stack_00000004,local_8c,
                                 DVar3);
          if (DVar3 != local_c) {
            if (local_c == 0xffffffff) {
              in_stack_0000000c = 0xffffffff;
            }
            else {
              in_stack_0000000c = (iVar2 - in_stack_00000008) + local_c;
            }
            break;
          }
          iVar2 = iVar2 + local_8;
        }
      }
      FUN_00408324();
    }
  }
  else {
    in_stack_0000000c = FUN_0040860c();
  }
  return in_stack_0000000c;
}



// Function: FUN_00408168 @ 0x00408168

uint FUN_00408168(void)

{
  uint uVar1;
  
  FUN_004074a8();
  uVar1 = FUN_00406f7c();
  FUN_00407570();
  return uVar1;
}



// Function: FUN_004081b8 @ 0x004081b8

uint FUN_004081b8(void)

{
  BOOL BVar1;
  uint uVar2;
  LPCSTR in_stack_00000004;
  DWORD in_stack_00000008;
  
  BVar1 = SetFileAttributesA(in_stack_00000004,in_stack_00000008);
  if (BVar1 == 0) {
    uVar2 = FUN_00408658();
    return uVar2;
  }
  return 0;
}



// Function: FUN_004081d8 @ 0x004081d8

uint FUN_004081d8(void)

{
  uint uVar1;
  BOOL BVar2;
  uint in_stack_00000004;
  WORD in_stack_00000008;
  WORD in_stack_0000000c;
  _FILETIME local_14;
  _FILETIME local_c;
  
  if (in_stack_00000004 < DAT_0040ba74) {
    BVar2 = DosDateTimeToFileTime(in_stack_00000008,in_stack_0000000c,&local_14);
    if (BVar2 == 1) {
      LocalFileTimeToFileTime(&local_14,&local_c);
      BVar2 = SetFileTime(*(HANDLE *)(&DAT_0040ca7c + in_stack_00000004 * 4),(FILETIME *)0x0,
                          (FILETIME *)0x0,&local_c);
      if (BVar2 == 1) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_00408658();
      }
    }
    else {
      uVar1 = FUN_00408658();
    }
  }
  else {
    FUN_0040860c();
    uVar1 = 6;
  }
  return uVar1;
}



// Function: FUN_0040824c @ 0x0040824c

void FUN_0040824c(void)

{
  FUN_0040a648();
  return;
}



// Function: FUN_0040825c @ 0x0040825c

void FUN_0040825c(void)

{
  if (DAT_0040cb60 != 0) {
    FUN_0040932c();
    DAT_0040cb60 = 0;
  }
  DAT_0040c098 = 1;
  return;
}



// Function: FUN_00408280 @ 0x00408280

void FUN_00408280(void)

{
  FUN_0040a658();
  return;
}



// Function: FUN_00408290 @ 0x00408290

void FUN_00408290(void)

{
  int in_stack_00000004;
  
  if ((DAT_0040cb60 == (uint *)0x0) || (DAT_0040cb60[in_stack_00000004] == 0)) {
    FUN_0040824c();
    if (DAT_0040cb60 == (uint *)0x0) {
      DAT_0040cb60 = FUN_00409440();
      if (DAT_0040cb60 == (uint *)0x0) {
        FUN_0040a668();
      }
      FUN_004041a4();
    }
    if (DAT_0040cb60[in_stack_00000004] == 0) {
      FUN_0040a5e4();
    }
    FUN_00408280();
  }
  FUN_0040a648();
  return;
}



// Function: FUN_00408324 @ 0x00408324

void FUN_00408324(void)

{
  FUN_0040a658();
  if (DAT_0040c098 != 0) {
    FUN_0040825c();
  }
  return;
}



// Function: FUN_0040834c @ 0x0040834c

int FUN_0040834c(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  iVar1 = 0;
  for (piVar2 = &DAT_0040ba78; (iVar1 < DAT_0040ba74 && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == DAT_0040ba74) {
    return -1;
  }
  (&DAT_0040ba78)[iVar1] = in_stack_00000008;
  *(undefined4 *)(&DAT_0040ca7c + iVar1 * 4) = in_stack_00000004;
  return iVar1;
}



// Function: FUN_0040838c @ 0x0040838c

uint FUN_0040838c(void)

{
  int *piVar1;
  uint in_stack_00000004;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  if (in_stack_00000008 == 0xffffffff) {
    in_stack_00000008 = 0;
    for (piVar1 = &DAT_0040ba78; ((int)in_stack_00000008 < (int)DAT_0040ba74 && (*piVar1 != 0));
        piVar1 = piVar1 + 1) {
      in_stack_00000008 = in_stack_00000008 + 1;
    }
  }
  if ((in_stack_00000004 < DAT_0040ba74) && (in_stack_00000008 < DAT_0040ba74)) {
    if (((&DAT_0040ba78)[in_stack_00000004] != 0) && ((&DAT_0040ba78)[in_stack_00000008] == 0)) {
      (&DAT_0040ba78)[in_stack_00000008] = (&DAT_0040ba78)[in_stack_00000004];
      *(undefined4 *)(&DAT_0040ca7c + in_stack_00000008 * 4) = in_stack_0000000c;
      return in_stack_00000008;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}



// Function: FUN_004083f4 @ 0x004083f4

void FUN_004083f4(void)

{
  uint in_stack_00000004;
  
  if (in_stack_00000004 < DAT_0040ba74) {
    (&DAT_0040ba78)[in_stack_00000004] = 0;
  }
  return;
}



// Function: FUN_00408410 @ 0x00408410

int FUN_00408410(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  int *in_stack_00000004;
  uint *local_c;
  int local_8;
  
  iVar2 = DAT_0040ba74;
  for (piVar4 = &DAT_0040ba74 + DAT_0040ba74; (iVar2 != 0 && (*piVar4 == 0)); piVar4 = piVar4 + -1)
  {
    iVar2 = iVar2 + -1;
  }
  if (in_stack_00000004 == (int *)0x0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 * 5 + 4;
    }
  }
  else {
    *in_stack_00000004 = iVar2;
    local_8 = 0;
    pbVar5 = (byte *)(in_stack_00000004 + 1);
    local_c = &DAT_0040ba78;
    if (0 < iVar2) {
      do {
        bVar3 = 1;
        uVar1 = *local_c;
        if ((uVar1 & 0x800) != 0) {
          bVar3 = 0x21;
        }
        if ((uVar1 & 0x8000) == 0) {
          bVar3 = bVar3 | 0x80;
        }
        if ((uVar1 & 0x2000) != 0) {
          bVar3 = bVar3 | 0x40;
        }
        *pbVar5 = bVar3;
        pbVar5 = pbVar5 + 1;
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while (local_8 < iVar2);
    }
    FUN_00404134();
    iVar2 = 0;
  }
  return iVar2;
}



// Function: FUN_004084ac @ 0x004084ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004084ac(void)

{
  uint uVar1;
  bool bVar2;
  UINT UVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  _STARTUPINFOA local_50;
  
  FUN_0040a5e4();
  UVar3 = SetHandleCount(DAT_0040ba74);
  if (UVar3 < DAT_0040ba74) {
    DAT_0040ba74 = UVar3;
  }
  PTR_LAB_0040c090 = FUN_00408410;
  bVar2 = false;
  GetStartupInfoA(&local_50);
  if (local_50.cbReserved2 != 0) {
    uVar7 = *(uint *)local_50.lpReserved2;
    puVar8 = (uint *)((int)local_50.lpReserved2 + 4);
    if (uVar7 * 5 + 4 == (uint)local_50.cbReserved2) {
      bVar2 = true;
      iVar6 = 0;
      puVar9 = &DAT_0040ba78;
      if (0 < (int)uVar7) {
        do {
          uVar1 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          uVar4 = 0;
          if ((uVar1 & 0x20) != 0) {
            uVar4 = 0x800;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar4 = uVar4 | 0x2000;
          }
          if ((uVar1 & 0x80) == 0) {
            uVar4 = uVar4 | 0x8000;
          }
          else {
            uVar4 = uVar4 | 0x4000;
          }
          iVar6 = iVar6 + 1;
          *puVar9 = *puVar9 & 3 | uVar4;
          puVar9 = puVar9 + 1;
        } while (iVar6 < (int)uVar7);
      }
      puVar5 = &DAT_0040ba78 + uVar7;
      for (; uVar7 < DAT_0040ba74; uVar7 = uVar7 + 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      FUN_00404158();
    }
  }
  if (!bVar2) {
    _DAT_0040ca7c = GetStdHandle(0xfffffff6);
    DAT_0040ca80 = GetStdHandle(0xfffffff5);
    _DAT_0040ca84 = GetStdHandle(0xfffffff4);
    iVar6 = 0;
    puVar8 = &DAT_0040ba78;
    do {
      bVar2 = FUN_00408828();
      if (CONCAT31(extraout_var,bVar2) == 0) {
        *puVar8 = *puVar8 & 0xffffdfff;
      }
      else {
        *puVar8 = *puVar8 | 0x2000;
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar6 < 3);
  }
  return;
}



// Function: FUN_00408600 @ 0x00408600

uint * FUN_00408600(void)

{
  uint *puVar1;
  
  puVar1 = FUN_0040a424();
  return puVar1 + 4;
}



// Function: FUN_0040860c @ 0x0040860c

undefined4 FUN_0040860c(void)

{
  uint *puVar1;
  uint uVar2;
  uint in_stack_00000004;
  
  if ((int)in_stack_00000004 < 0) {
    uVar2 = -in_stack_00000004;
    if ((int)uVar2 < DAT_0040bc18) {
      puVar1 = FUN_00408600();
      *puVar1 = 0xffffffff;
      goto LAB_0040864b;
    }
LAB_0040861f:
    in_stack_00000004 = 1;
  }
  else if (0x12a < (int)in_stack_00000004) goto LAB_0040861f;
  puVar1 = FUN_00408600();
  *puVar1 = in_stack_00000004;
  uVar2 = (uint)(char)(&DAT_0040c0ec)[in_stack_00000004];
LAB_0040864b:
  puVar1 = FUN_004098f8();
  *puVar1 = uVar2;
  return 0xffffffff;
}



// Function: FUN_00408658 @ 0x00408658

uint FUN_00408658(void)

{
  DWORD DVar1;
  
  DVar1 = GetLastError();
  FUN_0040860c();
  return DVar1 & 0xffff;
}



// Function: FUN_00408678 @ 0x00408678

void FUN_00408678(void)

{
  GetLastError();
  FUN_0040860c();
  return;
}



// Function: FUN_0040868c @ 0x0040868c

undefined4 FUN_0040868c(void)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  LPCSTR in_stack_00000004;
  
  BVar1 = CreateDirectoryA(in_stack_00000004,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 1) {
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 == 0xb7) {
    uVar3 = FUN_0040860c();
    return uVar3;
  }
  uVar3 = FUN_00408678();
  return uVar3;
}



// Function: FUN_004086c0 @ 0x004086c0

undefined4
FUN_004086c0(undefined4 param_1,undefined4 param_2,DWORD param_3,uint param_4,LPVOID param_5,
            DWORD param_6)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  local_8 = param_3;
  if (DAT_0040ba74 <= param_4) {
    uVar1 = FUN_0040860c();
    return uVar1;
  }
  BVar2 = ReadFile(*(HANDLE *)(&DAT_0040ca7c + param_4 * 4),param_5,param_6,&local_8,
                   (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00408678();
    return uVar1;
  }
  return local_8;
}



// Function: FUN_00408708 @ 0x00408708

void FUN_00408708(void)

{
  DWORD in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_004086c0(in_stack_0000000c,in_stack_00000008,in_stack_00000004,in_stack_00000004,
               (LPVOID)in_stack_00000008,in_stack_0000000c);
  return;
}



// Function: FUN_00408724 @ 0x00408724

undefined4
FUN_00408724(undefined4 param_1,undefined4 param_2,DWORD param_3,uint param_4,LPCVOID param_5,
            DWORD param_6)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  local_8 = param_3;
  if (DAT_0040ba74 <= param_4) {
    uVar1 = FUN_0040860c();
    return uVar1;
  }
  BVar2 = WriteFile(*(HANDLE *)(&DAT_0040ca7c + param_4 * 4),param_5,param_6,&local_8,
                    (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00408678();
    return uVar1;
  }
  return local_8;
}



// Function: FUN_0040876c @ 0x0040876c

void FUN_0040876c(void)

{
  DWORD in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00408724(in_stack_0000000c,in_stack_00000008,in_stack_00000004,in_stack_00000004,
               (LPCVOID)in_stack_00000008,in_stack_0000000c);
  return;
}



// Function: FUN_00408788 @ 0x00408788

undefined4 FUN_00408788(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  uint *puVar3;
  LPCSTR in_stack_00000004;
  byte in_stack_00000008;
  
  DVar1 = GetFileAttributesA(in_stack_00000004);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_00408678();
    return uVar2;
  }
  if (((in_stack_00000008 & 2) != 0) && ((DVar1 & 1) != 0)) {
    puVar3 = FUN_004098f8();
    *puVar3 = 5;
    return 0xffffffff;
  }
  return 0;
}



// Function: FUN_004087c8 @ 0x004087c8

undefined4 FUN_004087c8(void)

{
  undefined4 uVar1;
  BOOL BVar2;
  uint in_stack_00000004;
  
  if (DAT_0040ba74 <= in_stack_00000004) {
    uVar1 = FUN_0040860c();
    return uVar1;
  }
  FUN_00408290();
  BVar2 = CloseHandle(*(HANDLE *)(&DAT_0040ca7c + in_stack_00000004 * 4));
  if (BVar2 == 1) {
    (&DAT_0040ba78)[in_stack_00000004] = 0;
    *(undefined4 *)(&DAT_0040ca7c + in_stack_00000004 * 4) = 0xffffffff;
    FUN_00408324();
    return 0;
  }
  FUN_00408324();
  uVar1 = FUN_00408678();
  return uVar1;
}



// Function: FUN_00408828 @ 0x00408828

bool FUN_00408828(void)

{
  DWORD DVar1;
  uint in_stack_00000004;
  
  if (DAT_0040ba74 <= in_stack_00000004) {
    return false;
  }
  DVar1 = GetFileType(*(HANDLE *)(&DAT_0040ca7c + in_stack_00000004 * 4));
  return DVar1 == 2;
}



// Function: FUN_00408858 @ 0x00408858

bool FUN_00408858(void)

{
  DWORD DVar1;
  HANDLE in_stack_00000004;
  
  DVar1 = GetFileType(in_stack_00000004);
  return DVar1 == 2;
}



// Function: FUN_00408870 @ 0x00408870

DWORD FUN_00408870(void)

{
  DWORD DVar1;
  uint in_stack_00000004;
  LONG in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_00000004 < DAT_0040ba74) {
    if (in_stack_0000000c == 0) {
      DVar1 = 0;
    }
    else if (in_stack_0000000c == 1) {
      DVar1 = 1;
    }
    else {
      if (in_stack_0000000c != 2) {
        DVar1 = FUN_0040860c();
        return DVar1;
      }
      DVar1 = 2;
    }
    FUN_00408290();
    (&DAT_0040ba78)[in_stack_00000004] = (&DAT_0040ba78)[in_stack_00000004] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_0040ca7c + in_stack_00000004 * 4),in_stack_00000008,
                           (PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_00408678();
    }
    FUN_00408324();
  }
  else {
    DVar1 = FUN_0040860c();
  }
  return DVar1;
}



// Function: FUN_004088f4 @ 0x004088f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004088f4(void)

{
  int iVar1;
  HANDLE hObject;
  uint uVar2;
  DWORD dwFlagsAndAttributes;
  DWORD dwCreationDisposition;
  LPCSTR in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  _SECURITY_ATTRIBUTES local_18;
  DWORD local_c;
  DWORD local_8;
  
  FUN_0040824c();
  uVar2 = in_stack_00000008 & 0x700;
  if (uVar2 < 0x501) {
    if (uVar2 == 0x500) {
LAB_00408964:
      dwCreationDisposition = 1;
    }
    else if (uVar2 == 0x100) {
      dwCreationDisposition = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_00408979;
      if (uVar2 != 0x300) goto LAB_00408980;
      dwCreationDisposition = 2;
    }
  }
  else if (uVar2 == 0x600) {
LAB_00408979:
    dwCreationDisposition = 5;
  }
  else {
    if (uVar2 == 0x700) goto LAB_00408964;
LAB_00408980:
    dwCreationDisposition = 3;
  }
  if ((in_stack_00000008 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(in_stack_00000004);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((in_stack_0000000c & _DAT_0040c094 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar2 = in_stack_00000008 & 3;
  if (uVar2 == 0) {
    local_8 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_8 = 0x40000000;
  }
  else {
    if (uVar2 != 2) {
      iVar1 = FUN_0040860c();
      goto LAB_00408ae6;
    }
    local_8 = 0xc0000000;
  }
  uVar2 = in_stack_00000008 & 0x70;
  if (uVar2 == 0x10) {
    local_c = 0;
  }
  else if (uVar2 == 0x20) {
    local_c = 1;
  }
  else if (uVar2 == 0x30) {
    local_c = 2;
  }
  else {
    local_c = 3;
  }
  local_18.nLength = 0xc;
  local_18.lpSecurityDescriptor = (LPVOID)0x0;
  local_18.bInheritHandle = (BOOL)((in_stack_00000008 & 0x80) == 0);
  hObject = CreateFileA(in_stack_00000004,local_8,local_c,&local_18,dwCreationDisposition,
                        dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    GetLastError();
    iVar1 = FUN_0040860c();
  }
  else {
    FUN_00408858();
    iVar1 = FUN_0040834c();
    if (iVar1 == -1) {
      FUN_0040860c();
      CloseHandle(hObject);
    }
  }
LAB_00408ae6:
  FUN_00408280();
  return iVar1;
}



// Function: FUN_00408af4 @ 0x00408af4

undefined4 FUN_00408af4(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  LPCSTR in_stack_00000004;
  
  BVar1 = DeleteFileA(in_stack_00000004);
  if (BVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00408678();
  }
  return uVar2;
}



// Function: FUN_00408b14 @ 0x00408b14

uint FUN_00408b14(void)

{
  uint uVar1;
  uint in_stack_00000004;
  
  if (in_stack_00000004 == 0xffffffff) {
    return 0xffffffff;
  }
  uVar1 = in_stack_00000004 & 0xff;
  if (((&DAT_0040c21d)[uVar1] & 8) != 0) {
    return uVar1 - 0x20;
  }
  return uVar1;
}



// Function: FUN_00408b3c @ 0x00408b3c

undefined2 FUN_00408b3c(void)

{
  undefined2 in_FPUStatusWord;
  
  return in_FPUStatusWord;
}



// Function: FUN_00408b50 @ 0x00408b50

void FUN_00408b50(void)

{
  return;
}



// Function: FUN_00408b90 @ 0x00408b90

void FUN_00408b90(void)

{
  FUN_00408b50();
  return;
}



// Function: FUN_00408ba8 @ 0x00408ba8

void FUN_00408ba8(void)

{
  FUN_00409a50();
  return;
}



// Function: FUN_00408bc0 @ 0x00408bc0

char * FUN_00408bc0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint in_stack_00000004;
  char *in_stack_00000008;
  uint in_stack_0000000c;
  char in_stack_00000010;
  char in_stack_00000014;
  char local_28 [36];
  
  pcVar3 = in_stack_00000008;
  if ((1 < (int)in_stack_0000000c) && ((int)in_stack_0000000c < 0x25)) {
    if (((int)in_stack_00000004 < 0) && (in_stack_00000010 != '\0')) {
      *in_stack_00000008 = '-';
      pcVar3 = in_stack_00000008 + 1;
      in_stack_00000004 = -in_stack_00000004;
    }
    pcVar2 = local_28;
    do {
      *pcVar2 = (char)(in_stack_00000004 % in_stack_0000000c);
      pcVar2 = pcVar2 + 1;
      in_stack_00000004 = in_stack_00000004 / in_stack_0000000c;
    } while (in_stack_00000004 != 0);
    while (pcVar2 != local_28) {
      pcVar2 = pcVar2 + -1;
      cVar1 = *pcVar2;
      if (cVar1 < '\n') {
        *pcVar3 = cVar1 + '0';
        pcVar3 = pcVar3 + 1;
      }
      else {
        *pcVar3 = cVar1 + in_stack_00000014 + -10;
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  *pcVar3 = '\0';
  return in_stack_00000008;
}



// Function: FUN_00408c34 @ 0x00408c34

void FUN_00408c34(void)

{
  FUN_00408bc0();
  return;
}



// Function: FUN_00408cac @ 0x00408cac

void FUN_00408cac(void)

{
  undefined *in_stack_00000004;
  undefined *in_stack_00000008;
  
  PTR_LAB_0040c390 = in_stack_00000004;
  PTR_LAB_0040c394 = in_stack_00000008;
  return;
}



// Function: FUN_00408cc4 @ 0x00408cc4

uint * FUN_00408cc4(void)

{
  uint *puVar1;
  
  puVar1 = FUN_00409440();
  if (puVar1 != (uint *)0x0) {
    FUN_004041a4();
  }
  return puVar1;
}



// Function: FUN_00408d04 @ 0x00408d04

void FUN_00408d04(void)

{
  FUN_0040a648();
  return;
}



// Function: FUN_00408d14 @ 0x00408d14

void FUN_00408d14(void)

{
  FUN_0040a658();
  return;
}



// Function: FUN_00408d24 @ 0x00408d24

void FUN_00408d24(void)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0xc; uVar2 < DAT_0040c3a8; uVar2 = uVar2 + 4) {
    iVar1 = uVar2 * 2 + DAT_0040c3bc;
    *(int *)(iVar1 + -8) = iVar1 + -0xc;
    *(int *)(iVar1 + -4) = iVar1 + -0xc;
  }
  iVar1 = DAT_0040c3a8 * 2 + DAT_0040c3bc;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0;
  return;
}



// Function: FUN_00408d64 @ 0x00408d64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00408d64(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  iVar4 = 0;
  if (in_stack_00000008 < 0x1000) {
    uVar1 = 0xffffffff;
  }
  else {
    in_stack_00000004[2] = 1;
    in_stack_00000004[3] = (uint)in_stack_00000004;
    *in_stack_00000004 = in_stack_00000008;
    in_stack_00000004[1] = in_stack_0000000c;
    in_stack_00000004[0x23] = (uint)DAT_0040c3b4;
    in_stack_00000004[0x24] = 0;
    if (DAT_0040c3b4 == (uint *)0x0) {
      _DAT_0040c3b8 = in_stack_00000004;
    }
    else {
      DAT_0040c3b4[0x24] = (uint)in_stack_00000004;
    }
    DAT_0040c3b4 = in_stack_00000004;
    in_stack_00000004[0x25] = 0;
    puVar3 = in_stack_00000004 + 0x26;
    if (DAT_0040c3bc == (uint *)0x0) {
      uVar5 = DAT_0040c3a8 * 2 + 3 & 0xfffffffc;
      DAT_0040c3bc = in_stack_00000004 + 0x27;
      *puVar3 = uVar5;
      puVar3 = (uint *)((int)puVar3 + uVar5 + 4);
      FUN_00408d24();
      iVar4 = uVar5 + 4;
    }
    uVar5 = (in_stack_00000008 - 0xa0) - iVar4;
    *puVar3 = uVar5 + 1;
    *(undefined4 *)((int)puVar3 + (uVar5 + 1 & 0xfffffffc) + 4) = 2;
    puVar2 = PTR_DAT_0040c3cc;
    if (uVar5 < DAT_0040c3a8) {
      puVar2 = (undefined *)((int)DAT_0040c3bc + uVar5 * 2 + -0xc);
    }
    puVar3[1] = *(uint *)(puVar2 + 4);
    puVar3[2] = (uint)puVar2;
    *(uint **)(puVar3[1] + 8) = puVar3;
    *(uint **)(puVar2 + 4) = puVar3;
    *(uint *)((int)puVar3 + uVar5) = uVar5 + 4;
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_00408e64 @ 0x00408e64

undefined4 FUN_00408e64(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  
  uVar4 = in_stack_00000008 & 0xfffff000;
  uVar1 = *in_stack_00000004;
  puVar3 = (uint *)((int)in_stack_00000004 + (uVar1 - 4));
  if (uVar4 < uVar1) {
    if ((*puVar3 & 2) == 0) {
      return 0xffffffff;
    }
    puVar3 = (uint *)((int)puVar3 - *(int *)((int)in_stack_00000004 + (uVar1 - 8)));
    if ((*puVar3 & 0xfffffffc) - 0xc < uVar1 - uVar4) {
      return 0xffffffff;
    }
    *puVar3 = *puVar3 - (uVar1 - uVar4);
    *(uint *)((int)puVar3 + (*puVar3 & 0xfffffffc)) = (*puVar3 & 0xfffffffc) + 4;
    *(undefined4 *)((int)puVar3 + (*puVar3 & 0xfffffffc) + 4) = 2;
    if ((*puVar3 & 0xfffffffc) < DAT_0040c3a8) {
      uVar1 = puVar3[1];
      *(uint *)(uVar1 + 8) = puVar3[2];
      *(uint *)(puVar3[2] + 4) = uVar1;
      puVar3[1] = *(uint *)(DAT_0040c3bc + -8 + (*puVar3 & 0xfffffffc) * 2);
      puVar3[2] = ((*puVar3 & 0xfffffffc) * 2 + DAT_0040c3bc) - 0xc;
      *(uint **)(puVar3[1] + 8) = puVar3;
      *(uint **)(DAT_0040c3bc + -8 + (*puVar3 & 0xfffffffc) * 2) = puVar3;
    }
  }
  else {
    uVar2 = *in_stack_00000004;
    *puVar3 = *puVar3 + (uVar4 - uVar2) + -4;
    *(undefined4 *)((int)in_stack_00000004 + (*puVar3 & 0xfffffffc) + uVar1) = 0;
    FUN_0040932c();
    *in_stack_00000004 = *in_stack_00000004 + (uVar4 - uVar2);
  }
  return 0;
}



// Function: FUN_00408f50 @ 0x00408f50

undefined4 FUN_00408f50(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_00000004;
  int local_c;
  int local_8;
  
  uVar5 = in_stack_00000004 + 0xfffU & 0xfffff000;
  if (DAT_0040c3d0 == 0) {
    DAT_0040c3d0 = FUN_00409740();
  }
  piVar1 = DAT_0040c3b4;
  if (DAT_0040c3bc == 0) {
    uVar5 = uVar5 + (DAT_0040c3a8 * 2 + 0x109fU & 0xfffff000);
  }
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x23]) {
    if (uVar5 < (uint)(piVar1[1] - *piVar1)) {
      iVar3 = DAT_0040c3a0;
      if ((uint)(DAT_0040c3d4 + DAT_0040c39c) < DAT_0040c3d0) {
        iVar3 = DAT_0040c39c;
      }
      iVar2 = DAT_0040c3a0;
      if ((uint)(DAT_0040c3d4 + DAT_0040c39c) < DAT_0040c3d0) {
        iVar2 = DAT_0040c39c;
      }
      if ((uint)piVar1[1] < (iVar3 + -1 + uVar5 & ~(iVar2 - 1U)) + *piVar1) {
        iVar3 = piVar1[1];
      }
      else {
        iVar3 = DAT_0040c3a0;
        if ((uint)(DAT_0040c3d4 + DAT_0040c39c) < DAT_0040c3d0) {
          iVar3 = DAT_0040c39c;
        }
        iVar2 = DAT_0040c3a0;
        if ((uint)(DAT_0040c3d4 + DAT_0040c39c) < DAT_0040c3d0) {
          iVar2 = DAT_0040c39c;
        }
        iVar3 = (iVar3 + -1 + uVar5 & ~(iVar2 - 1U)) + *piVar1;
      }
      iVar2 = FUN_0040985c();
      if (iVar2 != 0) {
        DAT_0040c3d4 = DAT_0040c3d4 + (iVar3 - *piVar1);
        FUN_00408e64();
        return 0;
      }
      iVar3 = FUN_0040985c();
      if (iVar3 != 0) {
        DAT_0040c3d4 = DAT_0040c3d4 + 0x1000;
        FUN_00408e64();
        return 0;
      }
      return 0xffffffff;
    }
  }
  iVar3 = FUN_004097f0();
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = DAT_0040c3a0;
    if ((uint)(DAT_0040c3d4 + DAT_0040c39c) < DAT_0040c3d0) {
      iVar3 = DAT_0040c39c;
    }
    iVar2 = DAT_0040c3a0;
    if ((uint)(DAT_0040c3d4 + DAT_0040c39c) < DAT_0040c3d0) {
      iVar2 = DAT_0040c39c;
    }
    uVar5 = uVar5 + iVar3 + 0xfff & ~(iVar2 - 1U);
    for (piVar1 = DAT_0040c3b4; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x23]) {
      if ((piVar1[1] + (int)piVar1 == local_8) && (piVar1[2] < 0x20)) {
        iVar3 = piVar1[1] - *piVar1;
        if (iVar3 != 0) {
          iVar2 = FUN_0040985c();
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          DAT_0040c3d4 = DAT_0040c3d4 + iVar3;
          FUN_00408e64();
        }
        iVar2 = FUN_0040985c();
        if (iVar2 != 0) {
          DAT_0040c3d4 = DAT_0040c3d4 + (uVar5 - iVar3);
          iVar3 = piVar1[2];
          piVar1[2] = piVar1[2] + 1;
          piVar1[iVar3 + 3] = local_8;
          piVar1[1] = piVar1[1] + local_c;
          FUN_00408e64();
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_0040985c();
    if (iVar3 == 0) {
      FUN_004098d4();
      uVar4 = 0xffffffff;
    }
    else {
      DAT_0040c3d4 = DAT_0040c3d4 + uVar5;
      FUN_00408d64();
      uVar4 = 0;
    }
  }
  return uVar4;
}



// Function: FUN_00409228 @ 0x00409228

undefined4 FUN_00409228(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint *in_stack_00000004;
  
  uVar4 = DAT_0040c3b0;
  if (DAT_0040c3d4 < DAT_0040c3d0) {
    uVar4 = DAT_0040c3ac;
  }
  if (uVar4 <= *in_stack_00000004 - 0xc) {
    for (piVar3 = DAT_0040c3b4; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x23]) {
      if ((int)in_stack_00000004 + (*in_stack_00000004 & 0xfffffffc) + 4 ==
          (int)piVar3 + *piVar3 + -4) {
        iVar5 = *piVar3 - (*in_stack_00000004 - 0xc & ~(uVar4 - 1));
        FUN_00408e64();
        while ((uint)(iVar5 + (int)piVar3) <= (uint)piVar3[piVar3[2] + 2]) {
          piVar3[2] = piVar3[2] + -1;
          iVar1 = piVar3[piVar3[2] + 3];
          iVar2 = *piVar3;
          FUN_004098b0();
          DAT_0040c3d4 = DAT_0040c3d4 - (iVar2 - (iVar1 - (int)piVar3));
          FUN_004098d4();
          iVar1 = piVar3[piVar3[2] + 3];
          piVar3[1] = iVar1 - (int)piVar3;
          *piVar3 = iVar1 - (int)piVar3;
        }
        FUN_004098b0();
        DAT_0040c3d4 = DAT_0040c3d4 - (*piVar3 - iVar5);
        *piVar3 = iVar5;
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_0040932c @ 0x0040932c

void FUN_0040932c(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    FUN_00408d04();
    puVar2 = (uint *)(in_stack_00000004 + -4);
    uVar3 = *puVar2;
    if ((uVar3 & 2) == 0) {
      *puVar2 = *puVar2 | 1;
    }
    else {
      puVar2 = (uint *)((int)puVar2 - *(int *)(in_stack_00000004 + -8));
      *puVar2 = *puVar2 + (uVar3 & 0xfffffffc) + 4;
      if (puVar2 == (uint *)PTR_DAT_0040c3cc) {
        PTR_DAT_0040c3cc = *(undefined **)(PTR_DAT_0040c3cc + 4);
      }
      uVar3 = puVar2[1];
      *(uint *)(uVar3 + 8) = puVar2[2];
      *(uint *)(puVar2[2] + 4) = uVar3;
    }
    uVar3 = *puVar2 & 0xfffffffc;
    puVar4 = (uint *)((int)puVar2 + uVar3 + 4);
    if ((*puVar4 & 1) != 0) {
      *puVar2 = *puVar2 + (*puVar4 & 0xfffffffc) + 4;
      if (puVar4 == (uint *)PTR_DAT_0040c3cc) {
        PTR_DAT_0040c3cc = *(undefined **)((int)puVar2 + uVar3 + 8);
      }
      iVar1 = *(int *)((int)puVar2 + uVar3 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)puVar2 + uVar3 + 0xc);
      *(int *)(*(int *)((int)puVar2 + uVar3 + 0xc) + 4) = iVar1;
    }
    puVar4 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4);
    *puVar4 = *puVar4 | 2;
    uVar3 = *puVar2 & 0xfffffffc;
    if (uVar3 < DAT_0040c3a8) {
      uVar5 = (uVar3 * 2 + DAT_0040c3bc) - 0xc;
    }
    else {
      uVar5 = *(uint *)(PTR_DAT_0040c3cc + 4);
    }
    puVar2[1] = *(uint *)(uVar5 + 4);
    puVar2[2] = uVar5;
    *(uint **)(puVar2[1] + 8) = puVar2;
    *(uint **)(uVar5 + 4) = puVar2;
    *(uint *)((int)puVar2 + uVar3) = uVar3 + 4;
    if (*(int *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4) == 2) {
      uVar3 = DAT_0040c3b0;
      if (DAT_0040c3d4 < DAT_0040c3d0) {
        uVar3 = DAT_0040c3ac;
      }
      if (uVar3 < *puVar2) {
        FUN_00409228();
      }
    }
    FUN_00408d14();
  }
  return;
}



// Function: FUN_00409440 @ 0x00409440

/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint * FUN_00409440(void)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    FUN_00408d04();
    if (in_stack_00000004 < 0xc) {
      uVar7 = 0xc;
    }
    else {
      uVar7 = in_stack_00000004 + 3 & 0xfffffffc;
    }
    if (DAT_0040c3bc == 0) {
      FUN_00408f50();
    }
    puVar1 = PTR_DAT_0040c3cc;
    puVar5 = (uint *)PTR_DAT_0040c3cc;
    if (uVar7 < DAT_0040c3a8) {
      iVar3 = uVar7 * 2 + DAT_0040c3bc;
      puVar2 = *(uint **)(iVar3 + -8);
      if ((uint *)(iVar3 + -0xc) != puVar2) {
        *puVar2 = *puVar2 & 0xfffffffe;
        puVar5 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 4);
        *puVar5 = *puVar5 & 0xfffffffd;
        uVar7 = puVar2[1];
        *(uint *)(uVar7 + 8) = puVar2[2];
        *(uint *)(puVar2[2] + 4) = uVar7;
        FUN_00408d14();
        return puVar2 + 1;
      }
      if ((undefined4 *)PTR_DAT_0040c3cc == &DAT_0040c3c0) {
        puVar5 = (uint *)PTR_DAT_0040c3c4;
      }
      if ((undefined4 *)PTR_DAT_0040c3c4 == &DAT_0040c3c0) {
        for (iVar3 = uVar7 * 2 + DAT_0040c3bc + -4;
            (((iVar4 = iVar3, iVar3 == *(int *)(iVar3 + 4) &&
              (iVar4 = iVar3 + 8, iVar4 == *(int *)(iVar3 + 0xc))) &&
             ((iVar4 = iVar3 + 0x10, iVar4 == *(int *)(iVar3 + 0x14) &&
              ((((iVar4 = iVar3 + 0x18, iVar4 == *(int *)(iVar3 + 0x1c) &&
                 (iVar4 = iVar3 + 0x20, iVar4 == *(int *)(iVar3 + 0x24))) &&
                (iVar4 = iVar3 + 0x28, iVar4 == *(int *)(iVar3 + 0x2c))) &&
               ((iVar4 = iVar3 + 0x30, iVar4 == *(int *)(iVar3 + 0x34) &&
                (iVar4 = iVar3 + 0x38, iVar4 == *(int *)(iVar3 + 0x3c))))))))) &&
            (((iVar4 = iVar3 + 0x40, iVar4 == *(int *)(iVar3 + 0x44) &&
              ((iVar4 = iVar3 + 0x48, iVar4 == *(int *)(iVar3 + 0x4c) &&
               (iVar4 = iVar3 + 0x50, iVar4 == *(int *)(iVar3 + 0x54))))) &&
             (((iVar4 = iVar3 + 0x58, iVar4 == *(int *)(iVar3 + 0x5c) &&
               (((iVar4 = iVar3 + 0x60, iVar4 == *(int *)(iVar3 + 100) &&
                 (iVar4 = iVar3 + 0x68, iVar4 == *(int *)(iVar3 + 0x6c))) &&
                (iVar4 = iVar3 + 0x70, iVar4 == *(int *)(iVar3 + 0x74))))) &&
              (iVar4 = iVar3 + 0x78, iVar4 == *(int *)(iVar3 + 0x7c))))))); iVar3 = iVar3 + 0x80) {
        }
        puVar5 = (uint *)PTR_DAT_0040c3cc;
        if (*(uint **)(iVar4 + 4) != (uint *)0x0) {
          puVar5 = *(uint **)(iVar4 + 4);
        }
      }
    }
    else {
      uVar9 = *(uint *)PTR_DAT_0040c3cc;
      if (uVar9 < uVar7) {
        *(undefined4 *)PTR_DAT_0040c3cc = 0xfffffffd;
        puVar5 = *(uint **)(puVar1 + 4);
        while ((((((*puVar5 < uVar7 && (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                  (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                 (((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                   (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                  ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                   ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                    (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)))))))) &&
                ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                 (((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                   (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                  (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)))))) &&
               (((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                 (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7)) &&
                ((puVar5 = (uint *)puVar5[1], *puVar5 < uVar7 &&
                 (puVar5 = (uint *)puVar5[1], *puVar5 < uVar7))))))) {
          puVar5 = (uint *)puVar5[1];
        }
        *(uint *)PTR_DAT_0040c3cc = uVar9;
        if (puVar5 == (uint *)PTR_DAT_0040c3cc) {
          puVar5 = &DAT_0040c3c0;
        }
      }
    }
    if (puVar5 == &DAT_0040c3c0) {
      iVar3 = FUN_00408f50();
      if (iVar3 == 0) {
        FUN_00408d14();
        puVar2 = FUN_00409440();
      }
      else {
        FUN_00408d14();
        puVar2 = (uint *)0x0;
      }
    }
    else {
      uVar9 = *puVar5;
      uVar8 = (uVar9 & 0xfffffffc) - uVar7;
      if (uVar8 < 0x10) {
        *puVar5 = *puVar5 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar5 + (*puVar5 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        if (DAT_0040c3a8 <= (uVar9 & 0xfffffffc)) {
          PTR_DAT_0040c3cc = (undefined *)puVar5[1];
        }
        uVar7 = puVar5[1];
        puVar2 = puVar5 + 1;
        *(uint *)(uVar7 + 8) = puVar5[2];
        *(uint *)(puVar5[2] + 4) = uVar7;
        FUN_00408d14();
      }
      else {
        uVar9 = uVar8 - 4;
        *puVar5 = uVar7;
        piVar6 = (int *)((int)puVar5 + uVar7 + 4);
        *piVar6 = uVar8 - 3;
        *(uint *)((int)piVar6 + uVar9) = uVar8;
        if (uVar9 < DAT_0040c3a8) {
          iVar3 = uVar9 * 2 + DAT_0040c3bc;
          *(undefined4 *)((int)puVar5 + uVar7 + 8) = *(undefined4 *)(iVar3 + -8);
          *(int *)((int)puVar5 + uVar7 + 0xc) = iVar3 + -0xc;
          *(int **)(*(int *)((int)puVar5 + uVar7 + 8) + 8) = piVar6;
          *(int **)(iVar3 + -8) = piVar6;
          if (puVar5 == (uint *)PTR_DAT_0040c3cc) {
            PTR_DAT_0040c3cc = (undefined *)puVar5[1];
          }
          uVar7 = puVar5[1];
          *(uint *)(uVar7 + 8) = puVar5[2];
          *(uint *)(puVar5[2] + 4) = uVar7;
        }
        else {
          uVar9 = puVar5[2];
          *(int **)(uVar9 + 4) = piVar6;
          *(uint *)((int)puVar5 + uVar7 + 0xc) = uVar9;
          uVar9 = puVar5[1];
          *(int **)(uVar9 + 8) = piVar6;
          *(uint *)((int)puVar5 + uVar7 + 8) = uVar9;
          PTR_DAT_0040c3cc = (undefined *)piVar6;
        }
        puVar2 = puVar5 + 1;
        FUN_00408d14();
      }
    }
  }
  return puVar2;
}



// Function: FUN_00409740 @ 0x00409740

SIZE_T FUN_00409740(void)

{
  _MEMORYSTATUS local_20;
  
  local_20.dwLength = 0x20;
  GlobalMemoryStatus(&local_20);
  return local_20.dwAvailPhys;
}



// Function: FUN_00409758 @ 0x00409758

void FUN_00409758(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar4 = DAT_0040c3b4;
  piVar1 = DAT_0040c3d8;
  while (piVar3 = piVar4, piVar1 != (int *)0x0) {
    piVar1 = (int *)piVar3[0x23];
    piVar3[2] = piVar3[2] + -1;
    iVar6 = piVar3[2];
    piVar5 = piVar3 + iVar6 + 3;
    for (; piVar4 = piVar1, -1 < iVar6; iVar6 = iVar6 + -1) {
      iVar2 = *piVar5;
      piVar3[1] = iVar2 - (int)piVar3;
      *piVar3 = iVar2 - (int)piVar3;
      FUN_004098b0();
      FUN_004098d4();
      piVar5 = piVar5 + -1;
    }
  }
  return;
}



// Function: FUN_004097d0 @ 0x004097d0

void FUN_004097d0(void)

{
  FUN_0040932c();
  return;
}



// Function: FUN_004097e0 @ 0x004097e0

void FUN_004097e0(void)

{
  FUN_004097d0();
  return;
}



// Function: FUN_004097f0 @ 0x004097f0

undefined4 FUN_004097f0(void)

{
  LPVOID pvVar1;
  uint dwSize;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint *in_stack_0000000c;
  
  if (DAT_0040c3f0 == 0) {
    if ((DAT_0040cb80 == 1) || (DAT_0040cb80 == 2)) {
      DAT_0040c3f0 = 0x100000;
    }
    else {
      DAT_0040c3f0 = 0x400000;
    }
  }
  dwSize = (in_stack_00000004 + DAT_0040c3f0) - 1U & ~(DAT_0040c3f0 - 1U);
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *in_stack_00000008 = pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    return 0;
  }
  *in_stack_0000000c = dwSize;
  return 1;
}



// Function: FUN_0040985c @ 0x0040985c

undefined4 FUN_0040985c(void)

{
  LPVOID pvVar1;
  LPVOID in_stack_00000004;
  int in_stack_00000008;
  
  while( true ) {
    if (in_stack_00000008 == 0) {
      return 1;
    }
    pvVar1 = VirtualAlloc(in_stack_00000004,0x1000,0x1000,4);
    if (pvVar1 == (LPVOID)0x0) break;
    in_stack_00000004 = (LPVOID)((int)in_stack_00000004 + 0x1000);
    in_stack_00000008 = in_stack_00000008 + -0x1000;
  }
  FUN_004098b0();
  return 0;
}



// Function: FUN_004098b0 @ 0x004098b0

undefined4 FUN_004098b0(void)

{
  BOOL BVar1;
  LPVOID in_stack_00000004;
  SIZE_T in_stack_00000008;
  
  BVar1 = VirtualFree(in_stack_00000004,in_stack_00000008,0x4000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}



// Function: FUN_004098d4 @ 0x004098d4

undefined4 FUN_004098d4(void)

{
  BOOL BVar1;
  LPVOID in_stack_00000004;
  
  BVar1 = VirtualFree(in_stack_00000004,0,0x8000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}



// Function: FUN_004098f8 @ 0x004098f8

uint * FUN_004098f8(void)

{
  uint *puVar1;
  
  puVar1 = FUN_0040a424();
  return puVar1 + 3;
}



// Function: FUN_00409918 @ 0x00409918

undefined4 FUN_00409918(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  WNDENUMPROC lpfn;
  int *lParam;
  int local_4;
  
  lParam = &local_4;
  local_4 = 0;
  DVar1 = GetVersion();
  if ((DVar1 & 0x80000000) == 0) {
    return 0x2000;
  }
  lpfn = (WNDENUMPROC)&LAB_00409904;
  DVar1 = GetCurrentThreadId();
  EnumThreadWindows(DVar1,lpfn,(LPARAM)lParam);
  uVar2 = 0x2000;
  if (local_4 == 0) {
    uVar2 = 0x1000;
  }
  return uVar2;
}



// Function: FUN_00409960 @ 0x00409960

void FUN_00409960(void)

{
  char *pcVar1;
  uint uVar2;
  HANDLE hFile;
  DWORD nNumberOfBytesToWrite;
  LPCSTR lpCaption;
  LPCSTR in_stack_00000004;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_58 [80];
  DWORD local_8;
  
  if (DAT_0040c3f4 == (char *)0x0) {
    if (DAT_0040b059 != '\0') {
      GetModuleFileNameA((HMODULE)0x0,local_58,0x50);
      pcVar1 = FUN_004042e4();
      if ((pcVar1 == (char *)0x0) && (pcVar1 = FUN_004042e4(), pcVar1 == (char *)0x0)) {
        lpCaption = local_58;
      }
      else {
        lpCaption = pcVar1 + 1;
      }
      uVar2 = FUN_00409918();
      MessageBoxA((HWND)0x0,in_stack_00000004,lpCaption,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_0040c3f8,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = FUN_0040423c();
    WriteFile(hFile,in_stack_00000004,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_0040c3fb,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_0040c3f4 == (char *)0xffffffff) {
    return;
  }
  if (DAT_0040c3f4 == (char *)0x0) {
    return;
  }
  if (*DAT_0040c3f4 == '\0') {
    return;
  }
  FUN_00409ac8();
  return;
}



// Function: FUN_00409a40 @ 0x00409a40

void FUN_00409a40(void)

{
  FUN_00409960();
  return;
}



// Function: FUN_00409a50 @ 0x00409a50

void FUN_00409a50(void)

{
  FUN_00409960();
  FUN_00409c2c();
  return;
}



// Function: FUN_00409a68 @ 0x00409a68

undefined * FUN_00409a68(void)

{
  FUN_0040a6bc();
  FUN_0040a6e8();
  FUN_004072ec();
  return &DAT_0040cb68;
}



// Function: FUN_00409ac8 @ 0x00409ac8

void FUN_00409ac8(void)

{
  int iVar1;
  
  iVar1 = FUN_004088f4();
  if (iVar1 != -1) {
    FUN_00409a68();
    FUN_0040423c();
    FUN_00408070();
    FUN_0040423c();
    FUN_00408070();
    FUN_004087c8();
  }
  return;
}



// Function: FUN_00409b78 @ 0x00409b78

void FUN_00409b78(void)

{
  FUN_00409960();
  FUN_00409c2c();
  return;
}



// Function: FUN_00409b8c @ 0x00409b8c

void FUN_00409b8c(void)

{
  FUN_00409eec();
  FUN_00409b78();
  return;
}



// Function: FUN_00409b9c @ 0x00409b9c

void FUN_00409b9c(void)

{
  return;
}



// Function: FUN_00409ba0 @ 0x00409ba0

void FUN_00409ba0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  FUN_0040a22c();
  if (in_stack_00000004 == 0) {
    while (DAT_0040c46c != 0) {
      DAT_0040c46c = DAT_0040c46c + -1;
      (**(code **)(&DAT_0040cb84 + DAT_0040c46c * 4))();
    }
    FUN_0040a1a4();
    (*(code *)PTR_FUN_0040c470)();
  }
  if (in_stack_00000008 == 0) {
    if (in_stack_00000004 == 0) {
      (*(code *)PTR_FUN_0040c474)();
      (*(code *)PTR_FUN_0040c478)();
    }
    FUN_0040a23c();
    FUN_0040825c();
    FUN_0040754c();
    FUN_0040a21c();
  }
  FUN_0040a23c();
  return;
}



// Function: FUN_00409c14 @ 0x00409c14

void FUN_00409c14(void)

{
  FUN_00409ba0();
  return;
}



// Function: FUN_00409c2c @ 0x00409c2c

void FUN_00409c2c(void)

{
  FUN_00409ba0();
  return;
}



// Function: FUN_00409c68 @ 0x00409c68

void FUN_00409c68(void)

{
  return;
}



// Function: FUN_00409c6c @ 0x00409c6c

int FUN_00409c6c(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000004;
  
  iVar1 = 0;
  piVar2 = &DAT_0040c4ac;
  do {
    if (in_stack_00000004 == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 10);
  return -1;
}



// Function: FUN_00409c8c @ 0x00409c8c

undefined4 FUN_00409c8c(void)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *in_stack_00000004;
  int in_stack_0000000c;
  
  puVar3 = FUN_0040a424();
  if ((puVar3 != (uint *)0x0) && (uVar1 = puVar3[10], uVar1 != 0)) {
    uVar6 = 0;
    iVar5 = *in_stack_00000004;
    if (iVar5 < -0x3fffff6e) {
      if (iVar5 == -0x3fffff6f) {
        iVar5 = 2;
        uVar6 = 8;
      }
      else if (iVar5 == -0x3ffffffb) {
        iVar5 = 3;
      }
      else if (iVar5 == -0x3fffffe3) {
        iVar5 = 1;
      }
      else if (iVar5 == -0x3fffff72) {
        iVar5 = 2;
        uVar6 = 4;
      }
      else {
        if (iVar5 != -0x3fffff70) {
          return 1;
        }
        iVar5 = 2;
        uVar6 = 1;
      }
    }
    else if (iVar5 == -0x3fffff6e) {
      iVar5 = 2;
      uVar6 = 0x49;
    }
    else if (iVar5 == -0x3fffff6d) {
      iVar5 = 2;
      uVar6 = 0x10;
    }
    else if (iVar5 == -0x3fffff6c) {
      iVar5 = 2;
    }
    else {
      if (iVar5 != -0x3fffff6a) {
        return 1;
      }
      iVar5 = 1;
    }
    pcVar2 = *(code **)(uVar1 + iVar5 * 4);
    if (pcVar2 == (code *)0x1) {
      uVar4 = 0;
    }
    else if (pcVar2 == (code *)0x0) {
      uVar4 = 1;
    }
    else {
      *(undefined4 *)(uVar1 + iVar5 * 4) = 0;
      if (((iVar5 == 1) || (iVar5 == 3)) || (iVar5 == 2)) {
        FUN_00408b3c();
        FUN_00408b50();
        (*pcVar2)();
        *(uint *)(in_stack_0000000c + 0x20) = *(uint *)(in_stack_0000000c + 0x20) & ~uVar6;
      }
      else {
        (*pcVar2)();
      }
      uVar4 = 0;
    }
    return uVar4;
  }
  return 1;
}



// Function: FUN_00409e14 @ 0x00409e14

undefined4 FUN_00409e14(void)

{
  FUN_00409eec();
  return 1;
}



// Function: FUN_00409e38 @ 0x00409e38

uint FUN_00409e38(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int in_stack_00000004;
  uint in_stack_00000008;
  
  if (DAT_0040c480 == '\0') {
    DAT_0040c9ac = FUN_00409c8c;
    SetConsoleCtrlHandler(FUN_00409e14,1);
    DAT_0040c480 = '\x01';
  }
  iVar1 = FUN_00409c6c();
  if (iVar1 == -1) {
    puVar2 = FUN_004098f8();
    *puVar2 = 0x13;
    uVar3 = 0xffffffff;
  }
  else {
    if ((in_stack_00000004 == 2) || (in_stack_00000004 == 0x15)) {
      puVar2 = (uint *)&DAT_0040c484;
    }
    else {
      puVar4 = FUN_0040a424();
      if (puVar4 == (uint *)0x0) {
        return 0xffffffff;
      }
      puVar2 = (uint *)puVar4[10];
      if (puVar2 == (uint *)0x0) {
        puVar2 = FUN_00409440();
        if (puVar2 == (uint *)0x0) {
          puVar2 = FUN_004098f8();
          *puVar2 = 8;
          return 0xffffffff;
        }
        iVar6 = 0;
        puVar5 = puVar2;
        do {
          iVar6 = iVar6 + 1;
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        } while (iVar6 < 10);
        puVar4[10] = (uint)puVar2;
      }
    }
    uVar3 = puVar2[iVar1];
    puVar2[iVar1] = in_stack_00000008;
  }
  return uVar3;
}



// Function: FUN_00409eec @ 0x00409eec

undefined4 FUN_00409eec(void)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int in_stack_00000004;
  
  if ((in_stack_00000004 == 2) || (in_stack_00000004 == 0x15)) {
    puVar5 = &DAT_0040c484;
  }
  else {
    puVar2 = FUN_0040a424();
    if ((puVar2 == (uint *)0x0) || (puVar5 = (undefined *)puVar2[10], puVar5 == (undefined *)0x0)) {
      return 1;
    }
  }
  iVar3 = FUN_00409c6c();
  if (iVar3 == -1) {
    uVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(puVar5 + iVar3 * 4);
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0x0) {
        if ((1 < in_stack_00000004 - 0x10U) && (in_stack_00000004 != 0x14)) {
          if (in_stack_00000004 == 0x16) {
            FUN_00409b78();
          }
          else {
            FUN_00409c2c();
          }
        }
      }
      else {
        *(undefined4 *)(puVar5 + iVar3 * 4) = 0;
        if ((&DAT_0040c4d4)[iVar3] == '\0') {
          (*pcVar1)(pcVar1,0,in_stack_00000004);
        }
        else {
          (*pcVar1)();
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// Function: FUN_00409f88 @ 0x00409f88

undefined4 FUN_00409f88(void)

{
  return 0;
}



// Function: FUN_00409f8c @ 0x00409f8c

undefined4 FUN_00409f8c(void)

{
  return 0;
}



// Function: FUN_00409f90 @ 0x00409f90

undefined4 FUN_00409f90(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int *in_stack_00000004;
  uint in_stack_00000008;
  int *local_10;
  int local_c;
  char *local_8;
  
  uVar4 = 0;
  if (in_stack_00000008 == 0) {
    uVar4 = 0xffff;
  }
  local_8 = (char *)0x0;
  local_10 = in_stack_00000004;
  for (local_c = 0; local_10 = local_10 + 1, local_c < *in_stack_00000004; local_c = local_c + 1) {
    puVar1 = (undefined4 *)*local_10;
    if (in_stack_00000008 == 0) {
      pcVar2 = (char *)*puVar1;
      pcVar5 = (char *)puVar1[1];
    }
    else {
      pcVar2 = (char *)puVar1[2];
      pcVar5 = (char *)puVar1[3];
    }
    for (; (pcVar2 < pcVar5 && (*(int *)(pcVar2 + 2) != 0)); pcVar2 = pcVar2 + 6) {
      if ((*pcVar2 == '\0') && (in_stack_00000008 == uVar4 <= (byte)pcVar2[1])) {
        uVar4 = (uint)(byte)pcVar2[1];
        local_8 = pcVar2;
      }
    }
  }
  if (local_8 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    *local_8 = '\x01';
    uVar3 = *(undefined4 *)(local_8 + 2);
  }
  return uVar3;
}



// Function: FUN_0040a03c @ 0x0040a03c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a03c(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int in_stack_00000004;
  int local_10;
  undefined1 local_c [8];
  
  _DAT_0040cc34 = *(uint *)(in_stack_00000004 + 0x10) & 1;
  FUN_00408b90();
  FUN_00408cac();
  FUN_004068a4();
  _DAT_0040cc28 = 1;
  _DAT_0040cc2c = in_stack_00000004;
  DAT_0040cc0c = local_c;
  FUN_004065ec();
  DAT_0040cc10 = GetEnvironmentStrings();
  DAT_0040cc14 = GetCommandLineA();
  FUN_00409c68();
  piVar2 = (int *)FUN_00409f88();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    while (pcVar3 = (code *)FUN_00409f90(), pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    piVar5 = piVar2;
    for (local_10 = 0; piVar5 = piVar5 + 1, local_10 < *piVar2; local_10 = local_10 + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  while (pcVar3 = (code *)FUN_00409f90(), pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  pcVar6 = DAT_0040cc14;
  if ((*(byte *)(in_stack_00000004 + 0x10) & 1) == 0) {
    (**(code **)(in_stack_00000004 + 0x18))();
    FUN_00409c14();
  }
  else {
    for (; (*pcVar6 == ' ' || (*pcVar6 == '\t')); pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      cVar4 = '\"';
      pcVar6 = pcVar6 + 1;
    }
    else {
      cVar4 = ' ';
    }
    for (; ((cVar1 = *pcVar6, cVar1 != '\0' && (cVar4 != cVar1)) && (cVar1 != '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      pcVar6 = pcVar6 + 1;
    }
    for (; ((cVar4 = *pcVar6, cVar4 != '\0' && (cVar4 == ' ')) || (cVar4 == '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    GetModuleHandleA((LPCSTR)0x0);
    (**(code **)(in_stack_00000004 + 0x18))();
    FUN_00409c14();
  }
  return;
}



// Function: FUN_0040a1a4 @ 0x0040a1a4

void FUN_0040a1a4(void)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  while (pcVar1 = (code *)FUN_00409f90(), pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  while (pcVar1 = (code *)FUN_00409f90(), pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  piVar2 = (int *)FUN_00409f8c();
  if (piVar2 != (int *)0x0) {
    while (pcVar1 = (code *)FUN_00409f90(), pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    piVar3 = piVar2;
    for (iVar4 = 0; piVar3 = piVar3 + 1, iVar4 < *piVar2; iVar4 = iVar4 + 1) {
      (**(code **)(*piVar3 + 0x18))();
    }
  }
  return;
}



// Function: FUN_0040a21c @ 0x0040a21c

void FUN_0040a21c(void)

{
  UINT in_stack_00000004;
  
                    /* WARNING: Subroutine does not return */
  ExitProcess(in_stack_00000004);
}



// Function: FUN_0040a22c @ 0x0040a22c

void FUN_0040a22c(void)

{
  FUN_0040a648();
  return;
}



// Function: FUN_0040a23c @ 0x0040a23c

void FUN_0040a23c(void)

{
  FUN_0040a658();
  return;
}



// Function: FUN_0040a260 @ 0x0040a260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040a260(void)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int in_stack_00000004;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 local_10;
  
  iVar1 = DAT_0040cc38;
  if (in_stack_00000010 == 1) {
    DAT_0040cc38 = DAT_0040cc38 + 1;
    if (iVar1 == 0) {
      DAT_0040cc10 = GetEnvironmentStrings();
      _DAT_0040b062 = in_stack_0000000c;
      if (((DAT_0040c47c == 0) || (piVar2 = (int *)FUN_00409f88(), piVar2 == (int *)0x0)) ||
         (piVar2[*piVar2 + 1] == -1)) {
        DAT_0040c47c = 0;
        while (pcVar3 = (code *)FUN_00409f90(), pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
        local_10 = (**(code **)(in_stack_00000004 + 0x18))();
      }
      else {
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + 1;
        piVar2[iVar1 + 1] = in_stack_00000004;
      }
    }
  }
  else if (in_stack_00000010 == 0) {
    DAT_0040cc38 = DAT_0040cc38 + -1;
    if ((DAT_0040cc38 == 0) &&
       (local_10 = (**(code **)(in_stack_00000004 + 0x18))(), DAT_0040c47c == 0)) {
      while (pcVar3 = (code *)FUN_00409f90(), pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
    }
    if ((DAT_0040cc38 == 0) && (DAT_0040cc10 != (LPCH)0x0)) {
      FreeEnvironmentStringsA(DAT_0040cc10);
      DAT_0040cc10 = (LPCH)0x0;
    }
  }
  else {
    local_10 = (**(code **)(in_stack_00000004 + 0x18))();
  }
  return local_10;
}



// Function: FUN_0040a380 @ 0x0040a380

undefined4 FUN_0040a380(void)

{
  return 1;
}



// Function: FUN_0040a38c @ 0x0040a38c

void FUN_0040a38c(void)

{
  FUN_0040a380();
  return;
}



// Function: FUN_0040a424 @ 0x0040a424

uint * FUN_0040a424(void)

{
  uint *lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_0040cc44);
  if (lpTlsValue == (uint *)0x0) {
    lpTlsValue = FUN_0040a450();
    TlsSetValue(DAT_0040cc44,lpTlsValue);
  }
  return lpTlsValue;
}



// Function: FUN_0040a450 @ 0x0040a450

uint * FUN_0040a450(void)

{
  uint *puVar1;
  uint *puVar2;
  
  FUN_0040a648();
  if (DAT_0040cc48 == (uint *)0x0) {
    puVar2 = FUN_00409440();
    if (puVar2 != (uint *)0x0) {
      FUN_004041a4();
    }
  }
  else {
    puVar2 = DAT_0040cc48;
    DAT_0040cc48 = (uint *)*DAT_0040cc48;
  }
  if (puVar2 != (uint *)0x0) {
    puVar2[0x11] = 1;
    puVar2[0x12] = 0;
    if (puVar2[0x13] == 0) {
      puVar1 = FUN_00409440();
      puVar2[0x13] = (uint)puVar1;
      if (puVar1 == (uint *)0x0) {
        FUN_0040932c();
        puVar2 = (uint *)0x0;
        goto LAB_0040a4d5;
      }
    }
    FUN_004041a4();
  }
LAB_0040a4d5:
  FUN_0040a658();
  return puVar2;
}



// Function: FUN_0040a4e8 @ 0x0040a4e8

void FUN_0040a4e8(void)

{
  undefined4 *in_stack_00000004;
  
  FUN_0040a648();
  *in_stack_00000004 = DAT_0040cc48;
  DAT_0040cc48 = in_stack_00000004;
  FUN_0040a658();
  return;
}



// Function: FUN_0040a5e4 @ 0x0040a5e4

void FUN_0040a5e4(void)

{
  undefined4 *in_stack_00000004;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0040cc50);
  if (0x1ff < DAT_0040fc50) {
    FUN_0040a668();
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_0040cc50 + DAT_0040fc50 * 0x18));
  *in_stack_00000004 = &DAT_0040cc50 + DAT_0040fc50 * 0x18;
  DAT_0040fc50 = DAT_0040fc50 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0040cc50);
  return;
}



// Function: FUN_0040a648 @ 0x0040a648

void FUN_0040a648(void)

{
  LPCRITICAL_SECTION in_stack_00000004;
  
  EnterCriticalSection(in_stack_00000004);
  return;
}



// Function: FUN_0040a658 @ 0x0040a658

void FUN_0040a658(void)

{
  LPCRITICAL_SECTION in_stack_00000004;
  
  LeaveCriticalSection(in_stack_00000004);
  return;
}



// Function: FUN_0040a668 @ 0x0040a668

void FUN_0040a668(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char local_54 [80];
  
  pcVar2 = s_Semaphore_error_0040c514;
  pcVar3 = local_54;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  FUN_004041d4();
  FUN_00409a50();
  return;
}



// Function: FUN_0040a6bc @ 0x0040a6bc

void FUN_0040a6bc(void)

{
  uint *in_stack_00000004;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  *(undefined1 *)(in_stack_00000004 + 1) = (undefined1)local_14.wDay;
  *(undefined1 *)((int)in_stack_00000004 + 5) = (undefined1)local_14.wMonth;
  *in_stack_00000004 = (uint)local_14.wYear;
  return;
}



// Function: FUN_0040a6e8 @ 0x0040a6e8

void FUN_0040a6e8(void)

{
  undefined1 *in_stack_00000004;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  in_stack_00000004[1] = (undefined1)local_14.wHour;
  *in_stack_00000004 = (undefined1)local_14.wMinute;
  in_stack_00000004[3] = (undefined1)local_14.wSecond;
  in_stack_00000004[2] = (char)((ulonglong)local_14.wMilliseconds / 10);
  return;
}



// Function: FUN_0040a720 @ 0x0040a720

uint * FUN_0040a720(void)

{
  uint *puVar1;
  uint *puVar2;
  int in_stack_00000004;
  
  puVar1 = FUN_0040a424();
  if (puVar1 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = *(uint **)(in_stack_00000004 + (int)puVar1);
    if (puVar2 == (uint *)0x0) {
      puVar2 = FUN_00409440();
      if (puVar2 == (uint *)0x0) {
        puVar2 = (uint *)0x0;
      }
      else {
        *(uint **)(in_stack_00000004 + (int)puVar1) = puVar2;
      }
    }
  }
  return puVar2;
}




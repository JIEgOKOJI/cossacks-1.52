#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_100125e8 = 0;
long long DAT_10012bf8 = 0;
long long DAT_10012c00 = 0;
long long DAT_10012c09 = 0;
long long DAT_10012c12 = 0;
long long DAT_10012c80 = 0;
unsigned char DAT_10012c84[60] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10012cc0 = 0;
long long DAT_10012cc8 = 0;
long long DAT_10012cd0 = 0;
long long DAT_10012cd8 = 0;
long long DAT_10012ce0 = 0;
long long DAT_10012ce8 = 0;
long long DAT_10012cf1 = 0;
int DAT_10012cfa = 0;
long long DAT_10012d00 = 0;
long long DAT_10012d08 = 0;
long long DAT_10012d10 = 0;
long long DAT_10012d18 = 0;
long long DAT_10012fb8 = 0;
long long DAT_10012fc0 = 0;
long long DAT_10012fc8 = 0;
long long DAT_10012fd0 = 0;
long long DAT_10012fd8 = 0;
long long DAT_10012fe0 = 0;
long long DAT_10012fe8 = 0;
long long DAT_10013060 = 0;
long long DAT_10013074 = 0;
long long DAT_100130d8 = 0;
long long DAT_100130ec = 0;
long long DAT_10013150 = 0;
long long DAT_10013164 = 0;
long long DAT_100131c8 = 0;
long long DAT_100131d4 = 0;
long long DAT_10013240 = 0;
long long DAT_1001324c = 0;
long long DAT_100132b8 = 0;
long long DAT_100132c4 = 0;
long long DAT_10022758 = 0;
int DAT_1002275c = 0;
long long DAT_10022760 = 0;
long long DAT_10022764 = 0;
long long DAT_10022778 = 0;
long long DAT_1002277c = 0;
long long DAT_10022790 = 0;
long long DAT_10022794 = 0;
long long DAT_100227a8 = 0;
long long DAT_100227b0 = 0;
int DAT_100227b4 = 0;
long long DAT_100227b8 = 0;
long long DAT_100227bc = 0;
long long DAT_100227d0 = 0;
long long DAT_100227d4 = 0;
long long DAT_100227e8 = 0;
long long DAT_100227f0 = 0;
long long DAT_100227f4 = 0;
long long DAT_10022808 = 0;
long long DAT_10022810 = 0;
long long DAT_10022818 = 0;
long long DAT_1002281c = 0;
long long DAT_10022830 = 0;
long long DAT_10022834 = 0;
long long DAT_10022848 = 0;
long long DAT_1002284c = 0;
long long DAT_10022860 = 0;
long long DAT_10022874 = 0;
long long DAT_100228d8 = 0;
long long DAT_100228ec = 0;
long long DAT_10022950 = 0;
long long DAT_10022964 = 0;
long long DAT_100229c8 = 0;
long long DAT_100229dc = 0;
long long DAT_10022a40 = 0;
long long DAT_10022a54 = 0;
long long DAT_10022ab8 = 0;
long long DAT_10022acc = 0;
long long DAT_10022b30 = 0;
long long DAT_10022b3c = 0;
long long DAT_10022ba8 = 0;
long long DAT_10022bb4 = 0;
long long DAT_10022c20 = 0;
long long DAT_10022c28 = 0;
long long DAT_10022c34 = 0;
long long DAT_10022ca0 = 0;
int DAT_10022ca4 = 0;
long long DAT_10022ca8 = 0;
long long DAT_10023a86 = 0;
long long DAT_10023a8e = 0;
long long DAT_10023bd8 = 0;
long long DAT_10023be0 = 0;
long long DAT_10023be8 = 0;
long long DAT_10023bf0 = 0;
long long DAT_10023bf8 = 0;
long long DAT_10023c00 = 0;
long long DAT_10023c08 = 0;
long long DAT_10023c10 = 0;
long long DAT_10023c18 = 0;
long long DAT_10023c20 = 0;
long long DAT_10023c28 = 0;
long long DAT_10023c30 = 0;
int DAT_10023c34 = 0;
long long DAT_10023c38 = 0;
int DAT_10023c3c = 0;
long long DAT_10023c40 = 0;
long long DAT_10023c48 = 0;
long long DAT_10023c50 = 0;
long long DAT_10023c58 = 0;
long long DAT_10023c60 = 0;
long long DAT_10023c68 = 0;
long long DAT_10023c70 = 0;
long long DAT_10023c78 = 0;
long long DAT_10023c80 = 0;
long long DAT_10023c88 = 0;
long long DAT_10023c90 = 0;
long long DAT_10023c98 = 0;
long long DAT_10023ca0 = 0;
long long DAT_10023ca8 = 0;
long long DAT_10023cb0 = 0;
long long DAT_100279a8 = 0;
long long DAT_100279b8 = 0;
int DAT_1002910c = 0;
int DAT_10029110 = 0;
int DAT_10012c00_ovl = 0;
int DAT_10012cfa_ovl = 0;
int DAT_100279b8_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10003e12() { return 0; }
int FUN_10003efb() { return 0; }
int FUN_10003f4b() { return 0; }
int FUN_1000448c() { return 0; }
int FUN_10004495() { return 0; }
int FUN_100044b8() { return 0; }
int FUN_100047e7() { return 0; }
int FUN_1000a684() { return 0; }
int FUN_1000d1e8() { return 0; }
int FUN_1000d1ec() { return 0; }


/* Forward declarations */
int *  FUN_10001000(int *param_1);
int *  FUN_10001030(void *this_ptr,byte param_1);
void  FUN_10001050(int *param_1);
int *  FUN_10001060(int *param_1);
int *  FUN_10001080(void *this_ptr,byte param_1);
void  FUN_100010a0(int *param_1);
char FUN_100010b0(unsigned int param_1,unsigned int param_2);
void FUN_10001150(int param_1);
void FUN_10001180(int param_1,int param_2,int param_3,int param_4);
void FUN_10001350(void);
void FUN_10001360(void);
void FUN_10001390(void);
void FUN_100013a0(void);
void FUN_100013d0(void);
void FUN_100013e0(void);
void FUN_10001410(void);
void FUN_10001420(void);
void FUN_10001450(void);
void FUN_10001460(void);
void FUN_10001490(void);
void FUN_100014a0(void);
void FUN_100014c0(int param_1);
void FUN_10001510(void);
void FUN_10001520(void);
void FUN_10001540(int param_1);
void FUN_10001580(void);
void FUN_10001590(void);
void FUN_100015c0(void);
void FUN_100015d0(void);
void FUN_10001600(void);
void FUN_10001610(void);
void FUN_10001640(void);
void FUN_10001650(void);
void FUN_100016a0(void);
void FUN_100016b0(void);
void FUN_100016e0(void);
void FUN_100016f0(void);
void FUN_10002ea0(void);
void FUN_10002eb0(void);
int *  FUN_10002f20(void *this_ptr,int param_1,int param_2);
void  FUN_10002f60(void *this_ptr,int param_1);
void  FUN_10002fb0(void *this_ptr,int *param_1);
void  FUN_10002fe0(int param_1);
void FUN_10003130(void);
int *  FUN_10003200(int *param_1);
int *  FUN_10003230(int *param_1);
int *  FUN_10003240(int *param_1);
int *  FUN_100032c0(int *param_1);
int  FUN_100032e0(int param_1);
void 
FUN_10003300(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void  FUN_100033b0(void *this_ptr,int param_1);
void  FUN_100033c0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100033f0(void *this_ptr,int param_1,int param_2,int param_3);
BOOL  FUN_10003420(int param_1);
int  FUN_10003440(int param_1);
void FUN_10003530(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_10003600(int *param_1,int param_2,int param_3,int param_4);
void 
FUN_10003650(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
int *  FUN_10003690(int *param_1);
int  FUN_100036e0(int param_1);
unsigned int  FUN_10003730(void *this_ptr,unsigned int param_1,int param_2,int param_3,int param_4);
void  FUN_10003800(void *this_ptr,int *param_1);
void  FUN_10003aa0(void *this_ptr,int param_1,int param_2);
int  FUN_10003ac0(int param_1);
void FUN_10003ae0(int *param_1);
void FUN_10003aeb(void);
void FUN_10003b03(void);
int FUN_10003b63(int param_1,int param_2);
int FUN_10003b88(int param_1);
int FUN_10003c06(int param_1);

void OnInit();
void ProcessScenary();


int *  FUN_10001000(int *param_1)

{
  *param_1 = &FUN_1000d1e8;
  RegisterVar(param_1,0x14);
  RegisterDynGroup(param_1 + 1);
  return param_1;
}





int *  FUN_10001030(void *this_ptr,byte param_1)

{
  FUN_10001050(this_ptr);
  if ((param_1 & 1) != 0) {
    FUN_10003ae0(this_ptr);
  }
  return this_ptr;
}





void  FUN_10001050(int *param_1)

{
  *param_1 = &FUN_1000d1e8;
  return;
}





int *  FUN_10001060(int *param_1)

{
  *param_1 = &FUN_1000d1ec;
  RegisterVar(param_1,8);
  param_1[1] = 0;
  return param_1;
}





int *  FUN_10001080(void *this_ptr,byte param_1)

{
  FUN_100010a0(this_ptr);
  if ((param_1 & 1) != 0) {
    FUN_10003ae0(this_ptr);
  }
  return this_ptr;
}





void  FUN_100010a0(int *param_1)

{
  *param_1 = &FUN_1000d1ec;
  return;
}





char __cdecl FUN_100010b0(unsigned int param_1,unsigned int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return -0x40;
  }
  iVar3 = (param_1 ^ (intptr_t)param_1 >> 0x1f) - ((intptr_t)param_1 >> 0x1f);
  iVar1 = (param_2 ^ (intptr_t)param_2 >> 0x1f) - ((intptr_t)param_2 >> 0x1f);
  if (iVar1 < iVar3) {
    iVar1 = FUN_10003b63(iVar1 * 0x100,iVar3);
    cVar2 = ((long long *)&DAT_100125e8)[iVar1 * 2];
  }
  else {
    iVar1 = FUN_10003b63(iVar3 * 0x100,iVar1);
    cVar2 = '@' - ((long long *)&DAT_100125e8)[iVar1 * 2];
  }
  if ((intptr_t)param_1 < 0) {
    cVar2 = -0x80 - cVar2;
  }
  if ((intptr_t)param_2 < 0) {
    cVar2 = -cVar2;
  }
  return cVar2;
}





void __cdecl FUN_10001150(int param_1)

{
  int iVar1;
  
  iVar1 = GetNUnits(param_1);
  if (0 < iVar1) {
    do {
      RemoveUnitFromGroup(param_1,0);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}





void __cdecl FUN_10001180(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int uVar2;
  char cVar3;
  int iStack_c;
  unsigned short local_8;
  unsigned short uStack_6;
  
  iVar1 = param_2;
  UnitsCenter(&local_8,param_2,100);
  uVar2 = param_3;
  GetZoneCoor(param_3,&iStack_c,&param_2);
  cVar3 = FUN_100010b0(iStack_c - (unsigned int)local_8,param_2 - (unsigned int)uStack_6);
  param_3 = (int)cVar3;
  SelectUnits(iVar1,0);
  SelSendTo(param_1,uVar2,param_3,param_4);
  return;
}





void FUN_10001350(void)

{
  FUN_10001000((int *)&DAT_10022760);
  return;
}





void FUN_10001360(void)

{
  return;
}





void FUN_10001390(void)

{
  FUN_10001000((int *)&DAT_10022778);
  return;
}





void FUN_100013a0(void)

{
  return;
}





void FUN_100013d0(void)

{
  FUN_10001000((int *)&DAT_10022790);
  return;
}





void FUN_100013e0(void)

{
  return;
}





void FUN_10001410(void)

{
  FUN_10001000((int *)&DAT_10022818);
  return;
}





void FUN_10001420(void)

{
  return;
}





void FUN_10001450(void)

{
  FUN_10001000((int *)&DAT_10022830);
  return;
}





void FUN_10001460(void)

{
  return;
}





void FUN_10001490(void)

{
  FUN_10001000((int *)&DAT_10022848);
  return;
}





void FUN_100014a0(void)

{
  return;
}





void __cdecl FUN_100014c0(int param_1)

{
  if (*(int *)(((unsigned char *)&DAT_10012c84) + param_1 * 8) != 0x554e4954) {
    RegisterDynGroup(((unsigned char *)&DAT_10012c80) + param_1 * 8);
  }
  SaveSelectedUnits(param_1,((unsigned char *)&DAT_10012c80) + param_1 * 8,0);
  ClearSelection(param_1);
  return;
}





void FUN_10001510(void)

{
  FUN_10001000((int *)&DAT_100227b8);
  return;
}





void FUN_10001520(void)

{
  return;
}





void __cdecl FUN_10001540(int param_1)

{
  ClearSelection(param_1);
  SelectUnits(((unsigned char *)&DAT_10012c80) + param_1 * 8,0);
  return;
}





void FUN_10001580(void)

{
  FUN_10001000((int *)&DAT_100227d0);
  return;
}





void FUN_10001590(void)

{
  return;
}





void FUN_100015c0(void)

{
  FUN_10001000((int *)&DAT_100227f0);
  return;
}





void FUN_100015d0(void)

{
  return;
}





void FUN_10001600(void)

{
  FUN_10001060((int *)&DAT_10022758);
  return;
}





void FUN_10001610(void)

{
  return;
}





void FUN_10001640(void)

{
  FUN_10001060((int *)&DAT_10023c38);
  return;
}





void FUN_10001650(void)

{
  return;
}





void FUN_100016a0(void)

{
  FUN_10001060((int *)&DAT_10022ca0);
  return;
}





void FUN_100016b0(void)

{
  return;
}





void FUN_100016e0(void)

{
  FUN_10001060((int *)&DAT_10023c30);
  return;
}





void FUN_100016f0(void)

{
  return;
}





void FUN_10002ea0(void)

{
  FUN_1000a684();
  return;
}





void FUN_10002eb0(void)

{
  return;
}






int *  FUN_10002f20(void *this_ptr,int param_1,int param_2)

{
  RegisterVar(this_ptr,5);
  *(int *)this_ptr = param_1;
  *(char *)((intptr_t)this_ptr + 4) = '\x01' << ((byte)param_1 & 0x1f);
  if (param_2 != 0) {
    SetPlayerName(param_1,param_2);
  }
  return this_ptr;
}





void  FUN_10002f60(void *this_ptr,int param_1)

{
  SetResource(*(char *)this_ptr,3,param_1);
  SetResource(*(char *)this_ptr,0,param_1);
  SetResource(*(char *)this_ptr,2,param_1);
  SetResource(*(char *)this_ptr,1,param_1);
  SetResource(*(char *)this_ptr,4,param_1);
  SetResource(*(char *)this_ptr,5,param_1);
  return;
}





void  FUN_10002fb0(void *this_ptr,int *param_1)

{
  int uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  bVar2 = *(byte *)((intptr_t)this_ptr + 4) | '\x01' << ((byte)uVar1 & 0x1f);
  *(byte *)((intptr_t)this_ptr + 4) = bVar2;
  ChangeFriends(*(char *)this_ptr,(int)bVar2);
  return;
}





void  FUN_10002fe0(int param_1)

{
  *(int *)(param_1 + 800) = 0;
  return;
}





void FUN_10003130(void)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int uVar4;
  
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    uVar2 = rand();
    if (200 < (uVar2 & 0xff)) {
      CreateObject0(&DAT_100279a8,&DAT_10012d10,&DAT_10012fd0,DAT_10012cfa,&DAT_10012ce0,0xff);
      SelectUnits(&DAT_100279a8,0);
      uVar4 = 0;
      iVar3 = rand();
      SelSendTo(DAT_10012cfa,&DAT_10023c28,iVar3,uVar4);
      RemoveGroup(&DAT_100279a8,&DAT_100227e8);
      RunTimer(2,15000);
    }
  }
  return;
}





int *  FUN_10003200(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  *param_1 = 0;
  RegisterDynGroup(param_1 + 3);
  puVar2 = param_1 + 7;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}





int *  FUN_10003230(int *param_1)

{
  FUN_10003200(param_1);
  *(char *)(param_1 + 0xd) = 1;
  return param_1;
}





int *  FUN_10003240(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  FUN_10003230(param_1);
  FUN_10003200((int *)((intptr_t)param_1 + 0x3d));
  FUN_100032e0((intptr_t)param_1 + 0xa9);
  puVar2 = (int *)((intptr_t)param_1 + 0x3e5);
  iVar1 = 100;
  do {
    FUN_10003200(puVar2);
    puVar2 = puVar2 + 0xd;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(int *)((intptr_t)param_1 + 0x185a) = 5;
  *(int *)((intptr_t)param_1 + 0x1835) = 0;
  *(char *)((intptr_t)param_1 + 0x184d) = 0;
  *(int *)((intptr_t)param_1 + 0x184e) = 0;
  *(int *)((intptr_t)param_1 + 0x1852) = 0;
  *(int *)((intptr_t)param_1 + 0x1856) = 0;
  *(int *)((intptr_t)param_1 + 0x185e) = 10;
  RegisterDynGroup((intptr_t)param_1 + 0x1862);
  return param_1;
}





int *  FUN_100032c0(int *param_1)

{
  FUN_10003230(param_1);
  *(char *)((intptr_t)param_1 + 0x41) = 0;
  *(char *)(param_1 + 0xd) = 1;
  return param_1;
}





int  FUN_100032e0(int param_1)

{
  FUN_10002fe0(param_1 + 0x10);
  *(int *)(param_1 + 0x334) = 0;
  return param_1;
}





void 
FUN_10003300(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  RegisterVar(this_ptr,0x74);
  *(int *)this_ptr = param_1;
  RegisterUnits((intptr_t)this_ptr + 4,param_2);
  if (param_3 != 0) {
    RegisterZone((intptr_t)this_ptr + 0xc,param_3);
    SetDestPoint((intptr_t)this_ptr + 4,(intptr_t)this_ptr + 0xc);
  }
  RegisterDynGroup((intptr_t)this_ptr + 0x14);
  RegisterDynGroup((intptr_t)this_ptr + 0x1c);
  RegisterDynGroup((intptr_t)this_ptr + 0x6c);
  *(int *)((intptr_t)this_ptr + 0x30) = 0;
  *(int *)((intptr_t)this_ptr + 0x34) = 0;
  *(int *)((intptr_t)this_ptr + 0x38) = 0x3c;
  *(int *)((intptr_t)this_ptr + 0x44) = 0;
  *(int *)((intptr_t)this_ptr + 0x48) = 0;
  *(int *)((intptr_t)this_ptr + 0x4c) = 0x78;
  *(int *)((intptr_t)this_ptr + 0x54) = 0;
  *(int *)((intptr_t)this_ptr + 0x50) = 1;
  *(int *)((intptr_t)this_ptr + 0x58) = 10;
  *(int *)((intptr_t)this_ptr + 0x5c) = 1;
  *(int *)((intptr_t)this_ptr + 0x60) = 0;
  *(int *)((intptr_t)this_ptr + 0x24) = param_4;
  return;
}





void  FUN_100033b0(void *this_ptr,int param_1)

{
  *(int *)((intptr_t)this_ptr + 0x50) = param_1;
  return;
}





void  FUN_100033c0(void *this_ptr,int param_1,int param_2,int param_3)

{
  RegisterUnitType((intptr_t)this_ptr + 0x28,param_1);
  *(int *)((intptr_t)this_ptr + 0x30) = param_2;
  *(int *)((intptr_t)this_ptr + 0x34) = param_3;
  return;
}





void  FUN_100033f0(void *this_ptr,int param_1,int param_2,int param_3)

{
  RegisterUnitType((intptr_t)this_ptr + 0x3c,param_1);
  *(int *)((intptr_t)this_ptr + 0x44) = param_2;
  *(int *)((intptr_t)this_ptr + 0x48) = param_3;
  return;
}





BOOL  FUN_10003420(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1 + 4);
  return iVar1 != 0;
}





int  FUN_10003440(int param_1)

{
  BOOL bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  unsigned int uVar6;
  int iVar7;
  
  iVar3 = GetTotalAmount0(param_1 + 0x1c);
  iVar7 = param_1 + 0x14;
  iVar4 = GetTotalAmount0(iVar7);
  if (*(int *)(param_1 + 0x24) < iVar4 + iVar3) {
    return -1;
  }
  bVar1 = FUN_10003420(param_1);
  if (bVar1) {
    iVar3 = param_1 + 4;
    cVar2 = CheckProduction(iVar3);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x50)) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      }
      else {
        *(int *)(param_1 + 0x54) = 0;
        iVar7 = param_1 + 0x1c;
      }
      iVar4 = GetGlobalTime();
      if (*(int *)(param_1 + 0x60) < iVar4) {
        uVar5 = GetGlobalTime();
        *(int *)(param_1 + 0x60) = uVar5;
        uVar6 = rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x34)) {
          ProduceUnitFast(iVar3,param_1 + 0x28,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x30);
        }
        uVar6 = rand();
        if ((int)(uVar6 & 0xff) <= *(int *)(param_1 + 0x48)) {
          ProduceUnitFast(iVar3,param_1 + 0x3c,iVar7,3);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x44);
        }
      }
    }
  }
  return 0;
}





void __cdecl FUN_10003530(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (*(int *)(param_3 + 4) == 0x554e4954) {
    if (DAT_100227b4 != 0x554e4954) {
      RegisterDynGroup(&DAT_100227b0);
    }
    FUN_100014c0(param_2);
    SelectUnitsInZone(param_1,param_2,0);
    SaveSelectedUnits(param_2,&DAT_100227b0,0);
    FUN_10001540(param_2);
    FUN_100014c0(param_4);
    iVar1 = GetTotalAmount0(&DAT_100227b0);
    if (iVar1 != 0) {
      SelectUnits(param_3,0);
      SelAttackGroup(param_4,&DAT_100227b0);
      FUN_10001540(param_4);
      return;
    }
    iVar1 = GetUnitsAmount1(param_5,param_3);
    if (iVar1 == 0) {
      FUN_10001180(param_4,param_3,param_5,0);
    }
    FUN_10001540(param_4);
  }
  return;
}





void __cdecl FUN_10003600(int *param_1,int param_2,int param_3,int param_4)

{
  char local_8 [8];
  
  UnitsCenter(local_8,param_1 + 1,param_4);
  FUN_10003530(local_8,param_2,param_3 + 4,*param_1,param_1 + 3);
  return;
}





void 
FUN_10003650(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  RegisterZone(this_ptr,param_1);
  RegisterZone((intptr_t)this_ptr + 8,param_2);
  RegisterZone((intptr_t)this_ptr + 0x10,param_3);
  RegisterZone((intptr_t)this_ptr + 0x18,param_4);
  return;
}





int *  FUN_10003690(int *param_1)

{
  int iVar1;
  int *puVar2;
  
  iVar1 = 0x32;
  puVar2 = param_1;
  do {
    FUN_10003230(puVar2);
    puVar2 = (int *)((int)puVar2 + 0x47);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  RegisterVar(param_1,0xf29);
  *(short *)((intptr_t)param_1 + 0xf1e) = 0;
  param_1[0x3c8] = 0;
  param_1[0x3c9] = 6;
  return param_1;
}





int  FUN_100036e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (*(short *)(param_1 + 0xf1e) != 0) {
    iVar2 = param_1 + 0xc;
    do {
      iVar1 = GetTotalAmount0(iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x47;
    } while (iVar4 < (int)(unsigned int)*(unsigned short *)(param_1 + 0xf1e));
    return iVar3;
  }
  return 0;
}





unsigned int  FUN_10003730(void *this_ptr,unsigned int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int in_EAX;
  int uVar4;
  unsigned int uVar5;
  char auStack_2c [44];
  
  uVar2 = *(unsigned short *)((intptr_t)this_ptr + 0xf1e);
  if (0x31 < uVar2) {
    return in_EAX & -256;
  }
  *(unsigned short *)((intptr_t)this_ptr + 0xf1e) = uVar2 + 1;
  *(int *)((intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0x35) = param_2;
  if (param_2 == 3) {
    uVar5 = *(unsigned int *)((intptr_t)this_ptr + 0xf20);
    if (param_1 == uVar5) goto LAB_10003798;
  }
  else {
    if (param_1 == *(unsigned int *)((intptr_t)this_ptr + 0xf24)) goto LAB_10003798;
    uVar5 = *(unsigned int *)((intptr_t)this_ptr + 0xf24) & 0xff;
  }
  SelChangeNation(param_1,uVar5);
LAB_10003798:
  iVar1 = (intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0xc;
  SaveSelectedUnits(param_1,iVar1,0);
  iVar3 = *(int *)((intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0x43);
  *(int *)((intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0x3b) = 0;
  if (iVar3 != 0x554e4954) {
    RegisterDynGroup((intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0x3f);
  }
  if (param_4 != 0) {
    RemoveGroup(param_4,(intptr_t)this_ptr + (unsigned int)uVar2 * 0x47 + 0x3f);
  }
  uVar4 = GetUnitInfo(iVar1,0,auStack_2c);
  return (int)1;
}





void  FUN_10003800(void *this_ptr,int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX = 0;
  int iVar5;
  int local_74;
  int uStack_70;
  int uStack_6c;
  char auStack_68 [8];
  char auStack_60 [8];
  char auStack_58 [20];
  int uStack_44;
  int uStack_40;
  char auStack_2c [20];
  int uStack_18;
  int uStack_14;
  
  local_74 = 0;
  if (*(short *)((intptr_t)this_ptr + 0xf1e) != 0) {
    iVar5 = (intptr_t)this_ptr + 0xc;
    do {
      iVar3 = GetTotalAmount0(iVar5);
      if (iVar3 != 0) {
        FUN_100014c0(*(int *)((intptr_t)this_ptr + 0xf20));
        FUN_100014c0(*(int *)((intptr_t)this_ptr + 0xf24));
        UnitsCenter(auStack_60,iVar5,0x5dc);
        UnitsCenter(auStack_68,iVar5,200);
        switch(*(int *)(iVar5 + 0x29)) {
        case 0:
          iVar3 = (unsigned int)*(byte *)(iVar5 + 0x2d) * 0x20 + 0xdee + (intptr_t)this_ptr;
          iVar4 = GetUnitsAmount1(iVar3,iVar5);
          if (iVar4 == 0) {
            FUN_10001180((int)*(char *)((intptr_t)this_ptr + 0xf24),iVar5,iVar3,0);
          }
          else {
            *(int *)(iVar5 + 0x29) = 1;
            iVar3 = GetGlobalTime();
            *(int *)(iVar5 + 0x2f) = iVar3 + 1000;
            GetUnitInfo(iVar5,0,auStack_58);
            uStack_44 = 0x3c00;
            uStack_40 = 0;
            SetUnitInfo(auStack_58);
          }
          FUN_10003530(auStack_60,0,iVar5 + 0x33,5,auStack_68);
          break;
        case 1:
          bVar1 = *(byte *)(iVar5 + 0x2d);
          iVar3 = GetGlobalTime();
          if (*(int *)(iVar5 + 0x2f) < iVar3) {
            *(int *)(iVar5 + 0x29) = 2;
            GetZoneCoor((unsigned int)bVar1 * 0x20 + 0xdf6 + (intptr_t)this_ptr,&uStack_70,&uStack_6c);
            GetUnitInfo(iVar5,0,auStack_2c);
            uStack_18 = uStack_70;
            uStack_14 = uStack_6c;
            SetUnitInfo(auStack_2c);
          }
          break;
        case 2:
          iVar3 = (unsigned int)*(byte *)(iVar5 + 0x2d) * 0x20 + 0xde6 + (intptr_t)this_ptr;
          iVar4 = GetUnitsAmount1(iVar3,iVar5);
          if (iVar4 == 0) {
            FUN_10001180((unsigned int)*(byte *)((intptr_t)this_ptr + 0xf24),iVar5,iVar3,0);
          }
          else {
            *(int *)(iVar5 + 0x29) = 3;
            iVar3 = GetGlobalTime();
            *(int *)(iVar5 + 0x2f) = iVar3 + 400;
            SelectUnits(iVar5,0);
            SelChangeNation(*(char *)((intptr_t)this_ptr + 0xf24),*(char *)((intptr_t)this_ptr + 0xf20));
          }
          FUN_10003530(auStack_60,0,iVar5 + 0x33,5,auStack_68);
          break;
        case 3:
          iVar3 = GetGlobalTime();
          if (*(int *)(iVar5 + 0x2f) < iVar3) {
            *(char *)((intptr_t)this_ptr + 0xf28) = (char)local_74;
            cVar2 = ((int(*)())param_1)();
            if (cVar2 == '\0') {
              iVar3 = GetGlobalTime();
              *(int *)(iVar5 + 0x2f) = iVar3 + 400;
            }
            else {
              *(int *)(iVar5 + 0x29) = 0;
              SelectUnits(iVar5,0);
              SelChangeNation(*(char *)((intptr_t)this_ptr + 0xf20),*(char *)((intptr_t)this_ptr + 0xf24))
              ;
            }
          }
        }
        FUN_10001540(*(int *)((intptr_t)this_ptr + 0xf20));
        FUN_10001540(*(int *)((intptr_t)this_ptr + 0xf24));
      }
      local_74 = local_74 + 1;
      iVar5 = iVar5 + 0x47;
    } while (local_74 < (int)(unsigned int)*(unsigned short *)((intptr_t)this_ptr + 0xf1e));
  }
  return;
}





void  FUN_10003aa0(void *this_ptr,int param_1,int param_2)

{
  *(int *)((intptr_t)this_ptr + 0xf20) = param_1;
  *(int *)((intptr_t)this_ptr + 0xf24) = param_2;
  return;
}





int  FUN_10003ac0(int param_1)

{
  return (unsigned int)*(byte *)(param_1 + 0xf28) * 0x47 + param_1;
}





void __cdecl FUN_10003ae0(int *param_1)

{
  FUN_10003e12(param_1);
  return;
}







void FUN_10003aeb(void)

{
  void *extraout_ECX;
  
  FUN_10003b03();
  DAT_100279b8_ovl = FUN_10003f4b();
  FUN_10003efb(extraout_ECX);
  return;
}





void FUN_10003b03(void)

{
  return;
}





int __cdecl FUN_10003b63(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}





int __cdecl FUN_10003b88(int param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_1000448c();
  pbVar1 = (byte *)FUN_100047e7(DAT_10029110);
  if (pbVar1 < DAT_1002910c + (4 - (int)DAT_10029110)) {
    SVar2 = FUN_100047e7(DAT_10029110);
    pbVar1 = FUN_100044b8(DAT_10029110,(unsigned int *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10003bfd;
    }
    DAT_1002910c = pbVar1 + ((int)DAT_1002910c - (int)DAT_10029110 >> 2) * 4;
    DAT_10029110 = pbVar1;
  }
  *(int *)DAT_1002910c = param_1;
  DAT_1002910c = DAT_1002910c + 4;
LAB_10003bfd:
  FUN_10004495();
  return param_1;
}





int __cdecl FUN_10003c06(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10003b88(param_1);
  return (iVar1 != 0) - 1;
}







void OnInit(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char auStack_8 [8];
  
                    
  RegisterUnits(&DAT_100227a8,"ENG cannons");
  RegisterUnits(&DAT_10023c18,"FRA cannons");
  RegisterUnits(&DAT_10023c80,"FRA killer");
  RegisterUnits(&DAT_10012fc8,"HOL tow0");
  RegisterUnits(&DAT_10012fe0,"HOL tow1");
  RegisterUnitType(&DAT_10023c58,"BGAUZ(UN)");
  RegisterUnitType(&DAT_10023c50,"BGAUZ2(UN)");
  RegisterUnitType(&DAT_10012d18,"Bashnia(en)");
  RegisterUnitType(&DAT_10012fb8,"Bashnia(HO)");
  RegisterUnitType(&DAT_10012fd8,"PorE(en)");
  RegisterDynGroup(&DAT_10023ca8);
  RegisterZone(&DAT_10023ca0,"ZGuard0");
  RegisterZone(&DAT_10023c98,"ZGuard1");
  RegisterDynGroup(&DAT_10023c00);
  RegisterUnitType(&DAT_10023c88,"Center_British(en)");
  RegisterUnits(&DAT_10023bd8,"ENEMY flot0");
  RegisterZone(&DAT_10023c70,"ENM flot0 0");
  RegisterZone(&DAT_10023c78,"ENM flot0 1");
  RegisterZone(&DAT_10012ce0,"ENM help");
  RegisterZone(&DAT_10023c28,"ENM back");
  RegisterDynGroup(&DAT_100227e8);
  RegisterZone(&DAT_10023c90,"ENM back rest");
  RegisterVar(&DAT_100227e8,8);
  RegisterUnitType(&DAT_10012fd0,"FregatNEW(HO)");
  RegisterZone(&DAT_10023bf0,"z_att0");
  RegisterZone(&DAT_10023bf8,"z_att1");
  RegisterZone(&DAT_10023be0,"z_att2");
  RegisterZone(&DAT_10023be8,"z_att3");
  RegisterUnits(&DAT_10012cd0,"ENG arerg");
  RegisterUnits(&DAT_10012bf8,"FRA arerg");
  RegisterUnits(&DAT_10023c60,"ENEMY arerg");
  RegisterZone(&DAT_10023c20,"ENG batl0");
  RegisterZone(&DAT_10023c08,"FRA batl0");
  RegisterZone(&DAT_10012cc8,"ALI batl1");
  RegisterZone(&DAT_10012d08,"ENEMY batl0");
  RegisterZone(&DAT_10012d00,"ENEMY batl1");
  RegisterUnits(&DAT_10022808,"ENG parom");
  RegisterZone(&DAT_10022810,"ENG dock");
  RegisterUnits(&DAT_10023c10,"ENG men");
  RegisterZone(&DAT_10012cc0,"ENG assault");
  RegisterUnits(&DAT_10012cd8,"FRA parom");
  RegisterZone(&DAT_10023c40,"FRA dock");
  RegisterUnits(&DAT_10023cb0,"FRA men");
  RegisterZone(&DAT_10012fc0,"FRA assault");
  FUN_10003aa0(&DAT_10022ca8,DAT_10023c68,DAT_10023c68);
  FUN_10003650(&DAT_10023a86,"EF dock","EF port","EF gate_in",
               "EF gate_out");
  RegisterUnitType(&DAT_10022c20,"KECH(HO)");
  FUN_10003300(&DAT_10012fe8,DAT_10012cfa_ovl,"ENEMY port4",0x1000f324,7);
  FUN_100033c0(&DAT_10012fe8,"Yahta(HO)",2000,200);
  InitialUpgrade("ENEMY port4","AKA06HO");
  FUN_100033f0(&DAT_10012fe8,"Fregat(HO)",4000,0x32);
  FUN_100033b0(&DAT_10012fe8,10);
  FUN_10003300(&DAT_10022860,DAT_10012cfa_ovl,"ENEMY port0",0x1000f2d8,100);
  FUN_100033c0(&DAT_10022860,"Yahta(en)",3000,200);
  FUN_100033f0(&DAT_10022860,"GALERA(en)",3000,100);
  FUN_10003300(&DAT_100228d8,DAT_10012cfa_ovl,"ENEMY port1",0x1000f2a8,100);
  FUN_100033c0(&DAT_100228d8,"Yahta(en)",3000,200);
  FUN_100033f0(&DAT_100228d8,"GALERA(en)",3000,100);
  FUN_10003300(&DAT_10022950,DAT_10012cfa_ovl,"ENEMY port2",0x1000f290,100);
  FUN_100033c0(&DAT_10022950,"Yahta(HO)",0xdac,200);
  FUN_100033f0(&DAT_10022950,"GALERA(HO)",0xdac,100);
  iVar1 = GetDiff(0);
  iVar1 = 4 - iVar1;
  iVar3 = iVar1 * 0x96;
  iVar2 = iVar1 * 400;
  iVar4 = iVar1 * 800;
  iVar1 = iVar1 * 900;
  FUN_10003300(&DAT_10013060,DAT_10012cfa_ovl,"ENEMY bar0",0x1000f268,100);
  FUN_100033c0(&DAT_10013060,"Pikiner_evro(en)",iVar3,200);
  FUN_100033f0(&DAT_10013060,"Mushketer_ev(en)",iVar2,100);
  FUN_10003300(&DAT_100130d8,DAT_10012cfa_ovl,"ENEMY bar1",0x1000f224,100);
  FUN_100033c0(&DAT_100130d8,"Pikiner_evro(en)",iVar3,200);
  FUN_100033f0(&DAT_100130d8,"Mushketer_ev(en)",iVar2,100);
  FUN_10003300(&DAT_10013150,DAT_10012cfa_ovl,"ENEMY bar2",0x1000f208,100);
  FUN_100033c0(&DAT_10013150,"Pikiner_evro(en)",iVar3,200);
  FUN_100033f0(&DAT_10013150,"Mushketer_niderland(HO)",iVar2 + -0x19,100);
  FUN_10003300(&DAT_100131c8,DAT_10012cfa_ovl,"ENM bar3",0x1000f1d8,100);
  FUN_100033c0(&DAT_100131c8,"Pikiner_evro(HO)",iVar3,200);
  FUN_100033f0(&DAT_100131c8,"Mushketer_niderland(HO)",iVar2 + -0x19,100);
  FUN_10003300(&DAT_10013240,DAT_10012cfa_ovl,"ENM bar4",0x1000f1ac,100);
  FUN_100033c0(&DAT_10013240,"Pikiner_evro(HO)",iVar3,200);
  FUN_100033f0(&DAT_10013240,"Mushketer_niderland(HO)",iVar2,100);
  FUN_10003300(&DAT_100132b8,DAT_10012cfa_ovl,"ENM bar5",0x1000f194,100);
  FUN_100033c0(&DAT_100132b8,"Pikiner_evro(HO)",iVar3,200);
  FUN_100033f0(&DAT_100132b8,"Mushketer_niderland(HO)",iVar2,100);
  FUN_10003300(&DAT_100229c8,DAT_10012cfa_ovl,"ENEMY sta0",0x1000f178,100);
  FUN_100033c0(&DAT_100229c8,"Konni_Ricar(en)",iVar4,200);
  FUN_100033f0(&DAT_100229c8,"Dragun(en)",iVar1,100);
  FUN_10003300(&DAT_10022a40,DAT_10012cfa_ovl,"ENEMY sta1",0x1000f140,100);
  FUN_100033c0(&DAT_10022a40,"Konni_Ricar(en)",iVar4,200);
  FUN_100033f0(&DAT_10022a40,"Dragun(en)",iVar1,100);
  FUN_10003300(&DAT_10022ab8,DAT_10012cfa_ovl,"ENEMY sta2",0x1000f124,100);
  FUN_100033c0(&DAT_10022ab8,"Konni_Ricar(HO)",iVar4,200);
  FUN_100033f0(&DAT_10022ab8,"Dragun(HO)",iVar1,100);
  FUN_10003300(&DAT_10022b30,DAT_10012cfa_ovl,"ENM sta3",0x1000f1d8,100);
  FUN_100033c0(&DAT_10022b30,"Konni_Ricar(HO)",iVar4,200);
  FUN_100033f0(&DAT_10022b30,"Dragun(HO)",iVar1,100);
  FUN_10003300(&DAT_10022ba8,DAT_10012cfa_ovl,"ENM sta4",0x1000f1ac,100);
  FUN_100033c0(&DAT_10022ba8,"Konni_Ricar(HO)",iVar4,200);
  FUN_100033f0(&DAT_10022ba8,"Dragun(HO)",iVar1,100);
  FUN_10003300(&DAT_10022c28,DAT_10012cfa_ovl,"ENM sta5",0x1000f194,100);
  FUN_100033c0(&DAT_10022c28,"Konni_Ricar(HO)",iVar4,200);
  FUN_100033f0(&DAT_10022c28,"Dragun(HO)",iVar1,100);
  FUN_10002fb0(&DAT_10012ce8,(int *)&DAT_10012c00);
  FUN_10002fb0(&DAT_10012cf1,(int *)&DAT_10012c00);
  FUN_10002fb0(&DAT_10012c09,(int *)&DAT_10012cfa);
  FUN_10002fb0(&DAT_10012c12,(int *)&DAT_10012cfa);
  FUN_10002fb0(&DAT_10023c68,(int *)&DAT_10012cfa);
  RegisterUpgrade(auStack_8,"AKA25HO");
  DisableUpgrade(0,auStack_8);
  SetTrigg(7,0);
  return;
}







void ProcessScenary(void)

{
  char uVar1;
  char cVar2;
  BOOL bVar3;
  int iVar4;
  int iVar5;
  void *pcVar6;
  int uVar7;
  int iStack_68;
  int aiStack_60 [2];
  short asStack_58 [2];
  short uStack_54;
  unsigned int uStack_52;
  int iStack_3c;
  unsigned int auStack_2c [11];
  
                    
  cVar2 = Trigg(0);
  if (cVar2 != '\0') {
    SetTrigg(0,0);
    ShowPage("#Entry");
    DisableMission(0x5a);
    DisableMission(0x53);
    iVar4 = GetDiff(0);
    if (1 < iVar4) {
      DisableMission(0x58);
    }
    GetDiff(0);
    iVar4 = GetDiff(0);
    FUN_10002f60(&DAT_10012c00,(5 - iVar4) * 2000);
    iVar4 = GetDiff(0);
    SetResource((int)DAT_10012c00,4,(8 - iVar4) * 3000);
    iVar4 = GetDiff(0);
    SetResource(DAT_10012c00_ovl & 0xff,5,(8 - iVar4) * 3000);
    FUN_10002f60(&DAT_10012c09,15000);
    FUN_10002f60(&DAT_10012c12,15000);
    StartAI(DAT_10012c09,"HOLLAND.0",0,0,0,-1);
    StartAI(DAT_10012c12,"HOLLAND.0",3,0,0,-1);
    ClearSelection(DAT_10012cfa);
    SelectUnits(&DAT_10023bd8,0);
    uVar7 = 0;
    iVar4 = rand();
    SelSendAndKill(DAT_10012cfa,&DAT_10023c70,iVar4,uVar7);
    uVar7 = 2;
    iVar4 = rand();
    SelSendAndKill(DAT_10012cfa,&DAT_10023c78,iVar4,uVar7);
    iVar4 = GetDiff(0);
    uVar1 = DAT_10012cfa;
    ClearSelection(DAT_10012cfa);
    SelectUnitsType(&DAT_10012d18,uVar1,1);
    SelectUnitsType(&DAT_10012fb8,uVar1,1);
    SelectUnitsType(&DAT_10012fd8,uVar1,1);
    SaveSelectedUnits(uVar1,&DAT_10023ca8,0);
    aiStack_60[0] = GetNUnits(&DAT_10023ca8);
    iStack_68 = 0;
    if (0 < aiStack_60[0]) {
      do {
        GetUnitInfo(&DAT_10023ca8,iStack_68,asStack_58);
        if (asStack_58[0] != -1) {
          iVar5 = (iVar4 + 1) * (uStack_52 & 0xffff);
          uStack_54 = (short)((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
          uStack_52 = (int)uStack_54;
          SetUnitInfo(asStack_58);
        }
        iStack_68 = iStack_68 + 1;
      } while (iStack_68 < aiStack_60[0]);
    }
    if (iVar4 == 0) {
      ClearSelection(uVar1);
      SelectUnits(&DAT_10023bd8,1);
      SelErase(uVar1);
      ClearSelection(uVar1);
      SelectUnitsType(&DAT_10023c58,uVar1,1);
      SelectUnitsType(&DAT_10023c50,uVar1,1);
      SelErase(uVar1);
    }
    iVar5 = GetGlobalTime();
    DAT_10022ca4 = iVar5 + 2000;
    RunTimer(0,(0xd - iVar4) * 4000);
    RunTimer(2,(7 - iVar4) * 5000);
  }
  iVar4 = GetReadyAmount(&DAT_10023c88,0);
  if ((iVar4 != 0) && (cVar2 = Trigg(5), cVar2 != '\0')) {
    SetTrigg(5,0);
    RunTimer(0,36000);
  }
  iVar4 = GetGlobalTime();
  if (DAT_10023c34 < iVar4) {
    iVar4 = GetGlobalTime();
    DAT_10023c34 = iVar4 + 400;
    iVar4 = GetTotalAmount0(&DAT_10012bf8);
    if (iVar4 == 0) {
      ClearLightSpot(0);
    }
    else {
      UnitsCenter(aiStack_60,&DAT_10012bf8,100);
      SetLightSpot(aiStack_60,2,0);
    }
    iVar4 = GetTotalAmount0(&DAT_10012cd0);
    if (iVar4 == 0) {
      ClearLightSpot(1);
    }
    else {
      UnitsCenter(aiStack_60,&DAT_10012cd0,100);
      SetLightSpot(aiStack_60,2,1);
    }
    iVar4 = GetTotalAmount0(&DAT_10023cb0);
    if (iVar4 == 0) {
      ClearLightSpot(2);
    }
    else {
      UnitsCenter(aiStack_60,&DAT_10023cb0,100);
      SetLightSpot(aiStack_60,2,2);
    }
    iVar4 = GetTotalAmount0(&DAT_10023c10);
    if (iVar4 == 0) {
      ClearLightSpot(3);
    }
    else {
      UnitsCenter(aiStack_60,&DAT_10023c10,100);
      SetLightSpot(aiStack_60,2,3);
    }
  }
  cVar2 = TimerDone(2);
  if (cVar2 != '\0') {
    FUN_10003130();
  }
  cVar2 = TimerDone(0);
  if ((cVar2 != '\0') && (cVar2 = Trigg(1), pcVar6 = (void*)&SelSendTo, cVar2 != '\0')) {
    ClearSelection(DAT_10012ce8);
    SelectUnits(&DAT_10022808,0);
    SelSendTo(DAT_10012ce8,&DAT_10022810,0,0);
    ClearSelection(DAT_10012cf1);
    SelectUnits(&DAT_10012cd8,0);
    SelSendTo(DAT_10012cf1,&DAT_10023c40,0,0);
    iVar4 = GetTotalAmount0(&DAT_10022808);
    if (((iVar4 == 0) || (cVar2 = CheckLeaveAbility(DAT_10012ce8), cVar2 != '\0')) &&
       ((iVar4 = GetTotalAmount0(&DAT_10012cd8), iVar4 == 0 ||
        (cVar2 = CheckLeaveAbility(DAT_10012cf1), cVar2 != '\0')))) {
      SetTrigg(1,0);
    }
  }
  cVar2 = Trigg(3);
  if ((cVar2 != '\0') && (cVar2 = TimerDone(3), cVar2 != '\0')) {
    SetTrigg(3,0);
    ClearSelection(DAT_10012cfa);
    SelectUnits(&DAT_100227e8,0);
    SelSendAndKill(DAT_10012cfa,&DAT_10012d08,0xdc,0);
    SelSendAndKill(DAT_10012cfa,&DAT_10023c90,200,2);
    SelSendAndKill(DAT_10012cfa,&DAT_10023c98,100,2);
  }
  cVar2 = Trigg(7);
  if ((cVar2 != '\0') && (cVar2 = Trigg(6), cVar2 != '\0')) {
    iVar4 = GetNUnits(&DAT_10023c60);
    if (iVar4 == 0) {
      SetTrigg(6,0);
    }
    else {
      while (0 < iVar4) {
        iVar4 = iVar4 + -1;
        GetUnitInfo(&DAT_10023c60,iVar4,auStack_2c);
        if ((short)auStack_2c[0] == -1) {
          RemoveUnitFromGroup(&DAT_10023c60,iVar4);
        }
        else {
          GetUnitExCaps(auStack_2c[0] & 0xffff,asStack_58,1);
          if (iStack_3c == -1) {
            InsertUnitToGroup(0,&DAT_10023c00,auStack_2c[0] & 0xffff);
            RemoveUnitFromGroup(&DAT_10023c60,iVar4);
          }
        }
      }
    }
    ClearSelection(DAT_10012cfa);
    SelectUnits(&DAT_10023c00,0);
    SelChangeNation(DAT_10012cfa,DAT_10012c12);
    FUN_10001150(&DAT_10023c00);
  }
  cVar2 = Trigg(2);
  if ((cVar2 != '\0') && (cVar2 = Trigg(1), cVar2 == '\0')) {
    ClearSelection(DAT_10012ce8);
    SelectUnits(&DAT_10022808,1);
    SelectUnits(&DAT_10023c10,1);
    SendUnitsToTransport(DAT_10012ce8);
    ClearSelection(DAT_10012cf1);
    SelectUnits(&DAT_10012cd8,1);
    SelectUnits(&DAT_10023cb0,1);
    SendUnitsToTransport(DAT_10012cf1);
    aiStack_60[0] = GetTotalAmount0(&DAT_10023c10);
    iVar4 = GetNInside(DAT_10012ce8);
    if (iVar4 == aiStack_60[0]) {
      aiStack_60[0] = GetTotalAmount0(&DAT_10023cb0);
      iVar4 = GetNInside(DAT_10012cf1);
      if (iVar4 == aiStack_60[0]) {
        SetTrigg(2,0);
        ClearSelection(DAT_10012ce8);
        SelectUnits(&DAT_10022808,0);
        SelSendTo(DAT_10012ce8,&DAT_10012cc0,0,0);
        ClearSelection(DAT_10012cf1);
        SelectUnits(&DAT_10012cd8,0);
        SelSendTo(DAT_10012cf1,&DAT_10012fc0,0,0);
        RunTimer(1,1000);
        SetTrigg(7,0);
        RunTimer(3,1000);
        ShowPage("#Start_att");
        DisableMission(0x41);
        EnableMission(0x5a);
        EnableMission(0x53);
        ClearSelection(DAT_10012ce8);
        SelectUnits(&DAT_10012cd0,1);
        SelSendAndKill(DAT_10012ce8,&DAT_10023c20,0xdc,0);
        SelSendAndKill(DAT_10012ce8,&DAT_10012cc8,0xdc,2);
        ClearSelection(DAT_10012cf1);
        SelectUnits(&DAT_10012bf8,1);
        SelSendAndKill(DAT_10012cf1,&DAT_10023c08,0xdc,0);
        SelSendAndKill(DAT_10012cf1,&DAT_10012cc8,0xdc,2);
        ClearSelection(DAT_10012cfa);
        SelectUnits(&DAT_10023c60,1);
        SelSendAndKill(DAT_10012cfa,&DAT_10012d08,0xdc,0);
        SelSendAndKill(DAT_10012cfa,&DAT_10012d00,0xdc,2);
        SelSendAndKill(DAT_10012cfa,&DAT_10023c98,100,2);
      }
    }
  }
  cVar2 = TimerDone(1);
  if (((cVar2 != '\0') && (cVar2 = CheckLeaveAbility(DAT_10012ce8), cVar2 != '\0')) &&
     (cVar2 = CheckLeaveAbility(DAT_10012cf1), cVar2 != '\0')) {
    ClearSelection(DAT_10012ce8);
    SelectUnits(&DAT_10022808,0);
    PushAllUnitsAway(DAT_10012ce8);
    ClearSelection(DAT_10012cf1);
    SelectUnits(&DAT_10012cd8,0);
    PushAllUnitsAway(DAT_10012cf1);
  }
  cVar2 = TimerDone(1);
  if ((cVar2 != '\0') && (cVar2 = Trigg(4), cVar2 != '\0')) {
    ClearSelection(DAT_10012ce8);
    SelectUnits(&DAT_10022808,0);
    ClearSelection(DAT_10012cf1);
    SelectUnits(&DAT_10012cd8,0);
    iVar4 = GetNInside(DAT_10012ce8);
    if ((iVar4 == 0) && (iVar4 = GetNInside(DAT_10012cf1), iVar4 == 0)) {
      cVar2 = Trigg(8);
      if (cVar2 != '\0') {
        SetTrigg(8,0);
        ShowPage("#ali_assault");
      }
      ClearSelection(DAT_10012ce8);
      SelectUnits(&DAT_100227a8,1);
      SelAttackGroup(DAT_10012ce8,&DAT_10012fc8);
      ClearSelection(DAT_10012cf1);
      SelectUnits(&DAT_10023c18,1);
      SelAttackGroup(DAT_10012cf1,&DAT_10012fe0);
      ClearSelection(DAT_10012cf1);
      aiStack_60[0] = GetTotalAmount0(&DAT_10012fe0);
      iVar4 = GetTotalAmount0(&DAT_10012fc8);
      if (iVar4 + aiStack_60[0] == 0) {
        SetTrigg(4,0);
        iVar4 = GetTotalAmount0(&DAT_10022808);
        if (iVar4 != 0) {
          ClearSelection(DAT_10012ce8);
          SelectUnits(&DAT_10023c10,0);
          uVar7 = 0;
          iVar4 = rand();
          SelSendAndKill(DAT_10012ce8,&DAT_10023bf0,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = rand();
          SelSendAndKill(DAT_10012ce8,&DAT_10023bf8,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = rand();
          SelSendAndKill(DAT_10012ce8,&DAT_10023be0,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = rand();
          SelSendAndKill(DAT_10012ce8,&DAT_10023be8,iVar4,uVar7);
        }
        iVar4 = GetTotalAmount0(&DAT_10012cd8);
        if (iVar4 != 0) {
          ClearSelection(DAT_10012cf1);
          SelectUnits(&DAT_10023cb0,0);
          uVar7 = 0;
          iVar4 = rand();
          SelSendAndKill(DAT_10012cf1,&DAT_10023bf0,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = rand();
          SelSendAndKill(DAT_10012cf1,&DAT_10023bf8,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = rand();
          SelSendAndKill(DAT_10012cf1,&DAT_10023be0,iVar4,uVar7);
          uVar7 = 2;
          iVar4 = rand();
          SelSendAndKill(DAT_10012cf1,&DAT_10023be8,iVar4,uVar7);
        }
      }
    }
  }
  FUN_10003440(0x10022860);
  FUN_10003440(0x100228d8);
  FUN_10003440(0x10022950);
  FUN_10003440(0x10013060);
  FUN_10003440(0x100130d8);
  FUN_10003440(0x10013150);
  FUN_10003440(0x100131c8);
  FUN_10003440(0x10013240);
  FUN_10003440(0x100132b8);
  FUN_10003440(0x100229c8);
  FUN_10003440(0x10022a40);
  FUN_10003440(0x10022ab8);
  FUN_10003440(0x10022b30);
  FUN_10003440(0x10022ba8);
  FUN_10003440(0x10022c28);
  iVar4 = GetGlobalTime();
  if (DAT_1002275c < iVar4) {
    iVar4 = GetGlobalTime();
    DAT_1002275c = iVar4 + 500;
    RemoveGroup(&DAT_10022874,&DAT_10022764);
    RemoveGroup(&DAT_100228ec,&DAT_1002277c);
    RemoveGroup(&DAT_10022964,&DAT_10022794);
    RemoveGroup(&DAT_10013074,&DAT_1002281c);
    RemoveGroup(&DAT_100130ec,&DAT_10022834);
    RemoveGroup(&DAT_10013164,&DAT_1002284c);
    RemoveGroup(&DAT_100229dc,&DAT_100227bc);
    RemoveGroup(&DAT_10022a54,&DAT_100227d4);
    RemoveGroup(&DAT_10022acc,&DAT_100227f4);
  }
  iVar4 = GetGlobalTime();
  if (DAT_10023c3c < iVar4) {
    iVar4 = GetGlobalTime();
    DAT_10023c3c = iVar4 + 200;
    FUN_10003600((int *)&DAT_10022860,DAT_10012c00_ovl,0x10022760,3000);
    FUN_10003600((int *)&DAT_100228d8,DAT_10012c00_ovl,0x10022778,3000);
    FUN_10003600((int *)&DAT_10022950,DAT_10012c00_ovl,0x10022790,3000);
    FUN_10003600((int *)&DAT_10013060,DAT_10012c00_ovl,0x10022818,0x5dc);
    FUN_10003600((int *)&DAT_100130d8,DAT_10012c00_ovl,0x10022830,0x5dc);
    FUN_10003600((int *)&DAT_10013150,DAT_10012c00_ovl,0x10022848,0x5dc);
    FUN_10003600((int *)&DAT_100229c8,DAT_10012c00_ovl,0x100227b8,0x5dc);
    FUN_10003600((int *)&DAT_10022a40,DAT_10012c00_ovl,0x100227d0,0x5dc);
    FUN_10003600((int *)&DAT_10022ab8,DAT_10012c00_ovl,0x100227f0,0x5dc);
    FUN_10003530(&DAT_10023ca0,DAT_10012c00_ovl,0x100131dc,DAT_100131c8,&DAT_100131d4);
    FUN_10003530(&DAT_10023ca0,DAT_10012c00_ovl,0x10013254,DAT_10013240,&DAT_1001324c);
    FUN_10003530(&DAT_10023ca0,DAT_10012c00_ovl,0x100132cc,DAT_100132b8,&DAT_100132c4);
    FUN_10003530(&DAT_10023ca0,DAT_10012c00_ovl,0x10022b44,DAT_10022b30,&DAT_10022b3c);
    FUN_10003530(&DAT_10023ca0,DAT_10012c00_ovl,0x10022bbc,DAT_10022ba8,&DAT_10022bb4);
    FUN_10003530(&DAT_10023ca0,DAT_10012c00_ovl,0x10022c3c,DAT_10022c28,&DAT_10022c34);
  }
  bVar3 = FUN_10003420(0x10012fe8);
  if (bVar3) {
    iVar4 = GetGlobalTime();
    if (((DAT_10022ca4 < iVar4) && (iVar4 = FUN_100036e0(0x10022ca8), iVar4 < 4)) &&
       (iVar4 = GetUnitsAmount0(&DAT_10023a8e,DAT_10023c68 & 0xff), iVar4 == 0)) {
      iVar4 = GetGlobalTime();
      DAT_10022ca4 = iVar4 + 4000;
      iVar4 = rand();
      CreateObject0(&DAT_10023c48,&DAT_10012d10,&DAT_10022c20,DAT_10023c68 & 0xff,&DAT_10023a8e,
                    iVar4);
      SelectUnits(&DAT_10023c48,0);
      FUN_10003730(&DAT_10022ca8,DAT_10023c68,0,0,0x10012ffc);
      AddResource(DAT_10012c09,1,-500);
      AddResource(DAT_10012c12,1,-500);
    }
    FUN_10003440(0x10012fe8);
  }
  cVar2 = NationIsErased(DAT_10012c09);
  if ((cVar2 != '\0') && (cVar2 = NationIsErased(DAT_10012c12), cVar2 != '\0')) {
    ShowPage("#victory");
    ShowVictory();
  }
  cVar2 = NationIsErased(DAT_10012c00_ovl & 0xff);
  if (cVar2 != '\0') {
    ShowPage("#defeat");
    LooseGame();
  }
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

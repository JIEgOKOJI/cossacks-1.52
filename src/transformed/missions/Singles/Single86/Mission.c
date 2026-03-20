#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_1000c030 = 0;
int DAT_1000c038 = 100;
long long DAT_1000f4f0 = 0;
long long DAT_1000f4f8 = 0;
long long DAT_1000f500 = 0;
long long DAT_1000f508 = 0;
long long DAT_1000f510 = 0;
long long DAT_1000f540 = 0;
long long DAT_1000f570 = 0;
long long DAT_1000f5a0 = 0;
long long DAT_1000f5d0 = 0;
long long DAT_1000f5d8 = 0;
long long DAT_1000f5e0 = 0;
long long DAT_1000f5e8 = 0;
long long DAT_1000f5f0 = 0;
long long DAT_1000f5f8 = 0;
long long DAT_1000f600 = 0;
long long DAT_1000f608 = 0;
long long DAT_1000f610 = 0;
long long DAT_1000f690 = 0;
long long DAT_1000f698 = 0;
long long DAT_1000f6a0 = 0;
long long DAT_1000f6a8 = 0;
long long DAT_1000f6b0 = 0;
long long DAT_1000f6b8 = 0;
long long DAT_1000f6c0 = 0;
long long DAT_1000f6c8 = 0;
long long DAT_1000f6d0 = 0;
long long DAT_1000f6d8 = 0;
long long DAT_1000f6e0 = 0;
long long DAT_1000f6e8 = 0;
long long DAT_1000f6f0 = 0;
long long DAT_1000f6f8 = 0;
long long DAT_1000f700 = 0;
long long DAT_1000f708 = 0;
long long DAT_1000f710 = 0;
long long DAT_1000f718 = 0;
long long DAT_1000f720 = 0;
long long DAT_1000f728 = 0;
long long DAT_1000f730 = 0;
long long DAT_1000f738 = 0;
long long DAT_1000f740 = 0;
long long DAT_1000f748 = 0;
long long DAT_1000f750 = 0;
long long DAT_1000f758 = 0;
long long DAT_1000f760 = 0;
long long DAT_1000f768 = 0;
long long DAT_1000f770 = 0;
long long DAT_1000f778 = 0;
long long DAT_1000f780 = 0;
long long DAT_1000f788 = 0;
long long DAT_1000f790 = 0;
long long DAT_1000f798 = 0;
long long DAT_1000f7a0 = 0;
long long DAT_1000f7a8 = 0;
int DAT_1000f7b4 = 0;
long long DAT_1000f7d4 = 0;
int DAT_1000f7d4_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10002d2a() { return 0; }
int FUN_10002d7a() { return 0; }


/* Forward declarations */
BOOL FUN_10001a00(int param_1);
BOOL FUN_10001a40(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
int FUN_10001bb0(int param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7);
BOOL FUN_10001c70(int param_1,int param_2,int param_3,int param_4);
void FUN_10001ce0(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_10001da0(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5);
void FUN_10001f20(void);
unsigned int FUN_10001f50(int param_1,int param_2);
int FUN_10001fc0(int param_1,int param_2);
void FUN_10002050(int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
            int param_6,int param_7,int param_8,unsigned int param_9);
int FUN_100020d0(int param_1,int param_2);
void  FUN_10002110(void *this_ptr,char param_1);
int  FUN_10002280(void *this_ptr,int param_1);
void FUN_10002458(void);
void FUN_10002470(void);

void OnInit();
void ProcessScenary();


BOOL __cdecl FUN_10001a00(int param_1)

{
  int iVar1;
  
  iVar1 = GetTotalAmount0(param_1);
  while (iVar1 != 0) {
    RemoveUnitFromGroup(param_1,0);
    iVar1 = GetTotalAmount0(param_1);
  }
  iVar1 = GetTotalAmount0(param_1);
  return (BOOL)('\x01' - (iVar1 != 0));
}





BOOL __cdecl
FUN_10001a40(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int local_3c;
  unsigned int local_38;
  short local_34;
  short local_32;
  int local_30;
  unsigned int auStack_2c [5];
  short uStack_18;
  short uStack_14;
  
  iVar2 = 0;
  local_34 = 0;
  local_32 = 0;
  local_30 = 0x40000032;
  local_3c = 0xffff;
  local_38 = 0;
  uVar4 = 0;
  if (0 < param_6) {
    do {
      if (*(char *)(param_5 + iVar2) == '\x01') {
        ClearSelection(iVar2);
        iVar1 = param_3;
        iVar3 = param_2;
        if (0 < param_3) {
          do {
            SelectUnitsType(iVar3,iVar2,1);
            iVar1 = iVar1 + -1;
            iVar3 = iVar3 + 8;
          } while (iVar1 != 0);
        }
        FUN_10001a00(param_1);
        SaveSelectedUnits(iVar2,param_1,0);
        ClearSelection(iVar2);
        iVar1 = GetTotalAmount0(param_1);
        if (iVar1 != 0) {
          UnitsCenter(&local_34,param_1,100);
        }
        iVar3 = 0;
        iVar1 = GetTotalAmount0(param_1);
        if (0 < iVar1) {
          do {
            GetUnitInfo(param_1,iVar3,auStack_2c);
            local_34 = uStack_18;
            local_32 = uStack_14;
            iVar1 = GetTopDst(param_4,&local_34);
            if (iVar1 < local_3c) {
              local_3c = GetTopDst(param_4,&local_34);
              local_38 = auStack_2c[0] & 0xffff;
            }
            iVar3 = iVar3 + 1;
            iVar1 = GetTotalAmount0(param_1);
          } while (iVar3 < iVar1);
        }
      }
      iVar2 = iVar2 + 1;
      uVar4 = local_38;
    } while (iVar2 < param_6);
  }
  FUN_10001a00(param_1);
  if (uVar4 < 0xffff) {
    InsertUnitToGroup(0,param_1,uVar4);
  }
  return uVar4 < 0xffff;
}





int __cdecl
FUN_10001bb0(int param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  BOOL bVar1;
  int iVar2;
  int extraout_var = 0;
  unsigned int uVar3;
  int uVar4;
  char auStack_8 [8];
  
  iVar2 = GetTotalAmount0(param_4);
  if (iVar2 == 0) {
    return 0;
  }
  UnitsCenter(auStack_8,param_4,100);
  FUN_10001a00(param_1);
  bVar1 = FUN_10001a40(param_1,param_2,param_3,auStack_8,param_6,param_7);
  uVar3 = (int)bVar1;
  if (bVar1) {
    iVar2 = FUN_10001fc0(param_4,param_1);
    uVar3 = FUN_10001f50(param_4,param_1);
    if (iVar2 * 0x23 < (int)uVar3) {
      SelectUnits(param_4,0);
      SelSendAndKill(param_5,auStack_8,0,0);
      SelAttackGroup(param_5,param_1);
      return (int)1;
    }
  }
  return uVar3 & -256;
}





BOOL __cdecl FUN_10001c70(int param_1,int param_2,int param_3,int param_4)

{
  BOOL bVar1;
  int iVar2;
  int iVar3;
  char auStack_8 [8];
  
  bVar1 = 0;
  iVar2 = GetTotalAmount0(param_1);
  if (iVar2 != 0) {
    UnitsCenter(auStack_8,param_1,600);
    iVar2 = 0;
    if (0 < param_4) {
      do {
        if ((*(char *)(iVar2 + param_3) == '\x01') &&
           ((bVar1 || (iVar3 = GetUnitsAmount0(auStack_8,iVar2), iVar3 != 0)))) {
          bVar1 = 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
    }
  }
  return !bVar1;
}





void __cdecl
FUN_10001ce0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char local_8 [8];
  
  UnitsCenter(local_8,param_1,1000);
  FUN_10001a00(param_3);
  iVar1 = GetTotalAmount0(param_3);
  for (iVar2 = 0; (iVar1 == 0 && (iVar2 < param_5)); iVar2 = iVar2 + 1) {
    if ((*(char *)(iVar2 + param_4) == '\x01') &&
       (iVar1 = GetUnitsAmount0(local_8,iVar2), iVar1 != 0)) {
      SelectUnitsInZone(local_8,iVar2,0);
      SaveSelectedUnits(iVar2,param_3,0);
      SelectUnits(param_1,0);
      SelSendAndKill(param_2,local_8,0,0);
      SelAttackGroup(param_2,param_3);
    }
    iVar1 = GetTotalAmount0(param_3);
  }
  return;
}





void __cdecl
FUN_10001da0(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int local_44 [5];
  unsigned int local_30;
  unsigned int local_2c;
  unsigned short local_18;
  unsigned short uStack_16;
  short local_10;
  short local_e;
  unsigned int local_8;
  
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    ClearSelection(param_4);
    SelectUnitsType(param_5,param_4,0);
    FUN_10001a00(param_3);
    SaveSelectedUnits(param_4,param_3,0);
    ClearSelection(param_4);
    iVar1 = GetTotalAmount0(param_3);
    if (iVar1 != 0) {
      param_4 = 100000;
      param_5 = 0xffff;
      UnitsCenter(&local_18,param_1,0x32);
      UnitsCenter(&local_10,param_1,0x32);
      iVar5 = 0;
      iVar1 = GetTotalAmount0(param_3);
      if (0 < iVar1) {
        do {
          GetUnitInfo(param_3,iVar5,local_44);
          local_e = (short)local_2c;
          uVar4 = (unsigned int)uStack_16 - (local_2c & 0xffff);
          local_10 = (short)local_30;
          local_8 = (unsigned int)local_18 - (local_30 & 0xffff);
          uVar2 = local_8;
          if ((intptr_t)local_8 < 0) {
            uVar2 = -local_8;
          }
          if ((int)uVar4 < 0) {
            uVar4 = -uVar4;
          }
          uVar3 = uVar2;
          if (uVar2 <= uVar4) {
            uVar3 = uVar4;
          }
          uVar2 = uVar3 + uVar2 + uVar4 >> 1;
          if (uVar2 < param_4) {
            param_5 = local_44[0] & 0xffff;
            param_4 = uVar2;
          }
          iVar5 = iVar5 + 1;
          iVar1 = GetTotalAmount0(param_3);
        } while (iVar5 < iVar1);
      }
      FUN_10001a00(param_3);
      if (param_5 < 0xffff) {
        InsertUnitToGroup(0,param_3,param_5);
      }
      SelectUnits(param_1,0);
      SelSendAndKill(param_2,&local_10,0,0);
      SelAttackGroup(param_2,param_3);
    }
  }
  return;
}





void FUN_10001f20(void)

{
  ClearSelection(0);
  ClearSelection(1);
  ClearSelection(2);
  ClearSelection(3);
  ClearSelection(4);
  ClearSelection(5);
  ClearSelection(6);
  ClearSelection(7);
  return;
}





unsigned int __cdecl FUN_10001f50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char local_30 [20];
  int local_1c;
  int local_18;
  
  GetUnitInfo(param_1,0,local_30);
  iVar2 = local_18;
  iVar1 = local_1c;
  GetUnitInfo(param_2,0,local_30);
  uVar3 = local_18 - iVar2;
  uVar5 = local_1c - iVar1;
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
  }
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  uVar4 = uVar5;
  if (uVar5 <= uVar3) {
    uVar4 = uVar3;
  }
  return uVar4 + uVar5 + uVar3 >> 1;
}





int __cdecl FUN_10001fc0(int param_1,int param_2)

{
  int iVar1;
  int uVar2;
  short local_10;
  short local_e;
  int local_c;
  short local_8;
  short local_6;
  int local_4;
  
  local_8 = 0;
  local_6 = 0;
  local_4 = 0x40000032;
  local_10 = 0;
  local_e = 0;
  local_c = 0x40000032;
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 != 0) {
    iVar1 = GetTotalAmount0(param_2);
    if (iVar1 != 0) {
      UnitsCenter(&local_8,param_1,0x32);
      UnitsCenter(&local_10,param_2,0x32);
      uVar2 = GetTopDst(&local_8,&local_10);
      return uVar2;
    }
  }
  return 0xffff;
}





void __cdecl
FUN_10002050(int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
            int param_6,int param_7,int param_8,unsigned int param_9)

{
  BOOL bVar1;
  int uVar2;
  
  bVar1 = FUN_10001c70(param_1,param_2,param_5,param_6);
  if (bVar1) {
    uVar2 = FUN_10001bb0(param_3,param_7,param_8,param_1,param_2,param_5,param_6);
    if ((char)uVar2 == '\0') {
      FUN_10001da0(param_1,param_2,param_3,param_4,param_9);
      return;
    }
  }
  else {
    FUN_10001ce0(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}





int __cdecl FUN_100020d0(int param_1,int param_2)

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
        return param_1 + iVar2 * 8;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < param_2);
  }
  return 0;
}





void  FUN_10002110(void *this_ptr,char param_1)

{
  switch(param_1) {
  case 0:
    RegisterUnitType(this_ptr,"Rundashir_Avstria_DIP(au)");
    RegisterUnitType((intptr_t)this_ptr + 8,"Pehota_turki_DIP(au)");
    RegisterUnitType((intptr_t)this_ptr + 0x10,"Strelec_Algir_DIP(au)");
    RegisterUnitType((intptr_t)this_ptr + 0x18,"Grenader_DIP(au)");
    RegisterUnitType((intptr_t)this_ptr + 0x20,"Kozak_loshad_DIP(au)");
    RegisterUnitType((intptr_t)this_ptr + 0x28,"Dragun_18_DIP(au)");
    return;
  case 1:
    RegisterUnitType(this_ptr,"Rundashir_Avstria_DIP(GE)");
    RegisterUnitType((intptr_t)this_ptr + 8,"Pehota_turki_DIP(GE)");
    RegisterUnitType((intptr_t)this_ptr + 0x10,"Strelec_Algir_DIP(GE)");
    RegisterUnitType((intptr_t)this_ptr + 0x18,"Grenader_DIP(GE)");
    RegisterUnitType((intptr_t)this_ptr + 0x20,"Kozak_loshad_DIP(GE)");
    RegisterUnitType((intptr_t)this_ptr + 0x28,"Dragun_18_DIP(GE)");
    return;
  case 2:
    RegisterUnitType(this_ptr,"Rundashir_Avstria_DIP(SA)");
    RegisterUnitType((intptr_t)this_ptr + 8,"Pehota_turki_DIP(SA)");
    RegisterUnitType((intptr_t)this_ptr + 0x10,"Strelec_Algir_DIP(SA)");
    RegisterUnitType((intptr_t)this_ptr + 0x18,"Grenader_DIP(SA)");
    RegisterUnitType((intptr_t)this_ptr + 0x20,"Kozak_loshad_DIP(SA)");
    RegisterUnitType((intptr_t)this_ptr + 0x28,"Dragun_18_DIP(SA)");
    return;
  case 3:
    RegisterUnitType(this_ptr,"Rundashir_Avstria_DIP(PO)");
    RegisterUnitType((intptr_t)this_ptr + 8,"Pehota_turki_DIP(PO)");
    RegisterUnitType((intptr_t)this_ptr + 0x10,"Strelec_Algir_DIP(PO)");
    RegisterUnitType((intptr_t)this_ptr + 0x18,"Grenader_DIP(PO)");
    RegisterUnitType((intptr_t)this_ptr + 0x20,"Kozak_loshad_DIP(PO)");
    RegisterUnitType((intptr_t)this_ptr + 0x28,"Dragun_18_DIP(PO)");
  }
  return;
}





int  FUN_10002280(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    break;
  case 1:
    return (intptr_t)this_ptr + 8;
  case 2:
    return (intptr_t)this_ptr + 0x10;
  case 3:
    return (intptr_t)this_ptr + 0x18;
  case 4:
    return (intptr_t)this_ptr + 0x28;
  case 5:
    return (intptr_t)this_ptr + 0x20;
  default:
    this_ptr = (void *)0x0;
  }
  return (intptr_t)this_ptr;
}







void FUN_10002458(void)

{
  void *extraout_ECX;
  
  FUN_10002470();
  DAT_1000f7d4_ovl = FUN_10002d7a();
  FUN_10002d2a(extraout_ECX);
  return;
}





void FUN_10002470(void)

{
  return;
}





void OnInit(void)

{
  DWORD DVar1;
  int *puVar2;
  
                    
  RegisterVar(&DAT_1000c030,8);
  RegisterDynGroup(&DAT_1000f7a8);
  RegisterVar(&DAT_1000f7a8,8);
  RegisterDynGroup(&DAT_1000f690);
  RegisterVar(&DAT_1000f690,8);
  RegisterVar(&DAT_1000f7b4,4);
  RegisterVar(&DAT_1000c038,4);
  puVar2 = &DAT_1000f610;
  do {
    RegisterDynGroup(puVar2);
    puVar2 = puVar2 + 8;
  } while ((int)puVar2 < 0x1000f690);
  RegisterVar(&DAT_1000f610,0x80);
  RegisterUnits(&DAT_1000f608,"GAustrDip");
  RegisterUnits(&DAT_1000f600,"GPrussDip");
  RegisterUnits(&DAT_1000f5f8,"GSaxssDip");
  RegisterUnits(&DAT_1000f5f0,"GPortgDip");
  RegisterZone(&DAT_1000f5e8,"ZAustrDestP");
  RegisterZone(&DAT_1000f5e0,"ZPrussDestP");
  RegisterZone(&DAT_1000f5d8,"ZSaxssDestP");
  RegisterZone(&DAT_1000f5d0,"ZPortgDestP");
  FUN_10002110(&DAT_1000f5a0,0);
  FUN_10002110(&DAT_1000f570,1);
  FUN_10002110(&DAT_1000f540,2);
  FUN_10002110(&DAT_1000f510,3);
  RegisterDynGroup(&DAT_1000f508);
  RegisterVar(&DAT_1000f508,8);
  RegisterDynGroup(&DAT_1000f500);
  RegisterVar(&DAT_1000f500,8);
  RegisterDynGroup(&DAT_1000f4f8);
  RegisterVar(&DAT_1000f4f8,8);
  RegisterDynGroup(&DAT_1000f4f0);
  RegisterVar(&DAT_1000f4f0,8);
  RegisterVar(&DAT_1000f6a0,0x108);
  RegisterUnitType(&DAT_1000f6a0,"CenterUR(UA)");
  RegisterUnitType(&DAT_1000f6a8,"Ukrainska_hata(UA)");
  RegisterUnitType(&DAT_1000f6b0,"Melnica_rus(UA)");
  RegisterUnitType(&DAT_1000f6b8,"Sclad3(UA)");
  RegisterUnitType(&DAT_1000f6c0,"shahta(UA)");
  RegisterUnitType(&DAT_1000f6c8,"shahta_FE(UA)");
  RegisterUnitType(&DAT_1000f6d0,"shahta_UG(UA)");
  RegisterUnitType(&DAT_1000f6d8,"Kuznica_ua(UA)");
  RegisterUnitType(&DAT_1000f6e0,"konushnia_ua(UA)");
  RegisterUnitType(&DAT_1000f6e8,"Cerkov_UA(UA)");
  RegisterUnitType(&DAT_1000f6f0,"akademia_UA(UA)");
  RegisterUnitType(&DAT_1000f6f8,"Dip_korpus_UA(UA)");
  RegisterUnitType(&DAT_1000f700,"Rinok(UA)");
  RegisterUnitType(&DAT_1000f708,"Strelcovaia_Izba(UA)");
  RegisterUnitType(&DAT_1000f710,"artileri_depo_UA(UA)");
  RegisterUnitType(&DAT_1000f718,"Poru(UA)");
  RegisterUnitType(&DAT_1000f720,"Center_Poland(PL)");
  RegisterUnitType(&DAT_1000f728,"Dom_Poland(PL)");
  RegisterUnitType(&DAT_1000f730,"Melnica(PL)");
  RegisterUnitType(&DAT_1000f738,"Sclad2(PL)");
  RegisterUnitType(&DAT_1000f740,"shahta(PL)");
  RegisterUnitType(&DAT_1000f748,"shahta_FE(PL)");
  RegisterUnitType(&DAT_1000f750,"shahta_UG(PL)");
  RegisterUnitType(&DAT_1000f758,"Kuznica(PL)");
  RegisterUnitType(&DAT_1000f760,"Konushnia_Swesair(PL)");
  RegisterUnitType(&DAT_1000f768,"Cercov_Poland(PL)");
  RegisterUnitType(&DAT_1000f770,"akademia_E(PL)");
  RegisterUnitType(&DAT_1000f778,"Dip_korpus(PL)");
  RegisterUnitType(&DAT_1000f780,"Kazarma_evro(PL)");
  RegisterUnitType(&DAT_1000f788,"Kazarma(PL)");
  RegisterUnitType(&DAT_1000f790,"artileri_depo(PL)");
  RegisterUnitType(&DAT_1000f798,"Rinok(PL)");
  RegisterUnitType(&DAT_1000f7a0,"Bashnia(PL)");
  RegisterVar(&DAT_1000f698,8);
  RegisterUnitType(&DAT_1000f698,"WALL_UKR(UA)");
  ChangeFriends(0,3);
  ChangeFriends(2,0xc);
  SetPlayerName(2,"MECENARY");
  SetPlayerName(3,"POLAND");
  DVar1 = time(NULL);
  srand(DVar1);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  void *pcVar4;
  void *pcVar5;
  int iVar6;
  void *pcVar7;
  int *puVar8;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    iVar6 = 0;
    do {
      iVar2 = GetDiff(0);
      SetResource(0,iVar6,(10 - iVar2) * 1000);
      SetResource(2,iVar6,10000000);
      iVar2 = GetDiff(0);
      SetResource(3,iVar6,(5 - iVar2) * 1000);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    iVar6 = GetDiff(0);
    DAT_1000f7b4 = (iVar6 + 1) * 5;
    iVar6 = GetDiff(0);
    DAT_1000c038 = (10 - iVar6) * 100;
    uVar3 = GetDiff(0);
    StartAI(3,"POLAND.0",0,1,1,uVar3);
    ShowPage("#PAGE2301");
    EnableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x44);
    EnableMission(0x46);
    EnableMission(0x47);
    DisableMission(0x43);
    DisableMission(0x45);
    RunTimer(1,500);
    RunTimer(2,500);
    RunTimer(3,500);
    RunTimer(4,500);
    iVar6 = GetDiff(0);
    RunTimer(5,(5 - iVar6) * 1000);
    SetTrigg(3,0);
    SetTrigg(4,0);
    SetTrigg(5,0);
    SetTrigg(6,0);
  }
  iVar6 = GetTotalAmount0(&DAT_1000f608);
  if ((iVar6 != 0) && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    cVar1 = TimerDone(1);
    if ((cVar1 != '\0') && (iVar6 = FUN_100020d0(0x1000f610,4), iVar6 != 0)) {
      SetTrigg(3,0);
    }
    cVar1 = Trigg(3);
    if (cVar1 != '\0') {
      cVar1 = CheckProduction(&DAT_1000f608);
      if (cVar1 != '\0') {
        puVar8 = &DAT_1000f508;
        iVar6 = rand();
        iVar6 = FUN_10002280(&DAT_1000f5a0,iVar6 % 5);
        ProduceUnit(&DAT_1000f608,iVar6,puVar8);
      }
      iVar6 = GetTotalAmount0(&DAT_1000f508);
      if (DAT_1000f7b4 <= iVar6) {
        iVar6 = FUN_100020d0(0x1000f610,4);
        RemoveGroup(&DAT_1000f508,iVar6);
        RunTimer(1,DAT_1000c038);
        SetTrigg(3,0);
      }
    }
  }
  iVar6 = GetTotalAmount0(&DAT_1000f600);
  if ((iVar6 != 0) && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    cVar1 = TimerDone(2);
    if ((cVar1 != '\0') && (iVar6 = FUN_100020d0(0x1000f630,4), iVar6 != 0)) {
      SetTrigg(4,0);
    }
    cVar1 = Trigg(4);
    if (cVar1 != '\0') {
      cVar1 = CheckProduction(&DAT_1000f600);
      if (cVar1 != '\0') {
        puVar8 = &DAT_1000f500;
        iVar6 = rand();
        iVar6 = FUN_10002280(&DAT_1000f570,iVar6 % 5);
        ProduceUnit(&DAT_1000f600,iVar6,puVar8);
      }
      iVar6 = GetTotalAmount0(&DAT_1000f500);
      if (DAT_1000f7b4 <= iVar6) {
        iVar6 = FUN_100020d0(0x1000f630,4);
        RemoveGroup(&DAT_1000f500,iVar6);
        RunTimer(2,DAT_1000c038);
        SetTrigg(4,0);
      }
    }
  }
  iVar6 = GetTotalAmount0(&DAT_1000f5f8);
  if ((iVar6 != 0) && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    cVar1 = TimerDone(3);
    if ((cVar1 != '\0') && (iVar6 = FUN_100020d0(0x1000f650,4), iVar6 != 0)) {
      SetTrigg(5,0);
    }
    cVar1 = Trigg(5);
    if (cVar1 != '\0') {
      cVar1 = CheckProduction(&DAT_1000f5f8);
      if (cVar1 != '\0') {
        puVar8 = &DAT_1000f4f8;
        iVar6 = rand();
        iVar6 = FUN_10002280(&DAT_1000f540,iVar6 % 5);
        ProduceUnit(&DAT_1000f5f8,iVar6,puVar8);
      }
      iVar6 = GetTotalAmount0(&DAT_1000f4f8);
      if (DAT_1000f7b4 <= iVar6) {
        iVar6 = FUN_100020d0(0x1000f650,4);
        RemoveGroup(&DAT_1000f4f8,iVar6);
        RunTimer(3,DAT_1000c038);
        SetTrigg(5,0);
      }
    }
  }
  iVar6 = GetTotalAmount0(&DAT_1000f5f0);
  if ((iVar6 != 0) && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    cVar1 = TimerDone(4);
    if ((cVar1 != '\0') && (iVar6 = FUN_100020d0(0x1000f670,4), iVar6 != 0)) {
      SetTrigg(6,0);
    }
    cVar1 = Trigg(6);
    if (cVar1 != '\0') {
      cVar1 = CheckProduction(&DAT_1000f5f0);
      if (cVar1 != '\0') {
        puVar8 = &DAT_1000f4f0;
        iVar6 = rand();
        iVar6 = FUN_10002280(&DAT_1000f510,iVar6 % 5);
        ProduceUnit(&DAT_1000f5f0,iVar6,puVar8);
      }
      iVar6 = GetTotalAmount0(&DAT_1000f4f0);
      if (DAT_1000f7b4 <= iVar6) {
        iVar6 = FUN_100020d0(0x1000f670,4);
        RemoveGroup(&DAT_1000f4f0,iVar6);
        RunTimer(4,DAT_1000c038);
        SetTrigg(6,0);
      }
    }
  }
  SaveSelectedUnits(0,&DAT_1000f690,0);
  puVar8 = &DAT_1000f610;
  do {
    FUN_10002050(puVar8,2,&DAT_1000f7a8,0,0x1000c030,8,0x1000f6a0,0x21,0x1000f698);
    puVar8 = puVar8 + 8;
  } while ((int)puVar8 < 0x1000f690);
  FUN_10001f20();
  SelectUnits(&DAT_1000f690,0);
  FUN_10001a00(&DAT_1000f690);
  cVar1 = Trigg(7);
  if (cVar1 != '\0') {
    cVar1 = NationIsErased(3);
    if (cVar1 != '\0') {
      SetTrigg(7,0);
      ShowPage("#PAGE2304");
      EnableMission(0x43);
      DisableMission(0x42);
    }
    iVar6 = GetTotalAmount0(&DAT_1000f608);
    if ((((iVar6 == 0) && (iVar6 = GetTotalAmount0(&DAT_1000f600), iVar6 == 0)) &&
        (iVar6 = GetTotalAmount0(&DAT_1000f5f8), iVar6 == 0)) &&
       (iVar6 = GetTotalAmount0(&DAT_1000f5f0), iVar6 == 0)) {
      SetTrigg(7,0);
      ShowPage("#PAGE2305");
      EnableMission(0x45);
      DisableMission(0x44);
    }
  }
  cVar1 = NationIsErased(3);
  if (((cVar1 != '\0') && (iVar6 = GetTotalAmount0(&DAT_1000f608), iVar6 == 0)) &&
     ((iVar6 = GetTotalAmount0(&DAT_1000f600), iVar6 == 0 &&
      ((iVar6 = GetTotalAmount0(&DAT_1000f5f8), iVar6 == 0 &&
       (iVar6 = GetTotalAmount0(&DAT_1000f5f0), iVar6 == 0)))))) {
    ShowPage("#PAGE2303");
    ShowVictory();
  }
  cVar1 = NationIsErased(0);
  if (cVar1 == '\0') {
    return;
  }
  ShowPage("#PAGE2302");
                    
                    
  LooseGame();
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

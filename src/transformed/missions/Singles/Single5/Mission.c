#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_1000a1c8 = 0;
long long DAT_1000a1d0 = 0;
long long DAT_1000c060 = 0;
char DAT_1000c0b0[] = "GLin";
char DAT_1000c0c8[] = "ZVis";
char DAT_1000c0d0[] = "GKom";
int DAT_1000c2b8 = 0;
int DAT_1000c2bc = 0;
int DAT_1000c2c0 = 0;
long long DAT_1000f270 = 0;
long long DAT_1000f278 = 0;
long long DAT_1000f280 = 0;
long long DAT_1000f288 = 0;
long long DAT_1000f290 = 0;
long long DAT_1000f298 = 0;
long long DAT_1000f2a0 = 0;
long long DAT_1000f2a8 = 0;
long long DAT_1000f2b0 = 0;
long long DAT_1000f2b8 = 0;
long long DAT_1000f2c0 = 0;
long long DAT_1000f2c8 = 0;
long long DAT_1000f2d0 = 0;
long long DAT_1000f2d8 = 0;
long long DAT_1000f2e0 = 0;
long long DAT_1000f2e8 = 0;
long long DAT_1000f2ed = 0;
long long DAT_1000f308 = 0;
long long DAT_1000f30d = 0;
long long DAT_1000f328 = 0;
long long DAT_1000f32d = 0;
long long DAT_1000f348 = 0;
long long DAT_1000f34d = 0;
long long DAT_1000f368 = 0;
long long DAT_1000f36d = 0;
long long DAT_1000f388 = 0;
long long DAT_1000f38d = 0;
long long DAT_1000f3a8 = 0;
long long DAT_1000f3ad = 0;
long long DAT_1000f3c8 = 0;
long long DAT_1000f3cd = 0;
long long DAT_1000f3e8 = 0;
long long DAT_1000f3ed = 0;
long long DAT_1000f408 = 0;
long long DAT_1000f410 = 0;
long long DAT_1000f418 = 0;
long long DAT_1000f420 = 0;
long long DAT_1000f428 = 0;
long long DAT_1000f430 = 0;
long long DAT_1000f438 = 0;
long long DAT_1000f440 = 0;
long long DAT_1000f448 = 0;
long long DAT_1000f450 = 0;
long long DAT_1000f458 = 0;
long long DAT_1000f460 = 0;
long long DAT_1000f468 = 0;
long long DAT_1000f470 = 0;
long long DAT_1000f490 = 0;
long long DAT_1000f498 = 0;
long long DAT_1000f4a8 = 0;
long long DAT_1000f4b0 = 0;
long long DAT_1000f4dc = 0;
int DAT_1000a1c8_ovl = -1065151889;
int DAT_1000a1d0_ovl = 0;
int DAT_1000f4dc_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10002bdf() { return 0; }
int FUN_10002eb7() { return 0; }
int FUN_10002f07() { return 0; }


/* Forward declarations */
void FUN_10001dd0(int param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6);
BOOL FUN_10001e90(int param_1);
void FUN_10001ed0(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5);
void  FUN_100020a0(int param_1);
int FUN_10002100(int param_1,int param_2,int param_3);
void FUN_10002190(int param_1,int param_2,int param_3);
void  FUN_100022e0(int param_1);
void  FUN_10002320(void *this_ptr,int param_1,int param_2);
void  FUN_10002370(char *param_1);
void FUN_100025eb(int *param_1);
void FUN_100026ce(void);
void FUN_100026f4(void);
void FUN_1000270c(void);

void OnInit();
void ProcessScenary();


void __cdecl
FUN_10001dd0(int param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  char cVar1;
  int iVar2;
  
  cVar1 = Trigg(param_1);
  if (cVar1 != '\0') {
    iVar2 = GetDiff(0);
    iVar2 = FUN_10002100(param_2,param_3,(5 - iVar2) * 1000);
    if (iVar2 < 8) {
      if (iVar2 == 0) {
        iVar2 = GetDiff(0);
        ShowPageParam("#PAGE2611",(5 - iVar2) * 1000);
      }
      SetTrigg(param_1,0);
    }
    cVar1 = TimerDone(param_4);
    if (cVar1 != '\0') {
      FUN_10002190(param_2,param_5,param_6);
      RunTimer(param_4,300);
    }
  }
  return;
}





BOOL __cdecl FUN_10001e90(int param_1)

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







void __cdecl
FUN_10001ed0(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  char extraout_ST0;
  long long lVar6;
  int uVar7;
  short uStack_34;
  short uStack_32;
  int uStack_30;
  unsigned int auStack_2c [11];
  
  iVar1 = GetTotalAmount0(param_1);
  if (param_3 < iVar1) {
    puVar2 = (unsigned int *)(iVar1 - param_3);
  }
  else {
    puVar2 = (unsigned int *)0x0;
  }
  uStack_30 = 0x4000000a;
  uStack_34 = 0;
  uStack_32 = 0;
  if (puVar2 != (unsigned int *)0x0) {
    ClearSelection(param_2);
    SelectUnits(param_1,0);
    SaveSelectedUnits(param_2,param_5,0);
    param_1 = puVar2;
    if (0 < (int)puVar2) {
      do {
        iVar1 = GetTotalAmount0(param_5);
        iVar3 = rand();
        RemoveUnitFromGroup(param_5,iVar3 % iVar1);
        param_1 = (unsigned int *)((intptr_t)param_1 + -1);
      } while (param_1 != (unsigned int *)0x0);
    }
  }
  iVar1 = GetTotalAmount0(param_5);
  puVar2 = malloc(iVar1 * 4);
  iVar3 = 0;
  param_1 = puVar2;
  if (0 < iVar1) {
    do {
      GetUnitInfo(param_5,iVar3,auStack_2c);
      *param_1 = auStack_2c[0] & 0xffff;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_10001e90(param_5);
  puVar5 = puVar2;
  if (0 < iVar1) {
    do {
      InsertUnitToGroup(0,param_5,*puVar5);
      GetUnitInfo(param_5,0,auStack_2c);
      uVar4 = rand();
      uVar4 = uVar4 & -2147483393;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | -256) + 1;
      }
      cos((long double)(int)uVar4 * (long double)DAT_1000a1d0_ovl * (long double)DAT_1000a1c8_ovl);
      lVar6 = 0;
      sin(extraout_ST0);
      uStack_34 = (short)lVar6;
      lVar6 = 0;
      uStack_32 = (short)lVar6;
      ClearSelection(param_2);
      SelectUnits(param_5,0);
      uVar7 = 0;
      iVar3 = rand();
      SelSendAndKill(param_2,&uStack_34,iVar3 % 0xfa,uVar7);
      FUN_10001e90(param_5);
      iVar1 = iVar1 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar1 != 0);
  }
  FUN_100025eb((int *)puVar2);
  return;
}





void  FUN_100020a0(int param_1)

{
  RegisterFormation(param_1,"#ALONE");
  RegisterUnitType(param_1 + 8,"SUNDUK1O(UN)");
  RegisterUnitType(param_1 + 0x10,"SUNDUK1Z(UN)");
  return;
}






int __cdecl FUN_10002100(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 8;
  iVar1 = GetTotalAmount0(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      if (iVar3 != 8) {
        return iVar3;
      }
      iVar2 = GetUnitsAmount0(param_1,iVar1);
      if (iVar2 != 0) {
        AddResource(iVar1,1,param_3);
        SelectUnits(param_1 + 0x10,0);
        SelErase(6);
        CreateObject0(param_1 + 0x10,param_2,param_2 + 8,6,param_1,0);
        iVar3 = iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
  }
  return iVar3;
}







void __cdecl FUN_10002190(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  long long lVar6;
  int uVar7;
  char auStack_3c [4];
  char auStack_38 [4];
  short uStack_34;
  short uStack_32;
  int uStack_30;
  unsigned int auStack_2c [11];
  
  iVar1 = param_1 + 8;
  iVar3 = GetTotalAmount0(iVar1);
  if (iVar3 != 0) {
    iVar5 = 0;
    uStack_34 = 0;
    uStack_32 = 0;
    uStack_30 = 0x4000000a;
    iVar3 = GetTotalAmount0(iVar1);
    if (0 < iVar3) {
      do {
        FUN_10001e90(param_2);
        GetUnitInfo(iVar1,iVar5,auStack_2c);
        InsertUnitToGroup(0,param_2,auStack_2c[0] & 0xffff);
        uVar4 = rand();
        uVar4 = uVar4 & -2147483393;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | -256) + 1;
        }
        fVar2 = (float)(int)uVar4 * (float)DAT_1000a1d0_ovl * (float)DAT_1000a1c8_ovl;
        rand();
        GetZoneCoor(param_1,auStack_3c,auStack_38);
        cos((long double)fVar2);
        lVar6 = 0;
        sin((long double)fVar2);
        uStack_34 = (short)lVar6;
        lVar6 = 0;
        uStack_32 = (short)lVar6;
        SelectUnits(param_2,0);
        uVar7 = 0;
        iVar3 = rand();
        SelSendAndKill(param_3,&uStack_34,iVar3 % 0xff,uVar7);
        iVar5 = iVar5 + 1;
        iVar3 = GetTotalAmount0(iVar1);
      } while (iVar5 < iVar3);
    }
  }
  return;
}





void  FUN_100022e0(int param_1)

{
  RegisterDynGroup(param_1 + 0xd);
  RegisterVar(param_1 + 0xd,8);
  RegisterDynGroup(param_1 + 0x15);
  RegisterVar(param_1 + 0x15,8);
  RegisterVar(param_1 + 4,4);
  RegisterVar(param_1,4);
  return;
}





void  FUN_10002320(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (intptr_t)this_ptr + 0x15;
  FUN_10001e90(iVar1);
  iVar2 = rand();
  CreateObject0(iVar1,param_2,param_1,
                (int)*(char *)((intptr_t)this_ptr + 4),
                (intptr_t)this_ptr + 5,iVar2 % 0xff);
  RemoveGroup(iVar1,(intptr_t)this_ptr + 0xd);
  return;
}







void  FUN_10002370(char *param_1)

{
  char *puVar1;
  char *puVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  long long lVar8;
  int uVar9;
  char auStack_3c [4];
  char auStack_38 [4];
  short uStack_34;
  short uStack_32;
  int uStack_30;
  unsigned int auStack_2c [11];
  
  puVar1 = param_1 + 0xd;
  iVar5 = GetTotalAmount0(puVar1);
  if (iVar5 != 0) {
    cVar4 = TimerDone(*param_1);
    if (cVar4 != '\0') {
      iVar7 = 0;
      uStack_34 = 0;
      uStack_32 = 0;
      uStack_30 = 0x40000064;
      iVar5 = GetTotalAmount0(puVar1);
      if (0 < iVar5) {
        puVar2 = param_1 + 0x15;
        do {
          FUN_10001e90(puVar2);
          GetUnitInfo(puVar1,iVar7,auStack_2c);
          InsertUnitToGroup(0,puVar2,auStack_2c[0] & 0xffff);
          uVar6 = rand();
          uVar6 = uVar6 & -2147483393;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | -256) + 1;
          }
          fVar3 = (float)(int)uVar6 * (float)DAT_1000a1d0_ovl * (float)DAT_1000a1c8_ovl;
          rand();
          GetZoneCoor(param_1 + 5,auStack_3c,auStack_38);
          cos((long double)fVar3);
          lVar8 = 0;
          sin((long double)fVar3);
          uStack_34 = (short)lVar8;
          lVar8 = 0;
          uStack_32 = (short)lVar8;
          SelectUnits(puVar2,0);
          uVar9 = 0;
          iVar5 = rand();
          SelSendAndKill((intptr_t)param_1[4],&uStack_34,
                         iVar5 % 0xff,uVar9);
          iVar7 = iVar7 + 1;
          iVar5 = GetTotalAmount0(puVar1);
        } while (iVar7 < iVar5);
      }
      RunTimer(*param_1,800);
    }
  }
  return;
}





void __cdecl FUN_100025eb(int *param_1)

{
  FUN_10002bdf(param_1);
  return;
}





void FUN_100026ce(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1000c2bc = *(int *)(unaff_EBP + 8);
  DAT_1000c2b8 = in_EAX;
  DAT_1000c2c0 = unaff_EBP;
  return;
}







void FUN_100026f4(void)

{
  void *extraout_ECX;
  
  FUN_1000270c();
  DAT_1000f4dc_ovl = FUN_10002f07();
  FUN_10002eb7(extraout_ECX);
  return;
}





void FUN_1000270c(void)

{
  return;
}





void OnInit(void)

{
  DWORD DVar1;
  
                    
  RegisterVar(&DAT_1000c060,8);
  RegisterDynGroup(&DAT_1000f4b0);
  RegisterVar(&DAT_1000f4b0,8);
  RegisterDynGroup(&DAT_1000f4a8);
  RegisterVar(&DAT_1000f4a8,8);
  RegisterUnits(&DAT_1000f498,"GYanichar");
  RegisterDynGroup(&DAT_1000f490);
  RegisterVar(&DAT_1000f490,8);
  FUN_100020a0(0x1000f478);
  RegisterUnits(&DAT_1000f468,"GLag1");
  RegisterZone(&DAT_1000f460,"ZLag1");
  RegisterDynGroup(&DAT_1000f470);
  RegisterVar(&DAT_1000f470,8);
  RegisterUnits(&DAT_1000f450,"GLag2");
  RegisterZone(&DAT_1000f448,"ZLag2");
  RegisterDynGroup(&DAT_1000f458);
  RegisterVar(&DAT_1000f458,8);
  RegisterUnits(&DAT_1000f438,"GLag3");
  RegisterZone(&DAT_1000f430,"ZLag3");
  RegisterDynGroup(&DAT_1000f440);
  RegisterVar(&DAT_1000f440,8);
  RegisterUnits(&DAT_1000f420,"GLag4");
  RegisterZone(&DAT_1000f418,"ZLag4");
  RegisterDynGroup(&DAT_1000f428);
  RegisterVar(&DAT_1000f428,8);
  RegisterFormation(&DAT_1000f410,"#ALONE");
  RegisterUnitType(&DAT_1000f408,"Fregat(sp)");
  RegisterZone(&DAT_1000f3ed,"ZSeaPatrol1");
  RegisterZone(&DAT_1000f3cd,"ZSeaPatrol2");
  RegisterZone(&DAT_1000f3ad,"ZSeaPatrol3");
  RegisterZone(&DAT_1000f38d,"ZSeaPatrol4");
  RegisterZone(&DAT_1000f36d,"ZSeaPatrol5");
  RegisterZone(&DAT_1000f34d,"ZSeaPatrol6");
  RegisterZone(&DAT_1000f32d,"ZSeaPatrol7");
  RegisterZone(&DAT_1000f30d,"ZSeaPatrol8");
  RegisterZone(&DAT_1000f2ed,"ZSeaPatrol9");
  FUN_100022e0(0x1000f3e8);
  FUN_100022e0(0x1000f3c8);
  FUN_100022e0(0x1000f3a8);
  FUN_100022e0(0x1000f388);
  FUN_100022e0(0x1000f368);
  FUN_100022e0(0x1000f348);
  FUN_100022e0(0x1000f328);
  FUN_100022e0(0x1000f308);
  FUN_100022e0(0x1000f2e8);
  RegisterUnits(&DAT_1000f2e0,"GWorota");
  RegisterUnits(&DAT_1000f2d8,"GBarack");
  RegisterUnits(&DAT_1000f2d0,"GPlot");
  RegisterZone(&DAT_1000f2c8,"ZPrichal");
  RegisterZone(&DAT_1000f2c0,"ZFortTalk");
  RegisterUnitType(&DAT_1000f2b8,"Mushketer_DA(DA)");
  RegisterDynGroup(&DAT_1000f2b0);
  RegisterVar(&DAT_1000f2b0,8);
  RegisterUnits(&DAT_1000f2a8,DAT_1000c0d0);
  RegisterZone(&DAT_1000f2a0,DAT_1000c0c8);
  RegisterZone(&DAT_1000f298,"ZDestP");
  RegisterUnits(&DAT_1000f280,"GOboz");
  RegisterUnits(&DAT_1000f278,DAT_1000c0b0);
  RegisterUnits(&DAT_1000f270,"GLin1");
  RegisterZone(&DAT_1000f290,"ZObozGive");
  RegisterZone(&DAT_1000f288,"ZObozTalk");
  SetPlayerName(1,"ALLIES");
  SetPlayerName(2,"NIDERLAND");
  SetPlayerName(3,"ROBBERS");
  SetPlayerName(4,"DWELLERS");
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
  int iVar5;
  void *pcVar6;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    ChangeFriends(1,3);
    ChangeFriends(3,10);
    ChangeFriends(4,0x1f);
    iVar5 = 0;
    do {
      iVar2 = GetDiff(0);
      SetResource(0,iVar5,(6 - iVar2) * 1000);
      SetResource(2,iVar5,5000);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 6);
    uVar3 = GetDiff(0);
    StartAI(2,"HOLLAND.0",0,1,1,uVar3);
    RunTimer(1,100);
    RunTimer(2,100);
    RunTimer(3,100);
    RunTimer(4,100);
    RunTimer(5,100);
    RunTimer(6,100);
    RunTimer(7,100);
    RunTimer(8,100);
    RunTimer(9,100);
    RunTimer(10,100);
    RunTimer(0xb,100);
    RunTimer(0xc,100);
    RunTimer(0xd,100);
    RunTimer(0xe,100);
    RunTimer(0xf,100);
    RunTimer(0x10,100);
    RunTimer(0x11,15000);
    CreateObject0(0x1000f460,0x1000f478,0,0,0,0);
    CreateObject0(0x1000f448,0x1000f478,0,0,0,0);
    CreateObject0(0x1000f430,0x1000f478,0,0,0,0);
    CreateObject0(0x1000f418,0x1000f478,0,0,0,0);
    iVar2 = 0;
    iVar5 = GetDiff(0);
    if (iVar5 != -1 && -1 < iVar5 + 1) {
      do {
        FUN_10002320(&DAT_1000f3e8,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f3c8,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f3a8,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f388,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f368,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f348,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f328,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f308,&DAT_1000f408,&DAT_1000f410);
        FUN_10002320(&DAT_1000f2e8,&DAT_1000f408,&DAT_1000f410);
        iVar2 = iVar2 + 1;
        iVar5 = GetDiff(0);
      } while (iVar2 < iVar5 + 1);
    }
    ShowPage("#PAGE2612");
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    DisableMission(0x48);
    DisableMission(0x4a);
    SelectUnits(&DAT_1000f2e0,0);
    SelOpenGates(1);
    SelectUnits(&DAT_1000f2d0,0);
    SelSendTo(1,&DAT_1000f2c8,0xc0,0);
    SetDestPoint(&DAT_1000f2d8,&DAT_1000f298);
  }
  cVar1 = TimerDoneFirst(0x11);
  if (cVar1 != '\0') {
    ShowPage("#PAGE2613");
    SetLightSpot(&DAT_1000f2c0,1,0);
    EnableMission(0x43);
    EnableMission(0x48);
  }
  SaveSelectedUnits(0,&DAT_1000f4a8,0);
  cVar1 = TimerDone(1);
  if (cVar1 != '\0') {
    FUN_10001ed0((unsigned int *)&DAT_1000f498,3,0x1e,400,&DAT_1000f490);
    RunTimer(1,300);
  }
  FUN_10001dd0(2,0x1000f460,0x1000f478,2,&DAT_1000f490,3);
  FUN_10001dd0(3,0x1000f448,0x1000f478,3,&DAT_1000f490,3);
  FUN_10001dd0(4,0x1000f430,0x1000f478,4,&DAT_1000f490,3);
  FUN_10001dd0(5,0x1000f418,0x1000f478,5,&DAT_1000f490,3);
  FUN_10002370(&DAT_1000f3e8);
  FUN_10002370(&DAT_1000f3c8);
  FUN_10002370(&DAT_1000f3a8);
  FUN_10002370(&DAT_1000f388);
  FUN_10002370(&DAT_1000f368);
  FUN_10002370(&DAT_1000f348);
  FUN_10002370(&DAT_1000f328);
  FUN_10002370(&DAT_1000f308);
  FUN_10002370(&DAT_1000f2e8);
  iVar5 = GetUnitsAmount0(&DAT_1000f2c0,0);
  if ((iVar5 != 0) && (cVar1 = Trigg(6), pcVar6 = (void*)&SetTrigg, cVar1 != '\0')) {
    ShowPage("#PAGE2601");
    SetTrigg(6,0);
    SetTrigg(7,0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 == '\0') && (cVar1 = CheckProduction(&DAT_1000f2d8), cVar1 != '\0')) {
    ProduceUnit(&DAT_1000f2d8,&DAT_1000f2b8,&DAT_1000f2b0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 == '\0') && (iVar5 = GetTotalAmount0(&DAT_1000f2b0), iVar5 == 0x4b)) {
    SetTrigg(7,0);
    RunTimer(0xf,500);
  }
  cVar1 = TimerDoneFirst(0xf);
  if ((cVar1 != '\0') && (iVar5 = GetTotalAmount0(&DAT_1000f2b0), 0x4a < iVar5)) {
    ClearSelection(1);
    SelectUnits(&DAT_1000f2a8,0);
    SelectUnits(&DAT_1000f2b0,1);
    SelectUnits(&DAT_1000f2d0,1);
    SendUnitsToTransport(1);
  }
  SelectUnits(&DAT_1000f2d0,0);
  cVar1 = Trigg(8);
  if (cVar1 != '\0') {
    iVar5 = GetTotalAmount0(&DAT_1000f2b0);
    iVar2 = GetNInside(1);
    if (iVar2 == iVar5 + 1) {
      SetTrigg(8,0);
      SelectUnits(&DAT_1000f2d0,0);
      SelSendTo(1,&DAT_1000f2a0,0x80,0);
      ChangeFriends(3,2);
      RunTimer(0x10,500);
      SetTrigg(10,0);
    }
  }
  SelectUnits(&DAT_1000f2d0,0);
  cVar1 = Trigg(10);
  if (((cVar1 == '\0') && (cVar1 = CheckLeaveAbility(1), cVar1 != '\0')) &&
     (cVar1 = TimerDone(0x10), cVar1 != '\0')) {
    PushAllUnitsAway(1);
    SetTrigg(9,0);
    SetTrigg(10,0);
  }
  SelectUnits(&DAT_1000f2d0,0);
  cVar1 = Trigg(9);
  if ((cVar1 == '\0') && (iVar5 = GetNInside(1), iVar5 == 0)) {
    SetTrigg(9,0);
    SelectUnits(&DAT_1000f2a8,0);
    SelectUnits(&DAT_1000f2b0,1);
    SelectUnits(&DAT_1000f2d0,1);
    SelChangeNation(1,0);
    ShowPage("#PAGE2602");
    SetTrigg(0xe,0);
    DisableMission(0x43);
    DisableMission(0x48);
    EnableMission(0x45);
    EnableMission(0x4a);
  }
  ClearSelection(1);
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar5 = GetUnitsAmount0(&DAT_1000f288,0), iVar5 != 0)) {
    SetTrigg(0xb,0);
    ShowPage("#PAGE2603");
  }
  cVar1 = Trigg(0xb);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
     (iVar5 = GetUnitsAmount0(&DAT_1000f290,0), iVar5 != 0)) {
    SetTrigg(0xc,0);
    ShowPage("#PAGE2604");
    SelectUnits(&DAT_1000f280,0);
    SelChangeNation(4,0);
  }
  cVar1 = Trigg(0xc);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0xd), cVar1 != '\0')) &&
     (iVar5 = GetUnitsAmount0(&DAT_1000f288,0), iVar5 != 0)) {
    iVar5 = GetUnitsAmount1(&DAT_1000f288,&DAT_1000f280);
    iVar2 = GetTotalAmount0(&DAT_1000f280);
    if (iVar2 == iVar5) {
      iVar5 = GetTotalAmount0(&DAT_1000f280);
      iVar2 = GetDiff(0);
      if (iVar5 <= iVar2 + 5) {
        ShowPage("#PAGE2605");
        SetTrigg(0xd,0);
      }
      iVar5 = GetTotalAmount0(&DAT_1000f280);
      iVar2 = GetDiff(0);
      if (iVar2 + 5 < iVar5) {
        iVar5 = GetTotalAmount0(&DAT_1000f280);
        iVar2 = GetDiff(0);
        if (iVar5 <= iVar2 + 10) {
          ShowPage("#PAGE2606");
          SelectUnits(&DAT_1000f280,0);
          SelChangeNation(0,4);
          SelectUnits(&DAT_1000f270,0);
          SelChangeNation(4,0);
          SetTrigg(0xd,0);
        }
      }
      iVar5 = GetTotalAmount0(&DAT_1000f280);
      iVar2 = GetDiff(0);
      if (iVar2 + 10 < iVar5) {
        ShowPage("#PAGE2607");
        SelectUnits(&DAT_1000f278,0);
        SelChangeNation(4,0);
        SelectUnits(&DAT_1000f280,0);
        SelChangeNation(0,4);
        SetTrigg(0xd,0);
      }
    }
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE2610");
    ShowVictory();
  }
  cVar1 = NationIsErased(2);
  if (cVar1 != '\0') {
    DisableMission(0x42);
    EnableMission(0x44);
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    ShowPage("#PAGE2608");
    LooseGame();
  }
  iVar5 = GetTotalAmount0(&DAT_1000f2b0);
  if (((iVar5 == 0) && (iVar5 = GetTotalAmount0(&DAT_1000f2d0), iVar5 == 0)) &&
     (cVar1 = Trigg(0xe), cVar1 != '\0')) {
    ShowPage("#PAGE2609");
    LooseGame();
  }
  ClearSelection(0);
  SelectUnits(&DAT_1000f4a8,0);
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

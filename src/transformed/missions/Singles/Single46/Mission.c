#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
int this_ptr = 0;
char DAT_1003002c[] = "SUXX";
char DAT_100303ec[] = "Zk4b";
char DAT_100303f4[] = "Zk3b";
char DAT_100303fc[] = "Zk2b";
char DAT_10030404[] = "Zk1b";
char DAT_1003040c[] = "Zk4a";
char DAT_10030414[] = "Zk3a";
char DAT_1003041c[] = "Zk2a";
char DAT_10030424[] = "Zk1a";
char DAT_1003042c[] = "Zk4";
char DAT_10030430[] = "Zk3";
char DAT_10030434[] = "Zk2";
char DAT_10030438[] = "Zk1";
char DAT_1003048c[] = "Gk2b";
char DAT_10030494[] = "Gk1b";
char DAT_1003049c[] = "Gk2a";
char DAT_100304a4[] = "Gk1a";
char DAT_100304ac[] = "Gk2";
char DAT_100304b0[] = "Gk1";
long long DAT_100373e0 = 0;
long long DAT_100373e8 = 0;
long long DAT_100373f0 = 0;
long long DAT_100373f8 = 0;
long long DAT_10037400 = 0;
long long DAT_10037408 = 0;
long long DAT_10037410 = 0;
long long DAT_10037418 = 0;
long long DAT_10037420 = 0;
long long DAT_10037428 = 0;
long long DAT_10037430 = 0;
long long DAT_10037438 = 0;
long long DAT_10037440 = 0;
long long DAT_10037448 = 0;
long long DAT_10037450 = 0;
long long DAT_10037458 = 0;
long long DAT_10037460 = 0;
long long DAT_10037468 = 0;
long long DAT_10037470 = 0;
long long DAT_10037478 = 0;
long long DAT_10037480 = 0;
long long DAT_10037488 = 0;
long long DAT_10037490 = 0;
long long DAT_10037498 = 0;
long long DAT_100374a0 = 0;
long long DAT_100374a8 = 0;
long long DAT_100374b0 = 0;
long long DAT_100374b8 = 0;
long long DAT_100374c0 = 0;
long long DAT_100374c8 = 0;
long long DAT_100374d0 = 0;
long long DAT_100374d8 = 0;
long long DAT_100374e0 = 0;
long long DAT_100374e8 = 0;
long long DAT_100374f0 = 0;
long long DAT_100374f8 = 0;
long long DAT_10037500 = 0;
long long DAT_10037508 = 0;
long long DAT_10037510 = 0;
long long DAT_10037518 = 0;
long long DAT_10037520 = 0;
long long DAT_10037528 = 0;
long long DAT_10037530 = 0;
long long DAT_10037538 = 0;
long long DAT_10037540 = 0;
long long DAT_10037548 = 0;
long long DAT_10037550 = 0;
long long DAT_10037558 = 0;
long long DAT_10037560 = 0;
long long DAT_10037568 = 0;
long long DAT_10037570 = 0;
long long DAT_10037578 = 0;
long long DAT_10037580 = 0;
long long DAT_10037588 = 0;
long long DAT_10037590 = 0;
long long DAT_10037598 = 0;
long long DAT_100375a0 = 0;
long long DAT_100375a8 = 0;
long long DAT_100375b0 = 0;
int DAT_100375b8 = 0;
long long DAT_100375c0 = 0;
long long DAT_100375c8 = 0;
long long DAT_100375d0 = 0;
long long DAT_100375d8 = 0;
long long DAT_100375e0 = 0;
long long DAT_100375e8 = 0;
long long DAT_100375f0 = 0;
long long DAT_100375f8 = 0;
long long DAT_10037600 = 0;
long long DAT_10037608 = 0;
int DAT_10037610 = 0;
long long DAT_10037614 = 0;
long long DAT_10037618 = 0;
long long DAT_10037620 = 0;
long long DAT_10037628 = 0;
long long DAT_10037630 = 0;
long long DAT_10037638 = 0;
int DAT_10037640 = 0;
long long DAT_10037648 = 0;
long long DAT_10037650 = 0;
long long DAT_10037658 = 0;
long long DAT_10037660 = 0;
long long DAT_10037668 = 0;
int DAT_10037670 = 0;
long long DAT_10037678 = 0;
long long DAT_10037680 = 0;
long long DAT_10037688 = 0;
long long DAT_10037690 = 0;
long long DAT_10037698 = 0;
long long DAT_100376a0 = 0;
long long DAT_100376a8 = 0;
long long DAT_100376b0 = 0;
long long DAT_100376b8 = 0;
int DAT_100376c0 = 0;
long long DAT_100376c8 = 0;
long long DAT_100376d0 = 0;
long long DAT_100376d8 = 0;
long long DAT_100376e0 = 0;
long long DAT_100376e8 = 0;
long long DAT_100376f0 = 0;
long long DAT_100376f8 = 0;
long long DAT_10037700 = 0;
int DAT_10037708 = 0;
int DAT_1003770c = 0;
long long DAT_10037710 = 0;
long long DAT_10037718 = 0;
long long DAT_10037720 = 0;
long long DAT_10037728 = 0;
int DAT_10037730 = 0;
long long DAT_10037738 = 0;
long long DAT_10037768 = 0;
long long DAT_10037798 = 0;
long long DAT_100377c8 = 0;
long long DAT_100377f8 = 0;
long long DAT_10037800 = 0;
long long DAT_10037830 = 0;
long long DAT_10037838 = 0;
long long DAT_10037868 = 0;
long long DAT_10037898 = 0;
int DAT_100378a0 = 0;
long long DAT_100378a8 = 0;
long long DAT_100378d8 = 0;
long long DAT_10037908 = 0;
long long DAT_10037910 = 0;
long long DAT_10037918 = 0;
int DAT_10037920 = 0;
int DAT_10037924 = 0;
long long DAT_10037928 = 0;
int DAT_10037930 = 0;
long long DAT_10037938 = 0;
long long DAT_10037940 = 0;
long long DAT_10037948 = 0;
long long DAT_10037950 = 0;
long long DAT_10037958 = 0;
long long DAT_10037960 = 0;
long long DAT_10037968 = 0;
long long DAT_10037970 = 0;
long long DAT_10037978 = 0;
long long DAT_10037980 = 0;
long long DAT_10037988 = 0;
long long DAT_10037990 = 0;
long long DAT_10037998 = 0;
long long DAT_100379a0 = 0;
long long DAT_100379d0 = 0;
long long DAT_10037a00 = 0;
long long DAT_10037a30 = 0;

/* Forward declarations */
void  FUN_10001060(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10001160(void *this_ptr,int param_1);
void  FUN_10001210(int param_1);
void FUN_10001300(void);
void  FUN_100013a0(void *this_ptr,int param_1,byte param_2);

void OnInit();
void ProcessScenary();


void  FUN_10001060(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterVar(this_ptr,0x2e);
  RegisterUnits(local_8,param_1);
  RegisterUnitType((intptr_t)local_8 + 8,param_2);
  RegisterDynGroup((intptr_t)local_8 + 0x10);
  RegisterDynGroup((intptr_t)local_8 + 0x18);
  *(char *)((intptr_t)local_8 + 0x20) = 1;
  *(char *)((intptr_t)local_8 + 0x21) = 0;
  *(int *)((intptr_t)local_8 + 0x2a) = param_3;
  local_8 = (void *)0x10001122;
  return;
}





void  FUN_10001160(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_c;
  void *local_8;
if (*(char *)((int)this_ptr + 0x20) != '\0') {
    *(char *)((int)this_ptr + 0x20) = 0;
    local_8 = this_ptr;
    for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
      ProduceUnitFast(local_8,(intptr_t)local_8 + 8,(intptr_t)local_8 + 0x10,0);
    }
  }
  local_8 = (void *)0x100011df;
  return;
}





void  FUN_10001210(int param_1)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  if (*(char *)(param_1 + 0x21) == '\0') {
    iVar3 = GetTotalAmount0(param_1);
    if (0 < iVar3) {
      uVar1 = CheckProduction(local_8);
      if ((uVar1 & 0xff) != 0) {
        *(char *)(local_8 + 0x21) = 1;
        uVar2 = GetGlobalTime();
        *(int *)(local_8 + 0x22) = uVar2;
      }
    }
  }
  if (*(char *)(local_8 + 0x21) != '\0') {
    GetGlobalTime();
  }
  return;
}





void FUN_10001300(void)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  int local_10;
  int local_c;
  int local_8;
local_c = GetGlobalTime();
  local_10 = GetTotalAmount0(local_8 + 0x18);
  return;
}





void  FUN_100013a0(void *this_ptr,int param_1,byte param_2)

{
  int uVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  int local_48 [16];
  void *local_8;
*(char *)((int)this_ptr + 0x20) = 1;
  *(char *)((int)this_ptr + 0x21) = 0;
  local_8 = this_ptr;
  uVar1 = GetGlobalTime();
  *(int *)((intptr_t)local_8 + 0x26) = uVar1;
  RemoveGroup((intptr_t)local_8 + 0x10,(intptr_t)local_8 + 0x18);
  SelectUnits((intptr_t)local_8 + 0x18,0);
  uVar2 = (unsigned int)param_2;
  iVar3 = rand();
  SelSendAndKill(*(char *)((intptr_t)local_8 + 0x2a),param_1,iVar3 % 0xfe,uVar2);
  ClearSelection(*(char *)((intptr_t)local_8 + 0x2a));
  local_8 = (void *)0x10001470;
  return;
}






void OnInit(void)

{
  DWORD DVar1;
  int iVar2;
  int *puVar3;
  int uStack_8;
RegisterUnits(&DAT_10037480,"Ghetman");
  RegisterUnits(&DAT_10037548,"Gholop1");
  RegisterUnits(&DAT_10037540,"Gholop2");
  RegisterUnits(&DAT_10037538,"Gholop3");
  RegisterUnits(&DAT_10037530,"Gholop4");
  RegisterUnits(&DAT_10037528,"Gholop5");
  RegisterUnits(&DAT_10037568,"Gholop6");
  RegisterUnits(&DAT_10037560,"Gholop7");
  RegisterUnits(&DAT_10037558,"Gholop8");
  RegisterUnits(&DAT_10037550,"Gholop9");
  RegisterUnits(&DAT_100374e8,"Gholop10");
  RegisterUnits(&DAT_100374d0,"Gholop11");
  RegisterUnits(&DAT_100374c8,"Gholop12");
  RegisterUnits(&DAT_100374e0,"Gholop13");
  RegisterUnits(&DAT_100374d8,"Gholop14");
  RegisterUnits(&DAT_100374b0,"Gholop15");
  RegisterUnits(&DAT_100374a8,"Gholop16");
  RegisterUnits(&DAT_100374c0,"Gholop17");
  RegisterUnits(&DAT_100374b8,"Gholop18");
  RegisterUnits(&DAT_100374a0,"Gholop19");
  RegisterUnits(&DAT_10037678,"Gbos1");
  RegisterUnits(&DAT_10037680,"Gbos2");
  RegisterUnits(&DAT_10037688,"Gbos3");
  RegisterUnits(&DAT_10037690,"Gbos4");
  RegisterUnits(&DAT_10037698,"Gbos5");
  RegisterUnits(&DAT_100376a0,"Gbos6");
  RegisterUnits(&DAT_100376a8,"Gbos7");
  RegisterUnits(&DAT_100376b0,"Gbos8");
  RegisterUnits(&DAT_100376b8,"Gbos9");
  RegisterUnits(&DAT_10037488,"Gobj1");
  RegisterUnits(&DAT_10037490,"Gobj2");
  RegisterUnits(&DAT_10037498,"Gobj3");
  RegisterUnits(&DAT_10037588,"Gbash1");
  RegisterUnits(&DAT_10037580,"Gbash2");
  RegisterUnits(&DAT_10037590,"Gbash3");
  RegisterUnits(&DAT_100376d0,DAT_100304b0);
  RegisterUnits(&DAT_100376d8,DAT_100304ac);
  RegisterUnits(&DAT_100376e8,DAT_100304a4);
  RegisterUnits(&DAT_100376f8,DAT_1003049c);
  RegisterUnits(&DAT_100376f0,DAT_10030494);
  RegisterUnits(&DAT_10037700,DAT_1003048c);
  RegisterZone(&DAT_100376e0,"Zband0");
  RegisterZone(&DAT_10037928,"Zband00");
  RegisterZone(&DAT_10037a30,"Zband000");
  RegisterZone(&DAT_10037720,"Zattack1");
  RegisterZone(&DAT_10037728,"Zattack2");
  RegisterZone(&DAT_10037710,"Zattack3");
  RegisterZone(&DAT_10037718,"Zattack4");
  RegisterZone(&DAT_10037980,DAT_10030438);
  RegisterZone(&DAT_10037988,DAT_10030434);
  RegisterZone(&DAT_10037990,DAT_10030430);
  RegisterZone(&DAT_10037998,DAT_1003042c);
  RegisterZone(&DAT_10037938,DAT_10030424);
  RegisterZone(&DAT_10037948,DAT_1003041c);
  RegisterZone(&DAT_10037958,DAT_10030414);
  RegisterZone(&DAT_10037968,DAT_1003040c);
  RegisterZone(&DAT_10037940,DAT_10030404);
  RegisterZone(&DAT_10037950,DAT_100303fc);
  RegisterZone(&DAT_10037960,DAT_100303f4);
  RegisterZone(&DAT_10037970,DAT_100303ec);
  RegisterZone(&DAT_10037428,"Zotxod1");
  RegisterZone(&DAT_10037430,"Zotxod2");
  RegisterZone(&DAT_10037438,"Zotxod3");
  RegisterUnitType(&DAT_10037420,"Kreposnoi_pruss(GE)");
  RegisterUnitType(&DAT_10037460,"Kreposnoi_pruss(DA)");
  RegisterUnitType(&DAT_10037470,"Kreposnoi_pruss(BA)");
  RegisterUnitType(&DAT_10037440,"Kreposnoi_pruss(SA)");
  RegisterUnitType(&DAT_10037450,"Kreposnoi_portugal(PO)");
  RegisterUnitType(&DAT_100374f8,"WALL_EV(GE)");
  RegisterUnitType(&DAT_10037648,"WALL_UKR(GE)");
  RegisterUnitType(&DAT_10037500,"WALL_EV(DA)");
  RegisterUnitType(&DAT_10037658,"WALL_UKR(DA)");
  RegisterUnitType(&DAT_10037508,"WALL_EV(BA)");
  RegisterUnitType(&DAT_10037660,"WALL_UKR(BA)");
  RegisterUnitType(&DAT_10037510,"WALL_EV(SA)");
  RegisterUnitType(&DAT_10037650,"WALL_UKR(SA)");
  RegisterUnitType(&DAT_10037570,"Europ(DA)");
  RegisterUnitType(&DAT_10037578,"Europ(BA)");
  RegisterUnitType(&DAT_10037598,"Center_Sacson(SA)");
  RegisterUnitType(&DAT_100375a0,"Center_Portugal(PO)");
  RegisterUnitType(&DAT_10037608,"artileri_depo(GE)");
  RegisterUnitType(&DAT_10037910,"shahta(GE)");
  RegisterUnitType(&DAT_10037908,"shahta_FE(GE)");
  RegisterUnitType(&DAT_10037918,"shahta_UG(GE)");
  RegisterUpgrade(&DAT_100373e0,"NEWKUTT(GE)");
  RegisterUpgrade(&DAT_100376c8,"NEWKECH(GE)");
  RegisterUpgrade(&DAT_10037668,"NEWFREG(GE)");
  RegisterUpgrade(&DAT_10037518,"NEWVICT(GE)");
  RegisterVar(&DAT_10037458,8);
  RegisterVar(&DAT_10037448,8);
  RegisterVar(&DAT_10037478,8);
  RegisterVar(&DAT_10037468,8);
  RegisterVar(&DAT_10037400,8);
  RegisterVar(&DAT_100373f8,8);
  RegisterVar(&DAT_10037410,8);
  RegisterVar(&DAT_10037408,8);
  RegisterVar(&DAT_10037418,8);
  RegisterVar(&DAT_100375b0,8);
  RegisterVar(&DAT_100375a8,8);
  RegisterVar(&DAT_100375e8,8);
  RegisterVar(&DAT_100375e0,8);
  RegisterVar(&DAT_10037600,8);
  RegisterVar(&DAT_100375f0,8);
  RegisterVar(&DAT_100375c8,8);
  RegisterVar(&DAT_100375c0,8);
  RegisterVar(&DAT_100375d8,8);
  RegisterVar(&DAT_100375d0,8);
  RegisterVar(&DAT_100375f8,8);
  RegisterVar(&DAT_100375b8,4);
  RegisterVar(&DAT_10037610,4);
  RegisterVar(&DAT_10037640,4);
  RegisterVar(&DAT_10037670,4);
  RegisterVar(&DAT_100376c0,4);
  RegisterVar(&DAT_10037708,4);
  RegisterVar(&DAT_10037730,4);
  RegisterVar(&DAT_10037920,4);
  RegisterVar(&DAT_10037930,4);
  RegisterVar(&DAT_1003770c,4);
  RegisterVar(&DAT_100378a0,4);
  RegisterVar(&DAT_10037924,4);
  RegisterVar(&DAT_10037614,4);
  RegisterVar(&DAT_10037978,4);
  RegisterVar(&DAT_10037520,4);
  FUN_10001060(&DAT_10037738,"Gkaz1","Mushketer_DA(DA)",1);
  FUN_10001060(&DAT_10037768,"Gkaz2","Pikiner_evro(DA)",1);
  FUN_10001060(&DAT_10037798,"Gkon1","Gusar_evro(DA)",1);
  FUN_10001060(&DAT_100377c8,"Gkon1","Dragun_18(DA)",1);
  FUN_10001060(&DAT_10037800,"Gkaz3","Mushketer_BA(BA)",2);
  FUN_10001060(&DAT_10037838,"Gkaz4","Pikiner_evro(BA)",2);
  FUN_10001060(&DAT_10037868,"Gkon3","Gusar_evro(BA)",2);
  FUN_10001060(&DAT_100378a8,"Gkon3","Dragun_18(BA)",2);
  FUN_10001060(&DAT_100378d8,"Gkaz5","Mushketer_sakson(SA)",3);
  FUN_10001060(&DAT_100379d0,"Gkaz6","Pikiner_evro(SA)",3);
  FUN_10001060(&DAT_100379a0,"Gkon5","Gusar_evro(SA)",3);
  FUN_10001060(&DAT_10037a00,"Gkon5","Dragun_18(SA)",3);
  RegisterFormation(&DAT_10037898,"#LINE5");
  RegisterFormation(&DAT_10037620,"#LINE20PUS");
  RegisterFormation(&DAT_10037630,"#LINE30PUS");
  RegisterFormation(&DAT_10037638,"#LINE40PUS");
  RegisterFormation(&DAT_10037628,"#LINE15PUS");
  RegisterFormation(&DAT_10037618,"#LINE10PUS");
  RegisterFormation(&DAT_10037830,"#LINE3");
  RegisterFormation(&DAT_100373e8,"#SHIPS3");
  RegisterFormation(&DAT_100373f0,"#SHIPS5");
  RegisterFormation(&DAT_100374f0,"#ALONE");
  RegisterDynGroup(&DAT_10037458);
  RegisterDynGroup(&DAT_10037448);
  RegisterDynGroup(&DAT_10037478);
  RegisterDynGroup(&DAT_10037468);
  RegisterDynGroup(&DAT_10037400);
  RegisterDynGroup(&DAT_100373f8);
  RegisterDynGroup(&DAT_10037410);
  RegisterDynGroup(&DAT_10037408);
  RegisterDynGroup(&DAT_10037418);
  RegisterDynGroup(&DAT_100375b0);
  RegisterDynGroup(&DAT_100375a8);
  RegisterDynGroup(&DAT_100375e8);
  RegisterDynGroup(&DAT_100375e0);
  RegisterDynGroup(&DAT_10037600);
  RegisterDynGroup(&DAT_100375f0);
  RegisterDynGroup(&DAT_100375c8);
  RegisterDynGroup(&DAT_100375c0);
  RegisterDynGroup(&DAT_100375d8);
  RegisterDynGroup(&DAT_100375d0);
  RegisterDynGroup(&DAT_100375f8);
  RegisterDynGroup(&DAT_100377f8);
  SetPlayerName(1,"DUTCH");
  SetPlayerName(2,"BAVARIA");
  SetPlayerName(3,DAT_1003002c);
  SetPlayerName(4,"PORTUGALIA");
  ChangeFriends(1,0x1e);
  ChangeFriends(2,0x1e);
  ChangeFriends(3,0x1e);
  ChangeFriends(4,0x1e);
  EnableUnit(0,&DAT_100374f8,0);
  EnableUnit(0,&DAT_10037648,0);
  EnableUnit(0,&DAT_10037500,0);
  EnableUnit(0,&DAT_10037658,0);
  EnableUnit(0,&DAT_10037508,0);
  EnableUnit(0,&DAT_10037660,0);
  EnableUnit(0,&DAT_10037510,0);
  EnableUnit(0,&DAT_10037650,0);
  EnableUnit(0,&DAT_10037460,0);
  EnableUnit(0,&DAT_10037470,0);
  EnableUnit(0,&DAT_10037440,0);
  EnableUnit(0,&DAT_10037450,0);
  EnableUnit(0,&DAT_10037570,0);
  EnableUnit(0,&DAT_10037578,0);
  EnableUnit(0,&DAT_10037598,0);
  EnableUnit(0,&DAT_100375a0,0);
  DVar1 = time(NULL);
  srand(DVar1);
  uStack_8 = 0x10002862;
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  unsigned int uVar2;
  int uVar3;
  int iVar4;
  int *puVar5;
  int local_50 [16];
  int local_10;
  int local_c;
  int local_8;
uVar2 = Trigg(99);
  if ((uVar2 & 0xff) != 0) {
    SetTrigg(99,0);
    DisableUpgrade(0,&DAT_100373e0);
    DisableUpgrade(0,&DAT_100376c8);
    DisableUpgrade(0,&DAT_10037668);
    DisableUpgrade(0,&DAT_10037518);
    EnableUnit(0,&DAT_10037608,0);
    EnableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    DisableMission(0x45);
    TakeFood(&DAT_10037548);
    TakeFood(&DAT_10037540);
    TakeFood(&DAT_10037568);
    TakeFood(&DAT_10037560);
    TakeFood(&DAT_100374c8);
    TakeFood(&DAT_100374e0);
    TakeWood(&DAT_10037538);
    TakeWood(&DAT_10037550);
    TakeWood(&DAT_100374e8);
    TakeWood(&DAT_100374d0);
    TakeWood(&DAT_100374b0);
    TakeWood(&DAT_100374a8);
    TakeStone(&DAT_10037530);
    TakeStone(&DAT_10037528);
    TakeStone(&DAT_10037558);
    TakeStone(&DAT_100374d8);
    SetDestPoint(&DAT_10037738,&DAT_10037428);
    SetDestPoint(&DAT_10037768,&DAT_10037428);
    SetDestPoint(&DAT_10037798,&DAT_10037428);
    SetDestPoint(&DAT_100377c8,&DAT_10037428);
    SetDestPoint(&DAT_10037800,&DAT_10037430);
    SetDestPoint(&DAT_10037838,&DAT_10037430);
    SetDestPoint(&DAT_10037868,&DAT_10037430);
    SetDestPoint(&DAT_100378a8,&DAT_10037430);
    SetDestPoint(&DAT_100378d8,&DAT_10037438);
    SetDestPoint(&DAT_100379d0,&DAT_10037438);
    SetDestPoint(&DAT_100379a0,&DAT_10037438);
    SetDestPoint(&DAT_10037a00,&DAT_10037438);
    local_8 = rand();
    local_8 = local_8 % 3;
    if (local_8 == 0) {
      RemoveGroup(&DAT_100374c0,&DAT_10037458);
    }
    else if (local_8 == 1) {
      RemoveGroup(&DAT_100374b8,&DAT_10037458);
    }
    else {
      RemoveGroup(&DAT_100374a0,&DAT_10037458);
    }
    local_c = GetDiff(0);
    switch(local_c) {
    case 0:
      SetResource(0,3,2000000);
      SetResource(0,0,2000000);
      SetResource(0,2,2000000);
      SetResource(0,1,2000000);
      SetResource(0,5,2000000);
      SetResource(0,4,2000000);
      SelectUnits(&DAT_10037588,0);
      SelectUnits(&DAT_10037678,1);
      SelectUnits(&DAT_10037680,1);
      SelectUnits(&DAT_10037688,1);
      SelErase(1);
      SelectUnits(&DAT_10037580,0);
      SelectUnits(&DAT_10037690,1);
      SelectUnits(&DAT_10037698,1);
      SelectUnits(&DAT_100376a0,1);
      SelErase(2);
      SelectUnits(&DAT_10037590,0);
      SelectUnits(&DAT_100376a8,1);
      SelectUnits(&DAT_100376b0,1);
      SelectUnits(&DAT_100376b8,1);
      SelErase(3);
      DAT_100375b8 = 1;
      DAT_10037610 = 2;
      DAT_10037640 = 1;
      DAT_10037670 = 1;
      DAT_100376c0 = 1;
      DAT_10037708 = 2;
      DAT_10037730 = 1;
      DAT_10037920 = 1;
      DAT_10037930 = 1;
      DAT_1003770c = 2;
      DAT_100378a0 = 1;
      DAT_10037924 = 1;
      break;
    case 1:
      SetResource(0,3,1500000);
      SetResource(0,0,1500000);
      SetResource(0,2,1500000);
      SetResource(0,1,1500000);
      SetResource(0,5,1500000);
      SetResource(0,4,1500000);
      SelectUnits(&DAT_10037680,0);
      SelectUnits(&DAT_10037688,1);
      SelErase(1);
      SelectUnits(&DAT_10037698,0);
      SelectUnits(&DAT_100376a0,1);
      SelErase(2);
      SelectUnits(&DAT_100376b0,0);
      SelectUnits(&DAT_100376b8,1);
      SelErase(3);
      DAT_100375b8 = 3;
      DAT_10037610 = 10;
      DAT_10037640 = 5;
      DAT_10037670 = 3;
      DAT_100376c0 = 3;
      DAT_10037708 = 10;
      DAT_10037730 = 5;
      DAT_10037920 = 3;
      DAT_10037930 = 3;
      DAT_1003770c = 10;
      DAT_100378a0 = 5;
      DAT_10037924 = 3;
      break;
    case 2:
      SetResource(0,3,1200000);
      SetResource(0,0,1200000);
      SetResource(0,2,1200000);
      SetResource(0,1,1200000);
      SetResource(0,5,1200000);
      SetResource(0,4,1200000);
      SelectUnits(&DAT_10037688,0);
      SelErase(1);
      SelectUnits(&DAT_100376a0,0);
      SelErase(2);
      SelectUnits(&DAT_100376b8,0);
      SelErase(3);
      DAT_100375b8 = 7;
      DAT_10037610 = 0xf;
      DAT_10037640 = 7;
      DAT_10037670 = 6;
      DAT_100376c0 = 7;
      DAT_10037708 = 0xf;
      DAT_10037730 = 7;
      DAT_10037920 = 6;
      DAT_10037930 = 7;
      DAT_1003770c = 0xf;
      DAT_100378a0 = 7;
      DAT_10037924 = 6;
      break;
    case 3:
      SetResource(0,3,1000000);
      SetResource(0,0,1000000);
      SetResource(0,2,1000000);
      SetResource(0,1,1000000);
      SetResource(0,5,1000000);
      SetResource(0,4,1000000);
      DAT_100375b8 = 8;
      DAT_10037610 = 0x14;
      DAT_10037640 = 8;
      DAT_10037670 = 7;
      DAT_100376c0 = 8;
      DAT_10037708 = 0x14;
      DAT_10037730 = 8;
      DAT_10037920 = 7;
      DAT_10037930 = 8;
      DAT_1003770c = 0x14;
      DAT_100378a0 = 8;
      DAT_10037924 = 7;
    }
    ClearSelection(1);
    ClearSelection(2);
    ClearSelection(3);
    RunTimer(1,300);
    RunTimer(2,400);
    RunTimer(3,0x11f8);
    RunTimer(4,0x35e8);
    InitialUpgrade("Ghetman","Melnica(GE)GETRES");
    InitialUpgrade("Ghetman","MAINGE");
    InitialUpgrade("Gobj1","Melnica(DA)GETRES");
    InitialUpgrade("Gobj1","MAINDA");
    InitialUpgrade("Gobj1","Melnica(DA)GETRES2");
    InitialUpgrade("Gobj1","KUZ01DA");
    InitialUpgrade("Gobj1","KUZ02DA");
    InitialUpgrade("Gobj1","KUZ03DA");
    InitialUpgrade("Gobj1","AKA01DA");
    InitialUpgrade("Gobj1","AKA02DA");
    InitialUpgrade("Gobj1","AKA03DA");
    InitialUpgrade("Gobj1","AKA04DA");
    InitialUpgrade("Gobj1","AKA08DA");
    InitialUpgrade("Gobj1","AKA09DA");
    InitialUpgrade("Gobj1","AKA11DA");
    InitialUpgrade("Gobj1","AKA18DA");
    InitialUpgrade("Gobj1","AKA24DA");
    InitialUpgrade("Gobj1","AKA32DA");
    InitialUpgrade("Gobj2","Melnica(BA)GETRES");
    InitialUpgrade("Gobj2","MAINBA");
    InitialUpgrade("Gobj2","Melnica(BA)GETRES2");
    InitialUpgrade("Gobj2","KUZ01BA");
    InitialUpgrade("Gobj2","KUZ02BA");
    InitialUpgrade("Gobj2","KUZ03BA");
    InitialUpgrade("Gobj2","AKA01BA");
    InitialUpgrade("Gobj2","AKA02BA");
    InitialUpgrade("Gobj2","AKA03BA");
    InitialUpgrade("Gobj2","AKA04BA");
    InitialUpgrade("Gobj2","AKA08BA");
    InitialUpgrade("Gobj2","AKA09BA");
    InitialUpgrade("Gobj2","AKA11BA");
    InitialUpgrade("Gobj2","AKA18BA");
    InitialUpgrade("Gobj2","AKA24BA");
    InitialUpgrade("Gobj2","AKA32BA");
    InitialUpgrade("Gobj3","Melnica(SA)GETRES");
    InitialUpgrade("Gobj3","MAINSA");
    InitialUpgrade("Gobj3","Melnica(SA)GETRES2");
    InitialUpgrade("Gobj3","KUZ01SA");
    InitialUpgrade("Gobj3","KUZ02SA");
    InitialUpgrade("Gobj3","KUZ03SA");
    InitialUpgrade("Gobj3","AKA01SA");
    InitialUpgrade("Gobj3","AKA02SA");
    InitialUpgrade("Gobj3","AKA03SA");
    InitialUpgrade("Gobj3","AKA04SA");
    InitialUpgrade("Gobj3","AKA08SA");
    InitialUpgrade("Gobj3","AKA09SA");
    InitialUpgrade("Gobj3","AKA11SA");
    InitialUpgrade("Gobj3","AKA18SA");
    InitialUpgrade("Gobj3","AKA24SA");
    InitialUpgrade("Gobj3","AKA32SA");
    iVar4 = GetDiff(0);
    RunTimer(0x13,(4 - iVar4) * 0x8fc);
    iVar4 = GetDiff(0);
    RunTimer(0x14,(4 - iVar4) * 0x11f8);
    iVar4 = GetDiff(0);
    RunTimer(0x15,(4 - iVar4) * 0x1af4);
    iVar4 = GetDiff(0);
    RunTimer(0x16,(4 - iVar4) * 0x23f0);
    iVar4 = GetDiff(0);
    RunTimer(0x17,(4 - iVar4) * 0x2cec);
    iVar4 = GetDiff(0);
    RunTimer(0x18,(4 - iVar4) * 0x35e8);
    iVar4 = GetDiff(0);
    RunTimer(0x19,(4 - iVar4) * 0x3ee4);
    iVar4 = GetDiff(0);
    RunTimer(0x1a,(4 - iVar4) * 0x47e0);
    iVar4 = GetDiff(0);
    RunTimer(0x1b,(4 - iVar4) * 0x50dc);
    SetResource(4,3,1000000);
    SetResource(4,0,1000000);
    SetResource(4,2,1000000);
    SetResource(4,1,1000000);
    SetResource(4,5,1000000);
    SetResource(4,4,1000000);
    uVar3 = GetDiff(0);
    StartAI(4,"PORTUGALIA.0",2,2,2,uVar3);
  }
  uVar2 = TimerDoneFirst(0x13);
  if ((uVar2 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA16DA");
    InitialUpgrade("Gobj1","AKA31DA");
    InitialUpgrade("Gobj1","KUZ04DA");
    InitialUpgrade("Gobj1","Pikiner_evro(DA)ATTACK");
    InitialUpgrade("Gobj1","Pikiner_evro(DA)SHIELD");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)ATTACK");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)SHIELD");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)ATTACK");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)SHIELD");
    InitialUpgrade("Gobj1","Gusar_evro(DA)ATTACK");
    InitialUpgrade("Gobj1","Gusar_evro(DA)SHIELD");
    InitialUpgrade("Gobj1","Dragun_18(DA)ATTACK");
    InitialUpgrade("Gobj1","Dragun_18(DA)SHIELD");
    InitialUpgrade("Gobj2","AKA16BA");
    InitialUpgrade("Gobj2","AKA31BA");
    InitialUpgrade("Gobj2","KUZ04BA");
    InitialUpgrade("Gobj2","Pikiner_evro(BA)ATTACK");
    InitialUpgrade("Gobj2","Pikiner_evro(BA)SHIELD");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)ATTACK");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)SHIELD");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)ATTACK");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)SHIELD");
    InitialUpgrade("Gobj2","Gusar_evro(BA)ATTACK");
    InitialUpgrade("Gobj2","Gusar_evro(BA)SHIELD");
    InitialUpgrade("Gobj2","Dragun_18(BA)ATTACK");
    InitialUpgrade("Gobj2","Dragun_18(BA)SHIELD");
    InitialUpgrade("Gobj3","AKA16SA");
    InitialUpgrade("Gobj3","AKA31SA");
    InitialUpgrade("Gobj3","KUZ04SA");
    InitialUpgrade("Gobj3","Pikiner_evro(SA)ATTACK");
    InitialUpgrade("Gobj3","Pikiner_evro(SA)SHIELD");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)ATTACK");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)SHIELD");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)ATTACK");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)SHIELD");
    InitialUpgrade("Gobj3","Gusar_evro(SA)ATTACK");
    InitialUpgrade("Gobj3","Gusar_evro(SA)SHIELD");
    InitialUpgrade("Gobj3","Dragun_18(SA)ATTACK");
    InitialUpgrade("Gobj3","Dragun_18(SA)SHIELD");
  }
  uVar2 = TimerDoneFirst(0x14);
  if ((uVar2 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA17DA");
    InitialUpgrade("Gobj1","AKA33DA");
    InitialUpgrade("Gobj1","KUZ05DA");
    InitialUpgrade("Gobj1","Pikiner_evro(DA)ATTACK3");
    InitialUpgrade("Gobj1","Pikiner_evro(DA)SHIELD3");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)ATTACK3");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)SHIELD3");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)ATTACK3");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)SHIELD3");
    InitialUpgrade("Gobj1","Gusar_evro(DA)ATTACK3");
    InitialUpgrade("Gobj1","Gusar_evro(DA)SHIELD3");
    InitialUpgrade("Gobj1","Dragun_18(DA)ATTACK3");
    InitialUpgrade("Gobj1","Dragun_18(DA)SHIELD3");
    InitialUpgrade("Gobj2","AKA17BA");
    InitialUpgrade("Gobj2","AKA33BA");
    InitialUpgrade("Gobj2","KUZ05BA");
    InitialUpgrade("Gobj2","Pikiner_evro(BA)ATTACK3");
    InitialUpgrade("Gobj2","Pikiner_evro(BA)SHIELD3");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)ATTACK3");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)SHIELD3");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)ATTACK3");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)SHIELD3");
    InitialUpgrade("Gobj2","Gusar_evro(BA)ATTACK3");
    InitialUpgrade("Gobj2","Gusar_evro(BA)SHIELD3");
    InitialUpgrade("Gobj2","Dragun_18(BA)ATTACK3");
    InitialUpgrade("Gobj2","Dragun_18(BA)SHIELD3");
    InitialUpgrade("Gobj3","AKA17SA");
    InitialUpgrade("Gobj3","AKA33SA");
    InitialUpgrade("Gobj3","KUZ05SA");
    InitialUpgrade("Gobj3","Pikiner_evro(SA)ATTACK3");
    InitialUpgrade("Gobj3","Pikiner_evro(SA)SHIELD3");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)ATTACK3");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)SHIELD3");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)ATTACK3");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)SHIELD3");
    InitialUpgrade("Gobj3","Gusar_evro(SA)ATTACK3");
    InitialUpgrade("Gobj3","Gusar_evro(SA)SHIELD3");
    InitialUpgrade("Gobj3","Dragun_18(SA)ATTACK3");
    InitialUpgrade("Gobj3","Dragun_18(SA)SHIELD3");
  }
  uVar2 = TimerDoneFirst(0x15);
  if ((uVar2 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA20DA");
    InitialUpgrade("Gobj1","AKA34DA");
    InitialUpgrade("Gobj1","KUZ06DA");
    InitialUpgrade("Gobj1","Pikiner_evro(DA)ATTACK4");
    InitialUpgrade("Gobj1","Pikiner_evro(DA)SHIELD4");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)ATTACK4");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)SHIELD4");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)ATTACK4");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)SHIELD4");
    InitialUpgrade("Gobj1","Gusar_evro(DA)ATTACK4");
    InitialUpgrade("Gobj1","Gusar_evro(DA)SHIELD4");
    InitialUpgrade("Gobj1","Dragun_18(DA)ATTACK4");
    InitialUpgrade("Gobj1","Dragun_18(DA)SHIELD4");
    InitialUpgrade("Gobj2","AKA20BA");
    InitialUpgrade("Gobj2","AKA34BA");
    InitialUpgrade("Gobj2","KUZ06BA");
    InitialUpgrade("Gobj2","Pikiner_evro(BA)ATTACK4");
    InitialUpgrade("Gobj2","Pikiner_evro(BA)SHIELD4");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)ATTACK4");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)SHIELD4");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)ATTACK4");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)SHIELD4");
    InitialUpgrade("Gobj2","Gusar_evro(BA)ATTACK4");
    InitialUpgrade("Gobj2","Gusar_evro(BA)SHIELD4");
    InitialUpgrade("Gobj2","Dragun_18(BA)ATTACK4");
    InitialUpgrade("Gobj2","Dragun_18(BA)SHIELD4");
    InitialUpgrade("Gobj3","AKA20SA");
    InitialUpgrade("Gobj3","AKA34SA");
    InitialUpgrade("Gobj3","KUZ06SA");
    InitialUpgrade("Gobj3","Pikiner_evro(SA)ATTACK4");
    InitialUpgrade("Gobj3","Pikiner_evro(SA)SHIELD4");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)ATTACK4");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)SHIELD4");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)ATTACK4");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)SHIELD4");
    InitialUpgrade("Gobj3","Gusar_evro(SA)ATTACK4");
    InitialUpgrade("Gobj3","Gusar_evro(SA)SHIELD4");
    InitialUpgrade("Gobj3","Dragun_18(SA)ATTACK4");
    InitialUpgrade("Gobj3","Dragun_18(SA)SHIELD4");
  }
  uVar2 = TimerDoneFirst(0x16);
  if ((uVar2 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA27DA");
    InitialUpgrade("Gobj1","AKA35DA");
    InitialUpgrade("Gobj1","Pikiner_evro(DA)ATTACK5");
    InitialUpgrade("Gobj1","Pikiner_evro(DA)SHIELD5");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)ATTACK5");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)SHIELD5");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)ATTACK5");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)SHIELD5");
    InitialUpgrade("Gobj1","Gusar_evro(DA)ATTACK5");
    InitialUpgrade("Gobj1","Gusar_evro(DA)SHIELD5");
    InitialUpgrade("Gobj1","Dragun_18(DA)ATTACK5");
    InitialUpgrade("Gobj1","Dragun_18(DA)SHIELD5");
    InitialUpgrade("Gobj2","AKA27BA");
    InitialUpgrade("Gobj2","AKA35BA");
    InitialUpgrade("Gobj2","Pikiner_evro(BA)ATTACK5");
    InitialUpgrade("Gobj2","Pikiner_evro(BA)SHIELD5");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)ATTACK5");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)SHIELD5");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)ATTACK5");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)SHIELD5");
    InitialUpgrade("Gobj2","Gusar_evro(BA)ATTACK5");
    InitialUpgrade("Gobj2","Gusar_evro(BA)SHIELD5");
    InitialUpgrade("Gobj2","Dragun_18(BA)ATTACK5");
    InitialUpgrade("Gobj2","Dragun_18(BA)SHIELD5");
    InitialUpgrade("Gobj3","AKA27SA");
    InitialUpgrade("Gobj3","AKA35SA");
    InitialUpgrade("Gobj3","Pikiner_evro(SA)ATTACK5");
    InitialUpgrade("Gobj3","Pikiner_evro(SA)SHIELD5");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)ATTACK5");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)SHIELD5");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)ATTACK5");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)SHIELD5");
    InitialUpgrade("Gobj3","Gusar_evro(SA)ATTACK5");
    InitialUpgrade("Gobj3","Gusar_evro(SA)SHIELD5");
    InitialUpgrade("Gobj3","Dragun_18(SA)ATTACK5");
    InitialUpgrade("Gobj3","Dragun_18(SA)SHIELD5");
  }
  uVar2 = TimerDoneFirst(0x17);
  if ((uVar2 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Pikiner_evro(DA)ATTACK6");
    InitialUpgrade("Gobj1","Pikiner_evro(DA)SHIELD6");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)ATTACK6");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)SHIELD6");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)ATTACK6");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)SHIELD6");
    InitialUpgrade("Gobj1","Gusar_evro(DA)ATTACK6");
    InitialUpgrade("Gobj1","Gusar_evro(DA)SHIELD6");
    InitialUpgrade("Gobj1","Dragun_18(DA)ATTACK6");
    InitialUpgrade("Gobj1","Dragun_18(DA)SHIELD6");
    InitialUpgrade("Gobj2","Pikiner_evro(BA)ATTACK6");
    InitialUpgrade("Gobj2","Pikiner_evro(BA)SHIELD6");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)ATTACK6");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)SHIELD6");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)ATTACK6");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)SHIELD6");
    InitialUpgrade("Gobj2","Gusar_evro(BA)ATTACK6");
    InitialUpgrade("Gobj2","Gusar_evro(BA)SHIELD6");
    InitialUpgrade("Gobj2","Dragun_18(BA)ATTACK6");
    InitialUpgrade("Gobj2","Dragun_18(BA)SHIELD6");
    InitialUpgrade("Gobj3","Pikiner_evro(SA)ATTACK6");
    InitialUpgrade("Gobj3","Pikiner_evro(SA)SHIELD6");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)ATTACK6");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)SHIELD6");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)ATTACK6");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)SHIELD6");
    InitialUpgrade("Gobj3","Gusar_evro(SA)ATTACK6");
    InitialUpgrade("Gobj3","Gusar_evro(SA)SHIELD6");
    InitialUpgrade("Gobj3","Dragun_18(SA)ATTACK6");
    InitialUpgrade("Gobj3","Dragun_18(SA)SHIELD6");
  }
  uVar2 = TimerDoneFirst(0x18);
  if ((uVar2 & 0xff) != 0) {
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)ATTACK7");
    InitialUpgrade("Gobj1","Pik_evro_rus(DA)SHIELD7");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)ATTACK7");
    InitialUpgrade("Gobj1","Mushketer_DA(DA)SHIELD7");
    InitialUpgrade("Gobj1","Gusar_evro(DA)ATTACK7");
    InitialUpgrade("Gobj1","Gusar_evro(DA)SHIELD7");
    InitialUpgrade("Gobj1","Dragun_18(DA)ATTACK7");
    InitialUpgrade("Gobj1","Dragun_18(DA)SHIELD7");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)ATTACK7");
    InitialUpgrade("Gobj2","Pik_evro_rus(BA)SHIELD7");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)ATTACK7");
    InitialUpgrade("Gobj2","Mushketer_BA(BA)SHIELD7");
    InitialUpgrade("Gobj2","Gusar_evro(BA)ATTACK7");
    InitialUpgrade("Gobj2","Gusar_evro(BA)SHIELD7");
    InitialUpgrade("Gobj2","Dragun_18(BA)ATTACK7");
    InitialUpgrade("Gobj2","Dragun_18(BA)SHIELD7");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)ATTACK7");
    InitialUpgrade("Gobj3","Pik_evro_rus(SA)SHIELD7");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)ATTACK7");
    InitialUpgrade("Gobj3","Mushketer_sakson(SA)SHIELD7");
    InitialUpgrade("Gobj3","Gusar_evro(SA)ATTACK7");
    InitialUpgrade("Gobj3","Gusar_evro(SA)SHIELD7");
    InitialUpgrade("Gobj3","Dragun_18(SA)ATTACK7");
    InitialUpgrade("Gobj3","Dragun_18(SA)SHIELD7");
    InitialUpgrade("Gobj1","AKA15DA");
    InitialUpgrade("Gobj2","AKA15BA");
    InitialUpgrade("Gobj3","AKA15SA");
  }
  uVar2 = TimerDoneFirst(0x19);
  if ((uVar2 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA14DA");
    InitialUpgrade("Gobj2","AKA14BA");
    InitialUpgrade("Gobj3","AKA14SA");
  }
  uVar2 = TimerDoneFirst(0x1a);
  if ((uVar2 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA13DA");
    InitialUpgrade("Gobj2","AKA13BA");
    InitialUpgrade("Gobj3","AKA13SA");
  }
  uVar2 = TimerDoneFirst(0x1b);
  if ((uVar2 & 0xff) != 0) {
    InitialUpgrade("Gobj1","AKA12DA");
    InitialUpgrade("Gobj1","AKA36DA");
    InitialUpgrade("Gobj2","AKA12BA");
    InitialUpgrade("Gobj2","AKA36BA");
    InitialUpgrade("Gobj3","AKA12SA");
    InitialUpgrade("Gobj3","AKA36SA");
  }
  iVar4 = GetUnitsAmount1(&DAT_10037980,&DAT_100376d0);
  if (0 < iVar4) {
    SelectUnits(&DAT_100376d0,0);
    SelSendTo(1,&DAT_10037988,0x32,2);
    SelSendTo(1,&DAT_10037990,0xe6,2);
    SelSendTo(1,&DAT_10037998,0xaa,2);
    SelSendTo(1,&DAT_10037980,0x46,2);
    ClearSelection(1);
  }
  iVar4 = GetUnitsAmount1(&DAT_10037988,&DAT_100376d8);
  if (0 < iVar4) {
    SelectUnits(&DAT_100376d8,0);
    SelSendTo(1,&DAT_10037990,0xe6,2);
    SelSendTo(1,&DAT_10037998,0xaa,2);
    SelSendTo(1,&DAT_10037980,0x46,2);
    SelSendTo(1,&DAT_10037988,0x32,2);
    ClearSelection(1);
  }
  iVar4 = GetUnitsAmount1(&DAT_10037938,&DAT_100376e8);
  if (0 < iVar4) {
    SelectUnits(&DAT_100376e8,0);
    SelSendTo(2,&DAT_10037948,0xdc,2);
    SelSendTo(2,&DAT_10037958,0xaa,2);
    SelSendTo(2,&DAT_10037968,0x5a,2);
    SelSendTo(2,&DAT_10037938,0x1e,2);
    ClearSelection(2);
  }
  iVar4 = GetUnitsAmount1(&DAT_10037948,&DAT_100376f8);
  if (0 < iVar4) {
    SelectUnits(&DAT_100376f8,0);
    SelSendTo(2,&DAT_10037958,0xaa,2);
    SelSendTo(2,&DAT_10037968,0x5a,2);
    SelSendTo(2,&DAT_10037938,0x1e,2);
    SelSendTo(2,&DAT_10037948,0xdc,2);
    ClearSelection(2);
  }
  iVar4 = GetUnitsAmount1(&DAT_10037940,&DAT_100376f0);
  if (0 < iVar4) {
    SelectUnits(&DAT_100376f0,0);
    SelSendTo(3,&DAT_10037950,0xdc,2);
    SelSendTo(3,&DAT_10037960,0xaa,2);
    SelSendTo(3,&DAT_10037970,0x5a,2);
    SelSendTo(3,&DAT_10037940,0x1e,2);
    ClearSelection(3);
  }
  iVar4 = GetUnitsAmount1(&DAT_10037950,&DAT_10037700);
  if (0 < iVar4) {
    SelectUnits(&DAT_10037700,0);
    SelSendTo(3,&DAT_10037960,0xaa,2);
    SelSendTo(3,&DAT_10037970,0x5a,2);
    SelSendTo(3,&DAT_10037940,0x1e,2);
    SelSendTo(3,&DAT_10037950,0xdc,2);
    ClearSelection(3);
  }
  uVar2 = TimerDoneFirst(1);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = Trigg(0x60);
    if ((uVar2 & 0xff) != 0) {
      SetTrigg(0x60,0);
      ShowPage("#PAGE0A");
    }
  }
  uVar2 = TimerDoneFirst(2);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = Trigg(0x5f);
    if ((uVar2 & 0xff) != 0) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE0B");
    }
  }
  uVar2 = TimerDoneFirst(3);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = Trigg(0x5e);
    if ((uVar2 & 0xff) != 0) {
      SetTrigg(0x5e,0);
      ShowPage("#PAGE0C");
      EnableMission(0x44);
    }
  }
  uVar2 = Trigg(0x5d);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = TimerDoneFirst(4);
    if ((uVar2 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100376e0,0);
      if (iVar4 < 1) {
        iVar4 = GetUnitsAmount0(&DAT_10037928,0);
        if (iVar4 < 1) {
          iVar4 = GetUnitsAmount0(&DAT_10037a30,0);
          if (iVar4 < 1) goto LAB_100062d1;
        }
      }
    }
    SetTrigg(0x5d,0);
    ShowPage("#PAGE2");
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 0x23f0);
  }
LAB_100062d1:
  FUN_10001160(&DAT_10037738,DAT_100375b8);
  FUN_10001160(&DAT_10037768,DAT_10037610);
  FUN_10001160(&DAT_10037798,DAT_10037640);
  FUN_10001160(&DAT_100377c8,DAT_10037670);
  FUN_10001210(0x10037738);
  if ((((cVar1 != '\0') && (FUN_10001210(0x10037768), cVar1 != '\0')) &&
      (FUN_10001210(0x10037798), cVar1 != '\0')) &&
     (FUN_10001210(0x100377c8), cVar1 != '\0')) {
    uVar2 = Trigg(0x5d);
    if ((((uVar2 & 0xff) == 0) && (FUN_10001300(), cVar1 == '\0')) &&
       ((FUN_10001300(), cVar1 == '\0' &&
        ((FUN_10001300(), cVar1 == '\0' &&
         (FUN_10001300(), cVar1 == '\0')))))) {
      FUN_100013a0(&DAT_10037738,&DAT_10037728,0);
      FUN_100013a0(&DAT_10037738,&DAT_10037720,2);
      FUN_100013a0(&DAT_10037768,&DAT_10037728,0);
      FUN_100013a0(&DAT_10037768,&DAT_10037720,2);
      RunTimer(5,0x6a4);
      RunTimer(6,1000);
    }
  }
  uVar2 = TimerDoneFirst(5);
  if ((uVar2 & 0xff) != 0) {
    FUN_100013a0(&DAT_10037798,&DAT_10037728,0);
    FUN_100013a0(&DAT_10037798,&DAT_10037720,2);
  }
  uVar2 = TimerDoneFirst(6);
  if ((uVar2 & 0xff) != 0) {
    FUN_100013a0(&DAT_100377c8,&DAT_10037728,0);
    FUN_100013a0(&DAT_100377c8,&DAT_10037720,2);
  }
  FUN_10001160(&DAT_10037800,DAT_100376c0);
  FUN_10001160(&DAT_10037838,DAT_10037708);
  FUN_10001160(&DAT_10037868,DAT_10037730);
  FUN_10001160(&DAT_100378a8,DAT_10037920);
  FUN_10001210(0x10037800);
  if ((((cVar1 != '\0') && (FUN_10001210(0x10037838), cVar1 != '\0')) &&
      (FUN_10001210(0x10037868), cVar1 != '\0')) &&
     (FUN_10001210(0x100378a8), cVar1 != '\0')) {
    uVar2 = Trigg(0x5d);
    if ((((uVar2 & 0xff) == 0) && (FUN_10001300(), cVar1 == '\0')) &&
       ((FUN_10001300(), cVar1 == '\0' &&
        ((FUN_10001300(), cVar1 == '\0' &&
         (FUN_10001300(), cVar1 == '\0')))))) {
      FUN_100013a0(&DAT_10037800,&DAT_10037710,0);
      FUN_100013a0(&DAT_10037800,&DAT_10037720,2);
      FUN_100013a0(&DAT_10037838,&DAT_10037710,0);
      FUN_100013a0(&DAT_10037838,&DAT_10037720,2);
      RunTimer(7,0x6a4);
      RunTimer(8,1000);
    }
  }
  uVar2 = TimerDoneFirst(7);
  if ((uVar2 & 0xff) != 0) {
    FUN_100013a0(&DAT_10037868,&DAT_10037710,0);
    FUN_100013a0(&DAT_10037868,&DAT_10037720,2);
  }
  uVar2 = TimerDoneFirst(8);
  if ((uVar2 & 0xff) != 0) {
    FUN_100013a0(&DAT_100378a8,&DAT_10037710,0);
    FUN_100013a0(&DAT_100378a8,&DAT_10037720,2);
  }
  FUN_10001160(&DAT_100378d8,DAT_10037930);
  FUN_10001160(&DAT_100379d0,DAT_1003770c);
  FUN_10001160(&DAT_100379a0,DAT_100378a0);
  FUN_10001160(&DAT_10037a00,DAT_10037924);
  FUN_10001210(0x100378d8);
  if ((((cVar1 != '\0') && (FUN_10001210(0x100379d0), cVar1 != '\0')) &&
      (FUN_10001210(0x100379a0), cVar1 != '\0')) &&
     (FUN_10001210(0x10037a00), cVar1 != '\0')) {
    uVar2 = Trigg(0x5d);
    if ((((uVar2 & 0xff) == 0) && (FUN_10001300(), cVar1 == '\0')) &&
       ((FUN_10001300(), cVar1 == '\0' &&
        ((FUN_10001300(), cVar1 == '\0' &&
         (FUN_10001300(), cVar1 == '\0')))))) {
      FUN_100013a0(&DAT_100378d8,&DAT_10037718,0);
      FUN_100013a0(&DAT_100378d8,&DAT_10037720,2);
      FUN_100013a0(&DAT_100379d0,&DAT_10037718,0);
      FUN_100013a0(&DAT_100379d0,&DAT_10037720,2);
      RunTimer(9,0x6a4);
      RunTimer(10,1000);
    }
  }
  uVar2 = TimerDoneFirst(9);
  if ((uVar2 & 0xff) != 0) {
    FUN_100013a0(&DAT_100379a0,&DAT_10037718,0);
    FUN_100013a0(&DAT_100379a0,&DAT_10037720,2);
  }
  uVar2 = TimerDoneFirst(10);
  if ((uVar2 & 0xff) != 0) {
    FUN_100013a0(&DAT_10037a00,&DAT_10037718,0);
    FUN_100013a0(&DAT_10037a00,&DAT_10037720,2);
  }
  uVar2 = TimerDoneFirst(0xd);
  if ((uVar2 & 0xff) != 0) {
    local_10 = GetDiff(0);
    if (local_10 == 0) {
      DAT_100375b8 = DAT_100375b8 + 1;
      DAT_10037610 = DAT_10037610 + 2;
      DAT_10037640 = DAT_10037640 + 1;
      DAT_10037670 = DAT_10037670 + 1;
      DAT_100376c0 = DAT_100376c0 + 1;
      DAT_10037708 = DAT_10037708 + 2;
      DAT_10037730 = DAT_10037730 + 1;
      DAT_10037920 = DAT_10037920 + 1;
      DAT_10037930 = DAT_10037930 + 1;
      DAT_1003770c = DAT_1003770c + 2;
      DAT_100378a0 = DAT_100378a0 + 1;
      DAT_10037924 = DAT_10037924 + 1;
    }
    else if (local_10 == 1) {
      DAT_100375b8 = DAT_100375b8 + 2;
      DAT_10037610 = DAT_10037610 + 3;
      DAT_10037640 = DAT_10037640 + 2;
      DAT_10037670 = DAT_10037670 + 2;
      DAT_100376c0 = DAT_100376c0 + 2;
      DAT_10037708 = DAT_10037708 + 3;
      DAT_10037730 = DAT_10037730 + 2;
      DAT_10037920 = DAT_10037920 + 2;
      DAT_10037930 = DAT_10037930 + 2;
      DAT_1003770c = DAT_1003770c + 3;
      DAT_100378a0 = DAT_100378a0 + 2;
      DAT_10037924 = DAT_10037924 + 2;
    }
    else if (local_10 == 2) {
      DAT_100375b8 = DAT_100375b8 + 3;
      DAT_10037610 = DAT_10037610 + 5;
      DAT_10037640 = DAT_10037640 + 3;
      DAT_10037670 = DAT_10037670 + 3;
      DAT_100376c0 = DAT_100376c0 + 3;
      DAT_10037708 = DAT_10037708 + 5;
      DAT_10037730 = DAT_10037730 + 3;
      DAT_10037920 = DAT_10037920 + 3;
      DAT_10037930 = DAT_10037930 + 3;
      DAT_1003770c = DAT_1003770c + 5;
      DAT_100378a0 = DAT_100378a0 + 3;
      DAT_10037924 = DAT_10037924 + 3;
    }
    else {
      DAT_100375b8 = DAT_100375b8 + 4;
      DAT_10037610 = DAT_10037610 + 7;
      DAT_10037640 = DAT_10037640 + 4;
      DAT_10037670 = DAT_10037670 + 4;
      DAT_100376c0 = DAT_100376c0 + 4;
      DAT_10037708 = DAT_10037708 + 7;
      DAT_10037730 = DAT_10037730 + 4;
      DAT_10037920 = DAT_10037920 + 4;
      DAT_10037930 = DAT_10037930 + 4;
      DAT_1003770c = DAT_1003770c + 7;
      DAT_100378a0 = DAT_100378a0 + 4;
      DAT_10037924 = DAT_10037924 + 4;
    }
    iVar4 = GetDiff(0);
    RunTimer(0xd,(5 - iVar4) * 0x23f0);
  }
  SaveSelectedUnits(0,&DAT_100377f8,0);
  ClearSelection(0);
  SelectUnitsType(&DAT_10037460,0,0);
  SelectUnitsType(&DAT_10037470,0,1);
  SelectUnitsType(&DAT_10037440,0,1);
  SelectUnitsType(&DAT_10037450,0,1);
  SelDie(0);
  SelectUnits(&DAT_100377f8,0);
  ClearSelection(1);
  SelectUnitsType(&DAT_10037910,1,0);
  SelectUnitsType(&DAT_10037908,1,1);
  SelectUnitsType(&DAT_10037918,1,1);
  SelectUnitsType(&DAT_10037420,1,1);
  SelDie(1);
  ClearSelection(1);
  ClearSelection(2);
  SelectUnitsType(&DAT_10037910,2,0);
  SelectUnitsType(&DAT_10037908,2,1);
  SelectUnitsType(&DAT_10037918,2,1);
  SelectUnitsType(&DAT_10037420,2,1);
  SelDie(2);
  ClearSelection(2);
  ClearSelection(3);
  SelectUnitsType(&DAT_10037910,3,0);
  SelectUnitsType(&DAT_10037908,3,1);
  SelectUnitsType(&DAT_10037918,3,1);
  SelectUnitsType(&DAT_10037420,3,1);
  SelDie(3);
  ClearSelection(3);
  uVar2 = Trigg(0x10);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = NationIsErased(1);
    if ((uVar2 & 0xff) != 0) {
      SetTrigg(0x10,0);
      ShowPage("#PAGE8A");
    }
  }
  uVar2 = Trigg(0x11);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = NationIsErased(2);
    if ((uVar2 & 0xff) != 0) {
      SetTrigg(0x11,0);
      ShowPage("#PAGE8B");
    }
  }
  uVar2 = Trigg(0x12);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = NationIsErased(3);
    if ((uVar2 & 0xff) != 0) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE8C");
    }
  }
  uVar2 = Trigg(0xf);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = Trigg(0x10);
    if ((uVar2 & 0xff) == 0) {
      uVar2 = Trigg(0x11);
      if ((uVar2 & 0xff) == 0) {
        uVar2 = Trigg(0x12);
        if ((uVar2 & 0xff) == 0) {
          uVar2 = Trigg(0x13);
          if ((uVar2 & 0xff) != 0) {
            SetTrigg(0xf,0);
            ShowPage("#PAGE8");
          }
        }
      }
    }
  }
  uVar2 = Trigg(0x13);
  if ((uVar2 & 0xff) != 0) {
    uVar2 = NationIsErased(4);
    if ((uVar2 & 0xff) != 0) {
      SetTrigg(0x13,0);
      ShowPage("#PAGE10");
      DisableMission(0x42);
      EnableMission(0x43);
    }
  }
  uVar2 = Trigg(0x13);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = Trigg(2);
    if ((uVar2 & 0xff) == 0) {
      uVar2 = Trigg(0x61);
      if ((uVar2 & 0xff) != 0) {
        SetTrigg(0x61,0);
        ShowPage("#PAGE9");
        ShowVictory();
      }
    }
  }
  uVar2 = Trigg(2);
  if ((uVar2 & 0xff) != 0) {
    iVar4 = GetUnitsByNation(&DAT_10037458,0);
    if (0 < iVar4) {
      SetTrigg(2,0);
      ShowPage("#PAGE12");
      EnableUpgrade(0,&DAT_100373e0);
      EnableUpgrade(0,&DAT_100376c8);
      EnableUpgrade(0,&DAT_10037668);
      EnableUpgrade(0,&DAT_10037518);
      EnableUnit(0,&DAT_10037608,1);
      DisableMission(0x44);
      EnableMission(0x45);
    }
  }
  uVar2 = Trigg(0x62);
  if ((uVar2 & 0xff) != 0) {
    iVar4 = GetUnitsByNation(&DAT_10037480,0);
    if (iVar4 == 0) {
      SetTrigg(0x62,0);
      ShowPage("#PAGE11");
      LooseGame();
    }
  }
  uVar2 = Trigg(0x62);
  if (((uVar2 & 0xff) != 0) && (iVar4 = GetTotalAmount0(&DAT_10037458), iVar4 == 0)) {
    uVar2 = Trigg(2);
    if ((uVar2 & 0xff) != 0) {
      SetTrigg(0x62,0);
      ShowPage("#PAGE7");
      LooseGame();
    }
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

#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002d04c[] = "GTu";
char DAT_1002d050[] = "GPi";
char DAT_1002d094[] = "Z33";
char DAT_1002d098[] = "Z32";
char DAT_1002d09c[] = "Z31";
char DAT_1002d0a0[] = "Z30";
char DAT_1002d0a4[] = "Z16";
char DAT_1002d0a8[] = "Z01";
char DAT_1002d0ac[] = "Z23";
char DAT_1002d0b0[] = "Z22";
char DAT_1002d0b4[] = "Z21";
char DAT_1002d0b8[] = "Z20";
char DAT_1002d124[] = "GVe";
char DAT_1002d128[] = "Z15";
char DAT_1002d12c[] = "Z14";
char DAT_1002d130[] = "Z13";
char DAT_1002d134[] = "Z12";
char DAT_1002d138[] = "Z11";
char DAT_1002d13c[] = "Z10";
char DAT_1002d160[] = "Z7";
char DAT_1002d164[] = "Z6";
char DAT_1002d168[] = "Z3G";
char DAT_1002d16c[] = "Z2G";
char DAT_1002d170[] = "Z1G";
char DAT_1002d174[] = "Z4A";
char DAT_1002d188[] = "Z3A";
char DAT_1002d18c[] = "Z2A";
char DAT_1002d190[] = "Z1A";
char DAT_1002d194[] = "Z3P";
char DAT_1002d198[] = "Z2P";
char DAT_1002d19c[] = "Z1P";
char DAT_1002d230[] = "GBar";
char DAT_1002d240[] = "Z5";
char DAT_1002d244[] = "Z4";
char DAT_1002d248[] = "Z3";
char DAT_1002d24c[] = "Z2";
char DAT_1002d250[] = "Z1";
char DAT_1002d254[] = "Z0";
int DAT_10030a30 = 200;
int DAT_100323f8 = 0;
long long DAT_10032400 = 0;
long long DAT_10032408 = 0;
long long DAT_10032410 = 0;
long long DAT_10032418 = 0;
long long DAT_10032420 = 0;
long long DAT_10032428 = 0;
long long DAT_10032430 = 0;
long long DAT_10032438 = 0;
long long DAT_10032440 = 0;
long long DAT_10032448 = 0;
long long DAT_10032450 = 0;
long long DAT_10032458 = 0;
long long DAT_10032460 = 0;
long long DAT_10032468 = 0;
long long DAT_10032470 = 0;
long long DAT_10032478 = 0;
long long DAT_10032480 = 0;
long long DAT_10032488 = 0;
long long DAT_10032490 = 0;
long long DAT_10032498 = 0;
long long DAT_100324a0 = 0;
long long DAT_100324a8 = 0;
long long DAT_100324b0 = 0;
long long DAT_100324b8 = 0;
long long DAT_100324c0 = 0;
long long DAT_100324c8 = 0;
long long DAT_100324d0 = 0;
long long DAT_100324d8 = 0;
long long DAT_100324e0 = 0;
long long DAT_100324f0 = 0;
long long DAT_100324f8 = 0;
long long DAT_10032500 = 0;
long long DAT_10032508 = 0;
long long DAT_10032510 = 0;
long long DAT_10032518 = 0;
long long DAT_10032520 = 0;
long long DAT_10032528 = 0;
long long DAT_10032530 = 0;
long long DAT_10032538 = 0;
long long DAT_10032540 = 0;
long long DAT_10032548 = 0;
long long DAT_10032550 = 0;
long long DAT_10032558 = 0;
long long DAT_10032560 = 0;
long long DAT_10032568 = 0;
int DAT_10032570 = 0;
long long DAT_10032578 = 0;
long long DAT_10032580 = 0;
long long DAT_10032588 = 0;
long long DAT_10032590 = 0;
long long DAT_10032598 = 0;
long long DAT_100325a0 = 0;
long long DAT_100325a8 = 0;
long long DAT_100325b0 = 0;
long long DAT_100325b8 = 0;
long long DAT_100325c0 = 0;
long long DAT_100325c8 = 0;
long long DAT_100325d0 = 0;
long long DAT_100325d8 = 0;
long long DAT_100325e0 = 0;
long long DAT_100325e8 = 0;
long long DAT_100325f0 = 0;
long long DAT_100325f8 = 0;
long long DAT_10032600 = 0;
long long DAT_10032608 = 0;
long long DAT_10032610 = 0;
long long DAT_10032618 = 0;
long long DAT_10032620 = 0;
long long DAT_10032628 = 0;
long long DAT_10032630 = 0;
long long DAT_10032638 = 0;
long long DAT_10032640 = 0;
long long DAT_10032648 = 0;
long long DAT_10032650 = 0;
long long DAT_10032658 = 0;
long long DAT_10032660 = 0;
long long DAT_10032668 = 0;
long long DAT_10032670 = 0;
long long DAT_10032678 = 0;
long long DAT_10032680 = 0;
long long DAT_10032688 = 0;
long long DAT_10032690 = 0;
long long DAT_10032698 = 0;
long long DAT_100326a0 = 0;
long long DAT_100326a8 = 0;
long long DAT_100326b0 = 0;
long long DAT_100326b8 = 0;
long long DAT_100326c0 = 0;
long long DAT_100326c8 = 0;
long long DAT_100326d0 = 0;
long long DAT_100326d8 = 0;
long long DAT_100326e0 = 0;
long long DAT_100326e8 = 0;
long long DAT_100326f0 = 0;

/* Forward declarations */
void FUN_10001260(char param_1);
void FUN_100012d0(int param_1);
void FUN_10001350(int param_1,int param_2,char param_3,char param_4);
void FUN_10001450(int param_1,int param_2);
void FUN_100014a0(int param_1,int param_2,char param_3);
void FUN_100014f0(int param_1,int param_2);
void FUN_10001540(int param_1,int param_2,char param_3);
void FUN_10001590(int param_1,int param_2,char param_3,char param_4);
void FUN_10001650(int param_1,int param_2);
void FUN_100016a0(int param_1,int param_2,char param_3);
void FUN_100016f0(int param_1,int param_2,int param_3,char param_4);
void FUN_10001780(int param_1,int param_2,int param_3,char param_4,
            char param_5);
void FUN_100017f0(int param_1,int param_2,int param_3);
void FUN_100018b0(void);
void FUN_100027d0(void);


void __cdecl FUN_10001260(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    ProcessScenary(param_1,(char)local_8);
  }
  return;
}





void __cdecl FUN_100012d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
for (local_8 = 0; (int)local_8 < 8; local_8 = local_8 + 1) {
    iVar1 = GetUnitsByNation(param_1,local_8 & 0xff);
    if (0 < iVar1) break;
  }
  return;
}





void __cdecl
FUN_10001350(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
FUN_100012d0(param_1);
  iVar1 = GetUnitsByNation(param_1,local_8 & 0xff);
  if (iVar1 != 0) {
    SelectUnits1(local_8 & 0xff,param_1,0);
    SetStandGround(local_8 & 0xff,0);
    AllowAttack(local_8 & 0xff,1);
    SelSendAndKill(local_8 & 0xff,param_2,param_3,param_4);
  }
  return;
}





void __cdecl FUN_10001450(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001350(param_1,param_2,200,2);
  uStack_8 = 0x1000148c;
  return;
}





void __cdecl FUN_100014a0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001350(param_1,param_2,param_3,2);
  uStack_8 = 0x100014db;
  return;
}





void __cdecl FUN_100014f0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001350(param_1,param_2,200,0);
  uStack_8 = 0x1000152c;
  return;
}





void __cdecl FUN_10001540(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001350(param_1,param_2,param_3,0);
  uStack_8 = 0x1000157b;
  return;
}





void __cdecl
FUN_10001590(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
FUN_100012d0(param_1);
  iVar1 = GetUnitsByNation(param_1,local_8 & 0xff);
  if (iVar1 != 0) {
    SelectUnits1(local_8 & 0xff,param_1,0);
    SelSendTo(local_8 & 0xff,param_2,param_3,param_4);
  }
  return;
}





void __cdecl FUN_10001650(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001590(param_1,param_2,0x80,0);
  uStack_8 = 0x1000168c;
  return;
}





void __cdecl FUN_100016a0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001590(param_1,param_2,param_3,0);
  uStack_8 = 0x100016db;
  return;
}





void __cdecl
FUN_100016f0(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
CreateObject0(&DAT_10032460,&DAT_100324a8,param_2,param_4,param_3,100);
  RemoveGroup(&DAT_10032460,param_1);
  uStack_8 = 0x1000175d;
  return;
}





void __cdecl
FUN_10001780(int param_1,int param_2,int param_3,char param_4,
            char param_5)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
CreateObject0(param_1,&DAT_100324a8,param_2,param_4,param_3,(int)param_5);
  uStack_8 = 0x100017d3;
  return;
}





void __cdecl FUN_100017f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_c;
  int local_8;
FUN_100012d0(param_1);
  for (local_c = 0; local_c < DAT_10032570; local_c = local_c + 1) {
    FUN_10001780(&DAT_10032460,param_2,param_3,(char)local_8,0);
    RemoveGroup(&DAT_10032460,param_1);
  }
  return;
}





void FUN_100018b0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterVar(&DAT_100323f8,4);
  RegisterVar(&DAT_10032570,4);
  SetPlayerName(1,"PIEMOUNT");
  SetPlayerName(2,"TURKEY");
  SetPlayerName(3,"PIEMOUNT");
  SetPlayerName(4,"TURKEY");
  RegisterUnits(&DAT_10032508,"GErase");
  RegisterDynGroup(&DAT_100324d8);
  RegisterDynGroup(&DAT_10032460);
  RegisterDynGroup(&DAT_10032470);
  RegisterDynGroup(&DAT_10032478);
  RegisterDynGroup(&DAT_10032480);
  RegisterDynGroup(&DAT_10032468);
  RegisterVar(&DAT_10032468,8);
  RegisterZone(&DAT_10032490,DAT_1002d254);
  RegisterZone(&DAT_10032498,DAT_1002d250);
  RegisterZone(&DAT_100324a0,DAT_1002d24c);
  RegisterZone(&DAT_100324b0,DAT_1002d248);
  RegisterZone(&DAT_100324b8,DAT_1002d244);
  RegisterZone(&DAT_100324c0,DAT_1002d240);
  RegisterFormation(&DAT_100324a8,"#ALONE");
  RegisterUnits(&DAT_10032418,DAT_1002d230);
  RegisterUnits(&DAT_10032420,"GPrison");
  RegisterUnitType(&DAT_10032670,"Oficer_NEW(UN)");
  RegisterUnitType(&DAT_100324f8,"Pikiner_turki(TU)");
  RegisterDynGroup(&DAT_10032548);
  RegisterVar(&DAT_10032548,8);
  RegisterUnitType(&DAT_10032578,"Kazarma_evro(VE)");
  RegisterUnitType(&DAT_10032690,"Konushnia_Swesair(VE)");
  RegisterUnitType(&DAT_10032520,"Krestian_Turki(TU)");
  RegisterUnitType(&DAT_10032518,"Pushka(TU)");
  RegisterDynGroup(&DAT_10032448);
  RegisterVar(&DAT_10032448,8);
  RegisterDynGroup(&DAT_10032450);
  RegisterVar(&DAT_10032450,8);
  RegisterDynGroup(&DAT_10032458);
  RegisterVar(&DAT_10032458,8);
  RegisterDynGroup(&DAT_10032430);
  RegisterDynGroup(&DAT_10032438);
  RegisterDynGroup(&DAT_10032440);
  RegisterZone(&DAT_10032638,DAT_1002d19c);
  RegisterZone(&DAT_10032640,DAT_1002d198);
  RegisterZone(&DAT_10032658,DAT_1002d194);
  RegisterZone(&DAT_10032600,DAT_1002d190);
  RegisterZone(&DAT_10032608,DAT_1002d18c);
  RegisterZone(&DAT_10032618,DAT_1002d188);
  RegisterDynGroup(&DAT_10032650);
  RegisterVar(&DAT_10032650,8);
  RegisterDynGroup(&DAT_10032660);
  RegisterVar(&DAT_10032660,8);
  RegisterDynGroup(&DAT_10032668);
  RegisterVar(&DAT_10032668,8);
  RegisterUnitType(&DAT_100326a0,"GALERA(TU)");
  RegisterZone(&DAT_10032628,DAT_1002d174);
  RegisterZone(&DAT_10032610,DAT_1002d170);
  RegisterZone(&DAT_10032620,DAT_1002d16c);
  RegisterZone(&DAT_10032630,DAT_1002d168);
  RegisterDynGroup(&DAT_10032648);
  RegisterVar(&DAT_10032648,8);
  RegisterDynGroup(&DAT_10032530);
  RegisterVar(&DAT_10032530,8);
  RegisterZone(&DAT_100324c8,DAT_1002d164);
  RegisterZone(&DAT_100324d0,DAT_1002d160);
  RegisterDynGroup(&DAT_10032568);
  RegisterVar(&DAT_10032568,8);
  RegisterUnitType(&DAT_10032538,"Fregat(PI)");
  RegisterDynGroup(&DAT_10032400);
  RegisterVar(&DAT_10032400,8);
  RegisterUnitType(&DAT_100326a8,"Shebeka(TU)");
  RegisterDynGroup(&DAT_10032408);
  RegisterVar(&DAT_10032408,8);
  RegisterZone(&DAT_10032588,DAT_1002d13c);
  RegisterZone(&DAT_10032590,DAT_1002d138);
  RegisterZone(&DAT_10032598,DAT_1002d134);
  RegisterZone(&DAT_100325a0,DAT_1002d130);
  RegisterZone(&DAT_100325b0,DAT_1002d12c);
  RegisterZone(&DAT_100325c0,DAT_1002d128);
  RegisterUnits(&DAT_10032540,DAT_1002d124);
  RegisterUnits(&DAT_10032688,"GFood");
  RegisterUnits(&DAT_10032698,"GWood");
  RegisterDynGroup(&DAT_100326d0);
  RegisterDynGroup(&DAT_100326d8);
  RegisterDynGroup(&DAT_100326e0);
  RegisterDynGroup(&DAT_100326e8);
  RegisterUnitType(&DAT_10032428,"Pikiner_evro(PI)");
  RegisterUnitType(&DAT_10032500,"Mushketer_ev(PI)");
  RegisterUnitType(&DAT_10032678,"Grenader_DIP(PI)");
  RegisterUnitType(&DAT_10032560,"Strelec_Algir_DIP(PI)");
  RegisterZone(&DAT_100325a8,DAT_1002d0b8);
  RegisterZone(&DAT_100325b8,DAT_1002d0b4);
  RegisterZone(&DAT_100325d0,DAT_1002d0b0);
  RegisterZone(&DAT_100325d8,DAT_1002d0ac);
  RegisterZone(&DAT_10032580,DAT_1002d0a8);
  RegisterZone(&DAT_100325c8,DAT_1002d0a4);
  RegisterZone(&DAT_100325e0,DAT_1002d0a0);
  RegisterZone(&DAT_100325e8,DAT_1002d09c);
  RegisterZone(&DAT_100325f0,DAT_1002d098);
  RegisterZone(&DAT_100325f8,DAT_1002d094);
  RegisterDynGroup(&DAT_100326b0);
  RegisterDynGroup(&DAT_100326b8);
  RegisterDynGroup(&DAT_100326c0);
  RegisterDynGroup(&DAT_100326c8);
  RegisterUnitType(&DAT_100324e0,"Ianithar(TU)");
  RegisterUnitType(&DAT_10032510,"Grenader_DIP(TU)");
  RegisterUnitType(&DAT_10032488,"Strelec_Algir_DIP(TU)");
  RegisterZone(&DAT_100325a8,DAT_1002d0b8);
  RegisterZone(&DAT_100325b8,DAT_1002d0b4);
  RegisterZone(&DAT_100325d0,DAT_1002d0b0);
  RegisterZone(&DAT_100325d8,DAT_1002d0ac);
  RegisterUnits(&DAT_10032528,DAT_1002d050);
  RegisterUnits(&DAT_10032550,DAT_1002d04c);
  RegisterUnits(&DAT_10032680,"GBAll");
  RegisterUnits(&DAT_100326f0,"GUAll");
  RegisterUpgrade(&DAT_10032558,"MAINVE");
  RegisterUpgrade(&DAT_100324f0,"AKA06VE");
  RegisterUpgrade(&DAT_10032410,"AKA29VE");
  uStack_8 = 0x100024bb;
  return;
}





void FUN_100027d0(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_28;
  int local_24;
  unsigned int local_20;
  unsigned int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
uVar1 = TimerDone(10);
  if ((uVar1 & 0xff) != 0) {
    OnInit(1);
    OnInit(2);
    FUN_10001260(3);
    FUN_10001260(4);
    RunTimer(10,500);
  }
  uVar1 = Trigg(0);
  if ((uVar1 & 0xff) == 0) goto LAB_100038e4;
  TakeFood(&DAT_10032688);
  TakeWood(&DAT_10032698);
  InitialUpgrade("GFood","AKA30VE");
  DisableUpgrade(0,&DAT_100324f0);
  DisableUpgrade(0,&DAT_10032410);
  DisableUpgrade(0,&DAT_10032558);
  EnableUnit(0,&DAT_10032670,1);
  EnableUnit(0,&DAT_10032578,0);
  EnableUnit(0,&DAT_10032690,0);
  EnableUnit(0,&DAT_10032520,0);
  EnableUnit(4,&DAT_10032670,1);
  ChangeFriends(1,0x2e);
  ChangeFriends(2,0x2e);
  ChangeFriends(3,0x2e);
  ChangeFriends(4,0x2e);
  DAT_100323f8 = GetDiff(0);
  SetResource(0,0,(DAT_100323f8 * -2 + 0xf) * 1000);
  uVar2 = GetResource(0,0);
  SetResource(0,3,uVar2);
  uVar2 = GetResource(0,0);
  SetResource(0,2,uVar2);
  uVar2 = GetResource(0,0);
  SetResource(0,1,uVar2);
  uVar2 = GetResource(0,0);
  SetResource(0,4,uVar2);
  uVar2 = GetResource(0,0);
  SetResource(0,5,uVar2);
  if (DAT_100323f8 == 0) {
    iVar3 = GetResource(0,3);
    SetResource(1,0,iVar3 / 3);
  }
  else {
    uVar2 = GetResource(0,3);
    SetResource(1,0,uVar2);
  }
  uVar2 = GetResource(1,0);
  SetResource(1,3,uVar2);
  uVar2 = GetResource(1,0);
  SetResource(1,2,uVar2);
  uVar2 = GetResource(1,0);
  SetResource(1,1,uVar2);
  uVar2 = GetResource(1,0);
  SetResource(1,4,uVar2);
  uVar2 = GetResource(1,0);
  SetResource(1,5,uVar2);
  uVar2 = GetResource(1,3);
  SetResource(2,0,uVar2);
  uVar2 = GetResource(2,0);
  SetResource(2,3,uVar2);
  uVar2 = GetResource(2,0);
  SetResource(2,2,uVar2);
  uVar2 = GetResource(2,0);
  SetResource(2,1,uVar2);
  uVar2 = GetResource(2,0);
  SetResource(2,4,uVar2);
  uVar2 = GetResource(2,0);
  SetResource(2,5,uVar2);
  SetResource(3,0,1000000);
  uVar2 = GetResource(3,0);
  SetResource(3,3,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,2,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,1,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,4,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(3,5,uVar2);
  uVar2 = GetResource(3,3);
  SetResource(4,0,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(4,3,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(4,2,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(4,1,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(4,4,uVar2);
  uVar2 = GetResource(3,0);
  SetResource(4,5,uVar2);
  for (local_8 = 0; local_8 < DAT_100323f8 * 5 + 5; local_8 = local_8 + 1) {
    FUN_100016f0(&DAT_100326d0,&DAT_10032428,&DAT_100325b8,1);
    if (DAT_100323f8 != 0) {
      FUN_100016f0(&DAT_100326d0,&DAT_10032428,&DAT_100325d0,1);
    }
    if (DAT_100323f8 != 0) {
      FUN_100016f0(&DAT_100326d0,&DAT_10032500,&DAT_100325d0,1);
    }
    FUN_100016f0(&DAT_100326b0,&DAT_100324f8,&DAT_100325e8,2);
    if (DAT_100323f8 != 0) {
      FUN_100016f0(&DAT_100326b0,&DAT_100324f8,&DAT_100325f8,2);
    }
    if (DAT_100323f8 != 0) {
      FUN_100016f0(&DAT_100326b0,&DAT_100324e0,&DAT_100325f8,2);
    }
  }
  FUN_100014a0(&DAT_100326d0,&DAT_100325b8,0x40);
  FUN_100014a0(&DAT_100326d0,&DAT_100325a8,0x40);
  FUN_100014a0(&DAT_100326d0,&DAT_10032580,0);
  SelectUnits(&DAT_100326d0,0);
  DoNotUseSelInAI(1);
  ClearSelection(1);
  FUN_100014a0(&DAT_100326b0,&DAT_100325e8,0x40);
  FUN_100014a0(&DAT_100326b0,&DAT_100325e0,0x40);
  FUN_100014a0(&DAT_100326b0,&DAT_10032580,0x80);
  SelectUnits(&DAT_100326b0,0);
  DoNotUseSelInAI(2);
  ClearSelection(2);
  for (local_8 = 0; local_8 < DAT_100323f8 * 2 + -1; local_8 = local_8 + 1) {
    FUN_100016f0(&DAT_10032448,&DAT_10032518,&DAT_10032498,4);
    FUN_100016f0(&DAT_10032450,&DAT_10032518,&DAT_100324a0,4);
    FUN_100016f0(&DAT_10032458,&DAT_10032518,&DAT_100324b0,4);
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      FUN_100016f0(&DAT_10032430,&DAT_100324f8,&DAT_100324b8,4);
      FUN_100016f0(&DAT_10032438,&DAT_100324f8,&DAT_100324b8,4);
      FUN_100016f0(&DAT_10032440,&DAT_100324f8,&DAT_100324b8,4);
    }
  }
  for (local_8 = 0; local_8 < DAT_100323f8 + 2; local_8 = local_8 + 1) {
    FUN_100016f0(&DAT_10032650,&DAT_100326a0,&DAT_10032610,4);
    FUN_100016f0(&DAT_10032660,&DAT_100326a0,&DAT_10032620,4);
    FUN_100016f0(&DAT_10032668,&DAT_100326a0,&DAT_10032630,4);
    FUN_100016f0(&DAT_10032648,&DAT_100326a0,&DAT_100324c8,4);
    FUN_100016f0(&DAT_10032530,&DAT_100326a0,&DAT_100324d0,4);
    if (DAT_100323f8 < 2) {
      local_8 = local_8 + 1;
    }
  }
  FUN_100014a0(&DAT_10032448,&DAT_10032498,10);
  FUN_100014a0(&DAT_10032430,&DAT_10032638,10);
  FUN_100014a0(&DAT_10032450,&DAT_100324a0,0x40);
  FUN_100014a0(&DAT_10032438,&DAT_10032640,0x40);
  FUN_100014a0(&DAT_10032458,&DAT_100324b0,0xa0);
  FUN_100014a0(&DAT_10032440,&DAT_10032658,0xa0);
  RemoveGroup(&DAT_10032430,&DAT_10032468);
  RemoveGroup(&DAT_10032438,&DAT_10032468);
  RemoveGroup(&DAT_10032440,&DAT_10032468);
  FUN_100014a0(&DAT_10032650,&DAT_10032610,0x40);
  FUN_100014a0(&DAT_10032660,&DAT_10032620,0x40);
  FUN_100014a0(&DAT_10032668,&DAT_10032630,0x40);
  FUN_100014a0(&DAT_10032648,&DAT_100324c8,0x28);
  FUN_100014a0(&DAT_10032530,&DAT_100324d0,0x58);
  RemoveGroup(&DAT_10032650,&DAT_10032648);
  RemoveGroup(&DAT_10032660,&DAT_10032648);
  RemoveGroup(&DAT_10032668,&DAT_10032648);
  RemoveGroup(&DAT_10032530,&DAT_10032648);
  local_24 = DAT_100323f8;
  if (DAT_100323f8 == 0) {
    InitialUpgrade("GFood","AKA16VE");
    InitialUpgrade("GFood","AKA20VE");
    InitialUpgrade("GFood","AKA12VE");
    InitialUpgrade("GFood","AKA13VE");
    InitialUpgrade("GFood","AKA32VE");
LAB_10003529:
    InitialUpgrade("GFood","AKA17VE");
    InitialUpgrade("GFood","AKA27VE");
    InitialUpgrade("GFood","AKA28VE");
    InitialUpgrade("GFood","AKA14VE");
    InitialUpgrade("GFood","AKA15VE");
    InitialUpgrade("GFood","AKA33VE");
    InitialUpgrade("GFood","AKA34VE");
  }
  else if (DAT_100323f8 == 1) goto LAB_10003529;
  local_28 = DAT_100323f8;
  if (DAT_100323f8 == 1) {
LAB_100036f0:
    InitialUpgrade(DAT_1002d050,"AKA27PI");
    InitialUpgrade(DAT_1002d04c,"AKA27TU");
  }
  else {
    if (DAT_100323f8 == 2) {
LAB_10003680:
      InitialUpgrade(DAT_1002d050,"AKA16PI");
      InitialUpgrade(DAT_1002d050,"AKA28PI");
      InitialUpgrade(DAT_1002d04c,"AKA16TU");
      InitialUpgrade(DAT_1002d04c,"AKA28TU");
      goto LAB_100036f0;
    }
    if (DAT_100323f8 == 3) {
      InitialUpgrade(DAT_1002d050,"AKA17PI");
      InitialUpgrade(DAT_1002d050,"AKA20PI");
      InitialUpgrade(DAT_1002d04c,"AKA17TU");
      InitialUpgrade(DAT_1002d04c,"AKA20TU");
      goto LAB_10003680;
    }
  }
  RunTimer(1,1);
  RunTimer(2,0x9dd);
  RunTimer(3,0x19);
  RunTimer(10,0);
  if (DAT_100323f8 != 0) {
    RunTimer(0xb,5000);
    RunTimer(0xc,9000);
  }
  StartAI(1,"PIEMONT.0",1,1,1,DAT_100323f8);
  StartAI(2,"TURKISH.0",1,1,1,DAT_100323f8);
  SetLightSpot(&DAT_100324b8,4,1);
  EnableMission(0x42);
  DisableMission(0x43);
  DisableMission(0x44);
  DisableMission(0x45);
  DisableMission(0x46);
  ShowPage("#PAGE01");
  ShowPage("#PAGE02");
  ShowPage("#PAGE03");
  SetTrigg(0,0);
LAB_100038e4:
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xb);
    if ((uVar1 & 0xff) != 0) {
      for (local_10 = 0; local_10 < DAT_100323f8 * 10 + 10; local_10 = local_10 + 1) {
        FUN_100016f0(&DAT_100326d8,&DAT_10032428,&DAT_100325d8,1);
        FUN_100016f0(&DAT_100326d8,&DAT_10032500,&DAT_100325d8,1);
        FUN_100016f0(&DAT_100326b8,&DAT_100324f8,&DAT_100325f8,2);
        FUN_100016f0(&DAT_100326b8,&DAT_100324e0,&DAT_100325f8,2);
      }
      SetTrigg(0xb,0);
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xc);
    if ((uVar1 & 0xff) != 0) {
      for (local_14 = 0; local_14 < DAT_100323f8 * 0xf + 0xf; local_14 = local_14 + 1) {
        FUN_100016f0(&DAT_100326e0,&DAT_10032678,&DAT_100325d8,1);
        FUN_100016f0(&DAT_100326e0,&DAT_10032560,&DAT_100325d8,1);
        FUN_100016f0(&DAT_100326e8,&DAT_10032428,&DAT_100325d8,1);
        FUN_100016f0(&DAT_100326c0,&DAT_10032510,&DAT_100325f8,2);
        FUN_100016f0(&DAT_100326c0,&DAT_10032488,&DAT_100325f8,2);
        FUN_100016f0(&DAT_100326c8,&DAT_100324f8,&DAT_100325f8,2);
      }
      SetTrigg(0xc,0);
    }
  }
  iVar3 = GetTotalAmount0(&DAT_10032540);
  if (iVar3 != 0) {
    iVar3 = GetTotalAmount0(&DAT_10032540);
    AddResource(0,1,iVar3 / 2 + 1);
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_10032400);
      if (iVar3 < DAT_100323f8 + 1) {
        CreateObject0(&DAT_10032460,&DAT_100324a8,&DAT_10032538,3,&DAT_10032588,0x40);
        RemoveGroup(&DAT_10032460,&DAT_10032400);
        FUN_100014f0(&DAT_10032400,&DAT_10032590);
        FUN_10001450(&DAT_10032400,&DAT_100325b0);
        RunTimer(3,0xfa);
      }
      else {
        RunTimer(3,0xdac);
      }
    }
  }
  uVar1 = Trigg(0x5c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_10032408);
      if (iVar3 < DAT_100323f8 + 1) {
        CreateObject0(&DAT_10032460,&DAT_100324a8,&DAT_100326a8,4,&DAT_10032598,0x40);
        RemoveGroup(&DAT_10032460,&DAT_10032408);
        FUN_100014f0(&DAT_10032408,&DAT_100325a0);
        FUN_10001450(&DAT_10032408,&DAT_100325c0);
        RunTimer(2,0xfa);
      }
      else {
        RunTimer(2,0xdac);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_100324c0,0);
    if (0 < iVar3) {
      SaveSelectedUnits(0,&DAT_100324d8,0);
      ClearSelection(0);
      SelectUnitsInZone(&DAT_100324c0,0,0);
      SaveSelectedUnits(0,&DAT_10032568,0);
      ClearSelection(0);
      SelectUnits(&DAT_10032648,0);
      SelAttackGroup(4,&DAT_10032568);
      ClearSelection(4);
      SelectUnits1(0,&DAT_10032448,0);
      SelectUnits1(0,&DAT_10032450,1);
      SelectUnits1(0,&DAT_10032458,1);
      SelDie(0);
      ClearSelection(0);
      SelectUnits(&DAT_100324d8,0);
    }
  }
  iVar3 = GetTotalAmount0(&DAT_10032448);
  if (iVar3 != 0) {
    AttackZoneByArtillery(&DAT_10032448,&DAT_10032498,0);
  }
  iVar3 = GetTotalAmount0(&DAT_10032450);
  if (iVar3 != 0) {
    AttackZoneByArtillery(&DAT_10032450,&DAT_100324a0,0);
  }
  iVar3 = GetTotalAmount0(&DAT_10032458);
  if (iVar3 != 0) {
    AttackZoneByArtillery(&DAT_10032458,&DAT_100324b0,0);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5a);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_10032420);
      if (iVar3 == 0) {
        ShowPage("#PAGE10T");
        LooseGame();
        SetTrigg(0x5a,0);
      }
    }
  }
  uVar1 = Trigg(1);
  if (((uVar1 & 0xff) != 0) && (FUN_100012d0(&DAT_10032420), iVar3 == 0)) {
    RunTimer(1,100);
    SetTrigg(1,0);
    SetTrigg(2,1);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      FUN_100012d0(&DAT_10032420);
      if (iVar3 == 0) {
        AddResource(0,1,(4 - DAT_100323f8) * 0x8ca);
        AddResource(0,4,(4 - DAT_100323f8) * 0x5dc);
        AddResource(0,5,(4 - DAT_100323f8) * 0x5dc);
        AddResource(0,3,(4 - DAT_100323f8) * 500);
        SaveSelectedUnits(0,&DAT_100324d8,0);
        ClearSelection(0);
        ClearSelection(4);
        SelectUnits(&DAT_10032420,0);
        SelChangeNation(4,0);
        ClearSelection(0);
        SelectUnits(&DAT_100324d8,0);
        EnableUnit(0,&DAT_10032670,1);
        EnableUnit(4,&DAT_10032670,1);
        ProduceUnitFast(&DAT_10032420,&DAT_10032670,&DAT_10032548,0);
        RunTimer(1,200);
        SetTrigg(2,0);
        ClearLightSpot(1);
        DisableMission(0x42);
        EnableMission(0x43);
        EnableMission(0x44);
        ShowPage("#PAGE1");
        ShowPageParam("#PAGE2",(4 - DAT_100323f8) * 0x8ca,(4 - DAT_100323f8) * 0x5dc,
                      (4 - DAT_100323f8) * 0x5dc,(4 - DAT_100323f8) * 500);
      }
      else {
        SetTrigg(1,1);
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_100324b8,0);
    if (0 < iVar3) {
      if (0 < DAT_100323f8) {
        for (local_18 = 0; local_18 < DAT_100323f8 * 5 + 5; local_18 = local_18 + 1) {
          ProduceUnitFast(&DAT_10032418,&DAT_100324f8,&DAT_10032468,0);
          ProduceUnitFast(&DAT_10032420,&DAT_100324f8,&DAT_10032468,0);
        }
      }
      RunTimer(4,0x96);
      SetTrigg(4,0);
    }
  }
  uVar1 = Trigg(5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      iVar3 = GetTotalAmount0(&DAT_10032468);
      if (iVar3 == 0) {
        SetTrigg(5,0);
      }
      else {
        FUN_100014a0(&DAT_10032468,&DAT_10032628,0x40);
        RunTimer(4,1000);
      }
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10032490,&DAT_10032548);
    if (0 < iVar3) {
      EnableUnit(0,&DAT_10032578,1);
      EnableUnit(0,&DAT_10032690,1);
      iVar3 = GetTotalAmount0(&DAT_10032420);
      if (iVar3 == 0) {
        EnableUnit(0,&DAT_10032520,1);
      }
      InitialUpgrade("GBAll","MAINVE");
      InitialUpgrade("GBAll","AKA06VE");
      InitialUpgrade("GBAll","AKA29VE");
      InitialUpgrade("GUAll","MAINVE");
      InitialUpgrade("GUAll","AKA06VE");
      InitialUpgrade("GUAll","AKA29VE");
      DisableMission(0x44);
      EnableMission(0x45);
      EnableMission(0x46);
      ShowPage("#PAGE3");
      ShowPage("#PAGE4");
      SetTrigg(3,0);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(1);
      if ((uVar1 & 0xff) != 0) {
        iVar3 = GetTotalAmount0(&DAT_10032548);
        if (iVar3 == 0) {
          ShowPage("#PAGE10G");
          LooseGame();
          SetTrigg(0x5a,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(1);
    if ((uVar1 & 0xff) != 0) {
      ShowPage("#PAGE11");
      SetTrigg(0x5b,0);
    }
  }
  uVar1 = Trigg(0x5c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(2);
    if ((uVar1 & 0xff) != 0) {
      EnableUnit(0,&DAT_10032520,1);
      ShowPage("#PAGE12");
      SetTrigg(0x5c,0);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      for (local_1c = 1; (int)local_1c < 0x14; local_1c = local_1c + 1) {
        uVar1 = TimerDone(local_1c & 0xff);
        if ((uVar1 & 0xff) == 0) {
          RunTimer(local_1c & 0xff,1);
        }
      }
      ShowPage("#PAGE10");
      LooseGame();
      SetTrigg(0x5a,0);
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) == 0) {
      for (local_20 = 1; (int)local_20 < 0x1e; local_20 = local_20 + 1) {
        uVar1 = TimerDone(local_20 & 0xff);
        if ((uVar1 & 0xff) == 0) {
          FreeTimer(local_20 & 0xff);
        }
      }
      ShowPage("#PAGE20");
      ShowVictory();
    }
  }
  return;
}





__declspec(dllexport) void OnInit()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
for (local_8 = 0; (int)local_8 < 6; local_8 = local_8 + 1) {
    iVar1 = GetResource(param_1,local_8 & 0xff);
    if (iVar1 < DAT_10030a30) {
      AddResource(param_1,local_8 & 0xff,DAT_10030a30);
    }
  }
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int param_2 = 0;
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = GetResource(param_1,(int)param_2);
  if (iVar1 < 100000) {
    SetResource(param_1,param_2,10000000);
  }
  uStack_8 = 0x10001235;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

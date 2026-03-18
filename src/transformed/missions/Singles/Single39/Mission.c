#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
char DAT_10030054[] = "Z16";
char DAT_10030058[] = "Z15";
char DAT_1003005c[] = "Z14";
char DAT_10030060[] = "Z13";
char DAT_10030064[] = "Z12";
char DAT_10030068[] = "Z11";
char DAT_1003006c[] = "Z10";
char DAT_10030070[] = "Z9";
char DAT_10030074[] = "Z8";
char DAT_10030078[] = "Z7";
char DAT_1003007c[] = "Z6";
char DAT_10030080[] = "Z5";
char DAT_10030084[] = "Z4";
char DAT_10030088[] = "Z3";
char DAT_1003008c[] = "Z2";
char DAT_10030090[] = "Z1";
char DAT_100301a0[] = "G1";
long long DAT_100358a0 = 0;
long long DAT_100358c0 = 0;
long long DAT_100358d8 = 0;
long long DAT_100358f0 = 0;
long long DAT_10035908 = 0;
long long DAT_10035920 = 0;
long long DAT_10035938 = 0;
long long DAT_10035950 = 0;
long long DAT_10035958 = 0;
long long DAT_10035988 = 0;
long long DAT_100359b8 = 0;
long long DAT_100359e8 = 0;
long long DAT_10035a18 = 0;
long long DAT_10035a48 = 0;
long long DAT_10035a78 = 0;
long long DAT_10035aa8 = 0;
long long DAT_10035ad8 = 0;
long long DAT_10035b08 = 0;
long long DAT_10035b38 = 0;
long long DAT_10035b68 = 0;
long long DAT_10035b98 = 0;
long long DAT_10035bc8 = 0;
long long DAT_10035bf8 = 0;
long long DAT_10035c28 = 0;
long long DAT_10035c58 = 0;
long long DAT_10035c60 = 0;
long long DAT_10035c68 = 0;
long long DAT_10035c70 = 0;
long long DAT_10035c78 = 0;
long long DAT_10035c80 = 0;
long long DAT_10035c88 = 0;
long long DAT_10035c90 = 0;
long long DAT_10035c98 = 0;
long long DAT_10035ca0 = 0;
long long DAT_10035cb8 = 0;
long long DAT_10035cd0 = 0;
long long DAT_10035ce8 = 0;
long long DAT_10035d00 = 0;
long long DAT_10035d08 = 0;
long long DAT_10035d10 = 0;
long long DAT_10035d18 = 0;
long long DAT_10035d20 = 0;
long long DAT_10035d28 = 0;
long long DAT_10035d30 = 0;
long long DAT_10035d40 = 0;
long long DAT_10035d50 = 0;
long long DAT_10035d60 = 0;
int DAT_10035dc0 = 0;
long long DAT_10035dc8 = 0;
long long DAT_10035dd8 = 0;
int DAT_10035f20 = 0;
int DAT_10035f70 = 0;
int DAT_10035f84 = 0;
long long DAT_10035f88 = 0;

/* Forward declarations */
void FUN_100012d0(void);
void FUN_10001310(void);
void FUN_100013b0(void);
void FUN_100013f0(void);
void  FUN_10001430(int param_1);
void FUN_10001480(void);
void FUN_100014c0(void);
void  FUN_10001560(int param_1);
void FUN_100015b0(void);
void FUN_10002080(unsigned int param_1);
void FUN_100021c0(unsigned int param_1);
void FUN_10002300(void);
void  FUN_10003800(int param_1);
void  FUN_10003860(int param_1);
void  FUN_100038d0(int param_1);
void  FUN_10003930(int param_1);
int  FUN_10003990(int param_1);
void  FUN_100039c0(int param_1);
void  FUN_10003a20(void *this_ptr,int param_1);
void  FUN_10003a60(void *this_ptr,int param_1);
void  FUN_10003ae0(void *this_ptr,int param_1,int param_2);
void  FUN_10003c00(void *this_ptr,int param_1);
void  FUN_10003c40(void *this_ptr,int param_1);
void  FUN_10003c80(int param_1);
void  FUN_10003d30(void *this_ptr,int param_1);
void  FUN_10003d70(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10003dd0(void *this_ptr,int param_1);
void  FUN_10003ea0(int param_1);
void  FUN_10003f30(void *this_ptr,unsigned int param_1);
int  FUN_10003fb0(int param_1);
void  FUN_10003fe0(void *this_ptr,int param_1);
void  FUN_10004060(void *this_ptr,int param_1);
void  FUN_100040d0(int param_1);
void  FUN_10004140(void *this_ptr,int param_1);
void  FUN_100041b0(void *this_ptr,int param_1);
void  FUN_100041f0(int param_1);
void  FUN_10004260(void *param_1);
void  FUN_100042e0(void *this_ptr,int param_1);
void  FUN_10004340(void *param_1);
void  FUN_100043c0(void *this_ptr,int param_1);
void  FUN_10004400(int param_1);
void  FUN_10004450(void *this_ptr,int param_1,int param_2);
void  FUN_100044a0(void *param_1);
void  FUN_100047c0(void *param_1);
void  FUN_10004850(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100048b0(void *param_1);
void  FUN_10004930(void *this_ptr,int param_1);
void FUN_100049a0(short *param_1);
void  FUN_10004a40(void *this_ptr,int param_1);
void  FUN_10004a80(void *this_ptr,int param_1);
void  FUN_10004ac0(void *this_ptr,int param_1);
void  FUN_10004b00(void *this_ptr,void *param_1);
int  FUN_10004b70(int param_1);
int  FUN_10004bb0(int param_1);
void FUN_10004d10(void);
void FUN_10004d40(void);
void FUN_10004d50(void);
int FUN_10004da0(int param_1);

void OnInit();
void ProcessScenary();


void FUN_100012d0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001310();
  uStack_8 = 0x100012fa;
  return;
}





void FUN_10001310(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10004400(0x10035958);
  FUN_10004400(0x10035988);
  FUN_10004400(0x100359b8);
  FUN_10004400(0x100359e8);
  FUN_10004400(0x10035a48);
  FUN_10004400(0x10035aa8);
  FUN_10004400(0x10035b08);
  FUN_10004400(0x10035b68);
  uStack_8 = 0x10001385;
  return;
}





void FUN_100013b0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100013f0();
  uStack_8 = 0x100013da;
  return;
}





void FUN_100013f0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001430(&DAT_10035dd8);
  uStack_8 = 0x1000141f;
  return;
}





void  FUN_10001430(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100039c0(param_1);
  return;
}





void FUN_10001480(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100014c0();
  uStack_8 = 0x100014aa;
  return;
}





void FUN_100014c0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10001560(&DAT_10035a18);
  FUN_10001560(&DAT_10035a78);
  FUN_10001560(&DAT_10035ad8);
  FUN_10001560(&DAT_10035b38);
  FUN_10001560(&DAT_10035b98);
  FUN_10001560(&DAT_10035bc8);
  FUN_10001560(&DAT_10035bf8);
  FUN_10001560(&DAT_10035c28);
  uStack_8 = 0x10001535;
  return;
}





void  FUN_10001560(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10001430(param_1);
  return;
}





void FUN_100015b0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetPlayerName(0,"PIRATES");
  SetPlayerName(5,"PIRATES");
  SetPlayerName(1,"ENGLAND");
  SetPlayerName(2,"ENGLAND");
  FUN_10003a20(&DAT_100358a0,&DAT_10035c58);
  RegisterZone(&DAT_10035c58,DAT_10030090);
  RegisterZone(&DAT_10035c60,DAT_1003008c);
  RegisterZone(&DAT_10035c68,DAT_10030088);
  RegisterZone(&DAT_10035c70,DAT_10030084);
  RegisterZone(&DAT_10035c78,DAT_10030080);
  RegisterZone(&DAT_10035c80,DAT_1003007c);
  RegisterZone(&DAT_10035c88,DAT_10030078);
  RegisterZone(&DAT_10035c90,DAT_10030074);
  RegisterZone(&DAT_10035c98,DAT_10030070);
  RegisterZone(&DAT_10035d18,DAT_1003006c);
  RegisterZone(&DAT_10035d20,DAT_10030068);
  RegisterZone(&DAT_10035d28,DAT_10030064);
  RegisterZone(&DAT_10035d30,DAT_10030060);
  RegisterZone(&DAT_10035d40,DAT_1003005c);
  RegisterZone(&DAT_10035d50,DAT_10030058);
  RegisterZone(&DAT_10035d60,DAT_10030054);
  RegisterVar(&DAT_10035dc0,4);
  RegisterUnitType(&DAT_10035d10,"Fregat(fr)");
  RegisterUnitType(&DAT_10035dc8,"Fregat(en)");
  RegisterUnitType(&DAT_10035d00,"FregatNEW(en)");
  RegisterFormation(&DAT_10035950,"#ODIN");
  FUN_10004930(&DAT_10035920,&DAT_10035c88);
  FUN_10004930(&DAT_100358f0,&DAT_10035c78);
  FUN_10004930(&DAT_10035908,&DAT_10035c80);
  FUN_10004930(&DAT_10035cd0,&DAT_10035d30);
  FUN_10004930(&DAT_10035ce8,&DAT_10035d40);
  FUN_10004930(&DAT_10035938,&DAT_10035c90);
  FUN_10004930(&DAT_10035ca0,&DAT_10035d20);
  FUN_10004930(&DAT_10035cb8,&DAT_10035d28);
  FUN_10004930(&DAT_100358d8,&DAT_10035c70);
  FUN_10004930(&DAT_100358c0,&DAT_10035c68);
  FUN_10003d70(&DAT_10035dd8,&DAT_10035d10,&DAT_10035950,0);
  RegisterVar(&DAT_10035dd8,0x2c);
  FUN_10003d70(&DAT_10035a18,&DAT_10035dc8,&DAT_10035950,1);
  FUN_10003d70(&DAT_10035a78,&DAT_10035dc8,&DAT_10035950,1);
  FUN_10003d70(&DAT_10035ad8,&DAT_10035dc8,&DAT_10035950,1);
  FUN_10003d70(&DAT_10035b38,&DAT_10035dc8,&DAT_10035950,1);
  FUN_10003d70(&DAT_10035b98,&DAT_10035d00,&DAT_10035950,1);
  FUN_10003d70(&DAT_10035bc8,&DAT_10035dc8,&DAT_10035950,1);
  FUN_10003d70(&DAT_10035bf8,&DAT_10035d00,&DAT_10035950,1);
  FUN_10003d70(&DAT_10035c28,&DAT_10035dc8,&DAT_10035950,1);
  FUN_10004850(&DAT_10035958,&DAT_10035dc8,&DAT_10035950,2);
  FUN_10003a20(&DAT_10035958,&DAT_10035c58);
  FUN_10004850(&DAT_10035988,&DAT_10035dc8,&DAT_10035950,2);
  FUN_10003a20(&DAT_10035988,&DAT_10035c58);
  FUN_10004850(&DAT_100359b8,&DAT_10035dc8,&DAT_10035950,2);
  FUN_10003a20(&DAT_100359b8,&DAT_10035c58);
  FUN_10004850(&DAT_100359e8,&DAT_10035dc8,&DAT_10035950,2);
  FUN_10003a20(&DAT_100359e8,&DAT_10035c58);
  FUN_10004850(&DAT_10035a48,&DAT_10035dc8,&DAT_10035950,2);
  FUN_10003a20(&DAT_10035a48,&DAT_10035c58);
  FUN_10004850(&DAT_10035aa8,&DAT_10035dc8,&DAT_10035950,2);
  FUN_10003a20(&DAT_10035aa8,&DAT_10035c58);
  FUN_10004850(&DAT_10035b08,&DAT_10035dc8,&DAT_10035950,2);
  FUN_10003a20(&DAT_10035b08,&DAT_10035c58);
  FUN_10004850(&DAT_10035b68,&DAT_10035dc8,&DAT_10035950,2);
  FUN_10003a20(&DAT_10035b68,&DAT_10035c58);
  RegisterDynGroup(&DAT_10035d08);
  FUN_10004a40(&DAT_10035920,&DAT_10035c78);
  FUN_10004a80(&DAT_10035920,1);
  FUN_10004ac0(&DAT_10035920,5000);
  FUN_10004a40(&DAT_100358f0,&DAT_10035d28);
  FUN_10004a80(&DAT_100358f0,3);
  FUN_10004ac0(&DAT_100358f0,80000);
  FUN_10004a40(&DAT_10035908,&DAT_10035c88);
  FUN_10004a80(&DAT_10035908,3);
  FUN_10004ac0(&DAT_10035908,12000);
  FUN_10004a40(&DAT_10035cd0,&DAT_10035c80);
  FUN_10004a80(&DAT_10035cd0,4);
  FUN_10004ac0(&DAT_10035cd0,19000);
  FUN_10004a40(&DAT_10035938,&DAT_10035c68);
  FUN_10004a80(&DAT_10035938,0);
  FUN_10004ac0(&DAT_10035938,0x38a4);
  FUN_10004a40(&DAT_10035ca0,&DAT_10035c90);
  FUN_10004a80(&DAT_10035ca0,5);
  FUN_10004ac0(&DAT_10035ca0,16000);
  FUN_10004a40(&DAT_10035cb8,&DAT_10035d20);
  FUN_10004a80(&DAT_10035cb8,4);
  FUN_10004ac0(&DAT_10035cb8,0x1d1a);
  FUN_10004a40(&DAT_100358d8,&DAT_10035d40);
  FUN_10004a80(&DAT_100358d8,1);
  FUN_10004ac0(&DAT_100358d8,0x2904);
  FUN_10004a40(&DAT_100358c0,&DAT_10035c70);
  FUN_10004a80(&DAT_100358c0,2);
  FUN_10004ac0(&DAT_100358c0,24000);
  FUN_10004a40(&DAT_10035ce8,&DAT_10035d30);
  FUN_10004a80(&DAT_10035ce8,0);
  FUN_10004ac0(&DAT_10035ce8,0x251c);
  FUN_100041b0(&DAT_10035a18,&DAT_10035c80);
  FUN_10004060(&DAT_10035a18,&DAT_10035c88);
  FUN_100041b0(&DAT_10035a78,&DAT_10035c68);
  FUN_10004060(&DAT_10035a78,&DAT_10035c70);
  FUN_100041b0(&DAT_10035ad8,&DAT_10035d28);
  FUN_10004060(&DAT_10035ad8,&DAT_10035c88);
  FUN_100041b0(&DAT_10035b38,&DAT_10035c68);
  FUN_10004060(&DAT_10035b38,&DAT_10035c80);
  FUN_100041b0(&DAT_10035b98,&DAT_10035d28);
  FUN_10004060(&DAT_10035b98,&DAT_10035c78);
  FUN_100041b0(&DAT_10035bc8,&DAT_10035d30);
  FUN_10004060(&DAT_10035bc8,&DAT_10035c88);
  FUN_100041b0(&DAT_10035c28,&DAT_10035c90);
  FUN_10004060(&DAT_10035c28,&DAT_10035c80);
  FUN_100041b0(&DAT_10035bf8,&DAT_10035c88);
  FUN_10004060(&DAT_10035bf8,&DAT_10035d30);
  FUN_100041b0(&DAT_10035958,&DAT_10035c88);
  FUN_100041b0(&DAT_10035988,&DAT_10035c78);
  FUN_100041b0(&DAT_100359b8,&DAT_10035d40);
  FUN_100041b0(&DAT_100359e8,&DAT_10035d20);
  FUN_100041b0(&DAT_10035a48,&DAT_10035c68);
  FUN_100041b0(&DAT_10035aa8,&DAT_10035d30);
  FUN_100041b0(&DAT_10035b08,&DAT_10035c90);
  FUN_100041b0(&DAT_10035b68,&DAT_10035c80);
  uStack_8 = 0x10001e51;
  return;
}





void __cdecl FUN_10002080(unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((int)param_1 < 4) {
    iVar1 = GetResource(0,(int)(char)param_1);
    if (4999 < iVar1) {
      AddResource(0,param_1 & 0xff,0xffffec78);
      AddResource(0,1,(4 - DAT_10035dc0) * 500);
    }
  }
  else {
    iVar1 = GetResource(0,(int)(char)param_1);
    if (4999 < iVar1) {
      AddResource(0,param_1 & 0xff,0xffffec78);
      AddResource(0,1,(4 - DAT_10035dc0) * 100);
    }
  }
  uStack_8 = 0x10002172;
  return;
}





void __cdecl FUN_100021c0(unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((int)param_1 < 4) {
    iVar1 = GetResource(0,1);
    if (4999 < iVar1) {
      AddResource(0,1,0xffffec78);
      AddResource(0,param_1 & 0xff,(4 - DAT_10035dc0) * 3000);
    }
  }
  else {
    iVar1 = GetResource(0,1);
    if (4999 < iVar1) {
      AddResource(0,1,0xffffec78);
      AddResource(0,param_1 & 0xff,(4 - DAT_10035dc0) * 2000);
    }
  }
  uStack_8 = 0x100022b1;
  return;
}





void FUN_10002300(void)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [20];
  int local_1c;
  int local_18;
  int uStack_8;
uVar2 = Trigg(99);
  if ((uVar2 & 0xff) != 0) {
    DAT_10035dc0 = GetDiff(0);
    SetResource(0,3,DAT_10035dc0 * -3000 + 10000);
    SetResource(0,1,DAT_10035dc0 * -3000 + 10000);
    SetResource(0,0,DAT_10035dc0 * -3000 + 10000);
    SetResource(0,2,DAT_10035dc0 * -3000 + 10000);
    SetResource(0,5,DAT_10035dc0 * -3000 + 10000);
    SetResource(0,4,DAT_10035dc0 * -3000 + 10000);
    SetLightSpot(&DAT_10035c58,1,1);
    ShowPage("#PAGE0");
    ChangeFriends(0,0x21);
    ChangeFriends(1,6);
    SetTrigg(99,0);
    FUN_10003ae0(&DAT_10035958,&DAT_10035c88,1);
    FUN_10003fe0(&DAT_10035958,&DAT_10035c88);
    FUN_10003ae0(&DAT_10035988,&DAT_10035c78,1);
    FUN_10003fe0(&DAT_10035988,&DAT_10035c78);
    FUN_10003ae0(&DAT_100359b8,&DAT_10035d40,1);
    FUN_10003fe0(&DAT_100359b8,&DAT_10035d40);
    FUN_10003ae0(&DAT_100359e8,&DAT_10035d20,1);
    FUN_10003fe0(&DAT_100359e8,&DAT_10035d20);
    FUN_10003ae0(&DAT_10035a48,&DAT_10035c68,1);
    FUN_10003fe0(&DAT_10035a48,&DAT_10035c68);
    FUN_10003ae0(&DAT_10035aa8,&DAT_10035d30,1);
    FUN_10003fe0(&DAT_10035aa8,&DAT_10035d30);
    FUN_10003ae0(&DAT_10035b08,&DAT_10035c90,1);
    FUN_10003fe0(&DAT_10035b08,&DAT_10035c90);
    FUN_10003ae0(&DAT_10035b68,&DAT_10035c80,1);
    FUN_10003fe0(&DAT_10035b68,&DAT_10035c80);
    InitialUpgrade(DAT_100301a0,"AKA28FR");
    if (DAT_10035dc0 < 3) {
      InitialUpgrade(DAT_100301a0,"AKA16EN");
    }
    if (DAT_10035dc0 < 2) {
      InitialUpgrade(DAT_100301a0,"AKA16EN");
    }
    if (DAT_10035dc0 < 1) {
      InitialUpgrade(DAT_100301a0,"AKA28FR");
    }
    FUN_10004a40(&DAT_10035920,&DAT_10035c78);
    FUN_10004a80(&DAT_10035920,1);
    FUN_10004ac0(&DAT_10035920,5000);
    FUN_10004a40(&DAT_100358f0,&DAT_10035d28);
    FUN_10004a80(&DAT_100358f0,3);
    FUN_10004ac0(&DAT_100358f0,120000);
    FUN_10004a40(&DAT_10035908,&DAT_10035c88);
    FUN_10004a80(&DAT_10035908,3);
    FUN_10004ac0(&DAT_10035908,12000);
    FUN_10004a40(&DAT_10035cd0,&DAT_10035c80);
    FUN_10004a80(&DAT_10035cd0,4);
    FUN_10004ac0(&DAT_10035cd0,19000);
    FUN_10004a40(&DAT_10035938,&DAT_10035c68);
    FUN_10004a80(&DAT_10035938,0);
    FUN_10004ac0(&DAT_10035938,0x38a4);
    FUN_10004a40(&DAT_10035ca0,&DAT_10035c90);
    FUN_10004a80(&DAT_10035ca0,5);
    FUN_10004ac0(&DAT_10035ca0,16000);
    FUN_10004a40(&DAT_10035cb8,&DAT_10035d20);
    FUN_10004a80(&DAT_10035cb8,4);
    FUN_10004ac0(&DAT_10035cb8,0x1d1a);
    FUN_10004a40(&DAT_100358d8,&DAT_10035d40);
    FUN_10004a80(&DAT_100358d8,1);
    FUN_10004ac0(&DAT_100358d8,0x2904);
    FUN_10004a40(&DAT_100358c0,&DAT_10035c70);
    FUN_10004a80(&DAT_100358c0,2);
    FUN_10004ac0(&DAT_100358c0,24000);
    FUN_10004a40(&DAT_10035ce8,&DAT_10035d30);
    FUN_10004a80(&DAT_10035ce8,0);
    FUN_10004ac0(&DAT_10035ce8,0x4c2c);
    FUN_10003ae0(&DAT_10035dd8,&DAT_10035c58,1);
    FUN_10003ae0(&DAT_10035a18,&DAT_10035c80,1);
    FUN_100041b0(&DAT_10035a18,&DAT_10035c80);
    FUN_10004060(&DAT_10035a18,&DAT_10035c88);
    FUN_10003ae0(&DAT_10035a78,&DAT_10035c68,1);
    FUN_100041b0(&DAT_10035a78,&DAT_10035c68);
    FUN_10004060(&DAT_10035a78,&DAT_10035c70);
    FUN_10003ae0(&DAT_10035ad8,&DAT_10035d28,1);
    FUN_100041b0(&DAT_10035ad8,&DAT_10035d28);
    FUN_10004060(&DAT_10035ad8,&DAT_10035c88);
    FUN_10003ae0(&DAT_10035b38,&DAT_10035c68,1);
    FUN_100041b0(&DAT_10035b38,&DAT_10035c68);
    FUN_10004060(&DAT_10035b38,&DAT_10035c80);
    if (1 < DAT_10035dc0) {
      FUN_10003ae0(&DAT_10035b98,&DAT_10035d28,1);
      FUN_100041b0(&DAT_10035b98,&DAT_10035d28);
      FUN_10004060(&DAT_10035b98,&DAT_10035c78);
      FUN_10003ae0(&DAT_10035bc8,&DAT_10035d30,1);
      FUN_100041b0(&DAT_10035bc8,&DAT_10035d30);
      FUN_10004060(&DAT_10035bc8,&DAT_10035c88);
    }
    if (2 < DAT_10035dc0) {
      FUN_10003ae0(&DAT_10035c28,&DAT_10035c90,1);
      FUN_100041b0(&DAT_10035c28,&DAT_10035c90);
      FUN_10004060(&DAT_10035c28,&DAT_10035c80);
      FUN_10003ae0(&DAT_10035bf8,&DAT_10035c88,1);
      FUN_100041b0(&DAT_10035bf8,&DAT_10035c88);
      FUN_10004060(&DAT_10035bf8,&DAT_10035d30);
    }
    SetTrigg(1,0);
  }
  iVar3 = GetUnitsAmount0(&DAT_10035d18,0);
  if (0 < iVar3) {
    SelectUnitsInZone(&DAT_10035d18,0,0);
    SaveSelectedUnits(0,&DAT_10035d08,0);
    GetUnitInfo(&DAT_10035d08,0,local_30);
    local_1c = 0x1c40;
    local_18 = 0x2384;
    SetUnitInfo(local_30);
  }
  FUN_100044a0(&DAT_10035958);
  FUN_100044a0(&DAT_10035988);
  FUN_100044a0(&DAT_100359b8);
  FUN_100044a0(&DAT_100359e8);
  FUN_100044a0(&DAT_10035a48);
  FUN_100044a0(&DAT_10035aa8);
  FUN_100044a0(&DAT_10035b08);
  FUN_100044a0(&DAT_10035b68);
  FUN_10004260(&DAT_10035a18);
  FUN_10004140(&DAT_10035dd8,&DAT_10035c58);
  if (cVar1 != '\0') {
    uVar2 = Trigg(1);
    if ((uVar2 & 0xff) != 0) {
      local_34 = AskMultilineQuestion(7,"#PAGE6",0,"FM10_5|FM10_6|FM10_7|FM10_11|FM_non");
      switch(local_34) {
      case 0:
        SetTrigg(3,0);
        break;
      case 1:
        local_38 = AskMultilineQuestion(7,"#PAGE4",0,"FM10_0|FM10_1|FM10_2|FM10_3|FM10_4|FM_non");
        switch(local_38) {
        case 0:
          FUN_10002080(0);
          break;
        case 1:
          FUN_10002080(2);
          break;
        case 2:
          FUN_10002080(3);
          break;
        case 3:
          FUN_10002080(4);
          break;
        case 4:
          FUN_10002080(5);
        }
        break;
      case 2:
        local_3c = AskMultilineQuestion(7,"#PAGE5",0,"FM10_2|FM10_3|FM10_4|FM_non");
        if (local_3c == 0) {
          FUN_100021c0(3);
        }
        else if (local_3c == 1) {
          FUN_100021c0(4);
        }
        else if (local_3c == 2) {
          FUN_100021c0(5);
        }
        break;
      case 3:
        local_40 = AskMultilineQuestion(7,"#PAGE7",0,"FM10_8|FM10_9|FM10_10|FM_non");
        if (local_40 == 0) {
          iVar3 = GetResource(0,1);
          if (iVar3 < 20000) {
            ShowPage("#PAGE2");
          }
          else {
            AddResource(0,1,0xffffb1e0);
            InitialUpgrade(DAT_100301a0,"AKA28FR");
          }
        }
        else if (local_40 == 1) {
          iVar3 = GetResource(0,1);
          if (iVar3 < 10000) {
            ShowPage("#PAGE2");
          }
          else {
            AddResource(0,1,0xffffd8f0);
            InitialUpgrade(DAT_100301a0,"AKA16FR");
          }
        }
        else if (local_40 == 2) {
          iVar3 = GetResource(0,1);
          if (iVar3 < 15000) {
            ShowPage("#PAGE2");
          }
          else {
            AddResource(0,1,0xffffc568);
            InitialUpgrade(DAT_100301a0,"AKA27FR");
          }
        }
        break;
      case 4:
        SetTrigg(1,0);
      }
    }
  }
  FUN_10004140(&DAT_10035dd8,&DAT_10035c58);
  if (cVar1 == '\0') {
    uVar2 = Trigg(1);
    if ((uVar2 & 0xff) == 0) {
      SetTrigg(1,1);
    }
  }
  uVar2 = Trigg(2);
  if ((uVar2 & 0xff) != 0) {
    iVar3 = GetUnitsAmount0(&DAT_10035c58,0);
    if (0 < iVar3) {
      SetTrigg(2,0);
    }
  }
  uVar2 = Trigg(2);
  if ((uVar2 & 0xff) == 0) {
    iVar3 = GetUnitsAmount0(&DAT_10035c58,0);
    if (iVar3 == 0) {
      SetTrigg(2,1);
    }
  }
  uVar2 = Trigg(3);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = Trigg(1);
    if ((uVar2 & 0xff) == 0) {
      FUN_10003ea0(&DAT_10035dd8);
      if (iVar3 < 100) {
        iVar3 = GetResource(0,1);
        if (9 < iVar3) {
          AddResource(0,1,0xfffffffe);
          FUN_10003dd0(&DAT_10035dd8,0x32);
        }
      }
      else {
        SetTrigg(3,1);
      }
    }
  }
  FUN_10003930(&DAT_10035958);
  if (cVar1 == '\0') {
    FUN_10003d30(&DAT_10035958,2);
    FUN_10003ae0(&DAT_10035958,&DAT_10035c88,1);
    FUN_10003fe0(&DAT_10035958,&DAT_10035c88);
  }
  FUN_10003930(&DAT_10035988);
  if (cVar1 == '\0') {
    FUN_10003d30(&DAT_10035988,2);
    FUN_10003ae0(&DAT_10035988,&DAT_10035c78,1);
    FUN_10003fe0(&DAT_10035988,&DAT_10035c78);
  }
  FUN_10003930(&DAT_100359b8);
  if (cVar1 == '\0') {
    FUN_10003d30(&DAT_100359b8,2);
    FUN_10003ae0(&DAT_100359b8,&DAT_10035d40,1);
    FUN_10003fe0(&DAT_100359b8,&DAT_10035d40);
  }
  FUN_10003930(&DAT_100359e8);
  if (cVar1 == '\0') {
    FUN_10003d30(&DAT_100359e8,2);
    FUN_10003ae0(&DAT_100359e8,&DAT_10035d20,1);
    FUN_10003fe0(&DAT_100359e8,&DAT_10035d20);
  }
  FUN_10003930(&DAT_10035a48);
  if (cVar1 == '\0') {
    FUN_10003d30(&DAT_10035a48,2);
    FUN_10003ae0(&DAT_10035a48,&DAT_10035c68,1);
    FUN_10003fe0(&DAT_10035a48,&DAT_10035c68);
  }
  FUN_10003930(&DAT_10035aa8);
  if (cVar1 == '\0') {
    FUN_10003d30(&DAT_10035aa8,2);
    FUN_10003ae0(&DAT_10035aa8,&DAT_10035d30,1);
    FUN_10003fe0(&DAT_10035aa8,&DAT_10035d30);
  }
  FUN_10003930(&DAT_10035b08);
  if (cVar1 == '\0') {
    FUN_10003d30(&DAT_10035b08,2);
    FUN_10003ae0(&DAT_10035b08,&DAT_10035c90,1);
    FUN_10003fe0(&DAT_10035b08,&DAT_10035c90);
  }
  FUN_10003930(&DAT_10035b68);
  if (cVar1 == '\0') {
    FUN_10003d30(&DAT_10035b68,2);
    FUN_10003ae0(&DAT_10035b68,&DAT_10035c80,1);
    FUN_10003fe0(&DAT_10035b68,&DAT_10035c80);
  }
  FUN_10003930(&DAT_10035a18);
  if (cVar1 == '\0') {
    FUN_10003ae0(&DAT_10035a18,&DAT_10035c80,1);
    FUN_100041b0(&DAT_10035a18,&DAT_10035c80);
    FUN_10004060(&DAT_10035a18,&DAT_10035c88);
  }
  FUN_10003930(&DAT_10035a78);
  if (cVar1 == '\0') {
    FUN_10003ae0(&DAT_10035a78,&DAT_10035c68,1);
    FUN_100041b0(&DAT_10035a78,&DAT_10035c68);
    FUN_10004060(&DAT_10035a78,&DAT_10035c70);
  }
  FUN_10003930(&DAT_10035ad8);
  if (cVar1 == '\0') {
    FUN_10003ae0(&DAT_10035ad8,&DAT_10035d28,1);
    FUN_100041b0(&DAT_10035ad8,&DAT_10035d28);
    FUN_10004060(&DAT_10035ad8,&DAT_10035c88);
  }
  FUN_10003930(&DAT_10035b38);
  if (cVar1 == '\0') {
    FUN_10003ae0(&DAT_10035b38,&DAT_10035c68,1);
    FUN_100041b0(&DAT_10035b38,&DAT_10035c68);
    FUN_10004060(&DAT_10035b38,&DAT_10035c80);
  }
  if (1 < DAT_10035dc0) {
    FUN_10003930(&DAT_10035b98);
    if (cVar1 == '\0') {
      FUN_10003ae0(&DAT_10035b98,&DAT_10035d28,1);
      FUN_100041b0(&DAT_10035b98,&DAT_10035d28);
      FUN_10004060(&DAT_10035b98,&DAT_10035c78);
    }
    FUN_10003930(&DAT_10035bc8);
    if (cVar1 == '\0') {
      FUN_10003ae0(&DAT_10035bc8,&DAT_10035d30,1);
      FUN_100041b0(&DAT_10035bc8,&DAT_10035d30);
      FUN_10004060(&DAT_10035bc8,&DAT_10035c88);
    }
  }
  if (2 < DAT_10035dc0) {
    FUN_10003930(&DAT_10035c28);
    if (cVar1 == '\0') {
      FUN_10003ae0(&DAT_10035c28,&DAT_10035c90,1);
      FUN_100041b0(&DAT_10035c28,&DAT_10035c90);
      FUN_10004060(&DAT_10035c28,&DAT_10035c80);
    }
    FUN_10003930(&DAT_10035bf8);
    if (cVar1 == '\0') {
      FUN_10003ae0(&DAT_10035bf8,&DAT_10035c88,1);
      FUN_100041b0(&DAT_10035bf8,&DAT_10035c88);
      FUN_10004060(&DAT_10035bf8,&DAT_10035d30);
    }
  }
  FUN_10003930(&DAT_10035dd8);
  if (cVar1 == '\0') {
    LooseGame();
  }
  iVar3 = GetResource(0,1);
  if (100000 < iVar3) {
    ShowVictory();
  }
  uStack_8 = 0x100033a1;
  return;
}





void  FUN_10003800(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_10003860(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10003800(param_1);
  SelDie(*(char *)(local_8 + 0x10));
  return;
}





void  FUN_100038d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_10003930(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_100038d0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10003990(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100039c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10003a20(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_10003a60(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((int)this_ptr + 8,*(int *)((int)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x10003ab8;
  return;
}





void  FUN_10003ae0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_100038d0(this_ptr);
  if (iVar2 == 0) {
    ClearSelection(*(char *)((int)local_8 + 0x10));
    for (local_c = 0; uVar1 = (int)((unsigned int)local_c >> 8), local_c < param_2;
        local_c = local_c + 1) {
      CreateObject0(local_8,*(int *)((int)local_8 + 0x1c),
                    *(int *)((int)local_8 + 0x18),
                    (int)*(char *)((int)local_8 + 0x10),param_1,0);
      SelectUnits(local_8,1);
    }
    SaveSelectedUnits((int)*(char *)((int)local_8 + 0x10),local_8,0);
  }
  local_8 = (void *)0x10003bb7;
  return;
}





void  FUN_10003c00(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10003c40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_10003c80(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  for (local_10 = 0; (int)local_10 < 8; local_10 = local_10 + 1) {
    iVar1 = GetUnitsByNation(local_8,local_10 & 0xff);
    if (0 < iVar1) {
      local_c = local_10;
      local_10 = 8;
    }
  }
  *(unsigned int *)(local_8 + 0x10) = local_c;
  return;
}





void  FUN_10003d30(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10003d70(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  *(int *)((int)this_ptr + 0x1c) = param_2;
  *(int *)((int)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10003dd0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  char local_34 [4];
  unsigned short local_30;
  unsigned short uStack_2e;
  void *local_8;
local_8 = this_ptr;
  GetUnitInfo(this_ptr,0,local_34);
  if ((int)((unsigned int)local_30 + param_1) < (int)(unsigned int)uStack_2e) {
    local_30 = local_30 + (short)param_1;
  }
  if ((int)(unsigned int)uStack_2e <= (int)((unsigned int)local_30 + param_1)) {
    local_30 = uStack_2e;
  }
  SetUnitInfo(local_34);
  local_8 = (void *)0x10003e70;
  return;
}





void  FUN_10003ea0(int param_1)

{
  int iVar1;
  int *puVar2;
  unsigned int local_3c;
  unsigned int local_38;
  char local_34 [4];
  unsigned short local_30;
  unsigned short uStack_2e;
  int local_8;
local_8 = param_1;
  GetUnitInfo(param_1,0,local_34);
  local_38 = (unsigned int)local_30;
  local_3c = (unsigned int)uStack_2e;
  0;
  return;
}





void  FUN_10003f30(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003800(this_ptr);
  SelChangeNation(*(char *)((int)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((int)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10003f88;
  return;
}





int  FUN_10003fb0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10003fe0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003800(this_ptr);
  SelSendTo(*(char *)((int)local_8 + 0x10),param_1,0,0);
  *(int *)((int)local_8 + 0x20) = param_1;
  local_8 = (void *)0x1000403c;
  return;
}





void  FUN_10004060(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003800(this_ptr);
  Patrol(*(char *)((int)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x100040b1;
  return;
}





void  FUN_100040d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar1 = GetUnitsAmount1(*(int *)(param_1 + 0x20),param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10004140(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  iVar1 = GetUnitsAmount1(param_1,this_ptr);
  if (0 < iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10004193;
  return;
}





void  FUN_100041b0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_100041f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10003800(param_1);
  SetStandGround(*(char *)(local_8 + 0x10),1);
  return;
}





void  FUN_10004260(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10003930(param_1);
  if (cVar1 != '\0') {
    FUN_10004340(local_8);
    FUN_10003ea0(local_8);
    if (iVar2 < 10) {
      FUN_10003fe0(local_8,*(int *)((int)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x100042bf;
  return;
}





void  FUN_100042e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10004326;
  return;
}





void  FUN_10004340(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  uVar4 = 0;
  local_8 = param_1;
  FUN_10003a60(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000439b;
  return;
}





void  FUN_100043c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10004400(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10001430(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10004450(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x24) = param_1;
  *(int *)((int)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_100044a0(void *param_1)

{
  char cVar1;
  void *this_ptr;
  int uVar2;
  int iVar3;
  int *puVar4;
  void *pvVar5;
  int uVar6;
  int local_50 [16];
  int local_10;
  int local_c;
  void *local_8;
if (((*(char *)((int)param_1 + 0x2c) != '\0') &&
      (local_8 = param_1, FUN_10003930(param_1), cVar1 != '\0')) &&
     (*(int *)((int)local_8 + 0x10) != 0)) {
    if (*(int *)((int)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_10003a60(local_8,600);
      iVar3 = GetUnitsAmount0(uVar2,uVar6);
      if ((0 < iVar3) && (*(int *)((int)local_8 + 0x28) != 0)) {
        local_c = *(int *)((int)local_8 + 0x24);
        switch(local_c) {
        case 0:
          ShowPageParam("#PAGE1_0",*(int *)((int)local_8 + 0x28));
          break;
        case 1:
          ShowPageParam("#PAGE1_1",*(int *)((int)local_8 + 0x28));
          break;
        case 2:
          ShowPageParam("#PAGE1_2",*(int *)((int)local_8 + 0x28));
          break;
        case 3:
          ShowPageParam("#PAGE1_3",*(int *)((int)local_8 + 0x28));
          break;
        case 4:
          ShowPageParam("#PAGE1_4",*(int *)((int)local_8 + 0x28));
          break;
        case 5:
          ShowPageParam("#PAGE1_5",*(int *)((int)local_8 + 0x28));
        }
        local_10 = AskMultilineQuestion(7,"#PAGE3",0,"FM10_A|FM10_B");
        if (local_10 == 0) {
          FUN_10003f30(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10003860((int)local_8);
        }
        AddResource(0,*(char *)((int)local_8 + 0x24),*(int *)((int)local_8 + 0x28));
        FUN_10004450(local_8,0,0);
        FUN_10003800(local_8);
        uVar6 = 0;
        uVar2 = FUN_10003990(local_8);
        SaveSelectedUnits(7,uVar2,uVar6);
      }
    }
    else {
      FUN_10003ea0(local_8);
      if (iVar3 < 0x32) {
        FUN_100047c0(local_8);
      }
      FUN_100040d0((int)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_100049a0(*(short **)((int)local_8 + 0x20));
        FUN_10004b00(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x100046f9;
  return;
}





void  FUN_100047c0(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10003f30(param_1,6);
  uVar5 = 0;
  uVar4 = 0;
  FUN_10003a60(local_8,100);
  SelSendTo(*(char *)((int)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_100041f0((int)local_8);
  local_8 = (void *)0x10004824;
  return;
}





void  FUN_10004850(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003d70(this_ptr,param_1,param_2,param_3);
  *(char *)((int)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10004895;
  return;
}





void  FUN_100048b0(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  uVar4 = 0;
  local_8 = param_1;
  FUN_10003a60(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000490b;
  return;
}





void  FUN_10004930(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 4) = param_1;
  ((long long *)&DAT_10035f20)[DAT_10035f70] = this_ptr;
  DAT_10035f70 = DAT_10035f70 + 1;
  return;
}





void __cdecl FUN_100049a0(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_10035f20;
  for (local_c = 0; local_c < DAT_10035f70; local_c = local_c + 1) {
    psVar1 = (short *)FUN_10004b70(((long long *)&DAT_10035f20)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_10035f20)[local_c];
    }
  }
  return;
}





void  FUN_10004a40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 8) = param_1;
  return;
}





void  FUN_10004a80(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_10004ac0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10004b00(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10004450(param_1,*(int *)((int)this_ptr + 0xc),*(int *)((int)this_ptr + 0x10));
  FUN_10003fe0(param_1,*(int *)((int)local_8 + 8));
  local_8 = (void *)0x10004b4f;
  return;
}





int  FUN_10004b70(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_10004bb0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}







void FUN_10004d10(void)

{
  FUN_10004d50();
  return;
}





void FUN_10004d40(void)

{
  return;
}





void FUN_10004d50(void)

{
  return;
}





int __cdecl FUN_10004da0(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_10035f84;
  DAT_10035f84 = param_1;
  return uVar1;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
ProcessScenary();
  uStack_8 = 0x1000127a;
  return;
}





void ProcessScenary(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100039c0(&DAT_100358a0);
  uStack_8 = 0x100012bf;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

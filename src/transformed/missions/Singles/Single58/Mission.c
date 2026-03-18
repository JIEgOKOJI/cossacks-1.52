#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
int this_ptr = 0;
char DAT_1003102c[] = "G1";
char DAT_1003106c[] = "Z20";
char DAT_10031070[] = "Z19";
char DAT_10031074[] = "Z18";
char DAT_10031078[] = "Z17";
char DAT_1003107c[] = "Z16";
char DAT_10031080[] = "Z15";
char DAT_10031084[] = "Z14";
char DAT_10031088[] = "Z13";
char DAT_1003108c[] = "Z12";
char DAT_10031090[] = "Z11";
char DAT_10031094[] = "Z10";
char DAT_10031098[] = "Z9";
char DAT_1003109c[] = "Z8";
char DAT_100310a0[] = "Z7";
char DAT_100310a4[] = "Z6";
char DAT_100310a8[] = "Z5";
char DAT_100310ac[] = "Z4";
char DAT_100310b0[] = "Z3";
char DAT_100310b4[] = "Z2";
char DAT_100310b8[] = "Z1";
unsigned char DAT_10036778[160] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10036818[320] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10036a20 = 0;
long long DAT_10036a28 = 0;
long long DAT_10036b40 = 0;
long long DAT_10036c58 = 0;
long long DAT_10036c78 = 0;
long long DAT_10036c80 = 0;
long long DAT_10036c88 = 0;
long long DAT_10036c90 = 0;
long long DAT_10036c98 = 0;
long long DAT_10036ca0 = 0;
long long DAT_10036ca8 = 0;
long long DAT_10036cb0 = 0;
long long DAT_10036cb8 = 0;
long long DAT_10036cc0 = 0;
long long DAT_10036cc8 = 0;
long long DAT_10036cd0 = 0;
long long DAT_10036cd8 = 0;
long long DAT_10036ce0 = 0;
long long DAT_10036ce8 = 0;
long long DAT_10036cf0 = 0;
long long DAT_10036cf8 = 0;
long long DAT_10036d00 = 0;
long long DAT_10036d08 = 0;
long long DAT_10036d18 = 0;
long long DAT_10036d28 = 0;
long long DAT_10036d38 = 0;
long long DAT_10036d48 = 0;
long long DAT_10036d60 = 0;
int DAT_10036d88 = 0;
unsigned char DAT_10036d90[128] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10036d98[128] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10036ed0 = 0;
long long DAT_10036ed8 = 0;
long long DAT_10036ee0 = 0;
long long DAT_10036ee8 = 0;
long long DAT_10036ef0 = 0;
int DAT_1003707c = 0;
int DAT_100370cc = 0;
int DAT_100370d0 = 0;
int DAT_100370e8 = 0;
long long DAT_100370ec = 0;

/* Stubs for missing internal functions */
int FUN_100059b0() { return 0; }
int FUN_10006050() { return 0; }


/* Forward declarations */
void FUN_10001550(int param_1);
void FUN_100016c0(void);
void FUN_10001e40(void *param_1);
void FUN_10001ef0(void *param_1);
void FUN_10002010(void);
void FUN_10003120(int param_1);
void  FUN_100031c0(int param_1);
void  FUN_10003220(int param_1);
void  FUN_10003290(int param_1);
void  FUN_100032f0(int param_1);
int  FUN_10003350(int param_1);
void  FUN_10003380(int param_1);
void  FUN_100033e0(void *this_ptr,int param_1);
void  FUN_10003420(void *this_ptr,int param_1);
void  FUN_100034a0(void *this_ptr,int param_1,int param_2);
void  FUN_100035c0(void *this_ptr,int param_1);
void  FUN_10003600(void *this_ptr,int param_1);
void  FUN_10003640(int param_1);
void  FUN_100036f0(void *this_ptr,int param_1);
void  FUN_10003730(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10003790(void *this_ptr,int param_1);
void  FUN_10003860(int param_1);
void  FUN_100038f0(void *this_ptr,unsigned int param_1);
int  FUN_10003970(int param_1);
void  FUN_100039a0(void *this_ptr,int param_1);
void  FUN_10003a20(void *this_ptr,int param_1);
void  FUN_10003a90(int param_1);
void  FUN_10003b00(void *this_ptr,int param_1);
void  FUN_10003b70(void *this_ptr,int param_1);
void  FUN_10003bb0(int param_1);
void  FUN_10003c20(void *param_1);
void  FUN_10003ca0(void *this_ptr,int param_1);
void  FUN_10003d00(void *param_1);
void  FUN_10003d80(void *this_ptr,int param_1);
void  FUN_10003dc0(int param_1);
void  FUN_10003e10(int param_1);
void  FUN_10003e60(void *this_ptr,int param_1,int param_2);
void  FUN_10003eb0(void *param_1);
void  FUN_100041a0(void *param_1);
void  FUN_10004230(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10004290(void *param_1);
void  FUN_10004310(void *this_ptr,int param_1);
void FUN_10004380(short *param_1);
void  FUN_10004420(void *this_ptr,int param_1);
void  FUN_10004460(void *this_ptr,int param_1);
void  FUN_100044a0(void *this_ptr,int param_1);
void  FUN_100044e0(void *this_ptr,void *param_1);
int  FUN_10004550(int param_1);
int  FUN_10004590(int param_1);
void  FUN_100045c0(void *param_1);
int FUN_10004850(void);
void  FUN_10004880(void *this_ptr,int param_1,int param_2);
void  FUN_100048f0(void *this_ptr,int param_1);
void  FUN_10004960(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10004a00(void *this_ptr,int param_1,int param_2);
int  FUN_10004b50(int param_1);
void  FUN_10004b90(int param_1);
void  FUN_10004c00(void *this_ptr,int param_1);
void  FUN_10004c80(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10004d20(int param_1);
void  FUN_10004d70(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10004e40(int param_1);
void  FUN_10004ef0(int param_1);
void  FUN_10004f90(int param_1);
void  FUN_10005010(int param_1);
void FUN_10005220(int param_1);
void FUN_10005250(int param_1,int param_2,int param_3);
int FUN_10005440(char *param_1,int param_2);
void FUN_10005540(void);
void FUN_10005570(void);
void FUN_10005580(void);
int FUN_100055d0(int param_1);

void OnInit();
void ProcessScenary();


void __cdecl FUN_10001550(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18 [4];
  int *local_8;
local_1c = ((unsigned char *)&DAT_10036d90) + param_1 * 0x10;
  local_20 = GetUnitsAmount0(((unsigned char *)&DAT_10036d90) + param_1 * 0x10,0);
  local_24 = param_1 + -1;
  if (local_24 < 0) {
    local_24 = 0x13;
  }
  local_28 = param_1 + 1;
  if (0x13 < local_28) {
    local_28 = 0;
  }
  local_18[0] = ((unsigned char *)&DAT_10036d98) + param_1 * 0x10;
  local_18[1] = ((unsigned char *)&DAT_10036d90) + local_24 * 0x10;
  local_18[2] = ((unsigned char *)&DAT_10036d98) + local_24 * 0x10;
  local_18[3] = ((unsigned char *)&DAT_10036d90) + local_28 * 0x10;
  local_8 = ((unsigned char *)&DAT_10036d98) + local_28 * 0x10;
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    local_30 = GetUnitsAmount0(local_18[local_2c],0);
    if (local_20 < local_30) {
      local_1c = local_18[local_2c];
      local_20 = local_30;
    }
  }
  local_8 = (int *)0x10001671;
  return;
}





void FUN_100016c0(void)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  int local_14;
  char local_10 [8];
  int uStack_8;
SetPlayerName(0,"SWEDEN");
  SetPlayerName(1,"AUSTRIA");
  SetPlayerName(2,"AUSTRIA");
  RegisterZone(&DAT_10036c88,DAT_100310b8);
  RegisterZone(&DAT_10036c90,DAT_100310b4);
  RegisterZone(&DAT_10036c98,DAT_100310b0);
  RegisterZone(&DAT_10036ca0,DAT_100310ac);
  RegisterZone(&DAT_10036ca8,DAT_100310a8);
  RegisterZone(&DAT_10036cb0,DAT_100310a4);
  RegisterZone(&DAT_10036cb8,DAT_100310a0);
  RegisterZone(&DAT_10036cc0,DAT_1003109c);
  RegisterZone(&DAT_10036cc8,DAT_10031098);
  RegisterZone(&DAT_10036ce0,DAT_10031094);
  RegisterZone(&DAT_10036ce8,DAT_10031090);
  RegisterZone(&DAT_10036cf0,DAT_1003108c);
  RegisterZone(&DAT_10036cf8,DAT_10031088);
  RegisterZone(&DAT_10036d08,DAT_10031084);
  RegisterZone(&DAT_10036d18,DAT_10031080);
  RegisterZone(&DAT_10036d28,DAT_1003107c);
  RegisterZone(&DAT_10036d38,DAT_10031078);
  RegisterZone(&DAT_10036d48,DAT_10031074);
  RegisterZone(&DAT_10036d60,DAT_10031070);
  RegisterZone(&DAT_10036d00,DAT_1003106c);
  RegisterUnitType(&DAT_10036c80,"GRUZ(UN)");
  RegisterFormation(&DAT_10036c78,"#ODIN");
  RegisterVar(&DAT_10036d88,4);
  RegisterUnitType(&DAT_10036ed8,"Dragun_18(au)");
  RegisterUnitType(&DAT_10036ed0,"Kirasir(au)");
  RegisterUnits(&DAT_10036cd0,"GTrans");
  RegisterUnits(&DAT_10036a20,DAT_1003102c);
  for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
    FUN_10005440(local_10,0x10031028);
    RegisterZone(((unsigned char *)&DAT_10036d90) + local_14 * 0x10,local_10);
    FUN_10005440(local_10,0x10031024);
    RegisterZone(((unsigned char *)&DAT_10036d98) + local_14 * 0x10,local_10);
  }
  for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
    FUN_10005440(local_10,0x10031020);
    RegisterUnits(((unsigned char *)&DAT_10036778) + local_14 * 8,local_10);
  }
  for (local_14 = 0; local_14 < 0xd; local_14 = local_14 + 1) {
    FUN_10005440(local_10,0x1003101c);
    RegisterUnits(((unsigned char *)&DAT_10036818) + local_14 * 0x28,local_10);
  }
  OnInit(0x10036818,0x12);
  OnInit(0x10036840,0x13);
  OnInit(0x10036868,1);
  OnInit(0x10036890,3);
  OnInit(0x100368b8,4);
  OnInit(0x100368e0,6);
  OnInit(0x10036908,7);
  OnInit(0x10036930,9);
  OnInit(0x10036958,0xc);
  OnInit(0x10036980,0xd);
  OnInit(0x100369a8,0xe);
  OnInit(0x100369d0,0xf);
  OnInit(0x100369f8,0x10);
  FUN_10004c80(&DAT_10036c58,"GTrans",10);
  FUN_10005220(&DAT_10036c58);
  FUN_10004960(&DAT_10036a28,&DAT_10036c80,&DAT_10036c78,1);
  FUN_10004960(&DAT_10036b40,&DAT_10036c80,&DAT_10036c78,1);
  RegisterDynGroup(&DAT_10036cd8);
  RegisterDynGroup(&DAT_10036ee8);
  RegisterDynGroup(&DAT_10036ee0);
  RegisterDynGroup(&DAT_10036ef0);
  uStack_8 = 0x10001cb9;
  return;
}





void __cdecl FUN_10001e40(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10004a00(param_1,&DAT_10036cb0,4);
  FUN_10004880(param_1,&DAT_10036cb0,0);
  FUN_100048f0(param_1,&DAT_10036ca8);
  FUN_100048f0(param_1,&DAT_10036ca0);
  FUN_100048f0(param_1,&DAT_10036c98);
  FUN_100048f0(param_1,&DAT_10036c90);
  FUN_100048f0(param_1,&DAT_10036c88);
  uStack_8 = 0x10001ec4;
  return;
}





void __cdecl FUN_10001ef0(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10004a00(param_1,&DAT_10036d48,6);
  FUN_10004880(param_1,&DAT_10036d48,1);
  FUN_10004880(param_1,&DAT_10036d38,0);
  FUN_100048f0(param_1,&DAT_10036d28);
  FUN_100048f0(param_1,&DAT_10036d18);
  FUN_100048f0(param_1,&DAT_10036d08);
  FUN_100048f0(param_1,&DAT_10036cf8);
  FUN_100048f0(param_1,&DAT_10036cf0);
  FUN_100048f0(param_1,&DAT_10036ce8);
  FUN_100048f0(param_1,&DAT_10036ce0);
  FUN_100048f0(param_1,&DAT_10036cc8);
  FUN_100048f0(param_1,&DAT_10036cc0);
  FUN_100048f0(param_1,&DAT_10036cb8);
  FUN_100048f0(param_1,&DAT_10036c88);
  uStack_8 = 0x10001fd1;
  return;
}





void FUN_10002010(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int uVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_10036d88 = GetDiff(0);
    SetResource(0,3,DAT_10036d88 * -3000 + 10000);
    SetResource(0,1,DAT_10036d88 * -3000 + 10000);
    SetResource(0,0,DAT_10036d88 * -3000 + 10000);
    SetResource(0,2,DAT_10036d88 * -3000 + 10000);
    SetResource(0,5,DAT_10036d88 * -3000 + 10000);
    SetResource(0,4,DAT_10036d88 * -3000 + 10000);
    SetResource(2,3,3000);
    SetResource(2,1,3000);
    SetResource(2,0,3000);
    SetResource(2,2,3000);
    SetResource(2,5,3000);
    SetResource(2,4,3000);
    SetResource(1,5,DAT_10036d88 * 2000 + 2000);
    SetResource(1,4,DAT_10036d88 * 2000 + 2000);
    ChangeFriends(1,6);
    ChangeFriends(2,6);
    if (0 < DAT_10036d88) {
      InitialUpgrade("GTrans","Kirasir(au)ATTACK");
      InitialUpgrade("GTrans","Dragun_18(au)ATTACK");
      InitialUpgrade("GTrans","Kirasir(au)ATTACK3");
      InitialUpgrade("GTrans","Dragun_18(au)ATTACK3");
      InitialUpgrade("GTrans","AKA11AU");
      for (local_8 = 0; local_8 < 0xd; local_8 = local_8 + 1) {
        SelectUnits(((unsigned char *)&DAT_10036818) + local_8 * 0x28,0);
        InitialUpgrade("GTrans","Bashnia(au)PAUSE");
        InitialUpgrade("GTrans","Bashnia(au)PAUSE3");
      }
    }
    if (1 < DAT_10036d88) {
      InitialUpgrade("GTrans","Kirasir(au)ATTACK4");
      InitialUpgrade("GTrans","Dragun_18(au)ATTACK4");
      InitialUpgrade("GTrans","Kirasir(au)ATTACK5");
      InitialUpgrade("GTrans","Dragun_18(au)ATTACK5");
      InitialUpgrade("GTrans","AKA20AU");
    }
    if (2 < DAT_10036d88) {
      InitialUpgrade("GTrans","Kirasir(au)ATTACK6");
      InitialUpgrade("GTrans","Dragun_18(au)ATTACK6");
      InitialUpgrade("GTrans","Kirasir(au)ATTACK7");
      InitialUpgrade("GTrans","Dragun_18(au)ATTACK7");
      InitialUpgrade("GTrans","AKA27AU");
      InitialUpgrade("GTrans","AKA17AU");
    }
    SelectUnits(&DAT_10036a20,0);
    SelSendTo(0,&DAT_10036d60,0xc2,0);
    ClearSelection(0);
    StartAI(2,"AUSTRIA.0",0,0,0,DAT_10036d88);
    FUN_10001e40(&DAT_10036a28);
    FUN_10001ef0(&DAT_10036b40);
    RunTimer(1,100);
    RunTimer(5,5000);
    RunTimer(0x1e,0x96);
    RunTimer(0xb,100);
    SetTrigg(99,0);
  }
  uVar1 = TimerDoneFirst(0x1e);
  if ((uVar1 & 0xff) != 0) {
    ShowPage("#PAGE0");
  }
  uVar1 = TimerDoneFirst(5);
  if ((uVar1 & 0xff) != 0) {
    InitialUpgrade("GTrans","AKA21AU");
    RunTimer(5,5000);
  }
  uVar1 = TimerDoneFirst(1);
  if ((uVar1 & 0xff) != 0) {
    for (local_c = 0; local_c < 0x14; local_c = local_c + 1) {
      uVar6 = 0;
      FUN_10001550(local_c);
      AttackZoneByArtillery(((unsigned char *)&DAT_10036778) + local_c * 8,uVar2,uVar6);
    }
    for (local_c = 0; local_c < 0xd; local_c = local_c + 1) {
      uVar6 = 0;
      ProcessScenary((int)(((unsigned char *)&DAT_10036818) + local_c * 0x28));
      AttackZoneByArtillery(((unsigned char *)&DAT_10036818) + local_c * 0x28,uVar2,uVar6);
    }
    RunTimer(1,200);
  }
  FUN_10005010(0x10036c58);
  FUN_100045c0(&DAT_10036a28);
  FUN_100045c0(&DAT_10036b40);
  local_10 = GetUnitsAmount2(&DAT_10036c88,&DAT_10036c80,1);
  if (0 < local_10) {
    SelectTypeOfUnitsInZone(&DAT_10036c88,&DAT_10036c80,1,0);
    SelErase(1);
    AddResource(1,4,local_10 * ((DAT_10036d88 + 1) * 300 + 100));
    AddResource(1,5,local_10 * ((DAT_10036d88 + 1) * 300 + 100));
  }
  uVar1 = TimerDoneFirst(0xb);
  if ((uVar1 & 0xff) != 0) {
    FUN_10004b90(0x10036a28);
    if (iVar4 == 0) {
      FUN_10001e40(&DAT_10036a28);
    }
    FUN_10004b90(0x10036b40);
    if (iVar4 == 0) {
      FUN_10001ef0(&DAT_10036b40);
    }
    iVar4 = GetTotalAmount0(&DAT_10036ee8);
    if (iVar4 < 5) {
      for (local_14 = 0; local_14 < DAT_10036d88 * 4 + 4; local_14 = local_14 + 1) {
        CreateObject0(&DAT_10036cd8,&DAT_10036c78,&DAT_10036ed0,1,&DAT_10036c88,0);
        RemoveGroup(&DAT_10036cd8,&DAT_10036ee8);
        CreateObject0(&DAT_10036cd8,&DAT_10036c78,&DAT_10036ed8,1,&DAT_10036c88,0);
        RemoveGroup(&DAT_10036cd8,&DAT_10036ee8);
      }
      SelectUnits(&DAT_10036ee8,0);
      SelSendAndKill(1,&DAT_10036ce8,0,0);
      RunTimer(6,3000);
    }
    iVar4 = GetTotalAmount0(&DAT_10036ee0);
    if (iVar4 < 5) {
      for (local_18 = 0; local_18 < DAT_10036d88 * 4 + 4; local_18 = local_18 + 1) {
        CreateObject0(&DAT_10036cd8,&DAT_10036c78,&DAT_10036ed0,1,&DAT_10036c88,0);
        RemoveGroup(&DAT_10036cd8,&DAT_10036ee0);
        CreateObject0(&DAT_10036cd8,&DAT_10036c78,&DAT_10036ed8,1,&DAT_10036c88,0);
        RemoveGroup(&DAT_10036cd8,&DAT_10036ee0);
      }
      SelectUnits(&DAT_10036ee0,0);
      SelSendAndKill(1,&DAT_10036cb8,0,0);
      RunTimer(7,0x640);
    }
    iVar4 = GetTotalAmount0(&DAT_10036ef0);
    if (iVar4 < 5) {
      for (local_1c = 0; local_1c < DAT_10036d88 * 4 + 4; local_1c = local_1c + 1) {
        CreateObject0(&DAT_10036cd8,&DAT_10036c78,&DAT_10036ed0,1,&DAT_10036c88,0);
        RemoveGroup(&DAT_10036cd8,&DAT_10036ef0);
        CreateObject0(&DAT_10036cd8,&DAT_10036c78,&DAT_10036ed8,1,&DAT_10036c88,0);
        RemoveGroup(&DAT_10036cd8,&DAT_10036ef0);
      }
      SelectUnits(&DAT_10036ef0,0);
      SelSendAndKill(1,&DAT_10036c90,0,0);
      RunTimer(8,0x640);
    }
    iVar4 = GetResource(1,5);
    iVar3 = GetResource(1,4);
    if (iVar4 + iVar3 < 5) {
      AddResource(1,4,500);
      AddResource(1,5,500);
    }
    RunTimer(0xb,700);
  }
  uVar1 = TimerDoneFirst(6);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10036ee8,0);
    Patrol(1,&DAT_10036d38,0);
  }
  uVar1 = TimerDoneFirst(7);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10036ee0,0);
    Patrol(1,&DAT_10036ce8,0);
  }
  uVar1 = TimerDoneFirst(8);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_10036ef0,0);
    Patrol(1,&DAT_10036cb0,0);
  }
  iVar4 = GetUnitsAmount0(&DAT_10036d00,1);
  if (iVar4 < 0xf) {
    ShowVictory();
  }
  uVar1 = NationIsErased(0);
  if ((uVar1 & 0xff) != 0) {
    LooseGame();
  }
  return;
}





void __cdecl FUN_10003120(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  unsigned int local_c;
  unsigned int local_8;
local_8 = 0;
  for (local_c = 0; (intptr_t)local_c < 8; local_c = local_c + 1) {
    iVar1 = GetUnitsByNation(param_1,local_c & 0xff);
    if (0 < iVar1) {
      local_8 = local_c;
      local_c = 8;
    }
  }
  return;
}





void  FUN_100031c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_10003220(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100031c0(param_1);
  SelDie(*(char *)(local_8 + 0x10));
  return;
}





void  FUN_10003290(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_100032f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_10003290(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10003350(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10003380(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_100033e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_10003420(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((int)this_ptr + 8,*(int *)((int)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x10003478;
  return;
}





void  FUN_100034a0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10003290(this_ptr);
  if (iVar2 == 0) {
    ClearSelection(*(char *)((intptr_t)local_8 + 0x10));
    for (local_c = 0; uVar1 = (int)((unsigned int)local_c >> 8), local_c < param_2;
        local_c = local_c + 1) {
      CreateObject0(local_8,*(int *)((intptr_t)local_8 + 0x1c),
                    *(int *)((intptr_t)local_8 + 0x18),
                    (int)*(char *)((intptr_t)local_8 + 0x10),param_1,0);
      SelectUnits(local_8,1);
    }
    SaveSelectedUnits((int)*(char *)((intptr_t)local_8 + 0x10),local_8,0);
  }
  local_8 = (void *)0x10003577;
  return;
}





void  FUN_100035c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10003600(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_10003640(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  for (local_10 = 0; (intptr_t)local_10 < 8; local_10 = local_10 + 1) {
    iVar1 = GetUnitsByNation(local_8,local_10 & 0xff);
    if (0 < iVar1) {
      local_c = local_10;
      local_10 = 8;
    }
  }
  *(unsigned int *)(local_8 + 0x10) = local_c;
  return;
}





void  FUN_100036f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10003730(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  *(int *)((int)this_ptr + 0x1c) = param_2;
  *(int *)((int)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10003790(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10003830;
  return;
}





void  FUN_10003860(int param_1)

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





void  FUN_100038f0(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100031c0(this_ptr);
  SelChangeNation(*(char *)((intptr_t)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((intptr_t)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10003948;
  return;
}





int  FUN_10003970(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100039a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100031c0(this_ptr);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),param_1,0,0);
  *(int *)((intptr_t)local_8 + 0x20) = param_1;
  local_8 = (void *)0x100039fc;
  return;
}





void  FUN_10003a20(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100031c0(this_ptr);
  Patrol(*(char *)((intptr_t)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x10003a71;
  return;
}





void  FUN_10003a90(int param_1)

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





void  FUN_10003b00(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10003b53;
  return;
}





void  FUN_10003b70(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_10003bb0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100031c0(param_1);
  SetStandGround(*(char *)(local_8 + 0x10),1);
  return;
}





void  FUN_10003c20(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100032f0(param_1);
  if (cVar1 != '\0') {
    FUN_10003d00(local_8);
    FUN_10003860(local_8);
    if (iVar2 < 10) {
      FUN_100039a0(local_8,*(int *)((intptr_t)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x10003c7f;
  return;
}





void  FUN_10003ca0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10003ce6;
  return;
}





void  FUN_10003d00(void *param_1)

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
  FUN_10003420(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10003d5b;
  return;
}





void  FUN_10003d80(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10003dc0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10003e10(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10003e10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10003380(param_1);
  return;
}





void  FUN_10003e60(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x24) = param_1;
  *(int *)((int)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_10003eb0(void *param_1)

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
if (((*(char *)((intptr_t)param_1 + 0x2c) != '\0') &&
      (local_8 = param_1, FUN_100032f0(param_1), cVar1 != '\0')) &&
     (*(int *)((intptr_t)local_8 + 0x10) != 0)) {
    if (*(int *)((intptr_t)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_10003420(local_8,600);
      iVar3 = GetUnitsAmount0(uVar2,uVar6);
      if ((0 < iVar3) && (*(int *)((intptr_t)local_8 + 0x28) != 0)) {
        local_c = *(int *)((intptr_t)local_8 + 0x24);
        switch(local_c) {
        case 0:
          ShowPageParam("#PAGE1_0",*(int *)((intptr_t)local_8 + 0x28));
          break;
        case 1:
          ShowPageParam("#PAGE1_1",*(int *)((intptr_t)local_8 + 0x28));
          break;
        case 2:
          ShowPageParam("#PAGE1_2",*(int *)((intptr_t)local_8 + 0x28));
          break;
        case 3:
          ShowPageParam("#PAGE1_3",*(int *)((intptr_t)local_8 + 0x28));
          break;
        case 4:
          ShowPageParam("#PAGE1_4",*(int *)((intptr_t)local_8 + 0x28));
          break;
        case 5:
          ShowPageParam("#PAGE1_5",*(int *)((intptr_t)local_8 + 0x28));
        }
        local_10 = AskMultilineQuestion(7,"#PAGE3",0,"FM10_A|FM10_B");
        if (local_10 == 0) {
          FUN_100038f0(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10003220((intptr_t)local_8);
        }
        AddResource(0,*(char *)((intptr_t)local_8 + 0x24),*(int *)((intptr_t)local_8 + 0x28));
        FUN_10003e60(local_8,0,0);
      }
    }
    else {
      FUN_10003860(local_8);
      if (iVar3 < 0x32) {
        FUN_100041a0(local_8);
      }
      FUN_10003a90((intptr_t)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_10004380(*(short **)((intptr_t)local_8 + 0x20));
        FUN_100044e0(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x100040e2;
  return;
}





void  FUN_100041a0(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100038f0(param_1,6);
  FUN_100031c0(local_8);
  uVar5 = 0;
  uVar4 = 0;
  FUN_10003420(local_8,100);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_10003bb0((intptr_t)local_8);
  local_8 = (void *)0x1000420c;
  return;
}





void  FUN_10004230(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003730(this_ptr,param_1,param_2,param_3);
  *(char *)((intptr_t)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10004275;
  return;
}





void  FUN_10004290(void *param_1)

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
  FUN_10003420(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x100042eb;
  return;
}





void  FUN_10004310(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 4) = param_1;
  ((long long *)&DAT_1003707c)[DAT_100370cc] = this_ptr;
  DAT_100370cc = DAT_100370cc + 1;
  return;
}





void __cdecl FUN_10004380(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_1003707c;
  for (local_c = 0; local_c < DAT_100370cc; local_c = local_c + 1) {
    psVar1 = (short *)FUN_10004550(((long long *)&DAT_1003707c)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_1003707c)[local_c];
    }
  }
  return;
}





void  FUN_10004420(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 8) = param_1;
  return;
}





void  FUN_10004460(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_100044a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_100044e0(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003e60(param_1,*(int *)((int)this_ptr + 0xc),*(int *)((int)this_ptr + 0x10));
  FUN_100039a0(param_1,*(int *)((intptr_t)local_8 + 8));
  local_8 = (void *)0x1000452f;
  return;
}





int  FUN_10004550(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_10004590(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100045c0(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10004b90((intptr_t)param_1);
  if ((0 < iVar2) && (*(int *)((intptr_t)local_8 + 0x1c) + 1 < *(int *)((intptr_t)local_8 + 0x20))) {
    if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_10004c00(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10005250((intptr_t)local_8 + 0xc,
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_10004c00(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
      ;
      if (cVar1 != '\0') {
        *(int *)((intptr_t)local_8 + 0x1c) = *(int *)((intptr_t)local_8 + 0x1c) + 1;
        SelectUnits((intptr_t)local_8 + 0xc,0);
        SelSendTo(*(char *)((intptr_t)local_8 + 0x24),
                  *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),0,0);
      }
    }
    else if ((*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x34) == 2) ||
            (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x34) == 1)) {
      SelectUnits((intptr_t)local_8 + 0xc,0);
      *(int *)((intptr_t)local_8 + 0x1c) = *(int *)((intptr_t)local_8 + 0x1c) + 1;
      SelSendTo(*(char *)((intptr_t)local_8 + 0x24),
                *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),0,2);
    }
    else if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x34) == 0) {
      SelectUnits((intptr_t)local_8 + 0xc,0);
      *(int *)((intptr_t)local_8 + 0x1c) = *(int *)((intptr_t)local_8 + 0x1c) + 1;
      SelSendTo(*(char *)((intptr_t)local_8 + 0x24),
                *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),0,0);
    }
  }
  local_8 = (void *)0x100047c2;
  return;
}





int FUN_10004850(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_10004880(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_100048f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10004960(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  RegisterDynGroup((int)this_ptr + 0xc);
  *local_8 = param_1;
  local_8[1] = param_2;
  local_8[7] = 0;
  local_8[8] = 0;
  local_8[9] = param_3;
  local_8 = (int *)0x100049d1;
  return;
}





void  FUN_10004a00(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_10004b90((int)this_ptr);
  if (iVar2 == 0) {
    ClearSelection(*(char *)(local_8 + 9));
    for (local_c = 0; uVar1 = (int)((unsigned int)local_c >> 8), local_c < param_2;
        local_c = local_c + 1) {
      CreateObject0(local_8 + 3,local_8[1],*local_8,(int)*(char *)(local_8 + 9),
                    param_1,0);
      SelectUnits(local_8 + 3,1);
    }
    SaveSelectedUnits((int)*(char *)(local_8 + 9),local_8 + 3,0);
    local_8[8] = 0;
    FUN_10004880(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10004b01;
  return;
}





int  FUN_10004b50(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10004b90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_10004c00(void *this_ptr,int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  iVar2 = GetUnitsAmount1(param_1,(int)this_ptr + 0xc);
  FUN_10004b90((intptr_t)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10004c60;
  return;
}





void  FUN_10004c80(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xc,param_1);
  FUN_10003120((intptr_t)local_8 + 0xc);
  *(int *)((intptr_t)local_8 + 0x18) = uVar1;
  *(int *)((intptr_t)local_8 + 0x14) = 0;
  *(int *)((intptr_t)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10004cef;
  return;
}





BOOL  FUN_10004d20(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10004d70(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10004d20((int)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x10004e0d;
  return;
}





void  FUN_10004e40(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  local_c = 0;
  iVar2 = GetTotalAmount0(*(int *)(local_8 + 8));
  iVar1 = GetNInside(*(char *)(local_8 + 0x18));
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10004ef0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  SelectUnits(*(int *)(local_8 + 8),1);
  SendUnitsToTransport(*(char *)(local_8 + 0x18));
  return;
}





void  FUN_10004f90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  PushAllUnitsAway(*(char *)(local_8 + 0x18));
  return;
}





void  FUN_10005010(int param_1)

{
  char cVar1;
  int uVar3;
  unsigned int uVar2;
  int iVar4;
  int uVar5;
  int *puVar6;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = param_1;
  SelectUnits(param_1 + 0xc,0);
  local_c = *(int *)(local_8 + 0x14) + -1;
  uVar5 = (int)((unsigned int)*(int *)(local_8 + 0x14) >> 8);
  uVar3 = (int)((unsigned int)local_c >> 8);
  switch(local_c) {
  case 0:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10004ef0(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_10004e40(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10004f90(local_8);
      *(int *)(local_8 + 0x14) = 4;
    }
    break;
  case 3:
    iVar4 = GetNInside((int)*(char *)(local_8 + 0x18));
    if (iVar4 == 0) {
      RunTimer(*(char *)(local_8 + 0x1c),100);
      *(int *)(local_8 + 0x14) = 5;
    }
    break;
  case 4:
    uVar2 = TimerDoneFirst((int)*(char *)(local_8 + 0x1c));
    if ((uVar2 & 0xff) != 0) {
      *(int *)(local_8 + 0x14) = 0;
    }
  }
  return;
}





void __cdecl FUN_10005220(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_100370d0 = param_1;
  return;
}





void __cdecl FUN_10005250(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_100370d0 != (void *)0x0) {
    bVar1 = FUN_10004d20((int)DAT_100370d0);
    if (bVar1) {
      FUN_10004d70(DAT_100370d0,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x100052a9;
  return;
}





int __cdecl FUN_10005440(char *param_1,int param_2)

{
  void *pcVar1;
  int iVar2;
  int uVar3;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_100059b0(2,0x100313e4,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  if ((param_2 == 0) &&
     (iVar2 = FUN_100059b0(2,0x100313e4,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10006050(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}







void FUN_10005540(void)

{
  FUN_10005580();
  return;
}





void FUN_10005570(void)

{
  return;
}





void FUN_10005580(void)

{
  return;
}





int __cdecl FUN_100055d0(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_100370e8;
  DAT_100370e8 = param_1;
  return uVar1;
}





__declspec(dllexport) void OnInit()
{
  int param_1 = 0;
  int param_2 = 0;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_2;
  if (0x13 < param_2) {
    local_8 = 0;
  }
  *(int **)(param_1 + 8) = ((unsigned char *)&DAT_10036d90) + local_8 * 0x10;
  *(int **)(param_1 + 0xc) = ((unsigned char *)&DAT_10036d98) + local_8 * 0x10;
  local_8 = local_8 + 1;
  if (0x13 < local_8) {
    local_8 = 0;
  }
  *(int **)(param_1 + 0x10) = ((unsigned char *)&DAT_10036d90) + local_8 * 0x10;
  *(int **)(param_1 + 0x14) = ((unsigned char *)&DAT_10036d98) + local_8 * 0x10;
  local_8 = local_8 + 1;
  if (0x13 < local_8) {
    local_8 = 0;
  }
  *(int **)(param_1 + 0x18) = ((unsigned char *)&DAT_10036d90) + local_8 * 0x10;
  *(int **)(param_1 + 0x1c) = ((unsigned char *)&DAT_10036d98) + local_8 * 0x10;
  local_8 = local_8 + 1;
  if (0x13 < local_8) {
    local_8 = 0;
  }
  *(int **)(param_1 + 0x20) = ((unsigned char *)&DAT_10036d90) + local_8 * 0x10;
  *(int **)(param_1 + 0x24) = ((unsigned char *)&DAT_10036d98) + local_8 * 0x10;
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
  int iVar1;
  int *puVar2;
  int local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
local_8 = *(int *)(param_1 + 8);
  local_c = GetUnitsAmount0(local_8,0);
  for (local_14 = 1; local_14 < 8; local_14 = local_14 + 1) {
    local_10 = GetUnitsAmount0(*(int *)(param_1 + 8 + local_14 * 4),0);
    if (local_c < local_10) {
      local_8 = *(int *)(param_1 + 8 + local_14 * 4);
      local_c = local_10;
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

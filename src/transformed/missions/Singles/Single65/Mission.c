#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
int this_ptr = 0;
char DAT_1003401c[] = "F%d";
char DAT_10034020[] = "P%d";
char DAT_10034024[] = "K%d";
char DAT_10034030[] = "GK";
char DAT_1003404c[] = "G5";
char DAT_10034050[] = "G4";
char DAT_10034054[] = "G3";
char DAT_10034058[] = "G2";
char DAT_1003405c[] = "G1";
char DAT_10034094[] = "Z20";
char DAT_10034098[] = "Z19";
char DAT_1003409c[] = "Z18";
char DAT_100340a0[] = "Z17";
char DAT_100340a4[] = "Z16";
char DAT_100340a8[] = "Z15";
char DAT_100340ac[] = "Z14";
char DAT_100340b0[] = "Z13";
char DAT_100340b4[] = "Z12";
char DAT_100340b8[] = "Z11";
char DAT_100340bc[] = "Z10";
char DAT_100340c0[] = "Z9";
char DAT_100340c4[] = "Z8";
char DAT_100340c8[] = "Z7";
char DAT_100340cc[] = "Z6";
char DAT_100340d0[] = "Z5";
char DAT_100340d4[] = "Z4";
char DAT_100340d8[] = "Z3";
char DAT_100340dc[] = "Z2";
char DAT_100340e0[] = "Z1";
long long DAT_10034100 = 0;
unsigned char DAT_100399d0[240] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_100399ec = 0;
long long DAT_10039b1a = 0;
long long DAT_10039b56 = 0;
unsigned char DAT_10039b78[240] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10039b84[240] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10039b94 = 0;
long long DAT_10039b95 = 0;
long long DAT_10039b96 = 0;
long long DAT_10039bb4 = 0;
long long DAT_10039bd2 = 0;
long long DAT_10039bf0 = 0;
long long DAT_10039c0e = 0;
unsigned char DAT_10039c88[240] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10039ca4 = 0;
long long DAT_10039ca6 = 0;
long long DAT_10039cc4 = 0;
long long DAT_10039ce2 = 0;
long long DAT_10039d40 = 0;
long long DAT_10039d48 = 0;
long long DAT_10039d50 = 0;
long long DAT_10039d58 = 0;
long long DAT_10039d60 = 0;
long long DAT_10039d68 = 0;
long long DAT_10039d70 = 0;
long long DAT_10039d78 = 0;
long long DAT_10039d98 = 0;
long long DAT_10039da0 = 0;
long long DAT_10039da8 = 0;
long long DAT_10039db0 = 0;
long long DAT_10039db8 = 0;
long long DAT_10039dc0 = 0;
long long DAT_10039dc8 = 0;
long long DAT_10039dd0 = 0;
long long DAT_10039dd8 = 0;
long long DAT_10039de0 = 0;
long long DAT_10039de8 = 0;
long long DAT_10039df0 = 0;
long long DAT_10039df8 = 0;
long long DAT_10039e20 = 0;
long long DAT_10039e28 = 0;
long long DAT_10039e30 = 0;
long long DAT_10039e38 = 0;
long long DAT_10039e40 = 0;
long long DAT_10039e48 = 0;
long long DAT_10039e58 = 0;
long long DAT_10039e68 = 0;
long long DAT_10039e78 = 0;
long long DAT_10039e88 = 0;
long long DAT_10039ea0 = 0;
long long DAT_10039eb8 = 0;
int DAT_10039ed8 = 0;
long long DAT_10039ee0 = 0;
int DAT_10039ee8 = 0;
int DAT_10039eec = 0;
long long DAT_10039ef0 = 0;
int DAT_10039ef8 = 0;
int DAT_10039efc = 0;
long long DAT_10039f08 = 0;
int DAT_10039f14 = 0;
int DAT_1003a028 = 0;
int DAT_1003a078 = 0;
int DAT_1003a07c = 0;
int DAT_1003a080 = 0;
int DAT_1003a084 = 0;
int DAT_1003a09c = 0;
long long DAT_1003a0a0 = 0;
int DAT_10034100_ovl = 776530087;
int DAT_1003a080_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10006210() { return 0; }
int FUN_100062f4() { return 0; }
int FUN_100062fd() { return 0; }
int FUN_100063c4() { return 0; }
int FUN_100063cd() { return 0; }
int FUN_10006474() { return 0; }
int FUN_1000647d() { return 0; }
int FUN_100068a0() { return 0; }
int FUN_10006f40() { return 0; }
int FUN_10008dd8() { return 0; }


/* Forward declarations */
void FUN_10001b70(int param_1,int param_2,int param_3,int param_4);
void FUN_10001c50(int param_1);
void FUN_10001d10(int param_1);
void FUN_10001dd0(int param_1,int param_2);
void FUN_10001eb0(void *param_1,void *param_2);
void FUN_10001f90(int param_1,int param_2,int param_3,int param_4);
long long FUN_10002040(void);
void FUN_10002080(int param_1,int param_2,int param_3);
void FUN_10002340(void *param_1,void *param_2,int param_3);
void FUN_100024d0(void *param_1,int param_2,int param_3,int param_4);
void FUN_10002660(int param_1,void *param_2,void *param_3,int param_4,int param_5);
void FUN_10002770(int param_1,int param_2,double param_3,int param_4);
void FUN_100029f0(void *param_1,int param_2);
void FUN_10003960(int param_1);
void  FUN_10003a00(int param_1);
void  FUN_10003a60(int param_1);
void  FUN_10003ad0(int param_1);
void  FUN_10003b30(int param_1);
int  FUN_10003b90(int param_1);
void  FUN_10003bc0(int param_1);
void  FUN_10003c20(void *this_ptr,int param_1);
void  FUN_10003c60(void *this_ptr,int param_1);
void  FUN_10003ce0(void *this_ptr,int param_1,int param_2);
void  FUN_10003e00(void *this_ptr,int param_1);
void  FUN_10003e40(void *this_ptr,int param_1);
void  FUN_10003e80(int param_1);
void  FUN_10003f30(void *this_ptr,int param_1);
void  FUN_10003f70(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10003fd0(void *this_ptr,int param_1);
void  FUN_100040a0(int param_1);
void  FUN_10004130(void *this_ptr,unsigned int param_1);
int  FUN_100041b0(int param_1);
void  FUN_100041e0(void *this_ptr,int param_1);
void  FUN_10004260(void *this_ptr,int param_1);
void  FUN_100042d0(int param_1);
void  FUN_10004340(void *this_ptr,int param_1);
void  FUN_100043b0(void *this_ptr,int param_1);
void  FUN_100043f0(int param_1);
void  FUN_10004460(void *param_1);
void  FUN_100044e0(void *this_ptr,int param_1);
void  FUN_10004540(void *param_1);
void  FUN_100045c0(void *this_ptr,int param_1);
void  FUN_10004600(int param_1);
void  FUN_10004650(int param_1);
void  FUN_100046a0(void *this_ptr,int param_1,int param_2);
void  FUN_100046f0(void *param_1);
void  FUN_100049e0(void *param_1);
void  FUN_10004a70(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10004ad0(void *param_1);
void  FUN_10004b50(void *this_ptr,int param_1);
void FUN_10004bc0(short *param_1);
void  FUN_10004c60(void *this_ptr,int param_1);
void  FUN_10004ca0(void *this_ptr,int param_1);
void  FUN_10004ce0(void *this_ptr,int param_1);
void  FUN_10004d20(void *this_ptr,void *param_1);
int  FUN_10004d90(int param_1);
int  FUN_10004dd0(int param_1);
void  FUN_10004e00(void *param_1);
int FUN_10005090(void);
void  FUN_100050c0(void *this_ptr,int param_1,int param_2);
void  FUN_10005130(void *this_ptr,int param_1);
void  FUN_100051a0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005240(void *this_ptr,int param_1,int param_2);
int  FUN_10005390(int param_1);
void  FUN_100053d0(int param_1);
void  FUN_10005440(void *this_ptr,int param_1);
void  FUN_100054c0(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10005560(int param_1);
void  FUN_100055b0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005680(int param_1);
void  FUN_10005730(int param_1);
void  FUN_100057d0(int param_1);
void  FUN_10005850(int param_1);
void FUN_10005a60(int param_1);
void FUN_10005a90(int param_1,int param_2,int param_3);
void  FUN_10005b10(int param_1);
void  FUN_10005d40(void *this_ptr,int *param_1);
void  FUN_10005e70(int param_1);
void  FUN_10005f10(int param_1);
int  FUN_10005f80(int param_1);
int FUN_10006110(char *param_1,byte *param_2);
void FUN_10006230(void);
void FUN_10006260(void);
void FUN_10006270(void);
int FUN_100062c0(int param_1);
void FUN_100062e0(void);
void FUN_100063b0(void);
void FUN_10006460(void);

void OnInit();
void ProcessScenary();


void __cdecl
FUN_10001b70(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_70 [16];
  char local_30 [20];
  int local_1c;
  int local_18;
  int uStack_8;
GetUnitInfo(&DAT_10039d48,0,local_30);
  local_1c = param_2;
  local_18 = param_3;
  SetUnitInfo(local_30);
  CreateZoneNearGroup(param_1,&DAT_10039da8,&DAT_10039d48,param_4);
  local_1c = 400;
  local_18 = 400;
  SetUnitInfo(local_30);
  uStack_8 = 0x10001c1c;
  return;
}





void __cdecl FUN_10001c50(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_7c [16];
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [20];
  int local_1c;
  int uStack_8;
local_34 = GetTotalAmount0(param_1);
  local_38 = 0;
  for (local_3c = 0; local_3c < local_34; local_3c = local_3c + 1) {
    GetUnitInfo(param_1,local_3c,local_30);
    local_38 = local_38 + local_1c;
  }
  uStack_8 = 0x10001cdf;
  return;
}





void __cdecl FUN_10001d10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_7c [16];
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [24];
  int local_18;
  int uStack_8;
local_34 = GetTotalAmount0(param_1);
  local_38 = 0;
  for (local_3c = 0; local_3c < local_34; local_3c = local_3c + 1) {
    GetUnitInfo(param_1,local_3c,local_30);
    local_38 = local_38 + local_18;
  }
  uStack_8 = 0x10001d9f;
  return;
}







void __cdecl FUN_10001dd0(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  long double fVar3;
  int local_64 [16];
  int local_24;
  int local_20;
  double local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
FUN_10001c50(param_1);
  FUN_10001d10(param_1);
  FUN_10001c50(param_2);
  FUN_10001d10(param_2);
  local_20 = local_10 - local_8;
  local_24 = local_14 - local_c;
  fVar3 = (long double)FUN_10006210((int)((double)local_24),(int)((unsigned long long)(double)local_24 >> 0x20)
                                ,(int)((double)local_20),
                                (int)((unsigned long long)(double)local_20 >> 0x20));
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_10034100_ovl + local_1c;
  }
  return;
}







void __cdecl FUN_10001eb0(void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int *puVar3;
  long double fVar4;
  int local_7c [16];
  int local_3c;
  int local_38;
  int local_34 [2];
  int local_2c [2];
  double local_24;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
FUN_10005d40(param_2,local_2c);
  local_10 = *piVar1;
  local_14 = piVar1[1];
  local_c = local_10;
  local_8 = (void *)local_14;
  FUN_10005d40(param_1,local_34);
  local_18 = *piVar1;
  local_1c = (void *)piVar1[1];
  local_38 = (intptr_t)local_1c - local_14;
  local_3c = local_18 - local_10;
  local_c = local_18;
  local_8 = local_1c;
  fVar4 = (long double)FUN_100062f4(local_1c,(int)((double)local_38 / (double)local_3c));
  local_24 = (double)fVar4;
  if (local_18 - local_10 < 0) {
    local_24 = DAT_10034100_ovl + local_24;
  }
  return;
}







void __cdecl FUN_10001f90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  long double fVar3;
  int local_64 [16];
  int local_24;
  void *local_20;
  double local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
local_8 = param_3;
  local_c = param_4;
  local_10 = param_1;
  local_14 = param_2;
  local_20 = (void *)(param_2 - param_4);
  local_24 = param_1 - param_3;
  fVar3 = (long double)FUN_100062f4(local_20,(int)((double)(intptr_t)local_20 / (double)local_24));
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_10034100_ovl + local_1c;
  }
  return;
}





long long FUN_10002040(void)

{
  int iVar1;
  int *puVar2;
  long long lVar3;
  int local_44 [16];
lVar3 = 0;
  return lVar3;
}







void __cdecl FUN_10002080(int param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  int *puVar2;
  long double fVar3;
  long long lVar4;
  double local_78;
  double local_70;
  int local_68;
  void *local_64;
  int local_60;
  long long local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  char local_38 [20];
  int local_24;
  int local_20;
  char local_c [8];
local_3c = GetTotalAmount0(0);
  local_40 = 0;
  local_44 = 0;
  for (local_48 = 0; local_48 < local_3c; local_48 = local_48 + 1) {
    GetUnitInfo(param_2,local_48,local_38);
    local_40 = local_40 + local_24;
    local_44 = local_44 + local_20;
  }
  local_40 = local_40 / local_3c;
  local_44 = local_44 / local_3c;
  local_4c = GetTotalAmount0(0);
  local_50 = 0;
  local_54 = 0;
  for (local_48 = 0; local_48 < local_4c; local_48 = local_48 + 1) {
    GetUnitInfo(param_1,local_48,local_38);
    local_50 = local_50 + local_24;
    local_54 = local_54 + local_20;
  }
  local_50 = local_50 / local_4c;
  local_54 = local_54 / local_4c;
  local_64 = (void *)(local_54 - local_44);
  local_68 = local_50 - local_40;
  fVar3 = (long double)FUN_100062f4(local_64,(int)((double)(intptr_t)local_64 / (double)local_68));
  local_5c = (double)fVar3;
  if (local_50 - local_40 < 0) {
    local_5c = DAT_10034100_ovl + local_5c;
  }
  lVar4 = 0;
  local_60 = (int)lVar4;
  local_70 = (double)param_3;
  FUN_10006474(*(int*)((char*)&local_5c + 4),(int)(void *)local_5c);
  0;
  local_78 = (double)param_3;
  FUN_100063c4((void *)local_5c,(int)(void *)local_5c);
  lVar4 = 0;
  FUN_10001b70(local_c,(int)lVar4,unaff_ESI,unaff_EBX);
  SelectUnits(param_1,0);
  local_60 = local_60 + 0x80;
  SelSendTo(0,0,0,0);
  return;
}







void __cdecl FUN_10002340(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *this_ptr;
  int unaff_EBX;
  int unaff_ESI;
  int *puVar3;
  long double fVar4;
  long long lVar5;
  double local_50;
  double local_48;
  int local_40;
  int local_3c;
  int local_38 [2];
  int local_30 [2];
  int local_28;
  long long local_24;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
FUN_10005d40(param_2,local_30);
  local_10 = *piVar1;
  local_14 = piVar1[1];
  local_c = local_10;
  local_8 = (void *)local_14;
  FUN_10005d40(param_1,local_38);
  local_18 = *piVar1;
  local_1c = (void *)piVar1[1];
  local_3c = (intptr_t)local_1c - local_14;
  local_40 = local_18 - local_10;
  local_c = local_18;
  local_8 = local_1c;
  fVar4 = (long double)FUN_100062f4(local_1c,(int)((double)local_3c / (double)local_40));
  local_24 = (double)fVar4;
  if (local_18 - local_10 < 0) {
    local_24 = DAT_10034100_ovl + local_24;
  }
  lVar5 = 0;
  local_28 = (int)lVar5;
  local_48 = (double)param_3;
  FUN_10006474(this_ptr,(intptr_t)local_24);
  0;
  local_50 = (double)param_3;
  FUN_100063c4(*(int*)((char*)&local_24 + 4),(intptr_t)local_24);
  lVar5 = 0;
  FUN_10001b70((intptr_t)param_1 + 0x14,(int)lVar5,unaff_ESI,unaff_EBX);
  *(int *)((intptr_t)param_1 + 8) = local_28 + 0x80;
  FUN_10005b10((intptr_t)param_1);
  return;
}







void __cdecl FUN_100024d0(void *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *this_ptr;
  int unaff_EBX;
  int unaff_ESI;
  int *puVar3;
  long double fVar4;
  long long lVar5;
  double local_48;
  double local_40;
  void *local_38;
  int local_34;
  int local_30 [2];
  int local_28;
  double local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
local_c = param_2;
  local_8 = param_3;
  local_10 = param_2;
  local_14 = param_3;
  FUN_10005d40(param_1,local_30);
  local_18 = *piVar1;
  local_1c = piVar1[1];
  local_34 = local_1c - local_14;
  local_38 = (void *)(local_18 - local_10);
  local_c = local_18;
  local_8 = local_1c;
  fVar4 = (long double)FUN_100062f4(local_38,(int)((double)local_34 / (double)(intptr_t)local_38));
  local_24 = (double)fVar4;
  if (local_18 - local_10 < 0) {
    local_24 = DAT_10034100_ovl + local_24;
  }
  lVar5 = 0;
  local_28 = (int)lVar5;
  local_40 = (double)param_4;
  FUN_10006474((*(int*)&local_24),(int)(*(int*)&local_24));
  0;
  local_48 = (double)param_4;
  FUN_100063c4(this_ptr,(int)(*(int*)&local_24));
  lVar5 = 0;
  FUN_10001b70((intptr_t)param_1 + 0x14,(int)lVar5,unaff_ESI,unaff_EBX);
  *(int *)((intptr_t)param_1 + 8) = local_28 + 0x80;
  FUN_10005b10((intptr_t)param_1);
  return;
}





void __cdecl FUN_10002660(int param_1,void *param_2,void *param_3,int param_4,int param_5)

{
  int *puVar1;
  int iVar2;
  void *this_ptr;
  int unaff_ESI;
  int unaff_EDI;
  long long lVar3;
  int local_74 [16];
  double local_34;
  double local_2c;
  int local_24;
  int local_20 [2];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
FUN_10005d40(param_2,local_20);
  local_10 = *puVar1;
  local_14 = puVar1[1];
  local_24 = -param_5;
  local_2c = (double)local_24;
  local_c = local_10;
  local_8 = local_14;
  FUN_100063c4(param_3,(intptr_t)param_3);
  0;
  local_34 = (double)param_5;
  FUN_10006474(this_ptr,(intptr_t)param_3);
  lVar3 = 0;
  FUN_10001b70(param_1 + 0x14,(int)lVar3,unaff_EDI,unaff_ESI);
  lVar3 = 0;
  local_18 = (int)lVar3;
  *(int *)(param_1 + 8) = local_18 + 0x80;
  FUN_10005b10(param_1);
  return;
}







void __cdecl FUN_10002770(int param_1,int param_2,double param_3,int param_4)

{
  int iVar1;
  void *this_ptr;
  int unaff_ESI;
  int unaff_EDI;
  int *puVar2;
  long long lVar3;
  double local_6c;
  double local_64;
  int local_5c;
  unsigned int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  char local_38 [20];
  int local_24;
  int local_20;
  char local_c [8];
local_3c = GetTotalAmount0(param_2);
  local_40 = 0;
  local_44 = 0;
  for (local_48 = 0; local_48 < local_3c; local_48 = local_48 + 1) {
    GetUnitInfo(param_2,local_48,local_38);
    local_40 = local_40 + local_24;
    local_44 = local_44 + local_20;
  }
  local_40 = local_40 / local_3c;
  local_44 = local_44 / local_3c;
  local_4c = GetTotalAmount0(param_1);
  local_50 = 0;
  local_54 = 0;
  for (local_48 = 0; local_48 < local_4c; local_48 = local_48 + 1) {
    GetUnitInfo(param_1,local_48,local_38);
    local_50 = local_50 + local_24;
    local_54 = local_54 + local_20;
  }
  local_50 = local_50 / local_4c;
  local_54 = local_54 / local_4c;
  if (local_50 - local_40 < 0) {
    param_3 = DAT_10034100_ovl + param_3;
  }
  lVar3 = 0;
  local_58 = (unsigned int)lVar3;
  local_5c = -param_4;
  local_64 = (double)local_5c;
  FUN_100063c4((*(int*)&param_3),(int)(*(int*)&param_3));
  0;
  local_6c = (double)param_4;
  FUN_10006474(this_ptr,(int)(*(int*)&param_3));
  lVar3 = 0;
  FUN_10001b70(local_c,(int)lVar3,unaff_EDI,unaff_ESI);
  SelectUnits(param_1,0);
  SelSendTo(0,local_c,local_58 & 0xff,0);
  return;
}





void __cdecl FUN_100029f0(void *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *puVar4;
  int local_4c [16];
  int local_c [2];
FUN_10005f10((intptr_t)param_1);
  if (cVar1 != '\0') {
    if (DAT_10039f14 == (void *)0x0) {
      FUN_100024d0(param_1,DAT_10039ee8,DAT_10039eec,param_2);
    }
    else {
      FUN_10005d40(DAT_10039f14,local_c);
      FUN_100024d0(param_1,*piVar2,piVar2[1],param_2);
    }
    DAT_10039f14 = param_1;
  }
  local_c[1] = 0x10002a7c;
  return;
}






void __cdecl FUN_10003960(int param_1)

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





void  FUN_10003a00(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  return;
}





void  FUN_10003a60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10003a00(param_1);
  SelDie(*(char *)(local_8 + 0x10));
  return;
}





void  FUN_10003ad0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetTotalAmount0(param_1);
  return;
}





void  FUN_10003b30(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  FUN_10003ad0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10003b90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10003bc0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_10003c20(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_10003c60(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((int)this_ptr + 8,*(int *)((int)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x10003cb8;
  return;
}





void  FUN_10003ce0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  FUN_10003ad0(this_ptr);
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
  local_8 = (void *)0x10003db7;
  return;
}





void  FUN_10003e00(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10003e40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_10003e80(int param_1)

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





void  FUN_10003f30(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10003f70(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x18) = param_1;
  *(int *)((int)this_ptr + 0x1c) = param_2;
  *(int *)((int)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10003fd0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_74 [16];
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
  local_8 = (void *)0x10004070;
  return;
}





void  FUN_100040a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_7c [16];
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





void  FUN_10004130(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003a00(this_ptr);
  SelChangeNation(*(char *)((intptr_t)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((intptr_t)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10004188;
  return;
}





int  FUN_100041b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_100041e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003a00(this_ptr);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),param_1,0,0);
  *(int *)((intptr_t)local_8 + 0x20) = param_1;
  local_8 = (void *)0x1000423c;
  return;
}





void  FUN_10004260(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003a00(this_ptr);
  Patrol(*(char *)((intptr_t)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x100042b1;
  return;
}





void  FUN_100042d0(int param_1)

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





void  FUN_10004340(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10004393;
  return;
}





void  FUN_100043b0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_100043f0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10003a00(param_1);
  SetStandGround(*(char *)(local_8 + 0x10),1);
  return;
}





void  FUN_10004460(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10003b30(param_1);
  if (cVar1 != '\0') {
    FUN_10004540(local_8);
    FUN_100040a0(local_8);
    if (iVar2 < 10) {
      FUN_100041e0(local_8,*(int *)((intptr_t)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x100044bf;
  return;
}





void  FUN_100044e0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10004526;
  return;
}





void  FUN_10004540(void *param_1)

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
  FUN_10003c60(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000459b;
  return;
}





void  FUN_100045c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10004600(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10004650(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_10004650(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10003bc0(param_1);
  return;
}





void  FUN_100046a0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x24) = param_1;
  *(int *)((int)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_100046f0(void *param_1)

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
      (local_8 = param_1, FUN_10003b30(param_1), cVar1 != '\0')) &&
     (*(int *)((intptr_t)local_8 + 0x10) != 0)) {
    if (*(int *)((intptr_t)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_10003c60(local_8,600);
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
          FUN_10004130(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_10003a60((intptr_t)local_8);
        }
        AddResource(0,*(char *)((intptr_t)local_8 + 0x24),*(int *)((intptr_t)local_8 + 0x28));
        FUN_100046a0(local_8,0,0);
      }
    }
    else {
      FUN_100040a0(local_8);
      if (iVar3 < 0x32) {
        FUN_100049e0(local_8);
      }
      FUN_100042d0((intptr_t)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_10004bc0(*(short **)((intptr_t)local_8 + 0x20));
        FUN_10004d20(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10004922;
  return;
}





void  FUN_100049e0(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10004130(param_1,6);
  FUN_10003a00(local_8);
  uVar5 = 0;
  uVar4 = 0;
  FUN_10003c60(local_8,100);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_100043f0((intptr_t)local_8);
  local_8 = (void *)0x10004a4c;
  return;
}





void  FUN_10004a70(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10003f70(this_ptr,param_1,param_2,param_3);
  *(char *)((intptr_t)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10004ab5;
  return;
}





void  FUN_10004ad0(void *param_1)

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
  FUN_10003c60(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x10004b2b;
  return;
}





void  FUN_10004b50(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 4) = param_1;
  ((long long *)&DAT_1003a028)[DAT_1003a078] = this_ptr;
  DAT_1003a078 = DAT_1003a078 + 1;
  return;
}





void __cdecl FUN_10004bc0(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_1003a028;
  for (local_c = 0; local_c < DAT_1003a078; local_c = local_c + 1) {
    psVar1 = (short *)FUN_10004d90(((long long *)&DAT_1003a028)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_1003a028)[local_c];
    }
  }
  return;
}





void  FUN_10004c60(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 8) = param_1;
  return;
}





void  FUN_10004ca0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_10004ce0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10004d20(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100046a0(param_1,*(int *)((int)this_ptr + 0xc),*(int *)((int)this_ptr + 0x10));
  FUN_100041e0(param_1,*(int *)((intptr_t)local_8 + 8));
  local_8 = (void *)0x10004d6f;
  return;
}





int  FUN_10004d90(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_10004dd0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10004e00(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_100053d0((intptr_t)param_1);
  if ((0 < iVar2) && (*(int *)((intptr_t)local_8 + 0x1c) + 1 < *(int *)((intptr_t)local_8 + 0x20))) {
    if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_10005440(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10005a90((intptr_t)local_8 + 0xc,
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_10005440(local_8,*(int *)
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
  local_8 = (void *)0x10005002;
  return;
}





int FUN_10005090(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_100050c0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10005130(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((int)this_ptr + *(int *)((int)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((int)this_ptr + 0x20) = *(int *)((int)this_ptr + 0x20) + 1;
  return;
}





void  FUN_100051a0(void *this_ptr,int param_1,int param_2,int param_3)

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
  local_8 = (int *)0x10005211;
  return;
}





void  FUN_10005240(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_100053d0((int)this_ptr);
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
    FUN_100050c0(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10005341;
  return;
}





int  FUN_10005390(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_100053d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_10005440(void *this_ptr,int param_1)

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
  FUN_100053d0((intptr_t)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x100054a0;
  return;
}





void  FUN_100054c0(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((int)this_ptr + 0xc,param_1);
  FUN_10003960((intptr_t)local_8 + 0xc);
  *(int *)((intptr_t)local_8 + 0x18) = uVar1;
  *(int *)((intptr_t)local_8 + 0x14) = 0;
  *(int *)((intptr_t)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x1000552f;
  return;
}





BOOL  FUN_10005560(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_100055b0(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10005560((int)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x1000564d;
  return;
}





void  FUN_10005680(int param_1)

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





void  FUN_10005730(int param_1)

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





void  FUN_100057d0(int param_1)

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





void  FUN_10005850(int param_1)

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
      FUN_10005730(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_10005680(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_100057d0(local_8);
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





void __cdecl FUN_10005a60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_1003a07c = param_1;
  return;
}





void __cdecl FUN_10005a90(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_1003a07c != (void *)0x0) {
    bVar1 = FUN_10005560((int)DAT_1003a07c);
    if (bVar1) {
      FUN_100055b0(DAT_1003a07c,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10005ae9;
  return;
}





void  FUN_10005b10(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  FUN_10005f10(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      FUN_10005e70(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_1003a080,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_1003a084 == 0) {
        FUN_10005e70(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_1003a080,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_1003a084,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_1003a084,0);
      }
    }
    else {
      FUN_10005e70(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_1003a080,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10005d40(void *this_ptr,int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_34 [20];
  int local_20;
  int local_1c;
  void *local_8;
local_3c = 0;
  local_38 = 0;
  local_8 = this_ptr;
  local_40 = GetTotalAmount0((int)this_ptr + 0xc);
  if (0 < local_40) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_40; local_4c = local_4c + 1) {
      GetUnitInfo((intptr_t)local_8 + 0xc,local_4c,local_34);
      local_44 = local_44 + local_20;
      local_48 = local_48 + local_1c;
    }
    local_3c = local_44 / local_40;
    local_38 = local_48 / local_40;
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  local_8 = (void *)0x10005e25;
  return;
}





void  FUN_10005e70(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar2 = GetUnitsAmount1(param_1 + 0x14,param_1 + 0xc);
  iVar1 = GetTotalAmount0(local_8 + 0xc);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10005f10(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar1 = GetTotalAmount0(param_1 + 0xc);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10005f80(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





int __cdecl FUN_10006110(char *param_1,byte *param_2)

{
  void *pcVar1;
  int iVar2;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_100068a0(2,0x10034404,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  if ((param_2 == (byte *)0x0) &&
     (iVar2 = FUN_100068a0(2,0x10034404,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return iVar2;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10006f40(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}







void FUN_10006230(void)

{
  FUN_10006270();
  return;
}





void FUN_10006260(void)

{
  return;
}





void FUN_10006270(void)

{
  return;
}





int __cdecl FUN_100062c0(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_1003a09c;
  DAT_1003a09c = param_1;
  return uVar1;
}





void FUN_100062e0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10008dd8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_100062fd((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_100063b0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10008dd8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_100063cd((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_10006460(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10008dd8((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000647d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int *puVar3;
  char *pcVar4;
  char *puVar5;
  int local_54 [16];
  int local_14;
  char local_10 [8];
  int uStack_8;
SetPlayerName(0,"PRUSSIA");
  SetPlayerName(1,"AUSTRIA");
  SetPlayerName(3,"PRUSSIA");
  RegisterZone(&DAT_10039da8,DAT_100340e0);
  RegisterZone(&DAT_10039db0,DAT_100340dc);
  RegisterZone(&DAT_10039db8,DAT_100340d8);
  RegisterZone(&DAT_10039dc0,DAT_100340d4);
  RegisterZone(&DAT_10039dc8,DAT_100340d0);
  RegisterZone(&DAT_10039dd0,DAT_100340cc);
  RegisterZone(&DAT_10039dd8,DAT_100340c8);
  RegisterZone(&DAT_10039de0,DAT_100340c4);
  RegisterZone(&DAT_10039de8,DAT_100340c0);
  RegisterZone(&DAT_10039e20,DAT_100340bc);
  RegisterZone(&DAT_10039e28,DAT_100340b8);
  RegisterZone(&DAT_10039e30,DAT_100340b4);
  RegisterZone(&DAT_10039e38,DAT_100340b0);
  RegisterZone(&DAT_10039e48,DAT_100340ac);
  RegisterZone(&DAT_10039e58,DAT_100340a8);
  RegisterZone(&DAT_10039e68,DAT_100340a4);
  RegisterZone(&DAT_10039e78,DAT_100340a0);
  RegisterZone(&DAT_10039e88,DAT_1003409c);
  RegisterZone(&DAT_10039ea0,DAT_10034098);
  RegisterZone(&DAT_10039e40,DAT_10034094);
  RegisterFormation(&DAT_10039d98,"#ODIN");
  RegisterUnitType(&DAT_10039da0,"GRUZ(UN)");
  RegisterVar(&DAT_10039ed8,4);
  RegisterUnitType(&DAT_10039ef0,"Dragun_18(au)");
  RegisterUnitType(&DAT_10039ee0,"Kirasir(au)");
  RegisterUnits(&DAT_10039d50,DAT_1003405c);
  RegisterUnits(&DAT_10039d58,DAT_10034058);
  RegisterUnits(&DAT_10039d60,DAT_10034054);
  RegisterUnits(&DAT_10039d68,DAT_10034050);
  RegisterUnits(&DAT_10039d70,DAT_1003404c);
  RegisterUnits(&DAT_10039d40,"GFulls");
  RegisterUnits(&DAT_10039f08,"GMain");
  RegisterVar(&DAT_10039ee8,8);
  RegisterVar(&DAT_10039ef8,8);
  RegisterUnits(&DAT_10039d48,"point");
  DAT_1003a080_ovl = 1;
  puVar3 = DAT_10034030;
  iVar1 = FUN_10005f80(0x10039d78);
  RegisterUnits(iVar1,puVar3);
  pcVar4 = "GHead";
  iVar1 = FUN_10005f80(0x10039e00);
  RegisterUnits(iVar1,pcVar4);
  RegisterVar(&DAT_10039d78,0x1e);
  for (local_14 = 0; local_14 < 9; local_14 = local_14 + 1) {
    FUN_10006110(local_10,DAT_10034024);
    RegisterUnits(((unsigned char *)&DAT_10039b84) + local_14 * 0x1e,local_10);
    ((long long *)&DAT_10039b94)[local_14 * 0x1e] = 0;
    ((long long *)&DAT_10039b95)[local_14 * 0x1e] = 1;
  }
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    FUN_10006110(local_10,DAT_10034020);
    puVar5 = local_10;
    iVar1 = FUN_10005f80((int)(((unsigned char *)&DAT_10039c88) + local_14 * 0x1e));
    RegisterUnits(iVar1,puVar5);
    ((long long *)&DAT_10039ca4)[local_14 * 0x1e] = 1;
  }
  DAT_1003a084 = 0;
  for (local_14 = 0; local_14 < 0xe; local_14 = local_14 + 1) {
    FUN_10006110(local_10,DAT_1003401c);
    puVar5 = local_10;
    iVar1 = FUN_10005f80((int)(((unsigned char *)&DAT_100399d0) + local_14 * 0x1e));
    RegisterUnits(iVar1,puVar5);
    ((long long *)&DAT_100399ec)[local_14 * 0x1e] = 2;
  }
  RegisterDynGroup(&DAT_10039df0);
  RegisterVar(&DAT_10039df0,8);
  DAT_10039ef8 = 0x22c4;
  DAT_10039efc = 13000;
  uStack_8 = 0x100019d7;
  return;
}







void ProcessScenary(void)

{
  double dVar1;
  int uVar2;
  void *pvVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int *puVar7;
  long double fVar8;
  long long lVar9;
  int local_74 [16];
  int local_34;
  void *local_30;
  int local_2c;
  int local_28;
  long long local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  long long local_c;
uVar4 = Trigg(0);
  if ((uVar4 & 0xff) != 0) {
    DAT_10039ed8 = GetDiff(0);
    InitialUpgrade("GMain",0);
    InitialUpgrade("GMain",0);
    InitialUpgrade("GMain",0);
    InitialUpgrade("GMain",0);
    if (DAT_10039ed8 < 1) {
      InitialUpgrade("GMain",0);
      InitialUpgrade("GMain",0);
      InitialUpgrade("GMain",0);
      InitialUpgrade("GMain",0);
    }
    if (DAT_10039ed8 < 2) {
      InitialUpgrade("GMain",0);
      InitialUpgrade("GMain",0);
      InitialUpgrade("GMain",0);
      InitialUpgrade("GMain",0);
      InitialUpgrade("GMain",0);
    }
    if (DAT_10039ed8 < 3) {
      InitialUpgrade("GMain",0);
      InitialUpgrade("GMain",0);
      InitialUpgrade("GMain",0);
      InitialUpgrade("GMain",0);
    }
    InitialUpgrade("GMain",0);
    InitialUpgrade("GMain",0);
    InitialUpgrade("GMain",0);
    InitialUpgrade("GMain",0);
    InitialUpgrade("GMain",0);
    InitialUpgrade("GMain",0);
    SetLightSpot(&DAT_10039db0,3,0);
    ChangeFriends(0,0);
    RunTimer(1,0);
    RunTimer(2,0);
    RunTimer(3,0);
    SelectUnits(&DAT_10039d50,0);
    SelectUnits(&DAT_10039d58,0);
    SelectUnits(&DAT_10039d68,0);
    SelectUnits(&DAT_10039d70,0);
    Patrol(1,&DAT_10039db0,0);
    DAT_10039ee8 = 600;
    DAT_10039eec = 600;
    RunTimer(0x1e,0);
    SetTrigg(99,0);
  }
  uVar4 = TimerDoneFirst(0);
  if ((uVar4 & 0xff) != 0) {
    ShowPage(0);
    SelectUnits(&DAT_10039f08,0);
    InitialUpgrade("GMain",0);
  }
  uVar4 = Trigg(0);
  if ((uVar4 & 0xff) != 0) {
    uVar4 = TimerDoneFirst(0);
    if ((uVar4 & 0xff) != 0) {
      DAT_10039f14 = 0;
      FUN_100029f0(&DAT_10039b1a,200);
      FUN_100029f0(&DAT_10039d78,200);
      FUN_100029f0(&DAT_10039c88,100);
      FUN_100029f0(&DAT_10039b78,100);
      FUN_100029f0(&DAT_10039b96,100);
      FUN_100029f0(&DAT_10039ca6,100);
      FUN_100029f0(&DAT_10039bb4,100);
      FUN_100029f0(&DAT_10039bd2,100);
      FUN_100029f0(&DAT_10039cc4,100);
      FUN_100029f0(&DAT_10039bf0,100);
      FUN_100029f0(&DAT_10039c0e,100);
      FUN_100029f0(&DAT_10039ce2,100);
      FUN_100029f0(&DAT_10039b56,200);
      FUN_10001f90(DAT_10039ee8,DAT_10039eec,DAT_10039ef8,DAT_10039efc);
      dVar1 = (double)fVar8;
      *(int*)((char*)&local_c + 4) = (int)((unsigned long long)dVar1 >> 0x20);
      uVar2 = *(int*)((char*)&local_c + 4);
      (*(int*)&local_c) = (int)(dVar1);
      pvVar3 = (void *)local_c;
      local_c = dVar1;
      FUN_10002660(0x10039afc,&DAT_10039b1a,pvVar3,uVar2,-600);
      FUN_10002660(0x10039b38,&DAT_10039b1a,(void *)local_c,*(int*)((char*)&local_c + 4),600);
      FUN_10002660(0x100399d0,&DAT_10039c88,(void *)local_c,*(int*)((char*)&local_c + 4),-600);
      FUN_10002660(0x100399ee,&DAT_10039c88,(void *)local_c,*(int*)((char*)&local_c + 4),600);
      FUN_10002660(0x10039a48,&DAT_10039ca6,(void *)local_c,*(int*)((char*)&local_c + 4),-600);
      FUN_10002660(0x10039a66,&DAT_10039ca6,(void *)local_c,*(int*)((char*)&local_c + 4),600);
      FUN_10002660(0x10039a84,&DAT_10039cc4,(void *)local_c,*(int*)((char*)&local_c + 4),-600);
      FUN_10002660(0x10039aa2,&DAT_10039cc4,(void *)local_c,*(int*)((char*)&local_c + 4),600);
      FUN_10002660(0x10039a0c,&DAT_10039ce2,(void *)local_c,*(int*)((char*)&local_c + 4),-600);
      FUN_10002660(0x10039a2a,&DAT_10039ce2,(void *)local_c,*(int*)((char*)&local_c + 4),600);
      FUN_10002660(0x10039ac0,&DAT_10039b56,(void *)local_c,*(int*)((char*)&local_c + 4),-600);
      FUN_10002660(0x10039ade,&DAT_10039b56,(void *)local_c,*(int*)((char*)&local_c + 4),600);
      iVar6 = FUN_10005f80(0x10039b1a);
      SelectUnits(iVar6,0);
      RunTimer(1,0);
    }
  }
  uVar4 = Trigg(0);
  if ((uVar4 & 0xff) != 0) {
    uVar4 = TimerDoneFirst(0);
    if ((uVar4 & 0xff) != 0) {
      FUN_10001b70(&DAT_10039df8,DAT_10039ee8,DAT_10039eec,2000);
      iVar6 = GetUnitsAmount0(&DAT_10039df8,0);
      iVar5 = GetUnitsAmount0(&DAT_10039df8,0);
      if (iVar6 + iVar5 < 8) {
        DAT_1003a084 = (int *)0x0;
      }
      else {
        DAT_1003a084 = &DAT_10039df8;
      }
      RunTimer(2,0);
    }
  }
  uVar4 = Trigg(0);
  if ((uVar4 & 0xff) == 0) goto LAB_100034d4;
  uVar4 = TimerDoneFirst(0);
  if ((uVar4 & 0xff) == 0) goto LAB_100034d4;
  local_10 = DAT_10039ee8;
  local_14 = DAT_10039eec;
  local_18 = DAT_10039ef8;
  local_1c = DAT_10039efc;
  local_30 = (void *)(DAT_10039efc - DAT_10039eec);
  local_34 = DAT_10039ef8 - DAT_10039ee8;
  fVar8 = (long double)FUN_100062f4(local_30,(int)((double)(intptr_t)local_30 / (double)local_34));
  local_24 = (double)fVar8;
  if (local_18 - local_10 < 0) {
    local_24 = DAT_10034100_ovl + local_24;
  }
  FUN_100063c4(*(int*)((char*)&local_24 + 4),(int)(local_24));
  lVar9 = 0;
  DAT_10039ee8 = (int)lVar9;
  FUN_10006474((void *)local_24,(int)(void *)local_24);
  lVar9 = 0;
  DAT_10039eec = (int)lVar9;
  local_28 = 0;
  RunTimer(3,1000);
  for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
    FUN_10005f80((int)(((unsigned char *)&DAT_10039b78) + local_2c * 0x1e));
    iVar6 = GetTotalAmount0(0);
    local_28 = local_28 + iVar6;
  }
  if (0 < local_28) {
    iVar6 = GetUnitsAmount2(&DAT_10039db0,&DAT_10039da0,0);
    if (local_28 != iVar6) {
      iVar6 = GetTotalAmount0(0);
      if (iVar6 != 0) goto LAB_100034a9;
    }
    SetTrigg(1,0);
    LooseGame();
  }
LAB_100034a9:
  if (local_28 == 0) {
    SetTrigg(1,0);
    ShowVictory();
  }
LAB_100034d4:
  uVar4 = Trigg(0);
  if ((uVar4 & 0xff) != 0) {
    SaveSelectedUnits(0,&DAT_10039df0,0);
    SelectUnits(&DAT_10039d40,0);
    SelChangeNation(0,0);
    iVar6 = GetTotalAmount0(0);
    if (iVar6 == 1) {
      CreateZoneNearGroup(&DAT_10039eb8,&DAT_10039da8,&DAT_10039f08,0);
      SelectUnitsInZone(&DAT_10039eb8,3,0);
      SelChangeNation(3,0);
    }
    SelectUnits(&DAT_10039df0,0);
  }
  iVar6 = GetTotalAmount0(&DAT_10039f08);
  if (iVar6 < 1) {
    ShowPage(0);
    LooseGame();
  }
  local_c = (double)(int)(void *)local_c;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

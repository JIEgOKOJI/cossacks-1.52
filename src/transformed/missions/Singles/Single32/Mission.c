#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1000a0a4[] = "GK6";
char DAT_1000a0a8[] = "GSt3";
char DAT_1000a0c0[] = "G63";
char DAT_1000a0c4[] = "G62";
char DAT_1000a0c8[] = "G61";
char DAT_1000a0cc[] = "G6";
char DAT_1000a0d0[] = "GP6";
char DAT_1000a0d4[] = "GE2";
char DAT_1000a0e0[] = "ZB2";
char DAT_1000a0e4[] = "ZB1";
char DAT_1000a0e8[] = "Z61";
char DAT_1000a0ec[] = "ZK6A";
char DAT_1000a0f4[] = "ZK6";
char DAT_1000a104[] = "Z33B";
char DAT_1000a10c[] = "Z33";
char DAT_1000a110[] = "Z32C";
char DAT_1000a118[] = "Z32B";
char DAT_1000a120[] = "Z32A";
char DAT_1000a128[] = "Z32";
char DAT_1000a144[] = "Z31F";
char DAT_1000a14c[] = "Z31E";
char DAT_1000a154[] = "Z31D";
char DAT_1000a15c[] = "Z31C";
char DAT_1000a164[] = "Z31B";
char DAT_1000a16c[] = "Z31A";
char DAT_1000a174[] = "Z31";
char DAT_1000a178[] = "Z19D";
char DAT_1000a180[] = "Z19";
char DAT_1000a184[] = "Z20";
char DAT_1000a188[] = "Z18";
char DAT_1000a18c[] = "Z15W";
char DAT_1000a194[] = "Z15";
char DAT_1000a198[] = "Z140";
char DAT_1000a1a0[] = "Z14";
char DAT_1000a1a4[] = "Z06";
char DAT_1000a1a8[] = "Z01";
char DAT_1000a1ac[] = "ZTH3";
char DAT_1000a1b4[] = "Z17A";
char DAT_1000a1bc[] = "Z17";
char DAT_1000a1c0[] = "Z16";
char DAT_1000a1c4[] = "Z13";
char DAT_1000a1c8[] = "Z12";
char DAT_1000a1cc[] = "Z11";
char DAT_1000a1d0[] = "Z9D";
char DAT_1000a1d4[] = "Z9";
char DAT_1000a1d8[] = "Z10A";
char DAT_1000a1e0[] = "Z10";
char DAT_1000a1e4[] = "Z8";
char DAT_1000a1e8[] = "Z79";
char DAT_1000a1ec[] = "Z78";
char DAT_1000a1f0[] = "Z77";
char DAT_1000a1f4[] = "Z76";
char DAT_1000a1f8[] = "Z75";
char DAT_1000a1fc[] = "Z74";
char DAT_1000a200[] = "Z73";
char DAT_1000a204[] = "Z72";
char DAT_1000a208[] = "Z71";
char DAT_1000a20c[] = "Z7C";
char DAT_1000a210[] = "Z7B";
char DAT_1000a214[] = "Z7A";
char DAT_1000a218[] = "Z70";
char DAT_1000a21c[] = "Z7";
char DAT_1000a220[] = "Z6";
char DAT_1000a224[] = "Z5";
char DAT_1000a228[] = "Z40";
char DAT_1000a22c[] = "Z4";
char DAT_1000a230[] = "Z3";
char DAT_1000a234[] = "Z2";
char DAT_1000a238[] = "Z1";
char DAT_1000a23c[] = "ZM4";
char DAT_1000a240[] = "ZM3";
char DAT_1000a244[] = "ZT2";
char DAT_1000a248[] = "ZTH2";
char DAT_1000a250[] = "ZM2";
char DAT_1000a254[] = "ZM1";
char DAT_1000a258[] = "ZT1";
char DAT_1000a25c[] = "ZTH1";
char DAT_1000a264[] = "ZPE2";
char DAT_1000a26c[] = "ZTE2";
char DAT_1000a274[] = "ZPE1";
char DAT_1000a27c[] = "ZTE1";
char DAT_1000a284[] = "Z0C";
char DAT_1000a288[] = "Z0B";
char DAT_1000a28c[] = "Z0A";
char DAT_1000a364[] = "MAIN";
char DAT_1000a4b4[] = "AU";
char DAT_1000a68c[] = "FR";
char DAT_1000a7bc[] = "GE";
char DAT_1000a954[] = "RU";
char DAT_1000ab18[] = "SA";
char DAT_1000ad04[] = "SV";
long long DAT_1000b100 = 0;
long long DAT_1000b108 = 0;
long long DAT_1000b110 = 0;
int DAT_1000b118 = 0;
long long DAT_1000b120 = 0;
long long DAT_1000b124 = 0;
long long DAT_1000b128 = 0;
long long DAT_1000b130 = 0;
long long DAT_1000b138 = 0;
long long DAT_1000b140 = 0;
int DAT_1000b148 = 0;
long long DAT_1000b150 = 0;
long long DAT_1000b158 = 0;
long long DAT_1000b160 = 0;
int DAT_1000b168 = 0;
long long DAT_1000b170 = 0;
long long DAT_1000b178 = 0;
long long DAT_1000b180 = 0;
long long DAT_1000b188 = 0;
long long DAT_1000b190 = 0;
long long DAT_1000b198 = 0;
long long DAT_1000b1a0 = 0;
long long DAT_1000b1a8 = 0;
long long DAT_1000b1b0 = 0;
long long DAT_1000b1b8 = 0;
long long DAT_1000b1c0 = 0;
long long DAT_1000b1c8 = 0;
long long DAT_1000b1d0 = 0;
long long DAT_1000b1d8 = 0;
long long DAT_1000b1e0 = 0;
long long DAT_1000b1e8 = 0;
long long DAT_1000b1f0 = 0;
long long DAT_1000b1f8 = 0;
long long DAT_1000b200 = 0;
long long DAT_1000b208 = 0;
long long DAT_1000b210 = 0;
long long DAT_1000b218 = 0;
long long DAT_1000b220 = 0;
long long DAT_1000b228 = 0;
int DAT_1000b230 = 0;
long long DAT_1000b238 = 0;
long long DAT_1000b240 = 0;
long long DAT_1000b248 = 0;
long long DAT_1000b250 = 0;
long long DAT_1000b258 = 0;
long long DAT_1000b260 = 0;
long long DAT_1000b268 = 0;
long long DAT_1000b270 = 0;
long long DAT_1000b278 = 0;
long long DAT_1000b280 = 0;
long long DAT_1000b288 = 0;
long long DAT_1000b290 = 0;
long long DAT_1000b298 = 0;
long long DAT_1000b2a0 = 0;
long long DAT_1000b2a8 = 0;
long long DAT_1000b2b0 = 0;
long long DAT_1000b2b8 = 0;
long long DAT_1000b2c0 = 0;
long long DAT_1000b2c8 = 0;
long long DAT_1000b2d0 = 0;
long long DAT_1000b2d8 = 0;
long long DAT_1000b2e0 = 0;
long long DAT_1000b2e8 = 0;
long long DAT_1000b2f0 = 0;
int DAT_1000b2f8 = 0;
long long DAT_1000b300 = 0;
int DAT_1000b308 = 0;
int DAT_1000b30c = 0;
long long DAT_1000b310 = 0;
long long DAT_1000b318 = 0;
int DAT_1000b320 = 0;
long long DAT_1000b328 = 0;
long long DAT_1000b330 = 0;
long long DAT_1000b338 = 0;
int DAT_1000b340 = 0;
int DAT_1000b344 = 0;
long long DAT_1000b348 = 0;
long long DAT_1000b350 = 0;
long long DAT_1000b358 = 0;
long long DAT_1000b360 = 0;
long long DAT_1000b368 = 0;
long long DAT_1000b370 = 0;
long long DAT_1000b378 = 0;
long long DAT_1000b380 = 0;
long long DAT_1000b388 = 0;
long long DAT_1000b390 = 0;
int DAT_1000b398 = 0;
long long DAT_1000b3a0 = 0;
long long DAT_1000b3a8 = 0;
long long DAT_1000b3b0 = 0;
long long DAT_1000b3b8 = 0;
long long DAT_1000b3c0 = 0;
long long DAT_1000b3c8 = 0;
long long DAT_1000b3d0 = 0;
long long DAT_1000b3d8 = 0;
long long DAT_1000b3e0 = 0;
long long DAT_1000b3e8 = 0;
long long DAT_1000b3f0 = 0;
long long DAT_1000b3f8 = 0;
long long DAT_1000b400 = 0;
long long DAT_1000b408 = 0;
long long DAT_1000b410 = 0;
long long DAT_1000b418 = 0;
long long DAT_1000b420 = 0;
long long DAT_1000b428 = 0;
long long DAT_1000b430 = 0;
long long DAT_1000b438 = 0;
long long DAT_1000b440 = 0;
long long DAT_1000b448 = 0;
int DAT_1000b450 = 0;
int DAT_1000b454 = 0;
long long DAT_1000b458 = 0;
long long DAT_1000b460 = 0;
long long DAT_1000b468 = 0;
long long DAT_1000b470 = 0;
long long DAT_1000b478 = 0;
long long DAT_1000b480 = 0;
long long DAT_1000b488 = 0;
long long DAT_1000b490 = 0;
long long DAT_1000b498 = 0;
long long DAT_1000b4a0 = 0;
long long DAT_1000b4a8 = 0;
long long DAT_1000b4b0 = 0;
long long DAT_1000b4b8 = 0;
long long DAT_1000b4c0 = 0;
long long DAT_1000b4c8 = 0;
long long DAT_1000b4d0 = 0;
long long DAT_1000b4d8 = 0;
long long DAT_1000b4e0 = 0;
long long DAT_1000b4e8 = 0;
long long DAT_1000b4f0 = 0;
long long DAT_1000b4f8 = 0;
long long DAT_1000b500 = 0;
long long DAT_1000b508 = 0;
long long DAT_1000b510 = 0;
long long DAT_1000b518 = 0;
long long DAT_1000b520 = 0;
long long DAT_1000b528 = 0;
long long DAT_1000b530 = 0;
long long DAT_1000b538 = 0;
long long DAT_1000b540 = 0;
long long DAT_1000b548 = 0;
long long DAT_1000b550 = 0;
long long DAT_1000b558 = 0;
long long DAT_1000b560 = 0;
long long DAT_1000b568 = 0;
long long DAT_1000b570 = 0;
long long DAT_1000b578 = 0;
long long DAT_1000b580 = 0;
long long DAT_1000b588 = 0;
long long DAT_1000b590 = 0;
long long DAT_1000b598 = 0;
long long DAT_1000b5a0 = 0;
long long DAT_1000b5a8 = 0;
long long DAT_1000b5b0 = 0;
long long DAT_1000b5b8 = 0;
long long DAT_1000b5c0 = 0;
long long DAT_1000b5c8 = 0;
long long DAT_1000b5d0 = 0;
long long DAT_1000b5d8 = 0;
long long DAT_1000b5e0 = 0;
long long DAT_1000b5e8 = 0;
long long DAT_1000b5f0 = 0;
long long DAT_1000b5f8 = 0;
long long DAT_1000b600 = 0;
long long DAT_1000b608 = 0;
long long DAT_1000b610 = 0;
long long DAT_1000b618 = 0;
long long DAT_1000b620 = 0;
long long DAT_1000b628 = 0;
long long DAT_1000b630 = 0;
long long DAT_1000b638 = 0;
long long DAT_1000b640 = 0;
long long DAT_1000b648 = 0;
long long DAT_1000b650 = 0;
long long DAT_1000b658 = 0;
long long DAT_1000b660 = 0;
long long DAT_1000b668 = 0;
long long DAT_1000b670 = 0;
int DAT_1000b120_ovl = 0;
int DAT_1000b124_ovl = 0;

/* Forward declarations */
unsigned int * FUN_100059f0(unsigned int *param_1,unsigned int *param_2);
unsigned int * FUN_10005a00(unsigned int *param_1,unsigned int *param_2);

void OnInit();
void ProcessScenary();


unsigned int * __cdecl FUN_100059f0(unsigned int *param_1,unsigned int *param_2)

{
  byte bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  puVar4 = param_1;
  while (((unsigned int)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (unsigned int)bVar1;
    param_2 = (unsigned int *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10005ad8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (unsigned int *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10005ad8:
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
  } while( 1 );
}





unsigned int * __cdecl FUN_10005a00(unsigned int *param_1,unsigned int *param_2)

{
  byte bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  puVar3 = param_1;
  do {
    if (((unsigned int)puVar3 & 3) == 0) goto LAB_10005a1c;
    uVar4 = *puVar3;
    puVar3 = (unsigned int *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10005a4f;
  while( 1 ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (unsigned int *)((int)puVar5 + 2);
      goto joined_r0x10005a6b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10005a1c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10005a6b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (unsigned int *)((int)puVar5 + 1);
      goto joined_r0x10005a6b;
    }
  }
LAB_10005a4f:
  puVar5 = (unsigned int *)((int)puVar3 + -1);
joined_r0x10005a6b:
  do {
    if (((unsigned int)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10005ad8:
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
      } while( 1 );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (unsigned int)bVar1;
    param_2 = (unsigned int *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10005ad8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (unsigned int *)((int)puVar5 + 1);
  } while( 1 );
}





void OnInit(void)

{
                    
  RegisterVar(&DAT_1000b168,4);
  RegisterVar(&DAT_1000b344,4);
  RegisterVar(&DAT_1000b118,4);
  RegisterVar(&DAT_1000b320,4);
  RegisterVar(&DAT_1000b340,4);
  RegisterVar(&DAT_1000b2f8,4);
  SetPlayerName(1,"ENEMY");
  SetPlayerName(2,"ENEMY");
  SetPlayerName(3,"ALLIES");
  SetPlayerName(4,"ALLIES");
  SetPlayerName(5,"ENEMY");
  SetPlayerName(6,"NEUTRALS");
  RegisterZone(&DAT_1000b450,DAT_1000a28c);
  RegisterZone(&DAT_1000b458,DAT_1000a288);
  RegisterZone(&DAT_1000b460,DAT_1000a284);
  RegisterZone(&DAT_1000b368,DAT_1000a27c);
  RegisterZone(&DAT_1000b328,DAT_1000a274);
  RegisterZone(&DAT_1000b370,DAT_1000a26c);
  RegisterZone(&DAT_1000b330,DAT_1000a264);
  RegisterZone(&DAT_1000b378,DAT_1000a25c);
  RegisterZone(&DAT_1000b550,DAT_1000a258);
  RegisterZone(&DAT_1000b520,DAT_1000a254);
  RegisterZone(&DAT_1000b528,DAT_1000a250);
  RegisterZone(&DAT_1000b380,DAT_1000a248);
  RegisterZone(&DAT_1000b560,DAT_1000a244);
  RegisterZone(&DAT_1000b530,DAT_1000a240);
  RegisterZone(&DAT_1000b538,DAT_1000a23c);
  RegisterZone(&DAT_1000b248,DAT_1000a238);
  RegisterZone(&DAT_1000b258,DAT_1000a234);
  RegisterZone(&DAT_1000b270,DAT_1000a230);
  RegisterZone(&DAT_1000b288,DAT_1000a22c);
  RegisterZone(&DAT_1000b448,DAT_1000a228);
  RegisterZone(&DAT_1000b290,DAT_1000a224);
  RegisterZone(&DAT_1000b298,DAT_1000a220);
  RegisterZone(&DAT_1000b2a0,DAT_1000a21c);
  RegisterZone(&DAT_1000b478,DAT_1000a218);
  RegisterZone(&DAT_1000b4c8,DAT_1000a214);
  RegisterZone(&DAT_1000b4d0,DAT_1000a210);
  RegisterZone(&DAT_1000b4d8,DAT_1000a20c);
  RegisterZone(&DAT_1000b480,DAT_1000a208);
  RegisterZone(&DAT_1000b488,DAT_1000a204);
  RegisterZone(&DAT_1000b490,DAT_1000a200);
  RegisterZone(&DAT_1000b498,DAT_1000a1fc);
  RegisterZone(&DAT_1000b4a0,DAT_1000a1f8);
  RegisterZone(&DAT_1000b4a8,DAT_1000a1f4);
  RegisterZone(&DAT_1000b4b0,DAT_1000a1f0);
  RegisterZone(&DAT_1000b4b8,DAT_1000a1ec);
  RegisterZone(&DAT_1000b4c0,DAT_1000a1e8);
  RegisterZone(&DAT_1000b2a8,DAT_1000a1e4);
  RegisterZone(&DAT_1000b3d0,DAT_1000a1e0);
  RegisterZone(&DAT_1000b5b0,DAT_1000a1d8);
  RegisterZone(&DAT_1000b2b0,DAT_1000a1d4);
  RegisterZone(&DAT_1000b4e8,DAT_1000a1d0);
  RegisterZone(&DAT_1000b3d8,DAT_1000a1cc);
  RegisterZone(&DAT_1000b3e8,DAT_1000a1c8);
  RegisterZone(&DAT_1000b3f0,DAT_1000a1c4);
  RegisterZone(&DAT_1000b410,DAT_1000a1c0);
  RegisterZone(&DAT_1000b418,DAT_1000a1bc);
  RegisterZone(&DAT_1000b5d0,DAT_1000a1b4);
  RegisterZone(&DAT_1000b388,DAT_1000a1ac);
  RegisterZone(&DAT_1000b3c8,DAT_1000a1a8);
  RegisterZone(&DAT_1000b3e0,DAT_1000a1a4);
  RegisterZone(&DAT_1000b3f8,DAT_1000a1a0);
  RegisterZone(&DAT_1000b5a8,DAT_1000a198);
  RegisterZone(&DAT_1000b408,DAT_1000a194);
  RegisterZone(&DAT_1000b608,DAT_1000a18c);
  RegisterZone(&DAT_1000b420,DAT_1000a188);
  RegisterZone(&DAT_1000b400,DAT_1000a184);
  RegisterZone(&DAT_1000b428,DAT_1000a180);
  RegisterZone(&DAT_1000b5d8,DAT_1000a178);
  RegisterZone(&DAT_1000b430,DAT_1000a174);
  RegisterZone(&DAT_1000b5e8,DAT_1000a16c);
  RegisterZone(&DAT_1000b5f8,DAT_1000a164);
  RegisterZone(&DAT_1000b610,DAT_1000a15c);
  RegisterZone(&DAT_1000b620,DAT_1000a154);
  RegisterZone(&DAT_1000b630,DAT_1000a14c);
  RegisterZone(&DAT_1000b640,DAT_1000a144);
  RegisterZone(&DAT_1000b218,"Z31B2");
  RegisterZone(&DAT_1000b220,"Z31B3");
  RegisterZone(&DAT_1000b228,"Z31B4");
  RegisterZone(&DAT_1000b438,DAT_1000a128);
  RegisterZone(&DAT_1000b628,DAT_1000a120);
  RegisterZone(&DAT_1000b638,DAT_1000a118);
  RegisterZone(&DAT_1000b648,DAT_1000a110);
  RegisterZone(&DAT_1000b440,DAT_1000a10c);
  RegisterZone(&DAT_1000b650,DAT_1000a104);
  RegisterZone(&DAT_1000b120,"ZTownPlayer");
  RegisterZone(&DAT_1000b518,DAT_1000a0f4);
  RegisterZone(&DAT_1000b238,DAT_1000a0ec);
  RegisterZone(&DAT_1000b470,DAT_1000a0e8);
  RegisterZone(&DAT_1000b4f0,DAT_1000a0e4);
  RegisterZone(&DAT_1000b4f8,DAT_1000a0e0);
  RegisterUnits(&DAT_1000b348,"GErase");
  RegisterUnits(&DAT_1000b300,DAT_1000a0d4);
  RegisterUnits(&DAT_1000b350,DAT_1000a0d0);
  RegisterUnits(&DAT_1000b210,DAT_1000a0cc);
  RegisterUnits(&DAT_1000b250,DAT_1000a0c8);
  RegisterUnits(&DAT_1000b260,DAT_1000a0c4);
  RegisterUnits(&DAT_1000b278,DAT_1000a0c0);
  RegisterUnits(&DAT_1000b1b8,"GBar1");
  RegisterUnits(&DAT_1000b1c0,"GBar2");
  RegisterUnits(&DAT_1000b318,DAT_1000a0a8);
  RegisterUnits(&DAT_1000b338,DAT_1000a0a4);
  RegisterDynGroup(&DAT_1000b2b8);
  RegisterDynGroup(&DAT_1000b3a0);
  RegisterDynGroup(&DAT_1000b1a0);
  RegisterDynGroup(&DAT_1000b160);
  RegisterVar(&DAT_1000b160,8);
  RegisterDynGroup(&DAT_1000b2c0);
  RegisterVar(&DAT_1000b2c0,8);
  RegisterDynGroup(&DAT_1000b2d0);
  RegisterVar(&DAT_1000b2d0,8);
  RegisterDynGroup(&DAT_1000b2c8);
  RegisterVar(&DAT_1000b2c8,8);
  RegisterDynGroup(&DAT_1000b2d8);
  RegisterVar(&DAT_1000b2d8,8);
  RegisterDynGroup(&DAT_1000b108);
  RegisterVar(&DAT_1000b108,8);
  RegisterDynGroup(&DAT_1000b130);
  RegisterVar(&DAT_1000b130,8);
  RegisterDynGroup(&DAT_1000b1f0);
  RegisterVar(&DAT_1000b1f0,8);
  RegisterDynGroup(&DAT_1000b1f8);
  RegisterVar(&DAT_1000b1f8,8);
  RegisterDynGroup(&DAT_1000b200);
  RegisterVar(&DAT_1000b200,8);
  RegisterDynGroup(&DAT_1000b208);
  RegisterVar(&DAT_1000b208,8);
  RegisterDynGroup(&DAT_1000b110);
  RegisterVar(&DAT_1000b110,8);
  RegisterDynGroup(&DAT_1000b2f0);
  RegisterVar(&DAT_1000b2f0,8);
  RegisterDynGroup(&DAT_1000b590);
  RegisterVar(&DAT_1000b590,8);
  RegisterDynGroup(&DAT_1000b1e0);
  RegisterVar(&DAT_1000b1e0,8);
  RegisterDynGroup(&DAT_1000b128);
  RegisterVar(&DAT_1000b128,8);
  RegisterDynGroup(&DAT_1000b668);
  RegisterVar(&DAT_1000b668,8);
  RegisterDynGroup(&DAT_1000b310);
  RegisterVar(&DAT_1000b310,8);
  RegisterDynGroup(&DAT_1000b188);
  RegisterVar(&DAT_1000b188,8);
  RegisterDynGroup(&DAT_1000b670);
  RegisterVar(&DAT_1000b670,8);
  RegisterDynGroup(&DAT_1000b5f0);
  RegisterVar(&DAT_1000b5f0,8);
  RegisterDynGroup(&DAT_1000b170);
  RegisterVar(&DAT_1000b170,8);
  RegisterDynGroup(&DAT_1000b5e0);
  RegisterVar(&DAT_1000b5e0,8);
  RegisterDynGroup(&DAT_1000b180);
  RegisterVar(&DAT_1000b180,8);
  RegisterDynGroup(&DAT_1000b618);
  RegisterVar(&DAT_1000b618,8);
  RegisterDynGroup(&DAT_1000b178);
  RegisterVar(&DAT_1000b178,8);
  RegisterDynGroup(&DAT_1000b600);
  RegisterVar(&DAT_1000b600,8);
  RegisterDynGroup(&DAT_1000b190);
  RegisterVar(&DAT_1000b190,8);
  RegisterUnitType(&DAT_1000b1e8,"GRUZ_Z(UN)");
  RegisterUnitType(&DAT_1000b390,"KUPEC(UN)");
  RegisterUnitType(&DAT_1000b5b8,"Gusar_NEW(GE)");
  RegisterUnitType(&DAT_1000b3c0,"Grenader(GE)");
  RegisterUnitType(&DAT_1000b100,"Mushketer_PR(GE)");
  RegisterFormation(&DAT_1000b268,"#ALONE");
  RegisterUnitType(&DAT_1000b280,"TUrkey_pikiner(TU)");
  RegisterUnitType(&DAT_1000b658,"Tatarin(TU)");
  RegisterVar(&DAT_1000b548,8);
  RegisterVar(&DAT_1000b150,8);
  RegisterVar(&DAT_1000b158,8);
  RegisterVar(&DAT_1000b358,8);
  RegisterVar(&DAT_1000b1d8,8);
  RegisterVar(&DAT_1000b4e0,8);
  RegisterDynGroup(&DAT_1000b558);
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  int uVar3;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *pcVar12;
  void *pcVar13;
  void *pcVar14;
  char *pcVar15;
  int *puVar16;
  int uVar17;
  
                    
  cVar1 = Trigg(99);
  if (cVar1 != '\0') {
    RunTimer(1,0);
    RunTimer(0xb,0);
    RunTimer(2,30000);
    RunTimer(3,3000);
    DAT_1000b168 = GetDiff(0);
    DAT_1000b344 = 10;
    DAT_1000b340 = DAT_1000b168 * -3 + 10;
    DAT_1000b320 = 1000;
    DAT_1000b2f8 = 0x14;
    TakeFood(&DAT_1000b350);
    RemoveGroup(&DAT_1000b210,&DAT_1000b2c0);
    SelectUnits(&DAT_1000b2c0,0);
    DoNotUseSelInAI(5);
    ClearSelection(5);
    RemoveGroup(&DAT_1000b250,&DAT_1000b108);
    RemoveGroup(&DAT_1000b260,&DAT_1000b108);
    RemoveGroup(&DAT_1000b278,&DAT_1000b130);
    InitialUpgrade(DAT_1000a0d0,"MAINGE");
    InitialUpgrade(DAT_1000a0d0,"AKA01GE");
    InitialUpgrade(DAT_1000a0d0,"AKA02GE");
    InitialUpgrade(DAT_1000a0d0,"AKA03GE");
    InitialUpgrade(DAT_1000a0d0,"AKA04GE");
    if (1 < DAT_1000b168) {
      InitialUpgrade(DAT_1000a0d0,"KUZ02GE");
      InitialUpgrade(DAT_1000a0d0,"KUZ03GE");
      InitialUpgrade(DAT_1000a0d0,"KUZ04GE");
      InitialUpgrade(DAT_1000a0d0,"KUZ05GE");
    }
    ChangeFriends(1,6);
    ChangeFriends(2,6);
    ChangeFriends(3,0x79);
    ChangeFriends(4,0x79);
    ChangeFriends(5,0xfe);
    ChangeFriends(6,0xff);
    SetResource(0,0,0);
    SetResource(0,2,0);
    if (DAT_1000b168 < 1) {
      SetResource(0,1,5000);
      iVar2 = GetResource(0,1);
      SetResource(0,3,iVar2 << 1);
      uVar3 = GetResource(0,1);
      SetResource(0,5,uVar3);
      uVar3 = GetResource(0,1);
      SetResource(0,4,uVar3);
      DAT_1000b320 = 2000;
    }
    else {
      SetResource(0,1,DAT_1000b168 * -200 + 0x5dc);
      iVar2 = GetResource(0,1);
      SetResource(0,3,iVar2 + DAT_1000b168 * -300 + 1000);
      SetResource(0,5,(6 - DAT_1000b168) * 200);
      iVar2 = GetResource(0,5);
      SetResource(0,4,iVar2 + DAT_1000b168 * -0x4b + 0xfa);
      iVar2 = GetResource(0,1);
      AddResource(0,1,iVar2 + (2 - DAT_1000b168) * 0x4b);
    }
    SetResource(1,0,(DAT_1000b168 + 1) * 10000);
    uVar3 = GetResource(1,0);
    SetResource(1,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,2,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,1,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,4,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(1,5,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,0,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,2,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,1,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,4,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(2,5,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,0,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,2,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,1,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,4,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(3,5,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,0,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,3,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,2,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,1,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,4,uVar3);
    uVar3 = GetResource(1,0);
    SetResource(4,5,uVar3);
    iVar2 = AskMultilineQuestion(9,"#PAGE21",0,"Qn1_0|Qn1_1|Qn1_4|Qn1_5|Qn1_6|Qn1_7")
    ;
    if (iVar2 == 0) {
      RegisterUnitType(&DAT_1000b1b0,"Mortira_b(GE)");
      EnableUnit(1,&DAT_1000b1b0,0);
      EnableUnit(2,&DAT_1000b1b0,0);
      EnableUnit(3,&DAT_1000b1b0,0);
      EnableUnit(4,&DAT_1000b1b0,0);
      RegisterUnitType(&DAT_1000b1a8,"Mortira_b(SV)");
      EnableUnit(1,&DAT_1000b1a8,0);
      EnableUnit(2,&DAT_1000b1a8,0);
      EnableUnit(3,&DAT_1000b1a8,0);
      EnableUnit(4,&DAT_1000b1a8,0);
      RegisterUnitType(&DAT_1000b198,"Mortira_b(AU)");
      EnableUnit(1,&DAT_1000b198,0);
      EnableUnit(2,&DAT_1000b198,0);
      EnableUnit(3,&DAT_1000b198,0);
      EnableUnit(4,&DAT_1000b198,0);
      DAT_1000b398 = "AUSTRIA.0";
      DAT_1000b230 = (unsigned int *)DAT_1000a4b4;
      DAT_1000b30c = "GERMAN.0";
      DAT_1000b308 = "SVEDEN.0";
      RegisterUnitType(&DAT_1000b540,"Gusar_evro(au)");
      RegisterUnitType(&DAT_1000b5c8,"Dragun_18(au)");
      RegisterUnitType(&DAT_1000b1d0,"Kirasir(au)");
      RegisterUpgrade(&DAT_1000b5a0,"Gusar_evro(au)ATTACK");
      RegisterUpgrade(&DAT_1000b580,"Gusar_evro(au)SHIELD");
      RegisterUpgrade(&DAT_1000b510,"Dragun_18(au)ATTACK");
      RegisterUpgrade(&DAT_1000b578,"Dragun_18(au)SHIELD");
      RegisterUpgrade(&DAT_1000b240,"Kirasir(au)ATTACK");
      RegisterUpgrade(&DAT_1000b2e8,"Kirasir(au)SHIELD");
      EnableUnit(0,&DAT_1000b540,0);
      EnableUnit(0,&DAT_1000b5c8,0);
      EnableUnit(0,&DAT_1000b1d0,0);
      DisableUpgrade(0,&DAT_1000b5a0);
      DisableUpgrade(0,&DAT_1000b580);
      DisableUpgrade(0,&DAT_1000b510);
      DisableUpgrade(0,&DAT_1000b578);
      DisableUpgrade(0,&DAT_1000b240);
      DisableUpgrade(0,&DAT_1000b2e8);
      RegisterUnitType(&DAT_1000b3a8,"Kuznica(au)");
      RegisterUnitType(&DAT_1000b660,"Konushnia_Swesair(au)");
      RegisterUnitType(&DAT_1000b568,"Konushnia_Swesair(au)");
      RegisterUnitType(&DAT_1000b360,"Cercov_Poland(au)");
      RegisterUnitType(&DAT_1000b2e0,"Dip_korpus(au)");
      RegisterUnitType(&DAT_1000b598,"Dom_Austria(au)");
      RegisterUnitType(&DAT_1000b3b8,"Rinok(au)");
      RegisterUnitType(&DAT_1000b358,"Kavalerist_avstrii(au)");
      RegisterUnitType(&DAT_1000b1d8,"Dragun(au)");
      RegisterUnitType(&DAT_1000b4e0,"Konni_Ricar(au)");
      RegisterUnitType(&DAT_1000b548,"Center_Austria(au)");
      RegisterUnitType(&DAT_1000b3b0,"Kreposnoi_pruss(au)");
      RegisterUnitType(&DAT_1000b1c8,"Pikiner_evro(au)");
      RegisterUnitType(&DAT_1000b508,"Sveshenik_evro(au)");
      RegisterUnitType(&DAT_1000b150,"Europ(GE)");
      RegisterUnitType(&DAT_1000b138,"Kreposnoi_pruss(GE)");
      RegisterUnitType(&DAT_1000b588,"Pikiner_evro(GE)");
      RegisterUnitType(&DAT_1000b158,"Center_Swesair(SV)");
      RegisterUnitType(&DAT_1000b140,"Krestian_Sved(SV)");
      pcVar15 = "Pikiner_evro(SV)";
LAB_10002bb0:
      RegisterUnitType(&DAT_1000b570,pcVar15);
    }
    else {
      if (iVar2 == 1) {
        RegisterUnitType(&DAT_1000b1b0,"Mortira_b(sp)");
        EnableUnit(1,&DAT_1000b1b0,0);
        EnableUnit(2,&DAT_1000b1b0,0);
        EnableUnit(3,&DAT_1000b1b0,0);
        EnableUnit(4,&DAT_1000b1b0,0);
        RegisterUnitType(&DAT_1000b1a8,"Mortira_b(AU)");
        EnableUnit(1,&DAT_1000b1a8,0);
        EnableUnit(2,&DAT_1000b1a8,0);
        EnableUnit(3,&DAT_1000b1a8,0);
        EnableUnit(4,&DAT_1000b1a8,0);
        RegisterUnitType(&DAT_1000b198,"Mortira_b(fr)");
        EnableUnit(1,&DAT_1000b198,0);
        EnableUnit(2,&DAT_1000b198,0);
        EnableUnit(3,&DAT_1000b198,0);
        EnableUnit(4,&DAT_1000b198,0);
        DAT_1000b398 = "FRANCE.0";
        DAT_1000b230 = (unsigned int *)DAT_1000a68c;
        DAT_1000b30c = "SPAIN.0";
        DAT_1000b308 = "AUSTRIA.0";
        RegisterUnitType(&DAT_1000b540,"Gusar_evro(fr)");
        RegisterUnitType(&DAT_1000b5c0,"Dragun(fr)");
        RegisterUnitType(&DAT_1000b5c8,"Dragun_France(fr)");
        RegisterUnitType(&DAT_1000b1d0,"Kirasir(fr)");
        RegisterUpgrade(&DAT_1000b468,"Dragun(fr)ATTACK");
        RegisterUpgrade(&DAT_1000b500,"Dragun(fr)SHIELD");
        RegisterUpgrade(&DAT_1000b510,"Dragun_France(fr)ATTACK");
        RegisterUpgrade(&DAT_1000b578,"Dragun_France(fr)SHIELD");
        RegisterUpgrade(&DAT_1000b240,"Kirasir(fr)ATTACK");
        RegisterUpgrade(&DAT_1000b2e8,"Kirasir(fr)SHIELD");
        EnableUnit(0,&DAT_1000b5c0,0);
        EnableUnit(0,&DAT_1000b5c8,0);
        EnableUnit(0,&DAT_1000b1d0,0);
        DisableUpgrade(0,&DAT_1000b468);
        DisableUpgrade(0,&DAT_1000b500);
        DisableUpgrade(0,&DAT_1000b510);
        DisableUpgrade(0,&DAT_1000b578);
        DisableUpgrade(0,&DAT_1000b240);
        DisableUpgrade(0,&DAT_1000b2e8);
        RegisterUnitType(&DAT_1000b3a8,"Kuznica_FR(fr)");
        RegisterUnitType(&DAT_1000b660,"Konushnia_FR(fr)");
        RegisterUnitType(&DAT_1000b568,"Konushnia_FR(fr)");
        RegisterUnitType(&DAT_1000b360,"NotrDam(fr)");
        RegisterUnitType(&DAT_1000b2e0,"Dip_korpus_FR(fr)");
        RegisterUnitType(&DAT_1000b598,"Dom_France(fr)");
        RegisterUnitType(&DAT_1000b3b8,"Rinok(fr)");
        RegisterUnitType(&DAT_1000b358,"Gusar_evro(fr)");
        RegisterUnitType(&DAT_1000b1d8,"Korolrv_Mus(fr)");
        RegisterUnitType(&DAT_1000b4e0,"Konni_Ricar(fr)");
        RegisterUnitType(&DAT_1000b548,"Center_France(fr)");
        RegisterUnitType(&DAT_1000b3b0,"Krestian_Sved(fr)");
        RegisterUnitType(&DAT_1000b1c8,"Pikiner_evro(fr)");
        RegisterUnitType(&DAT_1000b508,"Sveshenik_evro(fr)");
        RegisterUnitType(&DAT_1000b150,"Center_Spain(sp)");
        RegisterUnitType(&DAT_1000b138,"Kreposnoi_portugal(sp)");
        RegisterUnitType(&DAT_1000b588,"Pikiner_evro(sp)");
        RegisterUnitType(&DAT_1000b158,"Center_Austria(au)");
        RegisterUnitType(&DAT_1000b140,"Kreposnoi_pruss(au)");
        pcVar15 = "Pikiner_evro(au)";
        goto LAB_10002bb0;
      }
      if (iVar2 == 2) {
        RegisterUnitType(&DAT_1000b1b0,"Mortira_b(AU)");
        EnableUnit(1,&DAT_1000b1b0,0);
        EnableUnit(2,&DAT_1000b1b0,0);
        EnableUnit(3,&DAT_1000b1b0,0);
        EnableUnit(4,&DAT_1000b1b0,0);
        RegisterUnitType(&DAT_1000b1a8,"Mortira_b(RU)");
        EnableUnit(1,&DAT_1000b1a8,0);
        EnableUnit(2,&DAT_1000b1a8,0);
        EnableUnit(3,&DAT_1000b1a8,0);
        EnableUnit(4,&DAT_1000b1a8,0);
        RegisterUnitType(&DAT_1000b198,"Mortira_b(GE)");
        EnableUnit(1,&DAT_1000b198,0);
        EnableUnit(2,&DAT_1000b198,0);
        EnableUnit(3,&DAT_1000b198,0);
        EnableUnit(4,&DAT_1000b198,0);
        DAT_1000b398 = "GERMAN.0";
        DAT_1000b230 = (unsigned int *)DAT_1000a7bc;
        DAT_1000b30c = "AUSTRIA.0";
        DAT_1000b308 = "RUSSIA.0";
        RegisterUnitType(&DAT_1000b5c8,"Dragun_18(GE)");
        RegisterUnitType(&DAT_1000b1d0,"Kirasir(GE)");
        RegisterUpgrade(&DAT_1000b510,"Dragun_18(GE)ATTACK");
        RegisterUpgrade(&DAT_1000b578,"Dragun_18(GE)SHIELD");
        RegisterUpgrade(&DAT_1000b240,"Kirasir(GE)ATTACK");
        RegisterUpgrade(&DAT_1000b2e8,"Kirasir(GE)SHIELD");
        EnableUnit(0,&DAT_1000b5c8,0);
        EnableUnit(0,&DAT_1000b1d0,0);
        DisableUpgrade(0,&DAT_1000b510);
        DisableUpgrade(0,&DAT_1000b578);
        DisableUpgrade(0,&DAT_1000b240);
        DisableUpgrade(0,&DAT_1000b2e8);
        RegisterUnitType(&DAT_1000b3a8,"Kuznica(GE)");
        RegisterUnitType(&DAT_1000b660,"Konushnia_Swesair(GE)");
        RegisterUnitType(&DAT_1000b568,"Konushnia_Swesair(GE)");
        RegisterUnitType(&DAT_1000b360,"Cercov_Poland(GE)");
        RegisterUnitType(&DAT_1000b2e0,"Dip_korpus(GE)");
        RegisterUnitType(&DAT_1000b598,"Dom_Prussia(GE)");
        RegisterUnitType(&DAT_1000b3b8,"Rinok(GE)");
        RegisterUnitType(&DAT_1000b358,"Gusar_NEW(GE)");
        RegisterUnitType(&DAT_1000b1d8,"Dragun(GE)");
        RegisterUnitType(&DAT_1000b4e0,"Konni_Ricar(GE)");
        RegisterUnitType(&DAT_1000b508,"Sveshenik_evro(GE)");
        RegisterUnitType(&DAT_1000b548,"Europ(GE)");
        RegisterUnitType(&DAT_1000b3b0,"Kreposnoi_pruss(GE)");
        RegisterUnitType(&DAT_1000b1c8,"Pikiner_evro(GE)");
        RegisterUnitType(&DAT_1000b150,"Center_Austria(au)");
        RegisterUnitType(&DAT_1000b138,"Kreposnoi_pruss(au)");
        RegisterUnitType(&DAT_1000b588,"Pikiner_evro(au)");
        RegisterUnitType(&DAT_1000b158,"Russki_Center(RU)");
        RegisterUnitType(&DAT_1000b140,"Kreposnoi(RU)");
        pcVar15 = "Pik_rus(RU)";
LAB_10002652:
        RegisterUnitType(&DAT_1000b570,pcVar15);
      }
      else {
        if (iVar2 == 3) {
          RegisterUnitType(&DAT_1000b1b0,"Mortira_b(PL)");
          EnableUnit(1,&DAT_1000b1b0,0);
          EnableUnit(2,&DAT_1000b1b0,0);
          EnableUnit(3,&DAT_1000b1b0,0);
          EnableUnit(4,&DAT_1000b1b0,0);
          RegisterUnitType(&DAT_1000b1a8,"Mortira_b(AU)");
          EnableUnit(1,&DAT_1000b1a8,0);
          EnableUnit(2,&DAT_1000b1a8,0);
          EnableUnit(3,&DAT_1000b1a8,0);
          EnableUnit(4,&DAT_1000b1a8,0);
          RegisterUnitType(&DAT_1000b198,"Mortira_b(RU)");
          EnableUnit(1,&DAT_1000b198,0);
          EnableUnit(2,&DAT_1000b198,0);
          EnableUnit(3,&DAT_1000b198,0);
          EnableUnit(4,&DAT_1000b198,0);
          DAT_1000b398 = "RUSSIA.0";
          DAT_1000b230 = (unsigned int *)DAT_1000a954;
          DAT_1000b30c = "POLAND.0";
          DAT_1000b308 = "AUSTRIA.0";
          RegisterUnitType(&DAT_1000b5c8,"Dragun_18(RU)");
          RegisterUnitType(&DAT_1000b1d0,"Kirasir(RU)");
          RegisterUpgrade(&DAT_1000b510,"Dragun_18(RU)ATTACK");
          RegisterUpgrade(&DAT_1000b578,"Dragun_18(RU)SHIELD");
          RegisterUpgrade(&DAT_1000b240,"Kirasir(RU)ATTACK");
          RegisterUpgrade(&DAT_1000b2e8,"Kirasir(RU)SHIELD");
          EnableUnit(0,&DAT_1000b5c8,0);
          EnableUnit(0,&DAT_1000b1d0,0);
          DisableUpgrade(0,&DAT_1000b510);
          DisableUpgrade(0,&DAT_1000b578);
          DisableUpgrade(0,&DAT_1000b240);
          DisableUpgrade(0,&DAT_1000b2e8);
          RegisterUnitType(&DAT_1000b3a8,"Kuznica(RU)");
          RegisterUnitType(&DAT_1000b660,"konushnia(RU)");
          RegisterUnitType(&DAT_1000b568,"konushnia(RU)");
          RegisterUnitType(&DAT_1000b360,"Cerkov_RU(RU)");
          RegisterUnitType(&DAT_1000b2e0,"Dip_korpus_RU(RU)");
          RegisterUnitType(&DAT_1000b598,"ruskaia_izba(RU)");
          RegisterUnitType(&DAT_1000b3b8,"Rinok(RU)");
          RegisterUnitType(&DAT_1000b358,"Gusar_evro(RU)");
          RegisterUnitType(&DAT_1000b1d8,"Tiagoli_kozak(RU)");
          RegisterUnitType(&DAT_1000b4e0,"Tiagoli_koval_rus(RU)");
          RegisterUnitType(&DAT_1000b548,"Russki_Center(RU)");
          RegisterUnitType(&DAT_1000b3b0,"Kreposnoi(RU)");
          RegisterUnitType(&DAT_1000b1c8,"Pik_rus(RU)");
          RegisterUnitType(&DAT_1000b508,"Sveshenik_ukr(RU)");
          RegisterUnitType(&DAT_1000b150,"Center_Poland(PL)");
          RegisterUnitType(&DAT_1000b138,"Kreposnoi_evro(PL)");
          RegisterUnitType(&DAT_1000b588,"Pikiner_polan(PL)");
          RegisterUnitType(&DAT_1000b158,"Center_Austria(au)");
          RegisterUnitType(&DAT_1000b140,"Kreposnoi_pruss(au)");
          pcVar15 = "Pikiner_evro(au)";
          goto LAB_10002652;
        }
        if (iVar2 == 4) {
          RegisterUnitType(&DAT_1000b1b0,"Mortira_b(AU)");
          EnableUnit(1,&DAT_1000b1b0,0);
          EnableUnit(2,&DAT_1000b1b0,0);
          EnableUnit(3,&DAT_1000b1b0,0);
          EnableUnit(4,&DAT_1000b1b0,0);
          RegisterUnitType(&DAT_1000b1a8,"Mortira_b(GE)");
          EnableUnit(1,&DAT_1000b1a8,0);
          EnableUnit(2,&DAT_1000b1a8,0);
          EnableUnit(3,&DAT_1000b1a8,0);
          EnableUnit(4,&DAT_1000b1a8,0);
          RegisterUnitType(&DAT_1000b198,"Mortira_b(SA)");
          EnableUnit(1,&DAT_1000b198,0);
          EnableUnit(2,&DAT_1000b198,0);
          EnableUnit(3,&DAT_1000b198,0);
          EnableUnit(4,&DAT_1000b198,0);
          DAT_1000b398 = "SAKSINIA.0";
          DAT_1000b230 = (unsigned int *)DAT_1000ab18;
          DAT_1000b30c = "AUSTRIA.0";
          DAT_1000b308 = "GERMAN.0";
          RegisterUnitType(&DAT_1000b540,"Gusar_evro(SA)");
          RegisterUnitType(&DAT_1000b5c8,"Dragun_18(SA)");
          RegisterUnitType(&DAT_1000b1d0,"Kirasir(SA)");
          RegisterUpgrade(&DAT_1000b5a0,"Gusar_evro(SA)ATTACK");
          RegisterUpgrade(&DAT_1000b580,"Gusar_evro(SA)SHIELD");
          RegisterUpgrade(&DAT_1000b510,"Dragun_18(SA)ATTACK");
          RegisterUpgrade(&DAT_1000b578,"Dragun_18(SA)SHIELD");
          RegisterUpgrade(&DAT_1000b240,"Kirasir(SA)ATTACK");
          RegisterUpgrade(&DAT_1000b2e8,"Kirasir(SA)SHIELD");
          EnableUnit(0,&DAT_1000b540,0);
          EnableUnit(0,&DAT_1000b5c8,0);
          EnableUnit(0,&DAT_1000b1d0,0);
          DisableUpgrade(0,&DAT_1000b5a0);
          DisableUpgrade(0,&DAT_1000b580);
          DisableUpgrade(0,&DAT_1000b510);
          DisableUpgrade(0,&DAT_1000b578);
          DisableUpgrade(0,&DAT_1000b240);
          DisableUpgrade(0,&DAT_1000b2e8);
          RegisterUnitType(&DAT_1000b3a8,"Kuznica(SA)");
          RegisterUnitType(&DAT_1000b660,"Konushnia_Swesair(SA)");
          RegisterUnitType(&DAT_1000b568,"Konushnia_Swesair(SA)");
          RegisterUnitType(&DAT_1000b360,"Cercov_Poland(SA)");
          RegisterUnitType(&DAT_1000b2e0,"Dip_korpus(SA)");
          RegisterUnitType(&DAT_1000b598,"Dom_Saksona(SA)");
          RegisterUnitType(&DAT_1000b3b8,"Rinok(SA)");
          RegisterUnitType(&DAT_1000b358,"Kiracir_Sacson(SA)");
          RegisterUnitType(&DAT_1000b1d8,"Dragun(SA)");
          RegisterUnitType(&DAT_1000b4e0,"Konni_Ricar(SA)");
          RegisterUnitType(&DAT_1000b548,"Center_Sacson(SA)");
          RegisterUnitType(&DAT_1000b3b0,"Kreposnoi_pruss(SA)");
          RegisterUnitType(&DAT_1000b1c8,"Pikiner_evro(SA)");
          RegisterUnitType(&DAT_1000b508,"Sveshenik_evro(SA)");
          RegisterUnitType(&DAT_1000b150,"Center_Austria(au)");
          RegisterUnitType(&DAT_1000b138,"Kreposnoi_pruss(au)");
          RegisterUnitType(&DAT_1000b588,"Pikiner_evro(au)");
          RegisterUnitType(&DAT_1000b158,"Europ(GE)");
          RegisterUnitType(&DAT_1000b140,"Kreposnoi_pruss(GE)");
          pcVar15 = "Pikiner_evro(GE)";
          goto LAB_10002bb0;
        }
        if (iVar2 == 5) {
          RegisterUnitType(&DAT_1000b1b0,"Mortira_b(AU)");
          EnableUnit(1,&DAT_1000b1b0,0);
          EnableUnit(2,&DAT_1000b1b0,0);
          EnableUnit(3,&DAT_1000b1b0,0);
          EnableUnit(4,&DAT_1000b1b0,0);
          RegisterUnitType(&DAT_1000b1a8,"Mortira_b(SA)");
          EnableUnit(1,&DAT_1000b1a8,0);
          EnableUnit(2,&DAT_1000b1a8,0);
          EnableUnit(3,&DAT_1000b1a8,0);
          EnableUnit(4,&DAT_1000b1a8,0);
          RegisterUnitType(&DAT_1000b198,"Mortira_b(SV)");
          EnableUnit(1,&DAT_1000b198,0);
          EnableUnit(2,&DAT_1000b198,0);
          EnableUnit(3,&DAT_1000b198,0);
          EnableUnit(4,&DAT_1000b198,0);
          DAT_1000b398 = "SVEDEN.0";
          DAT_1000b230 = (unsigned int *)DAT_1000ad04;
          DAT_1000b30c = "AUSTRIA.0";
          DAT_1000b308 = "SAKSINIA.0";
          RegisterUnitType(&DAT_1000b5c8,"Dragun_18(SV)");
          RegisterUnitType(&DAT_1000b1d0,"Kirasir(SV)");
          RegisterUpgrade(&DAT_1000b510,"Dragun_18(SV)ATTACK");
          RegisterUpgrade(&DAT_1000b578,"Dragun_18(SV)SHIELD");
          RegisterUpgrade(&DAT_1000b240,"Kirasir(SV)ATTACK");
          RegisterUpgrade(&DAT_1000b2e8,"Kirasir(SV)SHIELD");
          EnableUnit(0,&DAT_1000b5c8,0);
          EnableUnit(0,&DAT_1000b1d0,0);
          DisableUpgrade(0,&DAT_1000b510);
          DisableUpgrade(0,&DAT_1000b578);
          DisableUpgrade(0,&DAT_1000b240);
          DisableUpgrade(0,&DAT_1000b2e8);
          RegisterUnitType(&DAT_1000b3a8,"Kuznica(SV)");
          RegisterUnitType(&DAT_1000b660,"Konushnia_Swesair(SV)");
          RegisterUnitType(&DAT_1000b568,"Konushnia_Swesair(SV)");
          RegisterUnitType(&DAT_1000b360,"Kostel(SV)");
          RegisterUnitType(&DAT_1000b2e0,"Dip_korpus(SV)");
          RegisterUnitType(&DAT_1000b598,"Dom_Swisair(SV)");
          RegisterUnitType(&DAT_1000b3b8,"Rinok(SV)");
          RegisterUnitType(&DAT_1000b358,"Gusar_evro(SV)");
          RegisterUnitType(&DAT_1000b1d8,"Dragun(SV)");
          RegisterUnitType(&DAT_1000b4e0,"Reitar_Shwec(SV)");
          RegisterUnitType(&DAT_1000b548,"Center_Swesair(SV)");
          RegisterUnitType(&DAT_1000b3b0,"Krestian_Sved(SV)");
          RegisterUnitType(&DAT_1000b1c8,"Pikiner_evro(SV)");
          RegisterUnitType(&DAT_1000b508,"Sveshenik_evro(SV)");
          RegisterUnitType(&DAT_1000b150,"Center_Austria(au)");
          RegisterUnitType(&DAT_1000b138,"Kreposnoi_pruss(au)");
          RegisterUnitType(&DAT_1000b588,"Pikiner_evro(au)");
          RegisterUnitType(&DAT_1000b158,"Center_Sacson(SA)");
          RegisterUnitType(&DAT_1000b140,"Kreposnoi_pruss(SA)");
          pcVar15 = "Pikiner_evro(SA)";
          goto LAB_10002652;
        }
      }
    }
    puVar4 = FUN_10005a00((unsigned int *)DAT_1000a364,DAT_1000b230);
    InitialUpgrade("GErase",puVar4);
    puVar4 = FUN_10005a00((unsigned int *)"KUZ03",DAT_1000b230);
    InitialUpgrade("GErase",puVar4);
    puVar4 = FUN_10005a00((unsigned int *)"KUZ04",DAT_1000b230);
    InitialUpgrade("GErase",puVar4);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b548,4,&DAT_1000b378,0);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b548,3,&DAT_1000b380,0);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b150,1,&DAT_1000b368,0);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b158,2,&DAT_1000b370,0);
    DAT_1000b148 = 0;
    if (0 < DAT_1000b2f8 + DAT_1000b168 * 10) {
      do {
        CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b1c8,4,&DAT_1000b2a8,0);
        SelectUnits(&DAT_1000b1f0,0);
        SelSendAndKill(4,&DAT_1000b378,0,0);
        CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b1c8,3,&DAT_1000b420,0);
        SelectUnits(&DAT_1000b1f0,0);
        SelSendAndKill(3,&DAT_1000b380,0,0);
        CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b588,1,&DAT_1000b328,0);
        SelectUnits(&DAT_1000b1f0,0);
        SelSendAndKill(1,&DAT_1000b368,0,0);
        CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b570,2,&DAT_1000b330,0);
        SelectUnits(&DAT_1000b1f0,0);
        SelSendAndKill(2,&DAT_1000b370,0,0);
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b2f8 + DAT_1000b168 * 10);
    }
    DAT_1000b148 = 0;
    if (0 < DAT_1000b2f8) {
      do {
        CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3b0,4,&DAT_1000b2a8,0);
        CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3b0,3,&DAT_1000b420,0);
        CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b138,1,&DAT_1000b328,0);
        CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b140,2,&DAT_1000b330,0);
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b2f8);
    }
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3a8,6,&DAT_1000b3c8,0);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3a8,6,&DAT_1000b248,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3a8,6,&DAT_1000b3d8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b660,6,&DAT_1000b258,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b660,6,&DAT_1000b3e8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b568,6,&DAT_1000b270,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b568,6,&DAT_1000b3f0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b360,6,&DAT_1000b288,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b3a0);
    DAT_1000b148 = 0;
    if (0 < DAT_1000b340) {
      do {
        ProduceUnitFast(&DAT_1000b3a0,&DAT_1000b508,&DAT_1000b110,0);
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b340);
    }
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b360,6,&DAT_1000b3f8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b1a0);
    DAT_1000b148 = 0;
    if (0 < DAT_1000b340) {
      do {
        ProduceUnitFast(&DAT_1000b1a0,&DAT_1000b508,&DAT_1000b2f0,0);
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b340);
    }
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b2e0,6,&DAT_1000b408,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3b8,6,&DAT_1000b298,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3b8,6,&DAT_1000b410,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b3b8,6,&DAT_1000b3e0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b548,6,&DAT_1000b388,0);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b2a0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4c8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4d0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4d8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b480,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b488,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b490,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b498,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4a0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b590);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4a8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4b0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4b8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b668);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b4c0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b478,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b418,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b598,6,&DAT_1000b5d0,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b670);
    DAT_1000b148 = 0;
    do {
      CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b4e0,0,&DAT_1000b450,0);
      RemoveGroup(&DAT_1000b1f0,&DAT_1000b1f8);
      DAT_1000b148 = DAT_1000b148 + 1;
    } while (DAT_1000b148 < 5);
    SelectUnits(&DAT_1000b1f8,0);
    SelSendTo(0,&DAT_1000b450,0x53,0);
    DAT_1000b148 = 0;
    do {
      CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b1d8,0,&DAT_1000b458,0);
      RemoveGroup(&DAT_1000b1f0,&DAT_1000b200);
      DAT_1000b148 = DAT_1000b148 + 1;
    } while (DAT_1000b148 < 5);
    SelectUnits(&DAT_1000b200,0);
    SelSendTo(0,&DAT_1000b458,0x40,0);
    DAT_1000b148 = 0;
    do {
      CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b358,0,&DAT_1000b460,0);
      RemoveGroup(&DAT_1000b1f0,&DAT_1000b208);
      DAT_1000b148 = DAT_1000b148 + 1;
    } while (DAT_1000b148 < 5);
    SelectUnits(&DAT_1000b208,0);
    SelSendTo(0,&DAT_1000b460,0x2d,0);
    SetResource(6,4,0);
    SetResource(6,1,0);
    StartAI(1,DAT_1000b30c,1,0,1,DAT_1000b168);
    StartAI(2,DAT_1000b308,1,0,1,DAT_1000b168);
    StartAI(3,DAT_1000b398,1,0,1,DAT_1000b168);
    StartAI(4,DAT_1000b398,1,0,1,DAT_1000b168);
    SetLightSpot(&DAT_1000b378,1,3);
    SetLightSpot(&DAT_1000b380,1,4);
    SelectUnits(&DAT_1000b348,0);
    DoNotUseSelInAI(0);
    SelErase(0);
    SelectUnits(&DAT_1000b300,0);
    DoNotUseSelInAI(0);
    SelErase(0);
    ShowPage("#PAGE0");
    SetTrigg(99,0);
  }
  cVar1 = TimerDone(2);
  if (cVar1 != '\0') {
    DAT_1000b344 = DAT_1000b344 + DAT_1000b168;
    if (DAT_1000b168 < 1) {
      DAT_1000b320 = DAT_1000b320 + 1000;
    }
    else {
      DAT_1000b320 = DAT_1000b344 * 100;
    }
    SetTrigg(0x1a,1);
    iVar2 = GetResource(5,3);
    if (iVar2 < 10000) {
      SetResource(5,3,1000000);
    }
    iVar2 = GetResource(5,1);
    if (iVar2 < 10000) {
      SetResource(5,1,1000000);
    }
    iVar2 = GetResource(6,3);
    if (iVar2 < 10000) {
      SetResource(6,3,1000000);
    }
    iVar2 = GetResource(6,1);
    if (iVar2 < 10000) {
      SetResource(6,1,1000000);
    }
    RunTimer(2,30000);
  }
  cVar1 = Trigg(0x14);
  if (cVar1 == '\0') {
    cVar1 = Trigg(0x15);
    if (cVar1 != '\0') {
      DAT_1000b118 = (DAT_1000b344 / 2) * 5;
      SetTrigg(0x15,0);
      uVar3 = 0x16;
      goto LAB_1000351a;
    }
    cVar1 = Trigg(0x16);
    if (cVar1 != '\0') {
      DAT_1000b118 = (DAT_1000b344 / 3) * 10;
      SetTrigg(0x16,0);
      uVar3 = 0x17;
      goto LAB_1000351a;
    }
    cVar1 = Trigg(0x17);
    if (cVar1 == '\0') {
      cVar1 = Trigg(0x18);
      if (cVar1 != '\0') {
        uVar17 = 1;
        uVar3 = 0x14;
        DAT_1000b118 = (DAT_1000b344 / 3) * 0x14;
        goto LAB_100035c8;
      }
    }
    else {
      uVar17 = 0;
      uVar3 = 0x17;
      DAT_1000b118 = (DAT_1000b344 / 2) * 10;
LAB_100035c8:
      SetTrigg(uVar3,uVar17);
    }
  }
  else {
    DAT_1000b118 = DAT_1000b344 % 10 + 5;
    SetTrigg(0x14,0);
    uVar3 = 0x15;
LAB_1000351a:
    SetTrigg(uVar3,1);
  }
  iVar2 = GetUnitsAmount1(&DAT_1000b288,&DAT_1000b110);
  iVar5 = GetTotalAmount0(&DAT_1000b110);
  if (iVar2 < iVar5) {
    SelectUnits(&DAT_1000b110,0);
    SelSendTo(6,&DAT_1000b448,0x30,0);
  }
  iVar2 = GetUnitsAmount1(&DAT_1000b3f8,&DAT_1000b2f0);
  iVar5 = GetTotalAmount0(&DAT_1000b2f0);
  if (iVar2 < iVar5) {
    SelectUnits(&DAT_1000b2f0,0);
    SelSendTo(6,&DAT_1000b5a8,0x30,0);
  }
  cVar1 = TimerDone(1);
  if (((cVar1 != '\0') && (cVar1 = Trigg(4), pcVar14 = (void*)&SetTrigg, cVar1 != '\0')) &&
     (cVar1 = Trigg(5), pcVar14 = (void*)&SetTrigg, cVar1 != '\0')) {
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b390,6,&DAT_1000b2a8,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b1e0);
    SelectUnits(&DAT_1000b1e0,0);
    SelSendTo(6,&DAT_1000b520,0x40,0);
    DAT_1000b148 = 0;
    do {
      CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b1e8,6,&DAT_1000b2a8,0);
      RemoveGroup(&DAT_1000b1f0,&DAT_1000b128);
      DAT_1000b148 = DAT_1000b148 + 1;
    } while (DAT_1000b148 < 5);
    SelectUnits(&DAT_1000b128,0);
    SelSendTo(6,&DAT_1000b528,0x40,0);
    SetTrigg(2,1);
    SetTrigg(5,0);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 != '\0')) {
    DAT_1000b148 = 0;
    if (0 < DAT_1000b344) {
      do {
        iVar2 = GetTotalAmount0(&DAT_1000b5f0);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b280,5,&DAT_1000b430,0x80);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b5f0);
        }
        iVar2 = GetTotalAmount0(&DAT_1000b170);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b658,5,&DAT_1000b430,0x80);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b170);
        }
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b344);
    }
    SelectUnits(&DAT_1000b5f0,0);
    SelSendTo(5,&DAT_1000b5f8,
              (int)(char)(DAT_1000b344 / 2) + '@',0);
    SelectUnits(&DAT_1000b170,0);
    SelSendTo(5,&DAT_1000b5f8,
              (int)(char)(DAT_1000b344 / 3) + '@',0);
    cVar1 = Trigg(8);
    if (cVar1 != '\0') {
      SelectUnits(&DAT_1000b5f0,0);
      SelSendAndKill(5,&DAT_1000b5f8,
                     (int)(char)(DAT_1000b344 / 2) + '@',
                     0);
      SelectUnits(&DAT_1000b170,0);
      SelSendAndKill(5,&DAT_1000b5f8,
                     (int)(char)(DAT_1000b344 / 3) + '@',
                     0);
    }
    cVar1 = TimerDone(3);
    if (cVar1 != '\0') {
      DAT_1000b344 = DAT_1000b344 + DAT_1000b168;
    }
    FreeTimer(3);
    RunTimer(3,1000);
    RunTimer(4,0xfa);
    SetTrigg(7,0);
    SetTrigg(8,1);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(9), cVar1 != '\0')) {
    DAT_1000b148 = 0;
    if (0 < DAT_1000b344) {
      do {
        iVar2 = GetTotalAmount0(&DAT_1000b5e0);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b280,5,&DAT_1000b430,0x80);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b5e0);
        }
        iVar2 = GetTotalAmount0(&DAT_1000b180);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b658,5,&DAT_1000b430,0x80);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b180);
        }
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b344);
    }
    SelectUnits(&DAT_1000b5e0,0);
    SelSendTo(5,&DAT_1000b5f8,0x20,0);
    SelSendTo(5,&DAT_1000b220,0x40,2);
    SelSendTo(5,&DAT_1000b228,0x80,2);
    SelSendTo(5,&DAT_1000b218,200,2);
    SelectUnits(&DAT_1000b180,0);
    SelSendTo(5,&DAT_1000b5f8,0x20,0);
    SelSendTo(5,&DAT_1000b220,0x40,2);
    SelSendTo(5,&DAT_1000b228,0x80,2);
    SelSendTo(5,&DAT_1000b218,200,2);
    cVar1 = Trigg(8);
    if (cVar1 != '\0') {
      SelectUnits(&DAT_1000b5e0,0);
      SelSendAndKill(5,&DAT_1000b5f8,0x20,0);
      SelSendAndKill(5,&DAT_1000b220,0x40,2);
      SelSendAndKill(5,&DAT_1000b228,0x80,2);
      SelSendAndKill(5,&DAT_1000b218,200,2);
      SelectUnits(&DAT_1000b180,0);
      SelSendAndKill(5,&DAT_1000b5f8,0x20,0);
      SelSendAndKill(5,&DAT_1000b220,0x40,2);
      SelSendAndKill(5,&DAT_1000b228,0x80,2);
      SelSendAndKill(5,&DAT_1000b218,200,2);
    }
    cVar1 = TimerDone(3);
    if (cVar1 != '\0') {
      DAT_1000b344 = DAT_1000b344 + DAT_1000b168;
    }
    FreeTimer(3);
    RunTimer(3,1000);
    RunTimer(4,0xfa);
    SetTrigg(9,0);
  }
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b550,0), 0 < iVar2)) {
    cVar1 = Trigg(0x33);
    if (cVar1 != '\0') {
      RunTimer(5,0x32);
    }
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    SelectUnits(&DAT_1000b590,0);
    SelChangeNation(6,0);
    SelectUnits(&DAT_1000b2b8,0);
    SetTrigg(1,0);
  }
  cVar1 = Trigg(0x33);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    ShowPage("#PAGE01");
    SetTrigg(0x33,0);
  }
  cVar1 = Trigg(1);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b550,0), iVar2 == 0)) {
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    SelectUnits(&DAT_1000b590,0);
    SelChangeNation(0,6);
    SelectUnits(&DAT_1000b2b8,0);
    SetTrigg(1,1);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b298,0), 0 < iVar2)) {
    ShowPageParam("#PAGE1",DAT_1000b320);
    SetTrigg(0x1a,0);
  }
  cVar1 = Trigg(2);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(5), cVar1 == '\0')) &&
      (iVar2 = GetUnitsAmount1(&DAT_1000b298,&DAT_1000b1e0), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_1000b298,0), 0 < iVar2)) {
    cVar1 = AskQuestion("#PAGE2");
    if (cVar1 != '\0') {
      SelectUnits(&DAT_1000b128,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelChangeNation(6,0);
      SetLightSpot(&DAT_1000b3d0,1,1);
      SetTrigg(3,0);
      SetTrigg(4,0);
      SetTrigg(5,1);
    }
    SetTrigg(2,0);
  }
  cVar1 = Trigg(2);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b298,0), iVar2 == 0)) {
    SetTrigg(2,1);
  }
  cVar1 = Trigg(3);
  if (cVar1 == '\0') {
    iVar2 = GetUnitsAmount1(&DAT_1000b5b0,&DAT_1000b1e0);
    iVar5 = GetUnitsAmount1(&DAT_1000b3d0,&DAT_1000b1e0);
    if (0 < iVar2 + iVar5) {
      SaveSelectedUnits(0,&DAT_1000b2b8,0);
      ClearSelection(0);
      SelectUnits(&DAT_1000b128,0);
      SelectUnits(&DAT_1000b1e0,1);
      SelChangeNation(0,6);
      SelectUnits(&DAT_1000b2b8,0);
      ClearLightSpot(1);
      AddResource(0,1,DAT_1000b320);
      ShowPage("#PAGE3");
      SetTrigg(3,1);
    }
  }
  cVar1 = Trigg(4);
  if ((cVar1 == '\0') && (cVar1 = Trigg(3), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_1000b128);
    iVar5 = GetTotalAmount0(&DAT_1000b1e0);
    if (iVar2 + iVar5 == 0) {
      RunTimer(1,DAT_1000b168 * 1000);
      SetTrigg(3,1);
      SetTrigg(4,1);
    }
    else {
      cVar1 = Trigg(3);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_1000b128,0);
        SelectUnits(&DAT_1000b1e0,1);
        SelSendTo(6,&DAT_1000b2b0,0,0);
        cVar1 = Trigg(8);
        if (cVar1 == '\0') {
          SetTrigg(7,1);
        }
      }
    }
  }
  cVar1 = Trigg(4);
  if (((cVar1 == '\0') && (cVar1 = Trigg(3), cVar1 == '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_1000b1e0), iVar2 == 0)) {
    RunTimer(1,DAT_1000b168 * 2000 + 5000);
    iVar2 = GetTotalAmount0(&DAT_1000b128);
    if (iVar2 < 1) {
      ShowPage("#PAGE4B");
    }
    else {
      iVar2 = GetTotalAmount0(&DAT_1000b128);
      AddResource(0,3,iVar2 * 200);
      iVar2 = GetTotalAmount0(&DAT_1000b128);
      ShowPageParam("#PAGE4",iVar2 * 200);
    }
    ClearLightSpot(1);
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    ClearSelection(5);
    SelectUnits(&DAT_1000b128,0);
    SelErase(0);
    SelectUnits(&DAT_1000b128,0);
    SelErase(5);
    RemoveGroup(&DAT_1000b128,&DAT_1000b1f8);
    SelectUnits(&DAT_1000b2b8,0);
    SetTrigg(3,1);
    SetTrigg(4,1);
    SetTrigg(7,1);
  }
  cVar1 = Trigg(4);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount2(&DAT_1000b4e8,&DAT_1000b1e8,6), 0 < iVar2)) {
    SelectUnitsInZone(&DAT_1000b4e8,6,0);
    SelErase(6);
    SelectUnits(&DAT_1000b128,0);
    SelectUnits(&DAT_1000b1e0,1);
    SelSendTo(6,&DAT_1000b2b0,0,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount2(&DAT_1000b4e8,&DAT_1000b390,6), 0 < iVar2)) {
    SelectUnitsInZone(&DAT_1000b4e8,6,0);
    SelErase(6);
    SelectUnits(&DAT_1000b128,0);
    SelSendTo(6,&DAT_1000b2b0,0,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 == '\0') && (cVar1 = Trigg(8), cVar1 != '\0')) {
    iVar2 = GetUnitsAmount1(&DAT_1000b640,&DAT_1000b128);
    iVar5 = GetUnitsAmount1(&DAT_1000b630,&DAT_1000b128);
    iVar6 = GetUnitsAmount1(&DAT_1000b620,&DAT_1000b128);
    iVar7 = GetUnitsAmount1(&DAT_1000b610,&DAT_1000b128);
    iVar8 = GetUnitsAmount1(&DAT_1000b640,&DAT_1000b1e0);
    iVar9 = GetUnitsAmount1(&DAT_1000b630,&DAT_1000b1e0);
    iVar10 = GetUnitsAmount1(&DAT_1000b620,&DAT_1000b1e0);
    iVar11 = GetUnitsAmount1(&DAT_1000b610,&DAT_1000b1e0);
    if (0 < iVar2 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11) {
      RemoveGroup(&DAT_1000b5e0,&DAT_1000b5f0);
      RemoveGroup(&DAT_1000b180,&DAT_1000b170);
      SetTrigg(8,0);
    }
  }
  cVar1 = Trigg(8);
  if (((cVar1 == '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) &&
     (cVar1 = TimerDone(4), cVar1 != '\0')) {
    CreateZoneNearGroup(&DAT_1000b5e8,&DAT_1000b450,&DAT_1000b1e0,100);
    SelectUnits(&DAT_1000b5f0,0);
    SelectUnits(&DAT_1000b170,1);
    SelSendAndKill(5,&DAT_1000b5e8,0x80,0);
    SetTrigg(9,1);
    RunTimer(4,0xfa);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_1000b170);
    iVar5 = GetTotalAmount0(&DAT_1000b5f0);
    if (iVar2 + iVar5 == 0) {
      if (DAT_1000b118 == 0) {
        DAT_1000b118 = 5;
      }
      ShowPageParam("#PAGE5",DAT_1000b118);
      AddResource(0,1,DAT_1000b118);
      cVar1 = Trigg(8);
      if (cVar1 != '\0') {
        ShowPageParam("#PAGE6",(DAT_1000b320 / 0x14) * 10);
        AddResource(0,1,(DAT_1000b320 / 0x14) * 10);
      }
      SetTrigg(7,1);
    }
  }
  cVar1 = Trigg(0x37);
  if (((cVar1 != '\0') && (cVar1 = Trigg(3), cVar1 != '\0')) &&
     ((cVar1 = Trigg(8), cVar1 != '\0' && (cVar1 = Trigg(9), cVar1 == '\0')))) {
    iVar2 = GetTotalAmount0(&DAT_1000b180);
    iVar5 = GetTotalAmount0(&DAT_1000b5e0);
    if (iVar2 + iVar5 == 0) {
      if (DAT_1000b118 == 0) {
        DAT_1000b118 = 5;
      }
      ShowPageParam("#PAGE5",DAT_1000b118);
      AddResource(0,1,DAT_1000b118);
      cVar1 = Trigg(8);
      if (cVar1 != '\0') {
        ShowPageParam("#PAGE6",(DAT_1000b320 / 0x14) * 10);
        AddResource(0,1,(DAT_1000b320 / 0x14) * 10);
      }
      SetTrigg(9,1);
    }
  }
  cVar1 = TimerDone(0xb);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0xe), cVar1 != '\0')) &&
     (cVar1 = Trigg(0xf), cVar1 != '\0')) {
    CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b390,6,&DAT_1000b420,0);
    RemoveGroup(&DAT_1000b1f0,&DAT_1000b310);
    SelectUnits(&DAT_1000b310,0);
    SelSendTo(6,&DAT_1000b530,0x40,0);
    DAT_1000b148 = 0;
    do {
      CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b1e8,6,&DAT_1000b420,0);
      RemoveGroup(&DAT_1000b1f0,&DAT_1000b188);
      DAT_1000b148 = DAT_1000b148 + 1;
    } while (DAT_1000b148 < 5);
    SelectUnits(&DAT_1000b188,0);
    SelSendTo(6,&DAT_1000b538,0x40,0);
    SetTrigg(0xf,0);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x11), cVar1 != '\0')) {
    DAT_1000b148 = 0;
    if (0 < DAT_1000b344) {
      do {
        iVar2 = GetTotalAmount0(&DAT_1000b618);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b280,5,&DAT_1000b438,0x40);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b618);
        }
        iVar2 = GetTotalAmount0(&DAT_1000b178);
        if (iVar2 < DAT_1000b344) {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b658,5,&DAT_1000b438,0x40);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b178);
        }
        DAT_1000b148 = DAT_1000b148 + 1;
      } while (DAT_1000b148 < DAT_1000b344);
    }
    SelectUnits(&DAT_1000b618,0);
    SelSendTo(5,&DAT_1000b638,
              (int)(char)(DAT_1000b344 / 2) + '@',0);
    SelectUnits(&DAT_1000b178,0);
    SelSendTo(5,&DAT_1000b638,
              (int)(char)(DAT_1000b344 / 3) + '@',0);
    cVar1 = Trigg(0x12);
    if (cVar1 != '\0') {
      SelectUnits(&DAT_1000b618,0);
      SelSendAndKill(5,&DAT_1000b638,
                     (int)(char)(DAT_1000b344 / 2) + '@',
                     0);
      SelectUnits(&DAT_1000b178,0);
      SelSendAndKill(5,&DAT_1000b638,
                     (int)(char)(DAT_1000b344 / 3) + '@',
                     0);
    }
    cVar1 = TimerDone(3);
    if (cVar1 != '\0') {
      DAT_1000b344 = DAT_1000b344 + DAT_1000b168;
    }
    FreeTimer(3);
    RunTimer(3,1000);
    RunTimer(0xe,0xfa);
    SetTrigg(0x11,0);
    SetTrigg(0x12,1);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x13), cVar1 != '\0')) {
    iVar2 = GetUnitsAmount0(&DAT_1000b650,0);
    iVar5 = GetUnitsAmount0(&DAT_1000b440,0);
    if (iVar2 + iVar5 < DAT_1000b344 * 2 + 10) {
      DAT_1000b148 = 0;
      if (0 < DAT_1000b344) {
        do {
          iVar2 = GetTotalAmount0(&DAT_1000b600);
          if (iVar2 < DAT_1000b344) {
            CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b280,5,&DAT_1000b440,0xc0);
            RemoveGroup(&DAT_1000b1f0,&DAT_1000b600);
          }
          iVar2 = GetTotalAmount0(&DAT_1000b190);
          if (iVar2 < DAT_1000b344) {
            CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b658,5,&DAT_1000b440,0xc0);
            RemoveGroup(&DAT_1000b1f0,&DAT_1000b190);
          }
          DAT_1000b148 = DAT_1000b148 + 1;
        } while (DAT_1000b148 < DAT_1000b344);
      }
      SelectUnits(&DAT_1000b600,0);
      SelSendTo(5,&DAT_1000b650,0x80,0);
      SelectUnits(&DAT_1000b190,0);
      SelSendTo(5,&DAT_1000b650,0x80,0);
      cVar1 = Trigg(0x12);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_1000b600,0);
        SelSendAndKill(5,&DAT_1000b650,0x80,0);
        SelectUnits(&DAT_1000b190,0);
        SelSendAndKill(5,&DAT_1000b650,0x80,0);
      }
      cVar1 = TimerDone(3);
      if (cVar1 != '\0') {
        DAT_1000b344 = DAT_1000b344 + DAT_1000b168;
      }
      FreeTimer(3);
      RunTimer(3,1000);
      RunTimer(0xe,0xfa);
      SetTrigg(0x13,0);
    }
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b560,0), 0 < iVar2)) {
    cVar1 = Trigg(0x34);
    if (cVar1 != '\0') {
      RunTimer(6,0x32);
    }
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    SelectUnits(&DAT_1000b668,0);
    SelChangeNation(6,0);
    SelectUnits(&DAT_1000b2b8,0);
    SetTrigg(0xb,0);
  }
  cVar1 = Trigg(0x34);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(6), cVar1 != '\0')) {
    ShowPage("#PAGE02");
    SetTrigg(0x34,0);
  }
  cVar1 = Trigg(0xb);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b560,0), iVar2 == 0)) {
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    SelectUnits(&DAT_1000b668,0);
    SelChangeNation(0,6);
    SelectUnits(&DAT_1000b2b8,0);
    SetTrigg(0xb,1);
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b410,0), 0 < iVar2)) {
    ShowPageParam("#PAGE1",DAT_1000b320);
    SetTrigg(0x1a,0);
  }
  cVar1 = Trigg(0xf);
  if ((((cVar1 == '\0') && (cVar1 = Trigg(0xc), cVar1 != '\0')) &&
      (iVar2 = GetUnitsAmount1(&DAT_1000b410,&DAT_1000b310), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount0(&DAT_1000b410,0), 0 < iVar2)) {
    cVar1 = AskQuestion("#PAGE7");
    if (cVar1 != '\0') {
      SelectUnits(&DAT_1000b188,0);
      SelectUnits(&DAT_1000b310,1);
      SelChangeNation(6,0);
      SetLightSpot(&DAT_1000b400,1,2);
      SetTrigg(0xd,0);
      SetTrigg(0xe,0);
      SetTrigg(0xf,1);
    }
    SetTrigg(0xc,0);
  }
  cVar1 = Trigg(0xc);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b410,0), iVar2 == 0)) {
    SetTrigg(0xc,1);
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount1(&DAT_1000b400,&DAT_1000b310), 0 < iVar2)) {
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    SelectUnits(&DAT_1000b188,0);
    SelectUnits(&DAT_1000b310,1);
    SelChangeNation(0,6);
    SelectUnits(&DAT_1000b2b8,0);
    ClearLightSpot(2);
    AddResource(0,1,DAT_1000b320);
    ShowPage("#PAGE8");
    SetTrigg(0xd,1);
  }
  cVar1 = Trigg(0xe);
  if ((cVar1 == '\0') && (cVar1 = Trigg(0xd), cVar1 != '\0')) {
    iVar2 = GetTotalAmount0(&DAT_1000b188);
    iVar5 = GetTotalAmount0(&DAT_1000b310);
    if (iVar2 + iVar5 == 0) {
      RunTimer(0xb,DAT_1000b168 * 1000);
      SetTrigg(0xd,1);
      SetTrigg(0xe,1);
    }
    else {
      cVar1 = Trigg(0xd);
      if (cVar1 != '\0') {
        SelectUnits(&DAT_1000b188,0);
        SelectUnits(&DAT_1000b310,1);
        SelSendTo(6,&DAT_1000b428,0,0);
        cVar1 = Trigg(0x12);
        if (cVar1 == '\0') {
          SetTrigg(0x11,1);
        }
      }
    }
  }
  cVar1 = Trigg(0xe);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0xd), cVar1 == '\0')) &&
     (iVar2 = GetTotalAmount0(&DAT_1000b310), iVar2 == 0)) {
    RunTimer(0xb,DAT_1000b168 * 2000 + 5000);
    iVar2 = GetTotalAmount0(&DAT_1000b188);
    if (iVar2 < 1) {
      ShowPage("#PAGE4B");
    }
    else {
      iVar2 = GetTotalAmount0(&DAT_1000b188);
      AddResource(0,3,iVar2 * 200);
      iVar2 = GetTotalAmount0(&DAT_1000b188);
      ShowPageParam("#PAGE4",iVar2 * 200);
    }
    ClearLightSpot(2);
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    ClearSelection(5);
    SelectUnits(&DAT_1000b188,0);
    SelErase(0);
    SelectUnits(&DAT_1000b188,0);
    SelErase(5);
    RemoveGroup(&DAT_1000b188,&DAT_1000b1f8);
    SelectUnits(&DAT_1000b2b8,0);
    SetTrigg(0xd,1);
    SetTrigg(0xe,1);
    SetTrigg(0x11,1);
  }
  cVar1 = Trigg(0xe);
  if (cVar1 == '\0') {
    iVar2 = GetUnitsAmount2(&DAT_1000b5d8,&DAT_1000b1e8,6);
    iVar5 = GetUnitsAmount2(&DAT_1000b5d8,&DAT_1000b390,6);
    if (0 < iVar2 + iVar5) {
      SelectUnitsInZone(&DAT_1000b5d8,6,0);
      SelErase(6);
      SelectUnits(&DAT_1000b188,0);
      SelectUnits(&DAT_1000b310,1);
      SelSendTo(6,&DAT_1000b428,0,0);
    }
  }
  cVar1 = Trigg(0xd);
  if ((cVar1 == '\0') && (cVar1 = Trigg(0x12), cVar1 != '\0')) {
    iVar2 = GetUnitsAmount1(&DAT_1000b648,&DAT_1000b188);
    iVar5 = GetUnitsAmount1(&DAT_1000b648,&DAT_1000b310);
    if (0 < iVar2 + iVar5) {
      RemoveGroup(&DAT_1000b600,&DAT_1000b618);
      RemoveGroup(&DAT_1000b190,&DAT_1000b178);
      SetTrigg(0x12,0);
    }
  }
  cVar1 = Trigg(0x12);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x11), cVar1 == '\0')) &&
     (cVar1 = TimerDone(0xe), cVar1 != '\0')) {
    CreateZoneNearGroup(&DAT_1000b628,&DAT_1000b610,&DAT_1000b310,100);
    SelectUnits(&DAT_1000b618,0);
    SelectUnits(&DAT_1000b178,1);
    SelSendAndKill(5,&DAT_1000b628,0x80,0);
    SetTrigg(0x13,1);
    RunTimer(0xe,0xfa);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x11), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_1000b178);
    iVar5 = GetTotalAmount0(&DAT_1000b618);
    if (iVar2 + iVar5 == 0) {
      if (DAT_1000b118 == 0) {
        DAT_1000b118 = 5;
      }
      ShowPageParam("#PAGE5",DAT_1000b118);
      AddResource(0,1,DAT_1000b118);
      cVar1 = Trigg(0x12);
      if (cVar1 != '\0') {
        ShowPageParam("#PAGE6",(DAT_1000b320 / 0x14) * 10);
        AddResource(0,1,(DAT_1000b320 / 0x14) * 10);
      }
      SetTrigg(0x11,1);
    }
  }
  cVar1 = Trigg(0x37);
  if ((((cVar1 != '\0') && (cVar1 = Trigg(0xd), cVar1 != '\0')) &&
      (cVar1 = Trigg(0x12), cVar1 != '\0')) && (cVar1 = Trigg(0x13), cVar1 == '\0')) {
    iVar2 = GetTotalAmount0(&DAT_1000b190);
    iVar5 = GetTotalAmount0(&DAT_1000b600);
    if (iVar2 + iVar5 == 0) {
      if (DAT_1000b118 == 0) {
        DAT_1000b118 = 5;
      }
      ShowPageParam("#PAGE5",DAT_1000b118);
      AddResource(0,1,DAT_1000b118);
      cVar1 = Trigg(0x12);
      if (cVar1 != '\0') {
        ShowPageParam("#PAGE6",(DAT_1000b320 / 0x14) * 10);
        AddResource(0,1,(DAT_1000b320 / 0x14) * 10);
      }
      SetTrigg(0x13,1);
    }
  }
  cVar1 = Trigg(0x1f);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b408,0), 0 < iVar2)) {
    cVar1 = Trigg(0x35);
    if (cVar1 != '\0') {
      RunTimer(7,0x32);
    }
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    SelectUnits(&DAT_1000b670,0);
    SelChangeNation(6,0);
    SelectUnits(&DAT_1000b2b8,0);
    SetTrigg(0x1f,0);
  }
  cVar1 = Trigg(0x35);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(7), cVar1 != '\0')) {
    ShowPage("#PAGE03");
    SetTrigg(0x35,0);
  }
  cVar1 = Trigg(0x1f);
  if ((cVar1 == '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b408,0), iVar2 == 0)) {
    SaveSelectedUnits(0,&DAT_1000b2b8,0);
    ClearSelection(0);
    SelectUnits(&DAT_1000b670,0);
    SelChangeNation(0,6);
    SelectUnits(&DAT_1000b2b8,0);
    SetTrigg(0x1f,1);
  }
  cVar1 = Trigg(0x5f);
  if ((cVar1 != '\0') && (cVar1 = Trigg(0x37), cVar1 != '\0')) {
    iVar2 = GetTotalAmount1(&DAT_1000b158,0);
    iVar5 = GetTotalAmount1(&DAT_1000b150,0);
    iVar6 = GetTotalAmount1(&DAT_1000b548,0);
    if (0 < iVar2 + iVar5 + iVar6) {
      SaveSelectedUnits(0,&DAT_1000b2b8,0);
      ClearSelection(0);
      iVar2 = GetTotalAmount1(&DAT_1000b548,0);
      if (iVar2 < 1) {
        iVar2 = GetTotalAmount1(&DAT_1000b150,0);
        if (0 < iVar2) {
          puVar16 = &DAT_1000b150;
          goto LAB_10005139;
        }
        iVar2 = GetTotalAmount1(&DAT_1000b158,0);
        if (0 < iVar2) {
          puVar16 = &DAT_1000b158;
          goto LAB_10005139;
        }
      }
      else {
        puVar16 = &DAT_1000b548;
LAB_10005139:
        CreateZoneNearUnit(&DAT_1000b120,&DAT_1000b450,puVar16,0,100);
      }
      SetTrigg(7,1);
      SetTrigg(9,1);
      SetTrigg(0x11,1);
      SetTrigg(0x13,1);
      SelectUnits(&DAT_1000b5f0,0);
      SelectUnits(&DAT_1000b170,1);
      SelectUnits(&DAT_1000b5e0,1);
      SelectUnits(&DAT_1000b180,1);
      SelectUnits(&DAT_1000b618,1);
      SelectUnits(&DAT_1000b178,1);
      SelectUnits(&DAT_1000b600,1);
      SelectUnits(&DAT_1000b190,1);
      DoNotUseSelInAI(5);
      RemoveGroup(&DAT_1000b5f0,&DAT_1000b2d0);
      RemoveGroup(&DAT_1000b170,&DAT_1000b2d8);
      RemoveGroup(&DAT_1000b5e0,&DAT_1000b2d0);
      RemoveGroup(&DAT_1000b180,&DAT_1000b2d8);
      RemoveGroup(&DAT_1000b618,&DAT_1000b2d0);
      RemoveGroup(&DAT_1000b178,&DAT_1000b2d8);
      RemoveGroup(&DAT_1000b600,&DAT_1000b2d0);
      RemoveGroup(&DAT_1000b190,&DAT_1000b2d8);
      DAT_1000b148 = 0;
      if (0 < DAT_1000b2f8 << 2) {
        do {
          CreateObject0(&DAT_1000b1f0,&DAT_1000b268,&DAT_1000b5b8,5,&DAT_1000b518,0);
          RemoveGroup(&DAT_1000b1f0,&DAT_1000b2c8);
          DAT_1000b148 = DAT_1000b148 + 1;
        } while (DAT_1000b148 < DAT_1000b2f8 * 4);
      }
      SelectUnits(&DAT_1000b2c8,0);
      SelSendAndKill(5,&DAT_1000b400,0x2d,0);
      DoNotUseSelInAI(5);
      SelectUnits(&DAT_1000b2c0,0);
      SelSendAndKill(5,&DAT_1000b400,0x2d,0);
      SelSendAndKill(5,&DAT_1000b120,0x2d,2);
      DoNotUseSelInAI(5);
      SelectUnits(&DAT_1000b2d0,0);
      SelSendAndKill(5,&DAT_1000b120,0x2d,0);
      ClearSelection(5);
      ShowPage("#PAGE16");
      SetResource(5,0,500000);
      uVar3 = GetResource(5,0);
      SetResource(5,3,uVar3);
      uVar3 = GetResource(5,0);
      SetResource(5,2,uVar3);
      uVar3 = GetResource(5,0);
      SetResource(5,1,uVar3);
      uVar3 = GetResource(5,0);
      SetResource(5,4,uVar3);
      uVar3 = GetResource(5,0);
      SetResource(5,5,uVar3);
      RunTimer(0x14,(6 - DAT_1000b168) * 1000);
      StartAI(5,"GERMAN.0",0,0,1,DAT_1000b168);
      SelectUnits(&DAT_1000b2b8,0);
      SetTrigg(0x37,0);
      SetTrigg(0x38,0);
    }
  }
  cVar1 = Trigg(0x38);
  if ((cVar1 == '\0') && (iVar2 = GetTotalAmount0(&DAT_1000b2d8), 0 < iVar2)) {
    AttackEnemyInZone(&DAT_1000b2d8,&DAT_1000b120,0);
  }
  cVar1 = Trigg(0x38);
  if ((cVar1 != '\0') || (cVar1 = TimerDone(0x14), cVar1 == '\0')) goto LAB_100055c6;
  iVar2 = GetTotalAmount0(&DAT_1000b2c8);
  iVar5 = GetTotalAmount0(&DAT_1000b2d8);
  iVar6 = GetTotalAmount0(&DAT_1000b2d0);
  iVar7 = GetTotalAmount0(&DAT_1000b2c0);
  if (iVar2 + iVar5 + iVar6 + iVar7 < 1) {
    SetTrigg(0x38,1);
    goto LAB_100055c6;
  }
  SaveSelectedUnits(0,&DAT_1000b2b8,0);
  ClearSelection(0);
  iVar2 = GetTotalAmount1(&DAT_1000b548,0);
  if (iVar2 < 1) {
    iVar2 = GetTotalAmount1(&DAT_1000b150,0);
    if (0 < iVar2) {
      puVar16 = &DAT_1000b150;
      goto LAB_1000548f;
    }
    iVar2 = GetTotalAmount1(&DAT_1000b158,0);
    if (0 < iVar2) {
      puVar16 = &DAT_1000b158;
      goto LAB_1000548f;
    }
    iVar2 = GetTotalAmount0(&DAT_1000b2c0);
    if (iVar2 < 1) {
      DAT_1000b120_ovl = DAT_1000b450;
      DAT_1000b124_ovl = DAT_1000b454;
    }
    else {
      CreateZoneNearGroup(&DAT_1000b120,&DAT_1000b450,&DAT_1000b2c0,100);
    }
  }
  else {
    puVar16 = &DAT_1000b548;
LAB_1000548f:
    CreateZoneNearUnit(&DAT_1000b120,&DAT_1000b450,puVar16,0,100);
  }
  SelectUnits(&DAT_1000b2c0,0);
  SelectUnits(&DAT_1000b2d0,1);
  SelectUnits(&DAT_1000b2c8,1);
  SelSendAndKill(5,&DAT_1000b120,0x91,0);
  SelSendAndKill(5,&DAT_1000b560,0x91,2);
  SelSendAndKill(5,&DAT_1000b550,200,2);
  SelSendAndKill(5,&DAT_1000b400,0x2d,2);
  ClearSelection(5);
  cVar1 = Trigg(0x3a);
  if (cVar1 != '\0') {
    ChangeFriends(5,6);
    SetTrigg(0x3a,0);
  }
  SelectUnits(&DAT_1000b2b8,0);
  RunTimer(0x14,(6 - DAT_1000b168) * 1000);
LAB_100055c6:
  cVar1 = Trigg(1);
  if ((cVar1 != '\0') || (cVar1 = Trigg(0xb), cVar1 != '\0')) {
    iVar2 = GetTotalAmount1(&DAT_1000b4e0,6);
    iVar5 = GetTotalAmount1(&DAT_1000b1d8,6);
    iVar6 = GetTotalAmount1(&DAT_1000b358,6);
    if (0 < iVar2 + iVar5 + iVar6) {
      SelectUnitsType(&DAT_1000b358,6,0);
      SelectUnitsType(&DAT_1000b1d8,6,1);
      SelectUnitsType(&DAT_1000b4e0,6,1);
      SelChangeNation(6,0);
    }
  }
  cVar1 = Trigg(0x1f);
  if (((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_1000b608,6), 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount1(&DAT_1000b608,&DAT_1000b2f0), iVar2 == 0)) {
    SelectUnitsInZone(&DAT_1000b608,6,0);
    SelErase(6);
  }
  cVar1 = Trigg(0x37);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x39), cVar1 != '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_1000b238,0), 0 < iVar2)) {
    SelectUnits(&DAT_1000b338,0);
    SelSendAndKill(5,&DAT_1000b238,0x20,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f0,&DAT_1000b3c0,5,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f8,&DAT_1000b100,5,1);
    SelSendAndKill(5,&DAT_1000b470,0x20,0);
    SetTrigg(0x39,0);
  }
  cVar1 = Trigg(0x37);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x39), cVar1 == '\0')) &&
     (iVar2 = GetUnitsAmount0(&DAT_1000b238,0), iVar2 == 0)) {
    SelectUnits(&DAT_1000b338,0);
    SelSendAndKill(5,&DAT_1000b518,0x20,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f0,&DAT_1000b3c0,5,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f8,&DAT_1000b100,5,1);
    SelSendAndKill(5,&DAT_1000b470,0x20,0);
    SetTrigg(0x39,1);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_1000b108), iVar2 < 0x48)) {
    ProduceUnitFast(&DAT_1000b1b8,&DAT_1000b3c0,&DAT_1000b108,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f0,&DAT_1000b3c0,5,0);
    SelSendAndKill(5,&DAT_1000b470,0x20,0);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_1000b130), iVar2 < 0x24)) {
    ProduceUnitFast(&DAT_1000b1c0,&DAT_1000b100,&DAT_1000b130,0);
    SelectTypeOfUnitsInZone(&DAT_1000b4f8,&DAT_1000b100,5,0);
    SelSendAndKill(5,&DAT_1000b470,0x20,0);
  }
  cVar1 = Trigg(0x37);
  if ((cVar1 != '\0') && (iVar2 = GetTotalAmount0(&DAT_1000b338), iVar2 < 0x3c)) {
    ProduceUnitFast(&DAT_1000b318,&DAT_1000b5b8,&DAT_1000b338,0);
  }
  cVar1 = Trigg(0x5b);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(1), pcVar13 = (void*)&ShowPage, cVar1 != '\0')) {
    ShowPage("#PAGE11");
    SetTrigg(0x5b,0);
  }
  cVar1 = Trigg(0x5c);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(2), cVar1 != '\0')) {
    ShowPage("#PAGE12");
    SetTrigg(0x5c,0);
  }
  cVar1 = Trigg(0x5d);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(3), cVar1 != '\0')) {
    ShowPage("#PAGE13");
    SetTrigg(0x5d,0);
  }
  cVar1 = Trigg(0x5e);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(4), cVar1 != '\0')) {
    ShowPage("#PAGE14");
    SetTrigg(0x5e,0);
  }
  cVar1 = Trigg(0x5f);
  if ((cVar1 != '\0') && (cVar1 = NationIsErased(5), cVar1 != '\0')) {
    ShowPage("#PAGE15");
    SetTrigg(0x5f,0);
  }
  cVar1 = NationIsErased(0);
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount1(&DAT_1000b4e0,0);
    iVar5 = GetTotalAmount1(&DAT_1000b1d8,0);
    iVar6 = GetTotalAmount1(&DAT_1000b358,0);
    if (iVar2 + iVar5 + iVar6 == 0) {
      iVar2 = 1;
      do {
        cVar1 = TimerDone(iVar2);
        if (cVar1 == '\0') {
          FreeTimer(iVar2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x1e);
      ShowPage("#PAGE10");
      LooseGame();
    }
  }
  cVar1 = Trigg(0x5b);
  if (((cVar1 == '\0') && (cVar1 = Trigg(0x5c), cVar1 == '\0')) &&
     (cVar1 = Trigg(0x5f), cVar1 == '\0')) {
    iVar2 = 1;
    do {
      cVar1 = TimerDone(iVar2);
      if (cVar1 == '\0') {
        FreeTimer(iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    ShowPage("#PAGE20");
    ShowVictory();
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

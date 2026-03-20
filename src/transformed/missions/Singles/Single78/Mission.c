#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
long long DAT_10039040 = 0;
char DAT_10039068[] = "Gon7";
char DAT_10039070[] = "Gon6";
char DAT_10039078[] = "Gon5";
char DAT_10039080[] = "Gon4";
char DAT_10039088[] = "Gon3";
char DAT_10039090[] = "Gon2";
char DAT_10039098[] = "Gon1";
char DAT_100390a0[] = "GK";
char DAT_100390a4[] = "Z15";
char DAT_100390a8[] = "Z10";
char DAT_100390ac[] = "Z5";
char DAT_100390b0[] = "Z14";
char DAT_100390b4[] = "Z9";
char DAT_100390b8[] = "Z4";
char DAT_100390bc[] = "Z13";
char DAT_100390c0[] = "Z8";
char DAT_100390c4[] = "Z3";
char DAT_100390c8[] = "Z12";
char DAT_100390cc[] = "Z7";
char DAT_100390d0[] = "Z2";
char DAT_100390d4[] = "Z11";
char DAT_100390d8[] = "Z6";
char DAT_100390dc[] = "Z1";
char DAT_100392fc[] = "G11";
long long DAT_1003cd60 = 0;
int DAT_1003cd6c = 4;
int DAT_1003cd70 = 800;
int DAT_1003cd74 = 2;
int DAT_1003cdc0 = 0;
int DAT_1003cdc4 = 0;
int DAT_1003cdc8 = 0;
long long DAT_1003ecb0 = 0;
long long DAT_1003ecb4 = 0;
long long DAT_1003ecb8 = 0;
long long DAT_1003ecc8 = 0;
int DAT_1003ecf0 = 0;
unsigned char DAT_1003ed00[248] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1003ed10[248] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1003ed12[248] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1003ed18[248] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1003ed1d = 0;
long long DAT_1003ed1e = 0;
long long DAT_1003eeb8 = 0;
int DAT_1003eeba = 0;
long long DAT_1003eec0 = 0;
long long DAT_1003eed0 = 0;
long long DAT_1003eed8 = 0;
long long DAT_1003eee0 = 0;
long long DAT_1003eee8 = 0;
long long DAT_1003eef0 = 0;
long long DAT_1003eef8 = 0;
long long DAT_1003ef00 = 0;
long long DAT_1003ef08 = 0;
long long DAT_1003ef10 = 0;
long long DAT_1003ef18 = 0;
unsigned char DAT_1003ef20[320] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD4, 0x11, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEA, 0x18, 0x04, 0x00, 0x8C, 0x14, 0x04, 0x00, 0x3C, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x1E, 0x04, 0x00, 0xF4, 0x12, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 0x19, 0x04, 0x00, 0xDC, 0x19, 0x04, 0x00, 0x3C, 0x1E, 0x04, 0x00, 0x2A, 0x1E, 0x04, 0x00, 0x06, 0x1E, 0x04, 0x00, 0xEC, 0x1D, 0x04, 0x00, 0x18, 0x1E, 0x04, 0x00, 0xCA, 0x1D, 0x04, 0x00, 0xBA, 0x1D, 0x04, 0x00};
unsigned char DAT_1003ef48[40] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1003ef70[40] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1003ef98 = 0;
long long DAT_1003efa0 = 0;
long long DAT_1003efa8 = 0;
long long DAT_1003efb0 = 0;
long long DAT_1003efb8 = 0;
long long DAT_1003efc8 = 0;
long long DAT_1003efd8 = 0;
int DAT_1003f048 = 0;
int DAT_1003f04a = 0;
int DAT_1003f050 = 0;
long long DAT_1003f058 = 0;
long long DAT_1003f0a8 = 0;
long long DAT_1003f0f8 = 0;
long long DAT_1003f148 = 0;
long long DAT_1003f198 = 0;
long long DAT_1003f1e8 = 0;
long long DAT_1003f238 = 0;
int DAT_1003f3a4 = 0;
int DAT_1003f3f4 = 0;
int DAT_1003f3f8 = 0;
int DAT_1003f3fc = 0;
int DAT_1003f400 = 0;
int DAT_1003f404 = 0;
int DAT_1003f408 = 0;
int DAT_1003f40c = 0;
int DAT_1003f410 = 0;
int DAT_1003f42c = 0;
long long DAT_1003f430 = 0;
int *DAT_10040f74 = 0;
int DAT_10040f78 = 0;
int DAT_10039040_ovl = 776530087;
int DAT_1003ecb0_ovl = 0;
int DAT_1003ecb4_ovl = 0;

/* Stubs for missing internal functions */
int FUN_10009254() { return 0; }
int FUN_1000925d() { return 0; }
int FUN_10009304() { return 0; }
int FUN_1000930d() { return 0; }
int FUN_100093b4() { return 0; }
int FUN_100093bd() { return 0; }
int FUN_1000a080() { return 0; }
int FUN_1000a978() { return 0; }
int FUN_1000b3c0() { return 0; }
int FUN_1000b460() { return 0; }
int FUN_1000b4f0() { return 0; }
int FUN_1000b950() { return 0; }
int FUN_1000bf50() { return 0; }
int FUN_1000c390() { return 0; }
int FUN_1000e440() { return 0; }
int FUN_1000e680() { return 0; }
int FUN_1000e690() { return 0; }
int FUN_1000e6d0() { return 0; }


/* Forward declarations */
void FUN_100014e0(int param_1);
void FUN_100015f0(int param_1,unsigned short param_2);
void FUN_10001740(int param_1,char param_2,char param_3);
void FUN_10001800(int param_1,char param_2);
void FUN_100018c0(int param_1,int param_2,int param_3,int param_4,int param_5);
void  FUN_100019e0(char *param_1);
char * 
FUN_10002120(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void 
FUN_100021b0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7);
void  FUN_100022d0(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4);
void  FUN_10002420(int param_1);
void FUN_100024a0(unsigned int param_1);
unsigned int *  FUN_10002570(void *this_ptr,unsigned int *param_1,byte param_2);
void  FUN_10002620(void *this_ptr,int param_1,char param_2);
int FUN_10002780(char param_1);
void FUN_10002810(void);
void FUN_10002850(void);
void FUN_100028a0(void);
void FUN_100028e0(void);
void FUN_10002920(void);
void FUN_10002970(void);
void FUN_100029e0(int param_1,char param_2);
void FUN_10002e70(void);
void FUN_10002eb0(void);
void  FUN_10002f50(int param_1);
void  FUN_10002fe0(int param_1);
void FUN_10003590(void);
void FUN_100035d0(void);
void  FUN_10003660(int param_1);
void FUN_100036b0(void);
void FUN_100036f0(void);
void FUN_10003740(int param_1,int param_2,int param_3,int *param_4);
void FUN_10003cb0(int param_1);
void FUN_10003d20(short *param_1,int param_2);
void FUN_10003da0(void *param_1);
void FUN_100054b0(int param_1);
void FUN_10005550(int param_1);
void FUN_100055f0(void);
void  FUN_100056b0(int param_1);
void  FUN_10005780(int param_1);
int  FUN_100057e0(int param_1);
void  FUN_10005870(void *this_ptr,int param_1);
void  FUN_100058b0(void *this_ptr,int param_1);
void  FUN_10005930(void *this_ptr,int param_1,int param_2);
void  FUN_10005a50(void *this_ptr,int param_1);
void  FUN_10005a90(void *this_ptr,int param_1);
void  FUN_10005ad0(int param_1);
void  FUN_10005b80(void *this_ptr,int param_1);
void  FUN_10005bc0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10005c20(void *this_ptr,int param_1);
void  FUN_10005cf0(int param_1);
void  FUN_10005d80(void *this_ptr,unsigned int param_1);
int  FUN_10005e00(int param_1);
void  FUN_10005e30(void *this_ptr,int param_1);
void  FUN_10005eb0(void *this_ptr,int param_1);
void  FUN_10005f20(int param_1);
void  FUN_10005f90(void *this_ptr,int param_1);
void  FUN_10006000(void *this_ptr,int param_1);
void  FUN_10006040(int param_1);
void  FUN_100060b0(void *param_1);
void  FUN_10006130(void *this_ptr,int param_1);
void  FUN_10006190(void *param_1);
void  FUN_10006210(void *this_ptr,int param_1);
void  FUN_10006250(int param_1);
void  FUN_100062a0(int param_1);
void  FUN_100062f0(void *this_ptr,int param_1,int param_2);
void  FUN_10006340(void *param_1);
void  FUN_10006630(void *param_1);
void  FUN_100066c0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006720(void *param_1);
void  FUN_100067a0(void *this_ptr,int param_1);
void FUN_10006810(short *param_1);
void  FUN_100068b0(void *this_ptr,int param_1);
void  FUN_100068f0(void *this_ptr,int param_1);
void  FUN_10006930(void *this_ptr,int param_1);
void  FUN_10006970(void *this_ptr,void *param_1);
int  FUN_100069e0(int param_1);
int  FUN_10006a20(int param_1);
void  FUN_10006a50(void *param_1);
int FUN_10006ce0(void);
void  FUN_10006d10(void *this_ptr,int param_1,int param_2);
void  FUN_10006d80(void *this_ptr,int param_1);
void  FUN_10006df0(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10006e90(void *this_ptr,int param_1,int param_2);
int  FUN_10006fe0(int param_1);
void  FUN_10007090(void *this_ptr,int param_1);
void  FUN_10007110(void *this_ptr,int param_1,int param_2);
BOOL  FUN_100071b0(int param_1);
void  FUN_10007200(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100072d0(int param_1);
void  FUN_10007380(int param_1);
void  FUN_10007420(int param_1);
void  FUN_100074a0(int param_1);
void FUN_100076b0(int param_1);
void FUN_100076e0(int param_1,int param_2,int param_3);
void  FUN_10007760(int param_1);
void  FUN_10007990(void *this_ptr,int *param_1);
void  FUN_10007ac0(int param_1);
void  FUN_10007b60(int param_1);
int  FUN_10007bd0(int param_1);
void  FUN_10007c10(void *this_ptr,int param_1);
void  FUN_10007c70(void *param_1);
void  FUN_10007e80(void *this_ptr,int param_1,int param_2,int param_3);
void FUN_10008010(int param_1,int param_2,int param_3,int param_4);
void  FUN_10008110(int param_1);
void  FUN_100081b0(int param_1);
int  FUN_10008220(int param_1);
void  FUN_10008260(void *this_ptr,int *param_1);
void  FUN_10008390(int param_1);
void  FUN_100084d0(void *this_ptr,int param_1);
void  FUN_10008530(int param_1);
void  FUN_100085c0(int param_1);
void 
FUN_10008630(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_100086d0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10008780(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10008840(char *param_1);
void  FUN_10008980(char *param_1);
void  FUN_10008a50(char *param_1);
int  FUN_10008b20(int param_1);
void  FUN_10008b60(void *this_ptr,int param_1);
void  FUN_10008bc0(void *this_ptr,int param_1);
void  FUN_10008c40(void *this_ptr,int param_1);
void  FUN_10008d30(void *this_ptr,int param_1,int param_2);
int  FUN_10008dc0(int param_1);
void 
FUN_10008e00(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5);
void  FUN_10008ed0(int param_1);
void  FUN_10009010(int param_1);
void FUN_10009240(void);
void FUN_100092f0(void);
void FUN_100093a0(void);
void FUN_10009440(void);
void FUN_10009470(void);
void FUN_10009480(void);
int FUN_100094d0(int param_1);
void  FUN_10009520(void *this_ptr,void *param_1);
void FUN_100095d0(void *param_1);
int FUN_10009940(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5);
void FUN_10009aa6(void);
int FUN_10009ac0(int param_1);
int FUN_10009b80(int param_1);
int FUN_10009bf0(char *param_1,int param_2);

void OnInit();
void ProcessScenary();


void __cdecl FUN_100014e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [20];
  int local_1c;
  int local_18;
  int uStack_8;
local_38 = 0;
  local_34 = 0;
  local_3c = GetTotalAmount0(param_1);
  if (0 < local_3c) {
    local_40 = 0;
    local_44 = 0;
    for (local_48 = 0; local_48 < local_3c; local_48 = local_48 + 1) {
      GetUnitInfo(param_1,local_48,local_30);
      local_40 = local_40 + local_1c;
      local_44 = local_44 + local_18;
    }
    local_38 = local_40 / local_3c;
    local_34 = local_44 / local_3c;
  }
  uStack_8 = 0x100015af;
  return;
}





void __cdecl FUN_100015f0(int param_1,unsigned short param_2)

{
  int iVar1;
  int *puVar2;
  int local_8c [16];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [18];
  unsigned short local_1e;
  short uStack_1c;
  short uStack_1a;
  int local_18;
  int uStack_8;
local_38 = 0;
  local_34 = 0;
  local_3c = GetTotalAmount0(param_1);
  local_40 = 0;
  if (0 < local_3c) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_3c; local_4c = local_4c + 1) {
      GetUnitInfo(param_1,local_4c,local_30);
      if ((local_1e & 0xff) == (param_2 & 0xff)) {
        local_44 = local_44 + (int)uStack_1c;
        local_48 = local_48 + local_18;
        local_40 = local_40 + 1;
      }
    }
    if (0 < local_40) {
      local_38 = local_44 / local_40;
      local_34 = local_48 / local_40;
    }
  }
  uStack_8 = 0x100016ee;
  return;
}





void __cdecl FUN_10001740(int param_1,char param_2,char param_3)

{
  int iVar1;
  int extraout_EDX = 0;
  int *puVar2;
  int local_54 [16];
  long long local_14;
  char local_c [4];
  int uStack_8;
RegisterDynGroup(local_c);
  SelectUnitsInZone(param_1,param_2,0);
  SaveSelectedUnits(param_2,local_c,0);
  FUN_100015f0(local_c,(unsigned short)(intptr_t)param_3);
  uStack_8 = 0x100017cf;
  return;
}





void __cdecl FUN_10001800(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  long long local_14;
  char local_c [4];
  int uStack_8;
RegisterDynGroup(local_c);
  SelectUnitsInZone(param_1,param_2,0);
  SaveSelectedUnits(param_2,local_c,0);
  FUN_100014e0(local_c);
  uStack_8 = 0x1000188b;
  return;
}







void __cdecl FUN_100018c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *puVar2;
  long double fVar3;
  long long lVar4;
  int local_80 [16];
  double local_40;
  double local_38;
  int local_30;
  void *local_2c;
  int local_28;
  int local_24;
  int local_20;
  long long local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
local_8 = param_3;
  local_c = param_4;
  local_10 = param_1;
  local_14 = param_2;
  local_2c = (void *)(param_2 - param_4);
  local_30 = param_1 - param_3;
  fVar3 = (long double)FUN_100093b4(local_2c,(int)((double)(intptr_t)local_2c / (double)local_30));
  local_1c = (double)fVar3;
  if (local_10 - local_8 < 0) {
    local_1c = DAT_10039040_ovl + local_1c;
  }
  lVar4 = 0;
  local_20 = (int)lVar4;
  local_38 = (double)param_5;
  FUN_10009304(*(int*)((char*)&local_1c + 4),(int)(local_1c));
  lVar4 = 0;
  local_28 = (int)lVar4;
  local_40 = (double)param_5;
  FUN_10009254((void *)local_1c,(int)(void *)local_1c);
  lVar4 = 0;
  local_24 = (int)lVar4;
  return;
}





void  FUN_100019e0(char *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  char *local_8;
*param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  *(int *)(param_1 + 8) = 0;
  local_8 = param_1;
  FUN_100021b0(param_1,8,3,0x15,0,200,3,0x50);
  FUN_100021b0(local_8,8,3,0x18,0,200,3,0x50);
  FUN_100021b0(local_8,8,2,0x14,0,100,3,0x32);
  FUN_100021b0(local_8,8,2,8,0,0x5a,3,0x32);
  FUN_100021b0(local_8,8,2,0x14,0,100,3,0x32);
  FUN_100021b0(local_8,8,2,0x16,0,0x1e,3,0x32);
  FUN_100021b0(local_8,8,3,0x17,0,1000,3,0x5a);
  FUN_100021b0(local_8,8,3,0xf,0,1000,3,0x5a);
  FUN_100021b0(local_8,0x15,2,0xf,0,300,3,0x1e);
  FUN_100021b0(local_8,0x15,2,0x14,0,300,3,0x1e);
  FUN_100021b0(local_8,0x15,2,0x15,0,300,3,0x1e);
  FUN_100021b0(local_8,0x15,2,0x18,0,300,3,0x1e);
  FUN_100021b0(local_8,0x15,2,0x16,0,300,3,0x1e);
  FUN_100021b0(local_8,0x15,2,8,0,300,3,0x1e);
  FUN_100021b0(local_8,0x15,3,0x17,0,1000,3,0x5a);
  FUN_100021b0(local_8,0x15,1,0x16,1,0x14,4,0x50);
  FUN_100021b0(local_8,0x15,1,0x14,1,10,4,0x50);
  FUN_100021b0(local_8,0x15,2,8,1,0x1e,4,0x50);
  FUN_100021b0(local_8,0x15,2,0x15,1,100,4,0x50);
  FUN_100021b0(local_8,0x14,2,0x14,0,500,3,0x50);
  FUN_100021b0(local_8,0x14,2,0x16,0,500,3,0x50);
  FUN_100021b0(local_8,0x14,2,0x15,0,500,3,0x50);
  FUN_100021b0(local_8,0x14,3,0x17,0,1000,3,0x5a);
  FUN_100021b0(local_8,0xf,2,0x15,0,300,3,0x50);
  FUN_100021b0(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_100021b0(local_8,0xf,2,8,0,300,3,0x32);
  FUN_100021b0(local_8,0xf,2,0x14,0,300,3,0x32);
  FUN_100021b0(local_8,0xf,2,0x16,0,300,3,0x32);
  FUN_100021b0(local_8,0xf,2,0x17,0,300,3,0x5a);
  FUN_100021b0(local_8,0xf,2,0xf,0,300,3,0x5a);
  FUN_100021b0(local_8,0xf,2,0x18,0,300,3,0x1e);
  FUN_100021b0(local_8,0xb,2,0x15,0,300,3,0x50);
  FUN_100021b0(local_8,0xb,2,0x18,0,300,3,0x50);
  FUN_100021b0(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_100021b0(local_8,0xb,2,8,0,300,3,0x32);
  FUN_100021b0(local_8,0xb,2,0x14,0,300,3,0x32);
  FUN_100021b0(local_8,0xb,2,0x16,0,300,3,0x32);
  FUN_100021b0(local_8,0xb,2,0x17,0,300,3,0x5a);
  FUN_100021b0(local_8,0xb,2,0xf,0,300,3,0x5a);
  FUN_100021b0(local_8,0x18,2,0x15,0,300,3,0x50);
  FUN_100021b0(local_8,0x18,2,0x18,0,300,3,0x50);
  FUN_100021b0(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_100021b0(local_8,0x18,2,8,0,300,3,0x32);
  FUN_100021b0(local_8,0x18,2,0x14,0,300,3,0x32);
  FUN_100021b0(local_8,0x18,2,0x16,0,300,3,0x32);
  FUN_100021b0(local_8,0x18,2,0x17,0,300,3,0x5a);
  FUN_100021b0(local_8,0x18,2,0xf,0,300,3,0x5a);
  FUN_100021b0(local_8,0x16,2,0x15,0,300,3,0x50);
  FUN_100021b0(local_8,0x16,2,0x18,0,300,3,0x50);
  FUN_100021b0(local_8,0x16,2,0x14,0,300,3,0x32);
  FUN_100021b0(local_8,0x16,2,8,0,300,3,0x32);
  FUN_100021b0(local_8,0x16,2,0xb,0,300,3,0x32);
  FUN_100021b0(local_8,0x16,2,0x16,0,300,3,0x32);
  FUN_100021b0(local_8,0x16,2,0x17,0,300,3,0x5a);
  FUN_100021b0(local_8,0x16,2,0xf,0,300,3,0x5a);
  FUN_100021b0(local_8,0x20,3,8,1,10,4,0x32);
  local_8 = (char *)0x10001fa6;
  return;
}





char * 
FUN_10002120(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(char *)this_ptr = param_1;
  *(char *)((intptr_t)this_ptr + 1) = param_2;
  *(char *)((intptr_t)this_ptr + 2) = param_3;
  *(short *)((intptr_t)this_ptr + 3) = param_5;
  *(char *)((intptr_t)this_ptr + 5) = param_6;
  *(char *)((intptr_t)this_ptr + 6) = param_7;
  *(char *)((intptr_t)this_ptr + 7) = param_4;
  *(int *)((intptr_t)this_ptr + 8) = 0;
  return this_ptr;
}





void 
FUN_100021b0(void *this_ptr,char param_1,char param_2,char param_3,char param_4,
            short param_5,char param_6,char param_7)

{
  int iVar1;
  int *puVar2;
  int local_60 [16];
  char *local_20;
  void *local_1c;
  char *local_18;
  void *local_14;
  void *local_10;
  char *puStack_c;
  int local_8;
  
  local_8 = -1;
local_14 = this_ptr;
  if (*(int *)((intptr_t)this_ptr + 8) == 0) {
    FUN_100095d0((void *)0xc);
    local_8 = 0;
    if (local_1c == (void *)0x0) {
      local_20 = (char *)0x0;
    }
    else {
      local_20 = FUN_10002120(local_1c,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                                   );
    }
    local_18 = local_20;
    *(char **)((intptr_t)local_14 + 8) = local_20;
  }
  else {
    FUN_100021b0(*(void **)((intptr_t)this_ptr + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  }
  return;
}





void  FUN_100022d0(void *this_ptr,unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  void *pvVar1;
  unsigned int uVar2;
  int iVar3;
  void *pvVar4;
  int *puVar5;
  int local_4c [16];
  int local_c;
  void *local_8;
local_c = 0;
  pvVar4 = (void *)(unsigned int)*(byte *)this_ptr;
  pvVar1 = this_ptr;
  if (pvVar4 == (void *)(param_1 & 0xff)) {
    pvVar4 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 1);
    if (pvVar4 == (void *)(param_2 & 0xff)) {
      pvVar4 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 2);
      if (pvVar4 == (void *)(param_3 & 0xff)) {
        pvVar4 = (void *)0x0;
        if ((*(char *)((intptr_t)this_ptr + 7) != '\0') &&
           (pvVar4 = (void *)(unsigned int)*(unsigned short *)((intptr_t)this_ptr + 3), pvVar4 < (void *)(param_4 & 0xffff)))
        {
LAB_1000237a:
          local_c = (unsigned int)*(byte *)((intptr_t)this_ptr + 5) * 100 + (unsigned int)*(byte *)((intptr_t)this_ptr + 6);
          goto LAB_100023bc;
        }
        pvVar1 = (void *)(unsigned int)*(byte *)((intptr_t)this_ptr + 7);
        if (pvVar1 == (void *)0x0) {
          pvVar4 = (void *)(param_4 & 0xffff);
          pvVar1 = (void *)(unsigned int)*(unsigned short *)((intptr_t)this_ptr + 3);
          if (pvVar4 < pvVar1) goto LAB_1000237a;
        }
      }
    }
  }
  if (*(int *)((intptr_t)this_ptr + 8) != 0) {
    uVar2 = (int)(short)param_4;
    local_8 = this_ptr;
    FUN_100022d0(*(void **)((intptr_t)this_ptr + 8),
                                 (int)(char)param_1,
                                 (int)(char)param_2,
                                 (int)(char)param_3,uVar2);
  }
LAB_100023bc:
  local_8 = (void *)0x100023cc;
  return;
}





void  FUN_10002420(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
if (*(int *)(param_1 + 8) != 0) {
    local_10 = *(int *)(param_1 + 8);
    local_c = local_10;
    if (local_10 == 0) {
      local_14 = 0;
    }
    else {
      local_8 = param_1;
      FUN_100024a0(1);
    }
  }
  return;
}





void FUN_100024a0(unsigned int param_1)

{
  void *in_ECX;
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = in_ECX;
  FUN_10002420((int)in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_10009520(local_8,local_8);
  }
  local_8 = (void *)0x100024eb;
  return;
}






unsigned int *  FUN_10002570(void *this_ptr,unsigned int *param_1,byte param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_54 [16];
  int local_14;
  unsigned int local_10;
  char uStack_c;
local_10 = (unsigned int)param_2;
  uStack_c = 0;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if (((long long *)&DAT_1003cd60)[local_14] == param_2) {
      uVar1 = *(int *)((intptr_t)this_ptr + local_14 * 4);
      *(int*)((char*)&local_10 + 1) = (int)uVar1;
      uStack_c = (char)((unsigned int)uVar1 >> 0x18);
      local_14 = 8;
    }
  }
  *param_1 = local_10;
  *(char *)(param_1 + 1) = uStack_c;
  return param_1;
}





void  FUN_10002620(void *this_ptr,int param_1,char param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  int local_80 [16];
  int *local_40;
  char local_3c [18];
  char local_2a;
  int local_10;
  int local_c;
  void *local_8;
  
  iVar1 = -0x33333334;
local_c = 0;
  while (local_c < 8) {
    *(int *)((intptr_t)this_ptr + local_c * 4) = 0;
    iVar1 = local_c + 1;
    local_c = iVar1;
  }
  local_8 = this_ptr;
  SelectUnitsInZone(param_1,(intptr_t)param_2,0);
  SaveSelectedUnits(param_2,(intptr_t)local_8 + 0x20,0);
  local_10 = GetTotalAmount0((intptr_t)local_8 + 0x20);
  for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
    GetUnitInfo((intptr_t)local_8 + 0x20,local_c,local_3c);
    uVar2 = FUN_10002780(local_2a);
    local_40 = (int *)((intptr_t)local_8 + (uVar2 & 0xff) * 4);
    *local_40 = *local_40 + 1;
  }
  local_8 = (void *)0x1000272c;
  return;
}





int FUN_10002780(char param_1)

{
  byte bVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int local_50 [16];
  byte local_10;
  byte local_c;
  
  uVar2 = 0xcccccc;
local_c = 0;
  bVar1 = 0;
  while (bVar1 < 8) {
    uVar2 = 0;
    local_10 = bVar1;
    if (((long long *)&DAT_1003cd60)[bVar1] == param_1) {
      local_10 = 8;
      local_c = bVar1;
    }
    bVar1 = local_10 + 1;
  }
  return (intptr_t)local_c;
}





void FUN_10002810(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002850();
  uStack_8 = 0x1000283a;
  return;
}





void FUN_10002850(void)

{
  int *puVar1;
  int iVar2;
  int *puVar3;
  int local_6c [16];
  char local_2c [36];
  int uStack_8;
puVar1 = (int *)RegisterDynGroup((intptr_t)local_2c);
  puVar3 = &DAT_1003ecc8;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_8 = 0x1000288b;
  return;
}





void FUN_100028a0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100028e0();
  FUN_10002920();
  uStack_8 = 0x100028cf;
  return;
}





void FUN_100028e0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100019e0(&DAT_1003ecb8);
  uStack_8 = 0x1000290f;
  return;
}





void FUN_10002920(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10009b80(0x10002970);
  uStack_8 = 0x10002952;
  return;
}





void FUN_10002970(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if ((DAT_1003ecf0 & 1) == 0) {
    DAT_1003ecf0 = DAT_1003ecf0 | 1;
    FUN_10002420(0x1003ecb8);
  }
  uStack_8 = 0x100029bc;
  return;
}





void FUN_100029e0(int param_1,char param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  unsigned short local_54;
  short uStack_52;
  int local_50;
  unsigned short local_4c;
  short uStack_4a;
  int local_48;
  unsigned short local_44;
  short uStack_42;
  int local_40;
  char local_3c [18];
  char local_2a;
  int local_10;
  unsigned int local_c;
  int local_8;
local_c = local_c & -65536;
  local_10 = GetTotalAmount0(param_1);
  GetUnitInfo(param_1,0,local_3c);
  UnitsCenter(local_8,param_1,500);
  FUN_10002620(&DAT_1003ecc8,local_8,param_2);
  for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
    if (0 < (int)((long long *)&DAT_1003ecc8)[local_40]) {
      uVar2 = (((long long *)&DAT_1003ecc8)[local_40] * 100) / local_10;
      FUN_100022d0(&DAT_1003ecb8,(intptr_t)local_2a,1,
                                 (int)((long long *)&DAT_1003cd60)[local_40],uVar2);
      local_44 = (int)uVar1;
      if ((local_c & 0xffff) / 100 < uVar1 / 100) {
        local_c = (int)uVar1;
      }
      if (uVar1 / 100 == (local_c & 0xffff) / 100) {
        local_c = (int)(short)(((local_c & 0xffff) + (unsigned int)uVar1) / 2);
      }
    }
  }
  if ((local_c & 0xffff) == 0) {
    UnitsCenter(local_8,param_1,1000);
    FUN_10002620(&DAT_1003ecc8,local_8,param_2);
    for (local_48 = 0; local_48 < 8; local_48 = local_48 + 1) {
      if (0 < (int)((long long *)&DAT_1003ecc8)[local_48]) {
        uVar2 = (((long long *)&DAT_1003ecc8)[local_48] * 100) / local_10;
        FUN_100022d0(&DAT_1003ecb8,(intptr_t)local_2a,2,
                                   (int)((long long *)&DAT_1003cd60)[local_48],uVar2);
        local_4c = (int)uVar1;
        if ((local_c & 0xffff) / 100 < uVar1 / 100) {
          local_c = (int)uVar1;
        }
        if (uVar1 / 100 == (local_c & 0xffff) / 100) {
          local_c = (int)(short)(((local_c & 0xffff) + (unsigned int)uVar1) / 2);
        }
      }
    }
  }
  if ((local_c & 0xffff) == 0) {
    UnitsCenter(local_8,param_1,2000);
    FUN_10002620(&DAT_1003ecc8,local_8,param_2);
    for (local_50 = 0; local_50 < 8; local_50 = local_50 + 1) {
      if (0 < (int)((long long *)&DAT_1003ecc8)[local_50]) {
        uVar2 = (((long long *)&DAT_1003ecc8)[local_50] * 100) / local_10;
        FUN_100022d0(&DAT_1003ecb8,(intptr_t)local_2a,3,
                                   (int)((long long *)&DAT_1003cd60)[local_50],uVar2);
        local_54 = (int)uVar1;
        if ((local_c & 0xffff) / 100 < uVar1 / 100) {
          local_c = (int)uVar1;
        }
        if (uVar1 / 100 == (local_c & 0xffff) / 100) {
          local_c = (int)(short)(((local_c & 0xffff) + (unsigned int)uVar1) / 2);
        }
      }
    }
  }
  return;
}





void FUN_10002e70(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10002eb0();
  uStack_8 = 0x10002e9a;
  return;
}







void FUN_10002eb0(void)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
DAT_1003ecb0_ovl = local_c;
  DAT_1003ecb4_ovl = local_8;
  return;
}






void  FUN_10002f50(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar2 = GetUnitsAmount1(param_1 + 0x10,param_1);
  iVar1 = GetTotalAmount0(local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_10002fe0(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  BOOL bVar5;
  int local_64;
  long long local_60;
  long long local_58;
  long long local_50;
  long long local_48;
  long long local_40;
  long long local_38;
  long long local_30;
  long long local_28;
  long long local_20;
  long long local_18;
  long long local_10;
  int local_8;
local_8 = param_1;
  if (param_1 == -0x10) {
    UnitsCenter(0,-16,1000);
  }
  iVar3 = GetTotalAmount0(local_8);
  if (0 < iVar3) {
    UnitsCenter(local_8 + 8,local_8,0x5dc);
    FUN_10002f50(local_8);
    if (cVar1 == '\0') {
      iVar3 = GetUnitsAmount0(local_8 + 8,*(char *)(local_8 + 0x1e));
      if (iVar3 < 1) {
        SelectUnits(local_8,0);
        SelSendAndKill(1,local_8 + 0x10,*(char *)(local_8 + 0x18),0);
        goto switchD_100030e3_default;
      }
    }
    FUN_100029e0(local_8,*(char *)(local_8 + 0x1e));
    local_64 = (uVar2 & 0xffff) / 100 - 1;
    switch(local_64) {
    case 0:
      SelectUnits(local_8,0);
      SetStandGround(*(char *)(local_8 + 0x1d),1);
      break;
    case 1:
      SelectUnits(local_8,0);
      SelSendAndKill(*(char *)(local_8 + 0x1d),local_8 + 0x10,*(char *)(local_8 + 0x18),
                     0);
      break;
    case 2:
      AttackEnemyInZone(local_8,local_8 + 8,
                        (int)*(char *)(local_8 + 0x1e));
      break;
    case 3:
      FUN_10001740(local_8 + 8,1,0x14);
      local_10 = local_28;
      if ((intptr_t)local_28 == 0) {
        FUN_10001740(local_8 + 8,1,0xf);
        local_10 = local_30;
      }
      bVar5 = (intptr_t)local_10 == 0;
      if (bVar5) {
        FUN_10001740(local_8 + 8,1,0xb);
        local_10 = local_38;
      }
      bVar5 = (intptr_t)local_10 == 0;
      if (bVar5) {
        FUN_10001740(local_8 + 8,1,0x16);
        local_10 = local_40;
      }
      FUN_10001800(local_8 + 8,*(char *)(local_8 + 0x1e));
      local_18 = local_48;
      FUN_100018c0((intptr_t)local_10,*(int*)((char*)&local_10 + 4),(intptr_t)local_48,
                                    (int)((unsigned long long)local_48 >> 0x20),400);
      (*(short*)&local_20) = (short)local_50;
      *(short *)(local_8 + 8) = (short)local_20;
      *(short*)((char*)&local_20 + 4) = (short)((unsigned long long)local_50 >> 0x20);
      *(short *)(local_8 + 10) = *(short*)((char*)&local_20 + 4);
      local_20 = local_50;
      SelectUnits(local_8,0);
      SelSendTo(*(char *)(local_8 + 0x1d),local_8 + 8,*(char *)(local_8 + 0x18),0);
      break;
    case 4:
      (*(int*)&local_10) = *(unsigned short *)(local_8 + 8) - 0x96;
      *(int*)((char*)&local_10 + 4) = *(unsigned short *)(local_8 + 10) - 0x96;
      FUN_10001800(local_8 + 8,0);
      local_18 = local_58;
      FUN_100018c0((intptr_t)local_10,*(int*)((char*)&local_10 + 4),(intptr_t)local_58,
                                    (int)((unsigned long long)local_58 >> 0x20),800);
      (*(short*)&local_20) = (short)local_60;
      *(short *)(local_8 + 8) = (short)local_20;
      *(short*)((char*)&local_20 + 4) = (short)((unsigned long long)local_60 >> 0x20);
      *(short *)(local_8 + 10) = *(short*)((char*)&local_20 + 4);
      local_20 = local_60;
      SelectUnits(local_8,0);
      SelSendTo(*(char *)(local_8 + 0x1d),local_8 + 8,*(char *)(local_8 + 0x18),0);
    }
  }
switchD_100030e3_default:
  return;
}





void FUN_10003590(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100035d0();
  uStack_8 = 0x100035ba;
  return;
}





void FUN_100035d0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_10003660(0x1003f058);
  FUN_10003660(0x1003f0a8);
  FUN_10003660(0x1003f0f8);
  FUN_10003660(0x1003f148);
  FUN_10003660(0x1003f198);
  FUN_10003660(0x1003f1e8);
  FUN_10003660(0x1003f238);
  uStack_8 = 0x1000363b;
  return;
}





void  FUN_10003660(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_10008b20(param_1);
  return;
}





void FUN_100036b0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100036f0();
  uStack_8 = 0x100036da;
  return;
}





void FUN_100036f0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
  uStack_8 = 0x10003728;
  return;
}





void FUN_10003740(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
while (param_3 = param_3 + -1, -1 < param_3) {
    ((int(*)())param_4)();
  }
  uStack_8 = 0x1000378e;
  return;
}





void __cdecl FUN_10003cb0(int param_1)

{
  int iVar1;
  int *puVar2;
  char local_38 [20];
  int local_24;
  int local_c;
  int local_8;
GetUnitInfo(param_1,0,local_38);
  local_c = local_24;
  return;
}





void __cdecl FUN_10003d20(short *param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  short local_c [2];
  int local_8;
GetZoneCoor(param_2,&local_8,local_c);
  *param_1 = (short)local_8;
  param_1[1] = local_c[0];
  return;
}





void __cdecl FUN_10003da0(void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_6c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1c;
  int local_18;
  int local_14;
  unsigned int local_10;
  unsigned int local_c;
  unsigned int local_8;
local_8 = (int)1;
  local_c = local_c & -256;
  local_10 = local_10 & -256;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = AskMultilineQuestion(7,"#PAGE1",0,"FM18_1|FM18_2|FM18_3|FM18_break");
  switch(local_20) {
  case 0:
    local_c = local_c & -256;
    break;
  case 1:
    local_c = (int)1;
    break;
  case 2:
    local_c = (int)2;
    break;
  case 3:
    local_8 = local_8 & -256;
  }
  if ((local_8 & 0xff) != 0) {
    local_24 = AskMultilineQuestion(7,"#PAGE2",0,"FM18_4|FM18_5|FM18_6|FM18_7|FM18_8|FM18_break");
    switch(local_24) {
    case 0:
      local_10 = local_10 & -256;
      break;
    case 1:
      local_10 = (int)1;
      break;
    case 2:
      local_10 = (int)2;
      break;
    case 3:
      local_10 = (int)3;
      break;
    case 4:
      local_10 = (int)4;
      break;
    case 5:
      local_8 = local_8 & -256;
    }
  }
  if ((local_8 & 0xff) != 0) {
    local_28 = AskMultilineQuestion(7,"#PAGE2",0,"FM18_9|FM18_10|FM18_11|FM18_12|FM18_13|FM18_break");
    switch(local_28) {
    case 0:
      local_1c = 1;
      local_2c = AskMultilineQuestion(7,"#PAGE2",0,"FM18_14|FM18_15|FM18_16|FM18_break");
      switch(local_2c) {
      case 0:
        local_14 = 3000;
        local_18 = 8000;
        break;
      case 1:
        local_14 = 3000;
        local_18 = 11000;
        break;
      case 2:
        local_14 = 3000;
        local_18 = 0x33f4;
        break;
      case 3:
        local_8 = local_8 & -256;
      }
      break;
    case 1:
      local_14 = -1200;
      break;
    case 2:
      local_1c = 1;
      local_18 = 8000;
      break;
    case 3:
      local_1c = 1;
      local_18 = 11000;
      break;
    case 4:
      local_1c = 1;
      local_18 = 0x33f4;
      break;
    case 5:
      local_8 = local_8 & -256;
    }
  }
  if ((local_8 & 0xff) != 0) {
    FUN_10008e00(param_1,((unsigned char *)&DAT_1003ef20) + (local_10 & 0xff) * 8 + (local_c & 0xff) * 0x28,
                       local_1c,local_14,local_18,0);
  }
  return;
}





void __cdecl FUN_100054b0(int param_1)

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





void __cdecl FUN_10005550(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
while( 1 ) {
    iVar1 = GetTotalAmount0(param_1);
    if (iVar1 == 0) break;
    RemoveUnitFromGroup(param_1,0);
  }
  GetTotalAmount0(param_1);
  uStack_8 = 0x100055c4;
  return;
}





void FUN_100055f0(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
uStack_8 = 0x10005639;
  return;
}






void  FUN_100056b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  SelDie(*(char *)(local_8 + 0x10));
  return;
}






void  FUN_10005780(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar1 = GetTotalAmount0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_100057e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}






void  FUN_10005870(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x14) = param_1;
  return;
}





void  FUN_100058b0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateZoneNearGroup((intptr_t)this_ptr + 8,*(int *)((intptr_t)this_ptr + 0x14),this_ptr,param_1);
  local_8 = (void *)0x10005908;
  return;
}





void  FUN_10005930(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  iVar2 = GetTotalAmount0(this_ptr);
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
  local_8 = (void *)0x10005a07;
  return;
}





void  FUN_10005a50(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  return;
}





void  FUN_10005a90(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x1c) = param_1;
  return;
}





void  FUN_10005ad0(int param_1)

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





void  FUN_10005b80(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10005bc0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x18) = param_1;
  *(int *)((intptr_t)this_ptr + 0x1c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x10) = param_3;
  return;
}





void  FUN_10005c20(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10005cc0;
  return;
}





void  FUN_10005cf0(int param_1)

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





void  FUN_10005d80(void *this_ptr,unsigned int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelChangeNation(*(char *)((intptr_t)local_8 + 0x10),param_1 & 0xff);
  *(unsigned int *)((intptr_t)local_8 + 0x10) = param_1;
  local_8 = (void *)0x10005dd8;
  return;
}





int  FUN_10005e00(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10005e30(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),param_1,0,0);
  *(int *)((intptr_t)local_8 + 0x20) = param_1;
  local_8 = (void *)0x10005e8c;
  return;
}





void  FUN_10005eb0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  SelectUnits(this_ptr,0);
  Patrol(*(char *)((intptr_t)local_8 + 0x10),param_1,0);
  local_8 = (void *)0x10005f01;
  return;
}





void  FUN_10005f20(int param_1)

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





void  FUN_10005f90(void *this_ptr,int param_1)

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
  local_8 = (void *)0x10005fe3;
  return;
}





void  FUN_10006000(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x20) = param_1;
  return;
}





void  FUN_10006040(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  SelectUnits(param_1,0);
  SetStandGround(*(char *)(local_8 + 0x10),1);
  return;
}





void  FUN_100060b0(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10005780(param_1);
  if (cVar1 != '\0') {
    FUN_10006190(local_8);
    FUN_10005cf0(local_8);
    if (iVar2 < 10) {
      FUN_10005e30(local_8,*(int *)((intptr_t)local_8 + 0x20));
    }
  }
  local_8 = (void *)0x1000610f;
  return;
}





void  FUN_10006130(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  AttackEnemyInZone(this_ptr,param_1,0);
  local_8 = (void *)0x10006176;
  return;
}





void  FUN_10006190(void *param_1)

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
  FUN_100058b0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x100061eb;
  return;
}





void  FUN_10006210(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x2c) = param_1;
  return;
}





void  FUN_10006250(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100062a0(param_1);
  *(char *)(local_8 + 0x2c) = 1;
  return;
}





void  FUN_100062a0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  RegisterDynGroup(param_1);
  return;
}





void  FUN_100062f0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x24) = param_1;
  *(int *)((intptr_t)this_ptr + 0x28) = param_2;
  return;
}





void  FUN_10006340(void *param_1)

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
      (local_8 = param_1, FUN_10005780(param_1), cVar1 != '\0')) &&
     (*(int *)((intptr_t)local_8 + 0x10) != 0)) {
    if (*(int *)((intptr_t)local_8 + 0x10) == 6) {
      uVar6 = 0;
      FUN_100058b0(local_8,600);
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
          FUN_10005d80(local_8,0);
        }
        else if (local_10 == 1) {
          FUN_100056b0((intptr_t)local_8);
        }
        AddResource(0,*(char *)((intptr_t)local_8 + 0x24),*(int *)((intptr_t)local_8 + 0x28));
        FUN_100062f0(local_8,0,0);
      }
    }
    else {
      FUN_10005cf0(local_8);
      if (iVar3 < 0x32) {
        FUN_10006630(local_8);
      }
      FUN_10005f20((intptr_t)local_8);
      if (cVar1 != '\0') {
        pvVar5 = local_8;
        FUN_10006810(*(short **)((intptr_t)local_8 + 0x20));
        FUN_10006970(this_ptr,pvVar5);
      }
    }
  }
  local_8 = (void *)0x10006572;
  return;
}





void  FUN_10006630(void *param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10005d80(param_1,6);
  SelectUnits(local_8,0);
  uVar5 = 0;
  uVar4 = 0;
  FUN_100058b0(local_8,100);
  SelSendTo(*(char *)((intptr_t)local_8 + 0x10),uVar1,uVar4,uVar5);
  FUN_10006040((intptr_t)local_8);
  local_8 = (void *)0x1000669c;
  return;
}





void  FUN_100066c0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_10005bc0(this_ptr,param_1,param_2,param_3);
  *(char *)((intptr_t)local_8 + 0x2c) = 1;
  local_8 = (void *)0x10006705;
  return;
}





void  FUN_10006720(void *param_1)

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
  FUN_100058b0(param_1,2000);
  iVar2 = GetUnitsAmount0(uVar1,uVar4);
  if (0 < iVar2) {
    local_c = 1;
  }
  local_8 = (void *)0x1000677b;
  return;
}





void  FUN_100067a0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 4) = param_1;
  ((long long *)&DAT_1003f3a4)[DAT_1003f3f4] = this_ptr;
  DAT_1003f3f4 = DAT_1003f3f4 + 1;
  return;
}





void __cdecl FUN_10006810(short *param_1)

{
  short *psVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int local_8;
local_8 = DAT_1003f3a4;
  for (local_c = 0; local_c < DAT_1003f3f4; local_c = local_c + 1) {
    psVar1 = (short *)FUN_100069e0(((long long *)&DAT_1003f3a4)[local_c]);
    if (*psVar1 == *param_1) {
      local_8 = ((long long *)&DAT_1003f3a4)[local_c];
    }
  }
  return;
}





void  FUN_100068b0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 8) = param_1;
  return;
}





void  FUN_100068f0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0xc) = param_1;
  return;
}





void  FUN_10006930(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + 0x10) = param_1;
  return;
}





void  FUN_10006970(void *this_ptr,void *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  FUN_100062f0(param_1,*(int *)((intptr_t)this_ptr + 0xc),*(int *)((intptr_t)this_ptr + 0x10));
  FUN_10005e30(param_1,*(int *)((intptr_t)local_8 + 8));
  local_8 = (void *)0x100069bf;
  return;
}





int  FUN_100069e0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 4);
}





int  FUN_10006a20(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void  FUN_10006a50(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  iVar2 = GetUnitsByNation((intptr_t)param_1,0);
  if ((0 < iVar2) && (*(int *)((intptr_t)local_8 + 0x1c) + 1 < *(int *)((intptr_t)local_8 + 0x20))) {
    if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_10007090(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_100076e0((intptr_t)local_8 + 0xc,
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_10007090(local_8,*(int *)
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
  local_8 = (void *)0x10006c52;
  return;
}





int FUN_10006ce0(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return 0;
}





void  FUN_10006d10(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10006d80(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10006df0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  RegisterDynGroup((intptr_t)this_ptr + 0xc);
  *local_8 = param_1;
  local_8[1] = param_2;
  local_8[7] = 0;
  local_8[8] = 0;
  local_8[9] = param_3;
  local_8 = (int *)0x10006e61;
  return;
}





void  FUN_10006e90(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  iVar2 = GetUnitsByNation((intptr_t)this_ptr,0);
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
    FUN_10006d10(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10006f91;
  return;
}





int  FUN_10006fe0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}






void  FUN_10007090(void *this_ptr,int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  iVar2 = GetUnitsAmount1(param_1,(intptr_t)this_ptr + 0xc);
  iVar1 = GetUnitsByNation((intptr_t)local_8,0);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x100070f0;
  return;
}





void  FUN_10007110(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xc,param_1);
  FUN_100054b0((intptr_t)local_8 + 0xc);
  *(int *)((intptr_t)local_8 + 0x18) = uVar1;
  *(int *)((intptr_t)local_8 + 0x14) = 0;
  *(int *)((intptr_t)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x1000717f;
  return;
}





BOOL  FUN_100071b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10007200(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_100071b0((intptr_t)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x1000729d;
  return;
}





void  FUN_100072d0(int param_1)

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





void  FUN_10007380(int param_1)

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





void  FUN_10007420(int param_1)

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





void  FUN_100074a0(int param_1)

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
      FUN_10007380(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_100072d0(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_10007420(local_8);
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





void __cdecl FUN_100076b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [16];
DAT_1003f3f8 = param_1;
  return;
}





void __cdecl FUN_100076e0(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
if (DAT_1003f3f8 != (void *)0x0) {
    bVar1 = FUN_100071b0((int)DAT_1003f3f8);
    if (bVar1) {
      FUN_10007200(DAT_1003f3f8,param_1,param_2,param_3);
    }
  }
  uStack_8 = 0x10007739;
  return;
}





void  FUN_10007760(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_8 = param_1;
  FUN_10007b60(param_1);
  if (cVar1 != '\0') {
    local_c = *(char *)(local_8 + 0x1c);
    if (local_c == '\x01') {
      FUN_10007ac0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendAndKill(DAT_1003f3fc,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
    else if (local_c == '\x02') {
      if (DAT_1003f400 == 0) {
        FUN_10007ac0(local_8);
        if (cVar1 == '\0') {
          SelectUnits(local_8 + 0xc,0);
          SelSendAndKill(DAT_1003f3fc,local_8 + 0x14,*(char *)(local_8 + 8),0);
        }
      }
      else {
        AttackEnemyInZone(local_8 + 0xc,DAT_1003f400,3);
        AttackEnemyInZone(local_8 + 0xc,DAT_1003f400,0);
      }
    }
    else {
      FUN_10007ac0(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8 + 0xc,0);
        SelSendTo(DAT_1003f3fc,local_8 + 0x14,*(char *)(local_8 + 8),0);
      }
    }
  }
  return;
}





void  FUN_10007990(void *this_ptr,int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_8c [16];
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
  local_40 = GetTotalAmount0((intptr_t)this_ptr + 0xc);
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
  local_8 = (void *)0x10007a75;
  return;
}





void  FUN_10007ac0(int param_1)

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





void  FUN_10007b60(int param_1)

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





int  FUN_10007bd0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10007c10(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xd,param_1);
  local_8 = (void *)0x10007c57;
  return;
}





void  FUN_10007c70(void *param_1)

{
  char cVar1;
  int *puVar2;
  int iVar3;
  int uVar4;
  int local_58 [16];
  int local_18 [2];
  int local_10 [2];
  void *local_8;
local_8 = param_1;
  FUN_100081b0((intptr_t)param_1);
  if (cVar1 != '\0') {
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x01') {
      uVar4 = 500;
      FUN_10008260(local_8,local_10);
      FUN_10008010((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        *(char *)((intptr_t)local_8 + 0xc) = 2;
      }
      else {
        FUN_10008110((intptr_t)local_8);
        if (cVar1 == '\0') {
          SelectUnits((intptr_t)local_8 + 0xd,0);
          SelSendTo(DAT_1003cd6c,(intptr_t)local_8 + 0x1d,*(char *)((intptr_t)local_8 + 8),0);
        }
      }
    }
    if (*(char *)((intptr_t)local_8 + 0xc) == '\x02') {
      uVar4 = 400;
      FUN_10008260(local_8,local_18);
      FUN_10008010((intptr_t)local_8 + 0x15,*puVar2,puVar2[1],uVar4);
      iVar3 = GetUnitsAmount0((intptr_t)local_8 + 0x15,0);
      if (iVar3 < 1) {
        SelectUnits((intptr_t)local_8 + 0xd,0);
        SelSendTo(DAT_1003cd6c,DAT_1003f404,*(char *)((intptr_t)local_8 + 8),0);
      }
      else {
        *(char *)((intptr_t)local_8 + 0xc) = 1;
      }
    }
  }
  local_8 = (void *)0x10007e09;
  return;
}







void  FUN_10007e80(void *this_ptr,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  int *puVar3;
  long double fVar4;
  long long lVar5;
  int local_8c [16];
  double local_4c;
  double local_44;
  int local_3c;
  int local_38;
  int local_34 [2];
  int local_2c;
  long long local_28;
  void *local_20;
  int local_1c;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  void *local_8;
local_c = param_1;
  local_10 = param_2;
  local_8 = this_ptr;
  FUN_10008260(this_ptr,local_34);
  local_1c = *piVar1;
  local_20 = (void *)piVar1[1];
  local_38 = (intptr_t)local_20 - local_10;
  local_3c = local_1c - local_c;
  local_18 = local_1c;
  local_14 = local_20;
  fVar4 = (long double)FUN_100093b4(local_20,(int)((double)local_38 / (double)local_3c));
  local_28 = (double)fVar4;
  if (local_1c - local_c < 0) {
    local_28 = DAT_10039040_ovl + local_28;
  }
  lVar5 = 0;
  local_2c = (int)lVar5;
  local_44 = (double)param_3;
  FUN_10009304(this_00,(int)(local_28));
  lVar5 = 0;
  local_18 = (int)lVar5;
  local_4c = (double)param_3;
  FUN_10009254(*(int*)((char*)&local_28 + 4),(intptr_t)local_28);
  lVar5 = 0;
  local_14 = (void *)lVar5;
  FUN_10008010((intptr_t)local_8 + 0x1d,local_18,local_14,100);
  *(int *)((intptr_t)local_8 + 8) = local_2c + 0x80;
  FUN_10007c70(local_8);
  return;
}





void FUN_10008010(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_7c [16];
  int local_3c;
  int local_38;
  char local_34 [20];
  int local_20;
  int local_1c;
  int local_8;
GetUnitInfo(DAT_1003f408,0,local_34);
  local_38 = local_20;
  local_3c = local_1c;
  local_20 = param_2;
  local_1c = param_3;
  SetUnitInfo(local_34);
  CreateZoneNearGroup(param_1,DAT_1003f404,DAT_1003f408,param_4);
  local_20 = local_38;
  local_1c = local_3c;
  SetUnitInfo(local_34);
  return;
}





void  FUN_10008110(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar2 = GetUnitsAmount1(param_1 + 0x1d,param_1 + 0xd);
  iVar1 = GetTotalAmount0(local_8 + 0xd);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_100081b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar1 = GetTotalAmount0(param_1 + 0xd);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





int  FUN_10008220(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xd;
}





void  FUN_10008260(void *this_ptr,int *param_1)

{
  int iVar1;
  int *puVar2;
  int local_8c [16];
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
  local_40 = GetTotalAmount0((intptr_t)this_ptr + 0xd);
  if (0 < local_40) {
    local_44 = 0;
    local_48 = 0;
    for (local_4c = 0; local_4c < local_40; local_4c = local_4c + 1) {
      GetUnitInfo((intptr_t)local_8 + 0xd,local_4c,local_34);
      local_44 = local_44 + local_20;
      local_48 = local_48 + local_1c;
    }
    local_3c = local_44 / local_40;
    local_38 = local_48 / local_40;
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  local_8 = (void *)0x10008345;
  return;
}





void  FUN_10008390(int param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  FUN_100085c0(param_1);
  if (cVar1 != '\0') {
    CreateZoneNearGroup(local_8 + 8,DAT_1003f40c,local_8,DAT_1003cd70);
    iVar2 = GetUnitsAmount0(local_8 + 8,0);
    if (iVar2 < 1) {
      FUN_10008530(local_8);
      if (cVar1 == '\0') {
        SelectUnits(local_8,0);
        SelSendAndKill(DAT_1003cd74,*(int *)(local_8 + 0x10),0,0);
      }
    }
    else {
      AttackEnemyInZone(local_8,local_8 + 8,0);
    }
  }
  return;
}





void  FUN_100084d0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x10008514;
  return;
}





void  FUN_10008530(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar2 = GetUnitsAmount1(*(int *)(param_1 + 0x10),param_1);
  iVar1 = GetTotalAmount0(local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  return;
}





void  FUN_100085c0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  int local_8;
local_c = 0;
  local_8 = param_1;
  iVar1 = GetTotalAmount0(param_1);
  if (0 < iVar1) {
    local_c = 1;
  }
  return;
}





void 
FUN_10008630(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((intptr_t)this_ptr + 6) = param_1;
  *(int *)((intptr_t)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  FUN_100054b0(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x100086a8;
  return;
}





void 
FUN_100086d0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  RegisterZone((intptr_t)local_8 + 0x1e,param_2);
  FUN_10008630(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10008752;
  return;
}





void  FUN_10008780(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((intptr_t)local_8 + 0x1e,DAT_1003f410,(intptr_t)local_8 + 0x16,300);
  FUN_10008630(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x10008810;
  return;
}





void  FUN_10008840(char *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
local_8 = param_1;
  uVar1 = Trigg(param_1[2]);
  if ((uVar1 & 0xff) != 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (0 < iVar2) {
      FUN_10008980(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10008a50(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  local_8 = (char *)0x1000893b;
  return;
}





void  FUN_10008980(char *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  char *local_8;
local_8 = param_1;
  SaveSelectedUnits(*param_1,param_1 + 0xe,0);
  SelectUnits(*(int *)(local_8 + 6),0);
  SelOpenGates(local_8[1]);
  SelectUnits(local_8 + 0xe,0);
  local_8 = (char *)0x10008a1a;
  return;
}





void  FUN_10008a50(char *param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  char *local_8;
local_8 = param_1;
  SaveSelectedUnits(*param_1,param_1 + 0xe,0);
  SelectUnits(*(int *)(local_8 + 6),0);
  SelCloseGates(local_8[1]);
  SelectUnits(local_8 + 0xe,0);
  local_8 = (char *)0x10008aea;
  return;
}





int  FUN_10008b20(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)(param_1 + 0x2c) = -1;
  return param_1;
}





void  FUN_10008b60(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x30,param_1);
  local_8 = (void *)0x10008ba7;
  return;
}





void  FUN_10008bc0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup((intptr_t)this_ptr + 0x30);
  RemoveGroup(param_1,(intptr_t)local_8 + 0x30);
  local_8 = (void *)0x10008c20;
  return;
}





void  FUN_10008c40(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  char local_c;
  unsigned short *local_8;
local_c = 0;
  local_8 = this_ptr;
  if (*(int *)((intptr_t)this_ptr + 0x2c) == -1) {
    GetUnitInfo((intptr_t)this_ptr + 0x30,0,this_ptr);
    *(unsigned int *)(local_8 + 0x16) = (unsigned int)*local_8;
  }
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 == 1) {
    GetUnitInfo(param_1,0,local_8);
    if ((unsigned int)*local_8 == *(unsigned int *)(local_8 + 0x16)) {
      local_c = 1;
    }
  }
  local_8 = (unsigned short *)0x10008cf2;
  return;
}





void  FUN_10008d30(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  char local_c;
  void *local_8;
local_c = 0;
  local_8 = this_ptr;
  FUN_10008c40(this_ptr,param_1);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(param_2,param_1);
    if (0 < iVar2) {
      local_c = 1;
    }
  }
  local_8 = (void *)0x10008d98;
  return;
}





int  FUN_10008dc0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0x30;
}





void 
FUN_10008e00(void *this_ptr,int param_1,char param_2,int param_3,int param_4,
            int param_5)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  char local_10 [8];
  void *local_8;
*(int *)((intptr_t)this_ptr + 0x45) = param_1;
  *(char *)((intptr_t)this_ptr + 0x38) = param_2;
  *(int *)((intptr_t)this_ptr + 0x39) = param_3;
  *(int *)((intptr_t)this_ptr + 0x3d) = param_4;
  *(int *)((intptr_t)this_ptr + 0x41) = param_5;
  local_8 = this_ptr;
  UnitsCenter(local_10,*(int *)((intptr_t)this_ptr + 0x45),500);
  SelSendTo(0,local_10,0,0);
  local_8 = (void *)0x10008e95;
  return;
}





void  FUN_10008ed0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  short local_10;
  short local_e;
  int local_8;
local_8 = param_1;
  SelectUnits(*(int *)(param_1 + 0x45),0);
  UnitsCenter(&local_10,*(int *)(local_8 + 0x45),700);
  if (*(int *)(local_8 + 0x39) != 0) {
    local_10 = local_10 + *(short *)(local_8 + 0x39);
  }
  if (*(int *)(local_8 + 0x3d) != 0) {
    local_e = *(short *)(local_8 + 0x3d);
  }
  if (*(char *)(local_8 + 0x38) == '\0') {
    SelSendTo(3,&local_10,*(char *)(local_8 + 0x41),0);
  }
  if (*(char *)(local_8 + 0x38) == '\x01') {
    SelSendAndKill(3,&local_10,*(char *)(local_8 + 0x41),0);
  }
  *(int *)(local_8 + 0x45) = 0;
  return;
}





void  FUN_10009010(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_54 [16];
  char local_14 [8];
  char local_c;
  int local_8;
local_c = 0;
  if (*(int *)(param_1 + 0x45) != 0) {
    local_8 = param_1;
    UnitsCenter(local_14,*(int *)(param_1 + 0x45),500);
    iVar1 = FUN_10008dc0(local_8);
    iVar1 = GetUnitsAmount1(local_14,iVar1);
    if (0 < iVar1) {
      FUN_10008ed0(local_8);
      local_c = 1;
    }
  }
  return;
}





void FUN_10009240(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000a978((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000925d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_100092f0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000a978((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_1000930d((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}





void FUN_100093a0(void)

{
  long double in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_1000a978((int)(dVar1),(unsigned int)((unsigned long long)dVar1 >> 0x20));
  FUN_100093bd((int)(dVar1),(int)((unsigned long long)dVar1 >> 0x20));
  return;
}







void FUN_10009440(void)

{
  FUN_10009480();
  return;
}





void FUN_10009470(void)

{
  return;
}





void FUN_10009480(void)

{
  return;
}





int __cdecl FUN_100094d0(int param_1)

{
  int uVar1;
  
  uVar1 = DAT_1003f42c;
  DAT_1003f42c = param_1;
  return uVar1;
}





void  FUN_10009520(void *this_ptr,void *param_1)

{
  void *pcVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    FUN_1000b3c0(this_ptr,9);
    if (((((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 4) && (*(int *)((intptr_t)param_1 + -0xc) != 1))
        && ((*(unsigned int *)((intptr_t)param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)((intptr_t)param_1 + -0xc) != 3 &&
        (iVar2 = FUN_1000a080(2,0x10039468,0x2f,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
        iVar2 == 1)))) {
      ((void)0);
      return;
    }
    FUN_1000bf50(param_1,*(int *)((intptr_t)param_1 + -0xc));
    FUN_1000b460(9);
  }
  return;
}





void __cdecl FUN_100095d0(void *param_1)

{
  FUN_1000b4f0(param_1,1);
  return;
}





int __cdecl FUN_10009940(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = *(unsigned int *)(param_1 + 0xc);
  uVar5 = uVar6;
  uVar4 = uVar6;
  while (uVar3 = uVar5, -1 < param_2) {
    if (uVar6 == -1) {
      FUN_1000e440();
    }
    uVar6 = uVar6 - 1;
    iVar1 = iVar2 + uVar6 * 0x14;
    if (((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) ||
       (uVar5 = uVar3, uVar6 == -1)) {
      param_2 = param_2 + -1;
      uVar5 = uVar6;
      uVar4 = uVar3;
    }
  }
  uVar6 = uVar6 + 1;
  *param_4 = uVar6;
  *param_5 = uVar4;
  if ((*(unsigned int *)(param_1 + 0xc) < uVar4) || (uVar4 < uVar6)) {
    FUN_1000e440();
  }
  return iVar2 + uVar6 * 0x14;
}





void FUN_10009aa6(void)

{
  int in_EAX;
  int unaff_EBP;
  
  DAT_1003cdc4 = *(int *)(unaff_EBP + 8);
  DAT_1003cdc0 = in_EAX;
  DAT_1003cdc8 = unaff_EBP;
  return;
}





int __cdecl FUN_10009ac0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  void *this_ptr;
  void *this_00;
  void *this_01;
  unsigned int uVar4;
  char *pcVar5;
  int iVar6;
  
  FUN_1000e680();
  pvVar1 = (void *)FUN_1000c390(this_ptr,(int)DAT_10040f78,2);
  this_00 = (void *)((int)DAT_10040f74 + (4 - (int)DAT_10040f78));
  if (pvVar1 < this_00) {
    iVar6 = 0x68;
    pcVar5 = "onexit.c";
    uVar4 = 2;
    iVar2 = FUN_1000c390(this_00,(int)DAT_10040f78,2);
    piVar3 = FUN_1000b950(this_01,DAT_10040f78,(void *)(iVar2 + 0x10),uVar4,(int)pcVar5,iVar6);
    if (piVar3 == (int *)0x0) {
      FUN_1000e690();
      return 0;
    }
    DAT_10040f74 = piVar3 + ((int)DAT_10040f74 - (int)DAT_10040f78 >> 2);
    DAT_10040f78 = piVar3;
  }
  *DAT_10040f74 = param_1;
  DAT_10040f74 = DAT_10040f74 + 1;
  FUN_1000e690();
  return param_1;
}





int __cdecl FUN_10009b80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009ac0(param_1);
  return (iVar1 != 0) - 1;
}





int __cdecl FUN_10009bf0(char *param_1,int param_2)

{
  void *pcVar1;
  int iVar2;
  int uVar3;
  char *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  
  if ((param_1 == (char *)0x0) &&
     (iVar2 = FUN_1000a080(2,0x100394b8,0x5d,0,(byte *)"string != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  if ((param_2 == 0) &&
     (iVar2 = FUN_1000a080(2,0x100394b8,0x5e,0,(byte *)"format != NULL"), iVar2 == 1)) {
    return uVar3;
  }
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  local_20 = 0x7fffffff;
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000e6d0(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar2;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_50 [16];
  int local_10;
  int local_c;
  int local_8;
SetPlayerName(0,"SPAIN");
  SetPlayerName(3,"SPAIN");
  SetPlayerName(1,"HOLLAND");
  RegisterZone(&DAT_1003eed8,DAT_100390dc);
  RegisterZone(&DAT_1003ef00,DAT_100390d8);
  RegisterZone(&DAT_1003efa8,DAT_100390d4);
  RegisterZone(&DAT_1003eee0,DAT_100390d0);
  RegisterZone(&DAT_1003ef08,DAT_100390cc);
  RegisterZone(&DAT_1003efb0,DAT_100390c8);
  RegisterZone(&DAT_1003eee8,DAT_100390c4);
  RegisterZone(&DAT_1003ef10,DAT_100390c0);
  RegisterZone(&DAT_1003efb8,DAT_100390bc);
  RegisterZone(&DAT_1003eef0,DAT_100390b8);
  RegisterZone(&DAT_1003ef18,DAT_100390b4);
  RegisterZone(&DAT_1003efc8,DAT_100390b0);
  RegisterZone(&DAT_1003eef8,DAT_100390ac);
  RegisterZone(&DAT_1003efa0,DAT_100390a8);
  RegisterZone(&DAT_1003efd8,DAT_100390a4);
  RegisterUnits(&DAT_1003eed0,DAT_100390a0);
  FUN_10008b60(&DAT_1003f058,DAT_10039098);
  FUN_10008b60(&DAT_1003f0a8,DAT_10039090);
  FUN_10008b60(&DAT_1003f0f8,DAT_10039088);
  FUN_10008b60(&DAT_1003f148,DAT_10039080);
  FUN_10008b60(&DAT_1003f198,DAT_10039078);
  FUN_10008b60(&DAT_1003f1e8,DAT_10039070);
  FUN_10008b60(&DAT_1003f238,DAT_10039068);
  RegisterUnitType(&DAT_1003eec0,"Sclad1(BA)");
  RegisterDynGroup(&DAT_1003ef98);
  RegisterVar(&DAT_1003f050,4);
  RegisterVar(&DAT_1003ef98,8);
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      FUN_10009bf0((char *)&local_8,0x10039050);
      RegisterUnits(((unsigned char *)&DAT_1003ef20) + local_10 * 8 + local_c * 0x28,&local_8);
    }
  }
  for (local_c = 0; local_c < 0xe; local_c = local_c + 1) {
    FUN_10009bf0((char *)&local_8,0x1003904c);
    RegisterUnits(((unsigned char *)&DAT_1003ed00) + local_c * 0x1f,&local_8);
    ((long long *)&DAT_1003ed1d)[local_c * 0x1f] = 1;
    *(int *)(((unsigned char *)&DAT_1003ed18) + local_c * 0x1f) = 0x80;
    ((long long *)&DAT_1003ed1e)[local_c * 0x1f] = 3;
  }
  return;
}







void ProcessScenary(void)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  int *puVar4;
  long double fVar5;
  long long lVar6;
  int uVar7;
  int local_8c [16];
  double local_4c;
  int local_44;
  double local_40;
  int local_38;
  void *local_34;
  int local_30;
  int local_2c;
  int local_28;
  double local_24;
  unsigned int local_1c;
  unsigned int local_18;
  unsigned int local_14;
  unsigned int local_10;
  int local_c;
  int local_8;
uVar2 = Trigg(99);
  if ((uVar2 & 0xff) != 0) {
    DAT_1003f050 = GetDiff(0);
    if (DAT_1003f050 < 1) {
      InitialUpgrade(DAT_100392fc,"Pik_evro_rus(sp)ATTACK6");
      InitialUpgrade(DAT_100392fc,"Pik_evro_rus(sp)SHIELD3");
      InitialUpgrade(DAT_100392fc,"Mushketer(sp)ATTACK3");
      InitialUpgrade(DAT_100392fc,"Mushketer(sp)SHIELD4");
      InitialUpgrade(DAT_100392fc,"Kirasir(sp)ATTACK5");
      InitialUpgrade(DAT_100392fc,"Kirasir(sp)SHIELD4");
      InitialUpgrade(DAT_100392fc,"Gusar_evro(sp)ATTACK4");
      InitialUpgrade(DAT_100392fc,"Gusar_evro(sp)SHIELD4");
      InitialUpgrade(DAT_100392fc,"Dragun_18(sp)ATTACK4");
      InitialUpgrade(DAT_100392fc,"Dragun_18(sp)SHIELD5");
      InitialUpgrade(DAT_100392fc,"AKA31SP");
      InitialUpgrade(DAT_100392fc,"AKA36SP");
    }
    if (DAT_1003f050 < 2) {
      InitialUpgrade(DAT_100392fc,"Pik_evro_rus(sp)ATTACK6");
      InitialUpgrade(DAT_100392fc,"Pik_evro_rus(sp)SHIELD3");
      InitialUpgrade(DAT_100392fc,"Mushketer(sp)ATTACK3");
      InitialUpgrade(DAT_100392fc,"Mushketer(sp)SHIELD4");
      InitialUpgrade(DAT_100392fc,"Kirasir(sp)ATTACK5");
      InitialUpgrade(DAT_100392fc,"Kirasir(sp)SHIELD4");
      InitialUpgrade(DAT_100392fc,"Gusar_evro(sp)ATTACK4");
      InitialUpgrade(DAT_100392fc,"Gusar_evro(sp)SHIELD4");
      InitialUpgrade(DAT_100392fc,"Dragun_18(sp)ATTACK4");
      InitialUpgrade(DAT_100392fc,"Dragun_18(sp)SHIELD5");
      InitialUpgrade(DAT_100392fc,"AKA31SP");
    }
    if (DAT_1003f050 < 3) {
      InitialUpgrade(DAT_100392fc,"Pik_evro_rus(sp)ATTACK6");
      InitialUpgrade(DAT_100392fc,"Pik_evro_rus(sp)SHIELD3");
      InitialUpgrade(DAT_100392fc,"Mushketer(sp)ATTACK3");
      InitialUpgrade(DAT_100392fc,"Mushketer(sp)SHIELD4");
      InitialUpgrade(DAT_100392fc,"Kirasir(sp)ATTACK5");
      InitialUpgrade(DAT_100392fc,"Kirasir(sp)SHIELD4");
      InitialUpgrade(DAT_100392fc,"Gusar_evro(sp)ATTACK4");
      InitialUpgrade(DAT_100392fc,"Gusar_evro(sp)SHIELD4");
      InitialUpgrade(DAT_100392fc,"Dragun_18(sp)ATTACK4");
      InitialUpgrade(DAT_100392fc,"Dragun_18(sp)SHIELD5");
    }
    InitialUpgrade(DAT_100390a0,"AKA25SP");
    SetLightSpot(&DAT_1003eed8,4,1);
    SetLightSpot(&DAT_1003ef00,4,6);
    SetLightSpot(&DAT_1003efa8,4,0xb);
    SetLightSpot(&DAT_1003eee0,4,2);
    SetLightSpot(&DAT_1003ef08,4,7);
    SetLightSpot(&DAT_1003efb0,4,0xc);
    SetLightSpot(&DAT_1003eee8,4,3);
    SetLightSpot(&DAT_1003ef10,4,8);
    SetLightSpot(&DAT_1003efb8,4,0xd);
    SetLightSpot(&DAT_1003eef0,4,4);
    SetLightSpot(&DAT_1003ef18,4,9);
    SetLightSpot(&DAT_1003efc8,4,0xe);
    SetLightSpot(&DAT_1003eef8,4,5);
    SetLightSpot(&DAT_1003efa0,4,10);
    SetLightSpot(&DAT_1003efd8,4,0xf);
    ChangeFriends(0,9);
    RunTimer(1,1000);
    RunTimer(2,5);
    RunTimer(0x1e,100);
    SetTrigg(99,0);
  }
  uVar2 = TimerDoneFirst(0x1e);
  if ((uVar2 & 0xff) != 0) {
    ShowPage("#PAGE0");
  }
  uVar2 = Trigg(100);
  if ((uVar2 & 0xff) == 0) goto LAB_10005094;
  SaveSelectedUnits(0,&DAT_1003ef98,0);
  UnitsCenter(&DAT_1003f048,&DAT_1003eed0,300);
  FUN_10008d30(&DAT_1003f058,&DAT_1003ef98,&DAT_1003f048);
  if (cVar1 != '\0') {
    FUN_10003da0(&DAT_1003f058);
    FUN_10005550(&DAT_1003ef98);
  }
  FUN_10008d30(&DAT_1003f0a8,&DAT_1003ef98,&DAT_1003f048);
  if (cVar1 != '\0') {
    FUN_10003da0(&DAT_1003f0a8);
    FUN_10005550(&DAT_1003ef98);
  }
  FUN_10008d30(&DAT_1003f0f8,&DAT_1003ef98,&DAT_1003f048);
  if (cVar1 != '\0') {
    FUN_10003da0(&DAT_1003f0f8);
    FUN_10005550(&DAT_1003ef98);
  }
  FUN_10008d30(&DAT_1003f148,&DAT_1003ef98,&DAT_1003f048);
  if (cVar1 != '\0') {
    FUN_10003da0(&DAT_1003f148);
    FUN_10005550(&DAT_1003ef98);
  }
  FUN_10008d30(&DAT_1003f198,&DAT_1003ef98,&DAT_1003f048);
  if (cVar1 != '\0') {
    FUN_10003da0(&DAT_1003f198);
    FUN_10005550(&DAT_1003ef98);
  }
  FUN_10008d30(&DAT_1003f1e8,&DAT_1003ef98,&DAT_1003f048);
  if (cVar1 != '\0') {
    FUN_10003da0(&DAT_1003f1e8);
    FUN_10005550(&DAT_1003ef98);
  }
  FUN_10008d30(&DAT_1003f238,&DAT_1003ef98,&DAT_1003f048);
  if (cVar1 != '\0') {
    FUN_10003da0(&DAT_1003f238);
    FUN_10005550(&DAT_1003ef98);
  }
  FUN_10009010(0x1003f058);
  if (cVar1 != '\0') {
    DAT_1003f048 = DAT_1003f048 + 100;
    uVar7 = 0;
    iVar3 = FUN_10008dc0(0x1003f058);
    SelectUnits(iVar3,uVar7);
    SelSendTo(0,0,0,0);
  }
  FUN_10009010(0x1003f0a8);
  if (cVar1 != '\0') {
    DAT_1003f04a = DAT_1003f04a + 0x28;
    uVar7 = 0;
    iVar3 = FUN_10008dc0(0x1003f0a8);
    SelectUnits(iVar3,uVar7);
    SelSendTo(0,0,0,0);
  }
  FUN_10009010(0x1003f0f8);
  if (cVar1 != '\0') {
    DAT_1003f048 = DAT_1003f048 + 0x50;
    uVar7 = 0;
    iVar3 = FUN_10008dc0(0x1003f0f8);
    SelectUnits(iVar3,uVar7);
    SelSendTo(0,0,0,0);
  }
  FUN_10009010(0x1003f148);
  if (cVar1 != '\0') {
    DAT_1003f048 = DAT_1003f048 + 0x32;
    uVar7 = 0;
    iVar3 = FUN_10008dc0(0x1003f148);
    SelectUnits(iVar3,uVar7);
    SelSendTo(0,0,0,0);
  }
  FUN_10009010(0x1003f198);
  if (cVar1 != '\0') {
    DAT_1003f04a = DAT_1003f04a + 0x28;
    DAT_1003f048 = DAT_1003f048 + 0x32;
    uVar7 = 0;
    iVar3 = FUN_10008dc0(0x1003f198);
    SelectUnits(iVar3,uVar7);
    SelSendTo(0,0,0,0);
  }
  FUN_10009010(0x1003f1e8);
  if (cVar1 != '\0') {
    DAT_1003f048 = DAT_1003f048 + 0x50;
    DAT_1003f04a = DAT_1003f04a + 0x28;
    uVar7 = 0;
    iVar3 = FUN_10008dc0(0x1003f1e8);
    SelectUnits(iVar3,uVar7);
    SelSendTo(0,0,0,0);
  }
  FUN_10009010(0x1003f238);
  if (cVar1 != '\0') {
    DAT_1003f048 = DAT_1003f048 + 0x32;
    DAT_1003f04a = DAT_1003f04a + 0x28;
    uVar7 = 0;
    iVar3 = FUN_10008dc0(0x1003f238);
    SelectUnits(iVar3,uVar7);
    SelSendTo(0,0,0,0);
  }
  ClearSelection(0);
  SelectUnits(&DAT_1003ef98,0);
  uVar2 = TimerDoneFirst(2);
  if ((uVar2 & 0xff) != 0) {
    for (local_8 = 0; local_8 < 0xe; local_8 = local_8 + 1) {
      FUN_10002fe0((int)(((unsigned char *)&DAT_1003ed00) + local_8 * 0x1f));
    }
    RunTimer(2,0x1e);
  }
  uVar2 = TimerDoneFirst(1);
  if ((uVar2 & 0xff) == 0) goto LAB_10005094;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    iVar3 = GetTotalAmount0(((unsigned char *)&DAT_1003ef20) + local_c * 8);
    if (0xf < iVar3) {
      SelectUnits(((unsigned char *)&DAT_1003ef20) + local_c * 8,1);
    }
    iVar3 = GetTotalAmount0(((unsigned char *)&DAT_1003ef20) + local_c * 8);
    if (0xf < iVar3) {
      SelectUnits(((unsigned char *)&DAT_1003ef48) + local_c * 8,1);
    }
    iVar3 = GetTotalAmount0(((unsigned char *)&DAT_1003ef20) + local_c * 8);
    if (0xf < iVar3) {
      SelectUnits(((unsigned char *)&DAT_1003ef70) + local_c * 8,1);
    }
  }
  SelCenter(&DAT_1003eeb8,3,1000);
  local_10 = (unsigned int)DAT_1003eeb8;
  local_14 = (unsigned int)DAT_1003eeba;
  for (local_c = 0; local_c < 0xe; local_c = local_c + 1) {
    UnitsCenter(((unsigned char *)&DAT_1003ed10) + local_c * 0x1f,((unsigned char *)&DAT_1003ed00) + local_c * 0x1f,500);
    local_18 = (unsigned int)*(unsigned short *)(((unsigned char *)&DAT_1003ed10) + local_c * 0x1f);
    local_1c = (unsigned int)*(unsigned short *)(((unsigned char *)&DAT_1003ed12) + local_c * 0x1f);
    local_30 = local_1c - local_14;
    local_34 = (void *)(local_18 - local_10);
    fVar5 = (long double)FUN_100093b4(local_34,(int)((double)local_30 / (double)(intptr_t)local_34));
    local_24 = (double)fVar5;
    if ((int)(local_18 - local_10) < 0) {
      local_24 = DAT_10039040_ovl + local_24;
    }
    lVar6 = 0;
    local_28 = (int)lVar6;
    FUN_100055f0();
    local_38 = -(local_2c / 5 + 100);
    local_40 = (double)local_38;
    FUN_10009304((void *)0x5,(int)(local_24));
    lVar6 = 0;
    *(short *)(((unsigned char *)&DAT_1003ed10) + local_c * 0x1f) = (short)lVar6;
    local_44 = -(local_2c / 5 + 100);
    local_4c = (double)local_44;
    FUN_10009254((void *)0x5,(*(int*)&local_24));
    lVar6 = 0;
    *(short *)(((unsigned char *)&DAT_1003ed12) + local_c * 0x1f) = (short)lVar6;
    *(int *)(((unsigned char *)&DAT_1003ed18) + local_c * 0x1f) = local_28 + 0x80;
  }
  uVar2 = Trigg(100);
  if ((uVar2 & 0xff) != 0) {
    iVar3 = GetAmountOfWarriors(1);
    if (iVar3 < 0x28) {
      iVar3 = GetAmountOfWarriors(3);
      if (iVar3 < 0x65) goto LAB_10004f7e;
    }
    else {
LAB_10004f7e:
      iVar3 = GetAmountOfWarriors(1);
      if (1 < iVar3) goto LAB_10004fd3;
    }
    ShowPage("#PAGE3");
    SetTrigg(100,0);
    ShowVictory();
  }
LAB_10004fd3:
  uVar2 = Trigg(100);
  if ((uVar2 & 0xff) != 0) {
    iVar3 = GetAmountOfWarriors(3);
    if (iVar3 < 0x28) {
      iVar3 = GetAmountOfWarriors(1);
      if (iVar3 < 0x65) goto LAB_10005026;
    }
    else {
LAB_10005026:
      iVar3 = GetAmountOfWarriors(3);
      if (1 < iVar3) goto LAB_1000507b;
    }
    ShowPage("#PAGE4");
    SetTrigg(100,0);
    LooseGame();
  }
LAB_1000507b:
  RunTimer(1,500);
LAB_10005094:
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

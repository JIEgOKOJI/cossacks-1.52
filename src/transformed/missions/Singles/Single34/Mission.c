#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
char DAT_1002c060[] = "GB1";
char DAT_1002c088[] = "GK1";
char DAT_1002c08c[] = "GK";
char DAT_1002c0d8[] = "Z36";
char DAT_1002c0dc[] = "Z35";
char DAT_1002c0e0[] = "Z34";
char DAT_1002c0e4[] = "Z33";
char DAT_1002c0e8[] = "Z32";
char DAT_1002c0ec[] = "Z31";
char DAT_1002c0f0[] = "Z30";
char DAT_1002c0f4[] = "Z29";
char DAT_1002c0f8[] = "Z28";
char DAT_1002c0fc[] = "Z27";
char DAT_1002c100[] = "Z26";
char DAT_1002c104[] = "Z25";
char DAT_1002c108[] = "Z24";
char DAT_1002c10c[] = "Z23";
char DAT_1002c110[] = "Z22";
char DAT_1002c114[] = "Z21";
char DAT_1002c118[] = "Z20";
char DAT_1002c11c[] = "Z19";
char DAT_1002c120[] = "Z18";
char DAT_1002c124[] = "Z17";
char DAT_1002c128[] = "Z16";
char DAT_1002c12c[] = "Z15";
char DAT_1002c130[] = "Z14";
char DAT_1002c134[] = "Z13";
char DAT_1002c138[] = "Z12";
char DAT_1002c13c[] = "Z11";
char DAT_1002c140[] = "Z10";
char DAT_1002c144[] = "Z9";
char DAT_1002c148[] = "Z8";
char DAT_1002c14c[] = "Z7";
char DAT_1002c150[] = "Z6";
char DAT_1002c154[] = "Z5";
char DAT_1002c158[] = "Z4";
char DAT_1002c15c[] = "Z3";
char DAT_1002c160[] = "Z2";
char DAT_1002c164[] = "Z1";
long long DAT_100313e0 = 0;
int DAT_100313e8 = 0;
int DAT_100313ec = 0;
int DAT_100313f0 = 0;
long long DAT_100313f8 = 0;
unsigned char DAT_10031408[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10031428[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10031448[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10031468[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10031488[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_100314a8[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_100314c8 = 0;
long long DAT_100314d0 = 0;
unsigned char DAT_100314d8[280] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_100315f0[280] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10031708[280] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10031820[280] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10031938[280] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_10031a50[280] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_10031b68 = 0;
long long DAT_10031b70 = 0;
long long DAT_10031b90 = 0;
long long DAT_10031b98 = 0;
long long DAT_10031ba0 = 0;
long long DAT_10031ba8 = 0;
long long DAT_10031bb0 = 0;
long long DAT_10031bb8 = 0;
long long DAT_10031bc0 = 0;
long long DAT_10031bc8 = 0;
long long DAT_10031bd0 = 0;
long long DAT_10031bd8 = 0;
long long DAT_10031be0 = 0;
long long DAT_10031bf8 = 0;
long long DAT_10031c20 = 0;
long long DAT_10031c58 = 0;
long long DAT_10031c60 = 0;
long long DAT_10031c68 = 0;
long long DAT_10031c70 = 0;
long long DAT_10031c78 = 0;
long long DAT_10031c80 = 0;
long long DAT_10031c88 = 0;
long long DAT_10031c90 = 0;
long long DAT_10031c98 = 0;
long long DAT_10031ca0 = 0;
long long DAT_10031ca8 = 0;
long long DAT_10031cb0 = 0;
long long DAT_10031cb8 = 0;
long long DAT_10031cc0 = 0;
long long DAT_10031cc8 = 0;
long long DAT_10031cd0 = 0;
long long DAT_10031cd8 = 0;
long long DAT_10031ce0 = 0;
long long DAT_10031ce8 = 0;
long long DAT_10031cf0 = 0;
long long DAT_10031cf8 = 0;
long long DAT_10031d00 = 0;
long long DAT_10031d08 = 0;
long long DAT_10031d10 = 0;
long long DAT_10031d18 = 0;
long long DAT_10031d20 = 0;
long long DAT_10031d28 = 0;
long long DAT_10031d30 = 0;
int DAT_10031d38 = 0;
long long DAT_10031d40 = 0;
long long DAT_10031d78 = 0;

/* Forward declarations */
void FUN_100011e0(int param_1);
void FUN_10001280(int param_1,int param_2,int param_3);
void  FUN_100012f0(void *this_ptr,int param_1,int param_2,int param_3);
int  FUN_10001380(intptr_t param_1);
void  FUN_100013c0(void *this_ptr,int param_1,int param_2);
void  FUN_10001460(intptr_t param_1);
void  FUN_10001680(void *param_1);
void  FUN_10001910(int param_1);
void  FUN_10001990(void *this_ptr,int param_1,int param_2);
void  FUN_10001a00(void *this_ptr,int param_1);
void  FUN_10001a70(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10001b10(void *this_ptr,int param_1,int param_2);
int  FUN_10001c60(int param_1);
void  FUN_10001ca0(intptr_t param_1);
void  FUN_10001d10(void *this_ptr,int param_1);
void  FUN_10001d90(void *this_ptr,int param_1,int param_2);
BOOL  FUN_10001e30(intptr_t param_1);
void  FUN_10001e80(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_10001f50(int param_1);
void  FUN_10002000(int param_1);
void  FUN_100020a0(int param_1);
void  FUN_10002120(intptr_t param_1);
void 
FUN_10002330(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void 
FUN_100023d0(void *this_ptr,int param_1,int param_2,char param_3,int param_4);
void  FUN_10002480(void *this_ptr,int param_1,char param_2,int param_3);
void  FUN_10002540(char *param_1);
void  FUN_10002680(char *param_1);
void  FUN_10002750(char *param_1);
void  FUN_10002820(void *this_ptr,int param_1,int param_2,int param_3);
void  FUN_100028c0(void *this_ptr,int param_1);
void  FUN_10002940(void *this_ptr,int param_1);
int  FUN_100029d0(int param_1);
void FUN_100034b0(void *param_1,int param_2);
void FUN_100037f0(void);

void OnInit();
void ProcessScenary();


void __cdecl FUN_100011e0(int param_1)

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





void __cdecl FUN_10001280(int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_44 [15];
  int uStack_8;
bVar1 = FUN_10001e30((intptr_t)&DAT_10031b70);
  if (bVar1) {
    FUN_10001e80(&DAT_10031b70,param_1,param_2,param_3);
  }
  uStack_8 = 0x100012ce;
  return;
}





void  FUN_100012f0(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterDynGroup(this_ptr);
  *(int *)((intptr_t)local_8 + 0xc) = param_1;
  *(int *)((intptr_t)local_8 + 0x10) = param_2;
  *(int *)((intptr_t)local_8 + 0x1c) = param_3;
  *(int *)((intptr_t)local_8 + 0x18) = 0;
  local_8 = (void *)0x10001355;
  return;
}





int  FUN_10001380(intptr_t param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return *(int *)(param_1 + 0x18);
}





void  FUN_100013c0(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  CreateObject0(this_ptr,*(int *)((intptr_t)this_ptr + 0x10),*(int *)((intptr_t)this_ptr + 0xc),
                *(char *)((intptr_t)this_ptr + 0x1c),param_1,0);
  *(int *)((intptr_t)local_8 + 0x18) = 1;
  *(int *)((intptr_t)local_8 + 8) = param_2;
  *(int *)((intptr_t)local_8 + 0x14) = param_1;
  local_8 = (void *)0x10001437;
  return;
}





void  FUN_10001460(intptr_t param_1)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int uVar4;
  int uVar5;
  int local_4c [16];
  int local_c;
  int local_8;
local_c = *(int *)(param_1 + 0x18);
  local_8 = param_1;
  if (local_c == 1) {
    iVar2 = GetTotalAmount0(param_1);
    if (iVar2 < 1) {
      *(int *)(local_8 + 0x18) = 0;
    }
    else {
      iVar2 = FUN_10001c60(*(int *)(local_8 + 8));
      iVar2 = GetUnitsAmount1(&DAT_10031d30,iVar2);
      if (iVar2 < 1) {
        *(int *)(local_8 + 0x18) = 2;
      }
      else {
        SelectUnits(local_8,0);
        uVar5 = 0;
        uVar4 = 0;
        FUN_10001910(*(int *)(local_8 + 8));
        SelSendAndKill(*(char *)(local_8 + 0x1c),uVar1,uVar4,uVar5);
      }
    }
  }
  else if (local_c == 2) {
    iVar2 = GetTotalAmount0(param_1);
    if (iVar2 < 1) {
      *(int *)(local_8 + 0x18) = 0;
    }
    else {
      SelectUnits(local_8,0);
      SelSendAndKill(*(char *)(local_8 + 0x1c),*(int *)(local_8 + 0x14),0,0);
      iVar2 = GetUnitsAmount1(*(int *)(local_8 + 0x14),local_8);
      if (0 < iVar2) {
        SelectUnits(local_8,0);
        SelErase(*(char *)(local_8 + 0x1c));
        *(int *)(local_8 + 0x18) = 0;
      }
    }
  }
  return;
}





void  FUN_10001680(void *param_1)

{
  char cVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = param_1;
  FUN_10001ca0((intptr_t)param_1);
  if ((0 < iVar2) && (*(int *)((intptr_t)local_8 + 0x1c) + 1 < *(int *)((intptr_t)local_8 + 0x20))) {
    if (*(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x2c) == 1) {
      FUN_10001d10(local_8,*(int *)
                                          ((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28))
      ;
      if (cVar1 != '\0') {
        FUN_10001280((intptr_t)local_8 + 0xc,
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x28),
                           *(int *)((intptr_t)local_8 + *(int *)((intptr_t)local_8 + 0x1c) * 8 + 0x30))
        ;
      }
      FUN_10001d10(local_8,*(int *)
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
  local_8 = (void *)0x10001882;
  return;
}





void  FUN_10001910(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  CreateZoneNearGroup(param_1 + 0x14,&DAT_10031ba0,param_1 + 0xc,300);
  return;
}





void  FUN_10001990(void *this_ptr,int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10001a00(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
*(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x28) = param_1;
  *(int *)((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x20) * 8 + 0x2c) = 2;
  *(int *)((intptr_t)this_ptr + 0x20) = *(int *)((intptr_t)this_ptr + 0x20) + 1;
  return;
}





void  FUN_10001a70(void *this_ptr,int param_1,int param_2,int param_3)

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
  local_8 = (int *)0x10001ae1;
  return;
}





void  FUN_10001b10(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  int local_c;
  int *local_8;
local_8 = this_ptr;
  FUN_10001ca0((intptr_t)this_ptr);
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
    FUN_10001990(local_8,param_1,0);
    local_8[7] = 0;
  }
  local_8 = (int *)0x10001c11;
  return;
}





int  FUN_10001c60(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1 + 0xc;
}





void  FUN_10001ca0(intptr_t param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = param_1;
  GetUnitsByNation(param_1 + 0xc,*(char *)(param_1 + 0x24));
  return;
}





void  FUN_10001d10(void *this_ptr,int param_1)

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
  FUN_10001ca0((intptr_t)local_8);
  if (iVar2 == iVar1) {
    local_c = 1;
  }
  local_8 = (void *)0x10001d70;
  return;
}





void  FUN_10001d90(void *this_ptr,int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0xc,param_1);
  FUN_100011e0((intptr_t)local_8 + 0xc);
  *(int *)((intptr_t)local_8 + 0x18) = uVar1;
  *(int *)((intptr_t)local_8 + 0x14) = 0;
  *(int *)((intptr_t)local_8 + 0x1c) = param_2;
  local_8 = (void *)0x10001dff;
  return;
}





BOOL  FUN_10001e30(intptr_t param_1)

{
  int iVar1;
  int *puVar2;
  int local_4c [18];
return *(int *)(param_1 + 0x14) == 0;
}





void  FUN_10001e80(void *this_ptr,int param_1,int param_2,int param_3)

{
  BOOL bVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  int *local_8;
local_8 = this_ptr;
  bVar1 = FUN_10001e30((intptr_t)this_ptr);
  if (bVar1) {
    local_8[2] = param_1;
    *local_8 = param_2;
    local_8[1] = param_3;
    SelectUnits(local_8 + 3,0);
    SelSendTo(*(char *)(local_8 + 6),*local_8,0,0);
    local_8[5] = 1;
  }
  local_8 = (int *)0x10001f1d;
  return;
}





void  FUN_10001f50(int param_1)

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





void  FUN_10002000(int param_1)

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





void  FUN_100020a0(int param_1)

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





void  FUN_10002120(intptr_t param_1)

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
      FUN_10002000(local_8);
      *(int *)(local_8 + 0x14) = 2;
    }
    break;
  case 1:
    FUN_10001f50(local_8);
    if (cVar1 != '\0') {
      SelSendTo(*(char *)(local_8 + 0x18),*(int *)(local_8 + 4),0,0);
      *(int *)(local_8 + 0x14) = 3;
    }
    break;
  case 2:
    uVar2 = CheckLeaveAbility((int)*(char *)(local_8 + 0x18));
    if ((uVar2 & 0xff) != 0) {
      FUN_100020a0(local_8);
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





void 
FUN_10002330(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  char uVar1;
  int iVar2;
  int *puVar3;
  int local_48 [16];
  char *local_8;
*(int *)((intptr_t)this_ptr + 6) = param_1;
  *(int *)((intptr_t)this_ptr + 10) = param_2;
  local_8 = this_ptr;
  FUN_100011e0(param_1);
  local_8[1] = uVar1;
  *local_8 = param_3;
  *(int *)(local_8 + 2) = param_4;
  RegisterDynGroup(local_8 + 0xe);
  local_8 = (char *)0x100023a8;
  return;
}





void 
FUN_100023d0(void *this_ptr,int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  RegisterZone((intptr_t)local_8 + 0x1e,param_2);
  FUN_10002330(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_3,param_4);
  local_8 = (void *)0x10002452;
  return;
}





void  FUN_10002480(void *this_ptr,int param_1,char param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
local_8 = this_ptr;
  RegisterUnits((intptr_t)this_ptr + 0x16,param_1);
  CreateZoneNearGroup((intptr_t)local_8 + 0x1e,&DAT_10031ba0,(intptr_t)local_8 + 0x16,300);
  FUN_10002330(local_8,(intptr_t)local_8 + 0x16,(intptr_t)local_8 + 0x1e,param_2,param_3);
  local_8 = (void *)0x1000250f;
  return;
}





void  FUN_10002540(char *param_1)

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
      FUN_10002680(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  uVar1 = Trigg(local_8[2]);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = GetUnitsAmount0(*(int *)(local_8 + 10),*local_8);
    if (iVar2 < 1) {
      FUN_10002750(local_8);
      SetTrigg(local_8[2],0);
    }
  }
  local_8 = (char *)0x1000263b;
  return;
}





void  FUN_10002680(char *param_1)

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
  local_8 = (char *)0x1000271a;
  return;
}





void  FUN_10002750(char *param_1)

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
  local_8 = (char *)0x100027ea;
  return;
}





void  FUN_10002820(void *this_ptr,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  void *local_8;
local_8 = this_ptr;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    ProduceUnitFast(local_8,(intptr_t)local_8 + param_1 * 8 + 8,param_3,
                    *(int *)((intptr_t)local_8 + 0x30));
  }
  local_8 = (void *)0x10002892;
  return;
}





void  FUN_100028c0(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
*(int *)((intptr_t)this_ptr + 0x2c) = 0;
  *(int *)((intptr_t)this_ptr + 0x30) = 400;
  local_8 = this_ptr;
  RegisterUnits(this_ptr,param_1);
  local_8 = (void *)0x10002918;
  return;
}





void  FUN_10002940(void *this_ptr,int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  void *local_8;
if (*(int *)((intptr_t)this_ptr + 0x2c) < 4) {
    local_8 = this_ptr;
    RegisterUnitType((intptr_t)this_ptr + *(int *)((intptr_t)this_ptr + 0x2c) * 8 + 8,param_1);
    *(int *)((intptr_t)local_8 + 0x2c) = *(int *)((intptr_t)local_8 + 0x2c) + 1;
  }
  local_8 = (void *)0x100029a6;
  return;
}





int  FUN_100029d0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [17];
return param_1;
}





void __cdecl FUN_100034b0(void *param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
if (param_2 == 1) {
    FUN_10001b10(param_1,&DAT_10031cf0,5);
    FUN_10001990(param_1,&DAT_10031cf0,0);
    FUN_10001a00(param_1,&DAT_10031cd8);
    FUN_10001990(param_1,&DAT_10031cb0,1);
    FUN_10001990(param_1,&DAT_10031ba0,0);
    FUN_10001a00(param_1,&DAT_10031ba8);
    FUN_10001a00(param_1,&DAT_10031bb0);
    FUN_10001a00(param_1,&DAT_10031bb8);
    FUN_10001a00(param_1,&DAT_10031bc0);
    FUN_10001a00(param_1,&DAT_10031bc8);
    FUN_10001a00(param_1,&DAT_10031bd0);
    FUN_10001a00(param_1,&DAT_10031bd8);
    FUN_10001a00(param_1,&DAT_10031be0);
    FUN_10001a00(param_1,&DAT_10031c60);
    FUN_10001a00(param_1,&DAT_10031c68);
    FUN_10001a00(param_1,&DAT_10031c70);
    FUN_10001a00(param_1,&DAT_10031c78);
    FUN_10001a00(param_1,&DAT_10031c88);
    FUN_10001a00(param_1,&DAT_10031c98);
    FUN_10001a00(param_1,&DAT_10031ca8);
    FUN_10001a00(param_1,&DAT_10031cb8);
    FUN_10001a00(param_1,&DAT_10031d10);
    FUN_10001a00(param_1,&DAT_10031d20);
    FUN_10001a00(param_1,&DAT_10031cd0);
    FUN_10001a00(param_1,&DAT_10031cc0);
  }
  if (param_2 == 2) {
    FUN_10001b10(param_1,&DAT_10031d20,4);
    FUN_10001a00(param_1,&DAT_10031d10);
    FUN_10001a00(param_1,&DAT_10031cb8);
    FUN_10001a00(param_1,&DAT_10031ca8);
    FUN_10001a00(param_1,&DAT_10031c98);
    FUN_10001a00(param_1,&DAT_10031c88);
    FUN_10001a00(param_1,&DAT_10031c78);
    FUN_10001a00(param_1,&DAT_10031ca0);
    FUN_10001a00(param_1,&DAT_10031c90);
    FUN_10001a00(param_1,&DAT_10031c80);
    FUN_10001a00(param_1,&DAT_10031ce0);
    FUN_10001a00(param_1,&DAT_10031cc8);
    FUN_10001a00(param_1,&DAT_10031bb8);
    FUN_10001a00(param_1,&DAT_10031bb0);
    FUN_10001a00(param_1,&DAT_10031ba8);
    FUN_10001990(param_1,&DAT_10031ba0,1);
    FUN_10001990(param_1,&DAT_10031cb0,0);
    FUN_10001a00(param_1,&DAT_10031cd8);
    FUN_10001a00(param_1,&DAT_10031cf0);
    FUN_10001a00(param_1,&DAT_10031d00);
  }
  uStack_8 = 0x10003740;
  return;
}





void FUN_100037f0(void)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
local_c = rand();
  local_c = local_c % 6;
  switch(local_c) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
  }
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
SetPlayerName(0,"AUSTRIANS");
  SetPlayerName(1,"AUSTRIANS");
  SetPlayerName(2,"PRUSSIA");
  RegisterZone(&DAT_10031ba0,DAT_1002c164);
  RegisterZone(&DAT_10031ba8,DAT_1002c160);
  RegisterZone(&DAT_10031bb0,DAT_1002c15c);
  RegisterZone(&DAT_10031bb8,DAT_1002c158);
  RegisterZone(&DAT_10031bc0,DAT_1002c154);
  RegisterZone(&DAT_10031bc8,DAT_1002c150);
  RegisterZone(&DAT_10031bd0,DAT_1002c14c);
  RegisterZone(&DAT_10031bd8,DAT_1002c148);
  RegisterZone(&DAT_10031be0,DAT_1002c144);
  RegisterZone(&DAT_10031c60,DAT_1002c140);
  RegisterZone(&DAT_10031c68,DAT_1002c13c);
  RegisterZone(&DAT_10031c70,DAT_1002c138);
  RegisterZone(&DAT_10031c78,DAT_1002c134);
  RegisterZone(&DAT_10031c88,DAT_1002c130);
  RegisterZone(&DAT_10031c98,DAT_1002c12c);
  RegisterZone(&DAT_10031ca8,DAT_1002c128);
  RegisterZone(&DAT_10031cb8,DAT_1002c124);
  RegisterZone(&DAT_10031cc8,DAT_1002c120);
  RegisterZone(&DAT_10031ce0,DAT_1002c11c);
  RegisterZone(&DAT_10031c80,DAT_1002c118);
  RegisterZone(&DAT_10031c90,DAT_1002c114);
  RegisterZone(&DAT_10031ca0,DAT_1002c110);
  RegisterZone(&DAT_10031cb0,DAT_1002c10c);
  RegisterZone(&DAT_10031cc0,DAT_1002c108);
  RegisterZone(&DAT_10031cd8,DAT_1002c104);
  RegisterZone(&DAT_10031cf0,DAT_1002c100);
  RegisterZone(&DAT_10031d00,DAT_1002c0fc);
  RegisterZone(&DAT_10031d10,DAT_1002c0f8);
  RegisterZone(&DAT_10031d20,DAT_1002c0f4);
  RegisterZone(&DAT_10031cd0,DAT_1002c0f0);
  RegisterZone(&DAT_10031ce8,DAT_1002c0ec);
  RegisterZone(&DAT_10031cf8,DAT_1002c0e8);
  RegisterZone(&DAT_10031d08,DAT_1002c0e4);
  RegisterZone(&DAT_10031d18,DAT_1002c0e0);
  RegisterZone(&DAT_10031d28,DAT_1002c0dc);
  RegisterZone(&DAT_10031d30,DAT_1002c0d8);
  RegisterFormation(&DAT_10031b90,"#ODIN");
  RegisterFormation(&DAT_10031c58,"#SQUARE36");
  RegisterUnitType(&DAT_10031b98,"GRUZ(UN)");
  RegisterUnitType(&DAT_10031d78,"Mameluk(AL)");
  RegisterUnitType(&DAT_100313e0,"Tatarin(TU)");
  RegisterDynGroup(&DAT_100314c8);
  RegisterDynGroup(&DAT_100314d0);
  RegisterUnits(&DAT_100313f8,"GAim1");
  RegisterUnits(&DAT_100313f8,"GAim1");
  RegisterUnits(&DAT_10031b68,DAT_1002c08c);
  FUN_100028c0(&DAT_10031d40,DAT_1002c088);
  FUN_10002940(&DAT_10031d40,"Konni_Ricar(au)");
  FUN_10002940(&DAT_10031d40,"Dragun(au)");
  FUN_100028c0(&DAT_10031c20,DAT_1002c060);
  FUN_10002940(&DAT_10031c20,"Pikiner_evro(au)");
  FUN_10002940(&DAT_10031c20,"Mushketer_avstr(au)");
  FUN_10002480(&DAT_10031bf8,"GGate1",0,0x62);
  FUN_10001d90(&DAT_10031b70,"GTransport1",1);
  FUN_10001a70(&DAT_100314d8,&DAT_10031b98,&DAT_10031b90,1);
  FUN_10001a70(&DAT_100315f0,&DAT_10031b98,&DAT_10031b90,1);
  FUN_10001a70(&DAT_10031708,&DAT_10031b98,&DAT_10031b90,1);
  FUN_10001a70(&DAT_10031820,&DAT_10031b98,&DAT_10031b90,1);
  FUN_10001a70(&DAT_10031938,&DAT_10031b98,&DAT_10031b90,1);
  FUN_10001a70(&DAT_10031a50,&DAT_10031b98,&DAT_10031b90,1);
  FUN_100012f0(&DAT_10031408,&DAT_10031d78,&DAT_10031c58,2);
  FUN_100012f0(&DAT_10031428,&DAT_100313e0,&DAT_10031c58,2);
  FUN_100012f0(&DAT_10031448,&DAT_10031d78,&DAT_10031c58,2);
  FUN_100012f0(&DAT_10031468,&DAT_100313e0,&DAT_10031c58,2);
  FUN_100012f0(&DAT_10031488,&DAT_10031d78,&DAT_10031c58,2);
  FUN_100012f0(&DAT_100314a8,&DAT_100313e0,&DAT_10031c58,2);
  RegisterVar(&DAT_10031d38,4);
  RegisterVar(&DAT_100313f0,4);
  RegisterVar(&DAT_100313ec,4);
  RegisterVar(&DAT_100314d8,0x118);
  RegisterVar(&DAT_100315f0,0x118);
  RegisterVar(&DAT_10031708,0x118);
  RegisterVar(&DAT_10031820,0x118);
  RegisterVar(&DAT_10031938,0x118);
  RegisterVar(&DAT_10031a50,0x118);
  RegisterVar(&DAT_10031408,0x20);
  RegisterVar(&DAT_10031428,0x20);
  RegisterVar(&DAT_10031448,0x20);
  RegisterVar(&DAT_10031468,0x20);
  RegisterVar(&DAT_10031488,0x20);
  RegisterVar(&DAT_100314a8,0x20);
  uStack_8 = 0x1000327d;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  int *puVar5;
  int local_48 [16];
  int local_8;
uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    DAT_10031d38 = GetDiff(0);
    SetResource(0,3,1000000);
    SetResource(0,1,DAT_10031d38 * -5000 + 20000);
    SetResource(0,0,0);
    SetResource(0,2,0);
    SetResource(0,5,1000000);
    SetResource(0,4,1000000);
    ChangeFriends(0,3);
    ChangeFriends(1,3);
    SetTrigg(99,0);
    FUN_100034b0(&DAT_100314d8,1);
    FUN_100034b0(&DAT_100315f0,2);
    SetLightSpot(&DAT_10031cb8,1,1);
    SetLightSpot(&DAT_10031c78,1,2);
    SetLightSpot(&DAT_10031be0,1,3);
    SetLightSpot(&DAT_10031bb8,1,4);
    SetLightSpot(&DAT_10031ba0,1,5);
    SetLightSpot(&DAT_10031cb0,1,6);
    SetLightSpot(&DAT_10031ce8,1,7);
    SetLightSpot(&DAT_10031c80,1,8);
    SetLightSpot(&DAT_10031c68,1,9);
    SetLightSpot(&DAT_10031ca8,1,10);
    SetLightSpot(&DAT_10031c90,1,0xb);
    SetLightSpot(&DAT_10031bd0,1,0xb);
    SetLightSpot(&DAT_10031ba8,1,0xc);
    puVar5 = &DAT_10031cb8;
    uVar2 = FUN_100029d0(&DAT_10031c20);
    SetDestPoint(uVar2,puVar5);
    puVar5 = &DAT_10031cb8;
    uVar2 = FUN_100029d0(&DAT_10031d40);
    SetDestPoint(uVar2,puVar5);
    RunTimer(0xb,0x5dc);
    RunTimer(0xc,2000);
    RunTimer(0xd,3000);
    RunTimer(0xe,4000);
    RunTimer(0xf,500);
    RunTimer(0x10,1000);
    RunTimer(0x15,0x5dc);
    RunTimer(0x16,2000);
    RunTimer(0x17,3000);
    RunTimer(0x18,4000);
    RunTimer(0x19,500);
    RunTimer(0x1a,1000);
    DAT_100313f0 = 0;
    DAT_100313ec = (DAT_10031d38 + 1) * 0xc;
    ShowPageParam("#PAGE0",DAT_100313ec);
  }
  FUN_10002540(&DAT_10031bf8);
  FUN_10002120((intptr_t)&DAT_10031b70);
  FUN_10001680(&DAT_100314d8);
  FUN_10001680(&DAT_100315f0);
  FUN_10001680(&DAT_10031708);
  FUN_10001680(&DAT_10031820);
  FUN_10001680(&DAT_10031938);
  FUN_10001680(&DAT_10031a50);
  FUN_10001460((intptr_t)&DAT_10031408);
  FUN_10001460((intptr_t)&DAT_10031428);
  FUN_10001460((intptr_t)&DAT_10031448);
  FUN_10001460((intptr_t)&DAT_10031468);
  FUN_10001460((intptr_t)&DAT_10031488);
  FUN_10001460((intptr_t)&DAT_100314a8);
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031cb8,&DAT_10031b68);
    if (0 < iVar3) {
      local_8 = AskMultilineQuestion(7,"#PAGE1",0,"FM8_0|FM8_1|FM8_2|FM8_3|FM_non");
      switch(local_8) {
      case 0:
        iVar3 = GetResource(0,1);
        if (iVar3 < 200) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,1,-200);
          FUN_10002820(&DAT_10031c20,0,5,&DAT_100314d0);
        }
        break;
      case 1:
        iVar3 = GetResource(0,1);
        if (iVar3 < 300) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,1,-300);
          FUN_10002820(&DAT_10031c20,1,5,&DAT_100314d0);
        }
        break;
      case 2:
        iVar3 = GetResource(0,1);
        if (iVar3 < 500) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,1,-500);
          FUN_10002820(&DAT_10031d40,0,5,&DAT_100314d0);
        }
        break;
      case 3:
        iVar3 = GetResource(0,1);
        if (iVar3 < 600) {
          ShowPage("#PAGE2");
        }
        else {
          AddResource(0,1,-600);
          FUN_10002820(&DAT_10031d40,1,5,&DAT_100314d0);
        }
        break;
      case 4:
        SetTrigg(1,0);
      }
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    iVar3 = GetUnitsAmount1(&DAT_10031cb8,&DAT_10031b68);
    if (iVar3 == 0) {
      SetTrigg(1,0);
    }
  }
  DAT_100313e8 = GetUnitsAmount2(&DAT_10031d00,&DAT_10031b98,1);
  DAT_100313f0 = DAT_100313f0 + DAT_100313e8;
  if (0 < DAT_100313e8) {
    SelectTypeOfUnitsInZone(&DAT_10031d00,&DAT_10031b98,1,0);
    SelErase(1);
    AddResource(0,1,DAT_100313e8 * ((3 - DAT_10031d38) * 1000 + 1000));
  }
  DAT_100313e8 = GetUnitsAmount2(&DAT_10031cc0,&DAT_10031b98,1);
  DAT_100313f0 = DAT_100313f0 + DAT_100313e8;
  if (0 < DAT_100313e8) {
    SelectTypeOfUnitsInZone(&DAT_10031cc0,&DAT_10031b98,1,0);
    SelErase(1);
    AddResource(0,1,DAT_100313e8 * ((3 - DAT_10031d38) * 1000 + 1000));
  }
  uVar1 = TimerDone(0xb);
  if (((uVar1 & 0xff) != 0) && (FUN_10001ca0((intptr_t)&DAT_100314d8), iVar3 == 0)) {
    FUN_100034b0(&DAT_100314d8,1);
    RunTimer(0xb,7000);
  }
  uVar1 = TimerDone(0xc);
  if (((uVar1 & 0xff) != 0) && (FUN_10001ca0((intptr_t)&DAT_100315f0), iVar3 == 0)) {
    FUN_100034b0(&DAT_100315f0,2);
    RunTimer(0x16,6000);
  }
  uVar1 = TimerDone(0xd);
  if (((uVar1 & 0xff) != 0) && (FUN_10001ca0((intptr_t)&DAT_10031708), iVar3 == 0)) {
    FUN_100034b0(&DAT_10031708,1);
    RunTimer(0xd,8000);
  }
  uVar1 = TimerDone(0xe);
  if (((uVar1 & 0xff) != 0) && (FUN_10001ca0((intptr_t)&DAT_10031820), iVar3 == 0)) {
    FUN_100034b0(&DAT_10031820,2);
    RunTimer(0xe,9000);
  }
  uVar1 = TimerDone(0xf);
  if (((uVar1 & 0xff) != 0) && (FUN_10001ca0((intptr_t)&DAT_10031938), iVar3 == 0)) {
    FUN_100034b0(&DAT_10031938,1);
    RunTimer(0xf,7000);
  }
  uVar1 = TimerDone(0x10);
  if (((uVar1 & 0xff) != 0) && (FUN_10001ca0((intptr_t)&DAT_10031a50), iVar3 == 0)) {
    FUN_100034b0(&DAT_10031a50,2);
    RunTimer(0x10,7000);
  }
  uVar1 = TimerDone(0x15);
  if (((uVar1 & 0xff) != 0) && (iVar3 = FUN_10001380((intptr_t)&DAT_10031408), iVar3 == 0)) {
    FUN_100037f0();
    FUN_100013c0(&DAT_10031408,&DAT_10031cf8,uVar2);
    RunTimer(0x15,1000);
  }
  uVar1 = TimerDone(0x16);
  if (((uVar1 & 0xff) != 0) && (iVar3 = FUN_10001380((intptr_t)&DAT_10031428), iVar3 == 0)) {
    FUN_100037f0();
    FUN_100013c0(&DAT_10031428,&DAT_10031cf8,uVar2);
    RunTimer(0x16,1000);
  }
  uVar1 = TimerDone(0x17);
  if (((uVar1 & 0xff) != 0) && (iVar3 = FUN_10001380((intptr_t)&DAT_10031448), iVar3 == 0)) {
    FUN_100037f0();
    FUN_100013c0(&DAT_10031448,&DAT_10031d08,uVar2);
    RunTimer(0x17,1000);
  }
  uVar1 = TimerDone(0x18);
  if (((uVar1 & 0xff) != 0) && (iVar3 = FUN_10001380((intptr_t)&DAT_10031468), iVar3 == 0)) {
    FUN_100037f0();
    FUN_100013c0(&DAT_10031468,&DAT_10031d18,uVar2);
    RunTimer(0x18,1000);
  }
  uVar1 = TimerDone(0x19);
  if (((uVar1 & 0xff) != 0) && (iVar3 = FUN_10001380((intptr_t)&DAT_10031488), iVar3 == 0)) {
    FUN_100037f0();
    FUN_100013c0(&DAT_10031488,&DAT_10031d28,uVar2);
    RunTimer(0x19,1000);
  }
  uVar1 = TimerDone(0x1a);
  if (((uVar1 & 0xff) != 0) && (iVar3 = FUN_10001380((intptr_t)&DAT_100314a8), iVar3 == 0)) {
    FUN_100037f0();
    FUN_100013c0(&DAT_100314a8,&DAT_10031d28,uVar2);
    RunTimer(0x1a,1000);
  }
  iVar3 = GetTotalAmount0(&DAT_100314d0);
  if (0 < iVar3) {
    SelectUnits1(1,&DAT_100314d0,0);
    SelChangeNation(1,0);
  }
  iVar3 = GetGlobalTime();
  if (29999 < iVar3) {
    iVar3 = GetGlobalTime();
    if (iVar3 < 0x7538) {
      ShowPageParam("#PAGE5",DAT_100313f0,DAT_100313ec);
    }
  }
  iVar3 = GetGlobalTime();
  if (44999 < iVar3) {
    iVar3 = GetGlobalTime();
    if (iVar3 < 0xafd0) {
      ShowPageParam("#PAGE6",DAT_100313f0,DAT_100313ec);
    }
  }
  iVar3 = GetGlobalTime();
  if (60000 < iVar3) {
    if (DAT_100313f0 < DAT_100313ec) {
      ShowPageParam("#PAGE4",DAT_100313f0);
      LooseGame();
    }
    else {
      ShowPageParam("#PAGE3",DAT_100313f0);
      ShowVictory();
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

#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
intptr_t this_ptr = 0;
char DAT_1000a040[] = "@\xd2";
long long DAT_1000a044 = 0;
char DAT_1000a048[] = "p\xd6";
long long DAT_1000a4dc = 0;
char DAT_1000a4e0[] = "RESC";
char DAT_1000a4e8[] = "RESI";
char DAT_1000a4f0[] = "RESG";
char DAT_1000a4f8[] = "RESS";
char DAT_1000a500[] = "RESF";
char DAT_1000a508[] = "RESW";
char DAT_1000a510[] = "SITY";
char DAT_1000a52c[] = "COAL";
char DAT_1000a534[] = "IRON";
char DAT_1000a53c[] = "GOLD";
char DAT_1000a54c[] = "FOOD";
char DAT_1000a554[] = "WOOD";
long long DAT_1000a574 = 0;
long long DAT_1000d218 = 0;
long long DAT_1000d220 = 0;
long long DAT_1000d228 = 0;
long long DAT_1000d230 = 0;
long long DAT_1000d238 = 0;
unsigned char DAT_1000d240[768] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int DAT_1000d4eb = 0;
long long DAT_1000d540 = 0;
long long DAT_1000d548 = 0;
long long DAT_1000d550 = 0;
long long DAT_1000d558 = 0;
long long DAT_1000d560 = 0;
unsigned char DAT_1000d568[120] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
long long DAT_1000d577 = 0;
long long DAT_1000d586 = 0;
long long DAT_1000d598 = 0;
long long DAT_1000d5a0 = 0;
long long DAT_1000d5a8 = 0;
long long DAT_1000d5b0 = 0;
long long DAT_1000d5b8 = 0;
long long DAT_1000d5c0 = 0;
long long DAT_1000d5c8 = 0;
long long DAT_1000d5d0 = 0;
long long DAT_1000d5d8 = 0;
long long DAT_1000d5e0 = 0;
long long DAT_1000d5e8 = 0;
long long DAT_1000d5f0 = 0;
long long DAT_1000d5f8 = 0;
long long DAT_1000d600 = 0;
long long DAT_1000d608 = 0;
long long DAT_1000d610 = 0;
long long DAT_1000d618 = 0;
long long DAT_1000d620 = 0;
long long DAT_1000d628 = 0;
long long DAT_1000d630 = 0;
long long DAT_1000d638 = 0;
long long DAT_1000d640 = 0;
long long DAT_1000d648 = 0;
long long DAT_1000d650 = 0;
long long DAT_1000d658 = 0;
long long DAT_1000d660 = 0;
long long DAT_1000d668 = 0;
unsigned char DAT_1000d670[768] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int DAT_1000d91b = 0;
long long DAT_1000d970 = 0;
long long DAT_1000d978 = 0;
long long DAT_1000d980 = 0;
long long DAT_1000d988 = 0;
long long DAT_1000d990 = 0;
long long DAT_1000d998 = 0;
long long DAT_1000d9a0 = 0;
long long DAT_1000d9a8 = 0;
long long DAT_1000d9b0 = 0;
long long DAT_1000d9b8 = 0;
long long DAT_1000d9c0 = 0;
long long DAT_1000d9c8 = 0;
long long DAT_1000d9d0 = 0;
long long DAT_1000d9d8 = 0;
long long DAT_1000d9e0 = 0;
long long DAT_1000d9e8 = 0;
unsigned char DAT_1000d9f0[768] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int DAT_1000dc9b = 0;
long long DAT_1000dcf0 = 0;
long long DAT_1000dcf8 = 0;
long long DAT_1000dd00 = 0;
unsigned char DAT_1000dd08[800] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x34, 0x31, 0x44, 0x31, 0x49, 0x31, 0x4E, 0x31, 0x54, 0x31, 0x5A, 0x31, 0x60, 0x31, 0x8F, 0x31, 0x9F, 0x31, 0xAF, 0x31, 0x37, 0x33, 0xBF, 0x33, 0xD4, 0x33, 0xD8, 0x33, 0xDC, 0x33, 0xE0, 0x33};
long long DAT_1000dd17 = 0;
long long DAT_1000dd26 = 0;
long long DAT_1000dd35 = 0;
long long DAT_1000dd44 = 0;
long long DAT_1000dd53 = 0;
long long DAT_1000dd68 = 0;
unsigned char DAT_1000dd70[64] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000ddb0[64] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int DAT_1000ddf4 = 0;
long long DAT_1000e3c0 = 0;

/* Stubs for missing internal functions */
int FUN_10003760() { return 0; }
int FUN_10003d2b() { return 0; }
int FUN_10003fa8() { return 0; }
int FUN_10003ffa() { return 0; }
int FUN_10004185() { return 0; }
int FUN_1000428e() { return 0; }
int FUN_1000436a() { return 0; }
int FUN_100045b0() { return 0; }
int FUN_10004a92() { return 0; }
int FUN_10004cb4() { return 0; }
int FUN_10004d8c() { return 0; }
int FUN_10004efc() { return 0; }


/* Forward declarations */
void 
FUN_10001020(void *this_ptr,char param_1,int param_2,char *param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13);
void 
FUN_100011d0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
void  FUN_10001220(intptr_t param_1);
void  FUN_10001240(int param_1);
void  FUN_100012f0(int param_1);
void  FUN_100013f0(int param_1);
int  FUN_100014d0(int param_1);
void  FUN_10001510(void *this_ptr,int param_1);
void  FUN_100015f0(int param_1);
int  FUN_10001690(int param_1);
int  FUN_100016c0(void *param_1);
void  FUN_10001710(void *param_1);
void  FUN_10001840(void *param_1);
void  FUN_10001980(void *this_ptr,int param_1);
unsigned int  FUN_10001ac0(void *param_1);
void  FUN_10001c00(void *this_ptr,int param_1);
void  FUN_10001c40(void *this_ptr,int param_1);
void  FUN_10001ca0(void *this_ptr,int param_1,void *param_2);
int  FUN_10001f00(void *this_ptr,int param_1);
int  FUN_10001f70(void *this_ptr,int param_1);
void  FUN_10001fe0(void *this_ptr,int param_1,int param_2);
void  FUN_10002090(void *this_ptr,int param_1,char param_2,char param_3);
int FUN_100020c0(int param_1);
void 
FUN_100020e0(void *this_ptr,char *param_1,int param_2,int param_3,int param_4);
void 
FUN_10002150(void *this_ptr,char *param_1,int param_2,int param_3,int param_4);
void 
FUN_100021a0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7);
void 
FUN_10002270(void *this_ptr,int param_1,int param_2,int param_3,int param_4);
void  FUN_100023c0(void *this_ptr,int param_1,int param_2);
void FUN_100032f0(int param_1,int param_2);
void FUN_10003590(int *param_1);
int FUN_100036a0(byte *param_1,byte *param_2);
unsigned int * FUN_100036e0(unsigned int *param_1,char *param_2);
unsigned int FUN_100037dd(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
unsigned int FUN_1000380c(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4);
int FUN_10003902(char *param_1);
int FUN_10003924(char *param_1);
int FUN_10003a85(int *param_1,int param_2,DWORD param_3);
int FUN_10003ab1(int *param_1,int param_2,DWORD param_3);
int * FUN_10003b3e(LPCSTR param_1,char *param_2,unsigned int param_3);
void FUN_10003b6f(LPCSTR param_1,char *param_2);

void OnInit();
void ProcessScenary();


void 
FUN_10001020(void *this_ptr,char param_1,int param_2,char *param_3,int param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,
            int param_10,int param_11,int param_12,int param_13)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *(int *)((intptr_t)this_ptr + 0x2a7) = param_2;
  *(int *)((intptr_t)this_ptr + 0x28c) = param_10;
  *(int *)((intptr_t)this_ptr + 0x2ab) = param_4;
  *(int *)((intptr_t)this_ptr + 0x284) = param_8;
  *(int *)((intptr_t)this_ptr + 0x290) = param_11;
  *(int *)((intptr_t)this_ptr + 0x288) = param_9;
  *(int *)((intptr_t)this_ptr + 0x2f1) = param_13 * 0xf;
  *(int *)((intptr_t)this_ptr + 0x280) = param_7;
  *(int *)((intptr_t)this_ptr + 0x294) = param_12;
  *(char *)((intptr_t)this_ptr + 0x2e8) = (char)param_5;
  *(int *)((intptr_t)this_ptr + 0x2e9) = param_6;
  uVar2 = -1;
  *(char *)((intptr_t)this_ptr + 0x2f5) = 1;
  *(char *)((intptr_t)this_ptr + 0x2f6) = 1;
  *(int *)((intptr_t)this_ptr + 0x2fb) = 1;
  *(char *)((intptr_t)this_ptr + 0x2ff) = 1;
  do {
    pcVar4 = param_3;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((intptr_t)this_ptr + 0x298);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(int *)pcVar5 = *(int *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(char *)((intptr_t)this_ptr + 0x2af) = param_1;
  *(int *)((intptr_t)this_ptr + 700) = 1000;
  *(int *)((intptr_t)this_ptr + 0x2cc) = 0;
  *(int *)((intptr_t)this_ptr + 0x2c8) = 0;
  *(int *)((intptr_t)this_ptr + 0x2c4) = 0;
  *(int *)((intptr_t)this_ptr + 0x2c0) = 0;
  *(int *)((intptr_t)this_ptr + 0x2b8) = 0;
  if (param_1 != '\0') {
    return;
  }
  if (((param_6 == 0) || (param_6 == 1)) || (param_6 == 2)) {
    RegisterDynGroup((intptr_t)this_ptr + 0x2b0);
    CreateObject0(&DAT_1000d5e8,&DAT_1000dcf8,&DAT_1000d5a8,param_5,param_4,0);
    RemoveGroup(&DAT_1000d5e8,(intptr_t)this_ptr + 0x2b0);
  }
  if (param_6 == 0) {
    TakeWood((intptr_t)this_ptr + 0x2b0);
  }
  else if (param_6 != 1) {
    if (param_6 != 2) {
      *(int *)((intptr_t)this_ptr + 0x2ed) = 0xf;
      return;
    }
    goto LAB_100011a6;
  }
  TakeFood((intptr_t)this_ptr + 0x2b0);
LAB_100011a6:
  TakeStone((intptr_t)this_ptr + 0x2b0);
  *(int *)((intptr_t)this_ptr + 0x2ed) = 0xf;
  return;
}





void 
FUN_100011d0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  *(int *)((intptr_t)this_ptr + 0x284) = param_3;
  *(int *)((intptr_t)this_ptr + 0x288) = param_4;
  *(int *)((intptr_t)this_ptr + 0x28c) = param_5;
  *(int *)((intptr_t)this_ptr + 0x290) = param_6;
  *(int *)((intptr_t)this_ptr + 0x294) = param_7;
  *(int *)((intptr_t)this_ptr + 0x280) = param_2;
  *(int *)((intptr_t)this_ptr + 0x2ab) = param_1;
  return;
}





void  FUN_10001220(intptr_t param_1)

{
  if (*(char *)(param_1 + 0x2af) == '\0') {
    FUN_100012f0(param_1);
    FUN_100013f0(param_1);
  }
  return;
}





void  FUN_10001240(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 100;
  *(int *)(param_1 + 0x2e4) = 300;
  *(int *)(param_1 + 0x2e0) = 300;
  *(int *)(param_1 + 0x2d0) = 100;
  *(int *)(param_1 + 0x2d8) = 100;
  *(int *)(param_1 + 0x2d4) = 200;
  *(int *)(param_1 + 0x2dc) = 500;
  iVar2 = 0xc;
  do {
    if (iVar1 < *(int *)(param_1 + 0x2b8)) {
      *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + -8;
    }
    if (iVar1 < *(int *)(param_1 + 0x2c0)) {
      *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + -8;
    }
    if (iVar1 < *(int *)(param_1 + 700)) {
      *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2d4) + -0x10;
    }
    if (iVar1 < *(int *)(param_1 + 0x2c8)) {
      *(int *)(param_1 + 0x2e0) = *(int *)(param_1 + 0x2e0) + -0x18;
    }
    if (iVar1 < *(int *)(param_1 + 0x2cc)) {
      *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + -0x18;
    }
    if (iVar1 < *(int *)(param_1 + 0x2c4)) {
      *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2dc) + -0x28;
    }
    iVar1 = iVar1 * 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}





void  FUN_100012f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100014d0(param_1);
  iVar2 = 0;
  *(int *)(param_1 + 0x2ed) = iVar1;
  if (0 < iVar1) {
    do {
      if (*(char *)(param_1 + 0x2f5) == '\0') break;
      if ((0 < *(int *)(param_1 + 0x2f7)) && (4 < *(int *)(param_1 + 700))) {
        switch(*(int *)(param_1 + 0x2e9)) {
        case 0:
          *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 0x19;
          break;
        case 1:
          *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 0x14;
          break;
        case 2:
          *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 0x19;
          break;
        case 3:
          *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 5;
          break;
        case 4:
          *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0xf;
          break;
        case 5:
          *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2cc) + 0xf;
        }
        *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + -5;
        *(int *)(param_1 + 0x2f7) = *(int *)(param_1 + 0x2f7) + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(int *)(param_1 + 0x2f7) = *(int *)(param_1 + 0x2f7) + (3 - *(int *)(param_1 + 0x2fb)) * iVar1;
  AddResource(*(char *)(param_1 + 0x2e8) + -1,1,*(int *)(param_1 + 0x2fb) * iVar1);
  FUN_10001240(param_1);
  return;
}





void  FUN_100013f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2f7) < 0x3e9) {
    return;
  }
  iVar1 = FUN_100014d0(param_1);
  if (*(int *)(param_1 + 0x2f1) <= iVar1) {
    return;
  }
  iVar1 = FUN_100014d0(param_1);
  *(int *)(param_1 + 0x2ed) = iVar1;
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) goto LAB_100014af;
  CreateObject0(&DAT_1000d5e8,&DAT_1000d560,&DAT_1000d5a8,*(char *)(param_1 + 0x2e8),
                *(int *)(param_1 + 0x2ab),0);
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (iVar1 == 0) {
    TakeWood(&DAT_1000d5e8);
LAB_1000147e:
    TakeFood(&DAT_1000d5e8);
LAB_1000148c:
    TakeStone(&DAT_1000d5e8);
  }
  else {
    if (iVar1 == 1) goto LAB_1000147e;
    if (iVar1 == 2) goto LAB_1000148c;
  }
  RemoveGroup(&DAT_1000d5e8,param_1 + 0x2b0);
LAB_100014af:
  *(int *)(param_1 + 0x2f7) = *(int *)(param_1 + 0x2f7) + -1000;
  *(int *)(param_1 + 0x2ed) = *(int *)(param_1 + 0x2ed) + 1;
  return;
}





int  FUN_100014d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2e9);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    iVar1 = GetTotalAmount0(param_1 + 0x2b0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2ed);
    if (*(int *)(param_1 + 0x2f1) <= iVar1) {
      return *(int *)(param_1 + 0x2f1);
    }
  }
  return iVar1;
}





void  FUN_10001510(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  if ((*(char *)((intptr_t)this_ptr + 0x2af) == '\0') && (*(char *)((intptr_t)this_ptr + 0x2f6) != '\0')) {
    if ((*(char *)((intptr_t)this_ptr + 0x2ff) != '\0') &&
       (iVar1 = GetUnitsAmount2(*(int *)((intptr_t)this_ptr + 0x2ab),&DAT_1000d988,param_1),
       iVar1 != 0)) {
      uVar2 = AskMultilineQuestion(9,"#PAGE1",0,"VI1_1|VI1_2|VI1_3|VI1_4");
      switch(uVar2) {
      case 0:
        FUN_100015f0((intptr_t)this_ptr);
        *(char *)((intptr_t)this_ptr + 0x2ff) = 1;
        break;
      case 1:
        uVar2 = FUN_10001690((intptr_t)this_ptr);
        *(char *)((intptr_t)this_ptr + 0x2ff) = (char)uVar2;
        break;
      case 2:
        uVar2 = FUN_100016c0(this_ptr);
        *(char *)((intptr_t)this_ptr + 0x2ff) = (char)uVar2;
        break;
      case 3:
        *(char *)((intptr_t)this_ptr + 0x2ff) = 0;
      }
    }
    if ((*(char *)((intptr_t)this_ptr + 0x2ff) == '\0') &&
       (iVar1 = GetUnitsAmount2(*(int *)((intptr_t)this_ptr + 0x2ab),&DAT_1000d988,param_1),
       iVar1 == 0)) {
      *(char *)((intptr_t)this_ptr + 0x2ff) = 1;
    }
  }
  return;
}





void  FUN_100015f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100014d0(param_1);
  ShowPageParam("#PAGE11",param_1 + 0x298,
                (int)((unsigned char *)&DAT_1000dd08) + *(int *)(param_1 + 0x2e9) * 0xf,&DAT_1000dd08,
                *(int *)(param_1 + 0x2b8),&DAT_1000dd17,*(int *)(param_1 + 700),
                &DAT_1000dd26,*(int *)(param_1 + 0x2c0),&DAT_1000dd35,
                *(int *)(param_1 + 0x2c4),&DAT_1000dd44,*(int *)(param_1 + 0x2c8),
                &DAT_1000dd53,*(int *)(param_1 + 0x2cc),
                (3 - *(int *)(param_1 + 0x2fb)) * iVar1,*(int *)(param_1 + 0x2fb) * iVar1,iVar1,
                *(int *)(param_1 + 0x2f7),iVar1);
  return;
}





int  FUN_10001690(int param_1)

{
  int uVar1;
  
  uVar1 = AskMultilineQuestion(9,"#PAGE12",0,"TPW1_0|TPW1_1|TPW1_2|TPW1_3");
  *(int *)(param_1 + 0x2fb) = uVar1;
  return (int)1;
}





int  FUN_100016c0(void *param_1)

{
  int iVar1;
  
  do {
    while( 1 ) {
      while (iVar1 = AskMultilineQuestion(9,"#PAGE13",0,"TR1_1|TR1_3|TR1_4"),
            iVar1 == 0) {
        FUN_10001710(param_1);
      }
      if (iVar1 != 1) break;
      FUN_10001840(param_1);
    }
  } while (iVar1 != 2);
  return 1;
}





void  FUN_10001710(void *param_1)

{
  int uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  
  uVar1 = AskMultilineQuestion(9,"#PAGE5",0,"R1|R2|R3|R4|R5|R6");
  pvVar5 = param_1;
  switch(uVar1) {
  case 0:
    pvVar5 = (void *)0x0;
    break;
  case 1:
    pvVar5 = (void *)0x1;
    break;
  case 2:
    pvVar5 = (void *)0x2;
    break;
  case 3:
    pvVar5 = (void *)0x3;
    break;
  case 4:
    pvVar5 = (void *)0x4;
    break;
  case 5:
    pvVar5 = (void *)0x5;
  }
  uVar1 = AskMultilineQuestion(9,"#PAGE6",0,"R1|R2|R3|R4|R5|R6");
  pvVar4 = param_1;
  switch(uVar1) {
  case 0:
    pvVar4 = (void *)0x0;
    break;
  case 1:
    pvVar4 = (void *)0x1;
    break;
  case 2:
    pvVar4 = (void *)0x2;
    break;
  case 3:
    pvVar4 = (void *)0x3;
    break;
  case 4:
    pvVar4 = (void *)0x4;
    break;
  case 5:
    pvVar4 = (void *)0x5;
  }
  FUN_10001240((intptr_t)param_1);
  iVar2 = FUN_10001f70(param_1,pvVar5);
  iVar3 = FUN_10001f70(param_1,pvVar4);
  ShowPageParam("#PAGE131",(int)((unsigned char *)&DAT_1000dd08) + (int)pvVar5 * 0xf,100,
                (int)((unsigned char *)&DAT_1000dd08) + (int)pvVar4 * 0xf,(iVar2 * 100) / iVar3);
  return;
}





void  FUN_10001840(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar1 = AskMultilineQuestion(9,"#PAGE133",0,"NO1_1|NO1_2|NO1_3|NO1_4|NO1_5|NO1_6|NO1_7|NO1_8|NO1_9|NO1_10");
  iVar2 = AskMultilineQuestion(9,"#PAGE1331",0,"OD1_0|OD1_1|OD1_2");
  if (iVar2 == 0) {
    pvVar3 = (void *)(iVar1 * 0x40 + (intptr_t)param_1);
    iVar1 = GetTotalAmount0(pvVar3);
    if (iVar1 != 0) {
      iVar1 = (int)((unsigned char *)&DAT_1000dd08) + *(int *)((int)pvVar3 + 0x11) * 0xf;
      iVar2 = (int)((unsigned char *)&DAT_1000dd08) + *(int *)((int)pvVar3 + 9) * 0xf;
      ShowPageParam("#PAGE7",(int)pvVar3 + 0x29,iVar2,iVar1,iVar2,
                    *(int *)((int)pvVar3 + 0xd),iVar1,*(int *)((int)pvVar3 + 0x15));
      return;
    }
    ShowPage("#PAGE8");
  }
  else {
    if (iVar2 == 1) {
      pvVar3 = (void *)(iVar1 * 0x40 + (intptr_t)param_1);
      iVar2 = GetTotalAmount0(pvVar3);
      if (iVar2 == 0) {
        FUN_100020e0(pvVar3,(char *)((intptr_t)param_1 + 0x298),*(int *)((intptr_t)param_1 + 0x2a7),
                     (unsigned int)*(byte *)((intptr_t)param_1 + 0x2e8),*(int *)((intptr_t)param_1 + 0x2ab));
      }
      FUN_10001980(param_1,iVar1);
      return;
    }
    if (iVar2 == 2) {
      pvVar3 = (void *)(iVar1 * 0x40 + (intptr_t)param_1);
      iVar1 = GetTotalAmount0(pvVar3);
      if (iVar1 != 0) {
        SelectUnits(pvVar3,0);
        SelDie(*(char *)((int)pvVar3 + 8));
        ShowPage("#PAGE3");
        return;
      }
      ShowPage("#PAGE2");
      return;
    }
  }
  return;
}





void  FUN_10001980(void *this_ptr,int param_1)

{
  void *this_00;
  int iVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = AskMultilineQuestion(9,"#PAGE4",0,*(int *)((intptr_t)this_ptr + 0x280));
  uVar2 = AskMultilineQuestion(9,"#PAGE5",0,"R1|R2|R3|R4|R5|R6");
  iVar4 = param_1;
  switch(uVar2) {
  case 0:
    iVar4 = 0;
    break;
  case 1:
    iVar4 = 1;
    break;
  case 2:
    iVar4 = 2;
    break;
  case 3:
    iVar4 = 3;
    break;
  case 4:
    iVar4 = 4;
    break;
  case 5:
    iVar4 = 5;
  }
  uVar2 = AskMultilineQuestion(9,"#PAGE6",0,"R1|R2|R3|R4|R5|R6");
  iVar3 = param_1;
  switch(uVar2) {
  case 0:
    iVar3 = 0;
    break;
  case 1:
    iVar3 = 1;
    break;
  case 2:
    iVar3 = 2;
    break;
  case 3:
    iVar3 = 3;
    break;
  case 4:
    iVar3 = 4;
    break;
  case 5:
    iVar3 = 5;
  }
  iVar1 = *(int *)((intptr_t)this_ptr + iVar1 * 4 + 0x284);
  this_00 = (void *)(param_1 * 0x40 + (intptr_t)this_ptr);
  FUN_10002150(this_00,(char *)(iVar1 + 0x298),*(int *)(iVar1 + 0x2a7),iVar4,iVar3);
  SelectUnits(this_00,0);
  SelSendTo(*(char *)((int)this_00 + 8),*(int *)((intptr_t)this_ptr + 0x2ab),0,0);
  *(char *)((int)this_00 + 0x19) = 0;
  return;
}





unsigned int  FUN_10001ac0(void *param_1)

{
  int in_EAX;
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  void *pvVar7;
  int *piVar8;
  unsigned int uStack_4;
  int uVar6;
  
  uVar6 = (int)((unsigned int)in_EAX >> 8);
  uVar1 = (int)*(char *)((intptr_t)param_1 + 0x2f6);
  if (*(char *)((intptr_t)param_1 + 0x2f6) != '\0') {
    iVar2 = GetUnitsAmount2(*(int *)((intptr_t)param_1 + 0x2ab),&DAT_1000d5f8,
                            (int)*(char *)((intptr_t)param_1 + 0x2e8));
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = 0;
      pvVar7 = param_1;
      do {
        if (*(char *)((int)pvVar7 + 0x19) == '\0') {
          iVar3 = GetUnitsAmount1(*(int *)((intptr_t)param_1 + 0x2ab),pvVar7);
          if (iVar3 != 0) {
            pvVar7 = (void *)(iVar2 * 0x40 + (intptr_t)param_1);
            *(char *)((int)pvVar7 + 0x19) = 1;
            FUN_10001c00(param_1,(int)pvVar7);
            FUN_10001c40(param_1,(int)pvVar7);
            FUN_100032f0((int)pvVar7,*(int *)((int)pvVar7 + 0x3c));
            return (int)1;
          }
        }
        iVar2 = iVar2 + 1;
        pvVar7 = (void *)((int)pvVar7 + 0x40);
      } while (iVar2 < 10);
      uStack_4 = 0;
      piVar8 = (int *)((intptr_t)param_1 + 0x284);
      do {
        if (*piVar8 != 0) {
          iVar2 = 0;
          iVar3 = 0;
          do {
            if (*(char *)(*piVar8 + 0x19 + iVar3) != '\0') {
              iVar4 = GetUnitsAmount1(*(int *)((intptr_t)param_1 + 0x2ab),*piVar8 + iVar3);
              if (iVar4 != 0) {
                iVar2 = iVar2 * 0x40;
                *(char *)(*(int *)((intptr_t)param_1 + uStack_4 * 4 + 0x284) + 0x19 + iVar2) = 0;
                pvVar7 = *(void **)((intptr_t)param_1 + uStack_4 * 4 + 0x284);
                FUN_10001ca0(param_1,(int)(iVar2 + (int)pvVar7),pvVar7);
                iVar3 = *(int *)((intptr_t)param_1 + uStack_4 * 4 + 0x284);
                FUN_100032f0(iVar3 + iVar2,*(int *)(iVar3 + 0x38 + iVar2));
                return (int)1;
              }
            }
            iVar3 = iVar3 + 0x40;
            iVar2 = iVar2 + 1;
          } while (iVar3 < 0x280);
        }
        piVar8 = piVar8 + 1;
        uStack_4 = uStack_4 + 1;
      } while ((int)uStack_4 < 5);
      return uStack_4 & -256;
    }
  }
  return uVar1 & -256;
}





void  FUN_10001c00(void *this_ptr,int param_1)

{
  FUN_10001fe0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
  FUN_10001fe0(this_ptr,*(int *)(param_1 + 0x11),*(int *)(param_1 + 0x15));
  *(int *)(param_1 + 0x15) = 0;
  *(int *)(param_1 + 0xd) = 0;
  return;
}





void  FUN_10001c40(void *this_ptr,int param_1)

{
  int iVar1;
  int uVar2;
  
  iVar1 = FUN_10001f00(this_ptr,*(int *)(param_1 + 9));
  if (299 < iVar1) {
    *(int *)(param_1 + 0xd) = 300;
    FUN_10001fe0(this_ptr,*(int *)(param_1 + 9),-300);
    return;
  }
  uVar2 = FUN_10001f00(this_ptr,*(int *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = uVar2;
  iVar1 = FUN_10001f00(this_ptr,*(int *)(param_1 + 9));
  FUN_10001fe0(this_ptr,*(int *)(param_1 + 9),-iVar1);
  return;
}





void  FUN_10001ca0(void *this_ptr,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  
  if (*(char *)((intptr_t)this_ptr + 0x2af) == '\0') {
    iVar1 = FUN_10001f70(this_ptr,*(int *)(param_1 + 9));
    iVar1 = iVar1 * *(int *)(param_1 + 0xd);
    iVar2 = FUN_10001f70(this_ptr,*(int *)(param_1 + 0x11));
    iVar3 = FUN_10001f00(this_ptr,*(int *)(param_1 + 0x11));
    iVar2 = iVar2 * iVar3;
    if (iVar1 - iVar2 == 0 || iVar1 < iVar2) {
      FUN_10001fe0(this_ptr,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd));
      *(int *)(param_1 + 0xd) = 0;
      iVar2 = FUN_10001f70(this_ptr,*(int *)(param_1 + 0x11));
      *(int *)(param_1 + 0x15) = iVar1 / iVar2;
      FUN_10001fe0(this_ptr,*(int *)(param_1 + 0x11),-(iVar1 / iVar2));
      return;
    }
    uVar4 = FUN_10001f00(this_ptr,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = uVar4;
    iVar1 = FUN_10001f00(this_ptr,*(int *)(param_1 + 0x11));
    FUN_10001fe0(this_ptr,*(int *)(param_1 + 0x11),-iVar1);
    iVar1 = FUN_10001f70(this_ptr,*(int *)(param_1 + 9));
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar2 / iVar1;
    iVar1 = FUN_10001f70(this_ptr,*(int *)(param_1 + 9));
    FUN_10001fe0(this_ptr,*(int *)(param_1 + 9),iVar2 / iVar1);
    return;
  }
  iVar1 = FUN_10001f70(param_2,*(int *)(param_1 + 9));
  iVar1 = iVar1 * *(int *)(param_1 + 0xd);
  iVar2 = FUN_100020c0(*(int *)(param_1 + 0x11));
  iVar3 = GetResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar2);
  iVar2 = FUN_10001f70(param_2,*(int *)(param_1 + 0x11));
  iVar3 = iVar3 * iVar2;
  if (iVar1 <= iVar3) {
    uVar4 = *(int *)(param_1 + 0xd);
    iVar2 = FUN_100020c0(*(int *)(param_1 + 9));
    AddResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar2,uVar4);
    *(int *)(param_1 + 0xd) = 0;
    iVar2 = FUN_10001f70(param_2,*(int *)(param_1 + 0x11));
    *(int *)(param_1 + 0x15) = iVar1 / iVar2;
    iVar1 = FUN_100020c0(*(int *)(param_1 + 0x11));
    iVar1 = GetResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar1);
    iVar1 = iVar1 - *(int *)(param_1 + 0x15);
    iVar2 = FUN_100020c0(*(int *)(param_1 + 0x11));
    SetResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar2,iVar1);
    return;
  }
  iVar1 = FUN_100020c0(*(int *)(param_1 + 0x11));
  uVar4 = GetResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar1);
  *(int *)(param_1 + 0x15) = uVar4;
  uVar4 = 0;
  iVar1 = FUN_100020c0(*(int *)(param_1 + 0x11));
  SetResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar1,uVar4);
  iVar1 = FUN_10001f70(param_2,*(int *)(param_1 + 9));
  *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) - iVar3 / iVar1;
  iVar1 = FUN_10001f70(param_2,*(int *)(param_1 + 9));
  iVar3 = iVar3 / iVar1;
  iVar1 = FUN_100020c0(*(int *)(param_1 + 9));
  AddResource(*(char *)((intptr_t)this_ptr + 0x2e8) + -1,iVar1,iVar3);
  return;
}





int  FUN_10001f00(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((intptr_t)this_ptr + 0x2b8);
  case 1:
    return *(int *)((intptr_t)this_ptr + 700);
  case 2:
    return *(int *)((intptr_t)this_ptr + 0x2c0);
  case 3:
    return *(int *)((intptr_t)this_ptr + 0x2c4);
  case 4:
    return *(int *)((intptr_t)this_ptr + 0x2c8);
  case 5:
    return *(int *)((intptr_t)this_ptr + 0x2cc);
  default:
    return 0;
  }
}





int  FUN_10001f70(void *this_ptr,int param_1)

{
  switch(param_1) {
  case 0:
    return *(int *)((intptr_t)this_ptr + 0x2d0);
  case 1:
    return *(int *)((intptr_t)this_ptr + 0x2d4);
  case 2:
    return *(int *)((intptr_t)this_ptr + 0x2d8);
  case 3:
    return *(int *)((intptr_t)this_ptr + 0x2dc);
  case 4:
    return *(int *)((intptr_t)this_ptr + 0x2e0);
  case 5:
    return *(int *)((intptr_t)this_ptr + 0x2e4);
  default:
    return 0;
  }
}





void  FUN_10001fe0(void *this_ptr,int param_1,int param_2)

{
  switch(param_1) {
  case 0:
    *(int *)((intptr_t)this_ptr + 0x2b8) = *(int *)((intptr_t)this_ptr + 0x2b8) + param_2;
    return;
  case 1:
    *(int *)((intptr_t)this_ptr + 700) = *(int *)((intptr_t)this_ptr + 700) + param_2;
    return;
  case 2:
    *(int *)((intptr_t)this_ptr + 0x2c0) = *(int *)((intptr_t)this_ptr + 0x2c0) + param_2;
    return;
  case 3:
    *(int *)((intptr_t)this_ptr + 0x2c4) = *(int *)((intptr_t)this_ptr + 0x2c4) + param_2;
    return;
  case 4:
    *(int *)((intptr_t)this_ptr + 0x2c8) = *(int *)((intptr_t)this_ptr + 0x2c8) + param_2;
    return;
  case 5:
    *(int *)((intptr_t)this_ptr + 0x2cc) = *(int *)((intptr_t)this_ptr + 0x2cc) + param_2;
  }
  return;
}





void  FUN_10002090(void *this_ptr,int param_1,char param_2,char param_3)

{
  *(char *)((intptr_t)this_ptr + 0x2f5) = param_2;
  *(int *)((intptr_t)this_ptr + 0x2f1) = param_1 * 0xf;
  *(char *)((intptr_t)this_ptr + 0x2f6) = param_3;
  return;
}





int FUN_100020c0(int param_1)

{
  if (param_1 == 3) {
    return 1;
  }
  if (param_1 == 1) {
    param_1 = 3;
  }
  return param_1;
}





void 
FUN_100020e0(void *this_ptr,char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  CreateObject0(this_ptr,&DAT_1000d560,&DAT_1000d5f8,param_3,param_4,0);
  uVar2 = -1;
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((intptr_t)this_ptr + 0x1a);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(int *)pcVar5 = *(int *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(int *)((intptr_t)this_ptr + 0x38) = param_2;
  *(char *)((intptr_t)this_ptr + 8) = (char)param_3;
  *(char *)((intptr_t)this_ptr + 0x19) = 0;
  *(int *)((intptr_t)this_ptr + 0x15) = 0;
  *(int *)((intptr_t)this_ptr + 0xd) = 0;
  return;
}





void 
FUN_10002150(void *this_ptr,char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = -1;
  do {
    pcVar4 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((intptr_t)this_ptr + 0x29);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(int *)pcVar5 = *(int *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(char *)((intptr_t)this_ptr + 0x19) = 0;
  *(int *)((intptr_t)this_ptr + 0x3c) = param_2;
  *(int *)((intptr_t)this_ptr + 0x15) = 0;
  *(int *)((intptr_t)this_ptr + 0xd) = 0;
  *(int *)((intptr_t)this_ptr + 9) = param_3;
  *(int *)((intptr_t)this_ptr + 0x11) = param_4;
  return;
}





void 
FUN_100021a0(void *this_ptr,int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6,int param_7)

{
  *(int *)((intptr_t)this_ptr + 8) = param_5;
  *(int *)this_ptr = param_4;
  *(int *)((intptr_t)this_ptr + 4) = 0;
  *(int *)((intptr_t)this_ptr + 0xc) = param_6;
  *(int *)((intptr_t)this_ptr + 0x10) = param_7;
  *(char *)((intptr_t)this_ptr + 0x14) = 0;
  CreateObject0(&DAT_1000d5e8,&DAT_1000d560,&DAT_1000d9a8,param_4,param_1,0);
  RemoveGroup(&DAT_1000d5e8,(intptr_t)this_ptr + 0x15);
  CreateObject0(&DAT_1000d5e8,&DAT_1000d560,&DAT_1000d9a8,param_4,param_2,0);
  RemoveGroup(&DAT_1000d5e8,(intptr_t)this_ptr + 0x1d);
  CreateObject0(&DAT_1000d5e8,&DAT_1000d560,&DAT_1000d9a8,param_4,param_3,0);
  RemoveGroup(&DAT_1000d5e8,(intptr_t)this_ptr + 0x25);
  RunTimer(*(char *)((intptr_t)this_ptr + 0xc),10);
  RunTimer(*(char *)((intptr_t)this_ptr + 0x10),param_5);
  return;
}





void 
FUN_10002270(void *this_ptr,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(*(char *)((intptr_t)this_ptr + 0xc));
  if ((cVar1 != '\0') && (*(int *)((intptr_t)this_ptr + 4) != 0)) {
    RunTimer(*(char *)((intptr_t)this_ptr + 0xc),0x14);
    *(int *)((intptr_t)this_ptr + 4) = *(int *)((intptr_t)this_ptr + 4) + -1;
    iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x15);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000d5e8,&DAT_1000d560,&DAT_1000d5c0,*(char *)this_ptr,param_1,0);
      SelectUnits(&DAT_1000d5e8,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_1000d5e8,(intptr_t)this_ptr + 0x2d);
    }
    iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x1d);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000d5e8,&DAT_1000d560,&DAT_1000d5c0,*(char *)this_ptr,param_2,0);
      SelectUnits(&DAT_1000d5e8,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_1000d5e8,(intptr_t)this_ptr + 0x2d);
    }
    iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x25);
    if (iVar2 != 0) {
      CreateObject0(&DAT_1000d5e8,&DAT_1000d560,&DAT_1000d598,*(char *)this_ptr,param_3,0);
      SelectUnits(&DAT_1000d5e8,0);
      SelSendAndKill(*(char *)this_ptr,param_4,0,0);
      RemoveGroup(&DAT_1000d5e8,(intptr_t)this_ptr + 0x35);
    }
  }
  return;
}





void  FUN_100023c0(void *this_ptr,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = TimerDone(*(char *)((intptr_t)this_ptr + 0x10));
  if (cVar1 != '\0') {
    iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x2d);
    if (iVar2 < 0x3d) {
      iVar2 = GetTotalAmount0((intptr_t)this_ptr + 0x35);
      if (iVar2 < 0x1f) {
        *(int *)((intptr_t)this_ptr + 4) = param_1;
        *(char *)((intptr_t)this_ptr + 0x14) = 1;
        SelectUnits((intptr_t)this_ptr + 0x2d,0);
        SelectUnits((intptr_t)this_ptr + 0x35,1);
        SelSendAndKill(*(char *)this_ptr,param_2,0,0);
        RunTimer(*(char *)((intptr_t)this_ptr + 0x10),*(int *)((intptr_t)this_ptr + 8));
      }
    }
  }
  return;
}





void __cdecl FUN_100032f0(int param_1,int param_2)

{
  int iVar1;
  
  SelectUnits(param_1,0);
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    if (param_2 == 2) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d660,0x20,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d658,0x40,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d650,0x20,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d640,0x30,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d638,0x60,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d630,0x70,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d980,0x46,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d978,0x60,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d970,0x10,2);
      SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),0x3c,2);
      return;
    }
  }
  else if (iVar1 == 1) {
    if (param_2 == 2) {
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d228,0xa0,0);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d230,0xa0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d218,0xc0,2);
      SelSendTo(*(char *)(param_1 + 8),&DAT_1000d220,0xc0,2);
      SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),0,2);
      return;
    }
  }
  else if (iVar1 != 2) {
    return;
  }
  if (param_2 == 0) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d970,0xb0,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d978,0x90,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d980,0xd0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d630,200,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d638,0xe0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d640,0xd0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d650,0xa0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d658,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d660,0xc0,2);
    SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),0xa0,2);
    return;
  }
  if (param_2 == 1) {
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d220,0x20,0);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d218,0x46,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d230,0x40,2);
    SelSendTo(*(char *)(param_1 + 8),&DAT_1000d228,0x20,2);
    SelSendTo(*(char *)(param_1 + 8),*(int *)(0 + 0x2ab),0,2);
  }
  return;
}





void __cdecl FUN_10003590(int *param_1)

{
  FUN_10003d2b(param_1);
  return;
}





int __cdecl FUN_100036a0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( 1 ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(unsigned int)bVar1 >> 3] = abStack_28[(int)(unsigned int)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(unsigned int)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}





unsigned int * __cdecl FUN_100036e0(unsigned int *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  char cVar6;
  unsigned int uVar7;
  char *pcVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((unsigned int)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (unsigned int *)((intptr_t)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (unsigned int *)0x0;
      }
    }
    while( 1 ) {
      while( 1 ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ (int)(int)cVar3;
        uVar7 = uVar5 ^ -1 ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ -1 ^ uVar9 + 0x7efefeff) & -2130640640) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & -2130640640) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (unsigned int *)0x0;
          }
          if ((uVar5 + 0x7efefeff & -2147483648) == 0) {
            return (unsigned int *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (unsigned int *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (unsigned int *)((intptr_t)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (unsigned int *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (unsigned int *)((intptr_t)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (unsigned int *)((intptr_t)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (unsigned int *)0x0;
      }
    }
    return (unsigned int *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (unsigned int *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (unsigned int *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (unsigned int *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( 1 );
}





unsigned int __cdecl FUN_100037dd(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  unsigned int uVar1;
  
  FUN_10003fa8((unsigned int)param_4);
  uVar1 = FUN_1000380c(param_1,param_2,param_3,param_4);
  FUN_10003ffa((unsigned int)param_4);
  return uVar1;
}





unsigned int __cdecl FUN_1000380c(char *param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  unsigned int uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  piVar1 = param_4;
  pcVar6 = (char *)(param_2 * param_3);
  if (pcVar6 == (char *)0x0) {
    param_3 = 0;
  }
  else {
    pcVar5 = param_1;
    param_1 = pcVar6;
    if ((*(unsigned short *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((*(unsigned short *)(piVar1 + 3) & 0x10c) == 0) ||
         (pcVar2 = (char *)piVar1[1], pcVar2 == (char *)0x0)) {
        if (param_1 < param_4) {
          uVar4 = FUN_1000428e(piVar1);
          if (uVar4 == -1) goto LAB_100038e8;
          *pcVar5 = (char)uVar4;
          param_4 = (int *)piVar1[6];
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + -1;
        }
        else {
          pcVar2 = param_1;
          if (param_4 != (int *)0x0) {
            pcVar2 = param_1 + -((unsigned int)param_1 % (unsigned int)param_4);
          }
          iVar3 = FUN_1000436a(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_100038e8:
            return (unsigned int)((int)pcVar6 - (intptr_t)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_100038e8;
          }
          param_1 = param_1 + -iVar3;
          pcVar5 = pcVar5 + iVar3;
        }
      }
      else {
        pcVar7 = param_1;
        if (pcVar2 <= param_1) {
          pcVar7 = pcVar2;
        }
        FUN_100045b0((int *)pcVar5,(int *)*piVar1,(unsigned int)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}





int __cdecl FUN_10003902(char *param_1)

{
  int iVar1;
  
  FUN_10003fa8((unsigned int)param_1);
  iVar1 = FUN_10003924(param_1);
  FUN_10003ffa((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_10003924(char *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  byte bVar3;
  DWORD *pDVar4;
  char *pcVar5;
  DWORD DVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int local_c;
  DWORD local_8;
  
  pcVar8 = param_1;
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 4) < 0) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  local_8 = FUN_10004cb4(uVar1,0,1);
  if ((intptr_t)local_8 < 0) {
LAB_100039b2:
    local_c = -1;
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0xc);
    if ((uVar2 & 0x108) == 0) {
      return local_8 - *(int *)(param_1 + 4);
    }
    pcVar5 = *(char **)param_1;
    pcVar7 = *(char **)(param_1 + 8);
    local_c = (int)pcVar5 - (int)pcVar7;
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 0x80) == 0) {
        pDVar4 = FUN_10004a92();
        *pDVar4 = 0x16;
        goto LAB_100039b2;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)(((long long *)&DAT_1000e3c0)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
        for (; pcVar9 < pcVar5; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            local_c = local_c + 1;
          }
        }
      }
    }
    if (local_8 != 0) {
      if ((param_1[0xc] & 1U) != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          local_c = 0;
        }
        else {
          pcVar5 = pcVar5 + (*(int *)(param_1 + 4) - (int)pcVar7);
          iVar10 = (uVar1 & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + ((long long *)&DAT_1000e3c0)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_10004cb4(uVar1,0,2);
            if (DVar6 == local_8) {
              pcVar7 = *(char **)(param_1 + 8);
              pcVar9 = pcVar5 + (int)pcVar7;
              param_1 = pcVar5;
              for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar3 = pcVar8[0xd] & 0x20;
            }
            else {
              FUN_10004cb4(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(unsigned int *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(unsigned int *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + ((long long *)&DAT_1000e3c0)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar8;
            }
            pcVar5 = param_1;
            if (bVar3 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          local_8 = local_8 - (intptr_t)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}





int __cdecl FUN_10003a85(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10003fa8((unsigned int)param_1);
  iVar1 = FUN_10003ab1(param_1,param_2,param_3);
  FUN_10003ffa((unsigned int)param_1);
  return iVar1;
}





int __cdecl FUN_10003ab1(int *param_1,int param_2,DWORD param_3)

{
  unsigned int uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10004a92();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & -17;
    if (param_3 == 1) {
      iVar2 = FUN_10003924((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10004185(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & -4;
    }
    DVar3 = FUN_10004cb4(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != -1) - 1;
  }
  return iVar2;
}





int * __cdecl FUN_10003b3e(LPCSTR param_1,char *param_2,unsigned int param_3)

{
  int *puVar1;
  int *puVar2;
  
  puVar1 = FUN_10004efc();
  if (puVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar2 = FUN_10004d8c(param_1,param_2,param_3,puVar1);
  FUN_10003ffa((unsigned int)puVar1);
  return puVar2;
}





void __cdecl FUN_10003b6f(LPCSTR param_1,char *param_2)

{
  FUN_10003b3e(param_1,param_2,0x40);
  return;
}





void OnInit(void)

{
                    
  RegisterFormation(&DAT_1000d560,"#ALONE");
  RegisterFormation(&DAT_1000dcf8,"#LINE15PUS");
  RegisterUnitType(&DAT_1000d5f8,"GRUZ(UN)");
  RegisterUnitType(&DAT_1000d5a8,"Krestian_Sved(en)");
  RegisterUnitType(&DAT_1000d988,"Gusar_evro(en)");
  RegisterUnitType(&DAT_1000d9a8,"URTA(UN)");
  RegisterUnitType(&DAT_1000d5c0,"Pehota_turki(AL)");
  RegisterUnitType(&DAT_1000d598,"Strelec_Algir(AL)");
  RegisterDynGroup(&DAT_1000d5e8);
  RegisterVar(&DAT_1000d5e8,8);
  RegisterVar(&DAT_1000d240,0x300);
  RegisterZone(&DAT_1000d5d8,"ZOxford");
  RegisterUnits(&DAT_1000d558,"GOxfordLive");
  RegisterUnits(&DAT_1000d668,"GOxfordProduce");
  RegisterUnits(&DAT_1000d600,"GOxfordTrade");
  RegisterZone(&DAT_1000d628,"ZOxfordTolk");
  RegisterZone(&DAT_1000d660,"ZOxfordRazv1");
  RegisterZone(&DAT_1000d658,"ZOxfordRazv2");
  RegisterZone(&DAT_1000d650,"ZOxfordRazv3");
  RegisterZone(&DAT_1000d640,"ZOxfordRazv4");
  RegisterZone(&DAT_1000d638,"ZOxfordRazv5");
  RegisterZone(&DAT_1000d630,"ZOxfordRazv6");
  RegisterZone(&DAT_1000d980,"ZOxfordRazv7");
  RegisterZone(&DAT_1000d978,"ZOxfordRazv8");
  RegisterZone(&DAT_1000d970,"ZOxfordRazv9");
  DAT_1000d4eb = &DAT_1000d5d8;
  RegisterVar(&DAT_1000d9f0,0x300);
  RegisterZone(&DAT_1000d5a0,"ZNottingham");
  RegisterUnits(&DAT_1000d5f0,"GNottinghamLive");
  RegisterUnits(&DAT_1000dcf0,"GNottinghamProduce");
  RegisterUnits(&DAT_1000d540,"GNottinghamTrade");
  RegisterZone(&DAT_1000d9a0,"ZNottinghamTolk");
  RegisterZone(&DAT_1000d228,"ZNottinghamRazv1");
  RegisterZone(&DAT_1000d230,"ZNottinghamRazv2");
  RegisterZone(&DAT_1000d218,"ZNottinghamRazv3");
  RegisterZone(&DAT_1000d220,"ZNottinghamRazv4");
  DAT_1000dc9b = &DAT_1000d5a0;
  RegisterVar(&DAT_1000d670,0x300);
  RegisterZone(&DAT_1000d620,"ZSity");
  DAT_1000d91b = &DAT_1000d620;
  RegisterVar(((int*)0),0xc);
  RegisterVar(&DAT_1000dd70,0x3d);
  RegisterZone(&DAT_1000d9c0,"ZLag1Tent1");
  RegisterZone(&DAT_1000d9c8,"ZLag1Tent2");
  RegisterZone(&DAT_1000d9b8,"ZLag1Tent3");
  RegisterZone(&DAT_1000d5d0,"ZLag1Unit1");
  RegisterZone(&DAT_1000d5e0,"ZLag1Unit2");
  RegisterZone(&DAT_1000d5c8,"ZLag1Unit3");
  RegisterZone(&DAT_1000d9b0,"ZLag1Sbor");
  RegisterVar(&DAT_1000ddb0,0x3d);
  RegisterZone(&DAT_1000d9e0,"ZLag2Tent1");
  RegisterZone(&DAT_1000d9e8,"ZLag2Tent2");
  RegisterZone(&DAT_1000d9d8,"ZLag2Tent3");
  RegisterZone(&DAT_1000d618,"ZLag2Unit1");
  RegisterZone(&DAT_1000d608,"ZLag2Unit2");
  RegisterZone(&DAT_1000d610,"ZLag2Unit3");
  RegisterZone(&DAT_1000d238,"ZLag2Sbor");
  RegisterUnitType(&DAT_1000d990,"WALL_UKR(en)");
  RegisterUnitType(&DAT_1000dd68,"WALL_EV(en)");
  RegisterUnitType(&DAT_1000d648,"WALL_UKR(DA)");
  RegisterUnitType(&DAT_1000dd00,"WALL_EV(DA)");
  RegisterUpgrade(&DAT_1000d550,"AKA24EN");
  RegisterUpgrade(&DAT_1000d548,"AKA24DA");
  RegisterUpgrade(&DAT_1000d5b8,"AKA23EN");
  RegisterUpgrade(&DAT_1000d5b0,"AKA23DA");
  RegisterUpgrade(&DAT_1000d998,"AKA08EN");
  RegisterUpgrade(&DAT_1000d9d0,"AKA08DA");
  ChangeFriends(0,3);
  ChangeFriends(2,0x24);
  SetPlayerName(1,"VILLAGE");
  SetPlayerName(2,"DENMARK");
  SetPlayerName(5,"ROBBERS");
  return;
}





void ProcessScenary(void)

{
  int iVar1;
  char cVar2;
  FILE *pFVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  size_t sVar6;
  int iVar7;
  int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  void *pcVar11;
  int iVar12;
  char *pcVar13;
  void *pcVar14;
  char uVar15;
  char uVar16;
  char *pcVar17;
  int *puVar18;
  int uVar19;
  
                    
  if (DAT_1000ddf4 == '\0') {
    DAT_1000ddf4 = '\x01';
    FUN_10003b6f("Missions//miss_vic.txt",&DAT_1000a574);
    if (pFVar3 == (FILE *)0x0) {
      uVar9 = -1;
      pcVar17 = DAT_1000a554;
      do {
        pcVar13 = pcVar17;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar13;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar17 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_1000dd08;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar13 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = -1;
      pcVar17 = DAT_1000a54c;
      do {
        pcVar13 = pcVar17;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar13;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar17 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_1000dd17;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar13 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = -1;
      pcVar17 = "STONE";
      do {
        pcVar13 = pcVar17;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar13;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar17 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_1000dd26;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar13 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = -1;
      pcVar17 = DAT_1000a53c;
      do {
        pcVar13 = pcVar17;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar13;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar17 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_1000dd35;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar13 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = -1;
      pcVar17 = DAT_1000a534;
      do {
        pcVar13 = pcVar17;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar13;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar17 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_1000dd44;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar13 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = -1;
      pcVar17 = DAT_1000a52c;
      do {
        pcVar13 = pcVar17;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar13;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar17 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_1000dd53;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar13 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = -1;
      pcVar17 = "OXFORD";
      do {
        pcVar13 = pcVar17;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar13;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar17 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_1000d568;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar13 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = -1;
      pcVar17 = "NOTINHAM";
      do {
        pcVar13 = pcVar17;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar13;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar17 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_1000d577;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar13 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = -1;
      pcVar17 = DAT_1000a510;
      do {
        pcVar13 = pcVar17;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar13;
      } while (cVar2 != '\0');
      uVar9 = ~uVar9;
      pcVar17 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_1000d586;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(int *)pcVar13 = *(int *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      FUN_10003a85((int *)pFVar3,0,2);
      uVar9 = FUN_10003902((char *)pFVar3);
      puVar4 = malloc(uVar9 + 1);
      FUN_10003a85((int *)pFVar3,0,0);
      FUN_100037dd((char *)puVar4,1,uVar9,(int *)pFVar3);
      FUN_10003760(pFVar3);
      iVar12 = 0;
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          pcVar17 = DAT_1000a508;
LAB_10002b12:
          puVar5 = FUN_100036e0(puVar4,pcVar17);
          iVar12 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar7 == 1) {
            pcVar17 = DAT_1000a500;
            goto LAB_10002b12;
          }
          if (iVar7 == 2) {
            pcVar17 = DAT_1000a4f8;
            goto LAB_10002b12;
          }
          if (iVar7 == 3) {
            pcVar17 = DAT_1000a4f0;
            goto LAB_10002b12;
          }
          if (iVar7 == 4) {
            pcVar17 = DAT_1000a4e8;
            goto LAB_10002b12;
          }
          if (iVar7 == 5) {
            pcVar17 = DAT_1000a4e0;
            goto LAB_10002b12;
          }
        }
        iVar12 = iVar12 + 5;
        sVar6 = FUN_100036a0((byte *)(iVar12 + (int)puVar4),&DAT_1000a4dc);
        iVar1 = iVar7 * 0xf;
        strncpy((char *)((int)((unsigned char *)&DAT_1000dd08) + iVar1),(char *)(iVar12 + (int)puVar4),sVar6);
        iVar7 = iVar7 + 1;
        *(char *)((int)((unsigned char *)&DAT_1000dd08) + sVar6 + iVar1) = 0;
      } while (iVar7 < 6);
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          pcVar17 = "OXFORD";
LAB_10002b8c:
          puVar5 = FUN_100036e0(puVar4,pcVar17);
          iVar12 = (int)puVar5 - (int)puVar4;
        }
        else {
          if (iVar7 == 1) {
            pcVar17 = "NOTINHAM";
            goto LAB_10002b8c;
          }
          if (iVar7 == 2) {
            pcVar17 = DAT_1000a510;
            goto LAB_10002b8c;
          }
        }
        iVar12 = iVar12 + 10;
        sVar6 = FUN_100036a0((byte *)(iVar12 + (int)puVar4),&DAT_1000a4dc);
        iVar1 = iVar7 * 0xf;
        strncpy((char *)((int)((unsigned char *)&DAT_1000d568) + iVar1),(char *)(iVar12 + (int)puVar4),sVar6);
        iVar7 = iVar7 + 1;
        *(char *)((int)((unsigned char *)&DAT_1000d568) + sVar6 + iVar1) = 0;
      } while (iVar7 < 3);
      FUN_10003590((int *)puVar4);
    }
  }
  cVar2 = Trigg(1);
  if (cVar2 != '\0') {
    SetTrigg(1,0);
    RunTimer(1,200);
    RunTimer(2,0x32);
    RunTimer(3,0x32);
    RunTimer(4,0x32);
    EnableUnit(0,&DAT_1000d990,0);
    EnableUnit(0,&DAT_1000dd68,0);
    EnableUnit(0,&DAT_1000d648,0);
    EnableUnit(0,&DAT_1000dd00,0);
    DisableUpgrade(0,&DAT_1000d550);
    DisableUpgrade(0,&DAT_1000d548);
    DisableUpgrade(0,&DAT_1000d5b8);
    DisableUpgrade(0,&DAT_1000d5b0);
    DisableUpgrade(0,&DAT_1000d998);
    DisableUpgrade(0,&DAT_1000d9d0);
    SetResource(0,0,5000);
    SetResource(0,3,5000);
    SetResource(0,2,5000);
    SetResource(0,1,5000);
    iVar7 = GetDiff(0);
    SetResource(0,4,(5 - iVar7) * 1000);
    iVar7 = GetDiff(0);
    SetResource(0,5,(5 - iVar7) * 1000);
    SetResource(2,0,5000);
    SetResource(2,3,5000);
    SetResource(2,2,5000);
    SetResource(2,1,5000);
    SetResource(2,4,5000);
    SetResource(2,5,5000);
    uVar8 = GetDiff(0);
    StartAI(2,"DENMARK.0",0,1,1,uVar8);
    FUN_10001020(&DAT_1000d240,'\0',0,(char *)&DAT_1000d568,&DAT_1000d5d8,1,4,"V10_3",
                 &DAT_1000d670,0,0,0,0,3);
    FUN_10001020(&DAT_1000d9f0,'\0',1,(char *)&DAT_1000d577,&DAT_1000d5a0,1,5,"V10_3",
                 &DAT_1000d670,0,0,0,0,3);
    FUN_10001020(&DAT_1000d670,'\x01',2,(char *)&DAT_1000d586,&DAT_1000d620,1,3,
                 "V10_1|V10_2",&DAT_1000d240,&DAT_1000d9f0,0,0,0,0);
    ShowPage("#PAGE23");
    SetLightSpot(&DAT_1000d5d8,2,1);
    SetLightSpot(&DAT_1000d5a0,2,2);
    EnableMission(0x41);
    DisableMission(0x42);
    DisableMission(0x43);
    DisableMission(0x44);
    EnableMission(0x45);
    EnableMission(0x46);
  }
  FUN_100011d0(&DAT_1000d240,&DAT_1000d5d8,"V10_3",&DAT_1000d670,0,0,0,0);
  iVar7 = GetTotalAmount0(&DAT_1000d600);
  uVar15 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000d668);
  uVar16 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000d558);
  FUN_10002090(&DAT_1000d240,iVar7,uVar16,uVar15);
  FUN_100011d0(&DAT_1000d9f0,&DAT_1000d5a0,"V10_3",&DAT_1000d670,0,0,0,0);
  iVar7 = GetTotalAmount0(&DAT_1000d540);
  uVar15 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000dcf0);
  uVar16 = iVar7 == 1;
  iVar7 = GetTotalAmount0(&DAT_1000d5f0);
  FUN_10002090(&DAT_1000d9f0,iVar7,uVar16,uVar15);
  FUN_100011d0(&DAT_1000d670,&DAT_1000d620,"V10_1|V10_2",&DAT_1000d240,&DAT_1000d9f0,0,0,0)
  ;
  FUN_10001510(&DAT_1000d240,0);
  FUN_10001510(&DAT_1000d9f0,0);
  cVar2 = TimerDone(2);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001ac0(&DAT_1000d240), (char)uVar8 != '\0')) {
    RunTimer(2,100);
  }
  cVar2 = TimerDone(3);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001ac0(&DAT_1000d9f0), (char)uVar8 != '\0')) {
    RunTimer(3,100);
  }
  cVar2 = TimerDone(4);
  if ((cVar2 != '\0') && (uVar8 = FUN_10001ac0(&DAT_1000d670), (char)uVar8 != '\0')) {
    RunTimer(4,100);
  }
  puVar18 = &DAT_1000d5d8;
  iVar7 = GetDiff(0);
  FUN_100023c0(&DAT_1000dd70,iVar7 * 3 + 5,puVar18);
  puVar18 = &DAT_1000d5a0;
  iVar7 = GetDiff(0);
  FUN_100023c0(&DAT_1000ddb0,iVar7 * 3 + 5,puVar18);
  FUN_10002270(&DAT_1000dd70,&DAT_1000d5d0,&DAT_1000d5e0,&DAT_1000d5c8,&DAT_1000d9b0);
  FUN_10002270(&DAT_1000ddb0,&DAT_1000d618,&DAT_1000d608,&DAT_1000d610,&DAT_1000d238);
  cVar2 = TimerDone(1);
  if (cVar2 != '\0') {
    FUN_10001220((intptr_t)&DAT_1000d240);
    FUN_10001220((intptr_t)&DAT_1000d9f0);
    iVar7 = GetDiff(0);
    RunTimer(1,(iVar7 + 4) * 0x32);
  }
  cVar2 = Trigg(2);
  if ((cVar2 != '\0') &&
     (iVar7 = GetUnitsAmount2(&DAT_1000d628,&DAT_1000d988,0), pcVar11 = (void*)&SetTrigg, iVar7 != 0))
  {
    SetTrigg(2,0);
    ShowPage("#PAGE9");
    EnableMission(0x43);
    uVar19 = 0xb;
    uVar8 = 10;
    iVar7 = GetDiff(0);
    FUN_100021a0(&DAT_1000dd70,&DAT_1000d9c0,&DAT_1000d9c8,&DAT_1000d9b8,5,(5 - iVar7) * 1000,uVar8,
                 uVar19);
  }
  cVar2 = Trigg(3);
  if ((cVar2 != '\0') && (iVar7 = GetUnitsAmount2(&DAT_1000d9a0,&DAT_1000d988,0), iVar7 != 0)) {
    SetTrigg(3,0);
    ShowPage("#PAGE10");
    EnableMission(0x44);
    uVar19 = 0x15;
    uVar8 = 0x14;
    iVar7 = GetDiff(0);
    FUN_100021a0(&DAT_1000ddb0,&DAT_1000d9e0,&DAT_1000d9e8,&DAT_1000d9d8,5,(5 - iVar7) * 1000,uVar8,
                 uVar19);
  }
  cVar2 = Trigg(4);
  if (((cVar2 != '\0') && (cVar2 = Trigg(2), cVar2 == '\0')) && (cVar2 = Trigg(3), cVar2 == '\0')) {
    SetTrigg(4,0);
    DisableMission(0x41);
    EnableMission(0x42);
  }
  cVar2 = NationIsErased(0);
  if (cVar2 != '\0') {
    ShowPage("#PAGE21");
    LooseGame();
  }
  cVar2 = NationIsErased(2);
  if (cVar2 != '\0') {
    ShowPage("#PAGE22");
    ShowVictory();
  }
  iVar7 = GetResource(0,0);
  if (70000 < iVar7) {
    SetResource(0,0,70000);
  }
  iVar7 = GetResource(0,3);
  if (70000 < iVar7) {
    SetResource(0,3,70000);
  }
  iVar7 = GetResource(0,2);
  if (70000 < iVar7) {
    SetResource(0,2,70000);
  }
  iVar7 = GetResource(0,1);
  if (70000 < iVar7) {
    SetResource(0,1,70000);
  }
  iVar7 = GetResource(0,4);
  if (70000 < iVar7) {
    SetResource(0,4,70000);
  }
  iVar7 = GetResource(0,5);
  if (70000 < iVar7) {
    SetResource(0,5,70000);
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

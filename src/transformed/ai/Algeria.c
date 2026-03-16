/* Auto-generated from Algeria.c */
#include "game_api.h"

/* AI state variables */
unsigned char DAT_1000a030[76] = {0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x13, 0x00, 0x19, 0x00, 0x14, 0x00, 0x21, 0x00, 0x14, 0x00, 0x2B, 0x00, 0x14, 0x00, 0x30, 0x00, 0x1E, 0x00, 0x35, 0x00, 0x20, 0x00, 0x3A, 0x00, 0x23, 0x00, 0x41, 0x00, 0x23, 0x00, 0x50, 0x00, 0x23, 0x00, 0x69, 0x00, 0x28, 0x00, 0x7D, 0x00, 0x32, 0x00, 0x96, 0x00, 0x3C, 0x00, 0xAF, 0x00, 0x46, 0x00, 0xC8, 0x00, 0x50, 0x00, 0xE1, 0x00, 0x50, 0x00, 0xFA, 0x00, 0x50, 0x00, 0xF4, 0x01, 0x64, 0x00, 0xA0, 0x0F, 0x2C, 0x01};
int DAT_1000a0c8 = 100;
unsigned char DAT_1000bb00[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bb08[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bb10[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bb20[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bb28[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bb30[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bb38[56] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bb70[56] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bba8[208] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bc78[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bc80[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bc88[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int DAT_1000bc90 = 0;
unsigned char DAT_1000bc98[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bca0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bca8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bcb0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bcb8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bcc0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bcc8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bcd0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bcd8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int DAT_1000bce0 = 0;
unsigned char DAT_1000bce8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bcf0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bcf8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd00[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd08[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd10[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd18[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd20[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd28[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd30[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd38[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd40[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd48[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd50[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd58[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd60[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd68[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd70[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd78[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd80[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd88[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd90[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bd98[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bda0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bda8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bdb0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bdb8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bdc0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bdc8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bdd0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bdd8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bde0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bde8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bdf0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bdf8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be00[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be08[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be10[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be18[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be20[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be28[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be30[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be38[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be48[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be50[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be58[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be60[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be68[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be70[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be78[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be88[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be90[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000be98[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bea0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bea8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000beb0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000beb8[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bec8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bed0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bed8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bee0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bee8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bef0[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bef8[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bf00[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bf08[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bf10[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bf18[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
int DAT_1000bf20 = 0;
unsigned char DAT_1000bf28[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bf30[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bf38[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char DAT_1000bf40[436] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x90, 0x03, 0x00, 0x00, 0x01, 0x30, 0x0C, 0x30, 0x12, 0x30, 0x36, 0x30, 0x3C, 0x30, 0x46, 0x30, 0x4C, 0x30, 0x61, 0x30, 0x6E, 0x30, 0x73, 0x30, 0x7A, 0x30, 0x8A, 0x30, 0x8F, 0x30, 0x96, 0x30, 0xA6, 0x30, 0xAB, 0x30, 0xB2, 0x30, 0xC2, 0x30, 0xC7, 0x30, 0xCE, 0x30, 0xDE, 0x30, 0xE3, 0x30, 0xEA, 0x30, 0xF6, 0x30, 0xFB, 0x30, 0x02, 0x31, 0x0E, 0x31, 0x13, 0x31, 0x1A, 0x31, 0x26, 0x31, 0x2B, 0x31, 0x32, 0x31, 0x3E, 0x31, 0x43, 0x31, 0x4A, 0x31, 0x56, 0x31, 0x5B, 0x31, 0x65, 0x31, 0x6F, 0x31, 0x7B, 0x31, 0x80, 0x31, 0x87, 0x31, 0x93, 0x31, 0x98, 0x31, 0x9F, 0x31, 0xAB, 0x31, 0xB0, 0x31, 0xB7, 0x31, 0xC3, 0x31, 0xC8, 0x31, 0xCF, 0x31, 0xD8, 0x31, 0xE1, 0x31, 0xE6, 0x31, 0xEE, 0x31, 0xFA, 0x31, 0xFF, 0x31, 0x06, 0x32, 0x0C, 0x32, 0x16, 0x32, 0x23, 0x32, 0x28, 0x32, 0x2F, 0x32, 0x3F, 0x32, 0x44, 0x32, 0x4B, 0x32, 0x5B, 0x32, 0x60, 0x32, 0x67, 0x32, 0x77, 0x32, 0x7C, 0x32, 0x83, 0x32, 0x93, 0x32, 0x98, 0x32, 0x9F, 0x32, 0xAF, 0x32, 0xB4, 0x32, 0xBB, 0x32, 0xCB, 0x32, 0xD0, 0x32, 0xD7, 0x32, 0xE7, 0x32, 0xEC, 0x32, 0xF3, 0x32, 0x03, 0x33, 0x08, 0x33, 0x0F, 0x33, 0x1F, 0x33, 0x24, 0x33, 0x2B, 0x33, 0x3B, 0x33, 0x40, 0x33, 0x47, 0x33, 0x53, 0x33, 0x58, 0x33, 0x5F, 0x33, 0x6B, 0x33, 0x70, 0x33, 0x77, 0x33, 0x83, 0x33, 0x88, 0x33, 0x8F, 0x33, 0x9B, 0x33, 0xA0, 0x33, 0xA7, 0x33, 0xB3, 0x33, 0xB8, 0x33, 0xC3, 0x33, 0xD0, 0x33, 0xD5, 0x33, 0xDC, 0x33, 0xEC, 0x33, 0xF1, 0x33, 0xF8, 0x33, 0x08, 0x34, 0x0D, 0x34, 0x14, 0x34, 0x24, 0x34};
int DAT_1000c0f4 = 0;

/* Forward declarations */
static void FUN_10001000(void);
static void FUN_10001b30(void);
static void FUN_10001c40(void);
static void FUN_10001ca0(void);
static void FUN_10001d30(void);
static void FUN_100026a0(void);
static void FUN_10002770(void);
static void FUN_10002780(void);
static void FUN_10002800(void);


void FUN_10001000(void)

{
  int iVar1;
  
  if (DAT_1000bce0 < 2) {
    iVar1 = GetUnits(&DAT_1000bb38);
    iVar1 = iVar1 / 0x24;
    if (iVar1 != 0) {
      TryUnit(&DAT_1000bb70,iVar1,0x32,0x32);
      TryUnit(&DAT_1000bb20,iVar1,10,0x32);
    }
  }
  return;
}





void FUN_10001b30(void)

{
  TryUpgrade(&DAT_1000bf08,0x3c,100);
  TryUpgrade(&DAT_1000bf10,0x3c,100);
  TryUpgrade(&DAT_1000bef8,0x3c,100);
  TryUpgrade(&DAT_1000bf00,0x14,100);
  TryUpgrade(&DAT_1000bf18,10,100);
  TryUpgrade(&DAT_1000bea8,0x3c,100);
  TryUpgrade(&DAT_1000be98,0x3c,100);
  TryUpgrade(&DAT_1000bea0,0x3c,100);
  TryUpgrade(&DAT_1000beb0,0x14,100);
  TryUpgrade(&DAT_1000beb8,10,100);
  if (DAT_1000bce0 == 1) {
    TryUpgrade(&DAT_1000bee0,0x1e,0x32);
    TryUpgrade(&DAT_1000bee8,0x1e,0x32);
    TryUpgrade(&DAT_1000bef0,0x1e,0x32);
    TryUpgrade(&DAT_1000be18,0x1e,0x32);
    TryUpgrade(&DAT_1000be20,0x1e,0x32);
    TryUpgrade(&DAT_1000be30,0x1e,0x32);
  }
  return;
}





void FUN_10001c40(void)

{
  TryUpgrade(&DAT_1000bee0,0x1e,0x32);
  TryUpgrade(&DAT_1000bee8,0x1e,0x32);
  TryUpgrade(&DAT_1000bef0,0x1e,0x32);
  TryUpgrade(&DAT_1000be18,0x1e,0x32);
  TryUpgrade(&DAT_1000be20,0x1e,0x32);
  TryUpgrade(&DAT_1000be30,0x1e,0x32);
  return;
}





void FUN_10001ca0(void)

{
  if (DAT_1000bce0 == 1) {
    TryUpgrade(&DAT_1000be38,0x1e,0x32);
    TryUpgrade(&DAT_1000be28,0x1e,0x32);
    TryUpgrade(&DAT_1000be00,0x1e,0x32);
    TryUpgrade(&DAT_1000bdf8,0x1e,0x32);
  }
  TryUpgrade(&DAT_1000bd68,0x1e,0x32);
  TryUpgrade(&DAT_1000bd70,0x1e,0x32);
  TryUpgrade(&DAT_1000bd78,0x1e,0x32);
  TryUpgrade(&DAT_1000bd80,0x1e,0x32);
  return;
}





void FUN_10001d30(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *puVar10;
  int uVar11;
  int uVar12;
  int uVar13;
  
  SetMineBalanse(0x13,&DAT_1000a030);
  iVar2 = GetMoney(3);
  iVar3 = GetMoney(0);
  iVar4 = GetMoney(2);
  iVar5 = GetMoney(1);
  iVar6 = GetMoney(5);
  iVar7 = GetMoney(4);
  TryUnit(&DAT_1000bd08,1,100,100);
  iVar8 = GetUnits(&DAT_1000bd08);
  if (iVar8 != 0) {
    TryUnit(&DAT_1000bcf0,2,100,100);
    iVar8 = GetUnits(&DAT_1000bcf0);
    if (iVar8 != 0) {
      TryUnit(&DAT_1000be50,1,100,100);
      TryUnit(&DAT_1000be70,1,100,100);
      iVar8 = GetUnits(&DAT_1000bcd8);
      if (iVar8 != 0) {
        TryUnit(&DAT_1000be70,2,100,100);
        iVar8 = GetUnits(&DAT_1000bcf0);
        if (1 < iVar8) {
          if (1000 < iVar2) {
            TryUnit(&DAT_1000be70,3,100,100);
          }
          TryUnit(&DAT_1000be70,4,0x32,100);
          TryUnit(&DAT_1000be70,5,0x1e,100);
        }
      }
      TryUnit(&DAT_1000bd00,1,100,100);
      cVar1 = FieldExist();
      if ((cVar1 != '\0') && (0x4b0 < iVar2)) {
        TryUnit(&DAT_1000bd00,3,10,2);
        if (2000 < iVar2) {
          TryUnit(&DAT_1000bd00,5,10,1);
          TryUnit(&DAT_1000bd00,6,3,1);
          TryUnit(&DAT_1000bd00,7,2,1);
          TryUnit(&DAT_1000bc80,1,100,100);
        }
      }
      iVar8 = GetUnits(&DAT_1000bcd8);
      if (iVar8 != 0) {
        iVar8 = GetUnits(&DAT_1000be70);
        if (1 < iVar8) {
          TryUnit(&DAT_1000bd90,2,100,100);
          TryUnit(&DAT_1000bd90,3,0x5a,100);
          TryUnit(&DAT_1000bd90,4,0x5a,100);
          TryUnit(&DAT_1000bd90,5,0x5a,100);
          TryUnit(&DAT_1000bb00,1,100,100);
        }
      }
      TryUnit(&DAT_1000bcd8,1,0x5a,100);
      iVar8 = GetUnits(&DAT_1000bec8);
      iVar9 = GetReadyUnits(&DAT_1000bec8);
      if (iVar9 == iVar8) {
        iVar8 = GetUnits(&DAT_1000bd90);
        if (iVar8 != 0) {
          TryUnit(&DAT_1000bec8,2,0x32,10);
          TryUnit(&DAT_1000bec8,3,0x14,10);
        }
      }
      iVar8 = GetUnits(&DAT_1000be70);
      if (iVar8 != 0) {
        TryUnit(&DAT_1000bd08,2,10,10);
      }
      TryUnit(&DAT_1000bd10,1,0x5a,10);
    }
  }
  TryUpgrade(&DAT_1000bf30,100,100);
  cVar1 = UpgIsRun(&DAT_1000bf30);
  if (cVar1 != '\0') {
    if (700 < iVar2) {
      if (DAT_1000bce0 == 1) {
        iVar8 = GetUnits(&DAT_1000bd88);
        if (99 < iVar8) {
          TryUnit(&DAT_1000be48,800,0x14,0x3c);
          uVar11 = 800;
          goto LAB_100020c2;
        }
        TryUnit(&DAT_1000bb38,400,0x14,0x28);
        uVar12 = 10;
        uVar11 = 200;
        puVar10 = &DAT_1000bd88;
      }
      else {
        TryUnit(&DAT_1000be48,400,0x14,0x3c);
        uVar11 = 400;
LAB_100020c2:
        uVar12 = 0x14;
        puVar10 = &DAT_1000bb38;
      }
      TryUnit(puVar10,uVar11,uVar12,100);
    }
    if (0xfa < iVar2) {
      TryUnit(&DAT_1000bdf0,1000,100,100);
    }
    if (300 < iVar2) {
      TryUnit(&DAT_1000bf40,400,0x14,100);
      TryUnit(&DAT_1000bf40,400,0x14,100);
      if (1000 < iVar5) {
        TryUnit(&DAT_1000bde8,0x46,100,100);
      }
    }
    TryUpgrade(&DAT_1000bd60,99,100);
    TryUpgrade(&DAT_1000bb28,99,100);
  }
  if (DAT_1000bce0 == 1) {
    iVar8 = GetUnits(&DAT_1000bdf0);
    if (0x2d < iVar8) {
      FUN_10001c40();
    }
  }
  TryUpgrade(&DAT_1000be10,100,100);
  TryUpgrade(&DAT_1000be88,0x62,100);
  TryUpgrade(&DAT_1000bdb0,99,100);
  TryUpgrade(&DAT_1000bd58,99,100);
  TryUpgrade(&DAT_1000bd60,99,100);
  TryUpgrade(&DAT_1000bd48,99,100);
  TryUpgrade(&DAT_1000bd50,99,100);
  TryUpgrade(&DAT_1000bba8,100,100);
  TryUpgrade(&DAT_1000bcd0,99,100);
  cVar1 = UpgIsDone(&DAT_1000be10);
  if (cVar1 != '\0') {
    if (DAT_1000bce0 == 1) {
      TryUnit(&DAT_1000bca8,0x28,10,0x32);
    }
    TryUpgrade(&DAT_1000bdd8,99,100);
    TryUpgrade(&DAT_1000bd98,99,100);
    cVar1 = UpgIsDone(&DAT_1000bd98);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000be58,0x28,10,0x32);
      TryUpgrade(&DAT_1000bc78,99,100);
    }
    TryUpgrade(&DAT_1000bb10,0x5f,100);
    FUN_10001ca0();
    cVar1 = UpgIsDone(&DAT_1000bd80);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000bb30,10,10,0x32);
    }
    cVar1 = UpgIsDone(&DAT_1000bdf8);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000bf28,0xc,10,0x32);
    }
    TryUnit(&DAT_1000bca8,0x14,10,0x32);
    FUN_10001b30();
    TryUpgrade(&DAT_1000bd40,0x1e,0x32);
    TryUpgrade(&DAT_1000bd38,0x1e,0x32);
    TryUpgrade(&DAT_1000bd30,0x1e,0x32);
    TryUpgrade(&DAT_1000bd28,0x1e,0x32);
    TryUpgrade(&DAT_1000bd20,0x1e,0x32);
    TryUpgrade(&DAT_1000bd18,0x1e,0x32);
    TryUpgrade(&DAT_1000bdd0,0x1e,0x32);
    TryUpgrade(&DAT_1000bdc8,0x1e,0x32);
    TryUpgrade(&DAT_1000bdc0,0x1e,0x32);
    TryUpgrade(&DAT_1000bdb8,0x1e,0x32);
    TryUpgrade(&DAT_1000bda8,0x1e,0x32);
    TryUpgrade(&DAT_1000bde0,0x1e,0x32);
  }
  TryUnit(&DAT_1000be58,3,0x32,0x32);
  if (DAT_1000bce0 == 1) {
    TryUnit(&DAT_1000bcc0,6,99,10);
    TryUnit(&DAT_1000bcc0,0xc,0x3c,10);
    TryUnit(&DAT_1000bce8,6,0x5a,0x14);
  }
  else {
    TryUnit(&DAT_1000bc98,3,0x5a,0x32);
    TryUnit(&DAT_1000bcc0,6,99,10);
    TryUnit(&DAT_1000bcc0,0xc,0x3c,10);
    TryUnit(&DAT_1000bcc0,0xf,0x32,10);
    TryUnit(&DAT_1000bce8,6,0x5a,0x14);
  }
  iVar8 = GetReadyUnits(&DAT_1000bc80);
  if (iVar8 == 0) goto LAB_10002565;
  if (100000 < iVar4) {
    AI_Torg(2,1,90000);
  }
  if (1000000 < iVar3) {
    AI_Torg(0,1,90000);
  }
  if (iVar2 < 300) {
    if (iVar6 < 0x2ee1) {
      if (iVar5 < 0xbb9) {
        if (iVar4 < 0x5dd) {
          if (iVar3 < 0x5dd) goto LAB_10002516;
          uVar12 = 1000;
          uVar11 = 0;
        }
        else {
          uVar12 = 0x5dc;
          uVar11 = 2;
        }
      }
      else {
        uVar12 = 1000;
        uVar11 = 1;
      }
    }
    else {
      uVar12 = 1000;
      uVar11 = 5;
    }
    AI_Torg(uVar11,3,uVar12);
  }
LAB_10002516:
  cVar1 = UpgIsDone(&DAT_1000be88);
  if ((cVar1 == '\0') && (800 < iVar5)) {
    if (9000 < iVar6) {
      AI_Torg(5,3,3000);
    }
    if (9000 < iVar7) {
      AI_Torg(4,3,3000);
    }
  }
LAB_10002565:
  cVar1 = FieldExist();
  if (cVar1 == '\0') {
    uVar13 = 5;
    uVar12 = 5;
    uVar11 = 0;
  }
  else {
    iVar3 = GetUnits(&DAT_1000bdf0);
    if ((iVar3 < 0x14) && (iVar2 < 2000)) {
      uVar13 = 2;
      uVar12 = 5;
      uVar11 = 10;
    }
    else {
      cVar1 = UpgIsDone(&DAT_1000bd50);
      if ((cVar1 == '\0') || (iVar2 < 15000)) {
        uVar13 = 4;
        uVar12 = 4;
        uVar11 = 10;
      }
      else {
        uVar13 = 4;
        uVar12 = 6;
        uVar11 = 10;
      }
    }
  }
  SetPDistribution(uVar11,uVar12,uVar13);
  cVar1 = UpgIsDone(&DAT_1000bba8);
  if (cVar1 == '\0') {
    TryUnit(&DAT_1000bce8,3,100,0x32);
  }
  else {
    SetPDistribution(6,7,3);
    TryUnit(&DAT_1000bce8,7,0x46,0x32);
    TryUpgrade(&DAT_1000be60,0x5f,100);
    TryUpgrade(&DAT_1000be68,0x5f,100);
    TryUpgrade(&DAT_1000bcc8,0x5f,100);
    cVar1 = UpgIsDone(&DAT_1000bcc8);
    if (cVar1 != '\0') {
      TryUpgrade(&DAT_1000bc88,0x5a,100);
      TryUpgrade(&DAT_1000bcb0,0x5a,100);
      TryUpgrade(&DAT_1000bb08,0x5a,100);
      TryUpgrade(&DAT_1000bca0,0x5a,100);
      return;
    }
  }
  return;
}





void FUN_100026a0(void)

{
  TryUpgrade(&DAT_1000bf08,0x5a,100);
  TryUpgrade(&DAT_1000bf10,0x5a,100);
  TryUpgrade(&DAT_1000bef8,0x5a,100);
  TryUpgrade(&DAT_1000bf00,0x5a,100);
  TryUpgrade(&DAT_1000bf18,0x5a,100);
  TryUpgrade(&DAT_1000bea8,0x5a,100);
  TryUpgrade(&DAT_1000be98,0x5a,100);
  TryUpgrade(&DAT_1000bea0,0x5a,100);
  TryUpgrade(&DAT_1000beb0,0x5a,100);
  TryUpgrade(&DAT_1000beb8,0x5a,100);
  if (DAT_1000bce0 == 1) {
    TryUpgrade(&DAT_1000bcf8,0x50,100);
    TryUpgrade(&DAT_1000be78,0x50,100);
  }
  return;
}





void FUN_10002770(void)

{
  return;
}





void FUN_10002780(void)

{
  TryUpgrade(&DAT_1000be38,0x1e,0x32);
  TryUpgrade(&DAT_1000be28,0x1e,0x32);
  TryUpgrade(&DAT_1000be00,0x1e,0x32);
  TryUpgrade(&DAT_1000bdf8,0x1e,0x32);
  TryUpgrade(&DAT_1000bd68,0x1e,0x32);
  TryUpgrade(&DAT_1000bd70,0x1e,0x32);
  TryUpgrade(&DAT_1000bd78,0x1e,0x32);
  TryUpgrade(&DAT_1000bd80,0x1e,0x32);
  return;
}





void FUN_10002800(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int uVar8;
  int uVar9;
  
  SetMineBalanse(0x13,&DAT_1000a030);
  iVar2 = GetMoney(3);
  GetMoney(0);
  GetMoney(2);
  iVar3 = GetMoney(1);
  GetMoney(5);
  GetMoney(4);
  TryUnit(&DAT_1000bd08,1,100,100);
  iVar4 = GetUnits(&DAT_1000bd08);
  if (iVar4 != 0) {
    TryUnit(&DAT_1000bcf0,2,100,100);
    iVar4 = GetUnits(&DAT_1000bcf0);
    if (iVar4 != 0) {
      TryUnit(&DAT_1000be50,1,100,100);
      TryUnit(&DAT_1000be70,1,100,100);
      iVar4 = GetUnits(&DAT_1000bcd8);
      if (iVar4 != 0) {
        TryUnit(&DAT_1000be70,2,100,100);
        iVar4 = GetUnits(&DAT_1000bcf0);
        if (1 < iVar4) {
          if (1000 < iVar2) {
            TryUnit(&DAT_1000be70,3,100,100);
          }
          TryUnit(&DAT_1000be70,4,0x3c,100);
          TryUnit(&DAT_1000be70,5,0x3c,100);
        }
      }
      TryUnit(&DAT_1000bd00,1,100,100);
      cVar1 = FieldExist();
      if ((cVar1 != '\0') && (0x4b0 < iVar2)) {
        TryUnit(&DAT_1000bd00,3,10,2);
        if (2000 < iVar2) {
          TryUnit(&DAT_1000bd00,5,10,1);
          TryUnit(&DAT_1000bd00,6,3,1);
          TryUnit(&DAT_1000bd00,7,2,1);
        }
        iVar4 = GetUnits(&DAT_1000bdf0);
        if (0x18 < iVar4) {
          TryUnit(&DAT_1000bc80,1,100,100);
        }
      }
      iVar4 = GetUnits(&DAT_1000bcd8);
      if ((iVar4 != 0) && (iVar4 = GetUnits(&DAT_1000be70), 1 < iVar4)) {
        TryUnit(&DAT_1000bd90,2,100,100);
        TryUnit(&DAT_1000bd90,3,0x5a,100);
        TryUnit(&DAT_1000bd90,4,0x5a,100);
        TryUnit(&DAT_1000bd90,5,0x5a,100);
        TryUnit(&DAT_1000bb00,1,100,100);
      }
      TryUnit(&DAT_1000bcd8,1,0x5a,100);
      iVar4 = GetUnits(&DAT_1000bec8);
      iVar5 = GetReadyUnits(&DAT_1000bec8);
      if ((iVar5 == iVar4) && (iVar4 = GetUnits(&DAT_1000bd90), iVar4 != 0)) {
        TryUnit(&DAT_1000bec8,2,0x32,10);
        TryUnit(&DAT_1000bec8,3,0x14,10);
      }
      iVar4 = GetUnits(&DAT_1000be70);
      if (iVar4 != 0) {
        TryUnit(&DAT_1000bd08,2,10,10);
      }
      TryUnit(&DAT_1000bd10,1,0x5a,10);
    }
  }
  TryUpgrade(&DAT_1000bf30,100,100);
  cVar1 = UpgIsRun(&DAT_1000bf30);
  if (cVar1 != '\0') {
    if (700 < iVar2) {
      iVar4 = GetUnits(&DAT_1000be90);
      if (iVar4 < 0x1a4) {
        TryUnit(&DAT_1000bb38,400,0x14,0x28);
        TryUnit(&DAT_1000be90,600,5,100);
      }
      else {
        TryUnit(&DAT_1000be90,600,5,100);
        iVar4 = GetUnits(&DAT_1000bb38);
        if (0xfa < iVar4) {
          TryUnit(&DAT_1000be48,800,0x14,0x3c);
        }
        TryUnit(&DAT_1000bb38,800,0x14,100);
      }
    }
    if (0xfa < iVar2) {
      TryUnit(&DAT_1000bdf0,1000,100,100);
    }
    if (300 < iVar2) {
      TryUnit(&DAT_1000bf40,400,0x14,100);
      TryUnit(&DAT_1000bf40,400,0x14,100);
      if (0x5dc < iVar3) {
        TryUnit(&DAT_1000bde8,0x46,100,100);
      }
    }
    TryUpgrade(&DAT_1000bd60,99,100);
    TryUpgrade(&DAT_1000bb28,99,100);
  }
  iVar3 = GetUnits(&DAT_1000bdf0);
  if (0x2d < iVar3) {
    FUN_10002770();
  }
  TryUpgrade(&DAT_1000be10,100,100);
  TryUpgrade(&DAT_1000be88,0x62,100);
  TryUpgrade(&DAT_1000bdb0,99,100);
  TryUpgrade(&DAT_1000bd58,99,100);
  TryUpgrade(&DAT_1000bd60,99,100);
  TryUpgrade(&DAT_1000bd48,99,100);
  TryUpgrade(&DAT_1000bd50,99,100);
  TryUpgrade(&DAT_1000bba8,100,100);
  cVar1 = UpgIsDone(&DAT_1000be10);
  if (cVar1 != '\0') {
    if (DAT_1000bce0 == 1) {
      TryUnit(&DAT_1000bca8,0x28,10,0x32);
    }
    TryUpgrade(&DAT_1000bb10,0x5f,100);
    FUN_10002780();
    cVar1 = UpgIsDone(&DAT_1000bd80);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000bb30,10,10,0x32);
    }
    cVar1 = UpgIsDone(&DAT_1000bdf8);
    if (cVar1 != '\0') {
      TryUnit(&DAT_1000bf28,0xc,10,0x32);
    }
    TryUnit(&DAT_1000bca8,0x32,10,0x32);
    TryUpgrade(&DAT_1000bd40,0x1e,0x32);
    TryUpgrade(&DAT_1000bd38,0x1e,0x32);
    TryUpgrade(&DAT_1000bd30,0x1e,0x32);
    TryUpgrade(&DAT_1000bd28,0x1e,0x32);
    TryUpgrade(&DAT_1000bd20,0x1e,0x32);
    TryUpgrade(&DAT_1000bd18,0x1e,0x32);
    TryUpgrade(&DAT_1000bdd0,0x1e,0x32);
    TryUpgrade(&DAT_1000bdc8,0x1e,0x32);
    TryUpgrade(&DAT_1000bdc0,0x1e,0x32);
    TryUpgrade(&DAT_1000bdb8,0x1e,0x32);
    TryUpgrade(&DAT_1000bda8,0x1e,0x32);
    TryUpgrade(&DAT_1000bde0,0x1e,0x32);
  }
  iVar3 = GetUnits(&DAT_1000bdf0);
  if (0x23 < iVar3) {
    FUN_100026a0();
  }
  iVar3 = GetReadyUnits(&DAT_1000bc80);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = GetMoney(0);
  iVar4 = GetMoney(2);
  iVar5 = GetMoney(4);
  iVar6 = GetMoney(5);
  iVar7 = GetMoney(1);
  if (iVar2 < 0x96) {
    if (iVar4 < 0x1389) {
      if (iVar4 < 0x3e9) {
        if (iVar3 < 0x1389) {
          if (iVar3 < 0x3e9) {
            if (iVar6 < 0x7d1) {
              if (iVar5 < 0x7d1) {
                if (iVar7 < 0x3e9) goto LAB_10002f45;
                uVar9 = 500;
                uVar8 = 1;
              }
              else {
                uVar9 = 800;
                uVar8 = 4;
              }
            }
            else {
              uVar9 = 800;
              uVar8 = 5;
            }
          }
          else {
            uVar9 = 900;
            uVar8 = 0;
          }
        }
        else {
          uVar9 = 3000;
          uVar8 = 0;
        }
      }
      else {
        uVar9 = 900;
        uVar8 = 2;
      }
    }
    else {
      uVar9 = 3000;
      uVar8 = 2;
    }
    AI_Torg(uVar8,3,uVar9);
  }
LAB_10002f45:
  iVar2 = GetReadyUnits(&DAT_1000bcd8);
  if (((iVar2 != 0) && (1000 < iVar7)) && (cVar1 = UpgIsRun(&DAT_1000be88), cVar1 == '\0')) {
    if (3000 < iVar5) {
      AI_Torg(4,3,2000);
    }
    if (4000 < iVar6) {
      AI_Torg(5,3,3000);
    }
  }
  iVar2 = GetMoney(2);
  if (120000 < iVar2) {
    AI_Torg(2,1,100000);
  }
  iVar2 = GetMoney(0);
  if (100000 < iVar2) {
    AI_Torg(0,1,90000);
  }
  iVar2 = GetUnits(&DAT_1000be50);
  if ((iVar2 != 0) && (cVar1 = UpgIsRun(&DAT_1000be10), cVar1 == '\0')) {
    iVar2 = GetMoney(5);
    if ((9000 < iVar2) &&
       ((iVar2 = GetMoney(0), iVar2 != 0 && (iVar2 = GetMoney(1), iVar2 < 4000)))) {
      iVar2 = GetMoney(5);
      if (12000 < iVar2) {
        AI_Torg(5,1,3000);
      }
      iVar2 = GetMoney(4);
      if (8000 < iVar2) {
        AI_Torg(4,1,2000);
      }
      iVar2 = GetMoney(2);
      if (20000 < iVar2) {
        AI_Torg(2,1,12000);
      }
      iVar2 = GetMoney(3);
      if (30000 < iVar2) {
        AI_Torg(3,1,15000);
      }
    }
    iVar2 = GetMoney(5);
    if (((9000 < iVar2) && (iVar2 = GetMoney(1), iVar2 != 0)) &&
       (iVar2 = GetMoney(1), 4000 < iVar2)) {
      iVar2 = GetMoney(5);
      if (12000 < iVar2) {
        AI_Torg(5,4,3000);
      }
      iVar2 = GetMoney(2);
      if (20000 < iVar2) {
        AI_Torg(2,4,12000);
      }
      iVar2 = GetMoney(3);
      if (30000 < iVar2) {
        AI_Torg(3,4,15000);
      }
    }
  }
  iVar2 = GetAIRegister(1);
  if (iVar2 == 0) {
    AI_Torg(5,3,4000);
    SetAIRegister(1,1);
  }
  return;
}





__declspec(dllexport) void InitAI(void)

{
  if (((((((1) &&
          (RegisterUnitType(&DAT_1000bb38,"Pikiner_turki(AL)"), 1)
          ) && (RegisterUnitType(&DAT_1000bdf0,"Krestian_Turki(AL)"),
               1)) &&
        ((RegisterUnitType(&DAT_1000bd88,"Pehota_turki(AL)"), 1 &&
         (RegisterUnitType(&DAT_1000bde8,"Grenader_DIP(AL)"), 1)))
        ) && ((RegisterUnitType(&DAT_1000be48,"Strelec_Algir(AL)"),
              1 &&
              ((RegisterUnitType(&DAT_1000bf40,"Mameluk(AL)"), 1
               && (RegisterUnitType(&DAT_1000bf28,"Pushka(AL)"), 1
                  )))))) &&
      (RegisterUnitType(&DAT_1000bb30,"Mortira(AL)"), 1)) &&
     (RegisterUnitType(&DAT_1000bca8,"Mortira_b(AL)"), 1)) {
    RegisterUnitType(&DAT_1000be58,"Lodka(AL)");
  }
  AssignFormUnit("Pikiner_turki(AL)");
  if ((((1) &&
       (RegisterUnitType(&DAT_1000be90,"Strelec_Algir(AL)"), 1))
      && (RegisterUnitType(&DAT_1000bed8,"Kozak_loshad_DIP(AL)"),
         1)) &&
     (RegisterUnitType(&DAT_1000bb70,"Oficer_turki(AL)"), 1)) {
    RegisterUnitType(&DAT_1000bb20,"Barabanshik_Turki(AL)");
  }
  if ((1) &&
     (RegisterUpgrade(&DAT_1000be78,"Oficer_turki(AL)ATTACK"), 1)
     ) {
    RegisterUpgrade(&DAT_1000bcf8,"Oficer_turki(AL)SHIELD");
  }
  if (((((1) &&
        (RegisterUnitType(&DAT_1000bcf0,"Center_Algir(AL)"), 1))
       && ((RegisterUnitType(&DAT_1000bd08,"Melnica_tu(AL)"), 1 &&
           (((RegisterUnitType(&DAT_1000be70,"Barack_Turki(AL)"),
             1 &&
             (RegisterUnitType(&DAT_1000bd00,"Sclad4(AL)"), 1)) &&
            (RegisterUnitType(&DAT_1000bcd8,"Minaret(AL)"), 1)))))
       ) && ((RegisterUnitType(&DAT_1000bd90,"Konushnia_Turki(AL)"),
             1 &&
             (RegisterUnitType(&DAT_1000bd10,"Diplomatic_Turki(AL)"),
             1)))) &&
     ((RegisterUnitType(&DAT_1000bb00,"Art_Depo_Turki(AL)"), 1 &&
      (((RegisterUnitType(&DAT_1000bc80,"Rinok_Turki(AL)"), 1 &&
        (RegisterUnitType(&DAT_1000be50,"Kuznia_Turki(AL)"), 1))
       && ((RegisterUnitType(&DAT_1000bda0,"Mechet_Turki(AL)"), 1
           && ((((RegisterUnitType(&DAT_1000bec8,"Port(AL)"), 1 &&
                 (RegisterUnitType(&DAT_1000bce8,"GALERA(AL)"), 1)
                 ) && (RegisterUnitType(&DAT_1000bc98,"PERES_KOR(AL)"),
                      1)) &&
               (RegisterUnitType(&DAT_1000bcc0,"Shebeka(AL)"), 1))
              )))))))) {
    RegisterUnitType(&DAT_1000bf38,"Linkor(AL)");
  }
  if (((((1) &&
        (RegisterUpgrade(&DAT_1000bed0,"AKA29AL"), 1)) &&
       (((RegisterUpgrade(&DAT_1000bcd0,"AKA06AL"), 1 &&
         ((RegisterUpgrade(&DAT_1000bf30,"Melnica_tu(AL)GETRES"),
          1 &&
          (RegisterUpgrade(&DAT_1000bb28,"KUZ01AL"), 1)))) &&
        (RegisterUpgrade(&DAT_1000bf08,"Pikiner_turki(AL)ATTACK"),
        1)))) &&
      (((((RegisterUpgrade(&DAT_1000bf10,"Pikiner_turki(AL)ATTACK3"),
          1 &&
          (RegisterUpgrade(&DAT_1000bef8,"Pikiner_turki(AL)ATTACK4"),
          1)) &&
         (RegisterUpgrade(&DAT_1000bf00,"Pikiner_turki(AL)ATTACK5"),
         1)) &&
        (((RegisterUpgrade(&DAT_1000bf18,"Pikiner_turki(AL)ATTACK6"),
          1 &&
          (RegisterUpgrade(&DAT_1000bea8,"Pikiner_turki(AL)SHIELD"),
          1)) &&
         ((RegisterUpgrade(&DAT_1000be98,"Pikiner_turki(AL)SHIELD3"),
          1 &&
          ((RegisterUpgrade(&DAT_1000bea0,"Pikiner_turki(AL)SHIELD4"),
           1 &&
           (RegisterUpgrade(&DAT_1000beb0,"Pikiner_turki(AL)SHIELD5"),
           1)))))))) &&
       ((RegisterUpgrade(&DAT_1000beb8,"Pikiner_turki(AL)SHIELD6"),
        1 &&
        (((RegisterUpgrade(&DAT_1000bee0,"Pehota_turki(AL)ATTACK"),
          1 &&
          (RegisterUpgrade(&DAT_1000bee8,"Pehota_turki(AL)ATTACK3"),
          1)) &&
         (RegisterUpgrade(&DAT_1000bef0,"Pehota_turki(AL)ATTACK4"),
         1)))))))) &&
     ((((RegisterUpgrade(&DAT_1000be18,"Pehota_turki(AL)SHIELD"),
        1 &&
        (RegisterUpgrade(&DAT_1000be20,"Pehota_turki(AL)SHIELD3"),
        1)) &&
       (((RegisterUpgrade(&DAT_1000be30,"Pehota_turki(AL)SHIELD4"),
         1 &&
         ((RegisterUpgrade(&DAT_1000bd40,"Mameluk(AL)ATTACK"), 1
          && (RegisterUpgrade(&DAT_1000bd38,"Mameluk(AL)ATTACK3"),
             1)))) &&
        (RegisterUpgrade(&DAT_1000bd30,"Mameluk(AL)ATTACK4"), 1))
       )) && ((((((((RegisterUpgrade(&DAT_1000bd28,"Mameluk(AL)ATTACK5"),
                    1 &&
                    (RegisterUpgrade(&DAT_1000bd20,"Mameluk(AL)ATTACK6"),
                    1)) &&
                   (RegisterUpgrade(&DAT_1000bd18,"Mameluk(AL)ATTACK7"),
                   1)) &&
                  ((RegisterUpgrade(&DAT_1000bdd0,"Mameluk(AL)SHIELD"),
                   1 &&
                   (RegisterUpgrade(&DAT_1000bdc8,"Mameluk(AL)SHIELD3"),
                   1)))) &&
                 (RegisterUpgrade(&DAT_1000bdc0,"Mameluk(AL)SHIELD4"),
                 1)) &&
                (((((((RegisterUpgrade(&DAT_1000bdb8,"Mameluk(AL)SHIELD5"),
                      1 &&
                      (RegisterUpgrade(&DAT_1000bda8,"Mameluk(AL)SHIELD6"),
                      1)) &&
                     ((RegisterUpgrade(&DAT_1000bde0,"Mameluk(AL)SHIELD7"),
                      1 &&
                      (((RegisterUpgrade(&DAT_1000be38,"Pushka(AL)BUILD"),
                        1 &&
                        (RegisterUpgrade(&DAT_1000be28,"Pushka(AL)BUILD3"),
                        1)) &&
                       (RegisterUpgrade(&DAT_1000be00,"Pushka(AL)BUILD4"),
                       1)))))) &&
                    ((RegisterUpgrade(&DAT_1000bdf8,"Pushka(AL)BUILD5"),
                     1 &&
                     (RegisterUpgrade(&DAT_1000be08,"Pushka(AL)BUILD6"),
                     1)))) &&
                   (RegisterUpgrade(&DAT_1000bd68,"Mortira(AL)BUILD"),
                   1)) &&
                  (((RegisterUpgrade(&DAT_1000bd70,"Mortira(AL)BUILD3"),
                    1 &&
                    (RegisterUpgrade(&DAT_1000bd78,"Mortira(AL)BUILD4"),
                    1)) &&
                   ((RegisterUpgrade(&DAT_1000bd80,"Mortira(AL)BUILD5"),
                    1 &&
                    (((RegisterUpgrade(&DAT_1000be10,"KUZ03AL"),
                      1 &&
                      (RegisterUpgrade(&DAT_1000bd60,"AKA01AL"),
                      1)) &&
                     (RegisterUpgrade(&DAT_1000bd48,"AKA02AL"), 1
                     )))))))) &&
                 ((((RegisterUpgrade(&DAT_1000bd50,"AKA03AL"), 1
                    && (RegisterUpgrade(&DAT_1000bd58,"AKA04AL"),
                       1)) &&
                   ((RegisterUpgrade(&DAT_1000be88,"AKA08AL"), 1
                    && (((RegisterUpgrade(&DAT_1000bdb0,"AKA23AL"),
                         1 &&
                         (RegisterUpgrade(&DAT_1000bdd8,"AKA24AL"),
                         1)) &&
                        ((RegisterUpgrade(&DAT_1000bcb8,"AKA10AL"),
                         1 &&
                         ((((RegisterUpgrade(&DAT_1000bba8,"AKA30AL"),
                            1 &&
                            (RegisterUpgrade(&DAT_1000bd98,"AKA07AL"),
                            1)) &&
                           (RegisterUpgrade(&DAT_1000bcc8,"AKA20AL"),
                           1)) &&
                          ((RegisterUpgrade(&DAT_1000be60,"KUZ02AL"),
                           1 &&
                           (RegisterUpgrade(&DAT_1000be68,"AKA09AL"),
                           1)))))))))))) &&
                  (RegisterUpgrade(&DAT_1000bc78,"AKA05AL"), 1)))
                 ))) && ((RegisterUpgrade(&DAT_1000bc88,"AKA28AL"),
                         1 &&
                         (RegisterUpgrade(&DAT_1000bb10,"KUZ05AL"),
                         1)))) &&
              ((RegisterUpgrade(&DAT_1000bb08,"AKA16AL"), 1 &&
               (RegisterUpgrade(&DAT_1000bca0,"AKA17AL"), 1))))))
     )) {
    RegisterUpgrade(&DAT_1000bcb0,"AKA27AL");
  }
  SetPDistribution(9,4,4);
  AssignAmountOfMineUpgrades(6);
  AssignMineUpgrade(0,"shahta(AL)INSIDE",0x5a);
  AssignMineUpgrade(1,"shahta(AL)INSIDE3",0x32);
  AssignMineUpgrade(2,"shahta(AL)INSIDE4",0x32);
  AssignMineUpgrade(3,"shahta(AL)INSIDE5",0x32);
  AssignMineUpgrade(4,"shahta(AL)INSIDE6",0x32);
  AssignMineUpgrade(5,"shahta(AL)INSIDE7",0x32);
  AssignPeasant("Krestian_Turki(AL)");
  AssignMine("shahta(AL)");
  AssignHouse("Dom_Algir(AL)");
  SET_MINE_CAPTURE_RADIUS(0x122);
  SET_MINE_UPGRADE1_RADIUS(0x104);
  SET_MINE_UPGRADE2_RADIUS(0x82);
  SET_DEFAULT_MAX_WORKERS(300);
  SET_MIN_PEASANT_BRIGADE(5);
  return;
}






__declspec(dllexport) void ProcessAI(void)

{
  DAT_1000bce0 = GetLandType();
  DAT_1000bf20 = GetDifficulty();
  if (DAT_1000c0f4 == 0) {
    DAT_1000c0f4 = 10;
    DAT_1000a0c8 = 0x1e;
  }
  else if (DAT_1000c0f4 == 1) {
    DAT_1000c0f4 = 0x1e;
    DAT_1000a0c8 = 0x32;
  }
  else {
    DAT_1000c0f4 = 100;
    DAT_1000a0c8 = 100;
  }
  DAT_1000bc90 = GetStartRes();
  if (DAT_1000bce0 == 0) {
    FUN_10002800();
  }
  else if ((0 < DAT_1000bce0) && (DAT_1000bce0 < 5)) {
    FUN_10001d30();
  }
  FUN_10001000();
  return;
}




BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reason; (void)reserved;
    return TRUE;
}

#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1002d044[] = "Z3";
char DAT_1002d048[] = "Z2";
char DAT_1002d04c[] = "Z1";
char DAT_1002d068[] = "G03";
char DAT_1002d06c[] = "G02";
char DAT_1002d070[] = "G01";
char DAT_1002d074[] = "GM2";
char DAT_1002d078[] = "GM1";
char DAT_1002d07c[] = "ZB2";
char DAT_1002d080[] = "ZA2";
char DAT_1002d084[] = "ZM23";
char DAT_1002d08c[] = "ZM22";
char DAT_1002d094[] = "ZM21";
char DAT_1002d09c[] = "ZM2";
char DAT_1002d0a0[] = "ZM13";
char DAT_1002d0a8[] = "ZM12";
char DAT_1002d0b0[] = "ZM11";
char DAT_1002d0b8[] = "ZM1";
char DAT_1002d0c4[] = "Z33";
char DAT_1002d0c8[] = "Z32";
char DAT_1002d0cc[] = "Z31";
char DAT_1002d0d0[] = "GV2";
char DAT_1002d0d4[] = "GV1";
char DAT_1002d0d8[] = "ZV2";
char DAT_1002d0dc[] = "ZV12";
char DAT_1002d0e4[] = "ZV11";
char DAT_1002d0ec[] = "ZB1";
char DAT_1002d0f0[] = "ZA1";
char DAT_1002d164[] = "GT1";
char DAT_1002d1f0[] = "ZV1";
char DAT_1002d1f4[] = "Z0";
int DAT_10030a38 = 100;
long long DAT_100323f0 = 0;
int DAT_100323f8 = 0;
int DAT_100323fc = 0;
int DAT_10032400 = 0;
long long DAT_10032408 = 0;
long long DAT_10032410 = 0;
long long DAT_10032420 = 0;
long long DAT_10032428 = 0;
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
long long DAT_100324e8 = 0;
long long DAT_100324f0 = 0;
long long DAT_10032500 = 0;
long long DAT_10032508 = 0;
long long DAT_10032510 = 0;
long long DAT_10032518 = 0;
long long DAT_10032520 = 0;
long long DAT_10032528 = 0;
long long DAT_10032530 = 0;
long long DAT_10032540 = 0;
long long DAT_10032548 = 0;
long long DAT_10032550 = 0;
long long DAT_10032558 = 0;
long long DAT_10032560 = 0;
long long DAT_10032568 = 0;
long long DAT_10032570 = 0;
long long DAT_10032578 = 0;
long long DAT_10032580 = 0;
long long DAT_10032588 = 0;
long long DAT_10032590 = 0;
int DAT_10032598 = 0;
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

/* Forward declarations */
void FUN_10001250(int param_1);
void FUN_10001310(unsigned short *param_1,int param_2);
void FUN_100014b0(int param_1);
void FUN_10001530(char param_1);
void FUN_100015e0(char param_1,char param_2);
void FUN_10001670(char param_1);
void FUN_100016e0(int param_1,int param_2,char param_3,char param_4);
void FUN_10001780(int param_1,int param_2);
void FUN_100017d0(int param_1,int param_2,char param_3);
void FUN_10001820(int param_1,int param_2);
void FUN_10001870(int param_1,int param_2,char param_3);
void FUN_100018c0(int param_1,int param_2,int param_3,char param_4);
void FUN_10001930(int param_1,int param_2,int param_3);
void FUN_100019b0(int param_1,int param_2,int param_3,int param_4,
            char param_5,int param_6);
void FUN_10001a80(int param_1,int param_2,int param_3,int param_4);
void FUN_10001b30(int param_1,int param_2,int param_3,int param_4,
            char param_5,int param_6);
void FUN_10001bf0(unsigned int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6);
void FUN_10001fd0(void);
void FUN_10002af0(void);


void __cdecl FUN_10001250(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
ClearSelection(0);
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    SelectUnitsType(&DAT_10032410 + local_8 * 8,0,1);
  }
  SaveSelectedUnits(0,param_1,0);
  return;
}





void __cdecl FUN_10001310(unsigned short *param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  unsigned int local_58;
  int local_54;
  int local_50;
  int local_4c;
  unsigned int local_48 [5];
  int local_34;
  int local_30;
  unsigned int local_1c;
  unsigned int local_18;
  unsigned int local_14;
  int local_10;
  unsigned int local_c;
  int local_8;
FUN_10001250(param_2);
  local_8 = GetTotalAmount0(param_2);
  local_c = 0;
  local_10 = 0;
  local_14 = *(unsigned int *)(param_1 + 2) & 0xffffff;
  local_18 = (unsigned int)*param_1;
  local_1c = (unsigned int)param_1[1];
  if (0 < local_8) {
    for (local_4c = 0; local_4c < local_8; local_4c = local_4c + 1) {
      GetUnitInfo(param_2,local_4c,local_48);
      local_50 = local_34 - local_18;
      local_54 = local_30 - local_1c;
      OnInit();
      if ((int)local_58 < (int)local_14) {
        local_c = local_48[0] & 0xffff;
        local_14 = local_58;
        if (local_10 == 0) {
          local_10 = 1;
        }
      }
    }
    ProcessScenary(param_2);
    InsertUnitToGroup(0,param_2,local_c);
  }
  return;
}





void __cdecl FUN_100014b0(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
for (local_8 = 0; (int)local_8 < 7; local_8 = local_8 + 1) {
    iVar1 = GetUnitsByNation(param_1,local_8 & 0xff);
    if (0 < iVar1) break;
  }
  return;
}





void __cdecl FUN_10001530(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
for (local_8 = 0; (int)local_8 < 6; local_8 = local_8 + 1) {
    iVar1 = GetResource(param_1,local_8 & 0xff);
    if (iVar1 < DAT_10030a38) {
      AddResource(param_1,local_8 & 0xff,DAT_10030a38);
    }
  }
  return;
}





void __cdecl FUN_100015e0(char param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
iVar1 = GetResource(param_1,(int)param_2);
  if (iVar1 < 100000) {
    SetResource(param_1,param_2,1000000);
  }
  uStack_8 = 0x10001645;
  return;
}





void __cdecl FUN_10001670(char param_1)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    FUN_100015e0(param_1,(char)local_8);
  }
  return;
}





void __cdecl
FUN_100016e0(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  unsigned int local_8;
FUN_100014b0(param_1);
  SelectUnits(param_1,0);
  SelSendAndKill(local_8 & 0xff,param_2,param_3,param_4);
  return;
}





void __cdecl FUN_10001780(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100016e0(param_1,param_2,0x80,2);
  uStack_8 = 0x100017bc;
  return;
}





void __cdecl FUN_100017d0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100016e0(param_1,param_2,param_3,2);
  uStack_8 = 0x1000180b;
  return;
}





void __cdecl FUN_10001820(int param_1,int param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100016e0(param_1,param_2,0x80,0);
  uStack_8 = 0x1000185c;
  return;
}





void __cdecl FUN_10001870(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
FUN_100016e0(param_1,param_2,param_3,0);
  uStack_8 = 0x100018ab;
  return;
}





void __cdecl
FUN_100018c0(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
CreateObject0(param_1,&DAT_10032498,param_2,param_4,param_3,0);
  uStack_8 = 0x10001911;
  return;
}





void __cdecl FUN_10001930(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
local_8 = 3;
  FUN_100018c0(&DAT_10032428,param_2,param_3,3);
  RemoveGroup(&DAT_10032428,param_1);
  return;
}





void __cdecl
FUN_100019b0(int param_1,int param_2,int param_3,int param_4,
            char param_5,int param_6)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
FUN_100014b0(param_1);
  FUN_10001670((char)local_8);
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 < param_6) {
    ProduceUnitFast(param_2,param_3,param_1,0);
    FUN_10001870(param_1,param_4,param_5);
  }
  return;
}





void __cdecl FUN_10001a80(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
FUN_100014b0(param_1);
  FUN_10001670((char)local_8);
  iVar1 = GetTotalAmount0(param_1);
  if (iVar1 < param_4) {
    ProduceUnitFast(param_2,param_3,param_1,0);
  }
  return;
}





void __cdecl
FUN_10001b30(int param_1,int param_2,int param_3,int param_4,
            char param_5,int param_6)

{
  int iVar1;
  int *puVar2;
  int local_4c [16];
  int local_c;
  int local_8;
FUN_100014b0(param_1);
  FUN_10001670((char)local_8);
  for (local_c = 0; local_c < param_6; local_c = local_c + 1) {
    ProduceUnitFast(param_2,param_3,param_1,0);
  }
  FUN_10001870(param_1,param_4,param_5);
  return;
}





void __cdecl
FUN_10001bf0(unsigned int param_1,int param_2,int param_3,int param_4,
            int param_5,int param_6)

{
  unsigned int uVar1;
  int iVar2;
  int *puVar3;
  int local_4c [16];
  unsigned int local_c;
  unsigned int local_8;
local_8 = param_1 + 10;
  local_c = param_1 + 0x28;
  uVar1 = TimerDone(param_1 & 0xff);
  if ((uVar1 & 0xff) == 0) goto LAB_10001ef6;
  SaveSelectedUnits(0,&DAT_100324a8,0);
  iVar2 = GetTotalAmount0(param_2);
  if (0 < iVar2) {
    CreateZoneNearGroup(&DAT_10032420,param_4,param_2,1000);
  }
  FUN_10001310((unsigned short *)&DAT_10032420,&DAT_100323f0);
  if (iVar2 == 0) {
    uVar1 = Trigg(local_c & 0xff);
    if ((uVar1 & 0xff) == 0) {
      SelectUnits(param_2,0);
      SelectUnits(param_3,1);
      SelCenter(&DAT_10032420,3,1000);
      FUN_10001820(param_2,&DAT_10032420);
      FUN_10001820(param_3,&DAT_10032420);
      FUN_10001780(param_2,param_4);
      FUN_10001780(param_3,param_4);
      FUN_10001780(param_2,param_5);
      FUN_10001780(param_3,param_5);
      FUN_10001780(param_2,param_6);
      FUN_10001780(param_3,param_6);
      FUN_10001780(param_3,&DAT_10032480);
      SetTrigg(local_c & 0xff,1);
    }
  }
  else {
    SelectUnits(param_2,0);
    SelAttackGroup(3,&DAT_100323f0);
    uVar1 = Trigg(local_c & 0xff);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(local_8 & 0xff);
      if ((uVar1 & 0xff) == 0) goto LAB_10001ec9;
    }
    iVar2 = GetTotalAmount0(param_2);
    if (0 < iVar2) {
      CreateZoneNearGroup(&DAT_10032420,&DAT_100325f8,param_2,1000);
    }
    FUN_10001870(param_3,&DAT_10032420,0x80);
    RunTimer(local_8 & 0xff,100);
    SetTrigg(local_c & 0xff,0);
  }
LAB_10001ec9:
  ClearSelection(0);
  SelectUnits(&DAT_100324a8,0);
LAB_10001ef6:
  return;
}





void FUN_10001fd0(void)

{
  int iVar1;
  int *puVar2;
  int local_48 [16];
  int local_8;
RegisterVar(&DAT_100323fc,4);
  RegisterVar(&DAT_100323f8,4);
  RegisterVar(&DAT_10032400,4);
  RegisterVar(&DAT_10032598,4);
  SetPlayerName(1,"BAVARIA");
  SetPlayerName(3,"BAVARIA");
  SetPlayerName(4,"DUTCH");
  RegisterZone(&DAT_10032480,DAT_1002d1f4);
  RegisterZone(&DAT_100325f8,DAT_1002d1f0);
  RegisterDynGroup(&DAT_100324a8);
  RegisterDynGroup(&DAT_10032428);
  RegisterFormation(&DAT_10032498,"#ALONE");
  RegisterUnitType(&DAT_10032570,"Strelec_Algir_DIP(BA)");
  RegisterUnitType(&DAT_10032500,"Grenader_DIP(BA)");
  RegisterUnitType(&DAT_10032590,"Pehota_turki_DIP(BA)");
  RegisterUnitType(&DAT_10032408,"Kozak_loshad_DIP(BA)");
  RegisterUnitType(&DAT_100325d8,"Dragun_18_DIP(BA)");
  RegisterUnits(&DAT_10032558,DAT_1002d164);
  RegisterUnitType(&DAT_100324c0,"Kreposnoi_pruss(DA)");
  RegisterUnitType(&DAT_100324b8,"Melnica(DA)");
  RegisterUnitType(&DAT_100324b0,"shahta(DA)");
  RegisterUnitType(&DAT_10032610,"Europ(DA)");
  RegisterUnitType(&DAT_100325f0,"Kuznica(DA)");
  RegisterUnitType(&DAT_10032550,"Dom_Prussia(DA)");
  RegisterUnits(&DAT_10032508,"GDip1");
  RegisterDynGroup(&DAT_10032618);
  RegisterVar(&DAT_10032618,8);
  RegisterDynGroup(&DAT_10032588);
  RegisterVar(&DAT_10032588,8);
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    RegisterUnitType(&DAT_10032410 + local_8 * 8,(((int*)0))[local_8]);
  }
  RegisterDynGroup(&DAT_100323f0);
  RegisterVar(&DAT_100323f0,8);
  RegisterZone(&DAT_100325b8,DAT_1002d0f0);
  RegisterZone(&DAT_100325c8,DAT_1002d0ec);
  RegisterDynGroup(&DAT_100324c8);
  RegisterVar(&DAT_100324c8,8);
  RegisterDynGroup(&DAT_100324d8);
  RegisterVar(&DAT_100324d8,8);
  RegisterDynGroup(&DAT_10032578);
  RegisterVar(&DAT_10032578,8);
  RegisterZone(&DAT_10032540,DAT_1002d0e4);
  RegisterZone(&DAT_10032548,DAT_1002d0dc);
  RegisterZone(&DAT_10032600,DAT_1002d0d8);
  RegisterUnits(&DAT_10032560,DAT_1002d0d4);
  RegisterUnits(&DAT_10032568,DAT_1002d0d0);
  RegisterZone(&DAT_100325a0,DAT_1002d0cc);
  RegisterZone(&DAT_100325a8,DAT_1002d0c8);
  RegisterZone(&DAT_100325b0,DAT_1002d0c4);
  RegisterUnits(&DAT_10032510,"GDip2");
  RegisterDynGroup(&DAT_10032608);
  RegisterVar(&DAT_10032608,8);
  RegisterDynGroup(&DAT_10032580);
  RegisterVar(&DAT_10032580,8);
  RegisterZone(&DAT_100325e0,DAT_1002d0b8);
  RegisterZone(&DAT_10032438,DAT_1002d0b0);
  RegisterZone(&DAT_10032440,DAT_1002d0a8);
  RegisterZone(&DAT_10032448,DAT_1002d0a0);
  RegisterZone(&DAT_100325e8,DAT_1002d09c);
  RegisterZone(&DAT_10032450,DAT_1002d094);
  RegisterZone(&DAT_10032458,DAT_1002d08c);
  RegisterZone(&DAT_10032460,DAT_1002d084);
  RegisterZone(&DAT_100325c0,DAT_1002d080);
  RegisterZone(&DAT_100325d0,DAT_1002d07c);
  RegisterDynGroup(&DAT_100324d0);
  RegisterVar(&DAT_100324d0,8);
  RegisterDynGroup(&DAT_100324e0);
  RegisterVar(&DAT_100324e0,8);
  RegisterUnits(&DAT_10032520,DAT_1002d078);
  RegisterUnits(&DAT_10032530,DAT_1002d074);
  RegisterUnits(&DAT_10032468,DAT_1002d070);
  RegisterUnits(&DAT_10032470,DAT_1002d06c);
  RegisterUnits(&DAT_10032478,DAT_1002d068);
  RegisterUnits(&DAT_10032628,"GFOOD1");
  RegisterUnits(&DAT_10032620,"GFOOD2");
  RegisterDynGroup(&DAT_100324e8);
  RegisterVar(&DAT_100324e8,8);
  RegisterDynGroup(&DAT_100324f0);
  RegisterVar(&DAT_100324f0,8);
  RegisterUnits(&DAT_10032528,"GArmy");
  RegisterZone(&DAT_10032488,DAT_1002d04c);
  RegisterZone(&DAT_10032490,DAT_1002d048);
  RegisterZone(&DAT_100324a0,DAT_1002d044);
  RegisterUnits(&DAT_10032518,"GDip3");
  return;
}





void FUN_10002af0(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *puVar6;
  int local_50 [16];
  unsigned int local_10;
  unsigned int local_c;
  int local_8;
FUN_10001530(1);
  FUN_10001670(3);
  uVar1 = Trigg(0);
  if ((uVar1 & 0xff) != 0) {
    DAT_10032400 = GetDiff(0);
    DAT_10032598 = DAT_10032400 + 5;
    DAT_100323fc = 0;
    DAT_100323f8 = 0;
    InitialUpgrade("GFOOD1","AKA01DA");
    InitialUpgrade("GFOOD1","AKA02DA");
    InitialUpgrade("GFOOD1","AKA03DA");
    InitialUpgrade("GFOOD1","AKA04DA");
    ChangeFriends(1,0xe);
    ChangeFriends(3,0xe);
    ChangeFriends(4,0x11);
    SetResource(0,3,(5 - DAT_10032400) * 1000);
    uVar2 = GetResource(0,3);
    SetResource(0,1,uVar2);
    uVar2 = GetResource(0,3);
    SetResource(0,4,uVar2);
    uVar2 = GetResource(0,3);
    SetResource(0,5,uVar2);
    uVar2 = GetResource(0,3);
    SetResource(0,0,uVar2);
    uVar2 = GetResource(0,3);
    SetResource(0,2,uVar2);
    iVar5 = GetResource(0,3);
    SetResource(1,0,iVar5 << 1);
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
    FUN_10001b30(&DAT_100324d8,&DAT_10032508,&DAT_10032590,&DAT_10032480,0,DAT_10032598);
    FUN_10001b30(&DAT_100324c8,&DAT_10032508,&DAT_10032500,&DAT_10032480,0,DAT_10032598);
    FUN_10001b30(&DAT_100324c8,&DAT_10032508,&DAT_10032570,&DAT_10032480,0,DAT_10032598);
    FUN_10001b30(&DAT_100324d8,&DAT_10032508,&DAT_10032590,&DAT_10032480,0,DAT_10032598);
    FUN_10001b30(&DAT_100324e0,&DAT_10032510,&DAT_10032590,&DAT_10032480,0,DAT_10032598);
    FUN_10001b30(&DAT_100324d0,&DAT_10032510,&DAT_10032500,&DAT_10032480,0,DAT_10032598);
    FUN_10001b30(&DAT_100324d0,&DAT_10032510,&DAT_10032570,&DAT_10032480,0,DAT_10032598);
    FUN_10001b30(&DAT_100324e0,&DAT_10032510,&DAT_10032590,&DAT_10032480,0,DAT_10032598);
    FUN_10001b30(&DAT_10032578,&DAT_10032508,&DAT_10032500,&DAT_100325a0,0,DAT_10032598);
    FUN_10001b30(&DAT_10032578,&DAT_10032510,&DAT_10032500,&DAT_100325b0,0,DAT_10032598);
    TakeFood(&DAT_10032628);
    TakeFood(&DAT_10032620);
    SelectUnits(&DAT_10032468,0);
    SelectUnits(&DAT_10032470,1);
    SelectUnits(&DAT_10032478,1);
    SelChangeNation(4,0);
    ClearSelection(0);
    RunTimer(1,1000);
    RunTimer(3,1000);
    RunTimer(5,2000);
    RunTimer(0xb,0);
    RunTimer(10,1000);
    RunTimer(0x14,(DAT_10032400 * -0x1e + 0x78) * 1000);
    StartAI(1,"BAVARIA.0",0,0,1,DAT_10032400);
    SetStartPoint(&DAT_10032480);
    ShowPage("#PAGE0");
    SetTrigg(0,0);
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032560);
    if (iVar5 == 0) {
      ShowPage("#PAGE1");
      uVar1 = Trigg(2);
      if ((uVar1 & 0xff) == 0) {
        ShowPage("#PAGE2");
      }
      SetTrigg(1,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) != 0) {
    AddResource(0,3,10);
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032568);
    if (iVar5 == 0) {
      ShowPage("#PAGE1");
      uVar1 = Trigg(1);
      if ((uVar1 & 0xff) == 0) {
        ShowPage("#PAGE2");
      }
      SetTrigg(2,0);
    }
  }
  uVar1 = Trigg(2);
  if ((uVar1 & 0xff) != 0) {
    AddResource(0,3,10);
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032520);
    if (iVar5 == 0) {
      ShowPage("#PAGE3");
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) == 0) {
        ShowPage("#PAGE4");
      }
      RemoveGroup(&DAT_10032608,&DAT_10032578);
      RemoveGroup(&DAT_10032580,&DAT_10032578);
      SetTrigg(3,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) != 0) {
    AddResource(0,1,10);
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032530);
    if (iVar5 == 0) {
      ShowPage("#PAGE3");
      uVar1 = Trigg(3);
      if ((uVar1 & 0xff) == 0) {
        ShowPage("#PAGE4");
      }
      RemoveGroup(&DAT_10032608,&DAT_10032578);
      RemoveGroup(&DAT_10032580,&DAT_10032578);
      SetTrigg(4,0);
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    AddResource(0,1,10);
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      RemoveGroup(&DAT_10032618,&DAT_10032578);
      RemoveGroup(&DAT_10032588,&DAT_10032578);
      uVar1 = Trigg(1);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(2);
        if ((uVar1 & 0xff) != 0) goto LAB_100035ce;
      }
      else {
LAB_100035ce:
        RemoveGroup(&DAT_100324c8,&DAT_10032618);
        RemoveGroup(&DAT_100324d8,&DAT_10032588);
        FUN_10001820(&DAT_10032618,&DAT_100325c8);
        FUN_10001820(&DAT_10032588,&DAT_100325b8);
      }
      FUN_10001b30(&DAT_100324d8,&DAT_10032508,&DAT_10032590,&DAT_10032480,0,DAT_10032598);
      FUN_10001b30(&DAT_100324c8,&DAT_10032508,&DAT_10032500,&DAT_10032480,0,DAT_10032598);
      FUN_10001b30(&DAT_100324c8,&DAT_10032508,&DAT_10032570,&DAT_10032480,0,DAT_10032598);
      FUN_10001b30(&DAT_100324d8,&DAT_10032508,&DAT_10032590,&DAT_10032480,0,DAT_10032598);
      FreeTimer(1);
      RunTimer(2,0x5dc);
      SetTrigg(0x2a,0);
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      RemoveGroup(&DAT_10032608,&DAT_10032578);
      RemoveGroup(&DAT_10032580,&DAT_10032578);
      uVar1 = Trigg(3);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(4);
        if ((uVar1 & 0xff) != 0) goto LAB_100037b3;
      }
      else {
LAB_100037b3:
        RemoveGroup(&DAT_100324d0,&DAT_10032608);
        RemoveGroup(&DAT_100324e0,&DAT_10032580);
        FUN_10001820(&DAT_10032608,&DAT_100325d0);
        FUN_10001820(&DAT_10032580,&DAT_100325c0);
      }
      FUN_10001b30(&DAT_100324e0,&DAT_10032510,&DAT_10032590,&DAT_10032480,0,DAT_10032598);
      FUN_10001b30(&DAT_100324d0,&DAT_10032510,&DAT_10032500,&DAT_10032480,0,DAT_10032598);
      FUN_10001b30(&DAT_100324d0,&DAT_10032510,&DAT_10032570,&DAT_10032480,0,DAT_10032598);
      FUN_10001b30(&DAT_100324e0,&DAT_10032510,&DAT_10032590,&DAT_10032480,0,DAT_10032598);
      FreeTimer(3);
      RunTimer(4,0x5dc);
      SetTrigg(0x2c,0);
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      iVar5 = GetTotalAmount0(&DAT_10032618);
      iVar3 = GetTotalAmount0(&DAT_10032588);
      if (iVar5 + iVar3 < ((int)(DAT_10032598 + (DAT_10032598 >> 0x1f & 3U)) >> 2) + 4) {
        FreeTimer(2);
        uVar1 = Trigg(1);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(2);
          if ((uVar1 & 0xff) == 0) {
            RunTimer(1,(4 - DAT_10032400) * 0x5dc);
            goto LAB_10003a0e;
          }
        }
        RunTimer(1,(4 - DAT_10032400) * 500);
      }
    }
  }
LAB_10003a0e:
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      iVar5 = GetTotalAmount0(&DAT_10032608);
      iVar3 = GetTotalAmount0(&DAT_10032580);
      if (iVar5 + iVar3 < ((int)(DAT_10032598 + (DAT_10032598 >> 0x1f & 3U)) >> 2) + 4) {
        FreeTimer(4);
        uVar1 = Trigg(3);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(4);
          if ((uVar1 & 0xff) == 0) {
            RunTimer(3,(4 - DAT_10032400) * 0x5dc);
            goto LAB_10003b37;
          }
        }
        RunTimer(3,(4 - DAT_10032400) * 500);
      }
    }
  }
LAB_10003b37:
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(1);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(2);
      if ((uVar1 & 0xff) == 0) {
        FUN_100019b0(&DAT_100324c8,&DAT_10032508,&DAT_10032590,&DAT_10032488,0x80,
                           DAT_10032598 / 2);
        FUN_100019b0(&DAT_100324d8,&DAT_10032508,&DAT_10032500,&DAT_10032488,0x80,
                           DAT_10032598 / 2);
      }
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(4);
      if ((uVar1 & 0xff) == 0) {
        FUN_100019b0(&DAT_100324d0,&DAT_10032510,&DAT_10032590,&DAT_10032490,0x80,
                           DAT_10032598 / 2);
        FUN_100019b0(&DAT_100324e0,&DAT_10032510,&DAT_10032500,&DAT_10032490,0x80,
                           DAT_10032598 / 2);
      }
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032508);
    if (iVar5 == 0) {
      ShowPage("#PAGE6");
      SetTrigg(0x1f,0);
    }
  }
  uVar1 = Trigg(1);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(2);
    if ((uVar1 & 0xff) == 0) {
      iVar5 = GetTotalAmount0(&DAT_10032618);
      iVar3 = GetTotalAmount0(&DAT_10032588);
      if (0 < iVar5 + iVar3) {
        RemoveGroup(&DAT_10032618,&DAT_10032578);
        RemoveGroup(&DAT_10032588,&DAT_10032578);
      }
    }
    else {
      FUN_10001bf0(2,&DAT_10032618,&DAT_10032588,&DAT_10032600,&DAT_10032548,&DAT_10032480);
    }
  }
  else {
    FUN_10001bf0(2,&DAT_10032618,&DAT_10032588,&DAT_100325f8,&DAT_10032540,&DAT_10032600);
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032510);
    if (iVar5 == 0) {
      ShowPage("#PAGE7");
      SetTrigg(0x20,0);
    }
  }
  uVar1 = Trigg(3);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(4);
    if ((uVar1 & 0xff) == 0) {
      iVar5 = GetTotalAmount0(&DAT_10032608);
      iVar3 = GetTotalAmount0(&DAT_10032580);
      if (0 < iVar5 + iVar3) {
        RemoveGroup(&DAT_10032608,&DAT_10032578);
        RemoveGroup(&DAT_10032580,&DAT_10032578);
      }
    }
    else {
      FUN_10001bf0(4,&DAT_10032608,&DAT_10032580,&DAT_100325e0,&DAT_10032438,&DAT_10032440);
    }
  }
  else {
    FUN_10001bf0(4,&DAT_10032608,&DAT_10032580,&DAT_100325e8,&DAT_10032450,&DAT_10032458);
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(5);
    if ((uVar1 & 0xff) != 0) {
      iVar5 = GetUnitsAmount0(&DAT_100325a8,0);
      if (iVar5 == 0) {
        if (DAT_100323fc < DAT_10032598 * 4) {
          if (DAT_100323f8 < 2) {
            FUN_10001930(&DAT_100324e8,&DAT_10032500,&DAT_100325a8);
            FUN_10001930(&DAT_100324f0,&DAT_10032500,&DAT_100325a0);
          }
          if (DAT_100323f8 == 2) {
            FUN_10001930(&DAT_100324e8,&DAT_10032570,&DAT_100325b0);
            FUN_10001930(&DAT_100324f0,&DAT_10032570,&DAT_100325a8);
          }
          if (DAT_100323f8 == 3) {
            FUN_10001930(&DAT_100324e8,&DAT_10032408,&DAT_100325a0);
            FUN_10001930(&DAT_100324f0,&DAT_10032408,&DAT_100325b0);
          }
          if (DAT_100323f8 == 4) {
            FUN_10001930(&DAT_100324e8,&DAT_100325d8,&DAT_100325a8);
            FUN_10001930(&DAT_100324f0,&DAT_100325d8,&DAT_100325a0);
          }
          if (DAT_100323f8 < 4) {
            DAT_100323f8 = DAT_100323f8 + 1;
          }
          else {
            DAT_100323f8 = 0;
          }
          RemoveGroup(&DAT_100324e8,&DAT_10032578);
          RemoveGroup(&DAT_100324f0,&DAT_10032578);
          DAT_100323fc = DAT_100323fc + 1;
          RunTimer(5,0x1e);
        }
        else {
          DAT_100323fc = 0;
          DAT_100323f8 = 0;
          if (DAT_10032598 < DAT_10032400 * 5 + 0x1e) {
            DAT_10032598 = DAT_10032598 + DAT_10032400;
          }
          RunTimer(5,(5 - DAT_10032400 / 2) * 1000);
        }
      }
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032578);
    if (0 < iVar5) {
      AttackEnemyInZone(&DAT_10032578,&DAT_10032480,0);
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetTotalAmount0(&DAT_10032518);
    if (iVar5 == 0) {
      ShowPage("#PAGE9");
      SetTrigg(0x21,0);
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      ClearSelection(3);
      SelectUnitsType(&DAT_100324b8,3,0);
      SelectUnitsType(&DAT_100324b0,3,1);
      SelectUnitsType(&DAT_100325f0,3,1);
      SelectUnitsType(&DAT_10032610,3,1);
      SelectUnitsType(&DAT_10032550,3,1);
      SelectUnitsType(&DAT_100324c0,3,1);
      SelDie(3);
      ClearSelection(3);
      RunTimer(10,0x55);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x14);
    if ((uVar1 & 0xff) != 0) {
      RunTimer(0x15,500);
      SetTrigg(0x14,0);
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    iVar5 = GetUnitsAmount0(&DAT_10032488,0);
    iVar3 = GetUnitsAmount0(&DAT_10032490,0);
    iVar4 = GetUnitsAmount0(&DAT_100324a0,0);
    if (0 < iVar5 + iVar3 + iVar4) {
      RunTimer(0x15,200);
      SetTrigg(0x14,0);
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x15);
    if ((uVar1 & 0xff) != 0) {
      if (DAT_10032400 != 0) {
        local_8 = 10000;
        AddResource(1,0,10000);
        AddResource(1,3,local_8);
        AddResource(1,2,local_8);
        AddResource(1,1,local_8);
        AddResource(1,4,local_8);
        AddResource(1,5,local_8);
      }
      ClearSelection(3);
      SelectUnits(&DAT_10032528,0);
      SelChangeNation(3,1);
      ClearSelection(3);
      uVar1 = TimerDone(0x14);
      if ((uVar1 & 0xff) == 0) {
        ShowPage("#PAGE8");
      }
      SetTrigg(0x15,0);
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
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(3);
    if ((uVar1 & 0xff) != 0) {
      ShowPage("#PAGE13");
      SetTrigg(0x5d,0);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = NationIsErased(0);
    if ((uVar1 & 0xff) != 0) {
      for (local_c = 1; (int)local_c < 0x1e; local_c = local_c + 1) {
        uVar1 = TimerDone(local_c & 0xff);
        if ((uVar1 & 0xff) == 0) {
          RunTimer(local_c & 0xff,1);
        }
      }
      ShowPage("#PAGE10");
      LooseGame();
      SetTrigg(0x5a,0);
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = Trigg(0x5d);
    if ((uVar1 & 0xff) == 0) {
      for (local_10 = 1; (int)local_10 < 0x1e; local_10 = local_10 + 1) {
        uVar1 = TimerDone(local_10 & 0xff);
        if ((uVar1 & 0xff) == 0) {
          FreeTimer(local_10 & 0xff);
        }
      }
      ShowPage("#PAGE20");
      ShowVictory();
    }
  }
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
uStack_8 = 0x10001199;
  return;
}





__declspec(dllexport) void ProcessScenary()
{
  int param_1 = 0;
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
  uStack_8 = 0x10001224;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

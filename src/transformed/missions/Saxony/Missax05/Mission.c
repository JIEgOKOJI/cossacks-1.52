#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_1000605c[] = "Z6";
char DAT_10006060[] = "Z5";
char DAT_10006064[] = "Z4";
char DAT_10006068[] = "Z3";
char DAT_1000606c[] = "Z2";
char DAT_10006070[] = "Z1";
long long DAT_10006880 = 0;
long long DAT_10006888 = 0;
long long DAT_10006890 = 0;
long long DAT_10006898 = 0;
int DAT_100068a0 = 0;
int DAT_100068a4 = 0;
long long DAT_100068a8 = 0;
long long DAT_100068b0 = 0;
long long DAT_100068b8 = 0;
long long DAT_100068c0 = 0;
long long DAT_100068c8 = 0;
long long DAT_100068d0 = 0;
long long DAT_100068d8 = 0;
long long DAT_100068e0 = 0;
long long DAT_100068e8 = 0;
long long DAT_100068f0 = 0;
long long DAT_100068f8 = 0;
long long DAT_10006900 = 0;
long long DAT_10006908 = 0;
long long DAT_10006918 = 0;
long long DAT_10006920 = 0;
long long DAT_10006928 = 0;
long long DAT_10006930 = 0;
long long DAT_10006938 = 0;
long long DAT_10006940 = 0;
long long DAT_10006948 = 0;
long long DAT_10006950 = 0;
long long DAT_10006958 = 0;
long long DAT_10006960 = 0;
long long DAT_10006968 = 0;
long long DAT_10006970 = 0;
long long DAT_10006978 = 0;
long long DAT_10006980 = 0;
long long DAT_10006988 = 0;
long long DAT_10006990 = 0;
long long DAT_10006998 = 0;
long long DAT_100069a0 = 0;
long long DAT_100069a8 = 0;
long long DAT_100069b0 = 0;
long long DAT_100069b8 = 0;
long long DAT_100069c0 = 0;
long long DAT_100069c8 = 0;
long long DAT_100069d0 = 0;
long long DAT_100069d8 = 0;
long long DAT_100069e0 = 0;
long long DAT_100069e8 = 0;
long long DAT_100069f0 = 0;
long long DAT_100069f8 = 0;
long long DAT_10006a00 = 0;
long long DAT_10006a08 = 0;
long long DAT_10006a10 = 0;
long long DAT_10006a18 = 0;
long long DAT_10006a20 = 0;

void OnInit(void)

{
                    
  RegisterUnits(&DAT_100068b8,"Garmiy");
  RegisterUnits(&DAT_100069e0,"Gvorotak1");
  RegisterUnits(&DAT_100069b0,"Gperes1");
  RegisterUnits(&DAT_10006890,"Gkazarma1");
  RegisterUnits(&DAT_10006888,"Gkazarma2");
  RegisterUnits(&DAT_100069a8,"Gbashny");
  RegisterUnits(&DAT_10006978,"Gpogr");
  RegisterUnits(&DAT_10006880,"Garmreposti");
  RegisterUnits(&DAT_10006988,"Gvorotasela1");
  RegisterUnits(&DAT_100069c0,"Gperes2");
  RegisterUnits(&DAT_100069b8,"Gperes3");
  RegisterUnits(&DAT_10006a08,"Garmiyforta1");
  RegisterUnits(&DAT_10006998,"Gvsevorota1");
  RegisterUnits(&DAT_10006958,"Garmiyohrsela1");
  RegisterUnits(&DAT_10006968,"Garmiyohrsela2");
  RegisterUnits(&DAT_100068c8,"Garmiyohrgoroda1");
  RegisterUnits(&DAT_100068d0,"Garmiyohrgoroda2");
  RegisterUnits(&DAT_10006898,"Garmiyreytarov");
  RegisterUnits(&DAT_10006980,"Garmiykirasirov");
  RegisterUnits(&DAT_10006950,"Garmiypikinerov");
  RegisterUnits(&DAT_10006a00,"Garmiyforta2");
  RegisterUnits(&DAT_10006918,"Garmiygren");
  RegisterUnits(&DAT_100068d8,"Garmiyperesad1");
  RegisterUnits(&DAT_100068e8,"Garmiyperesad2");
  RegisterUnits(&DAT_100068e0,"Garmiyperesad3");
  RegisterUnits(&DAT_100069a0,"Ggorod");
  RegisterUnits(&DAT_100069e8,"Gruss");
  RegisterZone(&DAT_100068f8,"Zperedfortom1");
  RegisterZone(&DAT_10006960,"Zkreposti");
  RegisterZone(&DAT_10006900,"Zperedfortom2");
  RegisterZone(&DAT_10006970,"Zperedfortom22");
  RegisterZone(&DAT_100069c8,"Zperes1");
  RegisterZone(&DAT_100069d0,"Zperes2");
  RegisterZone(&DAT_100069d8,"Zperes3");
  RegisterZone(&DAT_100068a8,"Zperes11");
  RegisterZone(&DAT_100068b0,"Zperes22");
  RegisterZone(&DAT_100068c0,"Zperes33");
  RegisterZone(&DAT_10006990,"Zsela");
  RegisterZone(&DAT_10006a10,"Zgran");
  RegisterZone(&DAT_10006a18,"Zpogran1");
  RegisterZone(&DAT_100069f8,"Zpogran");
  RegisterZone(&DAT_10006920,DAT_10006070);
  RegisterZone(&DAT_10006928,DAT_1000606c);
  RegisterZone(&DAT_10006930,DAT_10006068);
  RegisterZone(&DAT_10006938,DAT_10006064);
  RegisterZone(&DAT_10006940,DAT_10006060);
  RegisterZone(&DAT_10006948,DAT_1000605c);
  RegisterZone(&DAT_100069f0,"Zruss");
  RegisterDynGroup(&DAT_10006908);
  RegisterDynGroup(&DAT_100068f0);
  RegisterUnitType(&DAT_10006a20,"Pikiner_Shvec(SV)");
  SetPlayerName(1,"SVEDES");
  SetPlayerName(4,"ALLIES");
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  void *pcVar3;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,50000);
      SetResource(0,1,50000);
      SetResource(0,4,50000);
      SetResource(0,5,50000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK3");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK4");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK5");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK6");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK7");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD3");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD4");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD5");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD6");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD7");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK3");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK4");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK5");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK6");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK7");
      InitialUpgrade("Garmiy","Kiracir_Sacson(SA)ATTACK");
      InitialUpgrade("Garmiy","Kiracir_Sacson(SA)ATTACK3");
      InitialUpgrade("Garmiy","Kiracir_Sacson(SA)ATTACK4");
      InitialUpgrade("Garmiy","Kiracir_Sacson(SA)ATTACK5");
      InitialUpgrade("Garmiy","Kiracir_Sacson(SA)ATTACK6");
      InitialUpgrade("Garmiy","Kiracir_Sacson(SA)ATTACK7");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,40000);
      SetResource(0,1,40000);
      SetResource(0,4,40000);
      SetResource(0,5,40000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK3");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK4");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK5");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD3");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD4");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD5");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK3");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK4");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK5");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK6");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK7");
      InitialUpgrade("Garmiy","Kiracir_Sacson(SA)ATTACK");
      InitialUpgrade("Garmiy","Kiracir_Sacson(SA)ATTACK3");
      InitialUpgrade("Garmiy","Kiracir_Sacson(SA)ATTACK4");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,35000);
      SetResource(0,1,35000);
      SetResource(0,4,35000);
      SetResource(0,5,35000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)ATTACK3");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD");
      InitialUpgrade("Garmiy","Mushketer_sakson(SA)SHIELD3");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK");
      InitialUpgrade("Garmiy","Grenader_Sacson(SA)ATTACK3");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,25000);
      SetResource(0,1,25000);
      SetResource(0,4,25000);
      SetResource(0,5,25000);
      SetResource(0,0,0);
      SetResource(0,2,0);
    }
    SetResource(0,3,500000);
    SetResource(0,1,500000);
    SetResource(0,4,500000);
    SetResource(0,5,500000);
    SetResource(0,0,500000);
    SetResource(0,2,500000);
    SetResource(1,3,500000);
    SetResource(1,1,500000);
    SetResource(1,4,500000);
    SetResource(1,2,500000);
    SetResource(1,0,500000);
    SetResource(1,5,500000);
    SetResource(4,3,500000);
    SetResource(4,1,500000);
    SetResource(4,4,500000);
    SetResource(4,2,500000);
    SetResource(4,0,500000);
    SetResource(4,5,500000);
    ShowPage("#PAGE1");
    RunTimer(1,0xdac);
    SelectUnits(&DAT_100069b0,0);
    SelSendTo(1,&DAT_100068a8,0x80,0);
    SelectUnits(&DAT_100069c0,0);
    SelSendTo(1,&DAT_100068b0,0,0);
    SelectUnits(&DAT_100069b8,0);
    SelSendTo(1,&DAT_100068c0,0,0);
    DAT_100068a0 = 0;
    DAT_100068a4 = 0;
  }
  cVar1 = Trigg(2);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100068f8,0), 2 < iVar2)) {
    SetTrigg(2,0);
    ShowPage("#PAGE4");
    AttackZoneByArtillery(&DAT_10006a08,&DAT_100068f8,0);
  }
  cVar1 = Trigg(3);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006a08,1), iVar2 == 0)) {
    SetTrigg(3,0);
    SelectUnits(&DAT_10006998,0);
    SelChangeNation(1,0);
    SelectUnits(&DAT_10006968,0);
    SelSendAndKill(1,&DAT_100068f8,0x96,0);
    SelectUnits(&DAT_10006958,0);
    SelSendAndKill(1,&DAT_100068f8,0x96,0);
  }
  cVar1 = Trigg(4);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006990,&DAT_100068b8), 0x1e < iVar2)) {
    SetTrigg(4,0);
    SelectUnits(&DAT_100068c8,0);
    SelSendAndKill(1,&DAT_100068f8,0x96,0);
    RunTimer(3,2000);
  }
  cVar1 = Trigg(5);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(3), cVar1 != '\0')) {
    SetTrigg(5,0);
    SelectUnits(&DAT_100068d0,0);
    SelSendAndKill(1,&DAT_10006990,0x96,0);
    RunTimer(4,0x5dc);
  }
  cVar1 = Trigg(6);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(4), cVar1 != '\0')) {
    SetTrigg(6,0);
    SelectUnits(&DAT_10006898,0);
    SelSendAndKill(1,&DAT_10006990,0x96,0);
  }
  cVar1 = Trigg(7);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_10006898,1), iVar2 < 5)) {
    SetTrigg(7,0);
    SelectUnits(&DAT_10006918,0);
    SelSendAndKill(1,&DAT_10006990,0x96,0);
    SelSendAndKill(1,&DAT_100068f8,0x96,2);
  }
  cVar1 = Trigg(0xf);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(1), cVar1 != '\0')) {
    SetTrigg(0xf,0);
    SelectUnits(&DAT_100069e8,0);
    SelChangeNation(4,0);
    SetStartPoint(&DAT_100069f0);
    ShowPage("#PAGE3");
  }
  cVar1 = Trigg(0x10);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006900,&DAT_100069e8), 10 < iVar2)) {
    SetTrigg(0x10,0);
    ClearSelection(1);
    SelectUnits(&DAT_10006950,0);
    SelSendAndKill(1,&DAT_10006900,0xc4,0);
    RunTimer(5,3000);
  }
  cVar1 = Trigg(0x11);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(5), cVar1 != '\0')) {
    SetTrigg(0x11,0);
    ClearSelection(1);
    SelectUnits(&DAT_10006980,0);
    SelSendAndKill(1,&DAT_10006900,0xc4,0);
    SelSendAndKill(1,&DAT_10006970,0xc4,2);
  }
  cVar1 = Trigg(0x12);
  if ((cVar1 != '\0') && (cVar1 = Trigg(7), cVar1 == '\0')) {
    SetTrigg(0x12,0);
    SelectUnits(&DAT_100068d8,0);
    SelectUnits(&DAT_100069b0,1);
    SendUnitsToTransport(1);
    SelectUnits(&DAT_100068e8,0);
    SelectUnits(&DAT_100069c0,1);
    SendUnitsToTransport(1);
    SelectUnits(&DAT_100068e0,0);
    SelectUnits(&DAT_100069b8,1);
    SendUnitsToTransport(1);
    RunTimer(10,1000);
    RunTimer(0xb,3000);
  }
  cVar1 = Trigg(0x13);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(10), cVar1 != '\0')) {
    SetTrigg(0x12,0);
    SetTrigg(0x13,0);
    SelectUnits(&DAT_100069c0,0);
    SelSendTo(1,&DAT_100069d0,0,0);
    SelectUnits(&DAT_100069b0,0);
    SelSendTo(1,&DAT_100069c8,0x80,0);
    SelectUnits(&DAT_100069b8,0);
    SelSendTo(1,&DAT_100069d8,0,0);
  }
  cVar1 = Trigg(0x14);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_100069b0,0);
    cVar1 = Trigg(0x15);
    if (((cVar1 != '\0') && (cVar1 = CheckLeaveAbility(1), cVar1 != '\0')) &&
       (cVar1 = TimerDone(0xb), cVar1 != '\0')) {
      SetTrigg(0x15,0);
      SetTrigg(0x14,0);
      SelectUnits(&DAT_100069b0,0);
      PushAllUnitsAway(1);
      RunTimer(0xc,1000);
      RunTimer(0xd,0x5dc);
    }
  }
  cVar1 = Trigg(0x16);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_100069c0,0);
    cVar1 = Trigg(0x17);
    if (((cVar1 != '\0') && (cVar1 = CheckLeaveAbility(1), cVar1 != '\0')) &&
       (cVar1 = TimerDone(0xb), cVar1 != '\0')) {
      SetTrigg(0x16,0);
      SetTrigg(0x17,0);
      SelectUnits(&DAT_100069c0,0);
      PushAllUnitsAway(1);
    }
  }
  cVar1 = Trigg(0x18);
  if (cVar1 != '\0') {
    SelectUnits(&DAT_100069b8,0);
    cVar1 = Trigg(0x19);
    if (((cVar1 != '\0') && (cVar1 = CheckLeaveAbility(1), cVar1 != '\0')) &&
       (cVar1 = TimerDone(0xb), cVar1 != '\0')) {
      SetTrigg(0x18,0);
      SetTrigg(0x19,0);
      SelectUnits(&DAT_100069b8,0);
      PushAllUnitsAway(1);
      SetLightSpot(&DAT_100069d0,3,1);
      SetStartPoint(&DAT_100069d0);
      ShowPage("#PAGE5");
    }
  }
  cVar1 = Trigg(0x1a);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xc), cVar1 != '\0')) {
    SetTrigg(0x1a,0);
    SelectUnits(&DAT_100068d8,0);
    SelSendAndKill(1,&DAT_10006990,0x9b,0);
    SelectUnits(&DAT_100068e8,0);
    SelSendAndKill(1,&DAT_10006990,0xd7,0);
  }
  cVar1 = Trigg(0x1b);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xd), cVar1 != '\0')) {
    SetTrigg(0x1a,0);
    SelectUnits(&DAT_100068e0,0);
    SelSendAndKill(1,&DAT_10006990,0x9b,0);
  }
  cVar1 = Trigg(0x1e);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount0(&DAT_100069f8,0), 3 < iVar2)) {
    SetTrigg(0x1e,0);
    SelectUnits(&DAT_10006978,0);
    SelSendTo(1,&DAT_10006a18,0x96,0);
    RunTimer(0xe,100);
  }
  cVar1 = Trigg(0x1f);
  if ((cVar1 != '\0') && (cVar1 = TimerDone(0xe), cVar1 != '\0')) {
    SetTrigg(0x1f,0);
    ShowPage("#PAGE2");
    SetStartPoint(&DAT_10006a18);
    SelectUnits(&DAT_10006978,0);
    SelSendTo(1,&DAT_10006990,0x96,0);
  }
  cVar1 = Trigg(0x26);
  if ((((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_100069a8,1), iVar2 == 0)) &&
      (DAT_100068a0 < 100)) && (cVar1 = CheckProduction(&DAT_10006890), cVar1 != '\0')) {
    ProduceUnit(&DAT_10006890,&DAT_10006a20,&DAT_10006908);
    DAT_100068a0 = DAT_100068a0 + 1;
  }
  cVar1 = Trigg(0x21);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006920,&DAT_10006908), 0 < iVar2)) {
    SelectUnits(&DAT_10006908,0);
    SelSendTo(1,&DAT_10006928,0x80,0);
    SelSendTo(1,&DAT_10006930,0xc4,2);
    SelSendTo(1,&DAT_10006938,0xc4,2);
    SelSendAndKill(1,&DAT_10006948,0xc4,2);
    RemoveGroup(&DAT_10006908,&DAT_100068f0);
    SetLightSpot(&DAT_10006930,3,2);
  }
  if (((DAT_100068a4 < 100) && (cVar1 = CheckProduction(&DAT_10006888), cVar1 != '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_100069a8,1), iVar2 == 0)) {
    ProduceUnit(&DAT_10006888,&DAT_10006a20,&DAT_10006908);
    DAT_100068a4 = DAT_100068a4 + 1;
  }
  cVar1 = Trigg(0x23);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsAmount1(&DAT_10006940,&DAT_10006908), 0 < iVar2)) {
    SelectUnits(&DAT_10006908,0);
    SelSendTo(1,&DAT_10006928,0x80,0);
    SelSendTo(1,&DAT_10006930,0xc4,2);
    SelSendTo(1,&DAT_10006938,0xc4,2);
    SelSendAndKill(1,&DAT_10006948,0xc4,2);
    RemoveGroup(&DAT_10006908,&DAT_100068f0);
  }
  cVar1 = Trigg(0x24);
  if (((cVar1 != '\0') &&
      (iVar2 = GetUnitsByNation(&DAT_100068f0,1), pcVar3 = (void*)&GetUnitsAmount1, 0 < iVar2)) &&
     (iVar2 = GetUnitsAmount1(&DAT_10006938,&DAT_100068f0), 0 < iVar2)) {
    SetTrigg(0x24,0);
    SelectUnits(&DAT_100069e0,0);
    SelOpenGates(1);
  }
  cVar1 = Trigg(0x27);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x24), cVar1 == '\0')) &&
     ((iVar2 = GetUnitsAmount1(&DAT_10006938,&DAT_100068f0), iVar2 == 0 &&
      (iVar2 = GetUnitsAmount1(&DAT_10006938,&DAT_100068b8), 0 < iVar2)))) {
    SetTrigg(0x27,0);
    SelectUnits(&DAT_100069e0,0);
    SelCloseGates(1);
    SetTrigg(0x24,1);
  }
  cVar1 = Trigg(0x29);
  if (((cVar1 != '\0') && (cVar1 = Trigg(0x11), cVar1 == '\0')) &&
     (iVar2 = GetUnitsByNation(&DAT_100069e8,0), iVar2 == 0)) {
    SetTrigg(0x29,0);
    ShowPage("#PAGE7");
    iVar2 = GetUnitsByNation(&DAT_10006980,1);
    if (0 < iVar2) {
      ClearSelection(1);
      SelectUnits(&DAT_10006980,0);
      SelSendAndKill(1,&DAT_10006948,0xc4,0);
    }
  }
  cVar1 = Trigg(0x32);
  if ((cVar1 != '\0') &&
     (((iVar2 = GetUnitsAmount1(&DAT_10006960,&DAT_100068b8), 3 < iVar2 ||
       (iVar2 = GetUnitsAmount1(&DAT_10006960,&DAT_100069e8), 3 < iVar2)) &&
      (iVar2 = GetUnitsByNation(&DAT_10006880,1), iVar2 == 0)))) {
    SetTrigg(0x32,0);
    SelectUnits(&DAT_100069a0,1);
    SelChangeNation(1,0);
    ShowPage("#PAGE9");
    ShowVictory();
  }
  cVar1 = Trigg(0x20);
  if ((cVar1 != '\0') && (iVar2 = GetUnitsByNation(&DAT_100068b8,0), iVar2 == 0)) {
    SetTrigg(0x20,0);
    ShowPage("#PAGE10");
    LooseGame();
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

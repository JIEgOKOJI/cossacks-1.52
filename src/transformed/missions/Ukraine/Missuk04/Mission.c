#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/* Global variables */
long long DAT_100333e0 = 0;
long long DAT_100333e8 = 0;
long long DAT_100333f0 = 0;
long long DAT_100333f8 = 0;
long long DAT_10033400 = 0;
long long DAT_10033408 = 0;
long long DAT_10033410 = 0;
long long DAT_10033418 = 0;
long long DAT_10033420 = 0;
long long DAT_10033428 = 0;
long long DAT_10033430 = 0;
long long DAT_10033438 = 0;
long long DAT_10033440 = 0;
long long DAT_10033448 = 0;
long long DAT_10033450 = 0;
long long DAT_10033458 = 0;
long long DAT_10033460 = 0;
long long DAT_10033468 = 0;
long long DAT_10033470 = 0;
long long DAT_10033478 = 0;
long long DAT_10033480 = 0;
long long DAT_10033488 = 0;
long long DAT_10033490 = 0;
long long DAT_10033498 = 0;
long long DAT_100334a0 = 0;
unsigned char DAT_100334a8[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_100334b0 (*(long long *)((char *)DAT_100334a8 + 0x8))
#define DAT_100334b8 (*(long long *)((char *)DAT_100334b0 + 0x8))
#define DAT_100334c0 (*(long long *)((char *)DAT_100334b8 + 0x8))
#define DAT_100334c8 (*(long long *)((char *)DAT_100334c0 + 0x8))
#define DAT_100334d0 (*(long long *)((char *)DAT_100334c8 + 0x8))
#define DAT_100334d8 (*(long long *)((char *)DAT_100334d0 + 0x8))
#define DAT_100334e0 (*(long long *)((char *)DAT_100334d8 + 0x8))
#define DAT_100334e8 (*(long long *)((char *)DAT_100334e0 + 0x8))
#define DAT_100334f0 (*(long long *)((char *)DAT_100334e8 + 0x8))
#define DAT_100334f8 (*(long long *)((char *)DAT_100334f0 + 0x8))
#define DAT_10033500 (*(long long *)((char *)DAT_100334f8 + 0x8))
#define DAT_10033508 (*(long long *)((char *)DAT_10033500 + 0x8))
#define DAT_10033510 (*(long long *)((char *)DAT_10033508 + 0x8))
#define DAT_10033518 (*(long long *)((char *)DAT_10033510 + 0x8))
#define DAT_10033520 (*(long long *)((char *)DAT_10033518 + 0x8))
#define DAT_10033528 (*(long long *)((char *)DAT_10033520 + 0x8))
#define DAT_10033530 (*(long long *)((char *)DAT_10033528 + 0x8))
long long DAT_10033538 = 0;
long long DAT_10033540 = 0;
long long DAT_10033548 = 0;
long long DAT_10033550 = 0;
long long DAT_10033558 = 0;
long long DAT_10033560 = 0;
long long DAT_10033568 = 0;
long long DAT_10033570 = 0;
long long DAT_10033578 = 0;
long long DAT_10033580 = 0;
long long DAT_10033588 = 0;
long long DAT_10033590 = 0;
long long DAT_10033598 = 0;
long long DAT_100335a0 = 0;
long long DAT_100335a8 = 0;
long long DAT_100335b0 = 0;
long long DAT_100335b8 = 0;
long long DAT_100335c0 = 0;
long long DAT_100335c8 = 0;
long long DAT_100335d0 = 0;
long long DAT_100335d8 = 0;
long long DAT_100335e0 = 0;
long long DAT_100335e8 = 0;
long long DAT_100335f0 = 0;
long long DAT_100335f8 = 0;
long long DAT_10033600 = 0;
long long DAT_10033608 = 0;
long long DAT_10033610 = 0;
long long DAT_10033618 = 0;
long long DAT_10033620 = 0;
long long DAT_10033628 = 0;
long long DAT_10033630 = 0;
long long DAT_10033638 = 0;
long long DAT_10033640 = 0;
long long DAT_10033648 = 0;
long long DAT_10033650 = 0;
long long DAT_10033658 = 0;
long long DAT_10033660 = 0;
long long DAT_10033668 = 0;
long long DAT_10033670 = 0;
long long DAT_10033678 = 0;
long long DAT_10033680 = 0;
long long DAT_10033688 = 0;
long long DAT_10033690 = 0;
long long DAT_10033698 = 0;
long long DAT_100336a0 = 0;
long long DAT_100336a8 = 0;
long long DAT_100336b0 = 0;
long long DAT_100336b8 = 0;
long long DAT_100336c0 = 0;
long long DAT_100336c8 = 0;
long long DAT_100336d0 = 0;
long long DAT_100336d8 = 0;
long long DAT_100336e0 = 0;
long long DAT_100336e8 = 0;
long long DAT_100336f0 = 0;
unsigned char DAT_100336f8[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define DAT_10033700 (*(long long *)((char *)DAT_100336f8 + 0x8))
#define DAT_10033708 (*(long long *)((char *)DAT_10033700 + 0x8))
#define DAT_10033710 (*(long long *)((char *)DAT_10033708 + 0x8))
#define DAT_10033718 (*(long long *)((char *)DAT_10033710 + 0x8))
#define DAT_10033720 (*(long long *)((char *)DAT_10033718 + 0x8))
#define DAT_10033728 (*(long long *)((char *)DAT_10033720 + 0x8))
#define DAT_10033730 (*(long long *)((char *)DAT_10033728 + 0x8))
#define DAT_10033738 (*(long long *)((char *)DAT_10033730 + 0x8))
#define DAT_10033740 (*(long long *)((char *)DAT_10033738 + 0x8))
#define DAT_10033748 (*(long long *)((char *)DAT_10033740 + 0x8))
long long DAT_10033750 = 0;
long long DAT_10033758 = 0;
long long DAT_10033760 = 0;
long long DAT_10033768 = 0;
long long DAT_10033770 = 0;
long long DAT_10033778 = 0;
long long DAT_10033780 = 0;
long long DAT_10033788 = 0;
long long DAT_10033790 = 0;
long long DAT_10033798 = 0;
long long DAT_100337a0 = 0;
long long DAT_100337a8 = 0;
long long DAT_100337b0 = 0;
long long DAT_100337b8 = 0;
long long DAT_100337c0 = 0;
long long DAT_100337c8 = 0;
long long DAT_100337d0 = 0;
long long DAT_100337d8 = 0;
long long DAT_100337e0 = 0;
long long DAT_100337e8 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnitType(&DAT_10033630,"akademia_UA(UA)");
  RegisterUnitType(&DAT_10033638,"Dip_korpus_UA(UA)");
  RegisterUnitType(&DAT_100333e8,"Rinok(UA)");
  RegisterUnitType(&DAT_100333e0,"Poru(UA)");
  RegisterUnitType(&DAT_10033788,"Kozacki_Strelec(UA)");
  RegisterUnitType(&DAT_10033798,"Kozak_loshad(UA)");
  RegisterUnitType(&DAT_10033770,"Kozak_pikiner(UA)");
  RegisterUnitType(&DAT_10033780,"Getman(UA)");
  RegisterUnitType(&DAT_100337d0,"Pushka(UA)");
  RegisterUnitType(&DAT_100337e8,"Mortira(UA)");
  RegisterUnitType(&DAT_100337b0,"Mortira_b(UA)");
  RegisterUnitType(&DAT_10033790,"Pikiner_polan(PL)");
  RegisterUnitType(&DAT_10033768,"Mushketer_polsha(PL)");
  RegisterUnitType(&DAT_10033778,"Grenader(PL)");
  RegisterUnitType(&DAT_100337c8,"Poland_pikiner(PL)");
  RegisterUnitType(&DAT_100337e0,"Dragun(PL)");
  RegisterUnitType(&DAT_100337a8,"Reitor_Polsha(PL)");
  RegisterUnitType(&DAT_10033758,"Kres_ukranian(UA)");
  RegisterUnitType(&DAT_100337c0,"GRUZ_Z(UN)");
  RegisterUnitType(&DAT_10033760,"CenterUR(UA)");
  RegisterUnitType(&DAT_10033748,"WALL_UKR(UA)");
  RegisterUnitType(&DAT_100337d8,"Rundashir_Avstria_DIP(PL)");
  RegisterUnitType(&DAT_100337a0,"Grenader_DIP(PL)");
  RegisterUnitType(&DAT_100337b8,"Kozak_loshad_DIP(PL)");
  RegisterUnitType(&DAT_10033750,"Dragun_18_DIP(PL)");
  RegisterUnits(&DAT_10033530,"Group1");
  RegisterUnits(&DAT_10033540,"Group2");
  RegisterUnits(&DAT_10033538,"Group3");
  RegisterUnits(&DAT_10033550,"Group4");
  RegisterUnits(&DAT_10033548,"Group5");
  RegisterUnits(&DAT_10033560,"Group6");
  RegisterUnits(&DAT_10033558,"Group7");
  RegisterUnits(&DAT_10033570,"Group8");
  RegisterUnits(&DAT_10033568,"Group9");
  RegisterUnits(&DAT_10033678,"Group10");
  RegisterUnits(&DAT_100336d8,"Group11");
  RegisterUnits(&DAT_100336e0,"Group12");
  RegisterUnits(&DAT_100336c0,"Group13");
  RegisterUnits(&DAT_100336d0,"Group14");
  RegisterUnits(&DAT_100336a8,"Group15");
  RegisterUnits(&DAT_100336b8,"Group16");
  RegisterUnits(&DAT_10033688,"Group17");
  RegisterUnits(&DAT_10033698,"Group18");
  RegisterUnits(&DAT_100336f0,"Group19");
  RegisterUnits(&DAT_100336c8,"Group20");
  RegisterUnits(&DAT_100336a0,"Group21");
  RegisterUnits(&DAT_100336b0,"Group22");
  RegisterUnits(&DAT_10033680,"Group23");
  RegisterUnits(&DAT_10033690,"Group24");
  RegisterUnits(&DAT_100336e8,"Group25");
  RegisterVar(&DAT_100336f8,0xc);
  RegisterVar(&DAT_10033730,0xc);
  RegisterVar(&DAT_10033738,0xc);
  RegisterVar(&DAT_10033720,0xc);
  RegisterVar(&DAT_10033728,0xc);
  RegisterVar(&DAT_10033710,0xc);
  RegisterVar(&DAT_10033718,0xc);
  RegisterVar(&DAT_10033700,0xc);
  RegisterVar(&DAT_10033708,0xc);
  RegisterVar(&DAT_10033740,0xc);
  RegisterVar(&DAT_100334f0,0xc);
  RegisterVar(&DAT_100334e8,0xc);
  RegisterVar(&DAT_100334e0,0xc);
  RegisterVar(&DAT_100334d8,0xc);
  RegisterVar(&DAT_10033528,0xc);
  RegisterVar(&DAT_10033520,0xc);
  RegisterVar(&DAT_10033510,0xc);
  RegisterVar(&DAT_10033500,0xc);
  RegisterVar(&DAT_100334d0,0xc);
  RegisterVar(&DAT_100334c0,0xc);
  RegisterVar(&DAT_10033518,0xc);
  RegisterVar(&DAT_10033508,0xc);
  RegisterVar(&DAT_100334f8,0xc);
  RegisterVar(&DAT_100334c8,0xc);
  RegisterVar(&DAT_100334b8,0xc);
  RegisterVar(&DAT_100334b0,0xc);
  RegisterVar(&DAT_100334a8,0xc);
  RegisterZone(&DAT_100335e8,"Zone1");
  RegisterZone(&DAT_100335f0,"Zone2");
  RegisterZone(&DAT_100335f8,"Zone3");
  RegisterZone(&DAT_10033600,"Zone4");
  RegisterZone(&DAT_10033608,"Zone5");
  RegisterZone(&DAT_10033610,"Zone6");
  RegisterZone(&DAT_10033618,"Zone7");
  RegisterZone(&DAT_10033620,"Zone8");
  RegisterZone(&DAT_10033628,"Zone9");
  RegisterZone(&DAT_10033580,"Zone10");
  RegisterZone(&DAT_10033578,"Zone11");
  RegisterZone(&DAT_10033590,"Zone12");
  RegisterZone(&DAT_10033588,"Zone13");
  RegisterZone(&DAT_100335a0,"Zone14");
  RegisterZone(&DAT_10033598,"Zone15");
  RegisterZone(&DAT_100335b0,"Zone16");
  RegisterZone(&DAT_100335a8,"Zone17");
  RegisterZone(&DAT_100335c8,"Zone18");
  RegisterFormation(&DAT_100335b8,"#LINE3");
  RegisterFormation(&DAT_100335c0,"#LINE15");
  RegisterFormation(&DAT_100335d0,"#LINE36");
  RegisterFormation(&DAT_100335d8,"#LINE72");
  RegisterFormation(&DAT_100335e0,"#LINE3PUS");
  RegisterUpgrade(&DAT_10033448,"Pikiner_polan(PL)ATTACK");
  RegisterUpgrade(&DAT_10033460,"Pikiner_polan(PL)ATTACK3");
  RegisterUpgrade(&DAT_10033640,"Pikiner_polan(PL)ATTACK4");
  RegisterUpgrade(&DAT_10033648,"Pikiner_polan(PL)ATTACK5");
  RegisterUpgrade(&DAT_10033650,"Pikiner_polan(PL)ATTACK6");
  RegisterUpgrade(&DAT_10033478,"Pikiner_polan(PL)SHIELD");
  RegisterUpgrade(&DAT_10033488,"Pikiner_polan(PL)SHIELD3");
  RegisterUpgrade(&DAT_10033658,"Pikiner_polan(PL)SHIELD4");
  RegisterUpgrade(&DAT_10033660,"Pikiner_polan(PL)SHIELD5");
  RegisterUpgrade(&DAT_10033668,"Pikiner_polan(PL)SHIELD6");
  RegisterUpgrade(&DAT_10033490,"Mushketer_polsha(PL)ATTACK");
  RegisterUpgrade(&DAT_10033498,"Mushketer_polsha(PL)ATTACK3");
  RegisterUpgrade(&DAT_10033670,"Mushketer_polsha(PL)ATTACK4");
  RegisterUpgrade(&DAT_100334a0,"Mushketer_polsha(PL)SHIELD");
  RegisterUpgrade(&DAT_10033458,"Mushketer_polsha(PL)SHIELD3");
  RegisterUpgrade(&DAT_10033470,"Mushketer_polsha(PL)SHIELD4");
  RegisterUpgrade(&DAT_10033480,"Mushketer_polsha(PL)SHIELD5");
  RegisterUpgrade(&DAT_100333f0,"Mushketer_polsha(PL)SHIELD6");
  RegisterUpgrade(&DAT_100333f8,"Mushketer_polsha(PL)SHIELD7");
  RegisterUpgrade(&DAT_10033400,"Poland_pikiner(PL)ATTACK4");
  RegisterUpgrade(&DAT_10033408,"Poland_pikiner(PL)ATTACK5");
  RegisterUpgrade(&DAT_10033410,"Poland_pikiner(PL)ATTACK6");
  RegisterUpgrade(&DAT_10033420,"Poland_pikiner(PL)ATTACK7");
  RegisterUpgrade(&DAT_10033430,"Poland_pikiner(PL)SHIELD4");
  RegisterUpgrade(&DAT_10033440,"Poland_pikiner(PL)SHIELD5");
  RegisterUpgrade(&DAT_10033450,"Poland_pikiner(PL)SHIELD6");
  RegisterUpgrade(&DAT_10033468,"Poland_pikiner(PL)SHIELD7");
  RegisterUpgrade(&DAT_10033418,"Getman(UA)ATTACK7");
  RegisterUpgrade(&DAT_10033428,"Getman(UA)SHIELD7");
  RegisterUpgrade(&DAT_10033438,"AKA25UA");
  SetPlayerName(1,"POLAND");
  SetPlayerName(7,"UKRAINE");
  uStack_8 = 0x10001ede;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(100,0);
    SetResource(0,3,5000);
    SetResource(0,1,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,5,5000);
    SetResource(0,4,5000);
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,0,0);
    SetResource(1,2,5000000);
    SetResource(1,5,5000000);
    SetResource(1,4,5000000);
    SelectUnits(&DAT_10033540,0);
    SelectUnits(&DAT_10033538,1);
    SelectUnits(&DAT_10033550,1);
    SelectUnits(&DAT_10033548,1);
    SelectUnits(&DAT_10033568,1);
    SelectUnits(&DAT_10033558,1);
    SelectUnits(&DAT_10033560,1);
    SelectUnits(&DAT_10033570,1);
    SelectUnits(&DAT_100336e0,1);
    SelectUnits(&DAT_100336a0,1);
    SelectUnits(&DAT_100336a8,1);
    SelectUnits(&DAT_100336b8,1);
    SelectUnits(&DAT_100336b0,1);
    DoNotUseSelInAI(1);
    EnableUnit(0,&DAT_10033638,0);
    EnableUnit(0,&DAT_100333e0,0);
    EnableUnit(0,&DAT_10033780,0);
    EnableUnit(0,&DAT_100337b0,0);
    EnableUnit(0,&DAT_10033748,0);
    EnableUnit(1,&DAT_100337d8,0);
    EnableUnit(1,&DAT_100337a0,0);
    EnableUnit(1,&DAT_100337b8,0);
    EnableUnit(1,&DAT_10033750,0);
    EnableUnit(1,&DAT_100337c8,0);
    EnableUnit(1,&DAT_10033778,0);
    EnableUnit(1,&DAT_100337a8,0);
    SelectUnits1(1,&DAT_100336f0,0);
    SelectUnits1(1,&DAT_10033570,1);
    SelectUnits1(1,&DAT_100336d0,1);
    SelOpenGates(1);
    DisableUpgrade(1,&DAT_10033640);
    DisableUpgrade(1,&DAT_10033648);
    DisableUpgrade(1,&DAT_10033650);
    DisableUpgrade(1,&DAT_10033658);
    DisableUpgrade(1,&DAT_10033660);
    DisableUpgrade(1,&DAT_10033668);
    DisableUpgrade(1,&DAT_10033670);
    DisableUpgrade(1,&DAT_100333f0);
    DisableUpgrade(1,&DAT_100333f8);
    DisableUpgrade(1,&DAT_10033400);
    DisableUpgrade(1,&DAT_10033408);
    DisableUpgrade(1,&DAT_10033410);
    DisableUpgrade(1,&DAT_10033420);
    DisableUpgrade(1,&DAT_10033430);
    DisableUpgrade(1,&DAT_10033440);
    DisableUpgrade(1,&DAT_10033450);
    DisableUpgrade(1,&DAT_10033468);
    DisableUpgrade(0,&DAT_10033418);
    DisableUpgrade(0,&DAT_10033428);
    DisableUpgrade(0,&DAT_10033438);
    ChangeFriends(0,0x81);
    ChangeFriends(7,0x81);
    RunTimer(0xd,1000);
    ShowPage("#PAGE14");
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x61,0);
      SelectUnits(&DAT_10033678,0);
      SelectUnits(&DAT_100336d8,1);
      SelDie(1);
    }
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(99,0);
    StartAI(1,"POLAND.0",1,0,0,1);
    SetAIProperty(1,0x1002,0);
    RunTimer(2,0x4b0);
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x62,0);
    RunTimer(1,15000);
    RunTimer(5,25000);
    SetTrigg(0x5a,0);
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x62);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100335f8,0);
      if (iVar4 == 0) {
        SetTrigg(0x5a,0);
        CreateObject0(&DAT_10033728,&DAT_100335b8,&DAT_100337c0,1,&DAT_10033600,0);
        CreateObject0(&DAT_10033710,&DAT_100335c0,&DAT_10033790,1,&DAT_10033600,0);
        SelectUnits1(1,&DAT_10033728,0);
        SelectUnits1(1,&DAT_10033710,1);
        DoNotUseSelInAI(1);
        RunTimer(3,100);
        SetTrigg(0x59,0);
      }
    }
  }
  uVar1 = Trigg(0x59);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(3);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x59,0);
        SelectUnits1(1,&DAT_10033728,0);
        SelectUnits1(1,&DAT_10033710,1);
        SelSendTo(1,&DAT_10033580,0x3c,0);
        SelSendTo(1,&DAT_10033578,0x3c,2);
        SelSendTo(1,&DAT_10033590,0x3c,2);
        SelSendTo(1,&DAT_100335e8,0x3c,2);
        SetTrigg(0x58,0);
        SetTrigg(0x55,0);
        SetTrigg(0x57,0);
      }
    }
  }
  uVar1 = Trigg(0x58);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x59);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount1(&DAT_100335e8,&DAT_10033728);
      if (0 < iVar4) {
        SetTrigg(0x58,0);
        RunTimer(4,0x4b0);
        SetTrigg(0x57,0);
      }
    }
  }
  uVar1 = Trigg(0x55);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x59);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x57);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetTotalAmount0(&DAT_10033728);
        if (iVar4 != 0) {
          iVar4 = GetTotalAmount0(&DAT_10033710);
          if (iVar4 != 0) goto LAB_10002f7f;
        }
        SetTrigg(0x55,0);
        ShowPage("#PAGE1");
        AddResource(0,1,0x5dc);
        AddResource(0,5,0x5dc);
        AddResource(0,4,0x5dc);
        RunTimer(6,100);
        SetTrigg(0x57,0);
      }
    }
  }
LAB_10002f7f:
  uVar1 = Trigg(0x57);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x58);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x55);
      if ((uVar1 & 0xff) != 0) goto LAB_100030a9;
    }
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(6);
      if ((uVar1 & 0xff) == 0) goto LAB_100030a9;
    }
    SetTrigg(0x57,0);
    SelectUnits(&DAT_10033728,0);
    SelectUnits(&DAT_10033710,1);
    AddResource(1,1,2000);
    SelErase(1);
    SetTrigg(0x31,0);
  }
LAB_100030a9:
  uVar1 = Trigg(0x30);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100335f8,0);
    if (0 < iVar4) {
      SetTrigg(0x30,0);
      RunTimer(6,100);
      SetTrigg(0x31,0);
    }
  }
  uVar1 = Trigg(0x31);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x57);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x30);
      if ((uVar1 & 0xff) != 0) goto LAB_100032bd;
    }
    iVar4 = GetTotalAmount1(&DAT_10033798,0);
    if (iVar4 < 0x15) {
      iVar4 = GetTotalAmount1(&DAT_10033770,0);
      if (iVar4 < 0x15) {
        SetTrigg(0x31,0);
        SetTrigg(0x60,0);
        SetTrigg(0x37,0);
        SetTrigg(0x52,0);
        SetTrigg(0x36,0);
        SetTrigg(0x53,0);
        goto LAB_100032bd;
      }
    }
    SetTrigg(0x31,0);
    SetTrigg(0x50,0);
    SetTrigg(0x4b,0);
    SetTrigg(0x3a,0);
    SetTrigg(0x4a,0);
    SetTrigg(0x3f,0);
  }
LAB_100032bd:
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(1);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x34);
        if ((uVar1 & 0xff) != 0) {
          iVar4 = GetUnitsAmount0(&DAT_100335e8,0);
          if (iVar4 == 0) {
            SetTrigg(0x60,0);
            CreateObject0(&DAT_100336f8,&DAT_100335c0,&DAT_10033790,1,&DAT_100335e8,0);
            CreateObject0(&DAT_10033730,&DAT_100335c0,&DAT_10033768,1,&DAT_100335e8,0);
            CreateObject0(&DAT_10033510,&DAT_100335c0,&DAT_100337a0,1,&DAT_100335e8,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x37);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(1);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount0(&DAT_100335f0,0);
        if (iVar4 == 0) {
          uVar1 = Trigg(0x34);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0x37,0);
            CreateObject0(&DAT_10033738,&DAT_100335c0,&DAT_10033790,1,&DAT_100335f0,0);
            CreateObject0(&DAT_10033720,&DAT_100335c0,&DAT_10033768,1,&DAT_100335f0,0);
            CreateObject0(&DAT_10033500,&DAT_100335c0,&DAT_100337a0,1,&DAT_100335f0,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x52);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(5);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x34);
        if ((uVar1 & 0xff) != 0) {
          iVar4 = GetUnitsAmount0(&DAT_100335e8,0);
          if (iVar4 == 0) {
            SetTrigg(0x52,0);
            CreateObject0(&DAT_10033710,&DAT_100335c0,&DAT_10033790,1,&DAT_100335e8,0);
            CreateObject0(&DAT_10033718,&DAT_100335c0,&DAT_10033768,1,&DAT_100335e8,0);
            CreateObject0(&DAT_100334d0,&DAT_100335c0,&DAT_100337a0,1,&DAT_100335e8,0);
            SetTrigg(0x30,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(6);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = TimerDone(5);
      if ((uVar1 & 0xff) != 0) {
        iVar4 = GetUnitsAmount0(&DAT_100335f0,0);
        if (iVar4 == 0) {
          uVar1 = Trigg(0x34);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0x36,0);
            CreateObject0(&DAT_10033700,&DAT_100335c0,&DAT_10033790,1,&DAT_100335f0,0);
            CreateObject0(&DAT_10033708,&DAT_100335c0,&DAT_10033768,1,&DAT_100335f0,0);
            CreateObject0(&DAT_100334c0,&DAT_100335c0,&DAT_100337a0,1,&DAT_100335f0,0);
            SetTrigg(0x30,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x53);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x60);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x52);
      if ((uVar1 & 0xff) != 0) goto LAB_10003850;
    }
    SetTrigg(0x53,0);
    SetTrigg(0x62,0);
  }
LAB_10003850:
  uVar1 = Trigg(0x35);
  if ((uVar1 & 0xff) == 0) {
LAB_100038af:
    SetTrigg(0x34,0);
  }
  else {
    iVar4 = GetTotalAmount1(&DAT_10033790,1);
    iVar2 = GetTotalAmount1(&DAT_10033768,1);
    if (iVar4 + iVar2 < 0x3e9) goto LAB_100038af;
    SetTrigg(0x34,0);
  }
  uVar1 = Trigg(0x5c);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount1(&DAT_10033798,0);
    if (iVar4 < 0x15) {
      iVar4 = GetTotalAmount1(&DAT_10033770,0);
      if (iVar4 < 0x15) goto LAB_10003920;
    }
    SetTrigg(0x5c,0);
  }
LAB_10003920:
  uVar1 = Trigg(0x50);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(4);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(1);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x32);
          if ((uVar1 & 0xff) != 0) {
            iVar4 = GetUnitsAmount0(&DAT_100335e8,0);
            if (iVar4 == 0) {
              SetTrigg(0x50,0);
              CreateObject0(&DAT_100336f8,&DAT_100335c0,&DAT_10033790,1,&DAT_100335e8,0);
              CreateObject0(&DAT_10033730,&DAT_100335c0,&DAT_10033768,1,&DAT_100335e8,0);
              CreateObject0(&DAT_10033728,&DAT_100335c0,&DAT_100337c8,1,&DAT_100335e8,0);
              CreateObject0(&DAT_10033518,&DAT_100335c0,&DAT_100337a0,1,&DAT_100335e8,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x4b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(4);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(1);
        if ((uVar1 & 0xff) != 0) {
          iVar4 = GetUnitsAmount0(&DAT_100335f0,0);
          if (iVar4 == 0) {
            uVar1 = Trigg(0x32);
            if ((uVar1 & 0xff) != 0) {
              SetTrigg(0x4b,0);
              CreateObject0(&DAT_10033738,&DAT_100335c0,&DAT_10033790,1,&DAT_100335f0,0);
              CreateObject0(&DAT_10033720,&DAT_100335c0,&DAT_10033768,1,&DAT_100335f0,0);
              CreateObject0(&DAT_10033508,&DAT_100335c0,&DAT_100337a0,1,&DAT_100335f0,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x3a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(6);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(5);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x32);
          if ((uVar1 & 0xff) != 0) {
            iVar4 = GetUnitsAmount0(&DAT_100335e8,0);
            if (iVar4 == 0) {
              SetTrigg(0x3a,0);
              CreateObject0(&DAT_10033710,&DAT_100335c0,&DAT_10033790,1,&DAT_100335e8,0);
              CreateObject0(&DAT_10033718,&DAT_100335c0,&DAT_10033768,1,&DAT_100335e8,0);
              CreateObject0(&DAT_10033740,&DAT_100335c0,&DAT_100337c8,1,&DAT_100335e8,0);
              CreateObject0(&DAT_100334f8,&DAT_100335c0,&DAT_100337a0,1,&DAT_100335e8,0);
              SetTrigg(0x30,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x4a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(6);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(5);
        if ((uVar1 & 0xff) != 0) {
          iVar4 = GetUnitsAmount0(&DAT_100335f0,0);
          if (iVar4 == 0) {
            uVar1 = Trigg(0x32);
            if ((uVar1 & 0xff) != 0) {
              SetTrigg(0x4a,0);
              CreateObject0(&DAT_10033700,&DAT_100335c0,&DAT_10033790,1,&DAT_100335f0,0);
              CreateObject0(&DAT_10033708,&DAT_100335c0,&DAT_10033768,1,&DAT_100335f0,0);
              CreateObject0(&DAT_100334c8,&DAT_100335c0,&DAT_100337a0,1,&DAT_100335f0,0);
              SetTrigg(0x30,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x3f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x50);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x3a);
      if ((uVar1 & 0xff) != 0) goto LAB_10003f8b;
    }
    SetTrigg(0x3f,0);
    SetTrigg(0x62,0);
  }
LAB_10003f8b:
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) == 0) {
LAB_10003ffb:
    SetTrigg(0x32,0);
  }
  else {
    iVar4 = GetTotalAmount1(&DAT_10033790,1);
    iVar2 = GetTotalAmount1(&DAT_10033768,1);
    iVar3 = GetTotalAmount1(&DAT_10033768,1);
    if (iVar4 + iVar2 + iVar3 < 0x709) goto LAB_10003ffb;
    SetTrigg(0x32,0);
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100335f0,1);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100335f0,0);
      if (0 < iVar4) {
        SetTrigg(0x1f,0);
        SetTrigg(0x4f,0);
        ShowPage("#PAGE2");
        ClearSelection(1);
        ClearSelection(0);
        SelectUnits1(1,&DAT_10033688,0);
        SelectUnits1(1,&DAT_10033698,1);
        SelChangeNation(1,0);
      }
    }
  }
  uVar1 = Trigg(0x4f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x50);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100335f0,0);
      if (iVar4 < 0) {
        iVar4 = GetUnitsAmount0(&DAT_100335f0,1);
        if (0 < iVar4) {
          SetTrigg(0x4f,0);
          SetTrigg(0x1f,0);
          ShowPage("#PAGE12");
          ClearSelection(0);
          ClearSelection(1);
          SelectUnits1(1,&DAT_10033688,0);
          SelectUnits1(1,&DAT_10033698,1);
          SelChangeNation(0,1);
        }
      }
    }
  }
  uVar1 = Trigg(0x4e);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10033620,0);
    if (0 < iVar4) {
      SetTrigg(0x4e,0);
      SetTrigg(0x4d,0);
      SelectUnits1(1,&DAT_100336f0,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x4d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x4e);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033620,0);
      if (iVar4 == 0) {
        SetTrigg(0x4d,0);
        SetTrigg(0x4e,0);
        SelectUnits1(1,&DAT_100336f0,0);
        SelOpenGates(1);
      }
    }
  }
  uVar1 = Trigg(0x49);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1f);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033618,0);
      if (iVar4 == 0) {
        SetTrigg(0x49,0);
        SetTrigg(0x48,0);
        CreateObject0(&DAT_100334f0,&DAT_100335c0,&DAT_10033790,1,&DAT_10033618,0);
        CreateObject0(&DAT_100334e8,&DAT_100335c0,&DAT_10033768,1,&DAT_10033618,0);
        CreateObject0(&DAT_100334e0,&DAT_100335c0,&DAT_100337c8,1,&DAT_10033618,0);
        CreateObject0(&DAT_100334b8,&DAT_100335c0,&DAT_100337a0,1,&DAT_10033618,0);
        SelectUnits1(1,&DAT_100334f0,0);
        SelectUnits1(1,&DAT_100334e8,1);
        SelectUnits1(1,&DAT_100334e0,1);
        SelectUnits1(1,&DAT_100334b8,1);
        DoNotUseSelInAI(1);
        RunTimer(10,9000);
      }
    }
  }
  uVar1 = Trigg(0x42);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x49);
    if ((uVar1 & 0xff) == 0) {
      AttackEnemyInZone(&DAT_100334f0,&DAT_100335f0,0);
      AttackEnemyInZone(&DAT_100334e8,&DAT_100335f0,0);
      AttackEnemyInZone(&DAT_100334e0,&DAT_100335f0,0);
      AttackEnemyInZone(&DAT_100334b8,&DAT_100335f0,0);
    }
  }
  uVar1 = Trigg(0x48);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100334f0);
      if (iVar4 < 3) {
        iVar4 = GetTotalAmount0(&DAT_100334e8);
        if (iVar4 < 3) {
          iVar4 = GetTotalAmount0(&DAT_100334e0);
          if (iVar4 < 3) {
            SetTrigg(0x48,0);
            SetTrigg(0x49,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100335f8,1);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100335f8,0);
      if (0 < iVar4) {
        SetTrigg(0x47,0);
        SetTrigg(0x46,0);
        ShowPage("#PAGE3");
        ClearSelection(0);
        ClearSelection(1);
        SelectUnits1(1,&DAT_100336c8,0);
        SelChangeNation(1,0);
      }
    }
  }
  uVar1 = Trigg(0x46);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x47);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100335f8,0);
      if (iVar4 == 0) {
        iVar4 = GetUnitsAmount0(&DAT_100335f8,1);
        if (0 < iVar4) {
          SetTrigg(0x46,0);
          SetTrigg(0x47,0);
          ShowPage("#PAGE13");
          ClearSelection(0);
          ClearSelection(1);
          SelectUnits1(0,&DAT_100336c8,0);
          SelChangeNation(0,1);
        }
      }
    }
  }
  uVar1 = Trigg(0x45);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10033628,0);
    if (0 < iVar4) {
      SetTrigg(0x45,0);
      SetTrigg(0x44,0);
      SelectUnits1(1,&DAT_10033570,0);
      SelCloseGates(1);
    }
  }
  uVar1 = Trigg(0x44);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x45);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033628,0);
      if (iVar4 == 0) {
        SetTrigg(0x44,0);
        SetTrigg(0x45,0);
        SelectUnits1(1,&DAT_10033570,0);
        SelOpenGates(1);
      }
    }
  }
  uVar1 = Trigg(0x43);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x47);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033610,0);
      if (iVar4 == 0) {
        SetTrigg(0x43,0);
        SetTrigg(0x40,0);
        CreateObject0(&DAT_100334d8,&DAT_100335c0,&DAT_10033790,1,&DAT_10033610,0);
        CreateObject0(&DAT_10033528,&DAT_100335c0,&DAT_10033768,1,&DAT_10033610,0);
        CreateObject0(&DAT_10033520,&DAT_100335c0,&DAT_100337c8,1,&DAT_10033610,0);
        CreateObject0(&DAT_100334b0,&DAT_100335c0,&DAT_100337a0,1,&DAT_10033610,0);
        SelectUnits1(1,&DAT_100334d8,0);
        SelectUnits1(1,&DAT_10033528,1);
        SelectUnits1(1,&DAT_10033520,1);
        SelectUnits1(1,&DAT_100334b0,1);
        DoNotUseSelInAI(1);
        RunTimer(0xb,9000);
      }
    }
  }
  uVar1 = Trigg(0x41);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x43);
    if ((uVar1 & 0xff) == 0) {
      AttackEnemyInZone(&DAT_100334d8,&DAT_100335f8,0);
      AttackEnemyInZone(&DAT_10033528,&DAT_100335f8,0);
      AttackEnemyInZone(&DAT_10033520,&DAT_100335f8,0);
      AttackEnemyInZone(&DAT_100334b0,&DAT_100335f8,0);
    }
  }
  uVar1 = Trigg(0x40);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xb);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount0(&DAT_100334d8);
      if (iVar4 == 0) {
        iVar4 = GetTotalAmount0(&DAT_10033528);
        if (iVar4 == 0) {
          iVar4 = GetTotalAmount0(&DAT_10033520);
          if (iVar4 == 0) {
            SetTrigg(0x40,0);
            SetTrigg(0x43,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10033598,0);
    if (0 < iVar4) {
      SetTrigg(0x1e,0);
      SetTrigg(0x1d,0);
      SelectUnits1(1,&DAT_100336d0,0);
      SelCloseGates(1);
      SetTrigg(0x5a,0);
    }
  }
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1e);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033598,0);
      if (iVar4 == 0) {
        SetTrigg(0x1d,0);
        SetTrigg(0x1e,0);
        SelectUnits1(1,&DAT_100336d0,0);
        SelOpenGates(1);
        SetTrigg(0x5a,0);
      }
    }
  }
  uVar1 = Trigg(0x2f);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount1(&DAT_100337d0,0);
    if (iVar4 == 5) {
      SetTrigg(0x2f,0);
      SetTrigg(0x2e,0);
      ShowPage("#PAGE4");
      EnableUnit(0,&DAT_100337d0,0);
    }
  }
  uVar1 = Trigg(0x2e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2f);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetTotalAmount1(&DAT_100337d0,0);
      if (iVar4 < 5) {
        SetTrigg(0x2e,0);
        SetTrigg(0x2f,0);
        EnableUnit(0,&DAT_100337d0,1);
      }
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount1(&DAT_100337e8,0);
    if (iVar4 == 3) {
      SetTrigg(0x2d,0);
      SetTrigg(0x2c,0);
      ShowPage("#PAGE5");
      EnableUnit(0,&DAT_100337e8,0);
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2d);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetTotalAmount1(&DAT_100337e8,0);
      if (iVar4 < 3) {
        SetTrigg(0x2c,0);
        SetTrigg(0x2d,0);
        EnableUnit(0,&DAT_100337e8,1);
      }
    }
  }
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x29);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033588,0);
      if (0 < iVar4) {
        SetTrigg(0x2b,0);
        SelectUnits1(7,&DAT_10033690,0);
        SelOpenGates(7);
      }
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x29);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033588,0);
      if (0 < iVar4) {
        SetTrigg(0x2a,0);
        SetTrigg(0x26,0);
        SetTrigg(0x29,0);
        uVar1 = AskQuestion("#PAGE6");
        if ((uVar1 & 0xff) == 0) {
          RunTimer(0x14,1);
        }
        else {
          RunTimer(0x15,1);
        }
      }
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0x15);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetResource(0,1);
      if (5000 < iVar4) {
        SetTrigg(0x29,0);
        AddResource(0,1,-5000);
        SelectUnits1(7,&DAT_10033680,0);
        SelChangeNation(7,0);
      }
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x29);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x28,0);
      ShowPage("#PAGE7");
      SetLightSpot(&DAT_10033620,1,1);
      SetLightSpot(&DAT_10033628,1,2);
      SetLightSpot(&DAT_100335a0,1,3);
      SetLightSpot(&DAT_10033608,1,4);
      RunTimer(0xc,1000);
      SetTrigg(0x26,0);
      SetTrigg(0x2a,0);
      SetTrigg(0x29,0);
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xc);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x27,0);
      ClearLightSpot(1);
      ClearLightSpot(2);
      ClearLightSpot(3);
      ClearLightSpot(4);
    }
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) == 0) goto LAB_1000560e;
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) == 0) goto LAB_1000560e;
  uVar1 = TimerDone(0x15);
  if ((uVar1 & 0xff) == 0) {
LAB_100055c5:
    uVar1 = TimerDone(0x14);
    if ((uVar1 & 0xff) == 0) goto LAB_1000560e;
  }
  else {
    iVar4 = GetResource(0,1);
    if (4999 < iVar4) goto LAB_100055c5;
  }
  SetTrigg(0x26,0);
  SetTrigg(0x18,0);
LAB_1000560e:
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x29);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x26);
      if ((uVar1 & 0xff) == 0) {
        iVar4 = GetUnitsAmount0(&DAT_10033588,0);
        if (iVar4 == 0) {
          SetTrigg(0x18,0);
          SetTrigg(0x2a,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_10033628,0);
    if (0 < iVar4) {
      SetTrigg(0x25,0);
      SetTrigg(0x24,0);
      SelectUnits1(1,&DAT_10033558,0);
      SelSendAndKill(1,&DAT_10033628,0,0);
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x25);
    if ((uVar1 & 0xff) == 0) {
      iVar4 = GetUnitsAmount0(&DAT_10033628,0);
      if (iVar4 == 0) {
        SetTrigg(0x24,0);
        SetTrigg(0x25,0);
        SelectUnits1(1,&DAT_10033558,0);
        SelSendTo(1,&DAT_10033598,0x1e,0);
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetUnitsAmount0(&DAT_100335e8,1);
    if (iVar4 == 0) {
      iVar4 = GetUnitsAmount0(&DAT_100335e8,0);
      if (0 < iVar4) {
        SetTrigg(0x23,0);
        ClearSelection(0);
        ClearSelection(1);
        SelectUnits1(1,&DAT_100336e8,0);
        SelChangeNation(1,0);
        ShowPage("#PAGE9");
      }
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x23);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x22,0);
      ShowVictory();
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    iVar4 = GetTotalAmount0(&DAT_10033530);
    if (iVar4 == 0) {
      SetTrigg(0x21,0);
      ShowPage("#PAGE10");
      LooseGame();
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetTotalAmount1(&DAT_10033760,0);
      if (iVar4 == 0) {
        iVar4 = GetTotalAmount1(&DAT_10033788,0);
        if (iVar4 == 0) {
          iVar4 = GetTotalAmount1(&DAT_10033798,0);
          if (iVar4 == 0) {
            iVar4 = GetTotalAmount1(&DAT_10033770,0);
            if (iVar4 == 0) {
              iVar4 = GetTotalAmount1(&DAT_100337d0,0);
              if (iVar4 == 0) {
                iVar4 = GetTotalAmount1(&DAT_100337e8,0);
                if (iVar4 == 0) {
                  SetTrigg(0x20,0);
                  ShowPage("#PAGE11");
                  LooseGame();
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0x19,0);
    RunTimer(0xf,15000);
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0xf);
    if ((uVar1 & 0xff) != 0) {
      iVar4 = GetUnitsAmount0(&DAT_100335b0,0);
      if (iVar4 == 0) {
        SetTrigg(0x1b,0);
        SetTrigg(0x1a,0);
        CreateObject0(&DAT_100334a8,&DAT_100335c0,&DAT_100337c8,1,&DAT_100335b0,0);
        SelectUnits1(1,&DAT_100334a8,0);
        DoNotUseSelInAI(1);
        SelectUnits1(1,&DAT_100334a8,0);
        SelSendAndKill(1,&DAT_100335a8,0,0);
        SetTrigg(0x19,0);
      }
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1b);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x1a,0);
      SetTrigg(0x1b,0);
      SelectUnits1(1,&DAT_100334a8,0);
      DoNotUseSelInAI(1);
      SelectUnits1(1,&DAT_100334a8,0);
      SelSendAndKill(1,&DAT_100335a8,0,0);
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) == 0) {
    iVar4 = GetUnitsAmount1(&DAT_100335a8,&DAT_100334a8);
    if (0 < iVar4) {
      AttackEnemyInZone(&DAT_100334a8,&DAT_100335c8,0);
    }
  }
  uStack_8 = 0x10005d80;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

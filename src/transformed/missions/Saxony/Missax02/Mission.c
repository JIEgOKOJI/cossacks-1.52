#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
char DAT_10006198[] = "Zz1";
char DAT_1000619c[] = "Z1";
char DAT_10006238[] = "G9_t";
char DAT_10006240[] = "G8_t";
char DAT_10006248[] = "G7_t";
char DAT_10006250[] = "G6_t";
char DAT_10006258[] = "G5_t";
char DAT_10006260[] = "G4_t";
char DAT_10006268[] = "G3_t";
char DAT_10006270[] = "G2_t";
char DAT_10006278[] = "G1_t";
long long DAT_100067e0 = 0;
long long DAT_100067e8 = 0;
long long DAT_100067f0 = 0;
long long DAT_100067f8 = 0;
long long DAT_10006800 = 0;
long long DAT_10006808 = 0;
long long DAT_10006810 = 0;
long long DAT_10006818 = 0;
long long DAT_10006820 = 0;
long long DAT_10006828 = 0;
long long DAT_10006830 = 0;
long long DAT_10006840 = 0;
long long DAT_10006848 = 0;
long long DAT_10006850 = 0;
long long DAT_10006858 = 0;
long long DAT_10006860 = 0;
long long DAT_10006870 = 0;
long long DAT_10006878 = 0;
long long DAT_10006880 = 0;
long long DAT_10006888 = 0;
long long DAT_10006890 = 0;
long long DAT_10006898 = 0;
long long DAT_100068a0 = 0;
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
long long DAT_10006910 = 0;
long long DAT_10006918 = 0;
long long DAT_10006920 = 0;
long long DAT_10006928 = 0;
long long DAT_10006930 = 0;
long long DAT_10006938 = 0;
long long DAT_10006940 = 0;
long long DAT_10006948 = 0;
long long DAT_10006950 = 0;
long long DAT_10006958 = 0;
long long DAT_10006968 = 0;
long long DAT_10006970 = 0;
long long DAT_10006978 = 0;
long long DAT_10006980 = 0;
long long DAT_10006988 = 0;
long long DAT_10006990 = 0;
void OnInit();
void ProcessScenary();


void OnInit(void)

{
                    
  RegisterUnits(&DAT_10006958,DAT_10006278);
  RegisterUnits(&DAT_10006968,DAT_10006270);
  RegisterUnits(&DAT_10006970,DAT_10006268);
  RegisterUnits(&DAT_10006980,DAT_10006260);
  RegisterUnits(&DAT_10006990,DAT_10006258);
  RegisterUnits(&DAT_100067e0,DAT_10006250);
  RegisterUnits(&DAT_100067e8,DAT_10006248);
  RegisterUnits(&DAT_100067f0,DAT_10006240);
  RegisterUnits(&DAT_100067f8,DAT_10006238);
  RegisterUnits(&DAT_10006840,"G10_t");
  RegisterUnits(&DAT_10006850,"G11_t");
  RegisterUnits(&DAT_10006858,"G12_t");
  RegisterUnits(&DAT_10006878,"G15_t");
  RegisterUnits(&DAT_10006880,"G16_t");
  RegisterUnits(&DAT_10006978,"Gvorota");
  RegisterUnits(&DAT_100068f8,"Grazb1");
  RegisterUnits(&DAT_10006950,"Gobozi");
  RegisterUnits(&DAT_10006948,"GkomandirR");
  RegisterUnits(&DAT_10006940,"GkomandirK");
  RegisterUnits(&DAT_10006898,"Gkomandir");
  RegisterUnits(&DAT_10006860,"Gtransport");
  RegisterUnits(&DAT_100068a8,"Gshebeka");
  RegisterUnits(&DAT_10006938,"Gvorotak");
  RegisterUnits(&DAT_10006830,"Gzasada");
  RegisterUnits(&DAT_10006820,"Gtatar");
  RegisterZone(&DAT_10006870,DAT_1000619c);
  RegisterZone(&DAT_10006988,DAT_10006198);
  RegisterZone(&DAT_10006810,"Zvorotak1");
  RegisterZone(&DAT_10006818,"Zvorotak2");
  RegisterZone(&DAT_10006800,"Zrazb1");
  RegisterZone(&DAT_10006828,"Ztransport");
  RegisterZone(&DAT_100068a0,"Zrazb");
  RegisterZone(&DAT_10006848,"Zobozi");
  RegisterZone(&DAT_10006890,"ZkomandirK");
  RegisterZone(&DAT_10006808,"Zkamen");
  RegisterZone(&DAT_10006888,"Zzasada");
  RegisterUnitType(&DAT_100068b0,"Center_Sacson(SA)");
  RegisterUnitType(&DAT_100068b8,"Dom_Saksona(SA)");
  RegisterUnitType(&DAT_100068c0,"Melnica(SA)");
  RegisterUnitType(&DAT_100068c8,"Sclad1(SA)");
  RegisterUnitType(&DAT_100068d0,"shahta(SA)");
  RegisterUnitType(&DAT_100068d8,"shahta_UG(SA)");
  RegisterUnitType(&DAT_100068e0,"shahta_FE(SA)");
  RegisterUnitType(&DAT_100068e8,"Kuznica(SA)");
  RegisterUnitType(&DAT_100068f0,"WALL_UKR(SA)");
  RegisterUnitType(&DAT_10006900,"WALL_EV(SA)");
  RegisterUnitType(&DAT_10006908,"Konushnia_Swesair(SA)");
  RegisterUnitType(&DAT_10006910,"Cercov_Poland(SA)");
  RegisterUnitType(&DAT_10006918,"akademia_E(SA)");
  RegisterUnitType(&DAT_10006920,"Bashnia(SA)");
  RegisterUnitType(&DAT_10006928,"Kazarma_evro(SA)");
  RegisterUnitType(&DAT_10006930,"Kazarma(SA)");
  SetPlayerName(1,"TURKEY");
  SetPlayerName(2,"ROBBERS");
  SetPlayerName(5,"ALLIES");
  SetPlayerName(3,"ALLIES");
  EnableMission(0x41);
  DisableMission(0x42);
  DisableMission(0x43);
  DisableMission(0x44);
  return;
}





void ProcessScenary(void)

{
  char cVar1;
  int iVar2;
  void *pcVar3;
  char *pcVar4;
  
                    
  cVar1 = Trigg(1);
  if (cVar1 != '\0') {
    SetTrigg(1,0);
    iVar2 = GetDiff(0);
    if (iVar2 == 0) {
      SetResource(0,3,500000);
      SetResource(0,1,5000);
      SetResource(0,4,200000);
      SetResource(0,5,200000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK3");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK4");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD3");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD4");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK5");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK6");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD5");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD6");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)ATTACK");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)ATTACK3");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)ATTACK4");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)SHIELD");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)SHIELD3");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)SHIELD4");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)SHIELD5");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)SHIELD6");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)SHIELD7");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 1) {
      SetResource(0,3,450000);
      SetResource(0,1,4000);
      SetResource(0,4,160000);
      SetResource(0,5,160000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK3");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK4");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD3");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD4");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD5");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)ATTACK");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)ATTACK3");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)SHIELD");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)SHIELD3");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)SHIELD4");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 2) {
      SetResource(0,3,40000);
      SetResource(0,1,0x5dc);
      SetResource(0,4,13000);
      SetResource(0,5,11000);
      SetResource(0,0,0);
      SetResource(0,2,0);
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)ATTACK3");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD");
      InitialUpgrade("Gkomandir","Pikiner_evro(SA)SHIELD3");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)ATTACK");
      InitialUpgrade("Gkomandir","Mushketer_ev(SA)SHIELD");
    }
    iVar2 = GetDiff(0);
    if (iVar2 == 3) {
      SetResource(0,3,35000);
      SetResource(0,1,1000);
      SetResource(0,4,8000);
      SetResource(0,5,8000);
      SetResource(0,0,0);
      SetResource(0,2,0);
    }
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,4,5000000);
    SetResource(1,2,500000);
    SetResource(1,0,500000);
    SetResource(1,5,500000);
    SetResource(5,3,5000000);
    SetResource(5,1,5000000);
    SetResource(5,4,5000000);
    SetResource(5,2,5000000);
    SetResource(5,0,5000000);
    SetResource(5,5,5000000);
    SetResource(2,3,5000000);
    SetResource(2,1,5000000);
    SetResource(2,4,5000000);
    SetResource(2,2,5000000);
    SetResource(2,0,5000000);
    SetResource(2,5,5000000);
    ChangeFriends(0,0x2d);
    ShowPage("#PAGE1");
    EnableUnit(0,&DAT_100068b0,0);
    EnableUnit(0,&DAT_100068b8,0);
    EnableUnit(0,&DAT_100068c0,0);
    EnableUnit(0,&DAT_100068c8,0);
    EnableUnit(0,&DAT_100068d0,0);
    EnableUnit(0,&DAT_100068d8,0);
    EnableUnit(0,&DAT_100068e0,0);
    EnableUnit(0,&DAT_100068e8,0);
    EnableUnit(0,&DAT_100068f0,0);
    EnableUnit(0,&DAT_10006900,0);
    EnableUnit(0,&DAT_10006908,0);
    EnableUnit(0,&DAT_10006910,0);
    EnableUnit(0,&DAT_10006918,0);
    EnableUnit(0,&DAT_10006920,0);
    EnableUnit(0,&DAT_10006928,0);
    EnableUnit(0,&DAT_10006930,0);
    InitialUpgrade("Gkomandir","AKA23SA");
  }
  cVar1 = Trigg(2);
  if (cVar1 != '\0') {
    SetTrigg(2,0);
    RunTimer(1,1000);
  }
  cVar1 = Trigg(0x2c);
  if (cVar1 != '\0') {
    SetTrigg(0x2c,0);
    RunTimer(0x14,0x32);
  }
  cVar1 = Trigg(0x2b);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006878,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(0x14);
      if (cVar1 != '\0') {
        SetTrigg(0x2b,0);
        SelectUnits(&DAT_10006878,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
      }
    }
  }
  cVar1 = Trigg(3);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006958,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(1);
      if (cVar1 != '\0') {
        SetTrigg(3,0);
        SelectUnits(&DAT_10006958,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(4);
        if (cVar1 != '\0') {
          RunTimer(2,0x640);
        }
        SetTrigg(4,0);
      }
    }
  }
  cVar1 = Trigg(5);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006968,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(2);
      if (cVar1 != '\0') {
        SetTrigg(5,0);
        SelectUnits(&DAT_10006968,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(6);
        if (cVar1 != '\0') {
          RunTimer(3,0x640);
        }
        SetTrigg(6,0);
      }
    }
  }
  cVar1 = Trigg(7);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006970,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(3);
      if (cVar1 != '\0') {
        SetTrigg(7,0);
        SelectUnits(&DAT_10006970,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(8);
        if (cVar1 != '\0') {
          RunTimer(4,0x514);
        }
        SetTrigg(8,0);
      }
    }
  }
  cVar1 = Trigg(9);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006980,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(4);
      if (cVar1 != '\0') {
        SetTrigg(9,0);
        SelectUnits(&DAT_10006980,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(10);
        if (cVar1 != '\0') {
          RunTimer(5,0x578);
        }
        SetTrigg(10,0);
      }
    }
  }
  cVar1 = Trigg(0xb);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006990,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(5);
      if (cVar1 != '\0') {
        SetTrigg(0xb,0);
        SelectUnits(&DAT_10006990,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(0xc);
        if (cVar1 != '\0') {
          RunTimer(6,1000);
        }
        SetTrigg(0xc,0);
      }
    }
  }
  cVar1 = Trigg(0xd);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_100067e0,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(6);
      if (cVar1 != '\0') {
        SetTrigg(0xd,0);
        SelectUnits(&DAT_100067e0,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(0xe);
        if (cVar1 != '\0') {
          RunTimer(7,0x5dc);
        }
        SetTrigg(0xe,0);
      }
    }
  }
  cVar1 = Trigg(0xf);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_100067e8,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(7);
      if (cVar1 != '\0') {
        SetTrigg(0xf,0);
        SelectUnits(&DAT_100067e8,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(0x10);
        if (cVar1 != '\0') {
          RunTimer(8,0x578);
        }
        SetTrigg(0x10,0);
      }
    }
  }
  cVar1 = Trigg(0x11);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_100067f0,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(8);
      if (cVar1 != '\0') {
        SetTrigg(0x11,0);
        SelectUnits(&DAT_100067f0,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(0x12);
        if (cVar1 != '\0') {
          RunTimer(9,0x514);
        }
        SetTrigg(0x12,0);
      }
    }
  }
  cVar1 = Trigg(0x13);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_100067f8,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(9);
      if (cVar1 != '\0') {
        SetTrigg(0x13,0);
        SelectUnits(&DAT_100067f8,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(0x14);
        if (cVar1 != '\0') {
          RunTimer(10,0x578);
        }
        SetTrigg(0x14,0);
      }
    }
  }
  cVar1 = Trigg(0x15);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006840,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(10);
      if (cVar1 != '\0') {
        SetTrigg(0x15,0);
        SelectUnits(&DAT_10006840,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(0x16);
        if (cVar1 != '\0') {
          RunTimer(0xb,0x514);
        }
        SetTrigg(0x16,0);
      }
    }
  }
  cVar1 = Trigg(0x17);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006850,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(0xb);
      if (cVar1 != '\0') {
        SetTrigg(0x17,0);
        SelectUnits(&DAT_10006850,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(0x18);
        if (cVar1 != '\0') {
          RunTimer(0xc,0x514);
        }
        SetTrigg(0x18,0);
      }
    }
  }
  cVar1 = Trigg(0x19);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006858,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(0xc);
      if (cVar1 != '\0') {
        SetTrigg(0x19,0);
        SelectUnits(&DAT_10006858,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        cVar1 = Trigg(0x1a);
        if (cVar1 != '\0') {
          RunTimer(0xd,7000);
        }
        SetTrigg(0x1a,0);
      }
    }
  }
  cVar1 = Trigg(0x1b);
  if (cVar1 != '\0') {
    iVar2 = GetResource(0,1);
    if (15000 < iVar2) {
      SetTrigg(0x1b,0);
      SelectUnits(&DAT_10006860,0);
      SelSendTo(5,&DAT_10006828,0,1);
      SelChangeNation(5,0);
      AddResource(0,1,0xffffc568);
      ShowPage("#PAGE2");
      SelectUnits(&DAT_10006950,0);
      SelSendTo(3,&DAT_10006848,0,0);
      SetStartPoint(&DAT_10006848);
      RunTimer(0xe,2000);
      RunTimer(0xf,3000);
      DisableMission(0x41);
      EnableMission(0x42);
      EnableMission(0x43);
    }
  }
  cVar1 = Trigg(0x2d);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006880,1);
    if (0 < iVar2) {
      cVar1 = TimerDone(0xe);
      if (cVar1 != '\0') {
        SetResource(1,1,0);
        SelectUnits(&DAT_10006880,0);
        SelSendAndKill(1,&DAT_10006870,0xa0,0);
        SelSendAndKill(1,&DAT_10006848,0xa0,2);
        cVar1 = Trigg(0x2e);
        if (cVar1 != '\0') {
          SetTrigg(0x2e,0);
          ShowPage("#PAGE3");
          SelectUnits(&DAT_10006950,0);
          SelChangeNation(3,0);
          SetTrigg(0x2d,0);
        }
      }
    }
  }
  cVar1 = Trigg(0x1c);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_100068a0,&DAT_10006898);
    if (0 < iVar2) {
      SetTrigg(0x1c,0);
      iVar2 = AskMultilineQuestion(9,"#PAGE10",0,"Qs2_1|Qs2_2|Qs2_3");
      if (iVar2 == 0) {
        pcVar4 = "#PAGE9";
      }
      else {
        if (iVar2 == 1) {
          ChangeFriends(0,0x29);
          goto LAB_10002153;
        }
        if (iVar2 != 2) goto LAB_10002153;
        iVar2 = GetResource(0,1);
        if (1000 < iVar2) {
          AddResource(0,1,0xfffffc18);
          SelectUnits(&DAT_10006978,0);
          SelOpenGates(2);
          SelectUnits(&DAT_100068f8,0);
          SelSendTo(2,&DAT_10006800,0,0);
          goto LAB_10002153;
        }
        pcVar4 = "#PAGE6";
      }
      ShowPage(pcVar4);
      ChangeFriends(0,0x29);
    }
  }
LAB_10002153:
  cVar1 = Trigg(0x1d);
  if (cVar1 != '\0') {
    cVar1 = TimerDone(0xf);
    if (cVar1 != '\0') {
      SetTrigg(0x1d,0);
      SetStartPoint(&DAT_10006828);
    }
  }
  cVar1 = Trigg(0x20);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_10006810,0);
    if (iVar2 != 0) {
      SetTrigg(0x20,0);
      SelectUnits(&DAT_10006938,0);
      SelOpenGates(5);
    }
  }
  cVar1 = Trigg(0x21);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_10006818,0);
    if (iVar2 != 0) {
      SetTrigg(0x21,0);
      SelectUnits(&DAT_10006938,0);
      SelOpenGates(5);
    }
  }
  cVar1 = Trigg(0x22);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_10006828,0);
    if (2 < iVar2) {
      SelectUnits(&DAT_100068a8,0);
      SelSendAndKill(1,&DAT_10006828,0xa0,0);
    }
  }
  cVar1 = Trigg(0x24);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_10006808,0);
    if (3 < iVar2) {
      SetTrigg(0x24,0);
      ShowPage("#PAGE5");
    }
  }
  cVar1 = Trigg(0x1e);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsByNation(&DAT_10006898,0);
    if (iVar2 < 1) {
      SetTrigg(0x1e,0);
      ShowPage("#PAGE8");
      LooseGame();
    }
  }
  iVar2 = GetTotalAmount0(&DAT_10006950);
  if (iVar2 == 0) {
    cVar1 = Trigg(0x28);
    if (cVar1 != '\0') {
      SetTrigg(0x28,0);
      ShowPage("#PAGE4");
      LooseGame();
    }
  }
  cVar1 = Trigg(0x1f);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_10006890,&DAT_10006898);
    if (0 < iVar2) {
      iVar2 = GetUnitsAmount1(&DAT_10006890,&DAT_10006950);
      if (0 < iVar2) {
        SetTrigg(0x1f,0);
        ShowPage("#PAGE7");
        ShowVictory();
      }
    }
  }
  cVar1 = Trigg(0x50);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount0(&DAT_10006888,0);
    if (0 < iVar2) {
      SetTrigg(0x50,0);
      SelectUnits(&DAT_10006830,0);
      SelSendAndKill(1,&DAT_10006888,0x40,0);
    }
  }
  cVar1 = Trigg(0x5a);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_10006870,&DAT_10006880);
    if (0 < iVar2) {
      SetTrigg(0x5a,0);
      SetResource(1,1,8000);
      RunTimer(0,600);
    }
  }
  cVar1 = Trigg(0x5b);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_10006870,&DAT_10006880);
    if (0 < iVar2) {
      cVar1 = TimerDone(0);
      if (cVar1 != '\0') {
        SetTrigg(0x5b,0);
        SelectUnits(&DAT_10006880,0);
        SelSendAndKill(1,&DAT_10006988,0xcd,0);
        RunTimer(0x15,2000);
      }
    }
  }
  cVar1 = Trigg(0x5c);
  if (cVar1 != '\0') {
    iVar2 = GetUnitsAmount1(&DAT_10006988,&DAT_10006880);
    if (0 < iVar2) {
      cVar1 = TimerDone(0x15);
      if (cVar1 != '\0') {
        SetTrigg(0x5c,0);
        SelectUnits(&DAT_10006880,0);
        SelSendAndKill(1,&DAT_10006828,0x80,0);
      }
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

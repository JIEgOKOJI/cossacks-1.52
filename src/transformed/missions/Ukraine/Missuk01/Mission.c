#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_1003c3e0 = 0;
long long DAT_1003c3e8 = 0;
long long DAT_1003c3f0 = 0;
long long DAT_1003c3f8 = 0;
long long DAT_1003c400 = 0;
long long DAT_1003c408 = 0;
long long DAT_1003c410 = 0;
long long DAT_1003c418 = 0;
long long DAT_1003c420 = 0;
long long DAT_1003c428 = 0;
long long DAT_1003c430 = 0;
long long DAT_1003c438 = 0;
long long DAT_1003c440 = 0;
long long DAT_1003c448 = 0;
long long DAT_1003c450 = 0;
long long DAT_1003c458 = 0;
long long DAT_1003c460 = 0;
long long DAT_1003c468 = 0;
long long DAT_1003c470 = 0;
long long DAT_1003c478 = 0;
long long DAT_1003c480 = 0;
long long DAT_1003c488 = 0;
long long DAT_1003c490 = 0;
long long DAT_1003c498 = 0;
long long DAT_1003c4a0 = 0;
long long DAT_1003c4a8 = 0;
long long DAT_1003c4b0 = 0;
long long DAT_1003c4b8 = 0;
long long DAT_1003c4c0 = 0;
long long DAT_1003c4c8 = 0;
long long DAT_1003c4d0 = 0;
long long DAT_1003c4d8 = 0;
long long DAT_1003c4e0 = 0;
long long DAT_1003c4e8 = 0;
long long DAT_1003c4f0 = 0;
long long DAT_1003c4f8 = 0;
long long DAT_1003c500 = 0;
long long DAT_1003c508 = 0;
long long DAT_1003c510 = 0;
long long DAT_1003c518 = 0;
long long DAT_1003c520 = 0;
long long DAT_1003c528 = 0;
long long DAT_1003c530 = 0;
long long DAT_1003c538 = 0;
long long DAT_1003c540 = 0;
long long DAT_1003c548 = 0;
long long DAT_1003c550 = 0;
long long DAT_1003c558 = 0;
long long DAT_1003c560 = 0;
long long DAT_1003c568 = 0;
long long DAT_1003c570 = 0;
long long DAT_1003c578 = 0;
long long DAT_1003c580 = 0;
long long DAT_1003c588 = 0;
long long DAT_1003c590 = 0;
long long DAT_1003c598 = 0;
long long DAT_1003c5a0 = 0;
long long DAT_1003c5a8 = 0;
long long DAT_1003c5b0 = 0;
long long DAT_1003c5b8 = 0;
long long DAT_1003c5c0 = 0;
long long DAT_1003c5c8 = 0;
long long DAT_1003c5d0 = 0;
long long DAT_1003c5d8 = 0;
long long DAT_1003c5e0 = 0;
long long DAT_1003c5e8 = 0;
long long DAT_1003c5f0 = 0;
long long DAT_1003c5f8 = 0;
long long DAT_1003c600 = 0;
long long DAT_1003c608 = 0;
long long DAT_1003c610 = 0;
long long DAT_1003c618 = 0;
long long DAT_1003c620 = 0;
long long DAT_1003c628 = 0;
long long DAT_1003c630 = 0;
long long DAT_1003c638 = 0;
long long DAT_1003c640 = 0;
long long DAT_1003c648 = 0;
long long DAT_1003c650 = 0;
long long DAT_1003c658 = 0;
long long DAT_1003c660 = 0;
long long DAT_1003c668 = 0;
long long DAT_1003c670 = 0;
long long DAT_1003c678 = 0;
long long DAT_1003c680 = 0;
long long DAT_1003c688 = 0;
long long DAT_1003c690 = 0;
long long DAT_1003c698 = 0;
long long DAT_1003c6a0 = 0;
long long DAT_1003c6a8 = 0;
long long DAT_1003c6b0 = 0;
long long DAT_1003c6b8 = 0;
long long DAT_1003c6c0 = 0;
long long DAT_1003c6c8 = 0;
long long DAT_1003c6d0 = 0;
long long DAT_1003c6d8 = 0;
long long DAT_1003c6e0 = 0;
long long DAT_1003c6e8 = 0;
long long DAT_1003c6f0 = 0;
long long DAT_1003c6f8 = 0;
long long DAT_1003c700 = 0;
long long DAT_1003c708 = 0;
long long DAT_1003c710 = 0;
long long DAT_1003c718 = 0;
long long DAT_1003c720 = 0;
long long DAT_1003c728 = 0;
long long DAT_1003c730 = 0;
long long DAT_1003c738 = 0;
long long DAT_1003c740 = 0;
long long DAT_1003c748 = 0;
long long DAT_1003c750 = 0;
long long DAT_1003c758 = 0;
long long DAT_1003c760 = 0;
long long DAT_1003c768 = 0;
long long DAT_1003c770 = 0;
long long DAT_1003c778 = 0;
long long DAT_1003c780 = 0;
long long DAT_1003c788 = 0;
long long DAT_1003c790 = 0;
long long DAT_1003c798 = 0;
long long DAT_1003c7a0 = 0;
long long DAT_1003c7a8 = 0;
long long DAT_1003c7b0 = 0;
long long DAT_1003c7b8 = 0;
long long DAT_1003c7c0 = 0;
long long DAT_1003c7c8 = 0;
long long DAT_1003c7d0 = 0;
long long DAT_1003c7d8 = 0;
long long DAT_1003c7e0 = 0;
long long DAT_1003c7e8 = 0;
long long DAT_1003c7f0 = 0;
long long DAT_1003c7f8 = 0;
long long DAT_1003c800 = 0;
long long DAT_1003c808 = 0;
long long DAT_1003c810 = 0;
long long DAT_1003c818 = 0;
long long DAT_1003c820 = 0;
long long DAT_1003c828 = 0;
long long DAT_1003c830 = 0;
long long DAT_1003c838 = 0;
long long DAT_1003c840 = 0;
long long DAT_1003c848 = 0;
long long DAT_1003c850 = 0;
long long DAT_1003c858 = 0;
long long DAT_1003c860 = 0;
long long DAT_1003c868 = 0;
long long DAT_1003c870 = 0;
long long DAT_1003c878 = 0;
long long DAT_1003c880 = 0;
long long DAT_1003c888 = 0;
long long DAT_1003c890 = 0;
long long DAT_1003c898 = 0;
long long DAT_1003c8a0 = 0;
long long DAT_1003c8a8 = 0;
long long DAT_1003c8b0 = 0;
long long DAT_1003c8b8 = 0;
long long DAT_1003c8c0 = 0;
long long DAT_1003c8c8 = 0;
long long DAT_1003c8d0 = 0;
long long DAT_1003c8d8 = 0;
long long DAT_1003c8e0 = 0;
long long DAT_1003c8e8 = 0;
long long DAT_1003c8f0 = 0;
long long DAT_1003c8f8 = 0;
long long DAT_1003c900 = 0;
long long DAT_1003c908 = 0;
long long DAT_1003c910 = 0;
long long DAT_1003c918 = 0;
long long DAT_1003c920 = 0;
long long DAT_1003c928 = 0;
long long DAT_1003c930 = 0;
long long DAT_1003c938 = 0;
long long DAT_1003c940 = 0;
long long DAT_1003c948 = 0;
long long DAT_1003c950 = 0;
long long DAT_1003c958 = 0;
long long DAT_1003c960 = 0;
long long DAT_1003c968 = 0;
long long DAT_1003c970 = 0;
long long DAT_1003c978 = 0;
long long DAT_1003c980 = 0;
long long DAT_1003c988 = 0;
long long DAT_1003c990 = 0;
long long DAT_1003c998 = 0;
long long DAT_1003c9a0 = 0;
long long DAT_1003c9a8 = 0;
long long DAT_1003c9b0 = 0;
long long DAT_1003c9b8 = 0;
long long DAT_1003c9c0 = 0;
long long DAT_1003c9c8 = 0;
long long DAT_1003c9d0 = 0;
long long DAT_1003c9d8 = 0;
long long DAT_1003c9e0 = 0;
long long DAT_1003c9e8 = 0;
long long DAT_1003c9f0 = 0;
long long DAT_1003c9f8 = 0;
long long DAT_1003ca00 = 0;
long long DAT_1003ca08 = 0;
long long DAT_1003ca10 = 0;
long long DAT_1003ca18 = 0;
long long DAT_1003ca20 = 0;
long long DAT_1003ca28 = 0;
long long DAT_1003ca30 = 0;
long long DAT_1003ca38 = 0;
long long DAT_1003ca40 = 0;
long long DAT_1003ca48 = 0;
long long DAT_1003ca50 = 0;
void OnInit();
void ProcessScenary();




void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterUnitType(&DAT_1003c778,"Getman(UA)");
  RegisterUnitType(&DAT_1003c780,"Kozak_pikiner(UA)");
  RegisterUnitType(&DAT_1003c788,"Kozacki_Strelec(UA)");
  RegisterUnitType(&DAT_1003c758,"Kres_ukranian(UA)");
  RegisterUnitType(&DAT_1003c760,"TUrkey_pikiner(TU)");
  RegisterUnitType(&DAT_1003c768,"Mushketer_polsha(PL)");
  RegisterUnitType(&DAT_1003c770,"Officer_evro(PL)");
  RegisterUnitType(&DAT_1003c748,"PERES_KOR(PL)");
  RegisterUnitType(&DAT_1003c750,"CenterUR(UA)");
  RegisterUnitType(&DAT_1003c3f0,"Ukrainska_hata(UA)");
  RegisterUnitType(&DAT_1003c3e0,"Melnica_rus(UA)");
  RegisterUnitType(&DAT_1003c3e8,"Sclad3(UA)");
  RegisterUnitType(&DAT_1003ca28,"Kuznica_ua(UA)");
  RegisterUnitType(&DAT_1003ca38,"konushnia_ua(UA)");
  RegisterUnitType(&DAT_1003ca18,"Cerkov_UA(UA)");
  RegisterUnitType(&DAT_1003ca20,"akademia_UA(UA)");
  RegisterUnitType(&DAT_1003ca48,"Dip_korpus_UA(UA)");
  RegisterUnitType(&DAT_1003ca50,"Rinok(UA)");
  RegisterUnitType(&DAT_1003ca40,"artileri_depo_UA(UA)");
  RegisterUnitType(&DAT_1003ca30,"Poru(UA)");
  RegisterUnitType(&DAT_1003ca10,"WALL_UKR(UA)");
  RegisterZone(&DAT_1003c6f8,"Zone1");
  RegisterZone(&DAT_1003c700,"Zone2");
  RegisterZone(&DAT_1003c708,"Zone3");
  RegisterZone(&DAT_1003c710,"Zone4");
  RegisterZone(&DAT_1003c718,"Zone5");
  RegisterZone(&DAT_1003c720,"Zone6");
  RegisterZone(&DAT_1003c728,"Zone7");
  RegisterZone(&DAT_1003c730,"Zone8");
  RegisterZone(&DAT_1003c738,"Zone9");
  RegisterZone(&DAT_1003c4a0,"Zone10");
  RegisterZone(&DAT_1003c498,"Zone11");
  RegisterZone(&DAT_1003c4b0,"Zone12");
  RegisterZone(&DAT_1003c4a8,"Zone13");
  RegisterZone(&DAT_1003c4d0,"Zone14");
  RegisterZone(&DAT_1003c4c0,"Zone15");
  RegisterZone(&DAT_1003c4f0,"Zone16");
  RegisterZone(&DAT_1003c4e0,"Zone17");
  RegisterZone(&DAT_1003c520,"Zone18");
  RegisterZone(&DAT_1003c508,"Zone19");
  RegisterZone(&DAT_1003c4c8,"Zone20");
  RegisterZone(&DAT_1003c4b8,"Zone21");
  RegisterZone(&DAT_1003c4e8,"Zone22");
  RegisterZone(&DAT_1003c4d8,"Zone23");
  RegisterZone(&DAT_1003c518,"Zone24");
  RegisterZone(&DAT_1003c500,"Zone25");
  RegisterZone(&DAT_1003c548,"Zone26");
  RegisterZone(&DAT_1003c530,"Zone27");
  RegisterZone(&DAT_1003c578,"Zone28");
  RegisterZone(&DAT_1003c560,"Zone29");
  RegisterZone(&DAT_1003c510,"Zone30");
  RegisterZone(&DAT_1003c4f8,"Zone31");
  RegisterZone(&DAT_1003c540,"Zone32");
  RegisterZone(&DAT_1003c528,"Zone33");
  RegisterZone(&DAT_1003c570,"Zone34");
  RegisterZone(&DAT_1003c558,"Zone35");
  RegisterZone(&DAT_1003c598,"Zone36");
  RegisterZone(&DAT_1003c588,"Zone37");
  RegisterZone(&DAT_1003c5c0,"Zone38");
  RegisterZone(&DAT_1003c568,"Zone40");
  RegisterZone(&DAT_1003c550,"Zone41");
  RegisterZone(&DAT_1003c590,"Zone42");
  RegisterZone(&DAT_1003c580,"Zone43");
  RegisterZone(&DAT_1003c5b8,"Zone44");
  RegisterZone(&DAT_1003c5a8,"Zone45");
  RegisterZone(&DAT_1003c5e0,"Zone46");
  RegisterZone(&DAT_1003c5d0,"Zone47");
  RegisterZone(&DAT_1003c610,"Zone48");
  RegisterZone(&DAT_1003c5f8,"Zone49");
  RegisterZone(&DAT_1003c5b0,"Zone50");
  RegisterZone(&DAT_1003c5a0,"Zone51");
  RegisterZone(&DAT_1003c5d8,"Zone52");
  RegisterZone(&DAT_1003c5c8,"Zone53");
  RegisterZone(&DAT_1003c608,"Zone54");
  RegisterZone(&DAT_1003c5f0,"Zone55");
  RegisterZone(&DAT_1003c600,"Zone60");
  RegisterZone(&DAT_1003c5e8,"Zone61");
  RegisterZone(&DAT_1003c620,"Zone62");
  RegisterZone(&DAT_1003c618,"Zone63");
  RegisterZone(&DAT_1003c638,"Zone64");
  RegisterZone(&DAT_1003c630,"Zone65");
  RegisterZone(&DAT_1003c658,"Zone66");
  RegisterZone(&DAT_1003c648,"Zone67");
  RegisterZone(&DAT_1003c680,"Zone68");
  RegisterZone(&DAT_1003c670,"Zone69");
  RegisterZone(&DAT_1003c628,"Zone70");
  RegisterZone(&DAT_1003c650,"Zone71");
  RegisterZone(&DAT_1003c640,"Zone72");
  RegisterZone(&DAT_1003c678,"Zone73");
  RegisterZone(&DAT_1003c668,"Zone74");
  RegisterZone(&DAT_1003c6a0,"Zone75");
  RegisterZone(&DAT_1003c690,"Zone76");
  RegisterZone(&DAT_1003c6c0,"Zone77");
  RegisterZone(&DAT_1003c6b0,"Zone78");
  RegisterZone(&DAT_1003c6d8,"Zone79");
  RegisterZone(&DAT_1003c660,"Zone80");
  RegisterZone(&DAT_1003c698,"Zone81");
  RegisterZone(&DAT_1003c688,"Zone82");
  RegisterZone(&DAT_1003c6b8,"Zone83");
  RegisterZone(&DAT_1003c6a8,"Zone84");
  RegisterZone(&DAT_1003c6d0,"Zone85");
  RegisterZone(&DAT_1003c6c8,"Zone86");
  RegisterZone(&DAT_1003c6e8,"Zone87");
  RegisterZone(&DAT_1003c6e0,"Zone88");
  RegisterZone(&DAT_1003c6f0,"Zone89");
  RegisterUnits(&DAT_1003c438,"Group1");
  RegisterUnits(&DAT_1003c460,"Group2");
  RegisterUnits(&DAT_1003c450,"Group3");
  RegisterUnits(&DAT_1003c470,"Group4");
  RegisterUnits(&DAT_1003c468,"Group5");
  RegisterUnits(&DAT_1003c480,"Group6");
  RegisterUnits(&DAT_1003c478,"Group7");
  RegisterUnits(&DAT_1003c490,"Group8");
  RegisterUnits(&DAT_1003c488,"Group9");
  RegisterUnits(&DAT_1003c7e0,"Group10");
  RegisterUnits(&DAT_1003c830,"Group11");
  RegisterUnits(&DAT_1003c838,"Group12");
  RegisterUnits(&DAT_1003c818,"Group13");
  RegisterUnits(&DAT_1003c828,"Group14");
  RegisterUnits(&DAT_1003c800,"Group15");
  RegisterUnits(&DAT_1003c810,"Group16");
  RegisterUnits(&DAT_1003c7e8,"Group17");
  RegisterUnits(&DAT_1003c7f8,"Group18");
  RegisterUnits(&DAT_1003c820,"Group20");
  RegisterUnits(&DAT_1003c808,"Group22");
  RegisterUnits(&DAT_1003c8c0,"Group25");
  RegisterUnits(&DAT_1003c898,"Group27");
  RegisterUnits(&DAT_1003c8b0,"Group28");
  RegisterUnits(&DAT_1003c878,"Group29");
  RegisterUnits(&DAT_1003c7f0,"Group30");
  RegisterUnits(&DAT_1003c8b8,"Group31");
  RegisterUnits(&DAT_1003c8c8,"Group32");
  RegisterUnits(&DAT_1003c890,"Group33");
  RegisterUnits(&DAT_1003c8a8,"Group34");
  RegisterUnits(&DAT_1003c870,"Group35");
  RegisterUnits(&DAT_1003c888,"Group36");
  RegisterUnits(&DAT_1003c848,"Group37");
  RegisterUnits(&DAT_1003c860,"Group38");
  RegisterUnits(&DAT_1003c938,"Group39");
  RegisterUnits(&DAT_1003c8a0,"Group40");
  RegisterUnits(&DAT_1003c868,"Group41");
  RegisterUnits(&DAT_1003c880,"Group42");
  RegisterUnits(&DAT_1003c840,"Group43");
  RegisterUnits(&DAT_1003c858,"Group44");
  RegisterUnits(&DAT_1003c930,"Group45");
  RegisterUnits(&DAT_1003c920,"Group48");
  RegisterUnits(&DAT_1003c900,"Group49");
  RegisterUnits(&DAT_1003c850,"Group50");
  RegisterUnits(&DAT_1003c928,"Group51");
  RegisterUnits(&DAT_1003c940,"Group52");
  RegisterUnits(&DAT_1003c910,"Group53");
  RegisterUnits(&DAT_1003c8f8,"Group55");
  RegisterUnits(&DAT_1003c8e8,"Group58");
  RegisterUnits(&DAT_1003c9d0,"Group59");
  RegisterUnits(&DAT_1003c918,"Group60");
  RegisterUnits(&DAT_1003c8f0,"Group61");
  RegisterUnits(&DAT_1003c908,"Group62");
  RegisterUnits(&DAT_1003c8d0,"Group63");
  RegisterUnits(&DAT_1003c8e0,"Group64");
  RegisterUnits(&DAT_1003c9c8,"Group65");
  RegisterUnits(&DAT_1003c9e0,"Group66");
  RegisterUnits(&DAT_1003c9a0,"Group67");
  RegisterUnits(&DAT_1003c9b8,"Group68");
  RegisterUnits(&DAT_1003c980,"Group69");
  RegisterUnits(&DAT_1003c8d8,"Group70");
  RegisterUnits(&DAT_1003c9c0,"Group71");
  RegisterUnits(&DAT_1003c9d8,"Group72");
  RegisterUnits(&DAT_1003c998,"Group73");
  RegisterUnits(&DAT_1003c9b0,"Group74");
  RegisterUnits(&DAT_1003c978,"Group75");
  RegisterUnits(&DAT_1003c990,"Group76");
  RegisterUnits(&DAT_1003c950,"Group77");
  RegisterUnits(&DAT_1003c9a8,"Group80");
  RegisterUnits(&DAT_1003c970,"Group81");
  RegisterUnits(&DAT_1003c988,"Group82");
  RegisterUnits(&DAT_1003c948,"Group83");
  RegisterUnits(&DAT_1003c960,"Group84");
  RegisterUnits(&DAT_1003c9f0,"Group85");
  RegisterUnits(&DAT_1003ca00,"Group86");
  RegisterUnits(&DAT_1003c9e8,"Group89");
  RegisterUnits(&DAT_1003c958,"Group90");
  RegisterFormation(&DAT_1003c538,"#LINE3");
  RegisterFormation(&DAT_1003ca08,"#ALONE");
  RegisterFormation(&DAT_1003c7d0,"#LINEMORB13");
  RegisterVar(&DAT_1003c740,0xc);
  RegisterVar(&DAT_1003c430,0xc);
  RegisterVar(&DAT_1003c440,0xc);
  RegisterVar(&DAT_1003c448,0xc);
  RegisterVar(&DAT_1003c458,0xc);
  RegisterUpgrade(&DAT_1003c790,"KUZ01UA");
  RegisterUpgrade(&DAT_1003c798,"KUZ02UA");
  RegisterUpgrade(&DAT_1003c7a0,"KUZ03UA");
  RegisterUpgrade(&DAT_1003c7a8,"KUZ05UA");
  RegisterUpgrade(&DAT_1003c7b0,"Kozacki_Strelec(UA)ATTACK");
  RegisterUpgrade(&DAT_1003c7b8,"Kozacki_Strelec(UA)ATTACK3");
  RegisterUpgrade(&DAT_1003c7c0,"Kozacki_Strelec(UA)ATTACK4");
  RegisterUpgrade(&DAT_1003c7c8,"Kozacki_Strelec(UA)ATTACK5");
  RegisterUpgrade(&DAT_1003c7d8,"Kozacki_Strelec(UA)ATTACK6");
  RegisterUpgrade(&DAT_1003c3f8,"Kozacki_Strelec(UA)ATTACK7");
  RegisterUpgrade(&DAT_1003c400,"Kozacki_Strelec(UA)SHIELD");
  RegisterUpgrade(&DAT_1003c408,"Kozacki_Strelec(UA)SHIELD3");
  RegisterUpgrade(&DAT_1003c410,"Kozacki_Strelec(UA)SHIELD4");
  RegisterUpgrade(&DAT_1003c418,"Kozacki_Strelec(UA)SHIELD5");
  RegisterUpgrade(&DAT_1003c420,"Kozacki_Strelec(UA)SHIELD6");
  RegisterUpgrade(&DAT_1003c428,"Kozacki_Strelec(UA)SHIELD7");
  SetPlayerName(1,"Nomads");
  SetPlayerName(6,"Ukraian");
  SetPlayerName(5,"Ukraian");
  SetPlayerName(7,"Poland");
  uStack_8 = 0x10002786;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *puVar9;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(100,0);
    ChangeFriends(0,0x41);
    ChangeFriends(6,0x41);
    ChangeFriends(0,1);
    ChangeFriends(1,2);
    ChangeFriends(7,0x83);
    SetResource(0,3,5000);
    SetResource(0,1,5000);
    SetResource(0,0,5000);
    SetResource(0,2,5000);
    SetResource(0,5,30000);
    SetResource(0,4,20000);
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,0,5000000);
    SetResource(1,2,5000000);
    SetResource(1,5,5000000);
    SetResource(1,4,5000000);
    SetResource(7,3,5000000);
    SetResource(7,1,5000000);
    SetResource(7,0,5000000);
    SetResource(7,2,5000000);
    SetResource(7,5,5000000);
    SetResource(7,4,5000000);
    SelectUnits(&DAT_1003c8d8,0);
    SetStandGround(6,1);
    DisableUpgrade(0,&DAT_1003c790);
    DisableUpgrade(0,&DAT_1003c798);
    DisableUpgrade(0,&DAT_1003c7a0);
    DisableUpgrade(0,&DAT_1003c7a8);
    DisableUpgrade(0,&DAT_1003c7b0);
    DisableUpgrade(0,&DAT_1003c7b8);
    DisableUpgrade(0,&DAT_1003c7c0);
    DisableUpgrade(0,&DAT_1003c7c8);
    DisableUpgrade(0,&DAT_1003c7d8);
    DisableUpgrade(0,&DAT_1003c3f8);
    DisableUpgrade(0,&DAT_1003c400);
    DisableUpgrade(0,&DAT_1003c408);
    DisableUpgrade(0,&DAT_1003c410);
    DisableUpgrade(0,&DAT_1003c418);
    DisableUpgrade(0,&DAT_1003c420);
    DisableUpgrade(0,&DAT_1003c428);
    DisableUpgrade(6,&DAT_1003c790);
    DisableUpgrade(6,&DAT_1003c798);
    DisableUpgrade(6,&DAT_1003c7a0);
    DisableUpgrade(6,&DAT_1003c7a8);
    DisableUpgrade(6,&DAT_1003c7b0);
    DisableUpgrade(6,&DAT_1003c7b8);
    DisableUpgrade(6,&DAT_1003c7c0);
    DisableUpgrade(6,&DAT_1003c7c8);
    DisableUpgrade(6,&DAT_1003c7d8);
    DisableUpgrade(6,&DAT_1003c3f8);
    DisableUpgrade(6,&DAT_1003c400);
    DisableUpgrade(6,&DAT_1003c408);
    DisableUpgrade(6,&DAT_1003c410);
    DisableUpgrade(6,&DAT_1003c418);
    DisableUpgrade(6,&DAT_1003c420);
    DisableUpgrade(6,&DAT_1003c428);
    EnableUnit(6,&DAT_1003c750,0);
    EnableUnit(6,&DAT_1003c3f0,0);
    EnableUnit(6,&DAT_1003c3e0,0);
    EnableUnit(6,&DAT_1003c3e8,0);
    EnableUnit(6,&DAT_1003ca28,0);
    EnableUnit(6,&DAT_1003ca38,0);
    EnableUnit(6,&DAT_1003ca18,0);
    EnableUnit(6,&DAT_1003ca20,0);
    EnableUnit(6,&DAT_1003ca48,0);
    EnableUnit(6,&DAT_1003ca50,0);
    EnableUnit(6,&DAT_1003ca40,0);
    EnableUnit(6,&DAT_1003ca30,0);
    EnableUnit(6,&DAT_1003ca10,0);
    RunTimer(0x11,100);
    SelectUnits1(6,&DAT_1003c9e8,0);
    SelOpenGates(6);
    EnableMission(0x41);
    EnableMission(0x42);
    EnableMission(0x44);
    EnableMission(0x45);
    DisableMission(0x43);
    DisableMission(0x4d);
    DisableMission(0x4e);
    DisableMission(0x4f);
    DisableMission(0x50);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x48);
    DisableMission(0x4b);
    DisableMission(0x4c);
    DisableMission(0x53);
    DisableMission(0x54);
    DisableMission(0x55);
    SelectUnits1(1,&DAT_1003c958,0);
    SetStandGround(1,1);
  }
  uVar1 = Trigg(0xdc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x11);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xdc,0);
      ShowPage("#PAGE42");
    }
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount0(&DAT_1003c6f8,0);
    if (0 < iVar8) {
      SetTrigg(99,0);
      SelectUnits(&DAT_1003c460,0);
      SelSendTo(6,&DAT_1003c700,0x5a,0);
      uVar2 = GetTopDst(&DAT_1003c5a0,&DAT_1003c5d0);
      SetTrigg(0x73,0);
      uVar2 = GetTopDst(&DAT_1003c5c8,&DAT_1003c5d0);
      SetTrigg(0x74,0);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount1(&DAT_1003c700,&DAT_1003c460);
    if (0 < iVar8) {
      SetTrigg(0x62,0);
      ShowPage("#PAGE1");
      SelectUnits(&DAT_1003c460,0);
      SelChangeNation(6,0);
    }
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount0(&DAT_1003c6f8,0);
    if (0 < iVar8) {
      SetTrigg(0x61,0);
      SelectUnits(&DAT_1003c468,0);
      SelAttackGroup(1,&DAT_1003c438);
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount0(&DAT_1003c738,0);
    if (0 < iVar8) {
      SetTrigg(0x5d,0);
      SelectUnits(&DAT_1003c468,0);
      SelSendAndKill(1,&DAT_1003c498,0xa6,0);
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount0(&DAT_1003c728,0);
    if (iVar8 < 1) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4d0,0);
      if (iVar8 < 1) goto LAB_10003a3f;
    }
    SetTrigg(0x5e,0);
    SelectUnits(&DAT_1003c450,0);
    SelectUnits(&DAT_1003c7e0,1);
    SetStandGround(1,1);
    ShowPage("#PAGE2");
  }
LAB_10003a3f:
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount0(&DAT_1003c708,0);
    if (0 < iVar8) {
      SetTrigg(0x60,0);
      SelectUnits(&DAT_1003c480,0);
      SelSendAndKill(1,&DAT_1003c4a0,0,0);
      SelectUnits(&DAT_1003c478,0);
      SelSendTo(1,&DAT_1003c710,0,0);
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount1(&DAT_1003c710,&DAT_1003c478);
    if (0 < iVar8) {
      SetTrigg(0x5f,0);
      ShowPage("#PAGE3");
      SelectUnits(&DAT_1003c478,0);
      SelSendTo(1,&DAT_1003c4a8,0,0);
      SelectUnits1(1,&DAT_1003c810,0);
      SelChangeNation(1,7);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount1(&DAT_1003c4a8,&DAT_1003c478);
    if (0 < iVar8) {
      SetTrigg(0x5a,0);
      ShowPage("#PAGE4");
      SelectUnits(&DAT_1003c478,0);
      SelSendTo(1,&DAT_1003c718,0,0);
    }
  }
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount1(&DAT_1003c718,&DAT_1003c478);
    if (0 < iVar8) {
      SetTrigg(0x5b,0);
    }
  }
  uVar1 = Trigg(0xe7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5b);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0xe7,0);
      SelectUnits(&DAT_1003c490,0);
      SelAttackGroup(1,&DAT_1003c438);
      SelectUnits(&DAT_1003c478,0);
      SelAttackGroup(1,&DAT_1003c438);
    }
  }
  uVar1 = Trigg(0x50);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1003c478);
    if (iVar8 == 0) {
      GetTotalAmount0(&DAT_1003c490);
      if (iVar8 == 0) {
        SetTrigg(0x50,0);
        SetTrigg(0x51,0);
      }
    }
  }
  uVar1 = Trigg(0xa6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c6a0,0);
      if (0 < iVar8) {
        SetTrigg(0xa7,0);
        SelectUnits(&DAT_1003c9b8,0);
        AttackEnemyInZone(&DAT_1003c9b8,&DAT_1003c6a0,0);
      }
    }
  }
  uVar1 = Trigg(0xa8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xa7);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount0(&DAT_1003c6a0,0);
        if (iVar8 == 0) {
          SetTrigg(0xa8,0);
          SelectUnits(&DAT_1003c9b8,0);
          SelSendTo(1,&DAT_1003c668,0xc4,0);
        }
      }
    }
  }
  uVar1 = Trigg(0xa9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount0(&DAT_1003c6a0,0);
        if (iVar8 < 1) {
          iVar8 = GetUnitsAmount0(&DAT_1003c690,0);
          if (iVar8 < 1) goto LAB_1000404a;
        }
        SetTrigg(0xa9,0);
        ShowPage("#PAGE32");
      }
    }
  }
LAB_1000404a:
  uVar1 = Trigg(0x57);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c520,0);
      if (iVar8 < 1) {
        iVar8 = GetUnitsAmount0(&DAT_1003c4b0,0);
        if (iVar8 < 1) goto LAB_10004141;
      }
      SetTrigg(0x57,0);
      SelectUnits(&DAT_1003c9e0,0);
      SelSendAndKill(1,&DAT_1003c508,0x5a,0);
      SelectUnits(&DAT_1003c980,0);
      SetStandGround(6,1);
    }
  }
LAB_10004141:
  uVar1 = Trigg(0x56);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c520,6);
      if (iVar8 == 0) {
        iVar8 = GetUnitsAmount1(&DAT_1003c520,&DAT_1003c9e0);
        if (0 < iVar8) {
          SetTrigg(0x56,0);
          SelectUnits(&DAT_1003c9e0,0);
          SelSendTo(1,&DAT_1003c4c8,0xa6,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x3b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x56);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount1(&DAT_1003c590,&DAT_1003c9e0);
        if (0 < iVar8) {
          SetTrigg(0x3b,0);
          SelectUnits(&DAT_1003c9c0,0);
          SelDie(6);
        }
      }
    }
  }
  uVar1 = Trigg(0x59);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4c0,0);
      if (0 < iVar8) {
        SetTrigg(0x59,0);
        ShowPage("#PAGE5");
        SelectUnits(&DAT_1003c908,0);
        SelOpenGates(6);
        SelectUnits(&DAT_1003c9b8,0);
        SelSendTo(1,&DAT_1003c4c0,0xa6,0);
        DisableMission(0x44);
        EnableMission(0x55);
      }
    }
  }
  uVar1 = Trigg(0x3f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount1(&DAT_1003c4c0,&DAT_1003c9b8);
      if (0 < iVar8) {
        SetTrigg(0x3f,0);
        SelectUnits(&DAT_1003c9b8,0);
        SelAttackGroup(1,&DAT_1003c438);
      }
    }
  }
  uVar1 = Trigg(0x58);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4f0,0);
      if (0 < iVar8) {
        SetTrigg(0x58,0);
        SelectUnits(&DAT_1003c908,0);
        SelChangeNation(6,0);
      }
    }
  }
  uVar1 = Trigg(0x53);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x59);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount1(&DAT_1003c4e0,&DAT_1003c9b8);
        if (0 < iVar8) {
          iVar8 = GetUnitsAmount0(&DAT_1003c4f0,0);
          if (0 < iVar8) {
            SetTrigg(0x53,0);
            ShowPage("#PAGE6");
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x55);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount1(&DAT_1003c4c8,&DAT_1003c9e0);
      if (0 < iVar8) {
        SetTrigg(0x55,0);
        SelectUnits(&DAT_1003c9e0,0);
        SelSendAndKill(1,&DAT_1003c4f0,0xb4,0);
      }
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4c0,0);
      if (0 < iVar8) {
        SetTrigg(0x2c,0);
        SelectUnits(&DAT_1003c8a0,0);
        SetStandGround(1,1);
      }
    }
  }
  uVar1 = Trigg(0x38);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4c0,0);
      if (0 < iVar8) {
        SetTrigg(0x38,0);
        SelectUnits(&DAT_1003c900,0);
        Patrol(6,&DAT_1003c510,0xb4);
      }
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4c0,0);
      if (0 < iVar8) {
        SetTrigg(0x15,0);
        SelectUnits(&DAT_1003c9c8,0);
        Patrol(6,&DAT_1003c5b0,0xb4);
      }
    }
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4c0,0);
      if (0 < iVar8) {
        SetTrigg(0x1c,0);
        SelectUnits(&DAT_1003c850,0);
        Patrol(6,&DAT_1003c5e0,0xb4);
      }
    }
  }
  uVar1 = Trigg(0x4b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c528,0);
      if (0 < iVar8) {
        SetTrigg(0x4b,0);
        ShowPage("#PAGE7");
        ShowPage("#PAGE36");
        SelectUnits(&DAT_1003c898,0);
        SelSendAndKill(1,&DAT_1003c568,0x79,0);
        SelectUnits(&DAT_1003c8e8,0);
        SelSendAndKill(1,&DAT_1003c550,0xa6,0);
        SetLightSpot(&DAT_1003c4e8,5,1);
        SelectUnits(&DAT_1003c800,0);
        SelSendTo(6,&DAT_1003c558,0x5a,0);
        SelectUnits(&DAT_1003c8d8,0);
        SelSendTo(6,&DAT_1003c598,0x87,0);
        EnableMission(0x46);
        EnableMission(0x43);
        RunTimer(5,5000);
      }
    }
  }
  uVar1 = Trigg(0x45);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4e8,1);
      if (iVar8 == 0) {
        GetTotalAmount0(&DAT_1003c910);
        iVar3 = GetUnitsAmount1(&DAT_1003c550,&DAT_1003c910);
        if (iVar3 < iVar8) {
          SelectUnits(&DAT_1003c910,0);
          SelSendTo(6,&DAT_1003c550,0x5a,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x44);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4e8,1);
      if (iVar8 == 0) {
        GetTotalAmount0(&DAT_1003c8f8);
        iVar3 = GetUnitsAmount1(&DAT_1003c568,&DAT_1003c8f8);
        if (iVar3 < iVar8) {
          SelectUnits(&DAT_1003c8f8,0);
          SelSendTo(6,&DAT_1003c568,0x5a,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x43);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_1003c910);
      if (iVar8 == 0) {
        SetTrigg(0x43,0);
        SetTrigg(0x45,0);
      }
    }
  }
  uVar1 = Trigg(0x42);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_1003c8f8);
      if (iVar8 == 0) {
        SetTrigg(0x42,0);
        SetTrigg(0x44,0);
      }
    }
  }
  uVar1 = Trigg(0x4a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c518,0);
      if (0 < iVar8) {
        SetTrigg(0x4a,0);
        SelectUnits(&DAT_1003c8b0,0);
        SelectUnits(&DAT_1003c878,1);
        SelSendAndKill(1,&DAT_1003c568,0x79,0);
      }
    }
  }
  uVar1 = Trigg(0x49);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4e8,0);
      if (0 < iVar8) {
        SetTrigg(0x49,0);
        SelectUnits(&DAT_1003c7f0,0);
        SelectUnits(&DAT_1003c8b8,1);
        SelSendAndKill(1,&DAT_1003c568,0x79,0);
        SelectUnits(&DAT_1003c9d0,1);
        SelSendAndKill(1,&DAT_1003c550,0x79,0);
      }
    }
  }
  uVar1 = Trigg(0x1e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount1(&DAT_1003c598,&DAT_1003c8d8);
      if (0 < iVar8) {
        SetTrigg(0x1e,0);
        SelectUnits(&DAT_1003c8d8,0);
        SetStandGround(6,1);
      }
    }
  }
  uVar1 = Trigg(0x46);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount1(&DAT_1003c598,&DAT_1003c8d8);
      if (0 < iVar8) {
        iVar8 = GetUnitsAmount0(&DAT_1003c4e8,0);
        if (0 < iVar8) {
          SetTrigg(0x46,0);
          ShowPage("#PAGE8");
        }
      }
    }
  }
  uVar1 = Trigg(0x48);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount0(&DAT_1003c588,0);
        if (iVar8 < 1) {
          iVar8 = GetUnitsAmount0(&DAT_1003c5c0,0);
          if (iVar8 < 1) goto LAB_10005165;
        }
        SetTrigg(0x48,0);
        ShowPage("#PAGE9");
      }
    }
  }
LAB_10005165:
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3a);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount0(&DAT_1003c560,0);
        if (0 < iVar8) {
          SetTrigg(0x2a,0);
          SetTrigg(0x28,0);
          ShowPage("#PAGE12");
        }
      }
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount0(&DAT_1003c560,0);
        if (iVar8 == 0) {
          SetTrigg(0x28,0);
          SetTrigg(0x2a,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x16);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0xd);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c560,0);
          if (0 < iVar8) {
            SetTrigg(0x29,0);
            SetTrigg(0x27,0);
            ShowPage("#PAGE9");
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x29);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount0(&DAT_1003c560,0);
        if (iVar8 == 0) {
          SetTrigg(0x27,0);
          SetTrigg(0x29,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x69);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3a);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount0(&DAT_1003c540,0);
        if (0 < iVar8) {
          SetTrigg(0x6a,0);
          SetTrigg(0x69,0);
          ShowPage("#PAGE12");
        }
      }
    }
  }
  uVar1 = Trigg(0x6a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x69);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount0(&DAT_1003c540,0);
        if (iVar8 == 0) {
          SetTrigg(0x6a,0);
          SetTrigg(0x69,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount0(&DAT_1003c4e8,1);
    if (iVar8 == 0) {
      iVar8 = GetUnitsAmount0(&DAT_1003c4e8,0);
      if (iVar8 < 1) {
        uVar1 = TimerDone(5);
        if ((uVar1 & 0xff) == 0) goto LAB_100056f3;
      }
      SetTrigg(0x47,0);
      SelectUnits(&DAT_1003c8c8,0);
      SelectUnits(&DAT_1003c890,1);
      SelSendAndKill(1,&DAT_1003c568,0x79,0);
      SelectUnits(&DAT_1003c928,0);
      SelectUnits(&DAT_1003c940,1);
      SelSendAndKill(1,&DAT_1003c550,0xa6,0);
      RunTimer(0x17,600);
    }
  }
LAB_100056f3:
  uVar1 = Trigg(0x3e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount1(&DAT_1003c4e8,&DAT_1003c890);
      if (0 < iVar8) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x3e,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x41);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3e);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x17);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0xd);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x79);
          if ((uVar1 & 0xff) != 0) {
            iVar8 = GetUnitsAmount1(&DAT_1003c4e8,&DAT_1003c8c8);
            if (iVar8 == 0) {
              iVar8 = GetUnitsAmount1(&DAT_1003c4e8,&DAT_1003c890);
              if (iVar8 == 0) {
                iVar8 = GetUnitsAmount1(&DAT_1003c4e8,&DAT_1003c928);
                if (iVar8 == 0) {
                  iVar8 = GetUnitsAmount1(&DAT_1003c4e8,&DAT_1003c940);
                  if (iVar8 == 0) {
                    SelectUnits(&DAT_1003c488,0);
                    SelAttackGroup(1,&DAT_1003c8f8);
                    SelectUnits(&DAT_1003c840,0);
                    SelAttackGroup(1,&DAT_1003c910);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        GetTotalAmount0(&DAT_1003c910);
        if (iVar8 == 0) {
          SelectUnits(&DAT_1003c840,0);
          SelAttackGroup(1,&DAT_1003c8f8);
        }
      }
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        GetTotalAmount0(&DAT_1003c8f8);
        if (iVar8 == 0) {
          SelectUnits(&DAT_1003c488,0);
          SelAttackGroup(1,&DAT_1003c910);
        }
      }
    }
  }
  uVar1 = Trigg(0x3a);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1003c8f8);
    if (iVar8 == 0) {
      GetTotalAmount0(&DAT_1003c910);
      if (iVar8 == 0) {
        SetTrigg(0x3a,0);
        SetTrigg(0x41,0);
        SetTrigg(0x2c,0);
        SetTrigg(0x2d,0);
        SelectUnits(&DAT_1003c488,0);
        SelSendTo(1,&DAT_1003c4d8,0,0);
        SelectUnits(&DAT_1003c840,0);
        SelSendTo(1,&DAT_1003c570,0xa6,0);
        ShowPage("#PAGE10");
        SelectUnits(&DAT_1003c8d8,0);
        SelSendTo(6,&DAT_1003c500,0xb4,0);
        SelectUnits(&DAT_1003c830,0);
        SelectUnits(&DAT_1003c838,1);
        SelSendAndKill(6,&DAT_1003c518,0xb4,0);
        SelectUnits(&DAT_1003c818,0);
        SelectUnits(&DAT_1003c828,1);
        SelSendTo(6,&DAT_1003c548,0xb4,0);
        SelectUnits(&DAT_1003c970,0);
        SelOpenGates(6);
      }
    }
  }
  uVar1 = Trigg(0x37);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x83);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0xd);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount1(&DAT_1003c4d8,&DAT_1003c488);
          if (0 < iVar8) {
            iVar8 = GetUnitsAmount1(&DAT_1003c570,&DAT_1003c840);
            if (0 < iVar8) {
              iVar8 = GetUnitsAmount0(&DAT_1003c580,0);
              if (0 < iVar8) {
                SetTrigg(0x37,0);
                SetTrigg(0x34,0);
                SetTrigg(0x35,0);
                SelectUnits(&DAT_1003c488,0);
                SelAttackGroup(1,&DAT_1003c438);
                ShowPage("#PAGE11");
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x35);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x34);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x83);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0xd);
          if ((uVar1 & 0xff) != 0) {
            iVar8 = GetUnitsAmount0(&DAT_1003c580,0);
            if (iVar8 == 0) {
              SetTrigg(0x37,0);
              SetTrigg(0x35,0);
              SelectUnits(&DAT_1003c488,0);
              SelSendTo(1,&DAT_1003c4d8,0,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x35);
          if ((uVar1 & 0xff) == 0) {
            GetTotalAmount0(&DAT_1003c488);
            iVar3 = GetUnitsAmount1(&DAT_1003c4d8,&DAT_1003c488);
            if (iVar8 == iVar3) {
              SetTrigg(0x37,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x31);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x3a);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount1(&DAT_1003c4d8,&DAT_1003c488);
          if (0 < iVar8) {
            iVar8 = GetUnitsAmount1(&DAT_1003c570,&DAT_1003c840);
            if (0 < iVar8) {
              iVar8 = GetUnitsAmount0(&DAT_1003c5b8,0);
              if (0 < iVar8) {
                SetTrigg(0x31,0);
                SetTrigg(0x2f,0);
                SetTrigg(0x30,0);
                SelectUnits(&DAT_1003c840,0);
                SelAttackGroup(1,&DAT_1003c438);
                ShowPage("#PAGE11");
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x30);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x3a);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x2f);
          if ((uVar1 & 0xff) == 0) {
            iVar8 = GetUnitsAmount0(&DAT_1003c5b8,0);
            if (iVar8 == 0) {
              SetTrigg(0x31,0);
              SetTrigg(0x30,0);
              SelectUnits(&DAT_1003c840,0);
              SelSendTo(1,&DAT_1003c570,0xa6,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x2e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x3a);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x30);
          if ((uVar1 & 0xff) == 0) {
            GetTotalAmount0(&DAT_1003c840);
            iVar3 = GetUnitsAmount1(&DAT_1003c570,&DAT_1003c840);
            if (iVar8 == iVar3) {
              SetTrigg(0x31,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xf0);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3a);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0xf0,0);
      SelectUnits(&DAT_1003c488,0);
      SelectUnits(&DAT_1003c840,1);
      SelectUnits(&DAT_1003c920,1);
      SelSendTo(1,&DAT_1003c5a8,0,0);
      SetTrigg(0x29,0);
      SetTrigg(0x27,0);
      RunTimer(0x14,0x5dc);
    }
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xf0);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c518,0);
          if (0 < iVar8) {
            SetTrigg(0x26,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x26);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c518,0);
          if (iVar8 == 0) {
            SetTrigg(0x22,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x22);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x16);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x79);
          if ((uVar1 & 0xff) != 0) {
            iVar8 = GetUnitsAmount0(&DAT_1003c518,0);
            if (0 < iVar8) {
              SetTrigg(0x27,0);
              SetTrigg(0x22,0);
              ShowPage("#PAGE9");
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount1(&DAT_1003c5a8,&DAT_1003c488);
        if (iVar8 < 1) {
          uVar1 = TimerDoneFirst(0x14);
          if ((uVar1 & 0xff) == 0) goto LAB_100067e8;
        }
        SetTrigg(0x25,0);
        ClearSelection(1);
        SelectUnits(&DAT_1003c9d8,0);
        SelDie(1);
        SetLightSpot(&DAT_1003c5a8,2,2);
      }
    }
  }
LAB_100067e8:
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xf0);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount1(&DAT_1003c500,&DAT_1003c8d8);
          if (0 < iVar8) {
            SetTrigg(0x24,0);
            SetLightSpot(&DAT_1003c518,4,3);
            SetLightSpot(&DAT_1003c548,4,4);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x14);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xf0);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0x23,0);
        SelectUnits(&DAT_1003c488,0);
        SelectUnits(&DAT_1003c840,1);
        SelectUnits(&DAT_1003c920,1);
        SelSendAndKill(1,&DAT_1003c518,0,0);
      }
    }
  }
  uVar1 = Trigg(6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x23);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount1(&DAT_1003c518,&DAT_1003c850);
          if (iVar8 != 0) {
            iVar8 = GetUnitsAmount1(&DAT_1003c518,&DAT_1003c830);
            if (iVar8 != 0) {
              iVar8 = GetUnitsAmount1(&DAT_1003c518,&DAT_1003c838);
              if (iVar8 != 0) goto LAB_10006b06;
            }
          }
          SelectUnits(&DAT_1003c830,0);
          SelectUnits(&DAT_1003c838,1);
          SelectUnits(&DAT_1003c850,1);
          SelSendAndKill(6,&DAT_1003c518,0xb4,0);
        }
      }
    }
  }
LAB_10006b06:
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        GetTotalAmount0(&DAT_1003c838);
        if (iVar8 == 0) {
          GetTotalAmount0(&DAT_1003c830);
          if (iVar8 == 0) {
            GetTotalAmount0(&DAT_1003c850);
            if (iVar8 == 0) {
              SetTrigg(0x1d,0);
              SetTrigg(6,0);
              SelectUnits(&DAT_1003c488,0);
              SelectUnits(&DAT_1003c840,1);
              SelectUnits(&DAT_1003c920,1);
              SelSendTo(1,&DAT_1003c518,0,0);
              RunTimer(0x15,3000);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xa1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x1d);
        if ((uVar1 & 0xff) == 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c6c0,0);
          if (0 < iVar8) {
            SetTrigg(0xa2,0);
            AttackEnemyInZone(&DAT_1003c488,&DAT_1003c6c0,0);
            AttackEnemyInZone(&DAT_1003c840,&DAT_1003c6c0,0);
            AttackEnemyInZone(&DAT_1003c920,&DAT_1003c6c0,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xa3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xa2);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c6c0,0);
          if (iVar8 == 0) {
            SetTrigg(0xa2,0);
            SelectUnits(&DAT_1003c488,0);
            SelectUnits(&DAT_1003c840,1);
            SelectUnits(&DAT_1003c920,1);
            SelSendTo(1,&DAT_1003c518,0,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x96);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x15);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x1a);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x96,0);
        SelectUnits(&DAT_1003c488,0);
        SelectUnits(&DAT_1003c840,1);
        SelectUnits(&DAT_1003c920,1);
        SelAttackGroup(1,&DAT_1003c8d8);
      }
    }
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x1d);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount1(&DAT_1003c518,&DAT_1003c488);
          if (0 < iVar8) {
            SetTrigg(0x1b,0);
            ShowPage("#PAGE16");
            SetLightSpot(&DAT_1003c5d0,5,6);
            SelectUnits(&DAT_1003c8d8,0);
            SelSendTo(6,&DAT_1003c5d0,0x5a,0);
            SelectUnits(&DAT_1003c8a0,0);
            SelSendTo(1,&DAT_1003c610,0,0);
            SelectUnits(&DAT_1003c978,0);
            SelSendAndKill(1,&DAT_1003c5f8,0xba,0);
            ClearLightSpot(1);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount1(&DAT_1003c5d0,&DAT_1003c8d8);
        if (0 < iVar8) {
          iVar8 = GetUnitsAmount0(&DAT_1003c5d0,0);
          if (0 < iVar8) {
            SetTrigg(0x1a,0);
            ShowPage("#PAGE17");
            ShowPage("#PAGE18");
            SelectUnits(&DAT_1003c930,0);
            SelectUnits(&DAT_1003c990,1);
            SelChangeNation(6,0);
            SelectUnits(&DAT_1003c8d8,0);
            SelectUnits(&DAT_1003c998,1);
            SelectUnits(&DAT_1003c9b0,1);
            SelSendTo(6,&DAT_1003c500,0xb4,0);
            SelectUnits(&DAT_1003c918,0);
            SelectUnits(&DAT_1003c8f0,1);
            SelectUnits(&DAT_1003c8e0,1);
            SelectUnits(&DAT_1003c8d0,1);
            SelectUnits(&DAT_1003c9c8,1);
            SelSendTo(6,&DAT_1003c500,0xb4,0);
            EnableUnit(0,&DAT_1003c750,0);
            EnableUnit(0,&DAT_1003ca38,0);
            EnableUnit(0,&DAT_1003ca18,0);
            EnableUnit(0,&DAT_1003ca20,0);
            EnableUnit(0,&DAT_1003ca48,0);
            EnableUnit(0,&DAT_1003ca50,0);
            EnableUnit(0,&DAT_1003ca40,0);
            EnableUnit(0,&DAT_1003ca30,0);
            EnableUnit(0,&DAT_1003ca10,0);
            RunTimer(0x16,3000);
            DisableMission(0x46);
            EnableMission(0x47);
            EnableMission(0x54);
            EnableMission(0x4d);
            EnableMission(0x48);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x9e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x79);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount1(&DAT_1003c500,&DAT_1003c998);
      if (0 < iVar8) {
        iVar8 = GetUnitsAmount1(&DAT_1003c500,&DAT_1003c9b0);
        if (0 < iVar8) {
          SetTrigg(0x9e,0);
          SelectUnits(&DAT_1003c970,0);
          SelectUnits(&DAT_1003c988,1);
          SelChangeNation(6,0);
        }
      }
    }
  }
  uVar1 = Trigg(0x9f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x79);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x9e);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0x9f,0);
        ClearSelection(1);
        SelectUnits(&DAT_1003c950,0);
        SelectUnits(&DAT_1003c9d8,1);
        SelDie(1);
        ClearSelection(6);
        SelectUnits(&DAT_1003c950,0);
        SelectUnits(&DAT_1003c9d8,1);
        SelDie(6);
      }
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x1a);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = Trigg(0x16);
          if ((uVar1 & 0xff) != 0) {
            iVar8 = GetUnitsAmount0(&DAT_1003c530,0);
            if (0 < iVar8) {
              SetTrigg(0x19,0);
              SetTrigg(0xaa,0);
              ShowPage("#PAGE9");
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xaa);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0xd);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c530,0);
          if (iVar8 == 0) {
            SetTrigg(0x19,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x16);
          if ((uVar1 & 0xff) != 0) {
            iVar8 = GetUnitsAmount0(&DAT_1003c4f8,0);
            if (0 < iVar8) {
              SetTrigg(0x13,0);
              SetTrigg(0xab,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xab);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c4f8,0);
          if (iVar8 == 0) {
            SetTrigg(0x13,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount1(&DAT_1003c500,&DAT_1003c8d8);
          if (0 < iVar8) {
            SetTrigg(3,0);
            DisableMission(0x43);
            AttackEnemyInZone(&DAT_1003c488,&DAT_1003c548,6);
            AttackEnemyInZone(&DAT_1003c840,&DAT_1003c548,6);
            AttackEnemyInZone(&DAT_1003c920,&DAT_1003c548,6);
          }
        }
      }
    }
  }
  uVar1 = Trigg(4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(3);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xd);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount1(&DAT_1003c548,&DAT_1003c818);
          if (iVar8 != 0) {
            iVar8 = GetUnitsAmount1(&DAT_1003c548,&DAT_1003c828);
            if (iVar8 != 0) {
              iVar8 = GetUnitsAmount1(&DAT_1003c548,&DAT_1003c918);
              if (iVar8 != 0) {
                iVar8 = GetUnitsAmount1(&DAT_1003c548,&DAT_1003c8f0);
                if (iVar8 != 0) {
                  iVar8 = GetUnitsAmount1(&DAT_1003c548,&DAT_1003c8d0);
                  if (iVar8 != 0) {
                    iVar8 = GetUnitsAmount1(&DAT_1003c548,&DAT_1003c8e0);
                    if (iVar8 != 0) goto LAB_10007d80;
                  }
                }
              }
            }
          }
          SelectUnits(&DAT_1003c818,0);
          SelectUnits(&DAT_1003c828,1);
          SelectUnits(&DAT_1003c918,1);
          SelectUnits(&DAT_1003c8f0,1);
          SelectUnits(&DAT_1003c8d0,1);
          SelectUnits(&DAT_1003c8e0,1);
          SelectUnits(&DAT_1003c8d8,1);
          SelSendAndKill(6,&DAT_1003c548,0xb4,0);
        }
      }
    }
  }
LAB_10007d80:
  uVar1 = Trigg(0x16);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount2(&DAT_1003c500,&DAT_1003c788,6);
        if (iVar8 == 0) {
          iVar8 = GetUnitsAmount2(&DAT_1003c548,&DAT_1003c788,6);
          if (iVar8 != 0) goto LAB_10007e27;
        }
        else {
LAB_10007e27:
          uVar1 = TimerDoneFirst(0x16);
          if ((uVar1 & 0xff) == 0) goto LAB_10007f2e;
        }
        SetTrigg(0x16,0);
        SetTrigg(0x17,0);
        SetTrigg(4,0);
        SelectUnits(&DAT_1003c840,0);
        SelectUnits(&DAT_1003c920,1);
        SelSendTo(1,&DAT_1003c530,0xc4,0);
        SelectUnits(&DAT_1003c488,0);
        SelSendTo(1,&DAT_1003c578,0xc4,0);
        RunTimer(0x18,1000);
      }
    }
  }
LAB_10007f2e:
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount1(&DAT_1003c530,&DAT_1003c840);
        if (iVar8 < 1) {
          uVar1 = TimerDoneFirst(0x18);
          if ((uVar1 & 0xff) == 0) goto LAB_1000816f;
        }
        SetTrigg(0x14,0);
        ClearSelection(1);
        SelectUnits(&DAT_1003c950,0);
        SelDie(1);
        SelectUnits(&DAT_1003c950,0);
        SelDie(6);
        ClearLightSpot(1);
        ClearLightSpot(2);
        ClearLightSpot(3);
        ClearLightSpot(4);
        ClearLightSpot(5);
        SetLightSpot(&DAT_1003c5f8,3,2);
        SetLightSpot(&DAT_1003c530,3,3);
        SetLightSpot(&DAT_1003c610,3,4);
        RunTimer(1,600);
        RunTimer(2,3000);
        RunTimer(3,6000);
        RunTimer(4,10000);
      }
    }
  }
LAB_1000816f:
  uVar1 = Trigg(0xe);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x14);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = TimerDone(1);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0xe,0);
            ShowPage("#PAGE22");
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xd2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(4);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x7a);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x7b);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x79);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(0xd2,0);
            SelectUnits1(1,&DAT_1003c920,0);
            SelectUnits1(1,&DAT_1003c868,1);
            SelAttackGroup(1,&DAT_1003c970);
            SelectUnits(&DAT_1003c880,0);
            SelSendTo(1,&DAT_1003c530,0x3c,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xdb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x7a);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x7b);
      if ((uVar1 & 0xff) != 0) goto LAB_10008448;
    }
    uVar1 = Trigg(0x79);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xdb,0);
      SelectUnits(&DAT_1003c880,0);
      SelSendTo(1,&DAT_1003c638,0xc4,0);
    }
  }
LAB_10008448:
  uVar1 = Trigg(0xd8);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount1(&DAT_1003c530,&DAT_1003c880);
    if (0 < iVar8) {
      uVar1 = Trigg(0x7a);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x7b);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x79);
          if ((uVar1 & 0xff) != 0) {
            AttackEnemyInZone(&DAT_1003c880,&DAT_1003c540,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xd3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x78);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_1003c970);
      if (iVar8 == 0) {
        iVar8 = GetUnitsAmount1(&DAT_1003c530,&DAT_1003c880);
        if (0 < iVar8) {
          SetTrigg(0xd3,0);
          SelectUnits(&DAT_1003c488,0);
          SelectUnits(&DAT_1003c8a0,1);
          SelectUnits(&DAT_1003c868,1);
          SelectUnits(&DAT_1003c840,1);
          SelectUnits(&DAT_1003c920,1);
          SelSendAndKill(1,&DAT_1003c5d0,0,0);
          SetTrigg(0xd4,0);
        }
      }
    }
  }
  uVar1 = Trigg(0xd4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd3);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x78);
      if ((uVar1 & 0xff) != 0) {
        iVar8 = GetUnitsAmount1(&DAT_1003c530,&DAT_1003c880);
        if (0 < iVar8) {
          uVar1 = Trigg(0xd4);
          SetTrigg(0xd4,0);
          SelSendAndKill(1,&DAT_1003c6a8,0,2);
          SelSendAndKill(1,&DAT_1003c6d0,0,2);
          SelSendAndKill(1,&DAT_1003c6c8,0,2);
          SelSendAndKill(1,&DAT_1003c6e8,0,2);
          SelSendAndKill(1,&DAT_1003c6e0,0,2);
          SelSendAndKill(1,&DAT_1003c5d0,0,2);
          RunTimer(0x19,5000);
        }
      }
    }
  }
  uVar1 = Trigg(0x78);
  if ((uVar1 & 0xff) == 0) {
    SetTrigg(0xd3,0);
    SetTrigg(0xd4,0);
  }
  uVar1 = Trigg(0xd);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x82);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = TimerDone(2);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0xd,0);
          SetTrigg(0x65,0);
          SelectUnits(&DAT_1003c8a0,0);
          SelectUnits(&DAT_1003c868,1);
          SelSendTo(1,&DAT_1003c5a0,0,0);
          ClearLightSpot(4);
          SetLightSpot(&DAT_1003c5a0,2,4);
          SelectUnits(&DAT_1003c488,0);
          SelectUnits(&DAT_1003c840,1);
          SelSendAndKill(1,&DAT_1003c5c8,0xc4,0);
          SetTrigg(0x29,0);
          SetTrigg(0x13,0);
          SetTrigg(0xab,0);
          SetTrigg(0x19,0);
          SetTrigg(0xaa,0);
          RunTimer(9,1000);
        }
      }
    }
  }
  uVar1 = Trigg(0xa0);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(9);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x7a);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0xa0,0);
          ShowPage("#PAGE33");
        }
      }
    }
  }
  uVar1 = Trigg(0xc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c5d8,0);
          if (0 < iVar8) {
            SetTrigg(0xb4,0);
            SetTrigg(0xb,0);
            AttackEnemyInZone(&DAT_1003c8a0,&DAT_1003c5d8,0);
            AttackEnemyInZone(&DAT_1003c868,&DAT_1003c5d8,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xb4);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c5d8,0);
          if (iVar8 == 0) {
            SetTrigg(0xb,0);
            SetTrigg(0xb4,0);
            SelectUnits(&DAT_1003c8a0,0);
            SelectUnits(&DAT_1003c868,1);
            SelSendTo(1,&DAT_1003c5a0,0,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x16);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c608,0);
          if (0 < iVar8) {
            SetTrigg(0x66,0);
            SetTrigg(0x68,0);
            SetTrigg(9,0);
            AttackEnemyInZone(&DAT_1003c488,&DAT_1003c608,0);
            AttackEnemyInZone(&DAT_1003c840,&DAT_1003c608,0);
            AttackEnemyInZone(&DAT_1003c920,&DAT_1003c608,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x68);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c608,0);
          if (iVar8 == 0) {
            SetTrigg(9,0);
            SelectUnits(&DAT_1003c488,0);
            SelectUnits(&DAT_1003c840,1);
            SelectUnits(&DAT_1003c920,1);
            SelSendTo(1,&DAT_1003c5c8,0xc4,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c5f0,0);
          if (0 < iVar8) {
            SetTrigg(7,0);
            SetTrigg(8,0);
            AttackEnemyInZone(&DAT_1003c978,&DAT_1003c5f0,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(8);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetUnitsAmount0(&DAT_1003c5f0,0);
          if (iVar8 == 0) {
            SetTrigg(7,0);
            SetTrigg(8,0);
            SelectUnits(&DAT_1003c978,0);
            SelSendTo(1,&DAT_1003c5f8,0xc4,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x67);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetTopDst(&DAT_1003c5c8,&DAT_1003c5d0);
          uVar1 = Trigg(0x74);
          if (iVar8 <= (int)(uVar1 & 0xff)) {
            SetTrigg(0x66,0);
            SetTrigg(0x67,0);
            SelectUnits(&DAT_1003c488,0);
            SelectUnits(&DAT_1003c840,1);
            SelectUnits(&DAT_1003c920,1);
            SelSendAndKill(1,&DAT_1003c5d0,0xc4,0);
            SetTrigg(0xd6,0);
            SetTrigg(0x70,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xd6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x67);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0xd6);
        SetTrigg(0xd6,0);
        SelSendAndKill(1,&DAT_1003c6a8,0,2);
        SelSendAndKill(1,&DAT_1003c6d0,0,2);
        SelSendAndKill(1,&DAT_1003c6c8,0,2);
        SelSendAndKill(1,&DAT_1003c6e8,0,2);
        SelSendAndKill(1,&DAT_1003c6e0,0,2);
        SelSendAndKill(1,&DAT_1003c5d0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x70);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x67);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetTopDst(&DAT_1003c5c8,&DAT_1003c5d0);
          uVar1 = Trigg(0x74);
          if ((int)(uVar1 & 0xff) < iVar8) {
            SetTrigg(0x67,0);
            SetTrigg(0x70,0);
            SetTrigg(0xd6,0);
            SelectUnits(&DAT_1003c488,0);
            SelectUnits(&DAT_1003c840,1);
            SelectUnits(&DAT_1003c920,1);
            SelSendAndKill(1,&DAT_1003c5c8,0xc4,0);
            SetTrigg(0x67,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x6e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetTopDst(&DAT_1003c5a0,&DAT_1003c5d0);
          uVar1 = Trigg(0x73);
          if (iVar8 <= (int)(uVar1 & 0xff)) {
            SetTrigg(0x66,0);
            SetTrigg(0x6e,0);
            SelectUnits(&DAT_1003c8a0,0);
            SelSendAndKill(1,&DAT_1003c5d0,0xc4,0);
            SetTrigg(0xd7,0);
            SetTrigg(0x71,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xd7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x6e);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x79);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0xd7);
        SetTrigg(0xd7,0);
        SelectUnits(&DAT_1003c8a0,0);
        SelSendAndKill(1,&DAT_1003c6a8,0,2);
        SelSendAndKill(1,&DAT_1003c6d0,0,2);
        SelSendAndKill(1,&DAT_1003c6c8,0,2);
        SelSendAndKill(1,&DAT_1003c6e8,0,2);
        SelSendAndKill(1,&DAT_1003c6e0,0,2);
        SelSendAndKill(1,&DAT_1003c5d0,0,2);
      }
    }
  }
  uVar1 = Trigg(0x71);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x66);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetTopDst(&DAT_1003c5a0,&DAT_1003c5d0);
          uVar1 = Trigg(0x73);
          if ((int)(uVar1 & 0xff) < iVar8) {
            SetTrigg(0x6e,0);
            SetTrigg(0x71,0);
            SetTrigg(0xd7,0);
            SelectUnits(&DAT_1003c8a0,0);
            SelSendAndKill(1,&DAT_1003c5a0,0,0);
            SetTrigg(0x6e,0);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x6f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(3);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          iVar8 = GetTopDst(&DAT_1003c5a0,&DAT_1003c5d0);
          uVar1 = Trigg(0x73);
          if ((int)(uVar1 & 0xff) < iVar8) {
            iVar8 = GetTopDst(&DAT_1003c5c8,&DAT_1003c5d0);
            uVar1 = Trigg(0x74);
            if ((int)(uVar1 & 0xff) < iVar8) {
              SetTrigg(0x66,0);
              SetTrigg(0x6f,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x78);
  if ((uVar1 & 0xff) == 0) {
    SetTrigg(0x67,0);
    SetTrigg(0xd6,0);
    SetTrigg(0x70,0);
    SetTrigg(0x6e,0);
    SetTrigg(0xd7,0);
    SetTrigg(0x71,0);
    SetTrigg(0x6f,0);
  }
  uVar1 = Trigg(0x78);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x82);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x79);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x7a);
          if ((uVar1 & 0xff) != 0) {
            uVar1 = Trigg(0x7b);
            if ((uVar1 & 0xff) != 0) goto LAB_10009f0c;
          }
          SetTrigg(0x78,0);
          SetTrigg(0xea,0);
          ShowPage("#PAGE23");
          SelectUnits(&DAT_1003c488,0);
          SelectUnits(&DAT_1003c978,1);
          SelectUnits(&DAT_1003c8a0,1);
          SelectUnits(&DAT_1003c868,1);
          SelectUnits(&DAT_1003c840,1);
          SelectUnits(&DAT_1003c920,1);
          SelSendTo(1,&DAT_1003c720,0,0);
          CreateObject0(&DAT_1003c968,&DAT_1003c538,&DAT_1003c768,7,&DAT_1003c528,0);
          CreateObject0(&DAT_1003c9f8,&DAT_1003ca08,&DAT_1003c770,7,&DAT_1003c528,0);
          SelectUnits(&DAT_1003c968,0);
          SelectUnits(&DAT_1003c9f8,1);
          SelSendTo(7,&DAT_1003c6f0,0xc4,0);
          SetTrigg(0x67,0);
          SetTrigg(0xd6,0);
          SetTrigg(0x70,0);
          SetTrigg(0x6e,0);
          SetTrigg(0xd7,0);
          SetTrigg(0x71,0);
          SetTrigg(0x6f,0);
          SetTrigg(0xd3,0);
          SetTrigg(0xd4,0);
        }
      }
    }
  }
LAB_10009f0c:
  uVar1 = Trigg(0xe9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xea);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount1(&DAT_1003c720,&DAT_1003c8a0);
      if (iVar8 < 1) {
        iVar8 = GetUnitsAmount1(&DAT_1003c720,&DAT_1003c868);
        if (iVar8 < 1) {
          iVar8 = GetUnitsAmount1(&DAT_1003c720,&DAT_1003c920);
          if (iVar8 < 1) goto LAB_1000a111;
        }
      }
      SetTrigg(0xe9,0);
      SelectUnits1(1,&DAT_1003c8a0,0);
      SelectUnits1(1,&DAT_1003c868,1);
      SelectUnits1(1,&DAT_1003c920,1);
      SelSendTo(1,&DAT_1003c5c0,0,0);
      SetTrigg(0x67,0);
      SetTrigg(0xd6,0);
      SetTrigg(0x70,0);
      SetTrigg(0x6e,0);
      SetTrigg(0xd7,0);
      SetTrigg(0x71,0);
      SetTrigg(0x6f,0);
      SetTrigg(0xd3,0);
      SetTrigg(0xd4,0);
    }
  }
LAB_1000a111:
  uVar1 = Trigg(0x7a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x82);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_1003c488);
      GetTotalAmount0(&DAT_1003c840);
      GetTotalAmount0(&DAT_1003c920);
      if (iVar8 + iVar3 + iVar4 == 0) {
        SetTrigg(0x7a,0);
      }
    }
  }
  uVar1 = Trigg(0x7b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x82);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_1003c488);
      GetTotalAmount0(&DAT_1003c978);
      GetTotalAmount0(&DAT_1003c8a0);
      GetTotalAmount0(&DAT_1003c868);
      GetTotalAmount0(&DAT_1003c840);
      GetTotalAmount0(&DAT_1003c920);
      if (iVar8 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 < 0x33) {
        SetTrigg(0x7b,0);
      }
    }
  }
  uVar1 = Trigg(0x79);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x82);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x78);
      if ((uVar1 & 0xff) == 0) {
        iVar8 = GetUnitsAmount1(&DAT_1003c6f0,&DAT_1003c9f8);
        if (0 < iVar8) {
          SetTrigg(0x79,0);
          ClearSelection(1);
          ClearSelection(6);
          ClearSelection(7);
          ShowPage("#PAGE24");
          ShowPage("#PAGE25");
          ShowPage("#PAGE26");
          ShowPage("#PAGE27");
          ChangeFriends(7,0xa0);
          ChangeFriends(5,0xa0);
          CreateObject0(&DAT_1003c970,&DAT_1003c7d0,&DAT_1003c788,5,&DAT_1003c600,0xc4);
          SetStartPoint(&DAT_1003c720);
          ClearLightSpot(1);
          ClearLightSpot(2);
          ClearLightSpot(3);
          ClearLightSpot(5);
          ClearLightSpot(6);
          ShowPage("#PAGE28");
          SetResource(0,3,1000);
          SetResource(0,1,1000);
          SetResource(0,0,1000);
          SetResource(0,2,1000);
          SetResource(0,5,2000);
          SetResource(0,4,2000);
          SelectUnitsType(&DAT_1003c788,0,0);
          SelErase(0);
          SelectUnits(&DAT_1003c968,0);
          SelectUnits(&DAT_1003c9f8,1);
          SelErase(7);
          SetLightSpot(&DAT_1003c600,2,1);
          RunTimer(7,100);
          ChangeFriends(0,1);
          ChangeFriends(1,2);
          ChangeFriends(7,0x80);
          SetTrigg(0xbf,0);
          SelectUnits(&DAT_1003c948,0);
          SelSendAndKill(5,&DAT_1003c698,0,0);
          RunTimer(0xb,75000);
          SetTrigg(0xd2,0);
          SetTrigg(0xd3,0);
          SetTrigg(0xd4,0);
          SetTrigg(0xd,0);
          SetTrigg(0xc,0);
          SetTrigg(0xb,0);
          SetTrigg(0x78,0);
          SetTrigg(0x67,0);
          SetTrigg(0xd6,0);
          SetTrigg(0x70,0);
          SetTrigg(0x6e,0);
          SetTrigg(0xd7,0);
          SetTrigg(0x71,0);
          SetTrigg(0x6f,0);
          SetTrigg(0xd3,0);
          SetTrigg(0xd4,0);
          DisableMission(0x4d);
          EnableMission(0x4e);
          DisableMission(0x48);
          EnableMission(0x4b);
          EnableMission(0x4f);
          EnableMission(0x4c);
          SelectUnits1(7,&DAT_1003c810,0);
          SelChangeNation(7,1);
        }
      }
    }
  }
  uVar1 = Trigg(0xbf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x79);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0xbf);
      SetTrigg(0xbf,0);
      SelectUnits(&DAT_1003c948,0);
      SelSendAndKill(5,&DAT_1003c688,0,2);
      SelSendAndKill(5,&DAT_1003c6b8,0,2);
      SelSendAndKill(5,&DAT_1003c698,0,2);
    }
  }
  uVar1 = Trigg(0x82);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x82,0);
      SetStartPoint(&DAT_1003c600);
      ShowPage("#PAGE29");
      ShowPage("#PAGE30");
      RunTimer(8,1000);
      SelectUnits(&DAT_1003c860,0);
      SelectUnits(&DAT_1003c848,1);
      SelectUnits(&DAT_1003c888,1);
      SelSendTo(1,&DAT_1003c720,0,0);
      SelectUnits(&DAT_1003c880,0);
      SelectUnits(&DAT_1003c858,1);
      SelSendTo(1,&DAT_1003c638,0xc4,0);
    }
  }
  uVar1 = Trigg(0x83);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x83,0);
      ShowPage("#PAGE31");
      SelectUnits1(1,&DAT_1003c488,0);
      SelectUnits1(1,&DAT_1003c840,1);
      SelectUnits1(1,&DAT_1003c920,1);
      SelectUnits1(1,&DAT_1003c880,1);
      SelectUnits1(1,&DAT_1003c858,1);
      SelectUnits1(1,&DAT_1003c888,1);
      SelectUnits1(1,&DAT_1003c848,1);
      SelectUnits1(1,&DAT_1003c860,1);
      SelectUnits1(1,&DAT_1003c938,1);
      SelectUnits1(1,&DAT_1003c8a0,1);
      SelectUnits1(1,&DAT_1003c868,1);
      SelectUnits1(1,&DAT_1003c978,1);
      SelectUnits1(1,&DAT_1003c820,1);
      SelectUnits1(1,&DAT_1003c808,1);
      SelectUnits1(1,&DAT_1003c8c0,1);
      SetStandGround(1,0);
      SetTrigg(0x67,0);
      SetTrigg(0xd6,0);
      SetTrigg(0x70,0);
      SetTrigg(0x6e,0);
      SetTrigg(0xd7,0);
      SetTrigg(0x71,0);
      SetTrigg(0x6f,0);
      SetTrigg(0xd3,0);
      SetTrigg(0xd4,0);
      ClearSelection(1);
    }
  }
  uVar1 = Trigg(0x84);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c620,&DAT_1003c788,0);
      if (0 < iVar8) {
        SetTrigg(0x85,0);
        SetTrigg(0x86,0);
        AttackEnemyInZone(&DAT_1003c938,&DAT_1003c620,0);
      }
    }
  }
  uVar1 = Trigg(0x86);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x85);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c620,&DAT_1003c788,0);
      if (iVar8 == 0) {
        SetTrigg(0x86,0);
        SelectUnits(&DAT_1003c938,0);
        SelSendTo(1,&DAT_1003c5e8,0xa6,0);
      }
    }
  }
  uVar1 = Trigg(0x87);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c618,&DAT_1003c788,0);
      if (0 < iVar8) {
        SetTrigg(0x88,0);
        SetTrigg(0x89,0);
        AttackEnemyInZone(&DAT_1003c938,&DAT_1003c618,0);
      }
    }
  }
  uVar1 = Trigg(0x89);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x88);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c620,&DAT_1003c788,0);
      if (iVar8 == 0) {
        SetTrigg(0x89,0);
        SelectUnits(&DAT_1003c938,0);
        SelSendTo(1,&DAT_1003c5e8,0xa6,0);
      }
    }
  }
  uVar1 = Trigg(0x8a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c5c0,&DAT_1003c788,0);
      if (0 < iVar8) {
        SetTrigg(0x8b,0);
        SetTrigg(0x8c,0);
        AttackEnemyInZone(&DAT_1003c888,&DAT_1003c5c0,0);
        AttackEnemyInZone(&DAT_1003c848,&DAT_1003c5c0,0);
        AttackEnemyInZone(&DAT_1003c860,&DAT_1003c5c0,0);
        AttackEnemyInZone(&DAT_1003c840,&DAT_1003c5c0,0);
        AttackEnemyInZone(&DAT_1003c920,&DAT_1003c5c0,0);
        AttackEnemyInZone(&DAT_1003c488,&DAT_1003c5c0,0);
      }
    }
  }
  uVar1 = Trigg(0x8c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x8b);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c5c0,&DAT_1003c788,0);
      if (iVar8 == 0) {
        SetTrigg(0x8c,0);
        SelectUnits(&DAT_1003c888,0);
        SelectUnits(&DAT_1003c848,1);
        SelectUnits(&DAT_1003c860,1);
        SelectUnits(&DAT_1003c840,1);
        SelectUnits(&DAT_1003c920,1);
        SelectUnits(&DAT_1003c488,1);
        SelSendTo(1,&DAT_1003c720,0,0);
      }
    }
  }
  uVar1 = Trigg(0x8d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(8);
    if ((uVar1 & 0xff) != 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c588,&DAT_1003c788,0);
      if (0 < iVar8) {
        SetTrigg(0x8e,0);
        SetTrigg(0x8f,0);
        SelectUnits(&DAT_1003c880,0);
        SelectUnits(&DAT_1003c858,1);
        AttackEnemyInZone(&DAT_1003c880,&DAT_1003c588,0);
        AttackEnemyInZone(&DAT_1003c858,&DAT_1003c588,0);
      }
    }
  }
  uVar1 = Trigg(0x8f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x8e);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c588,&DAT_1003c788,0);
      if (iVar8 == 0) {
        SetTrigg(0x8f,0);
        SelectUnits(&DAT_1003c880,0);
        SelectUnits(&DAT_1003c858,1);
        SelSendTo(1,&DAT_1003c638,0,0);
      }
    }
  }
  uVar1 = Trigg(0x90);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount2(&DAT_1003c658,&DAT_1003c788,0);
    if (0 < iVar8) {
      SetTrigg(0x91,0);
      SetTrigg(0x92,0);
      SelectUnits(&DAT_1003c820,0);
      AttackEnemyInZone(&DAT_1003c820,&DAT_1003c658,0);
    }
  }
  uVar1 = Trigg(0x92);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x91);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c658,&DAT_1003c788,0);
      if (iVar8 == 0) {
        SetTrigg(0x92,0);
        SelectUnits(&DAT_1003c820,0);
        SelSendTo(1,&DAT_1003c630,0,0);
      }
    }
  }
  uVar1 = Trigg(0x93);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount2(&DAT_1003c680,&DAT_1003c788,0);
    if (0 < iVar8) {
      SetTrigg(0x94,0);
      SetTrigg(0x95,0);
      SelectUnits(&DAT_1003c808,0);
      AttackEnemyInZone(&DAT_1003c808,&DAT_1003c680,0);
    }
  }
  uVar1 = Trigg(0x95);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount2(&DAT_1003c680,&DAT_1003c788,0);
    if (iVar8 == 0) {
      SetTrigg(0x95,0);
      SelectUnits(&DAT_1003c808,0);
      SelSendTo(1,&DAT_1003c648,0,0);
    }
  }
  uVar1 = Trigg(0x97);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x83);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c628,&DAT_1003c788,0);
      if (0 < iVar8) {
        SetTrigg(0x97,0);
        SetTrigg(0x98,0);
        SelectUnits(&DAT_1003c8c0,0);
        SelSendAndKill(1,&DAT_1003c628,0xa6,0);
      }
    }
  }
  uVar1 = Trigg(0x98);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x97);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c628,&DAT_1003c788,0);
      if (iVar8 == 0) {
        SetTrigg(0x98,0);
        SelectUnits(&DAT_1003c8c0,0);
        SelSendTo(1,&DAT_1003c670,0,0);
      }
    }
  }
  uVar1 = Trigg(0x99);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x83);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount2(&DAT_1003c650,&DAT_1003c788,0);
      if (iVar8 < 1) {
        iVar8 = GetUnitsAmount2(&DAT_1003c630,&DAT_1003c788,0);
        if (iVar8 < 1) goto LAB_1000bb7b;
      }
      CreateZoneNearUnit(&DAT_1003c430,&DAT_1003c650,&DAT_1003c788,0,400);
      AttackEnemyInZone(&DAT_1003c488,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c840,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c920,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c880,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c858,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c888,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c848,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c860,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c938,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c8a0,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c868,&DAT_1003c430,0);
      AttackEnemyInZone(&DAT_1003c978,&DAT_1003c430,0);
    }
  }
LAB_1000bb7b:
  uVar1 = Trigg(0x9a);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount2(&DAT_1003c648,&DAT_1003c788,0);
    if (0 < iVar8) {
      CreateZoneNearUnit(&DAT_1003c440,&DAT_1003c648,&DAT_1003c788,0,400);
      AttackEnemyInZone(&DAT_1003c820,&DAT_1003c440,0);
      AttackEnemyInZone(&DAT_1003c808,&DAT_1003c440,0);
      AttackEnemyInZone(&DAT_1003c8c0,&DAT_1003c440,0);
    }
  }
  uVar1 = Trigg(0x9d);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount2(&DAT_1003c670,&DAT_1003c788,0);
    if (0 < iVar8) {
      CreateZoneNearUnit(&DAT_1003c448,&DAT_1003c670,&DAT_1003c788,0,400);
      AttackEnemyInZone(&DAT_1003c820,&DAT_1003c448,0);
      AttackEnemyInZone(&DAT_1003c808,&DAT_1003c448,0);
      AttackEnemyInZone(&DAT_1003c8c0,&DAT_1003c448,0);
    }
  }
  uVar1 = Trigg(0xbe);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(0xbe,0);
    SelectUnits(&DAT_1003c960,0);
    SelSendTo(7,&DAT_1003c6b0,0xb4,0);
  }
  uVar1 = Trigg(0xc0);
  if ((uVar1 & 0xff) != 0) {
    SelectUnits(&DAT_1003c960,0);
    uVar1 = CheckLeaveAbility(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc0,0);
      SelectUnits(&DAT_1003c960,0);
      SelectUnits(&DAT_1003c9f0,1);
      SendUnitsToTransport(7);
      RunTimer(10,700);
    }
  }
  uVar1 = Trigg(0xc1);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc1,0);
      SelectUnits(&DAT_1003c960,0);
      SelSendTo(7,&DAT_1003c6d8,0,0);
    }
  }
  uVar1 = Trigg(0xc2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xb);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc2,0);
      ShowPage("#PAGE34");
    }
  }
  uVar1 = Trigg(0xc3);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xb);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0xc2);
      if ((uVar1 & 0xff) == 0) {
        SetTrigg(0xc3,0);
        SetLightSpot(&DAT_1003c6b0,1,10);
        SelectUnits(&DAT_1003c960,0);
        SelSendTo(7,&DAT_1003c6b0,0,0);
      }
    }
  }
  uVar1 = Trigg(0xc4);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc3);
    if ((uVar1 & 0xff) == 0) {
      SelectUnits(&DAT_1003c960,0);
      uVar1 = CheckLeaveAbility(7);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xc4,0);
        SelectUnits(&DAT_1003c960,0);
        PushAllUnitsAway(7);
        RunTimer(0xc,800);
        SelectUnits(&DAT_1003ca00,0);
        SelectUnits(&DAT_1003c9a8,1);
        SelOpenGates(7);
      }
    }
  }
  uVar1 = Trigg(0xc5);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xc);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc5,0);
      SelectUnits(&DAT_1003c9f0,0);
      SelSendAndKill(7,&DAT_1003c688,0,0);
    }
  }
  uVar1 = Trigg(0xc6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xc5);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount1(&DAT_1003c660,&DAT_1003c988);
      if (0 < iVar8) {
        SetTrigg(0xc6,0);
      }
    }
  }
  uVar1 = Trigg(199);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount1(&DAT_1003c688,&DAT_1003c9f0);
    if (0 < iVar8) {
      SetTrigg(199,0);
      SelectUnits(&DAT_1003c9f0,0);
      SelSendAndKill(7,&DAT_1003c660,0,0);
      SelectUnits(&DAT_1003c970,0);
      SelSendTo(5,&DAT_1003c660,0,0);
    }
  }
  uVar1 = Trigg(0xd9);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount1(&DAT_1003c660,&DAT_1003c970);
    if (0 < iVar8) {
      SetTrigg(0xd9,0);
      SelectUnits(&DAT_1003c9f0,0);
      SelSendAndKill(7,&DAT_1003c6b0,0,0);
      SelectUnits(&DAT_1003c970,0);
      SelSendTo(5,&DAT_1003c6b0,0,0);
    }
  }
  uVar1 = Trigg(200);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd9);
    if ((uVar1 & 0xff) == 0) {
      iVar8 = GetUnitsAmount1(&DAT_1003c6b0,&DAT_1003c9f0);
      if (0 < iVar8) {
        iVar8 = GetUnitsAmount1(&DAT_1003c6b0,&DAT_1003c970);
        if (0 < iVar8) {
          SelectUnits(&DAT_1003c960,0);
          uVar1 = CheckLeaveAbility(7);
          if ((uVar1 & 0xff) != 0) {
            SetTrigg(200,0);
            SelectUnits(&DAT_1003c970,0);
            SelChangeNation(5,7);
            SelectUnits(&DAT_1003c960,0);
            SelectUnits(&DAT_1003c970,1);
            SelectUnits(&DAT_1003c988,1);
            SendUnitsToTransport(7);
            RunTimer(0xe,700);
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xc9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xe);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xc9,0);
      SelectUnits(&DAT_1003c960,0);
      SelSendTo(7,&DAT_1003c6d8,0,0);
      RunTimer(0xf,200);
    }
  }
  uVar1 = Trigg(0xcb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(199);
    if ((uVar1 & 0xff) == 0) {
      GetTotalAmount0(&DAT_1003c9f0);
      if (iVar8 == 0) {
        SetTrigg(0xcb,0);
        SelectUnits(&DAT_1003c970,0);
        SelSendTo(5,&DAT_1003c600,0,0);
        RunTimer(0x10,100);
      }
    }
  }
  uVar1 = Trigg(0xcd);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount1(&DAT_1003c788,0);
    if (199 < iVar8) {
      SetTrigg(0xcd,0);
      SetTrigg(0xce,0);
      ShowPage("#PAGE41");
      EnableUnit(0,&DAT_1003c788,0);
    }
  }
  uVar1 = Trigg(0xce);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xcd);
    if ((uVar1 & 0xff) == 0) {
      GetTotalAmount1(&DAT_1003c788,0);
      if (iVar8 < 200) {
        SetTrigg(0xce,0);
        SetTrigg(0xcd,0);
        EnableUnit(0,&DAT_1003c788,1);
      }
    }
  }
  uVar1 = Trigg(0x9b);
  if ((uVar1 & 0xff) != 0) {
    iVar8 = GetUnitsAmount0(&DAT_1003c678,0);
    if (0 < iVar8) {
      iVar8 = GetUnitsAmount0(&DAT_1003c678,7);
      if (iVar8 < 5) {
        iVar8 = GetUnitsAmount0(&DAT_1003c678,5);
        if (0 < iVar8) {
          SetTrigg(0x9b,0);
          ShowPage("#PAGE37");
          SelectUnits(&DAT_1003c970,0);
          SelectUnits(&DAT_1003c9a8,1);
          SelChangeNation(5,0);
          DisableMission(0x4f);
          EnableMission(0x50);
          DisableMission(0x4c);
          EnableMission(0x53);
          ShowVictory();
        }
      }
    }
  }
  uVar1 = Trigg(0xda);
  if ((uVar1 & 0xff) != 0) {
    GetTotalAmount0(&DAT_1003c8d8);
    if (iVar8 == 0) {
      uVar1 = Trigg(0x1a);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xda,0);
        ShowPage("#PAGE35");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(0xcc);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xcc,0);
      ShowPage("#PAGE39");
      DisableMission(0x4f);
      EnableMission(0x50);
      DisableMission(0x4c);
      EnableMission(0x53);
      ShowVictory();
    }
  }
  uVar1 = Trigg(0xe6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0x19);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount0(&DAT_1003c488);
      if (iVar8 < 6) {
        GetTotalAmount0(&DAT_1003c8a0);
        if (iVar8 < 6) {
          GetTotalAmount0(&DAT_1003c868);
          if (iVar8 < 6) {
            GetTotalAmount0(&DAT_1003c840);
            if (iVar8 < 6) {
              GetTotalAmount0(&DAT_1003c920);
              if (iVar8 < 6) goto LAB_1000cbb1;
            }
          }
        }
      }
      SetTrigg(0xe6,0);
      ShowPage("#PAGE38");
      LooseGame();
    }
  }
LAB_1000cbb1:
  uVar1 = Trigg(0xca);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0xf);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xca,0);
      ShowPage("#PAGE39");
      LooseGame();
    }
  }
  uVar1 = Trigg(0xe8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x11);
    if ((uVar1 & 0xff) != 0) {
      GetTotalAmount1(&DAT_1003c788,0);
      if (iVar8 == 0) {
        GetTotalAmount1(&DAT_1003c750,0);
        if (iVar8 == 0) {
          GetTotalAmount1(&DAT_1003c758,0);
          if (iVar8 == 0) {
            SetTrigg(0xe8,0);
            ShowPage("#PAGE40");
            LooseGame();
          }
        }
      }
    }
  }
  uStack_8 = 0x1000ccf3;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

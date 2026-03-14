#include "game_api.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Global variables */
long long DAT_100383e0 = 0;
long long DAT_100383e8 = 0;
long long DAT_100383f0 = 0;
long long DAT_100383f8 = 0;
long long DAT_10038400 = 0;
long long DAT_10038408 = 0;
long long DAT_10038410 = 0;
long long DAT_10038418 = 0;
long long DAT_10038420 = 0;
long long DAT_10038428 = 0;
long long DAT_10038430 = 0;
long long DAT_10038438 = 0;
long long DAT_10038440 = 0;
long long DAT_10038448 = 0;
long long DAT_10038450 = 0;
long long DAT_10038458 = 0;
long long DAT_10038460 = 0;
long long DAT_10038468 = 0;
long long DAT_10038470 = 0;
long long DAT_10038478 = 0;
long long DAT_10038480 = 0;
long long DAT_10038488 = 0;
long long DAT_10038490 = 0;
long long DAT_10038498 = 0;
long long DAT_100384a0 = 0;
long long DAT_100384a8 = 0;
long long DAT_100384b0 = 0;
long long DAT_100384b8 = 0;
long long DAT_100384c0 = 0;
long long DAT_100384c8 = 0;
long long DAT_100384d0 = 0;
long long DAT_100384d8 = 0;
long long DAT_100384e0 = 0;
long long DAT_100384e8 = 0;
long long DAT_100384f0 = 0;
long long DAT_100384f8 = 0;
long long DAT_10038500 = 0;
long long DAT_10038508 = 0;
long long DAT_10038510 = 0;
long long DAT_10038518 = 0;
long long DAT_10038520 = 0;
long long DAT_10038528 = 0;
long long DAT_10038530 = 0;
long long DAT_10038538 = 0;
long long DAT_10038540 = 0;
long long DAT_10038548 = 0;
long long DAT_10038550 = 0;
long long DAT_10038558 = 0;
long long DAT_10038560 = 0;
long long DAT_10038568 = 0;
long long DAT_10038570 = 0;
long long DAT_10038578 = 0;
long long DAT_10038580 = 0;
long long DAT_10038588 = 0;
long long DAT_10038590 = 0;
long long DAT_10038598 = 0;
long long DAT_100385a0 = 0;
long long DAT_100385a8 = 0;
long long DAT_100385b0 = 0;
long long DAT_100385b8 = 0;
long long DAT_100385c0 = 0;
long long DAT_100385c8 = 0;
long long DAT_100385d0 = 0;
long long DAT_100385d8 = 0;
long long DAT_100385e0 = 0;
long long DAT_100385e8 = 0;
long long DAT_100385f0 = 0;
long long DAT_100385f8 = 0;
long long DAT_10038600 = 0;
long long DAT_10038608 = 0;
long long DAT_10038610 = 0;
long long DAT_10038618 = 0;
long long DAT_10038620 = 0;
long long DAT_10038628 = 0;
long long DAT_10038630 = 0;
long long DAT_10038638 = 0;
long long DAT_10038640 = 0;
long long DAT_10038648 = 0;
long long DAT_10038650 = 0;
long long DAT_10038658 = 0;
long long DAT_10038660 = 0;
long long DAT_10038668 = 0;
long long DAT_10038670 = 0;
long long DAT_10038678 = 0;
long long DAT_10038680 = 0;
long long DAT_10038688 = 0;
long long DAT_10038690 = 0;
long long DAT_10038698 = 0;
long long DAT_100386a0 = 0;
long long DAT_100386a8 = 0;
long long DAT_100386b0 = 0;
long long DAT_100386b8 = 0;
long long DAT_100386c0 = 0;
long long DAT_100386c8 = 0;
long long DAT_100386d0 = 0;
long long DAT_100386d8 = 0;
long long DAT_100386e0 = 0;
long long DAT_100386e8 = 0;
long long DAT_100386f0 = 0;
long long DAT_100386f8 = 0;
long long DAT_10038700 = 0;
long long DAT_10038708 = 0;
long long DAT_10038710 = 0;
long long DAT_10038718 = 0;
long long DAT_10038720 = 0;
long long DAT_10038728 = 0;
long long DAT_10038730 = 0;
long long DAT_10038738 = 0;
long long DAT_10038740 = 0;
long long DAT_10038748 = 0;
long long DAT_10038750 = 0;
long long DAT_10038758 = 0;
long long DAT_10038760 = 0;
long long DAT_10038768 = 0;
long long DAT_10038770 = 0;
long long DAT_10038778 = 0;
long long DAT_10038780 = 0;
long long DAT_10038788 = 0;
long long DAT_10038790 = 0;
long long DAT_10038798 = 0;
long long DAT_100387a0 = 0;
long long DAT_100387a8 = 0;
long long DAT_100387b0 = 0;
long long DAT_100387b8 = 0;
long long DAT_100387c0 = 0;
long long DAT_100387c8 = 0;
long long DAT_100387d0 = 0;
long long DAT_100387d8 = 0;
long long DAT_100387e0 = 0;
long long DAT_100387e8 = 0;
long long DAT_100387f0 = 0;
long long DAT_100387f8 = 0;
long long DAT_10038800 = 0;
long long DAT_10038808 = 0;
long long DAT_10038810 = 0;
long long DAT_10038818 = 0;
long long DAT_10038820 = 0;
long long DAT_10038828 = 0;
long long DAT_10038830 = 0;
long long DAT_10038838 = 0;
long long DAT_10038840 = 0;
long long DAT_10038848 = 0;
long long DAT_10038850 = 0;
long long DAT_10038858 = 0;
long long DAT_10038860 = 0;
long long DAT_10038868 = 0;
long long DAT_10038870 = 0;
long long DAT_10038878 = 0;
long long DAT_10038880 = 0;
long long DAT_10038888 = 0;
long long DAT_10038890 = 0;
long long DAT_10038898 = 0;
long long DAT_100388a0 = 0;
long long DAT_100388a8 = 0;
long long DAT_100388b0 = 0;
long long DAT_100388b8 = 0;
long long DAT_100388c0 = 0;
long long DAT_100388c8 = 0;
long long DAT_100388d0 = 0;
long long DAT_100388d8 = 0;
long long DAT_100388e0 = 0;
long long DAT_100388e8 = 0;
long long DAT_100388f0 = 0;
long long DAT_100388f8 = 0;
long long DAT_10038900 = 0;
long long DAT_10038908 = 0;
long long DAT_10038910 = 0;
long long DAT_10038918 = 0;
long long DAT_10038920 = 0;
long long DAT_10038928 = 0;
long long DAT_10038930 = 0;
long long DAT_10038938 = 0;
long long DAT_10038940 = 0;
long long DAT_10038948 = 0;
long long DAT_10038950 = 0;
long long DAT_10038958 = 0;
long long DAT_10038960 = 0;
long long DAT_10038968 = 0;
long long DAT_10038970 = 0;
long long DAT_10038978 = 0;
long long DAT_10038980 = 0;
long long DAT_10038988 = 0;
long long DAT_10038990 = 0;
long long DAT_10038998 = 0;
long long DAT_100389a0 = 0;
long long DAT_100389a8 = 0;
long long DAT_100389b0 = 0;
long long DAT_100389b8 = 0;
long long DAT_100389c0 = 0;
long long DAT_100389c8 = 0;
long long DAT_100389d0 = 0;
long long DAT_100389d8 = 0;
long long DAT_100389e0 = 0;
long long DAT_100389e8 = 0;
long long DAT_100389f0 = 0;
long long DAT_10038a00 = 0;
long long DAT_10038a08 = 0;
long long DAT_10038a10 = 0;
long long DAT_10038a20 = 0;
long long DAT_10038a28 = 0;
long long DAT_10038a30 = 0;
long long DAT_10038a38 = 0;
long long DAT_10038a40 = 0;
long long DAT_10038a48 = 0;
long long DAT_10038a50 = 0;
long long DAT_10038a58 = 0;
long long DAT_10038a60 = 0;
long long DAT_10038a68 = 0;
long long DAT_10038a70 = 0;
long long DAT_10038a78 = 0;
long long DAT_10038a80 = 0;
long long DAT_10038a88 = 0;
long long DAT_10038a90 = 0;
long long DAT_10038a98 = 0;
long long DAT_10038aa0 = 0;
long long DAT_10038aa8 = 0;
long long DAT_10038ab0 = 0;
long long DAT_10038ab8 = 0;
long long DAT_10038ac0 = 0;
long long DAT_10038ac8 = 0;
long long DAT_10038ad0 = 0;
long long DAT_10038ad8 = 0;
long long DAT_10038ae0 = 0;
long long DAT_10038ae8 = 0;
long long DAT_10038af0 = 0;
long long DAT_10038af8 = 0;
long long DAT_10038b00 = 0;
long long DAT_10038b08 = 0;
long long DAT_10038b10 = 0;
long long DAT_10038b18 = 0;
long long DAT_10038b20 = 0;
long long DAT_10038b28 = 0;
long long DAT_10038b30 = 0;
long long DAT_10038b38 = 0;
long long DAT_10038b40 = 0;
long long DAT_10038b48 = 0;
long long DAT_10038b50 = 0;
long long DAT_10038b58 = 0;
long long DAT_10038b60 = 0;
long long DAT_10038b68 = 0;
long long DAT_10038b70 = 0;
long long DAT_10038b78 = 0;
long long DAT_10038b80 = 0;
long long DAT_10038b88 = 0;
long long DAT_10038b90 = 0;
long long DAT_10038b98 = 0;
long long DAT_10038ba0 = 0;
long long DAT_10038ba8 = 0;
long long DAT_10038bb0 = 0;
long long DAT_10038bb8 = 0;
long long DAT_10038bc0 = 0;
long long DAT_10038bc8 = 0;
long long DAT_10038bd0 = 0;
long long DAT_10038bd8 = 0;
long long DAT_10038be0 = 0;
long long DAT_10038be8 = 0;
long long DAT_10038bf0 = 0;
long long DAT_10038bf8 = 0;
long long DAT_10038c00 = 0;
long long DAT_10038c08 = 0;
long long DAT_10038c10 = 0;
long long DAT_10038c18 = 0;

/* Forward declarations */
void FUN_1000bb80(int param_1);
void FUN_1000bbd0(int param_1,char param_2);


void __cdecl FUN_1000bb80(int param_1)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount0(param_1);
  uStack_8 = 0x1000bbbb;
  return;
}





void __cdecl FUN_1000bbd0(int param_1,char param_2)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
GetTotalAmount1(param_1,(int)param_2);
  uStack_8 = 0x1000bc0f;
  return;
}





void OnInit(void)

{
  int iVar1;
  int *puVar2;
  int local_44 [15];
  int uStack_8;
RegisterZone(&DAT_10038848,"Zone1");
  RegisterZone(&DAT_10038850,"Zone2");
  RegisterZone(&DAT_10038858,"Zone3");
  RegisterZone(&DAT_10038860,"Zone4");
  RegisterZone(&DAT_10038868,"Zone5");
  RegisterZone(&DAT_10038870,"Zone6");
  RegisterZone(&DAT_10038878,"Zone7");
  RegisterZone(&DAT_10038880,"Zone8");
  RegisterZone(&DAT_10038888,"Zone9");
  RegisterZone(&DAT_10038570,"Zone10");
  RegisterZone(&DAT_10038568,"Zone11");
  RegisterZone(&DAT_10038580,"Zone12");
  RegisterZone(&DAT_10038578,"Zone13");
  RegisterZone(&DAT_100385a0,"Zone14");
  RegisterZone(&DAT_10038590,"Zone15");
  RegisterZone(&DAT_100385c0,"Zone16");
  RegisterZone(&DAT_100385b0,"Zone17");
  RegisterZone(&DAT_100385f8,"Zone18");
  RegisterZone(&DAT_100385d8,"Zone19");
  RegisterZone(&DAT_10038598,"Zone20");
  RegisterZone(&DAT_10038588,"Zone21");
  RegisterZone(&DAT_100385b8,"Zone22");
  RegisterZone(&DAT_100385a8,"Zone23");
  RegisterZone(&DAT_100385f0,"Zone24");
  RegisterZone(&DAT_100385d0,"Zone25");
  RegisterZone(&DAT_10038628,"Zone26");
  RegisterZone(&DAT_10038610,"Zone27");
  RegisterZone(&DAT_10038658,"Zone28");
  RegisterZone(&DAT_10038640,"Zone29");
  RegisterZone(&DAT_100385e8,"Zone30");
  RegisterZone(&DAT_100385c8,"Zone31");
  RegisterZone(&DAT_10038620,"Zone32");
  RegisterZone(&DAT_10038608,"Zone33");
  RegisterZone(&DAT_10038650,"Zone34");
  RegisterZone(&DAT_10038638,"Zone35");
  RegisterZone(&DAT_10038678,"Zone36");
  RegisterZone(&DAT_10038668,"Zone37");
  RegisterZone(&DAT_100386a0,"Zone38");
  RegisterZone(&DAT_10038690,"Zone39");
  RegisterZone(&DAT_10038648,"Zone40");
  RegisterZone(&DAT_10038630,"Zone41");
  RegisterZone(&DAT_10038670,"Zone42");
  RegisterZone(&DAT_10038660,"Zone43");
  RegisterZone(&DAT_10038688,"Zone45");
  RegisterZone(&DAT_100386c0,"Zone46");
  RegisterZone(&DAT_100386b0,"Zone47");
  RegisterZone(&DAT_100386f0,"Zone48");
  RegisterZone(&DAT_100386d8,"Zone49");
  RegisterZone(&DAT_10038698,"Zone50");
  RegisterZone(&DAT_10038680,"Zone51");
  RegisterZone(&DAT_100386b8,"Zone52");
  RegisterZone(&DAT_100386a8,"Zone53");
  RegisterZone(&DAT_100386e8,"Zone54");
  RegisterZone(&DAT_100386d0,"Zone55");
  RegisterZone(&DAT_10038710,"Zone56");
  RegisterZone(&DAT_10038700,"Zone57");
  RegisterZone(&DAT_10038738,"Zone58");
  RegisterZone(&DAT_10038728,"Zone59");
  RegisterZone(&DAT_100386e0,"Zone60");
  RegisterZone(&DAT_100386c8,"Zone61");
  RegisterZone(&DAT_10038708,"Zone62");
  RegisterZone(&DAT_100386f8,"Zone63");
  RegisterZone(&DAT_10038730,"Zone64");
  RegisterZone(&DAT_10038720,"Zone65");
  RegisterZone(&DAT_10038758,"Zone66");
  RegisterZone(&DAT_10038748,"Zone67");
  RegisterZone(&DAT_10038780,"Zone68");
  RegisterZone(&DAT_10038770,"Zone69");
  RegisterZone(&DAT_10038718,"Zone70");
  RegisterZone(&DAT_10038750,"Zone71");
  RegisterZone(&DAT_10038740,"Zone72");
  RegisterZone(&DAT_10038778,"Zone73");
  RegisterZone(&DAT_10038768,"Zone74");
  RegisterZone(&DAT_100387a0,"Zone75");
  RegisterZone(&DAT_10038790,"Zone76");
  RegisterZone(&DAT_100387c8,"Zone77");
  RegisterZone(&DAT_100387b8,"Zone78");
  RegisterZone(&DAT_100387f0,"Zone79");
  RegisterZone(&DAT_10038760,"Zone80");
  RegisterZone(&DAT_10038798,"Zone81");
  RegisterZone(&DAT_10038788,"Zone82");
  RegisterZone(&DAT_100387c0,"Zone83");
  RegisterZone(&DAT_100387b0,"Zone84");
  RegisterZone(&DAT_100387e8,"Zone85");
  RegisterZone(&DAT_100387d8,"Zone86");
  RegisterZone(&DAT_10038810,"Zone87");
  RegisterZone(&DAT_10038800,"Zone88");
  RegisterZone(&DAT_10038828,"Zone89");
  RegisterZone(&DAT_100387a8,"Zone90");
  RegisterZone(&DAT_100387e0,"Zone91");
  RegisterZone(&DAT_100387d0,"Zone92");
  RegisterZone(&DAT_10038808,"Zone93");
  RegisterZone(&DAT_100387f8,"Zone94");
  RegisterZone(&DAT_10038820,"Zone95");
  RegisterZone(&DAT_10038818,"Zone96");
  RegisterZone(&DAT_10038838,"Zone97");
  RegisterZone(&DAT_10038830,"Zone98");
  RegisterZone(&DAT_10038840,"Zone99");
  RegisterZone(&DAT_100389c0,"Zone100");
  RegisterZone(&DAT_100389b0,"Zone101");
  RegisterZone(&DAT_10038998,"Zone102");
  RegisterZone(&DAT_10038988,"Zone103");
  RegisterZone(&DAT_10038970,"Zone104");
  RegisterZone(&DAT_10038958,"Zone105");
  RegisterZone(&DAT_10038938,"Zone106");
  RegisterZone(&DAT_10038920,"Zone107");
  RegisterZone(&DAT_10038a70,"Zone108");
  RegisterZone(&DAT_10038a50,"Zone109");
  RegisterUnits(&DAT_10038520,"Group1");
  RegisterUnits(&DAT_10038530,"Group2");
  RegisterUnits(&DAT_10038528,"Group3");
  RegisterUnits(&DAT_10038540,"Group4");
  RegisterUnits(&DAT_10038538,"Group5");
  RegisterUnits(&DAT_10038550,"Group6");
  RegisterUnits(&DAT_10038548,"Group7");
  RegisterUnits(&DAT_10038560,"Group8");
  RegisterUnits(&DAT_10038558,"Group9");
  RegisterUnits(&DAT_10038918,"Group10");
  RegisterUnits(&DAT_100389b8,"Group11");
  RegisterUnits(&DAT_100389c8,"Group12");
  RegisterUnits(&DAT_10038990,"Group13");
  RegisterUnits(&DAT_100389a8,"Group14");
  RegisterUnits(&DAT_10038968,"Group15");
  RegisterUnits(&DAT_10038980,"Group16");
  RegisterUnits(&DAT_10038930,"Group17");
  RegisterUnits(&DAT_10038950,"Group18");
  RegisterUnits(&DAT_10038a68,"Group19");
  RegisterUnits(&DAT_100389a0,"Group20");
  RegisterUnits(&DAT_10038960,"Group21");
  RegisterUnits(&DAT_10038978,"Group22");
  RegisterUnits(&DAT_10038928,"Group23");
  RegisterUnits(&DAT_10038948,"Group24");
  RegisterUnits(&DAT_10038a60,"Group25");
  RegisterUnits(&DAT_10038a80,"Group26");
  RegisterUnits(&DAT_10038a30,"Group27");
  RegisterUnits(&DAT_10038a48,"Group28");
  RegisterUnits(&DAT_10038a10,"Group29");
  RegisterUnits(&DAT_10038940,"Group30");
  RegisterUnits(&DAT_10038a58,"Group31");
  RegisterUnits(&DAT_10038a78,"Group32");
  RegisterUnits(&DAT_10038a28,"Group33");
  RegisterUnits(&DAT_10038a40,"Group34");
  RegisterUnits(&DAT_10038a08,"Group35");
  RegisterUnits(&DAT_10038a20,"Group36");
  RegisterUnits(&DAT_100389d8,"Group37");
  RegisterUnits(&DAT_100389f0,"Group38");
  RegisterUnits(&DAT_10038b00,"Group39");
  RegisterUnits(&DAT_10038a38,"Group40");
  RegisterUnits(&DAT_10038a00,"Group41");
  RegisterUnits(&DAT_100389d0,"Group43");
  RegisterUnits(&DAT_100389e8,"Group44");
  RegisterUnits(&DAT_10038af8,"Group45");
  RegisterUnits(&DAT_10038b10,"Group46");
  RegisterUnits(&DAT_10038ad8,"Group47");
  RegisterUnits(&DAT_10038ae8,"Group48");
  RegisterUnits(&DAT_10038ac0,"Group49");
  RegisterUnits(&DAT_100389e0,"Group50");
  RegisterUnits(&DAT_10038af0,"Group51");
  RegisterUnits(&DAT_10038b08,"Group52");
  RegisterUnits(&DAT_10038ab8,"Group55");
  RegisterUnits(&DAT_10038ad0,"Group56");
  RegisterUnits(&DAT_10038a90,"Group57");
  RegisterUnits(&DAT_10038aa8,"Group58");
  RegisterUnits(&DAT_10038ba0,"Group59");
  RegisterUnits(&DAT_10038ae0,"Group60");
  RegisterUnits(&DAT_10038ab0,"Group61");
  RegisterUnits(&DAT_10038ac8,"Group62");
  RegisterUnits(&DAT_10038a88,"Group63");
  RegisterUnits(&DAT_10038aa0,"Group64");
  RegisterUnits(&DAT_10038b98,"Group65");
  RegisterUnits(&DAT_10038bb0,"Group66");
  RegisterUnits(&DAT_10038b70,"Group67");
  RegisterUnits(&DAT_10038b88,"Group68");
  RegisterUnits(&DAT_10038b50,"Group69");
  RegisterUnits(&DAT_10038a98,"Group70");
  RegisterUnits(&DAT_10038b90,"Group71");
  RegisterUnits(&DAT_10038ba8,"Group72");
  RegisterUnits(&DAT_10038b68,"Group73");
  RegisterUnits(&DAT_10038b80,"Group74");
  RegisterUnits(&DAT_10038b48,"Group75");
  RegisterUnits(&DAT_10038b60,"Group76");
  RegisterUnits(&DAT_10038b20,"Group77");
  RegisterUnits(&DAT_10038b38,"Group78");
  RegisterUnits(&DAT_10038c08,"Group79");
  RegisterUnits(&DAT_10038b78,"Group80");
  RegisterUnits(&DAT_10038b40,"Group81");
  RegisterUnits(&DAT_10038b58,"Group82");
  RegisterUnits(&DAT_10038b18,"Group83");
  RegisterUnits(&DAT_10038b30,"Group84");
  RegisterUnits(&DAT_10038c00,"Group85");
  RegisterUnits(&DAT_10038c18,"Group86");
  RegisterUnits(&DAT_10038be0,"Group87");
  RegisterUnits(&DAT_10038bf0,"Group88");
  RegisterUnits(&DAT_10038bc8,"Group89");
  RegisterUnits(&DAT_10038b28,"Group90");
  RegisterUnits(&DAT_10038bf8,"Group91");
  RegisterUnits(&DAT_10038c10,"Group92");
  RegisterUnits(&DAT_10038bd8,"Group93");
  RegisterUnits(&DAT_10038be8,"Group94");
  RegisterUnits(&DAT_10038bc0,"Group95");
  RegisterUnits(&DAT_10038bd0,"Group96");
  RegisterUnits(&DAT_10038bb8,"Group97");
  RegisterUnits(&DAT_10038498,"Group121");
  RegisterUnits(&DAT_10038490,"Group122");
  RegisterUnits(&DAT_100384c8,"Group123");
  RegisterUnits(&DAT_100384c0,"Group124");
  RegisterUnits(&DAT_100384b8,"Group125");
  RegisterUnitType(&DAT_100388b8,"Poland_pikiner(PL)");
  RegisterUnitType(&DAT_100388c0,"Pushka(PL)");
  RegisterUnitType(&DAT_100388c8,"Mushketer_polsha(PL)");
  RegisterUnitType(&DAT_10038898,"Barabanshik_1(RU)");
  RegisterUnitType(&DAT_100388a0,"GRUZ_Z(UN)");
  RegisterUnitType(&DAT_100388a8,"Lodka(UA)");
  RegisterUnitType(&DAT_100388b0,"PERES_KOR(UA)");
  RegisterUnitType(&DAT_10038890,"GALERA(UA)");
  RegisterFormation(&DAT_100385e0,"#LINE3PUS");
  RegisterFormation(&DAT_10038600,"#LINE3");
  RegisterFormation(&DAT_10038618,"#LINEMORB10");
  RegisterVar(&DAT_100384e8,0xc);
  RegisterVar(&DAT_100384e0,0xc);
  RegisterVar(&DAT_100384d8,0xc);
  RegisterVar(&DAT_100384d0,0xc);
  RegisterVar(&DAT_10038518,0xc);
  RegisterVar(&DAT_10038510,0xc);
  RegisterVar(&DAT_10038500,0xc);
  RegisterVar(&DAT_100384f0,0xc);
  RegisterVar(&DAT_100384b0,0xc);
  RegisterVar(&DAT_100384a8,0xc);
  RegisterVar(&DAT_10038508,0xc);
  RegisterVar(&DAT_100384f8,0xc);
  RegisterVar(&DAT_100384a0,0xc);
  RegisterUpgrade(&DAT_100388d0,"AKA01UA");
  RegisterUpgrade(&DAT_100388d8,"AKA02UA");
  RegisterUpgrade(&DAT_100388e0,"AKA03UA");
  RegisterUpgrade(&DAT_100388e8,"AKA04UA");
  RegisterUpgrade(&DAT_100388f0,"AKA05UA");
  RegisterUpgrade(&DAT_100388f8,"AKA06UA");
  RegisterUpgrade(&DAT_10038900,"AKA07UA");
  RegisterUpgrade(&DAT_10038908,"AKA08UA");
  RegisterUpgrade(&DAT_10038910,"AKA09UA");
  RegisterUpgrade(&DAT_100383e0,"AKA10UA");
  RegisterUpgrade(&DAT_100383e8,"AKA12UA");
  RegisterUpgrade(&DAT_100383f0,"AKA13UA");
  RegisterUpgrade(&DAT_100383f8,"AKA14UA");
  RegisterUpgrade(&DAT_10038400,"AKA15UA");
  RegisterUpgrade(&DAT_10038410,"AKA16UA");
  RegisterUpgrade(&DAT_10038420,"AKA17UA");
  RegisterUpgrade(&DAT_10038430,"AKA18UA");
  RegisterUpgrade(&DAT_10038408,"AKA21UA");
  RegisterUpgrade(&DAT_10038418,"AKA22UA");
  RegisterUpgrade(&DAT_10038428,"AKA23UA");
  RegisterUpgrade(&DAT_10038440,"AKA24UA");
  RegisterUpgrade(&DAT_10038450,"AKA25UA");
  RegisterUpgrade(&DAT_10038458,"AKA26UA");
  RegisterUpgrade(&DAT_10038470,"AKA28UA");
  RegisterUpgrade(&DAT_10038438,"AKA30UA");
  RegisterUpgrade(&DAT_10038448,"AKA31UA");
  RegisterUpgrade(&DAT_10038460,"AKA33UA");
  RegisterUpgrade(&DAT_10038468,"KUZ01UA");
  RegisterUpgrade(&DAT_10038478,"KUZ02UA");
  RegisterUpgrade(&DAT_10038480,"KUZ03UA");
  RegisterUpgrade(&DAT_10038488,"KUZ05UA");
  InitialUpgrade("Group86","AKA20PL");
  SetPlayerName(1,"POLAND");
  SetPlayerName(5,"BH_ARMY");
  SetPlayerName(7,"MERCH");
  uStack_8 = 0x10002dad;
  return;
}





void ProcessScenary(void)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *puVar14;
  int local_44 [15];
  int uStack_8;
uVar1 = Trigg(100);
  if ((uVar1 & 0xff) != 0) {
    SetTrigg(100,0);
    ChangeFriends(0,1);
    ChangeFriends(1,2);
    ChangeFriends(5,0xa1);
    ChangeFriends(7,0xa3);
    SelectUnits1(1,&DAT_10038ac8,0);
    SelectUnits1(1,&DAT_100384c0,1);
    SelectUnits1(1,&DAT_100384b8,1);
    SelChangeNation(1,7);
    SetResource(0,3,500000);
    SetResource(0,1,500000);
    SetResource(0,0,500000);
    SetResource(0,2,500000);
    SetResource(0,5,500000);
    SetResource(0,4,500000);
    SetResource(1,3,5000000);
    SetResource(1,1,5000000);
    SetResource(1,0,5000000);
    SetResource(1,2,5000000);
    SetResource(1,5,5000000);
    SetResource(1,4,5000000);
    SetResource(5,3,5000000);
    SetResource(5,1,0);
    SetResource(5,0,5000000);
    SetResource(5,2,5000000);
    SetResource(5,5,5000000);
    SetResource(5,4,5000000);
    SetResource(7,3,5000000);
    SetResource(7,1,5000000);
    SetResource(7,0,5000000);
    SetResource(7,2,5000000);
    SetResource(7,5,5000000);
    SetResource(7,4,5000000);
    SetLightSpot(&DAT_10038848,1,1);
    SelectUnits1(1,&DAT_10038b48,0);
    SelectUnits1(7,&DAT_10038b60,0);
    SelOpenGates(7);
    SelectUnits1(7,&DAT_10038ac8,0);
    SelOpenGates(7);
    SelectUnits1(1,&DAT_10038bc0,0);
    SelChangeNation(1,7);
    SelectUnits1(1,&DAT_10038bd8,0);
    SelOpenGates(1);
    SelectUnits1(5,&DAT_10038530,0);
    SelChangeNation(5,7);
    DisableUpgrade(0,&DAT_100388d0);
    DisableUpgrade(0,&DAT_100388d8);
    DisableUpgrade(0,&DAT_100388e0);
    DisableUpgrade(0,&DAT_100388e8);
    DisableUpgrade(0,&DAT_100388f0);
    DisableUpgrade(0,&DAT_100388f8);
    DisableUpgrade(0,&DAT_10038900);
    DisableUpgrade(0,&DAT_10038908);
    DisableUpgrade(0,&DAT_10038910);
    DisableUpgrade(0,&DAT_100383e0);
    DisableUpgrade(0,&DAT_100383e8);
    DisableUpgrade(0,&DAT_100383f0);
    DisableUpgrade(0,&DAT_100383f8);
    DisableUpgrade(0,&DAT_10038400);
    DisableUpgrade(0,&DAT_10038410);
    DisableUpgrade(0,&DAT_10038420);
    DisableUpgrade(0,&DAT_10038430);
    DisableUpgrade(0,&DAT_10038408);
    DisableUpgrade(0,&DAT_10038418);
    DisableUpgrade(0,&DAT_10038428);
    DisableUpgrade(0,&DAT_10038440);
    DisableUpgrade(0,&DAT_10038450);
    DisableUpgrade(0,&DAT_10038458);
    DisableUpgrade(0,&DAT_10038470);
    DisableUpgrade(0,&DAT_10038438);
    DisableUpgrade(0,&DAT_10038448);
    DisableUpgrade(0,&DAT_10038460);
    DisableUpgrade(0,&DAT_10038468);
    DisableUpgrade(0,&DAT_10038478);
    DisableUpgrade(0,&DAT_10038480);
    DisableUpgrade(0,&DAT_10038488);
    EnableUnit(0,&DAT_100388a8,0);
    EnableUnit(0,&DAT_100388b0,0);
    EnableUnit(0,&DAT_10038890,0);
    DisableMission(0x45);
    DisableMission(0x46);
    DisableMission(0x47);
    DisableMission(0x50);
    DisableMission(0x4a);
    DisableMission(0x52);
    DisableMission(0x4b);
    DisableMission(0x53);
    DisableMission(0x4c);
    DisableMission(0x54);
    DisableMission(0x4d);
    DisableMission(0x55);
    DisableMission(0x4e);
    DisableMission(0x56);
    DisableMission(0x4f);
    DisableMission(0x57);
    DisableMission(0x58);
    DisableMission(0x59);
  }
  uVar1 = Trigg(99);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount1(&DAT_10038848,&DAT_10038520);
    if (0 < iVar13) {
      SetTrigg(99,0);
      ShowPage("#PAGE1");
      ShowPage("#PAGE2");
      SelectUnits1(5,&DAT_10038528,0);
      SelChangeNation(5,0);
      SetLightSpot(&DAT_10038628,1,2);
      SetLightSpot(&DAT_10038868,1,3);
      SetTrigg(0x62,100);
      SelectUnits1(1,&DAT_10038b70,0);
      SelSendAndKill(1,&DAT_10038658,0,0);
      DisableMission(0x49);
      EnableMission(0x50);
      EnableMission(0x4a);
      EnableMission(0x45);
      EnableMission(0x46);
    }
  }
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_10038868,0);
    if (0 < iVar13) {
      SetTrigg(0x47,0);
      SelectUnits1(5,&DAT_10038ab8,0);
      SelectUnits1(5,&DAT_10038ad0,1);
      SelectUnits1(5,&DAT_10038b50,1);
      SelChangeNation(5,0);
    }
  }
  uVar1 = Trigg(0x4e);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount1(&DAT_10038630,&DAT_10038ab8);
    if (0 < iVar13) {
      SetTrigg(0x4e,0);
      SelectUnits1(1,&DAT_10038a98,0);
      SelAttackGroup(1,&DAT_10038ab8);
    }
  }
  uVar1 = Trigg(0x4d);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bb80(&DAT_10038a98);
    if (iVar13 == 0) {
      SetTrigg(0x4d,0);
      SelectUnits1(1,&DAT_10038b68,0);
      SelAttackGroup(1,&DAT_10038b50);
    }
  }
  uVar1 = Trigg(0x62);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x62);
    SetTrigg(0x62,(uVar1 & 0xff) - 1);
    SelectUnits1(1,&DAT_10038b70,0);
    SelSendAndKill(1,&DAT_10038610,0,2);
    SelSendAndKill(1,&DAT_10038658,0,2);
  }
  uVar1 = Trigg(0x53);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bb80(&DAT_10038b70);
    if (iVar13 < 0x12) {
      SetTrigg(0x53,0);
      SelectUnits1(1,&DAT_10038b88,0);
      SelAttackGroup(1,&DAT_100389f0);
      SelectUnits1(5,&DAT_10038ba0,0);
      SelSendTo(5,&DAT_10038860,0x3c,0);
      SelectUnits1(5,&DAT_10038aa8,0);
      SelSendTo(5,&DAT_10038858,0x3c,0);
      SelectUnits1(5,&DAT_10038a90,0);
      SelSendTo(5,&DAT_10038850,0x3c,0);
    }
  }
  uVar1 = Trigg(0x61);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_10038640,0);
    if (0 < iVar13) {
      SetTrigg(0x61,0);
      SetTrigg(0x52,1);
      uVar1 = AskQuestion("#PAGE3");
      if ((uVar1 & 0xff) == 0) {
        RunTimer(6,0x96);
      }
      else {
        RunTimer(5,0x19);
      }
    }
  }
  uVar1 = Trigg(0x4b);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount1(&DAT_10038660,&DAT_10038528);
    if (2 < iVar13) {
      uVar1 = TimerDone(5);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x4b,0);
      }
    }
  }
  uVar1 = Trigg(0x52);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_10038640,0);
    if (iVar13 == 0) {
      uVar1 = TimerDoneFirst(6);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = Trigg(0x4b);
        if ((uVar1 & 0xff) == 0) goto LAB_1000457a;
      }
      SetTrigg(0x52,0);
      SetTrigg(0x61,1);
    }
  }
LAB_1000457a:
  uVar1 = Trigg(0x51);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x4b);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x51,0);
      ShowPage("#PAGE6");
      SelectUnits1(5,&DAT_100389e0,0);
      SelectUnits1(5,&DAT_10038af0,1);
      SelSendTo(5,&DAT_10038860,0x3c,0);
      SelectUnits1(5,&DAT_10038b10,0);
      SelectUnits1(5,&DAT_10038ad8,1);
      SelSendTo(5,&DAT_10038858,0x3c,0);
      SelectUnits1(5,&DAT_10038ae8,0);
      SelectUnits1(5,&DAT_10038b08,1);
      SelSendTo(5,&DAT_10038850,0x3c,0);
      RunTimer(1,0x5dc);
      SelectUnits1(0,&DAT_10038528,0);
      SelChangeNation(0,5);
      SelectUnits1(5,&DAT_10038528,0);
      SelSendTo(5,&DAT_10038670,0x6a,0);
      DisableMission(0x4a);
      DisableMission(0x45);
      DisableMission(0x46);
      EnableMission(0x52);
    }
  }
  uVar1 = Trigg(0x50);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x50,0);
      SelectUnits1(5,&DAT_10038ac0,0);
      SelectUnits1(5,&DAT_10038528,1);
      SelSendTo(5,&DAT_100385e8,0,0);
    }
  }
  uVar1 = Trigg(0x4f);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount1(&DAT_100385e8,&DAT_10038ac0);
    if (0 < iVar13) {
      iVar13 = GetUnitsAmount1(&DAT_100385e8,&DAT_10038528);
      if (0 < iVar13) {
        SetTrigg(0x4f,0);
        SelectUnits1(5,&DAT_10038ac0,0);
        SelectUnits1(5,&DAT_10038528,1);
        SelErase(5);
      }
    }
  }
  uVar1 = Trigg(0x60);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10038ba0,0);
      uVar1 = CheckLeaveAbility(5);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x60,0);
        SelectUnits1(5,&DAT_100389e0,0);
        SelectUnits1(5,&DAT_10038af0,1);
        SelectUnits1(5,&DAT_10038ba0,1);
        SendUnitsToTransport(5);
        SelectUnits1(7,&DAT_10038b60,0);
        SelOpenGates(7);
      }
    }
  }
  uVar1 = Trigg(0x5f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10038aa8,0);
      uVar1 = CheckLeaveAbility(5);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x5f,0);
        SelectUnits1(5,&DAT_10038b10,0);
        SelectUnits1(5,&DAT_10038ad8,1);
        SelectUnits1(5,&DAT_10038aa8,1);
        SendUnitsToTransport(5);
      }
    }
  }
  uVar1 = Trigg(0x5e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(1);
    if ((uVar1 & 0xff) != 0) {
      SelectUnits(&DAT_10038a90,0);
      uVar1 = CheckLeaveAbility(5);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0x5e,0);
        SelectUnits1(5,&DAT_10038ae8,0);
        SelectUnits1(5,&DAT_10038b08,1);
        SelectUnits1(5,&DAT_10038a90,1);
        SendUnitsToTransport(5);
      }
    }
  }
  uVar1 = Trigg(0x5d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x51);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x5d,0);
      SelectUnits1(1,&DAT_10038a88,0);
      SelectUnits1(1,&DAT_10038a60,1);
      SelectUnits1(1,&DAT_10038928,1);
      SelSendAndKill(1,&DAT_10038868,0,0);
      RunTimer(10,2000);
    }
  }
  uVar1 = Trigg(0x5c);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount1(&DAT_10038868,&DAT_10038a60);
    if (iVar13 < 1) {
LAB_10004d69:
      uVar1 = TimerDone(10);
      if ((uVar1 & 0xff) == 0) goto LAB_10004e48;
    }
    else {
      iVar13 = GetUnitsAmount0(&DAT_10038868,0);
      if (iVar13 != 0) goto LAB_10004d69;
    }
    SetTrigg(0x5c,0);
    SelectUnits1(0,&DAT_10038ad0,0);
    SelChangeNation(0,1);
    ShowPage("#PAGE4");
    SelectUnits1(5,&DAT_10038a40,0);
    SelectUnits1(5,&DAT_10038bd0,1);
    SelChangeNation(5,0);
    EnableMission(0x4b);
  }
LAB_10004e48:
  uVar1 = Trigg(0x5b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x5b,0);
      SelectUnits1(1,&DAT_10038a88,0);
      SelSendTo(1,&DAT_10038870,0x3c,0);
      SelectUnits1(1,&DAT_10038a60,0);
      SelectUnits1(1,&DAT_10038928,1);
      SelSendTo(1,&DAT_10038878,0x3c,0);
    }
  }
  uVar1 = Trigg(0x5a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) == 0) {
      FUN_1000bb80(&DAT_10038a88);
      if (iVar13 == 0) {
        FUN_1000bb80(&DAT_10038a60);
        if (iVar13 == 0) {
          FUN_1000bb80(&DAT_10038928);
          if (iVar13 == 0) {
            iVar13 = GetUnitsAmount0(&DAT_10038868,1);
            if (iVar13 == 0) {
              iVar13 = GetUnitsAmount0(&DAT_10038868,0);
              if (0 < iVar13) {
                SetTrigg(0x5a,0);
                SelectUnits1(1,&DAT_10038ad0,0);
                SelChangeNation(1,0);
                ShowPage("#PAGE5");
                SelectUnits1(5,&DAT_10038a90,0);
                SelSendTo(5,&DAT_100385c8,0,0);
                SelectUnits1(5,&DAT_10038aa8,0);
                SelSendTo(5,&DAT_10038620,0,0);
                SelectUnits1(5,&DAT_10038ba0,0);
                SelSendTo(5,&DAT_10038608,0,0);
                SelectUnits1(5,&DAT_10038b90,0);
                SelAttackGroup(5,&DAT_10038b68);
                RunTimer(7,100);
                RunTimer(0x15,0x9c4);
                SelectUnits1(0,&DAT_10038bd0,0);
                SelChangeNation(0,5);
                SelectUnits1(5,&DAT_10038bd0,0);
                SelSendTo(5,&DAT_10038848,0xc4,0);
                DisableMission(0x4b);
                EnableMission(0x53);
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xe6);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(7);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xe6,0);
      ShowPage("#PAGE28");
      SetLightSpot(&DAT_10038938,1,8);
      SelectUnits1(5,&DAT_10038bb8,0);
      SelChangeNation(5,0);
      EnableMission(0x4c);
    }
  }
  uVar1 = Trigg(0x59);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(7);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits1(5,&DAT_10038a90,0);
        uVar1 = CheckLeaveAbility(5);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x59,0);
          SelectUnits1(5,&DAT_10038a90,0);
          PushAllUnitsAway(5);
          RunTimer(2,0x4b0);
        }
      }
    }
  }
  uVar1 = Trigg(0x56);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(2);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x56,0);
      SelectUnits1(5,&DAT_10038b08,0);
      SelSendAndKill(5,&DAT_100386a0,0xc4,0);
      SelectUnits1(5,&DAT_10038ae8,0);
      SelSendAndKill(5,&DAT_10038690,0xc4,0);
    }
  }
  uVar1 = Trigg(0x58);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(7);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits1(5,&DAT_10038aa8,0);
        uVar1 = CheckLeaveAbility(5);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x58,0);
          SelectUnits1(5,&DAT_10038aa8,0);
          PushAllUnitsAway(5);
          RunTimer(3,0x4b0);
        }
      }
    }
  }
  uVar1 = Trigg(0x55);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(3);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x55,0);
      SelectUnits1(5,&DAT_10038b10,0);
      SelSendAndKill(5,&DAT_10038668,0xc4,0);
      SelectUnits1(5,&DAT_10038ad8,0);
      SelSendAndKill(5,&DAT_10038678,0xc4,0);
    }
  }
  uVar1 = Trigg(0x57);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5a);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(7);
      if ((uVar1 & 0xff) != 0) {
        SelectUnits1(5,&DAT_10038ba0,0);
        uVar1 = CheckLeaveAbility(5);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x57,0);
          SelectUnits1(5,&DAT_10038ba0,0);
          PushAllUnitsAway(5);
          RunTimer(4,0x4b0);
        }
      }
    }
  }
  uVar1 = Trigg(0x54);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(4);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x54,0);
      SelectUnits1(5,&DAT_100389e0,0);
      SelSendAndKill(5,&DAT_10038638,0xc4,0);
      SelectUnits1(5,&DAT_10038af0,0);
      SelSendAndKill(5,&DAT_10038650,0xc4,0);
    }
  }
  uVar1 = Trigg(0x4a);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_10038688,0);
    if (0 < iVar13) {
      AttackZoneByArtillery(&DAT_10038b80,&DAT_10038688,0);
    }
  }
  uVar1 = Trigg(0x49);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_100386c0,0);
    if (0 < iVar13) {
      AttackZoneByArtillery(&DAT_10038b00,&DAT_100386c0,0);
      AttackZoneByArtillery(&DAT_10038a38,&DAT_100386c0,0);
    }
  }
  uVar1 = Trigg(0x48);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_100386b0,0);
    if (0 < iVar13) {
      AttackZoneByArtillery(&DAT_10038a00,&DAT_100386b0,0);
      AttackZoneByArtillery(&DAT_100389d0,&DAT_100386b0,0);
    }
  }
  uVar1 = Trigg(0x47);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_100386f0,0);
    if (0 < iVar13) {
      AttackZoneByArtillery(&DAT_100389e8,&DAT_100386f0,0);
      AttackZoneByArtillery(&DAT_10038af8,&DAT_100386f0,0);
    }
  }
  uVar1 = Trigg(0x46);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x59);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x46,0);
      ClearSelection(5);
      ClearSelection(7);
      ClearSelection(1);
      ClearSelection(0);
      SelectUnits1(7,&DAT_10038b20,0);
      SelectUnits1(7,&DAT_10038b38,1);
      SelectUnits1(7,&DAT_10038c08,1);
      SelectUnits1(7,&DAT_10038b78,1);
      SelectUnits1(7,&DAT_10038b40,1);
      SelectUnits1(7,&DAT_10038b58,1);
      SelSendTo(7,&DAT_10038680,0xa6,0);
    }
  }
  uVar1 = Trigg(0x45);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount1(&DAT_10038680,&DAT_10038b38);
    if (0 < iVar13) {
      SetTrigg(0x45,0);
      ShowPage("#PAGE7");
      ShowPage("#PAGE8");
      SelectUnits1(7,&DAT_10038b20,0);
      SelectUnits1(7,&DAT_10038b38,1);
      SelectUnits1(7,&DAT_10038c08,1);
      SelectUnits1(7,&DAT_10038b78,1);
      SelectUnits1(7,&DAT_10038b40,1);
      SelectUnits1(7,&DAT_10038b58,1);
      SelChangeNation(7,0);
      RunTimer(8,6000);
      ClearLightSpot(2);
      EnableMission(0x4d);
    }
  }
  uVar1 = Trigg(0x24);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(99);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x24,0);
      SelectUnits1(1,&DAT_10038c18,0);
      SelAttackGroup(1,&DAT_100389f0);
    }
  }
  uVar1 = Trigg(0x23);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5c);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x23,0);
      SelectUnits1(1,&DAT_10038be0,0);
      SelAttackGroup(1,&DAT_10038a40);
    }
  }
  uVar1 = Trigg(0x22);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x45);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x22,0);
      SelectUnits1(1,&DAT_10038bf0,0);
      SelAttackGroup(1,&DAT_10038a40);
    }
  }
  uVar1 = Trigg(0x21);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x5a);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x21,0);
      SelectUnits1(1,&DAT_10038bc8,0);
      SelAttackGroup(1,&DAT_10038a40);
    }
  }
  uVar1 = Trigg(0x20);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0x15);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x20,0);
      SelectUnits1(1,&DAT_10038b28,0);
      SelAttackGroup(1,&DAT_10038a40);
    }
  }
  uVar1 = Trigg(0x44);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_100386b8,0);
    if (0 < iVar13) {
      SetTrigg(0x44,0);
      ShowPage("#PAGE9");
    }
  }
  uVar1 = Trigg(0x43);
  if ((uVar1 & 0xff) == 0) {
LAB_10005ff5:
    iVar13 = GetUnitsAmount2(&DAT_100386a8,&DAT_10038898,0);
    if (0 < iVar13) goto LAB_10006017;
  }
  else {
    iVar13 = GetUnitsAmount2(&DAT_10038568,&DAT_10038898,0);
    if (iVar13 < 1) goto LAB_10005ff5;
LAB_10006017:
    SetTrigg(0x43,0);
    SelectUnits1(7,&DAT_10038ac8,0);
    SelOpenGates(7);
    RunTimer(0x19,700);
  }
  uVar1 = Trigg(0x65);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount2(&DAT_10038750,&DAT_10038898,0);
    if (iVar13 < 1) {
      iVar13 = GetUnitsAmount2(&DAT_10038740,&DAT_10038898,0);
      if (iVar13 < 1) {
        iVar13 = GetUnitsAmount2(&DAT_10038778,&DAT_10038898,0);
        if (iVar13 < 1) goto LAB_10006204;
      }
    }
    iVar13 = GetUnitsAmount2(&DAT_10038920,&DAT_10038898,0);
    if (iVar13 < 1) {
      iVar13 = GetUnitsAmount2(&DAT_10038a70,&DAT_10038898,0);
      if (iVar13 < 1) {
        iVar13 = GetUnitsAmount2(&DAT_10038a50,&DAT_10038898,0);
        if (iVar13 < 1) goto LAB_10006204;
      }
    }
    SetTrigg(0x65,0);
    ShowPage("#PAGE17");
    SelectUnits1(5,&DAT_10038a78,0);
    SelChangeNation(5,0);
    DisableMission(0x4d);
    EnableMission(0x55);
    EnableMission(0x58);
  }
LAB_10006204:
  uVar1 = Trigg(0x66);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) == 0) {
      FUN_1000bb80(&DAT_100384e8);
      if (iVar13 == 0) {
        FUN_1000bb80(&DAT_100384e0);
        if (iVar13 == 0) {
          FUN_1000bb80(&DAT_100384d8);
          if (iVar13 == 0) {
            FUN_1000bb80(&DAT_100384d0);
            if (iVar13 == 0) {
              FUN_1000bb80(&DAT_10038518);
              if (iVar13 == 0) {
                FUN_1000bb80(&DAT_10038510);
                if (iVar13 == 0) {
                  FUN_1000bb80(&DAT_10038500);
                  if (iVar13 == 0) {
                    FUN_1000bb80(&DAT_100384f0);
                    if (iVar13 == 0) {
                      FUN_1000bb80(&DAT_100384b0);
                      if (iVar13 == 0) {
                        FUN_1000bb80(&DAT_100384a8);
                        if (iVar13 == 0) {
                          FUN_1000bb80(&DAT_10038508);
                          if (iVar13 == 0) {
                            FUN_1000bb80(&DAT_100384f8);
                            if (iVar13 == 0) {
                              SetTrigg(0x66,0);
                              DisableMission(0x58);
                              EnableMission(0x59);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0x1f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0x19);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1f,0);
      SelectUnits1(1,&DAT_10038bb0,0);
      SelSendTo(1,&DAT_100386a8,0x3c,0);
      SelectUnits1(1,&DAT_10038aa0,0);
      SelSendTo(1,&DAT_10038568,0x3c,0);
    }
  }
  uVar1 = Trigg(0x18);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1f);
    if ((uVar1 & 0xff) == 0) {
      iVar13 = GetUnitsAmount0(&DAT_10038868,0);
      if (iVar13 == 0) {
        iVar13 = GetUnitsAmount0(&DAT_10038868,1);
        if (0 < iVar13) {
          SetTrigg(0x18,0);
          SelectUnits1(0,&DAT_10038ad0,0);
          SelChangeNation(0,1);
          ClearLightSpot(3);
        }
      }
    }
  }
  uVar1 = Trigg(0x42);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(8);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x42,0);
      CreateObject0(&DAT_100384e8,&DAT_100385e0,&DAT_100388c0,1,&DAT_100386d8,0x3c);
      CreateObject0(&DAT_100384e0,&DAT_100385e0,&DAT_100388c0,1,&DAT_100386d8,0x3c);
      CreateObject0(&DAT_100384d8,&DAT_100385e0,&DAT_100388c0,1,&DAT_100386d8,0x3c);
      CreateObject0(&DAT_100384d0,&DAT_100385e0,&DAT_100388c0,1,&DAT_100386d8,0x3c);
      CreateObject0(&DAT_10038518,&DAT_10038618,&DAT_100388b8,1,&DAT_10038698,0x3c);
      CreateObject0(&DAT_10038510,&DAT_10038618,&DAT_100388b8,1,&DAT_10038698,0x3c);
      CreateObject0(&DAT_10038500,&DAT_10038618,&DAT_100388b8,1,&DAT_100387b8,0x3c);
      CreateObject0(&DAT_100384f0,&DAT_10038618,&DAT_100388b8,1,&DAT_100387b8,0x3c);
      CreateObject0(&DAT_100384b0,&DAT_10038618,&DAT_100388c8,1,&DAT_100386e8,0x3c);
      CreateObject0(&DAT_100384a8,&DAT_10038618,&DAT_100388c8,1,&DAT_100386e8,0x3c);
      CreateObject0(&DAT_10038508,&DAT_10038618,&DAT_100388c8,1,&DAT_100386e8,0x3c);
      CreateObject0(&DAT_100384f8,&DAT_10038618,&DAT_100388c8,1,&DAT_100386e8,0x3c);
      SelectUnits1(7,&DAT_10038ac8,0);
      SelOpenGates(7);
      RunTimer(0xe,8000);
      RunTimer(0x1a,200);
      RunTimer(0x1d,5000);
    }
  }
  uVar1 = Trigg(0x41);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0x1a);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x41,0);
      SelectUnits1(1,&DAT_10038518,0);
      SelectUnits1(1,&DAT_10038510,1);
      SelSendTo(1,&DAT_100385f8,0,0);
      SelectUnits1(1,&DAT_10038500,0);
      SelectUnits1(1,&DAT_100384f0,1);
      SelSendTo(1,&DAT_100385a8,0,0);
      RunTimer(9,1000);
    }
  }
  uVar1 = Trigg(0x3f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(9);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x3f,0);
      SelectUnits1(1,&DAT_100384e8,0);
      SelectUnits1(1,&DAT_100384b0,1);
      SelSendTo(1,&DAT_100385d8,0,0);
      SelSendTo(1,&DAT_100385f8,0,2);
    }
  }
  uVar1 = Trigg(0x3e);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3f);
    if ((uVar1 & 0xff) == 0) {
      iVar13 = GetUnitsAmount1(&DAT_100385f8,&DAT_100384e8);
      if (0 < iVar13) {
        SetTrigg(0x3e,0);
        SelectUnits1(1,&DAT_100384e8,0);
        SelectUnits1(1,&DAT_100384b0,1);
        SelSendAndKill(1,&DAT_100386c8,0,0);
        RunTimer(0xb,200);
      }
    }
  }
  uVar1 = Trigg(0x3b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3e);
    if ((uVar1 & 0xff) == 0) {
      iVar13 = GetUnitsAmount1(&DAT_100386c8,&DAT_100384e8);
      if (0 < iVar13) {
        AttackZoneByArtillery(&DAT_100384e8,&DAT_10038758,5);
        AttackZoneByArtillery(&DAT_100384e8,&DAT_10038758,0);
      }
    }
  }
  uVar1 = Trigg(0x3d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0xb);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x3d,0);
      SelectUnits1(1,&DAT_100384e0,0);
      SelectUnits1(1,&DAT_100384a8,1);
      SelSendTo(1,&DAT_100385d8,0,0);
      SelSendTo(1,&DAT_100385f8,0,2);
    }
  }
  uVar1 = Trigg(0x3c);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3d);
    if ((uVar1 & 0xff) == 0) {
      iVar13 = GetUnitsAmount1(&DAT_100385f8,&DAT_100384e0);
      if (0 < iVar13) {
        SetTrigg(0x3c,0);
        SelectUnits1(1,&DAT_100384e0,0);
        SelectUnits1(1,&DAT_100384a8,1);
        SelSendAndKill(1,&DAT_10038728,0,0);
        RunTimer(0xc,1000);
      }
    }
  }
  uVar1 = Trigg(0x3a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x3c);
    if ((uVar1 & 0xff) == 0) {
      iVar13 = GetUnitsAmount1(&DAT_10038728,&DAT_100384e0);
      if (0 < iVar13) {
        AttackZoneByArtillery(&DAT_100384e0,&DAT_10038748,5);
        AttackZoneByArtillery(&DAT_100384e0,&DAT_10038748,0);
      }
    }
  }
  uVar1 = Trigg(0x39);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0xc);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x39,0);
      SelectUnits1(1,&DAT_100384d8,0);
      SelectUnits1(1,&DAT_10038508,1);
      SelSendTo(1,&DAT_100385b8,0,0);
      SelSendTo(1,&DAT_100385a8,0,2);
    }
  }
  uVar1 = Trigg(0x38);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x39);
    if ((uVar1 & 0xff) == 0) {
      iVar13 = GetUnitsAmount1(&DAT_100385a8,&DAT_100384d8);
      if (0 < iVar13) {
        SetTrigg(0x38,0);
        SelectUnits1(1,&DAT_100384d8,0);
        SelectUnits1(1,&DAT_10038508,1);
        SelSendAndKill(1,&DAT_100386f8,0,0);
        RunTimer(0xd,1000);
      }
    }
  }
  uVar1 = Trigg(0x37);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x38);
    if ((uVar1 & 0xff) == 0) {
      iVar13 = GetUnitsAmount1(&DAT_100386f8,&DAT_100384d8);
      if (0 < iVar13) {
        AttackZoneByArtillery(&DAT_100384d8,&DAT_10038758,5);
        AttackZoneByArtillery(&DAT_100384d8,&DAT_10038758,0);
      }
    }
  }
  uVar1 = Trigg(0x36);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0xd);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x36,0);
      SelectUnits1(1,&DAT_100384d0,0);
      SelectUnits1(1,&DAT_100384f8,1);
      SelSendTo(1,&DAT_100385d0,0,0);
    }
  }
  uVar1 = Trigg(0x35);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x36);
    if ((uVar1 & 0xff) == 0) {
      iVar13 = GetUnitsAmount1(&DAT_100385d0,&DAT_100384d0);
      if (0 < iVar13) {
        SetTrigg(0x35,0);
        SelectUnits1(1,&DAT_100384d0,0);
        SelectUnits1(1,&DAT_100384f8,1);
        SelSendAndKill(1,&DAT_10038720,0,0);
      }
    }
  }
  uVar1 = Trigg(0x34);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x35);
    if ((uVar1 & 0xff) == 0) {
      iVar13 = GetUnitsAmount1(&DAT_10038720,&DAT_100384d0);
      if (0 < iVar13) {
        AttackZoneByArtillery(&DAT_100384d0,&DAT_10038758,5);
        AttackZoneByArtillery(&DAT_100384d0,&DAT_10038758,0);
      }
    }
  }
  uVar1 = Trigg(0x33);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) == 0) {
      FUN_1000bb80(&DAT_100384e8);
      if (iVar13 == 0) {
        FUN_1000bb80(&DAT_100384e0);
        if (iVar13 == 0) {
          FUN_1000bb80(&DAT_100384d8);
          if (iVar13 == 0) {
            FUN_1000bb80(&DAT_100384d0);
            if (iVar13 == 0) {
              SetTrigg(0x33,0);
              SetTrigg(0x3b,0);
              SetTrigg(0x3a,0);
              SetTrigg(0x37,0);
              SetTrigg(0x34,0);
            }
          }
        }
      }
    }
  }
  uVar1 = Trigg(0xfa);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bbd0(&DAT_100388c0,0);
    if (0 < iVar13) {
      SetTrigg(0xfa,0);
      SetTrigg(0xfb,1);
      SelectUnitsType(&DAT_100388c0,0,0);
      SelDie(0);
      RunTimer(0x13,10);
    }
  }
  uVar1 = Trigg(0xfb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xfa);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = TimerDone(0x13);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xfb,0);
        SetTrigg(0xfa,1);
      }
    }
  }
  uVar1 = Trigg(0x31);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0x1d);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x31,0);
      ShowPage("#PAGE10");
      RunTimer(0xf,3000);
      EnableMission(0x4f);
      SetLightSpot(&DAT_100385a0,1,5);
    }
  }
  uVar1 = Trigg(0x68);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_10038578,1);
    if (iVar13 == 0) {
      iVar13 = GetUnitsAmount0(&DAT_100385a0,1);
      if (iVar13 == 0) {
        iVar13 = GetUnitsAmount0(&DAT_10038590,1);
        if (iVar13 == 0) {
          SetTrigg(0x68,0);
          DisableMission(0x4f);
          EnableMission(0x57);
          ClearLightSpot(5);
        }
      }
    }
  }
  uVar1 = Trigg(0x30);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x42);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x30,0);
      SelectUnits1(7,&DAT_10038b60,0);
      SelOpenGates(7);
      RunTimer(0x16,30000);
    }
  }
  uVar1 = Trigg(0x2f);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x30);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x2f,0);
      SelectUnits1(7,&DAT_10038b18,0);
      SelSendTo(7,&DAT_10038570,0xc4,0);
    }
  }
  uVar1 = Trigg(0x2e);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount1(&DAT_10038570,&DAT_10038b18);
    if (3 < iVar13) {
      SetTrigg(0x2e,0);
      SelectUnits1(7,&DAT_10038ae0,0);
      SelOpenGates(7);
      RunTimer(0x10,0xfa);
    }
  }
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2e);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x1d,0);
      SelectUnits1(7,&DAT_10038b18,0);
      SelSendTo(7,&DAT_10038780,0x78,0);
    }
  }
  uVar1 = Trigg(0x2d);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0x10);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x2d,0);
      SelectUnits1(7,&DAT_10038ae0,0);
      SelCloseGates(7);
    }
  }
  uVar1 = Trigg(0x2c);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount1(&DAT_10038718,&DAT_10038b18);
    if (0 < iVar13) {
      iVar13 = GetUnitsAmount2(&DAT_10038920,&DAT_10038898,0);
      if (iVar13 < 1) {
        iVar13 = GetUnitsAmount2(&DAT_10038a70,&DAT_10038898,0);
        if (iVar13 < 1) {
          iVar13 = GetUnitsAmount2(&DAT_10038a50,&DAT_10038898,0);
          if (iVar13 < 1) goto LAB_10007956;
        }
      }
      SetTrigg(0x2c,0);
      ShowPage("#PAGE11");
      SetLightSpot(&DAT_10038780,1,4);
      RunTimer(0x1e,2000);
    }
  }
LAB_10007956:
  uVar1 = Trigg(0x17);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount2(&DAT_10038750,&DAT_10038898,0);
    if (iVar13 < 1) {
      iVar13 = GetUnitsAmount2(&DAT_10038740,&DAT_10038898,0);
      if (iVar13 < 1) {
        iVar13 = GetUnitsAmount2(&DAT_10038778,&DAT_10038898,0);
        if (iVar13 < 1) goto LAB_10007a0c;
      }
    }
    SetTrigg(0x17,0);
    RunTimer(0x14,5000);
  }
LAB_10007a0c:
  uVar1 = Trigg(0x25);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1e);
    if ((uVar1 & 0xff) != 0) {
      iVar13 = GetUnitsAmount2(&DAT_10038750,&DAT_10038898,0);
      if (iVar13 < 1) {
        iVar13 = GetUnitsAmount2(&DAT_10038740,&DAT_10038898,0);
        if (iVar13 < 1) {
          iVar13 = GetUnitsAmount2(&DAT_10038778,&DAT_10038898,0);
          if (iVar13 < 1) goto LAB_10007b4a;
        }
      }
      SetTrigg(0x25,0);
      ShowPage("#PAGE12");
      SetLightSpot(&DAT_10038768,1,5);
      SetLightSpot(&DAT_100387a0,1,6);
      SetLightSpot(&DAT_10038780,1,7);
      EnableMission(0x4e);
    }
  }
LAB_10007b4a:
  uVar1 = Trigg(0x2b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x44);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x2c);
      if ((uVar1 & 0xff) == 0) {
        iVar13 = GetUnitsAmount0(&DAT_100386b8,0);
        if (0 < iVar13) {
          SetTrigg(0x2b,0);
          ShowPage("#PAGE13");
          SelectUnits1(7,&DAT_10038ae0,0);
          SelOpenGates(7);
        }
      }
    }
  }
  uVar1 = Trigg(0x2a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2b);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x2a,0);
      SetTrigg(0x26,1);
      uVar1 = AskQuestion("#PAGE14");
      if ((uVar1 & 0xff) == 0) {
        RunTimer(0x12,1);
      }
      else {
        RunTimer(0x11,1);
        SetTrigg(0xd2,1);
      }
    }
  }
  uVar1 = Trigg(0xd2);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0x11);
    if ((uVar1 & 0xff) != 0) {
      iVar13 = GetResource(0,1);
      if (25000 < iVar13) {
        SetTrigg(0xd2,0);
      }
    }
  }
  uVar1 = Trigg(0x29);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0xd2);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x29,0);
      ShowPage("#PAGE30");
      AddResource(0,1,0xffff9e58);
      SelectUnits1(5,&DAT_10038b30,0);
      SelChangeNation(5,7);
      SelectUnits1(7,&DAT_10038c00,0);
      SelectUnits1(7,&DAT_10038b30,1);
      SelSendTo(7,&DAT_10038770,0xc4,0);
      SelectUnits1(7,&DAT_10038ae0,0);
      SelOpenGates(7);
    }
  }
  uVar1 = Trigg(0x28);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount1(&DAT_10038770,&DAT_10038c00);
    if (0 < iVar13) {
      SetTrigg(0x28,0);
      SelectUnits1(7,&DAT_10038c00,0);
      SelectUnits1(7,&DAT_10038b30,1);
      SelSendTo(7,&DAT_10038780,0xc4,0);
    }
  }
  uVar1 = Trigg(0x27);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x2a);
    if ((uVar1 & 0xff) == 0) {
      iVar13 = GetUnitsAmount1(&DAT_10038780,&DAT_10038c00);
      if (0 < iVar13) {
        SetTrigg(0x27,0);
        ShowPage("#PAGE16");
        SelectUnits1(7,&DAT_10038b30,0);
        SelChangeNation(7,0);
        ShowPage("#PAGE29");
      }
    }
  }
  uVar1 = Trigg(0x26);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x12);
    if ((uVar1 & 0xff) != 0) {
      iVar13 = GetUnitsAmount0(&DAT_100386b8,0);
      if (iVar13 == 0) {
        uVar1 = Trigg(0x29);
        if ((uVar1 & 0xff) != 0) {
          SetTrigg(0x26,0);
          SetTrigg(0x2a,1);
        }
      }
    }
  }
  uVar1 = Trigg(0x1d);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_100385f0,0);
    if (0 < iVar13) {
      AttackZoneByArtillery(&DAT_10038bf8,&DAT_100385f0,0);
      AttackZoneByArtillery(&DAT_10038c10,&DAT_100385f0,0);
    }
  }
  uVar1 = Trigg(0x1c);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_10038790,1);
    if (iVar13 < 3) {
      iVar13 = GetUnitsAmount0(&DAT_10038790,0);
      if (0 < iVar13) {
        SetTrigg(0x1c,0);
        SelectUnits1(1,&DAT_10038be8,0);
        SelChangeNation(1,0);
        SelectUnits1(7,&DAT_10038bc0,0);
        SelChangeNation(7,0);
        ClearSelection(5);
        SelectUnits1(5,&DAT_10038bb8,0);
        SelSendTo(5,&DAT_10038848,0xc4,0);
        SetTrigg(0x1b,0);
        SetTrigg(0x1a,0);
        SetTrigg(0x19,0);
        ShowPage("#PAGE18");
        DisableMission(0x4c);
        EnableMission(0x54);
      }
    }
  }
  uVar1 = Trigg(0x1b);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x1e);
    if ((uVar1 & 0xff) != 0) {
      uVar1 = Trigg(0x4b);
      if ((uVar1 & 0xff) == 0) {
        iVar13 = GetUnitsAmount0(&DAT_100385f0,0);
        if (iVar13 == 0) {
          SetTrigg(0x1b,0);
          CreateObject0(&DAT_100384a0,&DAT_10038618,&DAT_100388c8,1,&DAT_100387c8,0xb4);
          SetTrigg(0x1a,1);
          RunTimer(0x1b,7000);
          RunTimer(0x1c,100);
        }
      }
    }
  }
  uVar1 = Trigg(0x1a);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1c);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x1a,0);
      SelectUnits1(1,&DAT_100384a0,0);
      SelSendAndKill(1,&DAT_10038758,0,0);
      SetTrigg(0x19,1);
    }
  }
  uVar1 = Trigg(0x19);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x1b);
    if ((uVar1 & 0xff) != 0) {
      iVar13 = GetUnitsAmount0(&DAT_100385f0,0);
      if (iVar13 == 0) {
        SetTrigg(0x19,0);
        SetTrigg(0x1b,1);
      }
    }
  }
  uVar1 = Trigg(0x15);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bb80(&DAT_10038918);
    if (iVar13 == 0) {
      SetTrigg(0x15,0);
      ShowPage("#PAGE19");
    }
  }
  uVar1 = Trigg(0x14);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bb80(&DAT_10038560);
    if (iVar13 == 0) {
      SetTrigg(0x14,0);
      ShowPage("#PAGE19");
    }
  }
  uVar1 = Trigg(0x13);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bb80(&DAT_100389b8);
    if (iVar13 == 0) {
      SetTrigg(0x13,0);
      ShowPage("#PAGE19");
    }
  }
  uVar1 = Trigg(0x67);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bb80(&DAT_10038560);
    if (iVar13 == 0) {
      FUN_1000bb80(&DAT_10038918);
      if (iVar13 == 0) {
        FUN_1000bb80(&DAT_100389b8);
        if (iVar13 == 0) {
          SetTrigg(0x67,0);
          DisableMission(0x4e);
          EnableMission(0x56);
        }
      }
    }
  }
  uVar1 = Trigg(0x12);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDoneFirst(0x16);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0x12,0);
      ShowPage("#PAGE23");
      EnableMission(0x47);
    }
  }
  uVar1 = Trigg(0x11);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x12);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = Trigg(0x15);
      if ((uVar1 & 0xff) != 0) {
        uVar1 = Trigg(0x14);
        if ((uVar1 & 0xff) != 0) {
          uVar1 = Trigg(0x13);
          if ((uVar1 & 0xff) != 0) goto LAB_10008808;
        }
      }
      SetTrigg(0x11,0);
      ShowPage("#PAGE24");
    }
  }
LAB_10008808:
  uVar1 = Trigg(10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x15);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(10,0);
      SelectUnits1(1,&DAT_10038950,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(9);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x14);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(9,0);
      SelectUnits1(1,&DAT_10038490,0);
      SelDie(1);
    }
  }
  uVar1 = Trigg(8);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x13);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(8,0);
      SelectUnits1(1,&DAT_10038a00,0);
      SelectUnits1(1,&DAT_100389d0,1);
      SelDie(1);
    }
  }
  uVar1 = Trigg(0x10);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x12);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0x10,0);
      ShowPage("#PAGE25");
      SelectUnits1(5,&DAT_10038a28,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_100387f0,0xd3,0);
      SelectUnits1(5,&DAT_10038a58,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_10038760,0xd3,0);
      SelectUnits1(5,&DAT_10038940,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_10038798,0xc4,0);
      SelectUnits1(5,&DAT_10038a48,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_10038788,0xd3,0);
      SelectUnits1(5,&DAT_10038a10,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_100387c0,0xc4,0);
      SelectUnits1(5,&DAT_10038a30,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_100387b0,0xd3,0);
      RunTimer(0x17,8000);
      SelectUnits1(5,&DAT_10038b08,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_100387e8,0xc4,0);
      SetStandGround(5,0);
      SelectUnits1(5,&DAT_10038af8,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_100387d8,0x79,0);
      SelectUnits1(5,&DAT_10038b10,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_10038810,0xd3,0);
      SelectUnits1(5,&DAT_10038ad8,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_10038800,0xd3,0);
      SelectUnits1(5,&DAT_10038af0,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_10038828,0xc4,0);
      SelectUnits1(5,&DAT_100389e0,0);
      SetStandGround(5,0);
      SelSendTo(5,&DAT_100387a8,0xc4,0);
      SelectUnits1(1,&DAT_10038950,0);
      SelSendTo(1,&DAT_100387d0,0xc4,0);
      SelectUnits1(1,&DAT_10038490,0);
      SelSendTo(1,&DAT_10038820,0xc4,0);
      SelectUnits1(1,&DAT_10038a00,0);
      SelSendTo(1,&DAT_10038630,0xc4,0);
      SelectUnits1(1,&DAT_100389d0,0);
      SelSendTo(1,&DAT_10038630,0xc4,0);
      SelectUnits1(7,&DAT_10038ae0,0);
      SelectUnits1(7,&DAT_10038ab0,1);
      SelectUnits1(7,&DAT_10038ac8,1);
      SelOpenGates(7);
      SelectUnits1(5,&DAT_10038a20,0);
      SelectUnits1(5,&DAT_100389d8,1);
      SelectUnits1(5,&DAT_10038bd0,1);
      SelChangeNation(5,0);
    }
  }
  uVar1 = Trigg(0xf);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(0x10);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(0xf,0);
      SelectUnits1(1,&DAT_10038498,0);
      SelSendTo(1,&DAT_100387d0,0x3c,0);
      SelectUnits1(1,&DAT_10038990,0);
      SelSendTo(1,&DAT_10038808,0x3c,0);
      SelectUnits1(1,&DAT_10038930,0);
      SelSendTo(1,&DAT_100387f8,0x3c,0);
      SelectUnits1(1,&DAT_100389a8,0);
      SelSendTo(1,&DAT_10038818,0x3c,0);
      SelectUnits1(1,&DAT_100384c8,0);
      SelSendTo(1,&DAT_10038838,0x3c,0);
      SelectUnits1(1,&DAT_10038968,0);
      SelSendTo(1,&DAT_10038830,0x3c,0);
      SelectUnits1(1,&DAT_10038980,0);
      SelSendTo(1,&DAT_10038840,0x3c,0);
      SelectUnits1(1,&DAT_10038b00,0);
      SelSendTo(1,&DAT_100389c0,0x3c,0);
      SelectUnits1(1,&DAT_10038a38,0);
      SelSendTo(1,&DAT_100389c0,0x3c,0);
      SelectUnits1(1,&DAT_10038a00,0);
      SelSendTo(1,&DAT_100389b0,0x3c,0);
      SelectUnits1(1,&DAT_100389d0,0);
      SelSendTo(1,&DAT_100389b0,0x3c,0);
    }
  }
  uVar1 = Trigg(0xb);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x17);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(0xb,0);
      SelectUnits1(1,&DAT_10038498,0);
      SelectUnits1(1,&DAT_10038990,1);
      SelectUnits1(1,&DAT_10038930,1);
      SelectUnits1(1,&DAT_10038b00,1);
      SelectUnits1(1,&DAT_10038a38,1);
      SelectUnits1(1,&DAT_10038950,1);
      SelectUnits1(1,&DAT_10038490,1);
      SelectUnits1(1,&DAT_10038a00,1);
      SelectUnits1(1,&DAT_100389d0,1);
      SelSendTo(1,&DAT_10038998,0x3c,0);
      SelectUnits1(1,&DAT_100389a8,0);
      SelectUnits1(1,&DAT_100384c8,1);
      SelectUnits1(1,&DAT_10038968,1);
      SelectUnits1(1,&DAT_10038980,1);
      SelectUnits1(1,&DAT_10038a00,1);
      SelectUnits1(1,&DAT_100389d0,1);
      SelSendTo(1,&DAT_10038988,0x3c,0);
      RunTimer(0x18,4000);
    }
  }
  uVar1 = Trigg(7);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = TimerDone(0x18);
    if ((uVar1 & 0xff) != 0) {
      SetTrigg(5,0);
      AttackEnemyInZone(&DAT_10038498,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038990,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038930,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038b00,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038a38,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038498,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038990,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038930,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038b00,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038a38,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038950,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_10038490,&DAT_10038970,0);
      AttackEnemyInZone(&DAT_100389a8,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_100384c8,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_10038968,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_10038980,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_10038a00,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_100389d0,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_100389a8,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_100384c8,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_10038968,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_10038980,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_10038a00,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_100389d0,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_10038a00,&DAT_10038958,0);
      AttackEnemyInZone(&DAT_100389d0,&DAT_10038958,0);
    }
  }
  uVar1 = Trigg(200);
  if ((uVar1 & 0xff) != 0) {
    uVar1 = Trigg(5);
    if ((uVar1 & 0xff) == 0) {
      SetTrigg(200,0);
      ShowPage("#PAGE20");
      SelectUnits1(5,&DAT_10038a40,0);
      SelectUnits1(5,&DAT_10038a78,1);
      SelectUnits1(5,&DAT_10038a28,1);
      SelectUnits1(5,&DAT_10038a10,1);
      SelectUnits1(5,&DAT_10038bd0,1);
      SelectUnits1(5,&DAT_10038bb8,1);
      SelectUnits1(5,&DAT_10038b30,1);
      SelectUnits1(5,&DAT_10038a58,1);
      SelectUnits1(5,&DAT_10038940,1);
      SelectUnits1(5,&DAT_10038a48,1);
      SelectUnits1(5,&DAT_100389d8,1);
      SelectUnits1(5,&DAT_10038a20,1);
      SelectUnits1(5,&DAT_10038a30,1);
      SelectUnits1(5,&DAT_10038af0,1);
      SelectUnits1(5,&DAT_100389e0,1);
      SelectUnits1(5,&DAT_10038b08,1);
      SelectUnits1(5,&DAT_10038ad8,1);
      SelectUnits1(5,&DAT_10038b10,1);
      SelectUnits1(5,&DAT_10038ae8,1);
      SelChangeNation(5,0);
      StartAI(1,"POLAND.0",0,2,0,2);
    }
  }
  uVar1 = Trigg(0xc9);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bb80(&DAT_10038ab8);
    if (iVar13 == 0) {
      uVar1 = Trigg(0x4b);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xc9,0);
        ShowPage("#PAGE21");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(0xca);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bb80(&DAT_10038528);
    if (iVar13 < 3) {
      uVar1 = Trigg(0x51);
      if ((uVar1 & 0xff) != 0) {
        SetTrigg(0xca,0);
        ShowPage("#PAGE22");
        LooseGame();
      }
    }
  }
  uVar1 = Trigg(0xcb);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bb80(&DAT_10038a28);
    FUN_1000bb80(&DAT_10038a10);
    FUN_1000bb80(&DAT_10038a58);
    FUN_1000bb80(&DAT_10038940);
    FUN_1000bb80(&DAT_10038a48);
    FUN_1000bb80(&DAT_10038a30);
    FUN_1000bb80(&DAT_10038b08);
    FUN_1000bb80(&DAT_10038ae8);
    FUN_1000bb80(&DAT_10038b10);
    FUN_1000bb80(&DAT_10038ad8);
    FUN_1000bb80(&DAT_10038af0);
    FUN_1000bb80(&DAT_100389e0);
    if (iVar13 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
        iVar12 < 0x32) {
      SetTrigg(0xcb,0);
      ShowPage("#PAGE26");
      LooseGame();
    }
  }
  uVar1 = Trigg(0xcc);
  if ((uVar1 & 0xff) != 0) {
    FUN_1000bb80(&DAT_10038498);
    FUN_1000bb80(&DAT_10038990);
    FUN_1000bb80(&DAT_10038930);
    FUN_1000bb80(&DAT_100389a8);
    FUN_1000bb80(&DAT_100384c8);
    FUN_1000bb80(&DAT_10038968);
    FUN_1000bb80(&DAT_10038980);
    FUN_1000bb80(&DAT_10038950);
    FUN_1000bb80(&DAT_10038490);
    if (iVar13 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 < 0x32) {
      SetTrigg(0xcc,0);
      ShowPage("#PAGE27");
      ShowVictory();
    }
  }
  uVar1 = Trigg(0xcf);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_10038768,1);
    if (iVar13 == 0) {
      iVar13 = GetUnitsAmount0(&DAT_10038768,0);
      if (0 < iVar13) {
        SetTrigg(0xcf,0);
        SelectUnits1(1,&DAT_10038918,0);
        SelChangeNation(1,0);
        SelectUnits1(0,&DAT_10038918,0);
        SelDie(0);
      }
    }
  }
  uVar1 = Trigg(0xd0);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_10038718,1);
    if (iVar13 == 0) {
      iVar13 = GetUnitsAmount0(&DAT_10038718,0);
      if (0 < iVar13) {
        SetTrigg(0xd0,0);
        SelectUnits1(1,&DAT_100389b8,0);
        SelChangeNation(1,0);
        SelectUnits1(0,&DAT_100389b8,0);
        SelDie(0);
      }
    }
  }
  uVar1 = Trigg(0xd1);
  if ((uVar1 & 0xff) != 0) {
    iVar13 = GetUnitsAmount0(&DAT_100387a0,1);
    if (iVar13 == 0) {
      iVar13 = GetUnitsAmount0(&DAT_100387a0,0);
      if (0 < iVar13) {
        SetTrigg(0xd1,0);
        SelectUnits1(1,&DAT_10038560,0);
        SelChangeNation(1,0);
        SelectUnits1(0,&DAT_10038560,0);
        SelDie(0);
      }
    }
  }
  uStack_8 = 0x1000a094;
  return;
}





BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID reserved) {
    (void)hInst; (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        OnInit();
    }
    return TRUE;
}

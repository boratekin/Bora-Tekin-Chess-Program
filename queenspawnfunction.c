#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int queenspawnfunction()
{
int q;
printf("QUEEN'S PAWN OPENINGS!\n");
printf("1-Queen's Gambit\n2-King's Indian Defense\n3-Nimzo-Indian Defense\n4-Queen's Indian Defense\n5-Bogo-Indian Defense\n6-Grunfeld Defense\n7-Dutch Defense\n8-Trompowsky Attack\n9-London System\n10-benoni defense\n11-Return Menu\n");
printf("\nPlease Choose The Theory\n");
scanf("%d",&q);
system("CLS");
switch(q)
{
case 1:
queensgambitfunction();
break;
case 2:
kingsindiandefensefunction();
break;
case 3:
nimzoindandefensefunction();
break;
case 4:
queensindiandefensefunction();
break;
case 5:
bogoindiandefensefunction();
case 6:
grunfelddefensefunction();
break;
case 7:
dutchdefensefunction();
break;
case 8:
trompowskyattackfunction();
break;
case 9:
londonsystemfunction();
break;
case 10:
benonidefensefunction();
break;
case 11:
return openingsfunction();
default:
return queenspawnfunction();
}
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int othersfunction()
{
int o;
printf("OTHER OPENINGS!\n");
printf("1-Catalan Opening\n2-Reti Opening\n3-English Opening\n4-Bird Opening\n5-King's Indian Attack\n6-King's Fianchetto Opening\n7-Nimzowitsch-Larsen Attack\n8-Polish Opening\n9-Grob Opening\n10-Return Menu\n");
printf("\nPlease Choose The Theory\n");
scanf("%d",&o);
system("CLS");
switch(o)
{
case 1:
catalanopeningfunction();
break;
case 2:
retiopeningfunction();
break;
case 3:
englishopeningfunction();
break;
case 4:
birdopeningfunction();
break;
case 5:
kingsindianattackfunction();
break;
case 6:
kingsfianchettofunction();
break;
case 7:
nimzolarsenattackfunction();
break;
case 8:
polishopeningfunction();
break;
case 9:
grobsattackfunction();
break;
case 10:
return openingsfunction();
default:
return othersfunction();
}
return 0;
}


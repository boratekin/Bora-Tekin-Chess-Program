#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int kingspawnfunction()
{
int y;
printf("KING'S PAWN OPENINGS!\n");
printf("1-Ruy Lopez(Spanish)Game\n2-Italian Game\n3-Sicilian Defense\n4-French Defense\n5-Caro-kann Defense\n6-King's Gambit\n7-Alekhine's Defense\n8-Scandinavian Defense\n9-Vienna Game\n10-Scotch Game\n11-Pirc Defense\n12-return to menu\n");
printf("\nPlease Choose The Theory\n");
scanf("%d",&y);
system("CLS");
switch(y)
{
case 1:
ruylopezfunction();
break;
case 2:
Italianfunction();
break;
case 3:
siciliandefensefunction();
break;
case 4:
frenchdefensefunction();
break;
case 5:
carokannfunction();
break;
case 6:
kingsgambitfunciton();
break;
case 7:
alekhinesdefensefunction();
break;
case 8:
scandinaviandefensefunction();
break;
case 9:
viennagamefunction();
break;
case 10:
scotchgamefunction();
break;
case 11:
pircdefensefunction();
break;
case 12:
return  openingsfunction();
default:
return kingspawnfunction();
}
return 0;
}

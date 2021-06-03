#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char ruylopezmainboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , 'B' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
int r;
int kingspawnfunction();
int morphydefensefunction();
int coziodefensefunction();
int birdsdefensefunction();
int steinitzdefensefunction();
int schliemanndefensefunction();
int classicaldefensefunction();
int berlindefensefunciton();
int smyslovdefensefunction();
int ruylopezfunction()
{
printf("RUY LOPEZ(SPANISH) GAME!\n");
printf("The Ruy Lopez opening (SPANISH) takes its name from the Spanish priest Ruy Lopez, who analyzed this theory in the 15th century.Even today it is a very principled theory and is frequently preferred by Grandmasters\n");
printf("The basic strategy of the opening is to press the knight on the c6 square.Therefore, create tension on the d5 square\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3.Bb5\n");
printf("View of the position on the board(from whites)\n");

    int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , ruylopezmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("The main lines of ruy lopez opening is given below. Please select the one you want to view.\n");
printf("1-Morphy Defense\n2-Cozio Defense\n3-Bird's Defense\n4-Steinitz Defense\n5-Schliemann Defense\n6-Classical Defense\n7-Berlin Defense\n8-Smyslov defense\n9-Return King's pawn menu\n");
scanf("%d",&r);
system("CLS");
switch(r)
{
case 1:
morphydefensefunction();
break;
case 2:
coziodefensefunction();
break;
case 3:
birdsdefensefunction();
break;
case 4:
steinitzdefensefunction();
break;
case 5:
schliemanndefensefunction();
break;
case 6:
classicaldefensefunction();
break;
case 7:
berlindefensefunciton();
break;
case 8:
smyslovdefensefunction();
break;
case 9:
return kingspawnfunction();
break;
default:
return kingspawnfunction();
}
return 0;
}



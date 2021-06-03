#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char italianmainboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , 'B' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
int guiocopianofunction();
int twoknightsdefenseitalianfunction();
int fourknightsgamefunction();
int kingspawnfunction();
int italian;
int Italianfunction()
{
printf("ITALIAN GAME!\n");
printf("The Italian Game is one of the oldest recorded chess openings;\nit occurs in the Gottingen manuscript and was developed by players such as Damiano and Polerio in the 16th century, and later by Greco in 1620, who gave the game its main line.\n");
printf("Due to the Italian bishop facing the opponent's king side, it has rather aggressive lines of continuation compared to the Ruy Lopez opening.\n");
printf("Today, it continues to be preferred by GRANDMASTERS.\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3.Bc4\n");
printf("View of the position on the board(from whites)\n");

int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , italianmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("The main lines of Italian opening is given below. Please select the one you want to view.\n");
printf("1-Guioco Piano\n2-Four Knights Game\n3-Two Knights Defense\n4-Return King's Pawn menu\n");
scanf("%d",&italian);
system("CLS");
switch(italian)
{
case 1:
guiocopianofunction();
break;
case 2:
fourknightsgamefunction();
break;
case 3:
twoknightsdefenseitalianfunction();
break;
case 4:
return kingspawnfunction();
break;
default:
return kingspawnfunction();
}
return 0;
}




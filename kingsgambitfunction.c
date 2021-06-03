#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char kingsgambitmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'P' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int kingspawnfunction();
int kingsgambitfunciton()
{
printf("KING'S GAMBIT!\n");
printf("The King's Gambit was one of the most popular openings for over 300 years, and has been played by many of the strongest players in many of the greatest brilliancies, including the Immortal Game.\n");
printf("Its basic strategy is central domination, but it is a very risky and bold opening.\n");
printf("Many books have been written about the King's Gambit and it has been observed that black has an advantage in the lines developed. For this reason, it is not played often today.\n");
printf("1.e4-e5\n2.f4\n");
printf("View of the position on the board(from whites)\n");
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , kingsgambitmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("Press any key to return King's pawn openings\n");
toupper(getch());
system("CLS");
return kingspawnfunction();
}

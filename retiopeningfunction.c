#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char retiopeningmainboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , 'P' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };

int retiopeningfunction()
{
printf("RETI OPENING!\n");
printf("According to Reti, the opening was introduced into master play in the early part of 1923. Reti used the opening most famously to defeat Jose Raul Capablanca, the reigning World Chess Champion, in a game at the 1924 New York tournament.\n");
printf("This is usually a pretty quiet way to start the game. The knight develops to a good square, and White maintains the flexibility of the central pawns. A later d2-d4 move may transpose to a 1.d4 opening (while avoiding certain lines), while a later c2-c4 move might transpose to the English opening.\n");
printf("It is a flexible opening but not played often in top level chess events.\n");
printf("1.Nf3-d5\n2.c4\n");
printf("View of the position on the board(from whites)\n");
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , retiopeningmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("Press any key to return other openings\n");
toupper(getch());
system("CLS");
return othersfunction();
}

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
char trompowskyattackmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , ' ' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' },
                    { ' ' , 'B' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int queenspawnfunction();
int trompowskyattackfunction()
{
printf("TROMPOWSKY ATTACK!\n");
printf("The opening is named after the one-time Brazilian champion Octavio Trompowsky who played it in the 1930s and 1940s. However, chess master William Allen Ruth developed the opening simultaneously in the 1930s, and was well-known by locals in Pennsylvania as the Ruth Opening. The Trompowsky has also been called The Zot.\n");
printf("One of the less usual queen's-pawn openings, the Trompowsky immediately develops the bishop to an active spot, with the intention (usually) to capture on f6 and double Black's pawns.\n");
printf("It is a principled opening, but it is not preferred as it is not desired to give up the high-level bishop advantage early.\n");
printf("1.d4-Nf6\n2.Bg5\n");
printf("View of the position on the board(from whites)\n");
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , trompowskyattackmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("Press any key to return Quenn's Pawn openings\n");
toupper(getch());
system("CLS");
return queenspawnfunction();
}

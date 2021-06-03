#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char kingsindianattackmainboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , ' ' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , 'P' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char kingsindianattacksetupboard[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'B' , 'P' , ' ' , 'N' , 'P' , 'P' , 'P' },
                    { ' ' , 'P' , 'N' , ' ' , 'P' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' }
                    };

int othersfunction();
int kingsindianattackfunction()
{
printf("KING'S INDIAN ATTACK!\n");
printf("The King's Indian Attack is a mirror image of the setup adopted by Black in the King's Indian Defense. Yet, because of White's extra tempo, the nature of the subsequent play is often different from that of a typical King's Indian Defense.\n");
printf("KIA is a very principled opening and is often preferred against French defense. Although not generally played in high-level tournaments, GRANDMASTERS often prefer this opening in online bullet games.\n");
printf("1.Nf3-d5\n2.g3\n");
printf("View of the position on the board(from whites)\n");
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , kingsindianattackmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");

printf("  ==>TYPICAL SETUP OF KIA FOR WHITE<==\n");
for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , kingsindianattacksetupboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("Press any key to return other openings\n");
toupper(getch());
system("CLS");
return othersfunction();
}

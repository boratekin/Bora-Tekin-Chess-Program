#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char kingsfianchettomainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , ' ' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , 'P' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int othersfunction();
int kingsfianchettofunction()
{
printf("KING'S FIANCHETTO OPENING!\n");
printf("Sometimes called the Hungarian Opening, 1.g3 prepares to fianchetto the king's-bishop (Bg2), from which spot it will strike through the center. The delay of Nf3 leads to certain subtleties compared to the King's Indian attack.\n");
printf("Since it gives the pressure on the center to black, it is generally not preferred in high tournaments, but it can be preferred in online bullet parties.\n");
printf("1.g3\n");
printf("View of the position on the board(from whites)\n");
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , kingsfianchettomainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("Press any key to return other openings\n");
toupper(getch());
system("CLS");
return othersfunction();
}

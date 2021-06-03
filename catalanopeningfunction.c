#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char catalanmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , ' ' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' },
                    { ' ' , 'P' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int othersfunction();
int catalanopeningfunction()
{
printf("CATALAN OPENING!\n");
printf("The Catalan derives its name from Catalonia, after tournament organisers at the 1929 Barcelona tournament asked Savielly Tartakower to create a new variation in homage to the area's chess history.\n");
printf("In the Catalan, White combines the space-gaining moves d4 and c4 with a fianchetto of the king's bishop. This places the center of gravity of the white pressure on the queenside, while hoping to keep the white king safe in the long-term.\n");
printf("Even though the Catalan opening is played at low and medium levels, today it is not preferred by blacks because the high-level further lines give a slight advantage to white.\n");
printf("1.d4-Nf6\n2.c4-e6\n3.g3\n");
printf("View of the position on the board(from whites)\n");
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , catalanmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("Press any key to return other openings\n");
toupper(getch());
system("CLS");
return othersfunction();
}

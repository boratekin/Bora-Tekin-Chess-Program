#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char scotchmainboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , 'P' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };

int kingspawnfunction();
int scotchgamefunction()
{
printf("SCOTCH GAME!\n");
printf("The opening received its name from a correspondence match in 1824 between Edinburgh and London. Popular in the 19th century, by 1900 the Scotch had lost favour among top players because it was thought to release the central tension too early and allow Black to equalise without difficulty. More recently, grandmasters Garry Kasparov and Jan Timman helped to re-popularize the Scotch when they used it as a surprise weapon to avoid the well-analysed Ruy Lopez.\n");
printf("It is sometimes played by GRANDMASTERS to avoid Ruy Lopez.\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3.d4");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , scotchmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return King's pawn openings\n");
toupper(getch());
system("CLS");
return kingspawnfunction();

}

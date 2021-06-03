#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char alekhinesmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int kingspawnfunction();
int alekhinesdefensefunction()
{
printf("ALEKHINE'S DEFENSE!\n");
printf("The Alekhine's defense is named after Alexander Alekhine, who introduced it in the 1921 Budapest tournament in games against Endre Steiner and Fritz Sämisch.\n");
printf("The Alekhine's defense used to be a more common opening. Although it is preferred by GRANDMASTERS today, it is not played often.\n");
printf("The basic ideas of Blacks are  take development priority, and put pressure on weakening squares.\n");
printf("1.e4-Nf6\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , alekhinesmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return King's pawn openings\n");
toupper(getch());
system("CLS");
return kingspawnfunction();
}

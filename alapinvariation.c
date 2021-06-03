#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char alapinmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };





int siciliandefensefunction();
int alapinfunction()
{
printf("SICILLIAN DEFENSE ALAPIN VARITATION!\n");
printf("The Alapin Sicilian, also known as the Alapin variation or the “c3 Sicilian,” is an opening white can employ against the Sicilian Defense. The opening moves are 1.e4-c5 2.c3\n");
printf("1.e4-e5\n2.c3\n");
printf("View of the position on the board(from whites)\n");
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , alapinmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("Press any key to return Sicilian Defense\n");
toupper(getch());
system("CLS");
return siciliandefensefunction();
}

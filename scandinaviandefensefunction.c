#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char scandinavianmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int kingspawnfunction();
int scandinaviandefensefunction()
{
printf("SCANDINAVIAN DEFENSE!\n");
printf("The Scandinavian Defense is one of the oldest recorded openings, first recorded as being played between Francesc de Castellvi and Narcis Vinyoles in Valencia in 1475 in what may be the first recorded game of modern chess,and being mentioned by Lucena in 1497.\n");
printf("It is an aggressive opening. It can be said that he rejects basic opening and development principles. It is not played very often at high levels. It is usually transposed to the caro-kann defense.\n");
printf("1.e4-d5\n");
printf("View of the position on the board(from blacks)\n");

int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , scandinavianmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return King's pawn openings\n");
toupper(getch());
system("CLS");
return kingspawnfunction();

}


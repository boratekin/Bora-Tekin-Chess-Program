#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char schliemanndefensemainboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'p' , 'p' , ' ' , ' ' , 'B' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , ' ' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
int ruylopezfunction();
int schliemanndefensefunction()
{
printf("RUY LOPEZ SCHLIEMANN DEFENSE!\n");
printf("The Schliemann Defence or Schliemann-Jaenisch Gambit is a sharp line in which Black plays for a kingside attack, frequently sacrificing one or two pawns.\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3.Bb5-f5\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , schliemanndefensemainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n\n");
printf("Press any key to return Ruy Lopez Opening\n");
toupper(getch());
system("CLS");
return ruylopezfunction();
}

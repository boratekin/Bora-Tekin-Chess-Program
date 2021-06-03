#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char coziodefensemainboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , 'B' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'n' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
int ruylopezfunction();
int coziodefensefunction()
{
printf("RUY LOPEZ COZIO DEFENSE!\n");
printf("The Cozio Defence, 3.Nge7, is distinctly old-fashioned and the least popular of the defences at Black's third move. Although Bent Larsen used it occasionally with success, it remains one of the least explored variations of the Ruy Lopez.\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3-Bb5-Nge7\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , coziodefensemainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n\n");
printf("Press any key to return Ruy Lopez Opening\n");
toupper(getch());
system("CLS");
return ruylopezfunction();
}



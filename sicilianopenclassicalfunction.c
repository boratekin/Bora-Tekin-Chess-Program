#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char sicilianclassicalvariationmainboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , 'N' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , 'p' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , ' ' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
int opensicilianfunction();
int siciliandefensefunction();
int sicilianclassicalfunction()
{
printf("SICILIAN DEFENSE:OPEN CLASSICAL VARIATION!\n");
printf("The Classical Variation is a chess variation of the Sicilian Defense. Black does not play 5… a6 as in the Najdorf variation but rather develops a piece instead and brings his knight out to its most effective square c6.\n");
printf("1.e4-c5\n2.Nf3-d6\n3.d4-cxd4\n4.Nxd4-Nf6\n5.Nc3-Nc6\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , sicilianclassicalvariationmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n\n");
printf("Press any key to return Sicilian Defense:OPEN\n");
toupper(getch());
system("CLS");
return opensicilianfunction();
}

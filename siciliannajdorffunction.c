#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char najdorfsicilianmainboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , 'N' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , 'p' , ' ' , ' ' , 'p' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , ' ' , 'p' , ' ' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int opensicilianfunction();
int siciliandefensefunction();
int siciliannajdorffunction()
{
printf("SICILIAN NAJDORF!\n");
printf("The Najdorf variation of the Sicilian Defense is one of the most respected and deeply studied of all chess openings.\n");
printf("Sicilian Narjdof Variation is named after the Polish GM Miguel Najdorf,although he wast not the first strong player to play the variation\n");
printf("1.e4-c5\n2.Nf3-d6\n3.d4-cxd4\n4.Nxd4-Nf6\n5.Nc3-a6\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , najdorfsicilianmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n\n");
printf("Press any key to return Sicilian Defense:OPEN\n");
toupper(getch());
system("CLS");
return opensicilianfunction();
}

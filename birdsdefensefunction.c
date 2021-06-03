#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char birdsdefensemainboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , 'n' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , 'B' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
int ruylopezfunction();
int birdsdefensefunction()
{
printf("RUY LOPEZ BIRD'S DEFENSE!\n");
printf("This defense was published in 1843 in Paul Rudolf von Bilguer's Handbuch des Schachspiels and explored by Henry Bird in the late 19th century.\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3.Bb5-Nd4\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , birdsdefensemainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n\n");
printf("Press any key to return Ruy Lopez Opening\n");
toupper(getch());
system("CLS");
return ruylopezfunction();
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char grobsattackmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , ' ' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'P' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int othersfunction();
int grobsattackfunction()
{
printf("GROB OPENING!(GROB'S ATTACK)!\n");
printf("The opening takes its name from Swiss International Master Henri Grob  who analysed it extensively and played hundreds of correspondence games with it.\n");
printf("it is not a popular opening.\n");
printf("1.g4\n");
printf("View of the position on the board(from whites)\n");


int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , grobsattackmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("Press any key to return other openings\n");
toupper(getch());
system("CLS");
return othersfunction();
}

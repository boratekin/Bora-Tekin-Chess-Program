#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


char italianfourkinghtsmainboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , 'B' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , 'b' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , ' ' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };

int Italianfunction();
int fourknightsgamefunction()
{
printf("ITALIAN FOUR KNIGHTS GAME!\n");
printf("A further possibility is 4.Bc4, the Italian Four Knights Game, or Prussian Four Knights Game, popular in the 1880s, though this line is regarded as inferior according to Pinski, and an outright mistake by IM Larry D. Evans.\n");
printf("This opening usually transposed from gucio pianismo\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3.Bc4-Bc5\n4.Nc3-Nf6\n");
printf("View of the position on the board(from whites)\n");

int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , italianfourkinghtsmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");



printf("Press any key to return Italian Game\n");
toupper(getch());
system("CLS");
return Italianfunction();
}

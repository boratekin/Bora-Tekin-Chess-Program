#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char viennamainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int kingspawnfunction();
int viennagamefunction()
{
printf("VIENNA GAME!\n");
printf("The Vienna Game was originally called Hamppe's Game after Carl Hamppe (1815-1876) and took its current name in the 1890's due to its ongoing popularity in Vienna, for centuries the capital of the Holy Roman and Austro-Hungarian Empires.\n");
printf("Vienna is a rare opening, and cannot be often seen in Grandmasters' games. Black has strong counter-chances with d7-d5 push.\n");
printf("1.e4-e5\n2.Nc3\n");
printf("View of the position on the board(from whites)\n");
int i , j , k ;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , viennamainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("Press any key to return King's pawn openings\n");
toupper(getch());
system("CLS");
return kingspawnfunction();
}

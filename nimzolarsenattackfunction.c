#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char nimzolarsenattackmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , ' ' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'P' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int othersfunction();
int nimzolarsenattackfunction()
{
printf("NIMZOWITSCH-LARSEN ATTACK!\n");
printf("This hypermodern opening  is the queen side fianchetto structure, which was put forward by Aaron Nimzowitsch in 1920.\n");
printf("White can choose to begin the game by immediately fianchettoing the queen's-bishop with 1.b3. The bishop next will come to b2, putting pressure down the long diagonal. This is a 'hypermodern' opening, where White attempts to control the center with pieces from a distance, rather than by pawns.\n");
printf("it is not generally preferred at high level, but is played in online chess, especially in bullet parties.\n");
printf("1.b3\n");
printf("View of the position on the board(from whites)\n");
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , nimzolarsenattackmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("Press any key to return other openings\n");
toupper(getch());
system("CLS");
return othersfunction();

}

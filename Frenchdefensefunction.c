#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char frenchmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };

int kingspawnfunction();
int frenchdefensefunction()
{
printf("FRENCH DEFENSE!\n");
printf("The French Defence is named after a match played by correspondence between the cities of London and Paris in 1834. It was Jacques Chamouillet, one of the players of the Paris team, who persuaded the others to adopt this defence.\n");
printf("Black's main idea in the opening; allowing white to move the center pawns up to e5 and d4, blocking them with the  e6 and d5 pawns (advance variation). With this situation, special chains are to stabilize the center for a long time and save time for blacks. This defense was not fully popular in its period due to the fact that it was severely fragmented by Alexander Alekhine and Mikhail Tal. It also creates a problem in the development of Black's queen bishop.\n");
printf("Although it continues to be played very often today, it is not preferred at high levels.\n");
printf("1.e4-e6\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , frenchmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return King's pawn openings\n");
toupper(getch());
system("CLS");
return kingspawnfunction();
}

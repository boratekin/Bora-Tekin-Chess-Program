#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char benonidefensemainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , 'p' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int queenspawnfunction();
int benonidefensefunction()
{
printf("BENONI DEFENSE!\n");
printf("The Benoni Defense was first mentioned and got its name  from an 1825 manuscript by Aaron Reinganum, Ben-oni, or the Pawn-Sacrifice Defense in Chess. The word benoni means  son of sorrow in Hebrew.\n");
printf("The aim of Blacks is to lock the game during the middle game and to gain from the position by changing pieces without leaving any weak spots at the end of the game.\n");
printf("It is a difficult to play and very principled defense. It is preferred by amateur and high level.\n");
printf("1.d4-Nf6\n2.c4-c5\n3.d5\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , benonidefensemainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return Quenn's Pawn openings\n");
toupper(getch());
system("CLS");
return queenspawnfunction();
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char pircmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , 'P' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'p' , 'n' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { 'p' , ' ' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int kingspawnfunction();
int pircdefensefunction()
{
printf("PIRC DEFENSE!\n");
printf("The Pirc Defense is a chess opening for Black against 1.e4 which is named after the Slovenian GM Vasja Pirc.\n");
printf("The Pirc Defense is a hypermodern opening. This means that Black does not try to control the center early on with his pawns, but spends some time fianchettoing his dark-squared bishop and only later attacks the center.\n");
printf("The Pirc Defense is a choice of champions. The opening is frequently played by many top GMs including Vladimir Kramnik, Alexander Grischuk, and Shakhriyar Mamedyarov, as well as famous chess authors like GM Mihail Marin and GM Gawain Jones.\n");
printf("1.e4-d6\n2.d4-Nf6\n3.Nc3-g6\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , pircmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return King's pawn openings\n");
toupper(getch());
system("CLS");
return kingspawnfunction();
}


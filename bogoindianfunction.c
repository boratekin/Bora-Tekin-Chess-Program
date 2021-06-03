#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char bogoindianmainboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , 'P' , 'b' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , ' ' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int queenspawnfunction();
int bogoindiandefensefunction()
{
printf("BOGO-INDIAN DEFENSE!\n");
printf("The Bogo-Indian Defense - named for Efim Bogoljubow - develops the kingside quickly and seeks to fight for central squares in a less-direct manner, not using the pawns immediately.\n");
printf("The Endgame theory is more problematic in some variants than other openings, so it is not highly preferred at a high level.\n");
printf("1.d4-Nf6\n2.c4-e6\n3.Nf3-Bb4+\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , bogoindianmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return Quenn's Pawn openings\n");
toupper(getch());
system("CLS");
return queenspawnfunction();
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char queensindianmainboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , 'p' , ' ' , ' ' , 'p' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , ' ' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int queenspawnfunction();
int queensindiandefensefunction()
{
printf("QUEEN'S INDIAN!\n");
printf("The Queen's Indian is half of Aron Nimzovitch's conception of the center (the other half being the Nimzo-Indian). White refuses to allow the pin ...Bb4 by playing 3.Nf3, and Black responds by fianchettoing the queen's-bishop - thus fighting for control of the center from a distance.\n");
printf("It is still a respected opening and is played by GRANDMASTERS, though not often.\n");
printf("1.d4-Nf6\n2.c4-e6\n3.Nf3-b6\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , queensindianmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return Quenn's Pawn openings\n");
toupper(getch());
system("CLS");
return queenspawnfunction();
}

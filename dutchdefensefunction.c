#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char dutchdefensemainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int queenspawnfunction();
int dutchdefensefunction()
{
printf("DUTCH DEFENSE!\n");
printf("Elias Stein recommended the defence as the best reply to 1.d4 in his 1789 book.\n");
printf("The Dutch Defense might look like a reverse version of the Sicilian - since both moves use a wing-pawn to mechanically prevent the creation of the 'perfect pawn center' by White. But due to the king positions, the Dutch is very different.\n");
printf("In high level is not overly preferred, as it creates weakness on the kingside and may cause Black to stay in bad positions.\n");
printf("1.d4-f5\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , dutchdefensemainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return Quenn's Pawn openings\n");
toupper(getch());
system("CLS");
return queenspawnfunction();
}

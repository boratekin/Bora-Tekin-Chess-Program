#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char kingsindianboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'p' , 'n' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , ' ' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };

int queenspawnfunction();
int kingsindiandefensefunction()
{
printf("KING'S INDIAN DEFENSE!\n");
printf("The earliest known use of the term Indian Defence was in 1884. The modern names (King's Indian Defense,King's Indian Attack), etc. arose in the mid-twentieth century and are attributed to Hans Kmoch\n");
printf("It is still a highly regarded opening today and is frequently played by GRANDMASTERS.\n");
printf("1.d4-nf6\n2.c4-g6\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , kingsindianboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return Quenn's Pawn openings\n");
toupper(getch());
system("CLS");
return queenspawnfunction();
}

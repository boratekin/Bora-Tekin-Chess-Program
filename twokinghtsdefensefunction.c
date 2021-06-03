#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char twoknightsdefensemainboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , 'B' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
int Italianfunction();
int twoknightsdefenseitalianfunction()
{
printf("ITALIAN GAME TWO KNIGHTS DEFENSE!\n");
printf("First recorded by Polerio in the late 16th century, this line of the Italian Game was extensively developed in the 19th century. Black's third move is a more aggressive defense than the Giuoco Piano.\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3.Bc4-Nf6\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , twoknightsdefensemainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return Italian Game\n");
toupper(getch());
system("CLS");
return Italianfunction();
}

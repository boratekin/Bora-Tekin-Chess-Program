#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
char nimzoindianmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , 'P' , 'b' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , ' ' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int queenspawnfunction();
int nimzoindandefensefunction()
{
printf("NIMZO-INDIAN DEFENSE!\n");
printf("This hypermodern opening was developed by Aron Nimzowitsch who introduced it to master-level chess in the early 20th century. Unlike most Indian openings, the Nimzo-Indian does not involve an immediate fianchetto, although Black often follows up with ...b6 and ...Bb7.\n");
printf("It is still a highly regarded opening today and is frequently played by GRANDMASTERS.\n");
printf("1.d4-Nf6\n2.c4-e6\n3.Nc3-Bb4\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , nimzoindianmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return Quenn's Pawn openings\n");
toupper(getch());
system("CLS");
return queenspawnfunction();
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char grunfeldmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { ' ' , 'p' , 'n' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , ' ' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int queenspawnfunction();
int grunfelddefensefunction()
{
printf("GRUNFELD DEFENSE!\n");
printf("Grunfeld defense gain popularity after Ernst Grunfeld introduced it into international play at Vienna 1922, where, in his first game with the defense, he defeated future world champion Alexander Alekhine.\n");
printf("The aim of blacks is to initially leave central control to whites and then attack later.\n");
printf("It is a prestigious opening and is sometimes played by high-level grand masters.\n");
printf("1.d4-Nf6\n2.c4-g6\n3.Nc3-d5\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , grunfeldmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("Press any key to return Quenn's Pawn openings\n");
toupper(getch());
system("CLS");
return queenspawnfunction();

}

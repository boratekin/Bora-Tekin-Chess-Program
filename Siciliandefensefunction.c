#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char sicilianmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int kingspawnfunction();
int alapinfunction();
int closedsicilianfunction();
int opensicilianfunction();
int sicilian;
int siciliandefensefunction()
{
printf("SICILIAN DEFENSE!\n");
printf("The Sicilian Defense was analysed by Giulio Polerio in his 1594 manuscript on chess, though he did not use the term 'Sicilian Defence'.It was later the subject of analyses by leading players of the day Alessandro Salvio (1604), Don Pietro Carrera (c. 1617), and Gioachino Greco (1623), and later Conte Carlo Francesco Cozio (c. 1740). \n");
printf("The Sicilian Defense is a respectable opening that rejects symmetrical positions and aims to win by creating complexity in the position.\n");
printf("Today, it is an opening that is preferred by GRANDMASTERS and gives good attack ideas to black.\n");
printf("1.e4-c5\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , sicilianmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("The main Systems of Sicilian Defense is given below. Please select the one you want to view.\n");
printf("1-Open Sicilian\n2-Closed Sicilian\n3-Alapin Variation\n4-Return King's pawn menu\n");
scanf("%d",&sicilian);
system("CLS");
switch(sicilian)
{
case 1:
opensicilianfunction();
break;
case 2:
closedsicilianfunction();
break;
case 3:
alapinfunction();
break;
case 4:
return kingspawnfunction();
default:
return siciliandefensefunction();
}
return 0;
}

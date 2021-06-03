//BORA TEKIN
//FINAL PROJECT
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int intro();
int openingsfunction();
int chessquizmain();
int examplegamesmain();
char board[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int main()
{
intro();
int x;
printf("==>This Program includes Common Chess Openings,Quiz,and Example games<==\n");
int display();

    int i , j , k;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , board[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");

printf("Please Select\n");
printf("1-Openings\n2-Quiz\n3-Example Games\n");
scanf("%d",&x);
system("CLS");
switch(x)
{
case 1:
openingsfunction();
break;
case 2:
chessquizmain();
break;
case 3:
examplegamesmain();
break;
default:
return main();
}
return 0;
}



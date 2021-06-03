#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char giuocopianomainboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , 'B' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , 'b' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , ' ' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
char giuocopianissimomainboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , 'P' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , 'B' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , 'b' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , ' ' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
char evansgambitmainboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , ' ' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , 'B' , 'P' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , 'b' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , ' ' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
int guioco;
int Italianfunction();
int guiocopianofunction()
{
printf("Please select the Opening..\n");
printf("1.Guioco Piano\n2.Guioco Pianissimo\n3.Evans Gambit\n4.Return Italian Function\n");
scanf("%d",&guioco);
system("CLS");
switch(guioco)
{
case 1:
printf("ITALIAN GAME GUIOCO PIANO!\n");
printf("The Giuoco Piano(Quiet Game) is a part of the Italian Game opening.In the Main line, the main idea of white is rapid development.\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3.Bc4-Bc5\n");
printf("View of the position on the board(from whites)\n");

int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , giuocopianomainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("Press any key to return Gucio Piano.\n");
toupper(getch());
system("CLS");
return guiocopianofunction();
break;
case 2:
printf("GIUOCO PIANISSIMO!(4.d3)\n");
printf("With 4.d3, White plays the Giuoco Pianissimo(very quite game).\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3.Bc4-Bc5\n4.d3\n");
printf("View of the position on the board(from whites)\n");
for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , giuocopianissimomainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("Press any key to return Gucio Piano.\n");
toupper(getch());
system("CLS");
return guiocopianofunction();
break;
case 3:
printf("ITALIAN GAME EVANS GAMBIT!\n");
printf("The Evans Gambit is an aggressive line of the Giuoco Piano.The gambit is named after the Welsh sea Captain William Davies Evans, the first player known to have employed it.\n");
printf("1.e4-e5\n2.Nf3-Nc6\n3.Bc4-Bc5\n4.b4\n");
printf("View of the position on the board(from whites)\n");
for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , evansgambitmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("Press any key to return Gucio Piano.\n");
toupper(getch());
system("CLS");
return guiocopianofunction();
case 4:
return Italianfunction();
system("CLS");
break;
default:
Italianfunction();
}
return 0;
}

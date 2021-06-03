#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char game2board[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char game21movesboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char game22movesboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'q' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , ' ' , 'b' , 'n' , 'r' }
                    };
char game23movesboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'b' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'q' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , ' ' , ' ' , 'n' , 'r' }
                    };
char game24movesboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'B' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'b' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'q' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , ' ' , ' ' , ' ' , 'r' }
                    };
char game25movesboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , 'B' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , 'b' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'q' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , ' ' , ' ' , ' ' , 'r' }
                    };
char game26movesboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , 'B' , 'P' , 'P' , 'P' , 'P' },
                    { 'P' , ' ' , 'b' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'q' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , ' ' , ' ' , ' ' , 'r' }
                    };
char game27movesboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { 'P' , ' ' , 'B' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'q' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , ' ' , 'r' , 'k' , ' ' , ' ' }
                    };
char game28movesboard[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , 'Q' , 'B' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { 'P' , ' ' , 'B' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'q' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , ' ' , 'r' , 'k' , ' ' , ' ' }
                    };
char game29movesboard[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , 'Q' , 'B' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , ' ' },
                    { 'P' , ' ' , 'B' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'q' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , ' ' , 'r' , ' ' , 'k' , ' ' }
                    };
char game210movesboard[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , 'Q' , 'B' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , ' ' },
                    { 'P' , ' ' , 'n' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'q' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , ' ' , 'r' , ' ' , 'k' , ' ' }
                    };
char game211movesboard[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , 'B' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , ' ' },
                    { 'P' , ' ' , 'Q' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'p' },
                    { 'p' , 'p' , 'p' , 'p' , 'q' , 'p' , 'p' , ' ' },
                    { 'r' , 'n' , 'b' , ' ' , 'r' , ' ' , 'k' , ' ' }
                    };
char game212movesboard[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , 'B' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , 'P' , ' ' , 'P' , ' ' },
                    { 'P' , ' ' , 'Q' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'P' , ' ' , 'P' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , 'N' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'p' },
                    { 'p' , 'p' , 'p' , ' ' , 'q' , 'p' , 'p' , ' ' },
                    { 'r' , 'n' , 'b' , ' ' , 'r' , ' ' , 'k' , ' ' }
                    };
char game213movesboard[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , 'B' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , ' ' , ' ' , 'P' , ' ' },
                    { 'P' , ' ' , 'Q' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , 'P' , ' ' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'p' },
                    { 'p' , 'p' , 'p' , ' ' , 'q' , 'p' , 'p' , ' ' },
                    { 'r' , 'n' , 'b' , ' ' , 'r' , ' ' , 'k' , ' ' }
                    };
char game214movesboard[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , ' ' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , ' ' , ' ' , 'P' , ' ' },
                    { 'P' , ' ' , 'Q' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'B' , ' ' , 'p' , 'P' , ' ' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'p' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'q' , 'p' , 'p' , ' ' },
                    { 'r' , 'n' , 'b' , ' ' , 'r' , ' ' , 'k' , ' ' }
                    };

char game215movesboard[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , ' ' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , ' ' , ' ' , 'P' , ' ' },
                    { 'P' , ' ' , 'Q' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'B' , ' ' , 'p' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , 'P' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'b' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'q' , 'p' , 'p' , ' ' },
                    { 'r' , 'n' , ' ' , ' ' , 'r' , ' ' , 'k' , ' ' }
                    };
char game216movesboard[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'P' , 'P' , ' ' , ' ' , ' ' , 'P' , 'R' },
                    { 'P' , ' ' , 'Q' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'B' , ' ' , 'p' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , 'q' , ' ' , ' ' , ' ' , 'P' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'b' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , ' ' , 'p' , 'p' , ' ' },
                    { 'r' , 'n' , ' ' , ' ' , 'r' , ' ' , 'k' , ' ' }
                    };
char game217movesboard[8][8] = {
                    { ' ' , 'K' , ' ' , ' ' , ' ' , ' ' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , ' ' , ' ' , 'P' , 'R' },
                    { 'P' , ' ' , 'Q' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'B' , ' ' , 'p' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , 'q' , ' ' , ' ' , ' ' , 'P' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'b' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , ' ' , 'p' , 'p' , ' ' },
                    { 'r' , 'n' , ' ' , ' ' , 'r' , 'k' , ' ' , ' ' }
                    };
char game218moveboard[8][8] = {
                    { ' ' , 'K' , ' ' , ' ' , ' ' , ' ' , ' ' , 'R' },
                    { ' ' , 'P' , 'P' , ' ' , ' ' , ' ' , 'P' , 'R' },
                    { 'P' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'B' , ' ' , 'p' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , 'q' , ' ' , ' ' , ' ' , 'P' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'b' , 'Q' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , ' ' , 'p' , 'p' , ' ' },
                    { 'r' , 'n' , ' ' , ' ' , 'r' , 'k' , ' ' , ' ' }
                    };
int game2()
{
int i , j , k;
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game2board[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("Press any key to start game!\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game21movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game22movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game23movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game24movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game25movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game26movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game27movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game28movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game29movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4 9.a4-kb8\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game210movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4 9.a4-kb8 10.Nb5-nxf3+\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game211movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4 9.a4-kb8 10.Nb5-nxf3+ 11.Qxf3-a6\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game212movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4 9.a4-kb8 10.Nb5-nxf3+ 11.Qxf3-a6 12.c4?-e5?\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game213movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4 9.a4-kb8 10.Nb5-nxf3+ 11.Qxf3-a6 12.c4?-e5? 13.d4-exd4?!\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game214movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4 9.a4-kb8 10.Nb5-nxf3+ 11.Qxf3-a6 12.c4?-e5? 13.d4-exd4?! 14.Bf4-axb5!\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game215movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4 9.a4-kb8 10.Nb5-nxf3+ 11.Qxf3-a6 12.c4?-e5? 13.d4-exd4?! 14.Bf4-axb5!\n");
printf("15.axb5-bd6?\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game216movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4 9.a4-kb8 10.Nb5-nxf3+ 11.Qxf3-a6 12.c4?-e5? 13.d4-exd4?! 14.Bf4-axb5!\n");
printf("15.axb5-bd6? 16.Ra2-qf5\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game217movesboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4 9.a4-kb8 10.Nb5-nxf3+ 11.Qxf3-a6 12.c4?-e5? 13.d4-exd4?! 14.Bf4-axb5!\n");
printf("15.axb5-bd6? 16.Ra2-qf5 17.Rfa1-kc8\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("Blitz Game\nScandinavian Defense:Mieses-Kotrc Variation\n");
printf("GM Magnus Carlsen(2886)(0)\n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , game218moveboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("GM Luis Paulo Supi(2369)(1)\n\n");
printf("1.e4-d5 2.exd5-qxd5 3.Nf3-bg4 4.Be2-nc6 5.Nc3-qd7 6.h3-bxf3 7.Bxf3-O-O-O\n");
printf("8.O-O-nd4 9.a4-kb8 10.Nb5-nxf3+ 11.Qxf3-a6 12.c4?-e5? 13.d4-exd4?! 14.Bf4-axb5!\n");
printf("15.axb5-bd6? 16.Ra2-qf5 17.Rfa1-kc8 18.Qc6!!(mate in 5)- Black resigns 1-0 \n");
printf("Press any key to return menu\n");
toupper(getch());
system("CLS");
return examplegamesmain();
}

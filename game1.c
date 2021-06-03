#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char game1board[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char game11stmoves[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char game12ndmoves[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , ' ' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };

char game13rdmoves[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , 'p' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , ' ' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char game14thmoves[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , 'N' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , ' ' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char game15thmoves[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , 'N' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , 'p' , ' ' , ' ' , 'p' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , ' ' , 'p' , ' ' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };

char game16thmoves[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , ' ' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , 'N' , ' ' , ' ' , ' ' },
                    { ' ' , 'B' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , 'p' , ' ' , ' ' , 'p' },
                    { 'p' , 'p' , 'p' , ' ' , ' ' , ' ' , 'p' , ' ' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };

char game17thmoves[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , ' ' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , 'N' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'B' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , 'p' , ' ' , ' ' , 'p' },
                    { 'p' , 'p' , 'p' , 'b' , ' ' , ' ' , 'p' , ' ' },
                    { 'r' , ' ' , ' ' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char game18thmoves[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , ' ' , ' ' , 'R' },
                    { 'P' , ' ' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , 'N' , 'N' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'B' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , 'p' , ' ' , ' ' , 'p' },
                    { 'p' , 'p' , 'p' , 'b' , ' ' , ' ' , 'p' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , 'q' , 'b' , 'n' , 'r' }
                    };
char game19thmoves[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , ' ' , ' ' , 'R' },
                    { 'P' , 'B' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , 'N' , 'N' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'B' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , 'p' , 'n' , ' ' , 'p' },
                    { 'p' , 'p' , 'p' , 'b' , ' ' , ' ' , 'p' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , 'q' , 'b' , ' ' , 'r' }
                    };
char game110thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , 'Q' , ' ' , ' ' , 'R' },
                    { 'P' , 'B' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , 'N' , 'N' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'B' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , 'b' , 'p' , 'n' , ' ' , 'p' },
                    { 'p' , 'p' , 'p' , 'b' , ' ' , ' ' , 'p' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , 'q' , ' ' , ' ' , 'r' }
                    };
char game111thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , 'Q' , ' ' , ' ' , 'R' },
                    { ' ' , 'B' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , 'N' , 'N' , ' ' },
                    { 'P' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'B' , ' ' , 'p' , ' ' , ' ' , ' ' , 'p' },
                    { ' ' , ' ' , 'n' , 'b' , 'p' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'b' , ' ' , ' ' , 'p' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , 'q' , ' ' , ' ' , 'r' }
                    };
char game112thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , 'Q' , 'N' , ' ' , 'R' },
                    { ' ' , 'B' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { 'P' , 'n' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'B' , ' ' , 'p' , ' ' , ' ' , ' ' , 'p' },
                    { ' ' , ' ' , ' ' , 'b' , 'p' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'b' , ' ' , ' ' , 'p' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , 'q' , ' ' , ' ' , 'r' }
                    };
char game113thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , 'Q' , 'N' , ' ' , 'R' },
                    { ' ' , 'B' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { 'P' , 'n' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , 'p' },
                    { ' ' , ' ' , ' ' , 'b' , 'p' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'n' , ' ' , ' ' , 'p' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , 'q' , ' ' , ' ' , 'r' }
                    };
char game114thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , 'Q' , ' ' , ' ' , 'R' },
                    { ' ' , 'B' , 'P' , 'N' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { 'P' , 'n' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , 'p' },
                    { ' ' , ' ' , ' ' , 'b' , 'p' , ' ' , 'p' , ' ' },
                    { 'p' , 'p' , 'p' , 'n' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , 'q' , ' ' , ' ' , 'r' }
                    };
char game115thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , 'Q' , ' ' , ' ' , 'R' },
                    { ' ' , 'B' , 'P' , 'N' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'P' , 'n' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , 'N' , 'p' },
                    { ' ' , 'n' , ' ' , 'b' , 'p' , ' ' , 'p' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , 'q' , ' ' , ' ' , 'r' }
                    };
char game116thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , ' ' , ' ' , 'R' },
                    { ' ' , 'B' , 'P' , 'N' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'P' , 'n' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , 'N' , 'p' },
                    { ' ' , 'n' , 'q' , 'b' , 'Q' , ' ' , 'p' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , ' ' , ' ' , ' ' , 'r' }
                    };
char game117thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , ' ' , ' ' , 'R' },
                    { ' ' , 'B' , 'P' , 'N' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'n' , 'n' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , 'p' },
                    { ' ' , ' ' , 'q' , 'b' , 'Q' , ' ' , 'p' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , ' ' , ' ' , ' ' , 'r' }
                    };
char game118thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , ' ' , ' ' , 'R' },
                    { ' ' , 'B' , 'P' , 'N' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'n' , 'n' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , 'p' },
                    { 'q' , ' ' , ' ' , 'b' , 'Q' , ' ' , 'p' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , ' ' , ' ' , ' ' , 'N' }
                    };
char game119thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , ' ' , ' ' , 'R' },
                    { ' ' , 'B' , 'P' , 'N' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , 'n' , ' ' , ' ' , ' ' , ' ' , 'Q' },
                    { ' ' , 'n' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , 'p' },
                    { 'q' , ' ' , ' ' , 'b' , ' ' , ' ' , 'p' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , ' ' , ' ' , ' ' , 'N' }
                    };
char game120thmoves[8][8] = {
                    { ' ' , 'K' , 'R' , ' ' , ' ' , ' ' , ' ' , 'R' },
                    { 'q' , ' ' , 'P' , 'N' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , 'p' , 'B' , ' ' , ' ' , ' ' , ' ' , 'Q' },
                    { ' ' , 'n' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , 'p' },
                    { ' ' , ' ' , ' ' , 'b' , ' ' , ' ' , 'p' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'k' , 'r' , ' ' , ' ' , ' ' , ' ' , 'N' }
                    };
int game1()
{
int i , j , k;
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game1board[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n");

printf("Press any key to start game!\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game11stmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game12ndmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game13rdmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game14thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game15thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game16thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game17thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game18thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game19thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game110thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game111thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6 11.h4-a5\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game112thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6 11.h4-a5 12.Nc1-ng4\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game113thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6 11.h4-a5 12.Nc1-ng4 13.Bxe7-nxe7\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game114thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6 11.h4-a5 12.Nc1-ng4 13.Bxe7-nxe7 14.N1/e2-b6\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game115thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6 11.h4-a5 12.Nc1-ng4 13.Bxe7-nxe7 14.N1/e2-b6\n");
printf("15.Nb5-ng6?\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game116thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6 11.h4-a5 12.Nc1-ng4 13.Bxe7-nxe7 14.N1/e2-b6\n");
printf("15.Nb5-ng6? 16. Qxd6-qf6\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game117thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6 11.h4-a5 12.Nc1-ng4 13.Bxe7-nxe7 14.N1/e2-b6\n");
printf("15.Nb5-ng6? 16. Qxd6-qf6 17.Nc7?-nxh4!\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game118thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6 11.h4-a5 12.Nc1-ng4 13.Bxe7-nxe7 14.N1/e2-b6\n");
printf("15.Nb5-ng6? 16. Qxd6-qf6 17.Nc7?-nxh4! 18.Nxa8-qh6!\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game119thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6 11.h4-a5 12.Nc1-ng4 13.Bxe7-nxe7 14.N1/e2-b6\n");
printf("15.Nb5-ng6? 16. Qxd6-qf6 17.Nc7?-nxh4! 18.Nxa8-qh6! 19.Qa3??-Nf3!!\n");
printf("Press any key to continue\n");
toupper(getch());
system("CLS");
printf("3+0 Blitz Game\nSicilian Defense:Open,Najdorf Variation\n");
printf("hbmhbm(2140)(0)\n");
    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , game120thmoves[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("B.Tekin(2031)(1)\n\n");
printf("1.e4-c5 2.Nf3-d6 3.d4-cx4 4.Nxd4-nf6 5.Nf3-a6 6.Bg5-e5 7.Nb3-be7\n");
printf("8.g3-O-O 9.Bg2-nc6 10.O-O-be6 11.h4-a5 12.Nc1-ng4 13.Bxe7-nxe7 14.N1/e2-b6\n");
printf("15.Nb5-ng6? 16. Qxd6-qf6 17.Nc7?-nxh4! 18.Nxa8-qh6! 19.Qa3??-Nf3!! 20.Bxf3-qh2# 0-1\n");
printf("Press any key to return menu\n");
toupper(getch());
system("CLS");
return examplegamesmain();
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char londonsystemmainboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , ' ' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'B' , ' ' , 'P' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };


char ideallondonsystemboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , ' ' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'N' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , 'P' , 'B' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , 'B' , ' ' , 'P' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' }
                    };
int queenspawnfunction();
int londonsystemfunction()
{
printf("LONDON SYSTEM!\n");
printf("The early history of London System begins with James Mason, an Irish-born chess player and one of the best chess players of the 1880s. In the early years, the London System was known as the Mason Variation.\n");
printf("It is a system opening that can be used against virtually any black defense and thus comprises a smaller body of opening theory than many other openings.\n");
printf("It is a very principled system.Today it is frequently played by the GRANDMASTERS.\n");
printf("Historically it developed into a system mainly from three variations:\n\n");
printf("1.d4-d5\n2.Nf3-Nf6\n3.Bf4\n\n");
printf("1.d4-Nf6\n2.Nf3-e6\n3.Bf4\n\n");
printf("1.d4-Nf6\n2.Nf3-g6\n3.Bf4\n\n");
printf("View of the position on the board(from whites)\n");
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , londonsystemmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");


printf("    ==>IDEAL LONDON SETUP FOR WHITE<== \n");

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , ideallondonsystemboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("Press any key to return Quenn's Pawn openings\n");
toupper(getch());
system("CLS");
return queenspawnfunction();
}


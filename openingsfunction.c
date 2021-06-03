#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int m;
int openingsfunction()
{
printf("COMMON CHESS OPENINGS!\n");
char openingsboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , openingsboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");


printf("1-King's Pawn Openings(e4)\n2-Queen's pawn Openings(d4)\n3-Other Openings\n4-Return main menu\n");
printf("Please Choose\n");
scanf("%d",&m);
system("CLS");
switch(m)
{
case 1:
kingspawnfunction();
break;
case 2:
queenspawnfunction();
break;
case 3:
othersfunction();
break;
case 4:
return main();
default:
return openingsfunction();

}
return 0;
}

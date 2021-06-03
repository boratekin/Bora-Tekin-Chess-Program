#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char opensicilianmainboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , 'N' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , ' ' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int sicilianclassicalfunction();
int siciliandragonfunction();
int siciliannajdorffunction();
int open;
int siciliandefensefunction();
int opensicilianfunction()
{
printf("SICILIAN DEFENSE OPEN!\n");
printf("The Open Sicilian is a highly complex opening with at least a dozen subvariations, and is certainly not a beginner-friendly opening – for either side!  White accepts black’s challenge and opens the center right away, striving to make use of their development lead.\n");
printf("1.e4-c5\n2.Nf3-d6\n3.d4-cxd4\n4.Nxd4\n");
printf("View of the position on the board(from blacks)\n");
int i , j , k ;

    for( k=0 ; k<8 ; k++ )
    {
    printf( "  " ) ;
    for( i=0 ; i<42 ; i++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=0 ; j<8 ; j++ ) { printf( "|| %c " , opensicilianmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=0 ; i<44 ; i++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("The common variations of Sicilian Defense:OPEN is given below. Please select the one you want to view.\n");
printf("1-Najdorf Variation\n2-Dragon Variation\n3-Classical Variation\n4-Scheveningen Variation\n5-Return Sicilian Defense\n");
scanf("%d",&open);
system ("CLS");
switch (open)
{
case 1:
siciliannajdorffunction();
break;
case 2:
siciliandragonfunction();
break;
case 3:
sicilianclassicalfunction();
break;
case 4:
sicilianscheveningenfunction();
break;
case 5:
return siciliandefensefunction();
break;
default:
return opensicilianfunction();
}
return 0;
}

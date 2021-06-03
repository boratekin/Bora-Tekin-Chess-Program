#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char queensgambitmainboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int queenspawnfunction();
int queensgambitfunction()
{
printf("QUEEN'S GAMBIT!\n");
printf("The Queen's Gambit is one of the oldest known openings in chess. It was mentioned in the Göttingen manuscript of 1490 and was later analyzed by Gioachino Greco in the 17th century.\n");
printf("White's goal is to replace the queenside pawn with a black middle pawn with move c4. This is not exactly a gambit, if Black tries to protect the won pawn, he may face serious traps and tempo losses.\n");
printf("It is still a highly regarded opening today and is frequently played by GRANDMASTERS.\n");
printf("1.d4-d5\n2.c4\n");
printf("View of the position on the board(from whites)\n");
int i , j , k;

    for( k=7 ; k>-1 ; k--)
    {
    printf( "  " ) ;
    for( i=42 ; i>0 ; i-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",k+1 ) ;

    for( j=7 ; j>-1 ; j-- ) { printf( "|| %c " , queensgambitmainboard[k][j] ) ; }
    printf( "|| \n" ) ;
    }

    for( i=44 ; i>0 ; i-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n");
printf("Press any key to return Quenn's Pawn openings\n");
toupper(getch());
system("CLS");
return queenspawnfunction();
}

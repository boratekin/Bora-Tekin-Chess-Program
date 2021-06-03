#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
char quizboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char ruylopezquizboard[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , 'B' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };
char sicilianquiz1board[8][8] = {
                    { 'R' , ' ' , ' ' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'p' , 'B' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'n' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , ' ' , 'r' }
                    };

char kingsindianquizboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , ' ' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'P' , 'P' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , 'p' , 'n' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , ' ' , 'p' , 'p' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char londonsystemquizboard[8][8] = {
                    { 'R' , ' ' , 'B' , 'K' , 'Q' , ' ' , 'N' , 'R' },
                    { 'P' , 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , 'N' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'B' , ' ' , 'P' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , 'n' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' },
                    { 'r' , ' ' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
char viennaquizboard[8][8] = {
                    { 'R' , 'N' , 'B' , 'K' , 'Q' , 'B' , ' ' , 'R' },
                    { 'P' , 'P' , 'P' , ' ' , 'P' , 'P' , 'P' , 'P' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , 'N' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'P' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , 'p' , ' ' , ' ' , ' ' , ' ' },
                    { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' },
                    { 'p' , 'p' , 'p' , ' ' , 'p' , 'p' , 'p' , 'p' },
                    { 'r' , 'n' , 'b' , 'k' , 'q' , 'b' , 'n' , 'r' }
                    };
int main();
int show_record();
int score_reset();
int edit_score(float,char[]);
int chessquizmain()
{
int countr,r,r1,count,i,a,b,c;
float score;
char choice;
char playername[30];
mainhome:
system("CLS");

for (c=7;c>-1;c--)
{
printf("  ");
for( a=42 ; a>0 ; a-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",c+1 ) ;

for( b=7 ; b>-1 ; b-- ) { printf( "|| %c " , quizboard[c][b] ) ; }
printf( "|| \n" ) ;
}
for( a=44 ; a>0 ; a-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("CHESS QUIZ!\n");
printf("Press s to start Quiz\n");
printf("Press v to view highest score.\n");
printf("Press r to reset score\n");
printf("Press q to return main menu\n");
choice=toupper(getch());
system("CLS");
if (choice=='V')
{
show_record();
goto mainhome;
}
else
if (choice=='R')
{
score_reset();
getch();
goto mainhome;}
else
if(choice=='Q')
return main();
else
if(choice=='S')
{
system("cls");
printf("Resister your name:");
scanf("%s",&playername);
system("cls");
printf("Welcome %s \n",playername);
printf("Here are some tips you might wanna know before the Chess QUIZ:\n");
printf("There are 2 question rounds in this Quiz WARMUP Questions & MAIN Questions\n");
printf("In WARMUP questions you will be asked a total of 5 questions to test your general knowledge of Chess. You are eligible to solve the MAIN QUIZ if you give at least 3 right answers,otherwise you can't proceed further to the Main Questions.\n");
printf("No negative marking for wrong answers!\n");
printf("In the MAIN QUIZ there are 20 questions.\n");
printf("You will get +150 Rating points for each correct answer.\n");
printf("At the end of the quiz, you will receive a FIDE title according to your total elo score, if you know all of them correctly, a surprise title will be waiting for you :)\n");
printf("After answering the questions, you can continue with the any button or take a break. There is no time limit.\n");
printf("GOOD LUCK :)!\n\n");
printf("Press 'Y'  to start the Quiz!\n");
printf("press any other key to return to the Quiz menu!\n");
if (toupper(getch())=='Y')
{
goto home;
}
else
{
goto mainhome;
system("cls");
}
home:
system("cls");
count=0;
for(i=1;i<=5;i++)
{
system("cls");
r1=i;
switch(r1)
{
case 1:
printf("1)Who is the current world chess champion?\n");
printf("A)Hikaru Nakamura   B)Viswanathan Anand\n");
printf("C)Magnus Carlsen    D)Anish Giri\n");
if (toupper(getch())=='C')
{
printf("!Correct!");count++;
getch();
break;
}
else
{
printf("!!Wrong!! The correct answer is C)Magnus Carlsen");
getch();
break;
}
case 2:
printf("2)Which of the following is the highest title that can be obtained in chess?\n");
printf("A)Candidate Master(CM)      B)Fide Master(FM)\n");
printf("C)International Master(IM)  D)Grand Master(GM)\n");
if (toupper(getch())=='D')
{
printf("!Correct!");count++;
getch();
break;
}
else
{
printf("!!Wrong!! The correct answer is D)GrandMaster(GM)");
getch();
break;
}
case 3:
printf("3)Which of the following is the most important material on the chessboard?\n");
printf("A)Pawn   B)King\n");
printf("C)Queen  D)Rook\n");
if (toupper(getch())=='B')
{
printf("!Correct!");count++;
getch();
break;
}
else
{
printf("!!Wrong!! The correct answer is B)King");
getch();
break;
}
case 4:
printf("4)Which of the following is the theory that starts with moves 1.e4-c5?\n");
printf("A)Sicilian Defense       B)French Defense\n");
printf("C)King's Indian Defense  D)Alekhine's Defense\n");
if (toupper(getch())=='A')
{
printf("!Correct!");count++;
getch();
break;
}
else
{
printf("!!Wrong!! The correct answer is A)Sicilian Defense");
getch();
break;
}
case 5:
printf("5)Who is the current Turkish chess champion?\n");
printf("A)IM Deniz Özen          B)GM Vahap Sanal\n");
printf("C)GM Emre Can            D)GM Mustafa Yilmaz\n");
if (toupper(getch())=='B')
{
printf("!Correct!");count++;
getch();
break;
}
else
{
printf("!!Wrong!! The correct answer is B)GM Vahap Sanal");
getch();
break;
}
}}
if(count>=3)
{goto test;}
else
{
system("cls");
printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO MAIN QUIZ, TRY AGAIN");
getch();
goto mainhome;
}
test:
system("cls");
printf("CONGRATULATIONS %s you are eligible to Main Quiz\n",playername);
printf("!Press any key to Start the Game!");
if(toupper(getch())=='p')
{goto game;}
game:
countr=0;
for(i=1;i<=20;i++)
{system("cls");
r=i;
switch(r)
{
case 1:
for (c=7;c>-1;c--)
{
printf("  ");
for( a=42 ; a>0 ; a-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",c+1 ) ;

for( b=7 ; b>-1 ; b-- ) { printf( "|| %c " , ruylopezquizboard[c][b] ) ; }
printf( "|| \n" ) ;
}
for( a=44 ; a>0 ; a-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("1.e4-e5 2.Nf3-Nc6 3.Bb5\n");
printf("1)Which of the following is the opening that gives rise to the position in the chess table above?\n\n");
printf("A)Sicilian Defense  B)Italian Game\n");
printf("C)Quenn's Gambit    D)Ruy Lopez(Spanish)Game\n");
if (toupper(getch())=='D')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is D)Ruy Lopez(Spanish)Game");
getch();
break;
}
case 2:
printf("2)Who won the 2021  FIDE candidates tournament?\n");
printf("A)GM Ding Liren          B)GM Ian Nepomniachtchi\n");
printf("C)GM Anish Giri          D)GM Fabiano Caruana\n");
if (toupper(getch())=='B')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is B)GM Ian Nepomniachtchi");
getch();
break;
}
case 3:
for (c=7;c>-1;c--)
{
printf("  ");
for( a=42 ; a>0 ; a-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",c+1 ) ;

for( b=7 ; b>-1 ; b-- ) { printf( "|| %c " , sicilianquiz1board[c][b] ) ; }
printf( "|| \n" ) ;
}
for( a=44 ; a>0 ; a-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("1.e4-c5 2.Nf3-Nc6 3.Bb5\n");
printf("3)Which of the following is the variation that gives rise to the position in the chess table above?\n\n");
printf("A)Sicilian Najdorf  B)Sicilian Nyezhmetdinov-Rossolimo Attack \n");
printf("C)Sicilian Dragon   D)Sicilian Scheveningen\n");
if (toupper(getch())=='B')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is B)Sicilian Nyezhmetdinov-Rossolimo Attack\n");
getch();
break;
}
case 4:
printf("4)Who was generally recognised to be the first World Chess Champion in 1886?\n");
printf("A)Wilhelm Steinitz B)Francois-Andre Danican Philidor \n");
printf("C)Emanuel Lasker   D)Jose Raul Capablanca\n");
if (toupper(getch())=='A')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is A)Wilhelm Steinitz\n");
getch();
break;
}
case 5:
printf("5)Which of the following players is known for the title of The Magician From Riga?\n");
printf("A)Garry Kasparov  B)Robert James Fischer\n");
printf("C)Mikhail Tal     D)Paul Morphy\n");
if (toupper(getch())=='C')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is C)Mikhail Tal\n");
getch();
break;
}
case 6:
printf("6)Who is the chess player who received the title of grandmaster at the youngest age?\n");
printf("A)Magnus Carlsen    B)Sergey Karjakin\n");
printf("C)Alireza Firouzja  D)Fabiano Caruana\n");
if (toupper(getch())=='B')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is B)Sergey Karjakin\n");
getch();
break;
}
case 7:
for( c=0 ; c<8 ; c++ )
{
printf( "  " ) ;
for( a=0 ; a<42 ; a++ ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",c+1 ) ;
for( b=0 ; b<8 ; b++ ) { printf( "|| %c " , kingsindianquizboard[c][b] ) ; }
printf( "|| \n" ) ;
}
for( a=0 ; a<44 ; a++ ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     H    G    F    E    D    C    B    A\n");
printf("1.d4-Nf6 2.c4-g6\n");
printf("7)Which of the following is the opening that gives rise to the position in the chess table above?\n\n");
printf("A)Sicilian Defense         B)Benoni Defense\n");
printf("C)King's Indian Defense    D)French Defense\n");
if (toupper(getch())=='C')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is C)King's Indian Defense \n");
getch();
break;
}
case 8:
printf("8)Which of the following is one of the Giuoco Piano lines?\n");
printf("A)The Rousseau Gambit      B)Albin Countergambit\n");
printf("C)Nakhmanson Gambit        D)Smith-Morra Gambit\n");
if (toupper(getch())=='A')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is A)The Rousseau Gambit\n");
getch();
break;
}
case 9:
printf("9)Which of the following is the most preferred defense against Ruy Lopez opening?\n");
printf("A)Steinitz Defense          B)Clasical Defense\n");
printf("C)Berlin Defense            D)Morphy Defense\n");
if (toupper(getch())=='D')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is D)Morphy Defense\n");
getch();
break;
}
case 10:
printf("10)Which of the following chess notation symbols indicates a dubious  move.\n");
printf("A)??                        B)?!\n");
printf("C)!!                        D)!?\n");
if (toupper(getch())=='B')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is B)?!\n");
getch();
break;
}
case 11:
printf("11)Who is the current women's world chess champion?\n");
printf("A)Ju Wenjun            B)Goryachkina Aleksandra\n");
printf("C)Hou Yifan            D)Koneru Humpy\n");
if (toupper(getch())=='A')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is A)Ju Wenjun\n");
getch();
break;
}
case 12:
for (c=7;c>-1;c--)
{
printf("  ");
for( a=42 ; a>0 ; a-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",c+1 ) ;

for( b=7 ; b>-1 ; b-- ) { printf( "|| %c " , londonsystemquizboard[c][b] ) ; }
printf( "|| \n" ) ;
}
for( a=44 ; a>0 ; a-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("1.d4-d5\n2.Nf3-Nf6\n3.Bf4\n");
printf("12)Which of the following is the chess opening given above?\n\n");
printf("A)King's Indian Attack  B)Benoni Defense\n");
printf("C)London System         D)Nimzo-Indian Defense\n");
if (toupper(getch())=='C')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is C)London System\n");
getch();
break;
}
case 13:
printf("13)When was the World Chess Federation(FIDE) founded?\n");
printf("A)2005                  B)1956\n");
printf("C)1924                  D)1895\n");
if (toupper(getch())=='C')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is C)1924\n");
getch();
break;
}
case 14:
printf("1.d4-d5\n2.c4-e5\n");
printf("14)Which of the following is the chess opening notation given above?\n");
printf("A)Evans Gambit                 B)Latvian Gambit\n");
printf("C)Benko Gambit                 D)Albin Countergambit\n");
if (toupper(getch())=='D')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is D)Albin Countergambit\n");
getch();
break;
}
case 15:
printf("1.e4-c5\n2.Nf3-d6\n3.d4-cxd4\n4.Nxd4-Nf6\n5.Nc3-a6\n");
printf("15)Which of the following is the chess variation notation given above?\n");
printf("A)Sicilian Dragon                                B)Sicilian Najdorf\n");
printf("C)Sicilian Accelerated Dragon                    D)Sicilian Scheveningen\n");
if (toupper(getch())=='B')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is B)Sicilian Najdorf\n");
getch();
break;
}
case 16:
printf("16)Where did chess originate from?\n");
printf("A)India                 B)China\n");
printf("C)Russia                D)Japan\n");
if (toupper(getch())=='A')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is A)India\n");
getch();
break;
}
case 17:
printf("17)What programming language is the Stockfish(chess engine) created with?\n");
printf("A)Matlab                B)Java\n");
printf("C)Python                D)C++\n");
if (toupper(getch())=='D')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is D)C++\n");
getch();
break;
}
case 18:
printf("18)Who is the holder of the highest ELO  record achieved?(2882)\n");
printf("A)Magnus Carlsen                B)Garry Kasparov\n");
printf("C)Vladimir Kramnik              D)Robert James Fischer\n");
if (toupper(getch())=='A')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is A)Magnus Carlsen\n");
getch();
break;
}
case 19:
printf("19)Which of the following is the general name given to the games played under 15 + 10 time control?\n");
printf("A)Blitz                    B)Rapid\n");
printf("C)Classical                D)Bullet\n");
if (toupper(getch())=='B')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is B)Rapid\n");
getch();
break;
}
case 20:
for (c=7;c>-1;c--)
{
printf("  ");
for( a=42 ; a>0 ; a-- ) { printf( "-" ) ; } printf( "\n" ) ; printf( "%d ",c+1 ) ;

for( b=7 ; b>-1 ; b-- ) { printf( "|| %c " , viennaquizboard[c][b] ) ; }
printf( "|| \n" ) ;
}
for( a=44 ; a>0 ; a-- ) { printf( "_" ) ; } printf( "\n" ); ;
printf("     A    B    C    D    E    F    G    H\n\n");
printf("1.e4-e5 2.Nc3\n");
printf("20)Which of the following is the chess opening given above?\n\n");
printf("A)Scotch Game                   B)Spanish Game\n");
printf("C)Italian Game                  D)Vienna Game\n");
if (toupper(getch())=='D')
{
printf("!!!Correct!!!");countr++;getch();
break;
getch();
}
else
{
printf("!!!Wrong!!! The correct answer is D)Vienna Game\n");
getch();
goto score;
break;
}
}
}
}
score:
system("CLS");
score=(float)countr*150;
if(score>=0.00 && score<2200)
{
printf("**************** SORRY YOU DID NOT GET ANY TITLE *****************\n");
printf("TRY AGAIN!\n");
printf("Your Rating is %.2f\n",score);
goto go;}
else
if(score>=2200 && score<2300)
{
printf("**************** CONGRATULATIONS ****************\n");
printf("!!!!!!!! YOU ARE A CANDIDATE MASTER !!!!!!!!!\n");
printf("Your rating is %.2f\n",score);
}
else
if(score>=2300 && score<2400)
{
printf("**************** CONGRATULATIONS ****************\n");
printf("!!!!!!!! YOU ARE A FIDE MASTER MASTER!!!!!!!!!\n");
printf("Your rating is %.2f\n",score);
}
else
if(score>=2400 && score<2500)
{
printf("**************** CONGRATULATIONS ****************\n");
printf("!!!!!!!! YOU ARE A INTERNATIONAL MASTER !!!!!!!!!");
printf("\n\t\t Your rating is %.2f",score);
}
else
if(score>=2500 && score<3000)
{
printf("**************** CONGRATULATIONS ****************\n");
printf("!!!!!!!! YOU ARE A GRANDMASTER !!!!!!!!!\n");
printf("Your rating is %.2f\n",score);
}
else
if(score==3000)
{
printf("**************** CONGRATULATIONS ****************\n");
printf("!!!!!!!! YOU ARE A CHESS ENGINE !!!!!!!!!\n");
printf("Your rating is %.2f\n",score);
}
go:
puts("Press Y if you want to solve quiz again\n");
puts("Press any key if you want to go main menu\n");
if (toupper(getch())=='Y')
goto home;
else
{
edit_score(score,playername);
goto mainhome;
}
return 0;
}





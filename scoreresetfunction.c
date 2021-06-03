#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int chessquizmain();
int score_reset()
{
fclose(fopen("score.txt", "w"));

printf("The Highest score has been deleted.\n");
printf("Press any key..\n");
toupper(getch());
system("CLS");
return chessquizmain();
}

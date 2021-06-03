#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int chessquizmain();
int show_record()
{
system("CLS");
char name[30];
float scr;
FILE*f;
f=fopen("score.txt","r");
fscanf(f,"%s%f",&name,&scr);
printf("%s has secured the Highest Elo Rating %0.2f\n",name,scr);
fclose(f);
printf("Press any key..\n");
toupper(getch());
system("CLS");
return chessquizmain();
}


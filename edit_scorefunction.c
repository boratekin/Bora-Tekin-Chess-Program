#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void edit_score(float score, char plnm[20])
{system("cls");
float sc;
char nm[30];
FILE *f;
f=fopen("score.txt","r");
fscanf(f,"%s%f",&nm,&sc);
if (score>=sc)
{
sc=score;
fclose(f);
f=fopen("score.txt","w");
fprintf(f,"%s\n%.2f",plnm,sc);
fclose(f);
}
}

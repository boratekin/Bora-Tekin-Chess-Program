#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int games;
int examplegamesmain()
{
printf("EXAMPLE GAMES!\n");
printf("Please choose a game!\n");
printf("1-Bora Tekin(2031) vs hbmhbm(2140)\n2-GM Luis Paulo Supi(2369) vs GM Magnus Carlsen (2886)\n3-Return main menu\n");
scanf("%d",&games);
system("CLS");
switch(games)
{
case 1:
game1();
break;
case 2:
game2();
break;
case 3:
return main();
break;
default:
return main();
}
return 0;

}

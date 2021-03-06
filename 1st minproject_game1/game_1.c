// Creating Stone - paper - Scissor game :) 
// kunalkhairnar@gmail.com 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int game(char player, char pc)
{

    if (player == pc)
    {
        return -1;
    }

    if (player == 's' && pc == 'p')
    {
        return 0;
    }
    else if (player == 'p' && pc == 's')
    {
        return 1;
    }

    if (player == 'p' && pc == 'z')
    {
        return 0;
    }
    else if (player == 'z' && pc == 'p')
    {
        return 1;
    }

    if (player == 's' && pc == 'z')
    {
        return 1;
    }
    else if (player == 'z' && pc == 's')
    {
        return 0;
    }
}

void red()
{
    printf("\033[1;31m");
}

void yellow()
{
    printf("\033[1;33m");
}

void green()
{
    printf("\033[1;32m");
}

void blue()
{
    printf("\033[1;34m");
}

void reset()
{
    printf("\033[0m");
}

int main()
{
    int n;
    char player, pc, result;

    srand(time(NULL));
    
    n = rand() % 100;  

    if (n < 33)
    {
        pc = 's';
    }
    else if (n > 33 && n < 66)
    {
        pc = 'p';
    }
    else
    {
        pc = 'z';
    }
    printf("\n\n\n\n\t\t\t\t````````````````````````````````````````````````````````````````````````````````````````````````\n");
    printf("\t\t\t\t_______________________________________________________________________________________________\n");

    blue();
    printf("\n\t\t\t\t\t\t\tEnter 's' for 'stone' , 'p' fpr 'paper', 'z' for 'Scissors'  \t\t\t\t\t\t \n");
    reset();

    printf("\t\t\t\t_______________________________________________________________________________________________\n");
    printf("\t\t\t\t_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_><_>\n");

    printf(" \n\n\t\t\t\t\t\t\t\t\t Enter = ");
    scanf("%c", &player);

    result = game(player, pc);

    if (result == -1)
    {
        printf("\n\t\t\t**************************************************************************************************************\n");
        printf("\t\t\t______________________________________________________________________________________________________________\n\n\n");
        yellow();
        printf("\t\t\t\t\t\t [#][#][#][#][#][#][#]  G a m e   D r a w  [#][#][#][#][#][#][#][#] \n\n");
    }
    else if (result == 1)
    {
        printf("\n\t\t\t***************************************************************************************************************\n");
        printf("\t\t\t_______________________________________________________________________________________________________________\n\n\n");
       green();
        printf("\t\t\t  [*-*][*-*][*-*][*-*][*-*]  B i n g o o o o !! Y o u   W O N   T h i s   G a m e  [*-*][*-*][*-*][*-*][*-*]\n\n");
    }
    else
    {
        printf("\n\t\t\t***************************************************************************************************************\n");
        printf("\t\t\t_______________________________________________________________________________________________________________\n\n\n");
        red();
        printf("\t\t\t\t\t :( :( :( :( :(  L O O S E R !  Y o u   L O S T   T h i s   G a m e  :( :( :( :( :( \n\n");
    }

    reset();
    printf("\t\t\t-_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_\n");
    printf("\t\t\t_______________________________________________________________________________________________________________\n\n\n");
    
    printf("\t\t\t\t\t\t\t You  Chose :- %c     and     pc  chose :-  %c \t\t\t\t\t\n\n", player, pc);

    printf("\t\t\t_______________________________________________________________________________________________________________\n\n\n");
    printf("\t\t\t-_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_\n");

    return 0;
}
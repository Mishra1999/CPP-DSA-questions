#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int game_result(char com, char you)
{

    if (you == com)
    {
        return 0;
    }
    else if (you == 's' && com == 'w')
    {
        return 1;
    }
    else if (you == 'w' && com == 's')
    {
        return -1;
    }

    if (you == 's' && com == 'g')
    {
        return -1;
    }
    else if (you == 'g' && com == 's')
    {
        return 1;
    }

    if (you == 'w' && com == 's')
    {
        return 1;
    }
    else if (you == 'g' && com == 'w')
    {
        return -1;
    }
}
int main()
{
    char you, com;
    com = 's';
    printf("Enter 's' for snake,'w' for water and 'g' for gun  : \n");
    scanf("%c", &you);
    int number = rand()%10 + 1;
    if (number<3)
    {
        com='s';
    }
    else if (number>3 && number <6)
    {
        com='w';
    }
    else
    {
        com='g';
    }
    
    int result = game_result(com, you);
    printf("You choose '%c' and computer choose  '%c'\n", you, com);
    if (result == 0)
    {
        printf("The match is draw\n");
    }
    else if (result == 1)
    {
        printf("You won the game\n");
    }
    else
    {
        printf("you lose the match\n");
    }
    return 0;
}

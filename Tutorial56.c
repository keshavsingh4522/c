#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2)
{
    // returns 1 if c1>c2 and 0 otherwise.It c1==c2 it will return -1
    if (c1 == c2)
    {
        return -1;
    }

    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'p') && (c1 == 'r'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c2 == 's') && (c1 == 'p'))
    {
        return 0;
    }
}
void opt(char p)
{
    if (p == 'r')
    {
        printf("You chose \"Rock\"");
    }
    else if (p == 's')
    {
        printf("You chose \"Scissors\"");
    }
    else if (p == 'p')
    {
        printf("You chose \"Paper\"");
    }
}
void opt1(char p)
{
    if (p == 'r')
    {
        printf("CPU chose \"Rock\"");
    }
    else if (p == 's')
    {
        printf("CPU chose \"Scissors\"");
    }
    else if (p == 'p')
    {
        printf("CPU chose \"Paper\"");
    }
}
int main()
{
    int plsc = 0, comsc = 0, num, temp;
    char playcha, compcha;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock ,Paper and Scissors.\n");
    printf("Enter the no. of times you want to play this game-");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("\n\nYour turn-\n");
        printf("Choose 1 for Rock,2 for Paper and 3 for Scissors-");
        scanf("%d", &temp);
        playcha = dict[temp - 1];
        opt(playcha);

        printf("\n\nComputer's turn-\n");
        temp = generateRandomNumber(3) + 1;
        compcha = dict[temp - 1];
        opt1(compcha);
        printf("\n");
        if (greater(compcha, playcha) == 1)
        {
            comsc += 1;
            printf("\nCPU got it");
        }
        else if (greater(compcha, playcha) == -1)
        {
            comsc += 0;
            plsc += 0;
            printf("\nIt's a tie");
        }
        else
        {
            plsc += 1;
            printf("\nYou got it");
        }
        printf("\nCPU's score- %d", comsc);
        printf("\nYour score- %d", plsc);
    }
    
    return 0;
}
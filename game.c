#include <stdio.h>
#include <time.h>>

int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

void results(int *p, int *c)
{
    printf("ScoreBoard after this round Are as follow :\n");
    printf("playerscore = %d\ncompscore = %d\n", *p, *c);
}

int main()
{
    int n;
    int playerchoice, compchoice;
    int playerscore = 0, compscore = 0;

    printf("Enter the number of rounds you want to play\n");
    scanf("%d", &n);

    for (int j = 0; j < n; j++)
    {
        printf("ROUND NUMBER = %d\n", j + 1);
        printf("1-rock\n2-papper\n3-scissors\n");
        printf("Enter your choice:\n");
        scanf("%d", &playerchoice);
        printf("playerr choice is %d\n", playerchoice);
        getchar();
        compchoice = generaterandomnumber(3) + 1;
        printf("computer choice is %d\n", compchoice);
        printf("\n");

        // now comparism begin

        if (playerchoice == compchoice)
        {
            printf("Drawn\n");
        }

        else if ((playerchoice == 1) && (compchoice == 2))
        {
            printf("computer wins this round\n");
            compscore += 1;
        }

        else if ((playerchoice == 2) && (compchoice == 1))
        {
            printf("player wins this round\n");
            playerscore += 1;
        }

        else if ((playerchoice == 1) && (compchoice == 3))
        {
            printf("player wins this round\n");
            playerscore += 1;
        }

        else if ((playerchoice == 3) && (compchoice == 1))
        {
            printf("computer wins this round\n");
            compscore += 1;
        }

        else if ((playerchoice == 3) && (compchoice == 2))
        {
            printf("player wins this round\n");
            playerscore += 1;
        }

        else if ((playerchoice == 2) && (compchoice == 3))
        {
            printf("computer wins this round\n");
            compscore += 1;
        }

        results(playerscore, compscore);
        printf("\n");
    }

    printf("Final resul is\n");

    if (playerscore > compscore)
    {
        printf("player wins the game");
    }

    else if (playerscore < compscore)
    {
        printf("computer wins the game");
    }

    else if (playerscore == compscore)
    {
        printf("Game Drawn");
    }

    return 0;
}
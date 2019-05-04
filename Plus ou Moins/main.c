#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mystNumbPlayer =0;
    int mystere =0;
    int difficulty =0;
    int numberOfPlayer =0;
    int soloGame =0;
    int multiplayerGame =0;
    const int MIN = 1;
    int MAX = 100;


    printf("1. Solo\n");
    printf("2. Multiplayer\n"); // multijoueur ne marche pas, je ne c'est pas pourquoi  ********************************** try it it clear the screen system("cls");
    scanf("%d", &numberOfPlayer);

    if(numberOfPlayer==1)
        soloGame++;
    else if(numberOfPlayer==2)
        multiplayerGame++;

while(multiplayerGame != 0)
{
        int times =0;

        printf("Player 1, Choose the mysterious number. Player 2, go away !\n");
        scanf("%d", &mystere); // probleme ici, je crois

        printf("Player 2, Let's play \n What is the mysterious number ? \n");

        do
    {
        scanf ("%d", &mystNumbPlayer);

        if(mystere > mystNumbPlayer)
        {
            printf("Plus \n");
            times++;
        }
        else if(mystere < mystNumbPlayer)
        {
            printf("Moins \n");
            times++;
        }
        else
        {
            printf("Chapeau! \n\n");
            times++;
        }
    } while(mystNumbPlayer != mystere);


        printf("You find the number in %d time(s)! \n", times);

        printf("Do you want play another time ? \n");
        printf("1. yes\n");
        printf("0. no\n");
        scanf("%d", &multiplayerGame);
        printf("fucked");
        system("cls");
         if(multiplayerGame = 0);
        {
            exit(0);
        }
}



while(soloGame != 0)
{


    printf("Choose the difficulty :\n");
    printf("1.Easy     (1-100)\n");
    printf("2.Normal   (1-1 000)\n");
    printf("3.Hard     (1-10 000)\n");
    printf("4.HARDCORE (1-1 000 000)\n");
    scanf("%d", &difficulty);

    if(difficulty==1)
        MAX=100;
    else if(difficulty==2)
        MAX=1000;
    else if(difficulty==3)
        MAX=10000;
    else if(difficulty==4)
        MAX=1000000;

    int times =0;
    srand(time(NULL));
    mystere = (rand() % (MAX - MIN + 1)) + MIN;

    printf("What is the mysterious number ? \n");

    do
    {
        scanf ("%d", &mystNumbPlayer);

        if(mystere > mystNumbPlayer)
        {
            printf("Plus \n");
            times++;
        }
        else if(mystere < mystNumbPlayer)
        {
            printf("Moins \n");
            times++;
        }
        else
        {
            printf("Chapeau! \n\n");
            times++;
        }
    } while(mystNumbPlayer != mystere);


        printf("You find the number in %d time(s)! \n", times);

        printf("Do you want play another time ? \n");
        printf("1. yes\n");
        printf("0. no\n");
        scanf("%d", &soloGame);
        printf("fucked");
        system("cls");
        if(soloGame = 0);
        {
            exit(0);
        }
}
}


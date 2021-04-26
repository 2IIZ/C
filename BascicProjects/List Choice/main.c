#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choise;

    printf("== Menu ==\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n\n");
    printf("Votre Choix ?\n");
    scanf("%d", &choise);

    printf("\n");

    switch(choise)
    {
        case 1:
            printf("Royal Cheese");
            break;
        case 2:
            printf("Mc Deluxe");
            break;
        case 3:
            printf("Mc Bacon");
            break;
        case 4:
            printf("Big Mac");
            break;
        default:
            printf("You ch0ise nothing !");
            break;
    }
    printf("\n\n");
    return 0;
}

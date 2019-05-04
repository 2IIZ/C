#include <stdio.h>
#include <stdlib.h>

double euros(double euro)
{
    return 6.55957 * euro;
}
double francs(double franc)
{
    return  franc / 6.55957;
}

int main()
{
    int choix;
    double euro = 0;
    double franc = 0;

    printf("10 euros = %fF\n", euros(10));
    printf("50 euros = %fF\n", euros(50));
    printf("100 euros = %fF\n", euros(100));
    printf("200 euros = %fF\n\n", euros(200));

    printf("10 francs = %fF\n", francs(10));
    printf("50 francs = %fF\n", francs(50));
    printf("100 francs = %fF\n", francs(100));
    printf("200 francs = %fF\n\n", francs(200));

    printf("Choix de monais \n\n");
    printf("1. Euros > Francs\n");
    printf("2. Francs > Euros\n");
    scanf("%d \n", &choix);


    if (choix = 1)
    {
        printf("Quantite Euros\n");
        scanf("%fl", &euro);
        printf("%f", euros(euro));
        printf("\n\n");
    }
    if (choix = 2)
    {
        printf("Quantite Francs\n");
        scanf("%fl", &franc);
        printf("%fl", francs(franc));
        printf("\n\n");
    }

}

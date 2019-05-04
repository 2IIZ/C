#include <stdio.h>
#include <stdlib.h>

void affiche(int *tableau, int tailleTableau);
void copie(int tableau[], int tableauCopie[], int tailleTableau);
void maximumTableau(int tableau[], int tailleTableau, int valeurMax);
int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);
void ordonnerTableau(int tableau[], int tailleTableau);


int main(int argc, char *argv[])
{
int tableau[4] = {12, 11, 14, 13}, tableauCopie[4] = {0}, valeurMax = 13, somme = 0;
double moyenne = 0;
    // On affiche les valeurs dans l'ordre croissant EXERCICE 5
    ordonnerTableau(tableau, 4);

    // On affiche la moyenne des valeurs EXERCICE 2
    moyenne = moyenneTableau(tableau, 4);

    printf("Moyenne = %f\n", moyenne);

    printf("\n");
    // On affiche la somme des valeurs EXERCICE 1
    somme = sommeTableau(tableau, 4);

    printf("Somme = %d\n", somme);

    printf("\nAffichage Ordre Croissant:\n");
    // On affiche le contenu du tableau
    affiche(tableau, 4);

    printf("\nCopie Tableau:\n");
    // On copie le contenu du tableau EXERCICE 3
    copie(tableau, tableauCopie, 4);

    printf("\nMaximum:\n");
    // On remet à 0 les valeurs qui dépassent valeurMax EXERCICE 4
    maximumTableau(tableau, 4, valeurMax);

    return 0;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
     int i;
     double moyenne = 0,somme = 0;

    for (i = 0 ; i < tailleTableau ; i++)
    {
        somme = somme + tableau[i];
    }

     moyenne = somme/tailleTableau;

    return moyenne;
}

void affiche(int *tableau, int tailleTableau)
{
    int i;

    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

void copie(int tableau[], int tableauCopie[], int tailleTableau)
{
    int i;

    tableauCopie = tableau;

    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableauCopie[i]);
    }
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    int i;

    for (i = 0 ; i < tailleTableau ; i++)
    {
        if(tableau[i]>valeurMax)
        {
            tableau[i]=0;
        }
        else tableau[i]= tableau[i];

        printf("%d\n", tableau[i]);
    }
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int i, somme = 0;

    for (i = 0 ; i < tailleTableau ; i++)
    {
        somme = somme + tableau[i];
    }

    return somme;
}



void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i=0, j=0;
    int a = 0;

    for(i=0; i<tailleTableau; i++)
    {
        for(j=i; j<tailleTableau; j++)
        {
            if(tableau[i] > tableau[j])
            {
                a = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = a;
            }
        }
    }
}

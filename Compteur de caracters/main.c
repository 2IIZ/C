#include <stdio.h>
#include <stdlib.h>
#include <string.h> // don't forgget is where the protptype are of the str*

int main(int argc, char *argv[])
{
    char insertedString[5000];

    scanf("%s", insertedString);
    char chaine[5000];
    int newstr =0;
    newstr = strlen(insertedString);


    // On affiche la longueur de la cha�ne
    printf("La chaine %s fait %d caracteres de long\n\n", chaine, newstr);

    return 0;
}

/**

longueurChaine = plus ou moins a strlen

int longueurChaine(const char* chaine);

int main(int argc, char *argv[])
{
    char chaine[] = "Salut";
    int longueur = 0;

    longueur = longueurChaine(chaine);

    printf("La chaine %s fait %d caracteres de long", chaine, longueur);


    return 0;
}

int longueurChaine(const char* chaine)
{
    int nombreDeCaracteres = 0;
    char caractereActuel = 0;

    do
    {
        caractereActuel = chaine[nombreDeCaracteres];
        nombreDeCaracteres++;
    }
    while(caractereActuel != '\0'); // On boucle tant qu'on n'est pas arriv� � l'\0

    nombreDeCaracteres--; // On retire 1 caract�re de long pour ne pas compter le caract�re \0

    return nombreDeCaracteres;
}
**/

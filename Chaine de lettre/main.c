#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char prenom[15]; //if to large, the cmd fail

    printf("Comment t'appelles-tu petit Zero ? ");
    scanf("%s", prenom);
    printf("Salut %s, je suis heureux de te rencontrer !\n\n", prenom);

    return 0;
}

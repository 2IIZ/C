#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    FILE* fichier = NULL;

    fichier = fopen("zdirtest/test.txt", "w+");

    if (fichier =! NULL)
    { printf("good");}
    else
    {
        printf("fucked");
    }


    return 0;
}

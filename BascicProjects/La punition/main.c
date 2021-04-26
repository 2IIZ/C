#include <stdio.h>
#include <stdlib.h>

void punition(int line)
{
    int i = 0;

    for (i ; i < line; ++i)
    {
        printf("AY AY AY AY WEY!\n");
    }
}

int main()
{

    printf("Hello world!\n\n");
    punition(10);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char ville[100];

  printf("Dans quelle ville habitez-vous ? ");
  scanf("%s", ville);
  printf("Vous habitez %s, je connais bien cette ville !", ville);

  return 0;
}

/*
  Name: BF.c
  Author: Neo_Fr
  Date: 19/03/07 21:04
  Description: Fonction de Brute Force
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BruteForce(int LongMin, int LongMax);

unsigned long nbMDP = 0;

FILE *BF;

int main(void)
{
    int LgMin = 0;
    int LgMax = 0;
    unsigned long t_start = 0;
    unsigned long t_end = 0;
    printf("****************************\n");
    printf("*  Fonction de BruteForce  *\n");
    printf("*        By: Neo_Fr        *\n");
    printf("****************************\n\n");
    printf("\nLongueur minimal du pass:");
    scanf("%i", &LgMin);
    printf("\nLongueur maximal du pass:");
    scanf("%i", &LgMax);
    BF = fopen("BF.txt", "w+");

    t_start = clock();
    BruteForce(LgMin, LgMax);
    t_end = clock();

    printf("\n nb de mdp : %i \n", nbMDP);
    printf("Terminer en : %i secondes.\n", (t_end - t_start)/1000);
    system("PAUSE");
return 0;
}


void BruteForce(int LongMin, int LongMax)
{
 const char ALL[105] = "abcdefghijklmnopqrstuvwxyz1234567890";
 char Lg = LongMin - 1;
 char i, x, y;
 if(BF  =! NULL)
 {
      char* Buff = (char*) malloc(Lg); // Creer le Buff de Lg octet
 while(Lg != LongMax)
 {
     realloc(Buff, Lg); // Augmente la taille du buff
     int Nchar[Lg];
     for(i=0; i<=Lg; i++)
     {
         Buff[i] = ALL[0]; // Remplie le Buff du premier char
         Nchar[i] = 0; // Initialise le tableau de int a 0
     }
     while(Nchar[0] != 105)
     {
          for(x=0; x<=105; x++)
          {
                  Buff[Lg] = ALL[x];
                  Nchar[Lg] = x;
fputs(Buff, BF);
                  printf("%s \n", Buff);

                  nbMDP++;
          }
          for(y=Lg; y>=0; y--)
          {
              if((Nchar[y] == 105)&&(Nchar[0]!= 105))
              {
                  Nchar[y] = 0;
                  Nchar[y-1]++;
              }
              Buff[y] = ALL[Nchar[y]];
          }
    }
    Lg++;
 }
 free(Buff);// Libere la memoire
 }
 else
 {
     printf("blue scree");
 }

}

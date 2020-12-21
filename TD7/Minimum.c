#include <stdlib.h>
#include <stdio.h>
int main()
{
   int i = 0,resultat = 0,x,y = 0;
   printf("Nombre d\'%cl%cments :\n",130,130);
   scanf("%d",&x);
   int tableau[x];
   
   for(i = 0; i < x;i++)
   {
      printf("%cl%cment %d :\n",130,130,i + 1);
      scanf("%d",&y);
      tableau[i] = y;
      if(tableau[i] <= tableau[i-1] || tableau[i] == tableau[04])
      {
        resultat = tableau[i];
      }
    }
   printf("Le minimum des %cl%cments est %d",130,130,resultat);
   
   return EXIT_SUCCESS ;
}




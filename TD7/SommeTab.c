/* declaration de fonctionnalites supplementaires */
#include <stdlib.h> /* EXIT_SUCCESS */
#include <stdio.h> /* printf */

/* declaration constantes et types utilisateurs */

/* declaration de fonctions utilisateurs */

/* fonction principale */
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
    resultat += tableau[i];
}
   printf("Somme des %cl%cments = %d",130,130,resultat);
   
   return EXIT_SUCCESS ;
}
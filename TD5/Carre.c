#include <stdlib.h>
#include <stdio.h>
int main()
{
   int x = 0,n = 0,i,resultat = 1;
   scanf("%d",&x);
   scanf("%d",&n);
   for(i = 0; i < n; i++)
   {
       resultat *= x;
   }
   
   printf("x^n = %d",resultat);
   
   return EXIT_SUCCESS;
}
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
   int i = 0,j = 0,freq = 0,x = 0,mots = 0,compt = 0;
   char phrase[501] = {" aaa bbb cccc  "};
   char lettre;
   i = strlen(phrase);
   for(j = 0;j <= 122;j++)
   {
       freq = 0;
       for(x = 0;x < i;x++)
       {
           if(phrase[x] == j)
           {  
               freq++;   
           }
           if(j == 32)
           {
               if(phrase[x] != j && freq > 0)
               {
                   compt++;
               }
               if(phrase[x] == j)
               {
                   if(compt!= 0)
                   {
                       printf("%d ",compt);
                       compt = 0;
                   }
                   if(phrase[x + 1] > 32)
                   {
                       mots++;
                   }
               }
           }
        }
       lettre = j;
       if(freq > 0)
       {
           if(j <= 31)
           {
               printf("\nRang : %d\nFrequence : %d\n",j,freq);
           }else
           {
               printf("\nCharactere : \'%c\'\nRang : %d\nFrequence : %d\n",lettre,j,freq);
           }
           
       }
   }
   printf("\nNombre de mots : %d",mots);
   return EXIT_SUCCESS;
}                                         
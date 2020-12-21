#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
   char phrase[500] = "aaab lo bbc";
   int freq[255] = {0};
   int i = 0;
   int compt = 0;
   while (phrase[i] != '\0') 
   {
       ++freq[phrase[i]];
       ++i;
       
   }
   i = 0;
   while (phrase[i] != '\0') 
   {
      printf("'%c' : %d fois\n", phrase[i], freq[phrase[i]]);
      ++i;
   }
   printf("Le nombre de mot est %d\n", freq[32] + 1);
   i = 0;
   while (phrase[i] != '\0') 
   {
       if(phrase[i] != 32)
       {
          compt++;
       }
       
       if(phrase[i] == 32 || phrase[i + 1] == '\0')
       {
          printf("%d ",compt);
          compt = 0;
       }
       
       i++;
   }
   
   return EXIT_SUCCESS;
}                         
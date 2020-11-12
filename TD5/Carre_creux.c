#include <stdlib.h>
#include <stdio.h>
int main()
{
   int n = 0,i,i2;
   
   scanf("%d",&n);
   for(i = 1; i <= n; i++)
   {
      for(i2 = 1; i2 <= n; i2++)
      { 
        if(i == 1 || i == n || i2 == 1 || i2 == n)
        {
          printf("*");
        }
        else 
        {
          printf(" ");
        }
      }    
      printf("\n");
   }
   
   return EXIT_SUCCESS;
}
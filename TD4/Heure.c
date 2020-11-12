#include <stdlib.h>
#include <stdio.h>
int main()
{
   int heures,minutes,secondes;
   scanf("%d",&heures);
   scanf("%d",&minutes);
   scanf("%d",&secondes);
   if(secondes == 59)
   {
	  secondes = 0;
	  minutes ++;
	  if(minutes == 60)
	  {
	    minutes = 0;
		heures ++;
		if(heures == 24)
		{
		  heures = 0;
		}
	  }
   }
   else 
   {
	  secondes ++;
   }
   printf("%dh%dm%ds",heures,minutes,secondes);
   
   return EXIT_SUCCESS;
}
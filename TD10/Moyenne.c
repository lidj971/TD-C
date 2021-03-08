#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 100

int main()
{
    double tab[TAILLE_MAX];
    double userInput = 0;
    double moyenne = 0;
    int i = 0;
    while(userInput != -1)
    {
        printf("Entrez une valeur positive ");
        scanf("%lf",&userInput);
        if(userInput >= 0)
        {
            tab[i] = userInput;
            moyenne += userInput;
            i++;
        }    
    }
    
    moyenne = moyenne/i;
    int j = 0;
    for(j = 0; j < i;j++)
    {
        printf("tab[%d] = %lf\n",j,tab[j]);
    }
    printf("moyenne = %lf",moyenne);

    return EXIT_SUCCESS;
}
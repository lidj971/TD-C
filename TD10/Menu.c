#include <stdio.h>
#include <stdlib.h>

enum Option
{
    QUIT = 0,
    PRIMALITE = 1,
    FACTORIELLE = 2,
    DEVINE = 3,
    CARRE = 4
};

int main()
{
    enum Option userInput;
    do
    {
        printf("0 pour quitter\n1 pour le test de primalite\n2 pour la factorielle\n3 pour deviner un nombre\n4 pour le carre d'etoile\n");
        scanf("%d",&userInput);
        switch(userInput)
        {
            case QUIT: 
            break;
            case CARRE:
            printf("carre d'etoile indisponible\n");
            break;
            case DEVINE:
            printf("jeu du nombre indisponible\n");
            break;
            case FACTORIELLE:
            printf("operatoin factorielle indisponible\n");
            break;
            case PRIMALITE:
            printf("test de primalite indisponible\n");
            break;
            default:
            printf("veulliez entrer une valeur entre 0 et 4\n");
            break;
        }
    } 
    while(userInput != 0);

    return EXIT_SUCCESS;
}
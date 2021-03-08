#include <stdio.h>
#include <stdlib.h>

typedef enum Temps
{
    COUVERT,
    PLUVIEUX,
    NEIGEUX,
    ENSOLEILLE 
}Temps;

typedef enum Pression
{
    BAISSE = 4,
    STABLE,
    AUGMENTE
}Pression;

typedef enum Vent
{
    EST = 7,
    OUEST,
    NORD,
    SUD
}Vent;


typedef struct Bulletin
{
    Temps temps;
    Pression pression;
    Vent vent;
}Bulletin;

int main()
{
    Temps userInput;
    
    scanf("%d",&userInput);
    switch(userInput)
    {
        case COUVERT: 
        printf("temps couvert\n");
        break;
        case PLUVIEUX:
        printf("temps pluvieux\n");
        break;
        case NEIGEUX:
        printf("temps neigeux\n");
        break;
        case ENSOLEILLE:
        printf("temps ensoleille\n");
        break;
        default:
        printf("Valeur invalide");
        break;
    }
    
    return EXIT_SUCCESS;
}
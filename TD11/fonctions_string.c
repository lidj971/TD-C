#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int lenght1 = 0,lenght2 = 0,cmp1,cmp2;
    char chaine1[500];
    char chaine2[500];
    char resultat1[500];
    char resultat2[500];
    scanf("%s",chaine1);
    scanf("%s",chaine2);
    lenght1 = strlen(chaine1);
    lenght2 = strlen(chaine2);
    strcpy(resultat1,chaine1);
    printf("%d\n",lenght1);
    printf("%d\n",lenght2);
    cmp1 = strcmp(chaine1,chaine2);
    cmp2 = strcmp(chaine1,resultat1);
    printf("%d\n",cmp1);
    printf("%d",cmp2);
    strcpy(resultat2,strcat(chaine1,chaine2));
    return EXIT_SUCCESS;
}
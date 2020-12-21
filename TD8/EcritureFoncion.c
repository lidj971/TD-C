#include <stdlib.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0

int cube(int x);
int est_majeur(int y);
int somme(int z);
void afficher_rectangle(int x,int y);
int saisie_utilisateur();

int main()
{
int l,L;
int a,b,c,d;
int e,f;
printf("Nombre a mettre au cube ?\n");
scanf("%d",&a);
printf("Age ?\n");
scanf("%d",&b);
printf("Nombre a mettre en somme?\n");
scanf("%d",&c);
printf("Longueur du rectangle ?\n");
scanf("%d",&l);
printf("Largeur du rectangle ?\n");
scanf("%d",&L);
e = cube(a); /* valeur absolue de x */
b = est_majeur(b); /* minimum entre x et y */
f = somme(c); /* z! */
d = saisie_utilisateur();
afficher_rectangle(L,l);

printf("Cube(%d) = %d\nMajeur = %d\nSomme(%d) = %d\nVous avez entrez %d",a,e,b,c,f,d);
/* Valeur fonction */
return EXIT_SUCCESS;
}
int cube(int x)
{
    x *= x*x;
    return x;
}
int est_majeur(int y)
{
    if(y >= 18)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int somme(int z)
{
    int i,result = 0;
    for (i = 1;i<= z;i++)
    {
       result += i;
    }
    return result;
}
void afficher_rectangle(int x, int y)
{
    int i,i2;
    for(i = 1; i <= x;i++)
    {
        for(i2 = 1;i2 <= y;i2++)
        {
          if(i == 1 || i == x || i2 == 1 || i2 == y)
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
}
int saisie_utilisateur()
{
    int x;
    printf("Entrez un entier\n");
    scanf("%d",&x);
    return x;
}

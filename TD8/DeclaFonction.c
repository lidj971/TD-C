#include <stdlib.h>
#include <stdio.h>

int valeur_absolue(int x);
int minimum(int x,int y);
int factorielle(int z);

int main()
{
int x = -3;
int y = 5;
int z;
int a,b,c;

x = valeur_absolue(x); /* valeur absolue de x */
z = minimum(x, y); /* minimum entre x et y */
z = factorielle(z); /* z! */
z = minimum(y, z); /* minimum entre y et z */
/* Valeur fonction */
return EXIT_SUCCESS;
}
int valeur_absolue(int x)
{
    if(x < 0)
    {
       x = -x;
    }
    return x;
}
int minimum(int x, int y)
{
    if(x >= y)
    {
        return y;
    }
    if(y >= x)
    {
        return x;
    }
}
int factorielle(int z)
{
    int i,result = 1;
    for (i = 1;i<= z;i++)
    {
       result *= i;
    }
    return result;
}

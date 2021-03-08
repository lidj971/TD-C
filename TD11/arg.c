#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    int i = 0;
    printf("les %d parmetres de la commande %s sont :\n",argc,argv[0]);
    for(i = 1; i <= argc;i++)
    {
        printf("%s\n",argv[i]);
    }
    return EXIT_SUCCESS;
}
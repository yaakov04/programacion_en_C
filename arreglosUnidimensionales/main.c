#include <stdio.h>
#include <stdlib.h>

int main()
{

    int enteros[3];

    enteros[0]=22;
    enteros[1]=32;
    enteros[2]=42;

    float flotantes[]={23.4, 29.6, 52.7, 42.3, 3.14};

    char caracteres[5];
    caracteres[0]='D';
    caracteres[1]='i';
    caracteres[2]='e';
    caracteres[3]='g';
    caracteres[4]='o';

    printf("Primer entero \t\t %i", enteros[0]);
    printf("\nultimo float \t\t %f", flotantes[4]);
    printf("\nlista de char \t\t %c%c%c%c%c", caracteres[0],caracteres[1],caracteres[2],caracteres[3],caracteres[4]);

    return 0;
}

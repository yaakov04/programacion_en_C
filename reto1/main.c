#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando las variables
    int phi;
    int psi;
    int epsilon;
    //asignando el valor
    printf("Introduce el valor de phi: \n");
    scanf("%i", &phi);
    printf("\nIntroduce el valor de psi: \n");
    scanf("%i", &psi);
    //intercambiando el valor
    epsilon = phi;
    phi = psi;
    psi=epsilon;
    //imprimiendo el valor intercambiado
    printf("\n\nEl valor intercambiado de phi es: %i", phi);
    printf("\nEl valor intercambiado de psi es: %i", psi);

    return 0;
}

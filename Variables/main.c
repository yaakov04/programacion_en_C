#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA = 1;
    float floatA = 1.1;
    double doubleA =1.1;
    char letterA ='A';
    bool frege = false;

    //imprimir una varible que es entero
    printf("Entero: %i", integerA);
    //imprimir una varible que es float
    printf("\nflotante: %f", floatA);
    //imprimir una varible que es double
    printf("\ndouble: %f", doubleA);
    //imprimir una varible que es caracter
    printf("\ncaracter: %c", letterA);

    /*
    //asignar datos con un input
    int entrada;
    printf("\n\nIngresa el valor de entrada ");
    scanf("%i", &entrada);
    printf("\n%i", entrada);
    */
    float entrada;
    printf("\n\nIngresa el valor de entrada ");
    scanf("%f", &entrada);
    printf("\n%f", entrada);





    return 0;
}

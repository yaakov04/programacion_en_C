#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Vamos a calcular el volumen de un cilindro\n");

    //declarando las variables
    float radio;
    float altura;
    float area;
    float volumen;
    float pi =3.14;


    //asignando el radio y la altura
    printf("\nIngresa el radio de la base: ");
    scanf("%f", &radio );
    printf("\nIngresa la altura del cilindro: ");
    scanf("%f", &altura );

    //calculando el area de la base (pi * radio^2)
    area = pi*radio*radio;

    //calculando el volumen del cilindro (pi * radio^2 * a)
    volumen = pi*(radio*radio)*altura;

    //impriendo los resultados
    printf("\nEl area de la base es: %f", area);
    printf("\nEl el volumen es: %f", volumen);


    return 0;
}

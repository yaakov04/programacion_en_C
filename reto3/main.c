#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Vamos a convertir grados Fahrenheit a a grados Celsius\n");
    //declarando las variables
    float fahrenheit;
    float celsius;
    //asignando los grados Fahrenheit
    printf("\nIngresa la temperatura en grados Fahrenheit: ");
    scanf("%f",&fahrenheit);
    //calculando los grados Fahrenheit a Celcius ((Fahrenheit-32)5/9)
    celsius = (fahrenheit-32)*5/9;
    printf("\nLa temperatura en grados Celcius es: %f", celsius);

}

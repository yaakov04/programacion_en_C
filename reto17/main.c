#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int exponente){
    int resultado=1;
    for(int i =0; i<exponente;i++){
        resultado*=base;
    }
    return resultado;
}

int main()
{
    int base, exponente, resultado;
    printf("Introduce la base: ");
    scanf("%i", &base);
    printf("\nIntroduce el exponente: ");
    scanf("%i", &exponente);
    resultado= potencia(base,exponente);
    printf("\nLa potencia es: %i", resultado);
    return 0;
}

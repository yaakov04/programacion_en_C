#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
    return a+b;
}
int main()
{
    printf("Funcion sum!\n");
    int resultado = sum(21,21);
    printf("El resultado de la suma es: %i", resultado);
    return 0;
}

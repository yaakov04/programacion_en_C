#include <stdio.h>
#include <stdlib.h>

float DolaresAMxn(float precioDolar, float dolares){
    return dolares * precioDolar;
}
float MxnADolares(float precioDolar, float pesosMxn){
    return pesosMxn/precioDolar;
}
float inputCantidad(){
    float cantidad;
    printf("\nIntroduzca la cantidad a convertir: ");
    scanf("%f",&cantidad);
    return cantidad;
}
float opciones(int opcion, float precioDolar){
    float cantidad;
    switch(opcion){
        case 1:
            cantidad=inputCantidad();
            return MxnADolares(precioDolar, cantidad);
        case 2:
            cantidad=inputCantidad();
            return DolaresAMxn(precioDolar, cantidad);
        default:
            printf("No es una opcion valida");
            return 0;
            break;
    }
}

void bucle(){
    float precioUsdEnMxn=20.33, resultado;
    int opcion;
    printf("A dia 26 de agosto de 2021 el tipo de cambio es: 1 dolar = %f\n\n", precioUsdEnMxn);
    printf("Para convertir pesos MXN a dolares USD oprima 1\n");
    printf("Para convertir dolares USD a pesos MXN oprima 2\n");
    printf("Seleccione una opcion: ");
    scanf("%i", &opcion);
    resultado = opciones(opcion, precioUsdEnMxn);
    printf("\n\n");
    printf("%f", resultado);
}

int main()
{
    int continuar = 1;
    while(continuar == 1){
        printf("=====Conversor de moneda (USD y MXN)=====\n\n");
        bucle();
        printf("\n\nDeseas continuar?  < 1=si, 0=no >\n");
        scanf("%i", &continuar);
        printf("\n\n\n");
    }

    return 0;
}

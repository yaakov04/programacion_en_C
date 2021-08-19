#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Imprimir numeros descendientes\n");
    int upperLim, bottomLim;

    printf("Ingresa un limite superior: ");
    scanf("%i",&upperLim);


    printf("\nIngresa un limite inferior: ");
    scanf("%i",&bottomLim);


    for(int i = upperLim; i>=bottomLim;i--){
        printf("%i \n",i );
    }
    return 0;
}

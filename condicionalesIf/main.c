#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion\n\n");
    float valA, valB, valC;
    valA = valB = 100;

    printf("Primera condicion:\n");
    if(valA == valB){
        printf("Ambos son iguales\n\n");
    }

    printf("Segunda condicion:\n");
    if(valA == valB){
        printf("Ambos son iguales\n");
        valC = valA + valB;
        printf("La suma de ambos es: %f\n", valC);
    }


    return 0;
}

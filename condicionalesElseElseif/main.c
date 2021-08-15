#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion if, else, else if\n");

    float valA, valB, valC;
    valA = 50;
    valB =100;
    valC =150;

    printf("Condicion: \n\n");

    if(valA == valB){
        printf("A y B son iguales");
    } else if(valB == valC){
        printf("B y C son iguales");
    } else {
        printf("ninguno es igual\n");
        printf("hyat");
    }
    return 0;
}

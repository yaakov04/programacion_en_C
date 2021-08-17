#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorA, valorB, valorC;
    valorA =5;
    valorB=valorC=10;

    if((valorA < valorB)&&(valorB == valorC)){
        printf("se cumple la conjunción\n");
    }else{
        printf("no se cumplio la conjuncion\n");
    }

    if((valorA > valorB) || (valorA <= valorC)){
        printf("se cumple disyuncion\n");
    }else{
        printf("no se cumple la disyunción\n");
    }
    return 0;
}

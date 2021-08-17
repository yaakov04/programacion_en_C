#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valA, valB;
    valA = 5;
    valB = 10;

    if(valA<valB){
        printf("Se cumple A<B \n");
    }else{
        printf("No se cumple A<B\n");
    }

    if(valA<=valB){
        printf("Se cumple A<=B \n");
    }else{
        printf("No se cumple A<=B\n");
    }
    if(valA>valB){
        printf("Se cumple A>B \n");
    }else{
        printf("No se cumple A>B\n");
    }
    if(valA>=valB){
        printf("Se cumple A>=B \n");
    }else{
        printf("No se cumple A>=B\n");
    }
    if(valA==valB){
        printf("Se cumple A==B \n");
    }else{
        printf("No se cumple A==B\n");
    }
    if(valA!=valB){
        printf("Se cumple A!=B \n");
    }else{
        printf("No se cumple A!=B\n");
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int factorial(int num){
    printf("num vale: %i\n",num);
    if(num>1){
        printf("La funcion se llamara asi misma otra vez (num>1)\n");
        return num * factorial(num-1);
    }else{
        printf("num es igual a 1, termina la recursividad\n");
        return 1;
    }
}

int main()
{
    int resultado = factorial(600);
    printf("\nEl resultado es: %i", resultado);
    return 0;
}

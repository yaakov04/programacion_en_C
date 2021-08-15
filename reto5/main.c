#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adivina el numero\n\n");
    //declarando variables
    int val = 5;
    int res;

    //asignando la respuesta
    printf("Introduce un numero del 1 al 10: ");
    scanf("%int", &res);

    //comprobando la respuesta
    if(res == val){
    printf("Correcto chavo!! ;)");
    }else{
    printf("Mala suerte chavo!! :(");
    }

    return 0;
}

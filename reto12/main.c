#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[]={5,3,2,4,1};
    int resultado=1;

    for(int i=0; i<=4; i++){
        printf("arreglo[%i] = %i\n",i, arreglo[i]);
        resultado *=arreglo[i];
        printf("\n%i\n", resultado);
    }
    printf("Multiplicado es: %i",resultado);
    return 0;
}

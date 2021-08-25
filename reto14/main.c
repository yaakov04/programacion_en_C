#include <stdio.h>
#include <stdlib.h>

int main()
{
    int largoArreglo;
    printf("El numero mayor de un arreglo\n");
    printf("Introduce el largo del arreglo: ");
    scanf("%i", &largoArreglo);

    int arreglo[largoArreglo];
    for(int i=0;i<largoArreglo;i++){

        if(i%2==0){
            arreglo[i]=1+i*244/2;
        }else{
            arreglo[i]=3*(largoArreglo*i);
        }
        arreglo[0]=442;
        printf("arreglo[%i] es: %i\n", i, arreglo[i]);
    }
    int aux1=0, arregloPos;
    for(int e =0;e<largoArreglo;e++){

        if(arreglo[e]>aux1){
            aux1=arreglo[e];
            arregloPos=e;
        }

    }
    printf("\nEl numero mayor es: %i\nSu posicion en el arreglo es: %i\n", aux1, arregloPos);

    return 0;
}

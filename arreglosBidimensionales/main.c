#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[4][4];
    arreglo[0][0]=1;
    arreglo[0][1]=2;
    arreglo[0][2]=3;
    arreglo[0][3]=4;

    arreglo[1][0]=5;
    arreglo[1][1]=6;
    arreglo[1][2]=7;
    arreglo[1][3]=8;

    arreglo[2][0]=9;
    arreglo[2][1]=10;
    arreglo[2][2]=11;
    arreglo[2][3]=12;

    arreglo[3][0]=13;
    arreglo[3][1]=14;
    arreglo[3][2]=15;
    arreglo[3][3]=16;

    for(int i = 0;i<4;i++){
        for(int e=0;e<4;e++){
            printf("valor del arreglo[%i][%i]: %i\n",i,e, arreglo[i][e]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[3][4]={{1,1,1,1},{4,4,1,1},{10,5,5,6}};
    int resultado[]={0,0,0};
    for(int i = 0;i<3;i++){
        for(int e=0;e<4;e++){
            resultado[i]+=arreglo[i][e];
        }
        printf("resultado de fila %i es:%i\n",i,resultado[i]);
    }


    return 0;
}

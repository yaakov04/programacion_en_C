#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[11];
    for(int i=0;i<11;i++){
        arreglo[i]=i*i;
        printf("arrglego[%i] es: %i\n", i, arreglo[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numFib, numAnt, numSig;
    printf("fibonacci:\n");

    numFib=1;
    numAnt=0;

    for(int i=0; i<9;i++){
        //imprime el num de fib
        printf("%i ", numFib);
        //operacion
        numSig=numFib+numAnt;
        numAnt=numFib;
        numFib=numSig;
    }

    return 0;
}

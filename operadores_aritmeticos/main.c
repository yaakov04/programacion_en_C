#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rSum;
    float rRest;
    float rDiv;
    float rMult;
    int rMod;

    rSum = 7+3;
    rRest = 7.1-3.1;
    rDiv = 7.0 / 3.0;
    rMult = 7*3;
    rMod = 7%3;

    printf("Resultado suma: %i \n", rSum);
    printf("Resultado resta: %f \n", rRest);
    printf("Resultado division: %f \n", rDiv);
    printf("Resultado multiplicacion: %f \n", rMult);
    printf("Resultado modulo: %i \n", rMod);


    return 0;
}

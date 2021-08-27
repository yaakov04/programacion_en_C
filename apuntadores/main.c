#include <stdio.h>
#include <stdlib.h>

int main()
{
    float val;
    float *apVal;
    apVal=&val;
    *apVal=42;
    printf("val es: %f", val);
    return 0;
}

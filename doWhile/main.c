#include <stdio.h>
#include <stdlib.h>

int main()
{
    char answer = 'q';
    char value;
    do{
        printf("Ingresa una letra:");
        scanf("\n%c", &value);
    }while(value != answer);
    return 0;
}

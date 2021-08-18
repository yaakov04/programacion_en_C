#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("El numero menor de dos numeros\n\n");
    int num1, num2;

    printf("Ingresa el primer numero:  \n");
    scanf("%i",&num1);

    printf("Ingresa el segundo numero:  \n");
    scanf("%i",&num2);

    if(num1<num2){
        printf("El número menor es: %i",num1 );
    }else{
        printf("El número menor es: %i",num2 );
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;
    printf("Introduce un numero del 1 al 3\n");
    scanf("%i", &option);

    switch(option){
        case 1:
            printf("Elegiste la opcion 1");
            break;
        case 2:
            printf("Elegiste la opcion 2");
            break;
        case 3:
            printf("Elegiste la opcion 3");
            break;
        default:
            printf("Opcion invalida");
            break;
    }
    return 0;
}

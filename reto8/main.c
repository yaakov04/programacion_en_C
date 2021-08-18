#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;
    printf("Selecciona la opcion que sea equivalente al enunciado 'Si soy el actual rey de francia entonces la luna es de queso' :\n\n");

    printf("'Si es no es el caso que la luna es de queso entonces es falso que yo soy el rey de francia' ... (1)\n");
    printf("'O bien no es el caso que yo sea el rey de francia o bien la luna es de queso'... (2)\n");
    printf("'Si la luna es de queso entonces yo soy el rey de francia'... (3)\n");

    scanf("%i", &option);

    switch(option){
        case 1:
            printf("1 es equivalente");
            break;
        case 2:
            printf("2 es equivalente");
            break;
        case 3:
            printf("3 no es equivalente");
            break;
        default:
            printf("selecciona una opcion valida");
            break;
    }
    return 0;
}

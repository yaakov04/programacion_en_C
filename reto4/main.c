#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto 1\n");
    int x = 10;
    x+=2*x;
    printf("El valor de x es: %i", x);

    printf("\n\nReto 2\n");
    int inp;
    printf("Ingresa un valor: ");
    scanf("%i", &inp);
    inp %= 5;
    inp++;
    printf("\nResultado del input: %i", inp);

    return 0;
}

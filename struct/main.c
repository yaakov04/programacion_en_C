#include <stdio.h>
#include <stdlib.h>

struct datosPersonales{
    char nombr[60];
    char apellido[60];
    int age;
};

int main()
{
    printf("Introduce tus datos:\n");
    struct datosPersonales persona;
    printf("Nombre:\n");
    gets(persona.nombr);
    printf("Apellido:\n");
    gets(persona.apellido);
    printf("Edad:\n");
    scanf("%i", &persona.age);

    printf("\n\n\nImprimir datos:\n\n");
    printf("%s\n", persona.nombr);
    printf("%s\n",persona.apellido);
    printf("%i\n", persona.age);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct datosPersonales{
    char nombr[60];
    char apellido[60];
    int age;
};

int main()
{
    printf("=====Guardar un archivo=====\n\n");
    struct datosPersonales persona;

        FILE *archivo;
        archivo=fopen("Datos_personales_001.dat", "wb");

        if(archivo != NULL){
            printf("Introduce tus datos:\n");
            fflush(stdin);
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
            fwrite(&persona, sizeof(persona),1, archivo);
            fclose(archivo);
    }else{
        //
        printf("La operacion no pudo completarse");
    }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct datosPersonales{
    char nombr[60];
    char apellido[60];
    int age;
};

int main()
{
    printf("=====Leer un archivo=====\n\n");
    struct datosPersonales persona;

        FILE *archivo;
        archivo=fopen("Datos_personales_001.dat", "rb");

        if(archivo != NULL){
            fread(&persona, sizeof(persona), 1,archivo);
            printf("Imprimir contenido del archivo\n\n");
            printf("Nombre:\n%s\n\n", persona.nombr);
            printf("Apellido:\n%s\n\n", persona.apellido);
            printf("Edad:\n%i\n",persona.age);
            fclose(archivo);
    }else{
        //
        printf("El archivo no existe");
    }



    return 0;
}

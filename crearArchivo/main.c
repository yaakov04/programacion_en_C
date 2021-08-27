#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Crear un archivo\n");
    FILE *archivo;
    archivo = fopen("hyat.txt", "w");
    if(archivo != NULL){
        printf("El archivo se creo exitosamente.");
    }else{
        printf("No se pudo completar la operacion");
        fclose(archivo);
    }
    return 0;
}

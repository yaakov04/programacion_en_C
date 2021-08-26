#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[60];
    int cadenaLength;
    printf("Introduce una cadena de caracteres:\n");
    gets(cadena);
    cadenaLength=strlen(cadena);
    if(cadenaLength>0){
        printf("\nLa cadena invertida es:\n\n");
        for(int i=cadenaLength-1;i>=0;i--){
            printf("%c", cadena[i]);
        }
        printf("\n");
    }



    return 0;
}

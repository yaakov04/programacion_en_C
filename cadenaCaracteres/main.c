#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadenaChida[60];
    int size;
    printf("Escribe lo que sea: ");
    gets(cadenaChida);
    printf("\nLo que escribiste fue: \n\n \t");
    puts(cadenaChida);
    size=strlen(cadenaChida);
    printf("\nEl tamaño de la cadena es: %i", size);


    return 0;
}

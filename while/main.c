#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Introduce un numero:\n");
    int limit, i;
    scanf("%i", &limit);
    i = 0;
    while(i <= limit){
        printf("%i \n", i);
        i++;
    }
    return 0;
}

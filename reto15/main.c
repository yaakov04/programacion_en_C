#include <stdio.h>
#include <stdlib.h>

int main()
{
    float calificaciones[5][6]={{6,7.8,9.8,6.5,7,0},{7,9.9,6.5,8.2,6,0},{9,8.9,7.5,6.2,8,0},{7,9,8,8,10,0},{7,7.6,7.2,9.2,6,0}};

    float sum;
    for(int i=0;i<5;i++){
        sum=0;
        for(int e=0;e<5;e++){
            sum+=calificaciones[i][e];
            calificaciones[i][5]=sum/5;
        }
        printf("El promedio de fila %i es: %f\n",i,calificaciones[i][5]);
    }

    return 0;
}

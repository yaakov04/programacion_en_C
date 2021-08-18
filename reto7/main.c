#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Para saber si aprobo ingrese su calificación:\n\n");
    scanf("%i",&grade);

    if(grade >= 90){
        printf("Excelente chavo, sigue asi ;)");
    } else if(grade >= 60) {
        printf("Aprobaste, pero puedes mejorar");
    }else{
        printf("Muy mal chavo reprobaste u.u");
    }

    return 0;
}

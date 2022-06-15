#include <stdio.h>
#include <stdlib.h>
int main()
{

    double sueldoAnualBase = 120000;
    double sueldoAnualTotal;
    double sueldoMensual;
    double descuento;
    double aumento;
    int tiempoEnElEmpleo;

    printf("Escoja una de las siguientes opciones para hacer el calculo del sueldo del trabajador\n");
    printf("1- Lleva mas de 10 a%cos \n", 164);
    printf("2- Lleva menos de 10 a%cos pero mas de 5 \n", 164);
    printf("3- Lleva menos de 5 a%cos pero mas que 3 \n", 164);
    printf("4- Lleva menos de 3 a%cos \n", 164);
    scanf("%d", &tiempoEnElEmpleo);

    switch (tiempoEnElEmpleo)
    {
    case 1:

        aumento = sueldoAnualBase * .10;
        sueldoAnualTotal = sueldoAnualBase + aumento;
        descuento = sueldoAnualTotal * .16;
        sueldoAnualTotal = sueldoAnualTotal - descuento;
        sueldoMensual = sueldoAnualTotal / 12;
        printf("El sueldo anual %lf \n", sueldoAnualTotal);
        printf("El sueldo mensual %lf \n", sueldoMensual);
        printf("Descuento %lf \n", descuento);
        break;

    case 2:

        aumento = sueldoAnualBase * .07;
        sueldoAnualTotal = sueldoAnualBase + aumento;
        descuento = sueldoAnualTotal * .16;
        sueldoAnualTotal = sueldoAnualTotal - descuento;
        sueldoMensual = sueldoAnualTotal / 12;
        printf("El sueldo anual %lf \n", sueldoAnualTotal);
        printf("El sueldo mensual %lf \n", sueldoMensual);
        printf("Descuento %lf \n", descuento);
        break;

    case 3:

        aumento = sueldoAnualBase * .05;
        sueldoAnualTotal = sueldoAnualBase + aumento;
        descuento = sueldoAnualTotal * .16;
        sueldoAnualTotal = sueldoAnualTotal - descuento;
        sueldoMensual = sueldoAnualTotal / 12;
        printf("El sueldo anual %lf \n", sueldoAnualTotal);
        printf("El sueldo mensual %lf \n", sueldoMensual);
        printf("Descuento %lf \n", descuento);
        break;

    case 4:

        aumento = sueldoAnualBase * .03;
        sueldoAnualTotal = sueldoAnualBase + aumento;
        descuento = sueldoAnualTotal * .16;
        sueldoAnualTotal = sueldoAnualTotal - descuento;
        sueldoMensual = sueldoAnualTotal / 12;
        printf("El sueldo anual %lf \n", sueldoAnualTotal);
        printf("El sueldo mensual %lf \n", sueldoMensual);
        printf("Descuento %lf \n", descuento);
        break;

    default:
        printf("opcion no valida");
        break;
    }
    return 0;
}

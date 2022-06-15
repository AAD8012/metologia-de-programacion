#include <stdio.h>
#include <stdlib.h>
int main()
{
    double calificacionParcialUno;
    double calificacionParcialDos;
    double calificacionParcialTres;
    double calificacionExamenFinal;
    double calificacionTrabajoFinal;
    double totalParcial;
    double totalExamen;
    double totalTrabajoFinal;
    double calificacionTotalFinal;

    printf("Para saber su calificacion intruduzca las siguentes calificaciones obtenidas en la materia\n");
    printf("introduzca la calificacion obtenida en el primer parcial:\n");
    scanf("%lf", &calificacionParcialUno);
    printf("introduzca la calificacion obtenida en el segundo parcial:\n");
    scanf("%lf", &calificacionParcialDos);
    printf("introduzca la calificacion obtenida en el tercer parcial:\n");
    scanf("%lf", &calificacionParcialTres);
    printf("introduzca la calificacion obtenida en el examen final:\n");
    scanf("%lf", &calificacionExamenFinal);
    printf("introduzca la calificacion obtenida en el trabajo final:\n");
    scanf("%lf", &calificacionTrabajoFinal);

    totalParcial = ((calificacionParcialUno + calificacionParcialDos + calificacionParcialTres) * 55) / 30;
    totalExamen = (calificacionExamenFinal * 30) / 10;
    totalTrabajoFinal = (calificacionTrabajoFinal * 15) / 10;
    calificacionTotalFinal = (totalExamen + totalParcial + totalTrabajoFinal) / 10;
    printf("la calificacion final obtenida es de %lf:\n", calificacionTotalFinal);
    return 0;
}
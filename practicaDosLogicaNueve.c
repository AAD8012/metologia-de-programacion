#include <stdio.h>
#include <stdlib.h>
int main()
{

    double totalSegundos;
    double horas;
    double segundos;
    double minutos;

    printf("ingrese los siguientes datos para saber el total de segundo\n");
    printf("ingrese numero de horas\n");
    scanf("%lf", &horas);
    printf("ingres numero de minutos\n");
    scanf("%lf", &minutos);
    printf("ingres numero de segundos\n");
    scanf("%lf", &segundos);
    totalSegundos = (horas * 3600) + (minutos * 60) + segundos;
    printf("el total de segundos(%lf horas, %lf minutos y %lf segundos) es %lf segundos\n", horas, minutos, segundos, totalSegundos);
    return 0;
}
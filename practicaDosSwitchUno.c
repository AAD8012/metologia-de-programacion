#include <stdio.h>
#include <stdlib.h>
int main()
{
    double metros;
    double kilometros;
    int opcion;

    printf("Seleccione la conversion a realizar\n");
    printf("1- De kilometros a metros \n", 164);
    printf("2- De metros a kilometros\n", 164);

    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:

        printf("Introduzca los kilometros a covertir: \n");
        scanf("%lf", &kilometros);
        metros = kilometros * 1000;
        printf("%lf kilometros equivalen a %lf metros \n", kilometros, metros);
        break;

    case 2:
        printf("Introduzca los metros a covertir: \n");
        scanf("%lf", &metros);
        kilometros = metros / 1000;
        printf("%lf metros equivalen a %lf kilometros \n", metros, kilometros);
        break;

    default:
        printf("opcion no valida");
        break;
    }
    return 0;
}

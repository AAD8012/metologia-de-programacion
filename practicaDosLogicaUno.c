#include <stdio.h>
#include <stdlib.h>
int main()
{

    double numberOne = 0;
    double numberTwo = 0;
    double numberTree = 0;
    double numberFour = 0;
    double suma = 0;
    double resta = 0;
    double promedio = 0;

    printf("Ingrese el numero uno \n");
    scanf("%lf", &numberOne);
    printf("Ingrese el numero dos \n");
    scanf("%lf", &numberTwo);
    printf("Ingrese el numero tres \n");
    scanf("%lf", &numberTree);
    printf("Ingrese el numero cuatro \n");
    scanf("%lf", &numberFour);

    suma = numberOne + numberTwo + numberTree + numberFour;
    resta = numberOne - numberTwo - numberTree - numberFour;
    promedio = suma / 4;

    printf("la suma de los numeros es: %lf \n", suma);
    printf("la resta de los numeros es: %lf \n", resta);
    printf("el promedio de los numero es: %lf \n", promedio);

    system("pause");

    return 0;
}
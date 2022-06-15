#include <stdio.h>
#include <stdlib.h>
int main()
{

    double numberOne = 0;
    double numberTwo = 0;
    double multiplicacion = 0;
    double suma = 0;
    double resta = 0;

    printf("Ingrese el numero uno \n");
    scanf("%lf", &numberOne);
    printf("Ingrese el numero dos \n");
    scanf("%lf", &numberTwo);

    if (numberOne == numberTwo)
    {
        multiplicacion = numberOne * numberTwo;
        printf("los numeros introducidos son iguales entonces se deben de multiplicar y el resultado es: %lf", multiplicacion);
    }
    else if (numberOne > numberTwo)
    {
        resta = numberOne - numberTwo;
        printf("el primer numero introducido es mayor que el segundo por lo tanto se restan y el resultado es: %lf", resta);
    }
    else
    {
        suma = numberOne + numberTwo;
        printf("el segundo numero introducido es mayor que es primero por lo tanto se suman y el resultado es: %lf", suma);
    }

    system("pause");

    return 0;
}
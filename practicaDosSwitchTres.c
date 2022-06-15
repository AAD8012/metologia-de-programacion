#include <stdio.h>
#include <stdlib.h>
int main()
{

    double numeroUno;
    double numeroDos;
    int numeroUnom;
    int numeroDosm;
    double resultado;

    int opcion;

    printf("Escoja una de las siguientes opciones\n");
    printf("1- Suma \n");
    printf("2- Resta \n");
    printf("3- Multiplicacion \n");
    printf("4- Division \n");
    printf("5- Operacion modular \n");

    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Suma \n");
        printf("Introduzca un numero:\n");
        scanf("%lf", &numeroUno);
        printf("Introduzca un numero:\n");
        scanf("%lf", &numeroDos);
        resultado = numeroUno + numeroDos;
        printf("El resultado de la suma de %lf y %lf es: %lf\n", numeroUno, numeroDos, resultado);
        break;

    case 2:

        printf("Resta \n");
        printf("Introduzca un numero:\n");
        scanf("%lf", &numeroUno);
        printf("Introduzca un numero:\n");
        scanf("%lf", &numeroDos);
        resultado = numeroUno - numeroDos;
        printf("El resultado de la resta de %lf y %lf es: %lf\n", numeroUno, numeroDos, resultado);
        break;

    case 3:

        printf("Multiplicacion \n");
        printf("Introduzca un numero:\n");
        scanf("%lf", &numeroUno);
        printf("Introduzca un numero:\n");
        scanf("%lf", &numeroDos);
        resultado = numeroUno * numeroDos;
        printf("El resultado de la multiplicacion de %lf y %lf es: %lf\n", numeroUno, numeroDos, resultado);
        break;

    case 4:

        printf("Division \n");
        printf("Introduzca un numero:\n");
        scanf("%lf", &numeroUno);

        printf("Introduzca un numero:\n");
        scanf("%lf", &numeroDos);
        if (numeroDos == 0)
        {
            printf("debe de ingresar un numero diferente a cero para poder realizar la division");
        }
        else
        {
            resultado = numeroUno / numeroDos;
            printf("El resultado de la division de %lf y %lf es: %lf\n", numeroUno, numeroDos, resultado);
        }

        break;

    case 5:

        printf("Operador modulo \n");
        printf("Introduzca un numero:\n");
        scanf("%lf", &numeroUno);

        printf("Introduzca un numero:\n");
        scanf("%lf", &numeroDos);

        resultado = (numeroUnom % numeroDosm);
        printf("El resultado de la operacion modulo de %lf y %lf es: %lf\n", numeroUno, numeroDos, resultado);

        break;

    default:
        printf("opcion no valida");
        break;
    }
    return 0;
}

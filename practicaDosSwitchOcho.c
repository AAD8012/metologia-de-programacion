#include <stdio.h>
#include <stdlib.h>
int main()
{

    int resultado;

    int numero;
    int opcion;

    printf("Escoja una de las siguientes opciones\n");
    printf("1- cubo de un numero \n", 164);
    printf("2- numero par o impar \n", 164);
    printf("3- salir \n", 164);

    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:

        printf("ingresa un numero \n");
        scanf("%d", &numero);
        resultado = numero * numero * numero;
        printf("el cubo del numero %d es %d", numero, resultado);
        break;

    case 2:

        printf("ingresa un numero para saber si es par o impar \n");
        scanf("%d", &numero);
        if ((numero % 2) == 0)
        {
            printf("el numero %d es par\n", numero);
        }
        else
        {
            printf("el numero %d no es par\n", numero);
        }
        break;
    case 3:

        printf("salida");
        break;

    default:
        printf("opcion no valida");
        break;
    }
    return 0;
}

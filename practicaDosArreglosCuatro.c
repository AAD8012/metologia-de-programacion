#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numeros[20], numeros1[20];

    for (int i = 1; i <= 10; i++)
    {
        printf("introduzca un numero \n");
        scanf("%d", &numeros[i]);
        numeros1[i] = numeros[i] * 3;
    }
    printf("primer arreglo introducido=\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 10)
        {
            printf("%d\n", numeros[i]);
        }
        else
        {
            printf("%d", numeros[i]);
        }
    }
    printf("Segundo multiplicado por 3=\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d", numeros1[i]);
    }

    return 0;
}
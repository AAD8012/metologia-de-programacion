#include <stdio.h>
#include <stdlib.h>
int main()
{

    char caracter;

    printf("Introduzca solo los caracteres a,A,8 o de lo contrario marcara error \n");

    scanf("%c", &caracter);

    if (caracter == 65)
    {
        printf("exito\n");
    }
    else if (caracter == 97)
    {
        printf("exito\n");
    }
    else if (caracter == 56)
    {
        printf("exito\n");
    }

    else
    {
        printf("error\n");
    }

    system("pause");

    return 0;
}
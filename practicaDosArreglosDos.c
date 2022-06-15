#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char texto[20];
    char *p;
    int longitud = 0;
    char palabra[20];
    int contador;
    p = texto;
    printf("ingrese una palabra\n");
    scanf("%s", &texto);
    contador = strlen(texto);
    printf("La palabra introducida tiene %d caracteres y al reves se leeria asi:\n", contador);

    while (*p != '\0')
    {
        longitud++;
        palabra[longitud] = *p;
        p++;
    }

    for (int i = longitud; i >= 1; i--)
    {
        printf("%c", palabra[i]);
    }
    return 0;
}
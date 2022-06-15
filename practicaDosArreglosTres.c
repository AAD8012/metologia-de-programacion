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
    printf("La palabra introducida en codico ASCII es:\n");

    while (*p != '\0')
    {
        longitud++;
        palabra[longitud] = *p;
        printf("%d", palabra[longitud]);
        p++;
    }
    return 0;
}
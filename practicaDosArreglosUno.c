#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int number;
    int vec[5] = {3, 5, 7, 9, 2};
    printf("introduce un numero del siguiente arreglo vec=3,5,7,9,2 para saber en que indice se encuentra \n");
    scanf("%d", &number);
    if (number == 3 || number == 5 || number == 7 || number == 9 || number == 2)
    {
        for (int i = 0; i < 5; i++)
        {
            if (number == vec[i])
            {
                printf("el numero esta en el indice %d", i);
            }
        }
    }
    else
    {
        printf("error! el numero no se encuentra dentro del arreglo");
    }
    return 0;
}
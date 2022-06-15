#include <stdio.h>
#include <stdlib.h>
int main()
{
    int optionOne = 0;
    int optionTwo = 0;

    printf("Introduce el primer caracter:\n");
    scanf("%c", &optionOne);
    getchar();
    printf("Introduce el segundo caracter: \n");
    scanf("%c", &optionTwo);

    if ("%d", optionOne <= 90)
    {
        if (optionOne <= optionTwo)
        {
            printf("estan en orden alfabetico \n");
        }
        else
        {
            printf("no estan en orden alfabetico \n");
        }
    }
    else
    {
        if (optionOne <= optionTwo)
        {
            printf("estan en orden alfabetico \n");
        }
        else
        {
            printf("no estan en orden alfabetico \n");
        }
    }

    system("pause");

    return 0;
}
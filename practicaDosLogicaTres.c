#include <stdio.h>
#include <stdlib.h>
int main()
{

    double numberOne = 0;
    double numberTwo = 0;
    double numberTree = 0;

    double suma = 0;

    printf("Ingrese el numero uno \n");
    scanf("%lf", &numberOne);
    printf("Ingrese el numero dos \n");
    scanf("%lf", &numberTwo);
    printf("Ingrese el numero tres \n");
    scanf("%lf", &numberTree);

    suma = numberOne + numberTree;

    if (suma == numberTwo)
    {
        printf("la suma del numero uno y tres es igual al numero dos \n");
    }
    else
    {
        printf("la suma del numero uno y tres no es igual al numero dos \n");
    }

    system("pause");

    return 0;
}
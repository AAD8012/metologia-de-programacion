#include <stdio.h>
#include <stdlib.h>
int main()
{

    double importeBruto;
    double importeNeto;
    double importeDescuento;
    double importeTotal;

    printf("Introduzca el importe bruto: \n");
    scanf("%lf", &importeBruto);

    if (importeBruto > 15000)
    {
        importeDescuento = importeBruto * .17;
        importeNeto = importeBruto - importeDescuento;
        printf("Descuento: %lf \n", importeDescuento);
        printf("Su importe neto es de: %lf \n", importeNeto);
    }
    else if (importeBruto > 45000)
    {

        importeDescuento = importeBruto * .24;
        importeNeto = importeBruto - importeDescuento;
        printf("Descuento: %lf \n", importeDescuento);
        printf("Su importe neto es de: %lf \n", importeNeto);
    }
    else
    {
        importeDescuento = importeBruto * .15;
        importeNeto = importeBruto - importeDescuento;
        printf("Descuento: %lf \n", importeDescuento);
        printf("Su importe neto es de: %lf \n", importeNeto);
    }

    return 0;
}

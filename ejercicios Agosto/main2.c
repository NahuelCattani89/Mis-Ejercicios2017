#include <stdio.h>
#include <stdlib.h>
#define NUM_ITERACION 4

int main()
{
    int numeroUsuario;
    int i;
    int contadorNegativos=0;
    int cantidadPositivos;
    int acumPos=0;
    int acumNeg=0;
    float promPos;
    float promNeg;


    for(i=0;i<NUM_ITERACION;i++)
    {
        printf("Ingrese un numero:\n");
        scanf("%d", &numeroUsuario);
        if(numeroUsuario<0)
        {
            contadorNegativos++;
            acumNeg=numeroUsuario+acumNeg;
        }else
        acumPos=numeroUsuario+acumPos;

    }
    cantidadPositivos=NUM_ITERACION-contadorNegativos;
    if(cantidadPositivos!=0)
    {
       promPos=acumPos/(float)cantidadPositivos;
    }
    if(contadorNegativos!=0)
    {
        promNeg=acumNeg/(float)contadorNegativos;
    }
    printf("La cantidad de negativos es %d y la de positivos es %d", contadorNegativos, cantidadPositivos);
    printf("\nEl promedio de positivos es %.2f y el promedio %.2f", promPos,promNeg);
    return ;
}

#include <stdio.h>
#include <stdlib.h>
#define ITERACIONES 5
int i;
int contador=0;
int suma=0;
int promedio;
int Max;
int Min;
int numUsuario;
int acumulador=0;

int main()
{
    for(i=0;i<ITERACIONES;i++)
    {
        printf("Elija un numero :\n");
        scanf("%d",&numUsuario);
        contador++;
        acumulador +=numUsuario;
        suma=suma+numUsuario;

        if(i==0)
        {
            Max=numUsuario;
            Min=numUsuario;
        }
        else
        {
            if(numUsuario>Max)
            {
                Max=numUsuario;
            }
            if(numUsuario<Min)
            {
                Min=numUsuario;
            }
            promedio=acumulador/contador;
        }
    }

    printf("el promedio es :%d",promedio);
    printf("el max es :%d", Max);
    printf("el min es :%d", Min);
    return 0;
}

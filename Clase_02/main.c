#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maximo;
    int minimo;
    int acumulador;
    int auxiliarInt;
    int i;

    printf("Ingrese un nro: ");
    scanf("%d", &auxiliarInt);
    maximo = auxiliarInt;
    minimo = auxiliarInt;
    acumulador = auxiliarInt;

    for(i=0;i<4;i++)
    {
        printf("Ingrese un nro: ");
        scanf("%d", &auxiliarInt);
        acumulador = acumulador + auxiliarInt;

        if(auxiliarInt > maximo)
        {
            maximo = auxiliarInt;
        }

        if(auxiliarInt < minimo)
        {
                minimo = auxiliarInt;
        }
    }

    printf("El maximo es: %i\n", maximo);
    printf("El minimo es: %i\n", minimo);
    printf("El promedio es: %i\n", acumulador/5);
    return 0; 
}

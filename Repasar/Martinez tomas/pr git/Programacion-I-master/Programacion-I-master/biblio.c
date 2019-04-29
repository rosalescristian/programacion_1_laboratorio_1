#include "biblio.h"


void mostrarArray(int array[], int TAM)
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d \n", array[i]);
    }

}

void cargarArray(int array[], int TAM)
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &array[i]);
    }
}

int buscarValor(int array[], int TAM, int valor)
{
    int indice = -1;
    int i;
    for(i=0; i<TAM; i++)
    {
        if(array[i] == valor)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

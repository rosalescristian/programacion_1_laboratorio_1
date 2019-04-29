#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
#define TAM 5

//void mostrarArray(int[]);
int const LARGO = 10;
int main()
{
    int miArray[TAM] = {};
    int indice;
    cargarArray(miArray, TAM);
    mostrarArray(miArray, TAM);
    indice = buscarValor(miArray, TAM, 5);

    if(indice != -1)
    {
        printf("\nEl indice es: %d", indice);
    }
    else{
        printf("\nNo se encontro el indice");
    }

    return 0;
}



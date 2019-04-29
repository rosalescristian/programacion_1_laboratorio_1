#include <stdio.h>
#include <stdlib.h>
#include "profe.h"
#define TAM 3

int main()
{
   // eProducto unProducto;
    eProducto listaProductos[TAM] = {{"12345678910", "paty", "10/5/98","patyviena", 25},{"10987654321","queso","19/7/85","panchito", 30},{"2949238", "jamon","29/2/59","vneic", 35}};
  //  eProducto listaProductos = {{"12345678910", "paty", "10/5/98","patyviena", 25},{"10987654321","queso","19/7/85","};
  //  unProducto = pedirProducto();
    construirArray(TAM, listaProductos);
    //cargarArray(TAM, listaProductos);
    mostrarArray(TAM, listaProductos);
   // mostrarUnProducto(unProducto);


    return 0;
}

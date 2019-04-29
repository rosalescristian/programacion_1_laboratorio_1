#include <stdio.h>
#include <stdlib.h>
#include "producto.h"

int main()
{
    eProducto unProducto;
    //eProducto listaProductos = {{"12345678910", "paty", "10/5/98","patyviena", 25},{"10987654321","queso","19/7/85","};
    unProducto = pedirProducto();
    mostrarUnProducto(unProducto);
    return 0;
}

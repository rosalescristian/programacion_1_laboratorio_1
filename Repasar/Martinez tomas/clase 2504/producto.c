#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "producto.h"
#define TAM 3

eProducto pedirProducto()
{
    eProducto productoParaRetornar;

        printf("Ingrese codigo de barra: ");
        fflush(stdin);
        gets(retorno[i].codigoDeBarra);
        printf("Ingrese fdv del producto: ");
        fflush(stdin);
        gets(retorno[i].fechaVencimiento);
        printf("Ingrese nombre del producto: ");
        fflush(stdin);
        gets(retorno[i].nombre);
        printf("Ingrese proveedor: ");
        fflush(stdin);
        gets(retorno[i].proveedor);
        printf("Ingrese precio del producto: ");
        scanf("%f", retorno[i].precio);



    return productoParaRetornar;
}

void mostrarProductos(eProducto unProducto, int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {

    }
}

void mostrarUnProducto(eProducto elParametroProducto)
{
    printf("\n\n\n \t\t<<<<<Producto >>>>> \n");
    printf("\nAtributo \t Valor ");
    printf("\n---------------------------");
    printf("\nCodigo :\t %s", elParametroProducto.codigoDeBarra);
    printf("\nNombre :\t %s", elParametroProducto.nombre);
    printf("\nProveedor :\t %s", elParametroProducto.proveedor);
    printf("\nFecha de vencimiento :\t %s", elParametroProducto.fechaVencimiento);
    printf("\nPrecio :\t %f", elParametroProducto.precio);
}

void cargarArray( int tam, eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i]=pedirProducto();
    }
}

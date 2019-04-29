#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "profe.h"
#define TAM 3

eProducto pedirProducto()
{
    eProducto productoParaRetornar;

        printf("Ingrese codigo de barra: ");
        fflush(stdin);
        gets(productoParaRetornar.codigoDeBarra);
        printf("Ingrese fdv del producto: ");
        fflush(stdin);
        gets(productoParaRetornar.fechaVencimiento);
        printf("Ingrese nombre del producto: ");
        fflush(stdin);
        gets(productoParaRetornar.nombre);
        printf("Ingrese proveedor: ");
        fflush(stdin);
        gets(productoParaRetornar.proveedor);
        printf("Ingrese precio del producto: ");
        scanf("%f", &productoParaRetornar.precio);



    return productoParaRetornar;
}

void mostrarArray(int tam, eProducto lista[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarUnProducto(lista[i]);
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
    printf("\nEstado :\t %d", elParametroProducto.estado);
}

void cargarArray( int tam, eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i]=pedirProducto();
    }
}

void construirArray(int tam, eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i].estado = 0;
        strcpy(listado[i].nombre,"nn");
        strcpy(listado[i].codigoDeBarra,"");
        strcpy(listado[i].fechaVencimiento,"");
        strcpy(listado[i].proveedor,"");
        listado[i].precio = 0;
    }

}

int borrarProducto(eProducto elProducto, eProducto listado[])
{
    int indice;
    indice=existeProducto(elProducto, listado);
    if(indice!=-1)
    {
        listado[indice].estado=-1;
    }
    return indice;
}

int insertProducto(eProducto elProducto, eProducto listado[])
{
    int indice;
    indice=dameLugarLibre(listado);
    if(indice!=-1)
    {
        listado[indice]=elProducto;
    }
    return indice;
}

int dameLugarLibre(eProducto listado[])
{
 //NO
    int indice;
    indice=listado.estado;
    if(indice==0)
    {
        cargarArray();
    }
    return ;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#include "Clase.h"

///Tarea

void mostrarArrayProductosConProveedorElMaximo(eProducto[], int,eProveedor[], int);
void mostrarArrayProductosConProveedorOrdenado(eProducto[], int,eProveedor[], int , int);



void mostrarArrayProductosConProveedor(eProducto[], int,eProveedor[], int);

void mostrarArrayProveedorconSusProductos(eProveedor[], int,eProducto[], int);

int main()
{
    //definir array.
    //cargar array.
    //mostrar array.
    int i;
    //int opcion;

    eProducto listadoProductos[T];
    eProveedor listadoProveedores[T];

    inicializarProductos(listadoProductos,T);
    inicializarProveedor(listadoProveedores,3);

    printf("     PRODUCTO         CODIGO   FECHA      PRECIO     ID\n");

    mostrarArrayProductos(listadoProductos,T);

    printf("\n\n\n");

    printf("ID  DESCRIPCION    LOCALIDAD      DUENIO   CUIT\n");

    mostrarArrayProveedor(listadoProveedores,3);

    printf("\n\n\n");

    printf("mostrarArrayProductosConProveedor\n");
    mostrarArrayProductosConProveedor(listadoProductos,T,listadoProveedores,3);

    printf("\n\n\n");

    printf("mostrarArrayProveedorconSusProductos\n");
    mostrarArrayProveedorconSusProductos(listadoProveedores,3,listadoProductos,T);




    return 0;
}


void mostrarArrayProductosConProveedor(eProducto listaProductos[] , int tamprod ,eProveedor listaProveedores[], int tamprov)
{
    int i;
    int j;
    for(i=0; i<tamprod; i++)
    {
        mostrarProducto(listaProductos[i]);
         for(j=0; j<tamprov; j++)
        {
            if( listaProductos[i].idProveedor ==listaProveedores[j].id )
            {
                    mostrarProveedor(listaProveedores[j]);
            }
        }

    }
}

void mostrarArrayProveedorconSusProductos(eProveedor listaProveedores[] , int tamprov ,eProducto listaProductos[], int tamprod)
{
    int i;
    int j;
    for(i=0; i<tamprov; i++)
    {
        mostrarProveedor(listaProveedores[i]);

         for(j=0; j<tamprod; j++)
        {
            if(listaProveedores[i].id ==listaProductos[j].idProveedor)
            {
                mostrarProducto(listaProductos[j]);
            }
        }

    }
}

































/*eProducto unProducto;
    eProducto listadoProductos[T];
    construirArray(listadoProductos,T);
    inicializarProductos(listadoProductos,T);
    mostrarArray(listadoProductos,T);

    do
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\nElija opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
               insertarProducto(listadoProductos, T);
            break;
            case 2:
                borrarProducto(listadoProductos,T);
                break;
            case 3:
                editarProducto(listadoProductos, T);
                break;

            case 4:
                mostrarArray(listadoProductos,T);
                break;
        }
    }while(opcion!=10);





*/

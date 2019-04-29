#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    char codigoDeBarra[13];
    char nombre[50];
    char fechaVencimiento[50];
    char proveedor[50];
    float precio;

}eProducto;

eProducto pedirProducto();
void mostrarUnProducto(eProducto);
void cargarArray( int, eProducto[]);
void mostrarArray( int, eProducto[]);

#endif // PRODUCTO_H_INCLUDED

#include "estudios.h"
#include "peliculas.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define T 6

void cargarEstudio(eEstudio lista[], int tam)
{
    int i;
    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        lista[i].id = mayorIdEstudio(lista, T) + 1;
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese pais: ");
        fflush(stdin);
        gets(lista[i].pais);
        printf("Ingrese anio creacion: ");
        scanf("%d", &lista[i].anioDeCreacion);
        lista[i].estado = OCUPADO;
    }
    else
    {
        printf("No hay espacio");
    }
}

int buscarLibre(eEstudio lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

void inicializarEstudio(eEstudio lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].id = 0;
        lista[i].estado = LIBRE;
    }
}

void harcodearEstudio(eEstudio lista[])
{
    int i;
    int tam = 5;
    char nombres[][50]= {"disney","marvel","dc","pixar","universal"};
    char paises[][50]= {"USA","USA","USA","USA","USA"};
    int anioDeCreacion[]= {1934,1954,1952,1943,1935};

    for(i=0; i<tam; i++)
    {
        lista[i].id = i + 1;
        strcpy(lista[i].nombre, nombres[i]);
        strcpy(lista[i].pais, paises[i]);
        lista[i].anioDeCreacion = anioDeCreacion[i];
        lista[i].estado = OCUPADO;
    }
}

void mostrarListaEstudios(eEstudio lista[], int tam)
{
    int i;
    printf("------------------------------\n");
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEstudio(lista[i]);
        }
    }
    printf("------------------------------\n");
}
void mostrarEstudio(eEstudio unEstudio)
{
    printf("%d %10s %10s %d\n", unEstudio.id, unEstudio.nombre, unEstudio.pais, unEstudio.anioDeCreacion);
}

int mayorIdEstudio(eEstudio lista[], int tam)
{
    int i;
    int flag = 0;
    int aux = 0;
    for(i=0; i<tam; i++)
    {
        if(flag==0 || lista[i].id>aux)
        {
            aux = lista[i].id;
            flag = 1;
        }
    }
    return aux;
}

void modificarEstudio(eEstudio lista[], int tam, int id)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese id a modificar: ");
    scanf("%d", &id);

    for(i=0; i<tam; i++)
    {
        if(id == lista[i].id && lista[i].estado == OCUPADO)
        {
            printf("Ingrese un nuevo nombre: ");
            fflush(stdin);
            gets(lista[i].nombre);
            loEncontro = 1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("El dato no existe");
    }
}

void borrarEstudio(eEstudio lista[], int tam, int id)
{
    int i;
    int loEncontro = 0;
    printf("Ingrese id a borrar: ");
    scanf("%d", &id);

    for(i=0; i<tam; i++)
    {
        if(id == lista[i].id)
        {
            lista[i].estado = LIBRE;
            loEncontro = 1;
            break;
        }
    }
    if(loEncontro==0)
    {
        printf("El dato no existe");
    }
}

void mostrarEstudioConPelicilas(eEstudio listaEstudios[] , int tamest, ePelicula listaPeliculas[], int tampeli)
{
    int i;
    int j;
    for(i=0; i<tamest; i++)
    {
        if(listaEstudios[i].estado!=LIBRE) {
            mostrarEstudio(listaEstudios[i]);

            for(j=0; j<tampeli; j++)
            {
                if( listaEstudios[i].id == listaPeliculas[j].idEstudio && listaPeliculas[j].estado != LIBRE)
                {
                    mostrarPelicula(listaPeliculas[j]);
                }
            }
        }
    }
}

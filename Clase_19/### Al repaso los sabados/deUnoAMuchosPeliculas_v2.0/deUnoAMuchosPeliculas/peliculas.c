#include "peliculas.h"

void inicializarPelicula(ePelicula lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].id = 0;
        lista[i].estado = LIBRE;
    }
}

void harcodearPelicula(ePelicula lista[])
{
    int i;
    int tam = 5;
    char titulos[][50]= {"capitan america","titanic","avatar","el padrino","iron man"};
    char director[][50]= {"steve","di caprio","peter","john","tony stark"};
    int estudios[] = {1,1,3,4,4};
    int anioDeEstreno[]= {1934,1954,1952,1943,1935};
    float duracion[]= {134,100,95,120,135};

    for(i=0; i<tam; i++)
    {
        lista[i].id = i + 1;
        strcpy(lista[i].titulo, titulos[i]);
        strcpy(lista[i].director, director[i]);
        lista[i].idEstudio = estudios[i];
        lista[i].anioDeEstreno = anioDeEstreno[i];
        lista[i].duracion = duracion[i];
        lista[i].estado = OCUPADO;
    }
}

void mostrarListaPeliculas(ePelicula lista[], int tam)
{
    int i;
    printf("------------------------------\n");
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarPelicula(lista[i]);
        }
    }
    printf("------------------------------\n");
}
void mostrarPelicula(ePelicula unaPelicula)
{
    printf("%d %10s %10s %d %f\n", unaPelicula.id, unaPelicula.titulo, unaPelicula.director, unaPelicula.anioDeEstreno, unaPelicula.duracion);
}

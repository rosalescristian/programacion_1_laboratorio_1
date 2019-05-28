#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudios.h"
#include "peliculas.h"

#define T 6
int main()
{
    eEstudio listaEstudios[T];
    ePelicula listaPeliculas[T];

    inicializarEstudio(listaEstudios, T);
    harcodearEstudio(listaEstudios);

    inicializarPelicula(listaPeliculas, T);
    harcodearPelicula(listaPeliculas);
    mostrarEstudioConPelicilas(listaEstudios, T, listaPeliculas, T);

    /*

    mostrarListaEstudios(listaEstudios, T);

    cargarEstudio(listaEstudios, T);
    mostrarListaEstudios(listaEstudios, T);
    modificarEstudio(listaEstudios, T, 0);
    mostrarListaEstudios(listaEstudios, T);
    borrarEstudio(listaEstudios, T, 0);
    mostrarListaEstudios(listaEstudios, T);*/


    return 0;
}

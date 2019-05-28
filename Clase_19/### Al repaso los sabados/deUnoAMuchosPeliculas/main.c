#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudios.h"
#include "peliculas.h"
int main()
{
    ePelicula UnaPelicula;
    strcpy(UnaPelicula.titulo," Rompe Ralf")  ;

    eEstudio UnEstudio;
    strcpy(UnEstudio.nombre,"disney")  ;

    printf("el estudio es %s  y la pelicula es %s ",UnEstudio.nombre, UnaPelicula.titulo);

    return 0;
}

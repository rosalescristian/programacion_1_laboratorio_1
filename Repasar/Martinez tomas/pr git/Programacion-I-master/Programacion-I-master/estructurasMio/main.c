#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
#define A 3
//al final de las llaves nombramos a la estructura


int main()
{
    eAlumno listadoMain[A];
    cargarListadoAlumnos(listadoMain, A);
    ordenarPorNombre(listadoMain, A);
    mostrarListadoAlumnos(listadoMain, A);
/*
    para mostrar datos
    &miAlumno.legajo o &miAlumno.nombre y asi sucesivamente*/
    return 0;
}

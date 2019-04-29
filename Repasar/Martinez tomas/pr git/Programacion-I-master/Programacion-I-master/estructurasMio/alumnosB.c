#include <stdio.h>
#include "biblioteca.h"
#include <string.h>
#define A 3

eAlumno cargarAlumno()
{
    eAlumno miAlumno;

        printf("Ingrese legajo: ");
        scanf("%d", &miAlumno.legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(miAlumno.nombre);
        printf("Ingrese altura: ");
        scanf("%f", &miAlumno.altura);
        printf("Ingrese nota: ");
        scanf("%d", &miAlumno.nota);
        printf("Ingrese email: ");
        fflush(stdin);
        gets(miAlumno.email);

        return miAlumno;
}
void mostrarAlumno(eAlumno unAlumno)
{
    printf("%d--%s--%f--%d--%s\n", unAlumno.legajo, unAlumno.nombre, unAlumno.altura, unAlumno.nota, unAlumno.email);
}
void cargarListadoAlumnos(eAlumno listado[], int tam)
{
    int i;
    for(i=0; i<A; i++)
    {
            listado[i] = cargarAlumno(A);

    }
}

void mostrarListadoAlumnos(eAlumno listado[], int tam)
{
    int i;
    for(i=0; i<A; i++)
    {
            mostrarAlumno(listado[i]);
    }
}

void ordenarPorNombre(eAlumno listado[], int tam)
{
    int i;
    int j;

    eAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].nombre, listado[j].nombre)>0)
            {
                auxAlumno = listado[i];
                listado[i] = listado[j];
                listado[j] = auxAlumno;
            }
        }
    }

}

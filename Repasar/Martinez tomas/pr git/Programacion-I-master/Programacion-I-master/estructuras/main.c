#include <stdio.h>
#include <stdlib.h>
#define TAM 3


typedef struct
{
    char nombre[50];
    char apellido[50];
    int edad;
    int nota;

} eAlumno;


void mostrarAlumno(eAlumno);
void mostrarLista(eAlumno[], int);
void cargarAlumnos(eAlumno[], int);
void ordenarAlumnos(eAlumno[], int);

int main()
{
    eAlumno listaAlumnos[TAM] = {{"Juan","Ruiz",15,10},{"Maria","Gomez", 19, 10}, {"Amanda", "Lopez", 20, 7}};



    cargarAlumnos(listaAlumnos, TAM);
    ordenarAlumnos(listaAlumnos, TAM);
    mostrarLista(listaAlumnos, TAM);



    return 0;
}
void cargarAlumnos(eAlumno listaAlumnos[], int cant)
{
     int i;

    for(i=0; i<cant; i++)
    {
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(listaAlumnos[i].nombre);
        printf("Ingrese apellido: ");
        fflush(stdin);
        gets(listaAlumnos[i].apellido);
        printf("Ingrese edad: ");
        scanf("%d", &listaAlumnos[i].edad);
        printf("Ingrese nota: ");
        scanf("%d", &listaAlumnos[i].nota);
    }
}
void ordenarAlumnos(eAlumno lista[], int cant)
{
    int i,j;
    eAlumno aux;
    for(i=0; i<cant-1; i++)
    {
      for(j=i+1; j<cant; j++)
      {
          if(strcmp(lista[i].nombre, lista[j].nombre)>0)
          {
             aux = lista[i];
             lista[i] = lista[j];
             lista[j] = aux;
          }
      }
    }
}
void mostrarLista(eAlumno lista[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        mostrarAlumno(lista[i]);
    }
}
void mostrarAlumno(eAlumno alumno)
{
    printf("%s--%s--%d--%d\n", alumno.apellido, alumno.nombre, alumno.edad, alumno.nota);
}

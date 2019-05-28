#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos.h"

void informarSobreAlumno(eAlumno lista[],int tam)
{
    int opcion;

    getInt("1.Ordenar por localidades\n2.Ordenar por Nombre de alumnos\n3.Salir\nQue desea hacer?\n",&opcion,1,4);

    switch(opcion)
    {



    case 1:

        ordenarAlumnosPorLocalidades(lista,tam);
        mostrarListaAlumnos(lista,tam);
        break;
    case 2:
        ordenarAlumnosPorNombre(lista,tam);
        mostrarListaAlumnos(lista,tam);

        break;
    case 3:

        break;
    }

}

void getInt(char mensaje[],int *numero,int tamMin,int tamMax)
{
    char ingreso[50];
    int retorno=0;
    int flag;
    int auxiliar=0;
    int i;

    do
    {
        flag=1;
        printf(mensaje);
        fflush(stdin);
        gets(ingreso);

        for(i=0; i<strlen(ingreso); i++)
        {
            if(ingreso[i]=='.' || ingreso[i]<'0' || ingreso [i]>'9')
            {
                flag=0;
                break;
            }
        }

        auxiliar=atoi(ingreso);

        if(auxiliar>=tamMin && auxiliar<=tamMax && flag==1)
        {
            *numero=auxiliar;
            retorno=1;
        }

        if(retorno==0)
        {
            printf("error\n");
        }


    }
    while(retorno==0);


}

void ordenarAlumnosPorLocalidades(eAlumno lista[],int tam)
{
    int i;
    int j;
    eAlumno auxiliar;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(lista[i].idLocalidad>lista[j].idLocalidad)
            {
                auxiliar=lista[i];
                lista[i]=lista[j];
                lista[j]=auxiliar;
            }
        }
    }

}

void mostrarListaAlumnos(eAlumno lista[],int tam)
{
    int i;
    int flag=0;

    for(i=0; i<tam; i++)
    {
        if(lista[i].cargado)
        {
            printf("id\tnombre\t\tnota\tlocalidad\n");
            flag=1;
            break;
        }
    }

    if(flag)
    {
        for(i=i; i<tam; i++)
        {
            if(lista[i].cargado)
            {
                mostrarAlumno(lista[i]);
            }
        }
    }
    else
    {
        printf("\nNo se han ingresado empleados\n");
    }


}

void mostrarAlumno (eAlumno unAlumno)
{
    printf("\n%d%13s%10d%10d\n",unAlumno.id,unAlumno.nombre,unAlumno.nota,unAlumno.idLocalidad);
}

void hardcodearAlumnos(eAlumno lista[])
{
    int id[7]={1000,1001,1002,1003,1004,1005,1006};
    char nombre[7][50]={"maria","jose","pedro","ester","david","lautaro","jeremias"};
    int nota[7]={10,9,2,1,6,2,3};
    int idLocalidad[7]={100,101,101,102,103,102,102};
    int i;

    for(i=0;i<7;i++)
    {
        lista[i].id=id[i];
        strcpy(lista[i].nombre,nombre[i]);
        lista[i].nota=nota[i];
        lista[i].idLocalidad=idLocalidad[i];
        lista[i].cargado=1;
    }
}


void ordenarAlumnosPorNombre(eAlumno lista[],int tam)
{

    int i;
    int j;
    eAlumno auxiliar;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre)==1)
            {
                auxiliar=lista[i];
                lista[i]=lista[j];
                lista[j]=auxiliar;
            }
        }
    }

}

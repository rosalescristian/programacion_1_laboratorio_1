#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#define CHARLEN 100

static int generarNextId()
{
    static int id = -1;
    id ++;
    return id;
}

int traerIndiceVacio(EPersona* listaPersonas,int cantidad)
{
    int retorno = -1, i;
    if(listaPersonas != NULL && cantidad>0)
    {
        for (i=0; i<cantidad; i++)
        {
            if (listaPersonas[i].isEmpty)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}


int inicializar(EPersona* listaPersonas, int cantidad)
{
    int retorno = 0, i; /// Valor que retorna si esta todo mal
    if(listaPersonas != NULL && cantidad>0)
    {
        retorno = 1;
        for (i=0; i<cantidad; i++)
        {
            listaPersonas[i].isEmpty = 1;
        }
    }
    return retorno;
}

int altaPersona(EPersona listaPersonas[], int cantidad)
{
    EPersona auxPersona;
    int retorno = 0;
    int indice = traerIndiceVacio(listaPersonas, cantidad);

    if (indice>-1)
    {
        do
        {
            printf("Ingrese su nombre: ");
            fflush(stdin);
            gets(auxPersona.nombre);
        } while (strlen(auxPersona.nombre) == 0);

        do
        {
            printf("Ingrese su apellido: ");
            fflush(stdin);
            gets(auxPersona.apellido);
        } while (strlen(auxPersona.apellido) == 0);

        printf("Ingrese su dia de nacimiento: ");
        fflush(stdin);
        scanf("%d", &auxPersona.nacimiento.dia);

        printf("Ingrese su mes de nacimiento: ");
        fflush(stdin);
        scanf("%d", &auxPersona.nacimiento.mes);

        printf("Ingrese su anio de nacimiento: ");
        fflush(stdin);
        scanf("%d", &auxPersona.nacimiento.anio);


        /// IMPORTANT
        auxPersona.id = generarNextId();
        auxPersona.isEmpty = 0;
        listaPersonas[indice] = auxPersona;
        /// IMPORTANT ^^

        retorno = 1;
    }
    else
    {
        printf("No HAY ESPACIO!\n");
    }
    return retorno;
}


int getById(EPersona* listaPersonas, int cantidad, int idABuscar)
{
    int retorno = -1, i;

    if(listaPersonas != NULL && cantidad>0)
    {
        for (i=0; i<cantidad; i++)
        {
            if (listaPersonas[i].id == idABuscar)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}













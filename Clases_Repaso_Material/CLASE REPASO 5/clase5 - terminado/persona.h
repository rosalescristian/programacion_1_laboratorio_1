#ifndef STRUCTLIB_H_INCLUDED
#define STRUCTLIB_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"
#define CHARLEN 100

typedef struct
{
    int id;
    int isEmpty;
    char nombre[CHARLEN];
    char apellido[CHARLEN];
    EFecha nacimiento;
} EPersona;

static int generarNextId();
int traerIndiceVacio(EPersona* array,int cantidad);
int inicializar(EPersona* array,int cantidad);
int altaPersona(EPersona* array, int cantidad);
int getById(EPersona* array, int cantidad, int id);

#endif // STRUCTLIB_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}eFecha;

typedef struct{
    char apellido[31];
    char nombre[31];
    char sexo;
    eFecha fechanac;
}ePersona;

/*ASI INGRESAMOS A LOS CAMPOS DE LAS ESTRUCTURAS .Ingresamos en un nivel
ePersona per;
per.apellido;
per.nombre;
per.fechanac.dia;
per.fechanac.mes;
per.fechanac.ano;
*/

//Datos Parametrizables
typedef struc{
    int id;
    char descripcion[31];
}eNacion;


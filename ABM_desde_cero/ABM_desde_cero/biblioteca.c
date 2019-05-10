#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototipos.h"

#define QTY 1000

/**
    *\
    *\
    *\
    *
*/
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf(".2f",&auxiliar);
    return auxiliar;
}

/**
    *\
    *\
    *\
    *
*/

float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("f",&auxiliar);
    return auxiliar;
}

/**
    *\
    *\
    *\
    *
*/
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}

/**
    *\
    *\param str array con la cadena a ser analizada
    *\return 1 si es numerico y 0 si es no lo es
    *
*/
int esNumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] < '9')
        {
            return 0;
            i++;
        }
    }
    return 1;
}

/**
    *\
    *\
    *\ solo contiene numeros, espacios y un guion
    *
*/
int esTelefono(char str[])
{
    int i = 0;
    int contadorGuiones = 0;
     while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] < '9'))
        {
            return 0;
        }
        if(str[i] == '-')
        {
            contadorGuiones++;
        }
            i++;
    }
    if(contadorGuiones == 1)
    {
        return 1;
    }
    return 0;
}

/**
    *\
    *\
    *\
    *
*/
int esAlfanumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] < 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] < '9'))
        {
            return 0;
            i++;
        }
    }
    return 1;
}

/**
    *\
    *\
    *\
    *
*/
int esSoloLetras(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] < 'z') && (str[i] < 'A' || str[i] > 'Z'))
        {
            return 0;
            i++;
        }
    }
    return 1;
}

/**
    *\
    *\
    *\
    *
*/
void getString(char mensaje[], char input[])
{
    printf("%s",mensaje);
    scanf("%s",input);
}

/**
    *\
    *\
    *\
    *
*/
int getStringLetras(char mensaje[], char input[])
{
    char aux[256];
    getString(mensaje, aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/**
    *\
    *\
    *\
    *
*/
int getStringNumeros(char mensaje[], char input[])
{
    char aux[256];
    getString(mensaje, aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/** CON ARRAYS
    *\
    *\
    *\
    *
*/
void inicializarArray(int array[],int QTY[], int valor) // CON ARRAYS
{
    int i;
    for(i=0;i<QTY;i++)
    {
        array[i]=valor;
    }
}

/** Inicializa el array Empleados con el valor recibido -- CON ESTRUCTURAS
    *\param array Es el array a ser inicializado (Empleados)
    *\param QTY Indica la longitud del array
    *\param valor Es el valor que sera cargado en cada posicion
    *\return void
    *
*/
void inicializarArrayEmpleados(Employee arrayEmpleados[],int QTY[], int valor) // CON ESTRUCTURAS
{
    int i;
    for(i=0;i<QTY;i++)
    {
        arrayEmpleados[i].id=valor;
    }
}
/** CON ARRAYS
    *\
    *\
    *\
    *
*/
int buscarPrimerOcurrencia(int array[],int QTY[],int valor)
{
    int i;
    for(i=0;i<QTY;i++)
    {
        if(array[i]==valor)
        {
            return i;
        }
    }
    return -1;
}

/** Busca la primer ocurrencia de un valor en el array Empleados -- CON ESTRUCTURAS
    *\param arrayEmpleados es el array donde buscar
    *\param QTY es la longitud del array
    *\param valor es el valor que busco
    *\return Si no hay coincidencia (-1); si la hubiere, la posicion en el array.
*/
int buscarPrimerOcurrencia(Employee arrayEmpleados[],int QTY[],int valor)
{
    int i;
    for(i=0;i<QTY;i++)
    {
        if(arrayEmpleados[i].id== valor)
        {
            return i;
        }
    }
    return -1;
}


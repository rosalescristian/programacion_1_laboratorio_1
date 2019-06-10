#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */

int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee, int len)
{
    FILE *pFile;
    int r,i=0;
    char id, nombre[128];
    int horasTrabajadas, sueldo;
    pFile = fopen(fileName,"r");

    if(pFile == NULL){
        return -1;
    }

    do{
        r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);
        if(r==4){
            arrayPersonas[i].id = atoi(id);
            strncpy(arrayPersonas[i].nombre,nombre,sizeof(arrayPersonas[i].nombre));
            strncpy(arrayPersonas[i].apellido,horasTrabajadas,sizeof(arrayPersonas[i].apellido));
            arrayPersonas[i].edad = atoi(sueldo);
            i++;
        }
        else
            break;
    }while(!feof(pFile) && i<len);

    fclose(pFile);

    return i;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}

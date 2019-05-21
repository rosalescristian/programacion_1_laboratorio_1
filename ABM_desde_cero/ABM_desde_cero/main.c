#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prototipos.h"

#define CANTIDAD 5
#define MAXINPUT 100
#define QTY 1000

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
} Employee;

void inicializarArrayEmpleados(Employee arrayEmpleados[],int cantidad_elementos[], int valor); // CON ESTRUCTURAS
int buscarPrimerOcurrencia(Employee arrayEmpleados[],int cantidad_elementos[],int valor);

int main()
{
    Employee arrayEmpleados[QTY];
    Employee auxiliarEmpleados;

    char auxiliarNombreStr[50];
    char auxiliarApellidoStr[50];
    char auxiliarIdStr[50];
    int auxiliarId;
    float auxiliarSalario;
    char auxiliarSectorStr[50];
    int auxSector;
    int indiceLugarLibre;
    int indiceResultadoBusqueda;
    int opcion = 0;

    int i,j;

    inicializarArrayEmpleados(arrayEmpleados,QTY,-1);

while(opcion != 5)
{
    opcion = getInt("\nIngrese la opcion deseada: \n 1- Alta Empleado \n 2- Modificar Empleado \n 3- Baja de Empleado \n 4- Informar:\n \ta. Listado de Empleados \n \tb.Total y promedio de salarios. Q Empleados sobre el promedio.\n5 - SALIR\n"), salida;
    scanf("%d",&opcion);
//    system("cls");
    switch(opcion)
    {
        case 1:
                indiceLugarLibre = buscarPrimerOcurrencia(arrayEmpleados, QTY, -1);
                if(indiceLugarLibre == -1)
                {
                    printf("\nNo quedan lugares disponibles para agregar empleados.\n")
                    break;
                }

                printf("\nAlta de Empleado\n");
                if(!getStringLetras("Ingrese el nombre: ", auxiliarNombreStr))
                {
                    printf("El nombre debe estar compuesto solo por letras.\n");
                    break;
                }

                if(!getStringLetras("Ingrese el apellido: ", auxiliarApellidoStr))
                {
                    printf("El apellido debe estar compuesto solo por letras.\n");
                    break;
                }

                if(!getFloat("Ingrese el salario.", auxiliarSalario))
                {
                    printf("El salario debe ser numerico.\n");
                }

                if(!getStringNumeros("Ingrese el id del sector", auxiliarSectorStr))
                {
                    printf("El id del sector debe ser numerico.\n");
                    break;
                }
                auxiliarId=atoi(auxiliarIdStr);

                if(buscarPrimerOcurrencia(arrayEmpleados,QTY,auxiliarId)!= -1)
                {
                    printf("\nEl id ya existe.\n");
                    break;
                }

                strcpy(arrayEmpleados[indiceLugarLibre].name,auxiliarNombreStr);
                strcpy(arrayEmpleados[indiceLugarLibre].lastName,auxiliarApellidoStr);
                strcpy(arrayEmpleados[indiceLugarLibre].salary,auxiliarSalario);
                strcpy(arrayEmpleados[indiceLugarLibre].sector,auxiliarSectorStr);
                arrayEmpleados[indiceLugarLibre].id=auxiliarId;

                break;

            case 2:
                    if(!getStringNumeros("Ingrese el id a dar de baja: ",auxiliarIdStr))
                    {
                        printf("El legajo debe ser numerico.\n");
                        break:
                    }
                    indiceResultadoBusqueda=buscarPrimerOcurrencia((arrayEmpleados,QTY,atoi(auxiliarId)));

                    if(indiceResultadoBusqueda == -1)
                    {
                        printf("\nNo se encuentra dicho id.\n");
                        break;
                    }
                    arrayEmpleados[indiceResultadoBusqueda].id=-1;
                    break;
            case 3:
                    if(!getStringNumeros("Ingrese el id a modificar: ",auxiliarIdStr))
                    {
                        printf("El id debe ser numerico.\n");
                        break:
                    }
                    indiceResultadoBusqueda=buscarPrimerOcurrencia((arrayEmpleados,QTY,atoi(auxiliarId)));

                    if(indiceResultadoBusqueda == -1)
                    {
                        printf("\nNo se encuentra dicho id.\n");
                        break;
                    }
                    arrayEmpleados[indiceResultadoBusqueda].id=-1;

                    if(!getStringLetras("Ingrese el nombre: ", auxiliarNombreStr))
                {
                    printf("El nombre debe estar compuesto solo por letras.\n");
                    break;
                }

                if(!getStringLetras("Ingrese el apellido: ", auxiliarApellidoStr))
                {
                    printf("El apellido debe estar compuesto solo por letras.\n");
                    break;
                }

                if(!getFloat("Ingrese el salario.", auxiliarSalario))
                {
                    printf("El salario debe ser numerico.\n");
                }

                if(!getStringNumeros("Ingrese el id del sector", auxiliarSectorStr))
                {
                    printf("El id del sector debe ser numerico.\n");
                    break;
                }
                auxiliarId=atoi(auxiliarIdStr);


                strcpy(arrayEmpleados[indiceResultadoBusqueda].name,auxiliarNombreStr);
                strcpy(arrayEmpleados[indiceResultadoBusqueda].lastName,auxiliarApellidoStr);
                strcpy(arrayEmpleados[indiceResultadoBusqueda].salary,auxiliarSalario);
                strcpy(arrayEmpleados[indiceResultadoBusqueda].sector,auxiliarSectorStr);
                arrayEmpleados[indiceResultadoBusqueda].id=auxiliarId;
                break;
             case 4:
                printf("\nListar Empleados.\n");
                for(i=0; i<QTY - 1; i++)
                {
                    if(arrayEmpleados[i].id == -1)
                    {
                        continue;
                    }
                    for(j=i+1;j<QTY;j++)
                    {
                        if(arrayEmpleados[j].id==-1)
                        {
                            continue;
                        }
                        if(strcmp(arrayEmpleados[i].lastName,arrayEmpleados[j].lastName)>0)
                        {
                            auxiliarEmpleados=arrayEmpleados[j];
                            arrayEmpleados[j]=arrayEmpleados[i];
                            arrayEmpleados[i]=auxiliarEmpleados;
                        }
                    }
                }
                break;
            }
}
    return 0;

}



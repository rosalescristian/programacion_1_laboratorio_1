#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "bibliotecaGetsYComprobaciones.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    int flag = 1;
    LinkedList* listaEmpleados = ll_newLinkedList();
    if(listaEmpleados == NULL)
    {
        printf("Error en crear la lista");
        exit(EXIT_FAILURE);
    }
    do
    {
        flag = ll_isEmpty(listaEmpleados);
        option = getIntOnly("Base de empleados\n\n1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n"
                            "2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).\n"
                            "3. Alta de empleado.\n"
                            "4. Modificar datos de empleado.\n"
                            "5. Baja de empleado.\n"
                            "6. Listar empleados.\n"
                            "7. Ordenar empleados.\n"
                            "8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n"
                            "9. Guardar los datos de los empleados en el archivo data.csv (modo binario).\n"
                            "10. Salir.\n"
                            "Ingrese una opcion: ");
        switch(option)
        {
        case 1://cargar texto
            if(controller_loadFromText("data.csv",listaEmpleados))
            {
                system("cls");
                printf("Se cargo correctamente.\n");
            }
            else
            {
                system("cls");
                printf("No se ha podido cargar.\n");
            }
            break;
        case 2://cargar bin
            if(controller_loadFromBinary("data.bin", listaEmpleados))
            {
                system("cls");
                printf("Se cargo correctamente.\n");
            }
            else
            {
                system("cls");
                printf("No se ha podido cargar.\n");
            }
            break;
        case 3://alta
            if(controller_addEmployee(listaEmpleados))
            {
                system("cls");
                printf("Se dio de alta correctamente.\n");
            }
            else
            {
                system("cls");
                printf("No se ha podido dar de alta.\n");
            }
            break;
        case 4://modificar
            if(flag == 0)
            {
                if(controller_editEmployee(listaEmpleados))
                {
                    printf("Se modifico correctamente.\n");
                }
            }
            else
                printf("No se cargaron empleados\n");
            break;
        case 5: //baja
            if(flag == 0)
            {
                if(controller_removeEmployee(listaEmpleados))
                {
                    system("cls");
                    printf("Se dio de baja correctamente.\n");
                }
                else
                {
                    system("cls");
                    printf("No se pudo dar de baja.\n");
                }
            }
            else
                printf("No se cargaron empleados\n");
            break;
        case 6://listar
            if(flag == 0)
            {
                if(controller_ListEmployee(listaEmpleados))
                {
                    system("cls");
                    printf("Se listaron los empleados correctamente.\n");
                }
                else
                {
                    system("cls");
                    printf("No se pudo listar los empleados.\n");
                }
            }
            else
                printf("No se cargaron empleados\n");
            break;
        case 7:
            if(flag == 0)
            {
                if(controller_sortEmployee(listaEmpleados))
                {
                    system("cls");
                    printf("Se ordeno correctamente.\n");
                }
                else
                {
                    system("cls");
                    printf("No se pudieron ordenar los empleados.\n");
                }
            }
            else
                printf("No se cargaron empleados\n");
            break;
        case 8://save text
            if(flag == 0)
            {
                if(controller_saveAsText("data.csv", listaEmpleados))
                {
                    system("cls");
                    printf("Se guardo correctamente.\n");
                }
                else
                {
                    system("cls");
                    printf("No se pudo guardar los empleados.\n");
                }
            }

            else
                printf("No se cargaron empleados\n");
            break;
        case 9:
            if(flag == 0)
            {
                if(controller_saveAsBinary("data.bin", listaEmpleados))
                {
                    system("cls");
                    printf("Se guardo correctamente.\n");
                }
                else
                {
                    system("cls");
                    printf("No se pudo guardar los empleados.\n");
                }
            }
            else
                printf("No se cargaron empleados\n");
            break;
        case 10:
            option = 10;
            ll_deleteLinkedList(listaEmpleados);
            break;
        default:
            printf("\nLa opcion ingresada no es valida");
        }
        system("pause");
        system("cls");
    }
    while(option != 10);
    return 0;
}

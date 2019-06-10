#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

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
    int option = 0, optionAux = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();

    printf("Seleccione la opcion deseada:\n\t1- Cargar datos (modo texto)\n\t2- Cargar datos (modo binario)\n\t3 -Alta de Emppleado\n\t4 -Modificar Datos Empleados\n\t5- Baja Empleado\n\t6- Listar Empleados\n\t7- Ordenar Empleados\n\t8- Guardar los datos (modo texto)\n\t9 - Guardar los datos (modo binario)\n\t10 - SALIR ");
    scanf("%d", getInt(optionAux));

    option=optionAux;
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
            case 2:
                controller_loadFromBinary("data.csv", listaEmpleados);
                break;
            case 3:
                controller_addEmployee(LinkedList* listaEmpleados);
                break;
            case 4:
                controller_addEmployee();
                break;
            case 5:
                controller_removeEmployee();
                break;
            case 6:
                controller_ListEmployee(LinkedList* listaEmpleados, len);
                break;
            case 7:
                controller_sortEmployee();
                break;
            case 8:
                controller_saveAsText();
                break;
            case 9:
                controller_saveAsBinary();
                break;
        }
    }while(option != 10);
    return 0;
}

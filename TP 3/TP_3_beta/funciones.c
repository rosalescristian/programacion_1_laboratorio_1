/**<
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
*/
void funcionMenu()
{
    int opcion;

    printf("Seleccione la opcion deseada:\n\t1- Cargar datos (modo texto)\n\t2- Cargar datos (modo binario)\n\t3 -Alta de Emppleado\n\t4 -Modificar Datos Empleados\n\t5- Baja Empleado\n\t6- Listar Empleados\n\t7- Ordenar Empleados\n\t8- Guardar los datos (modo texto)\n\t9 - Guardar los datos (modo binario)\n\t10 - SALIR ");
    scanf("%d", opcion);

        do
        {
            switch(opcion){
                case 1:
                    printf("1");
                    break;
                case 2:
                    printf("2");
                    break;
                case 3:
                    printf("3");
                    break;
                case 4:
                    printf("4");
                    break;
                case 5:
                    printf("5");
                    break;
                case 6:
                    printf("6");
                    break;
                case 7:
                    printf("7");
                    break;
                case 8:
                    printf("8");
                    break;
                case 9:
                    printf("9");
                    break;
            }
        }while(opcion!=10);
    return 0;
}

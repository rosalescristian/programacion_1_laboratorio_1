#include <stdio.h>
#include <stdlib.h>
#define MAX_ID 3
#define MAX_LEN 55

struct individuo{
    char nombre[MAX_ID][MAX_LEN];
    char apellido[MAX_ID][MAX_LEN];
    int legajo[MAX_ID];
    int id[MAX_ID];
    int is_empty[MAX_ID];
    //eFecha fecha_nac;
}e_empleado;

struct individuo nombre[MAX_ID][MAX_LEN], apellido[MAX_ID][MAX_LEN], legajo[MAX_ID], id[MAX_ID], is_empty[MAX_ID];

struct fecha{
    int dd[MAX_ID], mm[MAX_ID], yyyy[MAX_ID];
}e_fecha;




int funcion_menu(int salida)
{
    unsigned int opcion;
    printf("\nIngrese la opcion deseada: 1- inicializar arrays\t 4- Alta Empleado\t 2- Modificacion Empleado\t 3- Baja Empleado\t 5 - SALIR\n");
    scanf("%d",&opcion);
    struct individuo nombre={"ROSALES"};
    system("cls");
switch(opcion)
        {
            case 1:
                    system("cls");
                    inicializarArrays(salida);

            case 2:
                    system("cls");
                    printf("\nMODIFICACION EMPLEADO\n");
                    salida = 1;
                    //suma(a,b);
                    break;
            case 3:
                    system("cls");
                    printf("\nBAJA EMPLEADO\n");
                    salida = 1;
                    //suma(a,b);
                    break;
             case 4:
                    system("cls");
                    //printf("\nALTA EMPLEADO\n");
                    printf("%s",nombre.nombre);
                    salida = 1;
                    //suma(a,b);
                    break;
            /*case 4:
                    system("cls");
                    printf("\nEl Operando A es %.2f\nEl Operando B es %.2f\n",a,b);
                    multiplicacion(a,b);
                    break;
            case 5:
                    system("cls");
                    printf("\nEl Operando A es %.2f\nEl Operando B es %.2f\n",a,b);
                    factorial_1=factorial_a(a);
                    factorial_2=factorial_b(b);
                    printf("\nEl factorial de A es: %.2f y el factorial de B es: %.2f\n",factorial_1, factorial_2);
                    break;
            case 6:
                    system("cls");
                    printf("\nEl Operando A es %.2f\nEl Operando B es %.2f\n",a,b);
                    suma(a,b);
                    resta(a,b);
                    division(a,b);
                    multiplicacion(a,b);
                    factorial_1=factorial_a(a);
                    printf("\nEl factorial de A es: %.2f",factorial_1);
                    factorial_2=factorial_b(b);
                    printf("\nEl factorial de B es: %.2f\n",factorial_2);
                    break;*/
            case 5:
                salida = 0;
                break;
        }
    if(salida == 1)
    {
        return main();
    }else
        {
            return 0;
        }
}


int inicializarArrays(int salida)
{
    int i, id[MAX_ID], is_empty[MAX_ID];
    for(i=0; i<MAX_ID; i++)
    {
        is_empty[i]= 1;
        salida = 1;
    }
}

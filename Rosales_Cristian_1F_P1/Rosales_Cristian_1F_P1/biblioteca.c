#include <stdio.h>
#include <stdlib.h>
#ifndef prototipos.h
#define prototipos.h

#define CANTIDAD 10

typedef struct
{
    int dd;
    int mm;
    int yyyy;
}e_fecha;

e_fecha dd;
e_fecha mm;
e_fecha yyyy;

typedef struct //autor
{
    //char lista;
    int codigo_autor[CANTIDAD]; // auto incremental
    char apellido_autor[31]; // validar
    char nombre_autor[31]; // validar
}e_autor;

//e_autor lista;
e_autor codigo_autor; //= {"1","2","3","4","5"};
e_autor apellido_autor;// = {"Rosales","Rowling","Tolkien","Galeano","Cortazar"};
e_autor nombre_autor;// = {"Cristian","JK","JRR","Eduardo","Julio"};

typedef struct //libro
{
    //char lista;
    int codigo_libro[CANTIDAD]; // autoincrementak
    char titulo_libro[CANTIDAD][51]; // validar
    e_autor codigo_autor; // validar
}e_libro;

//e_libro lista;
e_libro codigo_libro;//={"5","4","3","2","1"};
e_libro titulo_libro;//={"Libro_1","Libro_2","Libro_3","Libro_4","Libro_5"};

typedef struct //socio
{
    //char lista[CANTIDAD];
    int codigo_socio[CANTIDAD]; // autoincremental
    char apellido_socio[CANTIDAD][31]; // (debe existir)validar
    char nombre_socio[CANTIDAD][31]; // (debe existir)validar
    char sexo[CANTIDAD]; // F - M
    char telefono_socio[CANTIDAD][16]; // validar
    char email_socio[CANTIDAD][31]; // validar
    e_fecha fecha_asociado;//VALIDAR 10 caracteres dd mm yyyy
    int is_empty[CANTIDAD];
}e_socio;

e_socio codigo_socio;
//e_socio lista;
e_socio apellido_socio;// = {"Socio_A_1","Socio_A_2","Socio_A_3","Socio_A_4","Socio_A_5"};
e_socio nombre_socio;// = {"Socio_N_1","Socio_N_2","Socio_N_3","Socio_N_4","Socio_N_5"};
e_socio sexo_socio;
e_socio telefono_socio;
e_socio email_socio;

typedef struct prestamo
{
 //   char lista[CANTIDAD];
    int codigo_prestamo;
    e_libro codigo_libro;
    e_socio codigo_socio;
    e_fecha fecha_prestamo;//10 caracteres dd mm yyyy
}e_prestamo;




/**< MENU DE OPCION DE SOFTWARE - DE ACA DISPARO EL RESTO DE LAS FUNCIONES */
int funcion_menu(int salida)
{
    int opcion, opcion_input, vector[CANTIDAD];

    printf("\nIngrese la opcion deseada:\n1-Alta de Socio\n2-Modificar Socio\n3-Baja de Socio\n4-Listar Socios\n5-Listar Libros\n6-Listar Autores\n7-Prestamos\n8-Salir\n");
    scanf("%d",&opcion);

    get_int(opcion, opcion_input);

while(opcion_input = 1)
{
    /*printf("Ha inresado una opcion no valida. Vuelva a seleccionar:\n\n1-Alta de Socio\n2-Modificar Socio\n3-Baja de Socio\n4-Listar Socios\n5-Listar Libros\n6-Listar Autores\n7-Prestamos\n8-Salir\n")
    scanf("%d",&opcion);*/
switch(opcion)
        {
            case 1:
                    system("cls");
                    printf("\nAlta de socio\n");
                    //LLAMAR A LA FUNCION ALTA
                    salida = 1;
                    break;
            case 2:
                    system("cls");
                    printf("\nModificar socio\n");
                    modificar_socio(vector);
                    salida = 1;
                    break;
             case 3:
                    system("cls");
                    printf("\nBaja de socio\n");
                    //LLAMAR A LA FUNCION BAJA
                    salida = 1;
                    break;
            case 4:
                    system("cls");
                    //printf("\nListar Socios\n");
                    listar_socios();
                    salida = 1;
                    break;
            case 5:
                    system("cls");
                    printf("\nListar Libros\n");
                    //LLAMAR A LA FUNCION LISTAR LIBROS
                    salida = 1;
                    break;
            case 6:
                    system("cls");
                    printf("\nListar Autores\n");
                    //LLAMAR A LA FUNCION LISTAR AUTORES
                    salida = 1;
                    break;
            case 7:
                    system("cls");
                    printf("\nPrestamos\n");
                    //LLAMAR A LA FUNCION PRESTAMOS
                    salida = 1;
                    break;
            case 8:
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
}


/**< FUNCION GET INT - TENGO Q DEVOLVER EL INT PARA LA FUNCION MENU */

int get_int(int opcion)
{
    int auxiliar_opcion = opcion, opcion_input;
    while (auxiliar_opcion < 0 || auxiliar_opcion > 8)
    {
        printf("Ha inresado una opcion no valida. Vuelva a seleccionar:\n\n1-Alta de Socio\n2-Modificar Socio\n3-Baja de Socio\n4-Listar Socios\n5-Listar Libros\n6-Listar Autores\n7-Prestamos\n8-Salir\n");
        scanf("%d",&auxiliar_opcion);
        opcion_input = 0;
    }
    opcion_input = 1;
    return opcion_input;
}


void modificar_socio(e_socio vector[])
{
    int codigo_socio;
    char confirma;
    int is_empty;
    int esta;
    char nuevo_nombre[31];

    printf("Ingrese codigo de autor: ");
    scanf("%d", &codigo_socio);

    is_empty = buscar_socio(vector, CANTIDAD, codigo_socio);

    if( is_empty == -1){

        printf("\nEl codigo_socio %d no esta registrado en el sistema\n", codigo_socio);
    }
    else{
        mostrar_socio(vector[esta]);

        printf("\nQuiere modificar el socio? s/n");
        fflush(stdin);
        confirma = tolower(getche());

        if(confirma == 's'){
            printf("\nIngrese nombre: ");
            scanf("%s", &nuevo_nombre);
            //valido sueldo
            vector[esta].nombre_socio = nuevo_nombre;
        }
        else{
            printf("\nNo se ha modificado el nombre.\n");
        }

    }


/**< FUNCION BUSCAR SOCIO */
int buscar_socio(e_socio vector[], int codigo_socio)
{

    int indice = -1;

    for(int i=0; i < CANTIDAD; i++)
    {
        if( vector[i].codigo_socio == codigo_socio && vector[i].is_empty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

/**< MOSTRAR SOCIO */
void mostrar_socio(socio vector)
{

    printf("%d   %s %s %c   %s   %s   \n", vector.codigo_socio, vector.apellido_socio, vector.nombre_socio, vector.sexo_socio, vector.telefono_socio, vector.email_socio);

}

#endif // prototipos.h

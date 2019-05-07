#include <stdio.h>
#include <stdlib.h>
#ifndef prototipos.h
#define prototipos.h
//#define CANTIDAD 10

#define LIBRE 0
#define OCUPADO 1
#define ELIMINADO -1

int CANTIDAD=10;

typedef struct
{
    int dd;
    int mm;
    int yyyy;
}e_fecha;

e_fecha dd;
e_fecha mm;
e_fecha yyyy;

typedef struct
{
    //char lista;
    int codigo_autor;//[CANTIDAD]; // auto incremental
    char apellido_autor;//[CANTIDAD][31]; // validar
    char nombre_autor;//[CANTIDAD][31]; // validar
}e_autor;

//e_autor lista;
e_autor codigo_autor; //= {"1","2","3","4","5"};
e_autor apellido_autor;// = {"Rosales","Rowling","Tolkien","Galeano","Cortazar"};
e_autor nombre_autor;// = {"Cristian","JK","JRR","Eduardo","Julio"};

typedef struct
{
    //char lista;
    int codigo_libro;//[CANTIDAD]; // autoincrementak
    char titulo_libro;//[CANTIDAD][51]; // validar
    e_autor codigo_autor; // validar
}e_libro;

//e_libro lista;
e_libro codigo_libro;//={"5","4","3","2","1"};
e_libro titulo_libro;//={"Libro_1","Libro_2","Libro_3","Libro_4","Libro_5"};

typedef struct
{
    //char lista[CANTIDAD];
    int codigo_socio;//[CANTIDAD]; // autoincremental
    char apellido_socio[31]; // (debe existir)validar
    char nombre_socio[31]; // (debe existir)validar
    char sexo; // F - M
    char telefono_socio[16]; // validar
    char email_socio[31]; // validar
    e_fecha fecha_asociado;//VALIDAR 12 caracteres dd mm yyyy
    int is_empty;
    int eId;
    int id;

}e_socio;

e_socio codigo_socio;
//e_socio lista;
e_socio apellido_socio;// = {"Socio_A_1","Socio_A_2","Socio_A_3","Socio_A_4","Socio_A_5"};
e_socio nombre_socio;// = {"Socio_N_1","Socio_N_2","Socio_N_3","Socio_N_4","Socio_N_5"};
e_socio sexo_socio;
e_socio telefono_socio;
e_socio email_socio;
e_socio eId;
e_socio id;

typedef struct
{
    //char lista[CANTIDAD];
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
    /*printf("Ha inresado una opcion no valida. Vuelva a seleccionar:\n\n1-Alta de Socio\n2-Modificar Socio\n3-Baja de Socio\n4-
 Socios\n5-Listar Libros\n6-Listar Autores\n7-Prestamos\n8-Salir\n")
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

int funcion_submenu()
{
    int opcion;

    printf("\tElija la opcion para Modificar Socio\n\n");
    printf(" 1 Nombre\n\n");
    printf(" 2 Apellido\n\n");
    printf(" 3 Sexo\n\n");
    printf(" 4 Telefono\n\n");
    printf(" 4 Mail\n\n");
    printf(" 5 Modificar todos los campos\n\n\n");
    printf(" 0 Salir\n\n");
    printf("\n%c  Opcion elegida: ", 254);
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}


void pedirNombre(char nombre, int CANTIDAD)
{
    char buffer[1000];
    int maximosCharParaVerificar=CANTIDAD;

    printf("Ingrese Nombre: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>maximosCharParaVerificar||strlen(buffer)<1)
    {
        system("cls");
        printf("\n[Error 1 a %d Maximo de Caracteres] Reingrese nombre: ", maximosCharParaVerificar-1);
        fflush(stdin);
        gets(buffer);

    }
    strlwr(buffer);//PASO TODO A MINUSCULA
    buffer[0]=toupper(buffer[0]); //CONVIERTO PRIMER CARACTER EN MAYUSCULA
    strcpy (nombre, buffer);//DESCARGO EL BUFFER EN EL NOMBRE
}

void pedirApellido(char apellido, int CANTIDAD)
{
    char buffer[1000];
    int maximosCharParaVerificar=CANTIDAD;

    printf("Ingrese Apellido: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>maximosCharParaVerificar||strlen(buffer)<1)
    {
        system("cls");
        printf("\n[Error 1 a %d Maximo de Caracteres] Reingrese Apellido: ", maximosCharParaVerificar-1);
        fflush(stdin);
        gets(buffer);

    }
    strlwr(buffer);//PASO TODO A MINUSCULA
    buffer[0]=toupper(buffer[0]); //CONVIERTO PRIMER CARACTER EN MAYUSCULA
    strcpy (apellido, buffer);//COMO SALI DESCARGO EL BUFFER EN EL NOMBRE

}

int validarChars(char nombreParaValidar[])
{
    int i=0, retornoValidacion=0, j;

    j=strlen(nombreParaValidar);

    while (i<j && retornoValidacion==0)
    {
        if (isalpha(nombreParaValidar[i])!=0)
        {
            i++;
        }
        else
        {
            retornoValidacion=1;
            system("cls");
            printf("\n[Error, solo se deben ingresar letras]");
        }
    }
    return retornoValidacion;
}

void pedirNombreValidarChars(char nombre, int CANTIDAD)
{
    int validar=0;
    do
    {
        pedirNombre(nombre, CANTIDAD);
        validar=validarChars(nombre);
    }
    while (validar!=0);

}

void pedirApellidoValidarChars(char apellido, int CANTIDAD)
{
    int validar=0;
    do
    {
        pedirApellido(apellido, CANTIDAD);
        validar=validarChars(apellido);
    }
    while (validar!=0);

}

int validarNumeroExcluyeSignos(char numero[])
{
    int i=0, retornoValidacion=0, j;

    j=strlen(numero);
    while (i<j && retornoValidacion==0)
    {
        if (isdigit(numero[i])!=0||numero[i]=='.'||numero[i]==','||numero[i]=='-')
        {
            i++;
        }
        else
        {
            retornoValidacion=1;
        }
    }
    return retornoValidacion;
}

void concatenarNombreApellido(char nombreCompleto[], char cadenaApellido[], char cadenaNombre[])
{
    int i;

    /** FORMATO "Apellido, Nombre" */

    strcpy(nombreCompleto, cadenaApellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, cadenaNombre);

    strlwr(nombreCompleto); //CONVIERTE TODA LA CADENA A MINUSCULA

    nombreCompleto[0]=toupper(nombreCompleto[0]);

    for(i=0; i<strlen(nombreCompleto); i++)
    {
        if (isspace(nombreCompleto[i])) //(nombreCompleto[i]==' ')
        {
            nombreCompleto[i+1]=toupper(nombreCompleto[i+1]);//PASA EN MAYUSCULA EL CARACTER DESPUES DEL ESPACIO
        }
    }
}

int pedirInt(char MSJ)
{
    int valorInt;
    char buffer[30];

    printf("%s: ", MSJ);
    fflush(stdin);
    gets(buffer);

    while(validarNumero(buffer)==1)
    {
        printf("Error: Numero no validao. Reingrese");
        fflush(stdin);
        gets(buffer);
    }

    valorInt=atoi(buffer);

    return valorInt;
}

int modificar_socio(e_socio codigo_socio[], int CANTIDAD)
{
    int flag=0;
    int flagDos=0;
    int eID;
    int i;
    int existe=0;
    int verificar=cantidadEmpleadosTrueFalse(codigo_socio, CANTIDAD);
    //int verificar=cantidadSociosTrueFalse(codigo_socio, CANTIDAD);

    if (verificar==0)
    {
        system("cls");
        puts("\nNingun socio para modificar\n\n");
    }

    while(verificar==1&&flag==0)
    {
        flag=1;
        system("cls");
        puts("\nModificar Socio\n\n");
        eID=pedirInt("Igrese Cod. Socio a Modificar");
        system("cls");
        printf("\nCod. Socio: N%c %d\n", 248, eID);

        for(i=0; i<CANTIDAD; i++)
        {
            if(codigo_socio[i].id==eID&&codigo_socio[i].is_empty==OCUPADO)
            {
                puts("\nSocio Encontrado\n");
                switch(funcion_submenu())

                {
                case 1:
                    system("cls");
                    pedirNombreValidarChars(codigo_socio[i].nombre_socio, 31);
                    existe=1;
                    break;
                case 2:
                    system("cls");
                    pedirApellidoValidarChars(codigo_socio[i].apellido_socio, 31);
                    existe=1;
                    break;
                case 3:
                    system("cls");
//                    codigo_socio[i].salary=pedirFloat("INGRESE SALARIO");
                    existe=1;
                    /**< PEDIR SEXO */
                    break;
                case 4:
                    system("cls");
//                    codigo_socio[i].sector=pedirInt("INGRESE SECTOR");
                    existe=1;
                    /**< PEDIR TELEFONOO */
                    break;
                case 5:
                    system("cls");
                    pedirNombreValidarChars(codigo_socio[i].nombre_socio, 51);
                    pedirApellidoValidarChars(codigo_socio[i].apellido_socio, 51);
//                    codigo_socio[i].salary = pedirFloat("INGRESE SALARIO: ");
//                    codigo_socio[i].sector = pedirInt("INGRESE SECTOR");
                    existe=1;
                    /**< MODIFICAR TODOS LOS CAMPOS */
                    break;
                case 0:
                    puts("\nSocio no Modificado\n");
                    flagDos=1;
                    break;
                default:
                    puts("\nOpcion no Valida\n");
                    flagDos=1;
                    break;
                }
            }

        }
        if (existe==0&&flagDos==0)
        {
            puts("\nCod. de Socio no Encontrado\n");
            break;
        }
    }
    return existe;
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
/*void mostrar_socio(e_socio vector)
{

    printf("%d   %s %s %c   %s   %s   \n", vector.codigo_socio, vector.apellido_socio, vector.nombre_socio, vector.sexo_socio, vector.telefono_socio, vector.email_socio);

}
*/

/**< FUNCION ALTA DE SOCIO */
int altaEmpleado(e_socio codigo_socio, int CANTIDAD)
{
    int index;
    int existe=0;

    index=buscarEspacioLibre(codigo_socio, CANTIDAD);

    if(index!=-1)
    {
        system("cls");
        puts("\nINGRESE DATOS DEL PERSONAL\n\n");

        codigo_socio[index]=listarSocios();
        codigo_socio[index].is_empty=OCUPADO;
        codigo_socio[index].id=index+1;

        puts("\n[CARGA EXITOSA] ");
        system("pause");
        system("cls");
        existe=1;
    }
    return existe;
}
#endif // prototipos.h

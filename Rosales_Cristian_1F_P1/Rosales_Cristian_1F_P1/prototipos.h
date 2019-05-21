//#define CANTIDAD 10
/*
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
    int codigo_autor[CANTIDAD]; // auto incremental
    char apellido_autor[CANTIDAD][31]; // validar
    char nombre_autor[CANTIDAD][31]; // validar
}e_autor;

//e_autor lista;
e_autor codigo_autor; //= {"1","2","3","4","5"};
e_autor apellido_autor;// = {"Rosales","Rowling","Tolkien","Galeano","Cortazar"};
e_autor nombre_autor;// = {"Cristian","JK","JRR","Eduardo","Julio"};

typedef struct
{
    //char lista;
    int codigo_libro[CANTIDAD]; // autoincrementak
    char titulo_libro[CANTIDAD][51]; // validar
    e_autor codigo_autor; // validar
}e_libro;

//e_libro lista;
e_libro codigo_libro;//={"5","4","3","2","1"};
e_libro titulo_libro;//={"Libro_1","Libro_2","Libro_3","Libro_4","Libro_5"};

typedef struct
{
    //char lista[CANTIDAD];
    int codigo_socio[CANTIDAD]; // autoincremental
    char apellido_socio[CANTIDAD][31]; // (debe existir)validar
    char nombre_socio[CANTIDAD][31]; // (debe existir)validar
    char sexo[CANTIDAD]; // F - M
    char telefono_socio[CANTIDAD][16]; // validar
    char email_socio[CANTIDAD][31]; // validar
    e_fecha fecha_asociado;//VALIDAR 12 caracteres dd mm yyyy
    int is_empty[CANTIDAD];
}e_socio;

e_socio codigo_socio;
//e_socio lista;
e_socio apellido_socio;// = {"Socio_A_1","Socio_A_2","Socio_A_3","Socio_A_4","Socio_A_5"};
e_socio nombre_socio;// = {"Socio_N_1","Socio_N_2","Socio_N_3","Socio_N_4","Socio_N_5"};
e_socio sexo_socio;
e_socio telefono_socio;
e_socio email_socio;

typedef struct
{
    //char lista[CANTIDAD];
    int codigo_prestamo;
    e_libro codigo_libro[CANTIDAD];
    e_socio codigo_socio[CANTIDAD];
    e_fecha fecha_prestamo[CANTIDAD];//10 caracteres dd mm yyyy
}e_prestamo;
*/

int funcion_menu(int salida);
int funcion_submenu();
void pedirNombre(char nombre, int CANTIDAD);
void pedirApellido(char apellido, int CANTIDAD);
int validarChars(char nombreParaValidar);
void pedirNombreValidarChars(char nombre, int CANTIDAD);
void pedirApellidoValidarChars(char apellido, int CANTIDAD);
int validarNumeroExcluyeSignos(char numero);
void concatenarNombreApellido(char nombreCompleto, char cadenaApellido, char cadenaNombre);
int pedirInt(const char MSJ);
int modificar_socio(e_socio pSocio, int CANTIDAD);
int buscar_socio(e_socio vector[], int codigo_socio);
void mostrar_socio(socio vector);
int altaEmpleado(Employee* pSocio, int CANTIDAD);
get_int(opcion, opcion_input);
modificar_socio(e_socio, vector, CANTIDAD);
buscar_socio(vector, CANTIDAD, codigo_socio);
mostrar_socio(vector[esta]);
int modificar_socio(e_socio pSocio, int CANTIDAD);

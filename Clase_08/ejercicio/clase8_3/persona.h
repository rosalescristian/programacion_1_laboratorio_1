typedef struct{
    int dia;
    int mes;
    int ano;
}eFecha;

typedef struct{
    char apellido[31];
    char nombre[31];
    char sexo;
    int edad;
    int isEmpty;
    eFecha fechanac;
}ePersona;

void alta( ePersona pers[], int cantidad );

void mostrarUno( ePersona per[], int cantidad );

void mostrarTodos( ePersona pers[], int cantidad );

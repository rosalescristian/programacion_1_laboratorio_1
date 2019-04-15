typedef struct{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;
}ePersona;

ePersona alta(ePersona per);

void mostrar(ePersona per);

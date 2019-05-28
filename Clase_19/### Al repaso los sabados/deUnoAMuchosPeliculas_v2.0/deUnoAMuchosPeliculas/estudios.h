#ifndef ESTUDIOS_H_INCLUDED
#define ESTUDIOS_H_INCLUDED

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int id;
    int estado;
    char nombre[50];
    char pais[50];
    int anioDeCreacion;

} eEstudio;

#endif // ESTUDIOS_H_INCLUDED

void cargarEstudio(eEstudio lista[], int tam);
int buscarLibre(eEstudio lista[], int tam);
void inicializarEstudio(eEstudio lista[], int tam);
void harcodearEstudio(eEstudio lista[]);
void mostrarListaEstudios(eEstudio lista[], int tam);
void mostrarEstudio(eEstudio unEstudio);
int mayorIdEstudio(eEstudio lista[], int tam);
void modificarEstudio(eEstudio lista[], int tam, int id);
void borrarEstudio(eEstudio lista[], int tam, int id);

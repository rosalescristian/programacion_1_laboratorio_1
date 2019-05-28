typedef struct
{
    int id;
    char nombre[50];
    int nota;
    int idLocalidad;
    int cargado;

}eAlumno;


void informarSobreAlumno(eAlumno lista[],int);

void getInt(char mensaje[],int *numero,int tamMin,int tamMax);

void ordenarAlumnosPorLocalidades(eAlumno lista[],int tam);

void mostrarListaAlumnos(eAlumno lista[],int tam);

void mostrarAlumno (eAlumno);

void hardcodearAlumnos(eAlumno []);

void ordenarAlumnosPorNombre(eAlumno[],int);

typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
    char email[50];
}eAlumno;

void cargarListadoAlumnos(eAlumno listado[], int);
void mostrarListadoAlumnos(eAlumno listado[], int);
void mostrarAlumno(eAlumno);
void ordenarPorNombre(eAlumno listado[], int);
eAlumno cargarAlumno();

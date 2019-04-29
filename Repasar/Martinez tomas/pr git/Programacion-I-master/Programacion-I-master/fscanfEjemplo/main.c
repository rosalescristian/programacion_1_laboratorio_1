#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    int estaVacio;
}eEmpleado;

eEmpleado* constructor(int id, char* nombre, char* apellido);

void mostrarEmpleado();
/*eAlumno* nuevoAlumno();
void mostrarEmpleado();
int eAlumno_setName(eAlumno* this, char* nombre);
char* eAlumno_getName(eAlumno* this);
*/
int main()
{
   char name[500], lastName[500], id[500],isEmpty[500];
   int cont=1;
   eEmpleado lista[10];
   FILE * pFile;

   pFile = fopen ("data.csv", "r");

   while(cont<10)
   {

       if(cont %250 == 0)
       {
           system("pause");
       }

       fscanf(pFile, "%[^,], %[^,], %[^,], %[^\n]\n", id, name, lastName, isEmpty);

       eEmpleado* e = constructor(atoi (id), name, lastName);
       lista[cont]=*e;
       //printf("%d--%s--%s\n", e->id, e->nombre, e->apellido);
       cont++;

   }

  /* fclose(pFile);
   int i;
   for(i=0; i<10; i++)
   {

   }
*/
   return(0);
}

eEmpleado* constructor(int id, char* nombre[50], char* apellido[50])
{
    eEmpleado* empleado;
    eEmpleado = malloc(sizeof(eEmpleado));

    if(empleado!=NULL)
    {
        empleado->id=id;
        strcpy(empleado->nombre, nombre);
        strcpy(empleado->apellido, apellido);

    }



    return empleado;
}

void mostrarEmpleado(eEmpleado* unEmpleado)
{
    printf("%s---%s---%d", unEmpleado->nombre, unEmpleado->apellido, unEmpleado->id);
}

/*int eAlumno_setName(eAlumno* this, char* nombre)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->nombre, nombre);
    }

    return estado;
}

char* eAlumno_getName(eAlumno* this)
{
    char* nombre = "";

    if(this != NULL)
    {
        strcpy(nombre, this-> nombre);

    }
    else{

        printf("Error en el programa");
    }
    return nombre;
}
*/

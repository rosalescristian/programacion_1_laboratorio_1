#include <stdio.h>
#include <stdlib.h>
/*
struct ePersona{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;
};

struct ePersona per; // aca defino una variable de estructura per
/*ar apellido; // aca defimo las variables posibles con el nombre dentro de la estructura de datos que cree mas temprano
char nombre; // aca defimo las variables posibles con el nombre dentro de la estructura de datos que cree mas temprano
int edad; // aca defimo las variables posibles con el nombre dentro de la estructura de datos que cree mas temprano
int isEmpty; // aca defimo las variables posibles con el nombre dentro de la estructura de datos que cree mas temprano


// este comment es solo para probar lo mismo como figura mas abajo
int main()
{
    printf("Ingrese su apellido \n");
    fflush(stdin);
    scanf("%s",per.apellido);

    printf("Ingrese un nombre \n");
    fflush(stdin);
    scanf("%s",per.nombre);

    printf("Ingrese una edad \n");
    scanf("%d",&per.edad);

    per.isEmpty = 0;

    printf("%s \t %s \t %d \t %d \t",per.apellido, per.nombre, per.edad, per.isEmpty);

    return 0;
}
*/


//Otra forma de definir la estructura (aca redegino un tipo de datos)

typedef struct{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;
}ePersona; // aca dejo el nombre del nuevo tipo de dato redefinido

ePersona per; // aca otra vez creo la variable per (el contenedor es ePerona q defini arriba)

int main()
{
    printf("Ingrese su apellido \n");
    fflush(stdin);
    scanf("%s",per.apellido);

    printf("Ingrese un nombre \n");
    fflush(stdin);
    scanf("%s",per.nombre);

    printf("Ingrese una edad \n");
    scanf("%d",&per.edad);

    per.isEmpty = 0;

    printf("%s \t %s \t %d \t %d \t",per.apellido, per.nombre, per.edad, per.isEmpty);

    return 0;
}

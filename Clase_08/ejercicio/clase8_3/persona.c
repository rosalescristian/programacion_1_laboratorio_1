#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

void alta( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        printf("Apellido:\n");
        fflush(stdin);
        scanf("%s", pers[i].apellido);

        printf("Nombre:\n");
        fflush(stdin);
        scanf("%s", pers[i].nombre);

        printf("Edad:\n");
        scanf("%d", &pers[i].edad);

        pers[i].isEmpty = 0;
    }
}

void mostrarTodos( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        mostrarUno(pers[i]);
    }

}

void mostrarUno( ePersona per ){
        printf("%s\t%s\t%d\t%d\n", per.apellido, per.nombre, per.edad, per.isEmpty);
}

//Hacer una funcion para IsEmpty que en el ABM tiene q ser 0 cuando cargo datos y tiene 1 ser 1 cuando borras.
//

//Crear una funcion pra buscar por DNI para evitar documentos repetidos
int buscarpordni(ePersona Pers[], int cantidad, int dni aux);
como devuelve un entero, lo declaro
int retorno=0;
for(){
    if(){
        retorno=1;
        break;
    }
    return=retorno;
}

//Tb podemos meter el int como -1 o 0 y q el retorno sea el indice para q me devuelva el indice repetido donde figura el dato repetido.

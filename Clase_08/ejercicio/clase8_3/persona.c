#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

void alta( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        printf("Apellido:\n");
        fflush(stdin);
        scanf("%s", pers[i].apellido);
        strlwr(pers[i].apellido);

        printf("Nombre:\n");
        fflush(stdin);
        scanf("%s", pers[i].nombre);
        strlwr(pers[i].nombre);

        printf("Sexo:\n");
        fflush(stdin);
        scanf("%c", &pers[i].sexo);

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

void mostrarUno( ePersona per, int cantidad ){
        printf("%s\t%s\t%c\n%d\t%d\n", per.apellido, per.nombre, per.sexo, per.edad, per.isEmpty);
}

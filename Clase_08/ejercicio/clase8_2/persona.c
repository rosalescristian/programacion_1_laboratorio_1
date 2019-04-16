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

void mostrar( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        printf("%s\t%s\t%d\t%d\n", pers[i].apellido, pers[i].nombre, pers[i].edad, pers[i].isEmpty);
    }

}

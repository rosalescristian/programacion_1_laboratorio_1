#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

ePersona alta(ePersona per){
    printf("Apellido:\n");
    fflush(stdin);
    scanf("%s", per.apellido);

    printf("Nombre:\n");
    fflush(stdin);
    scanf("%s", per.nombre);

    printf("Edad:\n");
    scanf("%d", &per.edad);

    per.isEmpty = 0;

    return per;
}

void mostrar(ePersona per){
    printf("%s\t%s\t%d\t%d\n", per.apellido, per.nombre, per.edad, per.isEmpty);
}

#include <stdio.h>
#include <stdlib.h>
#include "estructura.h"

ePersona alta(ePersona per)
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

    return per;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#define LEN 2


int main()
{
    int i, indice, id;
    EPersona arrayPersonas[LEN];

    if (!inicializar(arrayPersonas, LEN))
    {
        printf("ERROR!");
    }

    altaPersona(arrayPersonas, LEN);

    printf("Ingrese su id: ");
    fflush(stdin);
    scanf("%d", &id);

    indice = getById(arrayPersonas, LEN, id);

    if(indice > -1 && !arrayPersonas[indice].isEmpty)
    {
        printf("Persona id:%d: nombre:%s apellido:%s, nacimiento:%d/%d/%d)\n",
           arrayPersonas[indice].id, arrayPersonas[indice].nombre, arrayPersonas[indice].apellido,
           arrayPersonas[indice].nacimiento.dia, arrayPersonas[indice].nacimiento.mes,
           arrayPersonas[indice].nacimiento.anio);
    }

    return 0;
}

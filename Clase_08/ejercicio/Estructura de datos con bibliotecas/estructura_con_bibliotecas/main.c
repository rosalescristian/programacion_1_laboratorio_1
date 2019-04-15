#include <stdio.h>
#include <stdlib.h>
#include "estructura.h"

int main()
{
    ePersona per;

    per = alta(per);

    system("cls");

    printf("%s \t %s \t %d \t %d \t",per.apellido, per.nombre, per.edad, per.isEmpty);

    return 0;
}

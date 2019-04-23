#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char miNombre[500];

    printf("Carga de nombre");
    if (!getNombre(miNombre)) {
        printf("%s", miNombre);
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buffer[64];
    int cantidad;

    printf("Nombre: ");
    //fgets(buffer, 62, stdin);
    fgets(buffer,sizeof(buffer)-2,stdin); // con el -2 nos aseguramos que no tome ningun caracter especial (fgets despues del ultimo caracter ingresa un caracter especial antes del cierre de linea \0. Y retorno dos posiciones.

    cantidad = strlen(buffer); // cuento la cantidad de caracteres buffer y la guardo en cantidad como INT.

    buffer[cantidad-1] = '\0'; // JUAN*\0 es un array de 6 lugares, o sea 5 sin el cierre, le resto una posicion, y en ellugar del * escribo un \0.

    printf("%s", buffer);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcpy(String Copy) -> En esta biblioteca estan las funciones de caracteres

/**<
    Funciones que vamos a usar dentro de String.H:
    strcpy = Copia el string en nuestra variable de esta forma:
        strcpy(saludo, "Hola");
    puts("El dijo Hola"); -> solo muestra una cadena literal, no permite combinar como en Printf cadena y variable
    puts(saludo);
    - CUANDO SE TRABAJA CON VECTORES NO SE USA & EN LAS FUNCIONES
*/


void main(void)
{
    char nombre[55]; // hay que definir bien la cantidad de caracteres; como la memoria esta libre sigue tomando la info que le cargaron.

    printf("Ingrese su nombre\n");
    fflush(stdin);
    scanf("%s", nombre); // CUANDO SE TRABAJA CON VECTORES NO SE USA & EN LAS FUNCIONES [Se usa solo para cadenas simples, no se puede utilizar con espacios].
    printf("\n Su nombre es: %s", nombre);
/**<gets(nombre); -> Es "lo mismo" que scanf
    printf("\n Su nombre es: %s", nombre);
    GETS es otra funcion que se puede utilizar para utilizar cadenas complejas de caracteres pero NO SE USA:
        a) No se usa xq solo existe para M$;
        b) No se usa xq tiene un agujero de seguridad;

    Existe tb esta funcion fgets(); -> sirve para varias cosas y tb para controlar y no excederme en la cant de caracteres
    q tenemos declarada en la variable.
*/

    return 0;
}

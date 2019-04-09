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

void main()
{
    char nombre[55]; // hay que definir bien la cantidad de caracteres; como la memoria esta libre sigue tomando la info que le cargaron.
    char apellido[55];
    char apellidoynombre[110];

    char nombre_mayus[55];
    char apellido_mayus[55];

    char nombre_minus[55];
    char apellido_minus[55];

    char nombre_inicial_mayus[55];
    char apellido_inicial_mayus[55];

    int cantidad;

    printf("\nIngrese su nombre\n");
    fflush(stdin);
    scanf("%s", nombre); // CUANDO SE TRABAJA CON VECTORES NO SE USA & EN LAS FUNCIONES [Se usa solo para cadenas simples, no se puede utilizar con espacios].
    printf("\nIngrese su apellido\n");
    fflush(stdin);
    scanf("%s", apellido);
    //printf("\n Su nombre es: %s", apellido);
/**<gets(nombre); -> Es "lo mismo" que scanf
    printf("\n Su nombre es: %s", nombre);
    GETS es otra funcion que se puede utilizar para utilizar cadenas complejas de caracteres pero NO SE USA:
        a) No se usa xq solo existe para M$;
        b) No se usa xq tiene un agujero de seguridad;

    Existe tb esta funcion fgets(); -> sirve para varias cosas y tb para controlar y no excederme en la cant de caracteres
    q tenemos declarada en la variable.
    strlen(); -> cuenta la cantidad de caracteres y la guardo en una variable tipo int;
    operador sizeof(); -> nos devuelve la cantidad de bytes q ocupa un tipo de dato o una variable en la memoria. Va el tipo de dato o la variable. (INT-CHAR-NOMBRE-EDAD-ETC.)

    fgets(buffer,sizeof(buffer)-2,stdin); //FUNCIONA CON 3 ARGUMENTOS a)Variable Buffer, b)SizeOF es para limitar la cant de caracteres que voy a tomar, c)stdin (es para tomar el ingreso de teclado, Standard IN).

    Del otro main, esta bueno para tomar esas 4 lineas de codigo que hacen toda la compilacion del string y usarla en una funcion propia
*/

    strcpy(nombre_minus, nombre); // copio el nombre en nombre_minus
    strcpy(apellido_minus, apellido); // copio el apellido en apellido_minus

    strlwr(nombre_minus); //paso a minusculas el nombre
    strlwr(apellido_minus); //paso a minusculas el apellido

    strcpy(nombre_mayus, nombre); // copio el nombre en nombre_mayus
    strcpy(apellido_mayus, apellido); // copio el nombre en apellido_mayus

    strupr(nombre_mayus); //paso a mayusculas el nombre
    strupr(apellido_mayus); //paso a mayusculas el apellido

    strcpy(nombre_inicial_mayus, nombre_minus); // copio el nombre en minusculas a nombre_inicial_mayus
    strcpy(apellido_inicial_mayus, apellido_minus); // copio el apellido en minusculas a apellido_inicial_mayus

    nombre_inicial_mayus[0] = toupper(nombre_minus[0]); // le doy formato de mayusculas al caracter q esta en la posicion 0
    apellido_inicial_mayus[0] = toupper(apellido_minus[0]);// le doy formato de mayusculas al caracter q esta en la posicion 0

/**<
Para poder armar "nombre y apellido". primero paso todo a minusculas (ya lo hice arriba);
Despues paso Iniciales de Nombre y Apellido a Letras Capitales (ya lo hice arriba);
Tenemos que limpiar el vector de la memoria de la posible info que tenga almacenada:
    a) Limpio el vector de memoria del dato concatenado, hay 2 opciones:
        1) apellidoNombre[0]='/0';
        2) strcopy(apellidonombre,apellido) (Esto copia desde el primer elemento. y pisa todo el resto).
    b) Concateno strcat(apellido_inicial_mayus,nombre_inicial_mayus); (Esto tb lo hice antes).
strcat(apellidonombre, apellido);
strcat(apellidonombre," ");
strcat(apellidonombre,nombre);

*/

/**< Con todo esto a continuacion creo "prolijamente Apellido y Nombre con letras capitales separados por un espacio" */
strcpy(apellidoynombre, apellido_inicial_mayus); // copio apellido con letra capital en apellido y nombre
//strcat(apellidoynombre,apellido_inicial_mayus);
strcat(apellidoynombre," ");, //concateno apellido con letra capital y un " " en blanco
strcat(apellidoynombre,nombre_inicial_mayus); // concateno el nombre con inicial en mayusculas al resultado previo apellido+" "
/**< HASTA ACA */

    printf("Su nombre es %s y su apellido %s tal cual como fue ingresado.\n", nombre, apellido);
    printf("Su nombre en mayusuculas es %s y su apellido en mayusculas es %s.\n", nombre_mayus, apellido_mayus);
    printf("Su nombre en minusculas es %s y su apellido en minusculas es %s.\n", nombre_minus, apellido_minus);
    printf("Su nombre en minusculas y el apellido en mayusculas concatenado es %s\n", strcat(nombre,apellido_mayus));
    printf("Su nombre con letra capital es %s y su apellido con letra capital %s\n", nombre_inicial_mayus,apellido_inicial_mayus);
    printf("Su nombre con letra capital y su apellido con letra capital concatenados son %s\n", strcat(nombre_inicial_mayus,apellido_inicial_mayus));
    printf("Su apellido y nombre juntos en una variable son %s",apellidoynombre);

    return 0;
}

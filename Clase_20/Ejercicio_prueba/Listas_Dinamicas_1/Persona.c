#include <stdio.h>
#include <stdlib.h>

/**< Defino Estructura Persona */
typedef struct{
    int edad;
    char nombre[55];
}Persona;

/** \brief : setName: Almacena un string dentro el elemento 'nombre' de la estructura 'Persona'.
 *
 * \param a Persona*: Recibe el puntero persona.
 * \param b nombreaux: Recibe el string con el nombre ingresado.
 * \return void.
 *
 */
void setName(Persona * persona, char nombreaux[])
{

    strcpy(persona->nombre, nombreaux);
}

/** \brief : setEdad: Almacena un entero en el elemento 'edad' de la estructura 'Persona'.
 *
 * \param a Persona*: Recibe el puntero persona.
 * \param b edadaux: Recibe el int con la edad ingresada.
 * \return void.
 *
 */
void setEdad(Persona * persona, int edadaux)
{
    persona->edad=edadaux;
}

/** \brief : persona_initLista: creamos la lista para las direcciones de memoria que usaremos
 *           para los datos del doble puntero Persona mediante el uso de la funcion malloc.
 *
 * \param a size: Tamaño inicial de la lista.
 * \param b index: Indice del array de punteros.
 * \return void.
 *
 */
void persona_initLista(void)
{
    size = 10;
    index = 0;
    lista = (Persona**)malloc(sizeof(Persona*)*size);
}

/** \brief : setEdad: Almacena un entero en el elemento 'edad' de la estructura 'Persona'.
 *
 * \param a Persona*: Recibe el puntero persona.
 * \param b edadaux: Recibe el int con la edad ingresada.
 * \return void.
 *
 */
 void persona_newPersona(void)
 {

 }

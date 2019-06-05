#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

/**<
Hay que sumarle
    getInt
    setEdad
    getEdad
    getString
    setNombre
    getNombre

    En el TP 3 deberiamos tener:
        Main
        Biblioteca INPUT
        Biblioteca Persona
 */

//void setName(Persona *, char nombreaux[]);
//void setEdad(Persona *, int edadaux);


int main()
{
    int size = 10;
    int edadaux, index=0;
    char salir='N';
    char nombreaux[55];

    persona_initLista();
    //Persona* * lista = (Persona* * )malloc(sizeof(Persona * )*size);
    // Persona* * lista= * lista;


    do {

        Persona* persona = (Persona*)malloc(sizeof(Persona));

        printf("\nIngrese un nombre: ");
        scanf("%s",nombreaux); // Aca tengo que hacer un getString
        setName(persona, nombreaux);

        printf("\nIngrese su edad: ");
        scanf("%d",&edadaux);// Aca tengo que hacer un getInt
        setEdad(persona, edadaux);

        //lista=lista;

        lista[index]=persona;
        index++;

        if(index>=size)
            {
                // incrementamos el tamaño del array
                size+=10;
                lista = realloc(lista,sizeof(Persona*)*size);
                //Persona* persona = (Persona*)malloc(sizeof(Persona))
            }

        printf("Desea salir? S/N\n");
        fflush(stdin);
        scanf("%c", &salir);

    }while(salir!='S');

    return 0;
}



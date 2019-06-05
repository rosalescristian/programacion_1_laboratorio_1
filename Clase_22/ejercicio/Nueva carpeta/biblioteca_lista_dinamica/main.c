#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

int main()
{
    /*int size = 10;
    int index=0;
    Persona** lista = (Persona**)malloc(sizeof(Persona*)*size);*/
    persona_initLista(Persona* pPersona);

    do {
        /*Persona* persona = persona_newPersona();
        char nombreAux[20];

        preguntarNombre(nombreAux);
        if(persona_setName(persona,nombreAux))
            {
                printf(“El nombre no es valido”);
            }

        int edadAux = preguntarEdad();

        if(persona_setEdad(persona,edadAux))
        {
            printf(“La edad no es válida”);
        }

        lista[index] = persona;

        index++;

            if(index>=size)
                {
                // incrementamos el tamaño del array
                size+=10;
                lista = realloc(lista,sizeof(Persona*)*size);
                }

        }while(preguntarSalir()!='S');*/
        Persona* persona = persona_newPersona();
        char nombreAux[20];
        preguntarNombre(nombreAux);
            if(persona_setName(persona,nombreAux))
            {
                printf("El nombre no es valido");
            }
            int edadAux = preguntarEdad();

            if(persona_setEdad(persona,edadAux))
            {
               printf("La edad no es válida");
            }
            persona_addPersona(persona);


        }while(preguntarSalir()!='S');

    return 0;
}

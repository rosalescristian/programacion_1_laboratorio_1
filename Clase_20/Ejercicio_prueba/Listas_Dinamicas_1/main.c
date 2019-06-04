#include <stdio.h>
#include <stdlib.h>

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

typedef struct{
    int edad;
    char nombre[55];
}Persona;


void setName(Persona *,char nombreaux[]);
void setEdad(Persona *, int edadaux);

int main()
{
    int size = 10;
    int edadaux, i=0;
    char salir='N';
    char nombreaux[55];

    Persona* * lista = (Persona* * )malloc(sizeof(Persona * )*size);
   // Persona* * lista= * lista;


    do {

        Persona* persona = (Persona*)malloc(sizeof(Persona));

        printf("\nIngrese un nombre: ");
        scanf("%s",nombreaux); // Aca tengo que hacer un getString
        setName(persona, nombreaux);



        printf("\nIngrese una edad: ");
        scanf("%d",edadaux);// Aca tengo que hacer un getInt
        setEdad(persona, edadaux);


        //lista=lista;

        if(lista==size)
            {
                // incrementamos el tamaño del array
                //size+=10;
                *lista = malloc(sizeof(Persona*));
                //Persona* persona = (Persona*)malloc(sizeof(Persona))
            }
        else
            {
                lista=lista;
                //lista[i] = persona; // Ver explicacion sobre esta línea
                i++;
            }


        fflush(stdin);
        printf("Desea salir? S/N\n");
        scanf("%c\n", &salir);

    }while(salir!='S');

    return 0;
}

void setName(Persona * persona, char nombreaux[]){

    strcpy(persona->nombre, nombreaux);
}

void setEdad(Persona * persona, int edadaux){
    persona->edad=edadaux;
}

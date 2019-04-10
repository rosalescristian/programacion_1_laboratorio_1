#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ELEMENTOS 5

int main()
{
	int i,j;
	char nombre[ELEMENTOS][50] = {"Pedro","Carlos","Juan","Ernesto","Mario"};
	char apellido[ELEMENTOS][50]= {"Gomez","Fernandez","Paz","Perez","Lopez"};
	char auxiliar[50];

    /*strlwr(nombre[i]);
    strlwr(apellido[j]);*/

	for(i=0;i< ELEMENTOS-1;i++)
	{
	    for(j=i+1;j<ELEMENTOS;j++)
        {
            if(strcmp(apellido[i],apellido[j])>0) // Esta mal en el apunte, va >0 como lo corregí acá.
            { // Debemos hacer la operacion siguiente tantas veces como arrays tengamos para que ordene todos los datos
                strcpy(auxiliar,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j], auxiliar);

                strcpy(auxiliar,apellido[i]);
                strcpy(apellido[i],apellido[j]);
                strcpy(apellido[j], auxiliar);
            }
        }
	}
    printf("\n\nLista ordenada por nombres");
        for(i=0;i<ELEMENTOS;i++)
        {
            printf("\nNombre: %s - Apellido: %s",nombre[i],apellido[i]);
        }
    return 0;
}


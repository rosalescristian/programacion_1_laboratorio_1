#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;
    int i;
    char cadena[50];
    char palabras[5][50];

   /* miArchivo = fopen("prueba.txt","w");

    for(i=0; i<5; i++)
    {
        printf("Ingrese una palabra: ");
        fflush(stdin);
        gets(cadena);

        fprintf(miArchivo,cadena);
        fprintf(miArchivo,"\n");


    }




    fclose(miArchivo);*/

    miArchivo = fopen("prueba.txt","r");
    i=0;
    while(!feof(miArchivo))
    {
      fgets(palabras[i],50,miArchivo);

        i++;
    }
    fclose(miArchivo);

    for(i=0; i<5; i++)
    {

        printf("%s",palabras[i]);

    }
    return 0;
}

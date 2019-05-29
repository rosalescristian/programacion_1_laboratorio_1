#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;

    char palabra[50]="por defecto";
    int numero=123;

    miArchivo = fopen("C:\\data\\prueba.txt","w");

    fprintf(miArchivo,"Hola a todos" );

    fclose(miArchivo);

    miArchivo = fopen("C:\\data\\prueba.txt","r");
    if(miArchivo==NULL)
    {
        printf("Archivo no encontrado!!!");
    }
    else
    {
       fgets(palabra,50,miArchivo);
       fclose(miArchivo);
        puts(palabra);
    }







}

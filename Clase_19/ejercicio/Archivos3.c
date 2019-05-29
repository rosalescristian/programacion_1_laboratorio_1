#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
} eDato;

int main()
{
    eDato d;
    FILE* miArchivo;
    int numero=128;
    int otroNumero;

    /*miArchivo = fopen("numero.dat", "wb");

    fwrite(&d, sizeof(eDato), 1, miArchivo);

    fclose(miArchivo);*/


    miArchivo = fopen("numero.dat", "rb");

    fread(&d, sizeof(eDato), 1, miArchivo);

    fclose(miArchivo);

    printf("%d--%c", d.a, d.b);



}


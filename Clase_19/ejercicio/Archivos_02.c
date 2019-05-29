#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;
    int i;
    int numero;
    int lista[5];

    /*miArchivo = fopen("prueba.txt","w");

    for(i=0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

      fwrite(&numero,sizeof(int),1,miArchivo);


    }




    fclose(miArchivo);*/

    miArchivo = fopen("prueba.txt","r");
    i=0;
    while(!feof(miArchivo))
    {
      fread(&lista[i],sizeof(int),1,miArchivo);

        i++;
    }

    for(i=0; i<5; i++)
    {

        printf("%d\n",lista[i]);

    }
    return 0;
}

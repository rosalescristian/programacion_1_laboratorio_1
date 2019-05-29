#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;
    char cadena[50]="german";
    int edad=31;
    float sueldo=50000;
   miArchivo = fopen("Nombre.csv","w");

    fprintf(miArchivo,"%s,%d,%f\n", cadena,edad,sueldo);

    fclose(miArchivo);

    /*miArchivo = fopen("Nombre.txt","r");

    while(!feof(miArchivo))
    {
        if(feof(miArchivo)!=0)
        {
            break;
        }
        fgets(cadena,50,miArchivo);
        printf("%s", cadena);
    }


 fclose(miArchivo);*/
    return 0;
}

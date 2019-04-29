#include <stdio.h>
#include <stdlib.h>

void mostrar(int);
void otroMostrar(int);
void hacerAlgo(int);


void manejador(void (*pFuncion)(int), int);

int main()
{
    /*manejador(hacerAlgo,75);
    manejador(mostrar,75);*/

    void (*array[2])(int);

    array[0]=mostrar;
    array[1]=otroMostrar;

    int i;
    for(i=0; i<2; i++)
    {
        array[i](45);
    }





    return 0;
}

void manejador(void (*pFuncion)(int), int valor)
{
    printf("Estoy en el manejador");
    pFuncion(valor);
}


void mostrar(int x)
{
    printf("Hola mundo! %d\n", x);
}

void otroMostrar(int r)
{
   printf("CHAU! %d", r);
}

int incrementar(int i)
{
    i++;
    return i;
}
void hacerAlgo(int t)
{
    printf("Hola estoy en hacer algo\n");
    t+=52;
    printf("CHAU");
    FILE* miarchivo;
    miarchivo = fopen("prueba.txt", "w");
    fprintf(miarchivo,"Prueba con punteros a funciones %d", t);

    fclose(miarchivo);

}


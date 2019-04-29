#include <stdio.h>
#include <stdlib.h>

void mostrar(int);
void OtroMostrar(int);
int incrementar(int);
void manejador(void (*pFuncion)(int), int);
void hacerAlgo(int);

int main()
{
    /*
    //void (*pFuncion)(void);
    void (*pFuncion)(int);
    int (*otroPFuncion)(int);
    /*pFuncion = mostrar;
    pFuncion(45);

    pFuncion = OtroMostrar;
    pFuncion(12);
    int x = 0;
    otroPFuncion = incrementar;
    x = otroPFuncion(x);
    printf("El valor es: %d", x);
*/
    //DELEGADO
    void (*array [2])(int);

    array[0] = mostrar;
    array[1] = OtroMostrar;

    int i;
    for(i=0; i<2; i++)
    {
        array[i](45);
    }
    //DELEGADO
    /*manejador(hacerAlgo, 75);
    manejador(mostrar, 75);
*/


    return 0;
}


//void mostrar(void)
void mostrar(int x)
{
    printf("Hola mundo %d", x);
}

void OtroMostrar(int y)
{
    printf(" aca toy! %d", y);
}

int incrementar(int i)
{
    i++;
    return i;
}

void manejador(void (*pFuncion)(int), int valor)
{
    printf("\nEstoy en el manejador\n");
    pFuncion(valor);
}

void hacerAlgo(int t)
{
    printf("Hola esto es hacer algo\n");
    t+=52;
    printf("CHAU");
    FILE* miArchivo;
    miArchivo = fopen("prueba.txt", "w");
    fprintf(miArchivo,"PRUEBA CON PUNTEROS A FUNCIONES");
    fclose(miArchivo);
}

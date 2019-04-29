#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    //funcion malloc(le dice al sistema operativo que vaya a la memoria ram y que busque un pedacito de memoria que lo pueda guardar)
    //devuelve un puntero a void;

    int* pEntero;
    pEntero = (int*)malloc(sizeof(int)*T);
    //pEntero = (int*)malloc(sizeof(int)*T); ARRAY DE 5 ELEMENTOS
    if(pEntero != NULL)
    {
        int i;
        for(i=0; i<T; i++)
        {
            printf("Ingrese dato: ");
            scanf("%d", pEntero+i);
            printf("%d\n", *(pEntero+i));
        }
        int k;
        for(k=0; k<T; k++)
        {
            printf("%d\n", *pEntero+k);
        }


        //*pEntero = 9;
        //printf("%d", *pEntero);

        //FUNCION REALLOC(PARA AGRANDAR ESPACIO EN MEMORIA, REDEFINIRLO)
        pEntero=realloc(pEntero, sizeof(int)*(T+5));
        //free(pEntero); CUANDO QUEREMOS ROMPER RELACION CON EL DATO, EL REALLOC LO HACE AUTOMaTICcCCc
    }
    return 0;
}

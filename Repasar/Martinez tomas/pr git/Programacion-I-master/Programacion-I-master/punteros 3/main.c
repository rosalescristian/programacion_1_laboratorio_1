#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 5


typedef struct{
char nombre[20];
int edad;
}eAlumno;
//una funcion que me devuelva un puntero a una estructura

//eAlumno* nuevoAlumno(char [50], int edad);
eAlumno* nuevoAlumno();
void mostrarAlumno();
int eAlumno_setName(eAlumno* this, char* nombre);
char* eAlumno_getName(eAlumno* this);

int main()
{
    //funcion malloc(le dice al sistema operativo que vaya a la memoria ram y que busque un pedacito de memoria que lo pueda guardar)
    //devuelve un puntero a void;

    /*int* pEntero;
    int aux;
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


        // *pEntero = 9;
        //printf("%d", *pEntero);

        //FUNCION REALLOC(PARA AGRANDAR ESPACIO EN MEMORIA, REDEFINIRLO)
        aux=realloc(pEntero, sizeof(int)*(T+5));
        //free(pEntero); CUANDO QUEREMOS ROMPER RELACION CON EL DATO, EL REALLOC LO HACE AUTOMaTICcCCc
        if(aux!=NULL)
        {
            pEntero = aux;
            for(i=T; i<T+5; i++)
            {
                *(pEntero+i)=i+1;
            }
            printf("ARRAY 10\n");
            for(i=0; i<T+5; i++)
            {
                printf("%d\n", *(pEntero+i));
            }
            aux = realloc(pEntero, sizeof(int)*(T+5));
        }
    }
    -----------------------------------------------------------------------------------
    int* pEstructura;
    int aux;
    pEstructura = (int*)malloc(sizeof(int)*T);
    //pEstructura = (int*)malloc(sizeof(int)*T); ARRAY DE 5 ELEMENTOS
    if(pEstructura != NULL)
    {
        int i;
        for(i=0; i<T; i++)
        {
            printf("Ingrese dato: ");
            scanf("%d", pEstructura+i);
            printf("%d\n", *(pEstructura+i));
        }
        int k;
        for(k=0; k<T; k++)
        {
            printf("%d\n", *pEstructura+k);
        }


        // *pEstructura = 9;
        //printf("%d", *pEstructura);

        //FUNCION REALLOC(PARA AGRANDAR ESPACIO EN MEMORIA, REDEFINIRLO)
        aux=realloc(pEstructura, sizeof(int)*(T+5));
        //free(pEstructura); CUANDO QUEREMOS ROMPER RELACION CON EL DATO, EL REALLOC LO HACE AUTOMaTICcCCc
        if(aux!=NULL)
        {
            pEstructura = aux;
            for(i=T; i<T+5; i++)
            {
                *(pEstructura+i)=i+1;
            }
            printf("ARRAY 10\n");
            for(i=0; i<T+5; i++)
            {
                printf("%d\n", *(pEstructura+i));
            }
            aux = realloc(pEstructura, sizeof(int)*(T+5));
        }
    }

    */

    //char nombre[50];
   // int edad;

    eAlumno* alumnito;
    alumnito = nuevoAlumno();
    if(alumnito!=NULL)
    {
        strcpy(alumnito->nombre, "Roberto");
        alumnito->edad = 16;

        mostrarAlumno(alumnito);
    }



    return 0;
}

//una funcion que me devuelva un puntero a una estructura
eAlumno* nuevoAlumno(char nombre[50], int edad)
{
    eAlumno* miAlumno;

    /*miAlumno = (eAlumno*) malloc(sizeof(eAlumno));
    if(miAlumno!=NULL)
    {
        strcpy(miAlumno->nombre, "");
        miAlumno->edad = 0;
    }
    */

    miAlumno = calloc(sizeof(eAlumno),1);

    return miAlumno;
}

void mostrarAlumno(eAlumno* unAlumno)
{
    printf("%s---%d", unAlumno->nombre, unAlumno->edad);
}

int eAlumno_setName(eAlumno* this, char* nombre)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->nombre, nombre);
    }

    return estado;
}

char* eAlumno_getName(eAlumno* this)
{
    char* nombre = "";

    if(this != NULL)
    {
        strcpy(nombre, this-> nombre);

    }
    else{

        printf("Error en el programa");
    }
    return nombre;
}

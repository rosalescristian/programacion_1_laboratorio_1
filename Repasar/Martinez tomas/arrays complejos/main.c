#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarVector(int datos[],int tam);
void mostrarPalabra(char datos[][10], int tam);
void cargarVector(int datos[], int tam);

int main()
{
    char usuario[10][10]={" tomas"," agustin"," roberto"," matias"," octavio"};
    int nota[10]={8,5,2,10,3};
    int i;
    int j;

    mostrarPalabra(usuario, 5);
    mostrarVector(nota, 5);
    cargarVector(nota, 5);
    mostrarVector(nota, 5);
//ORDENAMIENTO POR NOTA
/*
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d  =>  %d    \n",nota[i], nota[j]);
            if(nota[i]>nota[j])
            {
                int aux = nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString, usuario[i]);
                strcpy(usuario[i], usuario[j]);
                strcpy(usuario[j], auxString);
            }
        }
    }
*/
  /* for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {


            printf("%d  =>  %d    \n",nota[i], nota[j]);
            //MAL if(usuario[i]>usuario[j])
            int resultado;
            resultado=strcmp("hola", "hola");//0
            printf("\n iguales: %d", resultado);
            resultado=strcmp("Hola", "hola");//-1
            printf("\n primera: %d", resultado);
            resultado=strcmp("hola", "Hola");//1
            printf("\n segunda: %d", resultado);
            resultado=strcmp("A", "a");//-1
            printf("\n la A : %d", resultado);
            resultado=strcmp("a", "b");//-1
            printf("\n la a-b : %d", resultado);
            resultado=strcmp("b", "a");//1
            printf("\n la b-a : %d", resultado);

            resultado=strcmp(usuario[i],usuario[j]);

            if(strcmp(usuario[i],usuario[j])==-1)
            {
                int aux = nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString, usuario[i]);
                strcpy(usuario[i], usuario[j]);
                strcpy(usuario[j], auxString);
            }
        }
    }
*/
/*
    for(i=0; i<5; i++)
    {
        printf("Alumno :%s   nota : %d    \n", usuario[i], nota[i]);
    }


    printf("Ingrese nombre de usuario: ");
    scanf("%s", usuario[0]);
    printf("Ingrese nombre de usuario: ");
    scanf("%s", usuario[1]);



    //INICIALIZACION DE ARRAYS EN PARALELO
    for(i=0; i<5; i++)
    {
        strcpy(usuario[i],"");
        //nota[i] = 0;
        //printf("Ingrese nombre de usuario: ");
       // scanf("%s", usuario[i]);
    }


    //CARGA SECUENCIAL DE ARRAYS EN PARALELO
    for(i=0; i<5; i++)
    {
        printf("Ingrese usuario # %d:",i+1);
        //scanf("%s", usuario[i]);
        gets(usuario[i]);
        printf("Ingrese nota # %d:", i+1);
        //scanf("%d", &nota[i]);
        gets(nota[i]);
    }



    strcpy(usuario[0],"hola");
    printf("test %s  \n",usuario[0]);
    printf("test %s  \n",usuario[1]);
    //int tam= strlen(usuario[1]);
    printf("El tamano es:%d\n", tam);



   for(i=0; i<5; i++)
    {
        printf("Hello %s nota: %d \n", usuario[i],nota[i]);
    }

*/
    void mostrarVector(int datos[],int tam)
    {
        int i;
        for(i=0; i<tam; i++)
        {
            printf("nota :%d  \n", datos[i]);
        }
    }
    void cargarVector(int datos[], int tam)
    {
        int i;
        for(i=0; i<tam; i++)
        {
            datos[i]=1;
        }
    }

    void mostrarPalabra(char datos[][10], int tam)
    {
        int i;
        for(i=0; i<tam; i++)
        {
            printf("nombre :%s \n",datos[i]);
        }
    }
    return 0;

}



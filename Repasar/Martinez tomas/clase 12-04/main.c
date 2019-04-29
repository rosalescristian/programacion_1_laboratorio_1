#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4

void getString(char mensaje[], char input[]);
void getStringLetras(char mensaje[], char input[]);
void getStringNumeros(char mensaje[], char input[]);
int esSoloLetras(char palabra[]);
void mostrarDatos(char[][50], char[][50], int[], int[], int);
void ordenarDatos(char[][50], char[][50], int[], int[], int);

int main()
{
    char nombre[TAM][50]={"Leo", "Roberto", "Alberto", "Fred"};
    char apellido[TAM][50]={"Dan", "Reciben", "Entregan", "Ymercuri"};
    //char mail[TAM][50]
    int edad[TAM]={56,30,15,12};
    int nota[TAM]={10,9,8,7};



    ordenarDatos(nombre,apellido,edad,nota,TAM);
    mostrarDatos(nombre,apellido,edad,nota,TAM);


    return 0;
}

void getString(char mensaje[], char input[])
{
    printf(mensaje);
    scanf("%s", input);
}

void getStringLetras(char mensaje[], char input[])
{
    char aux[50];

    getString(mensaje, aux);


}

void getStringNumeros(char mensaje[], char input[])
{

}

int esSoloLetras(char palabra[])
{
    int i;
    for(i=0; palabra[i]!='\0'; i++)
    {
        if(palabra[i]!=' ')
        {
            if(palabra[i]<='a' && palabra[i]>='z')
            {
                if(palabra[i]<='A' && palabra[i]>='Z')
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void mostrarDatos(char nombre[][50], char apellido[][50], int edad[], int nota[], int tam)
{
    int i;
    printf("%10s\t%10s\t%5s%10s\n", "Nombre","Apellido","Edad","Nota");
    for(i=0; i<TAM; i++)
    {
        printf("%10s\t%10s\t%5d%10d\n", nombre[i], apellido[i], edad[i], nota[i]);
    }
}

void ordenarDatos(char nombre[][50], char apellido[][50], int edad[], int nota[], int tam)
{
    int i;
    int j;
    for(i=0; i<TAM-1; i++)
    {
        for(j=i+1; j<TAM; j++)
        {
            //if(nota[i]<nota[j])
           // {
                if(strcmp(nombre[i], nombre[j])>0)
                {
                char auxString[50];

                strcpy(auxString, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], auxString);

                strcpy(auxString, apellido[i]);
                strcpy(apellido[i], apellido[j]);
                strcpy(apellido[j], auxString);

                int aux;

                aux = edad[i];
                edad[i] = edad[j];
                edad[j] = aux;

                aux = nota[i];
                nota[i] = nota[j];
                nota[j] = aux;
                }
           // }

        }
    }
}

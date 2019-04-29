#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4

void getString(char mensaje[], char input[]);
void getStringLetras(char mensaje[], char input[]);
void getStringNumeros(char mensaje[], char input[]);
int esSoloLetras(char palabra[]);

int main()
{
    char nombre[TAM][50]={"Leo", "Roberto", "Alberto", "Fred"};
    char apellido[TAM][50]={"Dan", "Reciben", "Entregan", "Ymercuri"};
    int edad[TAM]={56,30,15,12};
    int nota[TAM]={10,9,8,7};
    int i;
    int j;

    for(i=0; i<TAM; i++)
    {
        printf("\n nombre: %s  apellido: %s \n edad: %d  nota: %d", nombre[i], apellido[i], edad[i], nota[i]);
    }

    char unNombre[50];

    getString("\n\ningrese nombre: ", &unNombre);

    printf("el nombre es: %s", unNombre);

    strcpy(nombre[0], unNombre);


    getString("\n\ningrese nombre: ", nombre[1]);


    for(i=0; i<TAM; i++)
    {
        printf("\n nombre: %s  apellido: %s \n edad: %d  nota: %d", nombre[i], apellido[i], edad[i], nota[i]);
    }



    printf("\n\n ARRAYS PARALELOS \n");
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

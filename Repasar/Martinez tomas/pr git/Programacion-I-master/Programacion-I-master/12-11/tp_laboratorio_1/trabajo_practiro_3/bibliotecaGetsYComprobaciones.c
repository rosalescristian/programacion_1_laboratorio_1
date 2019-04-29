#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s", mensaje);
    scanf("%d", &auxiliar);
    return auxiliar;
}

char getChar(char mensaje[])
{
    char aux;
    printf("%s", mensaje);
    scanf("%c", &aux);
    return aux;
}

float getFloat(char mensaje[])
{
    float aux;
    printf("%s", mensaje);
    scanf("%f", &aux);
    return aux;
}

int isNumeric(char array[])
{
    int i = 0;
    while(array[i] != '\0')
    {
        if(array[i] <  '0' || array[i] > '9')
        {
            return 0;

        }
        i++;
    }
    return 1;
}

int isLetters(char array[])
{
    int i = 0;
    while(array[i] != '\0' )
    {
        if(array[i] != ' ' && (array[i] < 'a' || array[i] > 'z') && (array[i] < 'A' || array[i] > 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int isAlphanumeric(char array[])
{
    int i = 0;
    while(array[i] != '\0' )
    {
        if(array[i] != ' ' && (array[i] < 'a' || array[i] > 'z') && (array[i] < 'A' || array[i] > 'Z') &&
                (array[i] <  '0' || array[i] > '9'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int isPhone(char array[])
{
    int i;
    int contadorGuion = 0;

    while(array[i] != '\0')
    {
        if((array[i] != ' ') && (array[i] != '-') && (array[i] < '0' || array[i] > '9'))
        {
            return 0;
        }
        if(array[i] == '-')
        {
            contadorGuion++;
        }
        i++;
    }
    if(contadorGuion == 1)
    {
        return 1;
    }
    return 0;
}


void getString(char mensaje[], char input[])
{
    printf("%s", mensaje);
    gets(input);
}


int getStringLetters(char mensaje[], char input[])
{
    char aux[256];

    getString(mensaje, aux);
    if(isLetters(aux))
    {
        strcpy(input, aux);
        return 1;
    }
    return 0;
}

int getStringNumber(char mensaje[], char input[])
{
    char aux[256];
    int flag = 0;

    do
    {
        getString(mensaje, aux);
        if(isNumeric(aux))
    {
        strcpy(input, aux);
        flag = 1;
    }
    else
    {
        printf("\n Debe ser numerico.\n");
    }
    }while(flag != 1);
    return flag;
}

int getIntOnly(char mensaje[])
{
    char aux[256];
    int number;
    int flag = 0;

    do
    {
        getString(mensaje, aux);
        if(isNumeric(aux))
        {
            number = atoi(aux);
            flag = 1;
        }
        else
        {
            printf("\n(Debe ser un numero entero.)\n\n");
            flag = 0;
            system("pause");
            system("cls");
        }
    }
    while(flag == 0);
    return number;
}

void getStringOnly(char mensaje[], char input[])
{
    char aux[500];
    int flag = 0;

    do
    {
        getString(mensaje, aux);
        if(isLetters(aux))
        {
            strcpy(input, aux);
            flag = 1;
        }
        else
        {
            printf("\nDebe ser solo letras.\n");
            flag = 0;
            system("pause");
            system("cls");
        }
    }
    while(flag == 0);
}

int isFloat(char str[])
{
   int i=0;
   int cantidadPuntos=0;
   int flag = 1;
   while(str[i] != '\0')
   {
       if (str[i] == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;
       }
       if(str[i] < '0' || str[i] > '9')
       {
           flag = 0;
       }
       i++;
   }

   return flag;
}

float getFloatOnly(char mensaje[])
{
    char aux[256];
    float num;
    int flag = 0;

    do
    {
        getString(mensaje, aux);
        if(isFloat(aux))
        {
            num = atof(aux);
            flag = 1;
        }
        else
        {
            printf("\n(Debe ser un numero.)\n\n");
            flag = 0;
            system("pause");
            system("cls");
        }
    }
    while(flag == 0);
    return num;
}

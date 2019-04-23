#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LEN 500
#define CHARLEN 51

int getNombre(char*nombre)
{
    int retorno;
    int i;
    int is_not_valid_name;
    char auxiliar[LEN];

    do {
        fgets(auxiliar,LEN,stdin);
        for (i=0;i<strlen(auxiliar)-1;i++)
        {
            auxiliar[i] = tolower(auxiliar[i]);
            if ((auxiliar[i]<'a' || auxiliar[i]>'z') && auxiliar[i] != ' ')
            {
                is_not_valid_name = -1;
                printf("\nError en formato, ingrese solo letras y espacios: ");
                break;
            }
            else
            {
                if (i == 0 || auxiliar[i-1] == ' ')
                {
                    auxiliar[i] = toupper(auxiliar[i]);
                }
                is_not_valid_name = 0;
                retorno = 0;
            }
        }
    } while (is_not_valid_name);

    strcpy(nombre, auxiliar);
    return retorno;
}


int getEmail(char*email)
{
    int retorno = -1;
    int indexArroba = -1, i, indexPunto = -1;
    char auxiliar[CHARLEN];

    fgets(auxiliar,CHARLEN,stdin);

    if (email != NULL && strlen(auxiliar) <= CHARLEN && strlen(auxiliar) > 0)
    {
        for (i=0; i<strlen(auxiliar)-1; i++)
        {
            if (auxiliar[i] == ' ')
            {
                retorno = -1;
                break;
            }
            if (i==0 && (auxiliar[i] == '@' || auxiliar[i] == '.'))
            {
                retorno = -1;
                break;
            }
            if (auxiliar[i] == '@')
            {
                if (indexArroba == -1)
                {
                    indexArroba = i;
                }
                else
                {
                    retorno = -1;
                    break;
                }
            }
            if (auxiliar[i] == '.' && indexArroba != -1)
            {
                indexPunto = i;
            }
            if (indexArroba != -1 && indexPunto == -1 && auxiliar[i] != '@')
            {
                if (auxiliar[i] < 'a' || auxiliar[i] > 'z')
                {
                    retorno = -1;
                    break;
                }
            }
        }
        if (indexArroba == -1 || indexPunto == -1)
        {
            retorno = -1;
        }
        else
        {
            strcpy(email, auxiliar);
            retorno = 0;
        }
    }

    return retorno;
}











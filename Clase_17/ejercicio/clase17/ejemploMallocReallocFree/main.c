#include <stdio.h>
#include <stdlib.h>
struct persona
{
    char nombre[50];
    int edad;
};

int main()
{
    int seguirCargando;
    int i;
    int auxNuevaLogitud;
    int logitudPersonas = 1;//
    struct persona* pArrayPersona;
    struct persona* pAuxPersona;
    // Creamos el array de personas
    pArrayPersona = malloc(sizeof(struct persona));

    if (pArrayPersona == NULL)
    {
        printf("\nNo hay lugar en memoria\n");
        exit(0);//es un ejemplo, tratar de no cerrar programa
    }
    while(1)
    {
        printf("\nIngrese nombre: ");
        scanf("%s",(pArrayPersona+logitudPersonas-1)->nombre);//como es el 1er elemento le tengo que sumar 0

        printf("\nIngrese edad: ");
        scanf("%d",&((pArrayPersona+logitudPersonas-1)->edad));

        printf("\nSi desea cargar otra persona ingrese (1): ");
        scanf("%d",&seguirCargando);

        if(seguirCargando == 1)
            {
                logitudPersonas++; //Incremento el contador de personas//esto va antes del realloc
                // Calculamos el nuevo tamaño del array
                auxNuevaLogitud = sizeof(struct persona) * logitudPersonas;// si vale 0 lo multiplica por 0 o sea que achica al màx el array
                // Redimencionamos la lista
                pAuxPersona = realloc( pArrayPersona, auxNuevaLogitud);
                if (pAuxPersona == NULL)//pregunta si el aux es igual a null o no
                {
                   printf("\nNo hay lugar en memoria\n");
                   break;
                }
                //logitudPersonas++; //Incremento el contador de personas//esto va antes del realloc
                pArrayPersona = pAuxPersona;//asigna el aux al array
            }
            else
                {
                    break;
                }
    }
}

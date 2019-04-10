#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

int main(void)
{
    int legajo[MAX], legajoAux, i, j;
    float salario[MAX], salarioAux;
    char nombre[MAX][31], nombreAux[31];

    for(i=0; i<MAX; i++)
    {
        system("cls");
        printf("Ingrese el legajo del empleado: ");
        scanf("%d", &legajo[i]);
        printf("Ingrese el nombre del empleado: ");
        fflush(stdin);
        gets(nombre[i]);
        printf("Ingrese el salario del empleado: ");
        scanf("%f", &salario[i]);
    }
        for(i=0; i<MAX-1; i++)
        {
            for(j=i+1; j<MAX; j++)
            {
                if(salario[i] < salario[j])
                {
                    strcpy(nombreAux, nombre[i]);
                    strcpy(nombre[i], nombre[j]);
                    strcpy(nombre[j], nombreAux);

                    legajoAux = legajo[i];
                    legajo[i] = legajo[j];
                    legajo[j] = legajoAux;

                    salarioAux = salario[i];
                    salario[i] = salario[j];
                    salario[j] = salarioAux;
                 }
                if(salario[i] == salario[j])
                {
                    if(strcmp(nombre[i],nombre[j])>0)
                    {
                        strcpy(nombreAux, nombre[i]);
                        strcpy(nombre[i], nombre[j]);
                        strcpy(nombre[j], nombreAux);
                        legajoAux = legajo[i];
                        legajo[i] = legajo[j];
                        legajo[j] = legajoAux;
                        /*salarioAux = salario[i]; //Esta operacion va comentada porque no es necesaria ya que el salario es Igual de acuerdo a la comparacion del IF
                        salario[i] = salario[j];
                        salario[j] = salarioAux;*/
                    }
                }
            }
        }

    system("cls"); // Se usa system("cls") para borrar el buffer de memoria antes de mostrar xq si no va a truncar la info xq no la sobreescribe
    printf("\nLegajo\tNombre\t\t\tSalario ");

    for(i=0; i<MAX; i++)
    {
        printf("\n%d\t%s\t\t\t%.2f", legajo[i], nombre[i], salario[i]);
    }

    return 0;
}

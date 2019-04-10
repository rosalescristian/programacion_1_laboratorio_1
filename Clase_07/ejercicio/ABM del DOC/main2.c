#include <stdio.h>
#include <stdlib.h>
#define CANT 3

int main()
{
    for(i=0;i<CANT;i++)
    {
        estado[i]=0;
    }
    do
    {
        system("cls");
        printf("");
        ""
        ""
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:// ALTA
            alta(Nombre, Apellido, Nombre) // llamo a la funcion en cada case
        case 2:// BAJA
            baja(legajo, estado, CANT)
        }
    }



}

/**< FUNCION DE ALTA PONEEEEELE */
void alta(int legajo[], char *apellido[], char *nombre[], int edad[], int estado[])

/**< FUNCION DE MENU PONEEELE */
int menu()
{
    printf("");
    printf("");
    printf("");
}

/**< FUNCION DE MENU PONEEELE */
int menu(char opciones[])
{
 printf("%s", opciones); // defino las opciones en el main y en esta funcion solo me trae loas opciones a ejecutar
}

/**< FUNCION BAJA PONEEEELE */
void baja (int legajo[], int estado[])
{
    char rta;
    int legajoAux, i, flag=0;

    printf("Ingrese el legajo que desea eliminar: ")
    scanf("%d", &legajoAux) // esto tb lo podemos reemplazar con GETINT

    for(i=0;i<CANTIDAD,i++)
    {
            if(estado[i] == legajoAux)
            {
                printf("%d", legajoAux);
                do{
                    printf("Desea eliminar (TODOS LOS DATOS) S/N", legajo[i]);
                    fflush(stdin);
                    scanf("%c",&rta);
                    rta=toupper(rta);
                while(rta !=n && rta != s)
                {
                    printf("Ingreso una letra no valida, INGRESE S/N")
                }
                flag = 1;
                }
                if(rta == 's')
                {
                    estado[i]=0;

                    break;
                }
                else
                {
                    printf("No se elimino el registro.")
                }

            }
    }
    if (flag==0)
    {
        printf("No se encontro legajo");
    }
}

/**< FUNCION MODIFICACION PONEEEELE */
void modificacion (int legajo[], int estado[])
{
    char rta;
    int legajoAux, i, flag=0;

    printf("Ingrese el legajo que desea modificar: ")
    scanf("%d", &legajoAux) // esto tb lo podemos reemplazar con GETINT

    for(i=0;i<CANTIDAD,i++)
    {
            if(estado[i] == legajoAux)
            {
                printf("%d", legajoAux);
                do{
                    printf("Desea modificar (TODOS LOS DATOS) S/N", legajo[i]);
                    fflush(stdin);
                    scanf("%c",&rta);
                    rta=toupper(rta);
                while(rta !=n && rta != s)
                {
                    printf("Ingreso una letra no valida, INGRESE S/N")
                }
                flag = 1;
                if(rta == 's')
                {
                    estado[i]=0;

                    break;
                }
                do
                {
                    op=menu();
                    switch(op)
                    {
                        case 1: cada valor a cambiar
                        case 2: cada valor a cambiar
                        case 3: cada valor a cambiar
                        case 4: cada valor a cambiar
                        default: otro valor
                    }
                }while()


            }
    }
    if (flag==0)
    {
        printf("No se encontro legajo");
    }
}

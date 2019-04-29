# Programacion-I

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero;
    int unEntero;
    char unChar;
    float division;

    printf("Ingrese un entero : ");
    scanf("%d", &unNumero);

    printf("Ingrese un numero : ");
    scanf("%d", &unEntero);

    division = (float)unNumero/unEntero;

    printf("La division es : %.2f", division);


    /*
    printf("Ingrese un caracter : ");
    fflush(stdin);
    scanf("%c", &unChar);

    printf("El numero es : %.2f\n", unFlotante);
    printf("El caracter es : %c", unChar);*/


    return 0;
}

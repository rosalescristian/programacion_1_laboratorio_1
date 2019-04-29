#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    char* pChar;

    pChar = &x;

    printf("Ingrese el valor: ");
    scanf("%c", pChar);

    printf("variable: %c---- puntero: %c", x, *pChar);
    //ingrese un caracter a traves del puntero
    return 0;

    //REALIZAR EJERCICIOS DE VECTORES PASANDOLOS A PUNTEROS
}

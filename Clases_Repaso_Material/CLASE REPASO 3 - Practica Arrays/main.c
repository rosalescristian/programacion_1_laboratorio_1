#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5

int main()
{
    int misNumeros[CANTIDAD];
    int i, indice, nuevoValor, numeroMayor;

    /* INICIALIZACION
    for (i=0;i<CANTIDAD;i++) {
        misNumeros[i] = -1;
    }*/

    for (i=0;i<CANTIDAD;i++) {
        fflush(stdin);
        printf("Ingresado un numero: ");
        scanf("%d", &misNumeros[i]);
        printf("Ingresado el numero en posicion %d: %d\n", i, misNumeros[i]);
    }

    for (i=0;i<CANTIDAD;i++) {
        printf("\nNumero en posicion %d: %d", i, misNumeros[i]);
    }

    /*
    // Busqueda de Mayor
    for (i=0;i<CANTIDAD;i++) {
        if (i==0) {
            numeroMayor = misNumeros[i];
        }
        if (misNumeros[i] > numeroMayor) {
            numeroMayor = misNumeros[i];
        }

        printf("\n%d", i);
        if (i == CANTIDAD-1) {
            printf("\nULTIMA VUELTA!");
        }
    }

    printf("\n\nNumero mayor: %d", numeroMayor);
    */

    /*
    // Reemplazo aleatorio
    fflush(stdin);
    printf("\nIngrese la posicion del numero a reemplazar del 1 al %d: ", CANTIDAD);
    scanf("%d", &indice);

    if (indice <= CANTIDAD && indice >= 1) {
        printf("\nNumero %d", misNumeros[indice-1]);

        fflush(stdin);
        printf("Ingrese el nuevo numero: ");
        scanf("%d", &nuevoValor);

        misNumeros[indice-1] = nuevoValor;

        printf("\nNumero nuevo %d", misNumeros[indice-1]);
    }*/


    return 0;
}

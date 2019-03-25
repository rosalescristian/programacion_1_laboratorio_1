#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2){ // Defino funcion suma que voy a reutilizar en el main
    int res;
    res = op1+op2;
    return res;
}

int main()
{
    int n1, n2, result;
        printf("Numero 1: ");
        scanf("%d",&n1);
        printf("Numero 2: ");
        scanf("%d",&n2);
            result=suma(n1,n2); // aca llamo a mi funcion "suma" que hace el calculo declarado fuera del main.
        printf("La suma es: %d",result);
    return 0;
}

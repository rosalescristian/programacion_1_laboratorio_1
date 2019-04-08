#include <stdio.h>
#include <stdlib.h>

//Funciones y Bibliotecas

int factorial(int );

void main(void)
{
    int valor,result, resp;
    printf("\nIngrese numero:");
    scanf("%d",&valor);
    result=factorial(valor); // se puede cambiar esta linea por el bucle.
    printf("\nEl factorial de %d es %d",valor,result);
}
// 1 FORMA DE RESOLVERLO
int factorial(int n)
/*{
//FORMA ORIGINAL CON RECURSIVIDAD
    int resp;
    if(n==1)
        return 1;
    resp=n* factorial(n-1);
    return (resp);
}
//FORMA CRISPY 1 CON WHILE
{
    while (n>0)
    {
        if(n==1)
        {
            return 1;
        }
        resp=n*(n-1);
        n--;
        return resp;
    }
}
*/
//FORMA 2 CON FOR DECRECIENTE
/*    {
        int resp=1, i;

        for(i=n; i>1; i--) // i>1 es porque si es 1, va a ser siempre 1 la rta, y el calculo es al pedo
        {
            resp=resp*i;
        }
        return resp;

    }
 */
 //FORMA 3 CON FOR Y CONTADOR INCREMENTAL
{
   int resp=1, i;

        for(i=1; i<=n; i++) // i>1 es porque si es 1, va a ser siempre 1 la rta, y el calculo es al pedo
        {
            resp=resp*i;
        }
   return resp;

}





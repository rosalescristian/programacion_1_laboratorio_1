/*#include <stdio.h>
#include <stdlib.h>

int suma(int op1,int op2); // declaracion o prototipo.
//int suma(int ,int ); // declaracion o prototipo. -> Esto es lo mismo q arriba, sin la variable.

int main()
{ // desde aca
    int n1, n2, result;
        printf("Numero 1: ");
        scanf("%d",&n1);
        printf("Numero 2: ");
        scanf("%d",&n2);
            result=suma(n1,n2); // Esta es la llamada a la funcion.
        printf("La suma es: %d",result);
    return 0;
} // hasta aca es el alcance de la funcion/scope/ambito

int suma(int op1, int op2){ // Defino funcion suma que voy a reutilizar en el main - Entre () declaro las variables
    int res;
    res = op1+op2;
    return res;
} // hasta aca, es el cuerpo/desarrollo/definicion de la funcion (desde el int).

*/
//Aca pruebo pasajes de parametros por valor
#include <stdio.h>

void muestra(int *x,int y); // aca tb le agregamos asterisco previo al nomrbde de la varuable X (lo transformo en puntero)
void main(void)
{
  int x,y;
    printf("Ingrese un numero entero");
    scanf("%d",&x);
    printf("Ingrese un numero entero");
    scanf("%d",&y);
      muestra(&x,y); //a la llamada le agrego & para que tome el puntero
    printf("\n-----valores dentro de main----");
    printf("\nx vale %d \ny vale %d",x,y);
}

void muestra(int *x,int y) // le agrego asteristico
{
  x=y;
  printf("\n-----valores dentro de la funcion----");
  printf("\nx vale %d \ny vale %d",x,y);
}

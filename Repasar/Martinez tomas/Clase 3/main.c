#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main()
{
   char letra;
   char palabra[10];
   int numero;

   scanf("%s",&palabra);
   fflush(stdin);
   printf("\nPalabra: %s", palabra);

   int indice=0;
   while(palabra[indice]<10)
   {
      printf("\nLetra: %c", palabra[indice]);
      indice++;
   }


   /*scanf("%d", &numero);
   fflush(stdin);
   printf("\n numero %d", numero);

   scanf("%d",&letra);
   fflush(stdin);
   printf("\nLetra: %d", letra);

   scanf("%c",&letra);
   fflush(stdin);
   printf("\nLetra: %c", letra);*/






    /*int miDato=333;
    cambiarValor(miDato);
    printf("El valor es: %d", miDato);
    cambiarValorReferencia(&miDato);
    printf("\nMi dato es: %d", miDato);
*/
    //saludar();

    /*int edad;

    int retorno=0;

    do{
        printf("Ingrese un edad: ");
        retorno=scanf("%d",&edad);
        fflush(stdin);
    }while(retorno==0);

    printf("La respuesta es: %d", retorno);
    printf("\nLa edad es: %d", edad);
*/
    /*int dato;
    dato=dividir(6);
     printf("el dato es : %d",dato);
     dato=dividir(0);
     printf("\nel dato es : %d",dato);
     */
     /*int unFactorial;
     unFactorial= factorial(3);
     printf("el factorial es: %d", unFactorial);*/
    return 0;
}


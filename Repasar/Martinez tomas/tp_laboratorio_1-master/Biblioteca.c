#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
 float suma(float a, float b)
  {
     float resultadoSuma;
     resultadoSuma=(a+b);
     return resultadoSuma;
 }
 float resta(float a, float b)
 {
     float resultadoResta;
     resultadoResta=(a-b);
     return resultadoResta;
 }
 float multiplicacion(float a, float b)
 {
     float resultadoMultiplicacion;
     resultadoMultiplicacion=(a*b);
     return resultadoMultiplicacion;
 }
 float division(float a, float b)
 {
     float resultadoDivision;
     if(b==0)
     {
         printf("No se puede dividir por 0");
     }
     else
     {
         resultadoDivision=(a/b);
     }
     return resultadoDivision;
 }
 int factorialUno(int operadorUno)
 {
     int numero= operadorUno;
     int contadorUno=0;
     int resultadoFactorialUno= 1;

     if(operadorUno==0)
     {
         resultadoFactorialUno=1;

     }
     else
     {
         for(contadorUno= numero; contadorUno>=1 ; contadorUno--)
         {
             resultadoFactorialUno=resultadoFactorialUno*contadorUno;
         }
     }
     return resultadoFactorialUno;
 }
 int factorialDos(int operadorDos)
 {
     int numero= operadorDos;
     int contadorDos=0;
     int resultadoFactorialDos= 1;

     if(operadorDos==0)
     {
         resultadoFactorialDos=1;

     }
     else
     {
         for(contadorDos= numero; contadorDos>=1 ; contadorDos--)
         {
             resultadoFactorialDos=resultadoFactorialDos*contadorDos;
         }
     }
     return resultadoFactorialDos;
 }

#include <stdio.h>
 #include <stdlib.h>
 #include "Biblioteca.h"
 int suma(int a, int b)

 {
     int resultadoSuma;
     resultadoSuma=(a+b);

     return resultadoSuma;
 }
 int resta(int a, int b)
 {
     int resultadoResta;
     resultadoResta=(a-b);

     return resultadoResta;
 }
 int multiplicacion(int a, int b)
 {
     int resultadoMultiplicacion;
     resultadoMultiplicacion=(a*b);

     return resultadoMultiplicacion;
 }
 int division(int a, int b)
 {
     int resultadoDivision;
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

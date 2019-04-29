#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
int suma(int a, int b)

{
    int resultadoSuma;
    resultadoSuma=suma(a, b);
    printf("El resultado de la suma es: %d", resultadoSuma);
    return resultadoSuma;
}
int resta(int a, int b)
{
    int resultadoResta;
    resultadoResta=resta(a, b);
    printf("El resultado de la resta es: %d", resultadoResta);
    return resultadoResta;
}
int multiplicacion(int a, int b)
{
    int resultadoMultiplicacion;
    resultadoMultiplicacion=multiplicacion(a, b);
    printf("El resultado de la multiplicacion es: %d", resultadoMultiplicacion);
    return resultadoMultiplicacion;
}
int division(int a, int b)
{
    int resultadoDivision;
    if(a==0 || b==0)
    {
        printf("No se puede dividir por 0");
    }
    else
    {
        resultadoDivision=division(a, b);
        printf("El resultado de la division es: %f", resultadoDivision);
    }
    return resultadoDivision;
}


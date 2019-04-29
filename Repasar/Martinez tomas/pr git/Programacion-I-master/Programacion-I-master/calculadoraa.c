#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);
int main()
{
    int opcion;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    int resultadoDivision;
    int operadorUno=0;
    int operadorDos=0;

    do{
        printf("\nIngrese una opcion: \n");
        printf("\nOpcion 1:  Ingresar 1er operando (A=x) :");
        printf("\nOpcion 2:  Ingresar 2do operando (B=y) :");
        printf("\nOpcion 3:  Calcular todas las operaciones");
        printf("\nOpcion 4:  Informar resultados");
        printf("\nOpcion 5:  Salir de la calculadora:");
        printf("\nOpcion a elegir: ");
        scanf("%d",&opcion);
        switch(opcion){
        case 1:
            printf("\nIngrese el operador 1: ");
            scanf("%d", &operadorUno);
            break;
        case 2:
            printf("\nIngrese el operador 2: ");
            scanf("%d", &operadorDos);
            break;
        case 3:
            resultadoSuma=suma(operadorUno, operadorDos);
            resultadoResta=resta(operadorUno, operadorDos);
            resultadoMultiplicacion=multiplicacion(operadorUno, operadorDos);
            resultadoDivision=division(operadorUno, operadorDos);
            break;
        case 4:
            printf("\nEl resultado de la suma es: %d", resultadoSuma);
            printf("\nEl resultado de la resta es: %d", resultadoResta);
            printf("\nEl resultado de la multiplicacion es: %d", resultadoMultiplicacion);
            if(operadorDos==0)
            {
                printf("\nNo se puede dividir por 0");
            }
            else
            {
                resultadoDivision=operadorUno/operadorDos;
                printf("\nEl resultado de la division es: %d", resultadoDivision);
            }
        case 5:
            printf("\nGracias por utilizar la calculadora de Tomas Martinez");
            break;
        default:
            printf("\nOpcion incorrecta.");
            printf("\n");
            break;
        }
    }while (opcion != 5);
    return 0;
}

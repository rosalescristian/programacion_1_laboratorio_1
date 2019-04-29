#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

//INICIA LA FUNCION
int main()
{
//SE NOMBRAN LAS VARIABLES A USAR
    int opcion;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    int resultadoFactorialUno;
    int resultadoFactorialDos;
    float operadorUno=0;
    float operadorDos=0;

//REALIZO EL MENU DE DATOS
    do{
        printf("\nIngrese una opcion: \n");
        printf("\nOpcion 1:  Ingresar 1er operando A= %.2f", operadorUno);
        printf("\nOpcion 2:  Ingresar 2do operando B= %.2f", operadorDos);
        printf("\nOpcion 3:  Calcular todas las operaciones");
        printf("\nOpcion 4:  Informar resultados");
        printf("\nOpcion 5:  Salir de la calculadora:");
        printf("\nOpcion a elegir: ");
        scanf("%d",&opcion);
//INDICO AL PROGRAMA QUE DEBE HACER EN CADA CASO
        switch(opcion){
        case 1:
            printf("\nIngrese el operador 1: ");
            scanf("%f", &operadorUno);
            break;
        case 2:
            printf("\nIngrese el operador 2: ");
            scanf("%f", &operadorDos);
            break;
        case 3:
            printf("Calculando...\n");
            resultadoSuma=suma(operadorUno, operadorDos);
            resultadoResta=resta(operadorUno, operadorDos);
            resultadoMultiplicacion=multiplicacion(operadorUno, operadorDos);
            resultadoDivision=division(operadorUno, operadorDos);
            resultadoFactorialUno=factorialUno(operadorUno);
            resultadoFactorialDos=factorialDos(operadorDos);
            break;
        case 4:
            printf("\nEl resultado de la suma es: %.2f", resultadoSuma);
            printf("\nEl resultado de la resta es: %.2f", resultadoResta);
            printf("\nEl resultado de la multiplicacion es: %.2f", resultadoMultiplicacion);
            if(operadorDos==0)
            {
                printf("\nNo se puede dividir por 0");
            }
            else
            {
                resultadoDivision=operadorUno/operadorDos;
                printf("\nEl resultado de la division es: %.2f", resultadoDivision);
            }
             if(operadorUno >= 0 && operadorDos <0)
            {
                printf("\nEl factorial del primer operador es: %d  \nNo se puede factorizar por negativos!\n",resultadoFactorialUno);
            }
            else if(operadorUno<0 && operadorDos>= 0)
            {
                printf("\nNo se puede factorizar por numeros negativos!!  \nEl factorial del segundo operador es: %d\n",resultadoFactorialDos);
            }
            else
            {
                printf("\nEl factorial del primer operador es: %d \nEl factorial del segundo operador es: %d\n", resultadoFactorialUno, resultadoFactorialDos);
            }

        case 5:
            printf("\nGracias por utilizar la calculadora de Tomas Martinez\n");
            break;
        default:
            printf("\nOpcion incorrecta.");
            printf("\n");
            break;
        }
        system("pause");
        system("cls");
        }while (opcion != 5);
        return 0;
}
//PROGRAMA TERMINADO

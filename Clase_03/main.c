/******************************************************************
* Programa: Ejemplo Clase 3
*
* Objetivo:
*   -Crear una funci�n que permita ingresar un numero al usuario y lo retorne.
*   -Crear una funci�n que reciba el radio de un c�rculo y retorne su �rea
*   -Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule
*    el �rea de un c�rculo cuyo radio es ingresado por el usuario
*   -Documentar las funciones al estilo Doxygen
*
* Aspectos a destacar:
*   -Declaraci�n de funciones que devuelven y reciben valores
*   -Hacer notar que el uso de funciones evita el c�digo repetido y ayuda a que
*    el mismo sea mas legible
*   -La funcio�n deberi�a comenzar indicando el objetivo que persigue y el
*    significado de sus para�metros.
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio D�vila
* Revisi�n: Ernesto Gigliotti
*
* *******************************************************************/


#include <stdio.h>
#include <stdlib.h>

// Prototipos de las funciones
float pedirNumero();
float calcularAreaCirculo(float radio);


int main()
{
    float auxiliar_float;
    float area;

    auxiliar_float = pedirNumero();
    area = calcularAreaCirculo(auxiliar_float);
    printf("El area del circulo es: %.2f\n",area);
    return 0;
}


/**
 * \brief Solicita un n�mero y lo retorna
 * \return N�mero ingresado por el usuario
 *
 */
float pedirNumero()
{
    float auxiliar;
    printf("Ingrese un numero: ");
    scanf("%f",&auxiliar);
    return auxiliar;
}


/**
 * \brief Recibe el radio y calcula el �rea del c�rculo
 * \param Radio correspondiente al radio del c�rculo
 * \return El �rea del c�rculo
 *
 */
float calcularAreaCirculo(float radio)
{
    float resultado;
    resultado = 3.14 * radio * radio;
    return resultado;
}

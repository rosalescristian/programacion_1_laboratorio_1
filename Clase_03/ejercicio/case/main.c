#include <stdio.h>
#include <stdlib.h>

int main()
{
    //CASE solo con nros
    //Ejercicio de Horas del parcial:
    //De 0 a 5 "A dormir"
    //De 6 a 9 "Levantate"
    //Default "Hola Mundo!"

    //int hora; //funciona igual con tipo int o char.
/*  //todo esto es con la variable hora como int - con char es distinto y es un bardo :P -- ver despues del comment
    int hora;
    //char mensaje[255]; // no me salio sobreescribir el mensaje y mostrarlo una sola vez.
    printf("Ingrese una hora: ");
    scanf("%d",&hora);
        switch(hora)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("A dormir");
                //  mensaje = "A dormir.";
                break;
            case 6:
            case 7:
            case 8:
            case 9:
                printf("Levantate");
                //   mensaje = "Levantate";
                break;
            default:
                printf("Hola Mundo!");
                //mensaje = "Hola Mundo!";
                //printf("mensaje %s\n",mensaje);
        }
    return 0;
*/ // todo con caracteres de texto
    char hora;
    printf("Ingrese una hora: ");
    fflush(stdin);
    scanf("%c",&hora);
        switch(hora)
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
                printf("A dormir!");
                break;
            case '6':
            case '7':
            case '8':
            case '9':
                printf("Levantate!");
                break;
            default:
                printf("Hola Mundo!");
        }
        return 0;

}

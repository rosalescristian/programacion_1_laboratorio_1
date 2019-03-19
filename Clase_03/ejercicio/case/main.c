#include <stdio.h>
#include <stdlib.h>

int main()
{
    //CASE solo con nros
    //Ejercicio de Horas del parcial:
    //De 0 a 5 "A dormir"
    //De 6 a 9 "Levantate"
    //Default "Hola Mundo!"

    int hora;
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
                break;
            case 6:
            case 7:
            case 8:
            case 9:
                printf("Levantate");
                break;
            default:
                printf("Hola Mundo!");
        }
    return 0;
}

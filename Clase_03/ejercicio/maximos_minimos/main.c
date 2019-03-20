#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // biblioteca para tipos de datos CHAR
//maximos y minomos con acumuladores y contadores

int main()
{
    int contador=0; // variable = variable + k
    int acumulador=0; // variable = variable + variable2
    int promedio; // promedio = acumulador / contador
    int nro, max, min, flag=0; // defino las tres variables juntas, numero - minimo y maximo
    //int numeroMaximo;
    //int numeroMinimo;
    char rta;

    do
    {
        printf("Ingrese un nro: ");
        scanf("%d",&nro);
        if(flag==0 || nro>max)
        {
            max = nro;
        }
        if(flag==0 || nro<min)
        {
            min = nro;
            flag = 1;
        }
        do{
            printf("¿Continuar? S/N");
            fflush(stdin);
            scanf("%c",&rta);
            rta = toupper(rta);// toupper = convierte el caracter en Mayusculas // to-Upper-Case // tolower -> todo a minusculas
            }while(rta != 'S' && rta != 'N');
    }while(rta == 'S');
    return 0;
}

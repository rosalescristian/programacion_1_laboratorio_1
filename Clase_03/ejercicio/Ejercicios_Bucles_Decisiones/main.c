#include <stdio.h>
#include <stdlib.h>
//variables i son indices del for, por eso se escribe asi.
int main()
{
/*  int i;
    for (i=0;i<10;i++)
    {
        printf("%d\n",(i+1));// muestra todos los valores seguidos. si escribimos "%d " //con un espacio o con \n hace un espacio o un salto de linea "secuencia de escape"
    }
    return 0;//esto va obligatoriamente. Despues entenderemos porq va. Tiene q ver con el tipo de dato del main.
*/
// haciendo lo mismo con while
/*
    int i=0;
    while(i<10)
    {
        printf("%d\n", (i+1));
        i++;
    }
    return 0;//esto va obligatoriamente. Despues entenderemos porq va. Tiene q ver con el tipo de dato del main.
*/
//haciendo lo mismo con do-while

    int i=0;
    do
    {
        printf("%d\n",(i+1));
        i++;
    }while(i<10);
    return 0;//esto va obligatoriamente. Despues entenderemos porq va. Tiene q ver con el tipo de dato del main.
}

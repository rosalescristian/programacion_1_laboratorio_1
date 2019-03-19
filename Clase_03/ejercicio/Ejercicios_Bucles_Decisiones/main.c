#include <stdio.h>
#include <stdlib.h>
// variables i son indices del for, por eso se escribe asi.
int main()
{
    int i;
    for (i=0;i<10;i++)
    {
        printf("%d",(i+1));
    }
    return 0;//esto va obligatoriamente. Despues entenderemos porq va. Tiene q ver con el tipo de variable i.
}

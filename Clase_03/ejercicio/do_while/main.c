#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    do
    {
        printf("%d\n",(i+1));
        i++;
    }while(i<10);
    return 0;//esto va obligatoriamente. Despues entenderemos porq va. Tiene q ver con el tipo de dato del main.
}

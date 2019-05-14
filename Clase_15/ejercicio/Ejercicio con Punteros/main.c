#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int n[3]={1,2,3};
    int *ptr, i;
    ptr = n;

    //char letras[10][6];//={letra};
    char letras[7]={"letra"};
    char *ptro;
    ptro = letras;

    int a=6;//[5]={1,2,3,4,5,6};
    int *punteroInt;
    int **punteroPuntero;
    punteroInt = &a; // Obtenemos la posición de memoria
    punteroPuntero = &punteroInt; // Obtenemos la posición de memoria

    for(i=0;i<3;i++)
    {
        //1 printf("\n%d\n",n[i]); // primer codigo, usando el array como array
        //2 printf("\n%d\n",*(ptr+i)); // usando el vector en el mismo loop;
        //printf("\n%d\n",&n); // usando el array como vector
        printf("\n%s",ptro);
    }
    for(i=0;i<3;i++)
    {
        //1 printf("\n%d\n",*(ptr+i));
        //printf("\n%d\n",ptr[i]); // usndo el puntero como vector
        printf("\n%c\n",&ptr[i]);
    }
     for(i=0;i<7;i++)
    {
        //1 printf("\n%d\n",*(ptr+i));
        //printf("\n%d\n",ptr[i]); // usndo el puntero como vector
        //printf("\n%s\n",ptr[i]);
        //printf("\n%d\n",**(punteroPuntero+i);
        //printf("\n%d",**punteroPuntero[i]);
        printf("\n%d",**punteroPuntero);
    }


    //return main();
}

int arrayInt[80];
int* p1;
int* p2;
p1 = arrayInt[4];
p2 = arrayInt;
*/

int main()
{
/**< 1era funcion: Recibe el array como vector y accede a los datos utilizando notación vectorial ([]) */
/**< 2da funcion: Recibe el array como vector y accede a los datos utilizando aritmetica de punteros */
/**< 3era funcion: Recibe el array como puntero y accede a los datos utilizando notación vectorial ([]) */
/**< 4da funcion: Recibe el array como puntero y accede a los datos utilizando aritmetica de punteros */

    int a[5]={1,2,3,4,5}, b[5]={6,7,8,9,10}, c[5]={11,12,13,14,15}, d[5]={16,17,18,19,20};
    int *puntero, *puntero1, *puntero2, *puntero3, *puntero4, i, j, k, l;
    puntero1=a;
    puntero2=b;
    puntero3=&c;
    puntero4=&d;

    for(i=0;i<5;i++)
    {
        printf("%d",puntero1[i]);
        //printf("\n%d",*(puntero+i));
    }
    for(j=0;j<5;j++)
    {
        printf("\n%d",*(puntero2+j));
    }
    for(k=0;k<5;k++)
    {
        printf("\t%d\t",puntero3[k]);
    }
    for(l=0;l<5;l++)
    {
        printf("\n%d\n",*(puntero4+l));
    }
    //return main();
}

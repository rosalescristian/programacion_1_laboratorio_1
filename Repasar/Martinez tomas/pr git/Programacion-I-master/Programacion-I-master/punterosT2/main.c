#include <stdio.h>
#include <stdlib.h>

typedef struct{
int a;
char b;
}eDato;

eDato* funcion(int x, char y);

 int main()
 {
     /*int x;
     eDato ejemplito={14, "b"};
     eDato* ejemplo;

     ejemplo = &ejemplito;
     x = (*ejemplo).a;
     printf("%d", x);


     return 0;*/

  /*   eDato datito[2]={{1,'c'},{1,'b'}};
     eDato* pDato;

     pDato = datito;

     int i;
     for(i=0; i<2; i++)
     {

         printf("%d", (*(pDato+i)).a);

         printf("%c", (*(pDato+i)).b);

     }*/
    /* int x;
     eDato ejemplito={14, "b"};
     eDato* ejemplo;

     ejemplo = &ejemplito;
     x = ejemplo -> a;
     printf("%d", x);*/

     /*eDato datito[2]={{1,'c'},{1,'b'}};
     eDato* pDato;

     pDato = datito;

     int i;
     for(i=0; i<2; i++)
     {

         printf("%d", (pDato+i)->a);

         printf("%c", (pDato+i)->b);
     }
     */

     int x = 10;
     char y = 'f';

     eDato* p;

     p=funcion(x, y);
     printf("%d -- %c", p->a, p->b);


     p=funcion(1, 'g');
     printf("\n%d -- %c", p->a, p->b);

     return 0;

     //REALIZAR EJERCICIOS DE VECTORES PASANDOLOS A PUNTEROS
    }

eDato* funcion(int x, char y)
{
    eDato* pDato;
    eDato datito;

    pDato = &datito;

    pDato -> a = x;
    pDato -> b = y;

    return pDato;
}

/* #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     char x;
     char* pChar;

     pChar = &x;

     printf("Ingrese el valor: ");
     scanf("%c", pChar);

     printf("variable: %c---- puntero: %c", x, *pChar);
     //ingrese un caracter a traves del puntero
     return 0;

     //REALIZAR EJERCICIOS DE VECTORES PASANDOLOS A PUNTEROS
 }
 */

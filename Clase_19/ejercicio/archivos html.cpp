#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main()
{
        FILE *archivo;

       // char caracteres[6][100]={"Agustin","maria"};
        char variable[50]="El rodetito de elias";
		char buffer[1080]={};//="<html><body><MARQUEE><h1>Hola a todos</h1></MARQUEE></body></html>";

        strcat(buffer,"<html><head><style>table, th, td {border: 1px solid black; border-collapse: collapse;}th, td { padding: 15px;}</style> </head><body><MARQUEE BGCOLOR=#7070ff><h1>");
        strcat(buffer,variable);

        strcat(buffer,"</h1></MARQUEE><br><br>");
        strcat(buffer,"<table style='width:100%'><tr><th>Firstname</th><th>Lastname</th> <th>Age</th></tr><tr><td>Jill</td><td>Smith</td><td>50</td></tr><tr> <td>Eve</td><td>Jackson</td><td>94</td></tr><tr> <td>John</td> <td>Doe</td> <td>80</td></tr></table> </body></html>");
        archivo = fopen("prueba.html","w");

         // archivo = fopen("d:\prueba.txt","w");




		/*for(int y=0;y<2;y++)
         {

         	fprintf(archivo,caracteres[y]);
			fprintf(archivo,"\n");
         }*/

         fprintf(archivo,buffer);

		 fclose(archivo);


       /*  printf("****ahora lo leo");


        archivo = fopen("d:\prueba.txt","r");

        if (archivo == NULL)
        {
        	printf("El archivo no existe");
        	 exit(1);
		}


        //printf("\nEl contenido del archivo de prueba es \n\n");
        int cont=0;
        while (feof(archivo) == 0)
        {
                fgets(caracteres[cont],15,archivo);

                cont++;
        }
        printf("\n");
        system("PAUSE");
        fclose(archivo);
        printf("\nlistado\n");
        for(int i=0;i<2;i++)
        		printf("%s\n",caracteres[i]);
        getch();*/
        return 0;
}

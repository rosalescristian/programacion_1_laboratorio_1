#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

struct
{
    int id;
    char name[51];
    char lastName[51];
    char isEmpty;

}typedef Employee;

int parserEmployee(FILE* pFile , ArrayList* pArrayListEmployee)
{
    //Employee *p;
    Employee eEmployee;

    char id[10],name[50],lastName[50],isEmpty[10];
    int i, cont=0;

    //FILE *pFile;
    pFile = fopen ("data.csv", "r");
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName, isEmpty);

    while(!feof(pFile))
    {
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName, isEmpty);
        //parser (Funcion q tb funciona, hay que estuadiarla)
            eEmployee.id= atoi(id);
            strcpy(eEmployee.name, name);
            strcpy(eEmployee.lastName, lastName);
            strcpy(eEmployee.isEmpty, isEmpty);


        cont++;
    }

   fclose(pFile);

   for(i=0; i<cont; i++)
   {
        printf("%d - %s - %s - %s\n", eEmployee[i].id, eEmployee[i].name, eEmployee[i].lastName, eEmployee[i].isEmpty);
   }

    return 0;
}

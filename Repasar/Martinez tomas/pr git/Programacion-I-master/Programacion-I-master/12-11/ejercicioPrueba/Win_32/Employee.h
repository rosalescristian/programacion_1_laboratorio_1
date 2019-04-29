#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr);
void employee_delete();

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this,int* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);

int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this,int* sueldo);

void employee_ListAnEmployee(Employee* employee);
int employee_editEmployeeName(Employee* employee);
int employee_editEmployeeHours(Employee* employee);
int employee_editEmployeeSalary(Employee* employee);
int employee_sortBySalary(void* first, void* second);
int employee_sortByName(void* first, void* second);
int employee_sortByHours(void* first, void* second);
int employee_sortById(void* first, void* second);




#endif // employee_H_INCLUDED

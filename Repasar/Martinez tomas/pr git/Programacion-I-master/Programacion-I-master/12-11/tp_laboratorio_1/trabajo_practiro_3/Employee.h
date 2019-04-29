#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

/** \brief search dynamics memory for an employee
 *
 * \return Employee* memory  address
 *
 */
Employee* employee_new();

/** \brief search dynamics memory for an employee and set data of them
 *
 * \param idStr char* value of ID
 * \param nombreStr char* name of employee
 * \param horasTrabajadasStr char* working hours of employee
 * \param sueldoStr char* salary of employee
 * \return Employee* employee with data
 *
 */
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr);

/** \brief delete and emloyee from the system
 *
 * \return void
 *
 */
void employee_delete();

/** \brief set id value in an employee
 *
 * \param this Employee* employee
 * \param id int value to set
 * \return int [0] error, [1] ok
 *
 */
int employee_setId(Employee* this,int id);

/** \brief get ID value of an employee
 *
 * \param this Employee* employee
 * \param id int* ID value
 * \return int [0] error, [1] ok
 *
 */
int employee_getId(Employee* this,int* id);

/** \brief set the name in an employee
 *
 * \param this Employee* employee
 * \param nombre char* name to set
 * \return int [0] error, [1] ok
 *
 */
int employee_setNombre(Employee* this,char* nombre);

/** \brief get the name of an employee
 *
 * \param this Employee* employee
 * \param nombre char* name gotten
 * \return int [0] error, [1] ok
 *
 */
int employee_getNombre(Employee* this,char* nombre);

/** \brief set the working hours in an employee
 *
 * \param this Employee* employee
 * \param horasTrabajadas int value to set
 * \return int [0] error, [1] ok
 *
 */
int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);

/** \brief get the working hours of an employee
 *
 * \param this Employee* employee
 * \param horasTrabajadas int* working hours gotten
 * \return int [0] error, [1] ok
 *
 */
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);

/** \brief set salary in an employee
 *
 * \param this Employee* employee
 * \param sueldo int value to set
 * \return int [0] error, [1] ok
 *
 */
int employee_setSueldo(Employee* this,int sueldo);

/** \brief get the salary of an employee
 *
 * \param this Employee* employee
 * \param sueldo int* salary gotten
 * \return int [0] error, [1] ok
 *
 */
int employee_getSueldo(Employee* this,int* sueldo);

/** \brief shoe one employee
 *
 * \param employee Employee* employee to show
 * \return void
 *
 */
void employee_ListAnEmployee(Employee* employee);

/** \brief change the name of an employee
 *
 * \param employee Employee* employee to edit
 * \return int
 *
 */
int employee_editEmployeeName(Employee* employee);

/** \brief change the working hours of an employee
 *
 * \param employee Employee* employee to edit
 * \return int
 *
 */
int employee_editEmployeeHours(Employee* employee);

/** \brief change the salary of an employee
 *
 * \param employee Employee* employee to edit
 * \return int
 *
 */
int employee_editEmployeeSalary(Employee* employee);

/** \brief analyze if one salary is bigger than other
 *
 * \param first void* first salary
 * \param second void* second salary
 * \return int [-1] les, [0] same, [1] higher
 *
 */
int employee_sortBySalary(void* first, void* second);

/** \brief analyze if one name is bigger than other
 *
 * \param first void* first name
 * \param second void* second name
 * \return int [-1] les, [0] same, [1] higher
 *
 */
int employee_sortByName(void* first, void* second);

/** \brief analyze if one working hours is bigger than other
 *
 * \param first void* first working hours
 * \param second void* second working hours
 * \return int [-1] les, [0] same, [1] higher
 *
 */
int employee_sortByHours(void* first, void* second);

/** \brief analyze if one ID is bigger than other
 *
 * \param first void* first ID
 * \param second void* second ID
 * \return int [-1] les, [0] same, [1] higher
 *
 */
int employee_sortById(void* first, void* second);




#endif // employee_H_INCLUDED

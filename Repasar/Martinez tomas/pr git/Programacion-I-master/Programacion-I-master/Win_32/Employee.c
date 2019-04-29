Employee* employee_new()
{

}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr)
{
    Employee* empleado;
    Employee = malloc(sizeof(Employee));
    if(empleado!=NULL)
    {
        empleado->idStr=idStr;
        strcpy(empleado->nombreStr, nombreStr);
        strcpy(empleado->horasTrabajadas, horasTrabajadasStr);
    }
return empleado;
}

int employee_setId(Employee* this,int id)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->id, id);
    }

    return estado;
}

int employee_getId(Employee* this,int* id)
{
    int* id = "";

    if(this != NULL)
    {
        id = this->id;
    }
    else{
        printf("Error en el programa");
    }

    return id;
}

int employee_setNombre(Employee* this,char* nombre)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->nombre, nombre);
    }

    return estado;
}

int employee_getNombre(Employee* this,char* nombre)
{
    char* nombre = "";

    if(this != NULL)
    {
        strcpy(nombre, this-> nombre);

    }
    else{

        printf("Error en el programa");
    }
    return nombre;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->horasTrabajadas, horasTrabajadas);
    }

    return estado;
}

int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
    int* horasTrabajadas = "";

    if(this != NULL)
    {
        horasTrabajadas = this-> horasTrabajadas;
    }
    else{
        printf("Error en el programa");
    }

    return horasTrabajadas;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->sueldo, sueldo);
    }

    return estado;
}

int employee_getSueldo(Employee* this,int* sueldo)
{
    int* sueldo = "";

    if(this != NULL)
    {
        sueldo = this-> sueldo;
    }
    else{
        printf("Error en el programa");
    }

    return sueldo;
}

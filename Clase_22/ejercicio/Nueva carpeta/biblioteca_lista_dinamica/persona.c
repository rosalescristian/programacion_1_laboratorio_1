
/**<  */
void persona_initLista(void)
{
    size = 10;
    index=0;
    lista = (Persona**)malloc(sizeof(Persona*)*size);
}

/**<  */
Persona.c
Persona* persona_newPersona(void)
{
    Persona* persona = (Persona*)malloc(sizeof(Persona));

    return persona;
}

/**<  */
void persona_addPersona(Persona* p)
{
    lista[index]=p;
    index++;
    if(index>=size)
    {
        printf("No hay mas lugar, redefinimos el array\r\n");
        size=size+10;
        lista = (Persona**)realloc(lista,sizeof(Persona*)*size);
    }
}

/**<  */
int persona_setEdad(Persona* pPersona, int edad)
{
    int retorno=1; // asigno el valor del error

    if(edad>0)
        {
            pPersona->edad = edad;
            retorno = 0; // OK
        }
        return retorno;
}

/**<  */
int persona_setName(Persona* pPersona, char* pName)
{
    int retorno=1; // asigno el valor del error

    if(strlen(pName)>3)
    {
        strcpy(pPersona->nombre,pName);
        retorno = 0;
    }
    return retorno;
}

/**<  */
void persona_toString(Persona* pPersona)
{
    printf("Nombre:%s – Edad:%d",pPersona->nombre,pPersona->edad);
}

/**<  */
int persona_getEdad(Persona* pPersona)
{
    return pPersona->edad;
}

/**<  */
char* persona_getNombre(Persona* pPersona)
{
    return pPersona->nombre;
}

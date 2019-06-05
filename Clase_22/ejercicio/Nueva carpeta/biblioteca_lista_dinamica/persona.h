
typedef struct{
    int edad;
    char nombre[20];
}Persona;

void persona_initLista(Persona* pPersona, int size, int index);
Persona* persona_newPersona(void);
int persona_setEdad(Persona* pPersona, int edad);
int persona_setName(Persona* pPersona, char* pName);
void persona_toString(Persona* pPersona);
int persona_getEdad(Persona* pPersona);
char* persona_getNombre(Persona* pPersona);
void persona_addPersona(Persona* p);




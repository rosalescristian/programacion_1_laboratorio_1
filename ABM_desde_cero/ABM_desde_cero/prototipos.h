typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
} Employee;

//Tomo datos
int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);


//Validaciones
int esNumerico(char str[]);
int esTelefono(char str[]);
int esAlfanumerico(char str[]);
int esSoloLetras(char str[]);

//Tomar datos
void getString(char mensaje[], char input[]);
int getStringLetras(char mensaje[], char input[]);
int gestStringNumeros(char mensaje[], char input[]);

//Arrays
void inicializarArray(int array[],int cantidad_elementos[], int valor);
void inicializarArrayEmpleados(Employee arrayEmpleados[],int cantidad_elementos[], int valor); // CON ESTRUCTURAS



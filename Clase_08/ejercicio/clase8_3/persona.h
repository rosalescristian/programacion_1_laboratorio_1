typedef struct{
    char apellido[31];
    char nombre[31];
    char sexo; // agregue esto, lo tengo q sumar al funcionamiento.
    int edad;
    int idnacionalidad; // un id unico para q el usuario elija la nacionalidad que va a estar predefinida. ESTO LO TENGO QUE CONSTRUIR EN OTRA ESTRUCTURA.
    int isEmpty;

}ePersona;

void alta( ePersona pers[], int cantidad );

void mostrarUno( ePersona per );

void mostrarTodos( ePersona pers[], int cantidad );

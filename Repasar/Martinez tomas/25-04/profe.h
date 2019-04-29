typedef struct
{
    char codigoDeBarra[13];
    char nombre[50];
    char fechaVencimiento[50];
    char proveedor[50];
    float precio;
    int estado;
    int id;

}eProducto;

eProducto pedirProducto();
void mostrarUnProducto(eProducto);
void cargarArray( int, eProducto[]);
void mostrarArray( int, eProducto[]);
void construirArray(int , eProducto[]);
int insertProducto(eProducto, eProducto[]);
int dameLugarLibre(eProducto[]);
int existeProducto(eProducto, eProducto[]);
int borrarProducto(eProducto, eProducto[]);
int editarProducto(eProducto, eProducto[]);




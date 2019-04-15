/* ESTE NO ANDA
struct ePersona{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;
};

struct ePersona per;

struct ePersona alta (ePersona per);

*/

typedef struct{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;
}ePersona;

ePersona alta (ePersona per);


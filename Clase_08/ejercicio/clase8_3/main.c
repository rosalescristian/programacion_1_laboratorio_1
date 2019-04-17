#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

#define CANT 3

int main(){
    ePersona pers[CANT];

    alta(pers, CANT);

    system("cls");

    mostrarTodos(pers, CANT);

    return 0;
}

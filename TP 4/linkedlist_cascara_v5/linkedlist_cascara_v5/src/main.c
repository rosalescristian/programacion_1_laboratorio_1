/*
    utest example : Unit test examples.
    Copyright (C) <2018>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../testing/inc/main_test.h"
#include "../inc/LinkedList.h"

//POR CADA FUNCION DESARROLLADA HAY QUE CORRER EL TESTIG DESCOMENTANDO
int main(void)
{
// NO VALIDAR LOS pElement en ninguna funcion.
        startTesting(1);  // ll_newLinkedList -- DESARROLLADA OK -- TEST 100%
        startTesting(2);  // ll_len -- DESARROLLADA OK -- TEST 100%
        startTesting(3);  // getNode - test_getNode -- DESARROLLADA OK -- TEST 100%
//      startTesting(4);  // addNode - test_addNode -- ESTA TIENE ROTO EL TEST
//      startTesting(5);  // ll_add
//      startTesting(6);  // ll_get
        startTesting(7);  // ll_set -- DESARROLLADA -- TEST 50%
//      startTesting(8);  // ll_remove
        startTesting(9);  // ll_clear -- DESARROLLADA -- TEST 33%
        startTesting(10); // ll_deleteLinkedList // DESARROLLADA OK - TEST 100%
//      startTesting(11); // ll_indexOf
        startTesting(12); // ll_isEmpty -- DESARROLLADA OK (Prueba 50% debe haber algo pendiente)
//      startTesting(13); // ll_push
//      startTesting(14); // ll_pop
//      startTesting(15); // ll_contains
//      startTesting(16); // ll_containsAll
//      startTesting(17); // ll_subList
//      startTesting(18); // ll_clone
//      startTesting(19); // ll_sort

    return 0;
}


































#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define SIZE 10

int main()
{
    int i;
    int array[] = {10,156,84,46,21,2,67,48,48,123};
    for (i=0; i<SIZE; i++) {
        printf("%d\n", array[i]);
    }

    insertionSort(array, SIZE);
    printf("\n\n");
    for (i=0; i<SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

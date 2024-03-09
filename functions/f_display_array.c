// Biblioteki IO
#include <stdio.h>
#include <windows.h>

#include "f_display_array.h"

void f_display_array(int array_in[], int size) {

    // Polskie znaki diakrytyczne
    SetConsoleOutputCP( 65001 );

    for (int j = 0; j < size; ++j)
        printf("Element numer %d - %d\n", j, array_in[j]);

}
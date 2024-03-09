// Biblioteki IO
#include <stdio.h>
#include <windows.h>

#include "f_user_input.h"

int f_user_input(int array_in_out[], int size) {

    // Polskie znaki diakrytyczne
    SetConsoleOutputCP( 65001 );

    int input_number = 0;

    for (int i = 0; i < size; ++i) {

        printf("Podaj element %d: ", i);

        if (scanf("%d", &input_number) != 1) {
            printf("TO NIE JEST LEGALNE!");
            return 0;
        }

        array_in_out[i] = input_number;
        printf("\n");
    }

    return 1;

}
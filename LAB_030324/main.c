// Biblioteki IO
#include <stdio.h>
#include <windows.h>

// Funkcje
#include "functions/f_display_array.h"
#include "functions/f_user_input.h"

// Biblioteka
#include "simple_math/simple_math.h"

// Wielkość tablicy
#define SIZE 10

int main() {

    // Polskie znaki diakrytyczne
    SetConsoleOutputCP( 65001 );

    // Definicja tablicy
    int array[SIZE];

    printf("Program wyświetli wartość maksymalną, minimalną oraz średnią z podanej tablicy.\n\n");

    // Pobieranie tablicy od użytkownika
    if (f_user_input(array, SIZE) == 0)
        return 0;

    printf("\nOto Twoja tablica:\n");

    // Wyświetlanie tablicy
    f_display_array(array, SIZE);

    printf("Największa liczba: %d\n", f_max(array, SIZE));
    printf("Najmniejsza liczba: %d\n", f_min(array, SIZE));
    printf("Średnia: %f\n", (float) f_mean(array, SIZE));

    return 0;
}

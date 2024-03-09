// Biblioteki IO
#include <stdio.h>
#include <windows.h>

// Funkcje
#include "functions/f_display_array.h"
#include "functions/f_user_input.h"

// Biblioteka
#include "simple_math/simple_math.h"

struct array_ans {
    double mean;
    int max;
    int min;
};

int main() {

    // Polskie znaki diakrytyczne
    SetConsoleOutputCP(65001);

    int test_var = 1;

    printf("Witaj świecie!\n");
    printf("1 2 3 4 5 6 7 8 9\n");
    printf("ą, ć, ę, ł, ń, ó, ś, ż, ź\n");
    printf("%d\n", test_var);

    printf("----------\n");

    printf("Testy matematyki:\n");

    struct array_ans ans_array_1, ans_array_2, ans_array_3, ans_array_4, ans_array_5;

    int test_array_1[10] = {18, -75, -18, 22, 37, 59, -98, -37, -9, 60};
    int test_array_2[10] = {-82, -50, 72, 13, -8, -7, 67, -57, 66, 38};
    int test_array_3[10] = {-427422, -990878, -198335, 558898, -980074, -215731, -270143, -430035, 68658, -667606};
    int test_array_4[10] = {-798202800, -557176326, -801061079, 411006591, 757632799, -382859893, -178064922,
                            -861585626, -874264840, 110097233};
    int test_array_5[100] = {220562305, 410543039, -324823526, 725167992, -803521743, 77995940, -651071419, 241225541,
                             275254039, 109076832, 967002076, 999500193, -921532988, 802887015, -985389537, -496227107,
                             -309490760, 817576175, 943852121, -320554279, -365368919, 535274017, 607656263, 525958067,
                             38272259, 875765593, -979576493, -739381276, 672705716, -770165278, 200501395, 322280791,
                             79147546, -15475161, 152606461, -22145022, 562246880, 692625730, 296933784, 785146271,
                             696526197, 566544726, 962856249, 712789788, 11990219, 13827933, -925822997, -65731702,
                             927481764, -64340371, 842318207, -15875237, -223640607, 874645492, 673044935, 361650882,
                             -734391050, -442883975, 475473742, -596253188, -650357990, 617654369, -25043568,
                             -954336942, -308800396, 421056346, 532836657, -868418290, 535539730, -430602658, 2058869,
                             196674728, -657447078, 325497910, -799200842, -237815174, -476310751, 340852077, 325017741,
                             -505163978, 25333512, -333663886, -200717819, 911605379, -512666011, 285630756, 137099188,
                             72676785, 956917897, 909956013, 711564545, 969244823, -4286252, -261160439, -776610325,
                             891357206, -758707452, -115986999, -345818310, 406394343};
    int test_array_6[10];

    // WYNIKI 1:
    // - Średnia: -4.1
    // - MIN: -98
    // - MAX: 60

    ans_array_1.mean = -4.1;
    ans_array_1.min = -98;
    ans_array_1.max = 60;

    // WYNIKI 2:
    // - Średnia: 5.2
    // - MIN: -82
    // - MAX: 72

    ans_array_2.mean = 5.2;
    ans_array_2.min = -82;
    ans_array_2.max = 72;

    // WYNIKI 3:
    // - Średnia: -355266.8
    // - MIN: -990878
    // - MAX: 558898

    ans_array_3.mean = -355266.8;
    ans_array_3.min = -990878;
    ans_array_3.max = 558898;

    // WYNIKI 4:
    // - Średnia: -317447886.3
    // - MIN: -874264840
    // - MAX: 757632799

    ans_array_4.mean = -317447886.3;
    ans_array_4.min = -874264840;
    ans_array_4.max = 757632799;

    // WYNIKI 5:
    // - Średnia: 96351052.54
    // - MIN: -985389537
    // - MAX: 999500193

    ans_array_5.mean = 96351052.54;
    ans_array_5.min = -985389537;
    ans_array_5.max = 999500193;

    // Użyte narzędzie: https://www.calculatorsoup.com/calculators/statistics/mean-median-mode.php

    // ŚREDNIE

    if (f_mean(test_array_1, 10) == ans_array_1.mean) {
        printf("ŚREDNIA 1: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! ŚREDNIA 1: NPASS!\n");
        printf("Odpowiedź funkcji: %f, wymagana wartość: %f\n", f_mean(test_array_1, 10), ans_array_1.mean);
    }

    if (f_mean(test_array_2, 10) == ans_array_2.mean) {
        printf("ŚREDNIA 2: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! ŚREDNIA 2: NPASS!\n");
        printf("Odpowiedź funkcji: %f, wymagana wartość: %f\n", f_mean(test_array_2, 20), ans_array_2.mean);
    }

    if (f_mean(test_array_3, 10) == ans_array_3.mean) {
        printf("ŚREDNIA 3: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! ŚREDNIA 3: NPASS!\n");
        printf("Odpowiedź funkcji: %f, wymagana wartość: %f\n", f_mean(test_array_3, 30), ans_array_3.mean);
    }

    if (f_mean(test_array_4, 10) == ans_array_4.mean) {
        printf("ŚREDNIA 4: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! ŚREDNIA 4: NPASS!\n");
        printf("Odpowiedź funkcji: %f, wymagana wartość: %f\n", f_mean(test_array_4, 40), ans_array_4.mean);
    }

    if (f_mean(test_array_5, 100) == ans_array_5.mean) {
        printf("ŚREDNIA 5: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! ŚREDNIA 5: NPASS!\n");
        printf("Odpowiedź funkcji: %f, wymagana wartość: %f\n", f_mean(test_array_5, 50), ans_array_5.mean);
    }

    // MIN

    if (f_min(test_array_1, 10) == ans_array_1.min) {
        printf("MIN 1: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! MIN 1: NPASS!\n");
        printf("Odpowiedź funkcji: %d, wymagana wartość: %d\n", f_min(test_array_1, 10), ans_array_1.min);
    }

    if (f_min(test_array_2, 10) == ans_array_2.min) {
        printf("MIN 2: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! MIN 2: NPASS!\n");
        printf("Odpowiedź funkcji: %d, wymagana wartość: %d\n", f_min(test_array_2, 20), ans_array_2.min);
    }

    if (f_min(test_array_3, 10) == ans_array_3.min) {
        printf("MIN 3: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! MIN 3: NPASS!\n");
        printf("Odpowiedź funkcji: %d, wymagana wartość: %d\n", f_min(test_array_3, 30), ans_array_3.min);
    }

    if (f_min(test_array_4, 10) == ans_array_4.min) {
        printf("MIN 4: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! MIN 4: NPASS!\n");
        printf("Odpowiedź funkcji: %d, wymagana wartość: %d\n", f_min(test_array_4, 40), ans_array_4.min);
    }

    if (f_min(test_array_5, 100) == ans_array_5.min) {
        printf("MIN 5: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! MIN 5: NPASS!\n");
        printf("Odpowiedź funkcji: %d, wymagana wartość: %d\n", f_min(test_array_5, 50), ans_array_5.min);
    }

    // MAX

    if (f_max(test_array_1, 10) == ans_array_1.max) {
        printf("MAX 1: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! MAX 1: NPASS!\n");
        printf("Odpowiedź funkcji: %d, wymagana wartość: %d\n", f_max(test_array_1, 10), ans_array_1.max);
    }

    if (f_max(test_array_2, 10) == ans_array_2.max) {
        printf("MAX 2: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! MAX 2: NPASS!\n");
        printf("Odpowiedź funkcji: %d, wymagana wartość: %d\n", f_max(test_array_2, 20), ans_array_2.max);
    }

    if (f_max(test_array_3, 10) == ans_array_3.max) {
        printf("MAX 3: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! MAX 3: NPASS!\n");
        printf("Odpowiedź funkcji: %d, wymagana wartość: %d\n", f_max(test_array_3, 30), ans_array_3.max);
    }

    if (f_max(test_array_4, 10) == ans_array_4.max) {
        printf("MAX 4: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! MAX 4: NPASS!\n");
        printf("Odpowiedź funkcji: %d, wymagana wartość: %d\n", f_max(test_array_4, 40), ans_array_4.max);
    }

    if (f_max(test_array_5, 100) == ans_array_5.max) {
        printf("MAX 5: PASS!\n");
    } else {
        printf("!!!BŁĄD!!! MAX 5: NPASS!\n");
        printf("Odpowiedź funkcji: %d, wymagana wartość: %d\n", f_max(test_array_5, 50), ans_array_5.max);
    }

    printf("----------\n");

    printf("Testy wejścia:\n");

    if (f_user_input(test_array_6, 10) == 0)
        return 0;

    printf("Testy wyjścia:\n");

    f_display_array(test_array_6, 10);

    printf("----------\n");

    return 0;

}
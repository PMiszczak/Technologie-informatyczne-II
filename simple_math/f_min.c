#include "../simple_math/simple_math.h"

int f_min(const int array_in[], int size) {

    int min = array_in[0];

    for (int k = 0; k < (size-1); ++k)
        if (array_in[k + 1] < min)
            min = array_in[k + 1];


    return min;
}
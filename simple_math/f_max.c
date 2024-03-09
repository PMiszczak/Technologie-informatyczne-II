#include "../simple_math/simple_math.h"

int f_max(const int array_in[], int size) {

    int max = array_in[0];

    for (int j = 0; j < (size-1); ++j)
        if (array_in[j + 1] > max)
            max = array_in[j + 1];

    return max;
}
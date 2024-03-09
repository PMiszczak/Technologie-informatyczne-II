#include "../simple_math/simple_math.h"

double f_mean(const int array_in[], int size) {

    // double ze względu, że nawet przy long int był overflow.
    double sum = 0;

    for (int k = 0; k < size; ++k)
        sum += array_in[k];

    return sum / size;

}
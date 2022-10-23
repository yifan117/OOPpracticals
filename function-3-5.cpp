#include <iostream>
using namespace std;

double sum_even(double array[], int n);

double sum_even(double array[], int n){

    double total = 0;

    for (int i = 0; i < n; i++) {

        if ((i % 2 == 0) || (i == 0)) {
            total += array[i];
        }
    }

    if (n < 1) {
        total = 0;
    }

    return total;
}
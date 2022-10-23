#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits);
int binary_to_int(int binary_digits[], int number_of_digits) {

    int total = 0;

    for (int i = 0; i < number_of_digits; i++) {
        total = 2 * total + binary_digits[i];
    }

    return (total);
}
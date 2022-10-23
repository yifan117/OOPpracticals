#include <iostream>
using namespace std;

int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int array_min(int integers[], int length) {

    int tempmin = integers[0];

    for (int i = 0; i < length; i++) {

        if (integers[i] < tempmin) {
            tempmin = integers[i];
        }

    }

    if (length <= 0) {
        tempmin = -1;
    }

    return tempmin;
}

int array_max(int integers[], int length) {

        int tempmax = integers[0];

    for (int i = 0; i < length; i++) {

        if (integers[i] > tempmax) {
            tempmax = integers[i];
        }

    }

    if (length <= 0) {
        tempmax = -1;
    }

    return tempmax;
}

int sum_min_max(int integers[], int length) {
    int total;
    int min = array_min(integers, length);
    int max = array_max(integers, length);

    total = min + max;

    if (length <= 0) {
        total = -1;
    }

    return total;
}

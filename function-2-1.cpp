#include <iostream>
using namespace std;

int min_element(int array[], int n);

int min_element(int array[], int n){

    int min;

    for (int i = 0; i < n; i++){

        min = array[i];

        for (int j = 0; j < n; j++){

        if (array[j] < min) {
            min = array[j];
        }
    }

    }

    if (n < 1) {
        min = 0;
    }

    return min;
}
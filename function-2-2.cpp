#include <iostream>
using namespace std;

int max_element(int array[], int n);

int max_element(int array[], int n){

    int max;

    for (int i = 0; i < n; i++){

        max = array[i];

        for (int j = 0; j < n; j++){

        if (array[j] > max) {
            max = array[j];
        }
    }

    }

    if (n < 1) {
        max = 0;
    }

    return max;
}
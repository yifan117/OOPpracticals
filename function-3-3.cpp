#include <iostream>
using namespace std;

double weighted_average(int array[], int n);

double weighted_average(int array[], int n) {

    double total = 0.0;

    for (int i = 0; i < n; i++) {

        double count = 0.0;

        for (int j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                count += 1.0;
            }
        }

        total += array[i] * count / n;
        
    }

    if (n < 1) {
        total = 0;
    }

    return total;
}

// go through array and count how many time each number occurs
// array[i] * frequency / n

// loop2:
// 
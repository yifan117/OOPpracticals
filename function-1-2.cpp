#include <iostream>
using namespace std;

double array_mean(int array[], int n);

double array_mean(int array[], int n){

    double average = 0.0;

    double total = 0;

    for (int i = 0; i < n; i++){
        total += array[i];
    }

    if (n < 1){
        average = 0.0;
    } else if (n >= 1){
        average = total/n;
    }

    return average;
}
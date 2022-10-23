#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n);

int sum_two_arrays(int array[], int secondarray[], int n){

    int total1 = 0;
    int total2 = 0;
        for (int i = 0; i < n; i++){
            total1 += array[i];
            total2 += secondarray[i];
        }

    int overall = total1 + total2;
        
        if (n < 1){
        overall = 0;
        }

        return overall;
}
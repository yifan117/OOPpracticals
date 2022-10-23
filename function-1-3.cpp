#include <iostream>
using namespace std;

int num_count(int array[], int n, int number);

int num_count(int array[], int n, int number){

    int count = 0;

    for (int i = 0; i < n; i++){

        if (array[i] == number){
            count += 1;
        }

    }

    if (n < 1){
    count = 0;
    }

    return count;
}
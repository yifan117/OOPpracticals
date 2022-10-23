#include <iostream>
using namespace std;

int count_evens(int number);

int count_evens(int number){
    int counter = 0;

    for (int i = 1; i <= number; i++){
        if (i % 2 == 0){
            counter += 1;
        }
    }

    if (number < 1){
    counter = 0;
    }   
    
    return counter;
}
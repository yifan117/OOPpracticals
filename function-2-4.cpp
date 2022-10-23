#include <iostream>
using namespace std;

bool is_ascending(int array[], int n);

bool is_ascending(int array[], int n){
        
    bool outcome = true;

    for (int i = 0; i < (n-1); i++) {

        if (array[i] <= array[i+1]) {
            outcome = true;
        } else {
            outcome = false;
            break;
        }
    }

    return outcome;

}
// 2 3 1 5 4
// 2 6 1 2 5
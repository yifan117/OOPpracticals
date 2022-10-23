#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n);

bool is_fanarray(int array[], int n) {

    int middlepos;
    bool outcome = true;
    double middleposodd;


    if (n % 2 != 0) { // 0 1 2 - 2 1 0 middlepos = 4

        double nd = (double) n;
        double middleposodd = (nd / 2) + 0.5;
        int middleposarray = (int) middleposodd;


        for (int i = 0; i < (middleposarray - 1); i++) {

            if ((array[i] < array[i+1])) {
                outcome = true;
            } else {
                outcome = false;
                break;
            }
        }

        for (int j = (middleposarray - 1); j < n - 1; j++) { // 0 1 2 3 2 1 0 middlepos = 4
            
            if ((array[j] > array[j+1]) && (array[(middleposarray - 1)] > array[(middleposarray - 2)])) {
                outcome = true;
            } else {
                outcome = false;
                break;
            }
        }
    }
    
    else if (n % 2 == 0) { // 0 1 - - 1 0

        middlepos = n / 2;

        for (int i = 0; i < (middlepos); i++) {

            if ((array[i] < array[i+1]) && (array[middlepos - 1] > array[middlepos - 2])) {
                outcome = true;
            } else {
                outcome = false;
                break;
            }
        }

        for (int j = (middlepos); j < (n - 1); j++) {
            
            if ((array[j] > array[j+1]) && (array[middlepos - 1] > array[middlepos - 2]) && (array[middlepos - 1] == array[middlepos])) {
                outcome = true;
            } else {
                outcome = false;
                break;
            }
        }
    }

    if (n < 1) {
        outcome = false;
    }

    return outcome;

}

/*

fan array:
1 2 3 3 2 1

1 2 3 2 1

i i+1 i+1+1 i+1+

just need to go through code and make sure position for middlepos is right, might need +/- 1.

*/
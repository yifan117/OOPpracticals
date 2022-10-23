#include <iostream>
using namespace std;

void two_five_nine(int array[], int n);

void two_five_nine(int array[], int n){

    int twocount = 0;
    int fivecount = 0;
    int ninecount = 0;
    int dump = 0;

    for (int i = 0; i < n; i++){

        int testnum = array[i];

        switch (testnum) {
            case 2: 
            twocount += 1;
            break;

            case 5:
            fivecount += 1;
            break;
            
            case 9:
            ninecount += 1;
            break;

            default:
            dump += 0;
            break;
        }
    }

    cout << "2" << ":" << twocount << ";" << "5" << ":" << fivecount << ";" << "9" << ":" << ninecount << ";" << endl;
}


// loop through array
// switch statement: checks for match
// case 2: twocount += 1
// case 5: fivecount += 1
// case 9: ninecount += 1
// default: twocount += 0
// break
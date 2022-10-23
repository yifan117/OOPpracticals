#include <iostream>
using namespace std;

void print_summed(int array1[3][3],int array2[3][3]);

void print_summed(int array1[3][3],int array2[3][3]) {

    int result[3][3];

    for (int i = 0; i < 3; i++) {

        bool first = true;

        for (int j = 0; j < 3; j++) {

            if (!first) {
                
                cout << " ";

            }

            result[i][j] = array1[i][j] + array2[i][j];

            cout << result[i][j];

            first = false;
        }
        cout << "\n";
    }  
}


/*

0 1 2 00 01 02
3 4 5 10 11 12
6 7 8 20 21 22

 0  0 0
 2  2 2 
-5 -4 8

*/
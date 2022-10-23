#include <iostream>
#include <vector>
using namespace std;

void print_scaled(int array[3][3],int scale);

void print_scaled(int array[3][3],int scale) {

    for (int i = 0; i < 3; i++) {

        bool first = true;

        for (int j = 0; j < 3; j++) {

            if (!first) {

                cout << " ";

            }

            cout << (array[i][j]) * scale;

            first = false;
        }
        cout << "\n";
    }
}

/*

1 2 3 00 01 02
4 5 6
7 8 9

*/
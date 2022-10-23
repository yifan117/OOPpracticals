#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main () {

    int binary[4] = {1,0,1,1};

    cout << binary_to_int(binary, 4);

    return 0;
}
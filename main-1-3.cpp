#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main () {

    int marray[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,7,9},{4,6,5,7}};

    count_digits(marray);

    return 0;
}
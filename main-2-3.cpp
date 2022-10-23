#include <iostream>
using namespace std;

extern void two_five_nine(int array[], int n);

int main (){

    int array[5] = {1,2,6,2,8};
    two_five_nine(array, 5);

    return 0;
}
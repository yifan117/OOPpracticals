#include <iostream>
using namespace std;

extern double sum_even(double array[], int n);

int main (){

    double array[5] = {1,2,6,2,8};
    cout << sum_even(array, 5) << endl;

    return 0;
}
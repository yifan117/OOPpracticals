#include <iostream>
using namespace std;

extern double array_mean(int array[], int n);

int main (){

    int array[5] = {5,5,6,9,8};
    cout << "The average is: " << array_mean(array, 5) << endl;

    return 0;
}
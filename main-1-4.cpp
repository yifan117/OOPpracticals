#include <iostream>
using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main (){

    int array[5] = {1,2,6,2,8};
    int secondarray[5] = {2,4,6,8,10};
    cout << "The sum of the two arrays is: " << sum_two_arrays(array, secondarray, 5) << endl;

    return 0;
}
#include <iostream>
using namespace std;

extern int array_sum(int[], int);

int main (){

    int array[5] = {1,2,3,4,5};
    cout << "The sum is: " << array_sum(array, 0) << endl;

    return 0;
}
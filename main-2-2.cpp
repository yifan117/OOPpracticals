#include <iostream>
using namespace std;

extern int max_element(int array[], int n);

int main (){

    int array[5] = {1,2,6,2,8};
    cout << "The maximum number in the array: " << max_element(array, 5) << endl;

    return 0;
}
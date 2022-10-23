#include <iostream>
using namespace std;

extern int min_element(int array[], int n);

int main (){

    int array[5] = {1,2,6,2,8};
    cout << "The minimum number in the array: " << min_element(array, 5) << endl;

    return 0;
}
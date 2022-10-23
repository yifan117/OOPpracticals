#include <iostream>
using namespace std;

extern int median_array(int array[], int n);

int main (){

    int array[6] = {2,2,1,4,1,3};
    cout << median_array(array, 6) << endl;

    return 0;
}
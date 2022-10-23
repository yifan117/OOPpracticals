#include <iostream>
using namespace std;

extern int num_count(int array[], int n, int number);

int main (){

    int array[5] = {1,2,6,2,8};
    cout << "The total count of the desired number is: " << num_count(array, 5, 2) << endl;

    return 0;
}
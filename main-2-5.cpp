#include <iostream>
using namespace std;

extern bool is_descending(int array[], int n);

int main (){

    int array[5] = {1,2,6,2,8};
    cout << boolalpha << is_descending(array, 5);

    return 0;
}
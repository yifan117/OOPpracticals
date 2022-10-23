#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);
int main (){

    int array[7] = {1,2,4,6,4,2,1}; // middlenum - 1 > middlenum - 2 && middlenum - 1 > middlenum
    cout << boolalpha << is_fanarray(array, 7) << endl;

    return 0;
}
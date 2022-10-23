#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main () {

    int n,m;
    int marray[4][4] = {{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}};
    cout << "Diagonal sum top left to bottom right = " << sum_diagonal(marray);
    return 0;
}
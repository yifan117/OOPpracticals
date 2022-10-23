#include <iostream>
using namespace std;

extern int count_evens(int number);

int main (){

    int numinput;
    cin >> numinput;

    cout << "total number of even numbers is: " << count_evens(numinput) << endl;

    return 0;
}

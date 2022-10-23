#include <iostream>

using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main () {

    int n = 0;
    int array[6] = {1,5,9,9,1,1};

    cout << sum_if_palindrome(array, n);

    return 0;
}
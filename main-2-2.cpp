#include <iostream>

using namespace std;

extern int max_sub_sum(int *nums,int length);

int main () {

    int a[] = {31, -41, 59, 26, -53, 58, 97, -93, -23, 84};
    int length = 10;
    int *nums = a;

    cout << max_sub_sum(nums, length) << endl;
}
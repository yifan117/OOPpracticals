#include <iostream>

using namespace std;

extern void multiples_of_seven(int *nums,int length);

int main () {

    int *nums;

    int arr[] = {7,2,3,12,14};

    nums = arr;

    int length = 5;

    multiples_of_seven(nums, length);
}
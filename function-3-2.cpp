#include <iostream>
using namespace std;

int median_array(int array[], int n);

int median_array(int array[], int n) {

    int temp;
    int middle;
    int middlenum;

    for (int i = 0; i < n; i++) {

        for (int j = i; j < n; j++)

            if (array[i] >= array[j]) {

                temp = array[i];

                array[i] = array[j];

                array[j] = temp;
            }
    }

    if (n % 2 == 1) {
        middle = n / 2 + 0.5;
        
        middlenum = array[middle];

    } else if (n % 2 == 0) {
        
        middlenum = 0;
    }


    return middlenum;
}


/* Given an array of integers and its length, return the median of the array. 
The median of a list is the middle number of the sorted list. E.g. 
the array {3,5,2,1,4} after sorting becomes {1,2,3,4,5} which has a median of 3. 
The function must return 0 if the size parameter, n, is even or if it is less than 1.

1. SORT LIST
2. find middle of list:
    if n % 2 == 1
        middle = n/2 + 0.5
    else if n % 2 == 0
        middle = (n/2 + (n/2) + 1) / 2

*/

/* else if (n % 2 == 0) {
        middle = (n / 2 + (n / 2) + 1) / 2;
    }
THIS WORKS FOR EVEN NUMBERS TOO
*/

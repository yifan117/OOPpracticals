#include <iostream>

using namespace std;

bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

bool is_palindrome(int integers[], int length) {

    bool outcome = false;
    int middlepos;

    if (length % 2 != 0) {

        middlepos = length / 2;

        int j = length - 1;

        for (int i = 0; i < middlepos; i++) {

            if (integers[i] == integers[j]) {
                outcome = true;
                j--;
            } else if (integers[i] != integers[j]) {
                outcome = false;
                break;
            }

        }
    }

    else if (length % 2 == 0) {

        middlepos = length / 2;

        int j = length - 1;

        for (int i = 0; i < middlepos - 1; i++) {

            if (integers[i] == integers[j]) {
                outcome = true;
                j--;
            } else if (integers[i] != integers[j]) {
                outcome = false;
                break;
            }
        }

        if (integers[middlepos] != integers[middlepos - 1]) {
            outcome = false;
        }
    }

    if (length <= 0) {
        outcome = false;
    }

    return outcome;
}

int sum_array_elements(int integers[], int length) {

    int total = 0;

    for (int i = 0; i < length; i++) {
        total += integers[i];
    }

    if (length <= 0) {
        total = -1;
    }

    return total;
}

int sum_if_palindrome(int integers[], int length) {

    int sum = sum_array_elements(integers, length);
    bool is = is_palindrome(integers, length);

    if (is == false) {
        sum = -2;
    }

    if (length <= 0) {
        sum = -1;
    }

    return sum;
}

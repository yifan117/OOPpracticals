#include <iostream>
using namespace std;

int main() {

    int array[5] = {4, 1, 4, 2, 3};
    int temp;
    int n = 5;

    for (int i = 0; i < n; i++) {

        for (int j = i; j < n; j++)

            if (array[i] >= array[j]) {

                temp = array[i];

                array[i] = array[j];

                array[j] = temp;
            }
    }

    for (int k = 0; k < n; k++) {
        cout << array[k];
    }

    return 0;
}
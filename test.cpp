#include <iostream>

using namespace std;

int main () {

    int a[] = {1, 2, -3, 4, -1};
    int n = 5;
    int temp = 0;

    for (int i = 0; i < n; i++) {

        int tot = a[i];

        for (int j = (i + 1); j < n; j++) {

            tot += a[j];

            if (tot > temp) {

                temp = tot;

                break;
            }
        }
    }

    cout << temp << endl;

    return 0;
}
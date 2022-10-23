#include <iostream>

using namespace std;

int max_sub_sum(int *nums,int length) {

    int temp = 0;

    bool is_negative = true;

    for (int i = 0; i < length; i++) {

        int tot = *(nums + i);

        for (int j = (i + 1); j < length; j++) {

            tot += *(nums + j);

            if (tot > temp) {

                temp = tot;

                break;
            }
        }

        if (tot > temp) {

            temp = tot;

            break;
        }
    }

    for (int k = 0; k < length; k++) {

        if ((*(nums + k)) >= 0) {

            is_negative = false;

            break;
        }
    }

    if ((length < 1) || (is_negative == true)) {
        
        temp = 0;

    }

    return temp;
}
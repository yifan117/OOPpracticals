#include <iostream>
using namespace std;

void count_digits(int array[4][4]);

void count_digits(int array[4][4]) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            if (array[i][j] == 0) {
                count0 += 1;
            } else if (array[i][j] == 1) {
                count1 += 1;
            } else if (array[i][j] == 2) {
                count2 += 1;
            } else if (array[i][j] == 3) {
                count3 += 1;
            } else if (array[i][j] == 4) {
                count4 += 1;
            } else if (array[i][j] == 5) {
                count5 += 1;
            } else if (array[i][j] == 6) {
                count6 += 1;
            } else if (array[i][j] == 7) {
                count7 += 1;
            } else if (array[i][j] == 8) {
                count8 += 1;
            } else if (array[i][j] == 9) {
                count9 += 1;
            }
        }
    }

    cout << "0:" << count0 << ";1:" << count1 << ";2:" << count2 << ";3:" << count3 << ";4:" << count4 << ";5:" << count5 << ";6:" << count6 << ";7:" << count7 << ";8:" << count8 << ";9:" << count9 << ";" << endl;

}
#include <iostream>
#include <cstdlib>
using namespace std;

int sum_diagonal(int array[4][4]);
int sum_diagonal(int array[4][4]) {

    int total = 0;

    for (int i = 0; i < 4; i++)
        total += array[i][i];

    return total;
}


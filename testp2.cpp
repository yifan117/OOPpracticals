#include <iostream>
using namespace std;

int main () {

    int length = 5;
    double middlepos = 0.0;
    int intmiddlepos = 0;


    if (length % 2 != 0) {

        double dlength = (double) length;

        intmiddlepos = length / 2;
    }

    intmiddlepos += 1;
    cout << intmiddlepos;


    return 0;
}
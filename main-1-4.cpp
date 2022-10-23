#include <iostream>

using namespace std;

extern void copy_doubles(double *old_array,double *new_array,int length);

int main () {

    double aold_array[] = {1.0,2.0,3.0};
    double anew_array[] = {};

    double *old_array = aold_array;
    double *new_array = anew_array;

    int length = 3;

    copy_doubles(old_array, new_array, length);

}
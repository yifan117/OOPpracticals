#include <iostream>

extern void copy_integers(int old_array[],int new_array[],int length);

int main () {

    int old_array[] = {1,2,3};
    int new_array[] = {};
    int length = 3;
    
    copy_integers(old_array, new_array, length);
}
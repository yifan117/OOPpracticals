#include <iostream>
#include <cstdlib>
using namespace std;

extern void print_pass_fail(char grade);

int main (){

    char mgrade = 'A';

    print_pass_fail(mgrade);

    return 0;
}
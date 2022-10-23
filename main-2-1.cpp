#include "Wagon.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef WAGON_H
#define WAGON_H

using namespace std;

int main () {

    Capybara one;
    Capybara two;
    Capybara three;
    Capybara four;
    Capybara five;

    Wagon first;

    first.addCapybara(one);
    first.addCapybara(two);
    first.addCapybara(three);
    first.addCapybara(four);

    first.addCapybara(five);

    first.printCapybaras();


    // one.setName("onetest");

    // Wagon first();

    // first.addCapybara(one.newCapy("ONE"));
    
}

#endif

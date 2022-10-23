#include <iostream>
#include "Wagon.h"
#include <vector>
#include <algorithm>

using namespace std;

#ifndef WAGON_H
#define WAGON_H

Wagon::Wagon() {}

bool Wagon::addCapybara(Capybara newCapy) {

    if (capys.size() < 4) {
        capys.push_back(newCapy);
        bool full = false;

    } else if (capys.size() >= 4) {

        bool full = true;
        
        cout << "oops cannot add capybara: " << newCapy.name << " of age " << newCapy.age << endl;
    }

    return full;
}

void Wagon::emptyWagon() {

    capys.clear();
}

void Wagon::printCapybaras() {

    for (int i = 0; i < capys.size(); i++) {

        cout << capys[i].name << " " << capys[i].age << endl;
    }

}

#endif

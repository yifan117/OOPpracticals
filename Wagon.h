#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Capybara.h"

using namespace std;

class Wagon {

public:
    string cname;
    bool full;
    vector<Capybara> capys = {};
    int count = 0;
    Wagon();                               // create an empty wagonobject
    bool addCapybara(Capybara newCapy);    // adds a Capybara to the wagon, returns false if full
    void emptyWagon();                     // remove all Capybaras from the wagon
    void printCapybaras();                 // print the name, a space, the age, then a new line
                                        // for each capybara in the order they were added
};
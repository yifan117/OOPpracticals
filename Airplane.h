#include <iostream>
#include "Person.h"
#include <string>
#include <vector>
#include <algorithm>
#pragma once

using namespace std;

class Airplane {
public:
    string call;
    string pilot;
    string copilot;
    Person ppilot;
    Person pcopilot;
    // a pilot and copilot must be provided when creating an airplane

    Airplane(string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);      // change the pilot
    Person getPilot();
    void setCoPilot(Person theCoPilot);  // change the co-pilot
    Person getCoPilot();
    void printDetails();                 // print the callsign, a new line, the pilot name,
                                        // a new line, the co-pilot name and a final newline.

};

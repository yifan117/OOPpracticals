#include <iostream>
#include "Airplane.h"
#include <vector>
#include <algorithm>

using namespace std;



Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot)
    : call(callsign), ppilot(thePilot), pcopilot(theCoPilot) {}

void Airplane::setPilot(Person thePilot) {      // change the pilot

    ppilot = thePilot;
    pilot = ppilot.name;
}

Person Airplane::getPilot() {

    return ppilot;
    // return thePilot.name;

}

void Airplane::setCoPilot(Person theCoPilot) {  // change the co-pilot

    pcopilot = theCoPilot;
    copilot = pcopilot.name;
}

Person Airplane::getCoPilot(){

    return pcopilot;
}

void Airplane::printDetails(){

    cout << call << "\n" << ppilot.name << "\n" << pcopilot.name << endl;

}                // print the callsign, a new line, the pilot name,
                                    // a new line, the co-pilot name and a final newline.


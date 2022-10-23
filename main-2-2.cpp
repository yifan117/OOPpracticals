#include <iostream>
#include "Airplane.h"
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main () {
    Person test1(100, "chris");
    Person test2(200, "tom");
    Person test3(300, "mark");

    Airplane first("alpha", test1, test2);

    first.printDetails();

    first.setPilot(test3);
    first.setCoPilot(test1);

    cout << first.getPilot().name << endl;
    cout << first.getCoPilot().name << endl;
    first.printDetails();
}


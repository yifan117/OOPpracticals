#include <iostream>
#include "Capybara.h"

Capybara::Capybara(){}

void Capybara::setName(string capyName) {

    name = capyName;

}

string Capybara::getName() {

    return name;

}

void Capybara::setAge(int capyAge) {

    age = capyAge;

}     // change the capybara's age

int Capybara::getAge() {

    return age;
}

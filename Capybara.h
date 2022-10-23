#include <string>

using namespace std;

class Capybara {   

public:
    string name;
    int age;
    Capybara();
    void setName(string capyName);   // change the capybara's name
    string getName();
    void setAge(int capyAge);        // change the capybara's age
    int getAge();

};
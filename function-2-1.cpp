#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void print_binary_str(std::string decimal_number);
void print_binary_str(std::string decimal_number) {

    int INTdecimal_number = stoi(decimal_number);

    vector<int> a;

    int temp;
    
    for (int i = 0; INTdecimal_number != 0; i++) {

        temp = INTdecimal_number % 2;
        a.push_back(temp);

        INTdecimal_number /= 2;

    }

    reverse(a.begin(), a.end()); // reverses vector so LSB is at the end and MSB at the front

    for (int k = 0; k < a.size(); k++) {
        cout << a[k];
    }

    cout << "\n";


}
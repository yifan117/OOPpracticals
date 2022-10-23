#include <iostream>
#include <string>

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main () {

    std::string first[3][2] = {{"a", "A"}, {"b", "B"}, {"c", "C"}};
    std::string second[3][2];
    int n = 3;

    string_2d_copy(first, second, n);

    return 0;
}
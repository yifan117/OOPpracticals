#include <iostream>
#include <string>

void string_2d_copy(std::string first[][2], std::string second[][2], int n) {

    for (int c = 0; c < n; c++) {
        for (int r = 0; r < 2; r++) {
            second[c][r] = first[c][r];
        }
    }
}
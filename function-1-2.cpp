#include <iostream>
using namespace std;

int is_identity(int array[10][10]);
int is_identity(int array[10][10]) {

    int answer = 1;

    for (int i = 0; i < 10; i++) {
        if (array[i][i] == 1) {
            answer = 1;
        } else {
            answer = 0;
            break;
        }
    }
    for (int j = 1; j < 10; j++) {
        if (array[j][0] != 0) {
            answer = 0;
            break;
        }
    }

    for (int j = 2; j < 10; j++) {
        if (array[j][1] != 0) {
            answer = 0;
            break;
        }
    }

    for (int j = 3; j < 10; j++) {
        if (array[j][2] != 0) {
            answer = 0;
            break;
        }
    }

    for (int j = 4; j < 10; j++) {
        if (array[j][3] != 0) {
            answer = 0;
            break;
        }
    }

    for (int j = 5; j < 10; j++) {
        if (array[j][4] != 0) {
            answer = 0;
            break;
        }
    }

    for (int j = 6; j < 10; j++) {
        if (array[j][5] != 0) {
            answer = 0;
            break;
        }
    }

    for (int j = 7; j < 10; j++) {
        if (array[j][6] != 0) {
            answer = 0;
            break;
        }
    }

    for (int j = 8; j < 10; j++) {
        if (array[j][7] != 0) {
            answer = 0;
            break;
        }
    }

    for (int j = 9; j < 10; j++) {
        if (array[j][8] != 0) {
            answer = 0;
            break;
        }
    }

    if (array[0][1] != 0) {
        answer = 0;
    }

    for (int k = 0; k < 2; k++) {
        if (array[k][2] != 0) {
            answer = 0;
            break;
        }
    }

    for (int k = 0; k < 3; k++) {
        if (array[k][3] != 0) {
            answer = 0;
            break;
        }
    }

    for (int k = 0; k < 4; k++) {
        if (array[k][4] != 0) {
            answer = 0;
            break;
        }
    }

    for (int k = 0; k < 5; k++) {
        if (array[k][5] != 0) {
            answer = 0;
            break;
        }
    }

    for (int k = 0; k < 6; k++) {
        if (array[k][6] != 0) {
            answer = 0;
            break;
        }
    }

    for (int k = 0; k < 7; k++) {
        if (array[k][7] != 0) {
            answer = 0;
            break;
        }
    }

    for (int k = 0; k < 8; k++) {
        if (array[k][8] != 0) {
            answer = 0;
            break;
        }
    }

    for (int k = 0; k < 9; k++) {
        if (array[k][9] != 0) {
            answer = 0;
            break;
        }
    }

    return answer;
}


/*

   0 1 2 3 4 5 6 7 8 9
0  1 0 0 0 0 0 0 0 0 0
1  0 1 0 0 0 0 0 0 0 0
2  0 0 1 0 0 0 0 0 0 0
3  0 0 0 1 0 0 0 0 0 0
4  0 0 0 0 1 0 0 0 0 0
5  0 0 0 0 0 1 0 0 0 0
6  0 0 0 0 0 0 1 0 0 0
7  0 0 0 0 0 0 0 1 0 0
8  0 0 0 0 0 0 0 0 1 0
9  0 0 0 0 0 0 0 0 0 1


checking bottom half
(1 - 9, 0) first column

for (int i = 1; i < 10; i++) {
    array[i][0]

}
checking top   checking bottom
(0, 1) (2 - 9, 1)
(0 - 1, 2) (3 - 9, 2)
(0 - 2, 3) (4 - 9, 3)
(0 - 3, 4) (5 - 9, 4)
(0 - 4, 5) (6 - 9, 5)
(0 - 5, 6) (7 - 9, 6)
(0 - 6, 7) (8 - 9, 7)
(0 - 7, 8) (9, 8)
(0 - 8, 9)

0 0
1 1 
2 2
3 3
4 4
5 5
6 6
7 7
8 8
9 9

*/
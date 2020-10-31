#include <stdio.h>

// Iterative
int euclides(int num1, int num2) {
    int res;
    do {
        res = num1 % num2;
        num1 = num2;
        num2 = res;
    } while (res != 0);

    return num1;
}

int mdc(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return mdc(num2, num1 % num2);
}


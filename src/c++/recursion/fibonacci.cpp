#include <stdio.h>

int fib(int nth) {
    if (nth == 0 || nth == 1) {
        return nth;
    }
    return fib(nth - 2) + fib(nth - 1);
}

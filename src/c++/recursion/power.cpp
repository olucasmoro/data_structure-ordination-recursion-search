#include <stdio.h>

// Iterative
int power(int n, int expo) {
    int i, res;
    
    if (expo == 0) {
        return 1;
    } else {
        res = 1;
        for (i = 1; i <= expo; i++) {
            res = res * n;
        }
    }
    return res;
}

// Recursive
int power_recursive(int n, int expo) {
    if (expo == 0) return 1;
    
    return n * power_recursive(n, expo - 1);
}

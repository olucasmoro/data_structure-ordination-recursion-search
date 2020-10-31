#include <stdio.h>
  
int factorial(int n) {
    int j, fat;
    fat = 1;

    for (j = 1; j <= n; j++) {
        fat = fat * j;
    }

    return fat;
}

// Recursive
int factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

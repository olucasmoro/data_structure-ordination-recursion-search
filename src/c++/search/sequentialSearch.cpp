#include <stdio.h>
#define MAX 100

int sequential_search(int n, int v[MAX], int x) {

    int k;

    for (k = n -1; k >= 0 && v[k] != x; k--)
        ;
    return k;
}

// Recursive
int sequential_search_recursive(int n, int v[MAX], int x) {

    if (n==0) {
        return -1;
    } else if (x == v[n -1]) {
        return n - 1;
    } else {
        return sequential_search_recursive(n - 1, v, x);
    }
}
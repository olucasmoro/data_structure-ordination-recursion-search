#include <stdio.h>
#define MAX 100

int binary_search(int n, int v[MAX], int x) {

    int left, right, middle;

    left = -1;
    right = n;
    while (left < right - 1) {
        middle = (left + right) / 2;
        if (v[middle] < x) {
            left = middle;
        } else {
            right = middle;
        }
    }
    return right;
}

// Recursive
int binary_search_recursive(int left, int right, int v[MAX], int x) {

    int middle;

    if (left == right - 1) {
        return right;
    } else {
        middle = (left + right) / 2;
        if (v[middle] < x) {
            return binary_search_recursive(middle, right, v, x);
        }else {
            return binary_search_recursive(left, middle, v, x);
        }
    }
}

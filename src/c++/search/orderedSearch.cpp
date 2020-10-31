#include <stdio.h>
#define MAX 100

int ordered_search(int n, int v[MAX], int x) {

    int k;

    for (k = 0; k < n && v[k] < x; k++)
        ;

    return k;
}
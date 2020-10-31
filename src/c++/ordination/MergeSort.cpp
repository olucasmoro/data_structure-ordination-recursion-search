#include <stdio.h>
#define MAX 100

void intercala(int p, int q, int r, int v[MAX]) {
    
    int i, j, k, w[MAX];
    i = p; 
    j = q; 
    k = 0;

    while (i < q && j < r) {
        if (v[i] <= v[j]) {
            w[k] = v[i];
            i++;
        } else {
            w[k] = v[j];
            j++;
        }
        k++;
    }
    
    while(i < q) {
        w[k] = v[i];
        i++;
        k++;
    }

    while(j < r) {
        w[k] = v[j];
        j++;
        k++;
    }

    for(int i = p; i < r; i++) {
        v[i] = w[i - p];
    }

}

void mergeSort(int p, int r, int v[MAX]) {
    
    if (p < r - 1) {
        int q = (p + r) / 2;
        mergeSort(p, q, v);
        mergeSort(q, r, v);
        intercala(p, q, r, v);
    }
}
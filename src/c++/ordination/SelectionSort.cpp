#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void exchange(int& i, int& min) {
    int aux = i;
    i = min;
    min = aux;
}

void selection(int num, int vet[MAX]) {
    
    for (int i = 0; i < num - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < num; ++j) {
            if (vet[j] < vet[min]) {
                min = j;
            }
        }
        exchange(vet[i], vet[min]);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void exchange(int& i, int& min) {
    int aux = i;
    i = min;
    min = aux;
}

void bubbleSort(int n, int v[MAX]) 
{    
    for (int i = n - 1; i > 0; i--) 
    {
        for (int j = 0; j < i; j++) 
        {
            if (v[j] > v[j+1])
                exchange(v[j], v[j+1]);
        }
    }
}

void bubbleSort02(int n, int v[MAX]) 
{    
    for (int i = n - 1; i > 0; i--) 
    {
        bool trocou = false;
        for (int j = 0; j < i; j++) 
        {
            if (v[j] > v[j+1]) {
                trocou = true;
                exchange(v[j], v[j+1]);
            }
        }
        if (!trocou) {
            i = -1;
        }
    }
}
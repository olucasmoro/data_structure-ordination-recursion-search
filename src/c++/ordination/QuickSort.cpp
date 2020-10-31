#include <stdio.h>
#define MAX 100

void exchange(int v[MAX], int p, int r) {
    int aux;

    aux = v[p];
    v[p] = v[r];
    v[r] = aux;
}

int separa(int p, int r, int v[MAX]) {
    int pivot, i, j;

    pivot = v[p];
    i = p - 1;
    j = r + 1;

    while (true) {

        do {
            --j;
        } while(v[j] > pivot);

        do {
            i++;
        } while(v[i] < pivot);

        if (i < j) {
            exchange(v, i, j);
        } else {
            return j;
        }
    }
}

int partition(int p, int r, int v[MAX]) {
	int x = v[r];
	
	int i = p - 1;
	
	for (int j = p; j < r; j++) {
        if (v[j] <= x) {
			i++;
			exchange(v, v[j], v[i]);
		}
	}
	
	exchange(v, v[i + 1], v[r]);
	return i + 1;
}

void quickSort(int p, int r, int v[MAX])
{
	if (p < r)
	{
		int q = partition(p, r, v);
		
		quickSort(p, q - 1, v);
		quickSort(q + 1, r, v);
	}
}
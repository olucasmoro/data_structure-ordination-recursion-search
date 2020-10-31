package ordination;

public class MergeSort {

    public static void mergeSort(int start, int end, int[] array) {

        int kinda;

        if (start < end - 1) {
            kinda = (start + end) / 2;
            mergeSort(start, kinda, array);
            mergeSort(kinda, end, array);
            merge(start, kinda, end, array);
        }
    }

    public static void merge(int p, int q, int r, int v[]) {
        int i, j, k;
        int[] w = new int[r];
        i = p;
        j = q;
        k = 0;

        while (i < q && j < r) {
            if (v[i] < v[j]) {
                w[k] = v[i];
                i++;
            } else {
                w[k] = v[j];
                j++;
            }
            k++;
        }
        while (i < q) {
            w[k] = v[i];
            i++;
            k++;
        }
        while (j < r) {
            w[k] = v[j];
            j++;
            k++;
        }
        for (i = p; i < r; i++) {
            v[i] = w[i - p];
        }
    }

}

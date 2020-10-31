package ordination;

public class InsertionSort {

    public static void insertion(int arraySize, int[] array) {
        int i, j, k;

        for (i = 1; i < arraySize; i++) {
            k = array[i];
            for (j = i - 1; j >= 0 && array[j] > k; j--) {
                array[j + 1] = array[j];
            }
            array[j + 1] = k;
        }
    }

    // Recursive
    public static void insertionRecursive(int n, int array[]) {

        if (n <= 1) {
            return;
        }

        insertionRecursive(n - 1, array);

        int last = array[n - 1];
        int i = n - 2;

        while (i >= 0 && array[i] > last) {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = last;
    }
}

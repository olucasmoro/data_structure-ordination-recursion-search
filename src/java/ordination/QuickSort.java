package ordination;

public class QuickSort {

    public static void exchange(int v[], int start, int end) {
        int aux;

        aux = v[start];
        v[start] = v[end];
        v[end] = aux;
    }

    public static int separate(int v[], int start, int end) {
        int pivot, homePosition, finalPosition;

        pivot = v[start];
        homePosition = start - 1;
        finalPosition = end + 1;

        while (true) {
            do {
                --finalPosition;
            } while (v[finalPosition] > pivot);

            do {
                homePosition++;
            } while (v[homePosition] < pivot);

            if (homePosition < finalPosition) {
                exchange(v, homePosition, finalPosition);
            } else {
                return finalPosition;
            }
        }
    }

    public static void quickSort(int start, int end, int v[]) {

        while (start < end) {
            int q = separate(v, start, end);
            quickSort(start, q, v);
            start = q + 1;
        }
    }

    public static void quickSort2(int start, int end, int v[]) {

        int kinda;

        if (start < end) {
            kinda = separate(v, start, end);
            quickSort2(start, kinda, v);
            quickSort2(kinda + 1, end, v);
        }
    }

}

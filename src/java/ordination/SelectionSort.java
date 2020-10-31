package ordination;

public class SelectionSort {

    private static void exchange(int[] array, int i, int min) {
        int aux = array[i];
        array[i] = array[min];
        array[min] = aux;
    }

    private static void selection(int[] array) {
        int arraySize = array.length;
        for (int i = 0; i < arraySize - 1; ++i) {
            int min = i;
            for (int j = i + 1; j < arraySize; ++j) {
                if (array[j] < array[min]) {
                    min = j;
                }
            }
            exchange(array, i, min);
        }
    }

    // Recursive
    public static void selectionRecursive(int[] array, int firstPosition, int latestPosition) {

        int aux, temp;

        if (firstPosition < latestPosition) {
            aux = firstPosition;
            for (int i = firstPosition + 1; i <= latestPosition; i++) {
                if (array[i] < array[aux]) {
                    aux = i;
                }
            }

            temp = array[firstPosition];
            array[firstPosition] = array[aux];
            array[aux] = temp;
            selectionRecursive(array, (firstPosition + 1), latestPosition);
        }
    }

}

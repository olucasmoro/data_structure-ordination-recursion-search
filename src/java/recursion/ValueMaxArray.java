package recursion;

public class ValueMaxArray {

    public static int valueMax(int[] array) {
        return valueMax(array, array.length);
    }

    private static int valueMax(int[] array, int arraySize) {
        if (arraySize == 1) // Base case
            return array[0];

        int max = valueMax(array, arraySize - 1); // Recursive

        if (max > array[arraySize - 1])
            return max;

        return array[arraySize - 1];
    }

}

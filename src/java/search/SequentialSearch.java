package search;

public class SequentialSearch {

    public static final int WILDCARD_VALUE = -1;

    public static int sequentialSearch(int[] array, int value) {

        for (int i = 0; i < array.length; i++) {
            if (value == array[i]) {
                return i;
            }
        }
        return WILDCARD_VALUE;
    }
}

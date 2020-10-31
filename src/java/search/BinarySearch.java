package search;

public class BinarySearch {

    public static int binarySearch(int[] array, int value) {
        int left = -1, right = array.length;

        while (left < right - 1) {
            int kinda = (left + right) / 2;
            if (array[kinda] < value) {
                left = kinda;
            } else {
                right = kinda;
            }
        }
        return right;
    }
    
}

package search;

/*
 *  The method returns the position that the entered value is and
 *  if it does not exist informs which position it should be.
 */
public class SimpleSearch {

    public static int search(int[] array, int value) {
        return search(array, 0, array.length - 1, value);
    }

    public static int search(int[] array, int start, int end, int value) {

        if (array[start] > array[end]) {
            return -1;
        }
        if (array[start] == array[end]) {
            return -1;
        }

        int kinda = (start + end) / 2;
        if (array[kinda] > value) {
            return search(array, start, (kinda - 1), value);
        } else if (array[kinda] < value) {
            return search(array, (kinda + 1), end, value);
        }
        return kinda;
    }

}

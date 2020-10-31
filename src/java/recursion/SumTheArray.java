package recursion;

public class SumTheArray {

    public static int sum(int[] array) {
        return sum(array, array.length);
    }

    public static int sum(int[] array, int size) {
        if (size == 1) {
            return array[0];
        }
        return sum(array, size - 1) + array[size - 1];
    }
    
}

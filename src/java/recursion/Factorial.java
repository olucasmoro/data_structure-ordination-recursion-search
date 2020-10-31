package recursion;

public class Factorial {

    // Not recursive
    public static int factorialNotRecursive(int number) {
        int f = 1;
        for (; number > 1; --number) {
            f *= number;
        }
        return f;
    }

    // Recursive
    public static int factorialRecursive(int number) {
        if (number == 0)
            return 1;
        return (number * factorialRecursive(number - 1));
    }

}

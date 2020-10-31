package recursion;

public class Horner {

    public static final int VALUE_A = 5;

    // Not Recursive
    public static double hornerNotRecursive(int n, int x) {
        double sum = 0;
        for (int i = 0; i < n; i++) {

            int power = 1;
            for (int j = 0; j < 1; j++) {
                power *= x;
            }

            sum += VALUE_A * power;
        }
        return sum;
    }

    // Recursive
    public static double hornerRecursive(int n, int x) {
        double sumHorner = 0;
        if (n == 1) {
            return VALUE_A;
        }

        sumHorner += VALUE_A + hornerRecursive(n - 1, x) * x;
        return sumHorner;
    }

}

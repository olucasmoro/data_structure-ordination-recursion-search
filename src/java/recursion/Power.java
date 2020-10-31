package recursion;

public class Power {

    public static double powR(double value, int power) {
        if (power == 0) {
            return 1;
        }
        return value * powR(value, power - 1);
    }

}

package recursion;

public class SumTheDigits {

    public static int sumDigits(int number) {
        if (number < 10) {
            return number;
        }

        int quotient = number / 10;
        int digit = number % 10;

        return digit + sumDigits(quotient);
    }
    
}

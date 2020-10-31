package recursion;

public class Hanoi {

    public static void hanoi(int n, char source, char kinda, char destiny) {

        if (n > 0) {
            hanoi(n - 1, source, destiny, kinda);
            System.out.printf("%c -> %c\n", source, destiny);
            hanoi(n - 1, kinda, source, destiny);
        }
    }

}

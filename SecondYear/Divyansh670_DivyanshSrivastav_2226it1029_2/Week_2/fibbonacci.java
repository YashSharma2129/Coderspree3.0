import java.util.*;
public class fibbonacci {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt(); 
            generateFibonacci(n);
        }
    }

    public static void generateFibonacci(int n) {
        long a = 0, b = 1;
        for (int i = 0; i < n; i++) {
            System.out.print(a + " ");
            long temp = a;
            a = b;
            b = temp + b;
        }
    }
}

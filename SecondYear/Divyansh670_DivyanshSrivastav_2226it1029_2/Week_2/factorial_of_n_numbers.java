import java.util.Scanner;
public class factorial_of_n_numbers {

    
    public static long factorial(int n) {
        if (n <= 1) {
            return 1;
        }
        long result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }

    
    public static long[] findUniqueFactorialNumbers(int N) {
        int[] factorials = new int[N]; 
        int size = 0;

        for (int i = 0; ; i++) {
            long fact = factorial(i);
            if (fact <= N) {
                factorials[size] = (int) fact;
                size++;
            } else {
                break;
            }
        }

        
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (factorials[i] == factorials[j]) {
                    factorials[j] = -1;
                }
            }
        }

        int uniqueSize = 0;
        for (int i = 0; i < size; i++) {
            if (factorials[i] != -1) {
                uniqueSize++;
            }
        }

        long[] uniqueFactorials = new long[uniqueSize];
        int idx = 0;
        for (int i = 0; i < size; i++) {
            if (factorials[i] != -1) {
                uniqueFactorials[idx] = factorials[i];
                idx++;
            }
        }

        
        for (int i = 0; i < uniqueSize; i++) {
            for (int j = i + 1; j < uniqueSize; j++) {
                if (uniqueFactorials[i] > uniqueFactorials[j]) {
                    long temp = uniqueFactorials[i];
                    uniqueFactorials[i] = uniqueFactorials[j];
                    uniqueFactorials[j] = temp;
                }
            }
        }

        return uniqueFactorials;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int N = sc.nextInt();
            long[] sortedUniqueFactorials = findUniqueFactorialNumbers(N);
            
            for (long factorial : sortedUniqueFactorials) {
                System.out.print(factorial + " ");
            }
        }
    }
}

public class Fibonacci {
    public static int[] generateFibonacciNumbers(int n) {
        // Write your code here.
        if (n <= 0) {
            return new int[0]; 
        }

        int[] fibonacciSequence = new int[n];
        fibonacciSequence[0] = 0; 

        if (n > 1) {
            fibonacciSequence[1] = 1; 
        }

        for (int i = 2; i < n; i++) {
            fibonacciSequence[i] = fibonacciSequence[i - 1] + fibonacciSequence[i - 2];
        }

        return fibonacciSequence;
    }
}
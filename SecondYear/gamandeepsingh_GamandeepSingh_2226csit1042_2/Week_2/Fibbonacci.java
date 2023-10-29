public class Solution {
    public static int[] generateFibonacciNumbers(int n) {
        // Write your code here.
        int[] fib = new int[n];
        fib[0]=0;
        if(n==1){
            return fib; 
        }
        fib[1]=1;
        for(int i=2;i<n;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        return fib;

    }
}
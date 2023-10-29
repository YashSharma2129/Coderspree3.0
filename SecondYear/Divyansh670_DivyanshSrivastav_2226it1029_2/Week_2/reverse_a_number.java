import java.util.Scanner;

public class reverse_a_number {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();

            if (n <= 0) {
                
                return;
            }

            long[] unsignedIntegers = new long[n];
            long[] reversedIntegers = new long[n];

            for (int i = 0; i < n; i++) {
                
                unsignedIntegers[i] = sc.nextLong();

                if (unsignedIntegers[i] < 0) {
                    
                    return;
                }

                reversedIntegers[i] = reverseBits(unsignedIntegers[i]);
            }

            sc.close();

            
            

            
            for (int i = 0; i < n; i++) {
                System.out.println(reversedIntegers[i]);
            }
        }
    }

    public static long reverseBits(long n) {
        long result = 0;
        for (int i = 0; i < 32; i++) {
            result = (result << 1) | (n & 1);
            n = n >> 1;
        }
        return result;
    }
}

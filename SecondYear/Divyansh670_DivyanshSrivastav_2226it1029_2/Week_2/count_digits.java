import java.util.Scanner;

public class count_digits {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.close();

        int originalN = n; 
        int count = 0; 

        while (n > 0) {
            int digit = n % 10; 
            if (digit != 0 && originalN % digit == 0) {
                count++; 
            }
            n /= 10; 
        }

        System.out.println(count);
    }
}

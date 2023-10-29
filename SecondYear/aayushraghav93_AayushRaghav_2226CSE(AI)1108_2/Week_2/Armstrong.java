import java.util.Scanner;

public class Armstrong {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int num = scanner.nextInt();
        
        if (isArmstrong(num)) {
			System.out.println(true);
           
        } else {
            System.out.println(false);
        }
    }

    public static boolean isArmstrong(int number) {
        int originalNumber, remainder, n = 0;
        double result = 0;

        originalNumber = number;

        // Count the number of digits
        int numDigits = countDigits(number);

        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += Math.pow(remainder, numDigits);
            originalNumber /= 10;
        }

        // Check if the result is equal to the original number
        return (int) result == number;
    }

    public static int countDigits(int number) {
        int count = 0;
        while (number != 0) {
            number /= 10;
            count++;
        }
        return count;
    }
}

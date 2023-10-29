import java.util.*;
public class pattern_6 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        
        for (int i = 1; i <= n; i++) {
            // Print spaces for alignment
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

            // Print asterisks for the current row
            for (int k = 1; k <= 2 * i - 1; k++) {
                System.out.print("*");
            }

            // Move to the next line after each row
            System.out.println();
        }
    }
}

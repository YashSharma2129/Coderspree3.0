import java.util.*;
public class pow {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            double x = sc.nextDouble(); 
            int n = sc.nextInt();     
            double result = calculatePower(x, n);
            System.out.println(result+"00000");
        }
    }

    public static double calculatePower(double x, int n) {
        return Math.pow(x, n);
    }
}

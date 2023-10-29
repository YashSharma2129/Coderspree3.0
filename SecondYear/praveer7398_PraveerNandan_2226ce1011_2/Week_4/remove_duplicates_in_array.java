
import java.util.Scanner;

public class remove_duplicates_in_array {

    public static int removeDuplicates(int[] arr) {
        int n = arr.length;

        if (n <= 1) {
            return n;
        }

        int uniqueCount = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                arr[uniqueCount] = arr[i];
                uniqueCount++;
            }
        }

        return uniqueCount;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        int n = scanner.nextInt();

        int[] arr = new int[n];
        

        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        int newLength = removeDuplicates(arr);
        System.out.println("New array length: " + newLength);

        scanner.close();
    }
}

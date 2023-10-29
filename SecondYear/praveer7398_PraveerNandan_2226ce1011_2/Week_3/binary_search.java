import java.util.Arrays;
import java.util.Scanner;

public class binary_search {
    public static int binarySearch(int[] arr, int num) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == num) {
                return mid; 
            } else if (arr[mid] < num) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1; 
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        int n = scanner.nextInt();
        int[] arr = new int[n];

        
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        Arrays.sort(arr); 

        
        int numToFind = scanner.nextInt();

        int result = binarySearch(arr, numToFind);

        if (result != -1) {
            System.out.println(result);
        } else {
            System.out.println("-1");
        }

        scanner.close();
    }
}

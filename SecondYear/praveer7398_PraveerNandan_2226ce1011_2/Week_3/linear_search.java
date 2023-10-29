import java.util.Scanner;

public class linear_search {
    public static int findIndex(int[] arr, int num) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == num) {
                return i; 
            }
        }
        return -1; 
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        int n = scanner.nextInt();
        int[] arr = new int[n];
        
        int numToFind = scanner.nextInt();

        
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

       

        int result = findIndex(arr, numToFind);

        if (result != -1) {
            System.out.println(result);
        } else {
            System.out.println("-1");
        }

        scanner.close();
    }
}

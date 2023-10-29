import java.util.Scanner;

public class selection_sort {
    public static void selectionSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        int n = scanner.nextInt();
        int[] arr = new int[n];

        
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        

        selectionSort(arr);

        
        for (int num : arr) {
            System.out.print(num + " ");
        }

        scanner.close();
    }
}

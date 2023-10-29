import java.util.Scanner;

public class Merge_two_sorted_arrays_without_using_Extra_space {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the first array (arr1): ");
        int n = scanner.nextInt();
        long[] arr1 = new long[n];
        System.out.println("Enter the elements of the first array in non-decreasing order:");
        for (int i = 0; i < n; i++) {
            arr1[i] = scanner.nextLong();
        }

        System.out.print("Enter the size of the second array (arr2): ");
        int m = scanner.nextInt();
        long[] arr2 = new long[m];
        System.out.println("Enter the elements of the second array in non-decreasing order:");
        for (int i = 0; i < m; i++) {
            arr2[i] = scanner.nextLong();
        }
        scanner.close();

        mergeAndSort(arr1, arr2, n, m);

        for (long num : arr1) {
            System.out.print(num + " ");
        }
        System.out.println();

        for (long num : arr2) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    static void mergeAndSort(long[] arr1, long[] arr2, int n, int m) {
        int i = n - 1;
        int j = 0;

        while (i >= 0 && j < m) {
            if (arr1[i] >= arr2[j]) {
                long temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
                i--;
                j++;
            } else {
                break;
            }
        }

        for (int k = 0; k < n - 1; k++) {
            if (arr1[k] > arr1[k + 1]) {
                long temp = arr1[k];
                arr1[k] = arr1[k + 1];
                arr1[k + 1] = temp;
                k = -1;
            }
        }

        for (int k = 0; k < m - 1; k++) {
            if (arr2[k] > arr2[k + 1]) {
                long temp = arr2[k];
                arr2[k] = arr2[k + 1];
                arr2[k + 1] = temp;
                k = -1; 
            }
        }
    }
}

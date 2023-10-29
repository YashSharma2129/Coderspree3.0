import java.util.Scanner;

public class Move_all_negative_element_at_end {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        scanner.close();

        rearrangeArray(arr, n);

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    static void rearrangeArray(int[] arr, int n) {
        int negativeIndex = n - 1;

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] < 0) {
                int temp = arr[i];
                arr[i] = arr[negativeIndex];
                arr[negativeIndex] = temp;
                negativeIndex--;
            }
        }
    }
}

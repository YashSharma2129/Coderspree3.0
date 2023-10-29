import java.util.Scanner;

public class left_rotate_an_array_by_1 {
    public static int[] rotateLeft(int[] arr) {
        int n = arr.length;
        if (n <= 1) {
            return arr; 
        }

        int temp = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;

        return arr;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        int[] rotatedArray = rotateLeft(arr);


        System.out.println("Rotated array: ");
        for (int num : rotatedArray) {
            System.out.print(num + " ");
        }
        System.out.println();

        scanner.close();
    }
}

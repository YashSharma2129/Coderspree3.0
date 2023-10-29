import java.util.Scanner;

public class first_missing_positive {
    public static int findSmallestMissingPositive(int[] arr) {
        int n = arr.length;
        int nonPositiveIndex = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= 0) {
                int temp = arr[i];
                arr[i] = arr[nonPositiveIndex];
                arr[nonPositiveIndex] = temp;
                nonPositiveIndex++;
            }
        }

        for (int i = nonPositiveIndex; i < n; i++) {
            int num = Math.abs(arr[i]);
            if (num <= n - nonPositiveIndex) {
                arr[nonPositiveIndex + num - 1] = -Math.abs(arr[nonPositiveIndex + num - 1]);
            }
        }

        for (int i = nonPositiveIndex; i < n; i++) {
            if (arr[i] > 0) {
                return i - nonPositiveIndex + 1;
            }
        }

        return n - nonPositiveIndex + 1;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        int numTests = scanner.nextInt();
        scanner.nextLine();

        int[][] testCases = new int[numTests][];

        for (int i = 0; i < numTests; i++) {
            int size = scanner.nextInt();
            scanner.nextLine();
            int[] arr = new int[size];
            String[] input = scanner.nextLine().split(" ");
            for (int j = 0; j < size; j++) {
                arr[j] = Integer.parseInt(input[j]);
            }
            testCases[i] = arr;
        }

        for (int i = 0; i < numTests; i++) {
            int result = findSmallestMissingPositive(testCases[i]);
            System.out.println(result);
        }

        scanner.close();
    }
}

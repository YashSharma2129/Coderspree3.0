import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class second_largest_element {

    public static int findSecondLargest(int[] arr) {
        if (arr.length < 2) {
            return -1;
        }

        int largest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;

        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num < largest) {
                secondLargest = num;
            }
        }

        if (secondLargest == Integer.MIN_VALUE) {
            return -1;
        }

        return secondLargest;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int numTests = scanner.nextInt();
        scanner.nextLine();

        List<Integer> results = new ArrayList<>();

        for (int t = 1; t <= numTests; t++) {
            int n = scanner.nextInt();
            int[] arr = new int[n];
            scanner.nextLine();

            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }

            int secondLargest = findSecondLargest(arr);
            results.add(secondLargest);
        }

        for (int t = 1; t <= numTests; t++) {
            System.out.println(results.get(t - 1));
        }

        scanner.close();
    }
}

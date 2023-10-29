import java.util.Scanner;

class sorting_three_groups {
    public int minimumOperations(int[] v) {
        int n = v.length;
        int[] dp = new int[n];

        for (int i = 0; i < n; i++) {
            dp[i] = 1;
        }

        int m = 1;

        for (int i = 1; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (v[i] >= v[j]) {
                    dp[i] = Math.max(dp[i], 1 + dp[j]);
                    m = Math.max(m, dp[i]);
                }
            }
        }

        return n - m;
    }

    public static void main(String[] args) {
        sorting_three_groups solution = new sorting_three_groups();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = scanner.nextInt();
        int[] v = new int[n];

        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            v[i] = scanner.nextInt();
        }

        int minOps = solution.minimumOperations(v);
        System.out.println("Minimum Operations: " + minOps);

        scanner.close();
    }
}

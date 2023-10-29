public class Solution {
    public static int traffic(int n, int m, int []vehicle) {
        // Write your code here.
        int sum = 0;
    int c = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j < n && c <= m) {
            if (vehicle[j] == 0) {
                c++;
                if (c > m) {
                    c--;
                    break;
                }
            }
            j++;
        }
       sum = Math.max(sum, j - i);
        if (vehicle[i] == 0) {
            c--;
        }
    }

    return sum;
    }
}

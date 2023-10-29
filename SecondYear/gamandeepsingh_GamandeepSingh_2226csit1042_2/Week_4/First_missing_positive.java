import java.util.*;
import java.util.stream.IntStream;
import java.io.*;

public class Solution {
    public static int firstMissing(int[] arr, int n) {
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= 0) {
                int temp = arr[i];
                arr[i] = arr[index];
                arr[index] = temp;
                index++;
            }
        }

        for (int i = index; i < n; i++) {
            int num = Math.abs(arr[i]);
            if (num <= n - index) {
                arr[index + num - 1] = -Math.abs(arr[index + num - 1]);
            }
        }

        for (int i = index; i < n; i++) {
            if (arr[i] > 0) {
                return i - index + 1;
            }
        }

        return n - index + 1;
    }
}

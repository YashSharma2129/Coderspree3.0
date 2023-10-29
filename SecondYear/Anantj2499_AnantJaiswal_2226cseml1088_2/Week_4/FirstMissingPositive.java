import java.util.* ;
import java.io.*;
public class FirstMissingPositive {
    public static int firstMissing(int[] arr, int n) {
        // Write your code here.

        Arrays.sort(arr);
        int count = 1;
        for (int i = 0; i < n; i++) {
            if(count>arr[i]) {
                continue;
            }
            else if(count==arr[i])
                count++;
            else
                break;
        }
        return count;
    }
}

import java.util.* ;
import java.io.*; 
public class Solution {
	public static int findSecondLargest(int n, int[] arr) {
		if (arr.length < 2) {
            return -1;
        }
        int max1 = Integer.MIN_VALUE;
        int max2 = Integer.MIN_VALUE;

        for (int i : arr) {
            if (i > max1) {
                max2 = max1;
                max1 = i;
            } else if (i > max2 && i < max1) {
                max2 = i;
            }
        }

        if (max2 == Integer.MIN_VALUE) {
            return -1;
        }

        return max2;
	}
}
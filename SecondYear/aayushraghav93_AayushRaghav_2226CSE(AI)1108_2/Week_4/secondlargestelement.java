import java.util.* ;
import java.io.*; 
public class Solution {
	public static int findSecondLargest(int n, int[] arr) {
		// Write your code here.
		 if (arr.length < 2) {
            return -1; 
        }
        int a = Integer.MIN_VALUE;
        int second = Integer.MIN_VALUE;
        
        for (int num : arr) {
            if (num > a) {
                second = a;
                a = num;
            } else if (num > second && num != a) {
                second= num;
            }
        }
        
        if (second == Integer.MIN_VALUE) {
            return -1;
        }
        
        return second;
	}
}

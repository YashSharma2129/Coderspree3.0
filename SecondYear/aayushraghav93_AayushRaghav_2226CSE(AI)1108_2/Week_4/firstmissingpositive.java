import java.util.* ;
import java.io.*; 
public class Solution {
	public static int firstMissing(int[] arr, int n) {
		// Write your code here.
		HashSet<Integer> positiveSet = new HashSet<>();
        for (int num : arr) {
            if (num > 0) {
                positiveSet.add(num);
            }
		}
        int missing = 1;
        while (positiveSet.contains(missing)) {
            missing++;
        }
        return missing;		
	}
}


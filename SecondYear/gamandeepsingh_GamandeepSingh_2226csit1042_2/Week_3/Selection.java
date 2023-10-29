import java.util.* ;
import java.io.*; 
public class Solution {
	public static void selectionSort(int arr[], int n) {
		// Write your code here.
		for (int i = 0; i < n-1; i++) {
            int min = i;
            for (int j = i+1; j < n; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
	}
}
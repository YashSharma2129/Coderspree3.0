import java.util.* ;
public class SecondLargest {
    public static int findSecondLargest(int n, int[] arr) {
        // Write your code here.
        Arrays.sort(arr);
        for(int i=0; i<n-1; i++){
            if(arr[n-i-1] != arr[n-i-2]){
                return arr[n-i-2];
            }
        }  return -1;
    }
}
import java.util.*;
public class LinearSearch {
    public static int linearSearch(int n, int num, int []arr){
        // Write your code here.
        int pos = -1;
        for(int i =0; i<n; i++){
            if(num == arr[i]){
                pos =i;
                break;
            }
        }
        return pos;
    }
}
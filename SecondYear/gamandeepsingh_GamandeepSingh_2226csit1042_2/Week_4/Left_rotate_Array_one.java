import java.util.* ;
import java.io.*; 


public class Solution {

    static int[] rotateArray(int[] arr, int n) {
        int ar[] = new int[n];
        ar[ar.length-1] = arr[0] ;
        for(int i = 1; i< arr.length;i++){
            ar[i-1] = arr[i];
        }
        return ar;    

    }
}
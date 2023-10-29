import java.util.* ;
import java.io.*;

public class InsertionSort {

    public static void insertionSort(int n , int[] arr) {
        // Write your code here.
        for(int i=1; i<n;i++){
            int j = i-1;
            int key = arr[i];
            while(j>=0&&arr[j]>key){
                arr[j+1]= arr[j];
                j=j-1;
            }
            arr[j+1]=key;
        }

    }
}

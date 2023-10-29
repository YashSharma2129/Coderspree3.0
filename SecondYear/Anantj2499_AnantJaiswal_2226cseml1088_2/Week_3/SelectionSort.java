import java.util.* ;
import java.io.*;
public class SelectionSort {
    public static void selectionSort(int arr[], int n) {
        // Write your code here.
        int index =0;
        for(int i=0;i<n-1;i++){
            index =i;
            for(int j=i+1; j<n;j++){
                if(arr[j]<arr[index])
                    index =j;
            }
            if(index!=i){
                int temp = arr[i];
                arr[i]= arr[index];
                arr[index]= temp;
            }
        }
    }
}
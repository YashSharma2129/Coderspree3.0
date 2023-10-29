
public class BubbleSort {
    public static void bubbleSort(int[] arr, int n) {
        //Your code goes here
        boolean swapped;
        for (int i=0; i<n-1;i++){
            swapped = false;
            for(int j=0; j<n-i-1; j++){
                if(arr[j+1]<arr[j]){
                    swapped = true;
                    int temp = arr[j];
                    arr[j]= arr[j+1];
                    arr[j+1]= temp;
                }
            }
            if(!swapped)
                break;
        }
    }
}
public class MergeSort {

    public static void mergeSort(int[] arr, int l, int r){
        // Write your code here
        if(r-l+1>=2){
            int m = (r+l+1)/2;
            mergeSort(arr,l,m-1);
            mergeSort(arr,m,r);
            merge(arr, l, m, r+1);
        }
    }
    public static void merge(int[] arr, int l, int m, int r){
        if(arr[m-1]>arr[m]){
            int i = l;
            int j = m;
            int t = 0;
            int temp[];
            for(temp = new int[r-l]; i<m&&j<r; temp[t++]=arr[i]<arr[j]?arr[i++]:arr[j++]);
            System.arraycopy(arr, i, arr, l+t, m-i);
            System.arraycopy(temp, 0, arr, l, t);
        }
    }
}

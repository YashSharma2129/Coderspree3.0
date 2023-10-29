import java.util.ArrayList;

public class mergesort {

    public static void ms(int[] arr,int low,int high){

        if(low>=high) return;

        int mid=(low+high)/2;

        ms(arr,low,mid);

        ms(arr,mid+1,high);

        merge(arr,low,mid,high);

    }

    public static void merge(int[] arr,int low,int mid,int high){

        int left=low;

        int right=mid+1;

 

        ArrayList<Integer> temp=new ArrayList<>();

 

        while(left<=mid && right<=high){

            if(arr[left]<arr[right]){

                temp.add(arr[left]);

                left++;

            }

            else{

                temp.add(arr[right]);

                right++;

            }

        }

        while(left<=mid){

            temp.add(arr[left]);

            left++;

        }

        while(right<=high){

            temp.add(arr[right]);

            right++;

        }

 

        for(int i=low;i<=high;i++){

            arr[i]=temp.get(i-low);

        }

 

    }

    public static void mergeSort(int[] arr, int l, int r){

        // Write your code here

        ms(arr,l,r);

    }

}